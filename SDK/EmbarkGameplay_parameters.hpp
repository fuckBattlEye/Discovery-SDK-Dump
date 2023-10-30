#pragma once

//   SDK By:if

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../pch.h"

namespace sdk
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function EmbarkGameplay.EmbarkCheatManager.PrintDebug_AbilitySystem
struct UEmbarkCheatManager_PrintDebug_AbilitySystem_Params
{
};

// Function EmbarkGameplay.EmbarkCheatManager.ForceCrash
struct UEmbarkCheatManager_ForceCrash_Params
{
	TArray<struct FString>                             Args;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function EmbarkGameplay.EmbarkCheatManager.ExecuteCheat_Server
struct UEmbarkCheatManager_ExecuteCheat_Server_Params
{
	TArray<struct FString>                             Args;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function EmbarkGameplay.EmbarkCheatManager.DeleteLocalSaveGames
struct UEmbarkCheatManager_DeleteLocalSaveGames_Params
{
};

// Function EmbarkGameplay.EmbarkCheatManager.DebugCameraEnded
struct UEmbarkCheatManager_DebugCameraEnded_Params
{
};

// Function EmbarkGameplay.EmbarkCheatManager.AddInfImpulse
struct UEmbarkCheatManager_AddInfImpulse_Params
{
};

// Function EmbarkGameplay.EmbarkPlayerController.WasUsingMouse
struct AEmbarkPlayerController_WasUsingMouse_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkPlayerController.WasUsingKeyboard
struct AEmbarkPlayerController_WasUsingKeyboard_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkPlayerController.WasUsingGamepad
struct AEmbarkPlayerController_WasUsingGamepad_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkPlayerController.TriggerInputAction
struct AEmbarkPlayerController_TriggerInputAction_Params
{
	struct FName                                       InputAction;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputEvent>                           InputEvent;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkPlayerController.SetTeam
struct AEmbarkPlayerController_SetTeam_Params
{
	enum class EEmbarkTeamId                           NewTeam;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkPlayerController.SetStartSpot
struct AEmbarkPlayerController_SetStartSpot_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkPlayerController.ServerSetMatchId
struct AEmbarkPlayerController_ServerSetMatchId_Params
{
	struct FName                                       InPlatformKey;                                            // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FString                                     InMatchId;                                                // (Parm, ZeroConstructor)
};

// Function EmbarkGameplay.EmbarkPlayerController.ServerNotifyHasReplicatedPlayerState
struct AEmbarkPlayerController_ServerNotifyHasReplicatedPlayerState_Params
{
};

// Function EmbarkGameplay.EmbarkPlayerController.ServerLogConsoleCommandFromClient
struct AEmbarkPlayerController_ServerLogConsoleCommandFromClient_Params
{
	struct FString                                     Cmd;                                                      // (Parm, ZeroConstructor)
};

// Function EmbarkGameplay.EmbarkPlayerController.ReceiveSetupInputComponent
struct AEmbarkPlayerController_ReceiveSetupInputComponent_Params
{
	class UInputComponent*                             PlayerInputComponent;                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkPlayerController.ReceiveSeamlessTravelTo
struct AEmbarkPlayerController_ReceiveSeamlessTravelTo_Params
{
	class APlayerController*                           NewPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkPlayerController.ReceiveSeamlessTravelFrom
struct AEmbarkPlayerController_ReceiveSeamlessTravelFrom_Params
{
	class APlayerController*                           OldPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkPlayerController.ReceivePreClientTravel
struct AEmbarkPlayerController_ReceivePreClientTravel_Params
{
	struct FString                                     PendingURL;                                               // (Parm, ZeroConstructor)
	TEnumAsByte<ETravelType>                           TravelType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSeamlessTravel;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkPlayerController.ReceivePostSeamlessTravel
struct AEmbarkPlayerController_ReceivePostSeamlessTravel_Params
{
};

// Function EmbarkGameplay.EmbarkPlayerController.ReceiveOnSquadVoiceChannelInfoReceived
struct AEmbarkPlayerController_ReceiveOnSquadVoiceChannelInfoReceived_Params
{
	struct FVoiceChannelInfo                           VoiceChannelInfo;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkGameplay.EmbarkPlayerController.ReceiveOnRep_ControlledPawn
struct AEmbarkPlayerController_ReceiveOnRep_ControlledPawn_Params
{
};

// Function EmbarkGameplay.EmbarkPlayerController.ReceiveNotifyLoadedWorld
struct AEmbarkPlayerController_ReceiveNotifyLoadedWorld_Params
{
	struct FName                                       WorldPackageName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFinalDest;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkPlayerController.ReceiveGetSeamlessTravelActorList
struct AEmbarkPlayerController_ReceiveGetSeamlessTravelActorList_Params
{
	bool                                               bToEntry;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorList;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function EmbarkGameplay.EmbarkPlayerController.OnServerKick
struct AEmbarkPlayerController_OnServerKick_Params
{
	struct FText                                       Reason;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// DelegateFunction EmbarkGameplay.EmbarkPlayerController.OnEmbarkInputDeviceChanged__DelegateSignature
struct AEmbarkPlayerController_OnEmbarkInputDeviceChanged__DelegateSignature_Params
{
	enum class EEmbarkInputDevice                      NewInputDevice;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkPlayerController.LocalPawnChanged
struct AEmbarkPlayerController_LocalPawnChanged_Params
{
	class APawn*                                       NewPawn;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkPlayerController.HasLocalPlayerSubsystem
struct AEmbarkPlayerController_HasLocalPlayerSubsystem_Params
{
	class UClass*                                      Subsystem;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkPlayerController.GetUniqueNetId
struct AEmbarkPlayerController_GetUniqueNetId_Params
{
	struct FUniqueNetIdRepl                            ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function EmbarkGameplay.EmbarkPlayerController.GetTeam
struct AEmbarkPlayerController_GetTeam_Params
{
	enum class EEmbarkTeamId                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkPlayerController.GetRotationInput
struct AEmbarkPlayerController_GetRotationInput_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkPlayerController.EnableTabNavigation
struct AEmbarkPlayerController_EnableTabNavigation_Params
{
};

// Function EmbarkGameplay.EmbarkPlayerController.DisableTabNavigation
struct AEmbarkPlayerController_DisableTabNavigation_Params
{
};

// Function EmbarkGameplay.EmbarkPlayerController.ClientReceiveSquadVoiceChannelInfo
struct AEmbarkPlayerController_ClientReceiveSquadVoiceChannelInfo_Params
{
	struct FVoiceChannelInfo                           VoiceChannelInfo;                                         // (Parm)
};

// Function EmbarkGameplay.EmbarkPlayerStateBase.SetUniqueId
struct AEmbarkPlayerStateBase_SetUniqueId_Params
{
	struct FUniqueNetIdRepl                            NetId;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkGameplay.EmbarkPlayerStateBase.OnRep_Squad
struct AEmbarkPlayerStateBase_OnRep_Squad_Params
{
};

// Function EmbarkGameplay.EmbarkPlayerStateBase.HandleOnReactivate
struct AEmbarkPlayerStateBase_HandleOnReactivate_Params
{
};

// Function EmbarkGameplay.EmbarkPlayerStateBase.HandleOnDeactivate
struct AEmbarkPlayerStateBase_HandleOnDeactivate_Params
{
};

// Function EmbarkGameplay.EmbarkPlayerStateBase.GetReplicatedPing
struct AEmbarkPlayerStateBase_GetReplicatedPing_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkPlayerStateBase.GetExactPing_Server
struct AEmbarkPlayerStateBase_GetExactPing_Server_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkFovHelpers.GetViewProjectionMatrix
struct UEmbarkFovHelpers_GetViewProjectionMatrix_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMatrix                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkFovHelpers.GetModelViewProjectionMatrix
struct UEmbarkFovHelpers_GetModelViewProjectionMatrix_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Transform;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FMatrix                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkFovHelpers.GetMatrixFromTransform
struct UEmbarkFovHelpers_GetMatrixFromTransform_Params
{
	struct FTransform                                  Transform;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FMatrix                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkFovHelpers.GetInverseMatrix
struct UEmbarkFovHelpers_GetInverseMatrix_Params
{
	struct FMatrix                                     Matrix;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FMatrix                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkFovHelpers.GetCustomFovWorldTransform
struct UEmbarkFovHelpers_GetCustomFovWorldTransform_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Transform;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              HorizontalFOV;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkFovHelpers.GetCustomFovModelViewProjectionMatrix
struct UEmbarkFovHelpers_GetCustomFovModelViewProjectionMatrix_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMatrix                                     TransformMatrix;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              HorizontalFOV;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMatrix                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkActor.SetTeam
struct AEmbarkActor_SetTeam_Params
{
	enum class EEmbarkTeamId                           NewTeam;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkActor.SetDefaultNetDormancy
struct AEmbarkActor_SetDefaultNetDormancy_Params
{
	TEnumAsByte<ENetDormancy>                          DefaultNetDormancy;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkActor.ReceiveTakeDamage
struct AEmbarkActor_ReceiveTakeDamage_Params
{
	float                                              DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class AController*                                 EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkActor.ReceivePreInitializeComponents
struct AEmbarkActor_ReceivePreInitializeComponents_Params
{
};

// Function EmbarkGameplay.EmbarkActor.ReceivePostInitializeComponents
struct AEmbarkActor_ReceivePostInitializeComponents_Params
{
};

// Function EmbarkGameplay.EmbarkActor.ReceiveOnRepOwner
struct AEmbarkActor_ReceiveOnRepOwner_Params
{
};

// Function EmbarkGameplay.EmbarkActor.ReceiveOnGameplayTagUpdated
struct AEmbarkActor_ReceiveOnGameplayTagUpdated_Params
{
	struct FGameplayTag                                Tag;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               TagExists;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkActor.ReceiveOnAbilitySystemDestroyed
struct AEmbarkActor_ReceiveOnAbilitySystemDestroyed_Params
{
	class UEmbarkAbilitySystemComponent*               EmbarkASC;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkActor.ReceiveOnAbilitySystemCreated
struct AEmbarkActor_ReceiveOnAbilitySystemCreated_Params
{
	class UEmbarkAbilitySystemComponent*               EmbarkASC;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkActor.OnRep_AbilitySystem
struct AEmbarkActor_OnRep_AbilitySystem_Params
{
};

// Function EmbarkGameplay.EmbarkActor.OnGameplayTagUpdated
struct AEmbarkActor_OnGameplayTagUpdated_Params
{
	struct FGameplayTag                                Tag;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               TagExists;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkActor.IntializeEmbarkActor
struct AEmbarkActor_IntializeEmbarkActor_Params
{
};

// Function EmbarkGameplay.EmbarkActor.HasASC
struct AEmbarkActor_HasASC_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkActor.GetTeam
struct AEmbarkActor_GetTeam_Params
{
	enum class EEmbarkTeamId                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkActor.GetOrCreateASC_Server
struct AEmbarkActor_GetOrCreateASC_Server_Params
{
	class UEmbarkAbilitySystemComponent*               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkActor.GetASC
struct AEmbarkActor_GetASC_Params
{
	class UEmbarkAbilitySystemComponent*               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkActor.BP_OutsideWorldBoundsEvent
struct AEmbarkActor_BP_OutsideWorldBoundsEvent_Params
{
};

// Function EmbarkGameplay.EmbarkActor.BP_FellOutOfWorldEvent
struct AEmbarkActor_BP_FellOutOfWorldEvent_Params
{
	class UDamageType*                                 dmgType;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkActorComponent.ReceiveInitializeComponent
struct UEmbarkActorComponent_ReceiveInitializeComponent_Params
{
};

// Function EmbarkGameplay.EmbarkActorTransformInterpolatorComponent.TryGetInterpolatedTransform
struct UEmbarkActorTransformInterpolatorComponent_TryGetInterpolatedTransform_Params
{
	struct FTransform                                  OutTransform;                                             // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkActorTransformInterpolatorComponent.TryGetInterpolatedLinearVelocity
struct UEmbarkActorTransformInterpolatorComponent_TryGetInterpolatedLinearVelocity_Params
{
	struct FVector                                     OutLinearVelocity;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkActorTransformInterpolatorComponent.TryGetInterpolatedAngularVelocity
struct UEmbarkActorTransformInterpolatorComponent_TryGetInterpolatedAngularVelocity_Params
{
	struct FVector                                     OutAngularVelocity;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkActorTransformInterpolatorComponent.StopUsingPredictedTransform
struct UEmbarkActorTransformInterpolatorComponent_StopUsingPredictedTransform_Params
{
};

// Function EmbarkGameplay.EmbarkActorTransformInterpolatorComponent.SetShouldUpdateActorTransform
struct UEmbarkActorTransformInterpolatorComponent_SetShouldUpdateActorTransform_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkActorTransformInterpolatorComponent.SetInterpolatorEnabled
struct UEmbarkActorTransformInterpolatorComponent_SetInterpolatorEnabled_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSkipSetTransformRightAway;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkActorTransformInterpolatorComponent.SetEnableFastReplicationDefault
struct UEmbarkActorTransformInterpolatorComponent_SetEnableFastReplicationDefault_Params
{
	bool                                               bInCanSimulatePhysics;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInStartsInSleeping;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkActorTransformInterpolatorComponent.ResetInterpolationState
struct UEmbarkActorTransformInterpolatorComponent_ResetInterpolationState_Params
{
};

// Function EmbarkGameplay.EmbarkActorTransformInterpolatorComponent.OnWake_Server
struct UEmbarkActorTransformInterpolatorComponent_OnWake_Server_Params
{
	class UPrimitiveComponent*                         Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       bone;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkActorTransformInterpolatorComponent.OnSleep_Server
struct UEmbarkActorTransformInterpolatorComponent_OnSleep_Server_Params
{
	class UPrimitiveComponent*                         Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       bone;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkActorTransformInterpolatorComponent.OnRep_RootTransform
struct UEmbarkActorTransformInterpolatorComponent_OnRep_RootTransform_Params
{
};

// Function EmbarkGameplay.EmbarkActorTransformInterpolatorComponent.IsInterpolatorEnabled
struct UEmbarkActorTransformInterpolatorComponent_IsInterpolatorEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkActorTransformInterpolatorComponent.InterpolateFromNewTransformWithTransitionPeriod
struct UEmbarkActorTransformInterpolatorComponent_InterpolateFromNewTransformWithTransitionPeriod_Params
{
	struct FTransform                                  NewTransform;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              InPredictedTransformTransitionPeriod;                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             InPredictedTransformDelegate;                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector                                     PredictedVelocity;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     LinearVelocity;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     AngularVelocity;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bEnableInterpolatorIfDisabled;                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkActorTransformInterpolatorComponent.InterpolateFromNewTransform
struct UEmbarkActorTransformInterpolatorComponent_InterpolateFromNewTransform_Params
{
	struct FTransform                                  NewTransform;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     LinearVelocity;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     AngularVelocity;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bEnableInterpolatorIfDisabled;                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDisablePredictionIfEnabled;                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkGameplay.WidgetMixinLibrary.SetRenderAngle
struct UWidgetMixinLibrary_SetRenderAngle_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkGameplay.ActorMixinLibrary.TakeDamage
struct UActorMixinLibrary_TakeDamage_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class AController*                                 EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkGameplay.ActorMixinLibrary.GetInstigatorController
struct UActorMixinLibrary_GetInstigatorController_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkGameplay.ActorMixinLibrary.GetInstigator
struct UActorMixinLibrary_GetInstigator_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkGameplay.PlayerStateMixinLibrary.SetScore
struct UPlayerStateMixinLibrary_SetScore_Params
{
	class APlayerState*                                PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewScore;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkGameplay.ActorComponentMixinLibrary.SetCanEverAffectNavigation
struct UActorComponentMixinLibrary_SetCanEverAffectNavigation_Params
{
	class UActorComponent*                             ActorComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkGameplay.ActorComponentMixinLibrary.RegisterComponent
struct UActorComponentMixinLibrary_RegisterComponent_Params
{
	class UActorComponent*                             ComponentToRegister;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function EmbarkGameplay.InputComponentMixinLibrary.HasBindings
struct UInputComponentMixinLibrary_HasBindings_Params
{
	class UInputComponent*                             InputComponent;                                           // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkGameplay.InputComponentMixinLibrary.ClearBindingValues
struct UInputComponentMixinLibrary_ClearBindingValues_Params
{
	class UInputComponent*                             InputComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function EmbarkGameplay.DataTableMixinLibrary.FindTableCellAsString
struct UDataTableMixinLibrary_FindTableCellAsString_Params
{
	class UDataTable*                                  DataTable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ColumnName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     OutResultString;                                          // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkGameplay.DataTableMixinLibrary.FindTableCellAsFloat
struct UDataTableMixinLibrary_FindTableCellAsFloat_Params
{
	class UDataTable*                                  DataTable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ColumnName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutResultFloat;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkGameplay.StringMixinLibrary.RemoveAt
struct UStringMixinLibrary_RemoveAt_Params
{
	struct FString                                     StringToChange;                                           // (Parm, OutParm, ZeroConstructor)
	int                                                StartIdx;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkGameplay.SoundWaveMixinLibrary.SetSubtitlesText
struct USoundWaveMixinLibrary_SetSubtitlesText_Params
{
	class USoundWave*                                  SoundWave;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkGameplay.SoundWaveMixinLibrary.SetIsMature
struct USoundWaveMixinLibrary_SetIsMature_Params
{
	class USoundWave*                                  SoundWave;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bMature;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkGameplay.SoundWaveMixinLibrary.GetIsMature
struct USoundWaveMixinLibrary_GetIsMature_Params
{
	class USoundWave*                                  SoundWave;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkGameplay.SubtitleCueMixinLibrary.SetText
struct USubtitleCueMixinLibrary_SetText_Params
{
	struct FSubtitleCue                                SubtitleCue;                                              // (Parm, OutParm)
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkGameplay.WorldMixinLibrary.GetWorldComposition
struct UWorldMixinLibrary_GetWorldComposition_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UWorldComposition*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkGameplay.WorldMixinLibrary.GetEnvQueryManager
struct UWorldMixinLibrary_GetEnvQueryManager_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UEnvQueryManager*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkGameplay.PawnMixinLibrary.SetPlayerState
struct UPawnMixinLibrary_SetPlayerState_Params
{
	class APawn*                                       Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerState*                                PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkGameplay.PawnMixinLibrary.GetAutoPossessAI
struct UPawnMixinLibrary_GetAutoPossessAI_Params
{
	class APawn*                                       Pawn;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	enum class EAutoPossessAI                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkGameplay.MaterialParameterCollectionMixinLibrary.SetVectorDefaultValue
struct UMaterialParameterCollectionMixinLibrary_SetVectorDefaultValue_Params
{
	class UMaterialParameterCollection*                MaterialParameterCollection;                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                DefaultValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkGameplay.AIControllerMixinLibrary.GetPerceptionComponent
struct UAIControllerMixinLibrary_GetPerceptionComponent_Params
{
	class AAIController*                               AIController;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UAIPerceptionComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function EmbarkGameplay.ConeConstraintMixinLibrary.SetIsSoftConstraint
struct UConeConstraintMixinLibrary_SetIsSoftConstraint_Params
{
	struct FConeConstraint                             Constraint;                                               // (Parm, OutParm)
	bool                                               bValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkGameplay.TwistConstraintMixinLibrary.SetIsSoftConstraint
struct UTwistConstraintMixinLibrary_SetIsSoftConstraint_Params
{
	struct FTwistConstraint                            Constraint;                                               // (Parm, OutParm)
	bool                                               bValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkGameplay.LinearConstraintMixinLibrary.SetIsSoftConstraint
struct ULinearConstraintMixinLibrary_SetIsSoftConstraint_Params
{
	struct FLinearConstraint                           Constraint;                                               // (Parm, OutParm)
	bool                                               bValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkGameplay.ConstraintInstanceMixinLibrary.SetScaleLinearLimits
struct UConstraintInstanceMixinLibrary_SetScaleLinearLimits_Params
{
	struct FConstraintInstance                         ConstraintInstance;                                       // (Parm, OutParm)
	bool                                               bValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkGameplay.ConstraintProfilePropertiesMixinLibrary.SetParentDominates
struct UConstraintProfilePropertiesMixinLibrary_SetParentDominates_Params
{
	struct FConstraintProfileProperties                ConstraintProfileProperties;                              // (Parm, OutParm)
	bool                                               bValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkGameplay.BTServiceMixinLibrary.SetIntervalAndRandomDeviation
struct UBTServiceMixinLibrary_SetIntervalAndRandomDeviation_Params
{
	class UBTService*                                  BTService;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Interval;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RandomDeviation;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkGameplay.AIStimulusMixinLibrary.IsSensedBy
struct UAIStimulusMixinLibrary_IsSensedBy_Params
{
	struct FAIStimulus                                 AIStimulus;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	class UClass*                                      SenseClass;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkGameplay.AIPerceptionComponentLibrary.GetActorLocation
struct UAIPerceptionComponentLibrary_GetActorLocation_Params
{
	class UAIPerceptionComponent*                      AIPerceptionComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkGameplay.AnimInstanceScriptMixinLibrary.GetCurveValueDefault
struct UAnimInstanceScriptMixinLibrary_GetCurveValueDefault_Params
{
	class UAnimInstance*                               AnimInstance;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CurveName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkGameplay.CharacterMovementComponentScriptMixinLibrary.ResetToDefaultMovementMode
struct UCharacterMovementComponentScriptMixinLibrary_ResetToDefaultMovementMode_Params
{
	class UCharacterMovementComponent*                 MovementComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function EmbarkGameplay.BodyInstanceMixinLibrary.GetPhysicsBodyLinearVelocity
struct UBodyInstanceMixinLibrary_GetPhysicsBodyLinearVelocity_Params
{
	struct FBodyInstance                               BodyInstance;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkGameplay.BodyInstanceMixinLibrary.GetPhysicsBodyBounds
struct UBodyInstanceMixinLibrary_GetPhysicsBodyBounds_Params
{
	struct FBodyInstance                               BodyInstance;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FBox                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkGameplay.BodyInstanceMixinLibrary.GetPhysicsBodyAngularVelocityRad
struct UBodyInstanceMixinLibrary_GetPhysicsBodyAngularVelocityRad_Params
{
	struct FBodyInstance                               BodyInstance;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkGameplay.SimpleConstructionScriptMixinLibrary.GetAllNodes
struct USimpleConstructionScriptMixinLibrary_GetAllNodes_Params
{
	class USimpleConstructionScript*                   Script;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class USCS_Node*>                           Nodes;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function EmbarkGameplay.ClassScriptMixinLibrary.GetSuperStruct
struct UClassScriptMixinLibrary_GetSuperStruct_Params
{
	class UClass*                                      Class;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UStruct*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkGameplay.ClassScriptMixinLibrary.GetSimpleConstructionScript
struct UClassScriptMixinLibrary_GetSimpleConstructionScript_Params
{
	class UClass*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class USimpleConstructionScript*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkGameplay.SCSNodeScriptMixinLibrary.GetActualComponentTemplate
struct USCSNodeScriptMixinLibrary_GetActualComponentTemplate_Params
{
	class USCS_Node*                                   Node;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function EmbarkGameplay.FBoxScriptMixinLibrary.GetBoxPoints
struct UFBoxScriptMixinLibrary_GetBoxPoints_Params
{
	struct FBox                                        Box;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TArray<struct FVector>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkGameplay.QuatScriptMixinLibrary.ShortestDelta
struct UQuatScriptMixinLibrary_ShortestDelta_Params
{
	struct FQuat                                       Source;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FQuat                                       Target;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FQuat                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function EmbarkGameplay.QuatScriptMixinLibrary.DotProduct
struct UQuatScriptMixinLibrary_DotProduct_Params
{
	struct FQuat                                       A;                                                        // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FQuat                                       B;                                                        // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkGameplay.CameraComponentMixinLibrary.RemoveBlendable
struct UCameraComponentMixinLibrary_RemoveBlendable_Params
{
	class UCameraComponent*                            CameraComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInterface*                          MaterialInterface;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkGameplay.CameraComponentMixinLibrary.AddOrUpdateBlendable
struct UCameraComponentMixinLibrary_AddOrUpdateBlendable_Params
{
	class UCameraComponent*                            CameraComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInterface*                          MaterialInterface;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkComponentSelectionMixinLibrary.GetComponent
struct UEmbarkComponentSelectionMixinLibrary_GetComponent_Params
{
	struct FEmbarkComponentSelection                   ComponentSelection;                                       // (ConstParm, Parm, OutParm, ReferenceParm)
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkConvexVolumeMixinLibrary.UpdateConvexVolume
struct UEmbarkConvexVolumeMixinLibrary_UpdateConvexVolume_Params
{
	struct FEmbarkConvexVolume                         ConvexVolume;                                             // (Parm, OutParm)
	struct FTransform                                  NewTransform;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkConvexVolumeMixinLibrary.IntersectSphere
struct UEmbarkConvexVolumeMixinLibrary_IntersectSphere_Params
{
	struct FEmbarkConvexVolume                         ConvexVolume;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     Origin;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Radius;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkConvexVolumeMixinLibrary.IntersectLineSegment
struct UEmbarkConvexVolumeMixinLibrary_IntersectLineSegment_Params
{
	struct FEmbarkConvexVolume                         ConvexVolume;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     Start;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkConvexVolumeMixinLibrary.IntersectBox
struct UEmbarkConvexVolumeMixinLibrary_IntersectBox_Params
{
	struct FEmbarkConvexVolume                         ConvexVolume;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     Origin;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Translation;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Extent;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkConvexVolumeMixinLibrary.GetConvexVolumePlanes
struct UEmbarkConvexVolumeMixinLibrary_GetConvexVolumePlanes_Params
{
	struct FEmbarkConvexVolume                         ConvexVolume;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<struct FPlane>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkGameplay.EmbarkConvexVolumeMixinLibrary.CreateConvexVolume
struct UEmbarkConvexVolumeMixinLibrary_CreateConvexVolume_Params
{
	struct FTransform                                  Transform;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              HalfFOVX;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HalfFOVY;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinZ;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxZ;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkConvexVolume                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkGameplay.EmbarkEngineSubsystem.OnInitialized
struct UEmbarkEngineSubsystem_OnInitialized_Params
{
};

// Function EmbarkGameplay.EmbarkEngineSubsystem.OnDeinitialized
struct UEmbarkEngineSubsystem_OnDeinitialized_Params
{
};

// Function EmbarkGameplay.EmbarkBlackBoardFastReplicatorBucketTransformInterpolator.OnRep_ActorTransformCollection
struct AEmbarkBlackBoardFastReplicatorBucketTransformInterpolator_OnRep_ActorTransformCollection_Params
{
};

// Function EmbarkGameplay.EmbarkGameInstance.SetUserEncryptionKey
struct UEmbarkGameInstance_SetUserEncryptionKey_Params
{
	struct FString                                     UserIdString;                                             // (Parm, ZeroConstructor)
	struct FString                                     Base64Bytes;                                              // (Parm, ZeroConstructor)
};

// Function EmbarkGameplay.EmbarkGameInstance.SetQuilkinRoutingToken
struct UEmbarkGameInstance_SetQuilkinRoutingToken_Params
{
	struct FString                                     Base64Bytes;                                              // (Parm, ZeroConstructor)
};

// Function EmbarkGameplay.EmbarkGameInstance.SetLocalEncryptionKey
struct UEmbarkGameInstance_SetLocalEncryptionKey_Params
{
	struct FString                                     Base64Bytes;                                              // (Parm, ZeroConstructor)
};

// Function EmbarkGameplay.EmbarkGameInstance.IsGameplayMap
struct UEmbarkGameInstance_IsGameplayMap_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkGameInstance.BP_ReturnToMainMenu
struct UEmbarkGameInstance_BP_ReturnToMainMenu_Params
{
};

// Function EmbarkGameplay.EmbarkGameMode.ReceiveStartPlay
struct AEmbarkGameMode_ReceiveStartPlay_Params
{
};

// Function EmbarkGameplay.EmbarkGameMode.ReceivePreRestartPlayer
struct AEmbarkGameMode_ReceivePreRestartPlayer_Params
{
	class AController*                                 NewController;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkGameMode.ReceivePreLogin
struct AEmbarkGameMode_ReceivePreLogin_Params
{
	struct FString                                     Options;                                                  // (Parm, ZeroConstructor)
	struct FString                                     Address;                                                  // (Parm, ZeroConstructor)
	struct FUniqueNetIdRepl                            UniqueId;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     ErrorMessage;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function EmbarkGameplay.EmbarkGameMode.ReceivePostInitializeComponents
struct AEmbarkGameMode_ReceivePostInitializeComponents_Params
{
};

// Function EmbarkGameplay.EmbarkGameMode.ReceiveNotifyPendingConnectionLost
struct AEmbarkGameMode_ReceiveNotifyPendingConnectionLost_Params
{
	struct FUniqueNetIdRepl                            ConnectionUniqueId;                                       // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkGameplay.EmbarkGameMode.ReceiveInitSeamlessTravelPlayer
struct AEmbarkGameMode_ReceiveInitSeamlessTravelPlayer_Params
{
	class AController*                                 NewController;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkGameMode.ReceiveInitPlayer
struct AEmbarkGameMode_ReceiveInitPlayer_Params
{
	class AController*                                 NewController;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkGameMode.ReceiveHandleMatchIsWaitingToStart
struct AEmbarkGameMode_ReceiveHandleMatchIsWaitingToStart_Params
{
};

// Function EmbarkGameplay.EmbarkGameMode.ReceiveHandleMatchHasStarted
struct AEmbarkGameMode_ReceiveHandleMatchHasStarted_Params
{
};

// Function EmbarkGameplay.EmbarkGameMode.ReceiveHandleMatchHasEnded
struct AEmbarkGameMode_ReceiveHandleMatchHasEnded_Params
{
};

// Function EmbarkGameplay.EmbarkGameMode.ReceiveHandleMatchAborted
struct AEmbarkGameMode_ReceiveHandleMatchAborted_Params
{
};

// Function EmbarkGameplay.EmbarkGameMode.ReceiveHandleLeavingMap
struct AEmbarkGameMode_ReceiveHandleLeavingMap_Params
{
};

// Function EmbarkGameplay.EmbarkGameMode.ReceiveGetSeamlessTravelActorList
struct AEmbarkGameMode_ReceiveGetSeamlessTravelActorList_Params
{
	bool                                               bToTransition;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorList;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function EmbarkGameplay.EmbarkGameMode.PreLogout
struct AEmbarkGameMode_PreLogout_Params
{
	class AController*                                 Exiting;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkGameMode.KickPlayer
struct AEmbarkGameMode_KickPlayer_Params
{
	class APlayerController*                           KickedPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       KickReason;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkGameMode.GetInactivePlayers
struct AEmbarkGameMode_GetInactivePlayers_Params
{
	TArray<class APlayerState*>                        OutPlayerStates;                                          // (Parm, OutParm, ZeroConstructor)
};

// DelegateFunction EmbarkGameplay.EmbarkGameStateBase.OnSquadsChanged__DelegateSignature
struct AEmbarkGameStateBase_OnSquadsChanged__DelegateSignature_Params
{
};

// Function EmbarkGameplay.EmbarkGameStateBase.OnRep_Squads
struct AEmbarkGameStateBase_OnRep_Squads_Params
{
};

// Function EmbarkGameplay.EmbarkGameStateBase.OnRep_ReplicatedRealtimeWorldTimeSeconds
struct AEmbarkGameStateBase_OnRep_ReplicatedRealtimeWorldTimeSeconds_Params
{
};

// Function EmbarkGameplay.EmbarkGameStateBase.OnRep_OnlineTweakablesContainer
struct AEmbarkGameStateBase_OnRep_OnlineTweakablesContainer_Params
{
};

// Function EmbarkGameplay.EmbarkGameStateBase.OnRep_MatchesId
struct AEmbarkGameStateBase_OnRep_MatchesId_Params
{
};

// Function EmbarkGameplay.EmbarkGameStateBase.OnOnlineTweakablesRegistered
struct AEmbarkGameStateBase_OnOnlineTweakablesRegistered_Params
{
	struct FOnlineTweakablesContainer                  InOnlineTweakablesContainer;                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkGameplay.EmbarkGameStateBase.OnMod_Squads
struct AEmbarkGameStateBase_OnMod_Squads_Params
{
};

// DelegateFunction EmbarkGameplay.EmbarkGameStateBase.OnMatchIdChanged__DelegateSignature
struct AEmbarkGameStateBase_OnMatchIdChanged__DelegateSignature_Params
{
};

// Function EmbarkGameplay.EmbarkGameStateBase.GetRealtimeServerWorldTimeSeconds
struct AEmbarkGameStateBase_GetRealtimeServerWorldTimeSeconds_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkItemSubsystem.OnAssetsReady
struct UEmbarkItemSubsystem_OnAssetsReady_Params
{
};

// Function EmbarkGameplay.EmbarkItemSubsystem.OnAssetsChanged
struct UEmbarkItemSubsystem_OnAssetsChanged_Params
{
	struct FAssetData                                  AssetData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkGameplay.LevelInstanceSubsystemMixinLibrary.GetLevelInstanceLevel
struct ULevelInstanceSubsystemMixinLibrary_GetLevelInstanceLevel_Params
{
	class ULevelInstanceSubsystem*                     LevelInstanceSubsystem;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class ALevelInstance*                              LevelInstanceActor;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class ULevel*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkLocalPlayerSubsystem.OnShouldCreateSubsystem
struct UEmbarkLocalPlayerSubsystem_OnShouldCreateSubsystem_Params
{
	class UObject*                                     Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkLocalPlayerSubsystem.OnInitialized
struct UEmbarkLocalPlayerSubsystem_OnInitialized_Params
{
};

// Function EmbarkGameplay.EmbarkLocalPlayerSubsystem.OnDeinitialized
struct UEmbarkLocalPlayerSubsystem_OnDeinitialized_Params
{
};

// Function EmbarkGameplay.EmbarkLocalPlayerSubsystem.GetDependencies
struct UEmbarkLocalPlayerSubsystem_GetDependencies_Params
{
	TArray<class UClass*>                              Dependencies;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function EmbarkGameplay.EmbarkNiagaraDebugComponent.DisplayDebugDataFor
struct UEmbarkNiagaraDebugComponent_DisplayDebugDataFor_Params
{
	class UNiagaraComponent*                           Comp;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkOptimizedTickMixinLibrary.TeardownOptimizedTick
struct UEmbarkOptimizedTickMixinLibrary_TeardownOptimizedTick_Params
{
	struct FEmbarkOptimizedTick                        OptimizedTick;                                            // (Parm, OutParm)
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkOptimizedTickMixinLibrary.SetupOptimizedTick
struct UEmbarkOptimizedTickMixinLibrary_SetupOptimizedTick_Params
{
	struct FEmbarkOptimizedTick                        OptimizedTick;                                            // (Parm, OutParm)
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     TickObject;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       FunctionName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkOptimizedTickMixinLibrary.SetTickEnabled
struct UEmbarkOptimizedTickMixinLibrary_SetTickEnabled_Params
{
	struct FEmbarkOptimizedTick                        OptimizedTick;                                            // (Parm, OutParm)
	bool                                               bValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkOptimizedTickMixinLibrary.HasTickOptimizedObject
struct UEmbarkOptimizedTickMixinLibrary_HasTickOptimizedObject_Params
{
	struct FEmbarkOptimizedTick                        OptimizedTick;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkOptimizedTickMixinLibrary.AddTickPrerequisiteComponent
struct UEmbarkOptimizedTickMixinLibrary_AddTickPrerequisiteComponent_Params
{
	struct FEmbarkOptimizedTick                        OptimizedTick;                                            // (Parm, OutParm)
	class UActorComponent*                             PrerequisiteComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkOptimizedTickMixinLibrary.AddTickPrerequisiteActor
struct UEmbarkOptimizedTickMixinLibrary_AddTickPrerequisiteActor_Params
{
	struct FEmbarkOptimizedTick                        OptimizedTick;                                            // (Parm, OutParm)
	class AActor*                                      PrerequisiteActor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkOptimizedTickMixinLibrary.AddAsTickPrerequisiteForComponent
struct UEmbarkOptimizedTickMixinLibrary_AddAsTickPrerequisiteForComponent_Params
{
	struct FEmbarkOptimizedTick                        OptimizedTick;                                            // (Parm, OutParm)
	class UActorComponent*                             Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkOptimizedTickMixinLibrary.AddAsTickPrerequisiteForActor
struct UEmbarkOptimizedTickMixinLibrary_AddAsTickPrerequisiteForActor_Params
{
	struct FEmbarkOptimizedTick                        OptimizedTick;                                            // (Parm, OutParm)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkGameplay.ParallelUpdateBaseClass.InitComponent
struct UParallelUpdateBaseClass_InitComponent_Params
{
	class UActorComponent*                             ActorComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<ETickingGroup>                         TickGroup;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InNeedsSyncPre;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InNeedsPreTickGameThread;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InNeedsTickAnyThread;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InNeedsPostTickGameThread;                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InNeedsSyncPost;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkGameplay.ParallelUpdateBaseClass.InitActor
struct UParallelUpdateBaseClass_InitActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETickingGroup>                         TickGroup;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InNeedsSyncPre;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InNeedsPreTickGameThread;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InNeedsTickAnyThread;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InNeedsPostTickGameThread;                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InNeedsSyncPost;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkGameplay.ParallelUpdateBaseClass.Deinit
struct UParallelUpdateBaseClass_Deinit_Params
{
};

// Function EmbarkGameplay.EmbarkPawn.SetTeam
struct AEmbarkPawn_SetTeam_Params
{
	enum class EEmbarkTeamId                           NewTeam;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkPawn.RegisterClassToBlackBoard
struct AEmbarkPawn_RegisterClassToBlackBoard_Params
{
	class UClass*                                      Clazz;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkPawn.ReceiveSetupPlayerInputComponent
struct AEmbarkPawn_ReceiveSetupPlayerInputComponent_Params
{
	class UInputComponent*                             PlayerInputComponent;                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkPawn.ReceiveRestart
struct AEmbarkPawn_ReceiveRestart_Params
{
};

// Function EmbarkGameplay.EmbarkPawn.ReceivePostInitializeComponents
struct AEmbarkPawn_ReceivePostInitializeComponents_Params
{
};

// Function EmbarkGameplay.EmbarkPawn.GetTeam
struct AEmbarkPawn_GetTeam_Params
{
	enum class EEmbarkTeamId                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkPawn.GetFirstStateOfTypeFromBlackBoard
struct AEmbarkPawn_GetFirstStateOfTypeFromBlackBoard_Params
{
	class UClass*                                      Clazz;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkPawn.EditFirstStateOfTypeFromBlackBoard
struct AEmbarkPawn_EditFirstStateOfTypeFromBlackBoard_Params
{
	class UClass*                                      Clazz;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkProxyTransformMixinLibrary.GetRelativeTransform
struct UEmbarkProxyTransformMixinLibrary_GetRelativeTransform_Params
{
	struct FEmbarkProxyTransform                       ProxyTransform;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkProxyTransformMixinLibrary.GetRelativeRotationQuat
struct UEmbarkProxyTransformMixinLibrary_GetRelativeRotationQuat_Params
{
	struct FEmbarkProxyTransform                       ProxyTransform;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FQuat                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkProxyTransformMixinLibrary.GetRelativeRotation
struct UEmbarkProxyTransformMixinLibrary_GetRelativeRotation_Params
{
	struct FEmbarkProxyTransform                       ProxyTransform;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkProxyTransformMixinLibrary.GetRelativeLocation
struct UEmbarkProxyTransformMixinLibrary_GetRelativeLocation_Params
{
	struct FEmbarkProxyTransform                       ProxyTransform;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkProxyTransformMixinLibrary.GetComponentName
struct UEmbarkProxyTransformMixinLibrary_GetComponentName_Params
{
	struct FEmbarkProxyTransform                       ProxyTransform;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkProxyTransformMixinLibrary.GetComponentDisplayName
struct UEmbarkProxyTransformMixinLibrary_GetComponentDisplayName_Params
{
	struct FEmbarkProxyTransform                       ProxyTransform;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkScreenFadeProxy.FadeScreenToColor
struct UEmbarkScreenFadeProxy_FadeScreenToColor_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UEmbarkScreenFadeProxy*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkScreenFadeProxy.FadeScreenFromAndToColor
struct UEmbarkScreenFadeProxy_FadeScreenFromAndToColor_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                FromColor;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ToColor;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UEmbarkScreenFadeProxy*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkScreenFadeProxy.ClearScreenFade
struct UEmbarkScreenFadeProxy_ClearScreenFade_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkNetScriptStruct_Test.Multicast_TestRPCWithScriptStruct
struct AEmbarkNetScriptStruct_Test_Multicast_TestRPCWithScriptStruct_Params
{
	struct FEmbarkScriptStruct                         ScriptStruct;                                             // (ConstParm, Parm, ReferenceParm)
};

// Function EmbarkGameplay.EmbarkNetScriptStruct_Test.Multicast_ScriptStruct
struct AEmbarkNetScriptStruct_Test_Multicast_ScriptStruct_Params
{
	struct FEmbarkScriptStruct                         ScriptStruct;                                             // (ConstParm, Parm, ReferenceParm)
};

// Function EmbarkGameplay.EmbarkStructObject_Test.StructOut
struct UEmbarkStructObject_Test_StructOut_Params
{
	int                                                __ANY_STRUCT_REF;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkStructObject_Test.StructInit
struct UEmbarkStructObject_Test_StructInit_Params
{
	int                                                __ANY_STRUCT_REF;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkStructObject_Test.ProcessStructOut
struct UEmbarkStructObject_Test_ProcessStructOut_Params
{
};

// Function EmbarkGameplay.EmbarkStructObject_Test.Init
struct UEmbarkStructObject_Test_Init_Params
{
};

// Function EmbarkGameplay.EmbarkSkeletalMeshComponent.SuspendNewStyleUpdate
struct UEmbarkSkeletalMeshComponent_SuspendNewStyleUpdate_Params
{
	bool                                               bSuspend;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkSkeletalMeshComponent.SetRenderUpdateEnabled
struct UEmbarkSkeletalMeshComponent_SetRenderUpdateEnabled_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkSkeletalMeshComponent.SetAnimStateUpdaterComponent
struct UEmbarkSkeletalMeshComponent_SetAnimStateUpdaterComponent_Params
{
	class UEmbarkAnimStateUpdaterComponent*            InAnimStateUpdaterComponent;                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkSkeletalMeshComponent.RegisterParentUpdate
struct UEmbarkSkeletalMeshComponent_RegisterParentUpdate_Params
{
	class UEmbarkSkeletalMeshComponent*                Comp;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkSkeletalMeshComponent.RefreshClothingRelationships
struct UEmbarkSkeletalMeshComponent_RefreshClothingRelationships_Params
{
};

// Function EmbarkGameplay.EmbarkSkeletalMeshComponent.CreateNewComponent
struct UEmbarkSkeletalMeshComponent_CreateNewComponent_Params
{
	class AActor*                                      Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       UniqueMeshName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldAutoRegisterWithBudgetAllocator;                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UEmbarkSkeletalMeshComponent*                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkSMInstance.UpdateStateFromStateData
struct UEmbarkSMInstance_UpdateStateFromStateData_Params
{
	struct FEmbarkSMActiveStateData                    NewActiveStateData;                                       // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkGameplay.EmbarkSMInstance.GetActiveStateData
struct UEmbarkSMInstance_GetActiveStateData_Params
{
	struct FEmbarkSMActiveStateData                    ActiveStateData;                                          // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkSMStateMachineComponent.Update
struct UEmbarkSMStateMachineComponent_Update_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkSMStateMachineComponent.Stop
struct UEmbarkSMStateMachineComponent_Stop_Params
{
};

// Function EmbarkGameplay.EmbarkSMStateMachineComponent.Start
struct UEmbarkSMStateMachineComponent_Start_Params
{
};

// Function EmbarkGameplay.EmbarkSMStateMachineComponent.Shutdown
struct UEmbarkSMStateMachineComponent_Shutdown_Params
{
};

// Function EmbarkGameplay.EmbarkSMStateMachineComponent.OnRep_ActiveStateData
struct UEmbarkSMStateMachineComponent_OnRep_ActiveStateData_Params
{
};

// Function EmbarkGameplay.EmbarkSMStateMachineComponent.Internal_OnStateMachineUpdated
struct UEmbarkSMStateMachineComponent_Internal_OnStateMachineUpdated_Params
{
	class USMInstance*                                 SMInstance;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkSMStateMachineComponent.Internal_OnStateMachineTransitionTaken
struct UEmbarkSMStateMachineComponent_Internal_OnStateMachineTransitionTaken_Params
{
	class USMInstance*                                 SMInstance;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSMTransitionInfo                           Transition;                                               // (Parm)
};

// Function EmbarkGameplay.EmbarkSMStateMachineComponent.Internal_OnStateMachineStopped
struct UEmbarkSMStateMachineComponent_Internal_OnStateMachineStopped_Params
{
	class USMInstance*                                 SMInstance;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkSMStateMachineComponent.Internal_OnStateMachineStateChanged
struct UEmbarkSMStateMachineComponent_Internal_OnStateMachineStateChanged_Params
{
	class USMInstance*                                 SMInstance;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSMStateInfo                                ToState;                                                  // (Parm)
	struct FSMStateInfo                                FromState;                                                // (Parm)
};

// Function EmbarkGameplay.EmbarkSMStateMachineComponent.Internal_OnStateMachineStarted
struct UEmbarkSMStateMachineComponent_Internal_OnStateMachineStarted_Params
{
	class USMInstance*                                 SMInstance;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkSMStateMachineComponent.Internal_OnStateMachineInitializedEvent
struct UEmbarkSMStateMachineComponent_Internal_OnStateMachineInitializedEvent_Params
{
	class USMInstance*                                 Instance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkSpringArmComponent.SetIgnoreCollisionActors
struct UEmbarkSpringArmComponent_SetIgnoreCollisionActors_Params
{
	TArray<class AActor*>                              InActors;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function EmbarkGameplay.EmbarkSpringArmComponent.RemoveActorFromIgnoreCollisionActors
struct UEmbarkSpringArmComponent_RemoveActorFromIgnoreCollisionActors_Params
{
	class AActor*                                      InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkSpringArmComponent.GetIgnoreCollisionActors
struct UEmbarkSpringArmComponent_GetIgnoreCollisionActors_Params
{
	TArray<class AActor*>                              OutActors;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function EmbarkGameplay.EmbarkSquadMember.OnRep_UniqueId
struct UEmbarkSquadMember_OnRep_UniqueId_Params
{
};

// Function EmbarkGameplay.EmbarkSquadMember.OnRep_PlayerState
struct UEmbarkSquadMember_OnRep_PlayerState_Params
{
};

// Function EmbarkGameplay.EmbarkSquad.OnRep_Title
struct AEmbarkSquad_OnRep_Title_Params
{
};

// Function EmbarkGameplay.EmbarkSquad.OnRep_SquadId
struct AEmbarkSquad_OnRep_SquadId_Params
{
};

// Function EmbarkGameplay.EmbarkSquad.OnRep_Members
struct AEmbarkSquad_OnRep_Members_Params
{
};

// Function EmbarkGameplay.EmbarkSquad.OnMod_Members
struct AEmbarkSquad_OnMod_Members_Params
{
};

// Function EmbarkGameplay.SquadStatics.TryParseSquadJson
struct USquadStatics_TryParseSquadJson_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Json;                                                     // (Parm, ZeroConstructor)
	TArray<class AEmbarkSquad*>                        OutSquads;                                                // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkGameplay.SquadStatics.ParseSquadJson
struct USquadStatics_ParseSquadJson_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Json;                                                     // (Parm, ZeroConstructor)
	TArray<class AEmbarkSquad*>                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkGameplay.EmbarkStaticMeshComponent.SetRenderUpdateEnabled
struct UEmbarkStaticMeshComponent_SetRenderUpdateEnabled_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkGameplay.WorldCompositionMixinLibrary.GetStreamingDistance
struct UWorldCompositionMixinLibrary_GetStreamingDistance_Params
{
	class UWorldComposition*                           WorldComposition;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       PackageName;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkGameplay.WorldCompositionMixinLibrary.GetPosition
struct UWorldCompositionMixinLibrary_GetPosition_Params
{
	class UWorldComposition*                           WorldComposition;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       PackageName;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FIntVector                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkGameplay.WorldCompositionMixinLibrary.GetParentTilePackageName
struct UWorldCompositionMixinLibrary_GetParentTilePackageName_Params
{
	class UWorldComposition*                           WorldComposition;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       PackageName;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkGameplay.WorldCompositionMixinLibrary.GetLayerName
struct UWorldCompositionMixinLibrary_GetLayerName_Params
{
	class UWorldComposition*                           WorldComposition;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       PackageName;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkGameplay.WorldCompositionMixinLibrary.GetDistanceStreamingEnabled
struct UWorldCompositionMixinLibrary_GetDistanceStreamingEnabled_Params
{
	class UWorldComposition*                           WorldComposition;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       PackageName;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkGameplay.WorldCompositionMixinLibrary.GetAbsolutePosition
struct UWorldCompositionMixinLibrary_GetAbsolutePosition_Params
{
	class UWorldComposition*                           WorldComposition;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       PackageName;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FIntVector                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkWorldSubsystem.OnInitialized
struct UEmbarkWorldSubsystem_OnInitialized_Params
{
};

// Function EmbarkGameplay.EmbarkWorldSubsystem.OnDeinitialized
struct UEmbarkWorldSubsystem_OnDeinitialized_Params
{
};

// Function EmbarkGameplay.EmbarkTickableWorldSubsystem.OnTick
struct UEmbarkTickableWorldSubsystem_OnTick_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkGameplay.EmbarkTickableWorldSubsystem.OnInitialized
struct UEmbarkTickableWorldSubsystem_OnInitialized_Params
{
};

// Function EmbarkGameplay.EmbarkTickableWorldSubsystem.OnDeinitialized
struct UEmbarkTickableWorldSubsystem_OnDeinitialized_Params
{
};

// Function EmbarkGameplay.GameStateBaseMixinLibrary.RemovePlayerState
struct UGameStateBaseMixinLibrary_RemovePlayerState_Params
{
	class AGameStateBase*                              GameStateBase;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerState*                                PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkGameplay.GameStateBaseMixinLibrary.AddPlayerState
struct UGameStateBaseMixinLibrary_AddPlayerState_Params
{
	class AGameStateBase*                              GameStateBase;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerState*                                PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkGameplay.LevelSequenceLibrary.CreateLevelSequencePlayerWithClass
struct ULevelSequenceLibrary_CreateLevelSequencePlayerWithClass_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class ULevelSequence*                              InLevelSequence;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMovieSceneSequencePlaybackSettings         Settings;                                                 // (Parm)
	class UClass*                                      LevelSequenceActorType;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class ALevelSequenceActor*                         OutActor;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class ULevelSequencePlayer*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
