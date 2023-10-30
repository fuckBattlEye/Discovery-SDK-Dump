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

// Function EmbarkReplicatedTransform.ReplicatedTransformMixinLibrary.IsTransformDormant
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FReplicatedTransform    Transform                      (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bOnlyIfReplicated              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UReplicatedTransformMixinLibrary::STATIC_IsTransformDormant(const struct FReplicatedTransform& Transform, bool bOnlyIfReplicated)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkReplicatedTransform.ReplicatedTransformMixinLibrary.IsTransformDormant"));

	UReplicatedTransformMixinLibrary_IsTransformDormant_Params params;
	params.Transform = Transform;
	params.bOnlyIfReplicated = bOnlyIfReplicated;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkReplicatedTransform.ReplicatedTransformMixinLibrary.IsLinearVelocityDormant
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FReplicatedTransform    Transform                      (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UReplicatedTransformMixinLibrary::STATIC_IsLinearVelocityDormant(const struct FReplicatedTransform& Transform)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkReplicatedTransform.ReplicatedTransformMixinLibrary.IsLinearVelocityDormant"));

	UReplicatedTransformMixinLibrary_IsLinearVelocityDormant_Params params;
	params.Transform = Transform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkReplicatedTransform.ReplicatedTransformMixinLibrary.IsAngularVelocityDormant
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FReplicatedTransform    Transform                      (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UReplicatedTransformMixinLibrary::STATIC_IsAngularVelocityDormant(const struct FReplicatedTransform& Transform)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkReplicatedTransform.ReplicatedTransformMixinLibrary.IsAngularVelocityDormant"));

	UReplicatedTransformMixinLibrary_IsAngularVelocityDormant_Params params;
	params.Transform = Transform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkReplicatedTransform.ReplicatedTransformMixinLibrary.FillFromRigidBodyState
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FReplicatedTransform    Transform                      (Parm, OutParm)
// struct FRigidBodyState         RBState                        (ConstParm, Parm, OutParm, ReferenceParm)

void UReplicatedTransformMixinLibrary::STATIC_FillFromRigidBodyState(const struct FRigidBodyState& RBState, struct FReplicatedTransform* Transform)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkReplicatedTransform.ReplicatedTransformMixinLibrary.FillFromRigidBodyState"));

	UReplicatedTransformMixinLibrary_FillFromRigidBodyState_Params params;
	params.RBState = RBState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Transform != nullptr)
		*Transform = params.Transform;
}


// Function EmbarkReplicatedTransform.ReplicatedTransformMixinLibrary.FillFromActor
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FReplicatedTransform    Transform                      (Parm, OutParm)
// class AActor*                  Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 SetAngularVelocity             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           bSetTeleported                 (Parm, ZeroConstructor, IsPlainOldData)

void UReplicatedTransformMixinLibrary::STATIC_FillFromActor(class AActor* Actor, const struct FVector& SetAngularVelocity, bool bSetTeleported, struct FReplicatedTransform* Transform)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkReplicatedTransform.ReplicatedTransformMixinLibrary.FillFromActor"));

	UReplicatedTransformMixinLibrary_FillFromActor_Params params;
	params.Actor = Actor;
	params.SetAngularVelocity = SetAngularVelocity;
	params.bSetTeleported = bSetTeleported;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Transform != nullptr)
		*Transform = params.Transform;
}


// Function EmbarkReplicatedTransform.ReplicatedTransformMixinLibrary.CopyToRigidBodyState
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FReplicatedTransform    Transform                      (ConstParm, Parm, OutParm, ReferenceParm)
// struct FRigidBodyState         OutRBState                     (Parm, OutParm)

void UReplicatedTransformMixinLibrary::STATIC_CopyToRigidBodyState(const struct FReplicatedTransform& Transform, struct FRigidBodyState* OutRBState)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkReplicatedTransform.ReplicatedTransformMixinLibrary.CopyToRigidBodyState"));

	UReplicatedTransformMixinLibrary_CopyToRigidBodyState_Params params;
	params.Transform = Transform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutRBState != nullptr)
		*OutRBState = params.OutRBState;
}


// Function EmbarkReplicatedTransform.ReplicatedTransformMixinLibrary.CopyToActor
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FReplicatedTransform    Transform                      (ConstParm, Parm, OutParm, ReferenceParm)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OutAngularVelocity             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UReplicatedTransformMixinLibrary::STATIC_CopyToActor(const struct FReplicatedTransform& Transform, class AActor* Actor, struct FVector* OutAngularVelocity)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkReplicatedTransform.ReplicatedTransformMixinLibrary.CopyToActor"));

	UReplicatedTransformMixinLibrary_CopyToActor_Params params;
	params.Transform = Transform;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAngularVelocity != nullptr)
		*OutAngularVelocity = params.OutAngularVelocity;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
