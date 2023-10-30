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

// Function AnimationBudgetAllocator.SkeletalMeshComponentBudgeted.SetAutoRegisterWithBudgetAllocator
struct USkeletalMeshComponentBudgeted_SetAutoRegisterWithBudgetAllocator_Params
{
	bool                                               bInAutoRegisterWithBudgetAllocator;                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary.SetAnimationBudgetParameters
struct UAnimationBudgetBlueprintLibrary_SetAnimationBudgetParameters_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAnimationBudgetAllocatorParameters         InParameters;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary.EnableAnimationBudget
struct UAnimationBudgetBlueprintLibrary_EnableAnimationBudget_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimationBudgetAllocator.EmbarkAnimationBudgetBlueprintLibrary.UnregisterComponent
struct UEmbarkAnimationBudgetBlueprintLibrary_UnregisterComponent_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponentBudgeted*              InComponent;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AnimationBudgetAllocator.EmbarkAnimationBudgetBlueprintLibrary.SetParameters
struct UEmbarkAnimationBudgetBlueprintLibrary_SetParameters_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAnimationBudgetAllocatorParameters         InParameters;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AnimationBudgetAllocator.EmbarkAnimationBudgetBlueprintLibrary.SetComponentSignificance
struct UEmbarkAnimationBudgetBlueprintLibrary_SetComponentSignificance_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponentBudgeted*              Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Significance;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNeverSkip;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTickEvenIfNotRendered;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowReducedWork;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceInterpolate;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimationBudgetAllocator.EmbarkAnimationBudgetBlueprintLibrary.RegisterComponent
struct UEmbarkAnimationBudgetBlueprintLibrary_RegisterComponent_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponentBudgeted*              InComponent;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AnimationBudgetAllocator.EmbarkAnimationBudgetBlueprintLibrary.RecalculatePrerequisite
struct UEmbarkAnimationBudgetBlueprintLibrary_RecalculatePrerequisite_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponentBudgeted*              ForComp;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponentBudgeted*              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function AnimationBudgetAllocator.EmbarkAnimationBudgetBlueprintLibrary.GetAllRegisteredComponents
struct UEmbarkAnimationBudgetBlueprintLibrary_GetAllRegisteredComponents_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FEmbarkAnimBudgetAllocatorComponentData> ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
