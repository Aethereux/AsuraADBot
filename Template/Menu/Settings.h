#pragma once

#include <string>
#include "imgui.h"
#include <mach-o/dyld.h>
#include <mach/mach.h>
#include <iostream>
#include <filesystem>
#include <fstream>
#include <vector>

class Settings
{
public:
    ImVec2 MenuSize = ImVec2{ 500, 305 };

    // UI state
    bool lang_cn = true;
    bool show_servers = false;
    bool CrashAfterAnnounce = false;

    // hide all
    bool StreamerMode = false;
    // add more options here
    
    std::string ServerIP = "";
    std::string Password = "";
    std::vector<std::string> Messages;
    
public:
    
    static Settings& GetInstance()
    {
        static Settings Instance{};
        return Instance;
    }
    
    static inline std::filesystem::path FilePath = std::filesystem::path(std::string(getenv("HOME")) + "/Documents/Settings.txt");

    void Save() 
    {
        std::ofstream OutFile(FilePath, std::ios::binary | std::ios::trunc);
        OutFile.write(reinterpret_cast<const char*>(&MenuSize), sizeof(MenuSize));
        OutFile.write(reinterpret_cast<const char*>(&lang_cn), sizeof(lang_cn));
        OutFile.write(reinterpret_cast<const char*>(&show_servers), sizeof(show_servers));
        OutFile.write(reinterpret_cast<const char*>(&CrashAfterAnnounce), sizeof(CrashAfterAnnounce));
        OutFile.write(reinterpret_cast<const char*>(&StreamerMode), sizeof(StreamerMode));
        
        // Save CrashBot strings
        size_t ipLen = ServerIP.length();
        OutFile.write(reinterpret_cast<const char*>(&ipLen), sizeof(ipLen));
        OutFile.write(ServerIP.data(), ipLen);

        size_t passLen = Password.length();
        OutFile.write(reinterpret_cast<const char*>(&passLen), sizeof(passLen));
        OutFile.write(Password.data(), passLen);

        size_t count = Messages.size();
        OutFile.write(reinterpret_cast<const char*>(&count), sizeof(count));
        for (const auto& msg : Messages) {
            size_t len = msg.length();
            OutFile.write(reinterpret_cast<const char*>(&len), sizeof(len));
            OutFile.write(msg.c_str(), len);
        }
        OutFile.close();
    }

    void Load() 
    {
        if (std::filesystem::exists(FilePath)) 
        {
            std::ifstream InFile(FilePath, std::ios::binary);
            InFile.read(reinterpret_cast<char*>(&MenuSize), sizeof(MenuSize));
            InFile.read(reinterpret_cast<char*>(&lang_cn), sizeof(lang_cn));
            InFile.read(reinterpret_cast<char*>(&show_servers), sizeof(show_servers));
            InFile.read(reinterpret_cast<char*>(&CrashAfterAnnounce), sizeof(CrashAfterAnnounce));
            InFile.read(reinterpret_cast<char*>(&StreamerMode), sizeof(StreamerMode));
            
            // Load CrashBot strings
            size_t ipLen = 0;
            if (InFile.read(reinterpret_cast<char*>(&ipLen), sizeof(ipLen)) && ipLen < 1000) {
                ServerIP.resize(ipLen);
                InFile.read(&ServerIP[0], ipLen);
            }

            size_t passLen = 0;
            if (InFile.read(reinterpret_cast<char*>(&passLen), sizeof(passLen)) && passLen < 1000) {
                Password.resize(passLen);
                InFile.read(&Password[0], passLen);
            }

            size_t count = 0;
            if (InFile.read(reinterpret_cast<char*>(&count), sizeof(count))) {
                if (count < 10000) { // Safety check against old runtime files
                    Messages.clear();
                    for (size_t i = 0; i < count; ++i) {
                        size_t len = 0;
                        if (InFile.read(reinterpret_cast<char*>(&len), sizeof(len)) && len < 10000) {
                            std::string msg(len, '\0');
                            InFile.read(&msg[0], len);
                            Messages.push_back(msg);
                        }
                    }
                }
            }
            InFile.close();
        }
    }
    
    void Reset()
    {
        *this = Settings{};
        return Save();
    }
    
private:
    
    // constructed once, will be overriden by the Load function
    Settings() : MenuSize(ImVec2(500, 305)) {};
    ~Settings() { };
};
