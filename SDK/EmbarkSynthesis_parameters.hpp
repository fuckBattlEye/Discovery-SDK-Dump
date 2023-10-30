#pragma once

//   SDK By:if

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../pch.h"

namespace sdk
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function EmbarkSynthesis.SourceEffectAdaptiveNoisePreset.SetSettings
struct USourceEffectAdaptiveNoisePreset_SetSettings_Params
{
	struct FSourceEffectAdaptiveNoiseSettings          InSettings;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkSynthesis.SourceEffectBounceCombPreset.SetSettings
struct USourceEffectBounceCombPreset_SetSettings_Params
{
	struct FSourceEffectBounceCombSettings             InSettings;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkSynthesis.SourceEffectRadioStaticPreset.SetSettings
struct USourceEffectRadioStaticPreset_SetSettings_Params
{
	struct FSourceEffectRadioStaticSettings            InSettings;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkSynthesis.SourceEffectSoftDistortionPreset.SetSettings
struct USourceEffectSoftDistortionPreset_SetSettings_Params
{
	struct FSourceEffectSoftDistortionSettings         InSettings;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkSynthesis.SourceEffectTransientShaperPreset.SetSettings
struct USourceEffectTransientShaperPreset_SetSettings_Params
{
	struct FSourceEffectTransientShaperSettings        InSettings;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkSynthesis.SourceEffectTunedResonatorPreset.SetSettings
struct USourceEffectTunedResonatorPreset_SetSettings_Params
{
	struct FSourceEffectTunedResonatorSettings         InSettings;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkSynthesis.SubmixEffectAdaptiveNoisePreset.SetSettings
struct USubmixEffectAdaptiveNoisePreset_SetSettings_Params
{
	struct FSubmixEffectAdaptiveNoiseSettings          InSettings;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkSynthesis.SubmixEffectMultitapDelayPreset.SetSettings
struct USubmixEffectMultitapDelayPreset_SetSettings_Params
{
	struct FSubmixEffectMultitapDelaySettings          InSettings;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkSynthesis.SubmixEffectMultitapDelayPreset.GetMaxTapCount
struct USubmixEffectMultitapDelayPreset_GetMaxTapCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkSynthesis.SubmixEffectMultitapDelayPreset.GetMaxDelayTime
struct USubmixEffectMultitapDelayPreset_GetMaxDelayTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkSynthesis.SubmixEffectSoftDistortionPreset.SetSettings
struct USubmixEffectSoftDistortionPreset_SetSettings_Params
{
	struct FSubmixEffectSoftDistortionSettings         InSettings;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkSynthesis.SubmixEffectTransientShaperPreset.SetSettings
struct USubmixEffectTransientShaperPreset_SetSettings_Params
{
	struct FSubmixEffectTransientShaperSettings        InSettings;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkSynthesis.SubmixEffectTunedResonatorPreset.SetSettings
struct USubmixEffectTunedResonatorPreset_SetSettings_Params
{
	struct FSubmixEffectTunedResonatorSettings         InSettings;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
