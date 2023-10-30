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

// Enum EmbarkScatter.ESnapAlignmentMethod
enum class ESnapAlignmentMethod : uint8_t
{
	None                           = 0,
	Origin                         = 1,
	Bounds                         = 2,
	ESnapAlignmentMethod_MAX       = 3
};


// Enum EmbarkScatter.EScatterMethod
enum class EScatterMethod : uint8_t
{
	Circle                         = 0,
	Square                         = 1,
	Volume                         = 2,
	OnActor                        = 3,
	NearActor                      = 4,
	OnAndNearActor                 = 5,
	EScatterMethod_MAX             = 6
};


// Enum EmbarkScatter.EScatterOnSurfaceTypeMethod
enum class EScatterOnSurfaceTypeMethod : uint8_t
{
	LimitedTo                      = 0,
	AllExcept                      = 1,
	EScatterOnSurfaceTypeMethod_MAX = 2
};


// Enum EmbarkScatter.EOcclusionMethod
enum class EOcclusionMethod : uint8_t
{
	Simple                         = 0,
	Hemispherical                  = 1,
	EOcclusionMethod_MAX           = 2
};


// Enum EmbarkScatter.ECurveSampleMethod
enum class ECurveSampleMethod : uint8_t
{
	RelativeHeightDifference       = 0,
	FixedHeightFromLowest          = 1,
	SlopeAngle                     = 2,
	DistanceFromCenter             = 3,
	ECurveSampleMethod_MAX         = 4
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EmbarkScatter.ScatterAffectingActorData
// 0x0070
struct FScatterAffectingActorData
{
	struct FName                                       ActorFullName;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  LastTransform;                                            // 0x0010(0x0060) (IsPlainOldData)
};

// ScriptStruct EmbarkScatter.ScatterTransformSettings
// 0x0048
struct FScatterTransformSettings
{
	float                                              OffsetZMin;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OffsetZMax;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    RandomRotation;                                           // 0x0008(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RandomScaleMin;                                           // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RandomScaleMax;                                           // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bPreventInterpenetration;                                 // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	float                                              InterpenetrationBoundingScale;                            // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0030(0x0004) MISSED OFFSET
	float                                              BoundsRadiusScale;                                        // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRemoveFailedChecks;                                      // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	float                                              TraceDistance;                                            // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bComplexTrace;                                            // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
};

// ScriptStruct EmbarkScatter.ScatterMeshSettings
// 0x0030
struct FScatterMeshSettings
{
	class UStaticMesh*                                 Mesh;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          MaterialOverride;                                         // 0x0008(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	TArray<class UMaterialInterface*>                  MaterialOverrides;                                        // 0x0010(0x0010) (Edit, ZeroConstructor)
	float                                              Weight;                                                   // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAffectedByExclusionVolumes;                              // 0x0024(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	int                                                StartCullDistance;                                        // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                EndCullDistance;                                          // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkScatter.ObjectScatterCurveInput
// 0x0001
struct FObjectScatterCurveInput
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct EmbarkScatter.ObjectScatterOverrideSettings
// 0x0001
struct FObjectScatterOverrideSettings
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct EmbarkScatter.ObjectScatterPlacementSettings
// 0x0001
struct FObjectScatterPlacementSettings
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct EmbarkScatter.ObjectScatterOcclusionSettings
// 0x0001
struct FObjectScatterOcclusionSettings
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct EmbarkScatter.ObjectScatterSlopeSettings
// 0x0001
struct FObjectScatterSlopeSettings
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct EmbarkScatter.ObjectSCatterCurvatureSettings
// 0x0001
struct FObjectSCatterCurvatureSettings
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct EmbarkScatter.ObjectScatterSettings
// 0x0001
struct FObjectScatterSettings
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct EmbarkScatter.ObjectScatterLayer
// 0x0001
struct FObjectScatterLayer
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
