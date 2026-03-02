
ARCHS = arm64
TARGET = iphone:clang:16.5:14

DEBUG = 0
FINALPACKAGE = 1
FOR_RELEASE = 1

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = AsuraADBot

# Disable stupid errors when compiling with c++20
$(TWEAK_NAME)_USE_MODULES = 0

$(TWEAK_NAME)_FRAMEWORKS = UIKit Metal MetalKit Foundation CFNetwork CoreFoundation Security QuartzCore CoreGraphics CoreText AVFoundation Accelerate GLKit SystemConfiguration GameController ImageIO
$(TWEAK_NAME)_CFLAGS = -fobjc-arc -Wall -Wno-deprecated-declarations -Wno-unused-variable -Wno-unused-value -Wno-unused-function -I./ImGui -I./Utilites 
$(TWEAK_NAME)_CCFLAGS = -std=c++20 -fno-rtti -Wall -Wno-deprecated-declarations -Wno-unused-variable -Wno-unused-value -Wno-unused-function -Wno-writable-strings -Wno-unused-private-field -Wno-class-conversion -I./ImGui -I./Utilites

$(TWEAK_NAME)_LDFLAGS += -L$(THEOS_PROJECT_DIR)/lib
$(TWEAK_NAME)_LIBRARIES += fmt 

# disable debug symbols, comment out for debugging purposes
CFLAGS += -fvisibility=hidden -fvisibility-inlines-hidden
CCFLAGS += -fvisibility=hidden -fvisibility-inlines-hidden



$(TWEAK_NAME)_FILES = $(wildcard ImGui/*.cpp) ImGui/imgui_impl_metal.mm $(wildcard Menu/*.mm) $(wildcard MenuLoad/*.mm) $(wildcard MenuLoad/*.m) $(wildcard Source/*.mm) $(wildcard Utilities/CGuardMemory/*.cpp) $(wildcard Utilities/BreakpointHook/*.c) $(wildcard Source/Keyboard/*.mm) $(wildcard Source/Keyboard/views/*.c) $(wildcard Source/UnrealEngine/*.mm)

include $(THEOS_MAKE_PATH)/tweak.mk
include $(THEOS)/makefiles/aggregate.mk

after-package::
	@echo "Copying .dylib to packages directory..."
	@mkdir -p packages
	@cp .theos/obj/AsuraADBot.dylib packages/AsuraADBot.dylib
