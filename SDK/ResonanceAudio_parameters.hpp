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

// Function ResonanceAudio.ResonanceAudioBlueprintFunctionLibrary.SetGlobalReverbPreset
struct UResonanceAudioBlueprintFunctionLibrary_SetGlobalReverbPreset_Params
{
	class UResonanceAudioReverbPluginPreset*           InPreset;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ResonanceAudio.ResonanceAudioBlueprintFunctionLibrary.GetGlobalReverbPreset
struct UResonanceAudioBlueprintFunctionLibrary_GetGlobalReverbPreset_Params
{
	class UResonanceAudioReverbPluginPreset*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomRotation
struct UResonanceAudioReverbPluginPreset_SetRoomRotation_Params
{
	struct FQuat                                       InRotation;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomPosition
struct UResonanceAudioReverbPluginPreset_SetRoomPosition_Params
{
	struct FVector                                     InPosition;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomMaterials
struct UResonanceAudioReverbPluginPreset_SetRoomMaterials_Params
{
	TArray<enum class ERaMaterialName>                 InMaterials;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomDimensions
struct UResonanceAudioReverbPluginPreset_SetRoomDimensions_Params
{
	struct FVector                                     InDimensions;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReverbTimeModifier
struct UResonanceAudioReverbPluginPreset_SetReverbTimeModifier_Params
{
	float                                              InReverbTimeModifier;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReverbGain
struct UResonanceAudioReverbPluginPreset_SetReverbGain_Params
{
	float                                              InReverbGain;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReverbBrightness
struct UResonanceAudioReverbPluginPreset_SetReverbBrightness_Params
{
	float                                              InReverbBrightness;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReflectionScalar
struct UResonanceAudioReverbPluginPreset_SetReflectionScalar_Params
{
	float                                              InReflectionScalar;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetEnableRoomEffects
struct UResonanceAudioReverbPluginPreset_SetEnableRoomEffects_Params
{
	bool                                               bInEnableRoomEffects;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ResonanceAudio.ResonanceAudioSpatializationSourceSettings.SetSoundSourceSpread
struct UResonanceAudioSpatializationSourceSettings_SetSoundSourceSpread_Params
{
	float                                              InSpread;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ResonanceAudio.ResonanceAudioSpatializationSourceSettings.SetSoundSourceDirectivity
struct UResonanceAudioSpatializationSourceSettings_SetSoundSourceDirectivity_Params
{
	float                                              InPattern;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InSharpness;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
