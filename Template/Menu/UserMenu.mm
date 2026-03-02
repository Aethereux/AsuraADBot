#include "UserMenu.h"
#include "Utilities/Memory.h"
#include "Source/Main.h"
#include <algorithm>
#include <cctype>
#include "../Resources/Fonts/FontAwesome.h"



void UserMenu::RenderMenu()
{
    CGFloat screenWidth = ([UIApplication sharedApplication].windows[0].rootViewController.view.frame.size.width);
    CGFloat screenHeight = ([UIApplication sharedApplication].windows[0].rootViewController.view.frame.size.height);

    CGFloat windowWidth = settings.MenuSize.x;
    CGFloat windowHeight = settings.MenuSize.y;
    
    CGFloat xPos = (screenWidth - windowWidth) / 2.0f;
    CGFloat yPos = (screenHeight - windowHeight) / 2.0f;

    ImGui::SetNextWindowPos(ImVec2(xPos, yPos), ImGuiCond_FirstUseEver);
    ImGui::SetNextWindowSize(settings.MenuSize, ImGuiCond_Appearing);
    ImGui::SetNextWindowSizeConstraints(ImVec2(500, 305), ImVec2(FLT_MAX, FLT_MAX));
    
    ImVec4 winCol               = ImVec4(0, 0, 0, 239.f/255.f);
    ImVec4 childCol1            = ImVec4(38.f/255.f, 39.f/255.f, 50.f/255.f, 255.f/255.f);
    ImVec4 notSelectedTextColor = ImVec4(133.f/255.f, 133.f/255.f, 133.f/255.f, 255.f/255.f);
    ImVec4 textCol              = ImVec4(255.f/255.f, 255.f/255.f, 255.f/255.f, 255.f/255.f);
    ImVec4 btnActiveCol         = ImVec4(255.f/255.f, 0, 69.f/255.f, 255.f/255.f);
    ImVec4 btnHoverCol          = ImVec4(255.f/255.f, 0, 0, 255.f/255.f);
    ImVec4 frameCol             = ImVec4(120.f/255.f, 120.f/255.f, 120.f/255.f, 0.1f);
    ImVec4 hoverCol             = ImVec4(37.f/255.f, 36.f/255.f, 37.f/255.f, 255.f/255.f);
    ImVec4 itemCol              = ImVec4(0, 255.f/255.f, 95.f/255.f, 255.f/255.f);
    ImVec4 resizeGripCol        = ImVec4(220.f/255.f, 50.f/255.f, 66.f/255.f, 120.f/255.f);

    static bool styleInitialized = false;
    if (!styleInitialized) {
        ImGuiStyle& style = ImGui::GetStyle();
        style.WindowRounding    = 8.0f;
        style.ChildRounding     = 6.0f;
        style.FrameRounding     = 6.0f;
        style.GrabRounding      = 6.0f;
        style.ScrollbarRounding = 6.0f;
        style.ItemSpacing       = ImVec2(6.0f, 4.0f);
        style.WindowPadding     = ImVec2(6.0f, 6.0f);
        style.FramePadding      = ImVec2(4.0f, 3.0f);
        style.TabRounding       = 4.0f;
        style.WindowTitleAlign  = ImVec2(0.5f, 0.5f);
        
        ImVec4* colors = style.Colors;
        colors[ImGuiCol_WindowBg]           = winCol;
        colors[ImGuiCol_ChildBg]            = ImVec4(0.08f, 0.08f, 0.08f, 1.0f);
        colors[ImGuiCol_Text]               = textCol;
        colors[ImGuiCol_TextDisabled]       = notSelectedTextColor;
        colors[ImGuiCol_Border]             = ImVec4(btnActiveCol.x, btnActiveCol.y, btnActiveCol.z, 0.3f);
        colors[ImGuiCol_FrameBg]            = frameCol;
        colors[ImGuiCol_FrameBgHovered]     = hoverCol;
        colors[ImGuiCol_FrameBgActive]      = hoverCol;
        colors[ImGuiCol_TitleBg]            = ImVec4(winCol.x, winCol.y, winCol.z, 1.0f);
        colors[ImGuiCol_TitleBgActive]      = ImVec4(winCol.x, winCol.y, winCol.z, 1.0f);
        colors[ImGuiCol_CheckMark]          = itemCol;
        colors[ImGuiCol_SliderGrab]         = itemCol;
        colors[ImGuiCol_SliderGrabActive]   = itemCol;
        colors[ImGuiCol_Button]             = btnActiveCol;
        colors[ImGuiCol_ButtonHovered]      = btnHoverCol;
        colors[ImGuiCol_ButtonActive]       = btnActiveCol;
        colors[ImGuiCol_ResizeGrip]         = resizeGripCol;
        colors[ImGuiCol_ResizeGripHovered]  = resizeGripCol;
        colors[ImGuiCol_ResizeGripActive]   = resizeGripCol;
        
        // Tab Colors
        colors[ImGuiCol_Tab]                = ImVec4(childCol1.x, childCol1.y, childCol1.z, 0.4f);
        colors[ImGuiCol_TabHovered]         = ImVec4(btnActiveCol.x, btnActiveCol.y, btnActiveCol.z, 0.8f);
        colors[ImGuiCol_TabActive]          = btnActiveCol;
        colors[ImGuiCol_TabUnfocused]       = ImVec4(childCol1.x, childCol1.y, childCol1.z, 0.2f);
        colors[ImGuiCol_TabUnfocusedActive] = ImVec4(btnActiveCol.x, btnActiveCol.y, btnActiveCol.z, 0.4f);
        
        styleInitialized = true;
    }

    // Replace local bools with settings fields to persist toggle states
    ImGui::Begin(settings.lang_cn ? (const char*)u8"Asura 广告机器人###AsuraManager" : "Asura Ad Bot###AsuraManager", NULL, ImGuiWindowFlags_NoCollapse);
    ImGui::SetWindowFontScale(0.85f); // Scale down text size for mobile 
    settings.MenuSize = ImGui::GetWindowSize();
    
    if (ImGui::BeginTabBar("AsuraTabs")) {
        if (ImGui::BeginTabItem(settings.lang_cn ? (const char*)u8"广告机器人" : "Ad Bot")) {
            
            Adbot& bot = Adbot::getInstance();

    float pulse = (std::sin(ImGui::GetTime() * 4.0f) + 1.0f) * 0.5f;
    ImGui::BeginGroup();
    {
        // Activity Status Left
        ImVec4 statusColor = bot.IsActive() ? ImVec4(itemCol.x, itemCol.y * pulse, itemCol.z, 1.0f) : notSelectedTextColor;
        ImGui::TextColored(statusColor, bot.IsActive() ? (settings.lang_cn ? (const char*)u8"[运行中]" : "[ON]") : (settings.lang_cn ? (const char*)u8"[未启动]" : "[OFF]"));
        ImGui::SameLine(50);
        
        // State Machine Text Center
        ImGui::TextColored(notSelectedTextColor, settings.lang_cn ? (const char*)u8"状态:" : "STATE:");
        ImGui::SameLine();
        ImGui::TextColored(btnActiveCol, "%s", bot.GetStateString(settings.lang_cn).c_str());
        if (ImGui::IsItemHovered()) ImGui::SetTooltip(settings.lang_cn ? (const char*)u8"机器人当前的工作流阶段。" : "Current stage of the bot's workflow.");
        
        // Main Trigger Button Right
        ImGui::SameLine(ImGui::GetWindowWidth() - 110);
        
        // Language Toggle
        ImGui::PushStyleColor(ImGuiCol_Button, childCol1);
        if (ImGui::Button(settings.lang_cn ? "EN" : (const char*)u8"中", ImVec2(24, 20))) {
            settings.lang_cn = !settings.lang_cn;
            settings.Save();
        }
        ImGui::PopStyleColor();
        ImGui::SameLine();
        
        if (bot.IsActive()) {
            ImGui::PushStyleColor(ImGuiCol_Button, hoverCol);
            ImGui::PushStyleColor(ImGuiCol_ButtonHovered, childCol1);
            ImGui::PushStyleColor(ImGuiCol_ButtonActive, hoverCol);
        } else {
            ImGui::PushStyleColor(ImGuiCol_Button, btnActiveCol);
            ImGui::PushStyleColor(ImGuiCol_ButtonHovered, btnHoverCol);
            ImGui::PushStyleColor(ImGuiCol_ButtonActive, btnActiveCol);
        }
        
        if (ImGui::Button(bot.IsActive() ? (settings.lang_cn ? (const char*)u8"停止" : "STOP") : (settings.lang_cn ? (const char*)u8"开始" : "START"), ImVec2(70, 20))) {
            if (bot.IsActive()) bot.Deactivate();
            else bot.Activate();
        }
        if (ImGui::IsItemHovered()) ImGui::SetTooltip(bot.IsActive() 
            ? (settings.lang_cn ? (const char*)u8"停止所有服务器导航和全服公告。" : "Halt all server navigation and announcements.") 
            : (settings.lang_cn ? (const char*)u8"开始获取服务器并广播消息。" : "Begin fetching servers and broadcasting messages."));
        ImGui::PopStyleColor(3);
    }
    ImGui::EndGroup();
    
    ImGui::Separator();
    
    // If the server list is showing, reserve the bottom ~150px for it, otherwise span the rest of the window.
    float reservedHeightForServers = settings.show_servers ? 150.0f : 0.0f;
    ImGui::BeginChild("MainPanelsContainer", ImVec2(0, ImGui::GetContentRegionAvail().y - reservedHeightForServers - 5.0f), false);
    
    // Left Panel: PROGRESS AND SERVER
    ImGui::BeginChild("ProgressPanel", ImVec2(ImGui::GetContentRegionAvail().x * 0.45f, 0), true);
    ImGui::TextColored(notSelectedTextColor, settings.lang_cn ? (const char*)u8"当前目标" : "Current Target");
    if (ImGui::IsItemHovered()) ImGui::SetTooltip(settings.lang_cn ? (const char*)u8"机器人当前正在尝试加入并进行公告的服务器。" : "The server the bot is currently attempting to join and announce in.");
    ImGui::Spacing();
    ImGui::TextColored(itemCol, "%s", bot.GetCurrentServerName().empty() ? "-" : bot.GetCurrentServerName().c_str());
    ImGui::TextColored(notSelectedTextColor, "%s", bot.GetCurrentServerIP().empty() ? "-" : bot.GetCurrentServerIP().c_str());
    
    ImGui::Spacing();
    ImGui::Separator();
    ImGui::Spacing();
    
    ImGui::TextColored(notSelectedTextColor, settings.lang_cn ? (const char*)u8"进度:" : "Progress:");
    ImGui::SameLine();
    ImGui::Text(settings.lang_cn ? (const char*)u8"%d / %d 服务器" : "%d / %d Servers", bot.GetCurrentServerIndex(), bot.GetTotalServers());
    if (ImGui::IsItemHovered()) ImGui::SetTooltip(settings.lang_cn ? (const char*)u8"显示已处理的服务器数量\n占搜索返回的服务器总数的比例。" : "Shows the number of servers processed\nout of the total returned by the search.");
    
    ImGui::Spacing();
    ImGui::Checkbox(settings.lang_cn ? (const char*)u8"优先低人数" : "Sort Low Pop", &bot.GetSortAscending());
    if (ImGui::IsItemHovered()) ImGui::SetTooltip(settings.lang_cn ? (const char*)u8"选中后，机器人将优先加入\n玩家人数最少的服务器。" : "When checked, the bot prioritizes joining servers\nwith the lowest player counts first.");
    
    ImGui::Spacing();
    ImGui::Checkbox(settings.lang_cn ? (const char*)u8"公告后崩溃" : "Crash After Announce", &settings.CrashAfterAnnounce);
    if (ImGui::IsItemHovered()) ImGui::SetTooltip(settings.lang_cn ? (const char*)u8"在完成所有消息公告后\n自动触发服务器崩溃。" : "Automatically trigger a server crash\nafter finishing all message announcements.");
    
    ImGui::Spacing();
    ImGui::Separator();
    ImGui::Spacing();
    
    // Toggle for Server Display
    if (ImGui::Button(settings.lang_cn ? (settings.show_servers ? (const char*)u8"隐藏服务器列表" : (const char*)u8"显示服务器列表") : (settings.show_servers ? "Hide Servers" : "Show Servers"), ImVec2(-1, 20))) {
        settings.show_servers = !settings.show_servers;
        settings.Save();
    }
    
    ImGui::EndChild();
    
    ImGui::SameLine();
    
    // Right Panel
    ImGui::BeginChild("MessagesPanel", ImVec2(0, 0), true);
    auto& messages = bot.GetMessages();
    
    ImGui::TextColored(notSelectedTextColor, settings.lang_cn ? (const char*)u8"消息数: %zu" : "MESSAGES: %zu", messages.size());
    ImGui::SameLine(ImGui::GetContentRegionAvail().x - 40);
    
    // Tiny header add button
    ImGui::PushStyleColor(ImGuiCol_Button, hoverCol);
    ImGui::PushStyleColor(ImGuiCol_Text, itemCol);
    if (ImGui::Button("+", ImVec2(30, 18))) {
        messages.push_back("");
    }
    if (ImGui::IsItemHovered()) ImGui::SetTooltip(settings.lang_cn ? (const char*)u8"在队列中添加一个新的空消息块。\n消息将顺序发送。" : "Add a new empty message block to the queue.\nMessages are sent sequentially.");
    ImGui::PopStyleColor(2);
    
    ImGui::Separator();
    
    ImGui::BeginChild("MsgListScroll");
    for (size_t i = 0; i < messages.size(); ++i) {
        ImGui::PushID(i);
        char buf[2048];
        strlcpy(buf, messages[i].c_str(), sizeof(buf));
        
        ImGui::PushItemWidth(-25);
        ImGui::PushStyleVar(ImGuiStyleVar_FramePadding, ImVec2(6, 6));
        ImGui::PushStyleColor(ImGuiCol_FrameBg, ImVec4(0.12f, 0.12f, 0.12f, 1.0f));
        if (ImGui::InputText("##msg", buf, sizeof(buf))) {
            messages[i] = buf;
        }
        ImGui::PopStyleColor();
        ImGui::PopStyleVar();
        ImGui::PopItemWidth();
        
        ImGui::SameLine();
        ImGui::PushStyleColor(ImGuiCol_Button, btnActiveCol);
        if (ImGui::Button("X", ImVec2(20, 0))) {
            messages.erase(messages.begin() + i);
            i--;
        }
        if (ImGui::IsItemHovered()) ImGui::SetTooltip(settings.lang_cn ? (const char*)u8"移除此消息层。" : "Remove this message layer.");
        ImGui::PopStyleColor();
        ImGui::PopID();
    }
    ImGui::EndChild(); // Scroll Area
    
    ImGui::EndChild(); // Msg Panel
    
    ImGui::EndChild(); // Container
    if (settings.show_servers) {
        ImGui::Spacing();
        ImGui::BeginChild("ServersListPanel", ImVec2(0, 0), true);
        ImGui::TextColored(notSelectedTextColor, settings.lang_cn ? (const char*)u8"获取的服务器列表:" : "FETCHED SERVERS:");
        ImGui::SameLine(ImGui::GetWindowWidth() - 40);
        if (ImGui::Button(ICON_FA_SYNC, ImVec2(30, 0))) {
            bot.FetchServerList();
        }
        if (ImGui::IsItemHovered()) ImGui::SetTooltip(settings.lang_cn ? (const char*)u8"刷新列表" : "Refresh List");
        ImGui::Separator();
        
        auto& servers = bot.GetServers();
        if (servers.empty()) {
            ImGui::TextColored(notSelectedTextColor, settings.lang_cn ? (const char*)u8"暂无服务器。" : "No servers available.");
        } else {
            ImGui::BeginChild("ServerScrollArea");
            for (size_t i = 0; i < servers.size(); ++i) {
                const auto& srv = servers[i];
                if (srv.HasPassword || srv.NumPlayers <= 0) continue;
                
                bool isCurrent = (i == bot.GetCurrentServerIndex() - 1);
                ImGui::PushID(i);
                
                // Use a dummy selectable for the background/hover effect
                ImGui::PushStyleColor(ImGuiCol_Header, isCurrent ? ImVec4(btnActiveCol.x, btnActiveCol.y, btnActiveCol.z, 0.3f) : ImVec4(0,0,0,0));
                ImGui::PushStyleColor(ImGuiCol_HeaderHovered, ImVec4(btnActiveCol.x, btnActiveCol.y, btnActiveCol.z, 0.15f));
                ImGui::PushStyleColor(ImGuiCol_HeaderActive, ImVec4(btnActiveCol.x, btnActiveCol.y, btnActiveCol.z, 0.25f));
                
                ImGui::Selectable("##srv_row", isCurrent, ImGuiSelectableFlags_AllowItemOverlap, ImVec2(0, 35));
                
                ImGui::SameLine(10);
                ImGui::BeginGroup();
                {
                    ImGui::SetWindowFontScale(0.9f);
                    ImGui::TextColored(isCurrent ? itemCol : textCol, "%s", srv.name.c_str());
                    ImGui::SetWindowFontScale(0.75f);
                    ImGui::TextColored(notSelectedTextColor, "%s %s:%d  |  %s %s  |  %s %s", ICON_FA_LINK, srv.ip.c_str(), srv.port, ICON_FA_GLOBE, srv.region.c_str(), ICON_FA_SHIELD_ALT, srv.mode.c_str());
                    ImGui::SetWindowFontScale(0.85f);
                }
                ImGui::EndGroup();
                
                ImGui::SameLine(ImGui::GetWindowWidth() - 95);
                ImGui::BeginGroup();
                {
                    ImGui::TextColored(itemCol, "%s %d", ICON_FA_USERS, srv.NumPlayers);
                    ImGui::SameLine();
                    ImGui::TextColored(notSelectedTextColor, "Players");
                }
                ImGui::EndGroup();

                ImGui::PopStyleColor(3);
                ImGui::PopID();
                
                ImGui::Separator();
            }
            ImGui::EndChild(); // ServerScrollArea
        }
        
        ImGui::EndChild(); // ServersListPanel
    }
    
            ImGui::EndTabItem();
        }
        
        if (ImGui::BeginTabItem(settings.lang_cn ? (const char*)u8"崩溃机器人" : "Crash Bot")) {
            CrashBot& cb = CrashBot::getInstance();
            
            ImGui::Spacing();
            
            // Status
            ImGui::BeginGroup();
            ImVec4 cbStatusColor = cb.IsActive() ? ImVec4(itemCol.x, itemCol.y, itemCol.z, 1.0f) : notSelectedTextColor;
            ImGui::TextColored(cbStatusColor, cb.IsActive() ? (settings.lang_cn ? (const char*)u8"[运行中]" : "[ON]") : (settings.lang_cn ? (const char*)u8"[未启动]" : "[OFF]"));
            ImGui::SameLine(50);
            
            ImGui::TextColored(notSelectedTextColor, settings.lang_cn ? (const char*)u8"服务器信息:" : "SERVER INFO:");
            
            // Action button
            ImGui::SameLine(ImGui::GetWindowWidth() - 80);
            if (cb.IsActive()) {
                ImGui::PushStyleColor(ImGuiCol_Button, hoverCol);
                ImGui::PushStyleColor(ImGuiCol_ButtonHovered, childCol1);
                ImGui::PushStyleColor(ImGuiCol_ButtonActive, hoverCol);
            } else {
                ImGui::PushStyleColor(ImGuiCol_Button, btnActiveCol);
                ImGui::PushStyleColor(ImGuiCol_ButtonHovered, btnHoverCol);
                ImGui::PushStyleColor(ImGuiCol_ButtonActive, btnActiveCol);
            }
            if (ImGui::Button(cb.IsActive() ? (settings.lang_cn ? (const char*)u8"停止" : "STOP") : (settings.lang_cn ? (const char*)u8"开始" : "START"), ImVec2(70, 20))) {
                if (cb.IsActive()) cb.StopCrashBot();
                else {
                    cb.ActivateCrashBot();
                }
            }
            ImGui::PopStyleColor(3);
            ImGui::EndGroup();
            
            ImGui::Separator();
            
            ImGui::Spacing();
            
            // Inputs
            char ipBuf[128];
            strlcpy(ipBuf, cb.GetUIServerIP().c_str(), sizeof(ipBuf));
            ImGui::PushItemWidth(-1);
            ImGui::TextColored(notSelectedTextColor, settings.lang_cn ? (const char*)u8"服务器 IP:Port" : "Server IP:Port");
            if (ImGui::InputText("##cbip", ipBuf, sizeof(ipBuf))) {
                cb.GetUIServerIP() = ipBuf;
            }
            
            ImGui::Spacing();
            
            char passBuf[128];
            strlcpy(passBuf, cb.GetUIPassword().c_str(), sizeof(passBuf));
            ImGui::TextColored(notSelectedTextColor, settings.lang_cn ? (const char*)u8"服务器密码 (可选)" : "Server Password (Optional)");
            if (ImGui::InputText("##cbpass", passBuf, sizeof(passBuf))) {
                cb.GetUIPassword() = passBuf;
            }
            ImGui::PopItemWidth();
            
            ImGui::Spacing();
            ImGui::Separator();
            ImGui::Spacing();
            
            Adbot& adbot = Adbot::getInstance();
            auto& allServers = adbot.GetServers();
            
            static char cbSearchBuf[256] = "";
            ImGui::TextColored(notSelectedTextColor, settings.lang_cn ? (const char*)u8"搜索服务器:" : "SEARCH SERVERS:");
            ImGui::SameLine(ImGui::GetWindowWidth() - 40);
            if (ImGui::Button(ICON_FA_SYNC "##cbrefresh", ImVec2(30, 0))) {
                adbot.FetchServerList();
            }
            if (ImGui::IsItemHovered()) ImGui::SetTooltip(settings.lang_cn ? (const char*)u8"刷新列表" : "Refresh List");

            ImGui::PushItemWidth(-1);
            if (ImGui::InputTextWithHint("##cbsearch", settings.lang_cn ? (const char*)u8"搜索..." : "Search...", cbSearchBuf, sizeof(cbSearchBuf))) {
                // Search updated
            }
            ImGui::PopItemWidth();
            
            if (allServers.empty()) {
                if (ImGui::Button(settings.lang_cn ? (const char*)u8"获取服务器列表" : "Fetch Server List", ImVec2(-1, 25))) {
                    adbot.FetchServerList();
                }
            } else {
                float searchHeight = 120.0f; // Fixed height for search results
                ImGui::BeginChild("SearchScrollArea", ImVec2(0, searchHeight), true);
                
                std::string searchStr = cbSearchBuf;
                std::transform(searchStr.begin(), searchStr.end(), searchStr.begin(), ::tolower);
                
                int matchCount = 0;
                for (const auto& srv : allServers) {
                    std::string lowerName = srv.name;
                    std::transform(lowerName.begin(), lowerName.end(), lowerName.begin(), ::tolower);
                    std::string lowerIP = srv.ip;
                    std::transform(lowerIP.begin(), lowerIP.end(), lowerIP.begin(), ::tolower);
                    
                    if (searchStr.empty() || lowerName.find(searchStr) != std::string::npos || lowerIP.find(searchStr) != std::string::npos) {
                        matchCount++;
                        ImGui::PushID(matchCount);
                        
                        bool isSelected = (cb.GetUIServerIP() == (srv.ip + ":" + std::to_string(srv.port)));
                        
                        ImGui::PushStyleColor(ImGuiCol_Header, isSelected ? ImVec4(btnActiveCol.x, btnActiveCol.y, btnActiveCol.z, 0.3f) : ImVec4(0,0,0,0));
                        ImGui::PushStyleColor(ImGuiCol_HeaderHovered, ImVec4(btnActiveCol.x, btnActiveCol.y, btnActiveCol.z, 0.15f));
                        ImGui::PushStyleColor(ImGuiCol_HeaderActive, ImVec4(btnActiveCol.x, btnActiveCol.y, btnActiveCol.z, 0.25f));

                        if (ImGui::Selectable("##cb_srv_row", isSelected, ImGuiSelectableFlags_AllowItemOverlap, ImVec2(0, 35))) {
                            char ipFull[128];
                            snprintf(ipFull, sizeof(ipFull), "%s:%d", srv.ip.c_str(), srv.port);
                            cb.GetUIServerIP() = ipFull;
                        }

                        ImGui::SameLine(10);
                        ImGui::BeginGroup();
                        {
                            ImGui::SetWindowFontScale(0.9f);
                            std::string prefix = srv.HasPassword ? (std::string(ICON_FA_LOCK) + " ") : "";
                            ImGui::TextColored(isSelected ? itemCol : textCol, "%s%s", prefix.c_str(), srv.name.c_str());
                            ImGui::SetWindowFontScale(0.75f);
                            ImGui::TextColored(notSelectedTextColor, "%s %s:%d  |  %s %s", ICON_FA_LINK, srv.ip.c_str(), srv.port, ICON_FA_GLOBE, srv.region.c_str());
                            ImGui::SetWindowFontScale(0.85f);
                        }
                        ImGui::EndGroup();

                        ImGui::SameLine(ImGui::GetWindowWidth() - 85);
                        ImGui::TextColored(itemCol, "%s %d P", ICON_FA_USERS, srv.NumPlayers);

                        ImGui::PopStyleColor(3);
                        ImGui::PopID();
                        ImGui::Separator();
                    }
                }
                
                if (matchCount == 0 && !searchStr.empty()) {
                    ImGui::TextColored(notSelectedTextColor, settings.lang_cn ? (const char*)u8"未找到匹配的服务器。" : "No matching servers found.");
                }
                
                ImGui::EndChild();
            }
            
            ImGui::Spacing();
            ImGui::Separator();
            
            ImGui::TextColored(itemCol, "%s", settings.lang_cn ? (const char*)u8"注意：开启状态下此功能每10秒执行一次。\n它将加入服务器并尝试导致崩溃。" : "Note: The crash logic operates automatically every 10 seconds while ON.\nIt will join the server and attempt to crash it.");
            
            ImGui::EndTabItem();
        }
        
        ImGui::EndTabBar();
        ImGui::Spacing();
        ImGui::Separator();
        ImGui::Spacing();
    }
    
    // Always call HandleCrashBot so its text overlays work regardless of tab
    CrashBot::getInstance().HandleCrashBot();
    
    ImGui::End();
}
