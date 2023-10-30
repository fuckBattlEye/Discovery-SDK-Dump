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

// Function DiscoveryGameplay.DiscoveryAnimationSignificanceSystemBase.ReceiveTickDebug
struct ADiscoveryAnimationSignificanceSystemBase_ReceiveTickDebug_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DiscoveryGameplay.DiscoveryCharacterBase.BlueprintSimulatePhysWalking
struct ADiscoveryCharacterBase_BlueprintSimulatePhysWalking_Params
{
	struct FEmbarkMovementParamsDynamic                Dynamics;                                                 // (Parm, OutParm)
	struct FEmbarkMovementParamsStatic                 Statics;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DiscoveryGameplay.DiscoveryCharacterBase.BlueprintSimulatePhysFlying
struct ADiscoveryCharacterBase_BlueprintSimulatePhysFlying_Params
{
	struct FEmbarkMovementParamsDynamic                Dynamics;                                                 // (Parm, OutParm)
	struct FEmbarkMovementParamsStatic                 Statics;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DiscoveryGameplay.DiscoveryCharacterBase.BlueprintSimulatePhysFalling
struct ADiscoveryCharacterBase_BlueprintSimulatePhysFalling_Params
{
	struct FEmbarkMovementParamsDynamic                Dynamics;                                                 // (Parm, OutParm)
	struct FEmbarkMovementParamsStatic                 Statics;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DiscoveryGameplay.DiscoveryCharacterBase.BlueprintSimulatePhysCustom
struct ADiscoveryCharacterBase_BlueprintSimulatePhysCustom_Params
{
	struct FEmbarkMovementParamsDynamic                Dynamics;                                                 // (Parm, OutParm)
	struct FEmbarkMovementParamsStatic                 Statics;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DiscoveryGameplay.DiscoveryCharacterBase.BlueprintRecalculateBaseEyeHeight
struct ADiscoveryCharacterBase_BlueprintRecalculateBaseEyeHeight_Params
{
};

// Function DiscoveryGameplay.DiscoveryCharacterBase.BlueprintGetStandingCapsuleHalfHeight
struct ADiscoveryCharacterBase_BlueprintGetStandingCapsuleHalfHeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DiscoveryGameplay.DiscoveryCharacterBase.BlueprintGetDeltaMoveFromMovingFloor
struct ADiscoveryCharacterBase_BlueprintGetDeltaMoveFromMovingFloor_Params
{
	struct FVector                                     ProposedMoveDelta;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SafeMoveDelta;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DiscoveryGameplay.DiscoveryCharacterBase.BlueprintGetCrouchingCapsuleHalfHeight
struct ADiscoveryCharacterBase_BlueprintGetCrouchingCapsuleHalfHeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DiscoveryGameplay.DiscoveryCharacterBase.BlueprintCanUnCrouch
struct ADiscoveryCharacterBase_BlueprintCanUnCrouch_Params
{
	float                                              StandingCapsuleHalfHeight;                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutHeightAdjustment;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DiscoveryGameplay.DiscoveryCharacterBase.BlueprintCanCrouch
struct ADiscoveryCharacterBase_BlueprintCanCrouch_Params
{
	float                                              CrouchCapsuleHalfHeight;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutHeightAdjustment;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DiscoveryGameplay.DiscoveryCharacterMovementComponent.SetNewFloor
struct UDiscoveryCharacterMovementComponent_SetNewFloor_Params
{
	struct FFindFloorResult                            NewFloor;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DiscoveryGameplay.DiscoveryCharacterMovementComponent.OnRep_ReplicatedMovementBaseState
struct UDiscoveryCharacterMovementComponent_OnRep_ReplicatedMovementBaseState_Params
{
	struct FEmbarkCharacterMovementBaseState           PrevState;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DiscoveryGameplay.DiscoveryCharacterMovementComponent.IsJumping
struct UDiscoveryCharacterMovementComponent_IsJumping_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DiscoveryGameplay.DiscoveryCharacterMovementComponent.GetFloorTransform
struct UDiscoveryCharacterMovementComponent_GetFloorTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function DiscoveryGameplay.DiscoveryCharacterMovementComponent.GetFloorPhysMaterial
struct UDiscoveryCharacterMovementComponent_GetFloorPhysMaterial_Params
{
	class UPhysicalMaterial*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DiscoveryGameplay.DiscoveryCharacterMovementComponent.GetFloorComponent
struct UDiscoveryCharacterMovementComponent_GetFloorComponent_Params
{
	class UPrimitiveComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DiscoveryGameplay.DiscoveryCharacterMovementComponent.GetFloorBoneName
struct UDiscoveryCharacterMovementComponent_GetFloorBoneName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DiscoveryGameplay.DiscoveryCharacterMovementComponent.CanUnCrouch
struct UDiscoveryCharacterMovementComponent_CanUnCrouch_Params
{
	float                                              StandingCapsuleHalfHeight;                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutCapsuleHalfHeight;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DiscoveryGameplay.DiscoveryCharacterMovementComponent.CanCrouch
struct UDiscoveryCharacterMovementComponent_CanCrouch_Params
{
	float                                              CrouchingCapsuleHalfHeight;                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutCapsuleHalfHeight;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DiscoveryGameplay.DiscoveryCharacterMovementComponent.BlueprintGetMinAnalogSpeed
struct UDiscoveryCharacterMovementComponent_BlueprintGetMinAnalogSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DiscoveryGameplay.DiscoveryCharacterMovementComponent.BlueprintGetMaxSpeed
struct UDiscoveryCharacterMovementComponent_BlueprintGetMaxSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DiscoveryGameplay.DiscoveryCharacterMovementGlobalActorBase.UpdateExternalCrouchState
struct ADiscoveryCharacterMovementGlobalActorBase_UpdateExternalCrouchState_Params
{
	class AEmbarkCharacterBase*                        Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkMovementParamsDynamic                Dynamics;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEmbarkMovementParamsStatic                 Statics;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DiscoveryGameplay.DiscoveryCharacterMovementGlobalActorBase.UpdateAbilityStatesFromDynamics_Client
struct ADiscoveryCharacterMovementGlobalActorBase_UpdateAbilityStatesFromDynamics_Client_Params
{
	class ACharacter*                                  Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkMovementParamsDynamic                Dynamics;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DiscoveryGameplay.DiscoveryCharacterMovementGlobalActorBase.StopCrouchingImmediately
struct ADiscoveryCharacterMovementGlobalActorBase_StopCrouchingImmediately_Params
{
	class ACharacter*                                  Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DiscoveryGameplay.DiscoveryCharacterMovementGlobalActorBase.StopCrouching
struct ADiscoveryCharacterMovementGlobalActorBase_StopCrouching_Params
{
	class ACharacter*                                  Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DiscoveryGameplay.DiscoveryCharacterMovementGlobalActorBase.StartCrouchingImmediately
struct ADiscoveryCharacterMovementGlobalActorBase_StartCrouchingImmediately_Params
{
	class ACharacter*                                  Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DiscoveryGameplay.DiscoveryCharacterMovementGlobalActorBase.StartCrouching
struct ADiscoveryCharacterMovementGlobalActorBase_StartCrouching_Params
{
	class ACharacter*                                  Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DiscoveryGameplay.DiscoveryCharacterMovementGlobalActorBase.SetCustomTimeSinceGrounded_Server
struct ADiscoveryCharacterMovementGlobalActorBase_SetCustomTimeSinceGrounded_Server_Params
{
	class ACharacter*                                  Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeSinceGrounded;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DiscoveryGameplay.DiscoveryCharacterMovementGlobalActorBase.ReceivePostControlledCharacterUnregistered
struct ADiscoveryCharacterMovementGlobalActorBase_ReceivePostControlledCharacterUnregistered_Params
{
	class AEmbarkCharacterBase*                        Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DiscoveryGameplay.DiscoveryCharacterMovementGlobalActorBase.ReceivePostControlledCharacterRegistered
struct ADiscoveryCharacterMovementGlobalActorBase_ReceivePostControlledCharacterRegistered_Params
{
	class AEmbarkCharacterBase*                        Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DiscoveryGameplay.DiscoveryCharacterMovementGlobalActorBase.ReceiveGetUnCrouchHeightAdjustment
struct ADiscoveryCharacterMovementGlobalActorBase_ReceiveGetUnCrouchHeightAdjustment_Params
{
	class ADiscoveryCharacterBase*                     Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StandingCapsuleHalfHeight;                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutHeightAdjustment;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DiscoveryGameplay.DiscoveryCharacterMovementGlobalActorBase.ReceiveGetCrouchHeightAdjustment
struct ADiscoveryCharacterMovementGlobalActorBase_ReceiveGetCrouchHeightAdjustment_Params
{
	class ADiscoveryCharacterBase*                     Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CrouchCapsuleHalfHeight;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutHeightAdjustment;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DiscoveryGameplay.DiscoveryCharacterMovementGlobalActorBase.ReceiveCanMoveWithFloor
struct ADiscoveryCharacterMovementGlobalActorBase_ReceiveCanMoveWithFloor_Params
{
	class ACharacter*                                  Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFindFloorResult                            NewFloor;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DiscoveryGameplay.DiscoveryCharacterMovementGlobalActorBase.JumpImmediately
struct ADiscoveryCharacterMovementGlobalActorBase_JumpImmediately_Params
{
	class ACharacter*                                  Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DiscoveryGameplay.DiscoveryCharacterMovementGlobalActorBase.Jump
struct ADiscoveryCharacterMovementGlobalActorBase_Jump_Params
{
	class ACharacter*                                  Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DiscoveryGameplay.DiscoveryCharacterMovementGlobalActorBase.IsCharacterRegisteredAsControlled
struct ADiscoveryCharacterMovementGlobalActorBase_IsCharacterRegisteredAsControlled_Params
{
	class ACharacter*                                  Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DiscoveryGameplay.DiscoveryCharacterMovementGlobalActorBase.GetRegisteredSimulatedProxyCharacters_Client
struct ADiscoveryCharacterMovementGlobalActorBase_GetRegisteredSimulatedProxyCharacters_Client_Params
{
	TArray<class AEmbarkCharacterBase*>                ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function DiscoveryGameplay.DiscoveryCharacterMovementGlobalActorBase.GetRegisteredControlledCharacters
struct ADiscoveryCharacterMovementGlobalActorBase_GetRegisteredControlledCharacters_Params
{
	TArray<class AEmbarkCharacterBase*>                ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function DiscoveryGameplay.DiscoveryCharacterMovementGlobalActorBase.GetMaxSpeed_Server
struct ADiscoveryCharacterMovementGlobalActorBase_GetMaxSpeed_Server_Params
{
	class ACharacter*                                  Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutMaxSpeed;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DiscoveryGameplay.DiscoveryCharacterMovementGlobalActorBase.GetLatestJumpState
struct ADiscoveryCharacterMovementGlobalActorBase_GetLatestJumpState_Params
{
	class ACharacter*                                  Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkJumpState                            JumpState;                                                // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DiscoveryGameplay.DiscoveryCharacterMovementGlobalActorBase.GetLatestDynamics
struct ADiscoveryCharacterMovementGlobalActorBase_GetLatestDynamics_Params
{
	class ACharacter*                                  Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkMovementParamsDynamic                OutLatestDynamics;                                        // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DiscoveryGameplay.DiscoveryCharacterMovementGlobalActorBase.CacheSlideJumpState
struct ADiscoveryCharacterMovementGlobalActorBase_CacheSlideJumpState_Params
{
	class ACharacter*                                  Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SlideJumpVelocity;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Timestamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DiscoveryGameplay.DiscoveryCharacterMovementGlobalActorBase.CacheJumpState_Client
struct ADiscoveryCharacterMovementGlobalActorBase_CacheJumpState_Client_Params
{
	class ACharacter*                                  Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     JumpStartCharacterLocation;                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              JumpStartTime;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DiscoveryGameplay.EmbarkCharacterMovementPrediction.PredictionPreMoveLogic
struct UEmbarkCharacterMovementPrediction_PredictionPreMoveLogic_Params
{
	struct FEmbarkMovementParamsDynamic                Dynamics;                                                 // (Parm, OutParm)
	struct FEmbarkMovementParamsStatic                 Statics;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DiscoveryGameplay.EmbarkCharacterMovementPrediction.PredictionPostMoveLogic
struct UEmbarkCharacterMovementPrediction_PredictionPostMoveLogic_Params
{
	struct FEmbarkMovementParamsDynamic                Dynamics;                                                 // (Parm, OutParm)
	struct FEmbarkMovementParamsStatic                 Statics;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DiscoveryGameplay.DiscoveryCheatManagerBase.ServerWalk
struct UDiscoveryCheatManagerBase_ServerWalk_Params
{
};

// Function DiscoveryGameplay.DiscoveryCheatManagerBase.ServerTeleport
struct UDiscoveryCheatManagerBase_ServerTeleport_Params
{
};

// Function DiscoveryGameplay.DiscoveryCheatManagerBase.ServerSummon
struct UDiscoveryCheatManagerBase_ServerSummon_Params
{
	struct FString                                     ClassName;                                                // (Parm, ZeroConstructor)
};

// Function DiscoveryGameplay.DiscoveryCheatManagerBase.ServerSlomo
struct UDiscoveryCheatManagerBase_ServerSlomo_Params
{
	float                                              NewTimeDilation;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DiscoveryGameplay.DiscoveryCheatManagerBase.ServerGod
struct UDiscoveryCheatManagerBase_ServerGod_Params
{
};

// Function DiscoveryGameplay.DiscoveryCheatManagerBase.ServerGhost
struct UDiscoveryCheatManagerBase_ServerGhost_Params
{
};

// Function DiscoveryGameplay.DiscoveryCheatManagerBase.ServerFly
struct UDiscoveryCheatManagerBase_ServerFly_Params
{
};

// Function DiscoveryGameplay.DiscoveryCheatManagerBase.ServerDestroyTarget
struct UDiscoveryCheatManagerBase_ServerDestroyTarget_Params
{
};

// Function DiscoveryGameplay.DiscoveryCheatManagerBase.ServerDestroyPawns
struct UDiscoveryCheatManagerBase_ServerDestroyPawns_Params
{
	class UClass*                                      aClass;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DiscoveryGameplay.DiscoveryCheatManagerBase.ServerDestroyAllPawnsExceptTarget
struct UDiscoveryCheatManagerBase_ServerDestroyAllPawnsExceptTarget_Params
{
};

// Function DiscoveryGameplay.DiscoveryCheatManagerBase.ServerDestroyAll
struct UDiscoveryCheatManagerBase_ServerDestroyAll_Params
{
	class UClass*                                      aClass;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DiscoveryGameplay.DiscoveryCheatManagerBase.ServerDamageTarget
struct UDiscoveryCheatManagerBase_ServerDamageTarget_Params
{
	float                                              DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DiscoveryGameplay.DiscoveryCheatManagerBase.ServerChangeSize
struct UDiscoveryCheatManagerBase_ServerChangeSize_Params
{
	float                                              F;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DiscoveryGameplay.DiscoveryCheatManagerBase.MulticastSlomo
struct UDiscoveryCheatManagerBase_MulticastSlomo_Params
{
	float                                              NewTimeDilation;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DiscoveryGameplay.DiscoveryFastReplicatorBreak.RegisterCallback_Client
struct ADiscoveryFastReplicatorBreak_RegisterCallback_Client_Params
{
	struct FEmbarkFastReplicatorActorOrComponent       Ref;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FScriptDelegate                             Callback;                                                 // (Parm, ZeroConstructor)
};

// Function DiscoveryGameplay.DiscoveryReplicatedDamageDataScriptMixinLibrary.SetTime
struct UDiscoveryReplicatedDamageDataScriptMixinLibrary_SetTime_Params
{
	struct FDiscoveryReplicatedDamageData              DamageData;                                               // (Parm, OutParm)
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DiscoveryGameplay.DiscoveryReplicatedDamageDataScriptMixinLibrary.SetOrigin
struct UDiscoveryReplicatedDamageDataScriptMixinLibrary_SetOrigin_Params
{
	struct FDiscoveryReplicatedDamageData              DamageData;                                               // (Parm, OutParm)
	struct FVector                                     InOrigin;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function DiscoveryGameplay.DiscoveryReplicatedDamageDataScriptMixinLibrary.SetImpactPoint
struct UDiscoveryReplicatedDamageDataScriptMixinLibrary_SetImpactPoint_Params
{
	struct FDiscoveryReplicatedDamageData              DamageData;                                               // (Parm, OutParm)
	struct FVector                                     InImpactPoint;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function DiscoveryGameplay.DiscoveryReplicatedDamageDataScriptMixinLibrary.SetHealth
struct UDiscoveryReplicatedDamageDataScriptMixinLibrary_SetHealth_Params
{
	struct FDiscoveryReplicatedDamageData              DamageData;                                               // (Parm, OutParm)
	float                                              InMaxHealth;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InNewHealth;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DiscoveryGameplay.DiscoveryReplicatedDamageDataScriptMixinLibrary.SetDirection
struct UDiscoveryReplicatedDamageDataScriptMixinLibrary_SetDirection_Params
{
	struct FDiscoveryReplicatedDamageData              DamageData;                                               // (Parm, OutParm)
	struct FVector                                     InDirection;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function DiscoveryGameplay.DiscoveryReplicatedDamageDataScriptMixinLibrary.SetDamageValue
struct UDiscoveryReplicatedDamageDataScriptMixinLibrary_SetDamageValue_Params
{
	struct FDiscoveryReplicatedDamageData              DamageData;                                               // (Parm, OutParm)
	float                                              InDamage;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DiscoveryGameplay.DiscoveryReplicatedDamageDataScriptMixinLibrary.SetDamageType
struct UDiscoveryReplicatedDamageDataScriptMixinLibrary_SetDamageType_Params
{
	struct FDiscoveryReplicatedDamageData              DamageData;                                               // (Parm, OutParm)
	TEnumAsByte<EDSMDamageType>                        InDamageType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DiscoveryGameplay.DiscoveryReplicatedDamageDataScriptMixinLibrary.SetDamage
struct UDiscoveryReplicatedDamageDataScriptMixinLibrary_SetDamage_Params
{
	struct FDiscoveryReplicatedDamageData              DamageData;                                               // (Parm, OutParm)
	float                                              InDamage;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDSMDamageType>                        InDamageType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DiscoveryGameplay.DiscoveryReplicatedDamageDataScriptMixinLibrary.IsRecentTime
struct UDiscoveryReplicatedDamageDataScriptMixinLibrary_IsRecentTime_Params
{
	struct FDiscoveryReplicatedDamageData              DamageData;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              CurrentTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DiscoveryGameplay.DiscoveryFastReplicatorDamage.UpdateData_Server
struct ADiscoveryFastReplicatorDamage_UpdateData_Server_Params
{
	struct FEmbarkFastReplicatorActorOrComponent       Ref;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FDiscoveryReplicatedDamageData              NewDamage;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DiscoveryGameplay.DiscoveryFastReplicatorDamage.RegisterCallback_Client
struct ADiscoveryFastReplicatorDamage_RegisterCallback_Client_Params
{
	struct FEmbarkFastReplicatorActorOrComponent       Ref;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FScriptDelegate                             Callback;                                                 // (Parm, ZeroConstructor)
};

// Function DiscoveryGameplay.DiscoveryGameplayUtils.UnloadStreamLevelDebug
struct UDiscoveryGameplayUtils_UnloadStreamLevelDebug_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       LevelName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
	bool                                               bShouldBlockOnUnload;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DiscoveryGameplay.DiscoveryGameplayUtils.StopReplay
struct UDiscoveryGameplayUtils_StopReplay_Params
{
	class UWorld*                                      _World;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DiscoveryGameplay.DiscoveryGameplayUtils.StartRecordingReplay
struct UDiscoveryGameplayUtils_StartRecordingReplay_Params
{
	class UWorld*                                      _World;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReplayName;                                               // (Parm, ZeroConstructor)
};

// Function DiscoveryGameplay.DiscoveryGameplayUtils.LoadStreamLevelDebug
struct UDiscoveryGameplayUtils_LoadStreamLevelDebug_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       LevelName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bMakeVisibleAfterLoad;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldBlockOnLoad;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
};

// Function DiscoveryGameplay.DiscoveryGameplayUtils.IsReplayRunningAndDone
struct UDiscoveryGameplayUtils_IsReplayRunningAndDone_Params
{
	class UWorld*                                      _World;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DiscoveryGameplay.DiscoveryGameplayUtils.IsReplayRunning
struct UDiscoveryGameplayUtils_IsReplayRunning_Params
{
	class UWorld*                                      _World;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DiscoveryGameplay.DiscoveryGameplayUtils.GetNumberOfNonSpectators
struct UDiscoveryGameplayUtils_GetNumberOfNonSpectators_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DiscoveryGameplay.DiscoveryGameplayUtils.GetBoneNameFromBodyIndex
struct UDiscoveryGameplayUtils_GetBoneNameFromBodyIndex_Params
{
	class UPrimitiveComponent*                         InPrimitiveComponent;                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InIndex;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DiscoveryGameplay.DiscoveryGameplayUtils.CanOnlyBeSpectator
struct UDiscoveryGameplayUtils_CanOnlyBeSpectator_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class APlayerState*                                PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DiscoveryGameplay.DiscoveryGameplayUtils.ApplyDamageToDestructible
struct UDiscoveryGameplayUtils_ApplyDamageToDestructible_Params
{
	TArray<struct FBoneDamage>                         DamagedBones;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UActorComponent*                             TargetDestructible;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DiscoveryGameplay.DiscoveryGlobalActorFactorySubsystemBase.GetEmbarkAnimStateUpdaterSystem
struct UDiscoveryGlobalActorFactorySubsystemBase_GetEmbarkAnimStateUpdaterSystem_Params
{
	class AEmbarkAnimStateUpdaterSystem*               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DiscoveryGameplay.DiscoveryGlobalActorFactorySubsystemBase.GetDamageFastReplicator
struct UDiscoveryGlobalActorFactorySubsystemBase_GetDamageFastReplicator_Params
{
	class ADiscoveryFastReplicatorDamage*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DiscoveryGameplay.DiscoveryGlobalActorFactorySubsystemBase.GetBreakFastReplicator
struct UDiscoveryGlobalActorFactorySubsystemBase_GetBreakFastReplicator_Params
{
	class ADiscoveryFastReplicatorBreak*               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DiscoveryGameplay.DiscoveryPlayerControllerBase.StopInstantReplay
struct ADiscoveryPlayerControllerBase_StopInstantReplay_Params
{
};

// Function DiscoveryGameplay.DiscoveryPlayerControllerBase.PlayInstantReplay
struct ADiscoveryPlayerControllerBase_PlayInstantReplay_Params
{
	class APawn*                                       PawnToFocus;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeToRewind;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartDelay;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DiscoveryGameplay.DiscoveryPlayerControllerBase.IsInstantReplaySupported
struct ADiscoveryPlayerControllerBase_IsInstantReplaySupported_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DiscoveryGameplay.DiscoveryPlayerStateBase.GetUniqueIdHash
struct ADiscoveryPlayerStateBase_GetUniqueIdHash_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
