#include "Main.h"

#include <chrono>
#include <codecvt>
#include <locale>
#include <thread>
#include <string>
#include <vector>
#include <cctype>
#include <mach-o/dyld.h>
#include <mach/mach.h>
#include <mach-o/loader.h>
#include <mach-o/nlist.h>
#include <mach-o/getsect.h>

#include <cstdio>
#include <algorithm>
#include <string>
#include <unistd.h>
#include <arm_neon.h>
#include <sys/mman.h>
#include <vector>
#include <memory>
#include <cctype>
#include <cstring>
#include <format>

#import <objc/runtime.h>
#import <objc/message.h>

#include <libkern/OSCacheControl.h>

#include "Utilities/CGuardMemory/fishhook.h"
#include "Utilities/CGuardMemory/CGPMemory.h"
#include "Utilities/VMTHook.h"

void (*ClientTravel)(UObject* Engine, UObject* World, const wchar_t* ServerIP, int TravelType) = nullptr;
void (*ConstructFServerText)(FServerText* FServerTextPointer) = nullptr;
void (*SetServerLoginPassword)(UObject* ShooterLocalPlayer, FString* EnteredPassword, FString* ForIP, UObject* Menu) = nullptr;

IMemoryUtils::DyldInfo ShooterGame;
UObject* GetGameViewportClient()
{
    const IMemoryUtils* Mem = IMemoryUtils::Get();
    static UObject* GameViewportClient = nullptr;
    if (GameViewportClient != nullptr && !Mem->IsBadReadPtr(GameViewportClient))
        return GameViewportClient;
    
    for (UObject* Obj : UObject::GetObjectArray())
    {
        if (!Obj || Mem->IsBadReadPtr(Obj) || Obj->IsDefaultObject())
            continue;
        
        if (Obj->IsA(StaticClasses::ShooterGameViewportClient()))
        {
            GameViewportClient = Obj;
            break;
        }
         
    }
    return GameViewportClient;
}

UObject* GetWorld()
{
    const IMemoryUtils* Mem = IMemoryUtils::Get();
    UObject* ViewportClient = GetGameViewportClient();
    if (!ViewportClient || Mem->IsBadReadPtr(ViewportClient))
        return nullptr;
    
    UObject** WorldPtr = ViewportClient->GetMember<UObject*, "World">();
    if (!WorldPtr || Mem->IsBadReadPtr(WorldPtr)) return nullptr;
    return *WorldPtr;
}

UObject* GetEngine()
{
    const IMemoryUtils* Mem = IMemoryUtils::Get();
    static UObject* Engine = nullptr;
    if (Engine != nullptr && !Mem->IsBadReadPtr(Engine))
        return Engine;
    
    for (UObject* Obj : UObject::GetObjectArray())
    {
        if (!Obj || Mem->IsBadReadPtr(Obj) || Obj->IsDefaultObject())
            continue;
        
        if (Obj->IsA(StaticClasses::Engine()))
        {
            Engine = Obj;
            break;
        }
         
    }
    return Engine;
}

UObject* GetLocalPlayer()
{
    const IMemoryUtils* Mem = IMemoryUtils::Get();
    static UObject* LocalPlayer = nullptr;
    if (LocalPlayer != nullptr && !Mem->IsBadReadPtr(LocalPlayer))
        return LocalPlayer;
    
    for (UObject* Obj : UObject::GetObjectArray())
    {
        if (!Obj || Mem->IsBadReadPtr(Obj) || Obj->IsDefaultObject())
            continue;

        if (Obj->IsA(StaticClasses::LocalPlayer()))
        {
            LocalPlayer = Obj;
            break;
        }
         
    }
    return LocalPlayer;
}

UObject* GetMyController()
{
    const IMemoryUtils* Mem = IMemoryUtils::Get();
    UObject* LP = GetLocalPlayer();
    if (!LP || Mem->IsBadReadPtr(LP))
        return nullptr;

    UObject** PCPtr = LP->GetMemberByOffset<UObject*>(0x30);
    if (!PCPtr || Mem->IsBadReadPtr(PCPtr)) return nullptr;
    return *PCPtr;
}

bool isInGame()
{
    UObject* World = GetWorld();
    const IMemoryUtils* Mem = IMemoryUtils::Get();
    
    if (!World || Mem->IsBadReadPtr(World)) {
        return false;
    }
    
    std::string WorldName = World->GetName();
    if (WorldName == "MainMenu") // Works like a charm
        return false;
    
    UObject** NetDriverPtr = World->GetMember<UObject*, "NetDriver">();
    if (!NetDriverPtr || Mem->IsBadReadPtr(NetDriverPtr) || !*NetDriverPtr || Mem->IsBadReadPtr(*NetDriverPtr)) {
        return false;
    }

    UObject** ServerConnectionPtr = (*NetDriverPtr)->GetMember<UObject*, "ServerConnection">();
    if (!ServerConnectionPtr || Mem->IsBadReadPtr(ServerConnectionPtr) || !*ServerConnectionPtr || Mem->IsBadReadPtr(*ServerConnectionPtr)) {
        return false;
    }
    
    return true;
}

/*
 1. Fetch The Servers
 2. Sort the servers from the highest NumPlayers to Lowest
 3. Join the server in descending order (Skip 0 players)
 4. Send Announcement Message
 5. Get The Next Server Details (ServerIP:Port)
 3. Join The Server
 5. Do Until all Servers are joined
 6. Repeat step 1;
 */

void Adbot::FetchServerList()
{
    dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), [this] {
        NSURL *url = [NSURL URLWithString:@"https://arkdedicated.com/mobile/cache/unofficialserverlist.json"];
        NSData *data = [NSData dataWithContentsOfURL:url];
        
        if (!data) {
            return;
        }
        
        NSError *error = nil;
        NSArray *jsonArray = [NSJSONSerialization JSONObjectWithData:data options:0 error:&error];
        
        if (!jsonArray || error) return;
        
        std::vector<ServerInfo> tempServers;
        tempServers.reserve(jsonArray.count);
        
        for (NSDictionary *entry in jsonArray) {
            ServerInfo info;
            
            // Basic Info
            NSString *nsName = entry[@"Name"] ?: @"Unknown";
            NSString *nsIP = entry[@"IP"] ?: @"0.0.0.0";
            NSNumber *nsPort = entry[@"Port"] ?: @(0);
            NSString *nsRegion = entry[@"Region"] ?: @"Other";
            NSNumber *nsNumPlayers = entry[@"NumPlayers"] ?: @(-1);
            
            // Extract HasPassword from the JSON string inside ClusterId
            NSNumber *nsHasPassword = @(NO);
            NSString *nsClusterId = entry[@"ClusterId"];
            if ([nsClusterId isKindOfClass:[NSString class]]) {
                NSData *clusterData = [nsClusterId dataUsingEncoding:NSUTF8StringEncoding];
                if (clusterData) {
                    NSDictionary *clusterDict = [NSJSONSerialization JSONObjectWithData:clusterData options:0 error:nil];
                    if ([clusterDict isKindOfClass:[NSDictionary class]] && clusterDict[@"HasPassword"]) {
                        nsHasPassword = clusterDict[@"HasPassword"];
                    }
                }
            }
            
            info.name = [nsName UTF8String];
            info.ip = [nsIP UTF8String];
            info.port = [nsPort intValue];
            info.region = [nsRegion UTF8String];
            info.NumPlayers = [nsNumPlayers intValue];
            info.HasPassword = [nsHasPassword boolValue];
            
            // Helper to clean name (keep text after last dash)
            size_t lastDash = info.name.rfind('-');
            if (lastDash != std::string::npos && lastDash + 1 < info.name.length()) {
                info.cleanName = info.name.substr(lastDash + 1);
            } else {
                info.cleanName = info.name;
            }
            
            // CLEAN UP WHITESPACE
            info.cleanName.erase(0, info.cleanName.find_first_not_of(" \t\n\r\f\v"));
            info.cleanName.erase(info.cleanName.find_last_not_of(" \t\n\r\f\v") + 1);
            
            
            // Parse "ClusterId" JSON String for Difficulty/Mode
            NSString *clusterJsonStr = entry[@"ClusterId"];
            info.difficulty = "Unknown";
            info.mode = "Unknown";
            
            if (clusterJsonStr && [clusterJsonStr isKindOfClass:[NSString class]]) {
                NSData *clusterData = [clusterJsonStr dataUsingEncoding:NSUTF8StringEncoding];
                if (clusterData) {
                    NSDictionary *clusterDict = [NSJSONSerialization JSONObjectWithData:clusterData options:0 error:nil];
                    if (clusterDict) {
                        NSString *diff = clusterDict[@"Difficulty"];
                        NSString *mode = clusterDict[@"Mode"];
                        if (diff) info.difficulty = [diff UTF8String];
                        if (mode) info.mode = [mode UTF8String];
                    }
                }
            }
            
            // Add all servers regardless of player count or password
            tempServers.push_back(info);
        }
        
        // Update global list on main thread (or safeguard with mutex in render)
        dispatch_async(dispatch_get_main_queue(), ^{
            this->Servers = tempServers;
        });
    });
}

uint64_t Adbot::GetCurrentTimeMs()
{
    return std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count();
}
bool Adbot::Announce(std::string Message)
{
//    NSLog(@"[Adbot] Announcing message: %s", Message.c_str());
    const IMemoryUtils* Mem = IMemoryUtils::Get();
    UObject* Controller = GetMyController();
    if (Mem->IsBadReadPtr(Controller)) {
        return false; // Synchronous check fails
    }
    
    // Event execution must happen on Main Thread because ImGui runs inside MTKView
    dispatch_async(dispatch_get_main_queue(), ^{
        const IMemoryUtils* MemBlock = IMemoryUtils::Get();
        if (MemBlock->IsBadReadPtr(Controller)) {
            return;
        }
        static UFunction* ServerSendChatMessage = nullptr;
        if (!ServerSendChatMessage)
        {
            ServerSendChatMessage =  UObject::FindObjectFast<UFunction>("ServerSendChatMessage");
        }
        ServerSendChatMessage_Params MessageParamaters;
        std::wstring wstr = std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>>().from_bytes(Message);
        
        MessageParamaters.ChatChannel = Global;
        MessageParamaters.MessageType = Announcement;
        MessageParamaters.ChatMessage = FString(wstr.c_str());
        ConstructFServerText(&MessageParamaters.ServerText);
        
        Controller->ProcessEvent(ServerSendChatMessage, &MessageParamaters);
    });
    return true;
}

void Adbot::Activate()
{
    // Set it Here?
    ServerName = "";
    ServerIP = "";
    isActive = true;
    CurrentState = State::Idle;
    CurrentServerIndex = 0;
    CurrentMessageIndex = 0;
    JoinStartTime = 0;
    Servers.clear();
}

void Adbot::Deactivate()
{
    isActive = NO;
    ServerName = "None";
    ServerIP = "None";
    CurrentState = State::Idle;
}

void Adbot::JoinServer()
{
    const IMemoryUtils* Mem = IMemoryUtils::Get();
    if (isActive)
    {
        UObject* World = GetWorld();
        UObject* Engine = GetEngine();
        if (World && !Mem->IsBadReadPtr(World) && Engine && !Mem->IsBadReadPtr(Engine))
        {
            std::string ipCopy = ServerIP;
            dispatch_async(dispatch_get_main_queue(), ^{
                std::wstring wstr = std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>>().from_bytes(ipCopy);
                ClientTravel(Engine, World, wstr.c_str(), 0);
            });
        }
    }
}

void PlayerController$$ProcessEvent(UObject* Obj, UFunction* Function, void* Parms);
VMTHookManager PlayerControllerPEHook(PlayerController$$ProcessEvent, 70); // 70th index of the Object's vtable is the Process event
void PlayerController$$ProcessEvent(UObject* Obj, UFunction* Function, void* Parms)
{
    
    std::string FuncName = Function->NamePrivate.ToString();
    // if (Function->NamePrivate == FName(TEXT("ServerSendChatMessage")) // construct an FName
    if (FuncName == "ServerSendChatMessage") // Support Longer Messages. ARK Limits it 40
    {
        ServerSendChatMessage_Params* MessageParamaters = (ServerSendChatMessage_Params*)Parms;
        if (MessageParamaters->ChatMessage.Num() > 40) {
            std::wstring MessageString = MessageParamaters->ChatMessage.ToWString();
            std::vector<std::wstring> strings;
            size_t length = MessageString.length();
            for (size_t i = 0; i < length; i += 40) {
                strings.push_back(MessageString.substr(i, 40));
            }
            
            for (std::wstring& currString : strings)
            {
                MessageParamaters->ChatMessage = FString(currString.c_str());
                PlayerControllerPEHook.InvokeOriginal(Obj, Function, Parms);
            }
            return;
        }
    }
    
    PlayerControllerPEHook.InvokeOriginal(Obj, Function, Parms);
}

// This will be the main thing to run.
void Adbot::Run()
{
    const IMemoryUtils* Mem = IMemoryUtils::Get();
    UObject* PlayerController = GetMyController();
    if (PlayerController && !Mem->IsBadReadPtr(PlayerController))
    {
        PlayerControllerPEHook.Swap(PlayerController);
    }
    
    if (!isActive) return;
    uint64_t currentTime = GetCurrentTimeMs();
    switch (CurrentState) {
        case State::Idle:
            FetchServerList();
            CurrentState = State::WaitingForServers;
            LastActionTime = currentTime;
            break;

        case State::FetchingServers:
            break;

        case State::WaitingForServers:
            if (Servers.size() > 0) {
                CurrentState = State::SortingServers;
            } else if (currentTime - LastActionTime > 10000) { // 10s timeout
                CurrentState = State::Idle;
            }
            break;

        case State::SortingServers:
            std::sort(Servers.begin(), Servers.end(), [this](const ServerInfo& a, const ServerInfo& b) {
                if (SortAscending) {
                    return a.NumPlayers < b.NumPlayers;
                } else {
                    return a.NumPlayers > b.NumPlayers;
                }
            });
            CurrentServerIndex = 0;
            CurrentState = State::JoiningNextServer;
            break;

        case State::JoiningNextServer:
            if (CurrentServerIndex >= Servers.size()) {
                CurrentState = State::Idle;
                Servers.clear();
                break;
            }

            if (Servers[CurrentServerIndex].NumPlayers <= 0 || Servers[CurrentServerIndex].HasPassword) {
                // Skip
                CurrentServerIndex++;
                break;
            }

            ServerIP = Servers[CurrentServerIndex].ip + ":" + std::to_string(Servers[CurrentServerIndex].port);
            ServerName = Servers[CurrentServerIndex].cleanName;
        
            JoinServer();
            LastActionTime = currentTime;
            JoinStartTime = currentTime;
            CurrentState = State::WaitingForGameLoad;
            break;

        case State::WaitingForGameLoad:
            if (isInGame()) {
                if (currentTime - LastActionTime > 2000) { // 2s wait after in game
                    CurrentState = State::Announcing;
                    CurrentMessageIndex = 0;
                    LastActionTime = currentTime;
                }
            } else {
                LastActionTime = currentTime; 
                // Timeout after 7 seconds if attempting to join but game is full or non-responsive.
                if (currentTime - JoinStartTime > 7000) {
                    CurrentServerIndex++;
                    CurrentState = State::JoiningNextServer;
                }
            }
            break;

        case State::Announcing:
            if (!isInGame()) {
                // We got disconnected or kicked while trying to announce
                CurrentServerIndex++;
                CurrentState = State::JoiningNextServer;
                break;
            }

            if (CurrentMessageIndex >= GetMessages().size()) {
                if (Settings::GetInstance().CrashAfterAnnounce) {
                    CrashBot::getInstance().CrashTheServer();
                    usleep(1000000);
                }
                CurrentState = State::DelayBetweenServers;
                LastActionTime = currentTime;
            } else {
                if (Announce(GetMessages()[CurrentMessageIndex])) {
                    CurrentMessageIndex++;
                    CurrentState = State::DelayBetweenAnnouncements;
                    LastActionTime = currentTime;
                } else {
                    // Try again. If we are stuck waiting for a valid Controller, timeout after 4s.
                    if (currentTime - LastActionTime > 4000) {
                        CurrentServerIndex++;
                        CurrentState = State::JoiningNextServer;
                    }
                }
            }
            break;

        case State::DelayBetweenAnnouncements:
            if (currentTime - LastActionTime > 700) {
                CurrentState = State::Announcing;
            }
            break;

        case State::DelayBetweenServers:
            if (currentTime - LastActionTime > 2000) {
                CurrentServerIndex++;
                CurrentState = State::JoiningNextServer;
            }
            break;
    }
}

void CrashBot::ActivateCrashBot()
{
    isActive = true;
    Settings::GetInstance().Save();
}

void CrashBot::StopCrashBot()
{
    isActive = false;
    Settings::GetInstance().Save();
}

void CrashBot::HandleCrashBot()
{
    if (isActive)
    {
        static bool CrashTimer = true;
        if(!CrashTimer) return;
        CrashTimer = false;
        CallAfterSeconds(10){
            CrashTimer = true;
        });
        
        if(isInGame()){
            CrashTheServer();
        } else {
            JoinServer();
        }
    }
}

void CrashBot::JoinServer()
{
    // Ts kinda slow... anyways performance isn't really needed.
    std::wstring WServerIP = std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>>().from_bytes(settings.ServerIP);
    std::wstring WServerPassword = std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>>().from_bytes(settings.Password);
    
    // Construct FString
    FString ServerIPFString = FString(WServerIP.c_str());
    FString ServerPasswordFString = FString(WServerPassword.c_str());
    
    UObject* LocalPlayer = GetLocalPlayer();
    UObject* Menu = GetMyController();
    // Make sure We're on the menu
    if (Menu && !IMemoryUtils::Get()->IsBadReadPtr((void*)Menu) && Menu->IsA(StaticClasses::ShooterPlayerController_Menu())) {
        
        // Need to set Server Password if you want to crash a server with passwords. It's optional though.
        SetServerLoginPassword(LocalPlayer, &ServerPasswordFString, &ServerIPFString, Menu);
        UObject* World = GetWorld();
        UObject* Engine = GetEngine();
        if (World && !IMemoryUtils::Get()->IsBadReadPtr((void*)World) && Engine && !IMemoryUtils::Get()->IsBadReadPtr((void*)Engine))
        {
            // Join the server once all are valid
            ClientTravel(Engine, World, WServerIP.c_str(), 0);
        }
    }
}

void CrashBot::CrashTheServer()
{
    const IMemoryUtils* Mem = IMemoryUtils::Get();
    UObject* MyController = GetMyController();
    if (!MyController || Mem->IsBadReadPtr(MyController)) {
        return;
    }

    static UFunction* ServerDownloadDungeon = nullptr;
    if (!ServerDownloadDungeon)
        ServerDownloadDungeon = UObject::FindObjectFast<UFunction>("ServerDownloadDungeon"); // Cache Once so it wont repeatedly find it. It's a static function anyway
    
    ServerDownloadDungeon_Params dungeonParams = { FString(TEXT("0xDEADBEEFFF")) };
    for (int i = 0; i < 20; ++i) {
        MyController->ProcessEvent(ServerDownloadDungeon, &dungeonParams);
        usleep(10000);
    }
}

BOOL isMouseLocked = false;
BOOL isAlreadyFocused = false;

typedef BOOL (*PrefersPointerLockedOrig)(id, SEL);
static PrefersPointerLockedOrig orig_prefersPointerLocked = NULL;
BOOL swizzled_prefersPointerLocked(id self, SEL _cmd) {
    return isMouseLocked;
}

static void updateMouseLock(BOOL value) {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
    UIWindow *keyWindow = [UIApplication sharedApplication].keyWindow;
#pragma clang diagnostic pop
    UIViewController *mainViewController = keyWindow.rootViewController;
    [mainViewController setNeedsUpdateOfPrefersPointerLocked];
    if (value == false) {
        isAlreadyFocused = false;
    }
}

ENTRY_POINT void Entry(void)
{
    // On some games, mouse pointers are locked. That's why we need to hook it and forcibly enable it.
    // Need to hook Obj-C Functions to work with Apple-Silicon Mac (Sideloaded App)
    Class iosVCCls = objc_getClass("IOSViewController");
    Method m4 = class_getInstanceMethod(iosVCCls, @selector(prefersPointerLocked));
    if (m4) {
        orig_prefersPointerLocked = (PrefersPointerLockedOrig)method_getImplementation(m4);
        method_setImplementation(m4, (IMP)swizzled_prefersPointerLocked);
    }
    
    CallAfterSeconds(2) { // Let the Game load up
        ShooterGame = IMemoryUtils::Get()->GetDyldInfo("ShooterGame");
        UObject::Init((uintptr)ShooterGame.GetAddress(0x104409070)); // Necessary for Finding Core Pointers (GWorld, GEngine)
        FName::Init((uintptr)ShooterGame.GetAddress(0x10420FC48)); // Necessary for VTable Hooking
        FName::Constructor = decltype(FName::Constructor)(ShooterGame.GetAddress(0x10140e0ec)); // Necessary for constructing (Not used here though)
        
        ClientTravel = decltype(ClientTravel)(ShooterGame.GetAddress(0x102b9dc88)); // Necessary for Joining the server
        ConstructFServerText = decltype(ConstructFServerText)(ShooterGame.GetAddress(0x10131ca30)); // Construcing FServer Text
        SetServerLoginPassword = decltype(SetServerLoginPassword)(ShooterGame.GetAddress(0x100b1efe8)); // Setting Server Password (for Locked Servers)
    });
}
