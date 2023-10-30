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

// Enum AudioMixer.EAudioDeviceChangedRole
enum class EAudioDeviceChangedRole : uint8_t
{
	Invalid                        = 0,
	Console                        = 1,
	Multimedia                     = 2,
	Communications                 = 3,
	Count                          = 4,
	EAudioDeviceChangedRole_MAX    = 5
};


// Enum AudioMixer.EAudioDeviceChangedState
enum class EAudioDeviceChangedState : uint8_t
{
	Invalid                        = 0,
	Active                         = 1,
	Disabled                       = 2,
	NotPresent                     = 3,
	Unplugged                      = 4,
	Count                          = 5,
	EAudioDeviceChangedState_MAX   = 6
};


// Enum AudioMixer.EAudioMixerChannelType
enum class EAudioMixerChannelType : uint8_t
{
	FrontLeft                      = 0,
	FrontRight                     = 1,
	FrontCenter                    = 2,
	LowFrequency                   = 3,
	BackLeft                       = 4,
	BackRight                      = 5,
	FrontLeftOfCenter              = 6,
	FrontRightOfCenter             = 7,
	BackCenter                     = 8,
	SideLeft                       = 9,
	SideRight                      = 10,
	TopCenter                      = 11,
	TopFrontLeft                   = 12,
	TopFrontCenter                 = 13,
	TopFrontRight                  = 14,
	TopBackLeft                    = 15,
	TopBackCenter                  = 16,
	TopBackRight                   = 17,
	Unknown                        = 18,
	ChannelTypeCount               = 19,
	DefaultChannel                 = 20,
	EAudioMixerChannelType_MAX     = 21
};


// Enum AudioMixer.EAudioMixerStreamDataFormatType
enum class EAudioMixerStreamDataFormatType : uint8_t
{
	Unknown                        = 0,
	Float                          = 1,
	Int16                          = 2,
	Unsupported                    = 3,
	EAudioMixerStreamDataFormatType_MAX = 4
};


// Enum AudioMixer.ESwapAudioOutputDeviceResultState
enum class ESwapAudioOutputDeviceResultState : uint8_t
{
	Failure                        = 0,
	Success                        = 1,
	None                           = 2,
	ESwapAudioOutputDeviceResultState_MAX = 3
};


// Enum AudioMixer.EMusicalNoteName
enum class EMusicalNoteName : uint8_t
{
	C                              = 0,
	Db                             = 1,
	D                              = 2,
	Eb                             = 3,
	E                              = 4,
	F                              = 5,
	Gb                             = 6,
	G                              = 7,
	Ab                             = 8,
	A                              = 9,
	Bb                             = 10,
	B                              = 11,
	EMusicalNoteName_MAX           = 12
};


// Enum AudioMixer.ESubmixEffectDynamicsProcessorType
enum class ESubmixEffectDynamicsProcessorType : uint8_t
{
	Compressor                     = 0,
	Limiter                        = 1,
	Expander                       = 2,
	Gate                           = 3,
	UpwardsCompressor              = 4,
	Count                          = 5,
	ESubmixEffectDynamicsProcessorType_MAX = 6
};


// Enum AudioMixer.ESubmixEffectDynamicsPeakMode
enum class ESubmixEffectDynamicsPeakMode : uint8_t
{
	MeanSquared                    = 0,
	RootMeanSquared                = 1,
	Peak                           = 2,
	Count                          = 3,
	ESubmixEffectDynamicsPeakMode_MAX = 4
};


// Enum AudioMixer.ESubmixEffectDynamicsChannelLinkMode
enum class ESubmixEffectDynamicsChannelLinkMode : uint8_t
{
	Disabled                       = 0,
	Average                        = 1,
	Peak                           = 2,
	Count                          = 3,
	ESubmixEffectDynamicsChannelLinkMode_MAX = 4
};


// Enum AudioMixer.ESubmixEffectDynamicsKeySource
enum class ESubmixEffectDynamicsKeySource : uint8_t
{
	Default                        = 0,
	AudioBus                       = 1,
	Submix                         = 2,
	Count                          = 3,
	ESubmixEffectDynamicsKeySource_MAX = 4
};


// Enum AudioMixer.EQuarztClockManagerType
enum class EQuarztClockManagerType : uint8_t
{
	AudioEngine                    = 0,
	QuartzSubsystem                = 1,
	Count                          = 2,
	EQuarztClockManagerType_MAX    = 3
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AudioMixer.AudioOutputDeviceInfo
// 0x0048
struct FAudioOutputDeviceInfo
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     DeviceID;                                                 // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                NumChannels;                                              // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SampleRate;                                               // 0x0024(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	TArray<enum class EAudioMixerChannelType>          OutputChannelArray;                                       // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      bIsSystemDefault : 1;                                     // 0x0040(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bIsCurrentDevice : 1;                                     // 0x0040(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
};

// ScriptStruct AudioMixer.SubmixEffectDynamicProcessorFilterSettings
// 0x000C
struct FSubmixEffectDynamicProcessorFilterSettings
{
	unsigned char                                      bEnabled : 1;                                             // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Cutoff;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GainDb;                                                   // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AudioMixer.SubmixEffectDynamicsProcessorSettings
// 0x0060
struct FSubmixEffectDynamicsProcessorSettings
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	float                                              InputGainDb;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ThresholdDb;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Ratio;                                                    // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              KneeBandwidthDb;                                          // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LookAheadMsec;                                            // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AttackTimeMsec;                                           // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReleaseTimeMsec;                                          // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
	class UAudioBus*                                   ExternalAudioBus;                                         // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundSubmix*                                ExternalSubmix;                                           // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bChannelLinked : 1;                                       // 0x0038(0x0001) (Deprecated)
	unsigned char                                      bAnalogMode : 1;                                          // 0x0038(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bBypass : 1;                                              // 0x0038(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bKeyAudition : 1;                                         // 0x0038(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	float                                              KeyGainDb;                                                // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OutputGainDb;                                             // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSubmixEffectDynamicProcessorFilterSettings KeyHighshelf;                                             // 0x0044(0x000C) (Edit, BlueprintVisible)
	struct FSubmixEffectDynamicProcessorFilterSettings KeyLowshelf;                                              // 0x0050(0x000C) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData03[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
};

// ScriptStruct AudioMixer.SubmixEffectEQBand
// 0x0010
struct FSubmixEffectEQBand
{
	float                                              Frequency;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bandwidth;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GainDb;                                                   // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnabled : 1;                                             // 0x000C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct AudioMixer.SubmixEffectSubmixEQSettings
// 0x0010
struct FSubmixEffectSubmixEQSettings
{
	TArray<struct FSubmixEffectEQBand>                 EQBands;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct AudioMixer.SubmixEffectReverbSettings
// 0x0040
struct FSubmixEffectReverbSettings
{
	bool                                               bBypassEarlyReflections;                                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              ReflectionsDelay;                                         // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GainHF;                                                   // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReflectionsGain;                                          // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bBypassLateReflections;                                   // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              LateDelay;                                                // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DecayTime;                                                // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Density;                                                  // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Diffusion;                                                // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AirAbsorptionGainHF;                                      // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DecayHFRatio;                                             // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LateGain;                                                 // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Gain;                                                     // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WetLevel;                                                 // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DryLevel;                                                 // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bBypass;                                                  // 0x003C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
};

// ScriptStruct AudioMixer.SwapAudioOutputResult
// 0x0028
struct FSwapAudioOutputResult
{
	struct FString                                     CurrentDeviceId;                                          // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     RequestedDeviceId;                                        // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
