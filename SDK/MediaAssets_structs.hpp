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

// Enum MediaAssets.EMediaAudioCaptureDeviceFilter
enum class EMediaAudioCaptureDeviceFilter : uint8_t
{
	None                           = 0,
	Card                           = 1,
	Microphone                     = 2,
	Software                       = 3,
	Unknown                        = 4,
	EMediaAudioCaptureDeviceFilter_MAX = 5
};


// Enum MediaAssets.EMediaVideoCaptureDeviceFilter
enum class EMediaVideoCaptureDeviceFilter : uint8_t
{
	None                           = 0,
	Card                           = 1,
	Software                       = 2,
	Unknown                        = 3,
	Webcam                         = 4,
	EMediaVideoCaptureDeviceFilter_MAX = 5
};


// Enum MediaAssets.EMediaWebcamCaptureDeviceFilter
enum class EMediaWebcamCaptureDeviceFilter : uint8_t
{
	None                           = 0,
	DepthSensor                    = 1,
	Front                          = 2,
	Rear                           = 3,
	Unknown                        = 4,
	EMediaWebcamCaptureDeviceFilter_MAX = 5
};


// Enum MediaAssets.EMediaPlayerTrack
enum class EMediaPlayerTrack : uint8_t
{
	Audio                          = 0,
	Caption                        = 1,
	Metadata                       = 2,
	Script                         = 3,
	Subtitle                       = 4,
	Text                           = 5,
	Video                          = 6,
	EMediaPlayerTrack_MAX          = 7
};


// Enum MediaAssets.EMediaSoundChannels
enum class EMediaSoundChannels : uint8_t
{
	Mono                           = 0,
	Stereo                         = 1,
	Surround                       = 2,
	EMediaSoundChannels_MAX        = 3
};


// Enum MediaAssets.EMediaSoundComponentFFTSize
enum class EMediaSoundComponentFFTSize : uint8_t
{
	Min_64                         = 0,
	Small_256                      = 1,
	Medium_512                     = 2,
	Large_1024                     = 3,
	EMediaSoundComponentFFTSize_MAX = 4
};


// Enum MediaAssets.MediaTextureOutputFormat
enum class EMediaTextureOutputFormat : uint8_t
{
	MTOF_Default                   = 0,
	MTOF_SRGB_LINOUT               = 1,
	MTOF_MAX                       = 2
};


// Enum MediaAssets.MediaTextureOrientation
enum class EMediaTextureOrientation : uint8_t
{
	MTORI_Original                 = 0,
	MTORI_CW90                     = 1,
	MTORI_CW180                    = 2,
	MTORI_CW270                    = 3,
	MTORI_MAX                      = 4
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MediaAssets.MediaCaptureDevice
// 0x0028
struct FMediaCaptureDevice
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly, Transient)
	struct FString                                     URL;                                                      // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
};

// ScriptStruct MediaAssets.MediaSoundComponentSpectralData
// 0x0008
struct FMediaSoundComponentSpectralData
{
	float                                              FrequencyHz;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Magnitude;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
