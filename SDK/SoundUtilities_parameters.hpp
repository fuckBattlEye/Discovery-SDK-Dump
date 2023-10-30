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

// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetQFromBandwidth
struct USoundUtilitiesBPFunctionLibrary_GetQFromBandwidth_Params
{
	float                                              InBandwidth;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetPitchScaleFromMIDIPitch
struct USoundUtilitiesBPFunctionLibrary_GetPitchScaleFromMIDIPitch_Params
{
	int                                                BaseMidiNote;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TargetMidiNote;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetMIDIPitchFromFrequency
struct USoundUtilitiesBPFunctionLibrary_GetMIDIPitchFromFrequency_Params
{
	float                                              Frequency;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetLogFrequencyClamped
struct USoundUtilitiesBPFunctionLibrary_GetLogFrequencyClamped_Params
{
	float                                              InValue;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   InDomain;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   InRange;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetLinearFrequencyClamped
struct USoundUtilitiesBPFunctionLibrary_GetLinearFrequencyClamped_Params
{
	float                                              InValue;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   InDomain;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   InRange;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetGainFromMidiVelocity
struct USoundUtilitiesBPFunctionLibrary_GetGainFromMidiVelocity_Params
{
	int                                                InVelocity;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetFrequencyMultiplierFromSemitones
struct USoundUtilitiesBPFunctionLibrary_GetFrequencyMultiplierFromSemitones_Params
{
	float                                              InPitchSemitones;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetFrequencyFromMIDIPitch
struct USoundUtilitiesBPFunctionLibrary_GetFrequencyFromMIDIPitch_Params
{
	int                                                MidiNote;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetBeatTempo
struct USoundUtilitiesBPFunctionLibrary_GetBeatTempo_Params
{
	float                                              BeatsPerMinute;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                BeatMultiplier;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                DivisionsOfWholeNote;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetBandwidthFromQ
struct USoundUtilitiesBPFunctionLibrary_GetBandwidthFromQ_Params
{
	float                                              InQ;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.ConvertLinearToDecibels
struct USoundUtilitiesBPFunctionLibrary_ConvertLinearToDecibels_Params
{
	float                                              InLinear;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InFloor;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.ConvertDecibelsToLinear
struct USoundUtilitiesBPFunctionLibrary_ConvertDecibelsToLinear_Params
{
	float                                              InDecibels;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
