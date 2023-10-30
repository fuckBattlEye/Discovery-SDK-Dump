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

// Enum EmbarkSplineTools.ESplineMeshAlignment
enum class ESplineMeshAlignment : uint8_t
{
	AlignToSpline                  = 0,
	AlignToGround                  = 1,
	ObjectSpace                    = 2,
	WorldSpace                     = 3,
	SplineHeadingOnly              = 4,
	ESplineMeshAlignment_MAX       = 5
};


// Enum EmbarkSplineTools.ESplineMeshDistributionMethod
enum class ESplineMeshDistributionMethod : uint8_t
{
	BestFit                        = 0,
	OneMeshPerSplineSegment        = 1,
	OneMeshPerSplinePoint          = 2,
	ESplineMeshDistributionMethod_MAX = 3
};


// Enum EmbarkSplineTools.ESplineMeshSegmentObjectType
enum class ESplineMeshSegmentObjectType : uint8_t
{
	StaticMesh                     = 0,
	SplineMesh                     = 1,
	ActorClass                     = 2,
	ESplineMeshSegmentObjectType_MAX = 3
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EmbarkSplineTools.SplineMeshLayerStyleOverrides
// 0x0002
struct FSplineMeshLayerStyleOverrides
{
	bool                                               bDisableStart;                                            // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDisableEnd;                                              // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkSplineTools.SplineMeshLayer
// 0x0001
struct FSplineMeshLayer
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct EmbarkSplineTools.SplineMeshDeformationSettings
// 0x000C
struct FSplineMeshDeformationSettings
{
	bool                                               bDeform;                                                  // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ESplineMeshAlignment>                  Alignment;                                                // 0x0001(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              MinStretch;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxStretch;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct EmbarkSplineTools.SplineMeshSpacingSettings
// 0x0014
struct FSplineMeshSpacingSettings
{
	bool                                               bRandomSpacing;                                           // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              MinSpacingBefore;                                         // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxSpacingBefore;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinSpacingAfter;                                          // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxSpacingAfter;                                          // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct EmbarkSplineTools.SplineMeshLightingSettings
// 0x0002
struct FSplineMeshLightingSettings
{
	bool                                               bCastShadow;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCastFarShadow;                                           // 0x0001(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct EmbarkSplineTools.SplineSegmentWeightedMesh
// 0x0030
struct FSplineSegmentWeightedMesh
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UStaticMesh*                                 Mesh;                                                     // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ActorClass;                                               // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UMaterialInterface*>                  MaterialOverrides;                                        // 0x0018(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<ESplineMeshAxis>                       ForwardAxis;                                              // 0x0028(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	float                                              Weight;                                                   // 0x002C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct EmbarkSplineTools.RandomOffsetTransform
// 0x0038
struct FRandomOffsetTransform
{
	struct FVector                                     RandomizeLocation;                                        // 0x0000(0x0018) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    RandomizeRotation;                                        // 0x0018(0x0018) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FFloatInterval                              RandomizeScale;                                           // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct EmbarkSplineTools.SplineMeshSocketAttachment
// 0x00D0
struct FSplineMeshSocketAttachment
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FSplineSegmentWeightedMesh>          Meshes;                                                   // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               AttachSocketNames;                                        // 0x0018(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	bool                                               bAttachToNextSegment;                                     // 0x0028(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FTransform                                  Offset;                                                   // 0x0030(0x0060) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FRandomOffsetTransform                      RandomizeTransform;                                       // 0x0090(0x0038) (Edit, DisableEditOnInstance)
	struct FSplineMeshLightingSettings                 LightingSettings;                                         // 0x00C8(0x0002) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x6];                                       // 0x00CA(0x0006) MISSED OFFSET
};

// ScriptStruct EmbarkSplineTools.SplineMeshSegment
// 0x01B0
struct FSplineMeshSegment
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FSplineSegmentWeightedMesh>          Meshes;                                                   // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	int                                                ObjectCount;                                              // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FSplineMeshDeformationSettings              DeformationSettings;                                      // 0x001C(0x000C) (Edit, DisableEditOnInstance)
	struct FSplineMeshSpacingSettings                  SpacingSettings;                                          // 0x0028(0x0014) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FTransform                                  Offset;                                                   // 0x0040(0x0060) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FRandomOffsetTransform                      RandomOffsetSettings;                                     // 0x00A0(0x0038) (Edit, DisableEditOnInstance)
	struct FSplineMeshLightingSettings                 LightingSettings;                                         // 0x00D8(0x0002) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0xD6];                                      // 0x00DA(0x00D6) MISSED OFFSET
};

// ScriptStruct EmbarkSplineTools.SplineSegmentWeightedCornerMesh
// 0x0038
struct FSplineSegmentWeightedCornerMesh
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UStaticMesh*                                 Mesh;                                                     // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ActorClass;                                               // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UMaterialInterface*>                  MaterialOverrides;                                        // 0x0018(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              Weight;                                                   // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PaddingBefore;                                            // 0x002C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PaddingAfter;                                             // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct EmbarkSplineTools.SplineMeshCornerSegment
// 0x00B0
struct FSplineMeshCornerSegment
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FSplineSegmentWeightedCornerMesh>    Meshes;                                                   // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              Angle;                                                    // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AngleTolerance;                                           // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ESplineMeshAxis>                       ForwardAxis;                                              // 0x0020(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ESplineMeshAxis>                       UpAxis;                                                   // 0x0021(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0022(0x0002) MISSED OFFSET
	struct FSplineMeshSpacingSettings                  SpacingSettings;                                          // 0x0024(0x0014) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	struct FTransform                                  Offset;                                                   // 0x0040(0x0060) (Edit, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowMirror;                                             // 0x00A0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FSplineMeshLightingSettings                 LightingSettings;                                         // 0x00A1(0x0002) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0xD];                                       // 0x00A3(0x000D) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
