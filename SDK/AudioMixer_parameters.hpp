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

// Function AudioMixer.SynthComponent.Stop
struct USynthComponent_Stop_Params
{
};

// Function AudioMixer.SynthComponent.Start
struct USynthComponent_Start_Params
{
};

// Function AudioMixer.SynthComponent.SetVolumeMultiplier
struct USynthComponent_SetVolumeMultiplier_Params
{
	float                                              VolumeMultiplier;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.SynthComponent.SetSubmixSend
struct USynthComponent_SetSubmixSend_Params
{
	class USoundSubmixBase*                            Submix;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SendLevel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.SynthComponent.SetOutputToBusOnly
struct USynthComponent_SetOutputToBusOnly_Params
{
	bool                                               bInOutputToBusOnly;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.SynthComponent.SetLowPassFilterFrequency
struct USynthComponent_SetLowPassFilterFrequency_Params
{
	float                                              InLowPassFilterFrequency;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.SynthComponent.SetLowPassFilterEnabled
struct USynthComponent_SetLowPassFilterEnabled_Params
{
	bool                                               InLowPassFilterEnabled;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.SynthComponent.IsPlaying
struct USynthComponent_IsPlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.TrimAudioCache
struct UAudioMixerBlueprintLibrary_TrimAudioCache_Params
{
	float                                              InMegabytesToFree;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.SwapAudioOutputDevice
struct UAudioMixerBlueprintLibrary_SwapAudioOutputDevice_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     NewDeviceId;                                              // (Parm, ZeroConstructor)
	struct FScriptDelegate                             OnCompletedDeviceSwap;                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.StopRecordingOutput
struct UAudioMixerBlueprintLibrary_StopRecordingOutput_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	enum class EAudioRecordingExportType               ExportType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	struct FString                                     Path;                                                     // (Parm, ZeroConstructor)
	class USoundSubmix*                                SubmixToRecord;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundWave*                                  ExistingSoundWaveToOverwrite;                             // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundWave*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.StopAudioBus
struct UAudioMixerBlueprintLibrary_StopAudioBus_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UAudioBus*                                   AudioBus;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.StopAnalyzingOutput
struct UAudioMixerBlueprintLibrary_StopAnalyzingOutput_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USoundSubmix*                                SubmixToStopAnalyzing;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.StartRecordingOutput
struct UAudioMixerBlueprintLibrary_StartRecordingOutput_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ExpectedDuration;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundSubmix*                                SubmixToRecord;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.StartAudioBus
struct UAudioMixerBlueprintLibrary_StartAudioBus_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UAudioBus*                                   AudioBus;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.StartAnalyzingOutput
struct UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USoundSubmix*                                SubmixToAnalyze;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	enum class EFFTSize                                FFTSize;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	enum class EFFTPeakInterpolationMethod             InterpolationMethod;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	enum class EFFTWindowType                          WindowType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HopSize;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	enum class EAudioSpectrumType                      SpectrumType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.SetSubmixEffectChainOverride
struct UAudioMixerBlueprintLibrary_SetSubmixEffectChainOverride_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USoundSubmix*                                SoundSubmix;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class USoundEffectSubmixPreset*>            SubmixEffectPresetChain;                                  // (Parm, ZeroConstructor)
	float                                              FadeTimeSec;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.SetBypassSourceEffectChainEntry
struct UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USoundEffectSourcePresetChain*               PresetChain;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                EntryIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBypassed;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.ResumeRecordingOutput
struct UAudioMixerBlueprintLibrary_ResumeRecordingOutput_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USoundSubmix*                                SubmixToPause;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.ReplaceSubmixEffect
struct UAudioMixerBlueprintLibrary_ReplaceSubmixEffect_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USoundSubmix*                                InSoundSubmix;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SubmixChainIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundEffectSubmixPreset*                    SubmixEffectPreset;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.ReplaceSoundEffectSubmix
struct UAudioMixerBlueprintLibrary_ReplaceSoundEffectSubmix_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USoundSubmix*                                InSoundSubmix;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SubmixChainIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundEffectSubmixPreset*                    SubmixEffectPreset;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPresetAtIndex
struct UAudioMixerBlueprintLibrary_RemoveSubmixEffectPresetAtIndex_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USoundSubmix*                                SoundSubmix;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SubmixChainIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPreset
struct UAudioMixerBlueprintLibrary_RemoveSubmixEffectPreset_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USoundSubmix*                                SoundSubmix;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundEffectSubmixPreset*                    SubmixEffectPreset;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectAtIndex
struct UAudioMixerBlueprintLibrary_RemoveSubmixEffectAtIndex_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USoundSubmix*                                SoundSubmix;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SubmixChainIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffect
struct UAudioMixerBlueprintLibrary_RemoveSubmixEffect_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USoundSubmix*                                SoundSubmix;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundEffectSubmixPreset*                    SubmixEffectPreset;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSourceEffectFromPresetChain
struct UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USoundEffectSourcePresetChain*               PresetChain;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                EntryIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveMasterSubmixEffect
struct UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USoundEffectSubmixPreset*                    SubmixEffectPreset;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundForPlayback
struct UAudioMixerBlueprintLibrary_PrimeSoundForPlayback_Params
{
	class USoundWave*                                  SoundWave;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             OnLoadCompletion;                                         // (ConstParm, Parm, ZeroConstructor)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundCueForPlayback
struct UAudioMixerBlueprintLibrary_PrimeSoundCueForPlayback_Params
{
	class USoundCue*                                   SoundCue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.PauseRecordingOutput
struct UAudioMixerBlueprintLibrary_PauseRecordingOutput_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USoundSubmix*                                SubmixToPause;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.MakePresetSpectralAnalysisBandSettings
struct UAudioMixerBlueprintLibrary_MakePresetSpectralAnalysisBandSettings_Params
{
	enum class EAudioSpectrumBandPresetType            InBandPresetType;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InNumBands;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InAttackTimeMsec;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InReleaseTimeMsec;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FSoundSubmixSpectralAnalysisBandSettings> ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.MakeMusicalSpectralAnalysisBandSettings
struct UAudioMixerBlueprintLibrary_MakeMusicalSpectralAnalysisBandSettings_Params
{
	int                                                InNumSemitones;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	enum class EMusicalNoteName                        InStartingMusicalNote;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InStartingOctave;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InAttackTimeMsec;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InReleaseTimeMsec;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FSoundSubmixSpectralAnalysisBandSettings> ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.MakeFullSpectrumSpectralAnalysisBandSettings
struct UAudioMixerBlueprintLibrary_MakeFullSpectrumSpectralAnalysisBandSettings_Params
{
	int                                                InNumBands;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InMinimumFrequency;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InMaximumFrequency;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InAttackTimeMsec;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InReleaseTimeMsec;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FSoundSubmixSpectralAnalysisBandSettings> ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.IsAudioBusActive
struct UAudioMixerBlueprintLibrary_IsAudioBusActive_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UAudioBus*                                   AudioBus;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.GetPhaseForFrequencies
struct UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      Frequencies;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      Phases;                                                   // (Parm, OutParm, ZeroConstructor)
	class USoundSubmix*                                SubmixToAnalyze;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.GetNumberOfEntriesInSourceEffectChain
struct UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USoundEffectSourcePresetChain*               PresetChain;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.GetMagnitudeForFrequencies
struct UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      Frequencies;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      Magnitudes;                                               // (Parm, OutParm, ZeroConstructor)
	class USoundSubmix*                                SubmixToAnalyze;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.GetCurrentAudioOutputDeviceName
struct UAudioMixerBlueprintLibrary_GetCurrentAudioOutputDeviceName_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             OnObtainCurrentDeviceEvent;                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.GetAvailableAudioOutputDevices
struct UAudioMixerBlueprintLibrary_GetAvailableAudioOutputDevices_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             OnObtainDevicesEvent;                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.Conv_AudioOutputDeviceInfoToString
struct UAudioMixerBlueprintLibrary_Conv_AudioOutputDeviceInfoToString_Params
{
	struct FAudioOutputDeviceInfo                      Info;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffects
struct UAudioMixerBlueprintLibrary_ClearSubmixEffects_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USoundSubmix*                                SoundSubmix;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffectChainOverride
struct UAudioMixerBlueprintLibrary_ClearSubmixEffectChainOverride_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USoundSubmix*                                SoundSubmix;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FadeTimeSec;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.ClearMasterSubmixEffects
struct UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.AddSubmixEffect
struct UAudioMixerBlueprintLibrary_AddSubmixEffect_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USoundSubmix*                                SoundSubmix;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundEffectSubmixPreset*                    SubmixEffectPreset;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.AddSourceEffectToPresetChain
struct UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USoundEffectSourcePresetChain*               PresetChain;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSourceEffectChainEntry                     Entry;                                                    // (Parm)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.AddMasterSubmixEffect
struct UAudioMixerBlueprintLibrary_AddMasterSubmixEffect_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USoundEffectSubmixPreset*                    SubmixEffectPreset;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.QuartzClockHandle.UnsubscribeFromTimeDivision
struct UQuartzClockHandle_UnsubscribeFromTimeDivision_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	enum class EQuartzCommandQuantization              InQuantizationBoundary;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UQuartzClockHandle*                          ClockHandle;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.QuartzClockHandle.UnsubscribeFromAllTimeDivisions
struct UQuartzClockHandle_UnsubscribeFromAllTimeDivisions_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UQuartzClockHandle*                          ClockHandle;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.QuartzClockHandle.SubscribeToQuantizationEvent
struct UQuartzClockHandle_SubscribeToQuantizationEvent_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	enum class EQuartzCommandQuantization              InQuantizationBoundary;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             OnQuantizationEvent;                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UQuartzClockHandle*                          ClockHandle;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.QuartzClockHandle.SubscribeToAllQuantizationEvents
struct UQuartzClockHandle_SubscribeToAllQuantizationEvents_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             OnQuantizationEvent;                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UQuartzClockHandle*                          ClockHandle;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.QuartzClockHandle.StopClock
struct UQuartzClockHandle_StopClock_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CancelPendingEvents;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UQuartzClockHandle*                          ClockHandle;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.QuartzClockHandle.StartOtherClock
struct UQuartzClockHandle_StartOtherClock_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       OtherClockName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FQuartzQuantizationBoundary                 InQuantizationBoundary;                                   // (Parm)
	struct FScriptDelegate                             InDelegate;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AudioMixer.QuartzClockHandle.StartClock
struct UQuartzClockHandle_StartClock_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UQuartzClockHandle*                          ClockHandle;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.QuartzClockHandle.SetTicksPerSecond
struct UQuartzClockHandle_SetTicksPerSecond_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FQuartzQuantizationBoundary                 QuantizationBoundary;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FScriptDelegate                             Delegate;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UQuartzClockHandle*                          ClockHandle;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              TicksPerSecond;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.QuartzClockHandle.SetThirtySecondNotesPerMinute
struct UQuartzClockHandle_SetThirtySecondNotesPerMinute_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FQuartzQuantizationBoundary                 QuantizationBoundary;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FScriptDelegate                             Delegate;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UQuartzClockHandle*                          ClockHandle;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ThirtySecondsNotesPerMinute;                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.QuartzClockHandle.SetSecondsPerTick
struct UQuartzClockHandle_SetSecondsPerTick_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FQuartzQuantizationBoundary                 QuantizationBoundary;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FScriptDelegate                             Delegate;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UQuartzClockHandle*                          ClockHandle;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              SecondsPerTick;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.QuartzClockHandle.SetMillisecondsPerTick
struct UQuartzClockHandle_SetMillisecondsPerTick_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FQuartzQuantizationBoundary                 QuantizationBoundary;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FScriptDelegate                             Delegate;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UQuartzClockHandle*                          ClockHandle;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              MillisecondsPerTick;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.QuartzClockHandle.SetBeatsPerMinute
struct UQuartzClockHandle_SetBeatsPerMinute_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FQuartzQuantizationBoundary                 QuantizationBoundary;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FScriptDelegate                             Delegate;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UQuartzClockHandle*                          ClockHandle;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              BeatsPerMinute;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.QuartzClockHandle.ResumeClock
struct UQuartzClockHandle_ResumeClock_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UQuartzClockHandle*                          ClockHandle;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.QuartzClockHandle.ResetTransportQuantized
struct UQuartzClockHandle_ResetTransportQuantized_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FQuartzQuantizationBoundary                 InQuantizationBoundary;                                   // (Parm)
	struct FScriptDelegate                             InDelegate;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UQuartzClockHandle*                          ClockHandle;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.QuartzClockHandle.ResetTransport
struct UQuartzClockHandle_ResetTransport_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             InDelegate;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AudioMixer.QuartzClockHandle.PauseClock
struct UQuartzClockHandle_PauseClock_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UQuartzClockHandle*                          ClockHandle;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.QuartzClockHandle.IsClockRunning
struct UQuartzClockHandle_IsClockRunning_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AudioMixer.QuartzClockHandle.GetTicksPerSecond
struct UQuartzClockHandle_GetTicksPerSecond_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AudioMixer.QuartzClockHandle.GetThirtySecondNotesPerMinute
struct UQuartzClockHandle_GetThirtySecondNotesPerMinute_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AudioMixer.QuartzClockHandle.GetSecondsPerTick
struct UQuartzClockHandle_GetSecondsPerTick_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AudioMixer.QuartzClockHandle.GetMillisecondsPerTick
struct UQuartzClockHandle_GetMillisecondsPerTick_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AudioMixer.QuartzClockHandle.GetEstimatedRunTime
struct UQuartzClockHandle_GetEstimatedRunTime_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AudioMixer.QuartzClockHandle.GetDurationOfQuantizationTypeInSeconds
struct UQuartzClockHandle_GetDurationOfQuantizationTypeInSeconds_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	enum class EQuartzCommandQuantization              QuantizationType;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Multiplier;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AudioMixer.QuartzClockHandle.GetCurrentTimestamp
struct UQuartzClockHandle_GetCurrentTimestamp_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FQuartzTransportTimeStamp                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AudioMixer.QuartzClockHandle.GetBeatsPerMinute
struct UQuartzClockHandle_GetBeatsPerMinute_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetSettings
struct USubmixEffectDynamicsProcessorPreset_SetSettings_Params
{
	struct FSubmixEffectDynamicsProcessorSettings      Settings;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetExternalSubmix
struct USubmixEffectDynamicsProcessorPreset_SetExternalSubmix_Params
{
	class USoundSubmix*                                Submix;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetAudioBus
struct USubmixEffectDynamicsProcessorPreset_SetAudioBus_Params
{
	class UAudioBus*                                   AudioBus;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.SubmixEffectDynamicsProcessorPreset.ResetKey
struct USubmixEffectDynamicsProcessorPreset_ResetKey_Params
{
};

// Function AudioMixer.SubmixEffectSubmixEQPreset.SetSettings
struct USubmixEffectSubmixEQPreset_SetSettings_Params
{
	struct FSubmixEffectSubmixEQSettings               InSettings;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AudioMixer.SubmixEffectReverbPreset.SetSettingsWithReverbEffect
struct USubmixEffectReverbPreset_SetSettingsWithReverbEffect_Params
{
	class UReverbEffect*                               InReverbEffect;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              WetLevel;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DryLevel;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.SubmixEffectReverbPreset.SetSettings
struct USubmixEffectReverbPreset_SetSettings_Params
{
	struct FSubmixEffectReverbSettings                 InSettings;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AudioMixer.QuartzSubsystem.IsQuartzEnabled
struct UQuartzSubsystem_IsQuartzEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AudioMixer.QuartzSubsystem.IsClockRunning
struct UQuartzSubsystem_IsClockRunning_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ClockName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AudioMixer.QuartzSubsystem.GetRoundTripMinLatency
struct UQuartzSubsystem_GetRoundTripMinLatency_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AudioMixer.QuartzSubsystem.GetRoundTripMaxLatency
struct UQuartzSubsystem_GetRoundTripMaxLatency_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AudioMixer.QuartzSubsystem.GetRoundTripAverageLatency
struct UQuartzSubsystem_GetRoundTripAverageLatency_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AudioMixer.QuartzSubsystem.GetHandleForClock
struct UQuartzSubsystem_GetHandleForClock_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ClockName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UQuartzClockHandle*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadMinLatency
struct UQuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadMaxLatency
struct UQuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadAverageLatency
struct UQuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AudioMixer.QuartzSubsystem.GetEstimatedClockRunTime
struct UQuartzSubsystem_GetEstimatedClockRunTime_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       InClockName;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AudioMixer.QuartzSubsystem.GetDurationOfQuantizationTypeInSeconds
struct UQuartzSubsystem_GetDurationOfQuantizationTypeInSeconds_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ClockName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	enum class EQuartzCommandQuantization              QuantizationType;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Multiplier;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AudioMixer.QuartzSubsystem.GetCurrentClockTimestamp
struct UQuartzSubsystem_GetCurrentClockTimestamp_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       InClockName;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FQuartzTransportTimeStamp                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadMinLatency
struct UQuartzSubsystem_GetAudioRenderThreadToGameThreadMinLatency_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadMaxLatency
struct UQuartzSubsystem_GetAudioRenderThreadToGameThreadMaxLatency_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadAverageLatency
struct UQuartzSubsystem_GetAudioRenderThreadToGameThreadAverageLatency_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AudioMixer.QuartzSubsystem.DoesClockExist
struct UQuartzSubsystem_DoesClockExist_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ClockName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AudioMixer.QuartzSubsystem.DeleteClockByName
struct UQuartzSubsystem_DeleteClockByName_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ClockName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.QuartzSubsystem.DeleteClockByHandle
struct UQuartzSubsystem_DeleteClockByHandle_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UQuartzClockHandle*                          InClockHandle;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function AudioMixer.QuartzSubsystem.CreateNewClock
struct UQuartzSubsystem_CreateNewClock_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ClockName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FQuartzClockSettings                        InSettings;                                               // (Parm)
	bool                                               bOverrideSettingsIfClockExists;                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseAudioEngineClockManager;                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UQuartzClockHandle*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
