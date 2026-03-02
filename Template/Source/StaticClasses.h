#pragma once

#include "UnrealEngine/ScriptCore.h"

template<StringLiteral Name>
UClass* GetStaticClassImpl()
{
    static UClass* StaticClass = nullptr;

    if (StaticClass == nullptr)
        StaticClass = UObject::FindClassFast(Name);

    return StaticClass;
}

namespace StaticClasses
{
    inline UClass* Object()
    {
        return GetStaticClassImpl<"Object">();
    }
    inline UClass* SlateRemoteSettings()
    {
        return GetStaticClassImpl<"SlateRemoteSettings">();
    }
    inline UClass* ActorComponent()
    {
        return GetStaticClassImpl<"ActorComponent">();
    }
    inline UClass* ImageSharingComponent()
    {
        return GetStaticClassImpl<"ImageSharingComponent">();
    }
    inline UClass* ImageSharingFunctions()
    {
        return GetStaticClassImpl<"ImageSharingFunctions">();
    }
    inline UClass* ScreenshotComponent()
    {
        return GetStaticClassImpl<"ScreenshotComponent">();
    }
    inline UClass* LightPropagationVolumeBlendable()
    {
        return GetStaticClassImpl<"LightPropagationVolumeBlendable">();
    }
    inline UClass* AvfMediaSettings()
    {
        return GetStaticClassImpl<"AvfMediaSettings">();
    }
    inline UClass* UdpMessagingSettings()
    {
        return GetStaticClassImpl<"UdpMessagingSettings">();
    }
    inline UClass* NamedInterfaces()
    {
        return GetStaticClassImpl<"NamedInterfaces">();
    }
    inline UClass* Interface()
    {
        return GetStaticClassImpl<"Interface">();
    }
    inline UClass* TurnBasedMatchInterface()
    {
        return GetStaticClassImpl<"TurnBasedMatchInterface">();
    }
    inline UClass* BlueprintFunctionLibrary()
    {
        return GetStaticClassImpl<"BlueprintFunctionLibrary">();
    }
    inline UClass* AchievementBlueprintLibrary()
    {
        return GetStaticClassImpl<"AchievementBlueprintLibrary">();
    }
    inline UClass* OnlineBlueprintCallProxyBase()
    {
        return GetStaticClassImpl<"OnlineBlueprintCallProxyBase">();
    }
    inline UClass* AchievementQueryCallbackProxy()
    {
        return GetStaticClassImpl<"AchievementQueryCallbackProxy">();
    }
    inline UClass* AchievementWriteCallbackProxy()
    {
        return GetStaticClassImpl<"AchievementWriteCallbackProxy">();
    }
    inline UClass* ConnectionCallbackProxy()
    {
        return GetStaticClassImpl<"ConnectionCallbackProxy">();
    }
    inline UClass* CreateSessionCallbackProxy()
    {
        return GetStaticClassImpl<"CreateSessionCallbackProxy">();
    }
    inline UClass* DestroySessionCallbackProxy()
    {
        return GetStaticClassImpl<"DestroySessionCallbackProxy">();
    }
    inline UClass* EndMatchCallbackProxy()
    {
        return GetStaticClassImpl<"EndMatchCallbackProxy">();
    }
    inline UClass* EndTurnCallbackProxy()
    {
        return GetStaticClassImpl<"EndTurnCallbackProxy">();
    }
    inline UClass* FindSessionsCallbackProxy()
    {
        return GetStaticClassImpl<"FindSessionsCallbackProxy">();
    }
    inline UClass* FindTurnBasedMatchCallbackProxy()
    {
        return GetStaticClassImpl<"FindTurnBasedMatchCallbackProxy">();
    }
    inline UClass* InAppPurchaseCallbackProxy()
    {
        return GetStaticClassImpl<"InAppPurchaseCallbackProxy">();
    }
    inline UClass* InAppPurchaseQueryCallbackProxy()
    {
        return GetStaticClassImpl<"InAppPurchaseQueryCallbackProxy">();
    }
    inline UClass* InAppPurchaseRestoreCallbackProxy()
    {
        return GetStaticClassImpl<"InAppPurchaseRestoreCallbackProxy">();
    }
    inline UClass* Player()
    {
        return GetStaticClassImpl<"Player">();
    }
    inline UClass* NetConnection()
    {
        return GetStaticClassImpl<"NetConnection">();
    }
    inline UClass* IpConnection()
    {
        return GetStaticClassImpl<"IpConnection">();
    }
    inline UClass* NetDriver()
    {
        return GetStaticClassImpl<"NetDriver">();
    }
    inline UClass* IpNetDriver()
    {
        return GetStaticClassImpl<"IpNetDriver">();
    }
    inline UClass* JoinSessionCallbackProxy()
    {
        return GetStaticClassImpl<"JoinSessionCallbackProxy">();
    }
    inline UClass* LeaderboardBlueprintLibrary()
    {
        return GetStaticClassImpl<"LeaderboardBlueprintLibrary">();
    }
    inline UClass* LeaderboardFlushCallbackProxy()
    {
        return GetStaticClassImpl<"LeaderboardFlushCallbackProxy">();
    }
    inline UClass* LeaderboardQueryCallbackProxy()
    {
        return GetStaticClassImpl<"LeaderboardQueryCallbackProxy">();
    }
    inline UClass* BlueprintAsyncActionBase()
    {
        return GetStaticClassImpl<"BlueprintAsyncActionBase">();
    }
    inline UClass* LogoutCallbackProxy()
    {
        return GetStaticClassImpl<"LogoutCallbackProxy">();
    }
    inline UClass* Actor()
    {
        return GetStaticClassImpl<"Actor">();
    }
    inline UClass* OnlineBeacon()
    {
        return GetStaticClassImpl<"OnlineBeacon">();
    }
    inline UClass* OnlineBeaconClient()
    {
        return GetStaticClassImpl<"OnlineBeaconClient">();
    }
    inline UClass* OnlineBeaconHost()
    {
        return GetStaticClassImpl<"OnlineBeaconHost">();
    }
    inline UClass* OnlineBeaconHostObject()
    {
        return GetStaticClassImpl<"OnlineBeaconHostObject">();
    }
    inline UClass* OnlineEngineInterface()
    {
        return GetStaticClassImpl<"OnlineEngineInterface">();
    }
    inline UClass* OnlineEngineInterfaceImpl()
    {
        return GetStaticClassImpl<"OnlineEngineInterfaceImpl">();
    }
    inline UClass* DeveloperSettings()
    {
        return GetStaticClassImpl<"DeveloperSettings">();
    }
    inline UClass* OnlinePIESettings()
    {
        return GetStaticClassImpl<"OnlinePIESettings">();
    }
    inline UClass* OnlineSession()
    {
        return GetStaticClassImpl<"OnlineSession">();
    }
    inline UClass* OnlineSessionClient()
    {
        return GetStaticClassImpl<"OnlineSessionClient">();
    }
    inline UClass* PartyBeaconClient()
    {
        return GetStaticClassImpl<"PartyBeaconClient">();
    }
    inline UClass* PartyBeaconHost()
    {
        return GetStaticClassImpl<"PartyBeaconHost">();
    }
    inline UClass* PartyBeaconState()
    {
        return GetStaticClassImpl<"PartyBeaconState">();
    }
    inline UClass* QuitMatchCallbackProxy()
    {
        return GetStaticClassImpl<"QuitMatchCallbackProxy">();
    }
    inline UClass* ShowLoginUICallbackProxy()
    {
        return GetStaticClassImpl<"ShowLoginUICallbackProxy">();
    }
    inline UClass* TestBeaconClient()
    {
        return GetStaticClassImpl<"TestBeaconClient">();
    }
    inline UClass* TestBeaconHost()
    {
        return GetStaticClassImpl<"TestBeaconHost">();
    }
    inline UClass* TurnBasedBlueprintLibrary()
    {
        return GetStaticClassImpl<"TurnBasedBlueprintLibrary">();
    }
    inline UClass* AndroidPermissionCallbackProxy()
    {
        return GetStaticClassImpl<"AndroidPermissionCallbackProxy">();
    }
    inline UClass* AndroidPermissionFunctionLibrary()
    {
        return GetStaticClassImpl<"AndroidPermissionFunctionLibrary">();
    }
    inline UClass* CableActor()
    {
        return GetStaticClassImpl<"CableActor">();
    }
    inline UClass* SceneComponent()
    {
        return GetStaticClassImpl<"SceneComponent">();
    }
    inline UClass* PrimitiveComponent()
    {
        return GetStaticClassImpl<"PrimitiveComponent">();
    }
    inline UClass* MeshComponent()
    {
        return GetStaticClassImpl<"MeshComponent">();
    }
    inline UClass* CableComponent()
    {
        return GetStaticClassImpl<"CableComponent">();
    }
    inline UClass* CustomMeshComponent()
    {
        return GetStaticClassImpl<"CustomMeshComponent">();
    }
    inline UClass* LocationServices()
    {
        return GetStaticClassImpl<"LocationServices">();
    }
    inline UClass* LocationServicesImpl()
    {
        return GetStaticClassImpl<"LocationServicesImpl">();
    }
    inline UClass* MobileInstalledContent()
    {
        return GetStaticClassImpl<"MobileInstalledContent">();
    }
    inline UClass* MobilePendingContent()
    {
        return GetStaticClassImpl<"MobilePendingContent">();
    }
    inline UClass* MobilePatchingLibrary()
    {
        return GetStaticClassImpl<"MobilePatchingLibrary">();
    }
    inline UClass* MovementComponent()
    {
        return GetStaticClassImpl<"MovementComponent">();
    }
    inline UClass* NavMovementComponent()
    {
        return GetStaticClassImpl<"NavMovementComponent">();
    }
    inline UClass* PawnMovementComponent()
    {
        return GetStaticClassImpl<"PawnMovementComponent">();
    }
    inline UClass* WheeledVehicleMovementComponent()
    {
        return GetStaticClassImpl<"WheeledVehicleMovementComponent">();
    }
    inline UClass* SimpleWheeledVehicleMovementComponent()
    {
        return GetStaticClassImpl<"SimpleWheeledVehicleMovementComponent">();
    }
    inline UClass* DataAsset()
    {
        return GetStaticClassImpl<"DataAsset">();
    }
    inline UClass* TireConfig()
    {
        return GetStaticClassImpl<"TireConfig">();
    }
    inline UClass* AnimInstance()
    {
        return GetStaticClassImpl<"AnimInstance">();
    }
    inline UClass* VehicleAnimInstance()
    {
        return GetStaticClassImpl<"VehicleAnimInstance">();
    }
    inline UClass* VehicleWheel()
    {
        return GetStaticClassImpl<"VehicleWheel">();
    }
    inline UClass* Pawn()
    {
        return GetStaticClassImpl<"Pawn">();
    }
    inline UClass* WheeledVehicle()
    {
        return GetStaticClassImpl<"WheeledVehicle">();
    }
    inline UClass* WheeledVehicleMovementComponent4W()
    {
        return GetStaticClassImpl<"WheeledVehicleMovementComponent4W">();
    }
    inline UClass* KismetProceduralMeshLibrary()
    {
        return GetStaticClassImpl<"KismetProceduralMeshLibrary">();
    }
    inline UClass* ProceduralMeshComponent()
    {
        return GetStaticClassImpl<"ProceduralMeshComponent">();
    }
    inline UClass* Visual()
    {
        return GetStaticClassImpl<"Visual">();
    }
    inline UClass* Widget()
    {
        return GetStaticClassImpl<"Widget">();
    }
    inline UClass* PanelWidget()
    {
        return GetStaticClassImpl<"PanelWidget">();
    }
    inline UClass* ContentWidget()
    {
        return GetStaticClassImpl<"ContentWidget">();
    }
    inline UClass* Button()
    {
        return GetStaticClassImpl<"Button">();
    }
    inline UClass* CustomCanvasWidget()
    {
        return GetStaticClassImpl<"CustomCanvasWidget">();
    }
    inline UClass* DataListEntryButton()
    {
        return GetStaticClassImpl<"DataListEntryButton">();
    }
    inline UClass* AdminPlayerInfoEntryButton()
    {
        return GetStaticClassImpl<"AdminPlayerInfoEntryButton">();
    }
    inline UClass* AllPaintingsEntryButton()
    {
        return GetStaticClassImpl<"AllPaintingsEntryButton">();
    }
    inline UClass* AllPlayersEntryButton()
    {
        return GetStaticClassImpl<"AllPlayersEntryButton">();
    }
    inline UClass* Brush()
    {
        return GetStaticClassImpl<"Brush">();
    }
    inline UClass* Volume()
    {
        return GetStaticClassImpl<"Volume">();
    }
    inline UClass* AmberDropper()
    {
        return GetStaticClassImpl<"AmberDropper">();
    }
    inline UClass* AnimInstance_BaseHumanAnim()
    {
        return GetStaticClassImpl<"AnimInstance_BaseHumanAnim">();
    }
    inline UClass* AnimInstance_DinoRootBoneName()
    {
        return GetStaticClassImpl<"AnimInstance_DinoRootBoneName">();
    }
    inline UClass* AnimInstance_DinoRootTransform()
    {
        return GetStaticClassImpl<"AnimInstance_DinoRootTransform">();
    }
    inline UClass* AnimNotify()
    {
        return GetStaticClassImpl<"AnimNotify">();
    }
    inline UClass* AnimNotify_CustomEvent()
    {
        return GetStaticClassImpl<"AnimNotify_CustomEvent">();
    }
    inline UClass* AnimNotify_StopSound()
    {
        return GetStaticClassImpl<"AnimNotify_StopSound">();
    }
    inline UClass* AnimNotifyState()
    {
        return GetStaticClassImpl<"AnimNotifyState">();
    }
    inline UClass* AnimNotifyState_Custom()
    {
        return GetStaticClassImpl<"AnimNotifyState_Custom">();
    }
    inline UClass* Info()
    {
        return GetStaticClassImpl<"Info">();
    }
    inline UClass* ArkSkySphere()
    {
        return GetStaticClassImpl<"ArkSkySphere">();
    }
    inline UClass* AutoJumpVolume()
    {
        return GetStaticClassImpl<"AutoJumpVolume">();
    }
    inline UClass* Controller()
    {
        return GetStaticClassImpl<"Controller">();
    }
    inline UClass* PlayerController()
    {
        return GetStaticClassImpl<"PlayerController">();
    }
    inline UClass* BasePlayerController()
    {
        return GetStaticClassImpl<"BasePlayerController">();
    }
    inline UClass* GameStateBase()
    {
        return GetStaticClassImpl<"GameStateBase">();
    }
    inline UClass* GameState()
    {
        return GetStaticClassImpl<"GameState">();
    }
    inline UClass* ShooterGameState()
    {
        return GetStaticClassImpl<"ShooterGameState">();
    }
    inline UClass* BattleGameState()
    {
        return GetStaticClassImpl<"BattleGameState">();
    }
    inline UClass* BiomeZoneVolumeBase()
    {
        return GetStaticClassImpl<"BiomeZoneVolumeBase">();
    }
    inline UClass* BiomeZoneGridVolume()
    {
        return GetStaticClassImpl<"BiomeZoneGridVolume">();
    }
    inline UClass* BiomeZoneSettings()
    {
        return GetStaticClassImpl<"BiomeZoneSettings">();
    }
    inline UClass* BiomeZoneVolume()
    {
        return GetStaticClassImpl<"BiomeZoneVolume">();
    }
    inline UClass* BTNode()
    {
        return GetStaticClassImpl<"BTNode">();
    }
    inline UClass* BTAuxiliaryNode()
    {
        return GetStaticClassImpl<"BTAuxiliaryNode">();
    }
    inline UClass* BTService()
    {
        return GetStaticClassImpl<"BTService">();
    }
    inline UClass* BTService_BlackboardBase()
    {
        return GetStaticClassImpl<"BTService_BlackboardBase">();
    }
    inline UClass* BTService_FindTarget()
    {
        return GetStaticClassImpl<"BTService_FindTarget">();
    }
    inline UClass* BTService_UpdateAggro()
    {
        return GetStaticClassImpl<"BTService_UpdateAggro">();
    }
    inline UClass* BTTaskNode()
    {
        return GetStaticClassImpl<"BTTaskNode">();
    }
    inline UClass* BTTask_AttackTarget()
    {
        return GetStaticClassImpl<"BTTask_AttackTarget">();
    }
    inline UClass* BTTask_BlackboardBase()
    {
        return GetStaticClassImpl<"BTTask_BlackboardBase">();
    }
    inline UClass* BTTask_GetRandomWanderDestination()
    {
        return GetStaticClassImpl<"BTTask_GetRandomWanderDestination">();
    }
    inline UClass* CaveVolume()
    {
        return GetStaticClassImpl<"CaveVolume">();
    }
    inline UClass* CheatFunctionInfoEntryButton()
    {
        return GetStaticClassImpl<"CheatFunctionInfoEntryButton">();
    }
    inline UClass* GameCheatHelper()
    {
        return GetStaticClassImpl<"GameCheatHelper">();
    }
    inline UClass* UserWidget()
    {
        return GetStaticClassImpl<"UserWidget">();
    }
    inline UClass* UI_CheatButton()
    {
        return GetStaticClassImpl<"UI_CheatButton">();
    }
    inline UClass* PrimalUI()
    {
        return GetStaticClassImpl<"PrimalUI">();
    }
    inline UClass* UI_GameCheatUI()
    {
        return GetStaticClassImpl<"UI_GameCheatUI">();
    }
    inline UClass* CoverFlow()
    {
        return GetStaticClassImpl<"CoverFlow">();
    }
    inline UClass* CrouchingVolume()
    {
        return GetStaticClassImpl<"CrouchingVolume">();
    }
    inline UClass* CustomActorList()
    {
        return GetStaticClassImpl<"CustomActorList">();
    }
    inline UClass* GameModeBase()
    {
        return GetStaticClassImpl<"GameModeBase">();
    }
    inline UClass* GameMode()
    {
        return GetStaticClassImpl<"GameMode">();
    }
    inline UClass* ShooterGameMode()
    {
        return GetStaticClassImpl<"ShooterGameMode">();
    }
    inline UClass* CustomGameMode()
    {
        return GetStaticClassImpl<"CustomGameMode">();
    }
    inline UClass* CustomGameState()
    {
        return GetStaticClassImpl<"CustomGameState">();
    }
    inline UClass* DamageVolumeBase()
    {
        return GetStaticClassImpl<"DamageVolumeBase">();
    }
    inline UClass* DamageVolumeSwamp()
    {
        return GetStaticClassImpl<"DamageVolumeSwamp">();
    }
    inline UClass* DataListEntryButton_PrimalFolder()
    {
        return GetStaticClassImpl<"DataListEntryButton_PrimalFolder">();
    }
    inline UClass* DataListEntryButton_PrimalItem()
    {
        return GetStaticClassImpl<"DataListEntryButton_PrimalItem">();
    }
    inline UClass* DataListEntryButton_PrimalItemRedirect()
    {
        return GetStaticClassImpl<"DataListEntryButton_PrimalItemRedirect">();
    }
    inline UClass* DataListEntryInterface()
    {
        return GetStaticClassImpl<"DataListEntryInterface">();
    }
    inline UClass* DataListEntryWidget()
    {
        return GetStaticClassImpl<"DataListEntryWidget">();
    }
    inline UClass* ScrollBox()
    {
        return GetStaticClassImpl<"ScrollBox">();
    }
    inline UClass* DataListPanel()
    {
        return GetStaticClassImpl<"DataListPanel">();
    }
    inline UClass* DataListPanelRadial()
    {
        return GetStaticClassImpl<"DataListPanelRadial">();
    }
    inline UClass* DataListProviderInterface()
    {
        return GetStaticClassImpl<"DataListProviderInterface">();
    }
    inline UClass* DayCycleAmbientSound()
    {
        return GetStaticClassImpl<"DayCycleAmbientSound">();
    }
    inline UClass* DayCycleManager()
    {
        return GetStaticClassImpl<"DayCycleManager">();
    }
    inline UClass* DestructibleActor()
    {
        return GetStaticClassImpl<"DestructibleActor">();
    }
    inline UClass* DestroyedMeshActor()
    {
        return GetStaticClassImpl<"DestroyedMeshActor">();
    }
    inline UClass* DraggableObjectInterface()
    {
        return GetStaticClassImpl<"DraggableObjectInterface">();
    }
    inline UClass* DraggedDecoratorWidget()
    {
        return GetStaticClassImpl<"DraggedDecoratorWidget">();
    }
    inline UClass* DroppedItem()
    {
        return GetStaticClassImpl<"DroppedItem">();
    }
    inline UClass* DroppedItemEgg()
    {
        return GetStaticClassImpl<"DroppedItemEgg">();
    }
    inline UClass* DroppedItemFeather()
    {
        return GetStaticClassImpl<"DroppedItemFeather">();
    }
    inline UClass* DroppedItemLowQuality()
    {
        return GetStaticClassImpl<"DroppedItemLowQuality">();
    }
    inline UClass* DroppedItemTorch()
    {
        return GetStaticClassImpl<"DroppedItemTorch">();
    }
    inline UClass* DungeonListingService()
    {
        return GetStaticClassImpl<"DungeonListingService">();
    }
    inline UClass* UI_GenericConfirmationDialog()
    {
        return GetStaticClassImpl<"UI_GenericConfirmationDialog">();
    }
    inline UClass* UI_DungeonAccess()
    {
        return GetStaticClassImpl<"UI_DungeonAccess">();
    }
    inline UClass* DungeonEntry()
    {
        return GetStaticClassImpl<"DungeonEntry">();
    }
    inline UClass* PrimalItem()
    {
        return GetStaticClassImpl<"PrimalItem">();
    }
    inline UClass* PrimalItem_DungeonKey()
    {
        return GetStaticClassImpl<"PrimalItem_DungeonKey">();
    }
    inline UClass* DungeonActor()
    {
        return GetStaticClassImpl<"DungeonActor">();
    }
    inline UClass* DungeonDynamicActor()
    {
        return GetStaticClassImpl<"DungeonDynamicActor">();
    }
    inline UClass* WFCHelper()
    {
        return GetStaticClassImpl<"WFCHelper">();
    }
    inline UClass* DungeonTreasure()
    {
        return GetStaticClassImpl<"DungeonTreasure">();
    }
    inline UClass* DungeonRoom()
    {
        return GetStaticClassImpl<"DungeonRoom">();
    }
    inline UClass* DungeonMobRoom()
    {
        return GetStaticClassImpl<"DungeonMobRoom">();
    }
    inline UClass* DungeonTemplate()
    {
        return GetStaticClassImpl<"DungeonTemplate">();
    }
    inline UClass* DungeonTreasureSetup()
    {
        return GetStaticClassImpl<"DungeonTreasureSetup">();
    }
    inline UClass* DungeonRoomSetup()
    {
        return GetStaticClassImpl<"DungeonRoomSetup">();
    }
    inline UClass* DungeonBuilder()
    {
        return GetStaticClassImpl<"DungeonBuilder">();
    }
    inline UClass* ScrollBoxAutoSize()
    {
        return GetStaticClassImpl<"ScrollBoxAutoSize">();
    }
    inline UClass* EngramScrollList()
    {
        return GetStaticClassImpl<"EngramScrollList">();
    }
    inline UClass* EngramScrollListEntry()
    {
        return GetStaticClassImpl<"EngramScrollListEntry">();
    }
    inline UClass* EquipmentDataEntry()
    {
        return GetStaticClassImpl<"EquipmentDataEntry">();
    }
    inline UClass* EventDropper()
    {
        return GetStaticClassImpl<"EventDropper">();
    }
    inline UClass* ExplorerChest_Base()
    {
        return GetStaticClassImpl<"ExplorerChest_Base">();
    }
    inline UClass* FadingDestructibleActor()
    {
        return GetStaticClassImpl<"FadingDestructibleActor">();
    }
    inline UClass* FogOfWar()
    {
        return GetStaticClassImpl<"FogOfWar">();
    }
    inline UClass* GameModeRules()
    {
        return GetStaticClassImpl<"GameModeRules">();
    }
    inline UClass* Rules_PVP()
    {
        return GetStaticClassImpl<"Rules_PVP">();
    }
    inline UClass* Rules_PVE()
    {
        return GetStaticClassImpl<"Rules_PVE">();
    }
    inline UClass* Rules_SP()
    {
        return GetStaticClassImpl<"Rules_SP">();
    }
    inline UClass* Rules_PVX()
    {
        return GetStaticClassImpl<"Rules_PVX">();
    }
    inline UClass* Image()
    {
        return GetStaticClassImpl<"Image">();
    }
    inline UClass* GamepadImage()
    {
        return GetStaticClassImpl<"GamepadImage">();
    }
    inline UClass* GenericDataListEntry()
    {
        return GetStaticClassImpl<"GenericDataListEntry">();
    }
    inline UClass* GroupedStartComponent()
    {
        return GetStaticClassImpl<"GroupedStartComponent">();
    }
    inline UClass* NavigationObjectBase()
    {
        return GetStaticClassImpl<"NavigationObjectBase">();
    }
    inline UClass* PlayerStart()
    {
        return GetStaticClassImpl<"PlayerStart">();
    }
    inline UClass* GroupedPlayerStart()
    {
        return GetStaticClassImpl<"GroupedPlayerStart">();
    }
    inline UClass* HibernationManager()
    {
        return GetStaticClassImpl<"HibernationManager">();
    }
    inline UClass* HUDInterface()
    {
        return GetStaticClassImpl<"HUDInterface">();
    }
    inline UClass* HUDOVerlayWidget()
    {
        return GetStaticClassImpl<"HUDOVerlayWidget">();
    }
    inline UClass* HUDPredraw()
    {
        return GetStaticClassImpl<"HUDPredraw">();
    }
    inline UClass* HUDStatusBarsWidget()
    {
        return GetStaticClassImpl<"HUDStatusBarsWidget">();
    }
    inline UClass* EditableText()
    {
        return GetStaticClassImpl<"EditableText">();
    }
    inline UClass* KeyInputWidget()
    {
        return GetStaticClassImpl<"KeyInputWidget">();
    }
    inline UClass* LandscapeUtils()
    {
        return GetStaticClassImpl<"LandscapeUtils">();
    }
    inline UClass* LightingInterface()
    {
        return GetStaticClassImpl<"LightingInterface">();
    }
    inline UClass* MatineeCapture()
    {
        return GetStaticClassImpl<"MatineeCapture">();
    }
    inline UClass* MenuButton()
    {
        return GetStaticClassImpl<"MenuButton">();
    }
    inline UClass* PrimalItem_Transfer()
    {
        return GetStaticClassImpl<"PrimalItem_Transfer">();
    }
    inline UClass* NPCSpawnEntriesContainer()
    {
        return GetStaticClassImpl<"NPCSpawnEntriesContainer">();
    }
    inline UClass* BakedSpawnsComponent()
    {
        return GetStaticClassImpl<"BakedSpawnsComponent">();
    }
    inline UClass* NPCZone()
    {
        return GetStaticClassImpl<"NPCZone">();
    }
    inline UClass* CaveNPCZone()
    {
        return GetStaticClassImpl<"CaveNPCZone">();
    }
    inline UClass* NPCZoneManager()
    {
        return GetStaticClassImpl<"NPCZoneManager">();
    }
    inline UClass* NPCZoneSpawnVolume()
    {
        return GetStaticClassImpl<"NPCZoneSpawnVolume">();
    }
    inline UClass* NPCZoneVolume()
    {
        return GetStaticClassImpl<"NPCZoneVolume">();
    }
    inline UClass* ObjectSerializer()
    {
        return GetStaticClassImpl<"ObjectSerializer">();
    }
    inline UClass* OceanDivePreventionVolume()
    {
        return GetStaticClassImpl<"OceanDivePreventionVolume">();
    }
    inline UClass* OnlineSessionEntryButton()
    {
        return GetStaticClassImpl<"OnlineSessionEntryButton">();
    }
    inline UClass* PaintingCache()
    {
        return GetStaticClassImpl<"PaintingCache">();
    }
    inline UClass* PaintingStreamingComponent()
    {
        return GetStaticClassImpl<"PaintingStreamingComponent">();
    }
    inline UClass* PaintingTexture()
    {
        return GetStaticClassImpl<"PaintingTexture">();
    }
    inline UClass* PlayerHUDUI()
    {
        return GetStaticClassImpl<"PlayerHUDUI">();
    }
    inline UClass* PreviewImage()
    {
        return GetStaticClassImpl<"PreviewImage">();
    }
    inline UClass* PrimalAIState()
    {
        return GetStaticClassImpl<"PrimalAIState">();
    }
    inline UClass* PrimalAIStateDinoMeleeState()
    {
        return GetStaticClassImpl<"PrimalAIStateDinoMeleeState">();
    }
    inline UClass* PrimalAIStateDinoFlyerGrab()
    {
        return GetStaticClassImpl<"PrimalAIStateDinoFlyerGrab">();
    }
    inline UClass* PrimalAIStateDinoGrabAndReleaseState()
    {
        return GetStaticClassImpl<"PrimalAIStateDinoGrabAndReleaseState">();
    }
    inline UClass* PrimalAIStateDinoRangedState()
    {
        return GetStaticClassImpl<"PrimalAIStateDinoRangedState">();
    }
    inline UClass* PrimalAIStateDinoSpiderMinions()
    {
        return GetStaticClassImpl<"PrimalAIStateDinoSpiderMinions">();
    }
    inline UClass* PrimalAIStateDinoSpiderRangedAcidState()
    {
        return GetStaticClassImpl<"PrimalAIStateDinoSpiderRangedAcidState">();
    }
    inline UClass* PrimalAIStateDinoSpiderRangedWebState()
    {
        return GetStaticClassImpl<"PrimalAIStateDinoSpiderRangedWebState">();
    }
    inline UClass* PrimalAIStateDinoSpineyLizardTailRangeState()
    {
        return GetStaticClassImpl<"PrimalAIStateDinoSpineyLizardTailRangeState">();
    }
    inline UClass* PrimalTargetableActor()
    {
        return GetStaticClassImpl<"PrimalTargetableActor">();
    }
    inline UClass* PrimalStructure()
    {
        return GetStaticClassImpl<"PrimalStructure">();
    }
    inline UClass* PrimalArenaTeleporter()
    {
        return GetStaticClassImpl<"PrimalArenaTeleporter">();
    }
    inline UClass* PrimalAssets()
    {
        return GetStaticClassImpl<"PrimalAssets">();
    }
    inline UClass* PrimalBlueprintFunctions()
    {
        return GetStaticClassImpl<"PrimalBlueprintFunctions">();
    }
    inline UClass* SaveGameActor()
    {
        return GetStaticClassImpl<"SaveGameActor">();
    }
    inline UClass* SaveGameActorTickable()
    {
        return GetStaticClassImpl<"SaveGameActorTickable">();
    }
    inline UClass* PrimalBossArena()
    {
        return GetStaticClassImpl<"PrimalBossArena">();
    }
    inline UClass* PrimalBossArenaObstacle()
    {
        return GetStaticClassImpl<"PrimalBossArenaObstacle">();
    }
    inline UClass* Emitter()
    {
        return GetStaticClassImpl<"Emitter">();
    }
    inline UClass* PrimalEmitterSpawnable()
    {
        return GetStaticClassImpl<"PrimalEmitterSpawnable">();
    }
    inline UClass* PrimalBuff()
    {
        return GetStaticClassImpl<"PrimalBuff">();
    }
    inline UClass* PrimalBuffPersistentData()
    {
        return GetStaticClassImpl<"PrimalBuffPersistentData">();
    }
    inline UClass* PrimalCableActor()
    {
        return GetStaticClassImpl<"PrimalCableActor">();
    }
    inline UClass* PrimalCableComponent()
    {
        return GetStaticClassImpl<"PrimalCableComponent">();
    }
    inline UClass* Character()
    {
        return GetStaticClassImpl<"Character">();
    }
    inline UClass* PrimalCharacter()
    {
        return GetStaticClassImpl<"PrimalCharacter">();
    }
    inline UClass* PrimalCharacterSetting()
    {
        return GetStaticClassImpl<"PrimalCharacterSetting">();
    }
    inline UClass* PrimalCharacterStatusComponent()
    {
        return GetStaticClassImpl<"PrimalCharacterStatusComponent">();
    }
    inline UClass* PrimalColorSet()
    {
        return GetStaticClassImpl<"PrimalColorSet">();
    }
    inline UClass* AIController()
    {
        return GetStaticClassImpl<"AIController">();
    }
    inline UClass* PrimalDinoAIController()
    {
        return GetStaticClassImpl<"PrimalDinoAIController">();
    }
    inline UClass* PrimalDinoCharacter()
    {
        return GetStaticClassImpl<"PrimalDinoCharacter">();
    }
    inline UClass* PrimalDinoEntry()
    {
        return GetStaticClassImpl<"PrimalDinoEntry">();
    }
    inline UClass* PrimalDinoSettings()
    {
        return GetStaticClassImpl<"PrimalDinoSettings">();
    }
    inline UClass* PrimalDinoStatusComponent()
    {
        return GetStaticClassImpl<"PrimalDinoStatusComponent">();
    }
    inline UClass* ToolTipWidget()
    {
        return GetStaticClassImpl<"ToolTipWidget">();
    }
    inline UClass* PrimalDinoToolTipWidget()
    {
        return GetStaticClassImpl<"PrimalDinoToolTipWidget">();
    }
    inline UClass* PrimalEngramEntry()
    {
        return GetStaticClassImpl<"PrimalEngramEntry">();
    }
    inline UClass* PrimalGameData()
    {
        return GetStaticClassImpl<"PrimalGameData">();
    }
    inline UClass* PrimalGameRecorder()
    {
        return GetStaticClassImpl<"PrimalGameRecorder">();
    }
    inline UClass* PrimalGlobals()
    {
        return GetStaticClassImpl<"PrimalGlobals">();
    }
    inline UClass* PrimalHarvestingComponent()
    {
        return GetStaticClassImpl<"PrimalHarvestingComponent">();
    }
    inline UClass* PrimalInventoryComponent()
    {
        return GetStaticClassImpl<"PrimalInventoryComponent">();
    }
    inline UClass* PrimalInventoryComponent_Premium()
    {
        return GetStaticClassImpl<"PrimalInventoryComponent_Premium">();
    }
    inline UClass* PrimalInventoryComponent_Static()
    {
        return GetStaticClassImpl<"PrimalInventoryComponent_Static">();
    }
    inline UClass* PrimalItem_Collar()
    {
        return GetStaticClassImpl<"PrimalItem_Collar">();
    }
    inline UClass* PrimalItem_DinoToy()
    {
        return GetStaticClassImpl<"PrimalItem_DinoToy">();
    }
    inline UClass* PrimalItem_Dye()
    {
        return GetStaticClassImpl<"PrimalItem_Dye">();
    }
    inline UClass* PrimalItem_Implant()
    {
        return GetStaticClassImpl<"PrimalItem_Implant">();
    }
    inline UClass* PrimalItem_ImprintBoost()
    {
        return GetStaticClassImpl<"PrimalItem_ImprintBoost">();
    }
    inline UClass* PrimalItem_Mailed()
    {
        return GetStaticClassImpl<"PrimalItem_Mailed">();
    }
    inline UClass* PrimalItem_Offhand()
    {
        return GetStaticClassImpl<"PrimalItem_Offhand">();
    }
    inline UClass* PrimalItem_PremiumStructure()
    {
        return GetStaticClassImpl<"PrimalItem_PremiumStructure">();
    }
    inline UClass* PrimalItem_Radio()
    {
        return GetStaticClassImpl<"PrimalItem_Radio">();
    }
    inline UClass* PrimalItem_Trophy()
    {
        return GetStaticClassImpl<"PrimalItem_Trophy">();
    }
    inline UClass* PrimalItemToolTipWidget()
    {
        return GetStaticClassImpl<"PrimalItemToolTipWidget">();
    }
    inline UClass* PrimalLocalProfile()
    {
        return GetStaticClassImpl<"PrimalLocalProfile">();
    }
    inline UClass* PrimalNotificationDrawer()
    {
        return GetStaticClassImpl<"PrimalNotificationDrawer">();
    }
    inline UClass* PrimalOfflinePlayerData()
    {
        return GetStaticClassImpl<"PrimalOfflinePlayerData">();
    }
    inline UClass* PrimalPlayerData()
    {
        return GetStaticClassImpl<"PrimalPlayerData">();
    }
    inline UClass* PrimalPlayerStatusComponent()
    {
        return GetStaticClassImpl<"PrimalPlayerStatusComponent">();
    }
    inline UClass* ShooterProjectile()
    {
        return GetStaticClassImpl<"ShooterProjectile">();
    }
    inline UClass* PrimalProjectileArrow()
    {
        return GetStaticClassImpl<"PrimalProjectileArrow">();
    }
    inline UClass* PrimalProjectileBoomerang()
    {
        return GetStaticClassImpl<"PrimalProjectileBoomerang">();
    }
    inline UClass* PrimalProjectileDilo()
    {
        return GetStaticClassImpl<"PrimalProjectileDilo">();
    }
    inline UClass* PrimalProjectileFlare()
    {
        return GetStaticClassImpl<"PrimalProjectileFlare">();
    }
    inline UClass* PrimalProjectileGrapplingHook()
    {
        return GetStaticClassImpl<"PrimalProjectileGrapplingHook">();
    }
    inline UClass* PrimalProjectileNetGun()
    {
        return GetStaticClassImpl<"PrimalProjectileNetGun">();
    }
    inline UClass* PrimalProjectileSpiderAcid()
    {
        return GetStaticClassImpl<"PrimalProjectileSpiderAcid">();
    }
    inline UClass* PrimalRaft()
    {
        return GetStaticClassImpl<"PrimalRaft">();
    }
    inline UClass* PrimalRichTextBlock()
    {
        return GetStaticClassImpl<"PrimalRichTextBlock">();
    }
    inline UClass* PrimalStoreData()
    {
        return GetStaticClassImpl<"PrimalStoreData">();
    }
    inline UClass* StoreRemoteManagement()
    {
        return GetStaticClassImpl<"StoreRemoteManagement">();
    }
    inline UClass* UI_MailboxDialog()
    {
        return GetStaticClassImpl<"UI_MailboxDialog">();
    }
    inline UClass* PrimalStructureItemContainer()
    {
        return GetStaticClassImpl<"PrimalStructureItemContainer">();
    }
    inline UClass* PrimalStructureItemContainer_PremiumBase()
    {
        return GetStaticClassImpl<"PrimalStructureItemContainer_PremiumBase">();
    }
    inline UClass* PrimalStructure_Mailbox()
    {
        return GetStaticClassImpl<"PrimalStructure_Mailbox">();
    }
    inline UClass* PrimalStructure_RaceFlag()
    {
        return GetStaticClassImpl<"PrimalStructure_RaceFlag">();
    }
    inline UClass* PrimalStructure_WarningBell()
    {
        return GetStaticClassImpl<"PrimalStructure_WarningBell">();
    }
    inline UClass* PrimalStructureAlarmClock()
    {
        return GetStaticClassImpl<"PrimalStructureAlarmClock">();
    }
    inline UClass* PrimalStructureWeaponMount()
    {
        return GetStaticClassImpl<"PrimalStructureWeaponMount">();
    }
    inline UClass* PrimalStructureArmorStand()
    {
        return GetStaticClassImpl<"PrimalStructureArmorStand">();
    }
    inline UClass* PrimalStructureBearTrap()
    {
        return GetStaticClassImpl<"PrimalStructureBearTrap">();
    }
    inline UClass* PrimalStructureBed()
    {
        return GetStaticClassImpl<"PrimalStructureBed">();
    }
    inline UClass* PrimalStructureDoor()
    {
        return GetStaticClassImpl<"PrimalStructureDoor">();
    }
    inline UClass* PrimalStructureElevatorPlatform()
    {
        return GetStaticClassImpl<"PrimalStructureElevatorPlatform">();
    }
    inline UClass* PrimalStructureElevatorTrack()
    {
        return GetStaticClassImpl<"PrimalStructureElevatorTrack">();
    }
    inline UClass* PrimalStructureExplosive()
    {
        return GetStaticClassImpl<"PrimalStructureExplosive">();
    }
    inline UClass* PrimalStructureExplosiveTransGPS()
    {
        return GetStaticClassImpl<"PrimalStructureExplosiveTransGPS">();
    }
    inline UClass* PrimalStructureItemContainer_CropPlot()
    {
        return GetStaticClassImpl<"PrimalStructureItemContainer_CropPlot">();
    }
    inline UClass* PrimalStructureItemContainer_CropPlot_VisualItems()
    {
        return GetStaticClassImpl<"PrimalStructureItemContainer_CropPlot_VisualItems">();
    }
    inline UClass* PrimalStructureItemContainer_KibbleProcessor()
    {
        return GetStaticClassImpl<"PrimalStructureItemContainer_KibbleProcessor">();
    }
    inline UClass* PrimalStructureItemContainer_LootCrate()
    {
        return GetStaticClassImpl<"PrimalStructureItemContainer_LootCrate">();
    }
    inline UClass* PrimalStructureItemContainer_Premium()
    {
        return GetStaticClassImpl<"PrimalStructureItemContainer_Premium">();
    }
    inline UClass* PrimalStructureItemContainer_ResurrectPlatform()
    {
        return GetStaticClassImpl<"PrimalStructureItemContainer_ResurrectPlatform">();
    }
    inline UClass* PrimalStructureItemContainer_Rug()
    {
        return GetStaticClassImpl<"PrimalStructureItemContainer_Rug">();
    }
    inline UClass* PrimalStructureItemContainer_SupplyCrate()
    {
        return GetStaticClassImpl<"PrimalStructureItemContainer_SupplyCrate">();
    }
    inline UClass* PrimalStructureItemContainer_VisualItems()
    {
        return GetStaticClassImpl<"PrimalStructureItemContainer_VisualItems">();
    }
    inline UClass* PrimalStructureItemContainer_WaterValve()
    {
        return GetStaticClassImpl<"PrimalStructureItemContainer_WaterValve">();
    }
    inline UClass* PrimalStructureKeypad()
    {
        return GetStaticClassImpl<"PrimalStructureKeypad">();
    }
    inline UClass* PrimalStructureLadder()
    {
        return GetStaticClassImpl<"PrimalStructureLadder">();
    }
    inline UClass* PrimalStructurePlacementArrow()
    {
        return GetStaticClassImpl<"PrimalStructurePlacementArrow">();
    }
    inline UClass* PrimalStructurePlacer()
    {
        return GetStaticClassImpl<"PrimalStructurePlacer">();
    }
    inline UClass* PrimalStructureSeaMine()
    {
        return GetStaticClassImpl<"PrimalStructureSeaMine">();
    }
    inline UClass* PrimalStructureSeating()
    {
        return GetStaticClassImpl<"PrimalStructureSeating">();
    }
    inline UClass* PrimalStructureSeatingMusic()
    {
        return GetStaticClassImpl<"PrimalStructureSeatingMusic">();
    }
    inline UClass* PrimalStructureSettings()
    {
        return GetStaticClassImpl<"PrimalStructureSettings">();
    }
    inline UClass* PrimalStructureSign()
    {
        return GetStaticClassImpl<"PrimalStructureSign">();
    }
    inline UClass* PrimalStructureSkeletalDoor()
    {
        return GetStaticClassImpl<"PrimalStructureSkeletalDoor">();
    }
    inline UClass* PrimalStructureStatue()
    {
        return GetStaticClassImpl<"PrimalStructureStatue">();
    }
    inline UClass* PrimalStructureToolTipWidget()
    {
        return GetStaticClassImpl<"PrimalStructureToolTipWidget">();
    }
    inline UClass* PrimalStructureTripwire()
    {
        return GetStaticClassImpl<"PrimalStructureTripwire">();
    }
    inline UClass* PrimalStructureTurret()
    {
        return GetStaticClassImpl<"PrimalStructureTurret">();
    }
    inline UClass* PrimalStructureTurretBallista()
    {
        return GetStaticClassImpl<"PrimalStructureTurretBallista">();
    }
    inline UClass* PrimalStructureTurretPlant()
    {
        return GetStaticClassImpl<"PrimalStructureTurretPlant">();
    }
    inline UClass* PrimalStructureWaterPipe()
    {
        return GetStaticClassImpl<"PrimalStructureWaterPipe">();
    }
    inline UClass* PrimalSupplyCrateItemSet()
    {
        return GetStaticClassImpl<"PrimalSupplyCrateItemSet">();
    }
    inline UClass* PrimalTribeData()
    {
        return GetStaticClassImpl<"PrimalTribeData">();
    }
    inline UClass* ShooterWeapon()
    {
        return GetStaticClassImpl<"ShooterWeapon">();
    }
    inline UClass* ShooterWeapon_Projectile()
    {
        return GetStaticClassImpl<"ShooterWeapon_Projectile">();
    }
    inline UClass* PrimalWeaponBow()
    {
        return GetStaticClassImpl<"PrimalWeaponBow">();
    }
    inline UClass* PrimalWeaponBoomerang()
    {
        return GetStaticClassImpl<"PrimalWeaponBoomerang">();
    }
    inline UClass* ShooterWeapon_Melee()
    {
        return GetStaticClassImpl<"ShooterWeapon_Melee">();
    }
    inline UClass* PrimalWeaponElectronicBinoculars()
    {
        return GetStaticClassImpl<"PrimalWeaponElectronicBinoculars">();
    }
    inline UClass* PrimalWeaponGPS()
    {
        return GetStaticClassImpl<"PrimalWeaponGPS">();
    }
    inline UClass* PrimalWeaponGrapplingHook()
    {
        return GetStaticClassImpl<"PrimalWeaponGrapplingHook">();
    }
    inline UClass* PrimalWeaponGrenade()
    {
        return GetStaticClassImpl<"PrimalWeaponGrenade">();
    }
    inline UClass* PrimalWheeledVehicleCharacter()
    {
        return GetStaticClassImpl<"PrimalWheeledVehicleCharacter">();
    }
    inline UClass* PrimalWheeledVehicleDustType()
    {
        return GetStaticClassImpl<"PrimalWheeledVehicleDustType">();
    }
    inline UClass* PrimalWordFilter()
    {
        return GetStaticClassImpl<"PrimalWordFilter">();
    }
    inline UClass* WorldSettings()
    {
        return GetStaticClassImpl<"WorldSettings">();
    }
    inline UClass* PrimalWorldSettings()
    {
        return GetStaticClassImpl<"PrimalWorldSettings">();
    }
    inline UClass* ProgressBarWidget()
    {
        return GetStaticClassImpl<"ProgressBarWidget">();
    }
    inline UClass* PursuitDatabase()
    {
        return GetStaticClassImpl<"PursuitDatabase">();
    }
    inline UClass* PrimalPursuit()
    {
        return GetStaticClassImpl<"PrimalPursuit">();
    }
    inline UClass* PursuitListItem()
    {
        return GetStaticClassImpl<"PursuitListItem">();
    }
    inline UClass* Rules_PVX_Zone()
    {
        return GetStaticClassImpl<"Rules_PVX_Zone">();
    }
    inline UClass* Rules_PVXClock_Zone()
    {
        return GetStaticClassImpl<"Rules_PVXClock_Zone">();
    }
    inline UClass* PVX_PVPVolume()
    {
        return GetStaticClassImpl<"PVX_PVPVolume">();
    }
    inline UClass* RacerEntry()
    {
        return GetStaticClassImpl<"RacerEntry">();
    }
    inline UClass* RadialSelectorHUD()
    {
        return GetStaticClassImpl<"RadialSelectorHUD">();
    }
    inline UClass* RadialSelectorHUD_Inventory()
    {
        return GetStaticClassImpl<"RadialSelectorHUD_Inventory">();
    }
    inline UClass* RadialSelectorHUD_MultiUse()
    {
        return GetStaticClassImpl<"RadialSelectorHUD_MultiUse">();
    }
    inline UClass* RadialSelectorHUD_PlayerAction()
    {
        return GetStaticClassImpl<"RadialSelectorHUD_PlayerAction">();
    }
    inline UClass* RadialSelectorMobile()
    {
        return GetStaticClassImpl<"RadialSelectorMobile">();
    }
    inline UClass* RadialSelectorMobileLeft()
    {
        return GetStaticClassImpl<"RadialSelectorMobileLeft">();
    }
    inline UClass* RadialSelectorMobileRight()
    {
        return GetStaticClassImpl<"RadialSelectorMobileRight">();
    }
    inline UClass* RadialSelectorMobileWidget()
    {
        return GetStaticClassImpl<"RadialSelectorMobileWidget">();
    }
    inline UClass* RCONServer()
    {
        return GetStaticClassImpl<"RCONServer">();
    }
    inline UClass* ScrollBoxExpandable()
    {
        return GetStaticClassImpl<"ScrollBoxExpandable">();
    }
    inline UClass* ScrollBoxStore()
    {
        return GetStaticClassImpl<"ScrollBoxStore">();
    }
    inline UClass* ServerInfoInfoEntryButton()
    {
        return GetStaticClassImpl<"ServerInfoInfoEntryButton">();
    }
    inline UClass* ServerScrollListEntry()
    {
        return GetStaticClassImpl<"ServerScrollListEntry">();
    }
    inline UClass* ServerScrollList()
    {
        return GetStaticClassImpl<"ServerScrollList">();
    }
    inline UClass* ServerListMobileInterface()
    {
        return GetStaticClassImpl<"ServerListMobileInterface">();
    }
    inline UClass* ShooterAdvertising()
    {
        return GetStaticClassImpl<"ShooterAdvertising">();
    }
    inline UClass* CameraModifier()
    {
        return GetStaticClassImpl<"CameraModifier">();
    }
    inline UClass* CameraModifier_CameraShake()
    {
        return GetStaticClassImpl<"CameraModifier_CameraShake">();
    }
    inline UClass* ShooterCameraModifier_CameraShake()
    {
        return GetStaticClassImpl<"ShooterCameraModifier_CameraShake">();
    }
    inline UClass* ShooterCharacter()
    {
        return GetStaticClassImpl<"ShooterCharacter">();
    }
    inline UClass* CharacterMovementComponent()
    {
        return GetStaticClassImpl<"CharacterMovementComponent">();
    }
    inline UClass* ShooterCharacterMovement()
    {
        return GetStaticClassImpl<"ShooterCharacterMovement">();
    }
    inline UClass* CheatManager()
    {
        return GetStaticClassImpl<"CheatManager">();
    }
    inline UClass* ShooterPlayerController()
    {
        return GetStaticClassImpl<"ShooterPlayerController">();
    }
    inline UClass* ShooterCheatManager()
    {
        return GetStaticClassImpl<"ShooterCheatManager">();
    }
    inline UClass* CheckBox()
    {
        return GetStaticClassImpl<"CheckBox">();
    }
    inline UClass* ShooterCheckBox()
    {
        return GetStaticClassImpl<"ShooterCheckBox">();
    }
    inline UClass* DamageType()
    {
        return GetStaticClassImpl<"DamageType">();
    }
    inline UClass* ShooterDamageType()
    {
        return GetStaticClassImpl<"ShooterDamageType">();
    }
    inline UClass* Engine()
    {
        return GetStaticClassImpl<"Engine">();
    }
    inline UClass* GameEngine()
    {
        return GetStaticClassImpl<"GameEngine">();
    }
    inline UClass* ShooterEngine()
    {
        return GetStaticClassImpl<"ShooterEngine">();
    }
    inline UClass* ShooterGame_Menu()
    {
        return GetStaticClassImpl<"ShooterGame_Menu">();
    }
    inline UClass* ShooterGameGameModeBase()
    {
        return GetStaticClassImpl<"ShooterGameGameModeBase">();
    }
    inline UClass* GameInstance()
    {
        return GetStaticClassImpl<"GameInstance">();
    }
    inline UClass* ShooterGameInstance()
    {
        return GetStaticClassImpl<"ShooterGameInstance">();
    }
    inline UClass* GameSession()
    {
        return GetStaticClassImpl<"GameSession">();
    }
    inline UClass* ShooterGameSession()
    {
        return GetStaticClassImpl<"ShooterGameSession">();
    }
    inline UClass* GameUserSettings()
    {
        return GetStaticClassImpl<"GameUserSettings">();
    }
    inline UClass* ShooterGameUserSettings()
    {
        return GetStaticClassImpl<"ShooterGameUserSettings">();
    }
    inline UClass* ScriptViewportClient()
    {
        return GetStaticClassImpl<"ScriptViewportClient">();
    }
    inline UClass* GameViewportClient()
    {
        return GetStaticClassImpl<"GameViewportClient">();
    }
    inline UClass* ShooterGameViewportClient()
    {
        return GetStaticClassImpl<"ShooterGameViewportClient">();
    }
    inline UClass* HUD()
    {
        return GetStaticClassImpl<"HUD">();
    }
    inline UClass* ShooterHUD()
    {
        return GetStaticClassImpl<"ShooterHUD">();
    }
    inline UClass* WDHudNotifications()
    {
        return GetStaticClassImpl<"WDHudNotifications">();
    }
    inline UClass* ShooterImpactEffect()
    {
        return GetStaticClassImpl<"ShooterImpactEffect">();
    }
    inline UClass* ParticleSystemComponent()
    {
        return GetStaticClassImpl<"ParticleSystemComponent">();
    }
    inline UClass* ShooterLaserBeamComponent()
    {
        return GetStaticClassImpl<"ShooterLaserBeamComponent">();
    }
    inline UClass* LocalPlayer()
    {
        return GetStaticClassImpl<"LocalPlayer">();
    }
    inline UClass* ShooterLocalPlayer()
    {
        return GetStaticClassImpl<"ShooterLocalPlayer">();
    }
    inline UClass* ShooterManagementWrapper()
    {
        return GetStaticClassImpl<"ShooterManagementWrapper">();
    }
    inline UClass* ShooterMetrics()
    {
        return GetStaticClassImpl<"ShooterMetrics">();
    }
    inline UClass* ShooterOnlineSessionClient()
    {
        return GetStaticClassImpl<"ShooterOnlineSessionClient">();
    }
    inline UClass* SaveGame()
    {
        return GetStaticClassImpl<"SaveGame">();
    }
    inline UClass* ShooterPersistentUser()
    {
        return GetStaticClassImpl<"ShooterPersistentUser">();
    }
    inline UClass* ShooterPlayerBeacon()
    {
        return GetStaticClassImpl<"ShooterPlayerBeacon">();
    }
    inline UClass* PlayerCameraManager()
    {
        return GetStaticClassImpl<"PlayerCameraManager">();
    }
    inline UClass* ShooterPlayerCameraManager()
    {
        return GetStaticClassImpl<"ShooterPlayerCameraManager">();
    }
    inline UClass* ShooterPlayerController_Menu()
    {
        return GetStaticClassImpl<"ShooterPlayerController_Menu">();
    }
    inline UClass* PlayerState()
    {
        return GetStaticClassImpl<"PlayerState">();
    }
    inline UClass* ShooterPlayerState()
    {
        return GetStaticClassImpl<"ShooterPlayerState">();
    }
    inline UClass* DefaultPawn()
    {
        return GetStaticClassImpl<"DefaultPawn">();
    }
    inline UClass* SpectatorPawn()
    {
        return GetStaticClassImpl<"SpectatorPawn">();
    }
    inline UClass* ShooterSpectatorPawn()
    {
        return GetStaticClassImpl<"ShooterSpectatorPawn">();
    }
    inline UClass* ShooterWeapon_ChainSaw()
    {
        return GetStaticClassImpl<"ShooterWeapon_ChainSaw">();
    }
    inline UClass* ShooterWeapon_FishingRod()
    {
        return GetStaticClassImpl<"ShooterWeapon_FishingRod">();
    }
    inline UClass* ShooterWeapon_FlameThrower()
    {
        return GetStaticClassImpl<"ShooterWeapon_FlameThrower">();
    }
    inline UClass* ShooterWeapon_Instant()
    {
        return GetStaticClassImpl<"ShooterWeapon_Instant">();
    }
    inline UClass* ShooterWeapon_Placer()
    {
        return GetStaticClassImpl<"ShooterWeapon_Placer">();
    }
    inline UClass* ShooterWeapon_PlacerTransGPS()
    {
        return GetStaticClassImpl<"ShooterWeapon_PlacerTransGPS">();
    }
    inline UClass* ShooterWeapon_Whip()
    {
        return GetStaticClassImpl<"ShooterWeapon_Whip">();
    }
    inline UClass* SilentDamageType()
    {
        return GetStaticClassImpl<"SilentDamageType">();
    }
    inline UClass* SOTFNotification()
    {
        return GetStaticClassImpl<"SOTFNotification">();
    }
    inline UClass* SOTFNotificationDisplay()
    {
        return GetStaticClassImpl<"SOTFNotificationDisplay">();
    }
    inline UClass* SoundNode()
    {
        return GetStaticClassImpl<"SoundNode">();
    }
    inline UClass* SoundNodeLocalPlayer()
    {
        return GetStaticClassImpl<"SoundNodeLocalPlayer">();
    }
    inline UClass* SoundNodeVehicleEngine()
    {
        return GetStaticClassImpl<"SoundNodeVehicleEngine">();
    }
    inline UClass* SpawnMapWidget()
    {
        return GetStaticClassImpl<"SpawnMapWidget">();
    }
    inline UClass* StoreEntry()
    {
        return GetStaticClassImpl<"StoreEntry">();
    }
    inline UClass* StoreEntry_Folder()
    {
        return GetStaticClassImpl<"StoreEntry_Folder">();
    }
    inline UClass* StoreEntry_Cosmetic()
    {
        return GetStaticClassImpl<"StoreEntry_Cosmetic">();
    }
    inline UClass* StoreEntry_PromoCode()
    {
        return GetStaticClassImpl<"StoreEntry_PromoCode">();
    }
    inline UClass* StoreEntry_Item()
    {
        return GetStaticClassImpl<"StoreEntry_Item">();
    }
    inline UClass* StoreEntry_Money()
    {
        return GetStaticClassImpl<"StoreEntry_Money">();
    }
    inline UClass* StoreEntry_PrimalPass()
    {
        return GetStaticClassImpl<"StoreEntry_PrimalPass">();
    }
    inline UClass* StoreEntry_BuyAmber()
    {
        return GetStaticClassImpl<"StoreEntry_BuyAmber">();
    }
    inline UClass* StoreEntry_ARKetype()
    {
        return GetStaticClassImpl<"StoreEntry_ARKetype">();
    }
    inline UClass* StoreEntry_Persistent()
    {
        return GetStaticClassImpl<"StoreEntry_Persistent">();
    }
    inline UClass* StoreEntry_Amber()
    {
        return GetStaticClassImpl<"StoreEntry_Amber">();
    }
    inline UClass* StoreEntry_InstantBuff()
    {
        return GetStaticClassImpl<"StoreEntry_InstantBuff">();
    }
    inline UClass* StoreEntry_Transfer()
    {
        return GetStaticClassImpl<"StoreEntry_Transfer">();
    }
    inline UClass* StoreEntry_Recharge()
    {
        return GetStaticClassImpl<"StoreEntry_Recharge">();
    }
    inline UClass* StoreEntry_Engram()
    {
        return GetStaticClassImpl<"StoreEntry_Engram">();
    }
    inline UClass* StoreEntry_Ad()
    {
        return GetStaticClassImpl<"StoreEntry_Ad">();
    }
    inline UClass* StoreEntry_URLOpen()
    {
        return GetStaticClassImpl<"StoreEntry_URLOpen">();
    }
    inline UClass* StoreEntry_MultiItem()
    {
        return GetStaticClassImpl<"StoreEntry_MultiItem">();
    }
    inline UClass* StoreEntry_PriceSurge()
    {
        return GetStaticClassImpl<"StoreEntry_PriceSurge">();
    }
    inline UClass* StoreItemWidget()
    {
        return GetStaticClassImpl<"StoreItemWidget">();
    }
    inline UClass* StructurePaintingComponent()
    {
        return GetStaticClassImpl<"StructurePaintingComponent">();
    }
    inline UClass* StructurePreventionZoneVolume()
    {
        return GetStaticClassImpl<"StructurePreventionZoneVolume">();
    }
    inline UClass* SupplyCrateSpawningSettings()
    {
        return GetStaticClassImpl<"SupplyCrateSpawningSettings">();
    }
    inline UClass* SupplyCrateSpawningVolume()
    {
        return GetStaticClassImpl<"SupplyCrateSpawningVolume">();
    }
    inline UClass* TargetableInterface()
    {
        return GetStaticClassImpl<"TargetableInterface">();
    }
    inline UClass* TargetArea()
    {
        return GetStaticClassImpl<"TargetArea">();
    }
    inline UClass* TargetingInfoToolTipWidget()
    {
        return GetStaticClassImpl<"TargetingInfoToolTipWidget">();
    }
    inline UClass* TargetingInterface()
    {
        return GetStaticClassImpl<"TargetingInterface">();
    }
    inline UClass* SkinnedMeshComponent()
    {
        return GetStaticClassImpl<"SkinnedMeshComponent">();
    }
    inline UClass* SkeletalMeshComponent()
    {
        return GetStaticClassImpl<"SkeletalMeshComponent">();
    }
    inline UClass* HighlightSkeletalComponent()
    {
        return GetStaticClassImpl<"HighlightSkeletalComponent">();
    }
    inline UClass* TargetingObject()
    {
        return GetStaticClassImpl<"TargetingObject">();
    }
    inline UClass* TestItemWidget()
    {
        return GetStaticClassImpl<"TestItemWidget">();
    }
    inline UClass* TextButton()
    {
        return GetStaticClassImpl<"TextButton">();
    }
    inline UClass* TopLeftButton()
    {
        return GetStaticClassImpl<"TopLeftButton">();
    }
    inline UClass* TouchPassthrough()
    {
        return GetStaticClassImpl<"TouchPassthrough">();
    }
    inline UClass* TribeMemberEntryWidget()
    {
        return GetStaticClassImpl<"TribeMemberEntryWidget">();
    }
    inline UClass* TribeAllianceEntryWidget()
    {
        return GetStaticClassImpl<"TribeAllianceEntryWidget">();
    }
    inline UClass* TribeMemberAddWidget()
    {
        return GetStaticClassImpl<"TribeMemberAddWidget">();
    }
    inline UClass* PrimalTutorialUI()
    {
        return GetStaticClassImpl<"PrimalTutorialUI">();
    }
    inline UClass* PrimalWarDrumsUI()
    {
        return GetStaticClassImpl<"PrimalWarDrumsUI">();
    }
    inline UClass* PrimalAccountLinkUI()
    {
        return GetStaticClassImpl<"PrimalAccountLinkUI">();
    }
    inline UClass* PrimalRecordDemoUI()
    {
        return GetStaticClassImpl<"PrimalRecordDemoUI">();
    }
    inline UClass* CreditsUI()
    {
        return GetStaticClassImpl<"CreditsUI">();
    }
    inline UClass* PrimalStatusUI()
    {
        return GetStaticClassImpl<"PrimalStatusUI">();
    }
    inline UClass* TutorialInfo()
    {
        return GetStaticClassImpl<"TutorialInfo">();
    }
    inline UClass* NewStatusInfo()
    {
        return GetStaticClassImpl<"NewStatusInfo">();
    }
    inline UClass* UAnimInstance_FPVWeaponAnim()
    {
        return GetStaticClassImpl<"UAnimInstance_FPVWeaponAnim">();
    }
    inline UClass* UI_ActionMappings()
    {
        return GetStaticClassImpl<"UI_ActionMappings">();
    }
    inline UClass* UI_AdminMangment()
    {
        return GetStaticClassImpl<"UI_AdminMangment">();
    }
    inline UClass* UI_AllPlayersList()
    {
        return GetStaticClassImpl<"UI_AllPlayersList">();
    }
    inline UClass* UI_Ancestry()
    {
        return GetStaticClassImpl<"UI_Ancestry">();
    }
    inline UClass* UI_AppearanceChange()
    {
        return GetStaticClassImpl<"UI_AppearanceChange">();
    }
    inline UClass* UI_BossArena()
    {
        return GetStaticClassImpl<"UI_BossArena">();
    }
    inline UClass* UI_BossArenaConfirmationDialog()
    {
        return GetStaticClassImpl<"UI_BossArenaConfirmationDialog">();
    }
    inline UClass* UI_ChangeTransponderFreqencyEntry()
    {
        return GetStaticClassImpl<"UI_ChangeTransponderFreqencyEntry">();
    }
    inline UClass* UI_ListSessions()
    {
        return GetStaticClassImpl<"UI_ListSessions">();
    }
    inline UClass* UI_ClusterServersListSessions()
    {
        return GetStaticClassImpl<"UI_ClusterServersListSessions">();
    }
    inline UClass* UI_ConfirmationDialogRename()
    {
        return GetStaticClassImpl<"UI_ConfirmationDialogRename">();
    }
    inline UClass* UI_ConsoleDedicated()
    {
        return GetStaticClassImpl<"UI_ConsoleDedicated">();
    }
    inline UClass* UI_Cooking()
    {
        return GetStaticClassImpl<"UI_Cooking">();
    }
    inline UClass* UI_DebugSpawnMenuEntry()
    {
        return GetStaticClassImpl<"UI_DebugSpawnMenuEntry">();
    }
    inline UClass* UI_DebugSpawnMenu()
    {
        return GetStaticClassImpl<"UI_DebugSpawnMenu">();
    }
    inline UClass* UI_DinoOrderGroups()
    {
        return GetStaticClassImpl<"UI_DinoOrderGroups">();
    }
    inline UClass* UI_DyeItem()
    {
        return GetStaticClassImpl<"UI_DyeItem">();
    }
    inline UClass* UI_EquipConfirmationDialog()
    {
        return GetStaticClassImpl<"UI_EquipConfirmationDialog">();
    }
    inline UClass* UI_EquipmentPanel()
    {
        return GetStaticClassImpl<"UI_EquipmentPanel">();
    }
    inline UClass* UI_FishingGame()
    {
        return GetStaticClassImpl<"UI_FishingGame">();
    }
    inline UClass* GenericOptionsInterface()
    {
        return GetStaticClassImpl<"GenericOptionsInterface">();
    }
    inline UClass* UI_GenericOptions()
    {
        return GetStaticClassImpl<"UI_GenericOptions">();
    }
    inline UClass* UI_GenericTextEntryDialog()
    {
        return GetStaticClassImpl<"UI_GenericTextEntryDialog">();
    }
    inline UClass* UI_HudOverlay()
    {
        return GetStaticClassImpl<"UI_HudOverlay">();
    }
    inline UClass* UI_InAppItem()
    {
        return GetStaticClassImpl<"UI_InAppItem">();
    }
    inline UClass* UI_InGameStore()
    {
        return GetStaticClassImpl<"UI_InGameStore">();
    }
    inline UClass* UI_LevelUpPanel()
    {
        return GetStaticClassImpl<"UI_LevelUpPanel">();
    }
    inline UClass* UI_Inventory()
    {
        return GetStaticClassImpl<"UI_Inventory">();
    }
    inline UClass* UI_LoadingScreen()
    {
        return GetStaticClassImpl<"UI_LoadingScreen">();
    }
    inline UClass* UI_MainMenu()
    {
        return GetStaticClassImpl<"UI_MainMenu">();
    }
    inline UClass* UI_MapMarkersEntry()
    {
        return GetStaticClassImpl<"UI_MapMarkersEntry">();
    }
    inline UClass* UI_MultiUse()
    {
        return GetStaticClassImpl<"UI_MultiUse">();
    }
    inline UClass* UI_NewHostSession()
    {
        return GetStaticClassImpl<"UI_NewHostSession">();
    }
    inline UClass* UI_NewOptionsMenu()
    {
        return GetStaticClassImpl<"UI_NewOptionsMenu">();
    }
    inline UClass* UI_Notification()
    {
        return GetStaticClassImpl<"UI_Notification">();
    }
    inline UClass* UI_OfflinePlayerLog()
    {
        return GetStaticClassImpl<"UI_OfflinePlayerLog">();
    }
    inline UClass* UI_OptionsMenu()
    {
        return GetStaticClassImpl<"UI_OptionsMenu">();
    }
    inline UClass* UI_PaintingsList()
    {
        return GetStaticClassImpl<"UI_PaintingsList">();
    }
    inline UClass* UI_PauseMenu()
    {
        return GetStaticClassImpl<"UI_PauseMenu">();
    }
    inline UClass* UI_PhotoMode()
    {
        return GetStaticClassImpl<"UI_PhotoMode">();
    }
    inline UClass* UI_PinEntry()
    {
        return GetStaticClassImpl<"UI_PinEntry">();
    }
    inline UClass* UI_PPOConfirmationDialog()
    {
        return GetStaticClassImpl<"UI_PPOConfirmationDialog">();
    }
    inline UClass* UI_PreviewWidget()
    {
        return GetStaticClassImpl<"UI_PreviewWidget">();
    }
    inline UClass* UI_PrimalTest()
    {
        return GetStaticClassImpl<"UI_PrimalTest">();
    }
    inline UClass* UI_ProceduralSettings()
    {
        return GetStaticClassImpl<"UI_ProceduralSettings">();
    }
    inline UClass* UI_SaveBackup()
    {
        return GetStaticClassImpl<"UI_SaveBackup">();
    }
    inline UClass* UI_SavePainting()
    {
        return GetStaticClassImpl<"UI_SavePainting">();
    }
    inline UClass* UI_SavingOverlay()
    {
        return GetStaticClassImpl<"UI_SavingOverlay">();
    }
    inline UClass* UI_ScopeVignette()
    {
        return GetStaticClassImpl<"UI_ScopeVignette">();
    }
    inline UClass* UI_ServerBroadcastMessage()
    {
        return GetStaticClassImpl<"UI_ServerBroadcastMessage">();
    }
    inline UClass* UI_ServerTransfer()
    {
        return GetStaticClassImpl<"UI_ServerTransfer">();
    }
    inline UClass* UI_Spawn()
    {
        return GetStaticClassImpl<"UI_Spawn">();
    }
    inline UClass* UI_SpawnPoint()
    {
        return GetStaticClassImpl<"UI_SpawnPoint">();
    }
    inline UClass* UI_StoreItemConfirmationDialog()
    {
        return GetStaticClassImpl<"UI_StoreItemConfirmationDialog">();
    }
    inline UClass* UI_StorePopUpListEntry()
    {
        return GetStaticClassImpl<"UI_StorePopUpListEntry">();
    }
    inline UClass* UI_StorePopUp()
    {
        return GetStaticClassImpl<"UI_StorePopUp">();
    }
    inline UClass* UI_SurvivorProfile()
    {
        return GetStaticClassImpl<"UI_SurvivorProfile">();
    }
    inline UClass* UI_TamedDinoPopUp()
    {
        return GetStaticClassImpl<"UI_TamedDinoPopUp">();
    }
    inline UClass* UI_TextEntry()
    {
        return GetStaticClassImpl<"UI_TextEntry">();
    }
    inline UClass* UI_TribeManager()
    {
        return GetStaticClassImpl<"UI_TribeManager">();
    }
    inline UClass* UI_TribeRankConfirmationDialog()
    {
        return GetStaticClassImpl<"UI_TribeRankConfirmationDialog">();
    }
    inline UClass* UI_TribeWarEntry()
    {
        return GetStaticClassImpl<"UI_TribeWarEntry">();
    }
    inline UClass* UI_Tutorial()
    {
        return GetStaticClassImpl<"UI_Tutorial">();
    }
    inline UClass* UI_VulkanIssueDialog()
    {
        return GetStaticClassImpl<"UI_VulkanIssueDialog">();
    }
    inline UClass* UI_WDChatText()
    {
        return GetStaticClassImpl<"UI_WDChatText">();
    }
    inline UClass* UI_WDChat()
    {
        return GetStaticClassImpl<"UI_WDChat">();
    }
    inline UClass* UI_WDMobileLog()
    {
        return GetStaticClassImpl<"UI_WDMobileLog">();
    }
    inline UClass* UI_WDRecording()
    {
        return GetStaticClassImpl<"UI_WDRecording">();
    }
    inline UClass* UI_WDServerInfo()
    {
        return GetStaticClassImpl<"UI_WDServerInfo">();
    }
    inline UClass* UI_Welcome()
    {
        return GetStaticClassImpl<"UI_Welcome">();
    }
    inline UClass* UI_XBoxFooter()
    {
        return GetStaticClassImpl<"UI_XBoxFooter">();
    }
    inline UClass* UIStatGraph()
    {
        return GetStaticClassImpl<"UIStatGraph">();
    }
    inline UClass* UIServerView()
    {
        return GetStaticClassImpl<"UIServerView">();
    }
    inline UClass* UVImage()
    {
        return GetStaticClassImpl<"UVImage">();
    }
    inline UClass* VictoryCoreHighest()
    {
        return GetStaticClassImpl<"VictoryCoreHighest">();
    }
    inline UClass* VictoryCore()
    {
        return GetStaticClassImpl<"VictoryCore">();
    }
    inline UClass* WDHaptics()
    {
        return GetStaticClassImpl<"WDHaptics">();
    }
    inline UClass* WDInAppVerify()
    {
        return GetStaticClassImpl<"WDInAppVerify">();
    }
    inline UClass* WDProfileInstance()
    {
        return GetStaticClassImpl<"WDProfileInstance">();
    }
    inline UClass* PushNotificationAction()
    {
        return GetStaticClassImpl<"PushNotificationAction">();
    }
    inline UClass* WDPushNotifications()
    {
        return GetStaticClassImpl<"WDPushNotifications">();
    }
    inline UClass* PushNotificationActionJoinServer()
    {
        return GetStaticClassImpl<"PushNotificationActionJoinServer">();
    }
    inline UClass* PushNotificationActionOpenMap()
    {
        return GetStaticClassImpl<"PushNotificationActionOpenMap">();
    }
    inline UClass* GCObjectReferencer()
    {
        return GetStaticClassImpl<"GCObjectReferencer">();
    }
    inline UClass* TextBuffer()
    {
        return GetStaticClassImpl<"TextBuffer">();
    }
    inline UClass* Field()
    {
        return GetStaticClassImpl<"Field">();
    }
    inline UClass* Struct()
    {
        return GetStaticClassImpl<"Struct">();
    }
    inline UClass* ScriptStruct()
    {
        return GetStaticClassImpl<"ScriptStruct">();
    }
    inline UClass* Package()
    {
        return GetStaticClassImpl<"Package">();
    }
    inline UClass* Class()
    {
        return GetStaticClassImpl<"Class">();
    }
    inline UClass* Function()
    {
        return GetStaticClassImpl<"Function">();
    }
    inline UClass* DelegateFunction()
    {
        return GetStaticClassImpl<"DelegateFunction">();
    }
    inline UClass* DynamicClass()
    {
        return GetStaticClassImpl<"DynamicClass">();
    }
    inline UClass* PackageMap()
    {
        return GetStaticClassImpl<"PackageMap">();
    }
    inline UClass* Enum()
    {
        return GetStaticClassImpl<"Enum">();
    }
    inline UClass* Property()
    {
        return GetStaticClassImpl<"Property">();
    }
    inline UClass* EnumProperty()
    {
        return GetStaticClassImpl<"EnumProperty">();
    }
    inline UClass* LinkerPlaceholderClass()
    {
        return GetStaticClassImpl<"LinkerPlaceholderClass">();
    }
    inline UClass* LinkerPlaceholderExportObject()
    {
        return GetStaticClassImpl<"LinkerPlaceholderExportObject">();
    }
    inline UClass* LinkerPlaceholderFunction()
    {
        return GetStaticClassImpl<"LinkerPlaceholderFunction">();
    }
    inline UClass* MetaData()
    {
        return GetStaticClassImpl<"MetaData">();
    }
    inline UClass* ObjectRedirector()
    {
        return GetStaticClassImpl<"ObjectRedirector">();
    }
    inline UClass* ArrayProperty()
    {
        return GetStaticClassImpl<"ArrayProperty">();
    }
    inline UClass* ObjectPropertyBase()
    {
        return GetStaticClassImpl<"ObjectPropertyBase">();
    }
    inline UClass* AssetObjectProperty()
    {
        return GetStaticClassImpl<"AssetObjectProperty">();
    }
    inline UClass* AssetClassProperty()
    {
        return GetStaticClassImpl<"AssetClassProperty">();
    }
    inline UClass* BoolProperty()
    {
        return GetStaticClassImpl<"BoolProperty">();
    }
    inline UClass* NumericProperty()
    {
        return GetStaticClassImpl<"NumericProperty">();
    }
    inline UClass* ByteProperty()
    {
        return GetStaticClassImpl<"ByteProperty">();
    }
    inline UClass* ObjectProperty()
    {
        return GetStaticClassImpl<"ObjectProperty">();
    }
    inline UClass* ClassProperty()
    {
        return GetStaticClassImpl<"ClassProperty">();
    }
    inline UClass* DelegateProperty()
    {
        return GetStaticClassImpl<"DelegateProperty">();
    }
    inline UClass* DoubleProperty()
    {
        return GetStaticClassImpl<"DoubleProperty">();
    }
    inline UClass* FloatProperty()
    {
        return GetStaticClassImpl<"FloatProperty">();
    }
    inline UClass* IntProperty()
    {
        return GetStaticClassImpl<"IntProperty">();
    }
    inline UClass* Int16Property()
    {
        return GetStaticClassImpl<"Int16Property">();
    }
    inline UClass* Int64Property()
    {
        return GetStaticClassImpl<"Int64Property">();
    }
    inline UClass* Int8Property()
    {
        return GetStaticClassImpl<"Int8Property">();
    }
    inline UClass* InterfaceProperty()
    {
        return GetStaticClassImpl<"InterfaceProperty">();
    }
    inline UClass* LazyObjectProperty()
    {
        return GetStaticClassImpl<"LazyObjectProperty">();
    }
    inline UClass* MapProperty()
    {
        return GetStaticClassImpl<"MapProperty">();
    }
    inline UClass* MulticastDelegateProperty()
    {
        return GetStaticClassImpl<"MulticastDelegateProperty">();
    }
    inline UClass* NameProperty()
    {
        return GetStaticClassImpl<"NameProperty">();
    }
    inline UClass* SetProperty()
    {
        return GetStaticClassImpl<"SetProperty">();
    }
    inline UClass* StrProperty()
    {
        return GetStaticClassImpl<"StrProperty">();
    }
    inline UClass* StructProperty()
    {
        return GetStaticClassImpl<"StructProperty">();
    }
    inline UClass* UInt16Property()
    {
        return GetStaticClassImpl<"UInt16Property">();
    }
    inline UClass* UInt32Property()
    {
        return GetStaticClassImpl<"UInt32Property">();
    }
    inline UClass* UInt64Property()
    {
        return GetStaticClassImpl<"UInt64Property">();
    }
    inline UClass* WeakObjectProperty()
    {
        return GetStaticClassImpl<"WeakObjectProperty">();
    }
    inline UClass* TextProperty()
    {
        return GetStaticClassImpl<"TextProperty">();
    }
    inline UClass* InputCoreTypes()
    {
        return GetStaticClassImpl<"InputCoreTypes">();
    }
    inline UClass* FontBulkData()
    {
        return GetStaticClassImpl<"FontBulkData">();
    }
    inline UClass* FontFaceInterface()
    {
        return GetStaticClassImpl<"FontFaceInterface">();
    }
    inline UClass* FontProviderInterface()
    {
        return GetStaticClassImpl<"FontProviderInterface">();
    }
    inline UClass* SlateTypes()
    {
        return GetStaticClassImpl<"SlateTypes">();
    }
    inline UClass* SlateWidgetStyleAsset()
    {
        return GetStaticClassImpl<"SlateWidgetStyleAsset">();
    }
    inline UClass* SlateWidgetStyleContainerBase()
    {
        return GetStaticClassImpl<"SlateWidgetStyleContainerBase">();
    }
    inline UClass* SlateWidgetStyleContainerInterface()
    {
        return GetStaticClassImpl<"SlateWidgetStyleContainerInterface">();
    }
    inline UClass* ButtonWidgetStyle()
    {
        return GetStaticClassImpl<"ButtonWidgetStyle">();
    }
    inline UClass* CheckBoxWidgetStyle()
    {
        return GetStaticClassImpl<"CheckBoxWidgetStyle">();
    }
    inline UClass* ComboBoxWidgetStyle()
    {
        return GetStaticClassImpl<"ComboBoxWidgetStyle">();
    }
    inline UClass* ComboButtonWidgetStyle()
    {
        return GetStaticClassImpl<"ComboButtonWidgetStyle">();
    }
    inline UClass* EditableTextBoxWidgetStyle()
    {
        return GetStaticClassImpl<"EditableTextBoxWidgetStyle">();
    }
    inline UClass* EditableTextWidgetStyle()
    {
        return GetStaticClassImpl<"EditableTextWidgetStyle">();
    }
    inline UClass* ProgressWidgetStyle()
    {
        return GetStaticClassImpl<"ProgressWidgetStyle">();
    }
    inline UClass* ScrollBarWidgetStyle()
    {
        return GetStaticClassImpl<"ScrollBarWidgetStyle">();
    }
    inline UClass* ScrollBoxWidgetStyle()
    {
        return GetStaticClassImpl<"ScrollBoxWidgetStyle">();
    }
    inline UClass* SlateSettings()
    {
        return GetStaticClassImpl<"SlateSettings">();
    }
    inline UClass* SpinBoxWidgetStyle()
    {
        return GetStaticClassImpl<"SpinBoxWidgetStyle">();
    }
    inline UClass* TextBlockWidgetStyle()
    {
        return GetStaticClassImpl<"TextBlockWidgetStyle">();
    }
    inline UClass* MaterialShaderQualitySettings()
    {
        return GetStaticClassImpl<"MaterialShaderQualitySettings">();
    }
    inline UClass* ShaderPlatformQualitySettings()
    {
        return GetStaticClassImpl<"ShaderPlatformQualitySettings">();
    }
    inline UClass* HeadMountedDisplayFunctionLibrary()
    {
        return GetStaticClassImpl<"HeadMountedDisplayFunctionLibrary">();
    }
    inline UClass* MotionControllerComponent()
    {
        return GetStaticClassImpl<"MotionControllerComponent">();
    }
    inline UClass* MotionTrackedDeviceFunctionLibrary()
    {
        return GetStaticClassImpl<"MotionTrackedDeviceFunctionLibrary">();
    }
    inline UClass* VRNotificationsComponent()
    {
        return GetStaticClassImpl<"VRNotificationsComponent">();
    }
    inline UClass* FoliageInclusionVolume()
    {
        return GetStaticClassImpl<"FoliageInclusionVolume">();
    }
    inline UClass* StaticMeshComponent()
    {
        return GetStaticClassImpl<"StaticMeshComponent">();
    }
    inline UClass* InstancedStaticMeshComponent()
    {
        return GetStaticClassImpl<"InstancedStaticMeshComponent">();
    }
    inline UClass* HierarchicalInstancedStaticMeshComponent()
    {
        return GetStaticClassImpl<"HierarchicalInstancedStaticMeshComponent">();
    }
    inline UClass* FoliageInstancedStaticMeshComponent()
    {
        return GetStaticClassImpl<"FoliageInstancedStaticMeshComponent">();
    }
    inline UClass* FoliageStatistics()
    {
        return GetStaticClassImpl<"FoliageStatistics">();
    }
    inline UClass* FoliageType()
    {
        return GetStaticClassImpl<"FoliageType">();
    }
    inline UClass* FoliageType_InstancedStaticMesh()
    {
        return GetStaticClassImpl<"FoliageType_InstancedStaticMesh">();
    }
    inline UClass* InstancedFoliageActor()
    {
        return GetStaticClassImpl<"InstancedFoliageActor">();
    }
    inline UClass* StaticMeshActor()
    {
        return GetStaticClassImpl<"StaticMeshActor">();
    }
    inline UClass* InteractiveFoliageActor()
    {
        return GetStaticClassImpl<"InteractiveFoliageActor">();
    }
    inline UClass* InteractiveFoliageComponent()
    {
        return GetStaticClassImpl<"InteractiveFoliageComponent">();
    }
    inline UClass* ProceduralFoliageBlockingVolume()
    {
        return GetStaticClassImpl<"ProceduralFoliageBlockingVolume">();
    }
    inline UClass* ProceduralFoliageComponent()
    {
        return GetStaticClassImpl<"ProceduralFoliageComponent">();
    }
    inline UClass* ProceduralFoliageSpawner()
    {
        return GetStaticClassImpl<"ProceduralFoliageSpawner">();
    }
    inline UClass* ProceduralFoliageTile()
    {
        return GetStaticClassImpl<"ProceduralFoliageTile">();
    }
    inline UClass* ProceduralFoliageVolume()
    {
        return GetStaticClassImpl<"ProceduralFoliageVolume">();
    }
    inline UClass* ControlPointMeshComponent()
    {
        return GetStaticClassImpl<"ControlPointMeshComponent">();
    }
    inline UClass* LandscapeProxy()
    {
        return GetStaticClassImpl<"LandscapeProxy">();
    }
    inline UClass* Landscape()
    {
        return GetStaticClassImpl<"Landscape">();
    }
    inline UClass* LandscapeComponent()
    {
        return GetStaticClassImpl<"LandscapeComponent">();
    }
    inline UClass* LandscapeGizmoActor()
    {
        return GetStaticClassImpl<"LandscapeGizmoActor">();
    }
    inline UClass* LandscapeGizmoActiveActor()
    {
        return GetStaticClassImpl<"LandscapeGizmoActiveActor">();
    }
    inline UClass* LandscapeGizmoRenderComponent()
    {
        return GetStaticClassImpl<"LandscapeGizmoRenderComponent">();
    }
    inline UClass* LandscapeGrassType()
    {
        return GetStaticClassImpl<"LandscapeGrassType">();
    }
    inline UClass* LandscapeHeightfieldCollisionComponent()
    {
        return GetStaticClassImpl<"LandscapeHeightfieldCollisionComponent">();
    }
    inline UClass* LandscapeInfo()
    {
        return GetStaticClassImpl<"LandscapeInfo">();
    }
    inline UClass* LandscapeInfoMap()
    {
        return GetStaticClassImpl<"LandscapeInfoMap">();
    }
    inline UClass* LandscapeLayerInfoObject()
    {
        return GetStaticClassImpl<"LandscapeLayerInfoObject">();
    }
    inline UClass* MaterialInterface()
    {
        return GetStaticClassImpl<"MaterialInterface">();
    }
    inline UClass* MaterialInstance()
    {
        return GetStaticClassImpl<"MaterialInstance">();
    }
    inline UClass* MaterialInstanceConstant()
    {
        return GetStaticClassImpl<"MaterialInstanceConstant">();
    }
    inline UClass* LandscapeMaterialInstanceConstant()
    {
        return GetStaticClassImpl<"LandscapeMaterialInstanceConstant">();
    }
    inline UClass* LandscapeMeshCollisionComponent()
    {
        return GetStaticClassImpl<"LandscapeMeshCollisionComponent">();
    }
    inline UClass* LandscapeMeshProxyActor()
    {
        return GetStaticClassImpl<"LandscapeMeshProxyActor">();
    }
    inline UClass* LandscapeMeshProxyComponent()
    {
        return GetStaticClassImpl<"LandscapeMeshProxyComponent">();
    }
    inline UClass* LandscapeSplinesComponent()
    {
        return GetStaticClassImpl<"LandscapeSplinesComponent">();
    }
    inline UClass* LandscapeSplineControlPoint()
    {
        return GetStaticClassImpl<"LandscapeSplineControlPoint">();
    }
    inline UClass* LandscapeSplineSegment()
    {
        return GetStaticClassImpl<"LandscapeSplineSegment">();
    }
    inline UClass* LandscapeStreamingProxy()
    {
        return GetStaticClassImpl<"LandscapeStreamingProxy">();
    }
    inline UClass* MaterialExpression()
    {
        return GetStaticClassImpl<"MaterialExpression">();
    }
    inline UClass* MaterialExpressionCustomOutput()
    {
        return GetStaticClassImpl<"MaterialExpressionCustomOutput">();
    }
    inline UClass* MaterialExpressionLandscapeGrassOutput()
    {
        return GetStaticClassImpl<"MaterialExpressionLandscapeGrassOutput">();
    }
    inline UClass* MaterialExpressionLandscapeLayerBlend()
    {
        return GetStaticClassImpl<"MaterialExpressionLandscapeLayerBlend">();
    }
    inline UClass* MaterialExpressionLandscapeLayerCoords()
    {
        return GetStaticClassImpl<"MaterialExpressionLandscapeLayerCoords">();
    }
    inline UClass* MaterialExpressionLandscapeLayerSample()
    {
        return GetStaticClassImpl<"MaterialExpressionLandscapeLayerSample">();
    }
    inline UClass* MaterialExpressionLandscapeLayerSwitch()
    {
        return GetStaticClassImpl<"MaterialExpressionLandscapeLayerSwitch">();
    }
    inline UClass* MaterialExpressionLandscapeLayerWeight()
    {
        return GetStaticClassImpl<"MaterialExpressionLandscapeLayerWeight">();
    }
    inline UClass* MaterialExpressionLandscapeVisibilityMask()
    {
        return GetStaticClassImpl<"MaterialExpressionLandscapeVisibilityMask">();
    }
    inline UClass* MovieSceneSignedObject()
    {
        return GetStaticClassImpl<"MovieSceneSignedObject">();
    }
    inline UClass* MovieScene()
    {
        return GetStaticClassImpl<"MovieScene">();
    }
    inline UClass* MovieSceneBindingOverrides()
    {
        return GetStaticClassImpl<"MovieSceneBindingOverrides">();
    }
    inline UClass* MovieSceneBindingOverridesInterface()
    {
        return GetStaticClassImpl<"MovieSceneBindingOverridesInterface">();
    }
    inline UClass* MovieSceneBindingOwnerInterface()
    {
        return GetStaticClassImpl<"MovieSceneBindingOwnerInterface">();
    }
    inline UClass* MovieSceneBuiltInEasingFunction()
    {
        return GetStaticClassImpl<"MovieSceneBuiltInEasingFunction">();
    }
    inline UClass* MovieSceneEasingExternalCurve()
    {
        return GetStaticClassImpl<"MovieSceneEasingExternalCurve">();
    }
    inline UClass* MovieSceneEasingFunction()
    {
        return GetStaticClassImpl<"MovieSceneEasingFunction">();
    }
    inline UClass* MovieSceneFolder()
    {
        return GetStaticClassImpl<"MovieSceneFolder">();
    }
    inline UClass* MovieSceneTrack()
    {
        return GetStaticClassImpl<"MovieSceneTrack">();
    }
    inline UClass* MovieSceneNameableTrack()
    {
        return GetStaticClassImpl<"MovieSceneNameableTrack">();
    }
    inline UClass* MovieSceneSection()
    {
        return GetStaticClassImpl<"MovieSceneSection">();
    }
    inline UClass* MovieSceneSegmentCompilerTestTrack()
    {
        return GetStaticClassImpl<"MovieSceneSegmentCompilerTestTrack">();
    }
    inline UClass* MovieSceneSegmentCompilerTestSection()
    {
        return GetStaticClassImpl<"MovieSceneSegmentCompilerTestSection">();
    }
    inline UClass* MovieSceneSequence()
    {
        return GetStaticClassImpl<"MovieSceneSequence">();
    }
    inline UClass* MovieSceneSequencePlayer()
    {
        return GetStaticClassImpl<"MovieSceneSequencePlayer">();
    }
    inline UClass* AnimCustomInstance()
    {
        return GetStaticClassImpl<"AnimCustomInstance">();
    }
    inline UClass* AnimNotify_PlayMontageNotify()
    {
        return GetStaticClassImpl<"AnimNotify_PlayMontageNotify">();
    }
    inline UClass* AnimNotify_PlayMontageNotifyWindow()
    {
        return GetStaticClassImpl<"AnimNotify_PlayMontageNotifyWindow">();
    }
    inline UClass* AnimSequencerInstance()
    {
        return GetStaticClassImpl<"AnimSequencerInstance">();
    }
    inline UClass* KismetAnimationLibrary()
    {
        return GetStaticClassImpl<"KismetAnimationLibrary">();
    }
    inline UClass* PlayMontageCallbackProxy()
    {
        return GetStaticClassImpl<"PlayMontageCallbackProxy">();
    }
    inline UClass* MovieScene3DConstraintSection()
    {
        return GetStaticClassImpl<"MovieScene3DConstraintSection">();
    }
    inline UClass* MovieScene3DAttachSection()
    {
        return GetStaticClassImpl<"MovieScene3DAttachSection">();
    }
    inline UClass* MovieScene3DConstraintTrack()
    {
        return GetStaticClassImpl<"MovieScene3DConstraintTrack">();
    }
    inline UClass* MovieScene3DAttachTrack()
    {
        return GetStaticClassImpl<"MovieScene3DAttachTrack">();
    }
    inline UClass* MovieScene3DPathSection()
    {
        return GetStaticClassImpl<"MovieScene3DPathSection">();
    }
    inline UClass* MovieScene3DPathTrack()
    {
        return GetStaticClassImpl<"MovieScene3DPathTrack">();
    }
    inline UClass* MovieScene3DTransformSection()
    {
        return GetStaticClassImpl<"MovieScene3DTransformSection">();
    }
    inline UClass* MovieScenePropertyTrack()
    {
        return GetStaticClassImpl<"MovieScenePropertyTrack">();
    }
    inline UClass* MovieScene3DTransformTrack()
    {
        return GetStaticClassImpl<"MovieScene3DTransformTrack">();
    }
    inline UClass* MovieSceneActorReferenceSection()
    {
        return GetStaticClassImpl<"MovieSceneActorReferenceSection">();
    }
    inline UClass* MovieSceneActorReferenceTrack()
    {
        return GetStaticClassImpl<"MovieSceneActorReferenceTrack">();
    }
    inline UClass* MovieSceneAudioSection()
    {
        return GetStaticClassImpl<"MovieSceneAudioSection">();
    }
    inline UClass* MovieSceneAudioTrack()
    {
        return GetStaticClassImpl<"MovieSceneAudioTrack">();
    }
    inline UClass* MovieSceneBoolSection()
    {
        return GetStaticClassImpl<"MovieSceneBoolSection">();
    }
    inline UClass* MovieSceneBoolTrack()
    {
        return GetStaticClassImpl<"MovieSceneBoolTrack">();
    }
    inline UClass* MovieSceneByteSection()
    {
        return GetStaticClassImpl<"MovieSceneByteSection">();
    }
    inline UClass* MovieSceneByteTrack()
    {
        return GetStaticClassImpl<"MovieSceneByteTrack">();
    }
    inline UClass* MovieSceneCameraAnimSection()
    {
        return GetStaticClassImpl<"MovieSceneCameraAnimSection">();
    }
    inline UClass* MovieSceneCameraAnimTrack()
    {
        return GetStaticClassImpl<"MovieSceneCameraAnimTrack">();
    }
    inline UClass* MovieSceneCameraCutSection()
    {
        return GetStaticClassImpl<"MovieSceneCameraCutSection">();
    }
    inline UClass* MovieSceneCameraCutTrack()
    {
        return GetStaticClassImpl<"MovieSceneCameraCutTrack">();
    }
    inline UClass* MovieSceneCameraShakeSection()
    {
        return GetStaticClassImpl<"MovieSceneCameraShakeSection">();
    }
    inline UClass* MovieSceneCameraShakeTrack()
    {
        return GetStaticClassImpl<"MovieSceneCameraShakeTrack">();
    }
    inline UClass* MovieSceneSubSection()
    {
        return GetStaticClassImpl<"MovieSceneSubSection">();
    }
    inline UClass* MovieSceneCinematicShotSection()
    {
        return GetStaticClassImpl<"MovieSceneCinematicShotSection">();
    }
    inline UClass* MovieSceneSubTrack()
    {
        return GetStaticClassImpl<"MovieSceneSubTrack">();
    }
    inline UClass* MovieSceneCinematicShotTrack()
    {
        return GetStaticClassImpl<"MovieSceneCinematicShotTrack">();
    }
    inline UClass* MovieSceneColorSection()
    {
        return GetStaticClassImpl<"MovieSceneColorSection">();
    }
    inline UClass* MovieSceneColorTrack()
    {
        return GetStaticClassImpl<"MovieSceneColorTrack">();
    }
    inline UClass* MovieSceneEnumSection()
    {
        return GetStaticClassImpl<"MovieSceneEnumSection">();
    }
    inline UClass* MovieSceneEnumTrack()
    {
        return GetStaticClassImpl<"MovieSceneEnumTrack">();
    }
    inline UClass* MovieSceneEventSection()
    {
        return GetStaticClassImpl<"MovieSceneEventSection">();
    }
    inline UClass* MovieSceneEventTrack()
    {
        return GetStaticClassImpl<"MovieSceneEventTrack">();
    }
    inline UClass* MovieSceneFloatSection()
    {
        return GetStaticClassImpl<"MovieSceneFloatSection">();
    }
    inline UClass* MovieSceneFadeSection()
    {
        return GetStaticClassImpl<"MovieSceneFadeSection">();
    }
    inline UClass* MovieSceneFloatTrack()
    {
        return GetStaticClassImpl<"MovieSceneFloatTrack">();
    }
    inline UClass* MovieSceneFadeTrack()
    {
        return GetStaticClassImpl<"MovieSceneFadeTrack">();
    }
    inline UClass* MovieSceneIntegerSection()
    {
        return GetStaticClassImpl<"MovieSceneIntegerSection">();
    }
    inline UClass* MovieSceneIntegerTrack()
    {
        return GetStaticClassImpl<"MovieSceneIntegerTrack">();
    }
    inline UClass* MovieSceneLevelVisibilitySection()
    {
        return GetStaticClassImpl<"MovieSceneLevelVisibilitySection">();
    }
    inline UClass* MovieSceneLevelVisibilityTrack()
    {
        return GetStaticClassImpl<"MovieSceneLevelVisibilityTrack">();
    }
    inline UClass* MovieSceneMaterialTrack()
    {
        return GetStaticClassImpl<"MovieSceneMaterialTrack">();
    }
    inline UClass* MovieSceneMaterialParameterCollectionTrack()
    {
        return GetStaticClassImpl<"MovieSceneMaterialParameterCollectionTrack">();
    }
    inline UClass* MovieSceneComponentMaterialTrack()
    {
        return GetStaticClassImpl<"MovieSceneComponentMaterialTrack">();
    }
    inline UClass* MovieSceneParameterSection()
    {
        return GetStaticClassImpl<"MovieSceneParameterSection">();
    }
    inline UClass* MovieSceneParticleParameterTrack()
    {
        return GetStaticClassImpl<"MovieSceneParticleParameterTrack">();
    }
    inline UClass* MovieSceneParticleSection()
    {
        return GetStaticClassImpl<"MovieSceneParticleSection">();
    }
    inline UClass* MovieSceneParticleTrack()
    {
        return GetStaticClassImpl<"MovieSceneParticleTrack">();
    }
    inline UClass* MovieSceneSkeletalAnimationSection()
    {
        return GetStaticClassImpl<"MovieSceneSkeletalAnimationSection">();
    }
    inline UClass* MovieSceneSkeletalAnimationTrack()
    {
        return GetStaticClassImpl<"MovieSceneSkeletalAnimationTrack">();
    }
    inline UClass* MovieSceneSlomoSection()
    {
        return GetStaticClassImpl<"MovieSceneSlomoSection">();
    }
    inline UClass* MovieSceneSlomoTrack()
    {
        return GetStaticClassImpl<"MovieSceneSlomoTrack">();
    }
    inline UClass* MovieSceneSpawnSection()
    {
        return GetStaticClassImpl<"MovieSceneSpawnSection">();
    }
    inline UClass* MovieSceneSpawnTrack()
    {
        return GetStaticClassImpl<"MovieSceneSpawnTrack">();
    }
    inline UClass* MovieSceneStringSection()
    {
        return GetStaticClassImpl<"MovieSceneStringSection">();
    }
    inline UClass* MovieSceneStringTrack()
    {
        return GetStaticClassImpl<"MovieSceneStringTrack">();
    }
    inline UClass* MovieSceneTransformTrack()
    {
        return GetStaticClassImpl<"MovieSceneTransformTrack">();
    }
    inline UClass* MovieSceneVectorSection()
    {
        return GetStaticClassImpl<"MovieSceneVectorSection">();
    }
    inline UClass* MovieSceneVectorTrack()
    {
        return GetStaticClassImpl<"MovieSceneVectorTrack">();
    }
    inline UClass* MovieSceneVisibilityTrack()
    {
        return GetStaticClassImpl<"MovieSceneVisibilityTrack">();
    }
    inline UClass* AsyncTaskDownloadImage()
    {
        return GetStaticClassImpl<"AsyncTaskDownloadImage">();
    }
    inline UClass* BackgroundBlur()
    {
        return GetStaticClassImpl<"BackgroundBlur">();
    }
    inline UClass* PanelSlot()
    {
        return GetStaticClassImpl<"PanelSlot">();
    }
    inline UClass* BackgroundBlurSlot()
    {
        return GetStaticClassImpl<"BackgroundBlurSlot">();
    }
    inline UClass* PropertyBinding()
    {
        return GetStaticClassImpl<"PropertyBinding">();
    }
    inline UClass* BoolBinding()
    {
        return GetStaticClassImpl<"BoolBinding">();
    }
    inline UClass* Border()
    {
        return GetStaticClassImpl<"Border">();
    }
    inline UClass* BorderSlot()
    {
        return GetStaticClassImpl<"BorderSlot">();
    }
    inline UClass* BrushBinding()
    {
        return GetStaticClassImpl<"BrushBinding">();
    }
    inline UClass* ButtonSlot()
    {
        return GetStaticClassImpl<"ButtonSlot">();
    }
    inline UClass* CanvasPanel()
    {
        return GetStaticClassImpl<"CanvasPanel">();
    }
    inline UClass* CanvasPanelSlot()
    {
        return GetStaticClassImpl<"CanvasPanelSlot">();
    }
    inline UClass* CheckedStateBinding()
    {
        return GetStaticClassImpl<"CheckedStateBinding">();
    }
    inline UClass* CircularThrobber()
    {
        return GetStaticClassImpl<"CircularThrobber">();
    }
    inline UClass* ColorBinding()
    {
        return GetStaticClassImpl<"ColorBinding">();
    }
    inline UClass* ComboBox()
    {
        return GetStaticClassImpl<"ComboBox">();
    }
    inline UClass* ComboBoxString()
    {
        return GetStaticClassImpl<"ComboBoxString">();
    }
    inline UClass* DragDropOperation()
    {
        return GetStaticClassImpl<"DragDropOperation">();
    }
    inline UClass* EditableTextBox()
    {
        return GetStaticClassImpl<"EditableTextBox">();
    }
    inline UClass* ExpandableArea()
    {
        return GetStaticClassImpl<"ExpandableArea">();
    }
    inline UClass* FloatBinding()
    {
        return GetStaticClassImpl<"FloatBinding">();
    }
    inline UClass* GridPanel()
    {
        return GetStaticClassImpl<"GridPanel">();
    }
    inline UClass* GridSlot()
    {
        return GetStaticClassImpl<"GridSlot">();
    }
    inline UClass* HorizontalBox()
    {
        return GetStaticClassImpl<"HorizontalBox">();
    }
    inline UClass* HorizontalBoxSlot()
    {
        return GetStaticClassImpl<"HorizontalBoxSlot">();
    }
    inline UClass* InputKeySelector()
    {
        return GetStaticClassImpl<"InputKeySelector">();
    }
    inline UClass* Int32Binding()
    {
        return GetStaticClassImpl<"Int32Binding">();
    }
    inline UClass* InvalidationBox()
    {
        return GetStaticClassImpl<"InvalidationBox">();
    }
    inline UClass* TableViewBase()
    {
        return GetStaticClassImpl<"TableViewBase">();
    }
    inline UClass* ListView()
    {
        return GetStaticClassImpl<"ListView">();
    }
    inline UClass* MenuAnchor()
    {
        return GetStaticClassImpl<"MenuAnchor">();
    }
    inline UClass* MouseCursorBinding()
    {
        return GetStaticClassImpl<"MouseCursorBinding">();
    }
    inline UClass* MovieScene2DTransformSection()
    {
        return GetStaticClassImpl<"MovieScene2DTransformSection">();
    }
    inline UClass* MovieScene2DTransformTrack()
    {
        return GetStaticClassImpl<"MovieScene2DTransformTrack">();
    }
    inline UClass* MovieSceneMarginSection()
    {
        return GetStaticClassImpl<"MovieSceneMarginSection">();
    }
    inline UClass* MovieSceneMarginTrack()
    {
        return GetStaticClassImpl<"MovieSceneMarginTrack">();
    }
    inline UClass* MovieSceneWidgetMaterialTrack()
    {
        return GetStaticClassImpl<"MovieSceneWidgetMaterialTrack">();
    }
    inline UClass* TextLayoutWidget()
    {
        return GetStaticClassImpl<"TextLayoutWidget">();
    }
    inline UClass* MultiLineEditableText()
    {
        return GetStaticClassImpl<"MultiLineEditableText">();
    }
    inline UClass* MultiLineEditableTextBox()
    {
        return GetStaticClassImpl<"MultiLineEditableTextBox">();
    }
    inline UClass* NamedSlot()
    {
        return GetStaticClassImpl<"NamedSlot">();
    }
    inline UClass* NamedSlotInterface()
    {
        return GetStaticClassImpl<"NamedSlotInterface">();
    }
    inline UClass* NativeWidgetHost()
    {
        return GetStaticClassImpl<"NativeWidgetHost">();
    }
    inline UClass* Overlay()
    {
        return GetStaticClassImpl<"Overlay">();
    }
    inline UClass* OverlaySlot()
    {
        return GetStaticClassImpl<"OverlaySlot">();
    }
    inline UClass* ProgressBar()
    {
        return GetStaticClassImpl<"ProgressBar">();
    }
    inline UClass* RetainerBox()
    {
        return GetStaticClassImpl<"RetainerBox">();
    }
    inline UClass* RichTextBlock()
    {
        return GetStaticClassImpl<"RichTextBlock">();
    }
    inline UClass* RichTextBlockDecorator()
    {
        return GetStaticClassImpl<"RichTextBlockDecorator">();
    }
    inline UClass* SafeZone()
    {
        return GetStaticClassImpl<"SafeZone">();
    }
    inline UClass* SafeZoneSlot()
    {
        return GetStaticClassImpl<"SafeZoneSlot">();
    }
    inline UClass* ScaleBox()
    {
        return GetStaticClassImpl<"ScaleBox">();
    }
    inline UClass* ScaleBoxSlot()
    {
        return GetStaticClassImpl<"ScaleBoxSlot">();
    }
    inline UClass* ScrollBar()
    {
        return GetStaticClassImpl<"ScrollBar">();
    }
    inline UClass* ScrollBoxSlot()
    {
        return GetStaticClassImpl<"ScrollBoxSlot">();
    }
    inline UClass* SizeBox()
    {
        return GetStaticClassImpl<"SizeBox">();
    }
    inline UClass* SizeBoxSlot()
    {
        return GetStaticClassImpl<"SizeBoxSlot">();
    }
    inline UClass* SlateBlueprintLibrary()
    {
        return GetStaticClassImpl<"SlateBlueprintLibrary">();
    }
    inline UClass* SlateDataSheet()
    {
        return GetStaticClassImpl<"SlateDataSheet">();
    }
    inline UClass* SlateVectorArtData()
    {
        return GetStaticClassImpl<"SlateVectorArtData">();
    }
    inline UClass* Slider()
    {
        return GetStaticClassImpl<"Slider">();
    }
    inline UClass* Spacer()
    {
        return GetStaticClassImpl<"Spacer">();
    }
    inline UClass* SpinBox()
    {
        return GetStaticClassImpl<"SpinBox">();
    }
    inline UClass* TextBinding()
    {
        return GetStaticClassImpl<"TextBinding">();
    }
    inline UClass* TextBlock()
    {
        return GetStaticClassImpl<"TextBlock">();
    }
    inline UClass* Throbber()
    {
        return GetStaticClassImpl<"Throbber">();
    }
    inline UClass* TileView()
    {
        return GetStaticClassImpl<"TileView">();
    }
    inline UClass* UMGSequencePlayer()
    {
        return GetStaticClassImpl<"UMGSequencePlayer">();
    }
    inline UClass* UniformGridPanel()
    {
        return GetStaticClassImpl<"UniformGridPanel">();
    }
    inline UClass* UniformGridSlot()
    {
        return GetStaticClassImpl<"UniformGridSlot">();
    }
    inline UClass* VerticalBox()
    {
        return GetStaticClassImpl<"VerticalBox">();
    }
    inline UClass* VerticalBoxSlot()
    {
        return GetStaticClassImpl<"VerticalBoxSlot">();
    }
    inline UClass* Viewport()
    {
        return GetStaticClassImpl<"Viewport">();
    }
    inline UClass* VisibilityBinding()
    {
        return GetStaticClassImpl<"VisibilityBinding">();
    }
    inline UClass* WidgetAnimation()
    {
        return GetStaticClassImpl<"WidgetAnimation">();
    }
    inline UClass* WidgetBinding()
    {
        return GetStaticClassImpl<"WidgetBinding">();
    }
    inline UClass* BlueprintGeneratedClass()
    {
        return GetStaticClassImpl<"BlueprintGeneratedClass">();
    }
    inline UClass* WidgetBlueprintGeneratedClass()
    {
        return GetStaticClassImpl<"WidgetBlueprintGeneratedClass">();
    }
    inline UClass* WidgetBlueprintLibrary()
    {
        return GetStaticClassImpl<"WidgetBlueprintLibrary">();
    }
    inline UClass* WidgetComponent()
    {
        return GetStaticClassImpl<"WidgetComponent">();
    }
    inline UClass* WidgetInteractionComponent()
    {
        return GetStaticClassImpl<"WidgetInteractionComponent">();
    }
    inline UClass* WidgetLayoutLibrary()
    {
        return GetStaticClassImpl<"WidgetLayoutLibrary">();
    }
    inline UClass* WidgetNavigation()
    {
        return GetStaticClassImpl<"WidgetNavigation">();
    }
    inline UClass* WidgetSwitcher()
    {
        return GetStaticClassImpl<"WidgetSwitcher">();
    }
    inline UClass* WidgetSwitcherSlot()
    {
        return GetStaticClassImpl<"WidgetSwitcherSlot">();
    }
    inline UClass* WidgetTree()
    {
        return GetStaticClassImpl<"WidgetTree">();
    }
    inline UClass* WindowTitleBarArea()
    {
        return GetStaticClassImpl<"WindowTitleBarArea">();
    }
    inline UClass* WindowTitleBarAreaSlot()
    {
        return GetStaticClassImpl<"WindowTitleBarAreaSlot">();
    }
    inline UClass* WrapBox()
    {
        return GetStaticClassImpl<"WrapBox">();
    }
    inline UClass* WrapBoxSlot()
    {
        return GetStaticClassImpl<"WrapBoxSlot">();
    }
    inline UClass* CameraRig_Crane()
    {
        return GetStaticClassImpl<"CameraRig_Crane">();
    }
    inline UClass* CameraRig_Rail()
    {
        return GetStaticClassImpl<"CameraRig_Rail">();
    }
    inline UClass* CameraActor()
    {
        return GetStaticClassImpl<"CameraActor">();
    }
    inline UClass* CineCameraActor()
    {
        return GetStaticClassImpl<"CineCameraActor">();
    }
    inline UClass* CameraComponent()
    {
        return GetStaticClassImpl<"CameraComponent">();
    }
    inline UClass* CineCameraComponent()
    {
        return GetStaticClassImpl<"CineCameraComponent">();
    }
    inline UClass* AssetRegistryImpl()
    {
        return GetStaticClassImpl<"AssetRegistryImpl">();
    }
    inline UClass* AssetRegistryHelpers()
    {
        return GetStaticClassImpl<"AssetRegistryHelpers">();
    }
    inline UClass* AssetRegistry()
    {
        return GetStaticClassImpl<"AssetRegistry">();
    }
    inline UClass* ConsoleSettings()
    {
        return GetStaticClassImpl<"ConsoleSettings">();
    }
    inline UClass* GameMapsSettings()
    {
        return GetStaticClassImpl<"GameMapsSettings">();
    }
    inline UClass* GameNetworkManagerSettings()
    {
        return GetStaticClassImpl<"GameNetworkManagerSettings">();
    }
    inline UClass* GameSessionSettings()
    {
        return GetStaticClassImpl<"GameSessionSettings">();
    }
    inline UClass* GeneralEngineSettings()
    {
        return GetStaticClassImpl<"GeneralEngineSettings">();
    }
    inline UClass* GeneralProjectSettings()
    {
        return GetStaticClassImpl<"GeneralProjectSettings">();
    }
    inline UClass* HudSettings()
    {
        return GetStaticClassImpl<"HudSettings">();
    }
    inline UClass* BlueprintGameplayTagLibrary()
    {
        return GetStaticClassImpl<"BlueprintGameplayTagLibrary">();
    }
    inline UClass* GameplayTagAssetInterface()
    {
        return GetStaticClassImpl<"GameplayTagAssetInterface">();
    }
    inline UClass* EditableGameplayTagQuery()
    {
        return GetStaticClassImpl<"EditableGameplayTagQuery">();
    }
    inline UClass* EditableGameplayTagQueryExpression()
    {
        return GetStaticClassImpl<"EditableGameplayTagQueryExpression">();
    }
    inline UClass* EditableGameplayTagQueryExpression_AnyTagsMatch()
    {
        return GetStaticClassImpl<"EditableGameplayTagQueryExpression_AnyTagsMatch">();
    }
    inline UClass* EditableGameplayTagQueryExpression_AllTagsMatch()
    {
        return GetStaticClassImpl<"EditableGameplayTagQueryExpression_AllTagsMatch">();
    }
    inline UClass* EditableGameplayTagQueryExpression_NoTagsMatch()
    {
        return GetStaticClassImpl<"EditableGameplayTagQueryExpression_NoTagsMatch">();
    }
    inline UClass* EditableGameplayTagQueryExpression_AnyExprMatch()
    {
        return GetStaticClassImpl<"EditableGameplayTagQueryExpression_AnyExprMatch">();
    }
    inline UClass* EditableGameplayTagQueryExpression_AllExprMatch()
    {
        return GetStaticClassImpl<"EditableGameplayTagQueryExpression_AllExprMatch">();
    }
    inline UClass* EditableGameplayTagQueryExpression_NoExprMatch()
    {
        return GetStaticClassImpl<"EditableGameplayTagQueryExpression_NoExprMatch">();
    }
    inline UClass* GameplayTagsManager()
    {
        return GetStaticClassImpl<"GameplayTagsManager">();
    }
    inline UClass* GameplayTagsList()
    {
        return GetStaticClassImpl<"GameplayTagsList">();
    }
    inline UClass* GameplayTagsSettings()
    {
        return GetStaticClassImpl<"GameplayTagsSettings">();
    }
    inline UClass* GameplayTagsDeveloperSettings()
    {
        return GetStaticClassImpl<"GameplayTagsDeveloperSettings">();
    }
    inline UClass* GameplayTask()
    {
        return GetStaticClassImpl<"GameplayTask">();
    }
    inline UClass* GameplayTask_ClaimResource()
    {
        return GetStaticClassImpl<"GameplayTask_ClaimResource">();
    }
    inline UClass* GameplayTask_SpawnActor()
    {
        return GetStaticClassImpl<"GameplayTask_SpawnActor">();
    }
    inline UClass* GameplayTask_TimeLimitedExecution()
    {
        return GetStaticClassImpl<"GameplayTask_TimeLimitedExecution">();
    }
    inline UClass* GameplayTask_WaitDelay()
    {
        return GetStaticClassImpl<"GameplayTask_WaitDelay">();
    }
    inline UClass* GameplayTaskOwnerInterface()
    {
        return GetStaticClassImpl<"GameplayTaskOwnerInterface">();
    }
    inline UClass* GameplayTaskResource()
    {
        return GetStaticClassImpl<"GameplayTaskResource">();
    }
    inline UClass* GameplayTasksComponent()
    {
        return GetStaticClassImpl<"GameplayTasksComponent">();
    }
    inline UClass* AIAsyncTaskBlueprintProxy()
    {
        return GetStaticClassImpl<"AIAsyncTaskBlueprintProxy">();
    }
    inline UClass* AIBlueprintHelperLibrary()
    {
        return GetStaticClassImpl<"AIBlueprintHelperLibrary">();
    }
    inline UClass* AIDataProvider()
    {
        return GetStaticClassImpl<"AIDataProvider">();
    }
    inline UClass* AIDataProvider_QueryParams()
    {
        return GetStaticClassImpl<"AIDataProvider_QueryParams">();
    }
    inline UClass* AIDataProvider_Random()
    {
        return GetStaticClassImpl<"AIDataProvider_Random">();
    }
    inline UClass* AIHotSpotManager()
    {
        return GetStaticClassImpl<"AIHotSpotManager">();
    }
    inline UClass* AIPerceptionComponent()
    {
        return GetStaticClassImpl<"AIPerceptionComponent">();
    }
    inline UClass* AIPerceptionListenerInterface()
    {
        return GetStaticClassImpl<"AIPerceptionListenerInterface">();
    }
    inline UClass* AIPerceptionStimuliSourceComponent()
    {
        return GetStaticClassImpl<"AIPerceptionStimuliSourceComponent">();
    }
    inline UClass* AIPerceptionSystem()
    {
        return GetStaticClassImpl<"AIPerceptionSystem">();
    }
    inline UClass* AIResourceInterface()
    {
        return GetStaticClassImpl<"AIResourceInterface">();
    }
    inline UClass* AIResource_Movement()
    {
        return GetStaticClassImpl<"AIResource_Movement">();
    }
    inline UClass* AIResource_Logic()
    {
        return GetStaticClassImpl<"AIResource_Logic">();
    }
    inline UClass* AISense()
    {
        return GetStaticClassImpl<"AISense">();
    }
    inline UClass* AISense_Blueprint()
    {
        return GetStaticClassImpl<"AISense_Blueprint">();
    }
    inline UClass* AISense_Damage()
    {
        return GetStaticClassImpl<"AISense_Damage">();
    }
    inline UClass* AISense_Hearing()
    {
        return GetStaticClassImpl<"AISense_Hearing">();
    }
    inline UClass* AISense_Prediction()
    {
        return GetStaticClassImpl<"AISense_Prediction">();
    }
    inline UClass* AISense_Sight()
    {
        return GetStaticClassImpl<"AISense_Sight">();
    }
    inline UClass* AISense_Team()
    {
        return GetStaticClassImpl<"AISense_Team">();
    }
    inline UClass* AISense_Touch()
    {
        return GetStaticClassImpl<"AISense_Touch">();
    }
    inline UClass* UserDefinedStruct()
    {
        return GetStaticClassImpl<"UserDefinedStruct">();
    }
    inline UClass* AISenseBlueprintListener()
    {
        return GetStaticClassImpl<"AISenseBlueprintListener">();
    }
    inline UClass* AISenseConfig()
    {
        return GetStaticClassImpl<"AISenseConfig">();
    }
    inline UClass* AISenseConfig_Blueprint()
    {
        return GetStaticClassImpl<"AISenseConfig_Blueprint">();
    }
    inline UClass* AISenseConfig_Damage()
    {
        return GetStaticClassImpl<"AISenseConfig_Damage">();
    }
    inline UClass* AISenseConfig_Hearing()
    {
        return GetStaticClassImpl<"AISenseConfig_Hearing">();
    }
    inline UClass* AISenseConfig_Prediction()
    {
        return GetStaticClassImpl<"AISenseConfig_Prediction">();
    }
    inline UClass* AISenseConfig_Sight()
    {
        return GetStaticClassImpl<"AISenseConfig_Sight">();
    }
    inline UClass* AISenseConfig_Team()
    {
        return GetStaticClassImpl<"AISenseConfig_Team">();
    }
    inline UClass* AISenseConfig_Touch()
    {
        return GetStaticClassImpl<"AISenseConfig_Touch">();
    }
    inline UClass* AISenseEvent()
    {
        return GetStaticClassImpl<"AISenseEvent">();
    }
    inline UClass* AISenseEvent_Damage()
    {
        return GetStaticClassImpl<"AISenseEvent_Damage">();
    }
    inline UClass* AISenseEvent_Hearing()
    {
        return GetStaticClassImpl<"AISenseEvent_Hearing">();
    }
    inline UClass* AISightTargetInterface()
    {
        return GetStaticClassImpl<"AISightTargetInterface">();
    }
    inline UClass* AISystemBase()
    {
        return GetStaticClassImpl<"AISystemBase">();
    }
    inline UClass* AISystem()
    {
        return GetStaticClassImpl<"AISystem">();
    }
    inline UClass* AITask()
    {
        return GetStaticClassImpl<"AITask">();
    }
    inline UClass* AITask_LockLogic()
    {
        return GetStaticClassImpl<"AITask_LockLogic">();
    }
    inline UClass* AITask_MoveTo()
    {
        return GetStaticClassImpl<"AITask_MoveTo">();
    }
    inline UClass* AITask_RunEQS()
    {
        return GetStaticClassImpl<"AITask_RunEQS">();
    }
    inline UClass* BehaviorTree()
    {
        return GetStaticClassImpl<"BehaviorTree">();
    }
    inline UClass* BrainComponent()
    {
        return GetStaticClassImpl<"BrainComponent">();
    }
    inline UClass* BehaviorTreeComponent()
    {
        return GetStaticClassImpl<"BehaviorTreeComponent">();
    }
    inline UClass* BehaviorTreeManager()
    {
        return GetStaticClassImpl<"BehaviorTreeManager">();
    }
    inline UClass* BehaviorTreeTypes()
    {
        return GetStaticClassImpl<"BehaviorTreeTypes">();
    }
    inline UClass* BlackboardComponent()
    {
        return GetStaticClassImpl<"BlackboardComponent">();
    }
    inline UClass* BlackboardData()
    {
        return GetStaticClassImpl<"BlackboardData">();
    }
    inline UClass* BlackboardKeyType()
    {
        return GetStaticClassImpl<"BlackboardKeyType">();
    }
    inline UClass* BlackboardKeyType_Bool()
    {
        return GetStaticClassImpl<"BlackboardKeyType_Bool">();
    }
    inline UClass* BlackboardKeyType_Class()
    {
        return GetStaticClassImpl<"BlackboardKeyType_Class">();
    }
    inline UClass* BlackboardKeyType_Enum()
    {
        return GetStaticClassImpl<"BlackboardKeyType_Enum">();
    }
    inline UClass* BlackboardKeyType_Float()
    {
        return GetStaticClassImpl<"BlackboardKeyType_Float">();
    }
    inline UClass* BlackboardKeyType_Int()
    {
        return GetStaticClassImpl<"BlackboardKeyType_Int">();
    }
    inline UClass* BlackboardKeyType_Name()
    {
        return GetStaticClassImpl<"BlackboardKeyType_Name">();
    }
    inline UClass* BlackboardKeyType_NativeEnum()
    {
        return GetStaticClassImpl<"BlackboardKeyType_NativeEnum">();
    }
    inline UClass* BlackboardKeyType_Object()
    {
        return GetStaticClassImpl<"BlackboardKeyType_Object">();
    }
    inline UClass* BlackboardKeyType_Rotator()
    {
        return GetStaticClassImpl<"BlackboardKeyType_Rotator">();
    }
    inline UClass* BlackboardKeyType_String()
    {
        return GetStaticClassImpl<"BlackboardKeyType_String">();
    }
    inline UClass* BlackboardKeyType_Vector()
    {
        return GetStaticClassImpl<"BlackboardKeyType_Vector">();
    }
    inline UClass* BTCompositeNode()
    {
        return GetStaticClassImpl<"BTCompositeNode">();
    }
    inline UClass* BTComposite_Selector()
    {
        return GetStaticClassImpl<"BTComposite_Selector">();
    }
    inline UClass* BTComposite_Sequence()
    {
        return GetStaticClassImpl<"BTComposite_Sequence">();
    }
    inline UClass* BTComposite_SimpleParallel()
    {
        return GetStaticClassImpl<"BTComposite_SimpleParallel">();
    }
    inline UClass* BTDecorator()
    {
        return GetStaticClassImpl<"BTDecorator">();
    }
    inline UClass* BTDecorator_BlackboardBase()
    {
        return GetStaticClassImpl<"BTDecorator_BlackboardBase">();
    }
    inline UClass* BTDecorator_Blackboard()
    {
        return GetStaticClassImpl<"BTDecorator_Blackboard">();
    }
    inline UClass* BTDecorator_BlueprintBase()
    {
        return GetStaticClassImpl<"BTDecorator_BlueprintBase">();
    }
    inline UClass* BTDecorator_CheckGameplayTagsOnActor()
    {
        return GetStaticClassImpl<"BTDecorator_CheckGameplayTagsOnActor">();
    }
    inline UClass* BTDecorator_CompareBBEntries()
    {
        return GetStaticClassImpl<"BTDecorator_CompareBBEntries">();
    }
    inline UClass* BTDecorator_ConditionalLoop()
    {
        return GetStaticClassImpl<"BTDecorator_ConditionalLoop">();
    }
    inline UClass* BTDecorator_ConeCheck()
    {
        return GetStaticClassImpl<"BTDecorator_ConeCheck">();
    }
    inline UClass* BTDecorator_Cooldown()
    {
        return GetStaticClassImpl<"BTDecorator_Cooldown">();
    }
    inline UClass* BTDecorator_DoesPathExist()
    {
        return GetStaticClassImpl<"BTDecorator_DoesPathExist">();
    }
    inline UClass* BTDecorator_ForceSuccess()
    {
        return GetStaticClassImpl<"BTDecorator_ForceSuccess">();
    }
    inline UClass* BTDecorator_IsAtLocation()
    {
        return GetStaticClassImpl<"BTDecorator_IsAtLocation">();
    }
    inline UClass* BTDecorator_IsBBEntryOfClass()
    {
        return GetStaticClassImpl<"BTDecorator_IsBBEntryOfClass">();
    }
    inline UClass* BTDecorator_KeepInCone()
    {
        return GetStaticClassImpl<"BTDecorator_KeepInCone">();
    }
    inline UClass* BTDecorator_Loop()
    {
        return GetStaticClassImpl<"BTDecorator_Loop">();
    }
    inline UClass* BTDecorator_ReachedMoveGoal()
    {
        return GetStaticClassImpl<"BTDecorator_ReachedMoveGoal">();
    }
    inline UClass* BTDecorator_SetTagCooldown()
    {
        return GetStaticClassImpl<"BTDecorator_SetTagCooldown">();
    }
    inline UClass* BTDecorator_TagCooldown()
    {
        return GetStaticClassImpl<"BTDecorator_TagCooldown">();
    }
    inline UClass* BTDecorator_TimeLimit()
    {
        return GetStaticClassImpl<"BTDecorator_TimeLimit">();
    }
    inline UClass* BTFunctionLibrary()
    {
        return GetStaticClassImpl<"BTFunctionLibrary">();
    }
    inline UClass* BTService_BlueprintBase()
    {
        return GetStaticClassImpl<"BTService_BlueprintBase">();
    }
    inline UClass* BTService_DefaultFocus()
    {
        return GetStaticClassImpl<"BTService_DefaultFocus">();
    }
    inline UClass* BTService_RunEQS()
    {
        return GetStaticClassImpl<"BTService_RunEQS">();
    }
    inline UClass* BTTask_BlueprintBase()
    {
        return GetStaticClassImpl<"BTTask_BlueprintBase">();
    }
    inline UClass* BTTask_GameplayTaskBase()
    {
        return GetStaticClassImpl<"BTTask_GameplayTaskBase">();
    }
    inline UClass* BTTask_MakeNoise()
    {
        return GetStaticClassImpl<"BTTask_MakeNoise">();
    }
    inline UClass* BTTask_MoveTo()
    {
        return GetStaticClassImpl<"BTTask_MoveTo">();
    }
    inline UClass* BTTask_MoveDirectlyToward()
    {
        return GetStaticClassImpl<"BTTask_MoveDirectlyToward">();
    }
    inline UClass* BTTask_PawnActionBase()
    {
        return GetStaticClassImpl<"BTTask_PawnActionBase">();
    }
    inline UClass* BTTask_PlayAnimation()
    {
        return GetStaticClassImpl<"BTTask_PlayAnimation">();
    }
    inline UClass* BTTask_PlaySound()
    {
        return GetStaticClassImpl<"BTTask_PlaySound">();
    }
    inline UClass* BTTask_PushPawnAction()
    {
        return GetStaticClassImpl<"BTTask_PushPawnAction">();
    }
    inline UClass* BTTask_RotateToFaceBBEntry()
    {
        return GetStaticClassImpl<"BTTask_RotateToFaceBBEntry">();
    }
    inline UClass* BTTask_RunBehavior()
    {
        return GetStaticClassImpl<"BTTask_RunBehavior">();
    }
    inline UClass* BTTask_RunBehaviorDynamic()
    {
        return GetStaticClassImpl<"BTTask_RunBehaviorDynamic">();
    }
    inline UClass* BTTask_RunEQSQuery()
    {
        return GetStaticClassImpl<"BTTask_RunEQSQuery">();
    }
    inline UClass* BTTask_SetTagCooldown()
    {
        return GetStaticClassImpl<"BTTask_SetTagCooldown">();
    }
    inline UClass* BTTask_Wait()
    {
        return GetStaticClassImpl<"BTTask_Wait">();
    }
    inline UClass* BTTask_WaitBlackboardTime()
    {
        return GetStaticClassImpl<"BTTask_WaitBlackboardTime">();
    }
    inline UClass* CrowdAgentInterface()
    {
        return GetStaticClassImpl<"CrowdAgentInterface">();
    }
    inline UClass* EnvQuery()
    {
        return GetStaticClassImpl<"EnvQuery">();
    }
    inline UClass* EnvQueryContext()
    {
        return GetStaticClassImpl<"EnvQueryContext">();
    }
    inline UClass* EnvQueryContext_BlueprintBase()
    {
        return GetStaticClassImpl<"EnvQueryContext_BlueprintBase">();
    }
    inline UClass* EnvQueryContext_Item()
    {
        return GetStaticClassImpl<"EnvQueryContext_Item">();
    }
    inline UClass* EnvQueryContext_Querier()
    {
        return GetStaticClassImpl<"EnvQueryContext_Querier">();
    }
    inline UClass* EnvQueryDebugHelpers()
    {
        return GetStaticClassImpl<"EnvQueryDebugHelpers">();
    }
    inline UClass* EnvQueryNode()
    {
        return GetStaticClassImpl<"EnvQueryNode">();
    }
    inline UClass* EnvQueryGenerator()
    {
        return GetStaticClassImpl<"EnvQueryGenerator">();
    }
    inline UClass* EnvQueryGenerator_ActorsOfClass()
    {
        return GetStaticClassImpl<"EnvQueryGenerator_ActorsOfClass">();
    }
    inline UClass* EnvQueryGenerator_BlueprintBase()
    {
        return GetStaticClassImpl<"EnvQueryGenerator_BlueprintBase">();
    }
    inline UClass* EnvQueryGenerator_Composite()
    {
        return GetStaticClassImpl<"EnvQueryGenerator_Composite">();
    }
    inline UClass* EnvQueryGenerator_ProjectedPoints()
    {
        return GetStaticClassImpl<"EnvQueryGenerator_ProjectedPoints">();
    }
    inline UClass* EnvQueryGenerator_Cone()
    {
        return GetStaticClassImpl<"EnvQueryGenerator_Cone">();
    }
    inline UClass* EnvQueryGenerator_CurrentLocation()
    {
        return GetStaticClassImpl<"EnvQueryGenerator_CurrentLocation">();
    }
    inline UClass* EnvQueryGenerator_Donut()
    {
        return GetStaticClassImpl<"EnvQueryGenerator_Donut">();
    }
    inline UClass* EnvQueryGenerator_OnCircle()
    {
        return GetStaticClassImpl<"EnvQueryGenerator_OnCircle">();
    }
    inline UClass* EnvQueryGenerator_SimpleGrid()
    {
        return GetStaticClassImpl<"EnvQueryGenerator_SimpleGrid">();
    }
    inline UClass* EnvQueryGenerator_PathingGrid()
    {
        return GetStaticClassImpl<"EnvQueryGenerator_PathingGrid">();
    }
    inline UClass* EnvQueryInstanceBlueprintWrapper()
    {
        return GetStaticClassImpl<"EnvQueryInstanceBlueprintWrapper">();
    }
    inline UClass* EnvQueryItemType()
    {
        return GetStaticClassImpl<"EnvQueryItemType">();
    }
    inline UClass* EnvQueryItemType_VectorBase()
    {
        return GetStaticClassImpl<"EnvQueryItemType_VectorBase">();
    }
    inline UClass* EnvQueryItemType_ActorBase()
    {
        return GetStaticClassImpl<"EnvQueryItemType_ActorBase">();
    }
    inline UClass* EnvQueryItemType_Actor()
    {
        return GetStaticClassImpl<"EnvQueryItemType_Actor">();
    }
    inline UClass* EnvQueryItemType_Direction()
    {
        return GetStaticClassImpl<"EnvQueryItemType_Direction">();
    }
    inline UClass* EnvQueryItemType_Point()
    {
        return GetStaticClassImpl<"EnvQueryItemType_Point">();
    }
    inline UClass* EnvQueryManager()
    {
        return GetStaticClassImpl<"EnvQueryManager">();
    }
    inline UClass* EnvQueryOption()
    {
        return GetStaticClassImpl<"EnvQueryOption">();
    }
    inline UClass* EnvQueryTest()
    {
        return GetStaticClassImpl<"EnvQueryTest">();
    }
    inline UClass* EnvQueryTest_Distance()
    {
        return GetStaticClassImpl<"EnvQueryTest_Distance">();
    }
    inline UClass* EnvQueryTest_Dot()
    {
        return GetStaticClassImpl<"EnvQueryTest_Dot">();
    }
    inline UClass* EnvQueryTest_GameplayTags()
    {
        return GetStaticClassImpl<"EnvQueryTest_GameplayTags">();
    }
    inline UClass* EnvQueryTest_Overlap()
    {
        return GetStaticClassImpl<"EnvQueryTest_Overlap">();
    }
    inline UClass* EnvQueryTest_Pathfinding()
    {
        return GetStaticClassImpl<"EnvQueryTest_Pathfinding">();
    }
    inline UClass* EnvQueryTest_PathfindingBatch()
    {
        return GetStaticClassImpl<"EnvQueryTest_PathfindingBatch">();
    }
    inline UClass* EnvQueryTest_Project()
    {
        return GetStaticClassImpl<"EnvQueryTest_Project">();
    }
    inline UClass* EnvQueryTest_Random()
    {
        return GetStaticClassImpl<"EnvQueryTest_Random">();
    }
    inline UClass* EnvQueryTest_Trace()
    {
        return GetStaticClassImpl<"EnvQueryTest_Trace">();
    }
    inline UClass* EnvQueryTypes()
    {
        return GetStaticClassImpl<"EnvQueryTypes">();
    }
    inline UClass* EQSQueryResultSourceInterface()
    {
        return GetStaticClassImpl<"EQSQueryResultSourceInterface">();
    }
    inline UClass* EQSRenderingComponent()
    {
        return GetStaticClassImpl<"EQSRenderingComponent">();
    }
    inline UClass* EQSTestingPawn()
    {
        return GetStaticClassImpl<"EQSTestingPawn">();
    }
    inline UClass* GenericTeamAgentInterface()
    {
        return GetStaticClassImpl<"GenericTeamAgentInterface">();
    }
    inline UClass* NavigationQueryFilter()
    {
        return GetStaticClassImpl<"NavigationQueryFilter">();
    }
    inline UClass* NavFilter_AIControllerDefault()
    {
        return GetStaticClassImpl<"NavFilter_AIControllerDefault">();
    }
    inline UClass* NavLocalGridManager()
    {
        return GetStaticClassImpl<"NavLocalGridManager">();
    }
    inline UClass* PawnAction()
    {
        return GetStaticClassImpl<"PawnAction">();
    }
    inline UClass* PawnAction_BlueprintBase()
    {
        return GetStaticClassImpl<"PawnAction_BlueprintBase">();
    }
    inline UClass* PawnAction_Move()
    {
        return GetStaticClassImpl<"PawnAction_Move">();
    }
    inline UClass* PawnAction_Repeat()
    {
        return GetStaticClassImpl<"PawnAction_Repeat">();
    }
    inline UClass* PawnAction_Sequence()
    {
        return GetStaticClassImpl<"PawnAction_Sequence">();
    }
    inline UClass* PawnAction_Wait()
    {
        return GetStaticClassImpl<"PawnAction_Wait">();
    }
    inline UClass* PawnActionsComponent()
    {
        return GetStaticClassImpl<"PawnActionsComponent">();
    }
    inline UClass* PawnSensingComponent()
    {
        return GetStaticClassImpl<"PawnSensingComponent">();
    }
    inline UClass* VisualLoggerExtension()
    {
        return GetStaticClassImpl<"VisualLoggerExtension">();
    }
    inline UClass* HandlerComponentFactory()
    {
        return GetStaticClassImpl<"HandlerComponentFactory">();
    }
    inline UClass* ClothingAssetBase()
    {
        return GetStaticClassImpl<"ClothingAssetBase">();
    }
    inline UClass* ClothingSimulationFactory()
    {
        return GetStaticClassImpl<"ClothingSimulationFactory">();
    }
    inline UClass* GeometryCache()
    {
        return GetStaticClassImpl<"GeometryCache">();
    }
    inline UClass* GeometryCacheActor()
    {
        return GetStaticClassImpl<"GeometryCacheActor">();
    }
    inline UClass* GeometryCacheComponent()
    {
        return GetStaticClassImpl<"GeometryCacheComponent">();
    }
    inline UClass* GeometryCacheTrack()
    {
        return GetStaticClassImpl<"GeometryCacheTrack">();
    }
    inline UClass* GeometryCacheTrack_FlipbookAnimation()
    {
        return GetStaticClassImpl<"GeometryCacheTrack_FlipbookAnimation">();
    }
    inline UClass* GeometryCacheTrack_TransformAnimation()
    {
        return GetStaticClassImpl<"GeometryCacheTrack_TransformAnimation">();
    }
    inline UClass* GeometryCacheTrack_TransformGroupAnimation()
    {
        return GetStaticClassImpl<"GeometryCacheTrack_TransformGroupAnimation">();
    }
    inline UClass* ActorSequence()
    {
        return GetStaticClassImpl<"ActorSequence">();
    }
    inline UClass* ActorSequenceComponent()
    {
        return GetStaticClassImpl<"ActorSequenceComponent">();
    }
    inline UClass* ActorSequencePlayer()
    {
        return GetStaticClassImpl<"ActorSequencePlayer">();
    }
    inline UClass* JsonUtilitiesDummyObject()
    {
        return GetStaticClassImpl<"JsonUtilitiesDummyObject">();
    }
    inline UClass* LevelSequence()
    {
        return GetStaticClassImpl<"LevelSequence">();
    }
    inline UClass* LevelSequenceBurnInInitSettings()
    {
        return GetStaticClassImpl<"LevelSequenceBurnInInitSettings">();
    }
    inline UClass* LevelSequenceBurnInOptions()
    {
        return GetStaticClassImpl<"LevelSequenceBurnInOptions">();
    }
    inline UClass* LevelSequenceActor()
    {
        return GetStaticClassImpl<"LevelSequenceActor">();
    }
    inline UClass* LevelSequenceBurnIn()
    {
        return GetStaticClassImpl<"LevelSequenceBurnIn">();
    }
    inline UClass* LevelSequencePlayer()
    {
        return GetStaticClassImpl<"LevelSequencePlayer">();
    }
    inline UClass* MovieSceneCapture()
    {
        return GetStaticClassImpl<"MovieSceneCapture">();
    }
    inline UClass* AutomatedLevelSequenceCapture()
    {
        return GetStaticClassImpl<"AutomatedLevelSequenceCapture">();
    }
    inline UClass* MovieSceneCaptureProtocolSettings()
    {
        return GetStaticClassImpl<"MovieSceneCaptureProtocolSettings">();
    }
    inline UClass* CompositionGraphCaptureSettings()
    {
        return GetStaticClassImpl<"CompositionGraphCaptureSettings">();
    }
    inline UClass* FrameGrabberProtocolSettings()
    {
        return GetStaticClassImpl<"FrameGrabberProtocolSettings">();
    }
    inline UClass* BmpImageCaptureSettings()
    {
        return GetStaticClassImpl<"BmpImageCaptureSettings">();
    }
    inline UClass* ImageCaptureSettings()
    {
        return GetStaticClassImpl<"ImageCaptureSettings">();
    }
    inline UClass* MovieSceneCaptureInterface()
    {
        return GetStaticClassImpl<"MovieSceneCaptureInterface">();
    }
    inline UClass* LevelCapture()
    {
        return GetStaticClassImpl<"LevelCapture">();
    }
    inline UClass* MovieSceneCaptureEnvironment()
    {
        return GetStaticClassImpl<"MovieSceneCaptureEnvironment">();
    }
    inline UClass* VideoCaptureSettings()
    {
        return GetStaticClassImpl<"VideoCaptureSettings">();
    }
    inline UClass* MeshReconstructorBase()
    {
        return GetStaticClassImpl<"MeshReconstructorBase">();
    }
    inline UClass* MRMeshComponent()
    {
        return GetStaticClassImpl<"MRMeshComponent">();
    }
    inline UClass* MoviePlayerSettings()
    {
        return GetStaticClassImpl<"MoviePlayerSettings">();
    }
    inline UClass* NiagaraActor()
    {
        return GetStaticClassImpl<"NiagaraActor">();
    }
    inline UClass* NiagaraComponent()
    {
        return GetStaticClassImpl<"NiagaraComponent">();
    }
    inline UClass* NiagaraDataInterface()
    {
        return GetStaticClassImpl<"NiagaraDataInterface">();
    }
    inline UClass* NiagaraDataInterfaceCurveBase()
    {
        return GetStaticClassImpl<"NiagaraDataInterfaceCurveBase">();
    }
    inline UClass* NiagaraDataInterfaceCurve()
    {
        return GetStaticClassImpl<"NiagaraDataInterfaceCurve">();
    }
    inline UClass* NiagaraDataInterfaceVectorCurve()
    {
        return GetStaticClassImpl<"NiagaraDataInterfaceVectorCurve">();
    }
    inline UClass* NiagaraDataInterfaceColorCurve()
    {
        return GetStaticClassImpl<"NiagaraDataInterfaceColorCurve">();
    }
    inline UClass* NiagaraDataInterfaceCurlNoise()
    {
        return GetStaticClassImpl<"NiagaraDataInterfaceCurlNoise">();
    }
    inline UClass* NiagaraDataInterfaceSpline()
    {
        return GetStaticClassImpl<"NiagaraDataInterfaceSpline">();
    }
    inline UClass* NiagaraDataInterfaceStaticMesh()
    {
        return GetStaticClassImpl<"NiagaraDataInterfaceStaticMesh">();
    }
    inline UClass* NiagaraEffect()
    {
        return GetStaticClassImpl<"NiagaraEffect">();
    }
    inline UClass* NiagaraEffectRendererProperties()
    {
        return GetStaticClassImpl<"NiagaraEffectRendererProperties">();
    }
    inline UClass* NiagaraEmitterProperties()
    {
        return GetStaticClassImpl<"NiagaraEmitterProperties">();
    }
    inline UClass* NiagaraEventReceiverEmitterAction()
    {
        return GetStaticClassImpl<"NiagaraEventReceiverEmitterAction">();
    }
    inline UClass* NiagaraEventReceiverEmitterAction_SpawnParticles()
    {
        return GetStaticClassImpl<"NiagaraEventReceiverEmitterAction_SpawnParticles">();
    }
    inline UClass* NiagaraFunctionLibrary()
    {
        return GetStaticClassImpl<"NiagaraFunctionLibrary">();
    }
    inline UClass* NiagaraLightRendererProperties()
    {
        return GetStaticClassImpl<"NiagaraLightRendererProperties">();
    }
    inline UClass* NiagaraMeshRendererProperties()
    {
        return GetStaticClassImpl<"NiagaraMeshRendererProperties">();
    }
    inline UClass* NiagaraRibbonRendererProperties()
    {
        return GetStaticClassImpl<"NiagaraRibbonRendererProperties">();
    }
    inline UClass* NiagaraScript()
    {
        return GetStaticClassImpl<"NiagaraScript">();
    }
    inline UClass* NiagaraScriptSourceBase()
    {
        return GetStaticClassImpl<"NiagaraScriptSourceBase">();
    }
    inline UClass* NiagaraSettings()
    {
        return GetStaticClassImpl<"NiagaraSettings">();
    }
    inline UClass* NiagaraSpriteRendererProperties()
    {
        return GetStaticClassImpl<"NiagaraSpriteRendererProperties">();
    }
    inline UClass* Model()
    {
        return GetStaticClassImpl<"Model">();
    }
    inline UClass* NavigationData()
    {
        return GetStaticClassImpl<"NavigationData">();
    }
    inline UClass* AbstractNavData()
    {
        return GetStaticClassImpl<"AbstractNavData">();
    }
    inline UClass* Channel()
    {
        return GetStaticClassImpl<"Channel">();
    }
    inline UClass* ActorChannel()
    {
        return GetStaticClassImpl<"ActorChannel">();
    }
    inline UClass* AnimationAsset()
    {
        return GetStaticClassImpl<"AnimationAsset">();
    }
    inline UClass* BlendSpaceBase()
    {
        return GetStaticClassImpl<"BlendSpaceBase">();
    }
    inline UClass* BlendSpace()
    {
        return GetStaticClassImpl<"BlendSpace">();
    }
    inline UClass* AimOffsetBlendSpace()
    {
        return GetStaticClassImpl<"AimOffsetBlendSpace">();
    }
    inline UClass* BlendSpace1D()
    {
        return GetStaticClassImpl<"BlendSpace1D">();
    }
    inline UClass* AimOffsetBlendSpace1D()
    {
        return GetStaticClassImpl<"AimOffsetBlendSpace1D">();
    }
    inline UClass* AmbientSound()
    {
        return GetStaticClassImpl<"AmbientSound">();
    }
    inline UClass* AnimationSettings()
    {
        return GetStaticClassImpl<"AnimationSettings">();
    }
    inline UClass* BlueprintCore()
    {
        return GetStaticClassImpl<"BlueprintCore">();
    }
    inline UClass* Blueprint()
    {
        return GetStaticClassImpl<"Blueprint">();
    }
    inline UClass* AnimBlueprint()
    {
        return GetStaticClassImpl<"AnimBlueprint">();
    }
    inline UClass* AnimBlueprintGeneratedClass()
    {
        return GetStaticClassImpl<"AnimBlueprintGeneratedClass">();
    }
    inline UClass* AnimClassData()
    {
        return GetStaticClassImpl<"AnimClassData">();
    }
    inline UClass* AnimClassInterface()
    {
        return GetStaticClassImpl<"AnimClassInterface">();
    }
    inline UClass* AnimSequenceBase()
    {
        return GetStaticClassImpl<"AnimSequenceBase">();
    }
    inline UClass* AnimCompositeBase()
    {
        return GetStaticClassImpl<"AnimCompositeBase">();
    }
    inline UClass* AnimComposite()
    {
        return GetStaticClassImpl<"AnimComposite">();
    }
    inline UClass* AnimCompress()
    {
        return GetStaticClassImpl<"AnimCompress">();
    }
    inline UClass* AnimCompress_Automatic()
    {
        return GetStaticClassImpl<"AnimCompress_Automatic">();
    }
    inline UClass* AnimCompress_BitwiseCompressOnly()
    {
        return GetStaticClassImpl<"AnimCompress_BitwiseCompressOnly">();
    }
    inline UClass* AnimCompress_LeastDestructive()
    {
        return GetStaticClassImpl<"AnimCompress_LeastDestructive">();
    }
    inline UClass* AnimCompress_RemoveLinearKeys()
    {
        return GetStaticClassImpl<"AnimCompress_RemoveLinearKeys">();
    }
    inline UClass* AnimCompress_PerTrackCompression()
    {
        return GetStaticClassImpl<"AnimCompress_PerTrackCompression">();
    }
    inline UClass* AnimCompress_RemoveEverySecondKey()
    {
        return GetStaticClassImpl<"AnimCompress_RemoveEverySecondKey">();
    }
    inline UClass* AnimCompress_RemoveTrivialKeys()
    {
        return GetStaticClassImpl<"AnimCompress_RemoveTrivialKeys">();
    }
    inline UClass* AnimMetaData()
    {
        return GetStaticClassImpl<"AnimMetaData">();
    }
    inline UClass* AnimMontage()
    {
        return GetStaticClassImpl<"AnimMontage">();
    }
    inline UClass* AnimNotify_PlayParticleEffect()
    {
        return GetStaticClassImpl<"AnimNotify_PlayParticleEffect">();
    }
    inline UClass* AnimNotify_PlaySound()
    {
        return GetStaticClassImpl<"AnimNotify_PlaySound">();
    }
    inline UClass* AnimNotify_ResetClothingSimulation()
    {
        return GetStaticClassImpl<"AnimNotify_ResetClothingSimulation">();
    }
    inline UClass* AnimNotifyState_DisableRootMotion()
    {
        return GetStaticClassImpl<"AnimNotifyState_DisableRootMotion">();
    }
    inline UClass* AnimNotifyState_TimedParticleEffect()
    {
        return GetStaticClassImpl<"AnimNotifyState_TimedParticleEffect">();
    }
    inline UClass* AnimNotifyState_Trail()
    {
        return GetStaticClassImpl<"AnimNotifyState_Trail">();
    }
    inline UClass* AnimSequence()
    {
        return GetStaticClassImpl<"AnimSequence">();
    }
    inline UClass* AnimSet()
    {
        return GetStaticClassImpl<"AnimSet">();
    }
    inline UClass* AnimSingleNodeInstance()
    {
        return GetStaticClassImpl<"AnimSingleNodeInstance">();
    }
    inline UClass* AnimStateMachineTypes()
    {
        return GetStaticClassImpl<"AnimStateMachineTypes">();
    }
    inline UClass* ApplicationLifecycleComponent()
    {
        return GetStaticClassImpl<"ApplicationLifecycleComponent">();
    }
    inline UClass* ArrowComponent()
    {
        return GetStaticClassImpl<"ArrowComponent">();
    }
    inline UClass* AssetImportData()
    {
        return GetStaticClassImpl<"AssetImportData">();
    }
    inline UClass* AssetManager()
    {
        return GetStaticClassImpl<"AssetManager">();
    }
    inline UClass* AssetManagerSettings()
    {
        return GetStaticClassImpl<"AssetManagerSettings">();
    }
    inline UClass* AssetMappingTable()
    {
        return GetStaticClassImpl<"AssetMappingTable">();
    }
    inline UClass* AssetUserData()
    {
        return GetStaticClassImpl<"AssetUserData">();
    }
    inline UClass* AsyncActionLoadPrimaryAssetBase()
    {
        return GetStaticClassImpl<"AsyncActionLoadPrimaryAssetBase">();
    }
    inline UClass* AsyncActionLoadPrimaryAsset()
    {
        return GetStaticClassImpl<"AsyncActionLoadPrimaryAsset">();
    }
    inline UClass* AsyncActionLoadPrimaryAssetClass()
    {
        return GetStaticClassImpl<"AsyncActionLoadPrimaryAssetClass">();
    }
    inline UClass* AsyncActionLoadPrimaryAssetList()
    {
        return GetStaticClassImpl<"AsyncActionLoadPrimaryAssetList">();
    }
    inline UClass* AsyncActionLoadPrimaryAssetClassList()
    {
        return GetStaticClassImpl<"AsyncActionLoadPrimaryAssetClassList">();
    }
    inline UClass* AsyncActionChangePrimaryAssetBundles()
    {
        return GetStaticClassImpl<"AsyncActionChangePrimaryAssetBundles">();
    }
    inline UClass* AtmosphericFog()
    {
        return GetStaticClassImpl<"AtmosphericFog">();
    }
    inline UClass* AtmosphericFogComponent()
    {
        return GetStaticClassImpl<"AtmosphericFogComponent">();
    }
    inline UClass* AudioComponent()
    {
        return GetStaticClassImpl<"AudioComponent">();
    }
    inline UClass* AudioSettings()
    {
        return GetStaticClassImpl<"AudioSettings">();
    }
    inline UClass* AudioVolume()
    {
        return GetStaticClassImpl<"AudioVolume">();
    }
    inline UClass* AutomationTestSettings()
    {
        return GetStaticClassImpl<"AutomationTestSettings">();
    }
    inline UClass* AvoidanceManager()
    {
        return GetStaticClassImpl<"AvoidanceManager">();
    }
    inline UClass* BadObject()
    {
        return GetStaticClassImpl<"BadObject">();
    }
    inline UClass* BattlEyeChannel()
    {
        return GetStaticClassImpl<"BattlEyeChannel">();
    }
    inline UClass* BillboardComponent()
    {
        return GetStaticClassImpl<"BillboardComponent">();
    }
    inline UClass* BlendableInterface()
    {
        return GetStaticClassImpl<"BlendableInterface">();
    }
    inline UClass* Skeleton()
    {
        return GetStaticClassImpl<"Skeleton">();
    }
    inline UClass* BlendProfile()
    {
        return GetStaticClassImpl<"BlendProfile">();
    }
    inline UClass* BlockingVolume()
    {
        return GetStaticClassImpl<"BlockingVolume">();
    }
    inline UClass* BlueprintMapLibrary()
    {
        return GetStaticClassImpl<"BlueprintMapLibrary">();
    }
    inline UClass* PlatformGameInstance()
    {
        return GetStaticClassImpl<"PlatformGameInstance">();
    }
    inline UClass* BlueprintPlatformLibrary()
    {
        return GetStaticClassImpl<"BlueprintPlatformLibrary">();
    }
    inline UClass* BlueprintSetLibrary()
    {
        return GetStaticClassImpl<"BlueprintSetLibrary">();
    }
    inline UClass* BodySetup()
    {
        return GetStaticClassImpl<"BodySetup">();
    }
    inline UClass* BodySetup2D()
    {
        return GetStaticClassImpl<"BodySetup2D">();
    }
    inline UClass* BoneMaskFilter()
    {
        return GetStaticClassImpl<"BoneMaskFilter">();
    }
    inline UClass* BookMark()
    {
        return GetStaticClassImpl<"BookMark">();
    }
    inline UClass* BookMark2D()
    {
        return GetStaticClassImpl<"BookMark2D">();
    }
    inline UClass* ShapeComponent()
    {
        return GetStaticClassImpl<"ShapeComponent">();
    }
    inline UClass* BoxComponent()
    {
        return GetStaticClassImpl<"BoxComponent">();
    }
    inline UClass* ReflectionCapture()
    {
        return GetStaticClassImpl<"ReflectionCapture">();
    }
    inline UClass* BoxReflectionCapture()
    {
        return GetStaticClassImpl<"BoxReflectionCapture">();
    }
    inline UClass* ReflectionCaptureComponent()
    {
        return GetStaticClassImpl<"ReflectionCaptureComponent">();
    }
    inline UClass* BoxReflectionCaptureComponent()
    {
        return GetStaticClassImpl<"BoxReflectionCaptureComponent">();
    }
    inline UClass* Breakpoint()
    {
        return GetStaticClassImpl<"Breakpoint">();
    }
    inline UClass* BrushBuilder()
    {
        return GetStaticClassImpl<"BrushBuilder">();
    }
    inline UClass* BrushComponent()
    {
        return GetStaticClassImpl<"BrushComponent">();
    }
    inline UClass* BrushShape()
    {
        return GetStaticClassImpl<"BrushShape">();
    }
    inline UClass* ButtonStyleAsset()
    {
        return GetStaticClassImpl<"ButtonStyleAsset">();
    }
    inline UClass* CameraAnim()
    {
        return GetStaticClassImpl<"CameraAnim">();
    }
    inline UClass* CameraAnimInst()
    {
        return GetStaticClassImpl<"CameraAnimInst">();
    }
    inline UClass* CameraBlockingVolume()
    {
        return GetStaticClassImpl<"CameraBlockingVolume">();
    }
    inline UClass* CameraShake()
    {
        return GetStaticClassImpl<"CameraShake">();
    }
    inline UClass* Canvas()
    {
        return GetStaticClassImpl<"Canvas">();
    }
    inline UClass* Texture()
    {
        return GetStaticClassImpl<"Texture">();
    }
    inline UClass* TextureRenderTarget()
    {
        return GetStaticClassImpl<"TextureRenderTarget">();
    }
    inline UClass* TextureRenderTarget2D()
    {
        return GetStaticClassImpl<"TextureRenderTarget2D">();
    }
    inline UClass* CanvasRenderTarget2D()
    {
        return GetStaticClassImpl<"CanvasRenderTarget2D">();
    }
    inline UClass* CapsuleComponent()
    {
        return GetStaticClassImpl<"CapsuleComponent">();
    }
    inline UClass* CheckBoxStyleAsset()
    {
        return GetStaticClassImpl<"CheckBoxStyleAsset">();
    }
    inline UClass* ChildActorComponent()
    {
        return GetStaticClassImpl<"ChildActorComponent">();
    }
    inline UClass* ChildConnection()
    {
        return GetStaticClassImpl<"ChildConnection">();
    }
    inline UClass* ClassInfoChannel()
    {
        return GetStaticClassImpl<"ClassInfoChannel">();
    }
    inline UClass* PlatformInterfaceBase()
    {
        return GetStaticClassImpl<"PlatformInterfaceBase">();
    }
    inline UClass* CloudStorageBase()
    {
        return GetStaticClassImpl<"CloudStorageBase">();
    }
    inline UClass* CollisionProfile()
    {
        return GetStaticClassImpl<"CollisionProfile">();
    }
    inline UClass* Commandlet()
    {
        return GetStaticClassImpl<"Commandlet">();
    }
    inline UClass* DynamicBlueprintBinding()
    {
        return GetStaticClassImpl<"DynamicBlueprintBinding">();
    }
    inline UClass* ComponentDelegateBinding()
    {
        return GetStaticClassImpl<"ComponentDelegateBinding">();
    }
    inline UClass* Console()
    {
        return GetStaticClassImpl<"Console">();
    }
    inline UClass* ControlChannel()
    {
        return GetStaticClassImpl<"ControlChannel">();
    }
    inline UClass* ControlRigInterface()
    {
        return GetStaticClassImpl<"ControlRigInterface">();
    }
    inline UClass* StreamingSettings()
    {
        return GetStaticClassImpl<"StreamingSettings">();
    }
    inline UClass* GarbageCollectionSettings()
    {
        return GetStaticClassImpl<"GarbageCollectionSettings">();
    }
    inline UClass* CrowdManagerBase()
    {
        return GetStaticClassImpl<"CrowdManagerBase">();
    }
    inline UClass* CullDistanceVolume()
    {
        return GetStaticClassImpl<"CullDistanceVolume">();
    }
    inline UClass* CurveBase()
    {
        return GetStaticClassImpl<"CurveBase">();
    }
    inline UClass* CurveEdPresetCurve()
    {
        return GetStaticClassImpl<"CurveEdPresetCurve">();
    }
    inline UClass* CurveFloat()
    {
        return GetStaticClassImpl<"CurveFloat">();
    }
    inline UClass* CurveLinearColor()
    {
        return GetStaticClassImpl<"CurveLinearColor">();
    }
    inline UClass* CurveSourceInterface()
    {
        return GetStaticClassImpl<"CurveSourceInterface">();
    }
    inline UClass* CurveTable()
    {
        return GetStaticClassImpl<"CurveTable">();
    }
    inline UClass* CurveVector()
    {
        return GetStaticClassImpl<"CurveVector">();
    }
    inline UClass* PrimaryDataAsset()
    {
        return GetStaticClassImpl<"PrimaryDataAsset">();
    }
    inline UClass* DataTable()
    {
        return GetStaticClassImpl<"DataTable">();
    }
    inline UClass* DataTableFunctionLibrary()
    {
        return GetStaticClassImpl<"DataTableFunctionLibrary">();
    }
    inline UClass* DebugCameraController()
    {
        return GetStaticClassImpl<"DebugCameraController">();
    }
    inline UClass* DebugCameraHUD()
    {
        return GetStaticClassImpl<"DebugCameraHUD">();
    }
    inline UClass* DebugDrawService()
    {
        return GetStaticClassImpl<"DebugDrawService">();
    }
    inline UClass* DecalActor()
    {
        return GetStaticClassImpl<"DecalActor">();
    }
    inline UClass* DecalComponent()
    {
        return GetStaticClassImpl<"DecalComponent">();
    }
    inline UClass* PhysicsVolume()
    {
        return GetStaticClassImpl<"PhysicsVolume">();
    }
    inline UClass* DefaultPhysicsVolume()
    {
        return GetStaticClassImpl<"DefaultPhysicsVolume">();
    }
    inline UClass* DemoNetConnection()
    {
        return GetStaticClassImpl<"DemoNetConnection">();
    }
    inline UClass* DemoNetDriver()
    {
        return GetStaticClassImpl<"DemoNetDriver">();
    }
    inline UClass* PendingNetGame()
    {
        return GetStaticClassImpl<"PendingNetGame">();
    }
    inline UClass* DemoPendingNetGame()
    {
        return GetStaticClassImpl<"DemoPendingNetGame">();
    }
    inline UClass* DestructibleComponent()
    {
        return GetStaticClassImpl<"DestructibleComponent">();
    }
    inline UClass* DestructibleFractureSettings()
    {
        return GetStaticClassImpl<"DestructibleFractureSettings">();
    }
    inline UClass* SkeletalMesh()
    {
        return GetStaticClassImpl<"SkeletalMesh">();
    }
    inline UClass* DestructibleMesh()
    {
        return GetStaticClassImpl<"DestructibleMesh">();
    }
    inline UClass* TextureLODSettings()
    {
        return GetStaticClassImpl<"TextureLODSettings">();
    }
    inline UClass* DeviceProfile()
    {
        return GetStaticClassImpl<"DeviceProfile">();
    }
    inline UClass* DeviceProfileManager()
    {
        return GetStaticClassImpl<"DeviceProfileManager">();
    }
    inline UClass* SoundBase()
    {
        return GetStaticClassImpl<"SoundBase">();
    }
    inline UClass* DialogueSoundWaveProxy()
    {
        return GetStaticClassImpl<"DialogueSoundWaveProxy">();
    }
    inline UClass* DialogueVoice()
    {
        return GetStaticClassImpl<"DialogueVoice">();
    }
    inline UClass* DialogueWave()
    {
        return GetStaticClassImpl<"DialogueWave">();
    }
    inline UClass* Light()
    {
        return GetStaticClassImpl<"Light">();
    }
    inline UClass* DirectionalLight()
    {
        return GetStaticClassImpl<"DirectionalLight">();
    }
    inline UClass* LightComponentBase()
    {
        return GetStaticClassImpl<"LightComponentBase">();
    }
    inline UClass* LightComponent()
    {
        return GetStaticClassImpl<"LightComponent">();
    }
    inline UClass* DirectionalLightComponent()
    {
        return GetStaticClassImpl<"DirectionalLightComponent">();
    }
    inline UClass* Distribution()
    {
        return GetStaticClassImpl<"Distribution">();
    }
    inline UClass* DistributionFloat()
    {
        return GetStaticClassImpl<"DistributionFloat">();
    }
    inline UClass* DistributionFloatConstant()
    {
        return GetStaticClassImpl<"DistributionFloatConstant">();
    }
    inline UClass* DistributionFloatConstantCurve()
    {
        return GetStaticClassImpl<"DistributionFloatConstantCurve">();
    }
    inline UClass* DistributionFloatParameterBase()
    {
        return GetStaticClassImpl<"DistributionFloatParameterBase">();
    }
    inline UClass* DistributionFloatParticleParameter()
    {
        return GetStaticClassImpl<"DistributionFloatParticleParameter">();
    }
    inline UClass* DistributionFloatUniform()
    {
        return GetStaticClassImpl<"DistributionFloatUniform">();
    }
    inline UClass* DistributionFloatUniformCurve()
    {
        return GetStaticClassImpl<"DistributionFloatUniformCurve">();
    }
    inline UClass* DistributionVector()
    {
        return GetStaticClassImpl<"DistributionVector">();
    }
    inline UClass* DistributionVectorConstant()
    {
        return GetStaticClassImpl<"DistributionVectorConstant">();
    }
    inline UClass* DistributionVectorConstantCurve()
    {
        return GetStaticClassImpl<"DistributionVectorConstantCurve">();
    }
    inline UClass* DistributionVectorParameterBase()
    {
        return GetStaticClassImpl<"DistributionVectorParameterBase">();
    }
    inline UClass* DistributionVectorParticleParameter()
    {
        return GetStaticClassImpl<"DistributionVectorParticleParameter">();
    }
    inline UClass* DistributionVectorUniform()
    {
        return GetStaticClassImpl<"DistributionVectorUniform">();
    }
    inline UClass* DistributionVectorUniformCurve()
    {
        return GetStaticClassImpl<"DistributionVectorUniformCurve">();
    }
    inline UClass* DocumentationActor()
    {
        return GetStaticClassImpl<"DocumentationActor">();
    }
    inline UClass* DPICustomScalingRule()
    {
        return GetStaticClassImpl<"DPICustomScalingRule">();
    }
    inline UClass* DrawFrustumComponent()
    {
        return GetStaticClassImpl<"DrawFrustumComponent">();
    }
    inline UClass* SphereComponent()
    {
        return GetStaticClassImpl<"SphereComponent">();
    }
    inline UClass* DrawSphereComponent()
    {
        return GetStaticClassImpl<"DrawSphereComponent">();
    }
    inline UClass* EdGraph()
    {
        return GetStaticClassImpl<"EdGraph">();
    }
    inline UClass* EdGraphNode()
    {
        return GetStaticClassImpl<"EdGraphNode">();
    }
    inline UClass* EdGraphNode_Documentation()
    {
        return GetStaticClassImpl<"EdGraphNode_Documentation">();
    }
    inline UClass* EdGraphPin_Deprecated()
    {
        return GetStaticClassImpl<"EdGraphPin_Deprecated">();
    }
    inline UClass* EdGraphSchema()
    {
        return GetStaticClassImpl<"EdGraphSchema">();
    }
    inline UClass* EmitterCameraLensEffectBase()
    {
        return GetStaticClassImpl<"EmitterCameraLensEffectBase">();
    }
    inline UClass* EndUserSettings()
    {
        return GetStaticClassImpl<"EndUserSettings">();
    }
    inline UClass* EngineBaseTypes()
    {
        return GetStaticClassImpl<"EngineBaseTypes">();
    }
    inline UClass* EngineHandlerComponentFactory()
    {
        return GetStaticClassImpl<"EngineHandlerComponentFactory">();
    }
    inline UClass* LocalMessage()
    {
        return GetStaticClassImpl<"LocalMessage">();
    }
    inline UClass* EngineMessage()
    {
        return GetStaticClassImpl<"EngineMessage">();
    }
    inline UClass* EngineTypes()
    {
        return GetStaticClassImpl<"EngineTypes">();
    }
    inline UClass* ExponentialHeightFog()
    {
        return GetStaticClassImpl<"ExponentialHeightFog">();
    }
    inline UClass* ExponentialHeightFogComponent()
    {
        return GetStaticClassImpl<"ExponentialHeightFogComponent">();
    }
    inline UClass* Exporter()
    {
        return GetStaticClassImpl<"Exporter">();
    }
    inline UClass* FloatingPawnMovement()
    {
        return GetStaticClassImpl<"FloatingPawnMovement">();
    }
    inline UClass* Font()
    {
        return GetStaticClassImpl<"Font">();
    }
    inline UClass* FontFace()
    {
        return GetStaticClassImpl<"FontFace">();
    }
    inline UClass* FontImportOptions()
    {
        return GetStaticClassImpl<"FontImportOptions">();
    }
    inline UClass* ForceFeedbackAttenuation()
    {
        return GetStaticClassImpl<"ForceFeedbackAttenuation">();
    }
    inline UClass* ForceFeedbackComponent()
    {
        return GetStaticClassImpl<"ForceFeedbackComponent">();
    }
    inline UClass* ForceFeedbackEffect()
    {
        return GetStaticClassImpl<"ForceFeedbackEffect">();
    }
    inline UClass* GameNetworkManager()
    {
        return GetStaticClassImpl<"GameNetworkManager">();
    }
    inline UClass* GameplayStatics()
    {
        return GetStaticClassImpl<"GameplayStatics">();
    }
    inline UClass* SpotLight()
    {
        return GetStaticClassImpl<"SpotLight">();
    }
    inline UClass* GeneratedMeshAreaLight()
    {
        return GetStaticClassImpl<"GeneratedMeshAreaLight">();
    }
    inline UClass* HapticFeedbackEffect_Base()
    {
        return GetStaticClassImpl<"HapticFeedbackEffect_Base">();
    }
    inline UClass* HapticFeedbackEffect_Buffer()
    {
        return GetStaticClassImpl<"HapticFeedbackEffect_Buffer">();
    }
    inline UClass* HapticFeedbackEffect_Curve()
    {
        return GetStaticClassImpl<"HapticFeedbackEffect_Curve">();
    }
    inline UClass* HapticFeedbackEffect_SoundWave()
    {
        return GetStaticClassImpl<"HapticFeedbackEffect_SoundWave">();
    }
    inline UClass* SpatializationPluginSourceSettingsBase()
    {
        return GetStaticClassImpl<"SpatializationPluginSourceSettingsBase">();
    }
    inline UClass* OcclusionPluginSourceSettingsBase()
    {
        return GetStaticClassImpl<"OcclusionPluginSourceSettingsBase">();
    }
    inline UClass* ReverbPluginSourceSettingsBase()
    {
        return GetStaticClassImpl<"ReverbPluginSourceSettingsBase">();
    }
    inline UClass* ImportanceSamplingLibrary()
    {
        return GetStaticClassImpl<"ImportanceSamplingLibrary">();
    }
    inline UClass* ImportantToggleSettingInterface()
    {
        return GetStaticClassImpl<"ImportantToggleSettingInterface">();
    }
    inline UClass* InGameAdManager()
    {
        return GetStaticClassImpl<"InGameAdManager">();
    }
    inline UClass* InheritableComponentHandler()
    {
        return GetStaticClassImpl<"InheritableComponentHandler">();
    }
    inline UClass* InputDelegateBinding()
    {
        return GetStaticClassImpl<"InputDelegateBinding">();
    }
    inline UClass* InputActionDelegateBinding()
    {
        return GetStaticClassImpl<"InputActionDelegateBinding">();
    }
    inline UClass* InputAxisDelegateBinding()
    {
        return GetStaticClassImpl<"InputAxisDelegateBinding">();
    }
    inline UClass* InputAxisKeyDelegateBinding()
    {
        return GetStaticClassImpl<"InputAxisKeyDelegateBinding">();
    }
    inline UClass* InputComponent()
    {
        return GetStaticClassImpl<"InputComponent">();
    }
    inline UClass* InputKeyDelegateBinding()
    {
        return GetStaticClassImpl<"InputKeyDelegateBinding">();
    }
    inline UClass* InputSettings()
    {
        return GetStaticClassImpl<"InputSettings">();
    }
    inline UClass* InputTouchDelegateBinding()
    {
        return GetStaticClassImpl<"InputTouchDelegateBinding">();
    }
    inline UClass* InputVectorAxisDelegateBinding()
    {
        return GetStaticClassImpl<"InputVectorAxisDelegateBinding">();
    }
    inline UClass* FoliageAttachedComponentInterface()
    {
        return GetStaticClassImpl<"FoliageAttachedComponentInterface">();
    }
    inline UClass* Interface_AssetUserData()
    {
        return GetStaticClassImpl<"Interface_AssetUserData">();
    }
    inline UClass* Interface_CollisionDataProvider()
    {
        return GetStaticClassImpl<"Interface_CollisionDataProvider">();
    }
    inline UClass* Interface_PostProcessVolume()
    {
        return GetStaticClassImpl<"Interface_PostProcessVolume">();
    }
    inline UClass* InterpCurveEdSetup()
    {
        return GetStaticClassImpl<"InterpCurveEdSetup">();
    }
    inline UClass* InterpData()
    {
        return GetStaticClassImpl<"InterpData">();
    }
    inline UClass* InterpFilter()
    {
        return GetStaticClassImpl<"InterpFilter">();
    }
    inline UClass* InterpFilter_Classes()
    {
        return GetStaticClassImpl<"InterpFilter_Classes">();
    }
    inline UClass* InterpFilter_Custom()
    {
        return GetStaticClassImpl<"InterpFilter_Custom">();
    }
    inline UClass* InterpGroup()
    {
        return GetStaticClassImpl<"InterpGroup">();
    }
    inline UClass* InterpGroupCamera()
    {
        return GetStaticClassImpl<"InterpGroupCamera">();
    }
    inline UClass* InterpGroupDirector()
    {
        return GetStaticClassImpl<"InterpGroupDirector">();
    }
    inline UClass* InterpGroupInst()
    {
        return GetStaticClassImpl<"InterpGroupInst">();
    }
    inline UClass* InterpGroupInstCamera()
    {
        return GetStaticClassImpl<"InterpGroupInstCamera">();
    }
    inline UClass* InterpGroupInstDirector()
    {
        return GetStaticClassImpl<"InterpGroupInstDirector">();
    }
    inline UClass* InterpToMovementComponent()
    {
        return GetStaticClassImpl<"InterpToMovementComponent">();
    }
    inline UClass* InterpTrack()
    {
        return GetStaticClassImpl<"InterpTrack">();
    }
    inline UClass* InterpTrackFloatBase()
    {
        return GetStaticClassImpl<"InterpTrackFloatBase">();
    }
    inline UClass* InterpTrackAnimControl()
    {
        return GetStaticClassImpl<"InterpTrackAnimControl">();
    }
    inline UClass* InterpTrackVectorBase()
    {
        return GetStaticClassImpl<"InterpTrackVectorBase">();
    }
    inline UClass* InterpTrackAudioMaster()
    {
        return GetStaticClassImpl<"InterpTrackAudioMaster">();
    }
    inline UClass* InterpTrackBoolProp()
    {
        return GetStaticClassImpl<"InterpTrackBoolProp">();
    }
    inline UClass* InterpTrackColorProp()
    {
        return GetStaticClassImpl<"InterpTrackColorProp">();
    }
    inline UClass* InterpTrackColorScale()
    {
        return GetStaticClassImpl<"InterpTrackColorScale">();
    }
    inline UClass* InterpTrackDirector()
    {
        return GetStaticClassImpl<"InterpTrackDirector">();
    }
    inline UClass* InterpTrackEvent()
    {
        return GetStaticClassImpl<"InterpTrackEvent">();
    }
    inline UClass* InterpTrackFade()
    {
        return GetStaticClassImpl<"InterpTrackFade">();
    }
    inline UClass* InterpTrackFloatAnimBPParam()
    {
        return GetStaticClassImpl<"InterpTrackFloatAnimBPParam">();
    }
    inline UClass* InterpTrackFloatMaterialParam()
    {
        return GetStaticClassImpl<"InterpTrackFloatMaterialParam">();
    }
    inline UClass* InterpTrackFloatParticleParam()
    {
        return GetStaticClassImpl<"InterpTrackFloatParticleParam">();
    }
    inline UClass* InterpTrackFloatProp()
    {
        return GetStaticClassImpl<"InterpTrackFloatProp">();
    }
    inline UClass* InterpTrackInst()
    {
        return GetStaticClassImpl<"InterpTrackInst">();
    }
    inline UClass* InterpTrackInstAnimControl()
    {
        return GetStaticClassImpl<"InterpTrackInstAnimControl">();
    }
    inline UClass* InterpTrackInstAudioMaster()
    {
        return GetStaticClassImpl<"InterpTrackInstAudioMaster">();
    }
    inline UClass* InterpTrackInstProperty()
    {
        return GetStaticClassImpl<"InterpTrackInstProperty">();
    }
    inline UClass* InterpTrackInstBoolProp()
    {
        return GetStaticClassImpl<"InterpTrackInstBoolProp">();
    }
    inline UClass* InterpTrackInstColorProp()
    {
        return GetStaticClassImpl<"InterpTrackInstColorProp">();
    }
    inline UClass* InterpTrackInstColorScale()
    {
        return GetStaticClassImpl<"InterpTrackInstColorScale">();
    }
    inline UClass* InterpTrackInstDirector()
    {
        return GetStaticClassImpl<"InterpTrackInstDirector">();
    }
    inline UClass* InterpTrackInstEvent()
    {
        return GetStaticClassImpl<"InterpTrackInstEvent">();
    }
    inline UClass* InterpTrackInstFade()
    {
        return GetStaticClassImpl<"InterpTrackInstFade">();
    }
    inline UClass* InterpTrackInstFloatAnimBPParam()
    {
        return GetStaticClassImpl<"InterpTrackInstFloatAnimBPParam">();
    }
    inline UClass* InterpTrackInstFloatMaterialParam()
    {
        return GetStaticClassImpl<"InterpTrackInstFloatMaterialParam">();
    }
    inline UClass* InterpTrackInstFloatParticleParam()
    {
        return GetStaticClassImpl<"InterpTrackInstFloatParticleParam">();
    }
    inline UClass* InterpTrackInstFloatProp()
    {
        return GetStaticClassImpl<"InterpTrackInstFloatProp">();
    }
    inline UClass* InterpTrackInstLinearColorProp()
    {
        return GetStaticClassImpl<"InterpTrackInstLinearColorProp">();
    }
    inline UClass* InterpTrackInstMove()
    {
        return GetStaticClassImpl<"InterpTrackInstMove">();
    }
    inline UClass* InterpTrackInstParticleReplay()
    {
        return GetStaticClassImpl<"InterpTrackInstParticleReplay">();
    }
    inline UClass* InterpTrackInstSlomo()
    {
        return GetStaticClassImpl<"InterpTrackInstSlomo">();
    }
    inline UClass* InterpTrackInstSound()
    {
        return GetStaticClassImpl<"InterpTrackInstSound">();
    }
    inline UClass* InterpTrackInstToggle()
    {
        return GetStaticClassImpl<"InterpTrackInstToggle">();
    }
    inline UClass* InterpTrackInstVectorMaterialParam()
    {
        return GetStaticClassImpl<"InterpTrackInstVectorMaterialParam">();
    }
    inline UClass* InterpTrackInstVectorProp()
    {
        return GetStaticClassImpl<"InterpTrackInstVectorProp">();
    }
    inline UClass* InterpTrackInstVisibility()
    {
        return GetStaticClassImpl<"InterpTrackInstVisibility">();
    }
    inline UClass* InterpTrackLinearColorBase()
    {
        return GetStaticClassImpl<"InterpTrackLinearColorBase">();
    }
    inline UClass* InterpTrackLinearColorProp()
    {
        return GetStaticClassImpl<"InterpTrackLinearColorProp">();
    }
    inline UClass* InterpTrackMove()
    {
        return GetStaticClassImpl<"InterpTrackMove">();
    }
    inline UClass* InterpTrackMoveAxis()
    {
        return GetStaticClassImpl<"InterpTrackMoveAxis">();
    }
    inline UClass* InterpTrackParticleReplay()
    {
        return GetStaticClassImpl<"InterpTrackParticleReplay">();
    }
    inline UClass* InterpTrackSlomo()
    {
        return GetStaticClassImpl<"InterpTrackSlomo">();
    }
    inline UClass* InterpTrackSound()
    {
        return GetStaticClassImpl<"InterpTrackSound">();
    }
    inline UClass* InterpTrackToggle()
    {
        return GetStaticClassImpl<"InterpTrackToggle">();
    }
    inline UClass* InterpTrackVectorMaterialParam()
    {
        return GetStaticClassImpl<"InterpTrackVectorMaterialParam">();
    }
    inline UClass* InterpTrackVectorProp()
    {
        return GetStaticClassImpl<"InterpTrackVectorProp">();
    }
    inline UClass* InterpTrackVisibility()
    {
        return GetStaticClassImpl<"InterpTrackVisibility">();
    }
    inline UClass* IntSerialization()
    {
        return GetStaticClassImpl<"IntSerialization">();
    }
    inline UClass* KillZVolume()
    {
        return GetStaticClassImpl<"KillZVolume">();
    }
    inline UClass* KismetArrayLibrary()
    {
        return GetStaticClassImpl<"KismetArrayLibrary">();
    }
    inline UClass* KismetGuidLibrary()
    {
        return GetStaticClassImpl<"KismetGuidLibrary">();
    }
    inline UClass* KismetInputLibrary()
    {
        return GetStaticClassImpl<"KismetInputLibrary">();
    }
    inline UClass* KismetInternationalizationLibrary()
    {
        return GetStaticClassImpl<"KismetInternationalizationLibrary">();
    }
    inline UClass* KismetMaterialLibrary()
    {
        return GetStaticClassImpl<"KismetMaterialLibrary">();
    }
    inline UClass* KismetMathLibrary()
    {
        return GetStaticClassImpl<"KismetMathLibrary">();
    }
    inline UClass* KismetNodeHelperLibrary()
    {
        return GetStaticClassImpl<"KismetNodeHelperLibrary">();
    }
    inline UClass* KismetRenderingLibrary()
    {
        return GetStaticClassImpl<"KismetRenderingLibrary">();
    }
    inline UClass* KismetStringLibrary()
    {
        return GetStaticClassImpl<"KismetStringLibrary">();
    }
    inline UClass* KismetStringTableLibrary()
    {
        return GetStaticClassImpl<"KismetStringTableLibrary">();
    }
    inline UClass* KismetSystemLibrary()
    {
        return GetStaticClassImpl<"KismetSystemLibrary">();
    }
    inline UClass* KismetTextLibrary()
    {
        return GetStaticClassImpl<"KismetTextLibrary">();
    }
    inline UClass* Layer()
    {
        return GetStaticClassImpl<"Layer">();
    }
    inline UClass* Level()
    {
        return GetStaticClassImpl<"Level">();
    }
    inline UClass* LevelActorContainer()
    {
        return GetStaticClassImpl<"LevelActorContainer">();
    }
    inline UClass* LevelBounds()
    {
        return GetStaticClassImpl<"LevelBounds">();
    }
    inline UClass* LevelScriptActor()
    {
        return GetStaticClassImpl<"LevelScriptActor">();
    }
    inline UClass* LevelScriptBlueprint()
    {
        return GetStaticClassImpl<"LevelScriptBlueprint">();
    }
    inline UClass* LevelStreaming()
    {
        return GetStaticClassImpl<"LevelStreaming">();
    }
    inline UClass* LevelStreamingAlwaysLoaded()
    {
        return GetStaticClassImpl<"LevelStreamingAlwaysLoaded">();
    }
    inline UClass* LevelStreamingKismet()
    {
        return GetStaticClassImpl<"LevelStreamingKismet">();
    }
    inline UClass* LevelStreamingPersistent()
    {
        return GetStaticClassImpl<"LevelStreamingPersistent">();
    }
    inline UClass* LevelStreamingVolume()
    {
        return GetStaticClassImpl<"LevelStreamingVolume">();
    }
    inline UClass* LightmappedSurfaceCollection()
    {
        return GetStaticClassImpl<"LightmappedSurfaceCollection">();
    }
    inline UClass* Texture2D()
    {
        return GetStaticClassImpl<"Texture2D">();
    }
    inline UClass* LightMapTexture2D()
    {
        return GetStaticClassImpl<"LightMapTexture2D">();
    }
    inline UClass* LightmassCharacterIndirectDetailVolume()
    {
        return GetStaticClassImpl<"LightmassCharacterIndirectDetailVolume">();
    }
    inline UClass* LightmassImportanceVolume()
    {
        return GetStaticClassImpl<"LightmassImportanceVolume">();
    }
    inline UClass* LightmassPortal()
    {
        return GetStaticClassImpl<"LightmassPortal">();
    }
    inline UClass* LightmassPortalComponent()
    {
        return GetStaticClassImpl<"LightmassPortalComponent">();
    }
    inline UClass* LightmassPrimitiveSettingsObject()
    {
        return GetStaticClassImpl<"LightmassPrimitiveSettingsObject">();
    }
    inline UClass* LineBatchComponent()
    {
        return GetStaticClassImpl<"LineBatchComponent">();
    }
    inline UClass* LODActor()
    {
        return GetStaticClassImpl<"LODActor">();
    }
    inline UClass* MapBuildDataRegistry()
    {
        return GetStaticClassImpl<"MapBuildDataRegistry">();
    }
    inline UClass* MapTransitionVolume()
    {
        return GetStaticClassImpl<"MapTransitionVolume">();
    }
    inline UClass* Material()
    {
        return GetStaticClassImpl<"Material">();
    }
    inline UClass* MaterialBillboardComponent()
    {
        return GetStaticClassImpl<"MaterialBillboardComponent">();
    }
    inline UClass* MaterialExpressionAbs()
    {
        return GetStaticClassImpl<"MaterialExpressionAbs">();
    }
    inline UClass* MaterialExpressionActorPositionWS()
    {
        return GetStaticClassImpl<"MaterialExpressionActorPositionWS">();
    }
    inline UClass* MaterialExpressionAdd()
    {
        return GetStaticClassImpl<"MaterialExpressionAdd">();
    }
    inline UClass* MaterialExpressionTextureBase()
    {
        return GetStaticClassImpl<"MaterialExpressionTextureBase">();
    }
    inline UClass* MaterialExpressionTextureSample()
    {
        return GetStaticClassImpl<"MaterialExpressionTextureSample">();
    }
    inline UClass* MaterialExpressionTextureSampleParameter()
    {
        return GetStaticClassImpl<"MaterialExpressionTextureSampleParameter">();
    }
    inline UClass* MaterialExpressionTextureSampleParameter2D()
    {
        return GetStaticClassImpl<"MaterialExpressionTextureSampleParameter2D">();
    }
    inline UClass* MaterialExpressionAntialiasedTextureMask()
    {
        return GetStaticClassImpl<"MaterialExpressionAntialiasedTextureMask">();
    }
    inline UClass* MaterialExpressionAppendVector()
    {
        return GetStaticClassImpl<"MaterialExpressionAppendVector">();
    }
    inline UClass* MaterialExpressionArccosine()
    {
        return GetStaticClassImpl<"MaterialExpressionArccosine">();
    }
    inline UClass* MaterialExpressionArccosineFast()
    {
        return GetStaticClassImpl<"MaterialExpressionArccosineFast">();
    }
    inline UClass* MaterialExpressionArcsine()
    {
        return GetStaticClassImpl<"MaterialExpressionArcsine">();
    }
    inline UClass* MaterialExpressionArcsineFast()
    {
        return GetStaticClassImpl<"MaterialExpressionArcsineFast">();
    }
    inline UClass* MaterialExpressionArctangent()
    {
        return GetStaticClassImpl<"MaterialExpressionArctangent">();
    }
    inline UClass* MaterialExpressionArctangent2()
    {
        return GetStaticClassImpl<"MaterialExpressionArctangent2">();
    }
    inline UClass* MaterialExpressionArctangent2Fast()
    {
        return GetStaticClassImpl<"MaterialExpressionArctangent2Fast">();
    }
    inline UClass* MaterialExpressionArctangentFast()
    {
        return GetStaticClassImpl<"MaterialExpressionArctangentFast">();
    }
    inline UClass* MaterialExpressionAtmosphericFogColor()
    {
        return GetStaticClassImpl<"MaterialExpressionAtmosphericFogColor">();
    }
    inline UClass* MaterialExpressionAtmosphericLightColor()
    {
        return GetStaticClassImpl<"MaterialExpressionAtmosphericLightColor">();
    }
    inline UClass* MaterialExpressionAtmosphericLightVector()
    {
        return GetStaticClassImpl<"MaterialExpressionAtmosphericLightVector">();
    }
    inline UClass* MaterialExpressionBentNormalCustomOutput()
    {
        return GetStaticClassImpl<"MaterialExpressionBentNormalCustomOutput">();
    }
    inline UClass* MaterialExpressionBlackBody()
    {
        return GetStaticClassImpl<"MaterialExpressionBlackBody">();
    }
    inline UClass* MaterialExpressionBlendMaterialAttributes()
    {
        return GetStaticClassImpl<"MaterialExpressionBlendMaterialAttributes">();
    }
    inline UClass* MaterialExpressionBreakMaterialAttributes()
    {
        return GetStaticClassImpl<"MaterialExpressionBreakMaterialAttributes">();
    }
    inline UClass* MaterialExpressionBumpOffset()
    {
        return GetStaticClassImpl<"MaterialExpressionBumpOffset">();
    }
    inline UClass* MaterialExpressionCameraPositionWS()
    {
        return GetStaticClassImpl<"MaterialExpressionCameraPositionWS">();
    }
    inline UClass* MaterialExpressionCameraVectorWS()
    {
        return GetStaticClassImpl<"MaterialExpressionCameraVectorWS">();
    }
    inline UClass* MaterialExpressionCeil()
    {
        return GetStaticClassImpl<"MaterialExpressionCeil">();
    }
    inline UClass* MaterialExpressionClamp()
    {
        return GetStaticClassImpl<"MaterialExpressionClamp">();
    }
    inline UClass* MaterialExpressionClearCoatNormalCustomOutput()
    {
        return GetStaticClassImpl<"MaterialExpressionClearCoatNormalCustomOutput">();
    }
    inline UClass* MaterialExpressionCollectionParameter()
    {
        return GetStaticClassImpl<"MaterialExpressionCollectionParameter">();
    }
    inline UClass* MaterialExpressionComment()
    {
        return GetStaticClassImpl<"MaterialExpressionComment">();
    }
    inline UClass* MaterialExpressionComponentMask()
    {
        return GetStaticClassImpl<"MaterialExpressionComponentMask">();
    }
    inline UClass* MaterialExpressionConstant()
    {
        return GetStaticClassImpl<"MaterialExpressionConstant">();
    }
    inline UClass* MaterialExpressionConstant2Vector()
    {
        return GetStaticClassImpl<"MaterialExpressionConstant2Vector">();
    }
    inline UClass* MaterialExpressionConstant3Vector()
    {
        return GetStaticClassImpl<"MaterialExpressionConstant3Vector">();
    }
    inline UClass* MaterialExpressionConstant4Vector()
    {
        return GetStaticClassImpl<"MaterialExpressionConstant4Vector">();
    }
    inline UClass* MaterialExpressionConstantBiasScale()
    {
        return GetStaticClassImpl<"MaterialExpressionConstantBiasScale">();
    }
    inline UClass* MaterialExpressionCosine()
    {
        return GetStaticClassImpl<"MaterialExpressionCosine">();
    }
    inline UClass* MaterialExpressionCrossProduct()
    {
        return GetStaticClassImpl<"MaterialExpressionCrossProduct">();
    }
    inline UClass* MaterialExpressionCustom()
    {
        return GetStaticClassImpl<"MaterialExpressionCustom">();
    }
    inline UClass* MaterialExpressionDDX()
    {
        return GetStaticClassImpl<"MaterialExpressionDDX">();
    }
    inline UClass* MaterialExpressionDDY()
    {
        return GetStaticClassImpl<"MaterialExpressionDDY">();
    }
    inline UClass* MaterialExpressionDecalDerivative()
    {
        return GetStaticClassImpl<"MaterialExpressionDecalDerivative">();
    }
    inline UClass* MaterialExpressionDecalLifetimeOpacity()
    {
        return GetStaticClassImpl<"MaterialExpressionDecalLifetimeOpacity">();
    }
    inline UClass* MaterialExpressionDecalMipmapLevel()
    {
        return GetStaticClassImpl<"MaterialExpressionDecalMipmapLevel">();
    }
    inline UClass* MaterialExpressionDepthFade()
    {
        return GetStaticClassImpl<"MaterialExpressionDepthFade">();
    }
    inline UClass* MaterialExpressionDepthOfFieldFunction()
    {
        return GetStaticClassImpl<"MaterialExpressionDepthOfFieldFunction">();
    }
    inline UClass* MaterialExpressionDeriveNormalZ()
    {
        return GetStaticClassImpl<"MaterialExpressionDeriveNormalZ">();
    }
    inline UClass* MaterialExpressionDesaturation()
    {
        return GetStaticClassImpl<"MaterialExpressionDesaturation">();
    }
    inline UClass* MaterialExpressionDistance()
    {
        return GetStaticClassImpl<"MaterialExpressionDistance">();
    }
    inline UClass* MaterialExpressionDistanceCullFade()
    {
        return GetStaticClassImpl<"MaterialExpressionDistanceCullFade">();
    }
    inline UClass* MaterialExpressionDistanceFieldGradient()
    {
        return GetStaticClassImpl<"MaterialExpressionDistanceFieldGradient">();
    }
    inline UClass* MaterialExpressionDistanceToNearestSurface()
    {
        return GetStaticClassImpl<"MaterialExpressionDistanceToNearestSurface">();
    }
    inline UClass* MaterialExpressionDivide()
    {
        return GetStaticClassImpl<"MaterialExpressionDivide">();
    }
    inline UClass* MaterialExpressionDotProduct()
    {
        return GetStaticClassImpl<"MaterialExpressionDotProduct">();
    }
    inline UClass* MaterialExpressionDynamicParameter()
    {
        return GetStaticClassImpl<"MaterialExpressionDynamicParameter">();
    }
    inline UClass* MaterialExpressionEyeAdaptation()
    {
        return GetStaticClassImpl<"MaterialExpressionEyeAdaptation">();
    }
    inline UClass* MaterialExpressionFeatureLevelSwitch()
    {
        return GetStaticClassImpl<"MaterialExpressionFeatureLevelSwitch">();
    }
    inline UClass* MaterialExpressionFloor()
    {
        return GetStaticClassImpl<"MaterialExpressionFloor">();
    }
    inline UClass* MaterialExpressionFmod()
    {
        return GetStaticClassImpl<"MaterialExpressionFmod">();
    }
    inline UClass* MaterialExpressionFontSample()
    {
        return GetStaticClassImpl<"MaterialExpressionFontSample">();
    }
    inline UClass* MaterialExpressionFontSampleParameter()
    {
        return GetStaticClassImpl<"MaterialExpressionFontSampleParameter">();
    }
    inline UClass* MaterialExpressionFrac()
    {
        return GetStaticClassImpl<"MaterialExpressionFrac">();
    }
    inline UClass* MaterialExpressionFresnel()
    {
        return GetStaticClassImpl<"MaterialExpressionFresnel">();
    }
    inline UClass* MaterialExpressionFunctionInput()
    {
        return GetStaticClassImpl<"MaterialExpressionFunctionInput">();
    }
    inline UClass* MaterialExpressionFunctionOutput()
    {
        return GetStaticClassImpl<"MaterialExpressionFunctionOutput">();
    }
    inline UClass* MaterialExpressionGetMaterialAttributes()
    {
        return GetStaticClassImpl<"MaterialExpressionGetMaterialAttributes">();
    }
    inline UClass* MaterialExpressionGIReplace()
    {
        return GetStaticClassImpl<"MaterialExpressionGIReplace">();
    }
    inline UClass* MaterialExpressionIf()
    {
        return GetStaticClassImpl<"MaterialExpressionIf">();
    }
    inline UClass* MaterialExpressionLightmapUVs()
    {
        return GetStaticClassImpl<"MaterialExpressionLightmapUVs">();
    }
    inline UClass* MaterialExpressionLightmassReplace()
    {
        return GetStaticClassImpl<"MaterialExpressionLightmassReplace">();
    }
    inline UClass* MaterialExpressionLightVector()
    {
        return GetStaticClassImpl<"MaterialExpressionLightVector">();
    }
    inline UClass* MaterialExpressionLinearInterpolate()
    {
        return GetStaticClassImpl<"MaterialExpressionLinearInterpolate">();
    }
    inline UClass* MaterialExpressionLogarithm10()
    {
        return GetStaticClassImpl<"MaterialExpressionLogarithm10">();
    }
    inline UClass* MaterialExpressionLogarithm2()
    {
        return GetStaticClassImpl<"MaterialExpressionLogarithm2">();
    }
    inline UClass* MaterialExpressionMakeMaterialAttributes()
    {
        return GetStaticClassImpl<"MaterialExpressionMakeMaterialAttributes">();
    }
    inline UClass* MaterialExpressionMaterialFunctionCall()
    {
        return GetStaticClassImpl<"MaterialExpressionMaterialFunctionCall">();
    }
    inline UClass* MaterialExpressionMaterialProxyReplace()
    {
        return GetStaticClassImpl<"MaterialExpressionMaterialProxyReplace">();
    }
    inline UClass* MaterialExpressionMax()
    {
        return GetStaticClassImpl<"MaterialExpressionMax">();
    }
    inline UClass* MaterialExpressionMin()
    {
        return GetStaticClassImpl<"MaterialExpressionMin">();
    }
    inline UClass* MaterialExpressionMultiply()
    {
        return GetStaticClassImpl<"MaterialExpressionMultiply">();
    }
    inline UClass* MaterialExpressionNoise()
    {
        return GetStaticClassImpl<"MaterialExpressionNoise">();
    }
    inline UClass* MaterialExpressionNormalize()
    {
        return GetStaticClassImpl<"MaterialExpressionNormalize">();
    }
    inline UClass* MaterialExpressionObjectBounds()
    {
        return GetStaticClassImpl<"MaterialExpressionObjectBounds">();
    }
    inline UClass* MaterialExpressionObjectOrientation()
    {
        return GetStaticClassImpl<"MaterialExpressionObjectOrientation">();
    }
    inline UClass* MaterialExpressionObjectPositionWS()
    {
        return GetStaticClassImpl<"MaterialExpressionObjectPositionWS">();
    }
    inline UClass* MaterialExpressionObjectRadius()
    {
        return GetStaticClassImpl<"MaterialExpressionObjectRadius">();
    }
    inline UClass* MaterialExpressionOneMinus()
    {
        return GetStaticClassImpl<"MaterialExpressionOneMinus">();
    }
    inline UClass* MaterialExpressionPanner()
    {
        return GetStaticClassImpl<"MaterialExpressionPanner">();
    }
    inline UClass* MaterialExpressionParameter()
    {
        return GetStaticClassImpl<"MaterialExpressionParameter">();
    }
    inline UClass* MaterialExpressionParticleColor()
    {
        return GetStaticClassImpl<"MaterialExpressionParticleColor">();
    }
    inline UClass* MaterialExpressionParticleDirection()
    {
        return GetStaticClassImpl<"MaterialExpressionParticleDirection">();
    }
    inline UClass* MaterialExpressionParticleMacroUV()
    {
        return GetStaticClassImpl<"MaterialExpressionParticleMacroUV">();
    }
    inline UClass* MaterialExpressionParticleMotionBlurFade()
    {
        return GetStaticClassImpl<"MaterialExpressionParticleMotionBlurFade">();
    }
    inline UClass* MaterialExpressionParticlePositionWS()
    {
        return GetStaticClassImpl<"MaterialExpressionParticlePositionWS">();
    }
    inline UClass* MaterialExpressionParticleRadius()
    {
        return GetStaticClassImpl<"MaterialExpressionParticleRadius">();
    }
    inline UClass* MaterialExpressionParticleRandom()
    {
        return GetStaticClassImpl<"MaterialExpressionParticleRandom">();
    }
    inline UClass* MaterialExpressionParticleRelativeTime()
    {
        return GetStaticClassImpl<"MaterialExpressionParticleRelativeTime">();
    }
    inline UClass* MaterialExpressionParticleSize()
    {
        return GetStaticClassImpl<"MaterialExpressionParticleSize">();
    }
    inline UClass* MaterialExpressionParticleSpeed()
    {
        return GetStaticClassImpl<"MaterialExpressionParticleSpeed">();
    }
    inline UClass* MaterialExpressionParticleSubUV()
    {
        return GetStaticClassImpl<"MaterialExpressionParticleSubUV">();
    }
    inline UClass* MaterialExpressionPerInstanceFadeAmount()
    {
        return GetStaticClassImpl<"MaterialExpressionPerInstanceFadeAmount">();
    }
    inline UClass* MaterialExpressionPerInstanceRandom()
    {
        return GetStaticClassImpl<"MaterialExpressionPerInstanceRandom">();
    }
    inline UClass* MaterialExpressionPixelDepth()
    {
        return GetStaticClassImpl<"MaterialExpressionPixelDepth">();
    }
    inline UClass* MaterialExpressionPixelNormalWS()
    {
        return GetStaticClassImpl<"MaterialExpressionPixelNormalWS">();
    }
    inline UClass* MaterialExpressionPlatformSwitch()
    {
        return GetStaticClassImpl<"MaterialExpressionPlatformSwitch">();
    }
    inline UClass* MaterialExpressionPower()
    {
        return GetStaticClassImpl<"MaterialExpressionPower">();
    }
    inline UClass* MaterialExpressionPrecomputedAOMask()
    {
        return GetStaticClassImpl<"MaterialExpressionPrecomputedAOMask">();
    }
    inline UClass* MaterialExpressionPreSkinnedNormal()
    {
        return GetStaticClassImpl<"MaterialExpressionPreSkinnedNormal">();
    }
    inline UClass* MaterialExpressionPreSkinnedPosition()
    {
        return GetStaticClassImpl<"MaterialExpressionPreSkinnedPosition">();
    }
    inline UClass* MaterialExpressionPreviousFrameSwitch()
    {
        return GetStaticClassImpl<"MaterialExpressionPreviousFrameSwitch">();
    }
    inline UClass* MaterialExpressionQualitySwitch()
    {
        return GetStaticClassImpl<"MaterialExpressionQualitySwitch">();
    }
    inline UClass* MaterialExpressionReflectionVectorWS()
    {
        return GetStaticClassImpl<"MaterialExpressionReflectionVectorWS">();
    }
    inline UClass* MaterialExpressionReroute()
    {
        return GetStaticClassImpl<"MaterialExpressionReroute">();
    }
    inline UClass* MaterialExpressionRotateAboutAxis()
    {
        return GetStaticClassImpl<"MaterialExpressionRotateAboutAxis">();
    }
    inline UClass* MaterialExpressionRotator()
    {
        return GetStaticClassImpl<"MaterialExpressionRotator">();
    }
    inline UClass* MaterialExpressionRound()
    {
        return GetStaticClassImpl<"MaterialExpressionRound">();
    }
    inline UClass* MaterialExpressionSaturate()
    {
        return GetStaticClassImpl<"MaterialExpressionSaturate">();
    }
    inline UClass* MaterialExpressionScalarParameter()
    {
        return GetStaticClassImpl<"MaterialExpressionScalarParameter">();
    }
    inline UClass* MaterialExpressionSceneColor()
    {
        return GetStaticClassImpl<"MaterialExpressionSceneColor">();
    }
    inline UClass* MaterialExpressionSceneDepth()
    {
        return GetStaticClassImpl<"MaterialExpressionSceneDepth">();
    }
    inline UClass* MaterialExpressionSceneTexelSize()
    {
        return GetStaticClassImpl<"MaterialExpressionSceneTexelSize">();
    }
    inline UClass* MaterialExpressionSceneTexture()
    {
        return GetStaticClassImpl<"MaterialExpressionSceneTexture">();
    }
    inline UClass* MaterialExpressionScreenPosition()
    {
        return GetStaticClassImpl<"MaterialExpressionScreenPosition">();
    }
    inline UClass* MaterialExpressionSetMaterialAttributes()
    {
        return GetStaticClassImpl<"MaterialExpressionSetMaterialAttributes">();
    }
    inline UClass* MaterialExpressionSign()
    {
        return GetStaticClassImpl<"MaterialExpressionSign">();
    }
    inline UClass* MaterialExpressionSine()
    {
        return GetStaticClassImpl<"MaterialExpressionSine">();
    }
    inline UClass* MaterialExpressionSobol()
    {
        return GetStaticClassImpl<"MaterialExpressionSobol">();
    }
    inline UClass* MaterialExpressionSpeedTree()
    {
        return GetStaticClassImpl<"MaterialExpressionSpeedTree">();
    }
    inline UClass* MaterialExpressionSphereMask()
    {
        return GetStaticClassImpl<"MaterialExpressionSphereMask">();
    }
    inline UClass* MaterialExpressionSphericalParticleOpacity()
    {
        return GetStaticClassImpl<"MaterialExpressionSphericalParticleOpacity">();
    }
    inline UClass* MaterialExpressionSquareRoot()
    {
        return GetStaticClassImpl<"MaterialExpressionSquareRoot">();
    }
    inline UClass* MaterialExpressionStaticBool()
    {
        return GetStaticClassImpl<"MaterialExpressionStaticBool">();
    }
    inline UClass* MaterialExpressionStaticBoolParameter()
    {
        return GetStaticClassImpl<"MaterialExpressionStaticBoolParameter">();
    }
    inline UClass* MaterialExpressionStaticComponentMaskParameter()
    {
        return GetStaticClassImpl<"MaterialExpressionStaticComponentMaskParameter">();
    }
    inline UClass* MaterialExpressionStaticSwitch()
    {
        return GetStaticClassImpl<"MaterialExpressionStaticSwitch">();
    }
    inline UClass* MaterialExpressionStaticSwitchParameter()
    {
        return GetStaticClassImpl<"MaterialExpressionStaticSwitchParameter">();
    }
    inline UClass* MaterialExpressionSubtract()
    {
        return GetStaticClassImpl<"MaterialExpressionSubtract">();
    }
    inline UClass* MaterialExpressionTangent()
    {
        return GetStaticClassImpl<"MaterialExpressionTangent">();
    }
    inline UClass* MaterialExpressionTangentOutput()
    {
        return GetStaticClassImpl<"MaterialExpressionTangentOutput">();
    }
    inline UClass* MaterialExpressionTemporalSobol()
    {
        return GetStaticClassImpl<"MaterialExpressionTemporalSobol">();
    }
    inline UClass* MaterialExpressionTextureCoordinate()
    {
        return GetStaticClassImpl<"MaterialExpressionTextureCoordinate">();
    }
    inline UClass* MaterialExpressionTextureObject()
    {
        return GetStaticClassImpl<"MaterialExpressionTextureObject">();
    }
    inline UClass* MaterialExpressionTextureObjectParameter()
    {
        return GetStaticClassImpl<"MaterialExpressionTextureObjectParameter">();
    }
    inline UClass* MaterialExpressionTextureProperty()
    {
        return GetStaticClassImpl<"MaterialExpressionTextureProperty">();
    }
    inline UClass* MaterialExpressionTextureSampleParameterCube()
    {
        return GetStaticClassImpl<"MaterialExpressionTextureSampleParameterCube">();
    }
    inline UClass* MaterialExpressionTextureSampleParameterSubUV()
    {
        return GetStaticClassImpl<"MaterialExpressionTextureSampleParameterSubUV">();
    }
    inline UClass* MaterialExpressionTime()
    {
        return GetStaticClassImpl<"MaterialExpressionTime">();
    }
    inline UClass* MaterialExpressionTransform()
    {
        return GetStaticClassImpl<"MaterialExpressionTransform">();
    }
    inline UClass* MaterialExpressionTransformPosition()
    {
        return GetStaticClassImpl<"MaterialExpressionTransformPosition">();
    }
    inline UClass* MaterialExpressionTruncate()
    {
        return GetStaticClassImpl<"MaterialExpressionTruncate">();
    }
    inline UClass* MaterialExpressionTwoSidedSign()
    {
        return GetStaticClassImpl<"MaterialExpressionTwoSidedSign">();
    }
    inline UClass* MaterialExpressionVectorNoise()
    {
        return GetStaticClassImpl<"MaterialExpressionVectorNoise">();
    }
    inline UClass* MaterialExpressionVectorParameter()
    {
        return GetStaticClassImpl<"MaterialExpressionVectorParameter">();
    }
    inline UClass* MaterialExpressionVertexColor()
    {
        return GetStaticClassImpl<"MaterialExpressionVertexColor">();
    }
    inline UClass* MaterialExpressionVertexInterpolator()
    {
        return GetStaticClassImpl<"MaterialExpressionVertexInterpolator">();
    }
    inline UClass* MaterialExpressionVertexNormalWS()
    {
        return GetStaticClassImpl<"MaterialExpressionVertexNormalWS">();
    }
    inline UClass* MaterialExpressionViewProperty()
    {
        return GetStaticClassImpl<"MaterialExpressionViewProperty">();
    }
    inline UClass* MaterialExpressionViewSize()
    {
        return GetStaticClassImpl<"MaterialExpressionViewSize">();
    }
    inline UClass* MaterialExpressionWorldPosition()
    {
        return GetStaticClassImpl<"MaterialExpressionWorldPosition">();
    }
    inline UClass* MaterialFunction()
    {
        return GetStaticClassImpl<"MaterialFunction">();
    }
    inline UClass* MaterialInstanceActor()
    {
        return GetStaticClassImpl<"MaterialInstanceActor">();
    }
    inline UClass* MaterialInstanceDynamic()
    {
        return GetStaticClassImpl<"MaterialInstanceDynamic">();
    }
    inline UClass* MaterialParameterCollection()
    {
        return GetStaticClassImpl<"MaterialParameterCollection">();
    }
    inline UClass* MaterialParameterCollectionInstance()
    {
        return GetStaticClassImpl<"MaterialParameterCollectionInstance">();
    }
    inline UClass* MatineeActor()
    {
        return GetStaticClassImpl<"MatineeActor">();
    }
    inline UClass* MatineeActorCameraAnim()
    {
        return GetStaticClassImpl<"MatineeActorCameraAnim">();
    }
    inline UClass* MatineeActorManager()
    {
        return GetStaticClassImpl<"MatineeActorManager">();
    }
    inline UClass* MatineeAnimInterface()
    {
        return GetStaticClassImpl<"MatineeAnimInterface">();
    }
    inline UClass* MatineeInterface()
    {
        return GetStaticClassImpl<"MatineeInterface">();
    }
    inline UClass* MergeMeshVolume()
    {
        return GetStaticClassImpl<"MergeMeshVolume">();
    }
    inline UClass* MeshMergeCullingVolume()
    {
        return GetStaticClassImpl<"MeshMergeCullingVolume">();
    }
    inline UClass* MeshSimplificationSettings()
    {
        return GetStaticClassImpl<"MeshSimplificationSettings">();
    }
    inline UClass* MeshVertexPainterKismetLibrary()
    {
        return GetStaticClassImpl<"MeshVertexPainterKismetLibrary">();
    }
    inline UClass* MicroTransactionBase()
    {
        return GetStaticClassImpl<"MicroTransactionBase">();
    }
    inline UClass* ModelComponent()
    {
        return GetStaticClassImpl<"ModelComponent">();
    }
    inline UClass* MorphTarget()
    {
        return GetStaticClassImpl<"MorphTarget">();
    }
    inline UClass* MountedDLCManager()
    {
        return GetStaticClassImpl<"MountedDLCManager">();
    }
    inline UClass* NavAgentInterface()
    {
        return GetStaticClassImpl<"NavAgentInterface">();
    }
    inline UClass* NavArea()
    {
        return GetStaticClassImpl<"NavArea">();
    }
    inline UClass* NavArea_Default()
    {
        return GetStaticClassImpl<"NavArea_Default">();
    }
    inline UClass* NavArea_LowHeight()
    {
        return GetStaticClassImpl<"NavArea_LowHeight">();
    }
    inline UClass* NavArea_Null()
    {
        return GetStaticClassImpl<"NavArea_Null">();
    }
    inline UClass* NavArea_Obstacle()
    {
        return GetStaticClassImpl<"NavArea_Obstacle">();
    }
    inline UClass* NavAreaMeta()
    {
        return GetStaticClassImpl<"NavAreaMeta">();
    }
    inline UClass* NavAreaMeta_SwitchByAgent()
    {
        return GetStaticClassImpl<"NavAreaMeta_SwitchByAgent">();
    }
    inline UClass* NavCollision()
    {
        return GetStaticClassImpl<"NavCollision">();
    }
    inline UClass* NavEdgeProviderInterface()
    {
        return GetStaticClassImpl<"NavEdgeProviderInterface">();
    }
    inline UClass* NavigationDataChunk()
    {
        return GetStaticClassImpl<"NavigationDataChunk">();
    }
    inline UClass* NavigationGraph()
    {
        return GetStaticClassImpl<"NavigationGraph">();
    }
    inline UClass* NavigationGraphNode()
    {
        return GetStaticClassImpl<"NavigationGraphNode">();
    }
    inline UClass* NavigationGraphNodeComponent()
    {
        return GetStaticClassImpl<"NavigationGraphNodeComponent">();
    }
    inline UClass* NavigationInvokerComponent()
    {
        return GetStaticClassImpl<"NavigationInvokerComponent">();
    }
    inline UClass* NavigationPath()
    {
        return GetStaticClassImpl<"NavigationPath">();
    }
    inline UClass* NavigationPathGenerator()
    {
        return GetStaticClassImpl<"NavigationPathGenerator">();
    }
    inline UClass* World()
    {
        return GetStaticClassImpl<"World">();
    }
    inline UClass* NavigationSystem()
    {
        return GetStaticClassImpl<"NavigationSystem">();
    }
    inline UClass* NavigationTestingActor()
    {
        return GetStaticClassImpl<"NavigationTestingActor">();
    }
    inline UClass* NavigationTypes()
    {
        return GetStaticClassImpl<"NavigationTypes">();
    }
    inline UClass* NavLinkComponent()
    {
        return GetStaticClassImpl<"NavLinkComponent">();
    }
    inline UClass* NavRelevantComponent()
    {
        return GetStaticClassImpl<"NavRelevantComponent">();
    }
    inline UClass* NavLinkCustomComponent()
    {
        return GetStaticClassImpl<"NavLinkCustomComponent">();
    }
    inline UClass* NavLinkCustomInterface()
    {
        return GetStaticClassImpl<"NavLinkCustomInterface">();
    }
    inline UClass* NavLinkDefinition()
    {
        return GetStaticClassImpl<"NavLinkDefinition">();
    }
    inline UClass* NavLinkHostInterface()
    {
        return GetStaticClassImpl<"NavLinkHostInterface">();
    }
    inline UClass* NavLinkProxy()
    {
        return GetStaticClassImpl<"NavLinkProxy">();
    }
    inline UClass* NavLinkRenderingComponent()
    {
        return GetStaticClassImpl<"NavLinkRenderingComponent">();
    }
    inline UClass* NavLinkTrivial()
    {
        return GetStaticClassImpl<"NavLinkTrivial">();
    }
    inline UClass* NavMeshBoundsVolume()
    {
        return GetStaticClassImpl<"NavMeshBoundsVolume">();
    }
    inline UClass* NavMeshRenderingComponent()
    {
        return GetStaticClassImpl<"NavMeshRenderingComponent">();
    }
    inline UClass* NavModifierComponent()
    {
        return GetStaticClassImpl<"NavModifierComponent">();
    }
    inline UClass* NavModifierVolume()
    {
        return GetStaticClassImpl<"NavModifierVolume">();
    }
    inline UClass* NavNodeInterface()
    {
        return GetStaticClassImpl<"NavNodeInterface">();
    }
    inline UClass* NavPathObserverInterface()
    {
        return GetStaticClassImpl<"NavPathObserverInterface">();
    }
    inline UClass* NavRelevantInterface()
    {
        return GetStaticClassImpl<"NavRelevantInterface">();
    }
    inline UClass* NavTestRenderingComponent()
    {
        return GetStaticClassImpl<"NavTestRenderingComponent">();
    }
    inline UClass* NetworkPredictionInterface()
    {
        return GetStaticClassImpl<"NetworkPredictionInterface">();
    }
    inline UClass* NetworkSettings()
    {
        return GetStaticClassImpl<"NetworkSettings">();
    }
    inline UClass* NodeMappingContainer()
    {
        return GetStaticClassImpl<"NodeMappingContainer">();
    }
    inline UClass* NodeMappingProviderInterface()
    {
        return GetStaticClassImpl<"NodeMappingProviderInterface">();
    }
    inline UClass* Note()
    {
        return GetStaticClassImpl<"Note">();
    }
    inline UClass* ObjectLibrary()
    {
        return GetStaticClassImpl<"ObjectLibrary">();
    }
    inline UClass* ObjectReferencer()
    {
        return GetStaticClassImpl<"ObjectReferencer">();
    }
    inline UClass* PackageMapClient()
    {
        return GetStaticClassImpl<"PackageMapClient">();
    }
    inline UClass* PainCausingVolume()
    {
        return GetStaticClassImpl<"PainCausingVolume">();
    }
    inline UClass* ParticleEmitter()
    {
        return GetStaticClassImpl<"ParticleEmitter">();
    }
    inline UClass* ParticleEventManager()
    {
        return GetStaticClassImpl<"ParticleEventManager">();
    }
    inline UClass* ParticleLODLevel()
    {
        return GetStaticClassImpl<"ParticleLODLevel">();
    }
    inline UClass* ParticleModule()
    {
        return GetStaticClassImpl<"ParticleModule">();
    }
    inline UClass* ParticleModuleAccelerationBase()
    {
        return GetStaticClassImpl<"ParticleModuleAccelerationBase">();
    }
    inline UClass* ParticleModuleAcceleration()
    {
        return GetStaticClassImpl<"ParticleModuleAcceleration">();
    }
    inline UClass* ParticleModuleAccelerationConstant()
    {
        return GetStaticClassImpl<"ParticleModuleAccelerationConstant">();
    }
    inline UClass* ParticleModuleAccelerationDrag()
    {
        return GetStaticClassImpl<"ParticleModuleAccelerationDrag">();
    }
    inline UClass* ParticleModuleAccelerationDragScaleOverLife()
    {
        return GetStaticClassImpl<"ParticleModuleAccelerationDragScaleOverLife">();
    }
    inline UClass* ParticleModuleAccelerationOverLifetime()
    {
        return GetStaticClassImpl<"ParticleModuleAccelerationOverLifetime">();
    }
    inline UClass* ParticleModuleAttractorBase()
    {
        return GetStaticClassImpl<"ParticleModuleAttractorBase">();
    }
    inline UClass* ParticleModuleAttractorLine()
    {
        return GetStaticClassImpl<"ParticleModuleAttractorLine">();
    }
    inline UClass* ParticleModuleAttractorParticle()
    {
        return GetStaticClassImpl<"ParticleModuleAttractorParticle">();
    }
    inline UClass* ParticleModuleAttractorPoint()
    {
        return GetStaticClassImpl<"ParticleModuleAttractorPoint">();
    }
    inline UClass* ParticleModuleAttractorPointGravity()
    {
        return GetStaticClassImpl<"ParticleModuleAttractorPointGravity">();
    }
    inline UClass* ParticleModuleBeamBase()
    {
        return GetStaticClassImpl<"ParticleModuleBeamBase">();
    }
    inline UClass* ParticleModuleBeamModifier()
    {
        return GetStaticClassImpl<"ParticleModuleBeamModifier">();
    }
    inline UClass* ParticleModuleBeamNoise()
    {
        return GetStaticClassImpl<"ParticleModuleBeamNoise">();
    }
    inline UClass* ParticleModuleBeamSource()
    {
        return GetStaticClassImpl<"ParticleModuleBeamSource">();
    }
    inline UClass* ParticleModuleBeamTarget()
    {
        return GetStaticClassImpl<"ParticleModuleBeamTarget">();
    }
    inline UClass* ParticleModuleCameraBase()
    {
        return GetStaticClassImpl<"ParticleModuleCameraBase">();
    }
    inline UClass* ParticleModuleCameraOffset()
    {
        return GetStaticClassImpl<"ParticleModuleCameraOffset">();
    }
    inline UClass* ParticleModuleCollisionBase()
    {
        return GetStaticClassImpl<"ParticleModuleCollisionBase">();
    }
    inline UClass* ParticleModuleCollision()
    {
        return GetStaticClassImpl<"ParticleModuleCollision">();
    }
    inline UClass* ParticleModuleCollisionGPU()
    {
        return GetStaticClassImpl<"ParticleModuleCollisionGPU">();
    }
    inline UClass* ParticleModuleColorBase()
    {
        return GetStaticClassImpl<"ParticleModuleColorBase">();
    }
    inline UClass* ParticleModuleColor()
    {
        return GetStaticClassImpl<"ParticleModuleColor">();
    }
    inline UClass* ParticleModuleColor_Seeded()
    {
        return GetStaticClassImpl<"ParticleModuleColor_Seeded">();
    }
    inline UClass* ParticleModuleColorOverLife()
    {
        return GetStaticClassImpl<"ParticleModuleColorOverLife">();
    }
    inline UClass* ParticleModuleColorScaleOverLife()
    {
        return GetStaticClassImpl<"ParticleModuleColorScaleOverLife">();
    }
    inline UClass* ParticleModuleEventBase()
    {
        return GetStaticClassImpl<"ParticleModuleEventBase">();
    }
    inline UClass* ParticleModuleEventGenerator()
    {
        return GetStaticClassImpl<"ParticleModuleEventGenerator">();
    }
    inline UClass* ParticleModuleEventReceiverBase()
    {
        return GetStaticClassImpl<"ParticleModuleEventReceiverBase">();
    }
    inline UClass* ParticleModuleEventReceiverKillParticles()
    {
        return GetStaticClassImpl<"ParticleModuleEventReceiverKillParticles">();
    }
    inline UClass* ParticleModuleEventReceiverSpawn()
    {
        return GetStaticClassImpl<"ParticleModuleEventReceiverSpawn">();
    }
    inline UClass* ParticleModuleEventSendToGame()
    {
        return GetStaticClassImpl<"ParticleModuleEventSendToGame">();
    }
    inline UClass* ParticleModuleKillBase()
    {
        return GetStaticClassImpl<"ParticleModuleKillBase">();
    }
    inline UClass* ParticleModuleKillBox()
    {
        return GetStaticClassImpl<"ParticleModuleKillBox">();
    }
    inline UClass* ParticleModuleKillHeight()
    {
        return GetStaticClassImpl<"ParticleModuleKillHeight">();
    }
    inline UClass* ParticleModuleLifetimeBase()
    {
        return GetStaticClassImpl<"ParticleModuleLifetimeBase">();
    }
    inline UClass* ParticleModuleLifetime()
    {
        return GetStaticClassImpl<"ParticleModuleLifetime">();
    }
    inline UClass* ParticleModuleLifetime_Seeded()
    {
        return GetStaticClassImpl<"ParticleModuleLifetime_Seeded">();
    }
    inline UClass* ParticleModuleLightBase()
    {
        return GetStaticClassImpl<"ParticleModuleLightBase">();
    }
    inline UClass* ParticleModuleLight()
    {
        return GetStaticClassImpl<"ParticleModuleLight">();
    }
    inline UClass* ParticleModuleLight_Seeded()
    {
        return GetStaticClassImpl<"ParticleModuleLight_Seeded">();
    }
    inline UClass* ParticleModuleLocationBase()
    {
        return GetStaticClassImpl<"ParticleModuleLocationBase">();
    }
    inline UClass* ParticleModuleLocation()
    {
        return GetStaticClassImpl<"ParticleModuleLocation">();
    }
    inline UClass* ParticleModuleLocation_Seeded()
    {
        return GetStaticClassImpl<"ParticleModuleLocation_Seeded">();
    }
    inline UClass* ParticleModuleLocationBoneSocket()
    {
        return GetStaticClassImpl<"ParticleModuleLocationBoneSocket">();
    }
    inline UClass* ParticleModuleLocationDirect()
    {
        return GetStaticClassImpl<"ParticleModuleLocationDirect">();
    }
    inline UClass* ParticleModuleLocationEmitter()
    {
        return GetStaticClassImpl<"ParticleModuleLocationEmitter">();
    }
    inline UClass* ParticleModuleLocationEmitterDirect()
    {
        return GetStaticClassImpl<"ParticleModuleLocationEmitterDirect">();
    }
    inline UClass* ParticleModuleLocationPrimitiveBase()
    {
        return GetStaticClassImpl<"ParticleModuleLocationPrimitiveBase">();
    }
    inline UClass* ParticleModuleLocationPrimitiveCylinder()
    {
        return GetStaticClassImpl<"ParticleModuleLocationPrimitiveCylinder">();
    }
    inline UClass* ParticleModuleLocationPrimitiveCylinder_Seeded()
    {
        return GetStaticClassImpl<"ParticleModuleLocationPrimitiveCylinder_Seeded">();
    }
    inline UClass* ParticleModuleLocationPrimitiveSphere()
    {
        return GetStaticClassImpl<"ParticleModuleLocationPrimitiveSphere">();
    }
    inline UClass* ParticleModuleLocationPrimitiveSphere_Seeded()
    {
        return GetStaticClassImpl<"ParticleModuleLocationPrimitiveSphere_Seeded">();
    }
    inline UClass* ParticleModuleLocationPrimitiveTriangle()
    {
        return GetStaticClassImpl<"ParticleModuleLocationPrimitiveTriangle">();
    }
    inline UClass* ParticleModuleLocationSkelVertSurface()
    {
        return GetStaticClassImpl<"ParticleModuleLocationSkelVertSurface">();
    }
    inline UClass* ParticleModuleLocationWorldOffset()
    {
        return GetStaticClassImpl<"ParticleModuleLocationWorldOffset">();
    }
    inline UClass* ParticleModuleLocationWorldOffset_Seeded()
    {
        return GetStaticClassImpl<"ParticleModuleLocationWorldOffset_Seeded">();
    }
    inline UClass* ParticleModuleMaterialBase()
    {
        return GetStaticClassImpl<"ParticleModuleMaterialBase">();
    }
    inline UClass* ParticleModuleMeshMaterial()
    {
        return GetStaticClassImpl<"ParticleModuleMeshMaterial">();
    }
    inline UClass* ParticleModuleRotationBase()
    {
        return GetStaticClassImpl<"ParticleModuleRotationBase">();
    }
    inline UClass* ParticleModuleMeshRotation()
    {
        return GetStaticClassImpl<"ParticleModuleMeshRotation">();
    }
    inline UClass* ParticleModuleMeshRotation_Seeded()
    {
        return GetStaticClassImpl<"ParticleModuleMeshRotation_Seeded">();
    }
    inline UClass* ParticleModuleRotationRateBase()
    {
        return GetStaticClassImpl<"ParticleModuleRotationRateBase">();
    }
    inline UClass* ParticleModuleMeshRotationRate()
    {
        return GetStaticClassImpl<"ParticleModuleMeshRotationRate">();
    }
    inline UClass* ParticleModuleMeshRotationRate_Seeded()
    {
        return GetStaticClassImpl<"ParticleModuleMeshRotationRate_Seeded">();
    }
    inline UClass* ParticleModuleMeshRotationRateMultiplyLife()
    {
        return GetStaticClassImpl<"ParticleModuleMeshRotationRateMultiplyLife">();
    }
    inline UClass* ParticleModuleMeshRotationRateOverLife()
    {
        return GetStaticClassImpl<"ParticleModuleMeshRotationRateOverLife">();
    }
    inline UClass* ParticleModuleOrbitBase()
    {
        return GetStaticClassImpl<"ParticleModuleOrbitBase">();
    }
    inline UClass* ParticleModuleOrbit()
    {
        return GetStaticClassImpl<"ParticleModuleOrbit">();
    }
    inline UClass* ParticleModuleOrientationBase()
    {
        return GetStaticClassImpl<"ParticleModuleOrientationBase">();
    }
    inline UClass* ParticleModuleOrientationAxisLock()
    {
        return GetStaticClassImpl<"ParticleModuleOrientationAxisLock">();
    }
    inline UClass* ParticleModuleParameterBase()
    {
        return GetStaticClassImpl<"ParticleModuleParameterBase">();
    }
    inline UClass* ParticleModuleParameterDynamic()
    {
        return GetStaticClassImpl<"ParticleModuleParameterDynamic">();
    }
    inline UClass* ParticleModuleParameterDynamic_Seeded()
    {
        return GetStaticClassImpl<"ParticleModuleParameterDynamic_Seeded">();
    }
    inline UClass* ParticleModulePivotOffset()
    {
        return GetStaticClassImpl<"ParticleModulePivotOffset">();
    }
    inline UClass* ParticleModuleRequired()
    {
        return GetStaticClassImpl<"ParticleModuleRequired">();
    }
    inline UClass* ParticleModuleRotation()
    {
        return GetStaticClassImpl<"ParticleModuleRotation">();
    }
    inline UClass* ParticleModuleRotation_Seeded()
    {
        return GetStaticClassImpl<"ParticleModuleRotation_Seeded">();
    }
    inline UClass* ParticleModuleRotationOverLifetime()
    {
        return GetStaticClassImpl<"ParticleModuleRotationOverLifetime">();
    }
    inline UClass* ParticleModuleRotationRate()
    {
        return GetStaticClassImpl<"ParticleModuleRotationRate">();
    }
    inline UClass* ParticleModuleRotationRate_Seeded()
    {
        return GetStaticClassImpl<"ParticleModuleRotationRate_Seeded">();
    }
    inline UClass* ParticleModuleRotationRateMultiplyLife()
    {
        return GetStaticClassImpl<"ParticleModuleRotationRateMultiplyLife">();
    }
    inline UClass* ParticleModuleSizeBase()
    {
        return GetStaticClassImpl<"ParticleModuleSizeBase">();
    }
    inline UClass* ParticleModuleSize()
    {
        return GetStaticClassImpl<"ParticleModuleSize">();
    }
    inline UClass* ParticleModuleSize_Seeded()
    {
        return GetStaticClassImpl<"ParticleModuleSize_Seeded">();
    }
    inline UClass* ParticleModuleSizeMultiplyLife()
    {
        return GetStaticClassImpl<"ParticleModuleSizeMultiplyLife">();
    }
    inline UClass* ParticleModuleSizeScale()
    {
        return GetStaticClassImpl<"ParticleModuleSizeScale">();
    }
    inline UClass* ParticleModuleSizeScaleBySpeed()
    {
        return GetStaticClassImpl<"ParticleModuleSizeScaleBySpeed">();
    }
    inline UClass* ParticleModuleSourceMovement()
    {
        return GetStaticClassImpl<"ParticleModuleSourceMovement">();
    }
    inline UClass* ParticleModuleSpawnBase()
    {
        return GetStaticClassImpl<"ParticleModuleSpawnBase">();
    }
    inline UClass* ParticleModuleSpawn()
    {
        return GetStaticClassImpl<"ParticleModuleSpawn">();
    }
    inline UClass* ParticleModuleSpawnPerUnit()
    {
        return GetStaticClassImpl<"ParticleModuleSpawnPerUnit">();
    }
    inline UClass* ParticleModuleSubUVBase()
    {
        return GetStaticClassImpl<"ParticleModuleSubUVBase">();
    }
    inline UClass* ParticleModuleSubUV()
    {
        return GetStaticClassImpl<"ParticleModuleSubUV">();
    }
    inline UClass* ParticleModuleSubUVMovie()
    {
        return GetStaticClassImpl<"ParticleModuleSubUVMovie">();
    }
    inline UClass* ParticleModuleTrailBase()
    {
        return GetStaticClassImpl<"ParticleModuleTrailBase">();
    }
    inline UClass* ParticleModuleTrailSource()
    {
        return GetStaticClassImpl<"ParticleModuleTrailSource">();
    }
    inline UClass* ParticleModuleTypeDataBase()
    {
        return GetStaticClassImpl<"ParticleModuleTypeDataBase">();
    }
    inline UClass* ParticleModuleTypeDataAnimTrail()
    {
        return GetStaticClassImpl<"ParticleModuleTypeDataAnimTrail">();
    }
    inline UClass* ParticleModuleTypeDataBeam2()
    {
        return GetStaticClassImpl<"ParticleModuleTypeDataBeam2">();
    }
    inline UClass* ParticleModuleTypeDataGpu()
    {
        return GetStaticClassImpl<"ParticleModuleTypeDataGpu">();
    }
    inline UClass* ParticleModuleTypeDataMesh()
    {
        return GetStaticClassImpl<"ParticleModuleTypeDataMesh">();
    }
    inline UClass* ParticleModuleTypeDataRibbon()
    {
        return GetStaticClassImpl<"ParticleModuleTypeDataRibbon">();
    }
    inline UClass* ParticleModuleVectorFieldBase()
    {
        return GetStaticClassImpl<"ParticleModuleVectorFieldBase">();
    }
    inline UClass* ParticleModuleVectorFieldGlobal()
    {
        return GetStaticClassImpl<"ParticleModuleVectorFieldGlobal">();
    }
    inline UClass* ParticleModuleVectorFieldLocal()
    {
        return GetStaticClassImpl<"ParticleModuleVectorFieldLocal">();
    }
    inline UClass* ParticleModuleVectorFieldRotation()
    {
        return GetStaticClassImpl<"ParticleModuleVectorFieldRotation">();
    }
    inline UClass* ParticleModuleVectorFieldRotationRate()
    {
        return GetStaticClassImpl<"ParticleModuleVectorFieldRotationRate">();
    }
    inline UClass* ParticleModuleVectorFieldScale()
    {
        return GetStaticClassImpl<"ParticleModuleVectorFieldScale">();
    }
    inline UClass* ParticleModuleVectorFieldScaleOverLife()
    {
        return GetStaticClassImpl<"ParticleModuleVectorFieldScaleOverLife">();
    }
    inline UClass* ParticleModuleVelocityBase()
    {
        return GetStaticClassImpl<"ParticleModuleVelocityBase">();
    }
    inline UClass* ParticleModuleVelocity()
    {
        return GetStaticClassImpl<"ParticleModuleVelocity">();
    }
    inline UClass* ParticleModuleVelocity_Seeded()
    {
        return GetStaticClassImpl<"ParticleModuleVelocity_Seeded">();
    }
    inline UClass* ParticleModuleVelocityCone()
    {
        return GetStaticClassImpl<"ParticleModuleVelocityCone">();
    }
    inline UClass* ParticleModuleVelocityInheritParent()
    {
        return GetStaticClassImpl<"ParticleModuleVelocityInheritParent">();
    }
    inline UClass* ParticleModuleVelocityOverLifetime()
    {
        return GetStaticClassImpl<"ParticleModuleVelocityOverLifetime">();
    }
    inline UClass* ParticleSpriteEmitter()
    {
        return GetStaticClassImpl<"ParticleSpriteEmitter">();
    }
    inline UClass* ParticleSystem()
    {
        return GetStaticClassImpl<"ParticleSystem">();
    }
    inline UClass* ParticleSystemReplay()
    {
        return GetStaticClassImpl<"ParticleSystemReplay">();
    }
    inline UClass* PawnNoiseEmitterComponent()
    {
        return GetStaticClassImpl<"PawnNoiseEmitterComponent">();
    }
    inline UClass* PhysicalAnimationComponent()
    {
        return GetStaticClassImpl<"PhysicalAnimationComponent">();
    }
    inline UClass* PhysicalMaterial()
    {
        return GetStaticClassImpl<"PhysicalMaterial">();
    }
    inline UClass* PhysicalMaterialPropertyBase()
    {
        return GetStaticClassImpl<"PhysicalMaterialPropertyBase">();
    }
    inline UClass* PhysicsAsset()
    {
        return GetStaticClassImpl<"PhysicsAsset">();
    }
    inline UClass* SkeletalBodySetup()
    {
        return GetStaticClassImpl<"SkeletalBodySetup">();
    }
    inline UClass* PhysicsCollisionHandler()
    {
        return GetStaticClassImpl<"PhysicsCollisionHandler">();
    }
    inline UClass* RigidBodyBase()
    {
        return GetStaticClassImpl<"RigidBodyBase">();
    }
    inline UClass* PhysicsConstraintActor()
    {
        return GetStaticClassImpl<"PhysicsConstraintActor">();
    }
    inline UClass* PhysicsConstraintComponent()
    {
        return GetStaticClassImpl<"PhysicsConstraintComponent">();
    }
    inline UClass* PhysicsConstraintTemplate()
    {
        return GetStaticClassImpl<"PhysicsConstraintTemplate">();
    }
    inline UClass* PhysicsHandleComponent()
    {
        return GetStaticClassImpl<"PhysicsHandleComponent">();
    }
    inline UClass* PhysicsSerializer()
    {
        return GetStaticClassImpl<"PhysicsSerializer">();
    }
    inline UClass* PhysicsSettings()
    {
        return GetStaticClassImpl<"PhysicsSettings">();
    }
    inline UClass* PhysicsSpringComponent()
    {
        return GetStaticClassImpl<"PhysicsSpringComponent">();
    }
    inline UClass* PhysicsThruster()
    {
        return GetStaticClassImpl<"PhysicsThruster">();
    }
    inline UClass* PhysicsThrusterComponent()
    {
        return GetStaticClassImpl<"PhysicsThrusterComponent">();
    }
    inline UClass* SceneCapture()
    {
        return GetStaticClassImpl<"SceneCapture">();
    }
    inline UClass* PlanarReflection()
    {
        return GetStaticClassImpl<"PlanarReflection">();
    }
    inline UClass* SceneCaptureComponent()
    {
        return GetStaticClassImpl<"SceneCaptureComponent">();
    }
    inline UClass* PlanarReflectionComponent()
    {
        return GetStaticClassImpl<"PlanarReflectionComponent">();
    }
    inline UClass* PlaneReflectionCapture()
    {
        return GetStaticClassImpl<"PlaneReflectionCapture">();
    }
    inline UClass* PlaneReflectionCaptureComponent()
    {
        return GetStaticClassImpl<"PlaneReflectionCaptureComponent">();
    }
    inline UClass* PlatformEventsComponent()
    {
        return GetStaticClassImpl<"PlatformEventsComponent">();
    }
    inline UClass* PlatformInterfaceWebResponse()
    {
        return GetStaticClassImpl<"PlatformInterfaceWebResponse">();
    }
    inline UClass* PlayerInput()
    {
        return GetStaticClassImpl<"PlayerInput">();
    }
    inline UClass* PlayerStartPIE()
    {
        return GetStaticClassImpl<"PlayerStartPIE">();
    }
    inline UClass* PluginCommandlet()
    {
        return GetStaticClassImpl<"PluginCommandlet">();
    }
    inline UClass* PointLight()
    {
        return GetStaticClassImpl<"PointLight">();
    }
    inline UClass* PointLightComponent()
    {
        return GetStaticClassImpl<"PointLightComponent">();
    }
    inline UClass* Polys()
    {
        return GetStaticClassImpl<"Polys">();
    }
    inline UClass* PoseableMeshComponent()
    {
        return GetStaticClassImpl<"PoseableMeshComponent">();
    }
    inline UClass* PoseAsset()
    {
        return GetStaticClassImpl<"PoseAsset">();
    }
    inline UClass* PoseWatch()
    {
        return GetStaticClassImpl<"PoseWatch">();
    }
    inline UClass* PostProcessComponent()
    {
        return GetStaticClassImpl<"PostProcessComponent">();
    }
    inline UClass* PostProcessVolume()
    {
        return GetStaticClassImpl<"PostProcessVolume">();
    }
    inline UClass* PrecomputedVisibilityOverrideVolume()
    {
        return GetStaticClassImpl<"PrecomputedVisibilityOverrideVolume">();
    }
    inline UClass* PrecomputedVisibilityVolume()
    {
        return GetStaticClassImpl<"PrecomputedVisibilityVolume">();
    }
    inline UClass* PreviewCollectionInterface()
    {
        return GetStaticClassImpl<"PreviewCollectionInterface">();
    }
    inline UClass* PreviewMeshCollection()
    {
        return GetStaticClassImpl<"PreviewMeshCollection">();
    }
    inline UClass* PrimaryAssetLabel()
    {
        return GetStaticClassImpl<"PrimaryAssetLabel">();
    }
    inline UClass* ProjectileMovementComponent()
    {
        return GetStaticClassImpl<"ProjectileMovementComponent">();
    }
    inline UClass* RadialForceActor()
    {
        return GetStaticClassImpl<"RadialForceActor">();
    }
    inline UClass* RadialForceComponent()
    {
        return GetStaticClassImpl<"RadialForceComponent">();
    }
    inline UClass* RecastFilter_UseDefaultArea()
    {
        return GetStaticClassImpl<"RecastFilter_UseDefaultArea">();
    }
    inline UClass* RecastNavMesh()
    {
        return GetStaticClassImpl<"RecastNavMesh">();
    }
    inline UClass* RecastNavMeshDataChunk()
    {
        return GetStaticClassImpl<"RecastNavMeshDataChunk">();
    }
    inline UClass* RendererSettings()
    {
        return GetStaticClassImpl<"RendererSettings">();
    }
    inline UClass* RendererOverrideSettings()
    {
        return GetStaticClassImpl<"RendererOverrideSettings">();
    }
    inline UClass* ReporterBase()
    {
        return GetStaticClassImpl<"ReporterBase">();
    }
    inline UClass* ReporterGraph()
    {
        return GetStaticClassImpl<"ReporterGraph">();
    }
    inline UClass* ReverbEffect()
    {
        return GetStaticClassImpl<"ReverbEffect">();
    }
    inline UClass* Rig()
    {
        return GetStaticClassImpl<"Rig">();
    }
    inline UClass* RotatingMovementComponent()
    {
        return GetStaticClassImpl<"RotatingMovementComponent">();
    }
    inline UClass* RVOAvoidanceInterface()
    {
        return GetStaticClassImpl<"RVOAvoidanceInterface">();
    }
    inline UClass* Scene()
    {
        return GetStaticClassImpl<"Scene">();
    }
    inline UClass* SceneCapture2D()
    {
        return GetStaticClassImpl<"SceneCapture2D">();
    }
    inline UClass* SceneCaptureComponent2D()
    {
        return GetStaticClassImpl<"SceneCaptureComponent2D">();
    }
    inline UClass* SceneCaptureComponentCube()
    {
        return GetStaticClassImpl<"SceneCaptureComponentCube">();
    }
    inline UClass* SceneCaptureCube()
    {
        return GetStaticClassImpl<"SceneCaptureCube">();
    }
    inline UClass* SCS_Node()
    {
        return GetStaticClassImpl<"SCS_Node">();
    }
    inline UClass* Selection()
    {
        return GetStaticClassImpl<"Selection">();
    }
    inline UClass* ShadowMapTexture2D()
    {
        return GetStaticClassImpl<"ShadowMapTexture2D">();
    }
    inline UClass* SimpleConstructionScript()
    {
        return GetStaticClassImpl<"SimpleConstructionScript">();
    }
    inline UClass* SkeletalMeshActor()
    {
        return GetStaticClassImpl<"SkeletalMeshActor">();
    }
    inline UClass* SkeletalMeshReductionSettings()
    {
        return GetStaticClassImpl<"SkeletalMeshReductionSettings">();
    }
    inline UClass* SkeletalMeshSocket()
    {
        return GetStaticClassImpl<"SkeletalMeshSocket">();
    }
    inline UClass* SkyLight()
    {
        return GetStaticClassImpl<"SkyLight">();
    }
    inline UClass* SkyLightComponent()
    {
        return GetStaticClassImpl<"SkyLightComponent">();
    }
    inline UClass* SlateBrushAsset()
    {
        return GetStaticClassImpl<"SlateBrushAsset">();
    }
    inline UClass* SlateTextureAtlasInterface()
    {
        return GetStaticClassImpl<"SlateTextureAtlasInterface">();
    }
    inline UClass* SmokeTestCommandlet()
    {
        return GetStaticClassImpl<"SmokeTestCommandlet">();
    }
    inline UClass* SoundAttenuation()
    {
        return GetStaticClassImpl<"SoundAttenuation">();
    }
    inline UClass* SoundClass()
    {
        return GetStaticClassImpl<"SoundClass">();
    }
    inline UClass* SoundConcurrency()
    {
        return GetStaticClassImpl<"SoundConcurrency">();
    }
    inline UClass* SoundCue()
    {
        return GetStaticClassImpl<"SoundCue">();
    }
    inline UClass* SoundEffectPreset()
    {
        return GetStaticClassImpl<"SoundEffectPreset">();
    }
    inline UClass* SoundEffectSourcePreset()
    {
        return GetStaticClassImpl<"SoundEffectSourcePreset">();
    }
    inline UClass* SoundEffectSourcePresetChain()
    {
        return GetStaticClassImpl<"SoundEffectSourcePresetChain">();
    }
    inline UClass* SoundEffectSubmixPreset()
    {
        return GetStaticClassImpl<"SoundEffectSubmixPreset">();
    }
    inline UClass* SoundGroups()
    {
        return GetStaticClassImpl<"SoundGroups">();
    }
    inline UClass* SoundMix()
    {
        return GetStaticClassImpl<"SoundMix">();
    }
    inline UClass* SoundNodeAssetReferencer()
    {
        return GetStaticClassImpl<"SoundNodeAssetReferencer">();
    }
    inline UClass* SoundNodeAttenuation()
    {
        return GetStaticClassImpl<"SoundNodeAttenuation">();
    }
    inline UClass* SoundNodeBranch()
    {
        return GetStaticClassImpl<"SoundNodeBranch">();
    }
    inline UClass* SoundNodeConcatenator()
    {
        return GetStaticClassImpl<"SoundNodeConcatenator">();
    }
    inline UClass* SoundNodeDelay()
    {
        return GetStaticClassImpl<"SoundNodeDelay">();
    }
    inline UClass* SoundNodeDialoguePlayer()
    {
        return GetStaticClassImpl<"SoundNodeDialoguePlayer">();
    }
    inline UClass* SoundNodeDistanceCrossFade()
    {
        return GetStaticClassImpl<"SoundNodeDistanceCrossFade">();
    }
    inline UClass* SoundNodeDoppler()
    {
        return GetStaticClassImpl<"SoundNodeDoppler">();
    }
    inline UClass* SoundNodeEnveloper()
    {
        return GetStaticClassImpl<"SoundNodeEnveloper">();
    }
    inline UClass* SoundNodeGroupControl()
    {
        return GetStaticClassImpl<"SoundNodeGroupControl">();
    }
    inline UClass* SoundNodeLooping()
    {
        return GetStaticClassImpl<"SoundNodeLooping">();
    }
    inline UClass* SoundNodeMature()
    {
        return GetStaticClassImpl<"SoundNodeMature">();
    }
    inline UClass* SoundNodeMixer()
    {
        return GetStaticClassImpl<"SoundNodeMixer">();
    }
    inline UClass* SoundNodeModulator()
    {
        return GetStaticClassImpl<"SoundNodeModulator">();
    }
    inline UClass* SoundNodeModulatorContinuous()
    {
        return GetStaticClassImpl<"SoundNodeModulatorContinuous">();
    }
    inline UClass* SoundNodeOscillator()
    {
        return GetStaticClassImpl<"SoundNodeOscillator">();
    }
    inline UClass* SoundNodeParamCrossFade()
    {
        return GetStaticClassImpl<"SoundNodeParamCrossFade">();
    }
    inline UClass* SoundNodeQualityLevel()
    {
        return GetStaticClassImpl<"SoundNodeQualityLevel">();
    }
    inline UClass* SoundNodeRandom()
    {
        return GetStaticClassImpl<"SoundNodeRandom">();
    }
    inline UClass* SoundNodeSoundClass()
    {
        return GetStaticClassImpl<"SoundNodeSoundClass">();
    }
    inline UClass* SoundNodeSwitch()
    {
        return GetStaticClassImpl<"SoundNodeSwitch">();
    }
    inline UClass* SoundNodeWaveParam()
    {
        return GetStaticClassImpl<"SoundNodeWaveParam">();
    }
    inline UClass* SoundNodeWavePlayer()
    {
        return GetStaticClassImpl<"SoundNodeWavePlayer">();
    }
    inline UClass* SoundSubmix()
    {
        return GetStaticClassImpl<"SoundSubmix">();
    }
    inline UClass* SoundWave()
    {
        return GetStaticClassImpl<"SoundWave">();
    }
    inline UClass* SoundWaveProcedural()
    {
        return GetStaticClassImpl<"SoundWaveProcedural">();
    }
    inline UClass* SpectatorPawnMovement()
    {
        return GetStaticClassImpl<"SpectatorPawnMovement">();
    }
    inline UClass* SphereReflectionCapture()
    {
        return GetStaticClassImpl<"SphereReflectionCapture">();
    }
    inline UClass* SphereReflectionCaptureComponent()
    {
        return GetStaticClassImpl<"SphereReflectionCaptureComponent">();
    }
    inline UClass* SplineActor()
    {
        return GetStaticClassImpl<"SplineActor">();
    }
    inline UClass* SplineComponent()
    {
        return GetStaticClassImpl<"SplineComponent">();
    }
    inline UClass* SplineMeshActor()
    {
        return GetStaticClassImpl<"SplineMeshActor">();
    }
    inline UClass* SplineMeshComponent()
    {
        return GetStaticClassImpl<"SplineMeshComponent">();
    }
    inline UClass* SpotLightComponent()
    {
        return GetStaticClassImpl<"SpotLightComponent">();
    }
    inline UClass* SpringArmComponent()
    {
        return GetStaticClassImpl<"SpringArmComponent">();
    }
    inline UClass* StaticMesh()
    {
        return GetStaticClassImpl<"StaticMesh">();
    }
    inline UClass* StaticMeshSocket()
    {
        return GetStaticClassImpl<"StaticMeshSocket">();
    }
    inline UClass* StereoLayerComponent()
    {
        return GetStaticClassImpl<"StereoLayerComponent">();
    }
    inline UClass* StereoLayerFunctionLibrary()
    {
        return GetStaticClassImpl<"StereoLayerFunctionLibrary">();
    }
    inline UClass* StringTable()
    {
        return GetStaticClassImpl<"StringTable">();
    }
    inline UClass* SubsurfaceProfile()
    {
        return GetStaticClassImpl<"SubsurfaceProfile">();
    }
    inline UClass* SubUVAnimation()
    {
        return GetStaticClassImpl<"SubUVAnimation">();
    }
    inline UClass* TargetPoint()
    {
        return GetStaticClassImpl<"TargetPoint">();
    }
    inline UClass* TextPropertyTestObject()
    {
        return GetStaticClassImpl<"TextPropertyTestObject">();
    }
    inline UClass* TextRenderActor()
    {
        return GetStaticClassImpl<"TextRenderActor">();
    }
    inline UClass* TextRenderComponent()
    {
        return GetStaticClassImpl<"TextRenderComponent">();
    }
    inline UClass* Texture2DDynamic()
    {
        return GetStaticClassImpl<"Texture2DDynamic">();
    }
    inline UClass* TextureCube()
    {
        return GetStaticClassImpl<"TextureCube">();
    }
    inline UClass* TextureLightProfile()
    {
        return GetStaticClassImpl<"TextureLightProfile">();
    }
    inline UClass* TextureRenderTargetCube()
    {
        return GetStaticClassImpl<"TextureRenderTargetCube">();
    }
    inline UClass* ThumbnailInfo()
    {
        return GetStaticClassImpl<"ThumbnailInfo">();
    }
    inline UClass* TileStreamingVolume()
    {
        return GetStaticClassImpl<"TileStreamingVolume">();
    }
    inline UClass* TimelineComponent()
    {
        return GetStaticClassImpl<"TimelineComponent">();
    }
    inline UClass* TimelineTemplate()
    {
        return GetStaticClassImpl<"TimelineTemplate">();
    }
    inline UClass* TireType()
    {
        return GetStaticClassImpl<"TireType">();
    }
    inline UClass* TouchInterface()
    {
        return GetStaticClassImpl<"TouchInterface">();
    }
    inline UClass* TriggerBase()
    {
        return GetStaticClassImpl<"TriggerBase">();
    }
    inline UClass* TriggerBox()
    {
        return GetStaticClassImpl<"TriggerBox">();
    }
    inline UClass* TriggerCapsule()
    {
        return GetStaticClassImpl<"TriggerCapsule">();
    }
    inline UClass* TriggerSphere()
    {
        return GetStaticClassImpl<"TriggerSphere">();
    }
    inline UClass* TriggerVolume()
    {
        return GetStaticClassImpl<"TriggerVolume">();
    }
    inline UClass* TwitterIntegrationBase()
    {
        return GetStaticClassImpl<"TwitterIntegrationBase">();
    }
    inline UClass* UserDefinedEnum()
    {
        return GetStaticClassImpl<"UserDefinedEnum">();
    }
    inline UClass* UserInterfaceSettings()
    {
        return GetStaticClassImpl<"UserInterfaceSettings">();
    }
    inline UClass* VectorField()
    {
        return GetStaticClassImpl<"VectorField">();
    }
    inline UClass* VectorFieldAnimated()
    {
        return GetStaticClassImpl<"VectorFieldAnimated">();
    }
    inline UClass* VectorFieldComponent()
    {
        return GetStaticClassImpl<"VectorFieldComponent">();
    }
    inline UClass* VectorFieldStatic()
    {
        return GetStaticClassImpl<"VectorFieldStatic">();
    }
    inline UClass* VectorFieldVolume()
    {
        return GetStaticClassImpl<"VectorFieldVolume">();
    }
    inline UClass* VisualLoggerAutomationTests()
    {
        return GetStaticClassImpl<"VisualLoggerAutomationTests">();
    }
    inline UClass* VisualLoggerDebugSnapshotInterface()
    {
        return GetStaticClassImpl<"VisualLoggerDebugSnapshotInterface">();
    }
    inline UClass* VisualLoggerKismetLibrary()
    {
        return GetStaticClassImpl<"VisualLoggerKismetLibrary">();
    }
    inline UClass* VoiceChannel()
    {
        return GetStaticClassImpl<"VoiceChannel">();
    }
    inline UClass* WindDirectionalSource()
    {
        return GetStaticClassImpl<"WindDirectionalSource">();
    }
    inline UClass* WindDirectionalSourceComponent()
    {
        return GetStaticClassImpl<"WindDirectionalSourceComponent">();
    }
    inline UClass* WorldComposition()
    {
        return GetStaticClassImpl<"WorldComposition">();
    }
    inline UClass* MediaSource()
    {
        return GetStaticClassImpl<"MediaSource">();
    }
    inline UClass* BaseMediaSource()
    {
        return GetStaticClassImpl<"BaseMediaSource">();
    }
    inline UClass* FileMediaSource()
    {
        return GetStaticClassImpl<"FileMediaSource">();
    }
    inline UClass* MediaOverlays()
    {
        return GetStaticClassImpl<"MediaOverlays">();
    }
    inline UClass* MediaPlayer()
    {
        return GetStaticClassImpl<"MediaPlayer">();
    }
    inline UClass* MediaPlaylist()
    {
        return GetStaticClassImpl<"MediaPlaylist">();
    }
    inline UClass* MediaSoundWave()
    {
        return GetStaticClassImpl<"MediaSoundWave">();
    }
    inline UClass* MediaTexture()
    {
        return GetStaticClassImpl<"MediaTexture">();
    }
    inline UClass* PlatformMediaSource()
    {
        return GetStaticClassImpl<"PlatformMediaSource">();
    }
    inline UClass* StreamMediaSource()
    {
        return GetStaticClassImpl<"StreamMediaSource">();
    }
    inline UClass* Overlays()
    {
        return GetStaticClassImpl<"Overlays">();
    }
    inline UClass* BasicOverlays()
    {
        return GetStaticClassImpl<"BasicOverlays">();
    }
    inline UClass* LocalizedOverlays()
    {
        return GetStaticClassImpl<"LocalizedOverlays">();
    }
    inline UClass* ClothingAssetCustomData()
    {
        return GetStaticClassImpl<"ClothingAssetCustomData">();
    }
    inline UClass* ClothingAsset()
    {
        return GetStaticClassImpl<"ClothingAsset">();
    }
    inline UClass* ClothingSimulationFactoryNv()
    {
        return GetStaticClassImpl<"ClothingSimulationFactoryNv">();
    }
    inline UClass* AudioMixerBlueprintLibrary()
    {
        return GetStaticClassImpl<"AudioMixerBlueprintLibrary">();
    }
    inline UClass* SubmixEffectDynamicsProcessorPreset()
    {
        return GetStaticClassImpl<"SubmixEffectDynamicsProcessorPreset">();
    }
    inline UClass* SubmixEffectSubmixEQPreset()
    {
        return GetStaticClassImpl<"SubmixEffectSubmixEQPreset">();
    }
    inline UClass* SubmixEffectReverbPreset()
    {
        return GetStaticClassImpl<"SubmixEffectReverbPreset">();
    }
    inline UClass* SynthSound()
    {
        return GetStaticClassImpl<"SynthSound">();
    }
    inline UClass* SynthComponent()
    {
        return GetStaticClassImpl<"SynthComponent">();
    }
    inline UClass* IOSRuntimeSettings()
    {
        return GetStaticClassImpl<"IOSRuntimeSettings">();
    }
    inline UClass* BuildPatchManifest()
    {
        return GetStaticClassImpl<"BuildPatchManifest">();
    }
    inline UClass* Default__Class()
    {
        return GetStaticClassImpl<"Default__Class">();
    }
    inline UClass* Default__DynamicClass()
    {
        return GetStaticClassImpl<"Default__DynamicClass">();
    }
    inline UClass* Default__LinkerPlaceholderClass()
    {
        return GetStaticClassImpl<"Default__LinkerPlaceholderClass">();
    }
    inline UClass* Default__BlueprintGeneratedClass()
    {
        return GetStaticClassImpl<"Default__BlueprintGeneratedClass">();
    }
    inline UClass* FPVMeleeHitCameraShake_C()
    {
        return GetStaticClassImpl<"FPVMeleeHitCameraShake_C">();
    }
    inline UClass* FPVMeleeHitCameraShakeMobile_C()
    {
        return GetStaticClassImpl<"FPVMeleeHitCameraShakeMobile_C">();
    }
    inline UClass* DmgTypeBP_Environmental_C()
    {
        return GetStaticClassImpl<"DmgTypeBP_Environmental_C">();
    }
    inline UClass* Default__WidgetBlueprintGeneratedClass()
    {
        return GetStaticClassImpl<"Default__WidgetBlueprintGeneratedClass">();
    }
    inline UClass* Default__AnimBlueprintGeneratedClass()
    {
        return GetStaticClassImpl<"Default__AnimBlueprintGeneratedClass">();
    }
    inline UClass* DestroyedMeshBase_C()
    {
        return GetStaticClassImpl<"DestroyedMeshBase_C">();
    }
    inline UClass* GenericStructurePlacementEmitter_C()
    {
        return GetStaticClassImpl<"GenericStructurePlacementEmitter_C">();
    }
    inline UClass* StructureItemContainerBaseBP_C()
    {
        return GetStaticClassImpl<"StructureItemContainerBaseBP_C">();
    }
    inline UClass* BaseHumanAnimBP_C()
    {
        return GetStaticClassImpl<"BaseHumanAnimBP_C">();
    }
    inline UClass* TPV_Female_NoWeapon_AnimBlueprint_C()
    {
        return GetStaticClassImpl<"TPV_Female_NoWeapon_AnimBlueprint_C">();
    }
    inline UClass* BaseFuelBurner_C()
    {
        return GetStaticClassImpl<"BaseFuelBurner_C">();
    }
    inline UClass* EngramLevelEntry_C()
    {
        return GetStaticClassImpl<"EngramLevelEntry_C">();
    }
    inline UClass* DinoListEntry_C()
    {
        return GetStaticClassImpl<"DinoListEntry_C">();
    }
    inline UClass* EmoteButton_C()
    {
        return GetStaticClassImpl<"EmoteButton_C">();
    }
    inline UClass* GameCheatButtonBase_C()
    {
        return GetStaticClassImpl<"GameCheatButtonBase_C">();
    }
    inline UClass* GameCheatToggleButton_C()
    {
        return GetStaticClassImpl<"GameCheatToggleButton_C">();
    }
    inline UClass* GameCheatItemButton_C()
    {
        return GetStaticClassImpl<"GameCheatItemButton_C">();
    }
    inline UClass* GameCheatButton_C()
    {
        return GetStaticClassImpl<"GameCheatButton_C">();
    }
    inline UClass* GenericOptionWidget_C()
    {
        return GetStaticClassImpl<"GenericOptionWidget_C">();
    }
    inline UClass* GenericToggleButton_C()
    {
        return GetStaticClassImpl<"GenericToggleButton_C">();
    }
    inline UClass* GenericCheckbox_C()
    {
        return GetStaticClassImpl<"GenericCheckbox_C">();
    }
    inline UClass* GenericActionButton_C()
    {
        return GetStaticClassImpl<"GenericActionButton_C">();
    }
    inline UClass* MapJumpEntry_C()
    {
        return GetStaticClassImpl<"MapJumpEntry_C">();
    }
    inline UClass* UseTamedNoTargetBehavior_C()
    {
        return GetStaticClassImpl<"UseTamedNoTargetBehavior_C">();
    }
    inline UClass* ShouldForceFlee_DK_C()
    {
        return GetStaticClassImpl<"ShouldForceFlee_DK_C">();
    }
    inline UClass* ShouldFleeFromAttack_SRV_C()
    {
        return GetStaticClassImpl<"ShouldFleeFromAttack_SRV_C">();
    }
    inline UClass* MoveAroundBlockade_DR_C()
    {
        return GetStaticClassImpl<"MoveAroundBlockade_DR_C">();
    }
    inline UClass* IsBaby_BT_C()
    {
        return GetStaticClassImpl<"IsBaby_BT_C">();
    }
    inline UClass* ForceAggro_BT_C()
    {
        return GetStaticClassImpl<"ForceAggro_BT_C">();
    }
    inline UClass* Attacking_DR_C()
    {
        return GetStaticClassImpl<"Attacking_DR_C">();
    }
    inline UClass* RotateToTarget_SRV_C()
    {
        return GetStaticClassImpl<"RotateToTarget_SRV_C">();
    }
    inline UClass* IsWithinAttackRangeAndGetBestAttack_SRV_C()
    {
        return GetStaticClassImpl<"IsWithinAttackRangeAndGetBestAttack_SRV_C">();
    }
    inline UClass* AttackTargetMove_DR_C()
    {
        return GetStaticClassImpl<"AttackTargetMove_DR_C">();
    }
    inline UClass* AttackTarget_SRV_C()
    {
        return GetStaticClassImpl<"AttackTarget_SRV_C">();
    }
    inline UClass* AttackSetRunning_C()
    {
        return GetStaticClassImpl<"AttackSetRunning_C">();
    }
    inline UClass* AttackMove_DR_C()
    {
        return GetStaticClassImpl<"AttackMove_DR_C">();
    }
    inline UClass* Attack_SRV_C()
    {
        return GetStaticClassImpl<"Attack_SRV_C">();
    }
    inline UClass* SetRunning_C()
    {
        return GetStaticClassImpl<"SetRunning_C">();
    }
    inline UClass* IsInvalidNavigationPoint_TK_C()
    {
        return GetStaticClassImpl<"IsInvalidNavigationPoint_TK_C">();
    }
    inline UClass* GetRandomFleePoint_TK_C()
    {
        return GetStaticClassImpl<"GetRandomFleePoint_TK_C">();
    }
    inline UClass* ForceSuccess_TK_C()
    {
        return GetStaticClassImpl<"ForceSuccess_TK_C">();
    }
    inline UClass* ClearRunning_C()
    {
        return GetStaticClassImpl<"ClearRunning_C">();
    }
    inline UClass* WaitForWandering_DK_C()
    {
        return GetStaticClassImpl<"WaitForWandering_DK_C">();
    }
    inline UClass* StopMovement_C()
    {
        return GetStaticClassImpl<"StopMovement_C">();
    }
    inline UClass* SetBBBool_TK_C()
    {
        return GetStaticClassImpl<"SetBBBool_TK_C">();
    }
    inline UClass* Seek_Srv_C()
    {
        return GetStaticClassImpl<"Seek_Srv_C">();
    }
    inline UClass* RandomWait_TK_C()
    {
        return GetStaticClassImpl<"RandomWait_TK_C">();
    }
    inline UClass* NotWithinDistance_C()
    {
        return GetStaticClassImpl<"NotWithinDistance_C">();
    }
    inline UClass* IsNotPlayerMoveCommand_DK_C()
    {
        return GetStaticClassImpl<"IsNotPlayerMoveCommand_DK_C">();
    }
    inline UClass* IsNotFollowing_DK_C()
    {
        return GetStaticClassImpl<"IsNotFollowing_DK_C">();
    }
    inline UClass* IsFollowing_DK_C()
    {
        return GetStaticClassImpl<"IsFollowing_DK_C">();
    }
    inline UClass* IsFlying_DK_C()
    {
        return GetStaticClassImpl<"IsFlying_DK_C">();
    }
    inline UClass* EndLanding_TK_C()
    {
        return GetStaticClassImpl<"EndLanding_TK_C">();
    }
    inline UClass* CheckIsVectorNonZero_C()
    {
        return GetStaticClassImpl<"CheckIsVectorNonZero_C">();
    }
    inline UClass* BeginLand_TK_C()
    {
        return GetStaticClassImpl<"BeginLand_TK_C">();
    }
    inline UClass* BeginFly_TK_C()
    {
        return GetStaticClassImpl<"BeginFly_TK_C">();
    }
    inline UClass* AllowWandering_C()
    {
        return GetStaticClassImpl<"AllowWandering_C">();
    }
    inline UClass* AttackHarvestComponent_Base_C()
    {
        return GetStaticClassImpl<"AttackHarvestComponent_Base_C">();
    }
    inline UClass* ShooterDamageTypeBP_Base_C()
    {
        return GetStaticClassImpl<"ShooterDamageTypeBP_Base_C">();
    }
    inline UClass* DmgType_FireStructure_C()
    {
        return GetStaticClassImpl<"DmgType_FireStructure_C">();
    }
    inline UClass* DmgType_Melee_DmgMetal_C()
    {
        return GetStaticClassImpl<"DmgType_Melee_DmgMetal_C">();
    }
    inline UClass* DmgType_Projectile_C()
    {
        return GetStaticClassImpl<"DmgType_Projectile_C">();
    }
    inline UClass* DmgType_ProjectileWithImpactFX_C()
    {
        return GetStaticClassImpl<"DmgType_ProjectileWithImpactFX_C">();
    }
    inline UClass* DmgType_Melee_C()
    {
        return GetStaticClassImpl<"DmgType_Melee_C">();
    }
    inline UClass* DmgType_Ranged_Turret_Small_DefensePlant_C()
    {
        return GetStaticClassImpl<"DmgType_Ranged_Turret_Small_DefensePlant_C">();
    }
    inline UClass* DmgType_ProjectileWithImpactFX_Piercing_C()
    {
        return GetStaticClassImpl<"DmgType_ProjectileWithImpactFX_Piercing_C">();
    }
    inline UClass* DmgType_Melee_WithProjectileImpactFX_DoubleDinoDmg_C()
    {
        return GetStaticClassImpl<"DmgType_Melee_WithProjectileImpactFX_DoubleDinoDmg_C">();
    }
    inline UClass* DmgType_Melee_WithProjectileImpactFX_C()
    {
        return GetStaticClassImpl<"DmgType_Melee_WithProjectileImpactFX_C">();
    }
    inline UClass* DmgType_Melee_Human_C()
    {
        return GetStaticClassImpl<"DmgType_Melee_Human_C">();
    }
    inline UClass* DmgType_Melee_Torpidity_C()
    {
        return GetStaticClassImpl<"DmgType_Melee_Torpidity_C">();
    }
    inline UClass* DmgType_Melee_Torpidity_Low_C()
    {
        return GetStaticClassImpl<"DmgType_Melee_Torpidity_Low_C">();
    }
    inline UClass* DmgType_Melee_HarvestWeapon_C()
    {
        return GetStaticClassImpl<"DmgType_Melee_HarvestWeapon_C">();
    }
    inline UClass* DmgType_Melee_BasePick_C()
    {
        return GetStaticClassImpl<"DmgType_Melee_BasePick_C">();
    }
    inline UClass* DmgType_Melee_StonePick_C()
    {
        return GetStaticClassImpl<"DmgType_Melee_StonePick_C">();
    }
    inline UClass* DmgType_Melee_BaseHatchet_C()
    {
        return GetStaticClassImpl<"DmgType_Melee_BaseHatchet_C">();
    }
    inline UClass* DmgType_Melee_StoneHatchet_C()
    {
        return GetStaticClassImpl<"DmgType_Melee_StoneHatchet_C">();
    }
    inline UClass* DmgType_Melee_Torpidity_StoneWeapon_C()
    {
        return GetStaticClassImpl<"DmgType_Melee_Torpidity_StoneWeapon_C">();
    }
    inline UClass* DmgType_Melee_HighTorpidity_StoneWeapon_C()
    {
        return GetStaticClassImpl<"DmgType_Melee_HighTorpidity_StoneWeapon_C">();
    }
    inline UClass* DmgType_Melee_DmgMetal_RaidDino_C()
    {
        return GetStaticClassImpl<"DmgType_Melee_DmgMetal_RaidDino_C">();
    }
    inline UClass* DmgType_Explosion_C()
    {
        return GetStaticClassImpl<"DmgType_Explosion_C">();
    }
    inline UClass* DmgType_Explosion_NoMetal_C()
    {
        return GetStaticClassImpl<"DmgType_Explosion_NoMetal_C">();
    }
    inline UClass* DmgType_Explosion_Demolition_C()
    {
        return GetStaticClassImpl<"DmgType_Explosion_Demolition_C">();
    }
    inline UClass* ToolTipWidgetPrimalDino_C()
    {
        return GetStaticClassImpl<"ToolTipWidgetPrimalDino_C">();
    }
    inline UClass* DinoSettings_Base_C()
    {
        return GetStaticClassImpl<"DinoSettings_Base_C">();
    }
    inline UClass* DinoDeathHarvestingComponent_Base_C()
    {
        return GetStaticClassImpl<"DinoDeathHarvestingComponent_Base_C">();
    }
    inline UClass* DinoColorSetGenericMale_C()
    {
        return GetStaticClassImpl<"DinoColorSetGenericMale_C">();
    }
    inline UClass* DinoColorSetGenericFemale_C()
    {
        return GetStaticClassImpl<"DinoColorSetGenericFemale_C">();
    }
    inline UClass* DmgType_Melee_Dino_C()
    {
        return GetStaticClassImpl<"DmgType_Melee_Dino_C">();
    }
    inline UClass* DmgType_Melee_Dino_Omnivore_Harvest_NoRock_C()
    {
        return GetStaticClassImpl<"DmgType_Melee_Dino_Omnivore_Harvest_NoRock_C">();
    }
    inline UClass* DmgType_Melee_Dino_Carnivore_C()
    {
        return GetStaticClassImpl<"DmgType_Melee_Dino_Carnivore_C">();
    }
    inline UClass* DmgType_Melee_Dino_Carnivore_Small_C()
    {
        return GetStaticClassImpl<"DmgType_Melee_Dino_Carnivore_Small_C">();
    }
    inline UClass* DmgType_Melee_Dino_Carnivore_Small_MineHide_C()
    {
        return GetStaticClassImpl<"DmgType_Melee_Dino_Carnivore_Small_MineHide_C">();
    }
    inline UClass* DmgType_Instant_C()
    {
        return GetStaticClassImpl<"DmgType_Instant_C">();
    }
    inline UClass* DmgType_Instant_HurtDinos_C()
    {
        return GetStaticClassImpl<"DmgType_Instant_HurtDinos_C">();
    }
    inline UClass* Dino_AIController_BP_C()
    {
        return GetStaticClassImpl<"Dino_AIController_BP_C">();
    }
    inline UClass* Dino_Character_BP_C()
    {
        return GetStaticClassImpl<"Dino_Character_BP_C">();
    }
    inline UClass* DyeUI_C()
    {
        return GetStaticClassImpl<"DyeUI_C">();
    }
    inline UClass* PrimalItemDyeGeneric_C()
    {
        return GetStaticClassImpl<"PrimalItemDyeGeneric_C">();
    }
    inline UClass* PrimalItem_ImprintBoost_Base_C()
    {
        return GetStaticClassImpl<"PrimalItem_ImprintBoost_Base_C">();
    }
    inline UClass* SpawnMenuItemButton_C()
    {
        return GetStaticClassImpl<"SpawnMenuItemButton_C">();
    }
    inline UClass* SpawnMenuFolderButton_C()
    {
        return GetStaticClassImpl<"SpawnMenuFolderButton_C">();
    }
    inline UClass* SpawnMenuCheatButton_C()
    {
        return GetStaticClassImpl<"SpawnMenuCheatButton_C">();
    }
    inline UClass* SpawnMenuCharacterPresetsButton_C()
    {
        return GetStaticClassImpl<"SpawnMenuCharacterPresetsButton_C">();
    }
    inline UClass* DataListEntryWidgetGenericDisplayString_C()
    {
        return GetStaticClassImpl<"DataListEntryWidgetGenericDisplayString_C">();
    }
    inline UClass* SpawnMenuEggButton_C()
    {
        return GetStaticClassImpl<"SpawnMenuEggButton_C">();
    }
    inline UClass* SpawnMenuButton_C()
    {
        return GetStaticClassImpl<"SpawnMenuButton_C">();
    }
    inline UClass* ComboBoxElement_C()
    {
        return GetStaticClassImpl<"ComboBoxElement_C">();
    }
    inline UClass* WDChatTextBP_Log_C()
    {
        return GetStaticClassImpl<"WDChatTextBP_Log_C">();
    }
    inline UClass* WhistleButton_C()
    {
        return GetStaticClassImpl<"WhistleButton_C">();
    }
    inline UClass* PremiumStatusWidget_C()
    {
        return GetStaticClassImpl<"PremiumStatusWidget_C">();
    }
    inline UClass* PlayerHUDStatusBarsWidget_C()
    {
        return GetStaticClassImpl<"PlayerHUDStatusBarsWidget_C">();
    }
    inline UClass* PermAdvertStatusWidget_C()
    {
        return GetStaticClassImpl<"PermAdvertStatusWidget_C">();
    }
    inline UClass* WhistleMenu_C()
    {
        return GetStaticClassImpl<"WhistleMenu_C">();
    }
    inline UClass* WDRecording_C()
    {
        return GetStaticClassImpl<"WDRecording_C">();
    }
    inline UClass* WDChatTextBP_C()
    {
        return GetStaticClassImpl<"WDChatTextBP_C">();
    }
    inline UClass* WDChatBP_C()
    {
        return GetStaticClassImpl<"WDChatBP_C">();
    }
    inline UClass* TurretOptionsPlantMenu_C()
    {
        return GetStaticClassImpl<"TurretOptionsPlantMenu_C">();
    }
    inline UClass* TurretOptionsMenu_C()
    {
        return GetStaticClassImpl<"TurretOptionsMenu_C">();
    }
    inline UClass* TripwireOptionsMenu_C()
    {
        return GetStaticClassImpl<"TripwireOptionsMenu_C">();
    }
    inline UClass* TribeOptionsMenu_C()
    {
        return GetStaticClassImpl<"TribeOptionsMenu_C">();
    }
    inline UClass* StructureOptionsMenu_C()
    {
        return GetStaticClassImpl<"StructureOptionsMenu_C">();
    }
    inline UClass* SpawnMenu_C()
    {
        return GetStaticClassImpl<"SpawnMenu_C">();
    }
    inline UClass* RaftOptionsMenu_C()
    {
        return GetStaticClassImpl<"RaftOptionsMenu_C">();
    }
    inline UClass* PremiumOptionsMenu_C()
    {
        return GetStaticClassImpl<"PremiumOptionsMenu_C">();
    }
    inline UClass* PursuitStatusWidget_C()
    {
        return GetStaticClassImpl<"PursuitStatusWidget_C">();
    }
    inline UClass* OnScreenWeapons_C()
    {
        return GetStaticClassImpl<"OnScreenWeapons_C">();
    }
    inline UClass* NewStatusWidget_C()
    {
        return GetStaticClassImpl<"NewStatusWidget_C">();
    }
    inline UClass* MapJumpUI_C()
    {
        return GetStaticClassImpl<"MapJumpUI_C">();
    }
    inline UClass* GenericOptionsMenu_C()
    {
        return GetStaticClassImpl<"GenericOptionsMenu_C">();
    }
    inline UClass* GameCheatUI_C()
    {
        return GetStaticClassImpl<"GameCheatUI_C">();
    }
    inline UClass* EmoteMenu_C()
    {
        return GetStaticClassImpl<"EmoteMenu_C">();
    }
    inline UClass* DungeonStatusWidget_C()
    {
        return GetStaticClassImpl<"DungeonStatusWidget_C">();
    }
    inline UClass* DinoOptionsMenu_C()
    {
        return GetStaticClassImpl<"DinoOptionsMenu_C">();
    }
    inline UClass* DataListEntryWidgetPrimalItemOnScreenWeapons_C()
    {
        return GetStaticClassImpl<"DataListEntryWidgetPrimalItemOnScreenWeapons_C">();
    }
    inline UClass* DataListEntryWidgetPrimalItem_CraftingPlayerHUD_C()
    {
        return GetStaticClassImpl<"DataListEntryWidgetPrimalItem_CraftingPlayerHUD_C">();
    }
    inline UClass* DataListEntryWidgetLastInventory_C()
    {
        return GetStaticClassImpl<"DataListEntryWidgetLastInventory_C">();
    }
    inline UClass* AdBuffStatusWidget_C()
    {
        return GetStaticClassImpl<"AdBuffStatusWidget_C">();
    }
    inline UClass* ServerStatsView_C()
    {
        return GetStaticClassImpl<"ServerStatsView_C">();
    }
    inline UClass* PlayerHUDNew_C()
    {
        return GetStaticClassImpl<"PlayerHUDNew_C">();
    }
    inline UClass* WDServerInfo_C()
    {
        return GetStaticClassImpl<"WDServerInfo_C">();
    }
    inline UClass* UseAccountLinkToken_C()
    {
        return GetStaticClassImpl<"UseAccountLinkToken_C">();
    }
    inline UClass* PromoTextEntryDialog_C()
    {
        return GetStaticClassImpl<"PromoTextEntryDialog_C">();
    }
    inline UClass* GetAccountLinkToken_C()
    {
        return GetStaticClassImpl<"GetAccountLinkToken_C">();
    }
    inline UClass* BreakAccountLink_C()
    {
        return GetStaticClassImpl<"BreakAccountLink_C">();
    }
    inline UClass* TamedDinoPanel_C()
    {
        return GetStaticClassImpl<"TamedDinoPanel_C">();
    }
    inline UClass* StoreItemTypeWidget_C()
    {
        return GetStaticClassImpl<"StoreItemTypeWidget_C">();
    }
    inline UClass* PrimalItem_Base_C()
    {
        return GetStaticClassImpl<"PrimalItem_Base_C">();
    }
    inline UClass* PrimalItem_Note_C()
    {
        return GetStaticClassImpl<"PrimalItem_Note_C">();
    }
    inline UClass* PrimalItem_Note_Poop_C()
    {
        return GetStaticClassImpl<"PrimalItem_Note_Poop_C">();
    }
    inline UClass* PrimalItemResourceGeneric_C()
    {
        return GetStaticClassImpl<"PrimalItemResourceGeneric_C">();
    }
    inline UClass* PrimalItemResource_ChitinOrKeratin_C()
    {
        return GetStaticClassImpl<"PrimalItemResource_ChitinOrKeratin_C">();
    }
    inline UClass* PrimalItemResourceGeneric_Curing_C()
    {
        return GetStaticClassImpl<"PrimalItemResourceGeneric_Curing_C">();
    }
    inline UClass* PrimalItemResource_Craftable_C()
    {
        return GetStaticClassImpl<"PrimalItemResource_Craftable_C">();
    }
    inline UClass* PrimalItemResource_Stone_C()
    {
        return GetStaticClassImpl<"PrimalItemResource_Stone_C">();
    }
    inline UClass* PrimalItemResource_Sparkpowder_C()
    {
        return GetStaticClassImpl<"PrimalItemResource_Sparkpowder_C">();
    }
    inline UClass* PrimalItemResource_Silicon_C()
    {
        return GetStaticClassImpl<"PrimalItemResource_Silicon_C">();
    }
    inline UClass* PrimalItemResource_Sap_C()
    {
        return GetStaticClassImpl<"PrimalItemResource_Sap_C">();
    }
    inline UClass* PrimalItemResource_Polymer_C()
    {
        return GetStaticClassImpl<"PrimalItemResource_Polymer_C">();
    }
    inline UClass* PrimalItemResource_Pelt_C()
    {
        return GetStaticClassImpl<"PrimalItemResource_Pelt_C">();
    }
    inline UClass* PrimalItemResource_Oil_C()
    {
        return GetStaticClassImpl<"PrimalItemResource_Oil_C">();
    }
    inline UClass* PrimalItemResource_Obsidian_C()
    {
        return GetStaticClassImpl<"PrimalItemResource_Obsidian_C">();
    }
    inline UClass* PrimalItemResource_MetalIngot_C()
    {
        return GetStaticClassImpl<"PrimalItemResource_MetalIngot_C">();
    }
    inline UClass* PrimalItemResource_Metal_C()
    {
        return GetStaticClassImpl<"PrimalItemResource_Metal_C">();
    }
    inline UClass* PrimalItemResource_LeechBlood_C()
    {
        return GetStaticClassImpl<"PrimalItemResource_LeechBlood_C">();
    }
    inline UClass* PrimalItemResource_Gasoline_C()
    {
        return GetStaticClassImpl<"PrimalItemResource_Gasoline_C">();
    }
    inline UClass* PrimalItemResource_Flint_C()
    {
        return GetStaticClassImpl<"PrimalItemResource_Flint_C">();
    }
    inline UClass* PrimalItemResource_Fibers_C()
    {
        return GetStaticClassImpl<"PrimalItemResource_Fibers_C">();
    }
    inline UClass* PrimalItemResource_Electronics_C()
    {
        return GetStaticClassImpl<"PrimalItemResource_Electronics_C">();
    }
    inline UClass* PrimalItemResource_Crystal_C()
    {
        return GetStaticClassImpl<"PrimalItemResource_Crystal_C">();
    }
    inline UClass* PrimalItemResource_ChitinPaste_C()
    {
        return GetStaticClassImpl<"PrimalItemResource_ChitinPaste_C">();
    }
    inline UClass* PrimalItemResource_Chitin_C()
    {
        return GetStaticClassImpl<"PrimalItemResource_Chitin_C">();
    }
    inline UClass* PrimalItemResource_Charcoal_C()
    {
        return GetStaticClassImpl<"PrimalItemResource_Charcoal_C">();
    }
    inline UClass* PrimalItemResource_BlackPearl_C()
    {
        return GetStaticClassImpl<"PrimalItemResource_BlackPearl_C">();
    }
    inline UClass* PrimalItemResource_AnglerGel_C()
    {
        return GetStaticClassImpl<"PrimalItemResource_AnglerGel_C">();
    }
    inline UClass* PrimalItemResource_Wood_C()
    {
        return GetStaticClassImpl<"PrimalItemResource_Wood_C">();
    }
    inline UClass* PrimalItemResource_Thatch_C()
    {
        return GetStaticClassImpl<"PrimalItemResource_Thatch_C">();
    }
    inline UClass* PrimalItemResource_Hide_C()
    {
        return GetStaticClassImpl<"PrimalItemResource_Hide_C">();
    }
    inline UClass* ToolTipWidgetPrimalItem_C()
    {
        return GetStaticClassImpl<"ToolTipWidgetPrimalItem_C">();
    }
    inline UClass* StoreEntryWidget_BASE_C()
    {
        return GetStaticClassImpl<"StoreEntryWidget_BASE_C">();
    }
    inline UClass* LevelUpEntry_C()
    {
        return GetStaticClassImpl<"LevelUpEntry_C">();
    }
    inline UClass* TouchPassthroughTemplate_C()
    {
        return GetStaticClassImpl<"TouchPassthroughTemplate_C">();
    }
    inline UClass* PremiumRechargeButton_C()
    {
        return GetStaticClassImpl<"PremiumRechargeButton_C">();
    }
    inline UClass* PursuitNeedsEngramsDialog_C()
    {
        return GetStaticClassImpl<"PursuitNeedsEngramsDialog_C">();
    }
    inline UClass* PursuitInventoryListWidget_C()
    {
        return GetStaticClassImpl<"PursuitInventoryListWidget_C">();
    }
    inline UClass* MultiTapActionMappings_C()
    {
        return GetStaticClassImpl<"MultiTapActionMappings_C">();
    }
    inline UClass* LevelUpPanel_C()
    {
        return GetStaticClassImpl<"LevelUpPanel_C">();
    }
    inline UClass* InventoryMenu_Designer_C()
    {
        return GetStaticClassImpl<"InventoryMenu_Designer_C">();
    }
    inline UClass* InGameStore_C()
    {
        return GetStaticClassImpl<"InGameStore_C">();
    }
    inline UClass* InGameOptionsMenu_C()
    {
        return GetStaticClassImpl<"InGameOptionsMenu_C">();
    }
    inline UClass* GenericTextEntryDialog_C()
    {
        return GetStaticClassImpl<"GenericTextEntryDialog_C">();
    }
    inline UClass* DataListEntryWidgetPrimalPremiumItem_C()
    {
        return GetStaticClassImpl<"DataListEntryWidgetPrimalPremiumItem_C">();
    }
    inline UClass* DataListEntryWidgetPrimalItem_Empty_C()
    {
        return GetStaticClassImpl<"DataListEntryWidgetPrimalItem_Empty_C">();
    }
    inline UClass* DataListEntryWidgetPrimalItem_C()
    {
        return GetStaticClassImpl<"DataListEntryWidgetPrimalItem_C">();
    }
    inline UClass* DataListEntryWidgetPrimalItem_Remote_C()
    {
        return GetStaticClassImpl<"DataListEntryWidgetPrimalItem_Remote_C">();
    }
    inline UClass* DataListEntryWidgetPrimalItem_QuickWheelItem_C()
    {
        return GetStaticClassImpl<"DataListEntryWidgetPrimalItem_QuickWheelItem_C">();
    }
    inline UClass* DataListEntryWidgetPrimalItem_QuickItem_C()
    {
        return GetStaticClassImpl<"DataListEntryWidgetPrimalItem_QuickItem_C">();
    }
    inline UClass* DataListEntryWidgetGeneric_C()
    {
        return GetStaticClassImpl<"DataListEntryWidgetGeneric_C">();
    }
    inline UClass* DataListEntryWidgetGeneric_AutomaticRefresh_C()
    {
        return GetStaticClassImpl<"DataListEntryWidgetGeneric_AutomaticRefresh_C">();
    }
    inline UClass* DataListEntryWidgetFolder_C()
    {
        return GetStaticClassImpl<"DataListEntryWidgetFolder_C">();
    }
    inline UClass* CraftingRequirementsEntry_C()
    {
        return GetStaticClassImpl<"CraftingRequirementsEntry_C">();
    }
    inline UClass* ConfirmationDialogEquip_C()
    {
        return GetStaticClassImpl<"ConfirmationDialogEquip_C">();
    }
    inline UClass* ConfirmationAmberPurchase_C()
    {
        return GetStaticClassImpl<"ConfirmationAmberPurchase_C">();
    }
    inline UClass* ClickCatcher_C()
    {
        return GetStaticClassImpl<"ClickCatcher_C">();
    }
    inline UClass* BuffsEntry_C()
    {
        return GetStaticClassImpl<"BuffsEntry_C">();
    }
    inline UClass* EngramDataListWidget_C()
    {
        return GetStaticClassImpl<"EngramDataListWidget_C">();
    }
    inline UClass* TekKibbleProcessor_Base_C()
    {
        return GetStaticClassImpl<"TekKibbleProcessor_Base_C">();
    }
    inline UClass* PrimalItemResource_DinoAmber_C()
    {
        return GetStaticClassImpl<"PrimalItemResource_DinoAmber_C">();
    }
    inline UClass* DinoTamedInventoryComponent_BP_Base_C()
    {
        return GetStaticClassImpl<"DinoTamedInventoryComponent_BP_Base_C">();
    }
    inline UClass* BaseFuelBurner_GasOnly_C()
    {
        return GetStaticClassImpl<"BaseFuelBurner_GasOnly_C">();
    }
    inline UClass* TPV_Female_Fists_AnimBP_C()
    {
        return GetStaticClassImpl<"TPV_Female_Fists_AnimBP_C">();
    }
    inline UClass* BaseHumanAnimBP_Fists_C()
    {
        return GetStaticClassImpl<"BaseHumanAnimBP_Fists_C">();
    }
    inline UClass* PrimalItemConsumableGeneric_C()
    {
        return GetStaticClassImpl<"PrimalItemConsumableGeneric_C">();
    }
    inline UClass* PrimalItemConsumable_Fertilizer_Base_C()
    {
        return GetStaticClassImpl<"PrimalItemConsumable_Fertilizer_Base_C">();
    }
    inline UClass* PrimalItemConsumablePoop_C()
    {
        return GetStaticClassImpl<"PrimalItemConsumablePoop_C">();
    }
    inline UClass* PrimalItemConsumable_DinoPoopSmall_C()
    {
        return GetStaticClassImpl<"PrimalItemConsumable_DinoPoopSmall_C">();
    }
    inline UClass* EngramEntry_ElegantBed_C()
    {
        return GetStaticClassImpl<"EngramEntry_ElegantBed_C">();
    }
    inline UClass* EngramEntry_ElegantBench_C()
    {
        return GetStaticClassImpl<"EngramEntry_ElegantBench_C">();
    }
    inline UClass* EngramEntry_ElegantChair_C()
    {
        return GetStaticClassImpl<"EngramEntry_ElegantChair_C">();
    }
    inline UClass* EngramEntry_ElegantTable_C()
    {
        return GetStaticClassImpl<"EngramEntry_ElegantTable_C">();
    }
    inline UClass* EngramEntry_StorageChest_C()
    {
        return GetStaticClassImpl<"EngramEntry_StorageChest_C">();
    }
    inline UClass* EngramEntry_Premium_CeramicVase_C()
    {
        return GetStaticClassImpl<"EngramEntry_Premium_CeramicVase_C">();
    }
    inline UClass* EngramEntry_Premium_GlassVase_C()
    {
        return GetStaticClassImpl<"EngramEntry_Premium_GlassVase_C">();
    }
    inline UClass* EngramEntry_BrickHalfPaver_C()
    {
        return GetStaticClassImpl<"EngramEntry_BrickHalfPaver_C">();
    }
    inline UClass* EngramEntry_BrickPaver_C()
    {
        return GetStaticClassImpl<"EngramEntry_BrickPaver_C">();
    }
    inline UClass* EngramEntry_CeramicPlanter_C()
    {
        return GetStaticClassImpl<"EngramEntry_CeramicPlanter_C">();
    }
    inline UClass* EngramEntry_GardenTree_C()
    {
        return GetStaticClassImpl<"EngramEntry_GardenTree_C">();
    }
    inline UClass* EngramEntry_GravelHalfPaver_C()
    {
        return GetStaticClassImpl<"EngramEntry_GravelHalfPaver_C">();
    }
    inline UClass* EngramEntry_GravelPaver_C()
    {
        return GetStaticClassImpl<"EngramEntry_GravelPaver_C">();
    }
    inline UClass* EngramEntry_Hedge_Box_C()
    {
        return GetStaticClassImpl<"EngramEntry_Hedge_Box_C">();
    }
    inline UClass* EngramEntry_Hedge_Cone_C()
    {
        return GetStaticClassImpl<"EngramEntry_Hedge_Cone_C">();
    }
    inline UClass* EngramEntry_Hedge_Round_C()
    {
        return GetStaticClassImpl<"EngramEntry_Hedge_Round_C">();
    }
    inline UClass* EngramEntry_MarbleHalfPaver_C()
    {
        return GetStaticClassImpl<"EngramEntry_MarbleHalfPaver_C">();
    }
    inline UClass* EngramEntry_MarblePaver_C()
    {
        return GetStaticClassImpl<"EngramEntry_MarblePaver_C">();
    }
    inline UClass* EngramEntry_RockHalfPaver_C()
    {
        return GetStaticClassImpl<"EngramEntry_RockHalfPaver_C">();
    }
    inline UClass* EngramEntry_RockPaver_C()
    {
        return GetStaticClassImpl<"EngramEntry_RockPaver_C">();
    }
    inline UClass* EngramEntry_RoundCeramicPlanter_C()
    {
        return GetStaticClassImpl<"EngramEntry_RoundCeramicPlanter_C">();
    }
    inline UClass* EngramEntry_RoundCropPlot_C()
    {
        return GetStaticClassImpl<"EngramEntry_RoundCropPlot_C">();
    }
    inline UClass* EngramEntry_RoundStonePlanter_C()
    {
        return GetStaticClassImpl<"EngramEntry_RoundStonePlanter_C">();
    }
    inline UClass* EngramEntry_StoneCropPlot_C()
    {
        return GetStaticClassImpl<"EngramEntry_StoneCropPlot_C">();
    }
    inline UClass* EngramEntry_StonePlanter_C()
    {
        return GetStaticClassImpl<"EngramEntry_StonePlanter_C">();
    }
    inline UClass* EngramEntry_StoneSteps_C()
    {
        return GetStaticClassImpl<"EngramEntry_StoneSteps_C">();
    }
    inline UClass* EngramEntry_TrellisArch_C()
    {
        return GetStaticClassImpl<"EngramEntry_TrellisArch_C">();
    }
    inline UClass* EngramEntry_TrellisFence_C()
    {
        return GetStaticClassImpl<"EngramEntry_TrellisFence_C">();
    }
    inline UClass* EngramEntry_WaterFountain_C()
    {
        return GetStaticClassImpl<"EngramEntry_WaterFountain_C">();
    }
    inline UClass* EngramEntry_AlarmTower_C()
    {
        return GetStaticClassImpl<"EngramEntry_AlarmTower_C">();
    }
    inline UClass* EngramEntry_WarningBell_C()
    {
        return GetStaticClassImpl<"EngramEntry_WarningBell_C">();
    }
    inline UClass* StoreEntry_Folder_Root_BP_C()
    {
        return GetStaticClassImpl<"StoreEntry_Folder_Root_BP_C">();
    }
    inline UClass* PrimalItemConsumableEatable_C()
    {
        return GetStaticClassImpl<"PrimalItemConsumableEatable_C">();
    }
    inline UClass* PrimalItemConsumable_JellyVenom_C()
    {
        return GetStaticClassImpl<"PrimalItemConsumable_JellyVenom_C">();
    }
    inline UClass* PrimalItemConsumable_SpoiledMeat_C()
    {
        return GetStaticClassImpl<"PrimalItemConsumable_SpoiledMeat_C">();
    }
    inline UClass* PrimalItemConsumable_RawPrimeMeat_C()
    {
        return GetStaticClassImpl<"PrimalItemConsumable_RawPrimeMeat_C">();
    }
    inline UClass* PrimalItemConsumable_RawMeat_C()
    {
        return GetStaticClassImpl<"PrimalItemConsumable_RawMeat_C">();
    }
    inline UClass* PrimalItemConsumable_Egg_C()
    {
        return GetStaticClassImpl<"PrimalItemConsumable_Egg_C">();
    }
    inline UClass* PrimalItemConsumableSeed_C()
    {
        return GetStaticClassImpl<"PrimalItemConsumableSeed_C">();
    }
    inline UClass* InventoryMenu_C()
    {
        return GetStaticClassImpl<"InventoryMenu_C">();
    }
    inline UClass* EquipmentEntry_C()
    {
        return GetStaticClassImpl<"EquipmentEntry_C">();
    }
    inline UClass* EquipmentSelection_C()
    {
        return GetStaticClassImpl<"EquipmentSelection_C">();
    }
    inline UClass* PromoItemEntry_C()
    {
        return GetStaticClassImpl<"PromoItemEntry_C">();
    }
    inline UClass* TitleOKDialogGeneric_C()
    {
        return GetStaticClassImpl<"TitleOKDialogGeneric_C">();
    }
    inline UClass* PrimalPassConfirmationDialog_C()
    {
        return GetStaticClassImpl<"PrimalPassConfirmationDialog_C">();
    }
    inline UClass* PrimalPassCompleteConfirmation_C()
    {
        return GetStaticClassImpl<"PrimalPassCompleteConfirmation_C">();
    }
    inline UClass* ScreenshotDialog_C()
    {
        return GetStaticClassImpl<"ScreenshotDialog_C">();
    }
    inline UClass* PromoCodeInfoDialog_C()
    {
        return GetStaticClassImpl<"PromoCodeInfoDialog_C">();
    }
    inline UClass* OkDialogGeneric_C()
    {
        return GetStaticClassImpl<"OkDialogGeneric_C">();
    }
    inline UClass* NotificationUI_C()
    {
        return GetStaticClassImpl<"NotificationUI_C">();
    }
    inline UClass* LoadingScreenUI_C()
    {
        return GetStaticClassImpl<"LoadingScreenUI_C">();
    }
    inline UClass* ContolOptionsConfirmation_C()
    {
        return GetStaticClassImpl<"ContolOptionsConfirmation_C">();
    }
    inline UClass* ConfirmationDialogGeneric_C()
    {
        return GetStaticClassImpl<"ConfirmationDialogGeneric_C">();
    }
    inline UClass* RagdollKinematicActor_BP_C()
    {
        return GetStaticClassImpl<"RagdollKinematicActor_BP_C">();
    }
    inline UClass* PrimalStoreDataBP_C()
    {
        return GetStaticClassImpl<"PrimalStoreDataBP_C">();
    }
    inline UClass* PrimalItemConsumable_Seed_DefensePlant_C()
    {
        return GetStaticClassImpl<"PrimalItemConsumable_Seed_DefensePlant_C">();
    }
    inline UClass* PrimalItemConsumable_Seed_DefensePlant_SpeedHack_C()
    {
        return GetStaticClassImpl<"PrimalItemConsumable_Seed_DefensePlant_SpeedHack_C">();
    }
    inline UClass* AnimePromo_C()
    {
        return GetStaticClassImpl<"AnimePromo_C">();
    }
    inline UClass* PrimalGlobalsBlueprint_C()
    {
        return GetStaticClassImpl<"PrimalGlobalsBlueprint_C">();
    }
    inline UClass* Eel_Character_BP_C()
    {
        return GetStaticClassImpl<"Eel_Character_BP_C">();
    }
    inline UClass* Eel_Anim_BP_C()
    {
        return GetStaticClassImpl<"Eel_Anim_BP_C">();
    }
    inline UClass* DmgType_Melee_Dino_Carnivore_Medium_Torpor_C()
    {
        return GetStaticClassImpl<"DmgType_Melee_Dino_Carnivore_Medium_Torpor_C">();
    }
    inline UClass* DmgType_Melee_Dino_Carnivore_Small_Electrocute_Eel_C()
    {
        return GetStaticClassImpl<"DmgType_Melee_Dino_Carnivore_Small_Electrocute_Eel_C">();
    }
    inline UClass* DmgType_Melee_Dino_Carnivore_Small_Electrocute_C()
    {
        return GetStaticClassImpl<"DmgType_Melee_Dino_Carnivore_Small_Electrocute_C">();
    }
    inline UClass* DinoCharacterStatusComponent_BP_Eel_C()
    {
        return GetStaticClassImpl<"DinoCharacterStatusComponent_BP_Eel_C">();
    }
    inline UClass* DinoColorSet_Eel_C()
    {
        return GetStaticClassImpl<"DinoColorSet_Eel_C">();
    }
    inline UClass* DinoDeathHarvestingComponent_Medium_MeatOnly_Fish_C()
    {
        return GetStaticClassImpl<"DinoDeathHarvestingComponent_Medium_MeatOnly_Fish_C">();
    }
    inline UClass* DinoDropInventoryComponent_Carnivore_Small_C()
    {
        return GetStaticClassImpl<"DinoDropInventoryComponent_Carnivore_Small_C">();
    }
    inline UClass* DinoTamedInventoryComponent_BP_Eel_C()
    {
        return GetStaticClassImpl<"DinoTamedInventoryComponent_BP_Eel_C">();
    }
    inline UClass* DinoSettings_Carnivore_Small_Eel_C()
    {
        return GetStaticClassImpl<"DinoSettings_Carnivore_Small_Eel_C">();
    }
    inline UClass* Eel_AIController_BP_C()
    {
        return GetStaticClassImpl<"Eel_AIController_BP_C">();
    }
    inline UClass* Eel_AIController_BP_Tamed_C()
    {
        return GetStaticClassImpl<"Eel_AIController_BP_Tamed_C">();
    }
    inline UClass* DinoSettings_Carnivore_Small_C()
    {
        return GetStaticClassImpl<"DinoSettings_Carnivore_Small_C">();
    }
    inline UClass* DinoDropInventoryComponent_BP_Base_C()
    {
        return GetStaticClassImpl<"DinoDropInventoryComponent_BP_Base_C">();
    }
    inline UClass* DinoDeathHarvestingComponent_Medium_MeatOnly_C()
    {
        return GetStaticClassImpl<"DinoDeathHarvestingComponent_Medium_MeatOnly_C">();
    }
    inline UClass* Buff_Electrocuted_eelTamed_C()
    {
        return GetStaticClassImpl<"Buff_Electrocuted_eelTamed_C">();
    }
    inline UClass* Buff_Electrocuted_eelWild_C()
    {
        return GetStaticClassImpl<"Buff_Electrocuted_eelWild_C">();
    }
    inline UClass* Buff_Electrocuted_C()
    {
        return GetStaticClassImpl<"Buff_Electrocuted_C">();
    }
    inline UClass* Buff_Stunned_C()
    {
        return GetStaticClassImpl<"Buff_Stunned_C">();
    }
    inline UClass* MeleeFist_Impacts_C()
    {
        return GetStaticClassImpl<"MeleeFist_Impacts_C">();
    }
    inline UClass* Turtle_Character_BP_C()
    {
        return GetStaticClassImpl<"Turtle_Character_BP_C">();
    }
    inline UClass* Turtle_AnimBlueprint_C()
    {
        return GetStaticClassImpl<"Turtle_AnimBlueprint_C">();
    }
    inline UClass* DinoCharacterStatusComponent_BP_Turtle_C()
    {
        return GetStaticClassImpl<"DinoCharacterStatusComponent_BP_Turtle_C">();
    }
    inline UClass* DinoColorSet_Turtle_C()
    {
        return GetStaticClassImpl<"DinoColorSet_Turtle_C">();
    }
    inline UClass* DinoDeathHarvestingComponent_Medium_SomeKeratin_C()
    {
        return GetStaticClassImpl<"DinoDeathHarvestingComponent_Medium_SomeKeratin_C">();
    }
    inline UClass* DinoTamedInventoryComponent_Turtle_C()
    {
        return GetStaticClassImpl<"DinoTamedInventoryComponent_Turtle_C">();
    }
    inline UClass* DinoSettings_Herbivore_Medium_Turtle_C()
    {
        return GetStaticClassImpl<"DinoSettings_Herbivore_Medium_Turtle_C">();
    }
    inline UClass* Turtle_AIController_BP_C()
    {
        return GetStaticClassImpl<"Turtle_AIController_BP_C">();
    }
    inline UClass* DinoSettings_Herbivore_Medium_C()
    {
        return GetStaticClassImpl<"DinoSettings_Herbivore_Medium_C">();
    }
    inline UClass* PrimalItemConsumable_SweetVeggieCake_C()
    {
        return GetStaticClassImpl<"PrimalItemConsumable_SweetVeggieCake_C">();
    }
    inline UClass* DinoDeathHarvestingComponent_Medium_C()
    {
        return GetStaticClassImpl<"DinoDeathHarvestingComponent_Medium_C">();
    }
    inline UClass* PrimalItemResource_Keratin_C()
    {
        return GetStaticClassImpl<"PrimalItemResource_Keratin_C">();
    }
    inline UClass* PrimalItemConsumableEatable_BuffingSoup_C()
    {
        return GetStaticClassImpl<"PrimalItemConsumableEatable_BuffingSoup_C">();
    }
    inline UClass* Coel_Character_BP_Ocean_C()
    {
        return GetStaticClassImpl<"Coel_Character_BP_Ocean_C">();
    }
    inline UClass* Coel_Character_BP_C()
    {
        return GetStaticClassImpl<"Coel_Character_BP_C">();
    }
    inline UClass* Coel_Anim_BP_C()
    {
        return GetStaticClassImpl<"Coel_Anim_BP_C">();
    }
    inline UClass* DmgType_Melee_Dino_Carnivore_Medium_Flyer_HarvestPolymer_C()
    {
        return GetStaticClassImpl<"DmgType_Melee_Dino_Carnivore_Medium_Flyer_HarvestPolymer_C">();
    }
    inline UClass* DinoCharacterStatusComponent_BP_Coel_C()
    {
        return GetStaticClassImpl<"DinoCharacterStatusComponent_BP_Coel_C">();
    }
    inline UClass* DinoColorSet_Coel_C()
    {
        return GetStaticClassImpl<"DinoColorSet_Coel_C">();
    }
    inline UClass* DinoDeathHarvestingComponent_Tiny_FishMeat_C()
    {
        return GetStaticClassImpl<"DinoDeathHarvestingComponent_Tiny_FishMeat_C">();
    }
    inline UClass* DinoSettings_Carnivore_Tiny_C()
    {
        return GetStaticClassImpl<"DinoSettings_Carnivore_Tiny_C">();
    }
    inline UClass* Coel_AIController_BP_C()
    {
        return GetStaticClassImpl<"Coel_AIController_BP_C">();
    }
    inline UClass* DinoSettings_Carnivore_C()
    {
        return GetStaticClassImpl<"DinoSettings_Carnivore_C">();
    }
    inline UClass* DmgType_Melee_Dino_Carnivore_Large_FishHarvest_C()
    {
        return GetStaticClassImpl<"DmgType_Melee_Dino_Carnivore_Large_FishHarvest_C">();
    }
    inline UClass* DmgType_Melee_Torpidity_Low_MetalWeapon_NoHarvest_C()
    {
        return GetStaticClassImpl<"DmgType_Melee_Torpidity_Low_MetalWeapon_NoHarvest_C">();
    }
    inline UClass* PrimalItemConsumable_RawMeat_Fish_C()
    {
        return GetStaticClassImpl<"PrimalItemConsumable_RawMeat_Fish_C">();
    }
    inline UClass* DmgType_Melee_Dino_Carnivore_Large_C()
    {
        return GetStaticClassImpl<"DmgType_Melee_Dino_Carnivore_Large_C">();
    }
    inline UClass* DinoBlueprintBase_RootTransform_C()
    {
        return GetStaticClassImpl<"DinoBlueprintBase_RootTransform_C">();
    }
    inline UClass* PlayerPawnTest_Female_C()
    {
        return GetStaticClassImpl<"PlayerPawnTest_Female_C">();
    }
    inline UClass* WeapFists_Female_C()
    {
        return GetStaticClassImpl<"WeapFists_Female_C">();
    }
    inline UClass* MatineeActor1_Blueprint_C()
    {
        return GetStaticClassImpl<"MatineeActor1_Blueprint_C">();
    }
    inline UClass* PrimalItemAmmo_Rocket_C()
    {
        return GetStaticClassImpl<"PrimalItemAmmo_Rocket_C">();
    }
    inline UClass* PrimalItem_WeaponGrenade_C()
    {
        return GetStaticClassImpl<"PrimalItem_WeaponGrenade_C">();
    }
    inline UClass* PrimalItemAmmo_SimpleRifleBullet_C()
    {
        return GetStaticClassImpl<"PrimalItemAmmo_SimpleRifleBullet_C">();
    }
    inline UClass* PrimalItem_WeaponOneShotRifle_C()
    {
        return GetStaticClassImpl<"PrimalItem_WeaponOneShotRifle_C">();
    }
    inline UClass* PrimalItemAmmo_AdvancedBullet_C()
    {
        return GetStaticClassImpl<"PrimalItemAmmo_AdvancedBullet_C">();
    }
    inline UClass* PrimalItemAmmo_SimpleBullet_C()
    {
        return GetStaticClassImpl<"PrimalItemAmmo_SimpleBullet_C">();
    }
    inline UClass* PrimalItemResource_Gunpowder_C()
    {
        return GetStaticClassImpl<"PrimalItemResource_Gunpowder_C">();
    }
    inline UClass* PrimalItem_WeaponGun_C()
    {
        return GetStaticClassImpl<"PrimalItem_WeaponGun_C">();
    }
    inline UClass* PrimalItem_DodoSail_C()
    {
        return GetStaticClassImpl<"PrimalItem_DodoSail_C">();
    }
    inline UClass* PrimalItemAmmo_DodoArrow_C()
    {
        return GetStaticClassImpl<"PrimalItemAmmo_DodoArrow_C">();
    }
    inline UClass* PrimalItem_MetalBit_C()
    {
        return GetStaticClassImpl<"PrimalItem_MetalBit_C">();
    }
    inline UClass* PrimalItem_PluckerBit_C()
    {
        return GetStaticClassImpl<"PrimalItem_PluckerBit_C">();
    }
    inline UClass* Dodo_Character_BP_C()
    {
        return GetStaticClassImpl<"Dodo_Character_BP_C">();
    }
    inline UClass* Dodo_AnimBlueprint_C()
    {
        return GetStaticClassImpl<"Dodo_AnimBlueprint_C">();
    }
    inline UClass* DinoAttackStateMelee_C()
    {
        return GetStaticClassImpl<"DinoAttackStateMelee_C">();
    }
    inline UClass* DinoCharacterStatusComponent_BP_Dodo_C()
    {
        return GetStaticClassImpl<"DinoCharacterStatusComponent_BP_Dodo_C">();
    }
    inline UClass* DinoColorSet_Dodo_C()
    {
        return GetStaticClassImpl<"DinoColorSet_Dodo_C">();
    }
    inline UClass* DinoDeathHarvestingComponent_Tiny_C()
    {
        return GetStaticClassImpl<"DinoDeathHarvestingComponent_Tiny_C">();
    }
    inline UClass* DinoTamedInventoryComponent_Dodo_C()
    {
        return GetStaticClassImpl<"DinoTamedInventoryComponent_Dodo_C">();
    }
    inline UClass* DinoSettings_Herbivore_Tiny_C()
    {
        return GetStaticClassImpl<"DinoSettings_Herbivore_Tiny_C">();
    }
    inline UClass* Dodo_AIController_BP_C()
    {
        return GetStaticClassImpl<"Dodo_AIController_BP_C">();
    }
    inline UClass* Dodo_Character_BP_Base_C()
    {
        return GetStaticClassImpl<"Dodo_Character_BP_Base_C">();
    }
    inline UClass* HardImpactCameraShake_C()
    {
        return GetStaticClassImpl<"HardImpactCameraShake_C">();
    }
    inline UClass* PrimalItemConsumable_Egg_Dodo_C()
    {
        return GetStaticClassImpl<"PrimalItemConsumable_Egg_Dodo_C">();
    }
    inline UClass* DinoSettings_Herbivore_C()
    {
        return GetStaticClassImpl<"DinoSettings_Herbivore_C">();
    }
    inline UClass* AnimNotify_PlayCameraShake_C()
    {
        return GetStaticClassImpl<"AnimNotify_PlayCameraShake_C">();
    }
    inline UClass* DinoBlueprintBase_RootBoneName_C()
    {
        return GetStaticClassImpl<"DinoBlueprintBase_RootBoneName_C">();
    }
    inline UClass* MediumFootstepCameraShake_C()
    {
        return GetStaticClassImpl<"MediumFootstepCameraShake_C">();
    }
    inline UClass* PrimalItem_BitBase_C()
    {
        return GetStaticClassImpl<"PrimalItem_BitBase_C">();
    }
    inline UClass* PrimalItemAmmo_ArrowToxin_C()
    {
        return GetStaticClassImpl<"PrimalItemAmmo_ArrowToxin_C">();
    }
    inline UClass* PrimalItemArmor_IguanodonSaddle_C()
    {
        return GetStaticClassImpl<"PrimalItemArmor_IguanodonSaddle_C">();
    }
    inline UClass* PrimalItemArmor_ArgentavisSaddle_C()
    {
        return GetStaticClassImpl<"PrimalItemArmor_ArgentavisSaddle_C">();
    }
    inline UClass* PrimalItemArmor_MegalodonSaddle_C()
    {
        return GetStaticClassImpl<"PrimalItemArmor_MegalodonSaddle_C">();
    }
    inline UClass* PrimalItemArmor_PelaSaddle_C()
    {
        return GetStaticClassImpl<"PrimalItemArmor_PelaSaddle_C">();
    }
    inline UClass* PrimalItemArmor_KaprosuchusSaddle_C()
    {
        return GetStaticClassImpl<"PrimalItemArmor_KaprosuchusSaddle_C">();
    }
    inline UClass* PrimalItemArmor_SpiderSaddle_C()
    {
        return GetStaticClassImpl<"PrimalItemArmor_SpiderSaddle_C">();
    }
    inline UClass* PrimalItemConsumableMiracleGro_C()
    {
        return GetStaticClassImpl<"PrimalItemConsumableMiracleGro_C">();
    }
    inline UClass* RegrowEmitter_C()
    {
        return GetStaticClassImpl<"RegrowEmitter_C">();
    }
    inline UClass* PrimalItemArmor_SarcoSaddle_C()
    {
        return GetStaticClassImpl<"PrimalItemArmor_SarcoSaddle_C">();
    }
    inline UClass* PrimalItemArmor_PteroSaddle_C()
    {
        return GetStaticClassImpl<"PrimalItemArmor_PteroSaddle_C">();
    }
    inline UClass* PrimalItemStructure_CropPlot_Large_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_CropPlot_Large_C">();
    }
    inline UClass* PrimalItemArmor_DireBearSaddle_C()
    {
        return GetStaticClassImpl<"PrimalItemArmor_DireBearSaddle_C">();
    }
    inline UClass* PrimalItemStructure_StoneWindow_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_StoneWindow_C">();
    }
    inline UClass* PrimalItemStructure_StoneTrapdoor_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_StoneTrapdoor_C">();
    }
    inline UClass* PrimalItemArmor_StegoSaddle_C()
    {
        return GetStaticClassImpl<"PrimalItemArmor_StegoSaddle_C">();
    }
    inline UClass* PrimalItemStructure_Fireplace_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_Fireplace_C">();
    }
    inline UClass* PrimalItemConsumable_WaterJarCraftable_C()
    {
        return GetStaticClassImpl<"PrimalItemConsumable_WaterJarCraftable_C">();
    }
    inline UClass* PrimalItem_GasGrenade_C()
    {
        return GetStaticClassImpl<"PrimalItem_GasGrenade_C">();
    }
    inline UClass* PrimalItemStructure_WoodWindow_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_WoodWindow_C">();
    }
    inline UClass* PrimalItemStructure_BaseWindow_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_BaseWindow_C">();
    }
    inline UClass* PrimalItemStructure_StoneWallWithWindow_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_StoneWallWithWindow_C">();
    }
    inline UClass* PrimalItemStructure_StoneCeilingWithTrapdoor_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_StoneCeilingWithTrapdoor_C">();
    }
    inline UClass* PrimalItemStructure_StonePillar_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_StonePillar_C">();
    }
    inline UClass* PrimalItemStructure_CropPlot_Medium_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_CropPlot_Medium_C">();
    }
    inline UClass* PrimalItemArmor_TurtleSaddle_C()
    {
        return GetStaticClassImpl<"PrimalItemArmor_TurtleSaddle_C">();
    }
    inline UClass* PrimalItemArmor_ScorpionSaddle_C()
    {
        return GetStaticClassImpl<"PrimalItemArmor_ScorpionSaddle_C">();
    }
    inline UClass* PrimalItemArmor_PachyrhinoSaddle_C()
    {
        return GetStaticClassImpl<"PrimalItemArmor_PachyrhinoSaddle_C">();
    }
    inline UClass* PrimalItem_WeaponPoisonTrap_C()
    {
        return GetStaticClassImpl<"PrimalItem_WeaponPoisonTrap_C">();
    }
    inline UClass* PrimalItemArmor_TerrorBirdSaddle_C()
    {
        return GetStaticClassImpl<"PrimalItemArmor_TerrorBirdSaddle_C">();
    }
    inline UClass* PrimalItemStructure_AnvilBench_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_AnvilBench_C">();
    }
    inline UClass* PrimalItemArmor_ToadSaddle_C()
    {
        return GetStaticClassImpl<"PrimalItemArmor_ToadSaddle_C">();
    }
    inline UClass* PrimalItemStructure_Bookshelf_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_Bookshelf_C">();
    }
    inline UClass* PrimalItemStructure_StoneGate_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_StoneGate_C">();
    }
    inline UClass* PrimalItemStructure_StoneGateframe_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_StoneGateframe_C">();
    }
    inline UClass* PrimalItemStructure_StoneDoor_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_StoneDoor_C">();
    }
    inline UClass* PrimalItemStructure_StoneWallWithDoor_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_StoneWallWithDoor_C">();
    }
    inline UClass* PrimalItemStructure_StoneRoof_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_StoneRoof_C">();
    }
    inline UClass* PrimalItemStructure_StoneWall_Sloped_Right_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_StoneWall_Sloped_Right_C">();
    }
    inline UClass* PrimalItemStructure_StoneWall_Sloped_Left_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_StoneWall_Sloped_Left_C">();
    }
    inline UClass* PrimalItemStructure_StoneRailing_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_StoneRailing_C">();
    }
    inline UClass* PrimalItemStructure_StoneCeiling_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_StoneCeiling_C">();
    }
    inline UClass* PrimalItemStructure_StoneStairs_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_StoneStairs_C">();
    }
    inline UClass* PrimalItemStructure_WoodWallWithWindow_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_WoodWallWithWindow_C">();
    }
    inline UClass* PrimalItemStructure_BaseWallWithWindow_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_BaseWallWithWindow_C">();
    }
    inline UClass* PrimalItemStructure_WoodTrapdoor_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_WoodTrapdoor_C">();
    }
    inline UClass* PrimalItemStructure_BaseTrapdoor_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_BaseTrapdoor_C">();
    }
    inline UClass* PrimalItemStructure_WoodCatwalk_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_WoodCatwalk_C">();
    }
    inline UClass* PrimalItemStructure_BaseCatwalk_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_BaseCatwalk_C">();
    }
    inline UClass* PrimalItemStructure_PreservingBin_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_PreservingBin_C">();
    }
    inline UClass* PrimalItem_WeaponAlarmTrap_C()
    {
        return GetStaticClassImpl<"PrimalItem_WeaponAlarmTrap_C">();
    }
    inline UClass* PrimalItemArmor_TrikeSaddle_C()
    {
        return GetStaticClassImpl<"PrimalItemArmor_TrikeSaddle_C">();
    }
    inline UClass* PrimalItemStructure_Forge_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_Forge_C">();
    }
    inline UClass* PrimalItem_WeaponFishingRod_C()
    {
        return GetStaticClassImpl<"PrimalItem_WeaponFishingRod_C">();
    }
    inline UClass* StructureSeatingBaseBP_C()
    {
        return GetStaticClassImpl<"StructureSeatingBaseBP_C">();
    }
    inline UClass* PrimalItemStructure_TrophyWall_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_TrophyWall_C">();
    }
    inline UClass* PrimalItemAmmo_ArrowTranq_C()
    {
        return GetStaticClassImpl<"PrimalItemAmmo_ArrowTranq_C">();
    }
    inline UClass* PrimalItemArmor_HideHelmet_C()
    {
        return GetStaticClassImpl<"PrimalItemArmor_HideHelmet_C">();
    }
    inline UClass* PrimalItemArmor_HideBoots_C()
    {
        return GetStaticClassImpl<"PrimalItemArmor_HideBoots_C">();
    }
    inline UClass* PrimalItemArmor_HideGloves_C()
    {
        return GetStaticClassImpl<"PrimalItemArmor_HideGloves_C">();
    }
    inline UClass* PrimalItemStructure_FeedingTrough_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_FeedingTrough_C">();
    }
    inline UClass* PrimalItemStructure_WoodLadder_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_WoodLadder_C">();
    }
    inline UClass* PrimalItemStructure_WoodCeilingWithTrapdoor_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_WoodCeilingWithTrapdoor_C">();
    }
    inline UClass* PrimalItemStructure_BaseCeilingWithTrapdoor_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_BaseCeilingWithTrapdoor_C">();
    }
    inline UClass* PrimalItemStructure_WoodPillar_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_WoodPillar_C">();
    }
    inline UClass* PrimalItemStructure_BasePillar_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_BasePillar_C">();
    }
    inline UClass* PrimalItemStructure_WoodGate_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_WoodGate_C">();
    }
    inline UClass* PrimalItemStructure_BaseGate_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_BaseGate_C">();
    }
    inline UClass* PrimalItemStructure_WoodGateframe_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_WoodGateframe_C">();
    }
    inline UClass* PrimalItemStructure_WoodRamp_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_WoodRamp_C">();
    }
    inline UClass* PrimalItemStructure_WoodSign_Large_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_WoodSign_Large_C">();
    }
    inline UClass* PrimalItemStructure_WaterTank_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_WaterTank_C">();
    }
    inline UClass* PrimalItemStructure_StoneWall_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_StoneWall_C">();
    }
    inline UClass* PrimalItemStructure_StoneFenceFoundation_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_StoneFenceFoundation_C">();
    }
    inline UClass* PrimalItemStructure_CompostBin_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_CompostBin_C">();
    }
    inline UClass* PrimalItemStructure_StonePipeVertical_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_StonePipeVertical_C">();
    }
    inline UClass* PrimalItemStructure_StonePipeIncline_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_StonePipeIncline_C">();
    }
    inline UClass* PrimalItemStructure_StonePipeIntersection_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_StonePipeIntersection_C">();
    }
    inline UClass* PrimalItemArmor_RaptorSaddle_C()
    {
        return GetStaticClassImpl<"PrimalItemArmor_RaptorSaddle_C">();
    }
    inline UClass* PrimalItemArmor_PachySaddle_C()
    {
        return GetStaticClassImpl<"PrimalItemArmor_PachySaddle_C">();
    }
    inline UClass* PrimalItemConsumableBuff_Parachute_C()
    {
        return GetStaticClassImpl<"PrimalItemConsumableBuff_Parachute_C">();
    }
    inline UClass* PrimalItemStructure_Furniture_WoodTable_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_Furniture_WoodTable_C">();
    }
    inline UClass* PrimalItemStructure_Furniture_WoodBench_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_Furniture_WoodBench_C">();
    }
    inline UClass* PrimalItemStructure_StorageBox_Large_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_StorageBox_Large_C">();
    }
    inline UClass* PrimalItemAmmo_ArrowStone_C()
    {
        return GetStaticClassImpl<"PrimalItemAmmo_ArrowStone_C">();
    }
    inline UClass* PrimalItemAmmo_ArrowBase_C()
    {
        return GetStaticClassImpl<"PrimalItemAmmo_ArrowBase_C">();
    }
    inline UClass* PrimalItemAmmo_Base_C()
    {
        return GetStaticClassImpl<"PrimalItemAmmo_Base_C">();
    }
    inline UClass* PrimalItem_WeaponBow_C()
    {
        return GetStaticClassImpl<"PrimalItem_WeaponBow_C">();
    }
    inline UClass* PrimalItemArmor_HideShirt_C()
    {
        return GetStaticClassImpl<"PrimalItemArmor_HideShirt_C">();
    }
    inline UClass* PrimalItemArmor_HidePants_C()
    {
        return GetStaticClassImpl<"PrimalItemArmor_HidePants_C">();
    }
    inline UClass* PrimalItemStructure_WoodFenceFoundation_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_WoodFenceFoundation_C">();
    }
    inline UClass* PrimalItemStructure_BaseFenceFoundation_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_BaseFenceFoundation_C">();
    }
    inline UClass* PrimalItemStructure_TrainingDummy_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_TrainingDummy_C">();
    }
    inline UClass* PrimalItemStructure_WoodDoor_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_WoodDoor_C">();
    }
    inline UClass* PrimalItemStructure_WoodWallWithDoor_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_WoodWallWithDoor_C">();
    }
    inline UClass* PrimalItemStructure_WoodRoof_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_WoodRoof_C">();
    }
    inline UClass* PrimalItemStructure_WoodWall_Sloped_Right_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_WoodWall_Sloped_Right_C">();
    }
    inline UClass* PrimalItemStructure_WoodWall_Sloped_Left_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_WoodWall_Sloped_Left_C">();
    }
    inline UClass* PrimalItemStructure_WoodRailing_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_WoodRailing_C">();
    }
    inline UClass* PrimalItemStructure_BaseRailing_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_BaseRailing_C">();
    }
    inline UClass* PrimalItemStructure_WoodCeiling_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_WoodCeiling_C">();
    }
    inline UClass* PrimalItemStructure_WoodSign_Wall_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_WoodSign_Wall_C">();
    }
    inline UClass* PrimalItemStructure_RopeLadder_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_RopeLadder_C">();
    }
    inline UClass* PrimalItemStructure_BaseLadder_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_BaseLadder_C">();
    }
    inline UClass* PrimalItemStructure_StonePipeTap_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_StonePipeTap_C">();
    }
    inline UClass* PrimalItemStructure_StonePipeStraight_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_StonePipeStraight_C">();
    }
    inline UClass* PrimalItemStructure_StonePipeIntake_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_StonePipeIntake_C">();
    }
    inline UClass* PrimalItemStructure_BaseStonePipe_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_BaseStonePipe_C">();
    }
    inline UClass* PrimalItemArmor_DolphinSaddle_C()
    {
        return GetStaticClassImpl<"PrimalItemArmor_DolphinSaddle_C">();
    }
    inline UClass* PrimalItemArmor_ParaSaddle_C()
    {
        return GetStaticClassImpl<"PrimalItemArmor_ParaSaddle_C">();
    }
    inline UClass* PrimalItemStructure_Wardrums_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_Wardrums_C">();
    }
    inline UClass* PrimalItemStructure_Furniture_Gravestone_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_Furniture_Gravestone_C">();
    }
    inline UClass* PrimalItemStructure_CropPlot_Small_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_CropPlot_Small_C">();
    }
    inline UClass* PrimalItem_WeaponSpyglass_C()
    {
        return GetStaticClassImpl<"PrimalItem_WeaponSpyglass_C">();
    }
    inline UClass* PrimalItemStructure_WoodCage_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_WoodCage_C">();
    }
    inline UClass* PrimalItemArmor_WoodShield_C()
    {
        return GetStaticClassImpl<"PrimalItemArmor_WoodShield_C">();
    }
    inline UClass* PrimalItemArmor_Shield_C()
    {
        return GetStaticClassImpl<"PrimalItemArmor_Shield_C">();
    }
    inline UClass* PrimalItem_WeaponFlareGun_C()
    {
        return GetStaticClassImpl<"PrimalItem_WeaponFlareGun_C">();
    }
    inline UClass* PrimalItemStructure_CookingPot_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_CookingPot_C">();
    }
    inline UClass* PrimalItemStructure_WoodStairs_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_WoodStairs_C">();
    }
    inline UClass* PrimalItemStructure_Furniture_WoodChair_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_Furniture_WoodChair_C">();
    }
    inline UClass* PrimalItemStructure_WoodWall_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_WoodWall_C">();
    }
    inline UClass* PrimalItemStructure_WoodFloor_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_WoodFloor_C">();
    }
    inline UClass* PrimalItemStructure_ThatchRoof_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_ThatchRoof_C">();
    }
    inline UClass* PrimalItemStructure_BaseRoof_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_BaseRoof_C">();
    }
    inline UClass* PrimalItemStructure_BaseRamp_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_BaseRamp_C">();
    }
    inline UClass* PrimalItemStructure_ThatchWall_Sloped_Right_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_ThatchWall_Sloped_Right_C">();
    }
    inline UClass* PrimalItemStructure_BaseWall_Sloped_Right_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_BaseWall_Sloped_Right_C">();
    }
    inline UClass* PrimalItemStructure_ThatchWall_Sloped_Left_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_ThatchWall_Sloped_Left_C">();
    }
    inline UClass* PrimalItemStructure_BaseWall_Sloped_Left_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_BaseWall_Sloped_Left_C">();
    }
    inline UClass* PrimalItemStructure_StandingTorch_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_StandingTorch_C">();
    }
    inline UClass* PrimalItemStructure_Flag_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_Flag_C">();
    }
    inline UClass* PrimalItem_WeaponPaintbrush_C()
    {
        return GetStaticClassImpl<"PrimalItem_WeaponPaintbrush_C">();
    }
    inline UClass* PrimalItem_BloodExtractor_C()
    {
        return GetStaticClassImpl<"PrimalItem_BloodExtractor_C">();
    }
    inline UClass* PrimalItemStructure_MortarAndPestle_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_MortarAndPestle_C">();
    }
    inline UClass* PrimalItemArmor_PhiomiaSaddle_C()
    {
        return GetStaticClassImpl<"PrimalItemArmor_PhiomiaSaddle_C">();
    }
    inline UClass* PrimalItemArmor_SaddleGeneric_C()
    {
        return GetStaticClassImpl<"PrimalItemArmor_SaddleGeneric_C">();
    }
    inline UClass* PrimalItemStructure_Bed_Simple_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_Bed_Simple_C">();
    }
    inline UClass* PrimalItemStructure_Bed_Base_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_Bed_Base_C">();
    }
    inline UClass* PrimalItem_WeaponSlingshot_C()
    {
        return GetStaticClassImpl<"PrimalItem_WeaponSlingshot_C">();
    }
    inline UClass* PrimalItemStructure_ThatchDoor_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_ThatchDoor_C">();
    }
    inline UClass* PrimalItemStructure_BaseDoor_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_BaseDoor_C">();
    }
    inline UClass* PrimalItemStructure_ThatchWall_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_ThatchWall_C">();
    }
    inline UClass* PrimalItemStructure_ThatchCeiling_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_ThatchCeiling_C">();
    }
    inline UClass* PrimalItemStructure_BaseCeiling_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_BaseCeiling_C">();
    }
    inline UClass* PrimalItemStructure_SleepingBag_Hide_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_SleepingBag_Hide_C">();
    }
    inline UClass* PrimalItemStructure_SleepingBag_Base_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_SleepingBag_Base_C">();
    }
    inline UClass* PrimalItemStructure_WoodSign_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_WoodSign_C">();
    }
    inline UClass* PrimalItemStructure_BaseSign_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_BaseSign_C">();
    }
    inline UClass* PrimalItemArmor_ClothHelmet_C()
    {
        return GetStaticClassImpl<"PrimalItemArmor_ClothHelmet_C">();
    }
    inline UClass* PrimalItemArmor_ClothBoots_C()
    {
        return GetStaticClassImpl<"PrimalItemArmor_ClothBoots_C">();
    }
    inline UClass* PrimalItemArmor_ClothGloves_C()
    {
        return GetStaticClassImpl<"PrimalItemArmor_ClothGloves_C">();
    }
    inline UClass* PrimalItemConsumable_WaterskinCraftable_C()
    {
        return GetStaticClassImpl<"PrimalItemConsumable_WaterskinCraftable_C">();
    }
    inline UClass* PrimalItemConsumableEatable_WaterContainer_C()
    {
        return GetStaticClassImpl<"PrimalItemConsumableEatable_WaterContainer_C">();
    }
    inline UClass* PrimalItemStructure_ThatchWallWithDoor_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_ThatchWallWithDoor_C">();
    }
    inline UClass* PrimalItemStructure_BaseWallWithDoor_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_BaseWallWithDoor_C">();
    }
    inline UClass* PrimalItemStructure_BaseWall_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_BaseWall_C">();
    }
    inline UClass* PrimalItemArmor_ClothShirt_C()
    {
        return GetStaticClassImpl<"PrimalItemArmor_ClothShirt_C">();
    }
    inline UClass* PrimalItemArmor_ClothPants_C()
    {
        return GetStaticClassImpl<"PrimalItemArmor_ClothPants_C">();
    }
    inline UClass* PrimalItem_WeaponSpear_C()
    {
        return GetStaticClassImpl<"PrimalItem_WeaponSpear_C">();
    }
    inline UClass* PrimalItem_WeaponStoneClub_C()
    {
        return GetStaticClassImpl<"PrimalItem_WeaponStoneClub_C">();
    }
    inline UClass* PrimalItem_WeaponBaseClub_C()
    {
        return GetStaticClassImpl<"PrimalItem_WeaponBaseClub_C">();
    }
    inline UClass* PrimalItem_WeaponStoneHatchet_C()
    {
        return GetStaticClassImpl<"PrimalItem_WeaponStoneHatchet_C">();
    }
    inline UClass* PrimalItem_WeaponBaseHatchet_C()
    {
        return GetStaticClassImpl<"PrimalItem_WeaponBaseHatchet_C">();
    }
    inline UClass* PrimalItemStructure_Campfire_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_Campfire_C">();
    }
    inline UClass* PrimalItemStructure_ThatchFloor_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_ThatchFloor_C">();
    }
    inline UClass* PrimalItemStructure_Mailbox_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_Mailbox_C">();
    }
    inline UClass* PrimalItemStructure_MailboxBase_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_MailboxBase_C">();
    }
    inline UClass* PrimalItemStructure_StoneFloor_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_StoneFloor_C">();
    }
    inline UClass* PrimalItem_WeaponRocketLauncher_C()
    {
        return GetStaticClassImpl<"PrimalItem_WeaponRocketLauncher_C">();
    }
    inline UClass* PrimalItem_WeaponMachinedPistol_C()
    {
        return GetStaticClassImpl<"PrimalItem_WeaponMachinedPistol_C">();
    }
    inline UClass* PrimalItemWeaponGenericGun_C()
    {
        return GetStaticClassImpl<"PrimalItemWeaponGenericGun_C">();
    }
    inline UClass* PrimalItemStructure_TekFloor_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_TekFloor_C">();
    }
    inline UClass* PrimalItemStructure_BaseFloor_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_BaseFloor_C">();
    }
    inline UClass* PrimalItem_WeaponBola_C()
    {
        return GetStaticClassImpl<"PrimalItem_WeaponBola_C">();
    }
    inline UClass* PrimalItemWeaponGenericAmmolessConsumeSelf_C()
    {
        return GetStaticClassImpl<"PrimalItemWeaponGenericAmmolessConsumeSelf_C">();
    }
    inline UClass* PrimalItemWeaponGenericNoStats_C()
    {
        return GetStaticClassImpl<"PrimalItemWeaponGenericNoStats_C">();
    }
    inline UClass* PrimalItemWeaponGenericAmmoless_C()
    {
        return GetStaticClassImpl<"PrimalItemWeaponGenericAmmoless_C">();
    }
    inline UClass* HudOverlayUITop_C()
    {
        return GetStaticClassImpl<"HudOverlayUITop_C">();
    }
    inline UClass* HudOverlayUI_C()
    {
        return GetStaticClassImpl<"HudOverlayUI_C">();
    }
    inline UClass* ScopeVignette_C()
    {
        return GetStaticClassImpl<"ScopeVignette_C">();
    }
    inline UClass* StructurePlacerBlueprint_C()
    {
        return GetStaticClassImpl<"StructurePlacerBlueprint_C">();
    }
    inline UClass* DmgType_Melee_Dino_Carnivore_Medium_C()
    {
        return GetStaticClassImpl<"DmgType_Melee_Dino_Carnivore_Medium_C">();
    }
    inline UClass* DmgType_Melee_Dino_Herbivore_C()
    {
        return GetStaticClassImpl<"DmgType_Melee_Dino_Herbivore_C">();
    }
    inline UClass* DmgType_Melee_Dino_Herbivore_Small_C()
    {
        return GetStaticClassImpl<"DmgType_Melee_Dino_Herbivore_Small_C">();
    }
    inline UClass* MeshFadeOut_Blueprint_C()
    {
        return GetStaticClassImpl<"MeshFadeOut_Blueprint_C">();
    }
    inline UClass* M_Obelisks_C()
    {
        return GetStaticClassImpl<"M_Obelisks_C">();
    }
    inline UClass* M_PersistentGameplaySublevel_C()
    {
        return GetStaticClassImpl<"M_PersistentGameplaySublevel_C">();
    }
    inline UClass* M_PersistentGameplaySublevel_Biomes_C()
    {
        return GetStaticClassImpl<"M_PersistentGameplaySublevel_Biomes_C">();
    }
    inline UClass* M_PersistentGameplaySublevel_SupplyDrops_C()
    {
        return GetStaticClassImpl<"M_PersistentGameplaySublevel_SupplyDrops_C">();
    }
    inline UClass* M_RiversAndLakes_C()
    {
        return GetStaticClassImpl<"M_RiversAndLakes_C">();
    }
    inline UClass* M_RiversAndLakesPhysics_C()
    {
        return GetStaticClassImpl<"M_RiversAndLakesPhysics_C">();
    }
    inline UClass* SeedHarvestEmitter_C()
    {
        return GetStaticClassImpl<"SeedHarvestEmitter_C">();
    }
    inline UClass* ExplorerChest_DinoDossiers_C()
    {
        return GetStaticClassImpl<"ExplorerChest_DinoDossiers_C">();
    }
    inline UClass* ExplorerChest_Leddica_C()
    {
        return GetStaticClassImpl<"ExplorerChest_Leddica_C">();
    }
    inline UClass* ExplorerChest_Li_C()
    {
        return GetStaticClassImpl<"ExplorerChest_Li_C">();
    }
    inline UClass* ExplorerChest_Rockwell_C()
    {
        return GetStaticClassImpl<"ExplorerChest_Rockwell_C">();
    }
    inline UClass* SeedHarvestComponent_WithRockarrot_C()
    {
        return GetStaticClassImpl<"SeedHarvestComponent_WithRockarrot_C">();
    }
    inline UClass* ServerSidePoint_Chest_C()
    {
        return GetStaticClassImpl<"ServerSidePoint_Chest_C">();
    }
    inline UClass* DmgType_Melee_BigfootHarvest_C()
    {
        return GetStaticClassImpl<"DmgType_Melee_BigfootHarvest_C">();
    }
    inline UClass* DmgType_Melee_Dino_Herbivore_Small_Dodo_C()
    {
        return GetStaticClassImpl<"DmgType_Melee_Dino_Herbivore_Small_Dodo_C">();
    }
    inline UClass* DmgType_Melee_SickleHarvest_C()
    {
        return GetStaticClassImpl<"DmgType_Melee_SickleHarvest_C">();
    }
    inline UClass* SeedHarvestComponent_C()
    {
        return GetStaticClassImpl<"SeedHarvestComponent_C">();
    }
    inline UClass* PrimalItemConsumable_Berry_Amarberry_C()
    {
        return GetStaticClassImpl<"PrimalItemConsumable_Berry_Amarberry_C">();
    }
    inline UClass* PrimalItemConsumable_Berry_Azulberry_C()
    {
        return GetStaticClassImpl<"PrimalItemConsumable_Berry_Azulberry_C">();
    }
    inline UClass* PrimalItemConsumable_Berry_Mejoberry_C()
    {
        return GetStaticClassImpl<"PrimalItemConsumable_Berry_Mejoberry_C">();
    }
    inline UClass* PrimalItemConsumable_Berry_Narcoberry_C()
    {
        return GetStaticClassImpl<"PrimalItemConsumable_Berry_Narcoberry_C">();
    }
    inline UClass* PrimalItemConsumable_Berry_Stimberry_C()
    {
        return GetStaticClassImpl<"PrimalItemConsumable_Berry_Stimberry_C">();
    }
    inline UClass* PrimalItemConsumable_Berry_Tintoberry_C()
    {
        return GetStaticClassImpl<"PrimalItemConsumable_Berry_Tintoberry_C">();
    }
    inline UClass* PrimalItemConsumable_Veggie_Citronal_C()
    {
        return GetStaticClassImpl<"PrimalItemConsumable_Veggie_Citronal_C">();
    }
    inline UClass* PrimalItemConsumable_Veggie_Longrass_C()
    {
        return GetStaticClassImpl<"PrimalItemConsumable_Veggie_Longrass_C">();
    }
    inline UClass* PrimalItemConsumable_Veggie_Rockarrot_C()
    {
        return GetStaticClassImpl<"PrimalItemConsumable_Veggie_Rockarrot_C">();
    }
    inline UClass* PrimalItemConsumable_Veggie_Savoroot_C()
    {
        return GetStaticClassImpl<"PrimalItemConsumable_Veggie_Savoroot_C">();
    }
    inline UClass* PrimalItemConsumable_Seed_Amarberry_C()
    {
        return GetStaticClassImpl<"PrimalItemConsumable_Seed_Amarberry_C">();
    }
    inline UClass* PrimalItemConsumable_Seed_Azulberry_C()
    {
        return GetStaticClassImpl<"PrimalItemConsumable_Seed_Azulberry_C">();
    }
    inline UClass* PrimalItemConsumable_Seed_Citronal_C()
    {
        return GetStaticClassImpl<"PrimalItemConsumable_Seed_Citronal_C">();
    }
    inline UClass* PrimalItemConsumable_Seed_Longrass_C()
    {
        return GetStaticClassImpl<"PrimalItemConsumable_Seed_Longrass_C">();
    }
    inline UClass* PrimalItemConsumable_Seed_Mejoberry_C()
    {
        return GetStaticClassImpl<"PrimalItemConsumable_Seed_Mejoberry_C">();
    }
    inline UClass* PrimalItemConsumable_Seed_Narcoberry_C()
    {
        return GetStaticClassImpl<"PrimalItemConsumable_Seed_Narcoberry_C">();
    }
    inline UClass* PrimalItemConsumable_Seed_Rockarrot_C()
    {
        return GetStaticClassImpl<"PrimalItemConsumable_Seed_Rockarrot_C">();
    }
    inline UClass* PrimalItemConsumable_Seed_Savoroot_C()
    {
        return GetStaticClassImpl<"PrimalItemConsumable_Seed_Savoroot_C">();
    }
    inline UClass* PrimalItemConsumable_Seed_Stimberry_C()
    {
        return GetStaticClassImpl<"PrimalItemConsumable_Seed_Stimberry_C">();
    }
    inline UClass* PrimalItemConsumable_Seed_Tintoberry_C()
    {
        return GetStaticClassImpl<"PrimalItemConsumable_Seed_Tintoberry_C">();
    }
    inline UClass* PrimalItemConsumable_Seed_BaseBerry_C()
    {
        return GetStaticClassImpl<"PrimalItemConsumable_Seed_BaseBerry_C">();
    }
    inline UClass* PrimalItemConsumable_Seed_BaseVeggie_C()
    {
        return GetStaticClassImpl<"PrimalItemConsumable_Seed_BaseVeggie_C">();
    }
    inline UClass* PrimalItemConsumable_Veggie_Base_C()
    {
        return GetStaticClassImpl<"PrimalItemConsumable_Veggie_Base_C">();
    }
    inline UClass* PrimalItemConsumable_Berry_Base_C()
    {
        return GetStaticClassImpl<"PrimalItemConsumable_Berry_Base_C">();
    }
    inline UClass* SeedHarvestEmitter_Sickle_C()
    {
        return GetStaticClassImpl<"SeedHarvestEmitter_Sickle_C">();
    }
    inline UClass* DmgType_Melee_Dino_Omnivore_Medium_C()
    {
        return GetStaticClassImpl<"DmgType_Melee_Dino_Omnivore_Medium_C">();
    }
    inline UClass* DmgType_UseHarvest_C()
    {
        return GetStaticClassImpl<"DmgType_UseHarvest_C">();
    }
    inline UClass* UseHarvestComponent_Base_C()
    {
        return GetStaticClassImpl<"UseHarvestComponent_Base_C">();
    }
    inline UClass* Chest_Rockwell_AnimBlueprint_C()
    {
        return GetStaticClassImpl<"Chest_Rockwell_AnimBlueprint_C">();
    }
    inline UClass* Chest_MeiYin_AnimBlueprint_C()
    {
        return GetStaticClassImpl<"Chest_MeiYin_AnimBlueprint_C">();
    }
    inline UClass* Vase_Leddica_AnimBlueprint_C()
    {
        return GetStaticClassImpl<"Vase_Leddica_AnimBlueprint_C">();
    }
    inline UClass* Chest_Elmisha_AnimBlueprint_C()
    {
        return GetStaticClassImpl<"Chest_Elmisha_AnimBlueprint_C">();
    }
    inline UClass* Chest_AnimBP_Base_C()
    {
        return GetStaticClassImpl<"Chest_AnimBP_Base_C">();
    }
    inline UClass* DinoSpawnEntries_Beavers_C()
    {
        return GetStaticClassImpl<"DinoSpawnEntries_Beavers_C">();
    }
    inline UClass* DinoSpawnEntries_DarkWater_C()
    {
        return GetStaticClassImpl<"DinoSpawnEntries_DarkWater_C">();
    }
    inline UClass* DinoSpawnEntries_DarkWater_Lio_C()
    {
        return GetStaticClassImpl<"DinoSpawnEntries_DarkWater_Lio_C">();
    }
    inline UClass* DinoSpawnEntries_DarkWater_Mosa_C()
    {
        return GetStaticClassImpl<"DinoSpawnEntries_DarkWater_Mosa_C">();
    }
    inline UClass* DinoSpawnEntries_DarkWater_Tuso_C()
    {
        return GetStaticClassImpl<"DinoSpawnEntries_DarkWater_Tuso_C">();
    }
    inline UClass* DinoSpawnEntries_DarkWaterAngler_C()
    {
        return GetStaticClassImpl<"DinoSpawnEntries_DarkWaterAngler_C">();
    }
    inline UClass* DinoSpawnEntries_DeepWater_C()
    {
        return GetStaticClassImpl<"DinoSpawnEntries_DeepWater_C">();
    }
    inline UClass* DinoSpawnEntries_InlandWater_C()
    {
        return GetStaticClassImpl<"DinoSpawnEntries_InlandWater_C">();
    }
    inline UClass* DinoSpawnEntries_Ocean_C()
    {
        return GetStaticClassImpl<"DinoSpawnEntries_Ocean_C">();
    }
    inline UClass* DinoSpawnEntries_RedwoodWater_C()
    {
        return GetStaticClassImpl<"DinoSpawnEntries_RedwoodWater_C">();
    }
    inline UClass* DinoSpawnEntries_ShallowWater_C()
    {
        return GetStaticClassImpl<"DinoSpawnEntries_ShallowWater_C">();
    }
    inline UClass* DinoSpawnEntries_SwampWater_C()
    {
        return GetStaticClassImpl<"DinoSpawnEntries_SwampWater_C">();
    }
    inline UClass* DinoSpawnEntriesArcha_C()
    {
        return GetStaticClassImpl<"DinoSpawnEntriesArcha_C">();
    }
    inline UClass* DinoSpawnEntriesBeach_C()
    {
        return GetStaticClassImpl<"DinoSpawnEntriesBeach_C">();
    }
    inline UClass* DinoSpawnEntriesDamiensAtoll_C()
    {
        return GetStaticClassImpl<"DinoSpawnEntriesDamiensAtoll_C">();
    }
    inline UClass* DinoSpawnEntriesFarsPeak_C()
    {
        return GetStaticClassImpl<"DinoSpawnEntriesFarsPeak_C">();
    }
    inline UClass* DinoSpawnEntriesGigant_C()
    {
        return GetStaticClassImpl<"DinoSpawnEntriesGigant_C">();
    }
    inline UClass* DinoSpawnEntriesGrassland_C()
    {
        return GetStaticClassImpl<"DinoSpawnEntriesGrassland_C">();
    }
    inline UClass* DinoSpawnEntriesJungle_C()
    {
        return GetStaticClassImpl<"DinoSpawnEntriesJungle_C">();
    }
    inline UClass* DinoSpawnEntriesMonsterIsland_C()
    {
        return GetStaticClassImpl<"DinoSpawnEntriesMonsterIsland_C">();
    }
    inline UClass* DinoSpawnEntriesMountain_C()
    {
        return GetStaticClassImpl<"DinoSpawnEntriesMountain_C">();
    }
    inline UClass* DinoSpawnEntriesPelican_C()
    {
        return GetStaticClassImpl<"DinoSpawnEntriesPelican_C">();
    }
    inline UClass* DinoSpawnEntriesPenguins_C()
    {
        return GetStaticClassImpl<"DinoSpawnEntriesPenguins_C">();
    }
    inline UClass* DinoSpawnEntriesQuetz_C()
    {
        return GetStaticClassImpl<"DinoSpawnEntriesQuetz_C">();
    }
    inline UClass* DinoSpawnEntriesRedwoods_C()
    {
        return GetStaticClassImpl<"DinoSpawnEntriesRedwoods_C">();
    }
    inline UClass* DinoSpawnEntriesSnow_C()
    {
        return GetStaticClassImpl<"DinoSpawnEntriesSnow_C">();
    }
    inline UClass* DinoSpawnEntriesSwamp_C()
    {
        return GetStaticClassImpl<"DinoSpawnEntriesSwamp_C">();
    }
    inline UClass* DinoSpawnEntriesTitano_C()
    {
        return GetStaticClassImpl<"DinoSpawnEntriesTitano_C">();
    }
    inline UClass* DinoSpawnEntriesUnicorn_C()
    {
        return GetStaticClassImpl<"DinoSpawnEntriesUnicorn_C">();
    }
    inline UClass* AmberDropper_BP_C()
    {
        return GetStaticClassImpl<"AmberDropper_BP_C">();
    }
    inline UClass* WallBoundsMobile_C()
    {
        return GetStaticClassImpl<"WallBoundsMobile_C">();
    }
    inline UClass* TributeTerminal_1_C()
    {
        return GetStaticClassImpl<"TributeTerminal_1_C">();
    }
    inline UClass* TributeTerminal_Base_C()
    {
        return GetStaticClassImpl<"TributeTerminal_Base_C">();
    }
    inline UClass* AwardedTributeDialog_C()
    {
        return GetStaticClassImpl<"AwardedTributeDialog_C">();
    }
    inline UClass* PrimalItemStructure_StorageBox_Small_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_StorageBox_Small_C">();
    }
    inline UClass* AmberPickup_C()
    {
        return GetStaticClassImpl<"AmberPickup_C">();
    }
    inline UClass* DmgType_Melee_Dino_Carnivore_Small_Flyer_C()
    {
        return GetStaticClassImpl<"DmgType_Melee_Dino_Carnivore_Small_Flyer_C">();
    }
    inline UClass* DmgType_Melee_Dino_Carnivore_Medium_Flyer_C()
    {
        return GetStaticClassImpl<"DmgType_Melee_Dino_Carnivore_Medium_Flyer_C">();
    }
    inline UClass* M_TheIsland_C()
    {
        return GetStaticClassImpl<"M_TheIsland_C">();
    }
    inline UClass* Ark_SkySphere_RGBM_C()
    {
        return GetStaticClassImpl<"Ark_SkySphere_RGBM_C">();
    }
    inline UClass* ArtifactCrate_1_C()
    {
        return GetStaticClassImpl<"ArtifactCrate_1_C">();
    }
    inline UClass* ArtifactCrate_2_C()
    {
        return GetStaticClassImpl<"ArtifactCrate_2_C">();
    }
    inline UClass* ArtifactCrate_3_C()
    {
        return GetStaticClassImpl<"ArtifactCrate_3_C">();
    }
    inline UClass* ArtifactCrate_4_C()
    {
        return GetStaticClassImpl<"ArtifactCrate_4_C">();
    }
    inline UClass* ArtifactCrate_5_C()
    {
        return GetStaticClassImpl<"ArtifactCrate_5_C">();
    }
    inline UClass* ArtifactCrate_6_C()
    {
        return GetStaticClassImpl<"ArtifactCrate_6_C">();
    }
    inline UClass* ArtifactCrate_7_C()
    {
        return GetStaticClassImpl<"ArtifactCrate_7_C">();
    }
    inline UClass* Buff_Premium_ThickSkin_C()
    {
        return GetStaticClassImpl<"Buff_Premium_ThickSkin_C">();
    }
    inline UClass* BossArena_C()
    {
        return GetStaticClassImpl<"BossArena_C">();
    }
    inline UClass* HalloweenDropper_TheIsland_C()
    {
        return GetStaticClassImpl<"HalloweenDropper_TheIsland_C">();
    }
    inline UClass* DayCycleManager_TheIsland_C()
    {
        return GetStaticClassImpl<"DayCycleManager_TheIsland_C">();
    }
    inline UClass* DayCycleManagerBase_C()
    {
        return GetStaticClassImpl<"DayCycleManagerBase_C">();
    }
    inline UClass* ExplorerChest_Base_C()
    {
        return GetStaticClassImpl<"ExplorerChest_Base_C">();
    }
    inline UClass* Global_PostProcess_Blueprint_C()
    {
        return GetStaticClassImpl<"Global_PostProcess_Blueprint_C">();
    }
    inline UClass* PrimalInventoryBP_SupplyCrate_C()
    {
        return GetStaticClassImpl<"PrimalInventoryBP_SupplyCrate_C">();
    }
    inline UClass* PrimalInventoryBP_TributeTerminal1_C()
    {
        return GetStaticClassImpl<"PrimalInventoryBP_TributeTerminal1_C">();
    }
    inline UClass* PrimalItemArmor_GhillieBoots_C()
    {
        return GetStaticClassImpl<"PrimalItemArmor_GhillieBoots_C">();
    }
    inline UClass* PrimalItemArmor_GhillieGloves_C()
    {
        return GetStaticClassImpl<"PrimalItemArmor_GhillieGloves_C">();
    }
    inline UClass* PrimalItemArmor_GhillieHelmet_C()
    {
        return GetStaticClassImpl<"PrimalItemArmor_GhillieHelmet_C">();
    }
    inline UClass* PrimalItemArmor_GhilliePants_C()
    {
        return GetStaticClassImpl<"PrimalItemArmor_GhilliePants_C">();
    }
    inline UClass* PrimalItemArmor_GhillieShirt_C()
    {
        return GetStaticClassImpl<"PrimalItemArmor_GhillieShirt_C">();
    }
    inline UClass* PrimalItemArmor_GasMask_C()
    {
        return GetStaticClassImpl<"PrimalItemArmor_GasMask_C">();
    }
    inline UClass* PrimalItemArmor_ScubaBoots_Flippers_C()
    {
        return GetStaticClassImpl<"PrimalItemArmor_ScubaBoots_Flippers_C">();
    }
    inline UClass* PrimalItemArmor_ScubaHelmet_Goggles_C()
    {
        return GetStaticClassImpl<"PrimalItemArmor_ScubaHelmet_Goggles_C">();
    }
    inline UClass* PrimalItemArmor_ScubaPants_C()
    {
        return GetStaticClassImpl<"PrimalItemArmor_ScubaPants_C">();
    }
    inline UClass* PrimalItemArmor_ScubaShirt_SuitWithTank_C()
    {
        return GetStaticClassImpl<"PrimalItemArmor_ScubaShirt_SuitWithTank_C">();
    }
    inline UClass* PrimalItemArmor_TekHelmet_C()
    {
        return GetStaticClassImpl<"PrimalItemArmor_TekHelmet_C">();
    }
    inline UClass* DinoSpawnEntriesCave1_C()
    {
        return GetStaticClassImpl<"DinoSpawnEntriesCave1_C">();
    }
    inline UClass* DinoSpawnEntriesCave2_LowSpiderScorp_C()
    {
        return GetStaticClassImpl<"DinoSpawnEntriesCave2-LowSpiderScorp_C">();
    }
    inline UClass* DinoSpawnEntriesCave2_C()
    {
        return GetStaticClassImpl<"DinoSpawnEntriesCave2_C">();
    }
    inline UClass* DinoSpawnEntriesCave3_C()
    {
        return GetStaticClassImpl<"DinoSpawnEntriesCave3_C">();
    }
    inline UClass* DinoSpawnEntriesCave5_C()
    {
        return GetStaticClassImpl<"DinoSpawnEntriesCave5_C">();
    }
    inline UClass* DinoSpawnEntriesCave7_Fliers_C()
    {
        return GetStaticClassImpl<"DinoSpawnEntriesCave7-Fliers_C">();
    }
    inline UClass* DinoSpawnEntriesCaveLava_C()
    {
        return GetStaticClassImpl<"DinoSpawnEntriesCaveLava_C">();
    }
    inline UClass* DinoSpawnEntriesCaveWater_C()
    {
        return GetStaticClassImpl<"DinoSpawnEntriesCaveWater_C">();
    }
    inline UClass* DinoSpawnEntriesTinyCave_C()
    {
        return GetStaticClassImpl<"DinoSpawnEntriesTinyCave_C">();
    }
    inline UClass* BP_IslandWaterPlane_Lakes_C()
    {
        return GetStaticClassImpl<"BP_IslandWaterPlane_Lakes_C">();
    }
    inline UClass* BP_IslandWaterPlane_C()
    {
        return GetStaticClassImpl<"BP_IslandWaterPlane_C">();
    }
    inline UClass* Sign_Base_C()
    {
        return GetStaticClassImpl<"Sign_Base_C">();
    }
    inline UClass* SupplyCrate_Cave_QualityTier1_C()
    {
        return GetStaticClassImpl<"SupplyCrate_Cave_QualityTier1_C">();
    }
    inline UClass* SupplyCrate_Cave_QualityTier2_C()
    {
        return GetStaticClassImpl<"SupplyCrate_Cave_QualityTier2_C">();
    }
    inline UClass* SupplyCrate_Cave_QualityTier3_C()
    {
        return GetStaticClassImpl<"SupplyCrate_Cave_QualityTier3_C">();
    }
    inline UClass* SupplyCrate_Cave_QualityTier4_C()
    {
        return GetStaticClassImpl<"SupplyCrate_Cave_QualityTier4_C">();
    }
    inline UClass* SpikeWall_C()
    {
        return GetStaticClassImpl<"SpikeWall_C">();
    }
    inline UClass* SpikeWall_Wood_C()
    {
        return GetStaticClassImpl<"SpikeWall_Wood_C">();
    }
    inline UClass* MatineeValueInterpolationContainer_C()
    {
        return GetStaticClassImpl<"MatineeValueInterpolationContainer_C">();
    }
    inline UClass* Raft_BP_C()
    {
        return GetStaticClassImpl<"Raft_BP_C">();
    }
    inline UClass* DmgType_SpikeWall_C()
    {
        return GetStaticClassImpl<"DmgType_SpikeWall_C">();
    }
    inline UClass* PrimalItemStructure_WoodSpikeWall_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_WoodSpikeWall_C">();
    }
    inline UClass* StructureBaseBP_C()
    {
        return GetStaticClassImpl<"StructureBaseBP_C">();
    }
    inline UClass* StructureSettings_BrokenByStone_C()
    {
        return GetStaticClassImpl<"StructureSettings_BrokenByStone_C">();
    }
    inline UClass* DestroyedMeshBase_IgnoreSelf_FastFade_C()
    {
        return GetStaticClassImpl<"DestroyedMeshBase_IgnoreSelf_FastFade_C">();
    }
    inline UClass* DestroyedMeshBase_IgnoreSelf_C()
    {
        return GetStaticClassImpl<"DestroyedMeshBase_IgnoreSelf_C">();
    }
    inline UClass* DmgType_Melee_Dino_Herbivore_MetalBit_C()
    {
        return GetStaticClassImpl<"DmgType_Melee_Dino_Herbivore_MetalBit_C">();
    }
    inline UClass* DmgType_Melee_HighTorpidity_Weapon_Crowbar_C()
    {
        return GetStaticClassImpl<"DmgType_Melee_HighTorpidity_Weapon_Crowbar_C">();
    }
    inline UClass* DmgType_FlameThrower_Weapon_C()
    {
        return GetStaticClassImpl<"DmgType_FlameThrower_Weapon_C">();
    }
    inline UClass* DmgType_FlameThrower_C()
    {
        return GetStaticClassImpl<"DmgType_FlameThrower_C">();
    }
    inline UClass* ShooterDamageTypeBP_Fire_C()
    {
        return GetStaticClassImpl<"ShooterDamageTypeBP_Fire_C">();
    }
    inline UClass* ThatchDoorPlacementEmitter_C()
    {
        return GetStaticClassImpl<"ThatchDoorPlacementEmitter_C">();
    }
    inline UClass* PrimalItemStructure_MetalSpikeWall_C()
    {
        return GetStaticClassImpl<"PrimalItemStructure_MetalSpikeWall_C">();
    }
    inline UClass* PrimalItemStructureGeneric_C()
    {
        return GetStaticClassImpl<"PrimalItemStructureGeneric_C">();
    }
    inline UClass* DmgType_Melee_Torpidity_None_StoneWeapon_C()
    {
        return GetStaticClassImpl<"DmgType_Melee_Torpidity_None_StoneWeapon_C">();
    }
    inline UClass* Raft_Anim_BP_C()
    {
        return GetStaticClassImpl<"Raft_Anim_BP_C">();
    }
    inline UClass* DinoCharacterStatusComponent_BP_C()
    {
        return GetStaticClassImpl<"DinoCharacterStatusComponent_BP_C">();
    }
    inline UClass* DinoSettings_VehicleWood_C()
    {
        return GetStaticClassImpl<"DinoSettings_VehicleWood_C">();
    }
    inline UClass* PrimalItemRaft_C()
    {
        return GetStaticClassImpl<"PrimalItemRaft_C">();
    }
    inline UClass* ToolTipWidgetPrimalRaft_C()
    {
        return GetStaticClassImpl<"ToolTipWidgetPrimalRaft_C">();
    }
    inline UClass* DmgType_Melee_Torpidity_Low_StoneWeapon_C()
    {
        return GetStaticClassImpl<"DmgType_Melee_Torpidity_Low_StoneWeapon_C">();
    }
    inline UClass* DmgType_Melee_Torpidity_None_MetalWeapon_C()
    {
        return GetStaticClassImpl<"DmgType_Melee_Torpidity_None_MetalWeapon_C">();
    }
    inline UClass* DmgType_Melee_Torpidity_None_C()
    {
        return GetStaticClassImpl<"DmgType_Melee_Torpidity_None_C">();
    }
    inline UClass* GenericMetalPlacementEmitter_C()
    {
        return GetStaticClassImpl<"GenericMetalPlacementEmitter_C">();
    }
    inline UClass* StructureSettings_BrokenByExplosives_WeakMetalDmg_C()
    {
        return GetStaticClassImpl<"StructureSettings_BrokenByExplosives_WeakMetalDmg_C">();
    }
    inline UClass* DmgType_Explosion_Cannon_C()
    {
        return GetStaticClassImpl<"DmgType_Explosion_Cannon_C">();
    }
    inline UClass* DmgType_Explosion_TekProjectile_C()
    {
        return GetStaticClassImpl<"DmgType_Explosion_TekProjectile_C">();
    }
    inline UClass* DmgType_Melee_DmgStone_C()
    {
        return GetStaticClassImpl<"DmgType_Melee_DmgStone_C">();
    }
    inline UClass* DmgType_Melee_MetalHatchet_C()
    {
        return GetStaticClassImpl<"DmgType_Melee_MetalHatchet_C">();
    }
    inline UClass* DmgType_Melee_MetalPick_C()
    {
        return GetStaticClassImpl<"DmgType_Melee_MetalPick_C">();
    }
    inline UClass* DmgType_Melee_Torpidity_Low_MetalWeapon_C()
    {
        return GetStaticClassImpl<"DmgType_Melee_Torpidity_Low_MetalWeapon_C">();
    }
    inline UClass* DmgType_Melee_Torpidity_MetalWeapon_C()
    {
        return GetStaticClassImpl<"DmgType_Melee_Torpidity_MetalWeapon_C">();
    }
    inline UClass* StructureSettings_BrokenByExplosives_C()
    {
        return GetStaticClassImpl<"StructureSettings_BrokenByExplosives_C">();
    }
    inline UClass* ArtifactCrate_Instantaneous_Alt_C()
    {
        return GetStaticClassImpl<"ArtifactCrate_Instantaneous_Alt_C">();
    }
    inline UClass* SupplyCrateBaseBP_Instantaneous_C()
    {
        return GetStaticClassImpl<"SupplyCrateBaseBP_Instantaneous_C">();
    }
    inline UClass* PrimalItemArmor_Base_Tek_C()
    {
        return GetStaticClassImpl<"PrimalItemArmor_Base_Tek_C">();
    }
    inline UClass* PrimalItemArmor_BaseShirt_C()
    {
        return GetStaticClassImpl<"PrimalItemArmor_BaseShirt_C">();
    }
    inline UClass* PrimalItemArmor_BasePants_C()
    {
        return GetStaticClassImpl<"PrimalItemArmor_BasePants_C">();
    }
    inline UClass* PrimalItemArmor_BaseHelmet_C()
    {
        return GetStaticClassImpl<"PrimalItemArmor_BaseHelmet_C">();
    }
    inline UClass* PrimalItemArmor_BaseBoots_C()
    {
        return GetStaticClassImpl<"PrimalItemArmor_BaseBoots_C">();
    }
    inline UClass* PrimalItemArmor_BaseGloves_C()
    {
        return GetStaticClassImpl<"PrimalItemArmor_BaseGloves_C">();
    }
    inline UClass* PrimalItemArmorGeneric_C()
    {
        return GetStaticClassImpl<"PrimalItemArmorGeneric_C">();
    }
    inline UClass* Buff_TekGroupArmor_C()
    {
        return GetStaticClassImpl<"Buff_TekGroupArmor_C">();
    }
    inline UClass* PrimalItemResource_EeryElement_C()
    {
        return GetStaticClassImpl<"PrimalItemResource_EeryElement_C">();
    }
    inline UClass* Buff_Base_Disease_Low_GasMaskable_C()
    {
        return GetStaticClassImpl<"Buff_Base_Disease_Low_GasMaskable_C">();
    }
    inline UClass* Buff_Base_GasMaskable_C()
    {
        return GetStaticClassImpl<"Buff_Base_GasMaskable_C">();
    }
    inline UClass* DmgType_Melee_TorpPoison_Large_NoFF_C()
    {
        return GetStaticClassImpl<"DmgType_Melee_TorpPoison_Large_NoFF_C">();
    }
    inline UClass* Buff_Base_Disease_Low_C()
    {
        return GetStaticClassImpl<"Buff_Base_Disease_Low_C">();
    }
    inline UClass* Buff_Base_Disease_C()
    {
        return GetStaticClassImpl<"Buff_Base_Disease_C">();
    }
    inline UClass* Buff_CureLesser_C()
    {
        return GetStaticClassImpl<"Buff_CureLesser_C">();
    }
    inline UClass* PrimalInventoryBP_TributeTerminal_Base_C()
    {
        return GetStaticClassImpl<"PrimalInventoryBP_TributeTerminal_Base_C">();
    }
    inline UClass* PrimalItem_DungeonAccessKey_C()
    {
        return GetStaticClassImpl<"PrimalItem_DungeonAccessKey_C">();
    }
    inline UClass* Forebears_C()
    {
        return GetStaticClassImpl<"Forebears_C">();
    }
    inline UClass* BasePrimalPursuit_C()
    {
        return GetStaticClassImpl<"BasePrimalPursuit_C">();
    }
    inline UClass* HalloweenDropper_Base_C()
    {
        return GetStaticClassImpl<"HalloweenDropper_Base_C">();
    }
    inline UClass* Dropper_Base_C()
    {
        return GetStaticClassImpl<"Dropper_Base_C">();
    }
    inline UClass* Buff_Base_C()
    {
        return GetStaticClassImpl<"Buff_Base_C">();
    }
    inline UClass* PrimalItem_Bonus2_C()
    {
        return GetStaticClassImpl<"PrimalItem_Bonus2_C">();
    }
    inline UClass* Buff_Premium_C()
    {
        return GetStaticClassImpl<"Buff_Premium_C">();
    }
    inline UClass* SaveDialog_C()
    {
        return GetStaticClassImpl<"SaveDialog_C">();
    }
    inline UClass* ConfirmationDialogStoreItem_C()
    {
        return GetStaticClassImpl<"ConfirmationDialogStoreItem_C">();
    }
    inline UClass* PrimalItemWeaponGeneric_C()
    {
        return GetStaticClassImpl<"PrimalItemWeaponGeneric_C">();
    }
    inline UClass* FogOfWarBlueprint_C()
    {
        return GetStaticClassImpl<"FogOfWarBlueprint_C">();
    }
    inline UClass* PlayerCameraBlueprint_C()
    {
        return GetStaticClassImpl<"PlayerCameraBlueprint_C">();
    }
    inline UClass* PrimalItem_StartingNote_C()
    {
        return GetStaticClassImpl<"PrimalItem_StartingNote_C">();
    }
    inline UClass* FPVMeleeCameraShake_C()
    {
        return GetStaticClassImpl<"FPVMeleeCameraShake_C">();
    }
    inline UClass* DmgType_Melee_Torpidity_SelfHurt_C()
    {
        return GetStaticClassImpl<"DmgType_Melee_Torpidity_SelfHurt_C">();
    }
    inline UClass* Compass_FPV_RIG_AnimBlueprint_C()
    {
        return GetStaticClassImpl<"Compass_FPV_RIG_AnimBlueprint_C">();
    }
    inline UClass* WeapGPS_C()
    {
        return GetStaticClassImpl<"WeapGPS_C">();
    }
    inline UClass* WeapMap_C()
    {
        return GetStaticClassImpl<"WeapMap_C">();
    }
    inline UClass* WeapFists_C()
    {
        return GetStaticClassImpl<"WeapFists_C">();
    }
    inline UClass* WeapCompass_C()
    {
        return GetStaticClassImpl<"WeapCompass_C">();
    }
    inline UClass* PlayerCharacterStatusComponent_BP_C()
    {
        return GetStaticClassImpl<"PlayerCharacterStatusComponent_BP_C">();
    }
    inline UClass* PrimalItemConsumable_HumanPoop_C()
    {
        return GetStaticClassImpl<"PrimalItemConsumable_HumanPoop_C">();
    }
    inline UClass* DinoDeathHarvestingComponent_Tiny_MeatOnly_C()
    {
        return GetStaticClassImpl<"DinoDeathHarvestingComponent_Tiny_MeatOnly_C">();
    }
    inline UClass* PrimalItem_ImplantGraft_Base_C()
    {
        return GetStaticClassImpl<"PrimalItem_ImplantGraft_Base_C">();
    }
    inline UClass* ImplantGraftLightComponent_C()
    {
        return GetStaticClassImpl<"ImplantGraftLightComponent_C">();
    }
    inline UClass* WarDrumsUI_C()
    {
        return GetStaticClassImpl<"WarDrumsUI_C">();
    }
    inline UClass* WhistleRadialSelectorBP_C()
    {
        return GetStaticClassImpl<"WhistleRadialSelectorBP_C">();
    }
    inline UClass* PlayerActionRadialSelectorBP_C()
    {
        return GetStaticClassImpl<"PlayerActionRadialSelectorBP_C">();
    }
    inline UClass* MultiUseRadialSelectorBP_C()
    {
        return GetStaticClassImpl<"MultiUseRadialSelectorBP_C">();
    }
    inline UClass* MobileRightRadialSelectorBP_C()
    {
        return GetStaticClassImpl<"MobileRightRadialSelectorBP_C">();
    }
    inline UClass* MobileLeftRadialSelectorBP_C()
    {
        return GetStaticClassImpl<"MobileLeftRadialSelectorBP_C">();
    }
    inline UClass* InventoryRadialSelectorBP_C()
    {
        return GetStaticClassImpl<"InventoryRadialSelectorBP_C">();
    }
    inline UClass* EmoteRadialSelectorBP_C()
    {
        return GetStaticClassImpl<"EmoteRadialSelectorBP_C">();
    }
    inline UClass* HurtCameraShake_C()
    {
        return GetStaticClassImpl<"HurtCameraShake_C">();
    }
    inline UClass* Tutorial_Visuals_C()
    {
        return GetStaticClassImpl<"Tutorial_Visuals_C">();
    }
    inline UClass* TutorialInfoBP_C()
    {
        return GetStaticClassImpl<"TutorialInfoBP_C">();
    }
    inline UClass* ShooterHudBP_C()
    {
        return GetStaticClassImpl<"ShooterHudBP_C">();
    }
    inline UClass* PlayerPawnTest_C()
    {
        return GetStaticClassImpl<"PlayerPawnTest_C">();
    }
    inline UClass* PlayerControllerBlueprint_C()
    {
        return GetStaticClassImpl<"PlayerControllerBlueprint_C">();
    }
    inline UClass* PrimalItem_Bonus_C()
    {
        return GetStaticClassImpl<"PrimalItem_Bonus_C">();
    }
    inline UClass* DmgType_Melee_WithProjectileImpactFX_4xStructure_C()
    {
        return GetStaticClassImpl<"DmgType_Melee_WithProjectileImpactFX_4xStructure_C">();
    }
    inline UClass* DmgType_Melee_Dino_Herbivore_Small_LargeTorp_C()
    {
        return GetStaticClassImpl<"DmgType_Melee_Dino_Herbivore_Small_LargeTorp_C">();
    }
    inline UClass* DmgType_Melee_Dino_Herbivore_Small_HugeTorp_C()
    {
        return GetStaticClassImpl<"DmgType_Melee_Dino_Herbivore_Small_HugeTorp_C">();
    }
    inline UClass* ToolTipWidgetPrimalStructure_C()
    {
        return GetStaticClassImpl<"ToolTipWidgetPrimalStructure_C">();
    }
    inline UClass* ToolTipWidgetGeneric_C()
    {
        return GetStaticClassImpl<"ToolTipWidgetGeneric_C">();
    }
    inline UClass* GenericStructureSettings_C()
    {
        return GetStaticClassImpl<"GenericStructureSettings_C">();
    }
    inline UClass* TestGameMode_C()
    {
        return GetStaticClassImpl<"TestGameMode_C">();
    }
    inline UClass* PrimalItemDye_Yellow_C()
    {
        return GetStaticClassImpl<"PrimalItemDye_Yellow_C">();
    }
    inline UClass* PrimalItemDye_White_C()
    {
        return GetStaticClassImpl<"PrimalItemDye_White_C">();
    }
    inline UClass* PrimalItemDye_Tangerine_C()
    {
        return GetStaticClassImpl<"PrimalItemDye_Tangerine_C">();
    }
    inline UClass* PrimalItemDye_Tan_C()
    {
        return GetStaticClassImpl<"PrimalItemDye_Tan_C">();
    }
    inline UClass* PrimalItemDye_Slate_C()
    {
        return GetStaticClassImpl<"PrimalItemDye_Slate_C">();
    }
    inline UClass* PrimalItemDye_Sky_C()
    {
        return GetStaticClassImpl<"PrimalItemDye_Sky_C">();
    }
    inline UClass* PrimalItemDye_Silver_C()
    {
        return GetStaticClassImpl<"PrimalItemDye_Silver_C">();
    }
    inline UClass* PrimalItemDye_Royalty_C()
    {
        return GetStaticClassImpl<"PrimalItemDye_Royalty_C">();
    }
    inline UClass* PrimalItemDye_Red_C()
    {
        return GetStaticClassImpl<"PrimalItemDye_Red_C">();
    }
    inline UClass* PrimalItemDye_Purple_C()
    {
        return GetStaticClassImpl<"PrimalItemDye_Purple_C">();
    }
    inline UClass* PrimalItemDye_Pink_C()
    {
        return GetStaticClassImpl<"PrimalItemDye_Pink_C">();
    }
    inline UClass* PrimalItemDye_Parchment_C()
    {
        return GetStaticClassImpl<"PrimalItemDye_Parchment_C">();
    }
    inline UClass* PrimalItemDye_Orange_C()
    {
        return GetStaticClassImpl<"PrimalItemDye_Orange_C">();
    }
    inline UClass* PrimalItemDye_Olive_C()
    {
        return GetStaticClassImpl<"PrimalItemDye_Olive_C">();
    }
    inline UClass* PrimalItemDye_Navy_C()
    {
        return GetStaticClassImpl<"PrimalItemDye_Navy_C">();
    }
    inline UClass* PrimalItemDye_Mud_C()
    {
        return GetStaticClassImpl<"PrimalItemDye_Mud_C">();
    }
    inline UClass* PrimalItemDye_Magenta_C()
    {
        return GetStaticClassImpl<"PrimalItemDye_Magenta_C">();
    }
    inline UClass* PrimalItemDye_Green_C()
    {
        return GetStaticClassImpl<"PrimalItemDye_Green_C">();
    }
    inline UClass* PrimalItemDye_Forest_C()
    {
        return GetStaticClassImpl<"PrimalItemDye_Forest_C">();
    }
    inline UClass* PrimalItemDye_Cyan_C()
    {
        return GetStaticClassImpl<"PrimalItemDye_Cyan_C">();
    }
    inline UClass* PrimalItemDye_Cantaloupe_C()
    {
        return GetStaticClassImpl<"PrimalItemDye_Cantaloupe_C">();
    }
    inline UClass* PrimalItemDye_Brown_C()
    {
        return GetStaticClassImpl<"PrimalItemDye_Brown_C">();
    }
    inline UClass* PrimalItemDye_Brick_C()
    {
        return GetStaticClassImpl<"PrimalItemDye_Brick_C">();
    }
    inline UClass* PrimalItemDye_Blue_C()
    {
        return GetStaticClassImpl<"PrimalItemDye_Blue_C">();
    }
    inline UClass* PrimalItemDye_Black_C()
    {
        return GetStaticClassImpl<"PrimalItemDye_Black_C">();
    }
    inline UClass* PrimalItemDye_ActuallyMagenta_C()
    {
        return GetStaticClassImpl<"PrimalItemDye_ActuallyMagenta_C">();
    }
    inline UClass* PrimalItemConsumableSoap_C()
    {
        return GetStaticClassImpl<"PrimalItemConsumableSoap_C">();
    }
    inline UClass* EngramEntry_WoodWindow_C()
    {
        return GetStaticClassImpl<"EngramEntry_WoodWindow_C">();
    }
    inline UClass* EngramEntry_WoodWallWithWindow_C()
    {
        return GetStaticClassImpl<"EngramEntry_WoodWallWithWindow_C">();
    }
    inline UClass* EngramEntry_WoodWallWithDoor_C()
    {
        return GetStaticClassImpl<"EngramEntry_WoodWallWithDoor_C">();
    }
    inline UClass* EngramEntry_WoodWall_C()
    {
        return GetStaticClassImpl<"EngramEntry_WoodWall_C">();
    }
    inline UClass* EngramEntry_WoodTrapdoor_C()
    {
        return GetStaticClassImpl<"EngramEntry_WoodTrapdoor_C">();
    }
    inline UClass* EngramEntry_WoodStairs_C()
    {
        return GetStaticClassImpl<"EngramEntry_WoodStairs_C">();
    }
    inline UClass* EngramEntry_WoodSpikeWall_C()
    {
        return GetStaticClassImpl<"EngramEntry_WoodSpikeWall_C">();
    }
    inline UClass* EngramEntry_WoodSlopedWall_Right_C()
    {
        return GetStaticClassImpl<"EngramEntry_WoodSlopedWall_Right_C">();
    }
    inline UClass* EngramEntry_WoodSlopedWall_Left_C()
    {
        return GetStaticClassImpl<"EngramEntry_WoodSlopedWall_Left_C">();
    }
    inline UClass* EngramEntry_WoodSign_Wall_C()
    {
        return GetStaticClassImpl<"EngramEntry_WoodSign_Wall_C">();
    }
    inline UClass* EngramEntry_WoodSign_Large_C()
    {
        return GetStaticClassImpl<"EngramEntry_WoodSign_Large_C">();
    }
    inline UClass* EngramEntry_WoodSign_C()
    {
        return GetStaticClassImpl<"EngramEntry_WoodSign_C">();
    }
    inline UClass* EngramEntry_WoodShield_C()
    {
        return GetStaticClassImpl<"EngramEntry_WoodShield_C">();
    }
    inline UClass* EngramEntry_WoodRoof_C()
    {
        return GetStaticClassImpl<"EngramEntry_WoodRoof_C">();
    }
    inline UClass* EngramEntry_WoodRamp_C()
    {
        return GetStaticClassImpl<"EngramEntry_WoodRamp_C">();
    }
    inline UClass* EngramEntry_WoodRailing_C()
    {
        return GetStaticClassImpl<"EngramEntry_WoodRailing_C">();
    }
    inline UClass* EngramEntry_WoodPillar_C()
    {
        return GetStaticClassImpl<"EngramEntry_WoodPillar_C">();
    }
    inline UClass* EngramEntry_WoodLadder_C()
    {
        return GetStaticClassImpl<"EngramEntry_WoodLadder_C">();
    }
    inline UClass* EngramEntry_WoodGateway_C()
    {
        return GetStaticClassImpl<"EngramEntry_WoodGateway_C">();
    }
    inline UClass* EngramEntry_WoodGate_C()
    {
        return GetStaticClassImpl<"EngramEntry_WoodGate_C">();
    }
    inline UClass* EngramEntry_WoodFloor_C()
    {
        return GetStaticClassImpl<"EngramEntry_WoodFloor_C">();
    }
    inline UClass* EngramEntry_WoodFenceFoundation_C()
    {
        return GetStaticClassImpl<"EngramEntry_WoodFenceFoundation_C">();
    }
    inline UClass* EngramEntry_WoodDoor_C()
    {
        return GetStaticClassImpl<"EngramEntry_WoodDoor_C">();
    }
    inline UClass* EngramEntry_WoodChair_C()
    {
        return GetStaticClassImpl<"EngramEntry_WoodChair_C">();
    }
    inline UClass* EngramEntry_WoodCeilingWithTrapdoor_C()
    {
        return GetStaticClassImpl<"EngramEntry_WoodCeilingWithTrapdoor_C">();
    }
    inline UClass* EngramEntry_WoodCeiling_C()
    {
        return GetStaticClassImpl<"EngramEntry_WoodCeiling_C">();
    }
    inline UClass* EngramEntry_WoodCatwalk_C()
    {
        return GetStaticClassImpl<"EngramEntry_WoodCatwalk_C">();
    }
    inline UClass* EngramEntry_WoodCage_C()
    {
        return GetStaticClassImpl<"EngramEntry_WoodCage_C">();
    }
    inline UClass* EngramEntry_WoodBench_C()
    {
        return GetStaticClassImpl<"EngramEntry_WoodBench_C">();
    }
    inline UClass* EngramEntry_WeaponC4_C()
    {
        return GetStaticClassImpl<"EngramEntry_WeaponC4_C">();
    }
    inline UClass* EngramEntry_WaterValve_C()
    {
        return GetStaticClassImpl<"EngramEntry_WaterValve_C">();
    }
    inline UClass* EngramEntry_WaterTankMetal_C()
    {
        return GetStaticClassImpl<"EngramEntry_WaterTankMetal_C">();
    }
    inline UClass* EngramEntry_WaterTank_C()
    {
        return GetStaticClassImpl<"EngramEntry_WaterTank_C">();
    }
    inline UClass* EngramEntry_Waterskin_C()
    {
        return GetStaticClassImpl<"EngramEntry_Waterskin_C">();
    }
    inline UClass* EngramEntry_WaterJar_C()
    {
        return GetStaticClassImpl<"EngramEntry_WaterJar_C">();
    }
    inline UClass* EngramEntry_Wardrums_C()
    {
        return GetStaticClassImpl<"EngramEntry_Wardrums_C">();
    }
    inline UClass* EngramEntry_WallTorch_C()
    {
        return GetStaticClassImpl<"EngramEntry_WallTorch_C">();
    }
    inline UClass* EngramEntry_Turret_C()
    {
        return GetStaticClassImpl<"EngramEntry_Turret_C">();
    }
    inline UClass* EngramEntry_TrophyWall_C()
    {
        return GetStaticClassImpl<"EngramEntry_TrophyWall_C">();
    }
    inline UClass* EngramEntry_TrophyBase_C()
    {
        return GetStaticClassImpl<"EngramEntry_TrophyBase_C">();
    }
    inline UClass* EngramEntry_TripwireC4_C()
    {
        return GetStaticClassImpl<"EngramEntry_TripwireC4_C">();
    }
    inline UClass* EngramEntry_TreeSapTap_C()
    {
        return GetStaticClassImpl<"EngramEntry_TreeSapTap_C">();
    }
    inline UClass* EngramEntry_TreePlatformWood_C()
    {
        return GetStaticClassImpl<"EngramEntry_TreePlatformWood_C">();
    }
    inline UClass* EngramEntry_TreePlatformMetal_C()
    {
        return GetStaticClassImpl<"EngramEntry_TreePlatformMetal_C">();
    }
    inline UClass* EngramEntry_TransGPSAmmo_C()
    {
        return GetStaticClassImpl<"EngramEntry_TransGPSAmmo_C">();
    }
    inline UClass* EngramEntry_TransGPS_C()
    {
        return GetStaticClassImpl<"EngramEntry_TransGPS_C">();
    }
    inline UClass* EngramEntry_TranqDart_C()
    {
        return GetStaticClassImpl<"EngramEntry_TranqDart_C">();
    }
    inline UClass* EngramEntry_TrainingDummy_C()
    {
        return GetStaticClassImpl<"EngramEntry_TrainingDummy_C">();
    }
    inline UClass* EngramEntry_ThatchWallWithDoor_C()
    {
        return GetStaticClassImpl<"EngramEntry_ThatchWallWithDoor_C">();
    }
    inline UClass* EngramEntry_ThatchWall_C()
    {
        return GetStaticClassImpl<"EngramEntry_ThatchWall_C">();
    }
    inline UClass* EngramEntry_ThatchSlopedWall_Right_C()
    {
        return GetStaticClassImpl<"EngramEntry_ThatchSlopedWall_Right_C">();
    }
    inline UClass* EngramEntry_ThatchSlopedWall_left_C()
    {
        return GetStaticClassImpl<"EngramEntry_ThatchSlopedWall_left_C">();
    }
    inline UClass* EngramEntry_ThatchRoof_C()
    {
        return GetStaticClassImpl<"EngramEntry_ThatchRoof_C">();
    }
    inline UClass* EngramEntry_ThatchFloor_C()
    {
        return GetStaticClassImpl<"EngramEntry_ThatchFloor_C">();
    }
    inline UClass* EngramEntry_ThatchDoor_C()
    {
        return GetStaticClassImpl<"EngramEntry_ThatchDoor_C">();
    }
    inline UClass* EngramEntry_ThatchCeiling_C()
    {
        return GetStaticClassImpl<"EngramEntry_ThatchCeiling_C">();
    }
    inline UClass* EngramEntry_Sword_C()
    {
        return GetStaticClassImpl<"EngramEntry_Sword_C">();
    }
    inline UClass* EngramEntry_SubstrateAbsorbent_C()
    {
        return GetStaticClassImpl<"EngramEntry_SubstrateAbsorbent_C">();
    }
    inline UClass* EngramEntry_StorageBox_Small_C()
    {
        return GetStaticClassImpl<"EngramEntry_StorageBox_Small_C">();
    }
    inline UClass* EngramEntry_StorageBox_Large_C()
    {
        return GetStaticClassImpl<"EngramEntry_StorageBox_Large_C">();
    }
    inline UClass* EngramEntry_StorageBox_Huge_C()
    {
        return GetStaticClassImpl<"EngramEntry_StorageBox_Huge_C">();
    }
    inline UClass* EngramEntry_StoneWindow_C()
    {
        return GetStaticClassImpl<"EngramEntry_StoneWindow_C">();
    }
    inline UClass* EngramEntry_StoneWallWithWindow_C()
    {
        return GetStaticClassImpl<"EngramEntry_StoneWallWithWindow_C">();
    }
    inline UClass* EngramEntry_StoneWallWithDoor_C()
    {
        return GetStaticClassImpl<"EngramEntry_StoneWallWithDoor_C">();
    }
    inline UClass* EngramEntry_StoneWall_C()
    {
        return GetStaticClassImpl<"EngramEntry_StoneWall_C">();
    }
    inline UClass* EngramEntry_StoneTrapdoorGiant_C()
    {
        return GetStaticClassImpl<"EngramEntry_StoneTrapdoorGiant_C">();
    }
    inline UClass* EngramEntry_StoneTrapdoor_C()
    {
        return GetStaticClassImpl<"EngramEntry_StoneTrapdoor_C">();
    }
    inline UClass* EngramEntry_StoneStairs_C()
    {
        return GetStaticClassImpl<"EngramEntry_StoneStairs_C">();
    }
    inline UClass* EngramEntry_StoneSlopedWall_Right_C()
    {
        return GetStaticClassImpl<"EngramEntry_StoneSlopedWall_Right_C">();
    }
    inline UClass* EngramEntry_StoneSlopedWall_Left_C()
    {
        return GetStaticClassImpl<"EngramEntry_StoneSlopedWall_Left_C">();
    }
    inline UClass* EngramEntry_StoneRoof_C()
    {
        return GetStaticClassImpl<"EngramEntry_StoneRoof_C">();
    }
    inline UClass* EngramEntry_StoneRailing_C()
    {
        return GetStaticClassImpl<"EngramEntry_StoneRailing_C">();
    }
    inline UClass* EngramEntry_StonePipeVertical_C()
    {
        return GetStaticClassImpl<"EngramEntry_StonePipeVertical_C">();
    }
    inline UClass* EngramEntry_StonePipeTap_C()
    {
        return GetStaticClassImpl<"EngramEntry_StonePipeTap_C">();
    }
    inline UClass* EngramEntry_StonePipeStraight_C()
    {
        return GetStaticClassImpl<"EngramEntry_StonePipeStraight_C">();
    }
    inline UClass* EngramEntry_StonePipeIntersection_C()
    {
        return GetStaticClassImpl<"EngramEntry_StonePipeIntersection_C">();
    }
    inline UClass* EngramEntry_StonePipeIntake_C()
    {
        return GetStaticClassImpl<"EngramEntry_StonePipeIntake_C">();
    }
    inline UClass* EngramEntry_StonePipeInclined_C()
    {
        return GetStaticClassImpl<"EngramEntry_StonePipeInclined_C">();
    }
    inline UClass* EngramEntry_StonePillar_C()
    {
        return GetStaticClassImpl<"EngramEntry_StonePillar_C">();
    }
    inline UClass* EngramEntry_StoneHatchet_C()
    {
        return GetStaticClassImpl<"EngramEntry_StoneHatchet_C">();
    }
    inline UClass* EngramEntry_StoneGateway_Large_C()
    {
        return GetStaticClassImpl<"EngramEntry_StoneGateway_Large_C">();
    }
    inline UClass* EngramEntry_StoneGateway_C()
    {
        return GetStaticClassImpl<"EngramEntry_StoneGateway_C">();
    }
    inline UClass* EngramEntry_StoneGateLarge_C()
    {
        return GetStaticClassImpl<"EngramEntry_StoneGateLarge_C">();
    }
    inline UClass* EngramEntry_StoneGate_C()
    {
        return GetStaticClassImpl<"EngramEntry_StoneGate_C">();
    }
    inline UClass* EngramEntry_StoneFloor_C()
    {
        return GetStaticClassImpl<"EngramEntry_StoneFloor_C">();
    }
    inline UClass* EngramEntry_StoneFenceFoundation_C()
    {
        return GetStaticClassImpl<"EngramEntry_StoneFenceFoundation_C">();
    }
    inline UClass* EngramEntry_StoneDoor_C()
    {
        return GetStaticClassImpl<"EngramEntry_StoneDoor_C">();
    }
    inline UClass* EngramEntry_StoneClub_C()
    {
        return GetStaticClassImpl<"EngramEntry_StoneClub_C">();
    }
    inline UClass* EngramEntry_StoneCeilingWithTrapdoorGiant_C()
    {
        return GetStaticClassImpl<"EngramEntry_StoneCeilingWithTrapdoorGiant_C">();
    }
    inline UClass* EngramEntry_StoneCeilingWithTrapdoor_C()
    {
        return GetStaticClassImpl<"EngramEntry_StoneCeilingWithTrapdoor_C">();
    }
    inline UClass* EngramEntry_StoneCeiling_C()
    {
        return GetStaticClassImpl<"EngramEntry_StoneCeiling_C">();
    }
    inline UClass* EngramEntry_StoneBattlement_Curved_C()
    {
        return GetStaticClassImpl<"EngramEntry_StoneBattlement_Curved_C">();
    }
    inline UClass* EngramEntry_StoneBattlement_C()
    {
        return GetStaticClassImpl<"EngramEntry_StoneBattlement_C">();
    }
    inline UClass* EngramEntry_Stimulant_C()
    {
        return GetStaticClassImpl<"EngramEntry_Stimulant_C">();
    }
    inline UClass* EngramEntry_StandingTorch_C()
    {
        return GetStaticClassImpl<"EngramEntry_StandingTorch_C">();
    }
    inline UClass* EngramEntry_Spyglass_C()
    {
        return GetStaticClassImpl<"EngramEntry_Spyglass_C">();
    }
    inline UClass* EngramEntry_SprayPainter_C()
    {
        return GetStaticClassImpl<"EngramEntry_SprayPainter_C">();
    }
    inline UClass* EngramEntry_Spear_C()
    {
        return GetStaticClassImpl<"EngramEntry_Spear_C">();
    }
    inline UClass* EngramEntry_Sparkpowder_C()
    {
        return GetStaticClassImpl<"EngramEntry_Sparkpowder_C">();
    }
    inline UClass* EngramEntry_Slingshot_C()
    {
        return GetStaticClassImpl<"EngramEntry_Slingshot_C">();
    }
    inline UClass* EngramEntry_SimpleShotgunBullet_C()
    {
        return GetStaticClassImpl<"EngramEntry_SimpleShotgunBullet_C">();
    }
    inline UClass* EngramEntry_SimpleShotgun_C()
    {
        return GetStaticClassImpl<"EngramEntry_SimpleShotgun_C">();
    }
    inline UClass* EngramEntry_SimpleRifleBullet_C()
    {
        return GetStaticClassImpl<"EngramEntry_SimpleRifleBullet_C">();
    }
    inline UClass* EngramEntry_SimpleRifle_C()
    {
        return GetStaticClassImpl<"EngramEntry_SimpleRifle_C">();
    }
    inline UClass* EngramEntry_SimpleBullet_C()
    {
        return GetStaticClassImpl<"EngramEntry_SimpleBullet_C">();
    }
    inline UClass* EngramEntry_SimpleBed_C()
    {
        return GetStaticClassImpl<"EngramEntry_SimpleBed_C">();
    }
    inline UClass* EngramEntry_Silencer_C()
    {
        return GetStaticClassImpl<"EngramEntry_Silencer_C">();
    }
    inline UClass* EngramEntry_SeaMine_C()
    {
        return GetStaticClassImpl<"EngramEntry_SeaMine_C">();
    }
    inline UClass* EngramEntry_ScubaShirt_SuitWithTank_C()
    {
        return GetStaticClassImpl<"EngramEntry_ScubaShirt_SuitWithTank_C">();
    }
    inline UClass* EngramEntry_ScubaPants_C()
    {
        return GetStaticClassImpl<"EngramEntry_ScubaPants_C">();
    }
    inline UClass* EngramEntry_ScubaHelmet_Goggles_C()
    {
        return GetStaticClassImpl<"EngramEntry_ScubaHelmet_Goggles_C">();
    }
    inline UClass* EngramEntry_ScubaBoots_Flippers_C()
    {
        return GetStaticClassImpl<"EngramEntry_ScubaBoots_Flippers_C">();
    }
    inline UClass* EngramEntry_Scope_C()
    {
        return GetStaticClassImpl<"EngramEntry_Scope_C">();
    }
    inline UClass* EngramEntry_Saddle_Tuso_C()
    {
        return GetStaticClassImpl<"EngramEntry_Saddle_Tuso_C">();
    }
    inline UClass* EngramEntry_Saddle_Turtle_C()
    {
        return GetStaticClassImpl<"EngramEntry_Saddle_Turtle_C">();
    }
    inline UClass* EngramEntry_Saddle_Trike_C()
    {
        return GetStaticClassImpl<"EngramEntry_Saddle_Trike_C">();
    }
    inline UClass* EngramEntry_Saddle_Toad_C()
    {
        return GetStaticClassImpl<"EngramEntry_Saddle_Toad_C">();
    }
    inline UClass* EngramEntry_Saddle_Titano_Platform_C()
    {
        return GetStaticClassImpl<"EngramEntry_Saddle_Titano_Platform_C">();
    }
    inline UClass* EngramEntry_Saddle_Therizino_C()
    {
        return GetStaticClassImpl<"EngramEntry_Saddle_Therizino_C">();
    }
    inline UClass* EngramEntry_Saddle_TerrorBird_C()
    {
        return GetStaticClassImpl<"EngramEntry_Saddle_TerrorBird_C">();
    }
    inline UClass* EngramEntry_Saddle_Tapejara_C()
    {
        return GetStaticClassImpl<"EngramEntry_Saddle_Tapejara_C">();
    }
    inline UClass* EngramEntry_Saddle_Stego_C()
    {
        return GetStaticClassImpl<"EngramEntry_Saddle_Stego_C">();
    }
    inline UClass* EngramEntry_Saddle_Stag_C()
    {
        return GetStaticClassImpl<"EngramEntry_Saddle_Stag_C">();
    }
    inline UClass* EngramEntry_Saddle_Spino_C()
    {
        return GetStaticClassImpl<"EngramEntry_Saddle_Spino_C">();
    }
    inline UClass* EngramEntry_Saddle_Spider_C()
    {
        return GetStaticClassImpl<"EngramEntry_Saddle_Spider_C">();
    }
    inline UClass* EngramEntry_Saddle_Scorpion_C()
    {
        return GetStaticClassImpl<"EngramEntry_Saddle_Scorpion_C">();
    }
    inline UClass* EngramEntry_Saddle_Sauro_Platform_C()
    {
        return GetStaticClassImpl<"EngramEntry_Saddle_Sauro_Platform_C">();
    }
    inline UClass* EngramEntry_Saddle_Sauro_C()
    {
        return GetStaticClassImpl<"EngramEntry_Saddle_Sauro_C">();
    }
    inline UClass* EngramEntry_Saddle_Sarco_C()
    {
        return GetStaticClassImpl<"EngramEntry_Saddle_Sarco_C">();
    }
    inline UClass* EngramEntry_Saddle_Saber_C()
    {
        return GetStaticClassImpl<"EngramEntry_Saddle_Saber_C">();
    }
    inline UClass* EngramEntry_Saddle_Rhino_C()
    {
        return GetStaticClassImpl<"EngramEntry_Saddle_Rhino_C">();
    }
    inline UClass* EngramEntry_Saddle_Rex_C()
    {
        return GetStaticClassImpl<"EngramEntry_Saddle_Rex_C">();
    }
    inline UClass* EngramEntry_Saddle_Raptor_C()
    {
        return GetStaticClassImpl<"EngramEntry_Saddle_Raptor_C">();
    }
    inline UClass* EngramEntry_Saddle_Quetz_Platform_C()
    {
        return GetStaticClassImpl<"EngramEntry_Saddle_Quetz_Platform_C">();
    }
    inline UClass* EngramEntry_Saddle_Quetz_C()
    {
        return GetStaticClassImpl<"EngramEntry_Saddle_Quetz_C">();
    }
    inline UClass* EngramEntry_Saddle_Ptero_C()
    {
        return GetStaticClassImpl<"EngramEntry_Saddle_Ptero_C">();
    }
    inline UClass* EngramEntry_Saddle_Procop_C()
    {
        return GetStaticClassImpl<"EngramEntry_Saddle_Procop_C">();
    }
    inline UClass* EngramEntry_Saddle_Plesio_Platform_C()
    {
        return GetStaticClassImpl<"EngramEntry_Saddle_Plesio_Platform_C">();
    }
    inline UClass* EngramEntry_Saddle_Plesia_C()
    {
        return GetStaticClassImpl<"EngramEntry_Saddle_Plesia_C">();
    }
    inline UClass* EngramEntry_Saddle_Phiomia_C()
    {
        return GetStaticClassImpl<"EngramEntry_Saddle_Phiomia_C">();
    }
    inline UClass* EngramEntry_Saddle_Pela_C()
    {
        return GetStaticClassImpl<"EngramEntry_Saddle_Pela_C">();
    }
    inline UClass* EngramEntry_Saddle_Paracer_Platform_C()
    {
        return GetStaticClassImpl<"EngramEntry_Saddle_Paracer_Platform_C">();
    }
    inline UClass* EngramEntry_Saddle_Paracer_C()
    {
        return GetStaticClassImpl<"EngramEntry_Saddle_Paracer_C">();
    }
    inline UClass* EngramEntry_Saddle_Para_C()
    {
        return GetStaticClassImpl<"EngramEntry_Saddle_Para_C">();
    }
    inline UClass* EngramEntry_Saddle_PachyRhino_C()
    {
        return GetStaticClassImpl<"EngramEntry_Saddle_PachyRhino_C">();
    }
    inline UClass* EngramEntry_Saddle_Pachy_C()
    {
        return GetStaticClassImpl<"EngramEntry_Saddle_Pachy_C">();
    }
    inline UClass* EngramEntry_Saddle_Mosa_Platform_C()
    {
        return GetStaticClassImpl<"EngramEntry_Saddle_Mosa_Platform_C">();
    }
    inline UClass* EngramEntry_Saddle_Mosa_C()
    {
        return GetStaticClassImpl<"EngramEntry_Saddle_Mosa_C">();
    }
    inline UClass* EngramEntry_Saddle_Megatherium_C()
    {
        return GetStaticClassImpl<"EngramEntry_Saddle_Megatherium_C">();
    }
    inline UClass* EngramEntry_Saddle_Megalosaurus_C()
    {
        return GetStaticClassImpl<"EngramEntry_Saddle_Megalosaurus_C">();
    }
    inline UClass* EngramEntry_Saddle_Megalodon_C()
    {
        return GetStaticClassImpl<"EngramEntry_Saddle_Megalodon_C">();
    }
    inline UClass* EngramEntry_Saddle_Manta_C()
    {
        return GetStaticClassImpl<"EngramEntry_Saddle_Manta_C">();
    }
    inline UClass* EngramEntry_Saddle_Mammoth_C()
    {
        return GetStaticClassImpl<"EngramEntry_Saddle_Mammoth_C">();
    }
    inline UClass* EngramEntry_Saddle_Kaprosuchus_C()
    {
        return GetStaticClassImpl<"EngramEntry_Saddle_Kaprosuchus_C">();
    }
    inline UClass* EngramEntry_Saddle_Iguanodon_C()
    {
        return GetStaticClassImpl<"EngramEntry_Saddle_Iguanodon_C">();
    }
    inline UClass* EngramEntry_Saddle_Gigant_C()
    {
        return GetStaticClassImpl<"EngramEntry_Saddle_Gigant_C">();
    }
    inline UClass* EngramEntry_Saddle_Galli_C()
    {
        return GetStaticClassImpl<"EngramEntry_Saddle_Galli_C">();
    }
    inline UClass* EngramEntry_Saddle_Equus_C()
    {
        return GetStaticClassImpl<"EngramEntry_Saddle_Equus_C">();
    }
    inline UClass* EngramEntry_Saddle_Dunkle_C()
    {
        return GetStaticClassImpl<"EngramEntry_Saddle_Dunkle_C">();
    }
    inline UClass* EngramEntry_Saddle_Dolphin_C()
    {
        return GetStaticClassImpl<"EngramEntry_Saddle_Dolphin_C">();
    }
    inline UClass* EngramEntry_Saddle_Doed_C()
    {
        return GetStaticClassImpl<"EngramEntry_Saddle_Doed_C">();
    }
    inline UClass* EngramEntry_Saddle_Direbear_C()
    {
        return GetStaticClassImpl<"EngramEntry_Saddle_Direbear_C">();
    }
    inline UClass* EngramEntry_Saddle_Diplodocus_C()
    {
        return GetStaticClassImpl<"EngramEntry_Saddle_Diplodocus_C">();
    }
    inline UClass* EngramEntry_Saddle_Daeodon_C()
    {
        return GetStaticClassImpl<"EngramEntry_Saddle_Daeodon_C">();
    }
    inline UClass* EngramEntry_Saddle_Chalico_C()
    {
        return GetStaticClassImpl<"EngramEntry_Saddle_Chalico_C">();
    }
    inline UClass* EngramEntry_Saddle_Carno_C()
    {
        return GetStaticClassImpl<"EngramEntry_Saddle_Carno_C">();
    }
    inline UClass* EngramEntry_Saddle_Beaver_C()
    {
        return GetStaticClassImpl<"EngramEntry_Saddle_Beaver_C">();
    }
    inline UClass* EngramEntry_Saddle_Basilosaurus_C()
    {
        return GetStaticClassImpl<"EngramEntry_Saddle_Basilosaurus_C">();
    }
    inline UClass* EngramEntry_Saddle_Baryonyx_C()
    {
        return GetStaticClassImpl<"EngramEntry_Saddle_Baryonyx_C">();
    }
    inline UClass* EngramEntry_Saddle_Arthro_C()
    {
        return GetStaticClassImpl<"EngramEntry_Saddle_Arthro_C">();
    }
    inline UClass* EngramEntry_Saddle_Argentavis_C()
    {
        return GetStaticClassImpl<"EngramEntry_Saddle_Argentavis_C">();
    }
    inline UClass* EngramEntry_Saddle_Ankylo_C()
    {
        return GetStaticClassImpl<"EngramEntry_Saddle_Ankylo_C">();
    }
    inline UClass* EngramEntry_Saddle_Allo_C()
    {
        return GetStaticClassImpl<"EngramEntry_Saddle_Allo_C">();
    }
    inline UClass* EngramEntry_RopeLadder_C()
    {
        return GetStaticClassImpl<"EngramEntry_RopeLadder_C">();
    }
    inline UClass* EngramEntry_RocketTurret_C()
    {
        return GetStaticClassImpl<"EngramEntry_RocketTurret_C">();
    }
    inline UClass* EngramEntry_RocketLauncher_C()
    {
        return GetStaticClassImpl<"EngramEntry_RocketLauncher_C">();
    }
    inline UClass* EngramEntry_RocketAmmo_C()
    {
        return GetStaticClassImpl<"EngramEntry_RocketAmmo_C">();
    }
    inline UClass* EngramEntry_RiotShirt_C()
    {
        return GetStaticClassImpl<"EngramEntry_RiotShirt_C">();
    }
    inline UClass* EngramEntry_RiotShield_C()
    {
        return GetStaticClassImpl<"EngramEntry_RiotShield_C">();
    }
    inline UClass* EngramEntry_RiotPants_C()
    {
        return GetStaticClassImpl<"EngramEntry_RiotPants_C">();
    }
    inline UClass* EngramEntry_RiotHelmet_C()
    {
        return GetStaticClassImpl<"EngramEntry_RiotHelmet_C">();
    }
    inline UClass* EngramEntry_RiotGloves_C()
    {
        return GetStaticClassImpl<"EngramEntry_RiotGloves_C">();
    }
    inline UClass* EngramEntry_RiotBoots_C()
    {
        return GetStaticClassImpl<"EngramEntry_RiotBoots_C">();
    }
    inline UClass* EngramEntry_ResurrectPlatform_C()
    {
        return GetStaticClassImpl<"EngramEntry_ResurrectPlatform_C">();
    }
    inline UClass* EngramEntry_RefinedTranqDart_C()
    {
        return GetStaticClassImpl<"EngramEntry_RefinedTranqDart_C">();
    }
    inline UClass* EngramEntry_Raft_C()
    {
        return GetStaticClassImpl<"EngramEntry_Raft_C">();
    }
    inline UClass* EngramEntry_PreservingBin_C()
    {
        return GetStaticClassImpl<"EngramEntry_PreservingBin_C">();
    }
    inline UClass* EngramEntry_PowerOutlet_C()
    {
        return GetStaticClassImpl<"EngramEntry_PowerOutlet_C">();
    }
    inline UClass* EngramEntry_PowerGenerator_C()
    {
        return GetStaticClassImpl<"EngramEntry_PowerGenerator_C">();
    }
    inline UClass* EngramEntry_PowerCableVertical_C()
    {
        return GetStaticClassImpl<"EngramEntry_PowerCableVertical_C">();
    }
    inline UClass* EngramEntry_PowerCableStraight_C()
    {
        return GetStaticClassImpl<"EngramEntry_PowerCableStraight_C">();
    }
    inline UClass* EngramEntry_PowerCableIntersection_C()
    {
        return GetStaticClassImpl<"EngramEntry_PowerCableIntersection_C">();
    }
    inline UClass* EngramEntry_PowerCableIncline_C()
    {
        return GetStaticClassImpl<"EngramEntry_PowerCableIncline_C">();
    }
    inline UClass* EngramEntry_Polymer_C()
    {
        return GetStaticClassImpl<"EngramEntry_Polymer_C">();
    }
    inline UClass* EngramEntry_PoisonTrap_C()
    {
        return GetStaticClassImpl<"EngramEntry_PoisonTrap_C">();
    }
    inline UClass* EngramEntry_PoisonGrenade_C()
    {
        return GetStaticClassImpl<"EngramEntry_PoisonGrenade_C">();
    }
    inline UClass* EngramEntry_Pistol_C()
    {
        return GetStaticClassImpl<"EngramEntry_Pistol_C">();
    }
    inline UClass* EngramEntry_Pike_C()
    {
        return GetStaticClassImpl<"EngramEntry_Pike_C">();
    }
    inline UClass* EngramEntry_Parachute_C()
    {
        return GetStaticClassImpl<"EngramEntry_Parachute_C">();
    }
    inline UClass* EngramEntry_Paintbrush_C()
    {
        return GetStaticClassImpl<"EngramEntry_Paintbrush_C">();
    }
    inline UClass* EngramEntry_NightVisionGoggles_C()
    {
        return GetStaticClassImpl<"EngramEntry_NightVisionGoggles_C">();
    }
    inline UClass* EngramEntry_Narcotic_C()
    {
        return GetStaticClassImpl<"EngramEntry_Narcotic_C">();
    }
    inline UClass* EngramEntry_MortarAndPestle_C()
    {
        return GetStaticClassImpl<"EngramEntry_MortarAndPestle_C">();
    }
    inline UClass* EngramEntry_ModernBed_C()
    {
        return GetStaticClassImpl<"EngramEntry_ModernBed_C">();
    }
    inline UClass* EngramEntry_MiracleGro_C()
    {
        return GetStaticClassImpl<"EngramEntry_MiracleGro_C">();
    }
    inline UClass* EngramEntry_MinigunTurret_C()
    {
        return GetStaticClassImpl<"EngramEntry_MinigunTurret_C">();
    }
    inline UClass* EngramEntry_MinersHelmet_C()
    {
        return GetStaticClassImpl<"EngramEntry_MinersHelmet_C">();
    }
    inline UClass* EngramEntry_MetalWindow_C()
    {
        return GetStaticClassImpl<"EngramEntry_MetalWindow_C">();
    }
    inline UClass* EngramEntry_MetalWallWithWindow_C()
    {
        return GetStaticClassImpl<"EngramEntry_MetalWallWithWindow_C">();
    }
    inline UClass* EngramEntry_MetalWallWithDoor_C()
    {
        return GetStaticClassImpl<"EngramEntry_MetalWallWithDoor_C">();
    }
    inline UClass* EngramEntry_MetalWall_C()
    {
        return GetStaticClassImpl<"EngramEntry_MetalWall_C">();
    }
    inline UClass* EngramEntry_MetalTrapdoorGiant_C()
    {
        return GetStaticClassImpl<"EngramEntry_MetalTrapdoorGiant_C">();
    }
    inline UClass* EngramEntry_MetalTrapdoor_C()
    {
        return GetStaticClassImpl<"EngramEntry_MetalTrapdoor_C">();
    }
    inline UClass* EngramEntry_MetalStairs_C()
    {
        return GetStaticClassImpl<"EngramEntry_MetalStairs_C">();
    }
    inline UClass* EngramEntry_MetalSpikeWall_C()
    {
        return GetStaticClassImpl<"EngramEntry_MetalSpikeWall_C">();
    }
    inline UClass* EngramEntry_MetalSlopedWall_Right_C()
    {
        return GetStaticClassImpl<"EngramEntry_MetalSlopedWall_Right_C">();
    }
    inline UClass* EngramEntry_MetalSlopedWall_Left_C()
    {
        return GetStaticClassImpl<"EngramEntry_MetalSlopedWall_Left_C">();
    }
    inline UClass* EngramEntry_MetalSign_Wall_C()
    {
        return GetStaticClassImpl<"EngramEntry_MetalSign_Wall_C">();
    }
    inline UClass* EngramEntry_MetalSign_Large_C()
    {
        return GetStaticClassImpl<"EngramEntry_MetalSign_Large_C">();
    }
    inline UClass* EngramEntry_MetalSign_C()
    {
        return GetStaticClassImpl<"EngramEntry_MetalSign_C">();
    }
    inline UClass* EngramEntry_MetalSickle_C()
    {
        return GetStaticClassImpl<"EngramEntry_MetalSickle_C">();
    }
    inline UClass* EngramEntry_MetalShirt_C()
    {
        return GetStaticClassImpl<"EngramEntry_MetalShirt_C">();
    }
    inline UClass* EngramEntry_MetalShield_C()
    {
        return GetStaticClassImpl<"EngramEntry_MetalShield_C">();
    }
    inline UClass* EngramEntry_MetalRoof_C()
    {
        return GetStaticClassImpl<"EngramEntry_MetalRoof_C">();
    }
    inline UClass* EngramEntry_MetalRamp_C()
    {
        return GetStaticClassImpl<"EngramEntry_MetalRamp_C">();
    }
    inline UClass* EngramEntry_MetalRailing_C()
    {
        return GetStaticClassImpl<"EngramEntry_MetalRailing_C">();
    }
    inline UClass* EngramEntry_MetalPipeVertical_C()
    {
        return GetStaticClassImpl<"EngramEntry_MetalPipeVertical_C">();
    }
    inline UClass* EngramEntry_MetalPipeTap_C()
    {
        return GetStaticClassImpl<"EngramEntry_MetalPipeTap_C">();
    }
    inline UClass* EngramEntry_MetalPipeStraight_C()
    {
        return GetStaticClassImpl<"EngramEntry_MetalPipeStraight_C">();
    }
    inline UClass* EngramEntry_MetalPipeIntersection_C()
    {
        return GetStaticClassImpl<"EngramEntry_MetalPipeIntersection_C">();
    }
    inline UClass* EngramEntry_MetalPipeIntake_C()
    {
        return GetStaticClassImpl<"EngramEntry_MetalPipeIntake_C">();
    }
    inline UClass* EngramEntry_MetalPipeIncline_C()
    {
        return GetStaticClassImpl<"EngramEntry_MetalPipeIncline_C">();
    }
    inline UClass* EngramEntry_MetalPillar_C()
    {
        return GetStaticClassImpl<"EngramEntry_MetalPillar_C">();
    }
    inline UClass* EngramEntry_MetalPick_C()
    {
        return GetStaticClassImpl<"EngramEntry_MetalPick_C">();
    }
    inline UClass* EngramEntry_MetalPants_C()
    {
        return GetStaticClassImpl<"EngramEntry_MetalPants_C">();
    }
    inline UClass* EngramEntry_MetalLadder_C()
    {
        return GetStaticClassImpl<"EngramEntry_MetalLadder_C">();
    }
    inline UClass* EngramEntry_MetalHelmet_C()
    {
        return GetStaticClassImpl<"EngramEntry_MetalHelmet_C">();
    }
    inline UClass* EngramEntry_MetalHatchet_C()
    {
        return GetStaticClassImpl<"EngramEntry_MetalHatchet_C">();
    }
    inline UClass* EngramEntry_MetalGloves_C()
    {
        return GetStaticClassImpl<"EngramEntry_MetalGloves_C">();
    }
    inline UClass* EngramEntry_MetalGateway_Large_C()
    {
        return GetStaticClassImpl<"EngramEntry_MetalGateway_Large_C">();
    }
    inline UClass* EngramEntry_MetalGateway_C()
    {
        return GetStaticClassImpl<"EngramEntry_MetalGateway_C">();
    }
    inline UClass* EngramEntry_MetalGate_Large_C()
    {
        return GetStaticClassImpl<"EngramEntry_MetalGate_Large_C">();
    }
    inline UClass* EngramEntry_MetalGate_C()
    {
        return GetStaticClassImpl<"EngramEntry_MetalGate_C">();
    }
    inline UClass* EngramEntry_MetalFloor_C()
    {
        return GetStaticClassImpl<"EngramEntry_MetalFloor_C">();
    }
    inline UClass* EngramEntry_MetalFenceFoundation_C()
    {
        return GetStaticClassImpl<"EngramEntry_MetalFenceFoundation_C">();
    }
    inline UClass* EngramEntry_MetalDoor_C()
    {
        return GetStaticClassImpl<"EngramEntry_MetalDoor_C">();
    }
    inline UClass* EngramEntry_MetalCeilingWithTrapdoorGiant_C()
    {
        return GetStaticClassImpl<"EngramEntry_MetalCeilingWithTrapdoorGiant_C">();
    }
    inline UClass* EngramEntry_MetalCeilingWithTrapdoor_C()
    {
        return GetStaticClassImpl<"EngramEntry_MetalCeilingWithTrapdoor_C">();
    }
    inline UClass* EngramEntry_MetalCeiling_C()
    {
        return GetStaticClassImpl<"EngramEntry_MetalCeiling_C">();
    }
    inline UClass* EngramEntry_MetalCatwalk_C()
    {
        return GetStaticClassImpl<"EngramEntry_MetalCatwalk_C">();
    }
    inline UClass* EngramEntry_MetalBoots_C()
    {
        return GetStaticClassImpl<"EngramEntry_MetalBoots_C">();
    }
    inline UClass* EngramEntry_MetalBattlementCurved_C()
    {
        return GetStaticClassImpl<"EngramEntry_MetalBattlementCurved_C">();
    }
    inline UClass* EngramEntry_MetalBattlement_C()
    {
        return GetStaticClassImpl<"EngramEntry_MetalBattlement_C">();
    }
    inline UClass* EngramEntry_MachinedSniper_C()
    {
        return GetStaticClassImpl<"EngramEntry_MachinedSniper_C">();
    }
    inline UClass* EngramEntry_MachinedShotgun_C()
    {
        return GetStaticClassImpl<"EngramEntry_MachinedShotgun_C">();
    }
    inline UClass* EngramEntry_MachinedRifle_C()
    {
        return GetStaticClassImpl<"EngramEntry_MachinedRifle_C">();
    }
    inline UClass* EngramEntry_MachinedPistol_C()
    {
        return GetStaticClassImpl<"EngramEntry_MachinedPistol_C">();
    }
    inline UClass* EngramEntry_Laser_C()
    {
        return GetStaticClassImpl<"EngramEntry_Laser_C">();
    }
    inline UClass* EngramEntry_LamppostOmni_C()
    {
        return GetStaticClassImpl<"EngramEntry_LamppostOmni_C">();
    }
    inline UClass* EngramEntry_Lamppost_C()
    {
        return GetStaticClassImpl<"EngramEntry_Lamppost_C">();
    }
    inline UClass* EngramEntry_Keypad_C()
    {
        return GetStaticClassImpl<"EngramEntry_Keypad_C">();
    }
    inline UClass* EngramEntry_IndustrialForge_C()
    {
        return GetStaticClassImpl<"EngramEntry_IndustrialForge_C">();
    }
    inline UClass* EngramEntry_IndustrialCookingPot_C()
    {
        return GetStaticClassImpl<"EngramEntry_IndustrialCookingPot_C">();
    }
    inline UClass* EngramEntry_IceBox_C()
    {
        return GetStaticClassImpl<"EngramEntry_IceBox_C">();
    }
    inline UClass* EngramEntry_HoloScope_C()
    {
        return GetStaticClassImpl<"EngramEntry_HoloScope_C">();
    }
    inline UClass* EngramEntry_HideSleepingBag_C()
    {
        return GetStaticClassImpl<"EngramEntry_HideSleepingBag_C">();
    }
    inline UClass* EngramEntry_HideShirt_C()
    {
        return GetStaticClassImpl<"EngramEntry_HideShirt_C">();
    }
    inline UClass* EngramEntry_HidePants_C()
    {
        return GetStaticClassImpl<"EngramEntry_HidePants_C">();
    }
    inline UClass* EngramEntry_HideHelmet_C()
    {
        return GetStaticClassImpl<"EngramEntry_HideHelmet_C">();
    }
    inline UClass* EngramEntry_HideGloves_C()
    {
        return GetStaticClassImpl<"EngramEntry_HideGloves_C">();
    }
    inline UClass* EngramEntry_HideBoots_C()
    {
        return GetStaticClassImpl<"EngramEntry_HideBoots_C">();
    }
    inline UClass* EngramEntry_Handcuffs_C()
    {
        return GetStaticClassImpl<"EngramEntry_Handcuffs_C">();
    }
    inline UClass* EngramEntry_Gunpowder_C()
    {
        return GetStaticClassImpl<"EngramEntry_Gunpowder_C">();
    }
    inline UClass* EngramEntry_Grinder_C()
    {
        return GetStaticClassImpl<"EngramEntry_Grinder_C">();
    }
    inline UClass* EngramEntry_Grill_C()
    {
        return GetStaticClassImpl<"EngramEntry_Grill_C">();
    }
    inline UClass* EngramEntry_Grenade_C()
    {
        return GetStaticClassImpl<"EngramEntry_Grenade_C">();
    }
    inline UClass* EngramEntry_GreenhouseWindow_C()
    {
        return GetStaticClassImpl<"EngramEntry_GreenhouseWindow_C">();
    }
    inline UClass* EngramEntry_GreenhouseWallWithDoor_C()
    {
        return GetStaticClassImpl<"EngramEntry_GreenhouseWallWithDoor_C">();
    }
    inline UClass* EngramEntry_GreenhouseWall_C()
    {
        return GetStaticClassImpl<"EngramEntry_GreenhouseWall_C">();
    }
    inline UClass* EngramEntry_GreenhouseSlopedWall_Right_C()
    {
        return GetStaticClassImpl<"EngramEntry_GreenhouseSlopedWall_Right_C">();
    }
    inline UClass* EngramEntry_GreenhouseSlopedWall_Left_C()
    {
        return GetStaticClassImpl<"EngramEntry_GreenhouseSlopedWall_Left_C">();
    }
    inline UClass* EngramEntry_GreenhouseRoof_C()
    {
        return GetStaticClassImpl<"EngramEntry_GreenhouseRoof_C">();
    }
    inline UClass* EngramEntry_GreenhouseDoor_C()
    {
        return GetStaticClassImpl<"EngramEntry_GreenhouseDoor_C">();
    }
    inline UClass* EngramEntry_GreenhouseCeiling_C()
    {
        return GetStaticClassImpl<"EngramEntry_GreenhouseCeiling_C">();
    }
    inline UClass* EngramEntry_Gravestone_C()
    {
        return GetStaticClassImpl<"EngramEntry_Gravestone_C">();
    }
    inline UClass* EngramEntry_GrapplingHook_C()
    {
        return GetStaticClassImpl<"EngramEntry_GrapplingHook_C">();
    }
    inline UClass* EngramEntry_GPS_C()
    {
        return GetStaticClassImpl<"EngramEntry_GPS_C">();
    }
    inline UClass* EngramEntry_GhillieShirt_C()
    {
        return GetStaticClassImpl<"EngramEntry_GhillieShirt_C">();
    }
    inline UClass* EngramEntry_GhilliePants_C()
    {
        return GetStaticClassImpl<"EngramEntry_GhilliePants_C">();
    }
    inline UClass* EngramEntry_GhillieHelmet_C()
    {
        return GetStaticClassImpl<"EngramEntry_GhillieHelmet_C">();
    }
    inline UClass* EngramEntry_GhillieGloves_C()
    {
        return GetStaticClassImpl<"EngramEntry_GhillieGloves_C">();
    }
    inline UClass* EngramEntry_GhillieBoots_C()
    {
        return GetStaticClassImpl<"EngramEntry_GhillieBoots_C">();
    }
    inline UClass* EngramEntry_GeopolymerPillar_C()
    {
        return GetStaticClassImpl<"EngramEntry_GeopolymerPillar_C">();
    }
    inline UClass* EngramEntry_GeopolymerFloor_C()
    {
        return GetStaticClassImpl<"EngramEntry_GeopolymerFloor_C">();
    }
    inline UClass* EngramEntry_GasMask_C()
    {
        return GetStaticClassImpl<"EngramEntry_GasMask_C">();
    }
    inline UClass* EngramEntry_GasGrenade_C()
    {
        return GetStaticClassImpl<"EngramEntry_GasGrenade_C">();
    }
    inline UClass* EngramEntry_FurShirt_C()
    {
        return GetStaticClassImpl<"EngramEntry_FurShirt_C">();
    }
    inline UClass* EngramEntry_FurPants_C()
    {
        return GetStaticClassImpl<"EngramEntry_FurPants_C">();
    }
    inline UClass* EngramEntry_Furniture_WoodTable_C()
    {
        return GetStaticClassImpl<"EngramEntry_Furniture_WoodTable_C">();
    }
    inline UClass* EngramEntry_FurHelmet_C()
    {
        return GetStaticClassImpl<"EngramEntry_FurHelmet_C">();
    }
    inline UClass* EngramEntry_FurGloves_C()
    {
        return GetStaticClassImpl<"EngramEntry_FurGloves_C">();
    }
    inline UClass* EngramEntry_FurBoots_C()
    {
        return GetStaticClassImpl<"EngramEntry_FurBoots_C">();
    }
    inline UClass* EngramEntry_Forge_C()
    {
        return GetStaticClassImpl<"EngramEntry_Forge_C">();
    }
    inline UClass* EngramEntry_Flashlight_C()
    {
        return GetStaticClassImpl<"EngramEntry_Flashlight_C">();
    }
    inline UClass* EngramEntry_FlareLauncher_C()
    {
        return GetStaticClassImpl<"EngramEntry_FlareLauncher_C">();
    }
    inline UClass* EngramEntry_Flag_C()
    {
        return GetStaticClassImpl<"EngramEntry_Flag_C">();
    }
    inline UClass* EngramEntry_FishingRod_C()
    {
        return GetStaticClassImpl<"EngramEntry_FishingRod_C">();
    }
    inline UClass* EngramEntry_Fireplace_C()
    {
        return GetStaticClassImpl<"EngramEntry_Fireplace_C">();
    }
    inline UClass* EngramEntry_FeedingTrough_C()
    {
        return GetStaticClassImpl<"EngramEntry_FeedingTrough_C">();
    }
    inline UClass* EngramEntry_Fabricator_C()
    {
        return GetStaticClassImpl<"EngramEntry_Fabricator_C">();
    }
    inline UClass* EngramEntry_ElevatorTrack_C()
    {
        return GetStaticClassImpl<"EngramEntry_ElevatorTrack_C">();
    }
    inline UClass* EngramEntry_ElevatorPlatformSmall_C()
    {
        return GetStaticClassImpl<"EngramEntry_ElevatorPlatformSmall_C">();
    }
    inline UClass* EngramEntry_ElevatorPlatformMedium_C()
    {
        return GetStaticClassImpl<"EngramEntry_ElevatorPlatformMedium_C">();
    }
    inline UClass* EngramEntry_ElevatorPlatformLarge_C()
    {
        return GetStaticClassImpl<"EngramEntry_ElevatorPlatformLarge_C">();
    }
    inline UClass* EngramEntry_Electronics_C()
    {
        return GetStaticClassImpl<"EngramEntry_Electronics_C">();
    }
    inline UClass* EngramEntry_ElectricProd_C()
    {
        return GetStaticClassImpl<"EngramEntry_ElectricProd_C">();
    }
    inline UClass* EngramEntry_DodoSail_C()
    {
        return GetStaticClassImpl<"EngramEntry_DodoSail_C">();
    }
    inline UClass* EngramEntry_CureLow_C()
    {
        return GetStaticClassImpl<"EngramEntry_CureLow_C">();
    }
    inline UClass* EngramEntry_Crossbow_C()
    {
        return GetStaticClassImpl<"EngramEntry_Crossbow_C">();
    }
    inline UClass* EngramEntry_CropPlot_Small_C()
    {
        return GetStaticClassImpl<"EngramEntry_CropPlot_Small_C">();
    }
    inline UClass* EngramEntry_CropPlot_Medium_C()
    {
        return GetStaticClassImpl<"EngramEntry_CropPlot_Medium_C">();
    }
    inline UClass* EngramEntry_CropPlot_Large_C()
    {
        return GetStaticClassImpl<"EngramEntry_CropPlot_Large_C">();
    }
    inline UClass* EngramEntry_CookingPot_C()
    {
        return GetStaticClassImpl<"EngramEntry_CookingPot_C">();
    }
    inline UClass* EngramEntry_CompoundBow_C()
    {
        return GetStaticClassImpl<"EngramEntry_CompoundBow_C">();
    }
    inline UClass* EngramEntry_CompoundArrow_C()
    {
        return GetStaticClassImpl<"EngramEntry_CompoundArrow_C">();
    }
    inline UClass* EngramEntry_CompostBin_C()
    {
        return GetStaticClassImpl<"EngramEntry_CompostBin_C">();
    }
    inline UClass* EngramEntry_ClothShirt_C()
    {
        return GetStaticClassImpl<"EngramEntry_ClothShirt_C">();
    }
    inline UClass* EngramEntry_ClothPants_C()
    {
        return GetStaticClassImpl<"EngramEntry_ClothPants_C">();
    }
    inline UClass* EngramEntry_ClothHelmet_C()
    {
        return GetStaticClassImpl<"EngramEntry_ClothHelmet_C">();
    }
    inline UClass* EngramEntry_ClothGloves_C()
    {
        return GetStaticClassImpl<"EngramEntry_ClothGloves_C">();
    }
    inline UClass* EngramEntry_ClothBoots_C()
    {
        return GetStaticClassImpl<"EngramEntry_ClothBoots_C">();
    }
    inline UClass* EngramEntry_ChitinShirt_C()
    {
        return GetStaticClassImpl<"EngramEntry_ChitinShirt_C">();
    }
    inline UClass* EngramEntry_ChitinPaste_C()
    {
        return GetStaticClassImpl<"EngramEntry_ChitinPaste_C">();
    }
    inline UClass* EngramEntry_ChitinPants_C()
    {
        return GetStaticClassImpl<"EngramEntry_ChitinPants_C">();
    }
    inline UClass* EngramEntry_ChitinHelmet_C()
    {
        return GetStaticClassImpl<"EngramEntry_ChitinHelmet_C">();
    }
    inline UClass* EngramEntry_ChitinGloves_C()
    {
        return GetStaticClassImpl<"EngramEntry_ChitinGloves_C">();
    }
    inline UClass* EngramEntry_ChitinBoots_C()
    {
        return GetStaticClassImpl<"EngramEntry_ChitinBoots_C">();
    }
    inline UClass* EngramEntry_ChemBench_C()
    {
        return GetStaticClassImpl<"EngramEntry_ChemBench_C">();
    }
    inline UClass* EngramEntry_ChainBola_C()
    {
        return GetStaticClassImpl<"EngramEntry_ChainBola_C">();
    }
    inline UClass* EngramEntry_CatapultTurret_C()
    {
        return GetStaticClassImpl<"EngramEntry_CatapultTurret_C">();
    }
    inline UClass* EngramEntry_Canteen_C()
    {
        return GetStaticClassImpl<"EngramEntry_Canteen_C">();
    }
    inline UClass* EngramEntry_CannonBall_C()
    {
        return GetStaticClassImpl<"EngramEntry_CannonBall_C">();
    }
    inline UClass* EngramEntry_Cannon_C()
    {
        return GetStaticClassImpl<"EngramEntry_Cannon_C">();
    }
    inline UClass* EngramEntry_Campfire_C()
    {
        return GetStaticClassImpl<"EngramEntry_Campfire_C">();
    }
    inline UClass* EngramEntry_C4Ammo_C()
    {
        return GetStaticClassImpl<"EngramEntry_C4Ammo_C">();
    }
    inline UClass* EngramEntry_BugRepel_C()
    {
        return GetStaticClassImpl<"EngramEntry_BugRepel_C">();
    }
    inline UClass* EngramEntry_Bow_C()
    {
        return GetStaticClassImpl<"EngramEntry_Bow_C">();
    }
    inline UClass* EngramEntry_Bookshelf_C()
    {
        return GetStaticClassImpl<"EngramEntry_Bookshelf_C">();
    }
    inline UClass* EngramEntry_Bola_C()
    {
        return GetStaticClassImpl<"EngramEntry_Bola_C">();
    }
    inline UClass* EngramEntry_BloodExtractor_C()
    {
        return GetStaticClassImpl<"EngramEntry_BloodExtractor_C">();
    }
    inline UClass* EngramEntry_Bit_Metal_C()
    {
        return GetStaticClassImpl<"EngramEntry_Bit_Metal_C">();
    }
    inline UClass* EngramEntry_Bit_Cultivator_C()
    {
        return GetStaticClassImpl<"EngramEntry_Bit_Cultivator_C">();
    }
    inline UClass* EngramEntry_BeerBarrel_C()
    {
        return GetStaticClassImpl<"EngramEntry_BeerBarrel_C">();
    }
    inline UClass* EngramEntry_Beehive_C()
    {
        return GetStaticClassImpl<"EngramEntry_Beehive_C">();
    }
    inline UClass* EngramEntry_BearTrap_Large_C()
    {
        return GetStaticClassImpl<"EngramEntry_BearTrap_Large_C">();
    }
    inline UClass* EngramEntry_BearTrap_C()
    {
        return GetStaticClassImpl<"EngramEntry_BearTrap_C">();
    }
    inline UClass* EngramEntry_BallistaTurret_C()
    {
        return GetStaticClassImpl<"EngramEntry_BallistaTurret_C">();
    }
    inline UClass* EngramEntry_BallistaArrow_C()
    {
        return GetStaticClassImpl<"EngramEntry_BallistaArrow_C">();
    }
    inline UClass* EngramEntry_ArrowTranq_C()
    {
        return GetStaticClassImpl<"EngramEntry_ArrowTranq_C">();
    }
    inline UClass* EngramEntry_ArrowToxin_C()
    {
        return GetStaticClassImpl<"EngramEntry_ArrowToxin_C">();
    }
    inline UClass* EngramEntry_ArrowStone_C()
    {
        return GetStaticClassImpl<"EngramEntry_ArrowStone_C">();
    }
    inline UClass* EngramEntry_ArrowDodo_C()
    {
        return GetStaticClassImpl<"EngramEntry_ArrowDodo_C">();
    }
    inline UClass* EngramEntry_AnvilBench_C()
    {
        return GetStaticClassImpl<"EngramEntry_AnvilBench_C">();
    }
    inline UClass* EngramEntry_AlarmTrap_C()
    {
        return GetStaticClassImpl<"EngramEntry_AlarmTrap_C">();
    }
    inline UClass* EngramEntry_AlarmClock_C()
    {
        return GetStaticClassImpl<"EngramEntry_AlarmClock_C">();
    }
    inline UClass* EngramEntry_AirConditioner_C()
    {
        return GetStaticClassImpl<"EngramEntry_AirConditioner_C">();
    }
    inline UClass* EngramEntry_AggroTranqDart_C()
    {
        return GetStaticClassImpl<"EngramEntry_AggroTranqDart_C">();
    }
    inline UClass* EngramEntry_AdvancedSniperBullet_C()
    {
        return GetStaticClassImpl<"EngramEntry_AdvancedSniperBullet_C">();
    }
    inline UClass* EngramEntry_AdvancedRifleBullet_C()
    {
        return GetStaticClassImpl<"EngramEntry_AdvancedRifleBullet_C">();
    }
    inline UClass* EngramEntry_AdvancedBullet_C()
    {
        return GetStaticClassImpl<"EngramEntry_AdvancedBullet_C">();
    }
    inline UClass* BASE_ExtraResourcesContainer_C()
    {
        return GetStaticClassImpl<"BASE_ExtraResourcesContainer_C">();
    }
    inline UClass* DinoOrderEmitter_MoveTo_C()
    {
        return GetStaticClassImpl<"DinoOrderEmitter_MoveTo_C">();
    }
    inline UClass* DinoOrderEmitter_AttackTarget_C()
    {
        return GetStaticClassImpl<"DinoOrderEmitter_AttackTarget_C">();
    }
    inline UClass* Buff_NoBuild_C()
    {
        return GetStaticClassImpl<"Buff_NoBuild_C">();
    }
    inline UClass* DinoEntry_Moth_C()
    {
        return GetStaticClassImpl<"DinoEntry_Moth_C">();
    }
    inline UClass* MeshFadeOut_Blueprint_Fast_C()
    {
        return GetStaticClassImpl<"MeshFadeOut_Blueprint_Fast_C">();
    }
    inline UClass* DinoEntry_Iguanodon_C()
    {
        return GetStaticClassImpl<"DinoEntry_Iguanodon_C">();
    }
    inline UClass* DinoEntry_Tusoteuthis_C()
    {
        return GetStaticClassImpl<"DinoEntry_Tusoteuthis_C">();
    }
    inline UClass* DinoEntry_Turtle_C()
    {
        return GetStaticClassImpl<"DinoEntry_Turtle_C">();
    }
    inline UClass* DinoEntry_Trilobite_C()
    {
        return GetStaticClassImpl<"DinoEntry_Trilobite_C">();
    }
    inline UClass* DinoEntry_Trike_C()
    {
        return GetStaticClassImpl<"DinoEntry_Trike_C">();
    }
    inline UClass* DinoEntry_Toad_C()
    {
        return GetStaticClassImpl<"DinoEntry_Toad_C">();
    }
    inline UClass* DinoEntry_Titan_C()
    {
        return GetStaticClassImpl<"DinoEntry_Titan_C">();
    }
    inline UClass* DinoEntry_Therizino_C()
    {
        return GetStaticClassImpl<"DinoEntry_Therizino_C">();
    }
    inline UClass* DinoEntry_TerrorBird_C()
    {
        return GetStaticClassImpl<"DinoEntry_TerrorBird_C">();
    }
    inline UClass* DinoEntry_Tapejara_C()
    {
        return GetStaticClassImpl<"DinoEntry_Tapejara_C">();
    }
    inline UClass* DinoEntry_Stego_C()
    {
        return GetStaticClassImpl<"DinoEntry_Stego_C">();
    }
    inline UClass* DinoEntry_Stag_C()
    {
        return GetStaticClassImpl<"DinoEntry_Stag_C">();
    }
    inline UClass* DinoEntry_Spino_C()
    {
        return GetStaticClassImpl<"DinoEntry_Spino_C">();
    }
    inline UClass* DinoEntry_Spider_C()
    {
        return GetStaticClassImpl<"DinoEntry_Spider_C">();
    }
    inline UClass* DinoEntry_Scorp_C()
    {
        return GetStaticClassImpl<"DinoEntry_Scorp_C">();
    }
    inline UClass* DinoEntry_Sarco_C()
    {
        return GetStaticClassImpl<"DinoEntry_Sarco_C">();
    }
    inline UClass* DinoEntry_Salmon_C()
    {
        return GetStaticClassImpl<"DinoEntry_Salmon_C">();
    }
    inline UClass* DinoEntry_Saber_C()
    {
        return GetStaticClassImpl<"DinoEntry_Saber_C">();
    }
    inline UClass* DinoEntry_Rhino_C()
    {
        return GetStaticClassImpl<"DinoEntry_Rhino_C">();
    }
    inline UClass* DinoEntry_Rex_C()
    {
        return GetStaticClassImpl<"DinoEntry_Rex_C">();
    }
    inline UClass* DinoEntry_Raptor_C()
    {
        return GetStaticClassImpl<"DinoEntry_Raptor_C">();
    }
    inline UClass* DinoEntry_Quetz_C()
    {
        return GetStaticClassImpl<"DinoEntry_Quetz_C">();
    }
    inline UClass* DinoEntry_Ptero_C()
    {
        return GetStaticClassImpl<"DinoEntry_Ptero_C">();
    }
    inline UClass* DinoEntry_Plesi_C()
    {
        return GetStaticClassImpl<"DinoEntry_Plesi_C">();
    }
    inline UClass* DinoEntry_Piranha_C()
    {
        return GetStaticClassImpl<"DinoEntry_Piranha_C">();
    }
    inline UClass* DinoEntry_Phio_C()
    {
        return GetStaticClassImpl<"DinoEntry_Phio_C">();
    }
    inline UClass* DinoEntry_Pelagornis_C()
    {
        return GetStaticClassImpl<"DinoEntry_Pelagornis_C">();
    }
    inline UClass* DinoEntry_Pegomastax_C()
    {
        return GetStaticClassImpl<"DinoEntry_Pegomastax_C">();
    }
    inline UClass* DinoEntry_Paracer_C()
    {
        return GetStaticClassImpl<"DinoEntry_Paracer_C">();
    }
    inline UClass* DinoEntry_Para_C()
    {
        return GetStaticClassImpl<"DinoEntry_Para_C">();
    }
    inline UClass* DinoEntry_Pachyrhino_C()
    {
        return GetStaticClassImpl<"DinoEntry_Pachyrhino_C">();
    }
    inline UClass* DinoEntry_Pachy_C()
    {
        return GetStaticClassImpl<"DinoEntry_Pachy_C">();
    }
    inline UClass* DinoEntry_Ovi_C()
    {
        return GetStaticClassImpl<"DinoEntry_Ovi_C">();
    }
    inline UClass* DinoEntry_Moschops_C()
    {
        return GetStaticClassImpl<"DinoEntry_Moschops_C">();
    }
    inline UClass* DinoEntry_Mosa_C()
    {
        return GetStaticClassImpl<"DinoEntry_Mosa_C">();
    }
    inline UClass* DinoEntry_Monkey_C()
    {
        return GetStaticClassImpl<"DinoEntry_Monkey_C">();
    }
    inline UClass* DinoEntry_Megatherium_C()
    {
        return GetStaticClassImpl<"DinoEntry_Megatherium_C">();
    }
    inline UClass* DinoEntry_Megalosaurus_C()
    {
        return GetStaticClassImpl<"DinoEntry_Megalosaurus_C">();
    }
    inline UClass* DinoEntry_Mega_C()
    {
        return GetStaticClassImpl<"DinoEntry_Mega_C">();
    }
    inline UClass* DinoEntry_Manta_C()
    {
        return GetStaticClassImpl<"DinoEntry_Manta_C">();
    }
    inline UClass* DinoEntry_Mammoth_C()
    {
        return GetStaticClassImpl<"DinoEntry_Mammoth_C">();
    }
    inline UClass* DinoEntry_Lystro_C()
    {
        return GetStaticClassImpl<"DinoEntry_Lystro_C">();
    }
    inline UClass* DinoEntry_Liopleur_C()
    {
        return GetStaticClassImpl<"DinoEntry_Liopleur_C">();
    }
    inline UClass* DinoEntry_Leedsichthys_C()
    {
        return GetStaticClassImpl<"DinoEntry_Leedsichthys_C">();
    }
    inline UClass* DinoEntry_Leech_C()
    {
        return GetStaticClassImpl<"DinoEntry_Leech_C">();
    }
    inline UClass* DinoEntry_Kaprosuchus_C()
    {
        return GetStaticClassImpl<"DinoEntry_Kaprosuchus_C">();
    }
    inline UClass* DinoEntry_Kairuku_C()
    {
        return GetStaticClassImpl<"DinoEntry_Kairuku_C">();
    }
    inline UClass* DinoEntry_Jerboa_C()
    {
        return GetStaticClassImpl<"DinoEntry_Jerboa_C">();
    }
    inline UClass* DinoEntry_Gigant_C()
    {
        return GetStaticClassImpl<"DinoEntry_Gigant_C">();
    }
    inline UClass* DinoEntry_Galli_C()
    {
        return GetStaticClassImpl<"DinoEntry_Galli_C">();
    }
    inline UClass* DinoEntry_Euryp_C()
    {
        return GetStaticClassImpl<"DinoEntry_Euryp_C">();
    }
    inline UClass* DinoEntry_Eel_C()
    {
        return GetStaticClassImpl<"DinoEntry_Eel_C">();
    }
    inline UClass* DinoEntry_Dunkle_C()
    {
        return GetStaticClassImpl<"DinoEntry_Dunkle_C">();
    }
    inline UClass* DinoEntry_Dragonfly_C()
    {
        return GetStaticClassImpl<"DinoEntry_Dragonfly_C">();
    }
    inline UClass* DinoEntry_Dolphin_C()
    {
        return GetStaticClassImpl<"DinoEntry_Dolphin_C">();
    }
    inline UClass* DinoEntry_Doed_C()
    {
        return GetStaticClassImpl<"DinoEntry_Doed_C">();
    }
    inline UClass* DinoEntry_Dodo_C()
    {
        return GetStaticClassImpl<"DinoEntry_Dodo_C">();
    }
    inline UClass* DinoEntry_Direwolf_C()
    {
        return GetStaticClassImpl<"DinoEntry_Direwolf_C">();
    }
    inline UClass* DinoEntry_Direbear_C()
    {
        return GetStaticClassImpl<"DinoEntry_Direbear_C">();
    }
    inline UClass* DinoEntry_Diplocaulus_C()
    {
        return GetStaticClassImpl<"DinoEntry_Diplocaulus_C">();
    }
    inline UClass* DinoEntry_Diplo_C()
    {
        return GetStaticClassImpl<"DinoEntry_Diplo_C">();
    }
    inline UClass* DinoEntry_Dimorphodon_C()
    {
        return GetStaticClassImpl<"DinoEntry_Dimorphodon_C">();
    }
    inline UClass* DinoEntry_Dimetro_C()
    {
        return GetStaticClassImpl<"DinoEntry_Dimetro_C">();
    }
    inline UClass* DinoEntry_Dilo_C()
    {
        return GetStaticClassImpl<"DinoEntry_Dilo_C">();
    }
    inline UClass* DinoEntry_Compy_C()
    {
        return GetStaticClassImpl<"DinoEntry_Compy_C">();
    }
    inline UClass* DinoEntry_Coel_C()
    {
        return GetStaticClassImpl<"DinoEntry_Coel_C">();
    }
    inline UClass* DinoEntry_Cnidaria_C()
    {
        return GetStaticClassImpl<"DinoEntry_Cnidaria_C">();
    }
    inline UClass* DinoEntry_Chalico_C()
    {
        return GetStaticClassImpl<"DinoEntry_Chalico_C">();
    }
    inline UClass* DinoEntry_Carno_C()
    {
        return GetStaticClassImpl<"DinoEntry_Carno_C">();
    }
    inline UClass* DinoEntry_Bronto_C()
    {
        return GetStaticClassImpl<"DinoEntry_Bronto_C">();
    }
    inline UClass* DinoEntry_Boa_C()
    {
        return GetStaticClassImpl<"DinoEntry_Boa_C">();
    }
    inline UClass* DinoEntry_Bigfoot_C()
    {
        return GetStaticClassImpl<"DinoEntry_Bigfoot_C">();
    }
    inline UClass* DinoEntry_Beetle_C()
    {
        return GetStaticClassImpl<"DinoEntry_Beetle_C">();
    }
    inline UClass* DinoEntry_Beaver_C()
    {
        return GetStaticClassImpl<"DinoEntry_Beaver_C">();
    }
    inline UClass* DinoEntry_Bat_C()
    {
        return GetStaticClassImpl<"DinoEntry_Bat_C">();
    }
    inline UClass* DinoEntry_Basilo_C()
    {
        return GetStaticClassImpl<"DinoEntry_Basilo_C">();
    }
    inline UClass* DinoEntry_Baryonyx_C()
    {
        return GetStaticClassImpl<"DinoEntry_Baryonyx_C">();
    }
    inline UClass* DinoEntry_Arthro_C()
    {
        return GetStaticClassImpl<"DinoEntry_Arthro_C">();
    }
    inline UClass* DinoEntry_Argent_C()
    {
        return GetStaticClassImpl<"DinoEntry_Argent_C">();
    }
    inline UClass* DinoEntry_Archa_C()
    {
        return GetStaticClassImpl<"DinoEntry_Archa_C">();
    }
    inline UClass* DinoEntry_Ant_C()
    {
        return GetStaticClassImpl<"DinoEntry_Ant_C">();
    }
    inline UClass* DinoEntry_Anky_C()
    {
        return GetStaticClassImpl<"DinoEntry_Anky_C">();
    }
    inline UClass* DinoEntry_Angler_C()
    {
        return GetStaticClassImpl<"DinoEntry_Angler_C">();
    }
    inline UClass* DinoEntry_Ammonite_C()
    {
        return GetStaticClassImpl<"DinoEntry_Ammonite_C">();
    }
    inline UClass* DinoEntry_Allosaurus_C()
    {
        return GetStaticClassImpl<"DinoEntry_Allosaurus_C">();
    }
    inline UClass* DinoEntry_Achatina_C()
    {
        return GetStaticClassImpl<"DinoEntry_Achatina_C">();
    }
    inline UClass* BASE_PrimalGameData_BP_C()
    {
        return GetStaticClassImpl<"BASE_PrimalGameData_BP_C">();
    }
    inline UClass* PrimalGameData_BP_C()
    {
        return GetStaticClassImpl<"PrimalGameData_BP_C">();
    }
    inline UClass* DinoSettings_Carnivore_Medium_C()
    {
        return GetStaticClassImpl<"DinoSettings_Carnivore_Medium_C">();
    }
    inline UClass* Dolphin_AIController_BP_C()
    {
        return GetStaticClassImpl<"Dolphin_AIController_BP_C">();
    }
    inline UClass* DinoSettings_Carnivore_Medium_Dolphin_C()
    {
        return GetStaticClassImpl<"DinoSettings_Carnivore_Medium_Dolphin_C">();
    }
    inline UClass* DinoTamedInventoryComponent_Dolphin_C()
    {
        return GetStaticClassImpl<"DinoTamedInventoryComponent_Dolphin_C">();
    }
    inline UClass* DinoColorSet_Dolphin_C()
    {
        return GetStaticClassImpl<"DinoColorSet_Dolphin_C">();
    }
    inline UClass* DinoCharacterStatusComponent_BP_Dolphin_C()
    {
        return GetStaticClassImpl<"DinoCharacterStatusComponent_BP_Dolphin_C">();
    }
    inline UClass* Dolphin_Anim_BP_C()
    {
        return GetStaticClassImpl<"Dolphin_Anim_BP_C">();
    }
    inline UClass* Dolphin_Character_BP_C()
    {
        return GetStaticClassImpl<"Dolphin_Character_BP_C">();
    }
    inline UClass* ElectricStun_Impacts_C()
    {
        return GetStaticClassImpl<"ElectricStun_Impacts_C">();
    }
    inline UClass* DmgType_Melee_Dino_Carnivore_Small_Flyer_MorePrime_C()
    {
        return GetStaticClassImpl<"DmgType_Melee_Dino_Carnivore_Small_Flyer_MorePrime_C">();
    }
    inline UClass* DinoDeathHarvestingComponent_Huge_C()
    {
        return GetStaticClassImpl<"DinoDeathHarvestingComponent_Huge_C">();
    }
    inline UClass* Phiomia_AIController_BP_C()
    {
        return GetStaticClassImpl<"Phiomia_AIController_BP_C">();
    }
    inline UClass* PrimalItemConsumable_DinoPoopMedium_C()
    {
        return GetStaticClassImpl<"PrimalItemConsumable_DinoPoopMedium_C">();
    }
    inline UClass* DinoTamedInventoryComponent_Phiomia_C()
    {
        return GetStaticClassImpl<"DinoTamedInventoryComponent_Phiomia_C">();
    }
    inline UClass* DinoDeathHarvestingComponent_Huge_MoreMeat_C()
    {
        return GetStaticClassImpl<"DinoDeathHarvestingComponent_Huge_MoreMeat_C">();
    }
    inline UClass* DinoColorSet_Phiomia_C()
    {
        return GetStaticClassImpl<"DinoColorSet_Phiomia_C">();
    }
    inline UClass* DinoCharacterStatusComponent_BP_Phiomia_C()
    {
        return GetStaticClassImpl<"DinoCharacterStatusComponent_BP_Phiomia_C">();
    }
    inline UClass* PhiomiaAnimBlueprint_C()
    {
        return GetStaticClassImpl<"PhiomiaAnimBlueprint_C">();
    }
    inline UClass* Phiomia_Character_BP_C()
    {
        return GetStaticClassImpl<"Phiomia_Character_BP_C">();
    }
    inline UClass* Cnidaria_AIController_BP_C()
    {
        return GetStaticClassImpl<"Cnidaria_AIController_BP_C">();
    }
    inline UClass* DinoDeathHarvestingComponent_Cnidaria_Poison_C()
    {
        return GetStaticClassImpl<"DinoDeathHarvestingComponent_Cnidaria_Poison_C">();
    }
    inline UClass* DinoCharacterStatusComponent_BP_Cnidaria_C()
    {
        return GetStaticClassImpl<"DinoCharacterStatusComponent_BP_Cnidaria_C">();
    }
    inline UClass* CnidariaAnimBlueprint_C()
    {
        return GetStaticClassImpl<"CnidariaAnimBlueprint_C">();
    }
    inline UClass* Cnidaria_Character_BP_C()
    {
        return GetStaticClassImpl<"Cnidaria_Character_BP_C">();
    }
    inline UClass* Para_AI_Blueprint_C()
    {
        return GetStaticClassImpl<"Para_AI_Blueprint_C">();
    }
    inline UClass* DinoSettings_Herbivore_Medium_Para_C()
    {
        return GetStaticClassImpl<"DinoSettings_Herbivore_Medium_Para_C">();
    }
    inline UClass* DinoTamedInventoryComponent_Para_C()
    {
        return GetStaticClassImpl<"DinoTamedInventoryComponent_Para_C">();
    }
    inline UClass* DinoDeathHarvestingComponent_Medium_MoreHide_C()
    {
        return GetStaticClassImpl<"DinoDeathHarvestingComponent_Medium_MoreHide_C">();
    }
    inline UClass* DinoColorSet_Para_C()
    {
        return GetStaticClassImpl<"DinoColorSet_Para_C">();
    }
    inline UClass* DinoCharacterStatusComponent_BP_Para_C()
    {
        return GetStaticClassImpl<"DinoCharacterStatusComponent_BP_Para_C">();
    }
    inline UClass* Para_Anim_Blueprint_C()
    {
        return GetStaticClassImpl<"Para_Anim_Blueprint_C">();
    }
    inline UClass* Para_Character_BP_C()
    {
        return GetStaticClassImpl<"Para_Character_BP_C">();
    }
    inline UClass* ExplosionCameraShake_C()
    {
        return GetStaticClassImpl<"ExplosionCameraShake_C">();
    }
    inline UClass* ExplosionEmitter_C()
    {
        return GetStaticClassImpl<"ExplosionEmitter_C">();
    }
    inline UClass* DmgType_Melee_Dino_Carnivore_Small_DiloSpit_C()
    {
        return GetStaticClassImpl<"DmgType_Melee_Dino_Carnivore_Small_DiloSpit_C">();
    }
    inline UClass* DiloSpitImpactEmitter_C()
    {
        return GetStaticClassImpl<"DiloSpitImpactEmitter_C">();
    }
    inline UClass* DiloSpit_TrailEmitter_C()
    {
        return GetStaticClassImpl<"DiloSpit_TrailEmitter_C">();
    }
    inline UClass* Dilo_AIController_BP_C()
    {
        return GetStaticClassImpl<"Dilo_AIController_BP_C">();
    }
    inline UClass* DinoTamedInventoryComponent_Dilo_C()
    {
        return GetStaticClassImpl<"DinoTamedInventoryComponent_Dilo_C">();
    }
    inline UClass* DinoDropInventoryComponent_Carnivore_Small_Dilo_C()
    {
        return GetStaticClassImpl<"DinoDropInventoryComponent_Carnivore_Small_Dilo_C">();
    }
    inline UClass* DinoColorSet_Dilo_C()
    {
        return GetStaticClassImpl<"DinoColorSet_Dilo_C">();
    }
    inline UClass* DinoCharacterStatusComponent_BP_Dilo_C()
    {
        return GetStaticClassImpl<"DinoCharacterStatusComponent_BP_Dilo_C">();
    }
    inline UClass* DinoAttackStateRanged_Leading_C()
    {
        return GetStaticClassImpl<"DinoAttackStateRanged_Leading_C">();
    }
    inline UClass* ProjDilo_C()
    {
        return GetStaticClassImpl<"ProjDilo_C">();
    }
    inline UClass* Dilo_AnimBlueprint_C()
    {
        return GetStaticClassImpl<"Dilo_AnimBlueprint_C">();
    }
    inline UClass* Dilo_Character_BP_C()
    {
        return GetStaticClassImpl<"Dilo_Character_BP_C">();
    }
    inline UClass* Note_Blueprint_MatineeTest_C()
    {
        return GetStaticClassImpl<"Note_Blueprint_MatineeTest_C">();
    }
    inline UClass* SupplyCrateEmitter_C()
    {
        return GetStaticClassImpl<"SupplyCrateEmitter_C">();
    }
    inline UClass* SupplyCrateSpawnInEmitter_C()
    {
        return GetStaticClassImpl<"SupplyCrateSpawnInEmitter_C">();
    }
    inline UClass* SupplyCrateSpawnInEmitter45_C()
    {
        return GetStaticClassImpl<"SupplyCrateSpawnInEmitter45_C">();
    }
    inline UClass* SupplyCrateEmitter45_C()
    {
        return GetStaticClassImpl<"SupplyCrateEmitter45_C">();
    }
    inline UClass* SupplyCrateBaseBP_C()
    {
        return GetStaticClassImpl<"SupplyCrateBaseBP_C">();
    }
    inline UClass* SupplyCrate_Level45_C()
    {
        return GetStaticClassImpl<"SupplyCrate_Level45_C">();
    }
    inline UClass* SupplyCrate_Level45_Double_C()
    {
        return GetStaticClassImpl<"SupplyCrate_Level45_Double_C">();
    }
    inline UClass* FPVWeaponAnimBP_Base_Carrying_C()
    {
        return GetStaticClassImpl<"FPVWeaponAnimBP_Base_Carrying_C">();
    }
    inline UClass* WeaponFistsAnimBlueprint_C()
    {
        return GetStaticClassImpl<"WeaponFistsAnimBlueprint_C">();
    }
    inline UClass* DmgType_Melee_Dino_Carnivore_Medium_Pearls_C()
    {
        return GetStaticClassImpl<"DmgType_Melee_Dino_Carnivore_Medium_Pearls_C">();
    }
    inline UClass* SiliconHarvestComponent_C()
    {
        return GetStaticClassImpl<"SiliconHarvestComponent_C">();
    }
    inline UClass* JungleAmbientSound_Blueprint_Small_C()
    {
        return GetStaticClassImpl<"JungleAmbientSound_Blueprint_Small_C">();
    }
    inline UClass* OysterHarvestImpactEmitter_C()
    {
        return GetStaticClassImpl<"OysterHarvestImpactEmitter_C">();
    }
    inline UClass* RockFadeOut_Blueprint_C()
    {
        return GetStaticClassImpl<"RockFadeOut_Blueprint_C">();
    }
    inline UClass* TallPlantFalling_Blueprint_C()
    {
        return GetStaticClassImpl<"TallPlantFalling_Blueprint_C">();
    }
    inline UClass* DmgType_Melee_Dino_Carnivore_MineWood_C()
    {
        return GetStaticClassImpl<"DmgType_Melee_Dino_Carnivore_MineWood_C">();
    }
    inline UClass* WoodHarvestComponent_C()
    {
        return GetStaticClassImpl<"WoodHarvestComponent_C">();
    }
    inline UClass* WoodHarvestComponent_ExtraWood_C()
    {
        return GetStaticClassImpl<"WoodHarvestComponent_ExtraWood_C">();
    }
    inline UClass* WoodHarvestComponent_LessWood_C()
    {
        return GetStaticClassImpl<"WoodHarvestComponent_LessWood_C">();
    }
    inline UClass* RockHarvestComponent_C()
    {
        return GetStaticClassImpl<"RockHarvestComponent_C">();
    }
    inline UClass* BeachAmbientSound_Blueprint_Small_C()
    {
        return GetStaticClassImpl<"BeachAmbientSound_Blueprint_Small_C">();
    }
    inline UClass* BeachAmbientSound_Blueprint_Medium_C()
    {
        return GetStaticClassImpl<"BeachAmbientSound_Blueprint_Medium_C">();
    }
    inline UClass* TreeFalling_Blueprint_C()
    {
        return GetStaticClassImpl<"TreeFalling_Blueprint_C">();
    }
    inline UClass* TreeHarvestImpactEmitter_C()
    {
        return GetStaticClassImpl<"TreeHarvestImpactEmitter_C">();
    }
    inline UClass* PickupRockHarvestEmitter_C()
    {
        return GetStaticClassImpl<"PickupRockHarvestEmitter_C">();
    }
    inline UClass* DmgType_Melee_Dino_Herbivore_Medium_C()
    {
        return GetStaticClassImpl<"DmgType_Melee_Dino_Herbivore_Medium_C">();
    }
    inline UClass* DmgType_Melee_Dino_Herbivore_Medium_MoreWood_C()
    {
        return GetStaticClassImpl<"DmgType_Melee_Dino_Herbivore_Medium_MoreWood_C">();
    }
    inline UClass* DmgType_Melee_Dino_Herbivore_Medium_MineWood_C()
    {
        return GetStaticClassImpl<"DmgType_Melee_Dino_Herbivore_Medium_MineWood_C">();
    }
    inline UClass* DmgType_Melee_Dino_Herbivore_Medium_SuperMineStone_C()
    {
        return GetStaticClassImpl<"DmgType_Melee_Dino_Herbivore_Medium_SuperMineStone_C">();
    }
    inline UClass* StoneHarvestComponent_C()
    {
        return GetStaticClassImpl<"StoneHarvestComponent_C">();
    }
    inline UClass* StoneHarvestComponent_LowHealth_C()
    {
        return GetStaticClassImpl<"StoneHarvestComponent_LowHealth_C">();
    }
    inline UClass* StoneHarvestComponent_RequiresMetal_C()
    {
        return GetStaticClassImpl<"StoneHarvestComponent_RequiresMetal_C">();
    }
    inline UClass* DmgType_Melee_DmgStone_ExtraHarvest_C()
    {
        return GetStaticClassImpl<"DmgType_Melee_DmgStone_ExtraHarvest_C">();
    }
    inline UClass* DmgType_Melee_Dino_Herbivore_Medium_MineStone_C()
    {
        return GetStaticClassImpl<"DmgType_Melee_Dino_Herbivore_Medium_MineStone_C">();
    }
    inline UClass* OilHarvestComponent_C()
    {
        return GetStaticClassImpl<"OilHarvestComponent_C">();
    }
    inline UClass* StoneHarvestImpactEmitter_C()
    {
        return GetStaticClassImpl<"StoneHarvestImpactEmitter_C">();
    }
    inline UClass* PrimalItemConsumable_Narcotic_C()
    {
        return GetStaticClassImpl<"PrimalItemConsumable_Narcotic_C">();
    }
    inline UClass* PrimalItemResource_Polymer_Organic_C()
    {
        return GetStaticClassImpl<"PrimalItemResource_Polymer_Organic_C">();
    }
    inline UClass* PrimalItemResource_RareFlower_C()
    {
        return GetStaticClassImpl<"PrimalItemResource_RareFlower_C">();
    }
    inline UClass* PrimalItemResource_RareMushroom_C()
    {
        return GetStaticClassImpl<"PrimalItemResource_RareMushroom_C">();
    }
    inline UClass* PrimalItemConsumable_Fertilizer_Compost_C()
    {
        return GetStaticClassImpl<"PrimalItemConsumable_Fertilizer_Compost_C">();
    }
    inline UClass* PrimalItem_DodoFeather_C()
    {
        return GetStaticClassImpl<"PrimalItem_DodoFeather_C">();
    }
    inline UClass* PrimalItemConsumable_PotentDust_C()
    {
        return GetStaticClassImpl<"PrimalItemConsumable_PotentDust_C">();
    }
    inline UClass* PrimalItemResource_ApexDrop_Argentavis_C()
    {
        return GetStaticClassImpl<"PrimalItemResource_ApexDrop_Argentavis_C">();
    }
    inline UClass* PrimalItem_WeaponCompass_C()
    {
        return GetStaticClassImpl<"PrimalItem_WeaponCompass_C">();
    }
    inline UClass* PrimalItem_WeaponBasePick_C()
    {
        return GetStaticClassImpl<"PrimalItem_WeaponBasePick_C">();
    }
    inline UClass* PrimalItem_WeaponStonePick_C()
    {
        return GetStaticClassImpl<"PrimalItem_WeaponStonePick_C">();
    }
    inline UClass* PrimalItem_WeaponTorch_C()
    {
        return GetStaticClassImpl<"PrimalItem_WeaponTorch_C">();
    }
    inline UClass* PrimalItem_Fist_C()
    {
        return GetStaticClassImpl<"PrimalItem_Fist_C">();
    }
    inline UClass* SupplyCrateSpawnInEmitter25_C()
    {
        return GetStaticClassImpl<"SupplyCrateSpawnInEmitter25_C">();
    }
    inline UClass* SupplyCrateEmitter25_C()
    {
        return GetStaticClassImpl<"SupplyCrateEmitter25_C">();
    }
    inline UClass* SupplyCrate_Level25_C()
    {
        return GetStaticClassImpl<"SupplyCrate_Level25_C">();
    }
    inline UClass* SupplyCrate_Level03_C()
    {
        return GetStaticClassImpl<"SupplyCrate_Level03_C">();
    }
    inline UClass* SupplyCrateSpawnInEmitter15_C()
    {
        return GetStaticClassImpl<"SupplyCrateSpawnInEmitter15_C">();
    }
    inline UClass* SupplyCrateEmitter15_C()
    {
        return GetStaticClassImpl<"SupplyCrateEmitter15_C">();
    }
    inline UClass* SupplyCrate_Level15_C()
    {
        return GetStaticClassImpl<"SupplyCrate_Level15_C">();
    }
    inline UClass* TameBase_C()
    {
        return GetStaticClassImpl<"TameBase_C">();
    }
    inline UClass* TameDilo_C()
    {
        return GetStaticClassImpl<"TameDilo_C">();
    }
    inline UClass* SupplyCrateSpawnInEmitter35_C()
    {
        return GetStaticClassImpl<"SupplyCrateSpawnInEmitter35_C">();
    }
    inline UClass* SupplyCrateEmitter35_C()
    {
        return GetStaticClassImpl<"SupplyCrateEmitter35_C">();
    }
    inline UClass* SupplyCrate_Level35_C()
    {
        return GetStaticClassImpl<"SupplyCrate_Level35_C">();
    }
    inline UClass* SupplyCrate_Level35_Double_C()
    {
        return GetStaticClassImpl<"SupplyCrate_Level35_Double_C">();
    }
    inline UClass* DmgType_Bola_C()
    {
        return GetStaticClassImpl<"DmgType_Bola_C">();
    }
    inline UClass* BolaImpactEmitter_C()
    {
        return GetStaticClassImpl<"BolaImpactEmitter_C">();
    }
    inline UClass* ProjBola_C()
    {
        return GetStaticClassImpl<"ProjBola_C">();
    }
    inline UClass* DmgType_Melee_TorpPoison_DmgMetal_RaidDino_C()
    {
        return GetStaticClassImpl<"DmgType_Melee_TorpPoison_DmgMetal_RaidDino_C">();
    }
    inline UClass* StructureSettings_BrokenByPlasma_C()
    {
        return GetStaticClassImpl<"StructureSettings_BrokenByPlasma_C">();
    }
    inline UClass* Tek_Floor_Placement_Emitter_C()
    {
        return GetStaticClassImpl<"Tek_Floor_Placement_Emitter_C">();
    }
    inline UClass* WeapRifle_FireCameraShake_C()
    {
        return GetStaticClassImpl<"WeapRifle_FireCameraShake_C">();
    }
    inline UClass* FPVReloadCameraShake_C()
    {
        return GetStaticClassImpl<"FPVReloadCameraShake_C">();
    }
    inline UClass* RocketTrailEmitter_C()
    {
        return GetStaticClassImpl<"RocketTrailEmitter_C">();
    }
    inline UClass* WeapPistol_FireCameraShake_C()
    {
        return GetStaticClassImpl<"WeapPistol_FireCameraShake_C">();
    }
    inline UClass* ProjRocket_C()
    {
        return GetStaticClassImpl<"ProjRocket_C">();
    }
    inline UClass* PrimalInventoryBP_StorageBox_Base_C()
    {
        return GetStaticClassImpl<"PrimalInventoryBP_StorageBox_Base_C">();
    }
    inline UClass* ThatchFloorPlacementEmitter_C()
    {
        return GetStaticClassImpl<"ThatchFloorPlacementEmitter_C">();
    }
    inline UClass* Floor_Base_SM_C()
    {
        return GetStaticClassImpl<"Floor_Base_SM_C">();
    }
    inline UClass* Stone_Floor_Placement_Emitter_C()
    {
        return GetStaticClassImpl<"Stone_Floor_Placement_Emitter_C">();
    }
    inline UClass* StructureSettings_BrokenByMetal_C()
    {
        return GetStaticClassImpl<"StructureSettings_BrokenByMetal_C">();
    }
    inline UClass* PrimalInventoryBP_Mailbox_C()
    {
        return GetStaticClassImpl<"PrimalInventoryBP_Mailbox_C">();
    }
    inline UClass* MailboxBaseStructure_C()
    {
        return GetStaticClassImpl<"MailboxBaseStructure_C">();
    }
    inline UClass* Mailbox_C()
    {
        return GetStaticClassImpl<"Mailbox_C">();
    }
    inline UClass* Floor_Stone_C()
    {
        return GetStaticClassImpl<"Floor_Stone_C">();
    }
    inline UClass* WeapRocketLauncher_C()
    {
        return GetStaticClassImpl<"WeapRocketLauncher_C">();
    }
    inline UClass* WeapMachinedPistol_C()
    {
        return GetStaticClassImpl<"WeapMachinedPistol_C">();
    }
    inline UClass* Floor_Tek_C()
    {
        return GetStaticClassImpl<"Floor_Tek_C">();
    }
    inline UClass* WeapBola_C()
    {
        return GetStaticClassImpl<"WeapBola_C">();
    }
    inline UClass* PrimalItem_WeaponPike_C()
    {
        return GetStaticClassImpl<"PrimalItem_WeaponPike_C">();
    }
    inline UClass* PrimalItemArmor_Gallimimus_C()
    {
        return GetStaticClassImpl<"PrimalItemArmor_Gallimimus_C">();
    }
    inline UClass* HuntBase_C()
    {
        return GetStaticClassImpl<"HuntBase_C">();
    }
    inline UClass* DataListEntryWidgetPrimalItem_Dialog_C()
    {
        return GetStaticClassImpl<"DataListEntryWidgetPrimalItem_Dialog_C">();
    }
    inline UClass* GivenPursuitItemDialog_C()
    {
        return GetStaticClassImpl<"GivenPursuitItemDialog_C">();
    }
    inline UClass* HuntRaptor_C()
    {
        return GetStaticClassImpl<"HuntRaptor_C">();
    }
    inline UClass* SupplyCrate_Level25_Double_C()
    {
        return GetStaticClassImpl<"SupplyCrate_Level25_Double_C">();
    }
    inline UClass* PrimalItem_TransferTicket_Base_C()
    {
        return GetStaticClassImpl<"PrimalItem_TransferTicket_Base_C">();
    }
    inline UClass* PrimalItem_TransferTicket_Free_C()
    {
        return GetStaticClassImpl<"PrimalItem_TransferTicket_Free_C">();
    }
    inline UClass* StoreEntryWidget_Large_C()
    {
        return GetStaticClassImpl<"StoreEntryWidget_Large_C">();
    }
    inline UClass* StoreEntryWidget_Small_UseItem_C()
    {
        return GetStaticClassImpl<"StoreEntryWidget_Small_UseItem_C">();
    }
    inline UClass* StoreEntryWidget_Medium_C()
    {
        return GetStaticClassImpl<"StoreEntryWidget_Medium_C">();
    }
    inline UClass* StoreEntryWidget_Small_C()
    {
        return GetStaticClassImpl<"StoreEntryWidget_Small_C">();
    }
    inline UClass* StorePromoCodeEntry_C()
    {
        return GetStaticClassImpl<"StorePromoCodeEntry_C">();
    }
    inline UClass* InventoryFilterItem_C()
    {
        return GetStaticClassImpl<"InventoryFilterItem_C">();
    }
}
