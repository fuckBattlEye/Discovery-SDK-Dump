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

// Function DiscoveryGameplay.DiscoveryAnimationSignificanceSystemBase.ReceiveTickDebug
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ADiscoveryAnimationSignificanceSystemBase::ReceiveTickDebug(float DeltaSeconds)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryAnimationSignificanceSystemBase.ReceiveTickDebug"));

	ADiscoveryAnimationSignificanceSystemBase_ReceiveTickDebug_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiscoveryGameplay.DiscoveryCharacterBase.BlueprintSimulatePhysWalking
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FEmbarkMovementParamsDynamic Dynamics                       (Parm, OutParm)
// struct FEmbarkMovementParamsStatic Statics                        (ConstParm, Parm, OutParm, ReferenceParm)

void ADiscoveryCharacterBase::BlueprintSimulatePhysWalking(const struct FEmbarkMovementParamsStatic& Statics, struct FEmbarkMovementParamsDynamic* Dynamics)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryCharacterBase.BlueprintSimulatePhysWalking"));

	ADiscoveryCharacterBase_BlueprintSimulatePhysWalking_Params params;
	params.Statics = Statics;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Dynamics != nullptr)
		*Dynamics = params.Dynamics;
}


// Function DiscoveryGameplay.DiscoveryCharacterBase.BlueprintSimulatePhysFlying
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FEmbarkMovementParamsDynamic Dynamics                       (Parm, OutParm)
// struct FEmbarkMovementParamsStatic Statics                        (ConstParm, Parm, OutParm, ReferenceParm)

void ADiscoveryCharacterBase::BlueprintSimulatePhysFlying(const struct FEmbarkMovementParamsStatic& Statics, struct FEmbarkMovementParamsDynamic* Dynamics)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryCharacterBase.BlueprintSimulatePhysFlying"));

	ADiscoveryCharacterBase_BlueprintSimulatePhysFlying_Params params;
	params.Statics = Statics;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Dynamics != nullptr)
		*Dynamics = params.Dynamics;
}


// Function DiscoveryGameplay.DiscoveryCharacterBase.BlueprintSimulatePhysFalling
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FEmbarkMovementParamsDynamic Dynamics                       (Parm, OutParm)
// struct FEmbarkMovementParamsStatic Statics                        (ConstParm, Parm, OutParm, ReferenceParm)

void ADiscoveryCharacterBase::BlueprintSimulatePhysFalling(const struct FEmbarkMovementParamsStatic& Statics, struct FEmbarkMovementParamsDynamic* Dynamics)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryCharacterBase.BlueprintSimulatePhysFalling"));

	ADiscoveryCharacterBase_BlueprintSimulatePhysFalling_Params params;
	params.Statics = Statics;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Dynamics != nullptr)
		*Dynamics = params.Dynamics;
}


// Function DiscoveryGameplay.DiscoveryCharacterBase.BlueprintSimulatePhysCustom
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FEmbarkMovementParamsDynamic Dynamics                       (Parm, OutParm)
// struct FEmbarkMovementParamsStatic Statics                        (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADiscoveryCharacterBase::BlueprintSimulatePhysCustom(const struct FEmbarkMovementParamsStatic& Statics, struct FEmbarkMovementParamsDynamic* Dynamics)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryCharacterBase.BlueprintSimulatePhysCustom"));

	ADiscoveryCharacterBase_BlueprintSimulatePhysCustom_Params params;
	params.Statics = Statics;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Dynamics != nullptr)
		*Dynamics = params.Dynamics;

	return params.ReturnValue;
}


// Function DiscoveryGameplay.DiscoveryCharacterBase.BlueprintRecalculateBaseEyeHeight
// (Event, Protected, BlueprintEvent)

void ADiscoveryCharacterBase::BlueprintRecalculateBaseEyeHeight()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryCharacterBase.BlueprintRecalculateBaseEyeHeight"));

	ADiscoveryCharacterBase_BlueprintRecalculateBaseEyeHeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiscoveryGameplay.DiscoveryCharacterBase.BlueprintGetStandingCapsuleHalfHeight
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ADiscoveryCharacterBase::BlueprintGetStandingCapsuleHalfHeight()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryCharacterBase.BlueprintGetStandingCapsuleHalfHeight"));

	ADiscoveryCharacterBase_BlueprintGetStandingCapsuleHalfHeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DiscoveryGameplay.DiscoveryCharacterBase.BlueprintGetDeltaMoveFromMovingFloor
// (Event, Protected, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                 ProposedMoveDelta              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 SafeMoveDelta                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADiscoveryCharacterBase::BlueprintGetDeltaMoveFromMovingFloor(const struct FVector& ProposedMoveDelta, float DeltaSeconds, struct FVector* SafeMoveDelta)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryCharacterBase.BlueprintGetDeltaMoveFromMovingFloor"));

	ADiscoveryCharacterBase_BlueprintGetDeltaMoveFromMovingFloor_Params params;
	params.ProposedMoveDelta = ProposedMoveDelta;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SafeMoveDelta != nullptr)
		*SafeMoveDelta = params.SafeMoveDelta;
}


// Function DiscoveryGameplay.DiscoveryCharacterBase.BlueprintGetCrouchingCapsuleHalfHeight
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ADiscoveryCharacterBase::BlueprintGetCrouchingCapsuleHalfHeight()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryCharacterBase.BlueprintGetCrouchingCapsuleHalfHeight"));

	ADiscoveryCharacterBase_BlueprintGetCrouchingCapsuleHalfHeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DiscoveryGameplay.DiscoveryCharacterBase.BlueprintCanUnCrouch
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          StandingCapsuleHalfHeight      (Parm, ZeroConstructor, IsPlainOldData)
// float                          OutHeightAdjustment            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADiscoveryCharacterBase::BlueprintCanUnCrouch(float StandingCapsuleHalfHeight, float* OutHeightAdjustment)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryCharacterBase.BlueprintCanUnCrouch"));

	ADiscoveryCharacterBase_BlueprintCanUnCrouch_Params params;
	params.StandingCapsuleHalfHeight = StandingCapsuleHalfHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutHeightAdjustment != nullptr)
		*OutHeightAdjustment = params.OutHeightAdjustment;

	return params.ReturnValue;
}


// Function DiscoveryGameplay.DiscoveryCharacterBase.BlueprintCanCrouch
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          CrouchCapsuleHalfHeight        (Parm, ZeroConstructor, IsPlainOldData)
// float                          OutHeightAdjustment            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADiscoveryCharacterBase::BlueprintCanCrouch(float CrouchCapsuleHalfHeight, float* OutHeightAdjustment)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryCharacterBase.BlueprintCanCrouch"));

	ADiscoveryCharacterBase_BlueprintCanCrouch_Params params;
	params.CrouchCapsuleHalfHeight = CrouchCapsuleHalfHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutHeightAdjustment != nullptr)
		*OutHeightAdjustment = params.OutHeightAdjustment;

	return params.ReturnValue;
}


// Function DiscoveryGameplay.DiscoveryCharacterMovementComponent.SetNewFloor
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FFindFloorResult        NewFloor                       (ConstParm, Parm, OutParm, ReferenceParm)

void UDiscoveryCharacterMovementComponent::SetNewFloor(const struct FFindFloorResult& NewFloor)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryCharacterMovementComponent.SetNewFloor"));

	UDiscoveryCharacterMovementComponent_SetNewFloor_Params params;
	params.NewFloor = NewFloor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiscoveryGameplay.DiscoveryCharacterMovementComponent.OnRep_ReplicatedMovementBaseState
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FEmbarkCharacterMovementBaseState PrevState                      (ConstParm, Parm, OutParm, ReferenceParm)

void UDiscoveryCharacterMovementComponent::OnRep_ReplicatedMovementBaseState(const struct FEmbarkCharacterMovementBaseState& PrevState)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryCharacterMovementComponent.OnRep_ReplicatedMovementBaseState"));

	UDiscoveryCharacterMovementComponent_OnRep_ReplicatedMovementBaseState_Params params;
	params.PrevState = PrevState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiscoveryGameplay.DiscoveryCharacterMovementComponent.IsJumping
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDiscoveryCharacterMovementComponent::IsJumping()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryCharacterMovementComponent.IsJumping"));

	UDiscoveryCharacterMovementComponent_IsJumping_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DiscoveryGameplay.DiscoveryCharacterMovementComponent.GetFloorTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UDiscoveryCharacterMovementComponent::GetFloorTransform()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryCharacterMovementComponent.GetFloorTransform"));

	UDiscoveryCharacterMovementComponent_GetFloorTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DiscoveryGameplay.DiscoveryCharacterMovementComponent.GetFloorPhysMaterial
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UPhysicalMaterial*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPhysicalMaterial* UDiscoveryCharacterMovementComponent::GetFloorPhysMaterial()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryCharacterMovementComponent.GetFloorPhysMaterial"));

	UDiscoveryCharacterMovementComponent_GetFloorPhysMaterial_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DiscoveryGameplay.DiscoveryCharacterMovementComponent.GetFloorComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPrimitiveComponent*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UPrimitiveComponent* UDiscoveryCharacterMovementComponent::GetFloorComponent()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryCharacterMovementComponent.GetFloorComponent"));

	UDiscoveryCharacterMovementComponent_GetFloorComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DiscoveryGameplay.DiscoveryCharacterMovementComponent.GetFloorBoneName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UDiscoveryCharacterMovementComponent::GetFloorBoneName()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryCharacterMovementComponent.GetFloorBoneName"));

	UDiscoveryCharacterMovementComponent_GetFloorBoneName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DiscoveryGameplay.DiscoveryCharacterMovementComponent.CanUnCrouch
// (Final, Native, Private, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          StandingCapsuleHalfHeight      (Parm, ZeroConstructor, IsPlainOldData)
// float                          OutCapsuleHalfHeight           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDiscoveryCharacterMovementComponent::CanUnCrouch(float StandingCapsuleHalfHeight, float* OutCapsuleHalfHeight)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryCharacterMovementComponent.CanUnCrouch"));

	UDiscoveryCharacterMovementComponent_CanUnCrouch_Params params;
	params.StandingCapsuleHalfHeight = StandingCapsuleHalfHeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutCapsuleHalfHeight != nullptr)
		*OutCapsuleHalfHeight = params.OutCapsuleHalfHeight;

	return params.ReturnValue;
}


// Function DiscoveryGameplay.DiscoveryCharacterMovementComponent.CanCrouch
// (Final, Native, Private, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          CrouchingCapsuleHalfHeight     (Parm, ZeroConstructor, IsPlainOldData)
// float                          OutCapsuleHalfHeight           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDiscoveryCharacterMovementComponent::CanCrouch(float CrouchingCapsuleHalfHeight, float* OutCapsuleHalfHeight)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryCharacterMovementComponent.CanCrouch"));

	UDiscoveryCharacterMovementComponent_CanCrouch_Params params;
	params.CrouchingCapsuleHalfHeight = CrouchingCapsuleHalfHeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutCapsuleHalfHeight != nullptr)
		*OutCapsuleHalfHeight = params.OutCapsuleHalfHeight;

	return params.ReturnValue;
}


// Function DiscoveryGameplay.DiscoveryCharacterMovementComponent.BlueprintGetMinAnalogSpeed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDiscoveryCharacterMovementComponent::BlueprintGetMinAnalogSpeed()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryCharacterMovementComponent.BlueprintGetMinAnalogSpeed"));

	UDiscoveryCharacterMovementComponent_BlueprintGetMinAnalogSpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DiscoveryGameplay.DiscoveryCharacterMovementComponent.BlueprintGetMaxSpeed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDiscoveryCharacterMovementComponent::BlueprintGetMaxSpeed()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryCharacterMovementComponent.BlueprintGetMaxSpeed"));

	UDiscoveryCharacterMovementComponent_BlueprintGetMaxSpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DiscoveryGameplay.DiscoveryCharacterMovementGlobalActorBase.UpdateExternalCrouchState
// (Final, Native, Public, HasOutParms)
// Parameters:
// class AEmbarkCharacterBase*    Character                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkMovementParamsDynamic Dynamics                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEmbarkMovementParamsStatic Statics                        (ConstParm, Parm, OutParm, ReferenceParm)

void ADiscoveryCharacterMovementGlobalActorBase::UpdateExternalCrouchState(class AEmbarkCharacterBase* Character, const struct FEmbarkMovementParamsDynamic& Dynamics, const struct FEmbarkMovementParamsStatic& Statics)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryCharacterMovementGlobalActorBase.UpdateExternalCrouchState"));

	ADiscoveryCharacterMovementGlobalActorBase_UpdateExternalCrouchState_Params params;
	params.Character = Character;
	params.Dynamics = Dynamics;
	params.Statics = Statics;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiscoveryGameplay.DiscoveryCharacterMovementGlobalActorBase.UpdateAbilityStatesFromDynamics_Client
// (Final, Native, Public, HasOutParms)
// Parameters:
// class ACharacter*              Character                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkMovementParamsDynamic Dynamics                       (ConstParm, Parm, OutParm, ReferenceParm)

void ADiscoveryCharacterMovementGlobalActorBase::UpdateAbilityStatesFromDynamics_Client(class ACharacter* Character, const struct FEmbarkMovementParamsDynamic& Dynamics)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryCharacterMovementGlobalActorBase.UpdateAbilityStatesFromDynamics_Client"));

	ADiscoveryCharacterMovementGlobalActorBase_UpdateAbilityStatesFromDynamics_Client_Params params;
	params.Character = Character;
	params.Dynamics = Dynamics;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiscoveryGameplay.DiscoveryCharacterMovementGlobalActorBase.StopCrouchingImmediately
// (Final, Native, Public)
// Parameters:
// class ACharacter*              Character                      (Parm, ZeroConstructor, IsPlainOldData)

void ADiscoveryCharacterMovementGlobalActorBase::StopCrouchingImmediately(class ACharacter* Character)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryCharacterMovementGlobalActorBase.StopCrouchingImmediately"));

	ADiscoveryCharacterMovementGlobalActorBase_StopCrouchingImmediately_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiscoveryGameplay.DiscoveryCharacterMovementGlobalActorBase.StopCrouching
// (Final, Native, Public)
// Parameters:
// class ACharacter*              Character                      (Parm, ZeroConstructor, IsPlainOldData)

void ADiscoveryCharacterMovementGlobalActorBase::StopCrouching(class ACharacter* Character)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryCharacterMovementGlobalActorBase.StopCrouching"));

	ADiscoveryCharacterMovementGlobalActorBase_StopCrouching_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiscoveryGameplay.DiscoveryCharacterMovementGlobalActorBase.StartCrouchingImmediately
// (Final, Native, Public)
// Parameters:
// class ACharacter*              Character                      (Parm, ZeroConstructor, IsPlainOldData)

void ADiscoveryCharacterMovementGlobalActorBase::StartCrouchingImmediately(class ACharacter* Character)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryCharacterMovementGlobalActorBase.StartCrouchingImmediately"));

	ADiscoveryCharacterMovementGlobalActorBase_StartCrouchingImmediately_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiscoveryGameplay.DiscoveryCharacterMovementGlobalActorBase.StartCrouching
// (Final, Native, Public)
// Parameters:
// class ACharacter*              Character                      (Parm, ZeroConstructor, IsPlainOldData)

void ADiscoveryCharacterMovementGlobalActorBase::StartCrouching(class ACharacter* Character)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryCharacterMovementGlobalActorBase.StartCrouching"));

	ADiscoveryCharacterMovementGlobalActorBase_StartCrouching_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiscoveryGameplay.DiscoveryCharacterMovementGlobalActorBase.SetCustomTimeSinceGrounded_Server
// (Final, Native, Public)
// Parameters:
// class ACharacter*              Character                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeSinceGrounded              (Parm, ZeroConstructor, IsPlainOldData)

void ADiscoveryCharacterMovementGlobalActorBase::SetCustomTimeSinceGrounded_Server(class ACharacter* Character, float TimeSinceGrounded)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryCharacterMovementGlobalActorBase.SetCustomTimeSinceGrounded_Server"));

	ADiscoveryCharacterMovementGlobalActorBase_SetCustomTimeSinceGrounded_Server_Params params;
	params.Character = Character;
	params.TimeSinceGrounded = TimeSinceGrounded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiscoveryGameplay.DiscoveryCharacterMovementGlobalActorBase.ReceivePostControlledCharacterUnregistered
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AEmbarkCharacterBase*    Character                      (Parm, ZeroConstructor, IsPlainOldData)

void ADiscoveryCharacterMovementGlobalActorBase::ReceivePostControlledCharacterUnregistered(class AEmbarkCharacterBase* Character)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryCharacterMovementGlobalActorBase.ReceivePostControlledCharacterUnregistered"));

	ADiscoveryCharacterMovementGlobalActorBase_ReceivePostControlledCharacterUnregistered_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiscoveryGameplay.DiscoveryCharacterMovementGlobalActorBase.ReceivePostControlledCharacterRegistered
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AEmbarkCharacterBase*    Character                      (Parm, ZeroConstructor, IsPlainOldData)

void ADiscoveryCharacterMovementGlobalActorBase::ReceivePostControlledCharacterRegistered(class AEmbarkCharacterBase* Character)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryCharacterMovementGlobalActorBase.ReceivePostControlledCharacterRegistered"));

	ADiscoveryCharacterMovementGlobalActorBase_ReceivePostControlledCharacterRegistered_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiscoveryGameplay.DiscoveryCharacterMovementGlobalActorBase.ReceiveGetUnCrouchHeightAdjustment
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// class ADiscoveryCharacterBase* Character                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          StandingCapsuleHalfHeight      (Parm, ZeroConstructor, IsPlainOldData)
// float                          OutHeightAdjustment            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADiscoveryCharacterMovementGlobalActorBase::ReceiveGetUnCrouchHeightAdjustment(class ADiscoveryCharacterBase* Character, float StandingCapsuleHalfHeight, float* OutHeightAdjustment)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryCharacterMovementGlobalActorBase.ReceiveGetUnCrouchHeightAdjustment"));

	ADiscoveryCharacterMovementGlobalActorBase_ReceiveGetUnCrouchHeightAdjustment_Params params;
	params.Character = Character;
	params.StandingCapsuleHalfHeight = StandingCapsuleHalfHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutHeightAdjustment != nullptr)
		*OutHeightAdjustment = params.OutHeightAdjustment;

	return params.ReturnValue;
}


// Function DiscoveryGameplay.DiscoveryCharacterMovementGlobalActorBase.ReceiveGetCrouchHeightAdjustment
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// class ADiscoveryCharacterBase* Character                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          CrouchCapsuleHalfHeight        (Parm, ZeroConstructor, IsPlainOldData)
// float                          OutHeightAdjustment            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADiscoveryCharacterMovementGlobalActorBase::ReceiveGetCrouchHeightAdjustment(class ADiscoveryCharacterBase* Character, float CrouchCapsuleHalfHeight, float* OutHeightAdjustment)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryCharacterMovementGlobalActorBase.ReceiveGetCrouchHeightAdjustment"));

	ADiscoveryCharacterMovementGlobalActorBase_ReceiveGetCrouchHeightAdjustment_Params params;
	params.Character = Character;
	params.CrouchCapsuleHalfHeight = CrouchCapsuleHalfHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutHeightAdjustment != nullptr)
		*OutHeightAdjustment = params.OutHeightAdjustment;

	return params.ReturnValue;
}


// Function DiscoveryGameplay.DiscoveryCharacterMovementGlobalActorBase.ReceiveCanMoveWithFloor
// (Native, Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// class ACharacter*              Character                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FFindFloorResult        NewFloor                       (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADiscoveryCharacterMovementGlobalActorBase::ReceiveCanMoveWithFloor(class ACharacter* Character, const struct FFindFloorResult& NewFloor)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryCharacterMovementGlobalActorBase.ReceiveCanMoveWithFloor"));

	ADiscoveryCharacterMovementGlobalActorBase_ReceiveCanMoveWithFloor_Params params;
	params.Character = Character;
	params.NewFloor = NewFloor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DiscoveryGameplay.DiscoveryCharacterMovementGlobalActorBase.JumpImmediately
// (Final, Native, Public)
// Parameters:
// class ACharacter*              Character                      (Parm, ZeroConstructor, IsPlainOldData)

void ADiscoveryCharacterMovementGlobalActorBase::JumpImmediately(class ACharacter* Character)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryCharacterMovementGlobalActorBase.JumpImmediately"));

	ADiscoveryCharacterMovementGlobalActorBase_JumpImmediately_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiscoveryGameplay.DiscoveryCharacterMovementGlobalActorBase.Jump
// (Final, Native, Public)
// Parameters:
// class ACharacter*              Character                      (Parm, ZeroConstructor, IsPlainOldData)

void ADiscoveryCharacterMovementGlobalActorBase::Jump(class ACharacter* Character)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryCharacterMovementGlobalActorBase.Jump"));

	ADiscoveryCharacterMovementGlobalActorBase_Jump_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiscoveryGameplay.DiscoveryCharacterMovementGlobalActorBase.IsCharacterRegisteredAsControlled
// (Final, Native, Public, Const)
// Parameters:
// class ACharacter*              Character                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADiscoveryCharacterMovementGlobalActorBase::IsCharacterRegisteredAsControlled(class ACharacter* Character)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryCharacterMovementGlobalActorBase.IsCharacterRegisteredAsControlled"));

	ADiscoveryCharacterMovementGlobalActorBase_IsCharacterRegisteredAsControlled_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DiscoveryGameplay.DiscoveryCharacterMovementGlobalActorBase.GetRegisteredSimulatedProxyCharacters_Client
// (Final, Native, Public, Const)
// Parameters:
// TArray<class AEmbarkCharacterBase*> ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<class AEmbarkCharacterBase*> ADiscoveryCharacterMovementGlobalActorBase::GetRegisteredSimulatedProxyCharacters_Client()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryCharacterMovementGlobalActorBase.GetRegisteredSimulatedProxyCharacters_Client"));

	ADiscoveryCharacterMovementGlobalActorBase_GetRegisteredSimulatedProxyCharacters_Client_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DiscoveryGameplay.DiscoveryCharacterMovementGlobalActorBase.GetRegisteredControlledCharacters
// (Final, Native, Public, Const)
// Parameters:
// TArray<class AEmbarkCharacterBase*> ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<class AEmbarkCharacterBase*> ADiscoveryCharacterMovementGlobalActorBase::GetRegisteredControlledCharacters()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryCharacterMovementGlobalActorBase.GetRegisteredControlledCharacters"));

	ADiscoveryCharacterMovementGlobalActorBase_GetRegisteredControlledCharacters_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DiscoveryGameplay.DiscoveryCharacterMovementGlobalActorBase.GetMaxSpeed_Server
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// class ACharacter*              Character                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          OutMaxSpeed                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADiscoveryCharacterMovementGlobalActorBase::GetMaxSpeed_Server(class ACharacter* Character, float* OutMaxSpeed)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryCharacterMovementGlobalActorBase.GetMaxSpeed_Server"));

	ADiscoveryCharacterMovementGlobalActorBase_GetMaxSpeed_Server_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutMaxSpeed != nullptr)
		*OutMaxSpeed = params.OutMaxSpeed;

	return params.ReturnValue;
}


// Function DiscoveryGameplay.DiscoveryCharacterMovementGlobalActorBase.GetLatestJumpState
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// class ACharacter*              Character                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkJumpState        JumpState                      (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADiscoveryCharacterMovementGlobalActorBase::GetLatestJumpState(class ACharacter* Character, struct FEmbarkJumpState* JumpState)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryCharacterMovementGlobalActorBase.GetLatestJumpState"));

	ADiscoveryCharacterMovementGlobalActorBase_GetLatestJumpState_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (JumpState != nullptr)
		*JumpState = params.JumpState;

	return params.ReturnValue;
}


// Function DiscoveryGameplay.DiscoveryCharacterMovementGlobalActorBase.GetLatestDynamics
// (Final, Native, Public, HasOutParms)
// Parameters:
// class ACharacter*              Character                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkMovementParamsDynamic OutLatestDynamics              (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADiscoveryCharacterMovementGlobalActorBase::GetLatestDynamics(class ACharacter* Character, struct FEmbarkMovementParamsDynamic* OutLatestDynamics)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryCharacterMovementGlobalActorBase.GetLatestDynamics"));

	ADiscoveryCharacterMovementGlobalActorBase_GetLatestDynamics_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLatestDynamics != nullptr)
		*OutLatestDynamics = params.OutLatestDynamics;

	return params.ReturnValue;
}


// Function DiscoveryGameplay.DiscoveryCharacterMovementGlobalActorBase.CacheSlideJumpState
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// class ACharacter*              Character                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 SlideJumpVelocity              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          Timestamp                      (Parm, ZeroConstructor, IsPlainOldData)

void ADiscoveryCharacterMovementGlobalActorBase::CacheSlideJumpState(class ACharacter* Character, const struct FVector& SlideJumpVelocity, float Timestamp)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryCharacterMovementGlobalActorBase.CacheSlideJumpState"));

	ADiscoveryCharacterMovementGlobalActorBase_CacheSlideJumpState_Params params;
	params.Character = Character;
	params.SlideJumpVelocity = SlideJumpVelocity;
	params.Timestamp = Timestamp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiscoveryGameplay.DiscoveryCharacterMovementGlobalActorBase.CacheJumpState_Client
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// class ACharacter*              Character                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 JumpStartCharacterLocation     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          JumpStartTime                  (Parm, ZeroConstructor, IsPlainOldData)

void ADiscoveryCharacterMovementGlobalActorBase::CacheJumpState_Client(class ACharacter* Character, const struct FVector& JumpStartCharacterLocation, float JumpStartTime)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryCharacterMovementGlobalActorBase.CacheJumpState_Client"));

	ADiscoveryCharacterMovementGlobalActorBase_CacheJumpState_Client_Params params;
	params.Character = Character;
	params.JumpStartCharacterLocation = JumpStartCharacterLocation;
	params.JumpStartTime = JumpStartTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiscoveryGameplay.EmbarkCharacterMovementPrediction.PredictionPreMoveLogic
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkMovementParamsDynamic Dynamics                       (Parm, OutParm)
// struct FEmbarkMovementParamsStatic Statics                        (ConstParm, Parm, OutParm, ReferenceParm)

void UEmbarkCharacterMovementPrediction::STATIC_PredictionPreMoveLogic(const struct FEmbarkMovementParamsStatic& Statics, struct FEmbarkMovementParamsDynamic* Dynamics)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.EmbarkCharacterMovementPrediction.PredictionPreMoveLogic"));

	UEmbarkCharacterMovementPrediction_PredictionPreMoveLogic_Params params;
	params.Statics = Statics;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Dynamics != nullptr)
		*Dynamics = params.Dynamics;
}


// Function DiscoveryGameplay.EmbarkCharacterMovementPrediction.PredictionPostMoveLogic
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkMovementParamsDynamic Dynamics                       (Parm, OutParm)
// struct FEmbarkMovementParamsStatic Statics                        (ConstParm, Parm, OutParm, ReferenceParm)

void UEmbarkCharacterMovementPrediction::STATIC_PredictionPostMoveLogic(const struct FEmbarkMovementParamsStatic& Statics, struct FEmbarkMovementParamsDynamic* Dynamics)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.EmbarkCharacterMovementPrediction.PredictionPostMoveLogic"));

	UEmbarkCharacterMovementPrediction_PredictionPostMoveLogic_Params params;
	params.Statics = Statics;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Dynamics != nullptr)
		*Dynamics = params.Dynamics;
}


// Function DiscoveryGameplay.DiscoveryCheatManagerBase.ServerWalk
// (Final, Net, NetReliable, Native, Event, Private, NetServer)

void UDiscoveryCheatManagerBase::ServerWalk()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryCheatManagerBase.ServerWalk"));

	UDiscoveryCheatManagerBase_ServerWalk_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiscoveryGameplay.DiscoveryCheatManagerBase.ServerTeleport
// (Final, Net, NetReliable, Native, Event, Private, NetServer)

void UDiscoveryCheatManagerBase::ServerTeleport()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryCheatManagerBase.ServerTeleport"));

	UDiscoveryCheatManagerBase_ServerTeleport_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiscoveryGameplay.DiscoveryCheatManagerBase.ServerSummon
// (Final, Net, NetReliable, Native, Event, Private, NetServer)
// Parameters:
// struct FString                 ClassName                      (Parm, ZeroConstructor)

void UDiscoveryCheatManagerBase::ServerSummon(const struct FString& ClassName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryCheatManagerBase.ServerSummon"));

	UDiscoveryCheatManagerBase_ServerSummon_Params params;
	params.ClassName = ClassName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiscoveryGameplay.DiscoveryCheatManagerBase.ServerSlomo
// (Final, Net, NetReliable, Native, Event, Private, NetServer)
// Parameters:
// float                          NewTimeDilation                (Parm, ZeroConstructor, IsPlainOldData)

void UDiscoveryCheatManagerBase::ServerSlomo(float NewTimeDilation)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryCheatManagerBase.ServerSlomo"));

	UDiscoveryCheatManagerBase_ServerSlomo_Params params;
	params.NewTimeDilation = NewTimeDilation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiscoveryGameplay.DiscoveryCheatManagerBase.ServerGod
// (Final, Net, NetReliable, Native, Event, Private, NetServer)

void UDiscoveryCheatManagerBase::ServerGod()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryCheatManagerBase.ServerGod"));

	UDiscoveryCheatManagerBase_ServerGod_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiscoveryGameplay.DiscoveryCheatManagerBase.ServerGhost
// (Final, Net, NetReliable, Native, Event, Private, NetServer)

void UDiscoveryCheatManagerBase::ServerGhost()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryCheatManagerBase.ServerGhost"));

	UDiscoveryCheatManagerBase_ServerGhost_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiscoveryGameplay.DiscoveryCheatManagerBase.ServerFly
// (Final, Net, NetReliable, Native, Event, Private, NetServer)

void UDiscoveryCheatManagerBase::ServerFly()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryCheatManagerBase.ServerFly"));

	UDiscoveryCheatManagerBase_ServerFly_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiscoveryGameplay.DiscoveryCheatManagerBase.ServerDestroyTarget
// (Final, Net, NetReliable, Native, Event, Private, NetServer)

void UDiscoveryCheatManagerBase::ServerDestroyTarget()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryCheatManagerBase.ServerDestroyTarget"));

	UDiscoveryCheatManagerBase_ServerDestroyTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiscoveryGameplay.DiscoveryCheatManagerBase.ServerDestroyPawns
// (Final, Net, NetReliable, Native, Event, Private, NetServer)
// Parameters:
// class UClass*                  aClass                         (Parm, ZeroConstructor, IsPlainOldData)

void UDiscoveryCheatManagerBase::ServerDestroyPawns(class UClass* aClass)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryCheatManagerBase.ServerDestroyPawns"));

	UDiscoveryCheatManagerBase_ServerDestroyPawns_Params params;
	params.aClass = aClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiscoveryGameplay.DiscoveryCheatManagerBase.ServerDestroyAllPawnsExceptTarget
// (Final, Net, NetReliable, Native, Event, Private, NetServer)

void UDiscoveryCheatManagerBase::ServerDestroyAllPawnsExceptTarget()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryCheatManagerBase.ServerDestroyAllPawnsExceptTarget"));

	UDiscoveryCheatManagerBase_ServerDestroyAllPawnsExceptTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiscoveryGameplay.DiscoveryCheatManagerBase.ServerDestroyAll
// (Final, Net, NetReliable, Native, Event, Private, NetServer)
// Parameters:
// class UClass*                  aClass                         (Parm, ZeroConstructor, IsPlainOldData)

void UDiscoveryCheatManagerBase::ServerDestroyAll(class UClass* aClass)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryCheatManagerBase.ServerDestroyAll"));

	UDiscoveryCheatManagerBase_ServerDestroyAll_Params params;
	params.aClass = aClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiscoveryGameplay.DiscoveryCheatManagerBase.ServerDamageTarget
// (Final, Net, NetReliable, Native, Event, Private, NetServer)
// Parameters:
// float                          DamageAmount                   (Parm, ZeroConstructor, IsPlainOldData)

void UDiscoveryCheatManagerBase::ServerDamageTarget(float DamageAmount)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryCheatManagerBase.ServerDamageTarget"));

	UDiscoveryCheatManagerBase_ServerDamageTarget_Params params;
	params.DamageAmount = DamageAmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiscoveryGameplay.DiscoveryCheatManagerBase.ServerChangeSize
// (Final, Net, NetReliable, Native, Event, Private, NetServer)
// Parameters:
// float                          F                              (Parm, ZeroConstructor, IsPlainOldData)

void UDiscoveryCheatManagerBase::ServerChangeSize(float F)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryCheatManagerBase.ServerChangeSize"));

	UDiscoveryCheatManagerBase_ServerChangeSize_Params params;
	params.F = F;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiscoveryGameplay.DiscoveryCheatManagerBase.MulticastSlomo
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// float                          NewTimeDilation                (Parm, ZeroConstructor, IsPlainOldData)

void UDiscoveryCheatManagerBase::MulticastSlomo(float NewTimeDilation)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryCheatManagerBase.MulticastSlomo"));

	UDiscoveryCheatManagerBase_MulticastSlomo_Params params;
	params.NewTimeDilation = NewTimeDilation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiscoveryGameplay.DiscoveryFastReplicatorBreak.RegisterCallback_Client
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FEmbarkFastReplicatorActorOrComponent Ref                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FScriptDelegate         Callback                       (Parm, ZeroConstructor)

void ADiscoveryFastReplicatorBreak::RegisterCallback_Client(const struct FEmbarkFastReplicatorActorOrComponent& Ref, const struct FScriptDelegate& Callback)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryFastReplicatorBreak.RegisterCallback_Client"));

	ADiscoveryFastReplicatorBreak_RegisterCallback_Client_Params params;
	params.Ref = Ref;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiscoveryGameplay.DiscoveryReplicatedDamageDataScriptMixinLibrary.SetTime
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FDiscoveryReplicatedDamageData DamageData                     (Parm, OutParm)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)

void UDiscoveryReplicatedDamageDataScriptMixinLibrary::STATIC_SetTime(float Time, struct FDiscoveryReplicatedDamageData* DamageData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryReplicatedDamageDataScriptMixinLibrary.SetTime"));

	UDiscoveryReplicatedDamageDataScriptMixinLibrary_SetTime_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageData != nullptr)
		*DamageData = params.DamageData;
}


// Function DiscoveryGameplay.DiscoveryReplicatedDamageDataScriptMixinLibrary.SetOrigin
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FDiscoveryReplicatedDamageData DamageData                     (Parm, OutParm)
// struct FVector                 InOrigin                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UDiscoveryReplicatedDamageDataScriptMixinLibrary::STATIC_SetOrigin(const struct FVector& InOrigin, struct FDiscoveryReplicatedDamageData* DamageData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryReplicatedDamageDataScriptMixinLibrary.SetOrigin"));

	UDiscoveryReplicatedDamageDataScriptMixinLibrary_SetOrigin_Params params;
	params.InOrigin = InOrigin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageData != nullptr)
		*DamageData = params.DamageData;
}


// Function DiscoveryGameplay.DiscoveryReplicatedDamageDataScriptMixinLibrary.SetImpactPoint
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FDiscoveryReplicatedDamageData DamageData                     (Parm, OutParm)
// struct FVector                 InImpactPoint                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UDiscoveryReplicatedDamageDataScriptMixinLibrary::STATIC_SetImpactPoint(const struct FVector& InImpactPoint, struct FDiscoveryReplicatedDamageData* DamageData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryReplicatedDamageDataScriptMixinLibrary.SetImpactPoint"));

	UDiscoveryReplicatedDamageDataScriptMixinLibrary_SetImpactPoint_Params params;
	params.InImpactPoint = InImpactPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageData != nullptr)
		*DamageData = params.DamageData;
}


// Function DiscoveryGameplay.DiscoveryReplicatedDamageDataScriptMixinLibrary.SetHealth
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FDiscoveryReplicatedDamageData DamageData                     (Parm, OutParm)
// float                          InMaxHealth                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          InNewHealth                    (Parm, ZeroConstructor, IsPlainOldData)

void UDiscoveryReplicatedDamageDataScriptMixinLibrary::STATIC_SetHealth(float InMaxHealth, float InNewHealth, struct FDiscoveryReplicatedDamageData* DamageData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryReplicatedDamageDataScriptMixinLibrary.SetHealth"));

	UDiscoveryReplicatedDamageDataScriptMixinLibrary_SetHealth_Params params;
	params.InMaxHealth = InMaxHealth;
	params.InNewHealth = InNewHealth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageData != nullptr)
		*DamageData = params.DamageData;
}


// Function DiscoveryGameplay.DiscoveryReplicatedDamageDataScriptMixinLibrary.SetDirection
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FDiscoveryReplicatedDamageData DamageData                     (Parm, OutParm)
// struct FVector                 InDirection                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UDiscoveryReplicatedDamageDataScriptMixinLibrary::STATIC_SetDirection(const struct FVector& InDirection, struct FDiscoveryReplicatedDamageData* DamageData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryReplicatedDamageDataScriptMixinLibrary.SetDirection"));

	UDiscoveryReplicatedDamageDataScriptMixinLibrary_SetDirection_Params params;
	params.InDirection = InDirection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageData != nullptr)
		*DamageData = params.DamageData;
}


// Function DiscoveryGameplay.DiscoveryReplicatedDamageDataScriptMixinLibrary.SetDamageValue
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FDiscoveryReplicatedDamageData DamageData                     (Parm, OutParm)
// float                          InDamage                       (Parm, ZeroConstructor, IsPlainOldData)

void UDiscoveryReplicatedDamageDataScriptMixinLibrary::STATIC_SetDamageValue(float InDamage, struct FDiscoveryReplicatedDamageData* DamageData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryReplicatedDamageDataScriptMixinLibrary.SetDamageValue"));

	UDiscoveryReplicatedDamageDataScriptMixinLibrary_SetDamageValue_Params params;
	params.InDamage = InDamage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageData != nullptr)
		*DamageData = params.DamageData;
}


// Function DiscoveryGameplay.DiscoveryReplicatedDamageDataScriptMixinLibrary.SetDamageType
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FDiscoveryReplicatedDamageData DamageData                     (Parm, OutParm)
// TEnumAsByte<EDSMDamageType>    InDamageType                   (Parm, ZeroConstructor, IsPlainOldData)

void UDiscoveryReplicatedDamageDataScriptMixinLibrary::STATIC_SetDamageType(TEnumAsByte<EDSMDamageType> InDamageType, struct FDiscoveryReplicatedDamageData* DamageData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryReplicatedDamageDataScriptMixinLibrary.SetDamageType"));

	UDiscoveryReplicatedDamageDataScriptMixinLibrary_SetDamageType_Params params;
	params.InDamageType = InDamageType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageData != nullptr)
		*DamageData = params.DamageData;
}


// Function DiscoveryGameplay.DiscoveryReplicatedDamageDataScriptMixinLibrary.SetDamage
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FDiscoveryReplicatedDamageData DamageData                     (Parm, OutParm)
// float                          InDamage                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDSMDamageType>    InDamageType                   (Parm, ZeroConstructor, IsPlainOldData)

void UDiscoveryReplicatedDamageDataScriptMixinLibrary::STATIC_SetDamage(float InDamage, TEnumAsByte<EDSMDamageType> InDamageType, struct FDiscoveryReplicatedDamageData* DamageData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryReplicatedDamageDataScriptMixinLibrary.SetDamage"));

	UDiscoveryReplicatedDamageDataScriptMixinLibrary_SetDamage_Params params;
	params.InDamage = InDamage;
	params.InDamageType = InDamageType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageData != nullptr)
		*DamageData = params.DamageData;
}


// Function DiscoveryGameplay.DiscoveryReplicatedDamageDataScriptMixinLibrary.IsRecentTime
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FDiscoveryReplicatedDamageData DamageData                     (ConstParm, Parm, OutParm, ReferenceParm)
// float                          CurrentTime                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDiscoveryReplicatedDamageDataScriptMixinLibrary::STATIC_IsRecentTime(const struct FDiscoveryReplicatedDamageData& DamageData, float CurrentTime)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryReplicatedDamageDataScriptMixinLibrary.IsRecentTime"));

	UDiscoveryReplicatedDamageDataScriptMixinLibrary_IsRecentTime_Params params;
	params.DamageData = DamageData;
	params.CurrentTime = CurrentTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DiscoveryGameplay.DiscoveryFastReplicatorDamage.UpdateData_Server
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FEmbarkFastReplicatorActorOrComponent Ref                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FDiscoveryReplicatedDamageData NewDamage                      (ConstParm, Parm, OutParm, ReferenceParm)

void ADiscoveryFastReplicatorDamage::UpdateData_Server(const struct FEmbarkFastReplicatorActorOrComponent& Ref, const struct FDiscoveryReplicatedDamageData& NewDamage)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryFastReplicatorDamage.UpdateData_Server"));

	ADiscoveryFastReplicatorDamage_UpdateData_Server_Params params;
	params.Ref = Ref;
	params.NewDamage = NewDamage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiscoveryGameplay.DiscoveryFastReplicatorDamage.RegisterCallback_Client
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FEmbarkFastReplicatorActorOrComponent Ref                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FScriptDelegate         Callback                       (Parm, ZeroConstructor)

void ADiscoveryFastReplicatorDamage::RegisterCallback_Client(const struct FEmbarkFastReplicatorActorOrComponent& Ref, const struct FScriptDelegate& Callback)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryFastReplicatorDamage.RegisterCallback_Client"));

	ADiscoveryFastReplicatorDamage_RegisterCallback_Client_Params params;
	params.Ref = Ref;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiscoveryGameplay.DiscoveryGameplayUtils.UnloadStreamLevelDebug
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   LevelName                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FLatentActionInfo       LatentInfo                     (Parm)
// bool                           bShouldBlockOnUnload           (Parm, ZeroConstructor, IsPlainOldData)

void UDiscoveryGameplayUtils::STATIC_UnloadStreamLevelDebug(class UObject* WorldContextObject, const struct FName& LevelName, const struct FLatentActionInfo& LatentInfo, bool bShouldBlockOnUnload)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryGameplayUtils.UnloadStreamLevelDebug"));

	UDiscoveryGameplayUtils_UnloadStreamLevelDebug_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LevelName = LevelName;
	params.LatentInfo = LatentInfo;
	params.bShouldBlockOnUnload = bShouldBlockOnUnload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiscoveryGameplay.DiscoveryGameplayUtils.StopReplay
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWorld*                  _World                         (Parm, ZeroConstructor, IsPlainOldData)

void UDiscoveryGameplayUtils::STATIC_StopReplay(class UWorld* _World)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryGameplayUtils.StopReplay"));

	UDiscoveryGameplayUtils_StopReplay_Params params;
	params._World = _World;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiscoveryGameplay.DiscoveryGameplayUtils.StartRecordingReplay
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWorld*                  _World                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReplayName                     (Parm, ZeroConstructor)

void UDiscoveryGameplayUtils::STATIC_StartRecordingReplay(class UWorld* _World, const struct FString& ReplayName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryGameplayUtils.StartRecordingReplay"));

	UDiscoveryGameplayUtils_StartRecordingReplay_Params params;
	params._World = _World;
	params.ReplayName = ReplayName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiscoveryGameplay.DiscoveryGameplayUtils.LoadStreamLevelDebug
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   LevelName                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bMakeVisibleAfterLoad          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bShouldBlockOnLoad             (Parm, ZeroConstructor, IsPlainOldData)
// struct FLatentActionInfo       LatentInfo                     (Parm)

void UDiscoveryGameplayUtils::STATIC_LoadStreamLevelDebug(class UObject* WorldContextObject, const struct FName& LevelName, bool bMakeVisibleAfterLoad, bool bShouldBlockOnLoad, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryGameplayUtils.LoadStreamLevelDebug"));

	UDiscoveryGameplayUtils_LoadStreamLevelDebug_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LevelName = LevelName;
	params.bMakeVisibleAfterLoad = bMakeVisibleAfterLoad;
	params.bShouldBlockOnLoad = bShouldBlockOnLoad;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiscoveryGameplay.DiscoveryGameplayUtils.IsReplayRunningAndDone
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWorld*                  _World                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDiscoveryGameplayUtils::STATIC_IsReplayRunningAndDone(class UWorld* _World)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryGameplayUtils.IsReplayRunningAndDone"));

	UDiscoveryGameplayUtils_IsReplayRunningAndDone_Params params;
	params._World = _World;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DiscoveryGameplay.DiscoveryGameplayUtils.IsReplayRunning
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWorld*                  _World                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDiscoveryGameplayUtils::STATIC_IsReplayRunning(class UWorld* _World)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryGameplayUtils.IsReplayRunning"));

	UDiscoveryGameplayUtils_IsReplayRunning_Params params;
	params._World = _World;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DiscoveryGameplay.DiscoveryGameplayUtils.GetNumberOfNonSpectators
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UDiscoveryGameplayUtils::STATIC_GetNumberOfNonSpectators(class UObject* WorldContextObject)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryGameplayUtils.GetNumberOfNonSpectators"));

	UDiscoveryGameplayUtils_GetNumberOfNonSpectators_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DiscoveryGameplay.DiscoveryGameplayUtils.GetBoneNameFromBodyIndex
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UPrimitiveComponent*     InPrimitiveComponent           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InIndex                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UDiscoveryGameplayUtils::STATIC_GetBoneNameFromBodyIndex(class UPrimitiveComponent* InPrimitiveComponent, int InIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryGameplayUtils.GetBoneNameFromBodyIndex"));

	UDiscoveryGameplayUtils_GetBoneNameFromBodyIndex_Params params;
	params.InPrimitiveComponent = InPrimitiveComponent;
	params.InIndex = InIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DiscoveryGameplay.DiscoveryGameplayUtils.CanOnlyBeSpectator
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class APlayerState*            PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDiscoveryGameplayUtils::STATIC_CanOnlyBeSpectator(class UObject* WorldContextObject, class APlayerState* PlayerState)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryGameplayUtils.CanOnlyBeSpectator"));

	UDiscoveryGameplayUtils_CanOnlyBeSpectator_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DiscoveryGameplay.DiscoveryGameplayUtils.ApplyDamageToDestructible
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FBoneDamage>     DamagedBones                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UActorComponent*         TargetDestructible             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDiscoveryGameplayUtils::STATIC_ApplyDamageToDestructible(TArray<struct FBoneDamage> DamagedBones, class UActorComponent* TargetDestructible)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryGameplayUtils.ApplyDamageToDestructible"));

	UDiscoveryGameplayUtils_ApplyDamageToDestructible_Params params;
	params.DamagedBones = DamagedBones;
	params.TargetDestructible = TargetDestructible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiscoveryGameplay.DiscoveryGlobalActorFactorySubsystemBase.GetEmbarkAnimStateUpdaterSystem
// (Final, Native, Public)
// Parameters:
// class AEmbarkAnimStateUpdaterSystem* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AEmbarkAnimStateUpdaterSystem* UDiscoveryGlobalActorFactorySubsystemBase::GetEmbarkAnimStateUpdaterSystem()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryGlobalActorFactorySubsystemBase.GetEmbarkAnimStateUpdaterSystem"));

	UDiscoveryGlobalActorFactorySubsystemBase_GetEmbarkAnimStateUpdaterSystem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DiscoveryGameplay.DiscoveryGlobalActorFactorySubsystemBase.GetDamageFastReplicator
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ADiscoveryFastReplicatorDamage* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ADiscoveryFastReplicatorDamage* UDiscoveryGlobalActorFactorySubsystemBase::GetDamageFastReplicator()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryGlobalActorFactorySubsystemBase.GetDamageFastReplicator"));

	UDiscoveryGlobalActorFactorySubsystemBase_GetDamageFastReplicator_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DiscoveryGameplay.DiscoveryGlobalActorFactorySubsystemBase.GetBreakFastReplicator
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ADiscoveryFastReplicatorBreak* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ADiscoveryFastReplicatorBreak* UDiscoveryGlobalActorFactorySubsystemBase::GetBreakFastReplicator()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryGlobalActorFactorySubsystemBase.GetBreakFastReplicator"));

	UDiscoveryGlobalActorFactorySubsystemBase_GetBreakFastReplicator_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DiscoveryGameplay.DiscoveryPlayerControllerBase.StopInstantReplay
// (Final, Native, Public, BlueprintCallable)

void ADiscoveryPlayerControllerBase::StopInstantReplay()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryPlayerControllerBase.StopInstantReplay"));

	ADiscoveryPlayerControllerBase_StopInstantReplay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiscoveryGameplay.DiscoveryPlayerControllerBase.PlayInstantReplay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APawn*                   PawnToFocus                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeToRewind                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          StartDelay                     (Parm, ZeroConstructor, IsPlainOldData)

void ADiscoveryPlayerControllerBase::PlayInstantReplay(class APawn* PawnToFocus, float TimeToRewind, float StartDelay)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryPlayerControllerBase.PlayInstantReplay"));

	ADiscoveryPlayerControllerBase_PlayInstantReplay_Params params;
	params.PawnToFocus = PawnToFocus;
	params.TimeToRewind = TimeToRewind;
	params.StartDelay = StartDelay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiscoveryGameplay.DiscoveryPlayerControllerBase.IsInstantReplaySupported
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADiscoveryPlayerControllerBase::IsInstantReplaySupported()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryPlayerControllerBase.IsInstantReplaySupported"));

	ADiscoveryPlayerControllerBase_IsInstantReplaySupported_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DiscoveryGameplay.DiscoveryPlayerStateBase.GetUniqueIdHash
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ADiscoveryPlayerStateBase::GetUniqueIdHash()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DiscoveryGameplay.DiscoveryPlayerStateBase.GetUniqueIdHash"));

	ADiscoveryPlayerStateBase_GetUniqueIdHash_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
