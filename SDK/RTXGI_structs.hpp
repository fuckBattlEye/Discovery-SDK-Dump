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

// Enum RTXGI.EDDGIRaysPerProbe
enum class EDDGIRaysPerProbe : uint8_t
{
	n144                           = 0,
	n288                           = 1,
	n432                           = 2,
	n576                           = 3,
	n720                           = 4,
	n864                           = 5,
	n1008                          = 6,
	EDDGIRaysPerProbe_MAX          = 7
};


// Enum RTXGI.EDDGISkyLightType
enum class EDDGISkyLightType : uint8_t
{
	None                           = 0,
	Raster                         = 1,
	RayTracing                     = 2,
	EDDGISkyLightType_MAX          = 3
};


// Enum RTXGI.ERTXGIQualityPreset
enum class ERTXGIQualityPreset : uint8_t
{
	LOW                            = 0,
	MEDIUM                         = 1,
	HIGH                           = 2,
	VERY_HIGH                      = 3,
	ULTRA                          = 4,
	CINEMATIC                      = 5,
	CUSTOM                         = 6,
	OFF                            = 7,
	ERTXGIQualityPreset_MAX        = 8
};


// Enum RTXGI.ERTXGISurfacesMode
enum class ERTXGISurfacesMode : uint8_t
{
	DDGI                           = 0,
	PATH_TRACE                     = 1,
	ERTXGISurfacesMode_MAX         = 2
};


// Enum RTXGI.ERTXGIVolumetricsMode
enum class ERTXGIVolumetricsMode : uint8_t
{
	OFF                            = 0,
	DDGI                           = 1,
	ERTXGIVolumetricsMode_MAX      = 2
};


// Enum RTXGI.ERTXGICompositeMode
enum class ERTXGICompositeMode : uint8_t
{
	OFF                            = 0,
	ON                             = 1,
	ERTXGICompositeMode_MAX        = 2
};


// Enum RTXGI.ERTXGIPathTraceCheckerboardMode
enum class ERTXGIPathTraceCheckerboardMode : uint8_t
{
	OFF                            = 0,
	ONE_QUARTER                    = 1,
	TWO_QUARTER                    = 2,
	THREE_QUARTER                  = 3,
	ERTXGIPathTraceCheckerboardMode_MAX = 4
};


// Enum RTXGI.ERTXGIPathTraceDenoiseMode
enum class ERTXGIPathTraceDenoiseMode : uint8_t
{
	OFF                            = 0,
	REFERENCE                      = 1,
	ERTXGIPathTraceDenoiseMode_MAX = 2
};


// Enum RTXGI.ERTXGIDDGIRayDataBitDepth
enum class ERTXGIDDGIRayDataBitDepth : uint8_t
{
	R32D32                         = 0,
	R48D16                         = 1,
	R96D32                         = 2,
	ERTXGIDDGIRayDataBitDepth_MAX  = 3
};


// Enum RTXGI.ERTXGIDDGIIrradianceBitDepth
enum class ERTXGIDDGIIrradianceBitDepth : uint8_t
{
	D10                            = 0,
	D16                            = 1,
	D32                            = 2,
	ERTXGIDDGIIrradianceBitDepth_MAX = 3
};


// Enum RTXGI.ERTXGIDDGIDistanceBitDepth
enum class ERTXGIDDGIDistanceBitDepth : uint8_t
{
	D16                            = 0,
	D32                            = 1,
	ERTXGIDDGIDistanceBitDepth_MAX = 2
};


// Enum RTXGI.ERTXGIVisDDGIProbeData
enum class ERTXGIVisDDGIProbeData : uint8_t
{
	OFF                            = 0,
	IRRADIANCE                     = 1,
	DISTANCE                       = 2,
	DISTANCE_SQUARED               = 3,
	ERTXGIVisDDGIProbeData_MAX     = 4
};


// Enum RTXGI.ERTXGIVisDDGIProbeView
enum class ERTXGIVisDDGIProbeView : uint8_t
{
	OFF                            = 0,
	RADIANCE                       = 1,
	HIT_KIND                       = 2,
	NANS                           = 3,
	ERTXGIVisDDGIProbeView_MAX     = 4
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct RTXGI.DDGITextureCaptureData
// 0x0020
struct FDDGITextureCaptureData
{
	uint32_t                                           Width;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	uint32_t                                           Height;                                                   // 0x0004(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	uint32_t                                           Stride;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	uint32_t                                           PixelFormat;                                              // 0x000C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	TArray<unsigned char>                              PixelData;                                                // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct RTXGI.DDGIVolumeCaptureData
// 0x0090
struct FDDGIVolumeCaptureData
{
	struct FDDGITextureCaptureData                     Irradiance;                                               // 0x0000(0x0020) (Edit, EditConst)
	struct FDDGITextureCaptureData                     Distance;                                                 // 0x0020(0x0020) (Edit, EditConst)
	struct FDDGITextureCaptureData                     Offsets;                                                  // 0x0040(0x0020) (Edit, EditConst)
	struct FDDGITextureCaptureData                     States;                                                   // 0x0060(0x0020) (Edit, EditConst)
	struct FGuid                                       VolumeId;                                                 // 0x0080(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct RTXGI.DDGILevelCaptureData
// 0x0038
struct FDDGILevelCaptureData
{
	struct FString                                     LevelPackageName;                                         // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0010(0x0028) UNKNOWN PROPERTY: CapturedLevelData
};

// ScriptStruct RTXGI.ProbeRelocation
// 0x000C
struct FProbeRelocation
{
	bool                                               AutomaticProbeRelocation;                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              ProbeMinFrontfaceDistance;                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ProbeBackfaceThreshold;                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
