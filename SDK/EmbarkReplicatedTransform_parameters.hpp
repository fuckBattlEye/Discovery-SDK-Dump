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

// Function EmbarkReplicatedTransform.ReplicatedTransformMixinLibrary.IsTransformDormant
struct UReplicatedTransformMixinLibrary_IsTransformDormant_Params
{
	struct FReplicatedTransform                        Transform;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bOnlyIfReplicated;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkReplicatedTransform.ReplicatedTransformMixinLibrary.IsLinearVelocityDormant
struct UReplicatedTransformMixinLibrary_IsLinearVelocityDormant_Params
{
	struct FReplicatedTransform                        Transform;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkReplicatedTransform.ReplicatedTransformMixinLibrary.IsAngularVelocityDormant
struct UReplicatedTransformMixinLibrary_IsAngularVelocityDormant_Params
{
	struct FReplicatedTransform                        Transform;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkReplicatedTransform.ReplicatedTransformMixinLibrary.FillFromRigidBodyState
struct UReplicatedTransformMixinLibrary_FillFromRigidBodyState_Params
{
	struct FReplicatedTransform                        Transform;                                                // (Parm, OutParm)
	struct FRigidBodyState                             RBState;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkReplicatedTransform.ReplicatedTransformMixinLibrary.FillFromActor
struct UReplicatedTransformMixinLibrary_FillFromActor_Params
{
	struct FReplicatedTransform                        Transform;                                                // (Parm, OutParm)
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SetAngularVelocity;                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bSetTeleported;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkReplicatedTransform.ReplicatedTransformMixinLibrary.CopyToRigidBodyState
struct UReplicatedTransformMixinLibrary_CopyToRigidBodyState_Params
{
	struct FReplicatedTransform                        Transform;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FRigidBodyState                             OutRBState;                                               // (Parm, OutParm)
};

// Function EmbarkReplicatedTransform.ReplicatedTransformMixinLibrary.CopyToActor
struct UReplicatedTransformMixinLibrary_CopyToActor_Params
{
	struct FReplicatedTransform                        Transform;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutAngularVelocity;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
