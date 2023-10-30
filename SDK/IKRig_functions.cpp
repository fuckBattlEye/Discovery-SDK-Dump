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

// Function IKRig.IKRigComponent.SetIKRigGoalTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   GoalName                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Transform                      (ConstParm, Parm, IsPlainOldData)
// float                          PositionAlpha                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          RotationAlpha                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UIKRigComponent::SetIKRigGoalTransform(const struct FName& GoalName, const struct FTransform& Transform, float PositionAlpha, float RotationAlpha)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function IKRig.IKRigComponent.SetIKRigGoalTransform"));

	UIKRigComponent_SetIKRigGoalTransform_Params params;
	params.GoalName = GoalName;
	params.Transform = Transform;
	params.PositionAlpha = PositionAlpha;
	params.RotationAlpha = RotationAlpha;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IKRig.IKRigComponent.SetIKRigGoalPositionAndRotation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   GoalName                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Position                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FQuat                   Rotation                       (ConstParm, Parm, IsPlainOldData)
// float                          PositionAlpha                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          RotationAlpha                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UIKRigComponent::SetIKRigGoalPositionAndRotation(const struct FName& GoalName, const struct FVector& Position, const struct FQuat& Rotation, float PositionAlpha, float RotationAlpha)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function IKRig.IKRigComponent.SetIKRigGoalPositionAndRotation"));

	UIKRigComponent_SetIKRigGoalPositionAndRotation_Params params;
	params.GoalName = GoalName;
	params.Position = Position;
	params.Rotation = Rotation;
	params.PositionAlpha = PositionAlpha;
	params.RotationAlpha = RotationAlpha;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IKRig.IKRigComponent.SetIKRigGoal
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FIKRigGoal              Goal                           (ConstParm, Parm, OutParm, ReferenceParm)

void UIKRigComponent::SetIKRigGoal(const struct FIKRigGoal& Goal)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function IKRig.IKRigComponent.SetIKRigGoal"));

	UIKRigComponent_SetIKRigGoal_Params params;
	params.Goal = Goal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IKRig.IKRigComponent.ClearAllGoals
// (Final, Native, Public, BlueprintCallable)

void UIKRigComponent::ClearAllGoals()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function IKRig.IKRigComponent.ClearAllGoals"));

	UIKRigComponent_ClearAllGoals_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IKRig.IKGoalCreatorInterface.AddIKGoals
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<struct FName, struct FIKRigGoal> OutGoals                       (Parm, OutParm)

void UIKGoalCreatorInterface::AddIKGoals(TMap<struct FName, struct FIKRigGoal>* OutGoals)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function IKRig.IKGoalCreatorInterface.AddIKGoals"));

	UIKGoalCreatorInterface_AddIKGoals_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutGoals != nullptr)
		*OutGoals = params.OutGoals;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
