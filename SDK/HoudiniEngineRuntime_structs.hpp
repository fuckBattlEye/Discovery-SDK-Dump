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

// Enum HoudiniEngineRuntime.EHoudiniStaticMeshMethod
enum class EHoudiniStaticMeshMethod : uint8_t
{
	RawMesh                        = 0,
	FMeshDescription               = 1,
	UHoudiniStaticMesh             = 2,
	EHoudiniStaticMeshMethod_MAX   = 3
};


// Enum HoudiniEngineRuntime.EHoudiniAssetState
enum class EHoudiniAssetState : uint8_t
{
	NeedInstantiation              = 0,
	NewHDA                         = 1,
	PreInstantiation               = 2,
	Instantiating                  = 3,
	PreCook                        = 4,
	Cooking                        = 5,
	PostCook                       = 6,
	PreProcess                     = 7,
	Processing                     = 8,
	None                           = 9,
	NeedRebuild                    = 10,
	NeedDelete                     = 11,
	Deleting                       = 12,
	ProcessTemplate                = 13,
	EHoudiniAssetState_MAX         = 14
};


// Enum HoudiniEngineRuntime.EHoudiniAssetStateResult
enum class EHoudiniAssetStateResult : uint8_t
{
	None                           = 0,
	Working                        = 1,
	Success                        = 2,
	FinishedWithError              = 3,
	FinishedWithFatalError         = 4,
	Aborted                        = 5,
	EHoudiniAssetStateResult_MAX   = 6
};


// Enum HoudiniEngineRuntime.EHoudiniRampInterpolationType
enum class EHoudiniRampInterpolationType : uint8_t
{
	InValid                        = 0,
	CONSTANT                       = 1,
	LINEAR                         = 2,
	CATMULL_ROM                    = 3,
	MONOTONE_CUBIC                 = 4,
	BEZIER                         = 5,
	BSPLINE                        = 6,
	HERMITE                        = 7,
	EHoudiniRampInterpolationType_MAX = 8
};


// Enum HoudiniEngineRuntime.EHoudiniLandscapeOutputBakeType
enum class EHoudiniLandscapeOutputBakeType : uint8_t
{
	Detachment                     = 0,
	BakeToImage                    = 1,
	BakeToWorld                    = 2,
	InValid                        = 3,
	EHoudiniLandscapeOutputBakeType_MAX = 4
};


// Enum HoudiniEngineRuntime.EHoudiniInputType
enum class EHoudiniInputType : uint8_t
{
	Invalid                        = 0,
	Geometry                       = 1,
	Curve                          = 2,
	Asset                          = 3,
	Landscape                      = 4,
	World                          = 5,
	Skeletal                       = 6,
	GeometryCollection             = 7,
	EHoudiniInputType_MAX          = 8
};


// Enum HoudiniEngineRuntime.EHoudiniOutputType
enum class EHoudiniOutputType : uint8_t
{
	Invalid                        = 0,
	Mesh                           = 1,
	Instancer                      = 2,
	Landscape                      = 3,
	Curve                          = 4,
	Skeletal                       = 5,
	GeometryCollection             = 6,
	DataTable                      = 7,
	EHoudiniOutputType_MAX         = 8
};


// Enum HoudiniEngineRuntime.EHoudiniCurveType
enum class EHoudiniCurveType : uint8_t
{
	Invalid                        = 0,
	Polygon                        = 1,
	Nurbs                          = 2,
	Bezier                         = 3,
	Points                         = 4,
	EHoudiniCurveType_MAX          = 5
};


// Enum HoudiniEngineRuntime.EHoudiniCurveMethod
enum class EHoudiniCurveMethod : uint8_t
{
	Invalid                        = 0,
	CVs                            = 1,
	Breakpoints                    = 2,
	Freehand                       = 3,
	EHoudiniCurveMethod_MAX        = 4
};


// Enum HoudiniEngineRuntime.EHoudiniCurveBreakpointParameterization
enum class EHoudiniCurveBreakpointParameterization : uint8_t
{
	Invalid                        = 0,
	Uniform                        = 1,
	Chord                          = 2,
	Centripetal                    = 3,
	EHoudiniCurveBreakpointParameterization_MAX = 4
};


// Enum HoudiniEngineRuntime.EHoudiniLandscapeExportType
enum class EHoudiniLandscapeExportType : uint8_t
{
	Heightfield                    = 0,
	Mesh                           = 1,
	Points                         = 2,
	EHoudiniLandscapeExportType_MAX = 3
};


// Enum HoudiniEngineRuntime.EHoudiniProxyRefineResult
enum class EHoudiniProxyRefineResult : uint8_t
{
	Invalid                        = 0,
	Failed                         = 1,
	Success                        = 2,
	Skipped                        = 3,
	EHoudiniProxyRefineResult_MAX  = 4
};


// Enum HoudiniEngineRuntime.EHoudiniProxyRefineRequestResult
enum class EHoudiniProxyRefineRequestResult : uint8_t
{
	Invalid                        = 0,
	None                           = 1,
	PendingCooks                   = 2,
	Refined                        = 3,
	EHoudiniProxyRefineRequestResult_MAX = 4
};


// Enum HoudiniEngineRuntime.EAttribStorageType
enum class EAttribStorageType : uint8_t
{
	Invalid                        = 0,
	INT                            = 1,
	INT64                          = 2,
	FLOAT                          = 3,
	FLOAT64                        = 4,
	STRING                         = 5,
	EAttribStorageType_MAX         = 6
};


// Enum HoudiniEngineRuntime.EAttribOwner
enum class EAttribOwner : uint8_t
{
	Invalid                        = 0,
	Vertex                         = 1,
	Point                          = 2,
	Prim                           = 3,
	Detail                         = 4,
	EAttribOwner_MAX               = 5
};


// Enum HoudiniEngineRuntime.EHoudiniGeoType
enum class EHoudiniGeoType : uint8_t
{
	Invalid                        = 0,
	Default                        = 1,
	Intermediate                   = 2,
	Input                          = 3,
	Curve                          = 4,
	EHoudiniGeoType_MAX            = 5
};


// Enum HoudiniEngineRuntime.EHoudiniPartType
enum class EHoudiniPartType : uint8_t
{
	Invalid                        = 0,
	Mesh                           = 1,
	Instancer                      = 2,
	Curve                          = 3,
	Volume                         = 4,
	DataTable                      = 5,
	EHoudiniPartType_MAX           = 6
};


// Enum HoudiniEngineRuntime.EHoudiniInstancerType
enum class EHoudiniInstancerType : uint8_t
{
	Invalid                        = 0,
	ObjectInstancer                = 1,
	PackedPrimitive                = 2,
	AttributeInstancer             = 3,
	OldSchoolAttributeInstancer    = 4,
	GeometryCollection             = 5,
	EHoudiniInstancerType_MAX      = 6
};


// Enum HoudiniEngineRuntime.EXformParameter
enum class EXformParameter : uint8_t
{
	TX                             = 0,
	TY                             = 1,
	TZ                             = 2,
	RX                             = 3,
	RY                             = 4,
	RZ                             = 5,
	SX                             = 6,
	SY                             = 7,
	SZ                             = 8,
	COUNT                          = 9,
	EXformParameter_MAX            = 10
};


// Enum HoudiniEngineRuntime.EHoudiniHandleType
enum class EHoudiniHandleType : uint8_t
{
	Xform                          = 0,
	Bounder                        = 1,
	Unsupported                    = 2,
	EHoudiniHandleType_MAX         = 3
};


// Enum HoudiniEngineRuntime.EHoudiniInputObjectType
enum class EHoudiniInputObjectType : uint8_t
{
	Invalid                        = 0,
	Object                         = 1,
	StaticMesh                     = 2,
	SkeletalMesh                   = 3,
	SceneComponent                 = 4,
	StaticMeshComponent            = 5,
	InstancedStaticMeshComponent   = 6,
	SplineComponent                = 7,
	HoudiniSplineComponent         = 8,
	HoudiniAssetComponent          = 9,
	Actor                          = 10,
	Landscape                      = 11,
	Brush                          = 12,
	CameraComponent                = 13,
	DataTable                      = 14,
	HoudiniAssetActor              = 15,
	FoliageType_InstancedStaticMesh = 16,
	GeometryCollection             = 17,
	GeometryCollectionComponent    = 18,
	GeometryCollectionActor_Deprecated = 19,
	SkeletalMeshComponent          = 20,
	Blueprint                      = 21,
	EHoudiniInputObjectType_MAX    = 22
};


// Enum HoudiniEngineRuntime.EHoudiniXformType
enum class EHoudiniXformType : uint8_t
{
	None                           = 0,
	IntoThisObject                 = 1,
	Auto                           = 2,
	EHoudiniXformType_MAX          = 3
};


// Enum HoudiniEngineRuntime.EHoudiniCurveOutputType
enum class EHoudiniCurveOutputType : uint8_t
{
	UnrealSpline                   = 0,
	HoudiniSpline                  = 1,
	EHoudiniCurveOutputType_MAX    = 2
};


// Enum HoudiniEngineRuntime.EHoudiniParameterType
enum class EHoudiniParameterType : uint8_t
{
	Invalid                        = 0,
	Button                         = 1,
	ButtonStrip                    = 2,
	Color                          = 3,
	ColorRamp                      = 4,
	File                           = 5,
	FileDir                        = 6,
	FileGeo                        = 7,
	FileImage                      = 8,
	Float                          = 9,
	FloatRamp                      = 10,
	Folder                         = 11,
	FolderList                     = 12,
	Input                          = 13,
	Int                            = 14,
	IntChoice                      = 15,
	Label                          = 16,
	MultiParm                      = 17,
	Separator                      = 18,
	String                         = 19,
	StringChoice                   = 20,
	StringAssetRef                 = 21,
	Toggle                         = 22,
	EHoudiniParameterType_MAX      = 23
};


// Enum HoudiniEngineRuntime.EHoudiniFolderParameterType
enum class EHoudiniFolderParameterType : uint8_t
{
	Invalid                        = 0,
	Collapsible                    = 1,
	Simple                         = 2,
	Tabs                           = 3,
	Radio                          = 4,
	Other                          = 5,
	EHoudiniFolderParameterType_MAX = 6
};


// Enum HoudiniEngineRuntime.EHoudiniMultiParmModificationType
enum class EHoudiniMultiParmModificationType : uint8_t
{
	None                           = 0,
	Inserted                       = 1,
	Removed                        = 2,
	Modified                       = 3,
	EHoudiniMultiParmModificationType_MAX = 4
};


// Enum HoudiniEngineRuntime.EHoudiniRampPointConstructStatus
enum class EHoudiniRampPointConstructStatus : uint8_t
{
	None                           = 0,
	INITIALIZED                    = 1,
	POSITION_INSERTED              = 2,
	VALUE_INSERTED                 = 3,
	INTERPTYPE_INSERTED            = 4,
	EHoudiniRampPointConstructStatus_MAX = 5
};


// Enum HoudiniEngineRuntime.EPDGLinkState
enum class EPDGLinkState : uint8_t
{
	Inactive                       = 0,
	Linking                        = 1,
	Linked                         = 2,
	Error_Not_Linked               = 3,
	EPDGLinkState_MAX              = 4
};


// Enum HoudiniEngineRuntime.EPDGNodeState
enum class EPDGNodeState : uint8_t
{
	None                           = 0,
	Dirtied                        = 1,
	Dirtying                       = 2,
	Cooking                        = 3,
	Cook_Complete                  = 4,
	Cook_Failed                    = 5,
	EPDGNodeState_MAX              = 6
};


// Enum HoudiniEngineRuntime.EPDGWorkResultState
enum class EPDGWorkResultState : uint8_t
{
	None                           = 0,
	ToLoad                         = 1,
	Loading                        = 2,
	Loaded                         = 3,
	ToDelete                       = 4,
	Deleting                       = 5,
	Deleted                        = 6,
	NotLoaded                      = 7,
	EPDGWorkResultState_MAX        = 8
};


// Enum HoudiniEngineRuntime.EHoudiniRuntimeSettingsSessionType
enum class EHoudiniRuntimeSettingsSessionType : uint8_t
{
	HRSST_InProcess                = 0,
	HRSST_Socket                   = 1,
	HRSST_NamedPipe                = 2,
	HRSST_None                     = 3,
	HRSST_MAX                      = 4
};


// Enum HoudiniEngineRuntime.EHoudiniRuntimeSettingsRecomputeFlag
enum class EHoudiniRuntimeSettingsRecomputeFlag : uint8_t
{
	HRSRF_Always                   = 0,
	HRSRF_OnlyIfMissing            = 1,
	HRSRF_Never                    = 2,
	HRSRF_MAX                      = 3
};


// Enum HoudiniEngineRuntime.EHoudiniExecutableType
enum class EHoudiniExecutableType : uint8_t
{
	HRSHE_Houdini                  = 0,
	HRSHE_HoudiniFX                = 1,
	HRSHE_HoudiniCore              = 2,
	HRSHE_HoudiniIndie             = 3,
	HRSHE_MAX                      = 4
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct HoudiniEngineRuntime.HoudiniStaticMeshGenerationProperties
// 0x01E0
struct FHoudiniStaticMeshGenerationProperties
{
	unsigned char                                      bGeneratedDoubleSidedGeometry : 1;                        // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UPhysicalMaterial*                           GeneratedPhysMaterial;                                    // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBodyInstance                               DefaultBodyInstance;                                      // 0x0010(0x0190) (Edit)
	TEnumAsByte<ECollisionTraceFlag>                   GeneratedCollisionTraceFlag;                              // 0x01A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x01A1(0x0003) MISSED OFFSET
	int                                                GeneratedLightMapResolution;                              // 0x01A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FWalkableSlopeOverride                      GeneratedWalkableSlopeOverride;                           // 0x01A8(0x0010) (Edit, IsPlainOldData)
	int                                                GeneratedLightMapCoordinateIndex;                         // 0x01B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bGeneratedUseMaximumStreamingTexelRatio : 1;              // 0x01BC(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x3];                                       // 0x01BD(0x0003) MISSED OFFSET
	float                                              GeneratedStreamingDistanceMultiplier;                     // 0x01C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x01C4(0x0004) MISSED OFFSET
	class UFoliageType_InstancedStaticMesh*            GeneratedFoliageDefaultSettings;                          // 0x01C8(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UAssetUserData*>                      GeneratedAssetUserData;                                   // 0x01D0(0x0010) (Edit, ExportObject, ZeroConstructor)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniBakedOutputObjectIdentifier
// 0x0018
struct FHoudiniBakedOutputObjectIdentifier
{
	int                                                PartID;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     SplitIdentifier;                                          // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniBakedOutputObject
// 0x00B8
struct FHoudiniBakedOutputObject
{
	struct FString                                     Actor;                                                    // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     Blueprint;                                                // 0x0010(0x0010) (ZeroConstructor)
	struct FName                                       ActorBakeName;                                            // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     BakedObject;                                              // 0x0028(0x0010) (ZeroConstructor)
	struct FString                                     BakedComponent;                                           // 0x0038(0x0010) (ZeroConstructor)
	TArray<struct FString>                             InstancedActors;                                          // 0x0048(0x0010) (ZeroConstructor)
	TArray<struct FString>                             InstancedComponents;                                      // 0x0058(0x0010) (ZeroConstructor)
	TMap<struct FName, struct FString>                 LandscapeLayers;                                          // 0x0068(0x0050)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniBakedOutput
// 0x0050
struct FHoudiniBakedOutput
{
	TMap<struct FHoudiniBakedOutputObjectIdentifier, struct FHoudiniBakedOutputObject> BakedOutputObjects;                                       // 0x0000(0x0050)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniOutputObjectIdentifier
// 0x0040
struct FHoudiniOutputObjectIdentifier
{
	int                                                ObjectId;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                GeoId;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PartID;                                                   // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     SplitIdentifier;                                          // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     PartName;                                                 // 0x0020(0x0010) (ZeroConstructor)
	int                                                PrimitiveIndex;                                           // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PointIndex;                                               // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
};

// ScriptStruct HoudiniEngineRuntime.HoudiniBrushInfo
// 0x00B0
struct FHoudiniBrushInfo
{
	TWeakObjectPtr<class ABrush>                       BrushActor;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  CachedTransform;                                          // 0x0010(0x0060) (IsPlainOldData)
	struct FVector                                     CachedOrigin;                                             // 0x0070(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     CachedExtent;                                             // 0x0088(0x0018) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBrushType>                            CachedBrushType;                                          // 0x00A0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET
	uint64_t                                           CachedSurfaceHash;                                        // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniMeshSocket
// 0x0090
struct FHoudiniMeshSocket
{
	unsigned char                                      UnknownData00[0x90];                                      // 0x0000(0x0090) MISSED OFFSET
};

// ScriptStruct HoudiniEngineRuntime.HoudiniGeoPartObject
// 0x0290
struct FHoudiniGeoPartObject
{
	int                                                AssetId;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     AssetName;                                                // 0x0008(0x0010) (ZeroConstructor)
	int                                                ObjectId;                                                 // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FString                                     ObjectName;                                               // 0x0020(0x0010) (ZeroConstructor)
	int                                                GeoId;                                                    // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PartID;                                                   // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     PartName;                                                 // 0x0038(0x0010) (ZeroConstructor)
	bool                                               bHasCustomPartName;                                       // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
	TArray<struct FString>                             SplitGroups;                                              // 0x0050(0x0010) (ZeroConstructor)
	struct FTransform                                  TransformMatrix;                                          // 0x0060(0x0060) (IsPlainOldData)
	struct FString                                     NodePath;                                                 // 0x00C0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData03[0x8];                                       // 0x00D0(0x0008) MISSED OFFSET
	struct FString                                     VolumeName;                                               // 0x00D8(0x0010) (ZeroConstructor)
	bool                                               bHasEditLayers;                                           // 0x00E8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x00E9(0x0007) MISSED OFFSET
	struct FString                                     VolumeLayerName;                                          // 0x00F0(0x0010) (ZeroConstructor)
	int                                                VolumeTileIndex;                                          // 0x0100(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsVisible;                                               // 0x0104(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsEditable;                                              // 0x0105(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsTemplated;                                             // 0x0106(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsInstanced;                                             // 0x0107(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasGeoChanged;                                           // 0x0108(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasPartChanged;                                          // 0x0109(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasTransformChanged;                                     // 0x010A(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasMaterialsChanged;                                     // 0x010B(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x174];                                     // 0x010C(0x0174) MISSED OFFSET
	TArray<struct FHoudiniMeshSocket>                  AllMeshSockets;                                           // 0x0280(0x0010) (ZeroConstructor)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniCurveOutputProperties
// 0x000C
struct FHoudiniCurveOutputProperties
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	int                                                NumPoints;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bClosed;                                                  // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct HoudiniEngineRuntime.HoudiniOutputObject
// 0x0118
struct FHoudiniOutputObject
{
	class UObject*                                     OutputObject;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UObject*>                             OutputComponents;                                         // 0x0008(0x0010) (ZeroConstructor)
	class UObject*                                     OutputComponent;                                          // 0x0018(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class UObject*                                     ProxyObject;                                              // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	class UObject*                                     ProxyComponent;                                           // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bProxyIsCurrent;                                          // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsImplicit;                                              // 0x0031(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsGeometryCollectionPiece;                               // 0x0032(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0033(0x0005) MISSED OFFSET
	struct FString                                     GeometryCollectionPieceName;                              // 0x0038(0x0010) (ZeroConstructor)
	struct FString                                     BakeName;                                                 // 0x0048(0x0010) (ZeroConstructor)
	struct FHoudiniCurveOutputProperties               CurveOutputProperty;                                      // 0x0058(0x000C)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	TMap<struct FString, struct FString>               CachedAttributes;                                         // 0x0068(0x0050)
	TMap<struct FString, struct FString>               CachedTokens;                                             // 0x00B8(0x0050)
	class UObject*                                     InstancedObject;                                          // 0x0108(0x0008) (ZeroConstructor, IsPlainOldData)
	class UFoliageType*                                FoliageType;                                              // 0x0110(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniInstancedOutput
// 0x0088
struct FHoudiniInstancedOutput
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: OriginalObject
	int                                                OriginalObjectIndex;                                      // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	TArray<struct FTransform>                          OriginalTransforms;                                       // 0x0030(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0040(0x0010) UNKNOWN PROPERTY: VariationObjects
	TArray<struct FTransform>                          VariationTransformOffsets;                                // 0x0050(0x0010) (ZeroConstructor)
	TArray<int>                                        TransformVariationIndices;                                // 0x0060(0x0010) (ZeroConstructor)
	TArray<int>                                        OriginalInstanceIndices;                                  // 0x0070(0x0010) (ZeroConstructor)
	bool                                               bChanged;                                                 // 0x0080(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bStale;                                                   // 0x0081(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x0082(0x0006) MISSED OFFSET
};

// ScriptStruct HoudiniEngineRuntime.OutputActorOwner
// 0x0010
struct FOutputActorOwner
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class AActor*                                      OutputActor;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct HoudiniEngineRuntime.TOPWorkResultObject
// 0x0058
struct FTOPWorkResultObject
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FString                                     Name;                                                     // 0x0008(0x0010) (ZeroConstructor)
	struct FString                                     FilePath;                                                 // 0x0018(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0028(0x0004) MISSED OFFSET
	int                                                WorkItemResultInfoIndex;                                  // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<class UHoudiniOutput*>                      ResultOutputs;                                            // 0x0030(0x0010) (ZeroConstructor)
	bool                                               bAutoBakedSinceLastLoad;                                  // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	struct FOutputActorOwner                           OutputActorOwner;                                         // 0x0048(0x0010)
};

// ScriptStruct HoudiniEngineRuntime.TOPWorkResult
// 0x0018
struct FTOPWorkResult
{
	int                                                WorkItemIndex;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                WorkItemID;                                               // 0x0004(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FTOPWorkResultObject>                ResultObjects;                                            // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniPDGWorkResultObjectBakedOutput
// 0x0010
struct FHoudiniPDGWorkResultObjectBakedOutput
{
	TArray<struct FHoudiniBakedOutput>                 BakedOutputs;                                             // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct HoudiniEngineRuntime.WorkItemTallyBase
// 0x0008
struct FWorkItemTallyBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct HoudiniEngineRuntime.WorkItemTally
// 0x0230 (0x0238 - 0x0008)
struct FWorkItemTally : public FWorkItemTallyBase
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0008(0x0050) UNKNOWN PROPERTY: AllWorkItems
	unsigned char                                      UnknownData01[0x50];                                      // 0x0058(0x0050) UNKNOWN PROPERTY: WaitingWorkItems
	unsigned char                                      UnknownData02[0x50];                                      // 0x00A8(0x0050) UNKNOWN PROPERTY: ScheduledWorkItems
	unsigned char                                      UnknownData03[0x50];                                      // 0x00F8(0x0050) UNKNOWN PROPERTY: CookingWorkItems
	unsigned char                                      UnknownData04[0x50];                                      // 0x0148(0x0050) UNKNOWN PROPERTY: CookedWorkItems
	unsigned char                                      UnknownData05[0x50];                                      // 0x0198(0x0050) UNKNOWN PROPERTY: ErroredWorkItems
	unsigned char                                      UnknownData06[0x50];                                      // 0x01E8(0x0050) UNKNOWN PROPERTY: CookCancelledWorkItems
};

// ScriptStruct HoudiniEngineRuntime.AggregatedWorkItemTally
// 0x0020 (0x0028 - 0x0008)
struct FAggregatedWorkItemTally : public FWorkItemTallyBase
{
	int                                                TotalWorkItems;                                           // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                WaitingWorkItems;                                         // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ScheduledWorkItems;                                       // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CookingWorkItems;                                         // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CookedWorkItems;                                          // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ErroredWorkItems;                                         // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CookCancelledWorkItems;                                   // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct HoudiniEngineRuntime.HoudiniAssetBlueprintOutput
// 0x0120
struct FHoudiniAssetBlueprintOutput
{
	int                                                OutputIndex;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FHoudiniOutputObject                        OutputObject;                                             // 0x0008(0x0118)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniAssetBlueprintInstanceData
// 0x00B8 (0x0120 - 0x0068)
struct FHoudiniAssetBlueprintInstanceData : public FActorComponentInstanceData
{
	class UHoudiniAsset*                               HoudiniAsset;                                             // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                AssetId;                                                  // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	uint32_t                                           SubAssetIndex;                                            // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           AssetCookCount;                                           // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasBeenLoaded;                                           // 0x0080(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasBeenDuplicated;                                       // 0x0081(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bPendingDelete;                                           // 0x0082(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bRecookRequested;                                         // 0x0083(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bRebuildRequested;                                        // 0x0084(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bEnableCooking;                                           // 0x0085(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bForceNeedUpdate;                                         // 0x0086(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bLastCookSuccess;                                         // 0x0087(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ComponentGUID;                                            // 0x0088(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       HapiGUID;                                                 // 0x0098(0x0010) (ZeroConstructor, IsPlainOldData)
	bool                                               bRegisteredComponentTemplate;                             // 0x00A8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET
	struct FString                                     SourceName;                                               // 0x00B0(0x0010) (ZeroConstructor)
	TMap<struct FHoudiniOutputObjectIdentifier, struct FHoudiniAssetBlueprintOutput> Outputs;                                                  // 0x00C0(0x0050)
	TArray<class UHoudiniInput*>                       Inputs;                                                   // 0x0110(0x0010) (ZeroConstructor)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniGenericAttributeChangedProperty
// 0x0098
struct FHoudiniGenericAttributeChangedProperty
{
	class UObject*                                     Object;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x90];                                      // 0x0008(0x0090) MISSED OFFSET
};

// ScriptStruct HoudiniEngineRuntime.HoudiniGenericAttribute
// 0x0050
struct FHoudiniGenericAttribute
{
	struct FString                                     AttributeName;                                            // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0010(0x0004) MISSED OFFSET
	int                                                AttributeCount;                                           // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AttributeTupleSize;                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<double>                                     DoubleValues;                                             // 0x0020(0x0010) (ZeroConstructor)
	TArray<int64_t>                                    IntValues;                                                // 0x0030(0x0010) (ZeroConstructor)
	TArray<struct FString>                             StringValues;                                             // 0x0040(0x0010) (ZeroConstructor)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniObjectInfo
// 0x0028
struct FHoudiniObjectInfo
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct HoudiniEngineRuntime.HoudiniGeoInfo
// 0x0030
struct FHoudiniGeoInfo
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct HoudiniEngineRuntime.HoudiniPartInfo
// 0x0048
struct FHoudiniPartInfo
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0000(0x0048) MISSED OFFSET
};

// ScriptStruct HoudiniEngineRuntime.HoudiniVolumeInfo
// 0x00B0
struct FHoudiniVolumeInfo
{
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0000(0x00B0) MISSED OFFSET
};

// ScriptStruct HoudiniEngineRuntime.HoudiniCurveInfo
// 0x001C
struct FHoudiniCurveInfo
{
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0000(0x001C) MISSED OFFSET
};

// ScriptStruct HoudiniEngineRuntime.HoudiniSplineComponentInstanceData
// 0x0030 (0x0098 - 0x0068)
struct FHoudiniSplineComponentInstanceData : public FActorComponentInstanceData
{
	TArray<struct FTransform>                          CurvePoints;                                              // 0x0068(0x0010) (ZeroConstructor)
	TArray<struct FVector>                             DisplayPoints;                                            // 0x0078(0x0010) (ZeroConstructor)
	TArray<int>                                        DisplayPointIndexDivider;                                 // 0x0088(0x0010) (ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
