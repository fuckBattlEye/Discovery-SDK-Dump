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

// Function AudioMixer.SynthComponent.Stop
// (Final, Native, Public, BlueprintCallable)

void USynthComponent::Stop()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.SynthComponent.Stop"));

	USynthComponent_Stop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.SynthComponent.Start
// (Final, Native, Public, BlueprintCallable)

void USynthComponent::Start()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.SynthComponent.Start"));

	USynthComponent_Start_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.SynthComponent.SetVolumeMultiplier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          VolumeMultiplier               (Parm, ZeroConstructor, IsPlainOldData)

void USynthComponent::SetVolumeMultiplier(float VolumeMultiplier)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.SynthComponent.SetVolumeMultiplier"));

	USynthComponent_SetVolumeMultiplier_Params params;
	params.VolumeMultiplier = VolumeMultiplier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.SynthComponent.SetSubmixSend
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundSubmixBase*        Submix                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          SendLevel                      (Parm, ZeroConstructor, IsPlainOldData)

void USynthComponent::SetSubmixSend(class USoundSubmixBase* Submix, float SendLevel)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.SynthComponent.SetSubmixSend"));

	USynthComponent_SetSubmixSend_Params params;
	params.Submix = Submix;
	params.SendLevel = SendLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.SynthComponent.SetOutputToBusOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInOutputToBusOnly             (Parm, ZeroConstructor, IsPlainOldData)

void USynthComponent::SetOutputToBusOnly(bool bInOutputToBusOnly)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.SynthComponent.SetOutputToBusOnly"));

	USynthComponent_SetOutputToBusOnly_Params params;
	params.bInOutputToBusOnly = bInOutputToBusOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.SynthComponent.SetLowPassFilterFrequency
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          InLowPassFilterFrequency       (Parm, ZeroConstructor, IsPlainOldData)

void USynthComponent::SetLowPassFilterFrequency(float InLowPassFilterFrequency)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.SynthComponent.SetLowPassFilterFrequency"));

	USynthComponent_SetLowPassFilterFrequency_Params params;
	params.InLowPassFilterFrequency = InLowPassFilterFrequency;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.SynthComponent.SetLowPassFilterEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InLowPassFilterEnabled         (Parm, ZeroConstructor, IsPlainOldData)

void USynthComponent::SetLowPassFilterEnabled(bool InLowPassFilterEnabled)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.SynthComponent.SetLowPassFilterEnabled"));

	USynthComponent_SetLowPassFilterEnabled_Params params;
	params.InLowPassFilterEnabled = InLowPassFilterEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.SynthComponent.IsPlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USynthComponent::IsPlaying()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.SynthComponent.IsPlaying"));

	USynthComponent_IsPlaying_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.TrimAudioCache
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          InMegabytesToFree              (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAudioMixerBlueprintLibrary::STATIC_TrimAudioCache(float InMegabytesToFree)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.AudioMixerBlueprintLibrary.TrimAudioCache"));

	UAudioMixerBlueprintLibrary_TrimAudioCache_Params params;
	params.InMegabytesToFree = InMegabytesToFree;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.SwapAudioOutputDevice
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 NewDeviceId                    (Parm, ZeroConstructor)
// struct FScriptDelegate         OnCompletedDeviceSwap          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAudioMixerBlueprintLibrary::STATIC_SwapAudioOutputDevice(class UObject* WorldContextObject, const struct FString& NewDeviceId, const struct FScriptDelegate& OnCompletedDeviceSwap)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.AudioMixerBlueprintLibrary.SwapAudioOutputDevice"));

	UAudioMixerBlueprintLibrary_SwapAudioOutputDevice_Params params;
	params.WorldContextObject = WorldContextObject;
	params.NewDeviceId = NewDeviceId;
	params.OnCompletedDeviceSwap = OnCompletedDeviceSwap;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.StopRecordingOutput
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// enum class EAudioRecordingExportType ExportType                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (Parm, ZeroConstructor)
// struct FString                 Path                           (Parm, ZeroConstructor)
// class USoundSubmix*            SubmixToRecord                 (Parm, ZeroConstructor, IsPlainOldData)
// class USoundWave*              ExistingSoundWaveToOverwrite   (Parm, ZeroConstructor, IsPlainOldData)
// class USoundWave*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USoundWave* UAudioMixerBlueprintLibrary::STATIC_StopRecordingOutput(class UObject* WorldContextObject, enum class EAudioRecordingExportType ExportType, const struct FString& Name, const struct FString& Path, class USoundSubmix* SubmixToRecord, class USoundWave* ExistingSoundWaveToOverwrite)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.AudioMixerBlueprintLibrary.StopRecordingOutput"));

	UAudioMixerBlueprintLibrary_StopRecordingOutput_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ExportType = ExportType;
	params.Name = Name;
	params.Path = Path;
	params.SubmixToRecord = SubmixToRecord;
	params.ExistingSoundWaveToOverwrite = ExistingSoundWaveToOverwrite;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.StopAudioBus
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UAudioBus*               AudioBus                       (Parm, ZeroConstructor, IsPlainOldData)

void UAudioMixerBlueprintLibrary::STATIC_StopAudioBus(class UObject* WorldContextObject, class UAudioBus* AudioBus)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.AudioMixerBlueprintLibrary.StopAudioBus"));

	UAudioMixerBlueprintLibrary_StopAudioBus_Params params;
	params.WorldContextObject = WorldContextObject;
	params.AudioBus = AudioBus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.StopAnalyzingOutput
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USoundSubmix*            SubmixToStopAnalyzing          (Parm, ZeroConstructor, IsPlainOldData)

void UAudioMixerBlueprintLibrary::STATIC_StopAnalyzingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToStopAnalyzing)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.AudioMixerBlueprintLibrary.StopAnalyzingOutput"));

	UAudioMixerBlueprintLibrary_StopAnalyzingOutput_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SubmixToStopAnalyzing = SubmixToStopAnalyzing;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.StartRecordingOutput
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ExpectedDuration               (Parm, ZeroConstructor, IsPlainOldData)
// class USoundSubmix*            SubmixToRecord                 (Parm, ZeroConstructor, IsPlainOldData)

void UAudioMixerBlueprintLibrary::STATIC_StartRecordingOutput(class UObject* WorldContextObject, float ExpectedDuration, class USoundSubmix* SubmixToRecord)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.AudioMixerBlueprintLibrary.StartRecordingOutput"));

	UAudioMixerBlueprintLibrary_StartRecordingOutput_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ExpectedDuration = ExpectedDuration;
	params.SubmixToRecord = SubmixToRecord;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.StartAudioBus
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UAudioBus*               AudioBus                       (Parm, ZeroConstructor, IsPlainOldData)

void UAudioMixerBlueprintLibrary::STATIC_StartAudioBus(class UObject* WorldContextObject, class UAudioBus* AudioBus)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.AudioMixerBlueprintLibrary.StartAudioBus"));

	UAudioMixerBlueprintLibrary_StartAudioBus_Params params;
	params.WorldContextObject = WorldContextObject;
	params.AudioBus = AudioBus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.StartAnalyzingOutput
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USoundSubmix*            SubmixToAnalyze                (Parm, ZeroConstructor, IsPlainOldData)
// enum class EFFTSize            FFTSize                        (Parm, ZeroConstructor, IsPlainOldData)
// enum class EFFTPeakInterpolationMethod InterpolationMethod            (Parm, ZeroConstructor, IsPlainOldData)
// enum class EFFTWindowType      WindowType                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          HopSize                        (Parm, ZeroConstructor, IsPlainOldData)
// enum class EAudioSpectrumType  SpectrumType                   (Parm, ZeroConstructor, IsPlainOldData)

void UAudioMixerBlueprintLibrary::STATIC_StartAnalyzingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToAnalyze, enum class EFFTSize FFTSize, enum class EFFTPeakInterpolationMethod InterpolationMethod, enum class EFFTWindowType WindowType, float HopSize, enum class EAudioSpectrumType SpectrumType)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.AudioMixerBlueprintLibrary.StartAnalyzingOutput"));

	UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SubmixToAnalyze = SubmixToAnalyze;
	params.FFTSize = FFTSize;
	params.InterpolationMethod = InterpolationMethod;
	params.WindowType = WindowType;
	params.HopSize = HopSize;
	params.SpectrumType = SpectrumType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.SetSubmixEffectChainOverride
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USoundSubmix*            SoundSubmix                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class USoundEffectSubmixPreset*> SubmixEffectPresetChain        (Parm, ZeroConstructor)
// float                          FadeTimeSec                    (Parm, ZeroConstructor, IsPlainOldData)

void UAudioMixerBlueprintLibrary::STATIC_SetSubmixEffectChainOverride(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, TArray<class USoundEffectSubmixPreset*> SubmixEffectPresetChain, float FadeTimeSec)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.AudioMixerBlueprintLibrary.SetSubmixEffectChainOverride"));

	UAudioMixerBlueprintLibrary_SetSubmixEffectChainOverride_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SoundSubmix = SoundSubmix;
	params.SubmixEffectPresetChain = SubmixEffectPresetChain;
	params.FadeTimeSec = FadeTimeSec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.SetBypassSourceEffectChainEntry
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USoundEffectSourcePresetChain* PresetChain                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            EntryIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBypassed                      (Parm, ZeroConstructor, IsPlainOldData)

void UAudioMixerBlueprintLibrary::STATIC_SetBypassSourceEffectChainEntry(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int EntryIndex, bool bBypassed)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.AudioMixerBlueprintLibrary.SetBypassSourceEffectChainEntry"));

	UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PresetChain = PresetChain;
	params.EntryIndex = EntryIndex;
	params.bBypassed = bBypassed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.ResumeRecordingOutput
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USoundSubmix*            SubmixToPause                  (Parm, ZeroConstructor, IsPlainOldData)

void UAudioMixerBlueprintLibrary::STATIC_ResumeRecordingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToPause)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.AudioMixerBlueprintLibrary.ResumeRecordingOutput"));

	UAudioMixerBlueprintLibrary_ResumeRecordingOutput_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SubmixToPause = SubmixToPause;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.ReplaceSubmixEffect
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USoundSubmix*            InSoundSubmix                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            SubmixChainIndex               (Parm, ZeroConstructor, IsPlainOldData)
// class USoundEffectSubmixPreset* SubmixEffectPreset             (Parm, ZeroConstructor, IsPlainOldData)

void UAudioMixerBlueprintLibrary::STATIC_ReplaceSubmixEffect(class UObject* WorldContextObject, class USoundSubmix* InSoundSubmix, int SubmixChainIndex, class USoundEffectSubmixPreset* SubmixEffectPreset)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.AudioMixerBlueprintLibrary.ReplaceSubmixEffect"));

	UAudioMixerBlueprintLibrary_ReplaceSubmixEffect_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InSoundSubmix = InSoundSubmix;
	params.SubmixChainIndex = SubmixChainIndex;
	params.SubmixEffectPreset = SubmixEffectPreset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.ReplaceSoundEffectSubmix
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USoundSubmix*            InSoundSubmix                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            SubmixChainIndex               (Parm, ZeroConstructor, IsPlainOldData)
// class USoundEffectSubmixPreset* SubmixEffectPreset             (Parm, ZeroConstructor, IsPlainOldData)

void UAudioMixerBlueprintLibrary::STATIC_ReplaceSoundEffectSubmix(class UObject* WorldContextObject, class USoundSubmix* InSoundSubmix, int SubmixChainIndex, class USoundEffectSubmixPreset* SubmixEffectPreset)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.AudioMixerBlueprintLibrary.ReplaceSoundEffectSubmix"));

	UAudioMixerBlueprintLibrary_ReplaceSoundEffectSubmix_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InSoundSubmix = InSoundSubmix;
	params.SubmixChainIndex = SubmixChainIndex;
	params.SubmixEffectPreset = SubmixEffectPreset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPresetAtIndex
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USoundSubmix*            SoundSubmix                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            SubmixChainIndex               (Parm, ZeroConstructor, IsPlainOldData)

void UAudioMixerBlueprintLibrary::STATIC_RemoveSubmixEffectPresetAtIndex(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, int SubmixChainIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPresetAtIndex"));

	UAudioMixerBlueprintLibrary_RemoveSubmixEffectPresetAtIndex_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SoundSubmix = SoundSubmix;
	params.SubmixChainIndex = SubmixChainIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPreset
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USoundSubmix*            SoundSubmix                    (Parm, ZeroConstructor, IsPlainOldData)
// class USoundEffectSubmixPreset* SubmixEffectPreset             (Parm, ZeroConstructor, IsPlainOldData)

void UAudioMixerBlueprintLibrary::STATIC_RemoveSubmixEffectPreset(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPreset"));

	UAudioMixerBlueprintLibrary_RemoveSubmixEffectPreset_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SoundSubmix = SoundSubmix;
	params.SubmixEffectPreset = SubmixEffectPreset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectAtIndex
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USoundSubmix*            SoundSubmix                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            SubmixChainIndex               (Parm, ZeroConstructor, IsPlainOldData)

void UAudioMixerBlueprintLibrary::STATIC_RemoveSubmixEffectAtIndex(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, int SubmixChainIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectAtIndex"));

	UAudioMixerBlueprintLibrary_RemoveSubmixEffectAtIndex_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SoundSubmix = SoundSubmix;
	params.SubmixChainIndex = SubmixChainIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffect
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USoundSubmix*            SoundSubmix                    (Parm, ZeroConstructor, IsPlainOldData)
// class USoundEffectSubmixPreset* SubmixEffectPreset             (Parm, ZeroConstructor, IsPlainOldData)

void UAudioMixerBlueprintLibrary::STATIC_RemoveSubmixEffect(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffect"));

	UAudioMixerBlueprintLibrary_RemoveSubmixEffect_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SoundSubmix = SoundSubmix;
	params.SubmixEffectPreset = SubmixEffectPreset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSourceEffectFromPresetChain
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USoundEffectSourcePresetChain* PresetChain                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            EntryIndex                     (Parm, ZeroConstructor, IsPlainOldData)

void UAudioMixerBlueprintLibrary::STATIC_RemoveSourceEffectFromPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int EntryIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSourceEffectFromPresetChain"));

	UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PresetChain = PresetChain;
	params.EntryIndex = EntryIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveMasterSubmixEffect
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USoundEffectSubmixPreset* SubmixEffectPreset             (Parm, ZeroConstructor, IsPlainOldData)

void UAudioMixerBlueprintLibrary::STATIC_RemoveMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.AudioMixerBlueprintLibrary.RemoveMasterSubmixEffect"));

	UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SubmixEffectPreset = SubmixEffectPreset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundForPlayback
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USoundWave*              SoundWave                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         OnLoadCompletion               (ConstParm, Parm, ZeroConstructor)

void UAudioMixerBlueprintLibrary::STATIC_PrimeSoundForPlayback(class USoundWave* SoundWave, const struct FScriptDelegate& OnLoadCompletion)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundForPlayback"));

	UAudioMixerBlueprintLibrary_PrimeSoundForPlayback_Params params;
	params.SoundWave = SoundWave;
	params.OnLoadCompletion = OnLoadCompletion;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundCueForPlayback
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USoundCue*               SoundCue                       (Parm, ZeroConstructor, IsPlainOldData)

void UAudioMixerBlueprintLibrary::STATIC_PrimeSoundCueForPlayback(class USoundCue* SoundCue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundCueForPlayback"));

	UAudioMixerBlueprintLibrary_PrimeSoundCueForPlayback_Params params;
	params.SoundCue = SoundCue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.PauseRecordingOutput
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USoundSubmix*            SubmixToPause                  (Parm, ZeroConstructor, IsPlainOldData)

void UAudioMixerBlueprintLibrary::STATIC_PauseRecordingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToPause)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.AudioMixerBlueprintLibrary.PauseRecordingOutput"));

	UAudioMixerBlueprintLibrary_PauseRecordingOutput_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SubmixToPause = SubmixToPause;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.MakePresetSpectralAnalysisBandSettings
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EAudioSpectrumBandPresetType InBandPresetType               (Parm, ZeroConstructor, IsPlainOldData)
// int                            InNumBands                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            InAttackTimeMsec               (Parm, ZeroConstructor, IsPlainOldData)
// int                            InReleaseTimeMsec              (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FSoundSubmixSpectralAnalysisBandSettings> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FSoundSubmixSpectralAnalysisBandSettings> UAudioMixerBlueprintLibrary::STATIC_MakePresetSpectralAnalysisBandSettings(enum class EAudioSpectrumBandPresetType InBandPresetType, int InNumBands, int InAttackTimeMsec, int InReleaseTimeMsec)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.AudioMixerBlueprintLibrary.MakePresetSpectralAnalysisBandSettings"));

	UAudioMixerBlueprintLibrary_MakePresetSpectralAnalysisBandSettings_Params params;
	params.InBandPresetType = InBandPresetType;
	params.InNumBands = InNumBands;
	params.InAttackTimeMsec = InAttackTimeMsec;
	params.InReleaseTimeMsec = InReleaseTimeMsec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.MakeMusicalSpectralAnalysisBandSettings
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            InNumSemitones                 (Parm, ZeroConstructor, IsPlainOldData)
// enum class EMusicalNoteName    InStartingMusicalNote          (Parm, ZeroConstructor, IsPlainOldData)
// int                            InStartingOctave               (Parm, ZeroConstructor, IsPlainOldData)
// int                            InAttackTimeMsec               (Parm, ZeroConstructor, IsPlainOldData)
// int                            InReleaseTimeMsec              (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FSoundSubmixSpectralAnalysisBandSettings> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FSoundSubmixSpectralAnalysisBandSettings> UAudioMixerBlueprintLibrary::STATIC_MakeMusicalSpectralAnalysisBandSettings(int InNumSemitones, enum class EMusicalNoteName InStartingMusicalNote, int InStartingOctave, int InAttackTimeMsec, int InReleaseTimeMsec)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.AudioMixerBlueprintLibrary.MakeMusicalSpectralAnalysisBandSettings"));

	UAudioMixerBlueprintLibrary_MakeMusicalSpectralAnalysisBandSettings_Params params;
	params.InNumSemitones = InNumSemitones;
	params.InStartingMusicalNote = InStartingMusicalNote;
	params.InStartingOctave = InStartingOctave;
	params.InAttackTimeMsec = InAttackTimeMsec;
	params.InReleaseTimeMsec = InReleaseTimeMsec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.MakeFullSpectrumSpectralAnalysisBandSettings
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            InNumBands                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          InMinimumFrequency             (Parm, ZeroConstructor, IsPlainOldData)
// float                          InMaximumFrequency             (Parm, ZeroConstructor, IsPlainOldData)
// int                            InAttackTimeMsec               (Parm, ZeroConstructor, IsPlainOldData)
// int                            InReleaseTimeMsec              (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FSoundSubmixSpectralAnalysisBandSettings> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FSoundSubmixSpectralAnalysisBandSettings> UAudioMixerBlueprintLibrary::STATIC_MakeFullSpectrumSpectralAnalysisBandSettings(int InNumBands, float InMinimumFrequency, float InMaximumFrequency, int InAttackTimeMsec, int InReleaseTimeMsec)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.AudioMixerBlueprintLibrary.MakeFullSpectrumSpectralAnalysisBandSettings"));

	UAudioMixerBlueprintLibrary_MakeFullSpectrumSpectralAnalysisBandSettings_Params params;
	params.InNumBands = InNumBands;
	params.InMinimumFrequency = InMinimumFrequency;
	params.InMaximumFrequency = InMaximumFrequency;
	params.InAttackTimeMsec = InAttackTimeMsec;
	params.InReleaseTimeMsec = InReleaseTimeMsec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.IsAudioBusActive
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UAudioBus*               AudioBus                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAudioMixerBlueprintLibrary::STATIC_IsAudioBusActive(class UObject* WorldContextObject, class UAudioBus* AudioBus)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.AudioMixerBlueprintLibrary.IsAudioBusActive"));

	UAudioMixerBlueprintLibrary_IsAudioBusActive_Params params;
	params.WorldContextObject = WorldContextObject;
	params.AudioBus = AudioBus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.GetPhaseForFrequencies
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<float>                  Frequencies                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<float>                  Phases                         (Parm, OutParm, ZeroConstructor)
// class USoundSubmix*            SubmixToAnalyze                (Parm, ZeroConstructor, IsPlainOldData)

void UAudioMixerBlueprintLibrary::STATIC_GetPhaseForFrequencies(class UObject* WorldContextObject, TArray<float> Frequencies, class USoundSubmix* SubmixToAnalyze, TArray<float>* Phases)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.AudioMixerBlueprintLibrary.GetPhaseForFrequencies"));

	UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Frequencies = Frequencies;
	params.SubmixToAnalyze = SubmixToAnalyze;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Phases != nullptr)
		*Phases = params.Phases;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.GetNumberOfEntriesInSourceEffectChain
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USoundEffectSourcePresetChain* PresetChain                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAudioMixerBlueprintLibrary::STATIC_GetNumberOfEntriesInSourceEffectChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.AudioMixerBlueprintLibrary.GetNumberOfEntriesInSourceEffectChain"));

	UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PresetChain = PresetChain;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.GetMagnitudeForFrequencies
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<float>                  Frequencies                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<float>                  Magnitudes                     (Parm, OutParm, ZeroConstructor)
// class USoundSubmix*            SubmixToAnalyze                (Parm, ZeroConstructor, IsPlainOldData)

void UAudioMixerBlueprintLibrary::STATIC_GetMagnitudeForFrequencies(class UObject* WorldContextObject, TArray<float> Frequencies, class USoundSubmix* SubmixToAnalyze, TArray<float>* Magnitudes)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.AudioMixerBlueprintLibrary.GetMagnitudeForFrequencies"));

	UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Frequencies = Frequencies;
	params.SubmixToAnalyze = SubmixToAnalyze;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Magnitudes != nullptr)
		*Magnitudes = params.Magnitudes;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.GetCurrentAudioOutputDeviceName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         OnObtainCurrentDeviceEvent     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAudioMixerBlueprintLibrary::STATIC_GetCurrentAudioOutputDeviceName(class UObject* WorldContextObject, const struct FScriptDelegate& OnObtainCurrentDeviceEvent)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.AudioMixerBlueprintLibrary.GetCurrentAudioOutputDeviceName"));

	UAudioMixerBlueprintLibrary_GetCurrentAudioOutputDeviceName_Params params;
	params.WorldContextObject = WorldContextObject;
	params.OnObtainCurrentDeviceEvent = OnObtainCurrentDeviceEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.GetAvailableAudioOutputDevices
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         OnObtainDevicesEvent           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAudioMixerBlueprintLibrary::STATIC_GetAvailableAudioOutputDevices(class UObject* WorldContextObject, const struct FScriptDelegate& OnObtainDevicesEvent)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.AudioMixerBlueprintLibrary.GetAvailableAudioOutputDevices"));

	UAudioMixerBlueprintLibrary_GetAvailableAudioOutputDevices_Params params;
	params.WorldContextObject = WorldContextObject;
	params.OnObtainDevicesEvent = OnObtainDevicesEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.Conv_AudioOutputDeviceInfoToString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAudioOutputDeviceInfo  Info                           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UAudioMixerBlueprintLibrary::STATIC_Conv_AudioOutputDeviceInfoToString(const struct FAudioOutputDeviceInfo& Info)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.AudioMixerBlueprintLibrary.Conv_AudioOutputDeviceInfoToString"));

	UAudioMixerBlueprintLibrary_Conv_AudioOutputDeviceInfoToString_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffects
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USoundSubmix*            SoundSubmix                    (Parm, ZeroConstructor, IsPlainOldData)

void UAudioMixerBlueprintLibrary::STATIC_ClearSubmixEffects(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffects"));

	UAudioMixerBlueprintLibrary_ClearSubmixEffects_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SoundSubmix = SoundSubmix;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffectChainOverride
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USoundSubmix*            SoundSubmix                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          FadeTimeSec                    (Parm, ZeroConstructor, IsPlainOldData)

void UAudioMixerBlueprintLibrary::STATIC_ClearSubmixEffectChainOverride(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, float FadeTimeSec)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffectChainOverride"));

	UAudioMixerBlueprintLibrary_ClearSubmixEffectChainOverride_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SoundSubmix = SoundSubmix;
	params.FadeTimeSec = FadeTimeSec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.ClearMasterSubmixEffects
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAudioMixerBlueprintLibrary::STATIC_ClearMasterSubmixEffects(class UObject* WorldContextObject)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.AudioMixerBlueprintLibrary.ClearMasterSubmixEffects"));

	UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.AddSubmixEffect
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USoundSubmix*            SoundSubmix                    (Parm, ZeroConstructor, IsPlainOldData)
// class USoundEffectSubmixPreset* SubmixEffectPreset             (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAudioMixerBlueprintLibrary::STATIC_AddSubmixEffect(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.AudioMixerBlueprintLibrary.AddSubmixEffect"));

	UAudioMixerBlueprintLibrary_AddSubmixEffect_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SoundSubmix = SoundSubmix;
	params.SubmixEffectPreset = SubmixEffectPreset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.AddSourceEffectToPresetChain
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USoundEffectSourcePresetChain* PresetChain                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FSourceEffectChainEntry Entry                          (Parm)

void UAudioMixerBlueprintLibrary::STATIC_AddSourceEffectToPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, const struct FSourceEffectChainEntry& Entry)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.AudioMixerBlueprintLibrary.AddSourceEffectToPresetChain"));

	UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PresetChain = PresetChain;
	params.Entry = Entry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.AddMasterSubmixEffect
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USoundEffectSubmixPreset* SubmixEffectPreset             (Parm, ZeroConstructor, IsPlainOldData)

void UAudioMixerBlueprintLibrary::STATIC_AddMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.AudioMixerBlueprintLibrary.AddMasterSubmixEffect"));

	UAudioMixerBlueprintLibrary_AddMasterSubmixEffect_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SubmixEffectPreset = SubmixEffectPreset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.QuartzClockHandle.UnsubscribeFromTimeDivision
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// enum class EQuartzCommandQuantization InQuantizationBoundary         (Parm, ZeroConstructor, IsPlainOldData)
// class UQuartzClockHandle*      ClockHandle                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UQuartzClockHandle::UnsubscribeFromTimeDivision(class UObject* WorldContextObject, enum class EQuartzCommandQuantization InQuantizationBoundary, class UQuartzClockHandle** ClockHandle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.QuartzClockHandle.UnsubscribeFromTimeDivision"));

	UQuartzClockHandle_UnsubscribeFromTimeDivision_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InQuantizationBoundary = InQuantizationBoundary;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClockHandle != nullptr)
		*ClockHandle = params.ClockHandle;
}


// Function AudioMixer.QuartzClockHandle.UnsubscribeFromAllTimeDivisions
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UQuartzClockHandle*      ClockHandle                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UQuartzClockHandle::UnsubscribeFromAllTimeDivisions(class UObject* WorldContextObject, class UQuartzClockHandle** ClockHandle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.QuartzClockHandle.UnsubscribeFromAllTimeDivisions"));

	UQuartzClockHandle_UnsubscribeFromAllTimeDivisions_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClockHandle != nullptr)
		*ClockHandle = params.ClockHandle;
}


// Function AudioMixer.QuartzClockHandle.SubscribeToQuantizationEvent
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// enum class EQuartzCommandQuantization InQuantizationBoundary         (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         OnQuantizationEvent            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UQuartzClockHandle*      ClockHandle                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UQuartzClockHandle::SubscribeToQuantizationEvent(class UObject* WorldContextObject, enum class EQuartzCommandQuantization InQuantizationBoundary, const struct FScriptDelegate& OnQuantizationEvent, class UQuartzClockHandle** ClockHandle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.QuartzClockHandle.SubscribeToQuantizationEvent"));

	UQuartzClockHandle_SubscribeToQuantizationEvent_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InQuantizationBoundary = InQuantizationBoundary;
	params.OnQuantizationEvent = OnQuantizationEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClockHandle != nullptr)
		*ClockHandle = params.ClockHandle;
}


// Function AudioMixer.QuartzClockHandle.SubscribeToAllQuantizationEvents
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         OnQuantizationEvent            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UQuartzClockHandle*      ClockHandle                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UQuartzClockHandle::SubscribeToAllQuantizationEvents(class UObject* WorldContextObject, const struct FScriptDelegate& OnQuantizationEvent, class UQuartzClockHandle** ClockHandle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.QuartzClockHandle.SubscribeToAllQuantizationEvents"));

	UQuartzClockHandle_SubscribeToAllQuantizationEvents_Params params;
	params.WorldContextObject = WorldContextObject;
	params.OnQuantizationEvent = OnQuantizationEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClockHandle != nullptr)
		*ClockHandle = params.ClockHandle;
}


// Function AudioMixer.QuartzClockHandle.StopClock
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CancelPendingEvents            (Parm, ZeroConstructor, IsPlainOldData)
// class UQuartzClockHandle*      ClockHandle                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UQuartzClockHandle::StopClock(class UObject* WorldContextObject, bool CancelPendingEvents, class UQuartzClockHandle** ClockHandle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.QuartzClockHandle.StopClock"));

	UQuartzClockHandle_StopClock_Params params;
	params.WorldContextObject = WorldContextObject;
	params.CancelPendingEvents = CancelPendingEvents;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClockHandle != nullptr)
		*ClockHandle = params.ClockHandle;
}


// Function AudioMixer.QuartzClockHandle.StartOtherClock
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   OtherClockName                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FQuartzQuantizationBoundary InQuantizationBoundary         (Parm)
// struct FScriptDelegate         InDelegate                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UQuartzClockHandle::StartOtherClock(class UObject* WorldContextObject, const struct FName& OtherClockName, const struct FQuartzQuantizationBoundary& InQuantizationBoundary, const struct FScriptDelegate& InDelegate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.QuartzClockHandle.StartOtherClock"));

	UQuartzClockHandle_StartOtherClock_Params params;
	params.WorldContextObject = WorldContextObject;
	params.OtherClockName = OtherClockName;
	params.InQuantizationBoundary = InQuantizationBoundary;
	params.InDelegate = InDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.QuartzClockHandle.StartClock
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UQuartzClockHandle*      ClockHandle                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UQuartzClockHandle::StartClock(class UObject* WorldContextObject, class UQuartzClockHandle** ClockHandle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.QuartzClockHandle.StartClock"));

	UQuartzClockHandle_StartClock_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClockHandle != nullptr)
		*ClockHandle = params.ClockHandle;
}


// Function AudioMixer.QuartzClockHandle.SetTicksPerSecond
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FQuartzQuantizationBoundary QuantizationBoundary           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UQuartzClockHandle*      ClockHandle                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          TicksPerSecond                 (Parm, ZeroConstructor, IsPlainOldData)

void UQuartzClockHandle::SetTicksPerSecond(class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, const struct FScriptDelegate& Delegate, float TicksPerSecond, class UQuartzClockHandle** ClockHandle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.QuartzClockHandle.SetTicksPerSecond"));

	UQuartzClockHandle_SetTicksPerSecond_Params params;
	params.WorldContextObject = WorldContextObject;
	params.QuantizationBoundary = QuantizationBoundary;
	params.Delegate = Delegate;
	params.TicksPerSecond = TicksPerSecond;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClockHandle != nullptr)
		*ClockHandle = params.ClockHandle;
}


// Function AudioMixer.QuartzClockHandle.SetThirtySecondNotesPerMinute
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FQuartzQuantizationBoundary QuantizationBoundary           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UQuartzClockHandle*      ClockHandle                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ThirtySecondsNotesPerMinute    (Parm, ZeroConstructor, IsPlainOldData)

void UQuartzClockHandle::SetThirtySecondNotesPerMinute(class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, const struct FScriptDelegate& Delegate, float ThirtySecondsNotesPerMinute, class UQuartzClockHandle** ClockHandle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.QuartzClockHandle.SetThirtySecondNotesPerMinute"));

	UQuartzClockHandle_SetThirtySecondNotesPerMinute_Params params;
	params.WorldContextObject = WorldContextObject;
	params.QuantizationBoundary = QuantizationBoundary;
	params.Delegate = Delegate;
	params.ThirtySecondsNotesPerMinute = ThirtySecondsNotesPerMinute;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClockHandle != nullptr)
		*ClockHandle = params.ClockHandle;
}


// Function AudioMixer.QuartzClockHandle.SetSecondsPerTick
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FQuartzQuantizationBoundary QuantizationBoundary           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UQuartzClockHandle*      ClockHandle                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          SecondsPerTick                 (Parm, ZeroConstructor, IsPlainOldData)

void UQuartzClockHandle::SetSecondsPerTick(class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, const struct FScriptDelegate& Delegate, float SecondsPerTick, class UQuartzClockHandle** ClockHandle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.QuartzClockHandle.SetSecondsPerTick"));

	UQuartzClockHandle_SetSecondsPerTick_Params params;
	params.WorldContextObject = WorldContextObject;
	params.QuantizationBoundary = QuantizationBoundary;
	params.Delegate = Delegate;
	params.SecondsPerTick = SecondsPerTick;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClockHandle != nullptr)
		*ClockHandle = params.ClockHandle;
}


// Function AudioMixer.QuartzClockHandle.SetMillisecondsPerTick
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FQuartzQuantizationBoundary QuantizationBoundary           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UQuartzClockHandle*      ClockHandle                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          MillisecondsPerTick            (Parm, ZeroConstructor, IsPlainOldData)

void UQuartzClockHandle::SetMillisecondsPerTick(class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, const struct FScriptDelegate& Delegate, float MillisecondsPerTick, class UQuartzClockHandle** ClockHandle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.QuartzClockHandle.SetMillisecondsPerTick"));

	UQuartzClockHandle_SetMillisecondsPerTick_Params params;
	params.WorldContextObject = WorldContextObject;
	params.QuantizationBoundary = QuantizationBoundary;
	params.Delegate = Delegate;
	params.MillisecondsPerTick = MillisecondsPerTick;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClockHandle != nullptr)
		*ClockHandle = params.ClockHandle;
}


// Function AudioMixer.QuartzClockHandle.SetBeatsPerMinute
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FQuartzQuantizationBoundary QuantizationBoundary           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UQuartzClockHandle*      ClockHandle                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          BeatsPerMinute                 (Parm, ZeroConstructor, IsPlainOldData)

void UQuartzClockHandle::SetBeatsPerMinute(class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, const struct FScriptDelegate& Delegate, float BeatsPerMinute, class UQuartzClockHandle** ClockHandle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.QuartzClockHandle.SetBeatsPerMinute"));

	UQuartzClockHandle_SetBeatsPerMinute_Params params;
	params.WorldContextObject = WorldContextObject;
	params.QuantizationBoundary = QuantizationBoundary;
	params.Delegate = Delegate;
	params.BeatsPerMinute = BeatsPerMinute;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClockHandle != nullptr)
		*ClockHandle = params.ClockHandle;
}


// Function AudioMixer.QuartzClockHandle.ResumeClock
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UQuartzClockHandle*      ClockHandle                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UQuartzClockHandle::ResumeClock(class UObject* WorldContextObject, class UQuartzClockHandle** ClockHandle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.QuartzClockHandle.ResumeClock"));

	UQuartzClockHandle_ResumeClock_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClockHandle != nullptr)
		*ClockHandle = params.ClockHandle;
}


// Function AudioMixer.QuartzClockHandle.ResetTransportQuantized
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FQuartzQuantizationBoundary InQuantizationBoundary         (Parm)
// struct FScriptDelegate         InDelegate                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UQuartzClockHandle*      ClockHandle                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UQuartzClockHandle::ResetTransportQuantized(class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& InQuantizationBoundary, const struct FScriptDelegate& InDelegate, class UQuartzClockHandle** ClockHandle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.QuartzClockHandle.ResetTransportQuantized"));

	UQuartzClockHandle_ResetTransportQuantized_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InQuantizationBoundary = InQuantizationBoundary;
	params.InDelegate = InDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClockHandle != nullptr)
		*ClockHandle = params.ClockHandle;
}


// Function AudioMixer.QuartzClockHandle.ResetTransport
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         InDelegate                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UQuartzClockHandle::ResetTransport(class UObject* WorldContextObject, const struct FScriptDelegate& InDelegate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.QuartzClockHandle.ResetTransport"));

	UQuartzClockHandle_ResetTransport_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InDelegate = InDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.QuartzClockHandle.PauseClock
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UQuartzClockHandle*      ClockHandle                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UQuartzClockHandle::PauseClock(class UObject* WorldContextObject, class UQuartzClockHandle** ClockHandle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.QuartzClockHandle.PauseClock"));

	UQuartzClockHandle_PauseClock_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClockHandle != nullptr)
		*ClockHandle = params.ClockHandle;
}


// Function AudioMixer.QuartzClockHandle.IsClockRunning
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UQuartzClockHandle::IsClockRunning(class UObject* WorldContextObject)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.QuartzClockHandle.IsClockRunning"));

	UQuartzClockHandle_IsClockRunning_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioMixer.QuartzClockHandle.GetTicksPerSecond
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UQuartzClockHandle::GetTicksPerSecond(class UObject* WorldContextObject)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.QuartzClockHandle.GetTicksPerSecond"));

	UQuartzClockHandle_GetTicksPerSecond_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioMixer.QuartzClockHandle.GetThirtySecondNotesPerMinute
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UQuartzClockHandle::GetThirtySecondNotesPerMinute(class UObject* WorldContextObject)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.QuartzClockHandle.GetThirtySecondNotesPerMinute"));

	UQuartzClockHandle_GetThirtySecondNotesPerMinute_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioMixer.QuartzClockHandle.GetSecondsPerTick
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UQuartzClockHandle::GetSecondsPerTick(class UObject* WorldContextObject)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.QuartzClockHandle.GetSecondsPerTick"));

	UQuartzClockHandle_GetSecondsPerTick_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioMixer.QuartzClockHandle.GetMillisecondsPerTick
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UQuartzClockHandle::GetMillisecondsPerTick(class UObject* WorldContextObject)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.QuartzClockHandle.GetMillisecondsPerTick"));

	UQuartzClockHandle_GetMillisecondsPerTick_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioMixer.QuartzClockHandle.GetEstimatedRunTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UQuartzClockHandle::GetEstimatedRunTime(class UObject* WorldContextObject)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.QuartzClockHandle.GetEstimatedRunTime"));

	UQuartzClockHandle_GetEstimatedRunTime_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioMixer.QuartzClockHandle.GetDurationOfQuantizationTypeInSeconds
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// enum class EQuartzCommandQuantization QuantizationType               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          Multiplier                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UQuartzClockHandle::GetDurationOfQuantizationTypeInSeconds(class UObject* WorldContextObject, enum class EQuartzCommandQuantization QuantizationType, float Multiplier)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.QuartzClockHandle.GetDurationOfQuantizationTypeInSeconds"));

	UQuartzClockHandle_GetDurationOfQuantizationTypeInSeconds_Params params;
	params.WorldContextObject = WorldContextObject;
	params.QuantizationType = QuantizationType;
	params.Multiplier = Multiplier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioMixer.QuartzClockHandle.GetCurrentTimestamp
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FQuartzTransportTimeStamp ReturnValue                    (Parm, OutParm, ReturnParm)

struct FQuartzTransportTimeStamp UQuartzClockHandle::GetCurrentTimestamp(class UObject* WorldContextObject)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.QuartzClockHandle.GetCurrentTimestamp"));

	UQuartzClockHandle_GetCurrentTimestamp_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioMixer.QuartzClockHandle.GetBeatsPerMinute
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UQuartzClockHandle::GetBeatsPerMinute(class UObject* WorldContextObject)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.QuartzClockHandle.GetBeatsPerMinute"));

	UQuartzClockHandle_GetBeatsPerMinute_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetSettings
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSubmixEffectDynamicsProcessorSettings Settings                       (ConstParm, Parm, OutParm, ReferenceParm)

void USubmixEffectDynamicsProcessorPreset::SetSettings(const struct FSubmixEffectDynamicsProcessorSettings& Settings)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetSettings"));

	USubmixEffectDynamicsProcessorPreset_SetSettings_Params params;
	params.Settings = Settings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetExternalSubmix
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundSubmix*            Submix                         (Parm, ZeroConstructor, IsPlainOldData)

void USubmixEffectDynamicsProcessorPreset::SetExternalSubmix(class USoundSubmix* Submix)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetExternalSubmix"));

	USubmixEffectDynamicsProcessorPreset_SetExternalSubmix_Params params;
	params.Submix = Submix;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetAudioBus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAudioBus*               AudioBus                       (Parm, ZeroConstructor, IsPlainOldData)

void USubmixEffectDynamicsProcessorPreset::SetAudioBus(class UAudioBus* AudioBus)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetAudioBus"));

	USubmixEffectDynamicsProcessorPreset_SetAudioBus_Params params;
	params.AudioBus = AudioBus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.SubmixEffectDynamicsProcessorPreset.ResetKey
// (Final, Native, Public, BlueprintCallable)

void USubmixEffectDynamicsProcessorPreset::ResetKey()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.SubmixEffectDynamicsProcessorPreset.ResetKey"));

	USubmixEffectDynamicsProcessorPreset_ResetKey_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.SubmixEffectSubmixEQPreset.SetSettings
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSubmixEffectSubmixEQSettings InSettings                     (ConstParm, Parm, OutParm, ReferenceParm)

void USubmixEffectSubmixEQPreset::SetSettings(const struct FSubmixEffectSubmixEQSettings& InSettings)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.SubmixEffectSubmixEQPreset.SetSettings"));

	USubmixEffectSubmixEQPreset_SetSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.SubmixEffectReverbPreset.SetSettingsWithReverbEffect
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UReverbEffect*           InReverbEffect                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          WetLevel                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          DryLevel                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void USubmixEffectReverbPreset::SetSettingsWithReverbEffect(class UReverbEffect* InReverbEffect, float WetLevel, float DryLevel)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.SubmixEffectReverbPreset.SetSettingsWithReverbEffect"));

	USubmixEffectReverbPreset_SetSettingsWithReverbEffect_Params params;
	params.InReverbEffect = InReverbEffect;
	params.WetLevel = WetLevel;
	params.DryLevel = DryLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.SubmixEffectReverbPreset.SetSettings
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSubmixEffectReverbSettings InSettings                     (ConstParm, Parm, OutParm, ReferenceParm)

void USubmixEffectReverbPreset::SetSettings(const struct FSubmixEffectReverbSettings& InSettings)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.SubmixEffectReverbPreset.SetSettings"));

	USubmixEffectReverbPreset_SetSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.QuartzSubsystem.IsQuartzEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UQuartzSubsystem::IsQuartzEnabled()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.QuartzSubsystem.IsQuartzEnabled"));

	UQuartzSubsystem_IsQuartzEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioMixer.QuartzSubsystem.IsClockRunning
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ClockName                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UQuartzSubsystem::IsClockRunning(class UObject* WorldContextObject, const struct FName& ClockName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.QuartzSubsystem.IsClockRunning"));

	UQuartzSubsystem_IsClockRunning_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ClockName = ClockName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioMixer.QuartzSubsystem.GetRoundTripMinLatency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UQuartzSubsystem::GetRoundTripMinLatency(class UObject* WorldContextObject)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.QuartzSubsystem.GetRoundTripMinLatency"));

	UQuartzSubsystem_GetRoundTripMinLatency_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioMixer.QuartzSubsystem.GetRoundTripMaxLatency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UQuartzSubsystem::GetRoundTripMaxLatency(class UObject* WorldContextObject)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.QuartzSubsystem.GetRoundTripMaxLatency"));

	UQuartzSubsystem_GetRoundTripMaxLatency_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioMixer.QuartzSubsystem.GetRoundTripAverageLatency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UQuartzSubsystem::GetRoundTripAverageLatency(class UObject* WorldContextObject)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.QuartzSubsystem.GetRoundTripAverageLatency"));

	UQuartzSubsystem_GetRoundTripAverageLatency_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioMixer.QuartzSubsystem.GetHandleForClock
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ClockName                      (Parm, ZeroConstructor, IsPlainOldData)
// class UQuartzClockHandle*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UQuartzClockHandle* UQuartzSubsystem::GetHandleForClock(class UObject* WorldContextObject, const struct FName& ClockName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.QuartzSubsystem.GetHandleForClock"));

	UQuartzSubsystem_GetHandleForClock_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ClockName = ClockName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadMinLatency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UQuartzSubsystem::GetGameThreadToAudioRenderThreadMinLatency(class UObject* WorldContextObject)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadMinLatency"));

	UQuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadMaxLatency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UQuartzSubsystem::GetGameThreadToAudioRenderThreadMaxLatency(class UObject* WorldContextObject)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadMaxLatency"));

	UQuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadAverageLatency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UQuartzSubsystem::GetGameThreadToAudioRenderThreadAverageLatency(class UObject* WorldContextObject)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadAverageLatency"));

	UQuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioMixer.QuartzSubsystem.GetEstimatedClockRunTime
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   InClockName                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UQuartzSubsystem::GetEstimatedClockRunTime(class UObject* WorldContextObject, const struct FName& InClockName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.QuartzSubsystem.GetEstimatedClockRunTime"));

	UQuartzSubsystem_GetEstimatedClockRunTime_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InClockName = InClockName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioMixer.QuartzSubsystem.GetDurationOfQuantizationTypeInSeconds
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ClockName                      (Parm, ZeroConstructor, IsPlainOldData)
// enum class EQuartzCommandQuantization QuantizationType               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          Multiplier                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UQuartzSubsystem::GetDurationOfQuantizationTypeInSeconds(class UObject* WorldContextObject, const struct FName& ClockName, enum class EQuartzCommandQuantization QuantizationType, float Multiplier)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.QuartzSubsystem.GetDurationOfQuantizationTypeInSeconds"));

	UQuartzSubsystem_GetDurationOfQuantizationTypeInSeconds_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ClockName = ClockName;
	params.QuantizationType = QuantizationType;
	params.Multiplier = Multiplier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioMixer.QuartzSubsystem.GetCurrentClockTimestamp
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   InClockName                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FQuartzTransportTimeStamp ReturnValue                    (Parm, OutParm, ReturnParm)

struct FQuartzTransportTimeStamp UQuartzSubsystem::GetCurrentClockTimestamp(class UObject* WorldContextObject, const struct FName& InClockName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.QuartzSubsystem.GetCurrentClockTimestamp"));

	UQuartzSubsystem_GetCurrentClockTimestamp_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InClockName = InClockName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadMinLatency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UQuartzSubsystem::GetAudioRenderThreadToGameThreadMinLatency()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadMinLatency"));

	UQuartzSubsystem_GetAudioRenderThreadToGameThreadMinLatency_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadMaxLatency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UQuartzSubsystem::GetAudioRenderThreadToGameThreadMaxLatency()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadMaxLatency"));

	UQuartzSubsystem_GetAudioRenderThreadToGameThreadMaxLatency_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadAverageLatency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UQuartzSubsystem::GetAudioRenderThreadToGameThreadAverageLatency()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadAverageLatency"));

	UQuartzSubsystem_GetAudioRenderThreadToGameThreadAverageLatency_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioMixer.QuartzSubsystem.DoesClockExist
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ClockName                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UQuartzSubsystem::DoesClockExist(class UObject* WorldContextObject, const struct FName& ClockName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.QuartzSubsystem.DoesClockExist"));

	UQuartzSubsystem_DoesClockExist_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ClockName = ClockName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioMixer.QuartzSubsystem.DeleteClockByName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ClockName                      (Parm, ZeroConstructor, IsPlainOldData)

void UQuartzSubsystem::DeleteClockByName(class UObject* WorldContextObject, const struct FName& ClockName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.QuartzSubsystem.DeleteClockByName"));

	UQuartzSubsystem_DeleteClockByName_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ClockName = ClockName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.QuartzSubsystem.DeleteClockByHandle
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UQuartzClockHandle*      InClockHandle                  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UQuartzSubsystem::DeleteClockByHandle(class UObject* WorldContextObject, class UQuartzClockHandle** InClockHandle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.QuartzSubsystem.DeleteClockByHandle"));

	UQuartzSubsystem_DeleteClockByHandle_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InClockHandle != nullptr)
		*InClockHandle = params.InClockHandle;
}


// Function AudioMixer.QuartzSubsystem.CreateNewClock
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ClockName                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FQuartzClockSettings    InSettings                     (Parm)
// bool                           bOverrideSettingsIfClockExists (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseAudioEngineClockManager    (Parm, ZeroConstructor, IsPlainOldData)
// class UQuartzClockHandle*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UQuartzClockHandle* UQuartzSubsystem::CreateNewClock(class UObject* WorldContextObject, const struct FName& ClockName, const struct FQuartzClockSettings& InSettings, bool bOverrideSettingsIfClockExists, bool bUseAudioEngineClockManager)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioMixer.QuartzSubsystem.CreateNewClock"));

	UQuartzSubsystem_CreateNewClock_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ClockName = ClockName;
	params.InSettings = InSettings;
	params.bOverrideSettingsIfClockExists = bOverrideSettingsIfClockExists;
	params.bUseAudioEngineClockManager = bUseAudioEngineClockManager;

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
