//   SDK By:if

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../pch.h"

namespace sdk
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function EmbarkCharacter.EmbarkCharacterBase.StopStandingOnCurrentMovementBase
// (Final, Native, Public, BlueprintCallable)

void AEmbarkCharacterBase::StopStandingOnCurrentMovementBase()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkCharacter.EmbarkCharacterBase.StopStandingOnCurrentMovementBase"));

	AEmbarkCharacterBase_StopStandingOnCurrentMovementBase_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkCharacter.EmbarkCharacterBase.SetUseMixedGASReplication
// (Final, Native, Public)

void AEmbarkCharacterBase::SetUseMixedGASReplication()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkCharacter.EmbarkCharacterBase.SetUseMixedGASReplication"));

	AEmbarkCharacterBase_SetUseMixedGASReplication_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkCharacter.EmbarkCharacterBase.SetTeam
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EEmbarkTeamId       NewTeam                        (Parm, ZeroConstructor, IsPlainOldData)

void AEmbarkCharacterBase::SetTeam(enum class EEmbarkTeamId NewTeam)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkCharacter.EmbarkCharacterBase.SetTeam"));

	AEmbarkCharacterBase_SetTeam_Params params;
	params.NewTeam = NewTeam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkCharacter.EmbarkCharacterBase.SetDefaultNetDormancy
// (Final, Native, Public)
// Parameters:
// TEnumAsByte<ENetDormancy>      DefaultNetDormancy             (Parm, ZeroConstructor, IsPlainOldData)

void AEmbarkCharacterBase::SetDefaultNetDormancy(TEnumAsByte<ENetDormancy> DefaultNetDormancy)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkCharacter.EmbarkCharacterBase.SetDefaultNetDormancy"));

	AEmbarkCharacterBase_SetDefaultNetDormancy_Params params;
	params.DefaultNetDormancy = DefaultNetDormancy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkCharacter.EmbarkCharacterBase.ReceiveTakeDamage
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// float                          DamageAmount                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (ConstParm, Parm, OutParm, ReferenceParm)
// class AController*             EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AEmbarkCharacterBase::ReceiveTakeDamage(float DamageAmount, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkCharacter.EmbarkCharacterBase.ReceiveTakeDamage"));

	AEmbarkCharacterBase_ReceiveTakeDamage_Params params;
	params.DamageAmount = DamageAmount;
	params.DamageEvent = DamageEvent;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkCharacter.EmbarkCharacterBase.ReceiveSetupPlayerInputComponent
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UInputComponent*         PlayerInputComponent           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AEmbarkCharacterBase::ReceiveSetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkCharacter.EmbarkCharacterBase.ReceiveSetupPlayerInputComponent"));

	AEmbarkCharacterBase_ReceiveSetupPlayerInputComponent_Params params;
	params.PlayerInputComponent = PlayerInputComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkCharacter.EmbarkCharacterBase.ReceivePostInitializeComponents
// (Event, Protected, BlueprintEvent)

void AEmbarkCharacterBase::ReceivePostInitializeComponents()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkCharacter.EmbarkCharacterBase.ReceivePostInitializeComponents"));

	AEmbarkCharacterBase_ReceivePostInitializeComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkCharacter.EmbarkCharacterBase.ReceiveOnRep_PlayerState
// (Event, Public, BlueprintEvent)

void AEmbarkCharacterBase::ReceiveOnRep_PlayerState()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkCharacter.EmbarkCharacterBase.ReceiveOnRep_PlayerState"));

	AEmbarkCharacterBase_ReceiveOnRep_PlayerState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkCharacter.EmbarkCharacterBase.ReceiveOnRep_Controller
// (Event, Public, BlueprintEvent)

void AEmbarkCharacterBase::ReceiveOnRep_Controller()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkCharacter.EmbarkCharacterBase.ReceiveOnRep_Controller"));

	AEmbarkCharacterBase_ReceiveOnRep_Controller_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkCharacter.EmbarkCharacterBase.ReceiveEmbarkOnUnPossessed
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AController*             InController                   (Parm, ZeroConstructor, IsPlainOldData)

void AEmbarkCharacterBase::ReceiveEmbarkOnUnPossessed(class AController* InController)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkCharacter.EmbarkCharacterBase.ReceiveEmbarkOnUnPossessed"));

	AEmbarkCharacterBase_ReceiveEmbarkOnUnPossessed_Params params;
	params.InController = InController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkCharacter.EmbarkCharacterBase.ReceiveEmbarkOnPossessed
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AController*             InController                   (Parm, ZeroConstructor, IsPlainOldData)

void AEmbarkCharacterBase::ReceiveEmbarkOnPossessed(class AController* InController)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkCharacter.EmbarkCharacterBase.ReceiveEmbarkOnPossessed"));

	AEmbarkCharacterBase_ReceiveEmbarkOnPossessed_Params params;
	params.InController = InController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkCharacter.EmbarkCharacterBase.OverrideWith
// (Event, Public, BlueprintEvent)
// Parameters:
// class AEmbarkCharacterBase*    OldCharacter                   (Parm, ZeroConstructor, IsPlainOldData)

void AEmbarkCharacterBase::OverrideWith(class AEmbarkCharacterBase* OldCharacter)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkCharacter.EmbarkCharacterBase.OverrideWith"));

	AEmbarkCharacterBase_OverrideWith_Params params;
	params.OldCharacter = OldCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkCharacter.EmbarkCharacterBase.IsStandingOn
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPrimitiveComponent*     Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   BoneName                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AEmbarkCharacterBase::IsStandingOn(class UPrimitiveComponent* Component, const struct FName& BoneName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkCharacter.EmbarkCharacterBase.IsStandingOn"));

	AEmbarkCharacterBase_IsStandingOn_Params params;
	params.Component = Component;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkCharacter.EmbarkCharacterBase.GetTeam
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EEmbarkTeamId       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

enum class EEmbarkTeamId AEmbarkCharacterBase::GetTeam()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkCharacter.EmbarkCharacterBase.GetTeam"));

	AEmbarkCharacterBase_GetTeam_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkCharacter.EmbarkCharacterBase.GetShootLocation
// (Native, Event, Public, HasDefaults, BlueprintEvent, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AEmbarkCharacterBase::GetShootLocation()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkCharacter.EmbarkCharacterBase.GetShootLocation"));

	AEmbarkCharacterBase_GetShootLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkCharacter.EmbarkCharacterBase.GetReplicationMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EGameplayEffectReplicationMode ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

enum class EGameplayEffectReplicationMode AEmbarkCharacterBase::GetReplicationMode()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkCharacter.EmbarkCharacterBase.GetReplicationMode"));

	AEmbarkCharacterBase_GetReplicationMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkCharacter.EmbarkCharacterBase.GetPawnViewLocation
// (Final, Native, Protected, HasDefaults, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AEmbarkCharacterBase::GetPawnViewLocation()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkCharacter.EmbarkCharacterBase.GetPawnViewLocation"));

	AEmbarkCharacterBase_GetPawnViewLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkCharacter.EmbarkCharacterBase.GetBasedMovementBP
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FBasedMovementInfoBP    ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBasedMovementInfoBP AEmbarkCharacterBase::GetBasedMovementBP()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkCharacter.EmbarkCharacterBase.GetBasedMovementBP"));

	AEmbarkCharacterBase_GetBasedMovementBP_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkCharacter.EmbarkCharacterBase.EmbarkOnUnPossessed_Internal
// (Final, Native, Private)
// Parameters:
// class AController*             InController                   (Parm, ZeroConstructor, IsPlainOldData)

void AEmbarkCharacterBase::EmbarkOnUnPossessed_Internal(class AController* InController)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkCharacter.EmbarkCharacterBase.EmbarkOnUnPossessed_Internal"));

	AEmbarkCharacterBase_EmbarkOnUnPossessed_Internal_Params params;
	params.InController = InController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkCharacter.EmbarkCharacterBase.EmbarkOnPossessed_Internal
// (Final, Native, Private)
// Parameters:
// class AController*             InController                   (Parm, ZeroConstructor, IsPlainOldData)

void AEmbarkCharacterBase::EmbarkOnPossessed_Internal(class AController* InController)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkCharacter.EmbarkCharacterBase.EmbarkOnPossessed_Internal"));

	AEmbarkCharacterBase_EmbarkOnPossessed_Internal_Params params;
	params.InController = InController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkCharacter.EmbarkCharacterBase.BlueprintSimulateRootMotion
// (Event, Protected, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// struct FCharacterMovementRootWarpContext RootWarpContext                (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 OutNewDeltaMove                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FTransform              OutRootWarpTransformDeltaMove  (Parm, OutParm, IsPlainOldData)

void AEmbarkCharacterBase::BlueprintSimulateRootMotion(const struct FCharacterMovementRootWarpContext& RootWarpContext, struct FVector* OutNewDeltaMove, struct FTransform* OutRootWarpTransformDeltaMove)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkCharacter.EmbarkCharacterBase.BlueprintSimulateRootMotion"));

	AEmbarkCharacterBase_BlueprintSimulateRootMotion_Params params;
	params.RootWarpContext = RootWarpContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutNewDeltaMove != nullptr)
		*OutNewDeltaMove = params.OutNewDeltaMove;
	if (OutRootWarpTransformDeltaMove != nullptr)
		*OutRootWarpTransformDeltaMove = params.OutRootWarpTransformDeltaMove;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
