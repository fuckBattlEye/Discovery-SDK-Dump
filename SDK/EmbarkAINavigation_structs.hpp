#pragma once

//   SDK By:if

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace sdk
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum EmbarkAINavigation.EDonNavigationQueryStatus
enum class EDonNavigationQueryStatus : uint8_t
{
	Unscheduled                    = 0,
	InProgress                     = 1,
	Success                        = 2,
	Failure                        = 3,
	QueryHasNoSolution             = 4,
	TimedOut                       = 5,
	EDonNavigationQueryStatus_MAX  = 6
};


// Enum EmbarkAINavigation.EHpaGraphSize
enum class EHpaGraphSize : uint8_t
{
	Voxel_200                      = 0,
	Voxel_500                      = 1,
	Voxel_MAX                      = 2
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EmbarkAINavigation.DonNavigationDynamicCollisionPayload
// 0x0010
struct FDonNavigationDynamicCollisionPayload
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct EmbarkAINavigation.DoNNavigationQueryParams
// 0x0020
struct FDoNNavigationQueryParams
{
	float                                              QueryTimeout;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFlexibleOriginGoal;                                      // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSkipOptimizationPass;                                    // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	int                                                MaxOptimizerSweepAttemptsPerNode;                         // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPreciseDynamicCollisionRepathing;                        // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreDynamicCollisionRepathingForDirectGoals;           // 0x000D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
	float                                              CollisionShapeInflation;                                  // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForceRescheduleQuery;                                    // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xB];                                       // 0x0015(0x000B) MISSED OFFSET
};

// ScriptStruct EmbarkAINavigation.DoNNavigationQueryData
// 0x02B8
struct FDoNNavigationQueryData
{
	TWeakObjectPtr<class AActor>                       Actor;                                                    // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UPrimitiveComponent>          CollisionComponent;                                       // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Origin;                                                   // 0x0010(0x0018) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Destination;                                              // 0x0028(0x0018) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FDoNNavigationQueryParams                   QueryParams;                                              // 0x0040(0x0020) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x240];                                     // 0x0060(0x0240) MISSED OFFSET
	TArray<struct FVector>                             PathSolutionOptimized;                                    // 0x02A0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x02B0(0x0008) MISSED OFFSET
};

// ScriptStruct EmbarkAINavigation.DonNavigationVoxel
// 0x0008
struct FDonNavigationVoxel
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct EmbarkAINavigation.DonVoxelCollisionProfile
// 0x0020
struct FDonVoxelCollisionProfile
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct EmbarkAINavigation.DonNavigationDynamicCollisionNotifyee
// 0x0020
struct FDonNavigationDynamicCollisionNotifyee
{
	struct FScriptDelegate                             Listener;                                                 // 0x0000(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct EmbarkAINavigation.DonNavVoxelY
// 0x0010
struct FDonNavVoxelY
{
	TArray<struct FDonNavigationVoxel>                 Z;                                                        // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkAINavigation.DonNavVoxelX
// 0x0010
struct FDonNavVoxelX
{
	TArray<struct FDonNavVoxelY>                       Y;                                                        // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkAINavigation.DonNavVoxelXYZ
// 0x0010
struct FDonNavVoxelXYZ
{
	TArray<struct FDonNavVoxelX>                       X;                                                        // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkAINavigation.DoNNavigationDebugParams
// 0x000C
struct FDoNNavigationDebugParams
{
	bool                                               DrawDebugVolumes;                                         // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               VisualizeRawPath;                                         // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               VisualizeOptimizedPath;                                   // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               VisualizeInRealTime;                                      // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LineThickness;                                            // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LineDuration;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkAINavigation.DonNavigationTask
// 0x0008
struct FDonNavigationTask
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct EmbarkAINavigation.DonNavigationQueryTask
// 0x02E0 (0x02E8 - 0x0008)
struct FDonNavigationQueryTask : public FDonNavigationTask
{
	unsigned char                                      UnknownData00[0x2C0];                                     // 0x0008(0x02C0) MISSED OFFSET
	struct FScriptDelegate                             ResultHandler;                                            // 0x02C8(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             DynamicCollisionListener;                                 // 0x02D8(0x0010) (ZeroConstructor, InstancedReference)
};

// ScriptStruct EmbarkAINavigation.DonNavigationDynamicCollisionTask
// 0x0128 (0x0130 - 0x0008)
struct FDonNavigationDynamicCollisionTask : public FDonNavigationTask
{
	unsigned char                                      UnknownData00[0x128];                                     // 0x0008(0x0128) MISSED OFFSET
};

// ScriptStruct EmbarkAINavigation.PathResult
// 0x0018
struct FPathResult
{
	float                                              Distance;                                                 // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FVector>                             Path;                                                     // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct EmbarkAINavigation.HpaVertex
// 0x0010
struct FHpaVertex
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct EmbarkAINavigation.HpaVoxelDataSlice
// 0x0030
struct FHpaVoxelDataSlice
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct EmbarkAINavigation.HpaNavigationQueryParams
// 0x0028
struct FHpaNavigationQueryParams
{
	TArray<class AActor*>                              ActorsToIgnore;                                           // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              CollisionRadius;                                          // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                QueryIterationTimeout;                                    // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              QueryTimeout;                                             // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFlexibleOriginGoal;                                      // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	int                                                MaxOptimizerSweepAttemptsPerVertex;                       // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct EmbarkAINavigation.HpaNavigationQueryData
// 0x0118
struct FHpaNavigationQueryData
{
	unsigned char                                      UnknownData00[0x118];                                     // 0x0000(0x0118) MISSED OFFSET
};

// ScriptStruct EmbarkAINavigation.HpaNavigationQueryTask
// 0x02B8
struct FHpaNavigationQueryTask
{
	unsigned char                                      UnknownData00[0x2B8];                                     // 0x0000(0x02B8) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
