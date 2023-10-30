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

// Enum Synthesis.ESynth1OscType
enum class ESynth1OscType : uint8_t
{
	Sine                           = 0,
	Saw                            = 1,
	Triangle                       = 2,
	Square                         = 3,
	Noise                          = 4,
	Count                          = 5,
	ESynth1OscType_MAX             = 6
};


// Enum Synthesis.ESynthLFOType
enum class ESynthLFOType : uint8_t
{
	Sine                           = 0,
	UpSaw                          = 1,
	DownSaw                        = 2,
	Square                         = 3,
	Triangle                       = 4,
	Exponential                    = 5,
	RandomSampleHold               = 6,
	Count                          = 7,
	ESynthLFOType_MAX              = 8
};


// Enum Synthesis.ESynthLFOMode
enum class ESynthLFOMode : uint8_t
{
	Sync                           = 0,
	OneShot                        = 1,
	Free                           = 2,
	Count                          = 3,
	ESynthLFOMode_MAX              = 4
};


// Enum Synthesis.ESynthLFOPatchType
enum class ESynthLFOPatchType : uint8_t
{
	PatchToNone                    = 0,
	PatchToGain                    = 1,
	PatchToOscFreq                 = 2,
	PatchToFilterFreq              = 3,
	PatchToFilterQ                 = 4,
	PatchToOscPulseWidth           = 5,
	PatchToOscPan                  = 6,
	PatchLFO1ToLFO2Frequency       = 7,
	PatchLFO1ToLFO2Gain            = 8,
	Count                          = 9,
	ESynthLFOPatchType_MAX         = 10
};


// Enum Synthesis.ESynthModEnvPatch
enum class ESynthModEnvPatch : uint8_t
{
	PatchToNone                    = 0,
	PatchToOscFreq                 = 1,
	PatchToFilterFreq              = 2,
	PatchToFilterQ                 = 3,
	PatchToLFO1Gain                = 4,
	PatchToLFO2Gain                = 5,
	PatchToLFO1Freq                = 6,
	PatchToLFO2Freq                = 7,
	Count                          = 8,
	ESynthModEnvPatch_MAX          = 9
};


// Enum Synthesis.ESynthModEnvBiasPatch
enum class ESynthModEnvBiasPatch : uint8_t
{
	PatchToNone                    = 0,
	PatchToOscFreq                 = 1,
	PatchToFilterFreq              = 2,
	PatchToFilterQ                 = 3,
	PatchToLFO1Gain                = 4,
	PatchToLFO2Gain                = 5,
	PatchToLFO1Freq                = 6,
	PatchToLFO2Freq                = 7,
	Count                          = 8,
	ESynthModEnvBiasPatch_MAX      = 9
};


// Enum Synthesis.ESynthFilterType
enum class ESynthFilterType : uint8_t
{
	LowPass                        = 0,
	HighPass                       = 1,
	BandPass                       = 2,
	BandStop                       = 3,
	Count                          = 4,
	ESynthFilterType_MAX           = 5
};


// Enum Synthesis.ESynthFilterAlgorithm
enum class ESynthFilterAlgorithm : uint8_t
{
	OnePole                        = 0,
	StateVariable                  = 1,
	Ladder                         = 2,
	Count                          = 3,
	ESynthFilterAlgorithm_MAX      = 4
};


// Enum Synthesis.ESynthStereoDelayMode
enum class ESynthStereoDelayMode : uint8_t
{
	Normal                         = 0,
	Cross                          = 1,
	PingPong                       = 2,
	Count                          = 3,
	ESynthStereoDelayMode_MAX      = 4
};


// Enum Synthesis.ESynth1PatchSource
enum class ESynth1PatchSource : uint8_t
{
	LFO1                           = 0,
	LFO2                           = 1,
	Envelope                       = 2,
	BiasEnvelope                   = 3,
	Count                          = 4,
	ESynth1PatchSource_MAX         = 5
};


// Enum Synthesis.ESynth1PatchDestination
enum class ESynth1PatchDestination : uint8_t
{
	Osc1Gain                       = 0,
	Osc1Frequency                  = 1,
	Osc1Pulsewidth                 = 2,
	Osc2Gain                       = 3,
	Osc2Frequency                  = 4,
	Osc2Pulsewidth                 = 5,
	FilterFrequency                = 6,
	FilterQ                        = 7,
	Gain                           = 8,
	Pan                            = 9,
	LFO1Frequency                  = 10,
	LFO1Gain                       = 11,
	LFO2Frequency                  = 12,
	LFO2Gain                       = 13,
	Count                          = 14,
	ESynth1PatchDestination_MAX    = 15
};


// Enum Synthesis.ESourceEffectDynamicsProcessorType
enum class ESourceEffectDynamicsProcessorType : uint8_t
{
	Compressor                     = 0,
	Limiter                        = 1,
	Expander                       = 2,
	Gate                           = 3,
	UpwardsCompressor              = 4,
	Count                          = 5,
	ESourceEffectDynamicsProcessorType_MAX = 6
};


// Enum Synthesis.ESourceEffectDynamicsPeakMode
enum class ESourceEffectDynamicsPeakMode : uint8_t
{
	MeanSquared                    = 0,
	RootMeanSquared                = 1,
	Peak                           = 2,
	Count                          = 3,
	ESourceEffectDynamicsPeakMode_MAX = 4
};


// Enum Synthesis.EEnvelopeFollowerPeakMode
enum class EEnvelopeFollowerPeakMode : uint8_t
{
	MeanSquared                    = 0,
	RootMeanSquared                = 1,
	Peak                           = 2,
	Count                          = 3,
	EEnvelopeFollowerPeakMode_MAX  = 4
};


// Enum Synthesis.ESourceEffectFilterCircuit
enum class ESourceEffectFilterCircuit : uint8_t
{
	OnePole                        = 0,
	StateVariable                  = 1,
	Ladder                         = 2,
	Count                          = 3,
	ESourceEffectFilterCircuit_MAX = 4
};


// Enum Synthesis.ESourceEffectFilterType
enum class ESourceEffectFilterType : uint8_t
{
	LowPass                        = 0,
	HighPass                       = 1,
	BandPass                       = 2,
	BandStop                       = 3,
	Count                          = 4,
	ESourceEffectFilterType_MAX    = 5
};


// Enum Synthesis.ESourceEffectFilterParam
enum class ESourceEffectFilterParam : uint8_t
{
	FilterFrequency                = 0,
	FilterResonance                = 1,
	Count                          = 2,
	ESourceEffectFilterParam_MAX   = 3
};


// Enum Synthesis.EStereoChannelMode
enum class EStereoChannelMode : uint8_t
{
	MidSide                        = 0,
	LeftRight                      = 1,
	count                          = 2,
	EStereoChannelMode_MAX         = 3
};


// Enum Synthesis.ESourceEffectMotionFilterModSource
enum class ESourceEffectMotionFilterModSource : uint8_t
{
	DistanceFromListener           = 0,
	SpeedRelativeToListener        = 1,
	SpeedOfSourceEmitter           = 2,
	SpeedOfListener                = 3,
	SpeedOfAngleDelta              = 4,
	Count                          = 5,
	ESourceEffectMotionFilterModSource_MAX = 6
};


// Enum Synthesis.ESourceEffectMotionFilterModDestination
enum class ESourceEffectMotionFilterModDestination : uint8_t
{
	FilterACutoffFrequency         = 0,
	FilterAResonance               = 1,
	FilterAOutputVolumeDB          = 2,
	FilterBCutoffFrequency         = 3,
	FilterBResonance               = 4,
	FilterBOutputVolumeDB          = 5,
	FilterMix                      = 6,
	Count                          = 7,
	ESourceEffectMotionFilterModDestination_MAX = 8
};


// Enum Synthesis.ESourceEffectMotionFilterTopology
enum class ESourceEffectMotionFilterTopology : uint8_t
{
	SerialMode                     = 0,
	ParallelMode                   = 1,
	Count                          = 2,
	ESourceEffectMotionFilterTopology_MAX = 3
};


// Enum Synthesis.ESourceEffectMotionFilterCircuit
enum class ESourceEffectMotionFilterCircuit : uint8_t
{
	OnePole                        = 0,
	StateVariable                  = 1,
	Ladder                         = 2,
	Count                          = 3,
	ESourceEffectMotionFilterCircuit_MAX = 4
};


// Enum Synthesis.ESourceEffectMotionFilterType
enum class ESourceEffectMotionFilterType : uint8_t
{
	LowPass                        = 0,
	HighPass                       = 1,
	BandPass                       = 2,
	BandStop                       = 3,
	Count                          = 4,
	ESourceEffectMotionFilterType_MAX = 5
};


// Enum Synthesis.EPhaserLFOType
enum class EPhaserLFOType : uint8_t
{
	Sine                           = 0,
	UpSaw                          = 1,
	DownSaw                        = 2,
	Square                         = 3,
	Triangle                       = 4,
	Exponential                    = 5,
	RandomSampleHold               = 6,
	Count                          = 7,
	EPhaserLFOType_MAX             = 8
};


// Enum Synthesis.ERingModulatorTypeSourceEffect
enum class ERingModulatorTypeSourceEffect : uint8_t
{
	Sine                           = 0,
	Saw                            = 1,
	Triangle                       = 2,
	Square                         = 3,
	Count                          = 4,
	ERingModulatorTypeSourceEffect_MAX = 5
};


// Enum Synthesis.EStereoDelaySourceEffect
enum class EStereoDelaySourceEffect : uint8_t
{
	Normal                         = 0,
	Cross                          = 1,
	PingPong                       = 2,
	Count                          = 3,
	EStereoDelaySourceEffect_MAX   = 4
};


// Enum Synthesis.EStereoDelayFiltertype
enum class EStereoDelayFiltertype : uint8_t
{
	Lowpass                        = 0,
	Highpass                       = 1,
	Bandpass                       = 2,
	Notch                          = 3,
	Count                          = 4,
	EStereoDelayFiltertype_MAX     = 5
};


// Enum Synthesis.ESubmixEffectConvolutionReverbBlockSize
enum class ESubmixEffectConvolutionReverbBlockSize : uint8_t
{
	BlockSize256                   = 0,
	BlockSize512                   = 1,
	BlockSize1024                  = 2,
	ESubmixEffectConvolutionReverbBlockSize_MAX = 3
};


// Enum Synthesis.ESubmixFilterType
enum class ESubmixFilterType : uint8_t
{
	LowPass                        = 0,
	HighPass                       = 1,
	BandPass                       = 2,
	BandStop                       = 3,
	Count                          = 4,
	ESubmixFilterType_MAX          = 5
};


// Enum Synthesis.ESubmixFilterAlgorithm
enum class ESubmixFilterAlgorithm : uint8_t
{
	OnePole                        = 0,
	StateVariable                  = 1,
	Ladder                         = 2,
	Count                          = 3,
	ESubmixFilterAlgorithm_MAX     = 4
};


// Enum Synthesis.ETapLineMode
enum class ETapLineMode : uint8_t
{
	SendToChannel                  = 0,
	Panning                        = 1,
	Disabled                       = 2,
	ETapLineMode_MAX               = 3
};


// Enum Synthesis.EGranularSynthEnvelopeType
enum class EGranularSynthEnvelopeType : uint8_t
{
	Rectangular                    = 0,
	Triangle                       = 1,
	DownwardTriangle               = 2,
	UpwardTriangle                 = 3,
	ExponentialDecay               = 4,
	ExponentialIncrease            = 5,
	Gaussian                       = 6,
	Hanning                        = 7,
	Lanczos                        = 8,
	Cosine                         = 9,
	CosineSquared                  = 10,
	Welch                          = 11,
	Blackman                       = 12,
	BlackmanHarris                 = 13,
	Count                          = 14,
	EGranularSynthEnvelopeType_MAX = 15
};


// Enum Synthesis.EGranularSynthSeekType
enum class EGranularSynthSeekType : uint8_t
{
	FromBeginning                  = 0,
	FromCurrentPosition            = 1,
	Count                          = 2,
	EGranularSynthSeekType_MAX     = 3
};


// Enum Synthesis.CurveInterpolationType
enum class ECurveInterpolationType : uint8_t
{
	AUTOINTERP                     = 0,
	LINEAR                         = 1,
	CONSTANT                       = 2,
	CurveInterpolationType_MAX     = 3
};


// Enum Synthesis.ESamplePlayerSeekType
enum class ESamplePlayerSeekType : uint8_t
{
	FromBeginning                  = 0,
	FromCurrentPosition            = 1,
	FromEnd                        = 2,
	Count                          = 3,
	ESamplePlayerSeekType_MAX      = 4
};


// Enum Synthesis.ESynthKnobSize
enum class ESynthKnobSize : uint8_t
{
	Medium                         = 0,
	Large                          = 1,
	Count                          = 2,
	ESynthKnobSize_MAX             = 3
};


// Enum Synthesis.ESynthSlateSizeType
enum class ESynthSlateSizeType : uint8_t
{
	Small                          = 0,
	Medium                         = 1,
	Large                          = 2,
	Count                          = 3,
	ESynthSlateSizeType_MAX        = 4
};


// Enum Synthesis.ESynthSlateColorStyle
enum class ESynthSlateColorStyle : uint8_t
{
	Light                          = 0,
	Dark                           = 1,
	Count                          = 2,
	ESynthSlateColorStyle_MAX      = 3
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Synthesis.Synth1PatchCable
// 0x0008
struct FSynth1PatchCable
{
	float                                              Depth;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
};

// ScriptStruct Synthesis.EpicSynth1Patch
// 0x0018
struct FEpicSynth1Patch
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TArray<struct FSynth1PatchCable>                   PatchCables;                                              // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Synthesis.ModularSynthPreset
// 0x00D8 (0x00E0 - 0x0008)
struct FModularSynthPreset : public FTableRowBase
{
	unsigned char                                      bEnablePolyphony : 1;                                     // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	float                                              Osc1Gain;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Osc1Octave;                                               // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Osc1Semitones;                                            // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Osc1Cents;                                                // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Osc1PulseWidth;                                           // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	float                                              Osc2Gain;                                                 // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Osc2Octave;                                               // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Osc2Semitones;                                            // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Osc2Cents;                                                // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Osc2PulseWidth;                                           // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Portamento;                                               // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnableUnison : 1;                                        // 0x0040(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bEnableOscillatorSync : 1;                                // 0x0040(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	float                                              Spread;                                                   // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Pan;                                                      // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LFO1Frequency;                                            // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LFO1Gain;                                                 // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	float                                              LFO2Frequency;                                            // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LFO2Gain;                                                 // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0060(0x0004) MISSED OFFSET
	float                                              GainDb;                                                   // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AttackTime;                                               // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DecayTime;                                                // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SustainGain;                                              // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReleaseTime;                                              // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0078(0x0004) MISSED OFFSET
	unsigned char                                      bInvertModulationEnvelope : 1;                            // 0x007C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bInvertModulationEnvelopeBias : 1;                        // 0x007C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData06[0x3];                                       // 0x007D(0x0003) MISSED OFFSET
	float                                              ModulationEnvelopeDepth;                                  // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ModulationEnvelopeAttackTime;                             // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ModulationEnvelopeDecayTime;                              // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ModulationEnvelopeSustainGain;                            // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ModulationEnvelopeReleaseTime;                            // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bLegato : 1;                                              // 0x0094(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bRetrigger : 1;                                           // 0x0094(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0095(0x0003) MISSED OFFSET
	float                                              FilterFrequency;                                          // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilterQ;                                                  // 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x00A0(0x0004) MISSED OFFSET
	unsigned char                                      bStereoDelayEnabled : 1;                                  // 0x00A4(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData09[0x7];                                       // 0x00A5(0x0007) MISSED OFFSET
	float                                              StereoDelayTime;                                          // 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StereoDelayFeedback;                                      // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StereoDelayWetlevel;                                      // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StereoDelayRatio;                                         // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bChorusEnabled : 1;                                       // 0x00BC(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData10[0x3];                                       // 0x00BD(0x0003) MISSED OFFSET
	float                                              ChorusDepth;                                              // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ChorusFeedback;                                           // 0x00C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ChorusFrequency;                                          // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET
	TArray<struct FEpicSynth1Patch>                    Patches;                                                  // 0x00D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Synthesis.ModularSynthPresetBankEntry
// 0x00F0
struct FModularSynthPresetBankEntry
{
	struct FString                                     PresetName;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FModularSynthPreset                         Preset;                                                   // 0x0010(0x00E0) (Edit, BlueprintVisible)
};

// ScriptStruct Synthesis.PatchId
// 0x0004
struct FPatchId
{
	int                                                ID;                                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Synthesis.SourceEffectBitCrusherSettings
// 0x0030
struct FSourceEffectBitCrusherSettings
{
	float                                              CrushedSampleRate;                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FSoundModulationDestinationSettings         SampleRateModulation;                                     // 0x0008(0x0010) (Edit, BlueprintVisible)
	float                                              CrushedBits;                                              // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FSoundModulationDestinationSettings         BitModulation;                                            // 0x0020(0x0010) (Edit, BlueprintVisible)
};

// ScriptStruct Synthesis.SourceEffectBitCrusherBaseSettings
// 0x0008
struct FSourceEffectBitCrusherBaseSettings
{
	float                                              SampleRate;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BitDepth;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Synthesis.SourceEffectChorusSettings
// 0x0078
struct FSourceEffectChorusSettings
{
	float                                              Depth;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Frequency;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Feedback;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              WetLevel;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DryLevel;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Spread;                                                   // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FSoundModulationDestinationSettings         DepthModulation;                                          // 0x0018(0x0010) (Edit, BlueprintVisible)
	struct FSoundModulationDestinationSettings         FrequencyModulation;                                      // 0x0028(0x0010) (Edit, BlueprintVisible)
	struct FSoundModulationDestinationSettings         FeedbackModulation;                                       // 0x0038(0x0010) (Edit, BlueprintVisible)
	struct FSoundModulationDestinationSettings         WetModulation;                                            // 0x0048(0x0010) (Edit, BlueprintVisible)
	struct FSoundModulationDestinationSettings         DryModulation;                                            // 0x0058(0x0010) (Edit, BlueprintVisible)
	struct FSoundModulationDestinationSettings         SpreadModulation;                                         // 0x0068(0x0010) (Edit, BlueprintVisible)
};

// ScriptStruct Synthesis.SourceEffectChorusBaseSettings
// 0x0018
struct FSourceEffectChorusBaseSettings
{
	float                                              Depth;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Frequency;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Feedback;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WetLevel;                                                 // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DryLevel;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Spread;                                                   // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Synthesis.SourceEffectDynamicsProcessorSettings
// 0x0028
struct FSourceEffectDynamicsProcessorSettings
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	float                                              LookAheadMsec;                                            // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AttackTimeMsec;                                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReleaseTimeMsec;                                          // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ThresholdDb;                                              // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Ratio;                                                    // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              KneeBandwidthDb;                                          // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InputGainDb;                                              // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OutputGainDb;                                             // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bStereoLinked : 1;                                        // 0x0024(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bAnalogMode : 1;                                          // 0x0024(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
};

// ScriptStruct Synthesis.SourceEffectEnvelopeFollowerSettings
// 0x000C
struct FSourceEffectEnvelopeFollowerSettings
{
	float                                              AttackTime;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReleaseTime;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0008(0x0001) MISSED OFFSET
	bool                                               bIsAnalogMode;                                            // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
};

// ScriptStruct Synthesis.SourceEffectEQBand
// 0x0010
struct FSourceEffectEQBand
{
	float                                              Frequency;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bandwidth;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GainDb;                                                   // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnabled : 1;                                             // 0x000C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct Synthesis.SourceEffectEQSettings
// 0x0010
struct FSourceEffectEQSettings
{
	TArray<struct FSourceEffectEQBand>                 EQBands;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Synthesis.SourceEffectFilterAudioBusModulationSettings
// 0x0028
struct FSourceEffectFilterAudioBusModulationSettings
{
	class UAudioBus*                                   AudioBus;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EnvelopeFollowerAttackTimeMsec;                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EnvelopeFollowerReleaseTimeMsec;                          // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EnvelopeGainMultiplier;                                   // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	float                                              MinFrequencyModulation;                                   // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxFrequencyModulation;                                   // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinResonanceModulation;                                   // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxResonanceModulation;                                   // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Synthesis.SourceEffectFilterSettings
// 0x0020
struct FSourceEffectFilterSettings
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	float                                              CutoffFrequency;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilterQ;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<struct FSourceEffectFilterAudioBusModulationSettings> AudioBusModulation;                                       // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Synthesis.SourceEffectFoldbackDistortionSettings
// 0x000C
struct FSourceEffectFoldbackDistortionSettings
{
	float                                              InputGainDb;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ThresholdDb;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OutputGainDb;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Synthesis.SourceEffectMidSideSpreaderSettings
// 0x0008
struct FSourceEffectMidSideSpreaderSettings
{
	float                                              SpreadAmount;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0004(0x0002) MISSED OFFSET
	bool                                               bEqualPower;                                              // 0x0006(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0007(0x0001) MISSED OFFSET
};

// ScriptStruct Synthesis.SourceEffectIndividualFilterSettings
// 0x000C
struct FSourceEffectIndividualFilterSettings
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	float                                              CutoffFrequency;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilterQ;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Synthesis.SourceEffectMotionFilterModulationSettings
// 0x0040
struct FSourceEffectMotionFilterModulationSettings
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FVector2D                                   ModulationInputRange;                                     // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ModulationOutputMinimumRange;                             // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ModulationOutputMaximumRange;                             // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UpdateEaseMS;                                             // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct Synthesis.SourceEffectMotionFilterSettings
// 0x0078
struct FSourceEffectMotionFilterSettings
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	float                                              MotionFilterMix;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSourceEffectIndividualFilterSettings       FilterASettings;                                          // 0x0008(0x000C) (Edit, BlueprintVisible)
	struct FSourceEffectIndividualFilterSettings       FilterBSettings;                                          // 0x0014(0x000C) (Edit, BlueprintVisible)
	TMap<enum class ESourceEffectMotionFilterModDestination, struct FSourceEffectMotionFilterModulationSettings> ModulationMappings;                                       // 0x0020(0x0050) (Edit, BlueprintVisible)
	float                                              DryVolumeDb;                                              // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
};

// ScriptStruct Synthesis.SourceEffectPannerSettings
// 0x0008
struct FSourceEffectPannerSettings
{
	float                                              Spread;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Pan;                                                      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Synthesis.SourceEffectPhaserSettings
// 0x0010
struct FSourceEffectPhaserSettings
{
	float                                              WetLevel;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Frequency;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Feedback;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x000C(0x0001) MISSED OFFSET
	bool                                               UseQuadraturePhase;                                       // 0x000D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
};

// ScriptStruct Synthesis.SourceEffectRingModulationSettings
// 0x0020
struct FSourceEffectRingModulationSettings
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	float                                              Frequency;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Depth;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DryLevel;                                                 // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WetLevel;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class UAudioBus*                                   AudioBusModulator;                                        // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Synthesis.SourceEffectSimpleDelaySettings
// 0x0018
struct FSourceEffectSimpleDelaySettings
{
	float                                              SpeedOfSound;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DelayAmount;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DryAmount;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WetAmount;                                                // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Feedback;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bDelayBasedOnDistance : 1;                                // 0x0014(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
};

// ScriptStruct Synthesis.SourceEffectStereoDelaySettings
// 0x0024
struct FSourceEffectStereoDelaySettings
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	float                                              DelayTimeMsec;                                            // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Feedback;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DelayRatio;                                               // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WetLevel;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DryLevel;                                                 // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFilterEnabled;                                           // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	float                                              FilterFrequency;                                          // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilterQ;                                                  // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Synthesis.SourceEffectWaveShaperSettings
// 0x0008
struct FSourceEffectWaveShaperSettings
{
	float                                              Amount;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OutputGainDb;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Synthesis.SubmixEffectConvolutionReverbSettings
// 0x0028
struct FSubmixEffectConvolutionReverbSettings
{
	float                                              NormalizationVolumeDb;                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bBypass;                                                  // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bMixInputChannelFormatToImpulseResponseFormat;            // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bMixReverbOutputToOutputChannelFormat;                    // 0x0006(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0007(0x0001) MISSED OFFSET
	float                                              SurroundRearChannelBleedDb;                               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bInvertRearChannelBleedPhase;                             // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSurroundRearChannelFlip;                                 // 0x000D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
	float                                              SurroundRearChannelBleedAmount;                           // 0x0010(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class UAudioImpulseResponse*                       ImpulseResponse;                                          // 0x0018(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               AllowHArdwareAcceleration;                                // 0x0020(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct Synthesis.SubmixEffectDelaySettings
// 0x000C
struct FSubmixEffectDelaySettings
{
	float                                              MaximumDelayLength;                                       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InterpolationTime;                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DelayLength;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Synthesis.SubmixEffectFilterSettings
// 0x000C
struct FSubmixEffectFilterSettings
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	float                                              FilterFrequency;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilterQ;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Synthesis.SubmixEffectFlexiverbSettings
// 0x0010
struct FSubmixEffectFlexiverbSettings
{
	float                                              PreDelay;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DecayTime;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RoomDampening;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Complexity;                                               // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Synthesis.DynamicsBandSettings
// 0x0020
struct FDynamicsBandSettings
{
	float                                              CrossoverTopFrequency;                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AttackTimeMsec;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReleaseTimeMsec;                                          // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ThresholdDb;                                              // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Ratio;                                                    // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              KneeBandwidthDb;                                          // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InputGainDb;                                              // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OutputGainDb;                                             // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Synthesis.SubmixEffectMultibandCompressorSettings
// 0x0038
struct FSubmixEffectMultibandCompressorSettings
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	float                                              LookAheadMsec;                                            // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAnalogMode;                                              // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFourPole;                                                // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bBypass;                                                  // 0x000A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x000B(0x0005) MISSED OFFSET
	class UAudioBus*                                   ExternalAudioBus;                                         // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundSubmix*                                ExternalSubmix;                                           // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              KeyGainDb;                                                // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bKeyAudition;                                             // 0x0024(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	TArray<struct FDynamicsBandSettings>               Bands;                                                    // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Synthesis.SubmixEffectStereoDelaySettings
// 0x0024
struct FSubmixEffectStereoDelaySettings
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	float                                              DelayTimeMsec;                                            // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Feedback;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DelayRatio;                                               // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WetLevel;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DryLevel;                                                 // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFilterEnabled;                                           // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	float                                              FilterFrequency;                                          // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilterQ;                                                  // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Synthesis.TapDelayInfo
// 0x0018
struct FTapDelayInfo
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	float                                              DelayLength;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Gain;                                                     // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                OutputChannel;                                            // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PanInDegrees;                                             // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TapId;                                                    // 0x0014(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Synthesis.SubmixEffectTapDelaySettings
// 0x0018
struct FSubmixEffectTapDelaySettings
{
	float                                              MaximumDelayLength;                                       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InterpolationTime;                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FTapDelayInfo>                       Taps;                                                     // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Synthesis.Synth2DSliderStyle
// 0x0428 (0x0430 - 0x0008)
struct FSynth2DSliderStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FSlateBrush                                 NormalThumbImage;                                         // 0x0010(0x00D0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 DisabledThumbImage;                                       // 0x00E0(0x00D0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 NormalBarImage;                                           // 0x01B0(0x00D0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 DisabledBarImage;                                         // 0x0280(0x00D0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BackgroundImage;                                          // 0x0350(0x00D0) (Edit, BlueprintVisible)
	float                                              BarThickness;                                             // 0x0420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0424(0x000C) MISSED OFFSET
};

// ScriptStruct Synthesis.SynthKnobStyle
// 0x0358 (0x0360 - 0x0008)
struct FSynthKnobStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FSlateBrush                                 LargeKnob;                                                // 0x0010(0x00D0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 LargeKnobOverlay;                                         // 0x00E0(0x00D0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 MediumKnob;                                               // 0x01B0(0x00D0) (Edit, BlueprintVisible)
	struct FSlateBrush                                 MediumKnobOverlay;                                        // 0x0280(0x00D0) (Edit, BlueprintVisible)
	float                                              MinValueAngle;                                            // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxValueAngle;                                            // 0x0354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0358(0x0008) MISSED OFFSET
};

// ScriptStruct Synthesis.SynthSlateStyle
// 0x0008 (0x0010 - 0x0008)
struct FSynthSlateStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
