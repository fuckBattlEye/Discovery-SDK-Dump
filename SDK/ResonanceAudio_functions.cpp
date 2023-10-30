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

// Function ResonanceAudio.ResonanceAudioBlueprintFunctionLibrary.SetGlobalReverbPreset
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UResonanceAudioReverbPluginPreset* InPreset                       (Parm, ZeroConstructor, IsPlainOldData)

void UResonanceAudioBlueprintFunctionLibrary::STATIC_SetGlobalReverbPreset(class UResonanceAudioReverbPluginPreset* InPreset)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ResonanceAudio.ResonanceAudioBlueprintFunctionLibrary.SetGlobalReverbPreset"));

	UResonanceAudioBlueprintFunctionLibrary_SetGlobalReverbPreset_Params params;
	params.InPreset = InPreset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResonanceAudio.ResonanceAudioBlueprintFunctionLibrary.GetGlobalReverbPreset
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UResonanceAudioReverbPluginPreset* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UResonanceAudioReverbPluginPreset* UResonanceAudioBlueprintFunctionLibrary::STATIC_GetGlobalReverbPreset()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ResonanceAudio.ResonanceAudioBlueprintFunctionLibrary.GetGlobalReverbPreset"));

	UResonanceAudioBlueprintFunctionLibrary_GetGlobalReverbPreset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomRotation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FQuat                   InRotation                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UResonanceAudioReverbPluginPreset::SetRoomRotation(const struct FQuat& InRotation)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomRotation"));

	UResonanceAudioReverbPluginPreset_SetRoomRotation_Params params;
	params.InRotation = InRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomPosition
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 InPosition                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UResonanceAudioReverbPluginPreset::SetRoomPosition(const struct FVector& InPosition)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomPosition"));

	UResonanceAudioReverbPluginPreset_SetRoomPosition_Params params;
	params.InPosition = InPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomMaterials
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<enum class ERaMaterialName> InMaterials                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UResonanceAudioReverbPluginPreset::SetRoomMaterials(TArray<enum class ERaMaterialName> InMaterials)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomMaterials"));

	UResonanceAudioReverbPluginPreset_SetRoomMaterials_Params params;
	params.InMaterials = InMaterials;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomDimensions
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 InDimensions                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UResonanceAudioReverbPluginPreset::SetRoomDimensions(const struct FVector& InDimensions)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomDimensions"));

	UResonanceAudioReverbPluginPreset_SetRoomDimensions_Params params;
	params.InDimensions = InDimensions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReverbTimeModifier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InReverbTimeModifier           (Parm, ZeroConstructor, IsPlainOldData)

void UResonanceAudioReverbPluginPreset::SetReverbTimeModifier(float InReverbTimeModifier)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReverbTimeModifier"));

	UResonanceAudioReverbPluginPreset_SetReverbTimeModifier_Params params;
	params.InReverbTimeModifier = InReverbTimeModifier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReverbGain
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InReverbGain                   (Parm, ZeroConstructor, IsPlainOldData)

void UResonanceAudioReverbPluginPreset::SetReverbGain(float InReverbGain)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReverbGain"));

	UResonanceAudioReverbPluginPreset_SetReverbGain_Params params;
	params.InReverbGain = InReverbGain;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReverbBrightness
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InReverbBrightness             (Parm, ZeroConstructor, IsPlainOldData)

void UResonanceAudioReverbPluginPreset::SetReverbBrightness(float InReverbBrightness)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReverbBrightness"));

	UResonanceAudioReverbPluginPreset_SetReverbBrightness_Params params;
	params.InReverbBrightness = InReverbBrightness;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReflectionScalar
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InReflectionScalar             (Parm, ZeroConstructor, IsPlainOldData)

void UResonanceAudioReverbPluginPreset::SetReflectionScalar(float InReflectionScalar)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReflectionScalar"));

	UResonanceAudioReverbPluginPreset_SetReflectionScalar_Params params;
	params.InReflectionScalar = InReflectionScalar;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetEnableRoomEffects
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInEnableRoomEffects           (Parm, ZeroConstructor, IsPlainOldData)

void UResonanceAudioReverbPluginPreset::SetEnableRoomEffects(bool bInEnableRoomEffects)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetEnableRoomEffects"));

	UResonanceAudioReverbPluginPreset_SetEnableRoomEffects_Params params;
	params.bInEnableRoomEffects = bInEnableRoomEffects;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResonanceAudio.ResonanceAudioSpatializationSourceSettings.SetSoundSourceSpread
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InSpread                       (Parm, ZeroConstructor, IsPlainOldData)

void UResonanceAudioSpatializationSourceSettings::SetSoundSourceSpread(float InSpread)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ResonanceAudio.ResonanceAudioSpatializationSourceSettings.SetSoundSourceSpread"));

	UResonanceAudioSpatializationSourceSettings_SetSoundSourceSpread_Params params;
	params.InSpread = InSpread;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResonanceAudio.ResonanceAudioSpatializationSourceSettings.SetSoundSourceDirectivity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InPattern                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          InSharpness                    (Parm, ZeroConstructor, IsPlainOldData)

void UResonanceAudioSpatializationSourceSettings::SetSoundSourceDirectivity(float InPattern, float InSharpness)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ResonanceAudio.ResonanceAudioSpatializationSourceSettings.SetSoundSourceDirectivity"));

	UResonanceAudioSpatializationSourceSettings_SetSoundSourceDirectivity_Params params;
	params.InPattern = InPattern;
	params.InSharpness = InSharpness;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
