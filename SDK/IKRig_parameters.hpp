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

// Function IKRig.IKRigComponent.SetIKRigGoalTransform
struct UIKRigComponent_SetIKRigGoalTransform_Params
{
	struct FName                                       GoalName;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Transform;                                                // (ConstParm, Parm, IsPlainOldData)
	float                                              PositionAlpha;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              RotationAlpha;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IKRig.IKRigComponent.SetIKRigGoalPositionAndRotation
struct UIKRigComponent_SetIKRigGoalPositionAndRotation_Params
{
	struct FName                                       GoalName;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FQuat                                       Rotation;                                                 // (ConstParm, Parm, IsPlainOldData)
	float                                              PositionAlpha;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              RotationAlpha;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IKRig.IKRigComponent.SetIKRigGoal
struct UIKRigComponent_SetIKRigGoal_Params
{
	struct FIKRigGoal                                  Goal;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function IKRig.IKRigComponent.ClearAllGoals
struct UIKRigComponent_ClearAllGoals_Params
{
};

// Function IKRig.IKGoalCreatorInterface.AddIKGoals
struct UIKGoalCreatorInterface_AddIKGoals_Params
{
	TMap<struct FName, struct FIKRigGoal>              OutGoals;                                                 // (Parm, OutParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
