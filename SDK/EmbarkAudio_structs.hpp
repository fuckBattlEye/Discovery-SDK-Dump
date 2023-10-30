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

// Enum EmbarkAudio.EEmbarkAudioSpeakerConfig
enum class EEmbarkAudioSpeakerConfig : uint8_t
{
	Auto                           = 0,
	StereoHeadphones               = 1,
	StereoSpeakers                 = 2,
	FivePointOne                   = 3,
	SevenPointOne                  = 4,
	EEmbarkAudioSpeakerConfig_MAX  = 5
};


// Enum EmbarkAudio.EMapRangeCurve
enum class EMapRangeCurve : uint8_t
{
	Linear                         = 0,
	Sine                           = 1,
	Squared                        = 2,
	SCurve                         = 3,
	EMapRangeCurve_MAX             = 4
};


// Enum EmbarkAudio.EWeaponSynthFiringMode
enum class EWeaponSynthFiringMode : uint8_t
{
	Automatic                      = 0,
	SingleShot                     = 1,
	EWeaponSynthFiringMode_MAX     = 2
};


// Enum EmbarkAudio.EWeaponSynthSoundLayerType
enum class EWeaponSynthSoundLayerType : uint8_t
{
	Bullet                         = 0,
	PreFiring                      = 1,
	PostFiring                     = 2,
	EWeaponSynthSoundLayerType_MAX = 3
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EmbarkAudio.EmbarkAudioSpatializationSourceSettings
// 0x0008
struct FEmbarkAudioSpatializationSourceSettings
{
	float                                              SideAttenuationDistanceMin;                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SideAttenuationDistanceMax;                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkAudio.EmbarkAudioParameters
// 0x0010
struct FEmbarkAudioParameters
{
	TArray<struct FAudioParameter>                     Parameters;                                               // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct EmbarkAudio.DialogueTagPair
// 0x0010
struct FDialogueTagPair
{
	struct FGameplayTag                                Intent;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible)
	struct FGameplayTag                                Object;                                                   // 0x0008(0x0008) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
