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

// Enum DatasmithContent.EDatasmithAreaLightActorShape
enum class EDatasmithAreaLightActorShape : uint8_t
{
	Rectangle                      = 0,
	Disc                           = 1,
	Sphere                         = 2,
	Cylinder                       = 3,
	None                           = 4,
	EDatasmithAreaLightActorShape_MAX = 5
};


// Enum DatasmithContent.EDatasmithAreaLightActorType
enum class EDatasmithAreaLightActorType : uint8_t
{
	Point                          = 0,
	Spot                           = 1,
	Rect                           = 2,
	EDatasmithAreaLightActorType_MAX = 3
};


// Enum DatasmithContent.EDatasmithImportSearchPackagePolicy
enum class EDatasmithImportSearchPackagePolicy : uint8_t
{
	Current                        = 0,
	All                            = 1,
	EDatasmithImportSearchPackagePolicy_MAX = 2
};


// Enum DatasmithContent.EDatasmithImportAssetConflictPolicy
enum class EDatasmithImportAssetConflictPolicy : uint8_t
{
	Replace                        = 0,
	Update                         = 1,
	Use                            = 2,
	Ignore                         = 3,
	EDatasmithImportAssetConflictPolicy_MAX = 4
};


// Enum DatasmithContent.EDatasmithImportActorPolicy
enum class EDatasmithImportActorPolicy : uint8_t
{
	Update                         = 0,
	Full                           = 1,
	Ignore                         = 2,
	EDatasmithImportActorPolicy_MAX = 3
};


// Enum DatasmithContent.EDatasmithImportMaterialQuality
enum class EDatasmithImportMaterialQuality : uint8_t
{
	UseNoFresnelCurves             = 0,
	UseSimplifierFresnelCurves     = 1,
	UseRealFresnelCurves           = 2,
	EDatasmithImportMaterialQuality_MAX = 3
};


// Enum DatasmithContent.EDatasmithImportLightmapMin
enum class EDatasmithImportLightmapMin : uint8_t
{
	LIGHTMAP_16                    = 0,
	LIGHTMAP_32                    = 1,
	LIGHTMAP_64                    = 2,
	LIGHTMAP_128                   = 3,
	LIGHTMAP_256                   = 4,
	LIGHTMAP_512                   = 5,
	LIGHTMAP_MAX                   = 6
};


// Enum DatasmithContent.EDatasmithImportLightmapMax
enum class EDatasmithImportLightmapMax : uint8_t
{
	LIGHTMAP_64                    = 0,
	LIGHTMAP_128                   = 1,
	LIGHTMAP_256                   = 2,
	LIGHTMAP_512                   = 3,
	LIGHTMAP_1024                  = 4,
	LIGHTMAP_2048                  = 5,
	LIGHTMAP_4096                  = 6,
	LIGHTMAP_MAX                   = 7
};


// Enum DatasmithContent.EDatasmithImportScene
enum class EDatasmithImportScene : uint8_t
{
	NewLevel                       = 0,
	CurrentLevel                   = 1,
	AssetsOnly                     = 2,
	EDatasmithImportScene_MAX      = 3
};


// Enum DatasmithContent.EDatasmithCADStitchingTechnique
enum class EDatasmithCADStitchingTechnique : uint8_t
{
	StitchingNone                  = 0,
	StitchingHeal                  = 1,
	StitchingSew                   = 2,
	EDatasmithCADStitchingTechnique_MAX = 3
};


// Enum DatasmithContent.EDatasmithCADRetessellationRule
enum class EDatasmithCADRetessellationRule : uint8_t
{
	All                            = 0,
	SkipDeletedSurfaces            = 1,
	EDatasmithCADRetessellationRule_MAX = 2
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct DatasmithContent.DatasmithCameraLookatTrackingSettingsTemplate
// 0x0030
struct FDatasmithCameraLookatTrackingSettingsTemplate
{
	unsigned char                                      bEnableLookAtTracking : 1;                                // 0x0000(0x0001)
	unsigned char                                      bAllowRoll : 1;                                           // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x0001(0x0028) UNKNOWN PROPERTY: ActorToTrack
};

// ScriptStruct DatasmithContent.DatasmithCameraFilmbackSettingsTemplate
// 0x0008
struct FDatasmithCameraFilmbackSettingsTemplate
{
	float                                              SensorWidth;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SensorHeight;                                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DatasmithContent.DatasmithCameraLensSettingsTemplate
// 0x0004
struct FDatasmithCameraLensSettingsTemplate
{
	float                                              MaxFStop;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DatasmithContent.DatasmithCameraFocusSettingsTemplate
// 0x0008
struct FDatasmithCameraFocusSettingsTemplate
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	float                                              ManualFocusDistance;                                      // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DatasmithContent.DatasmithPostProcessSettingsTemplate
// 0x0040
struct FDatasmithPostProcessSettingsTemplate
{
	unsigned char                                      bOverride_WhiteTemp : 1;                                  // 0x0000(0x0001)
	unsigned char                                      bOverride_ColorSaturation : 1;                            // 0x0000(0x0001)
	unsigned char                                      bOverride_VignetteIntensity : 1;                          // 0x0000(0x0001)
	unsigned char                                      bOverride_AutoExposureMethod : 1;                         // 0x0000(0x0001)
	unsigned char                                      bOverride_CameraISO : 1;                                  // 0x0000(0x0001)
	unsigned char                                      bOverride_CameraShutterSpeed : 1;                         // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	unsigned char                                      bOverride_DepthOfFieldFstop : 1;                          // 0x0004(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	float                                              WhiteTemp;                                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              VignetteIntensity;                                        // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector4                                    ColorSaturation;                                          // 0x0010(0x0020) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAutoExposureMethod>                   AutoExposureMethod;                                       // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              CameraISO;                                                // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CameraShutterSpeed;                                       // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldFstop;                                        // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DatasmithContent.DatasmithTessellationOptions
// 0x0010
struct FDatasmithTessellationOptions
{
	float                                              ChordTolerance;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxEdgeLength;                                            // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              NormalTolerance;                                          // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct DatasmithContent.DatasmithAssetImportOptions
// 0x0008
struct FDatasmithAssetImportOptions
{
	struct FName                                       PackagePath;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DatasmithContent.DatasmithStaticMeshImportOptions
// 0x0004
struct FDatasmithStaticMeshImportOptions
{
	unsigned char                                      UnknownData00[0x2];                                       // 0x0000(0x0002) MISSED OFFSET
	bool                                               bGenerateLightmapUVs;                                     // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRemoveDegenerates;                                       // 0x0003(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct DatasmithContent.DatasmithImportBaseOptions
// 0x0014
struct FDatasmithImportBaseOptions
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
	bool                                               bIncludeGeometry;                                         // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bIncludeMaterial;                                         // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bIncludeLight;                                            // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bIncludeCamera;                                           // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bIncludeAnimation;                                        // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	struct FDatasmithAssetImportOptions                AssetOptions;                                             // 0x0008(0x0008) (BlueprintVisible)
	struct FDatasmithStaticMeshImportOptions           StaticMeshOptions;                                        // 0x0010(0x0004) (Edit, BlueprintVisible, Config)
};

// ScriptStruct DatasmithContent.DatasmithReimportOptions
// 0x0002
struct FDatasmithReimportOptions
{
	bool                                               bUpdateActors;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRespawnDeletedActors;                                    // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DatasmithContent.DatasmithStaticParameterSetTemplate
// 0x0050
struct FDatasmithStaticParameterSetTemplate
{
	TMap<struct FName, bool>                           StaticSwitchParameters;                                   // 0x0000(0x0050)
};

// ScriptStruct DatasmithContent.DatasmithMeshSectionInfoTemplate
// 0x0004
struct FDatasmithMeshSectionInfoTemplate
{
	int                                                MaterialIndex;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DatasmithContent.DatasmithMeshSectionInfoMapTemplate
// 0x0050
struct FDatasmithMeshSectionInfoMapTemplate
{
	TMap<uint32_t, struct FDatasmithMeshSectionInfoTemplate> Map;                                                      // 0x0000(0x0050)
};

// ScriptStruct DatasmithContent.DatasmithMeshBuildSettingsTemplate
// 0x0010
struct FDatasmithMeshBuildSettingsTemplate
{
	unsigned char                                      bUseMikkTSpace : 1;                                       // 0x0000(0x0001)
	unsigned char                                      bRecomputeNormals : 1;                                    // 0x0000(0x0001)
	unsigned char                                      bRecomputeTangents : 1;                                   // 0x0000(0x0001)
	unsigned char                                      bRemoveDegenerates : 1;                                   // 0x0000(0x0001)
	unsigned char                                      bUseHighPrecisionTangentBasis : 1;                        // 0x0000(0x0001)
	unsigned char                                      bUseFullPrecisionUVs : 1;                                 // 0x0000(0x0001)
	unsigned char                                      bGenerateLightmapUVs : 1;                                 // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                MinLightmapResolution;                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SrcLightmapIndex;                                         // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DstLightmapIndex;                                         // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DatasmithContent.DatasmithStaticMaterialTemplate
// 0x0010
struct FDatasmithStaticMaterialTemplate
{
	struct FName                                       MaterialSlotName;                                         // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          MaterialInterface;                                        // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DatasmithContent.DatasmithImportInfo
// 0x0001
struct FDatasmithImportInfo
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct DatasmithContent.DatasmithRetessellationOptions
// 0x0004 (0x0014 - 0x0010)
struct FDatasmithRetessellationOptions : public FDatasmithTessellationOptions
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0010(0x0004) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
