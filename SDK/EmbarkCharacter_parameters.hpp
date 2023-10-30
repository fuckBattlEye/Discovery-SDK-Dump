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

// Function EmbarkCharacter.EmbarkCharacterBase.StopStandingOnCurrentMovementBase
struct AEmbarkCharacterBase_StopStandingOnCurrentMovementBase_Params
{
};

// Function EmbarkCharacter.EmbarkCharacterBase.SetUseMixedGASReplication
struct AEmbarkCharacterBase_SetUseMixedGASReplication_Params
{
};

// Function EmbarkCharacter.EmbarkCharacterBase.SetTeam
struct AEmbarkCharacterBase_SetTeam_Params
{
	enum class EEmbarkTeamId                           NewTeam;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkCharacter.EmbarkCharacterBase.SetDefaultNetDormancy
struct AEmbarkCharacterBase_SetDefaultNetDormancy_Params
{
	TEnumAsByte<ENetDormancy>                          DefaultNetDormancy;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkCharacter.EmbarkCharacterBase.ReceiveTakeDamage
struct AEmbarkCharacterBase_ReceiveTakeDamage_Params
{
	float                                              DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class AController*                                 EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkCharacter.EmbarkCharacterBase.ReceiveSetupPlayerInputComponent
struct AEmbarkCharacterBase_ReceiveSetupPlayerInputComponent_Params
{
	class UInputComponent*                             PlayerInputComponent;                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function EmbarkCharacter.EmbarkCharacterBase.ReceivePostInitializeComponents
struct AEmbarkCharacterBase_ReceivePostInitializeComponents_Params
{
};

// Function EmbarkCharacter.EmbarkCharacterBase.ReceiveOnRep_PlayerState
struct AEmbarkCharacterBase_ReceiveOnRep_PlayerState_Params
{
};

// Function EmbarkCharacter.EmbarkCharacterBase.ReceiveOnRep_Controller
struct AEmbarkCharacterBase_ReceiveOnRep_Controller_Params
{
};

// Function EmbarkCharacter.EmbarkCharacterBase.ReceiveEmbarkOnUnPossessed
struct AEmbarkCharacterBase_ReceiveEmbarkOnUnPossessed_Params
{
	class AController*                                 InController;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkCharacter.EmbarkCharacterBase.ReceiveEmbarkOnPossessed
struct AEmbarkCharacterBase_ReceiveEmbarkOnPossessed_Params
{
	class AController*                                 InController;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkCharacter.EmbarkCharacterBase.OverrideWith
struct AEmbarkCharacterBase_OverrideWith_Params
{
	class AEmbarkCharacterBase*                        OldCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkCharacter.EmbarkCharacterBase.IsStandingOn
struct AEmbarkCharacterBase_IsStandingOn_Params
{
	class UPrimitiveComponent*                         Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkCharacter.EmbarkCharacterBase.GetTeam
struct AEmbarkCharacterBase_GetTeam_Params
{
	enum class EEmbarkTeamId                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkCharacter.EmbarkCharacterBase.GetShootLocation
struct AEmbarkCharacterBase_GetShootLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkCharacter.EmbarkCharacterBase.GetReplicationMode
struct AEmbarkCharacterBase_GetReplicationMode_Params
{
	enum class EGameplayEffectReplicationMode          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkCharacter.EmbarkCharacterBase.GetPawnViewLocation
struct AEmbarkCharacterBase_GetPawnViewLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkCharacter.EmbarkCharacterBase.GetBasedMovementBP
struct AEmbarkCharacterBase_GetBasedMovementBP_Params
{
	struct FBasedMovementInfoBP                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkCharacter.EmbarkCharacterBase.EmbarkOnUnPossessed_Internal
struct AEmbarkCharacterBase_EmbarkOnUnPossessed_Internal_Params
{
	class AController*                                 InController;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkCharacter.EmbarkCharacterBase.EmbarkOnPossessed_Internal
struct AEmbarkCharacterBase_EmbarkOnPossessed_Internal_Params
{
	class AController*                                 InController;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkCharacter.EmbarkCharacterBase.BlueprintSimulateRootMotion
struct AEmbarkCharacterBase_BlueprintSimulateRootMotion_Params
{
	struct FCharacterMovementRootWarpContext           RootWarpContext;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     OutNewDeltaMove;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  OutRootWarpTransformDeltaMove;                            // (Parm, OutParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
