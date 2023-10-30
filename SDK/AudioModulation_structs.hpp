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

// Enum AudioModulation.ESoundModulationLFOShape
enum class ESoundModulationLFOShape : uint8_t
{
	Sine                           = 0,
	UpSaw                          = 1,
	DownSaw                        = 2,
	Square                         = 3,
	Triangle                       = 4,
	Exponential                    = 5,
	RandomSampleHold               = 6,
	COUNT                          = 7,
	ESoundModulationLFOShape_MAX   = 8
};


// Enum AudioModulation.ESoundModulatorCurve
enum class ESoundModulatorCurve : uint8_t
{
	Linear                         = 0,
	Exp                            = 1,
	Exp_Inverse                    = 2,
	Log                            = 3,
	Sin                            = 4,
	SCurve                         = 5,
	Shared                         = 6,
	Custom                         = 7,
	Count                          = 8,
	ESoundModulatorCurve_MAX       = 9
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AudioModulation.SoundModulationMixValue
// 0x0020
struct FSoundModulationMixValue
{
	float                                              TargetValue;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AttackTime;                                               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReleaseTime;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x000C(0x0014) MISSED OFFSET
};

// ScriptStruct AudioModulation.SoundControlBusMixStage
// 0x0028
struct FSoundControlBusMixStage
{
	class USoundControlBus*                            Bus;                                                      // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSoundModulationMixValue                    Value;                                                    // 0x0008(0x0020) (Edit, BlueprintVisible)
};

// ScriptStruct AudioModulation.EnvelopeFollowerGeneratorParams
// 0x0020
struct FEnvelopeFollowerGeneratorParams
{
	bool                                               bBypass;                                                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bInvert;                                                  // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	class UAudioBus*                                   AudioBus;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Gain;                                                     // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AttackTime;                                               // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReleaseTime;                                              // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct AudioModulation.SoundModulationLFOParams
// 0x0014
struct FSoundModulationLFOParams
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	float                                              Amplitude;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Frequency;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Offset;                                                   // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLooping;                                                 // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bBypass;                                                  // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0012(0x0002) MISSED OFFSET
};

// ScriptStruct AudioModulation.SoundModulationParameterSettings
// 0x0004
struct FSoundModulationParameterSettings
{
	float                                              ValueNormalized;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AudioModulation.SoundModulationTransform
// 0x0090
struct FSoundModulationTransform
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	float                                              Scalar;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRichCurve                                  CurveCustom;                                              // 0x0008(0x0080)
	class UCurveFloat*                                 CurveShared;                                              // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AudioModulation.SoundControlModulationInput
// 0x00A0
struct FSoundControlModulationInput
{
	unsigned char                                      bSampleAndHold : 1;                                       // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FSoundModulationTransform                   Transform;                                                // 0x0008(0x0090) (Edit)
	class USoundControlBus*                            Bus;                                                      // 0x0098(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AudioModulation.SoundControlModulationPatch
// 0x0020
struct FSoundControlModulationPatch
{
	bool                                               bBypass;                                                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class USoundModulationParameter*                   OutputParameter;                                          // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FSoundControlModulationInput>        Inputs;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
