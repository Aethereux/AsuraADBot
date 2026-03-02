#include "Includes.h"
#include "Source/Main.h"
#include "Menu/UserMenu.h"
#include "MXSystemKeyboard.h"
#include "../Menu/Settings.h"

#import "../Resources/Fonts.h"

@interface ImGuiDrawView () <MTKViewDelegate, MXSystemKeyboardDelegate>

@property (nonatomic, strong) id <MTLDevice> device;
@property (nonatomic, strong) id <MTLCommandQueue> commandQueue;

@end

@implementation ImGuiDrawView
{
    MXSystemKeyboard *_systemKeyboard;
}


static bool MenDeal = true;

- (instancetype)initWithNibName:(nullable NSString *)nibNameOrNil bundle:(nullable NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (!self) return nil;

    _device = MTLCreateSystemDefaultDevice();
    if (!_device) abort();
    _commandQueue = [_device newCommandQueue];

    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO &io = ImGui::GetIO(); (void)io;

    io.Fonts->Clear();
    float baseFontSize = 15.0f;
    float iconFontSize = 16.0f;
    
    FontRanges& ranges = FontRanges::GetInstance();
    
    ImFontConfig font_cfg;
    font_cfg.FontDataOwnedByAtlas = false;
    font_cfg.OversampleH = 2; // Improve horizontal clarity
    font_cfg.OversampleV = 2; // Improve vertical clarity
    font_cfg.PixelSnapH = true; // Helps with sharpness

    Font = io.Fonts->AddFontFromMemoryCompressedTTF(
        (void*)zenless_compressed_data, zenless_compressed_size,
        baseFontSize, &font_cfg, ranges.esp_ranges
    );

    static const ImWchar icons_ranges[] = { ICON_MIN_FA, ICON_MAX_FA, 0 };
    ImFontConfig icons_config;
    icons_config.MergeMode = true;
    icons_config.PixelSnapH = true;
    icons_config.FontDataOwnedByAtlas = false;

    io.Fonts->AddFontFromMemoryTTF(
        (void*)fontAwesome, sizeof(fontAwesome),
        iconFontSize, &icons_config, icons_ranges
    );
    
    io.Fonts->Build(); // Force font atlas rebuild

    ImGui_ImplMetal_Init(_device);

    return self;
}


+ (void)showChange:(BOOL)open
{
    MenDeal = open;
}

+ (BOOL)isMenuShowing
{
    return MenDeal;
}

- (MTKView *)mtkView
{
    return (MTKView *)self.view;
}

- (void)loadView
{
    CGFloat w = [UIApplication sharedApplication].windows[0].rootViewController.view.frame.size.width;
    CGFloat h = [UIApplication sharedApplication].windows[0].rootViewController.view.frame.size.height;
    self.view = [[MTKView alloc] initWithFrame:CGRectMake(0, 0, w, h)];
}

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.mtkView.device = self.device;
    self.mtkView.delegate = self;
    self.mtkView.clearColor = MTLClearColorMake(0, 0, 0, 0);
    self.mtkView.backgroundColor = [UIColor colorWithRed:0 green:0 blue:0 alpha:0];
    self.mtkView.clipsToBounds = YES;
    
    _systemKeyboard = [[MXSystemKeyboard alloc] init];
    _systemKeyboard.delegate = self;
    [self.view addSubview:_systemKeyboard];
}

- (void)updateIOWithTouchEvent:(UIEvent *)event
{
    UITouch *anyTouch = event.allTouches.anyObject;
    CGPoint touchLocation = [anyTouch locationInView:self.view];
    ImGuiIO &io = ImGui::GetIO();
    io.MousePos = ImVec2(touchLocation.x, touchLocation.y);

    BOOL hasActiveTouch = NO;
    for (UITouch *touch in event.allTouches)
    {
        if (touch.phase != UITouchPhaseEnded && touch.phase != UITouchPhaseCancelled)
        {
            hasActiveTouch = YES;
            break;
        }
    }
    io.MouseDown[0] = hasActiveTouch;
}

- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event
{
    [self updateIOWithTouchEvent:event];
}

- (void)touchesMoved:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event
{
    [self updateIOWithTouchEvent:event];
}

- (void)touchesCancelled:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event
{
    [self updateIOWithTouchEvent:event];
}

- (void)touchesEnded:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event
{
    [self updateIOWithTouchEvent:event];
}

// MXSystemKeyboardDelegate
- (void)systemKeyboard:(MXSystemKeyboard *)keyboard didReceiveKey:(unichar)key
{
    ImGuiIO& io = ImGui::GetIO();

    switch (key)
    {
        case '\n':
            io.AddKeyEvent(ImGuiKey_Enter, true);
            io.AddKeyEvent(ImGuiKey_Enter, false);
            break;
        case '\b':
            io.AddKeyEvent(ImGuiKey_Backspace, true);
            io.AddKeyEvent(ImGuiKey_Backspace, false);
            break;
        default:
            io.AddInputCharacterUTF16(key);
            break;
    }
}


- (BOOL)systemKeyboardShouldReturn:(MXSystemKeyboard *)keyboard
{
    return YES;
}

- (void)drawInMTKView:(MTKView*)view
{
    static bool initData = false;
    if (!initData) {
        Settings::GetInstance().Load();
        initData = true;
    }
    GHideRecordTextField.secureTextEntry = settings.StreamerMode;

    ImGuiIO& io = ImGui::GetIO();
    if (UIDevice.currentDevice.userInterfaceIdiom == UIUserInterfaceIdiomPad)
    {
        io.FontGlobalScale = 1.3f;
    }
    
    io.DisplaySize.x = view.bounds.size.width;
    io.DisplaySize.y = view.bounds.size.height;

    CGFloat framebufferScale = view.window.screen.nativeScale ? : UIScreen.mainScreen.nativeScale;
    io.DisplayFramebufferScale = ImVec2(framebufferScale, framebufferScale);
    io.DeltaTime = 1 / float(view.preferredFramesPerSecond ? : 30);

    id<MTLCommandBuffer> commandBuffer = [self.commandQueue commandBuffer];

    if (MenDeal)
    {
        [self.view setUserInteractionEnabled:YES];
        [self.view.superview setUserInteractionEnabled:YES];
        [GMenuTouchView setUserInteractionEnabled:YES];
    }
    else
    {
        [self.view setUserInteractionEnabled:NO];
        [self.view.superview setUserInteractionEnabled:NO];
        [GMenuTouchView setUserInteractionEnabled:NO];
    }
    
    MTLRenderPassDescriptor* renderPassDescriptor = view.currentRenderPassDescriptor;
    if (renderPassDescriptor != nil)
    {
        id <MTLRenderCommandEncoder> renderEncoder = [commandBuffer renderCommandEncoderWithDescriptor:renderPassDescriptor];
        [renderEncoder pushDebugGroup:@"Dear ImGui Rendering"];

        ImGui_ImplMetal_NewFrame(renderPassDescriptor);
        ImGui::NewFrame();
        
        ImFont* font = ImGui::GetFont();
        font->Scale = 12.f / font->FontSize;

        if (MenDeal)
        {
            UserMenu::GetInstance().RenderMenu();
        }
        Adbot::getInstance().Run();
        ImGui::Render();
        ImDrawData* draw_data = ImGui::GetDrawData();
        ImGui_ImplMetal_RenderDrawData(draw_data, commandBuffer, renderEncoder);

        [renderEncoder popDebugGroup];
        [renderEncoder endEncoding];

        [commandBuffer presentDrawable:view.currentDrawable];
    }
    
    if (io.WantTextInput != _systemKeyboard.isVisible) {
        if (io.WantTextInput)
            [_systemKeyboard present];
        else
            [_systemKeyboard dismiss];
    }
    
    [commandBuffer commit];
}

- (void)mtkView:(MTKView*)view drawableSizeWillChange:(CGSize)size {}

@end
