#pragma once

//   SDK By:if

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace sdk
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AnimationBudgetAllocator.AnimationBudgetAllocatorParameters
// 0x0050
struct FAnimationBudgetAllocatorParameters
{
	float                                              BudgetInMs;                                               // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinQuality;                                               // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxTickRate;                                              // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WorkUnitSmoothingSpeed;                                   // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AlwaysTickFalloffAggression;                              // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InterpolationFalloffAggression;                           // 0x0014(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                InterpolationMaxRate;                                     // 0x0018(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxInterpolatedComponents;                                // 0x001C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InterpolationTickMultiplier;                              // 0x0020(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InitialEstimatedWorkUnitTimeMs;                           // 0x0024(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxTickedOffsreenComponents;                              // 0x0028(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                StateChangeThrottleInFrames;                              // 0x002C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BudgetFactorBeforeReducedWork;                            // 0x0030(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BudgetFactorBeforeReducedWorkEpsilon;                     // 0x0034(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BudgetPressureSmoothingSpeed;                             // 0x0038(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ReducedWorkThrottleMinInFrames;                           // 0x003C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ReducedWorkThrottleMaxInFrames;                           // 0x0040(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BudgetFactorBeforeAggressiveReducedWork;                  // 0x0044(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ReducedWorkThrottleMaxPerFrame;                           // 0x0048(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BudgetPressureBeforeEmergencyReducedWork;                 // 0x004C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimationBudgetAllocator.EmbarkAnimBudgetAllocatorComponentData
// 0x0030
struct FEmbarkAnimBudgetAllocatorComponentData
{
	class USkeletalMeshComponentBudgeted*              Component;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
