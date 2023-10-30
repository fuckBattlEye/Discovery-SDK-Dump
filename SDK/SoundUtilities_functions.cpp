//   SDK By:if

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../pch.h"

namespace sdk
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetQFromBandwidth
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// float                          InBandwidth                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USoundUtilitiesBPFunctionLibrary::STATIC_GetQFromBandwidth(float InBandwidth)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetQFromBandwidth"));

	USoundUtilitiesBPFunctionLibrary_GetQFromBandwidth_Params params;
	params.InBandwidth = InBandwidth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetPitchScaleFromMIDIPitch
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// int                            BaseMidiNote                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            TargetMidiNote                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USoundUtilitiesBPFunctionLibrary::STATIC_GetPitchScaleFromMIDIPitch(int BaseMidiNote, int TargetMidiNote)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetPitchScaleFromMIDIPitch"));

	USoundUtilitiesBPFunctionLibrary_GetPitchScaleFromMIDIPitch_Params params;
	params.BaseMidiNote = BaseMidiNote;
	params.TargetMidiNote = TargetMidiNote;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetMIDIPitchFromFrequency
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// float                          Frequency                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USoundUtilitiesBPFunctionLibrary::STATIC_GetMIDIPitchFromFrequency(float Frequency)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetMIDIPitchFromFrequency"));

	USoundUtilitiesBPFunctionLibrary_GetMIDIPitchFromFrequency_Params params;
	params.Frequency = Frequency;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetLogFrequencyClamped
// (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// float                          InValue                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               InDomain                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector2D               InRange                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USoundUtilitiesBPFunctionLibrary::STATIC_GetLogFrequencyClamped(float InValue, const struct FVector2D& InDomain, const struct FVector2D& InRange)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetLogFrequencyClamped"));

	USoundUtilitiesBPFunctionLibrary_GetLogFrequencyClamped_Params params;
	params.InValue = InValue;
	params.InDomain = InDomain;
	params.InRange = InRange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetLinearFrequencyClamped
// (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// float                          InValue                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               InDomain                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector2D               InRange                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USoundUtilitiesBPFunctionLibrary::STATIC_GetLinearFrequencyClamped(float InValue, const struct FVector2D& InDomain, const struct FVector2D& InRange)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetLinearFrequencyClamped"));

	USoundUtilitiesBPFunctionLibrary_GetLinearFrequencyClamped_Params params;
	params.InValue = InValue;
	params.InDomain = InDomain;
	params.InRange = InRange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetGainFromMidiVelocity
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// int                            InVelocity                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USoundUtilitiesBPFunctionLibrary::STATIC_GetGainFromMidiVelocity(int InVelocity)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetGainFromMidiVelocity"));

	USoundUtilitiesBPFunctionLibrary_GetGainFromMidiVelocity_Params params;
	params.InVelocity = InVelocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetFrequencyMultiplierFromSemitones
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// float                          InPitchSemitones               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USoundUtilitiesBPFunctionLibrary::STATIC_GetFrequencyMultiplierFromSemitones(float InPitchSemitones)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetFrequencyMultiplierFromSemitones"));

	USoundUtilitiesBPFunctionLibrary_GetFrequencyMultiplierFromSemitones_Params params;
	params.InPitchSemitones = InPitchSemitones;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetFrequencyFromMIDIPitch
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// int                            MidiNote                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USoundUtilitiesBPFunctionLibrary::STATIC_GetFrequencyFromMIDIPitch(int MidiNote)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetFrequencyFromMIDIPitch"));

	USoundUtilitiesBPFunctionLibrary_GetFrequencyFromMIDIPitch_Params params;
	params.MidiNote = MidiNote;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetBeatTempo
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// float                          BeatsPerMinute                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            BeatMultiplier                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            DivisionsOfWholeNote           (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USoundUtilitiesBPFunctionLibrary::STATIC_GetBeatTempo(float BeatsPerMinute, int BeatMultiplier, int DivisionsOfWholeNote)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetBeatTempo"));

	USoundUtilitiesBPFunctionLibrary_GetBeatTempo_Params params;
	params.BeatsPerMinute = BeatsPerMinute;
	params.BeatMultiplier = BeatMultiplier;
	params.DivisionsOfWholeNote = DivisionsOfWholeNote;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetBandwidthFromQ
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// float                          InQ                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USoundUtilitiesBPFunctionLibrary::STATIC_GetBandwidthFromQ(float InQ)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetBandwidthFromQ"));

	USoundUtilitiesBPFunctionLibrary_GetBandwidthFromQ_Params params;
	params.InQ = InQ;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.ConvertLinearToDecibels
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// float                          InLinear                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          InFloor                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USoundUtilitiesBPFunctionLibrary::STATIC_ConvertLinearToDecibels(float InLinear, float InFloor)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.ConvertLinearToDecibels"));

	USoundUtilitiesBPFunctionLibrary_ConvertLinearToDecibels_Params params;
	params.InLinear = InLinear;
	params.InFloor = InFloor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.ConvertDecibelsToLinear
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// float                          InDecibels                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USoundUtilitiesBPFunctionLibrary::STATIC_ConvertDecibelsToLinear(float InDecibels)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.ConvertDecibelsToLinear"));

	USoundUtilitiesBPFunctionLibrary_ConvertDecibelsToLinear_Params params;
	params.InDecibels = InDecibels;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
