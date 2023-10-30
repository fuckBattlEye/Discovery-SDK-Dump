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

// Function EmbarkMovement.EmbarkCharacterMovementComponentBase.SetOverrideCapsuleSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bOverrideCapsuleRadius         (Parm, ZeroConstructor, IsPlainOldData)
// float                          NewRadiusOverride              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOverrideCapsuleHeight         (Parm, ZeroConstructor, IsPlainOldData)
// float                          NewHeightOverride              (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkCharacterMovementComponentBase::SetOverrideCapsuleSize(bool bOverrideCapsuleRadius, float NewRadiusOverride, bool bOverrideCapsuleHeight, float NewHeightOverride)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkMovement.EmbarkCharacterMovementComponentBase.SetOverrideCapsuleSize"));

	UEmbarkCharacterMovementComponentBase_SetOverrideCapsuleSize_Params params;
	params.bOverrideCapsuleRadius = bOverrideCapsuleRadius;
	params.NewRadiusOverride = NewRadiusOverride;
	params.bOverrideCapsuleHeight = bOverrideCapsuleHeight;
	params.NewHeightOverride = NewHeightOverride;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkMovement.EmbarkCharacterMovementComponentBase.GetCapsuleRadiusOverride
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UEmbarkCharacterMovementComponentBase::GetCapsuleRadiusOverride()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkMovement.EmbarkCharacterMovementComponentBase.GetCapsuleRadiusOverride"));

	UEmbarkCharacterMovementComponentBase_GetCapsuleRadiusOverride_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkMovement.EmbarkCharacterMovementComponentBase.GetCapsuleHeightOverride
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UEmbarkCharacterMovementComponentBase::GetCapsuleHeightOverride()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkMovement.EmbarkCharacterMovementComponentBase.GetCapsuleHeightOverride"));

	UEmbarkCharacterMovementComponentBase_GetCapsuleHeightOverride_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkMovement.EmbarkCharacterMovementComponent.OnRep_ReplicatedTransform
// (Final, Native, Private)

void UEmbarkCharacterMovementComponent::OnRep_ReplicatedTransform()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkMovement.EmbarkCharacterMovementComponent.OnRep_ReplicatedTransform"));

	UEmbarkCharacterMovementComponent_OnRep_ReplicatedTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkMovement.EmbarkCharacterMovementComponent.IsCheatFlying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkCharacterMovementComponent::IsCheatFlying()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkMovement.EmbarkCharacterMovementComponent.IsCheatFlying"));

	UEmbarkCharacterMovementComponent_IsCheatFlying_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkMovement.EmbarkCharacterMovementComponent.GetRootWarpSpace
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FEmbarkRootWarpSpace    ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEmbarkRootWarpSpace UEmbarkCharacterMovementComponent::GetRootWarpSpace()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkMovement.EmbarkCharacterMovementComponent.GetRootWarpSpace"));

	UEmbarkCharacterMovementComponent_GetRootWarpSpace_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkMovement.EmbarkCharacterMovementComponent.GetRootMotionInputScale
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEmbarkRootMotionInputScale ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEmbarkRootMotionInputScale UEmbarkCharacterMovementComponent::GetRootMotionInputScale()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkMovement.EmbarkCharacterMovementComponent.GetRootMotionInputScale"));

	UEmbarkCharacterMovementComponent_GetRootMotionInputScale_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkMovement.EmbarkCharacterMovementComponent.GetReplicatedBaseState
// (Native, Public, Const)
// Parameters:
// struct FEmbarkCharacterMovementBaseState ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEmbarkCharacterMovementBaseState UEmbarkCharacterMovementComponent::GetReplicatedBaseState()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkMovement.EmbarkCharacterMovementComponent.GetReplicatedBaseState"));

	UEmbarkCharacterMovementComponent_GetReplicatedBaseState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkMovement.EmbarkCharacterMovementComponent.GetMutableReplicatedBaseState
// (Native, Public)
// Parameters:
// struct FEmbarkCharacterMovementBaseState ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEmbarkCharacterMovementBaseState UEmbarkCharacterMovementComponent::GetMutableReplicatedBaseState()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkMovement.EmbarkCharacterMovementComponent.GetMutableReplicatedBaseState"));

	UEmbarkCharacterMovementComponent_GetMutableReplicatedBaseState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkMovement.EmbarkCharacterMovementComponent.GetGroundNormal
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)

struct FVector UEmbarkCharacterMovementComponent::GetGroundNormal()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkMovement.EmbarkCharacterMovementComponent.GetGroundNormal"));

	UEmbarkCharacterMovementComponent_GetGroundNormal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkMovement.EmbarkCharacterMovementComponent.GetEmbarkCharacterMovementStateInterpData
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UEmbarkCharacterMovementStateInterpolatorDataBase* ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UEmbarkCharacterMovementStateInterpolatorDataBase* UEmbarkCharacterMovementComponent::GetEmbarkCharacterMovementStateInterpData()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkMovement.EmbarkCharacterMovementComponent.GetEmbarkCharacterMovementStateInterpData"));

	UEmbarkCharacterMovementComponent_GetEmbarkCharacterMovementStateInterpData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkMovement.EmbarkCharacterMovementComponent.ClearRootMotionSources
// (Final, Native, Public, BlueprintCallable)

void UEmbarkCharacterMovementComponent::ClearRootMotionSources()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkMovement.EmbarkCharacterMovementComponent.ClearRootMotionSources"));

	UEmbarkCharacterMovementComponent_ClearRootMotionSources_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkMovement.EmbarkCharacterMovementGlobalActorBase.UpdateDynamicMovementParams
// (Native, Public, HasOutParms, Const)
// Parameters:
// struct FEmbarkMovementParamsDynamic Dynamics                       (Parm, OutParm)
// struct FEmbarkMovementParamsStatic Statics                        (ConstParm, Parm, OutParm, ReferenceParm)

void AEmbarkCharacterMovementGlobalActorBase::UpdateDynamicMovementParams(const struct FEmbarkMovementParamsStatic& Statics, struct FEmbarkMovementParamsDynamic* Dynamics)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkMovement.EmbarkCharacterMovementGlobalActorBase.UpdateDynamicMovementParams"));

	AEmbarkCharacterMovementGlobalActorBase_UpdateDynamicMovementParams_Params params;
	params.Statics = Statics;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Dynamics != nullptr)
		*Dynamics = params.Dynamics;
}


// Function EmbarkMovement.EmbarkCharacterMovementGlobalActorBase.GenerateStaticMovementParams
// (Native, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FEmbarkMovementParamsStatic OutResult                      (Parm, OutParm)
// class ACharacter*              Character                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 InputVector                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           bWantsToJump                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWantsToCrouch                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          OverrideDeltaSeconds           (Parm, ZeroConstructor, IsPlainOldData)

void AEmbarkCharacterMovementGlobalActorBase::GenerateStaticMovementParams(class ACharacter* Character, const struct FVector& InputVector, bool bWantsToJump, bool bWantsToCrouch, float OverrideDeltaSeconds, struct FEmbarkMovementParamsStatic* OutResult)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkMovement.EmbarkCharacterMovementGlobalActorBase.GenerateStaticMovementParams"));

	AEmbarkCharacterMovementGlobalActorBase_GenerateStaticMovementParams_Params params;
	params.Character = Character;
	params.InputVector = InputVector;
	params.bWantsToJump = bWantsToJump;
	params.bWantsToCrouch = bWantsToCrouch;
	params.OverrideDeltaSeconds = OverrideDeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutResult != nullptr)
		*OutResult = params.OutResult;
}


// Function EmbarkMovement.EmbarkCharacterMovementGlobalActorBase.GenerateDynamicMovementParams
// (Native, Public, HasOutParms, Const)
// Parameters:
// struct FEmbarkMovementParamsStatic Statics                        (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEmbarkCharacterMovementBaseState BaseState                      (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEmbarkMovementParamsDynamic ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEmbarkMovementParamsDynamic AEmbarkCharacterMovementGlobalActorBase::GenerateDynamicMovementParams(const struct FEmbarkMovementParamsStatic& Statics, const struct FEmbarkCharacterMovementBaseState& BaseState)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkMovement.EmbarkCharacterMovementGlobalActorBase.GenerateDynamicMovementParams"));

	AEmbarkCharacterMovementGlobalActorBase_GenerateDynamicMovementParams_Params params;
	params.Statics = Statics;
	params.BaseState = BaseState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkMovement.EmbarkCharacterMovementGlobalActorBase.BlueprintModifyInputVector
// (Event, Protected, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// class ACharacter*              Character                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 CurrentInputVector             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AEmbarkCharacterMovementGlobalActorBase::BlueprintModifyInputVector(class ACharacter* Character, struct FVector* CurrentInputVector)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkMovement.EmbarkCharacterMovementGlobalActorBase.BlueprintModifyInputVector"));

	AEmbarkCharacterMovementGlobalActorBase_BlueprintModifyInputVector_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentInputVector != nullptr)
		*CurrentInputVector = params.CurrentInputVector;
}


// Function EmbarkMovement.EmbarkCharacterMovementGlobalActorBase.BlueprintGetMaxSpeedModifier
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ACharacter*              Character                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AEmbarkCharacterMovementGlobalActorBase::BlueprintGetMaxSpeedModifier(class ACharacter* Character)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkMovement.EmbarkCharacterMovementGlobalActorBase.BlueprintGetMaxSpeedModifier"));

	AEmbarkCharacterMovementGlobalActorBase_BlueprintGetMaxSpeedModifier_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkMovement.EmbarkCharacterMovementGlobalActorBase.BlueprintGetMaxSpeed
// (Native, Event, Protected, HasOutParms, BlueprintEvent, Const)
// Parameters:
// struct FEmbarkMovementParamsStatic Statics                        (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEmbarkMovementParamsDynamic Dynamics                       (ConstParm, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AEmbarkCharacterMovementGlobalActorBase::BlueprintGetMaxSpeed(const struct FEmbarkMovementParamsStatic& Statics, const struct FEmbarkMovementParamsDynamic& Dynamics)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkMovement.EmbarkCharacterMovementGlobalActorBase.BlueprintGetMaxSpeed"));

	AEmbarkCharacterMovementGlobalActorBase_BlueprintGetMaxSpeed_Params params;
	params.Statics = Statics;
	params.Dynamics = Dynamics;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkMovement.EmbarkCharacterMovementGlobalActorBase.BlueprintGetGravityScaleModifier
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ACharacter*              Character                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AEmbarkCharacterMovementGlobalActorBase::BlueprintGetGravityScaleModifier(class ACharacter* Character)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkMovement.EmbarkCharacterMovementGlobalActorBase.BlueprintGetGravityScaleModifier"));

	AEmbarkCharacterMovementGlobalActorBase_BlueprintGetGravityScaleModifier_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkMovement.EmbarkCharacterMovementGlobalActorBase.BlueprintGetAirControlModifier
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ACharacter*              Character                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AEmbarkCharacterMovementGlobalActorBase::BlueprintGetAirControlModifier(class ACharacter* Character)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkMovement.EmbarkCharacterMovementGlobalActorBase.BlueprintGetAirControlModifier"));

	AEmbarkCharacterMovementGlobalActorBase_BlueprintGetAirControlModifier_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkMovement.EmbarkCharacterMovementGlobalActorBase.BlueprintGenerateStaticMovementParams
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// class ACharacter*              Character                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkMovementParamsStatic OutStatics                     (Parm, OutParm)

void AEmbarkCharacterMovementGlobalActorBase::BlueprintGenerateStaticMovementParams(class ACharacter* Character, struct FEmbarkMovementParamsStatic* OutStatics)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkMovement.EmbarkCharacterMovementGlobalActorBase.BlueprintGenerateStaticMovementParams"));

	AEmbarkCharacterMovementGlobalActorBase_BlueprintGenerateStaticMovementParams_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutStatics != nullptr)
		*OutStatics = params.OutStatics;
}


// Function EmbarkMovement.EmbarkPawnMovementComponent.SetAvoidanceEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkPawnMovementComponent::SetAvoidanceEnabled(bool bEnable)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkMovement.EmbarkPawnMovementComponent.SetAvoidanceEnabled"));

	UEmbarkPawnMovementComponent_SetAvoidanceEnabled_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkMovement.EmbarkPawnMovementComponent.GetAvoidanceVelocity
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UEmbarkPawnMovementComponent::GetAvoidanceVelocity()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkMovement.EmbarkPawnMovementComponent.GetAvoidanceVelocity"));

	UEmbarkPawnMovementComponent_GetAvoidanceVelocity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkMovement.EmbarkMovementBlockedFloorsContainerMixinLibrary.IsFloorBlocked
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkMovementBlockedFloorsContainer Container                      (ConstParm, Parm, OutParm, ReferenceParm)
// class AActor*                  InBlockedFloorActor            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkMovementBlockedFloorsContainerMixinLibrary::STATIC_IsFloorBlocked(const struct FEmbarkMovementBlockedFloorsContainer& Container, class AActor* InBlockedFloorActor)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkMovement.EmbarkMovementBlockedFloorsContainerMixinLibrary.IsFloorBlocked"));

	UEmbarkMovementBlockedFloorsContainerMixinLibrary_IsFloorBlocked_Params params;
	params.Container = Container;
	params.InBlockedFloorActor = InBlockedFloorActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkMovement.EmbarkMovementBlockedFloorsContainerMixinLibrary.FillBlockedFloors
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkMovementBlockedFloorsContainer Container                      (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<class AActor*>          InOutBlockedFloorActors        (Parm, OutParm, ZeroConstructor)

void UEmbarkMovementBlockedFloorsContainerMixinLibrary::STATIC_FillBlockedFloors(const struct FEmbarkMovementBlockedFloorsContainer& Container, TArray<class AActor*>* InOutBlockedFloorActors)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkMovement.EmbarkMovementBlockedFloorsContainerMixinLibrary.FillBlockedFloors"));

	UEmbarkMovementBlockedFloorsContainerMixinLibrary_FillBlockedFloors_Params params;
	params.Container = Container;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InOutBlockedFloorActors != nullptr)
		*InOutBlockedFloorActors = params.InOutBlockedFloorActors;
}


// Function EmbarkMovement.EmbarkMovementBlockedFloorsContainerMixinLibrary.AddBlockedFloor
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkMovementBlockedFloorsContainer Container                      (Parm, OutParm)
// class AActor*                  InBlockedFloorActor            (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkMovementBlockedFloorsContainerMixinLibrary::STATIC_AddBlockedFloor(class AActor* InBlockedFloorActor, struct FEmbarkMovementBlockedFloorsContainer* Container)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkMovement.EmbarkMovementBlockedFloorsContainerMixinLibrary.AddBlockedFloor"));

	UEmbarkMovementBlockedFloorsContainerMixinLibrary_AddBlockedFloor_Params params;
	params.InBlockedFloorActor = InBlockedFloorActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Container != nullptr)
		*Container = params.Container;
}


// Function EmbarkMovement.EmbarkMovementParamsDynamicMixinLibrary.GetCapsuleHalfHeight
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkMovementParamsDynamic Dynamics                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEmbarkMovementParamsStatic Statics                        (ConstParm, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UEmbarkMovementParamsDynamicMixinLibrary::STATIC_GetCapsuleHalfHeight(const struct FEmbarkMovementParamsDynamic& Dynamics, const struct FEmbarkMovementParamsStatic& Statics)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkMovement.EmbarkMovementParamsDynamicMixinLibrary.GetCapsuleHalfHeight"));

	UEmbarkMovementParamsDynamicMixinLibrary_GetCapsuleHalfHeight_Params params;
	params.Dynamics = Dynamics;
	params.Statics = Statics;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkMovement.EmbarkMovementFunctionLibrary.CalcVelocity
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkMovementParamsDynamic Dynamics                       (Parm, OutParm)
// struct FEmbarkMovementParamsStatic Statics                        (ConstParm, Parm, OutParm, ReferenceParm)

void UEmbarkMovementFunctionLibrary::STATIC_CalcVelocity(const struct FEmbarkMovementParamsStatic& Statics, struct FEmbarkMovementParamsDynamic* Dynamics)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkMovement.EmbarkMovementFunctionLibrary.CalcVelocity"));

	UEmbarkMovementFunctionLibrary_CalcVelocity_Params params;
	params.Statics = Statics;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Dynamics != nullptr)
		*Dynamics = params.Dynamics;
}


// Function EmbarkMovement.EmbarkCharacterMovementStaticCallerBase.ReceiveGetUnCrouchHeightAdjustment
// (Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// struct FEmbarkMovementParamsDynamic Dynamics                       (Parm, OutParm)
// struct FEmbarkMovementParamsStatic Statics                        (ConstParm, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UEmbarkCharacterMovementStaticCallerBase::ReceiveGetUnCrouchHeightAdjustment(const struct FEmbarkMovementParamsStatic& Statics, struct FEmbarkMovementParamsDynamic* Dynamics)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkMovement.EmbarkCharacterMovementStaticCallerBase.ReceiveGetUnCrouchHeightAdjustment"));

	UEmbarkCharacterMovementStaticCallerBase_ReceiveGetUnCrouchHeightAdjustment_Params params;
	params.Statics = Statics;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Dynamics != nullptr)
		*Dynamics = params.Dynamics;

	return params.ReturnValue;
}


// Function EmbarkMovement.EmbarkRootWarpSpaceMixinLibrary.UpdateTransforms
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FEmbarkRootWarpSpace    RootwarpSpaceTransformData     (Parm, OutParm)
// struct FTransform              OutStartTransform              (Parm, OutParm, IsPlainOldData)
// struct FTransform              OutEndTransform                (Parm, OutParm, IsPlainOldData)

void UEmbarkRootWarpSpaceMixinLibrary::STATIC_UpdateTransforms(struct FEmbarkRootWarpSpace* RootwarpSpaceTransformData, struct FTransform* OutStartTransform, struct FTransform* OutEndTransform)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkMovement.EmbarkRootWarpSpaceMixinLibrary.UpdateTransforms"));

	UEmbarkRootWarpSpaceMixinLibrary_UpdateTransforms_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RootwarpSpaceTransformData != nullptr)
		*RootwarpSpaceTransformData = params.RootwarpSpaceTransformData;
	if (OutStartTransform != nullptr)
		*OutStartTransform = params.OutStartTransform;
	if (OutEndTransform != nullptr)
		*OutEndTransform = params.OutEndTransform;
}


// Function EmbarkMovement.EmbarkRootWarpSpaceMixinLibrary.GetAttachedToComponent
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkRootWarpSpace    RootwarpSpaceTransformData     (ConstParm, Parm, OutParm, ReferenceParm)
// class USceneComponent*         ReturnValue                    (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USceneComponent* UEmbarkRootWarpSpaceMixinLibrary::STATIC_GetAttachedToComponent(const struct FEmbarkRootWarpSpace& RootwarpSpaceTransformData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkMovement.EmbarkRootWarpSpaceMixinLibrary.GetAttachedToComponent"));

	UEmbarkRootWarpSpaceMixinLibrary_GetAttachedToComponent_Params params;
	params.RootwarpSpaceTransformData = RootwarpSpaceTransformData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkMovement.EmbarkRootWarpSpaceMixinLibrary.GetAttachedToBone
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkRootWarpSpace    RootwarpSpaceTransformData     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UEmbarkRootWarpSpaceMixinLibrary::STATIC_GetAttachedToBone(const struct FEmbarkRootWarpSpace& RootwarpSpaceTransformData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkMovement.EmbarkRootWarpSpaceMixinLibrary.GetAttachedToBone"));

	UEmbarkRootWarpSpaceMixinLibrary_GetAttachedToBone_Params params;
	params.RootwarpSpaceTransformData = RootwarpSpaceTransformData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkMovement.EmbarkServersideReplicatedInputScriptMixinLibrary.GetBool
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkServersideReplicatedInput Input                          (ConstParm, Parm, OutParm, ReferenceParm)
// struct FName                   InputName                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkServersideReplicatedInputScriptMixinLibrary::STATIC_GetBool(const struct FEmbarkServersideReplicatedInput& Input, const struct FName& InputName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkMovement.EmbarkServersideReplicatedInputScriptMixinLibrary.GetBool"));

	UEmbarkServersideReplicatedInputScriptMixinLibrary_GetBool_Params params;
	params.Input = Input;
	params.InputName = InputName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkMovement.EmbarkServersideInputReplicationComponent.StopInputGeneration
// (Final, Native, Public, BlueprintCallable)

void UEmbarkServersideInputReplicationComponent::StopInputGeneration()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkMovement.EmbarkServersideInputReplicationComponent.StopInputGeneration"));

	UEmbarkServersideInputReplicationComponent_StopInputGeneration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkMovement.EmbarkServersideInputReplicationComponent.StartInputGeneration
// (Final, Native, Public, BlueprintCallable)

void UEmbarkServersideInputReplicationComponent::StartInputGeneration()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkMovement.EmbarkServersideInputReplicationComponent.StartInputGeneration"));

	UEmbarkServersideInputReplicationComponent_StartInputGeneration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkMovement.EmbarkServersideInputReplicationComponent.ServerInputProcessingCanBeStarted
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)

void UEmbarkServersideInputReplicationComponent::ServerInputProcessingCanBeStarted()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkMovement.EmbarkServersideInputReplicationComponent.ServerInputProcessingCanBeStarted"));

	UEmbarkServersideInputReplicationComponent_ServerInputProcessingCanBeStarted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkMovement.EmbarkServersideInputReplicationComponent.RecalculatePendingInput
// (Final, Native, Public, BlueprintCallable, Const)

void UEmbarkServersideInputReplicationComponent::RecalculatePendingInput()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkMovement.EmbarkServersideInputReplicationComponent.RecalculatePendingInput"));

	UEmbarkServersideInputReplicationComponent_RecalculatePendingInput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkMovement.EmbarkServersideInputReplicationComponent.IsInputNewer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// unsigned char                  NewInputFrame                  (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  BaseInputFrame                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkServersideInputReplicationComponent::IsInputNewer(unsigned char NewInputFrame, unsigned char BaseInputFrame)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkMovement.EmbarkServersideInputReplicationComponent.IsInputNewer"));

	UEmbarkServersideInputReplicationComponent_IsInputNewer_Params params;
	params.NewInputFrame = NewInputFrame;
	params.BaseInputFrame = BaseInputFrame;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkMovement.EmbarkServersideInputReplicationComponent.GetServerLatestInputFrame_Server
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char UEmbarkServersideInputReplicationComponent::GetServerLatestInputFrame_Server()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkMovement.EmbarkServersideInputReplicationComponent.GetServerLatestInputFrame_Server"));

	UEmbarkServersideInputReplicationComponent_GetServerLatestInputFrame_Server_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkMovement.EmbarkServersideInputReplicationComponent.GetNewInputs
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FEmbarkServersideReplicatedInput> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FEmbarkServersideReplicatedInput> UEmbarkServersideInputReplicationComponent::GetNewInputs()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkMovement.EmbarkServersideInputReplicationComponent.GetNewInputs"));

	UEmbarkServersideInputReplicationComponent_GetNewInputs_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkMovement.EmbarkServersideInputReplicationComponent.GetLatestInputProcessingTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UEmbarkServersideInputReplicationComponent::GetLatestInputProcessingTime()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkMovement.EmbarkServersideInputReplicationComponent.GetLatestInputProcessingTime"));

	UEmbarkServersideInputReplicationComponent_GetLatestInputProcessingTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkMovement.EmbarkServersideInputReplicationComponent.GetLatestInput
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEmbarkServersideReplicatedInput ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

struct FEmbarkServersideReplicatedInput UEmbarkServersideInputReplicationComponent::GetLatestInput()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkMovement.EmbarkServersideInputReplicationComponent.GetLatestInput"));

	UEmbarkServersideInputReplicationComponent_GetLatestInput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkMovement.EmbarkServersideInputReplicationComponent.GetInputTimestamp
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UEmbarkServersideInputReplicationComponent::GetInputTimestamp()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkMovement.EmbarkServersideInputReplicationComponent.GetInputTimestamp"));

	UEmbarkServersideInputReplicationComponent_GetInputTimestamp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkMovement.EmbarkServersideInputReplicationComponent.GetInputSyncInterval
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UEmbarkServersideInputReplicationComponent::GetInputSyncInterval()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkMovement.EmbarkServersideInputReplicationComponent.GetInputSyncInterval"));

	UEmbarkServersideInputReplicationComponent_GetInputSyncInterval_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkMovement.EmbarkServersideInputReplicationComponent.GetInputBufferSize
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UEmbarkServersideInputReplicationComponent::GetInputBufferSize()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkMovement.EmbarkServersideInputReplicationComponent.GetInputBufferSize"));

	UEmbarkServersideInputReplicationComponent_GetInputBufferSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkMovement.EmbarkServersideInputReplicationComponent.ClientInputProcessingStarted
// (Final, Net, NetReliable, Native, Event, Private, NetClient)

void UEmbarkServersideInputReplicationComponent::ClientInputProcessingStarted()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkMovement.EmbarkServersideInputReplicationComponent.ClientInputProcessingStarted"));

	UEmbarkServersideInputReplicationComponent_ClientInputProcessingStarted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkMovement.EmbarkServersideInputReplicationComponent.ClientInputProcessingSpeedChange
// (Final, Net, Native, Event, Private, NetClient)
// Parameters:
// float                          SpeedChange                    (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkServersideInputReplicationComponent::ClientInputProcessingSpeedChange(float SpeedChange)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkMovement.EmbarkServersideInputReplicationComponent.ClientInputProcessingSpeedChange"));

	UEmbarkServersideInputReplicationComponent_ClientInputProcessingSpeedChange_Params params;
	params.SpeedChange = SpeedChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkMovement.EmbarkRootMotionSourceUtilLibrary.Name_Warp_Upright
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UEmbarkRootMotionSourceUtilLibrary::STATIC_Name_Warp_Upright()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkMovement.EmbarkRootMotionSourceUtilLibrary.Name_Warp_Upright"));

	UEmbarkRootMotionSourceUtilLibrary_Name_Warp_Upright_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkMovement.EmbarkRootMotionSourceUtilLibrary.Name_Warp_TranslationVertical
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UEmbarkRootMotionSourceUtilLibrary::STATIC_Name_Warp_TranslationVertical()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkMovement.EmbarkRootMotionSourceUtilLibrary.Name_Warp_TranslationVertical"));

	UEmbarkRootMotionSourceUtilLibrary_Name_Warp_TranslationVertical_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkMovement.EmbarkRootMotionSourceUtilLibrary.Name_Warp_TranslationHorizontal
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UEmbarkRootMotionSourceUtilLibrary::STATIC_Name_Warp_TranslationHorizontal()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkMovement.EmbarkRootMotionSourceUtilLibrary.Name_Warp_TranslationHorizontal"));

	UEmbarkRootMotionSourceUtilLibrary_Name_Warp_TranslationHorizontal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkMovement.EmbarkRootMotionSourceUtilLibrary.Name_Warp_SpeedWarp
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UEmbarkRootMotionSourceUtilLibrary::STATIC_Name_Warp_SpeedWarp()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkMovement.EmbarkRootMotionSourceUtilLibrary.Name_Warp_SpeedWarp"));

	UEmbarkRootMotionSourceUtilLibrary_Name_Warp_SpeedWarp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkMovement.EmbarkRootMotionSourceUtilLibrary.Name_Warp_Rotation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UEmbarkRootMotionSourceUtilLibrary::STATIC_Name_Warp_Rotation()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkMovement.EmbarkRootMotionSourceUtilLibrary.Name_Warp_Rotation"));

	UEmbarkRootMotionSourceUtilLibrary_Name_Warp_Rotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkMovement.EmbarkRootMotionSourceUtilLibrary.Name_Warp_RootMotionScale
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UEmbarkRootMotionSourceUtilLibrary::STATIC_Name_Warp_RootMotionScale()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkMovement.EmbarkRootMotionSourceUtilLibrary.Name_Warp_RootMotionScale"));

	UEmbarkRootMotionSourceUtilLibrary_Name_Warp_RootMotionScale_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkMovement.EmbarkRootMotionSourceUtilLibrary.Name_Warp_InputScale
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UEmbarkRootMotionSourceUtilLibrary::STATIC_Name_Warp_InputScale()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkMovement.EmbarkRootMotionSourceUtilLibrary.Name_Warp_InputScale"));

	UEmbarkRootMotionSourceUtilLibrary_Name_Warp_InputScale_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkMovement.EmbarkRootMotionSourceUtilLibrary.Name_Warp_Active
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UEmbarkRootMotionSourceUtilLibrary::STATIC_Name_Warp_Active()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkMovement.EmbarkRootMotionSourceUtilLibrary.Name_Warp_Active"));

	UEmbarkRootMotionSourceUtilLibrary_Name_Warp_Active_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkMovement.EmbarkRootMotionSourceUtilLibrary.GetTotalSequenceLength
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class UAnimSequence*>   InSequences                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          OneFrameTime                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UEmbarkRootMotionSourceUtilLibrary::STATIC_GetTotalSequenceLength(TArray<class UAnimSequence*> InSequences, float OneFrameTime)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkMovement.EmbarkRootMotionSourceUtilLibrary.GetTotalSequenceLength"));

	UEmbarkRootMotionSourceUtilLibrary_GetTotalSequenceLength_Params params;
	params.InSequences = InSequences;
	params.OneFrameTime = OneFrameTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkMovement.EmbarkRootMotionSourceUtilLibrary.GetCurrentPlayingSequenceData
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class UAnimSequence*>   InSequences                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          InTime                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          OneFrameTime                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            OutClipIndex                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutClipTime                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutPrevClipTime                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// enum class ERootMotionParseRetVal ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

enum class ERootMotionParseRetVal UEmbarkRootMotionSourceUtilLibrary::STATIC_GetCurrentPlayingSequenceData(TArray<class UAnimSequence*> InSequences, float InTime, float OneFrameTime, int* OutClipIndex, float* OutClipTime, float* OutPrevClipTime)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkMovement.EmbarkRootMotionSourceUtilLibrary.GetCurrentPlayingSequenceData"));

	UEmbarkRootMotionSourceUtilLibrary_GetCurrentPlayingSequenceData_Params params;
	params.InSequences = InSequences;
	params.InTime = InTime;
	params.OneFrameTime = OneFrameTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutClipIndex != nullptr)
		*OutClipIndex = params.OutClipIndex;
	if (OutClipTime != nullptr)
		*OutClipTime = params.OutClipTime;
	if (OutPrevClipTime != nullptr)
		*OutPrevClipTime = params.OutPrevClipTime;

	return params.ReturnValue;
}


// Function EmbarkMovement.EmbarkRootMotionSourceUtilLibrary.GenerateTimeWarpCurveRuntimeFloatCurve
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// float                          DeltaTime                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          SpeedScale                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   CurveName                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UAnimSequence*>   Sequences                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FRuntimeFloatCurve      OutCurve                       (Parm, OutParm)
// float                          OutLastTime                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkRootMotionSourceUtilLibrary::STATIC_GenerateTimeWarpCurveRuntimeFloatCurve(float DeltaTime, float SpeedScale, const struct FName& CurveName, TArray<class UAnimSequence*> Sequences, struct FRuntimeFloatCurve* OutCurve, float* OutLastTime)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkMovement.EmbarkRootMotionSourceUtilLibrary.GenerateTimeWarpCurveRuntimeFloatCurve"));

	UEmbarkRootMotionSourceUtilLibrary_GenerateTimeWarpCurveRuntimeFloatCurve_Params params;
	params.DeltaTime = DeltaTime;
	params.SpeedScale = SpeedScale;
	params.CurveName = CurveName;
	params.Sequences = Sequences;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutCurve != nullptr)
		*OutCurve = params.OutCurve;
	if (OutLastTime != nullptr)
		*OutLastTime = params.OutLastTime;

	return params.ReturnValue;
}


// Function EmbarkMovement.EmbarkRootMotionSourceUtilLibrary.GenerateTimeWarpCurve
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// float                          DeltaTime                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          SpeedScale                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   CurveName                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UAnimSequence*>   Sequences                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UCurveFloat*             OutCurve                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          OutLastTime                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkRootMotionSourceUtilLibrary::STATIC_GenerateTimeWarpCurve(float DeltaTime, float SpeedScale, const struct FName& CurveName, TArray<class UAnimSequence*> Sequences, class UCurveFloat* OutCurve, float* OutLastTime)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkMovement.EmbarkRootMotionSourceUtilLibrary.GenerateTimeWarpCurve"));

	UEmbarkRootMotionSourceUtilLibrary_GenerateTimeWarpCurve_Params params;
	params.DeltaTime = DeltaTime;
	params.SpeedScale = SpeedScale;
	params.CurveName = CurveName;
	params.Sequences = Sequences;
	params.OutCurve = OutCurve;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLastTime != nullptr)
		*OutLastTime = params.OutLastTime;

	return params.ReturnValue;
}


// Function EmbarkMovement.AbilityTask_ApplyRootMotion_AnimSequenceBase.GetRootMotionTimeWarpedTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAbilityTask_ApplyRootMotion_AnimSequenceBase::GetRootMotionTimeWarpedTime()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkMovement.AbilityTask_ApplyRootMotion_AnimSequenceBase.GetRootMotionTimeWarpedTime"));

	UAbilityTask_ApplyRootMotion_AnimSequenceBase_GetRootMotionTimeWarpedTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkMovement.AbilityTask_ApplyRootMotion_AnimSequenceBase.GetRootMotionSpeedScale
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAbilityTask_ApplyRootMotion_AnimSequenceBase::GetRootMotionSpeedScale()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkMovement.AbilityTask_ApplyRootMotion_AnimSequenceBase.GetRootMotionSpeedScale"));

	UAbilityTask_ApplyRootMotion_AnimSequenceBase_GetRootMotionSpeedScale_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkMovement.AbilityTask_ApplyRootMotion_AnimSequenceBase.GetRootMotionInitialVelocity
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UAbilityTask_ApplyRootMotion_AnimSequenceBase::GetRootMotionInitialVelocity()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkMovement.AbilityTask_ApplyRootMotion_AnimSequenceBase.GetRootMotionInitialVelocity"));

	UAbilityTask_ApplyRootMotion_AnimSequenceBase_GetRootMotionInitialVelocity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkMovement.AbilityTask_ApplyRootMotion_AnimSequenceBase.GetRootMotionDuration
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAbilityTask_ApplyRootMotion_AnimSequenceBase::GetRootMotionDuration()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkMovement.AbilityTask_ApplyRootMotion_AnimSequenceBase.GetRootMotionDuration"));

	UAbilityTask_ApplyRootMotion_AnimSequenceBase_GetRootMotionDuration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkMovement.AbilityTask_ApplyRootMotion_AnimSequenceRootMotion.ApplyRootMotionAnimSequence
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   TaskInstanceName               (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UAnimSequence*>   InSequences                    (Parm, ZeroConstructor)
// struct FRotator                MovementDirectionOffset        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOverrideIgnoreGravity         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bShouldSpeedWarp               (Parm, ZeroConstructor, IsPlainOldData)
// float                          SpeedWarpMin                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          SpeedWarpMax                   (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_ApplyRootMotion_AnimSequenceRootMotion* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_ApplyRootMotion_AnimSequenceRootMotion* UAbilityTask_ApplyRootMotion_AnimSequenceRootMotion::STATIC_ApplyRootMotionAnimSequence(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, TArray<class UAnimSequence*> InSequences, const struct FRotator& MovementDirectionOffset, bool bOverrideIgnoreGravity, bool bShouldSpeedWarp, float SpeedWarpMin, float SpeedWarpMax)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkMovement.AbilityTask_ApplyRootMotion_AnimSequenceRootMotion.ApplyRootMotionAnimSequence"));

	UAbilityTask_ApplyRootMotion_AnimSequenceRootMotion_ApplyRootMotionAnimSequence_Params params;
	params.OwningAbility = OwningAbility;
	params.TaskInstanceName = TaskInstanceName;
	params.InSequences = InSequences;
	params.MovementDirectionOffset = MovementDirectionOffset;
	params.bOverrideIgnoreGravity = bOverrideIgnoreGravity;
	params.bShouldSpeedWarp = bShouldSpeedWarp;
	params.SpeedWarpMin = SpeedWarpMin;
	params.SpeedWarpMax = SpeedWarpMax;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkMovement.AbilityTask_ApplyRootMotion_AnimSequenceRootWarp.ApplyRootMotionAnimSequence
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   TaskInstanceName               (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UAnimSequence*>   InSequences                    (Parm, ZeroConstructor)
// struct FTransform              StartActorTransform            (Parm, IsPlainOldData)
// struct FTransform              WarpTargetTransform            (Parm, IsPlainOldData)
// class USceneComponent*         AlignToComponent               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   InCharacterAuxBoneName         (Parm, ZeroConstructor, IsPlainOldData)
// float                          CapsuleHeight                  (Parm, ZeroConstructor, IsPlainOldData)
// enum class ERootMotionFinishVelocityMode VelocityOnFinishMode           (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   InAlignToComponentBoneName     (Parm, ZeroConstructor, IsPlainOldData)
// enum class ERootMotionDefaultCurveType DefaultCurveType               (Parm, ZeroConstructor, IsPlainOldData)
// float                          BlendLength                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bShouldSpeedWarp               (Parm, ZeroConstructor, IsPlainOldData)
// float                          SpeedWarpMin                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          SpeedWarpMax                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSweepTestDuringRootWarp       (Parm, ZeroConstructor, IsPlainOldData)
// float                          StartTimeOffset                (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_ApplyRootMotion_AnimSequenceRootWarp* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_ApplyRootMotion_AnimSequenceRootWarp* UAbilityTask_ApplyRootMotion_AnimSequenceRootWarp::STATIC_ApplyRootMotionAnimSequence(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, TArray<class UAnimSequence*> InSequences, const struct FTransform& StartActorTransform, const struct FTransform& WarpTargetTransform, class USceneComponent* AlignToComponent, const struct FName& InCharacterAuxBoneName, float CapsuleHeight, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FName& InAlignToComponentBoneName, enum class ERootMotionDefaultCurveType DefaultCurveType, float BlendLength, bool bShouldSpeedWarp, float SpeedWarpMin, float SpeedWarpMax, bool bSweepTestDuringRootWarp, float StartTimeOffset)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkMovement.AbilityTask_ApplyRootMotion_AnimSequenceRootWarp.ApplyRootMotionAnimSequence"));

	UAbilityTask_ApplyRootMotion_AnimSequenceRootWarp_ApplyRootMotionAnimSequence_Params params;
	params.OwningAbility = OwningAbility;
	params.TaskInstanceName = TaskInstanceName;
	params.InSequences = InSequences;
	params.StartActorTransform = StartActorTransform;
	params.WarpTargetTransform = WarpTargetTransform;
	params.AlignToComponent = AlignToComponent;
	params.InCharacterAuxBoneName = InCharacterAuxBoneName;
	params.CapsuleHeight = CapsuleHeight;
	params.VelocityOnFinishMode = VelocityOnFinishMode;
	params.InAlignToComponentBoneName = InAlignToComponentBoneName;
	params.DefaultCurveType = DefaultCurveType;
	params.BlendLength = BlendLength;
	params.bShouldSpeedWarp = bShouldSpeedWarp;
	params.SpeedWarpMin = SpeedWarpMin;
	params.SpeedWarpMax = SpeedWarpMax;
	params.bSweepTestDuringRootWarp = bSweepTestDuringRootWarp;
	params.StartTimeOffset = StartTimeOffset;

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
