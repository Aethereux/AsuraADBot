#pragma once

#include "ImGuiDrawView.h"
#include "MenuLoad.h"

#include "imgui.h"
#include "imgui_internal.h"
#include "imgui_impl_metal.h"

#include "../Utilities/Singleton.h"
#include "../Utilities/Memory.h"
#include "../Utilities/Macros.h"

#include "../Utilities/Format/format.h"
#include "../Utilities/Format/xchar.h"
#include "../Utilities/Format/core.h"

#include <stdio.h>
#include <vector>
#include <map>
#include <unistd.h>
#include <string.h>
#include <vector>
#include <functional>
#include <iostream>
#include <queue>
#include <codecvt>
#include <mutex>
#include <unordered_set>
#include <concepts>
#include <unordered_map>
#include <regex>
#include <array>

#import <Metal/Metal.h>
#import <MetalKit/MetalKit.h>
#import <Foundation/Foundation.h>
#import <Security/Security.h>
#import <os/log.h>
#import <dlfcn.h>
#import <mach-o/dyld.h>
#import <mach/mach.h>
#import <cmath>
#import <pthread/pthread.h>

#import <CommonCrypto/CommonDigest.h>

inline UIButton* GInvisibleMenuButton = nullptr;
inline UIButton* GVisibleMenuButton = nullptr;
inline MenuInteraction* GMenuTouchView = nullptr;
inline UITextField* GHideRecordTextField = nullptr;
inline UIView* GHideRecordView = nullptr;

inline ImFont* GIconFont = nullptr;
inline ImFont* Font = nullptr;


template<int32 Len>
struct StringLiteral
{
    char Chars[Len];

    consteval StringLiteral(const char(&String)[Len])
    {
        std::copy_n(String, Len, Chars);
    }

    operator std::string() const
    {
        return static_cast<const char*>(Chars);
    }
};

FORCEINLINE void CrashSafe()
{
    *(volatile int*)0 = 1;
    return;
}

template<typename To>
FORCEINLINE To* Cast(void* Src)
{
    return static_cast<To*>(Src);
}

template<typename To>
FORCEINLINE const To* Cast(const void* Src)
{
    return static_cast<const To*>(Src);
}

struct
{
    int Width;
    int Height;
    int HalfWidth;
    int HalfHeight;
    int Scale;
    
    void Init()
    {
        this->Height = [UIScreen mainScreen].bounds.size.height;
        this->Width = [UIScreen mainScreen].bounds.size.width;
        this->HalfHeight = this->Height / 2;
        this->HalfWidth = this->Width / 2;
        this->Scale = [UIScreen mainScreen].scale;
    }
    
} inline ScreenRect;

#include "Menu/Settings.h"

static Settings &settings = Settings::GetInstance();

static std::filesystem::path GetDocumentsPath()
{
    return std::filesystem::path(getenv("HOME")) / "Documents";
}

static NSString* DocumentsImageCacheDir() {
    std::filesystem::path dir = GetDocumentsPath() / "ImageCache";
    std::error_code ec;
    std::filesystem::create_directories(dir, ec);
    return @(dir.string().c_str());
}

static NSString* SHA256String(NSString *s) {
    const char *cstr = s.UTF8String;
    unsigned char digest[CC_SHA256_DIGEST_LENGTH];
    CC_SHA256(cstr, (CC_LONG)strlen(cstr), digest);
    NSMutableString *hex = [NSMutableString stringWithCapacity:CC_SHA256_DIGEST_LENGTH*2];
    for (int i = 0; i < CC_SHA256_DIGEST_LENGTH; i++) [hex appendFormat:@"%02x", digest[i]];
    return hex;
}

static NSString* CacheFilePathForURL(NSURL *url) {
    // Store raw bytes so we can reconstruct animated UIImage later
    NSString *name = [SHA256String(url.absoluteString) stringByAppendingString:@".bin"];
    return [DocumentsImageCacheDir() stringByAppendingPathComponent:name];
}

static void ExcludeFromBackup(NSString *path) {
    NSURL *u = [NSURL fileURLWithPath:path];
    [u setResourceValue:@YES forKey:NSURLIsExcludedFromBackupKey error:nil];
}

