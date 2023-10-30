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

// Function EmbarkAnimationRuntime.AnimNotify_EmbarkPlaySound.PlaySound
struct UAnimNotify_EmbarkPlaySound_PlaySound_Params
{
	class USkeletalMeshComponent*                      MeshComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAnimSequenceBase*                           Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAnimationRuntime.EmbarkAnimInstance_Base.SetVariableContainerObjectForCompiledPinExpressions
struct UEmbarkAnimInstance_Base_SetVariableContainerObjectForCompiledPinExpressions_Params
{
	class UObject*                                     ContainerObject;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAnimationRuntime.EmbarkAnimInstance_Base.RandomIntInRange_Threadsafe
struct UEmbarkAnimInstance_Base_RandomIntInRange_Threadsafe_Params
{
	int                                                Min;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Max;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAnimationRuntime.EmbarkAnimInstance_Base.RandomFloatInRange_Threadsafe
struct UEmbarkAnimInstance_Base_RandomFloatInRange_Threadsafe_Params
{
	float                                              Min;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAnimationRuntime.EmbarkAnimInstance_Base.IsValid_Threadsafe
struct UEmbarkAnimInstance_Base_IsValid_Threadsafe_Params
{
	class UObject*                                     InObject;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAnimationRuntime.EmbarkAnimInstance_Base.GetAdditiveBaseSequence
struct UEmbarkAnimInstance_Base_GetAdditiveBaseSequence_Params
{
	class UAnimSequence*                               InSequence;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAnimationRuntime.EmbarkAnimInstance_Base.CalculatePlayRateToSpecifiedPoint
struct UEmbarkAnimInstance_Base_CalculatePlayRateToSpecifiedPoint_Params
{
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Endpoint;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAnimationRuntime.EmbarkAnimInstance_Base.BlueprintPreUpdateAnimationGameThread
struct UEmbarkAnimInstance_Base_BlueprintPreUpdateAnimationGameThread_Params
{
	float                                              DeltaTimeX;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAnimationRuntime.EmbarkAnimInstance_Base.BlueprintPreUpdateAnimationAnyThread
struct UEmbarkAnimInstance_Base_BlueprintPreUpdateAnimationAnyThread_Params
{
	float                                              DeltaTimeX;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAnimationRuntime.EmbarkAnimInstance_Base.BlueprintPostUpdateAnimationGameThread
struct UEmbarkAnimInstance_Base_BlueprintPostUpdateAnimationGameThread_Params
{
	float                                              DeltaTimeX;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAnimationRuntime.EmbarkAnimStateUpdaterComponent.StartTicking
struct UEmbarkAnimStateUpdaterComponent_StartTicking_Params
{
};

// Function EmbarkAnimationRuntime.EmbarkAnimStateUpdaterComponent.SetPairedMeshComponent
struct UEmbarkAnimStateUpdaterComponent_SetPairedMeshComponent_Params
{
	class USkeletalMeshComponent*                      Comp;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function EmbarkAnimationRuntime.EmbarkAnimStateUpdaterComponent.ParallelTick
struct UEmbarkAnimStateUpdaterComponent_ParallelTick_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAnimationRuntime.EmbarkAnimStateUpdaterComponent.MainThreadPreParallelTick
struct UEmbarkAnimStateUpdaterComponent_MainThreadPreParallelTick_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAnimationRuntime.EmbarkAnimStateUpdaterComponent.MainThreadDebugDraw
struct UEmbarkAnimStateUpdaterComponent_MainThreadDebugDraw_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAnimationRuntime.EmbarkAnimStateUpdaterSystem.RegisterStateUpdaterComponent
struct AEmbarkAnimStateUpdaterSystem_RegisterStateUpdaterComponent_Params
{
	class UEmbarkAnimStateUpdaterComponent*            StateUpdaterComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      MeshComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function EmbarkAnimationRuntime.EmbarkAnimStateUpdaterSystem.DeregisterStateUpdaterComponent
struct AEmbarkAnimStateUpdaterSystem_DeregisterStateUpdaterComponent_Params
{
	class UEmbarkAnimStateUpdaterComponent*            StateUpdaterComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
