#pragma once

#include "../MenuLoad/Includes.h"
#include "../Menu/Settings.h"
#include "StaticClasses.h"
#include "UnrealEngine/ScriptCore.h"

struct ServerInfo {
    std::string name;
    std::string ip;
    int port;
    std::string region;     // NA, EU, AS, ANZ
    std::string difficulty; // Easy, Medium, Hard, Brutal
    std::string mode;       // PVP, PVE, PVX
    std::string cleanName;  // Parsed name for display
    int NumPlayers;
    bool HasPassword;
};

class Adbot {
private:
    bool isActive = false;
    std::string ServerIP;
    std::string ServerName;
    std::vector<ServerInfo> Servers;

    // State machine for Adbot
    enum class State {
        Idle,
        FetchingServers,
        WaitingForServers,
        SortingServers,
        JoiningNextServer,
        WaitingForGameLoad,
        Announcing,
        DelayBetweenAnnouncements,
        DelayBetweenServers
    };
    State CurrentState = State::Idle;
    
    int CurrentServerIndex = 0;
    int CurrentMessageIndex = 0;
    uint64_t LastActionTime = 0;
    uint64_t JoinStartTime = 0;
    bool SortAscending = false;

    uint64_t GetCurrentTimeMs();

public:
    static Adbot& getInstance() {
        static Adbot instance; // The single instance
        return instance;
    }
    void Run();
    void FetchServerList();
    void Activate();
    void Deactivate();
    void JoinServer();
    bool Announce(std::string Message);

    // Getters for UI
    bool& GetSortAscending() { return SortAscending; }
    bool IsActive() const { return isActive; }
    std::string GetCurrentServerName() const { return ServerName; }
    std::string GetCurrentServerIP() const { return ServerIP; }
    int GetCurrentServerIndex() const { return CurrentServerIndex; }
    int GetTotalServers() const { return Servers.size(); }
    const std::vector<ServerInfo>& GetServers() const { return Servers; }
    
    std::string GetStateString(bool lang_cn) const {
        switch (CurrentState) {
            case State::Idle: return lang_cn ? (const char*)u8"空闲中" : "Idle";
            case State::FetchingServers: return lang_cn ? (const char*)u8"获取服务器..." : "Fetching Servers...";
            case State::WaitingForServers: return lang_cn ? (const char*)u8"等待服务器信息..." : "Waiting For Servers...";
            case State::SortingServers: return lang_cn ? (const char*)u8"排序服务器..." : "Sorting Servers...";
            case State::JoiningNextServer: return lang_cn ? (const char*)u8"加入下一个服务器..." : "Joining Next Server...";
            case State::WaitingForGameLoad: return lang_cn ? (const char*)u8"等待游戏加载..." : "Waiting For Game Load...";
            case State::Announcing: return lang_cn ? (const char*)u8"发送公告..." : "Announcing...";
            case State::DelayBetweenAnnouncements: return lang_cn ? (const char*)u8"公告间延迟..." : "Delay Between Announcements...";
            case State::DelayBetweenServers: return lang_cn ? (const char*)u8"服务器间延迟..." : "Delay Between Servers...";
            default: return lang_cn ? (const char*)u8"未知状态" : "Unknown";
        }
    }
    
    std::vector<std::string>& GetMessages() { return Settings::GetInstance().Messages; }
};

class CrashBot {
private:
    bool isActive = false;
    uint64_t LastActionTime = 0;
    
public:
    static CrashBot& getInstance() {
        static CrashBot instance;
        return instance;
    }
    
    void ActivateCrashBot();
    void StopCrashBot();
    void HandleCrashBot();
    void JoinServer();
    void CrashTheServer();

    bool IsActive() const { return isActive; }
    std::string GetCurrentServerName() const { return Settings::GetInstance().ServerIP; } // Using IP as name for now as requested
    std::string GetCurrentServerIP() const { return Settings::GetInstance().ServerIP; }
    
    std::string& GetUIPassword() { return Settings::GetInstance().Password; }
    std::string& GetUIServerIP() { return Settings::GetInstance().ServerIP; }
};

enum EChatChannel : uint8_t {
    Local = 0,
    Global = 1,
    Tribe = 2,
    TribeAndAlliance = 3,
    Radio = 4
};

enum EChatMessageType : uint8_t {
    Text = 0,
    Emote = 1,
    LogIn = 2,
    Notification = 3,
    Announcement = 4
};

struct FServerText{
    long FTextOne = 0; //0x0
    long FTextTwo = 0; //0x8
    long FTextThree = 0; //0x10
    FString Paramaters;
};

struct ServerSendChatMessage_Params{
    EChatChannel ChatChannel;
    EChatMessageType MessageType;
    uint8_t pad[6];
    FString ChatMessage;
    FServerText ServerText;
};

struct FPreferredSnapData {
	// Fields
	bool bUsedPreferredSnap; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	int MySnapIndex; // Offset: 0x04 // Size: 0x04
	int TheirSnapIndex; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	UObject* SnapToActor; // Offset: 0x10 // Size: 0x08
};

struct ServerDownloadDungeon_Params {
    FString DungeonName;
};

