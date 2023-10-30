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

// Enum EmbarkUtils.EEmbarkBallisticPredictionResult
enum class EEmbarkBallisticPredictionResult : uint8_t
{
	TooFar                         = 0,
	PathBlocked                    = 1,
	DirectHit                      = 2,
	EEmbarkBallisticPredictionResult_MAX = 3
};


// Enum EmbarkUtils.EEmbarkPropertyTypes
enum class EEmbarkPropertyTypes : uint8_t
{
	INVALID                        = 0,
	IntProperty                    = 1,
	Int64Property                  = 2,
	ByteProperty                   = 3,
	EnumProperty                   = 4,
	FloatProperty                  = 5,
	BoolProperty                   = 6,
	ObjectProperty                 = 7,
	ClassProperty                  = 8,
	InterfaceProperty              = 9,
	StringProperty                 = 10,
	NameProperty                   = 11,
	SoftObjectProperty             = 12,
	FieldPathProperty              = 13,
	SoftClassProperty              = 14,
	TextProperty                   = 15,
	VectorProperty                 = 16,
	RotatorProperty                = 17,
	LinearColorProperty            = 18,
	ColorProperty                  = 19,
	TransformProperty              = 20,
	GameplayTagProperty            = 21,
	ArrayProperty                  = 22,
	MapProperty                    = 23,
	EEmbarkPropertyTypes_MAX       = 24
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EmbarkUtils.EmbarkOctreeDataHandle
// 0x0004
struct FEmbarkOctreeDataHandle
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct EmbarkUtils.EmbarkGenericOctree
// 0x00B8
struct FEmbarkGenericOctree
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
	TMap<struct FEmbarkOctreeDataHandle, struct FEmbarkScriptStruct> DataCollection;                                           // 0x0018(0x0050) (Transient)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0068(0x0050) MISSED OFFSET
};

// ScriptStruct EmbarkUtils.EmbarkBallisticPredictionInput
// 0x0080
struct FEmbarkBallisticPredictionInput
{
	float                                              ProjectileSpeedCmPerSec;                                  // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FVector                                     ProjectileInitialLocation;                                // 0x0008(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ProjectileConstantAcceleration;                           // 0x0020(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // 0x0038(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetConstantVelocity;                                   // 0x0050(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetConstantAcceleration;                               // 0x0068(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkUtils.RootMotionAnimMatching_PointAtTime
// 0x0010
struct FRootMotionAnimMatching_PointAtTime
{
	struct FVector3f                                   Point;                                                    // 0x0000(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkUtils.PerfTimerData
// 0x0010
struct FPerfTimerData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	float                                              ElapsedTime;                                              // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct EmbarkUtils.FakeEmbarkUtilsStruct
// 0x0028
struct FFakeEmbarkUtilsStruct
{
	float                                              FloatProperty;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                IntProperty;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     StringProperty;                                           // 0x0008(0x0010) (Edit, ZeroConstructor)
	TArray<struct FString>                             StringArrayProperty;                                      // 0x0018(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct EmbarkUtils.EmbarkOctreeElement
// 0x0040
struct FEmbarkOctreeElement
{
	struct FEmbarkOctreeDataHandle                     Handle;                                                   // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FBoxSphereBounds                            Bounds;                                                   // 0x0008(0x0038) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkUtils.EmbarkGenericStruct
// 0x0018
struct FEmbarkGenericStruct
{
	struct FEmbarkScriptStruct                         ActualStruct;                                             // 0x0000(0x0018)
};

// ScriptStruct EmbarkUtils.EmbarkIntercept
// 0x0020
struct FEmbarkIntercept
{
	struct FVector                                     Location;                                                 // 0x0000(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimeToHitSecs;                                            // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct EmbarkUtils.EmbarkBallisticPredictionOutput
// 0x0038
struct FEmbarkBallisticPredictionOutput
{
	struct FVector                                     NecessaryDirection;                                       // 0x0000(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FEmbarkIntercept                            Intercept;                                                // 0x0018(0x0020) (Edit, BlueprintVisible)
};

// ScriptStruct EmbarkUtils.EmbarkBallisticTraceInput
// 0x0070
struct FEmbarkBallisticTraceInput
{
	TEnumAsByte<ECollisionChannel>                     TraceChannel;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<class AActor*>                              IgnoredActors;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                MaxNrSteps;                                               // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StepSizeSecs;                                             // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ProjectileRadiusCm;                                       // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FVector                                     ProjectileInitialLocation;                                // 0x0028(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ProjectileConstantVelocity;                               // 0x0040(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ProjectileConstantAcceleration;                           // 0x0058(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkUtils.EmbarkAttachedStaticMeshDesc
// 0x0080
struct FEmbarkAttachedStaticMeshDesc
{
	class UStaticMesh*                                 StaticMesh;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       SocketName;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	struct FTransform                                  RelativeTransform;                                        // 0x0010(0x0060) (Edit, BlueprintVisible, Transient, IsPlainOldData)
	bool                                               bCastShadow;                                              // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0071(0x000F) MISSED OFFSET
};

// ScriptStruct EmbarkUtils.WarpCurvesDefinition
// 0x0020
struct FWarpCurvesDefinition
{
	struct FName                                       WarpTranslationHorizontalCurveName;                       // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       WarpTranslationVerticalCurveName;                         // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       WarpRotationCurveName;                                    // 0x0010(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       WarpUprightCurveName;                                     // 0x0018(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkUtils.WarpCurvesValue
// 0x0010
struct FWarpCurvesValue
{
	float                                              WarpTranslationHorizontal;                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WarpTranslationVertical;                                  // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WarpRotation;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WarpUpright;                                              // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
