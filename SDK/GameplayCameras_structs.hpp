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

// Enum GameplayCameras.ECameraAnimationPlaySpace
enum class ECameraAnimationPlaySpace : uint8_t
{
	CameraLocal                    = 0,
	World                          = 1,
	UserDefined                    = 2,
	ECameraAnimationPlaySpace_MAX  = 3
};


// Enum GameplayCameras.ECameraAnimationEasingType
enum class ECameraAnimationEasingType : uint8_t
{
	Linear                         = 0,
	Sinusoidal                     = 1,
	Quadratic                      = 2,
	Cubic                          = 3,
	Quartic                        = 4,
	Quintic                        = 5,
	Exponential                    = 6,
	Circular                       = 7,
	ECameraAnimationEasingType_MAX = 8
};


// Enum GameplayCameras.EOscillatorWaveform
enum class EOscillatorWaveform : uint8_t
{
	SineWave                       = 0,
	PerlinNoise                    = 1,
	EOscillatorWaveform_MAX        = 2
};


// Enum GameplayCameras.EInitialOscillatorOffset
enum class EInitialOscillatorOffset : uint8_t
{
	EOO_OffsetRandom               = 0,
	EOO_OffsetZero                 = 1,
	EOO_MAX                        = 2
};


// Enum GameplayCameras.EInitialWaveOscillatorOffsetType
enum class EInitialWaveOscillatorOffsetType : uint8_t
{
	Random                         = 0,
	Zero                           = 1,
	EInitialWaveOscillatorOffsetType_MAX = 2
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GameplayCameras.CameraAnimationParams
// 0x0040
struct FCameraAnimationParams
{
	float                                              PlayRate;                                                 // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) MISSED OFFSET
	float                                              EaseInDuration;                                           // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0010(0x0004) MISSED OFFSET
	float                                              EaseOutDuration;                                          // 0x0014(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLoop;                                                    // 0x0018(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRandomStartTime;                                         // 0x0019(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x001A(0x0002) MISSED OFFSET
	float                                              DurationOverride;                                         // 0x001C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
	struct FRotator                                    UserPlaySpaceRot;                                         // 0x0028(0x0018) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GameplayCameras.CameraAnimationHandle
// 0x0004
struct FCameraAnimationHandle
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct GameplayCameras.ActiveCameraAnimationInfo
// 0x0070
struct FActiveCameraAnimationInfo
{
	class UCameraAnimationSequence*                    Sequence;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FCameraAnimationParams                      Params;                                                   // 0x0008(0x0040)
	struct FCameraAnimationHandle                      Handle;                                                   // 0x0048(0x0004)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	class UCameraAnimationSequencePlayer*              Player;                                                   // 0x0050(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UCameraAnimationSequenceCameraStandIn*       CameraStandIn;                                            // 0x0058(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              EaseInCurrentTime;                                        // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EaseOutCurrentTime;                                       // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsEasingIn;                                              // 0x0068(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsEasingOut;                                             // 0x0069(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x006A(0x0006) MISSED OFFSET
};

// ScriptStruct GameplayCameras.FOscillator
// 0x000C
struct FFOscillator
{
	float                                              Amplitude;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Frequency;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInitialOscillatorOffset>              InitialOffset;                                            // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct GameplayCameras.ROscillator
// 0x0024
struct FROscillator
{
	struct FFOscillator                                Pitch;                                                    // 0x0000(0x000C) (Edit, BlueprintVisible)
	struct FFOscillator                                Yaw;                                                      // 0x000C(0x000C) (Edit, BlueprintVisible)
	struct FFOscillator                                Roll;                                                     // 0x0018(0x000C) (Edit, BlueprintVisible)
};

// ScriptStruct GameplayCameras.VOscillator
// 0x0024
struct FVOscillator
{
	struct FFOscillator                                X;                                                        // 0x0000(0x000C) (Edit, BlueprintVisible)
	struct FFOscillator                                Y;                                                        // 0x000C(0x000C) (Edit, BlueprintVisible)
	struct FFOscillator                                Z;                                                        // 0x0018(0x000C) (Edit, BlueprintVisible)
};

// ScriptStruct GameplayCameras.PerlinNoiseShaker
// 0x0008
struct FPerlinNoiseShaker
{
	float                                              Amplitude;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Frequency;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GameplayCameras.WaveOscillator
// 0x000C
struct FWaveOscillator
{
	float                                              Amplitude;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Frequency;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
