#pragma once

//   SDK By:if

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace sdk
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class AudioMixer.SynthComponent
// 0x04F0 (0x07C0 - 0x02D0)
class USynthComponent : public USceneComponent
{
public:
	unsigned char                                      bAutoDestroy : 1;                                         // 0x02D0(0x0001)
	unsigned char                                      bStopWhenOwnerDestroyed : 1;                              // 0x02D0(0x0001)
	unsigned char                                      bAllowSpatialization : 1;                                 // 0x02D0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverrideAttenuation : 1;                                 // 0x02D0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02D1(0x0003) MISSED OFFSET
	unsigned char                                      bEnableBusSends : 1;                                      // 0x02D4(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bEnableBaseSubmix : 1;                                    // 0x02D4(0x0001) (Edit)
	unsigned char                                      bEnableSubmixSends : 1;                                   // 0x02D4(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02D5(0x0003) MISSED OFFSET
	class USoundAttenuation*                           AttenuationSettings;                                      // 0x02D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSoundAttenuationSettings                   AttenuationOverrides;                                     // 0x02E0(0x03C8) (Edit, BlueprintVisible)
	class USoundConcurrency*                           ConcurrencySettings;                                      // 0x06A8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData02[0x50];                                      // 0x06B0(0x0050) UNKNOWN PROPERTY: ConcurrencySet
	class USoundClass*                                 SoundClass;                                               // 0x0700(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USoundEffectSourcePresetChain*               SourceEffectChain;                                        // 0x0708(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USoundSubmixBase*                            SoundSubmix;                                              // 0x0710(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FSoundSubmixSendInfo>                SoundSubmixSends;                                         // 0x0718(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FSoundSourceBusSendInfo>             BusSends;                                                 // 0x0728(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FSoundSourceBusSendInfo>             PreEffectBusSends;                                        // 0x0738(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      bIsUISound : 1;                                           // 0x0748(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bIsPreviewSound : 1;                                      // 0x0748(0x0001)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0749(0x0003) MISSED OFFSET
	int                                                EnvelopeFollowerAttackTime;                               // 0x074C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EnvelopeFollowerReleaseTime;                              // 0x0750(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0754(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnAudioEnvelopeValue;                                     // 0x0758(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData05[0x20];                                      // 0x0768(0x0020) MISSED OFFSET
	class USynthSound*                                 Synth;                                                    // 0x0788(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UAudioComponent*                             AudioComponent;                                           // 0x0790(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData06[0x28];                                      // 0x0798(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AudioMixer.SynthComponent"));
		return ptr;
	}


	void Stop();//Offset:Discovery.exe+0x4BFBE80
	void Start();//Offset:Discovery.exe+0x4BFBEA0
	void SetVolumeMultiplier(float VolumeMultiplier);//Offset:Discovery.exe+0x4BFBDB0
	void SetSubmixSend(class USoundSubmixBase* Submix, float SendLevel);//Offset:Discovery.exe+0x4BFBCD0
	void SetOutputToBusOnly(bool bInOutputToBusOnly);//Offset:Discovery.exe+0x4BFBAF0
	void SetLowPassFilterFrequency(float InLowPassFilterFrequency);//Offset:Discovery.exe+0x4BFBB90
	void SetLowPassFilterEnabled(bool InLowPassFilterEnabled);//Offset:Discovery.exe+0x4BFBC30
	bool IsPlaying();//Offset:Discovery.exe+0x4BFBE50
};


// Class AudioMixer.AudioGenerator
// 0x0080 (0x00A8 - 0x0028)
class UAudioGenerator : public UObject
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0028(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AudioMixer.AudioGenerator"));
		return ptr;
	}

};


// Class AudioMixer.AudioDeviceNotificationSubsystem
// 0x00F8 (0x0128 - 0x0030)
class UAudioDeviceNotificationSubsystem : public UEngineSubsystem
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    DefaultCaptureDeviceChanged;                              // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0048(0x0018) MISSED OFFSET
	struct FScriptMulticastDelegate                    DefaultRenderDeviceChanged;                               // 0x0060(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0070(0x0018) MISSED OFFSET
	struct FScriptMulticastDelegate                    DeviceAdded;                                              // 0x0088(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0x18];                                      // 0x0098(0x0018) MISSED OFFSET
	struct FScriptMulticastDelegate                    DeviceRemoved;                                            // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData04[0x18];                                      // 0x00C0(0x0018) MISSED OFFSET
	struct FScriptMulticastDelegate                    DeviceStateChanged;                                       // 0x00D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData05[0x18];                                      // 0x00E8(0x0018) MISSED OFFSET
	struct FScriptMulticastDelegate                    DeviceSwitched;                                           // 0x0100(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData06[0x18];                                      // 0x0110(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AudioMixer.AudioDeviceNotificationSubsystem"));
		return ptr;
	}

};


// Class AudioMixer.AudioMixerBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UAudioMixerBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AudioMixer.AudioMixerBlueprintLibrary"));
		return ptr;
	}


	float STATIC_TrimAudioCache(float InMegabytesToFree);//Offset:Discovery.exe+0x4BF0790
	void STATIC_SwapAudioOutputDevice(class UObject* WorldContextObject, const struct FString& NewDeviceId, const struct FScriptDelegate& OnCompletedDeviceSwap);//Offset:Discovery.exe+0x4BF0190
	class USoundWave* STATIC_StopRecordingOutput(class UObject* WorldContextObject, enum class EAudioRecordingExportType ExportType, const struct FString& Name, const struct FString& Path, class USoundSubmix* SubmixToRecord, class USoundWave* ExistingSoundWaveToOverwrite);//Offset:Discovery.exe+0x4BF1CB0
	void STATIC_StopAudioBus(class UObject* WorldContextObject, class UAudioBus* AudioBus);//Offset:Discovery.exe+0x4BF05D0
	void STATIC_StopAnalyzingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToStopAnalyzing);//Offset:Discovery.exe+0x4BF17B0
	void STATIC_StartRecordingOutput(class UObject* WorldContextObject, float ExpectedDuration, class USoundSubmix* SubmixToRecord);//Offset:Discovery.exe+0x4BF1F50
	void STATIC_StartAudioBus(class UObject* WorldContextObject, class UAudioBus* AudioBus);//Offset:Discovery.exe+0x4BF06B0
	void STATIC_StartAnalyzingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToAnalyze, enum class EFFTSize FFTSize, enum class EFFTPeakInterpolationMethod InterpolationMethod, enum class EFFTWindowType WindowType, float HopSize, enum class EAudioSpectrumType SpectrumType);//Offset:Discovery.exe+0x4BF1890
	void STATIC_SetSubmixEffectChainOverride(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, TArray<class USoundEffectSubmixPreset*> SubmixEffectPresetChain, float FadeTimeSec);//Offset:Discovery.exe+0x4BF21B0
	void STATIC_SetBypassSourceEffectChainEntry(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int EntryIndex, bool bBypassed);//Offset:Discovery.exe+0x4BF0A90
	void STATIC_ResumeRecordingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToPause);//Offset:Discovery.exe+0x4BF1AF0
	void STATIC_ReplaceSubmixEffect(class UObject* WorldContextObject, class USoundSubmix* InSoundSubmix, int SubmixChainIndex, class USoundEffectSubmixPreset* SubmixEffectPreset);//Offset:Discovery.exe+0x4BF2470
	void STATIC_ReplaceSoundEffectSubmix(class UObject* WorldContextObject, class USoundSubmix* InSoundSubmix, int SubmixChainIndex, class USoundEffectSubmixPreset* SubmixEffectPreset);//Offset:Discovery.exe+0x4BF25E0
	void STATIC_RemoveSubmixEffectPresetAtIndex(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, int SubmixChainIndex);//Offset:Discovery.exe+0x4BF2750
	void STATIC_RemoveSubmixEffectPreset(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset);//Offset:Discovery.exe+0x4BF2880
	void STATIC_RemoveSubmixEffectAtIndex(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, int SubmixChainIndex);//Offset:Discovery.exe+0x4BF2750
	void STATIC_RemoveSubmixEffect(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset);//Offset:Discovery.exe+0x4BF2880
	void STATIC_RemoveSourceEffectFromPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int EntryIndex);//Offset:Discovery.exe+0x4BF0C10
	void STATIC_RemoveMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset);//Offset:Discovery.exe+0x4BF2B70
	void STATIC_PrimeSoundForPlayback(class USoundWave* SoundWave, const struct FScriptDelegate& OnLoadCompletion);//Offset:Discovery.exe+0x4BF08C0
	void STATIC_PrimeSoundCueForPlayback(class USoundCue* SoundCue);//Offset:Discovery.exe+0x4BF0830
	void STATIC_PauseRecordingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToPause);//Offset:Discovery.exe+0x4BF1BD0
	TArray<struct FSoundSubmixSpectralAnalysisBandSettings> STATIC_MakePresetSpectralAnalysisBandSettings(enum class EAudioSpectrumBandPresetType InBandPresetType, int InNumBands, int InAttackTimeMsec, int InReleaseTimeMsec);//Offset:Discovery.exe+0x4BF1200
	TArray<struct FSoundSubmixSpectralAnalysisBandSettings> STATIC_MakeMusicalSpectralAnalysisBandSettings(int InNumSemitones, enum class EMusicalNoteName InStartingMusicalNote, int InStartingOctave, int InAttackTimeMsec, int InReleaseTimeMsec);//Offset:Discovery.exe+0x4BF15B0
	TArray<struct FSoundSubmixSpectralAnalysisBandSettings> STATIC_MakeFullSpectrumSpectralAnalysisBandSettings(int InNumBands, float InMinimumFrequency, float InMaximumFrequency, int InAttackTimeMsec, int InReleaseTimeMsec);//Offset:Discovery.exe+0x4BF13B0
	bool STATIC_IsAudioBusActive(class UObject* WorldContextObject, class UAudioBus* AudioBus);//Offset:Discovery.exe+0x4BF04F0
	void STATIC_GetPhaseForFrequencies(class UObject* WorldContextObject, TArray<float> Frequencies, class USoundSubmix* SubmixToAnalyze, TArray<float>* Phases);//Offset:Discovery.exe+0x4BF0E80
	int STATIC_GetNumberOfEntriesInSourceEffectChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain);//Offset:Discovery.exe+0x4BF09B0
	void STATIC_GetMagnitudeForFrequencies(class UObject* WorldContextObject, TArray<float> Frequencies, class USoundSubmix* SubmixToAnalyze, TArray<float>* Magnitudes);//Offset:Discovery.exe+0x4BF1040
	void STATIC_GetCurrentAudioOutputDeviceName(class UObject* WorldContextObject, const struct FScriptDelegate& OnObtainCurrentDeviceEvent);//Offset:Discovery.exe+0x4BF02F0
	void STATIC_GetAvailableAudioOutputDevices(class UObject* WorldContextObject, const struct FScriptDelegate& OnObtainDevicesEvent);//Offset:Discovery.exe+0x4BF03F0
	struct FString STATIC_Conv_AudioOutputDeviceInfoToString(const struct FAudioOutputDeviceInfo& Info);//Offset:Discovery.exe+0x4BF2D30
	void STATIC_ClearSubmixEffects(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix);//Offset:Discovery.exe+0x4BF2390
	void STATIC_ClearSubmixEffectChainOverride(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, float FadeTimeSec);//Offset:Discovery.exe+0x4BF2080
	void STATIC_ClearMasterSubmixEffects(class UObject* WorldContextObject);//Offset:Discovery.exe+0x4BF2AE0
	int STATIC_AddSubmixEffect(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset);//Offset:Discovery.exe+0x4BF29B0
	void STATIC_AddSourceEffectToPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, const struct FSourceEffectChainEntry& Entry);//Offset:Discovery.exe+0x4BF0D40
	void STATIC_AddMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset);//Offset:Discovery.exe+0x4BF2C50
};


// Class AudioMixer.QuartzClockHandle
// 0x0198 (0x01C0 - 0x0028)
class UQuartzClockHandle : public UObject
{
public:
	unsigned char                                      UnknownData00[0x198];                                     // 0x0028(0x0198) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AudioMixer.QuartzClockHandle"));
		return ptr;
	}


	void UnsubscribeFromTimeDivision(class UObject* WorldContextObject, enum class EQuartzCommandQuantization InQuantizationBoundary, class UQuartzClockHandle** ClockHandle);//Offset:Discovery.exe+0x4BF5620
	void UnsubscribeFromAllTimeDivisions(class UObject* WorldContextObject, class UQuartzClockHandle** ClockHandle);//Offset:Discovery.exe+0x4BF5530
	void SubscribeToQuantizationEvent(class UObject* WorldContextObject, enum class EQuartzCommandQuantization InQuantizationBoundary, const struct FScriptDelegate& OnQuantizationEvent, class UQuartzClockHandle** ClockHandle);//Offset:Discovery.exe+0x4BF58D0
	void SubscribeToAllQuantizationEvents(class UObject* WorldContextObject, const struct FScriptDelegate& OnQuantizationEvent, class UQuartzClockHandle** ClockHandle);//Offset:Discovery.exe+0x4BF5760
	void StopClock(class UObject* WorldContextObject, bool CancelPendingEvents, class UQuartzClockHandle** ClockHandle);//Offset:Discovery.exe+0x4BF6740
	void StartOtherClock(class UObject* WorldContextObject, const struct FName& OtherClockName, const struct FQuartzQuantizationBoundary& InQuantizationBoundary, const struct FScriptDelegate& InDelegate);//Offset:Discovery.exe+0x4BF5A90
	void StartClock(class UObject* WorldContextObject, class UQuartzClockHandle** ClockHandle);//Offset:Discovery.exe+0x4BF6560
	void SetTicksPerSecond(class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, const struct FScriptDelegate& Delegate, float TicksPerSecond, class UQuartzClockHandle** ClockHandle);//Offset:Discovery.exe+0x4BF4FB0
	void SetThirtySecondNotesPerMinute(class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, const struct FScriptDelegate& Delegate, float ThirtySecondsNotesPerMinute, class UQuartzClockHandle** ClockHandle);//Offset:Discovery.exe+0x4BF4A30
	void SetSecondsPerTick(class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, const struct FScriptDelegate& Delegate, float SecondsPerTick, class UQuartzClockHandle** ClockHandle);//Offset:Discovery.exe+0x4BF4CF0
	void SetMillisecondsPerTick(class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, const struct FScriptDelegate& Delegate, float MillisecondsPerTick, class UQuartzClockHandle** ClockHandle);//Offset:Discovery.exe+0x4BF5270
	void SetBeatsPerMinute(class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, const struct FScriptDelegate& Delegate, float BeatsPerMinute, class UQuartzClockHandle** ClockHandle);//Offset:Discovery.exe+0x4BF4770
	void ResumeClock(class UObject* WorldContextObject, class UQuartzClockHandle** ClockHandle);//Offset:Discovery.exe+0x4BF6560
	void ResetTransportQuantized(class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& InQuantizationBoundary, const struct FScriptDelegate& InDelegate, class UQuartzClockHandle** ClockHandle);//Offset:Discovery.exe+0x4BF6110
	void ResetTransport(class UObject* WorldContextObject, const struct FScriptDelegate& InDelegate);//Offset:Discovery.exe+0x4BF6450
	void PauseClock(class UObject* WorldContextObject, class UQuartzClockHandle** ClockHandle);//Offset:Discovery.exe+0x4BF6650
	bool IsClockRunning(class UObject* WorldContextObject);//Offset:Discovery.exe+0x4BF6070
	float GetTicksPerSecond(class UObject* WorldContextObject);//Offset:Discovery.exe+0x4BF4630
	float GetThirtySecondNotesPerMinute(class UObject* WorldContextObject);//Offset:Discovery.exe+0x4BF44F0
	float GetSecondsPerTick(class UObject* WorldContextObject);//Offset:Discovery.exe+0x4BF4590
	float GetMillisecondsPerTick(class UObject* WorldContextObject);//Offset:Discovery.exe+0x4BF46D0
	float GetEstimatedRunTime(class UObject* WorldContextObject);//Offset:Discovery.exe+0x4BF5DD0
	float GetDurationOfQuantizationTypeInSeconds(class UObject* WorldContextObject, enum class EQuartzCommandQuantization QuantizationType, float Multiplier);//Offset:Discovery.exe+0x4BF5F20
	struct FQuartzTransportTimeStamp GetCurrentTimestamp(class UObject* WorldContextObject);//Offset:Discovery.exe+0x4BF5E70
	float GetBeatsPerMinute(class UObject* WorldContextObject);//Offset:Discovery.exe+0x4BF4450
};


// Class AudioMixer.SubmixEffectDynamicsProcessorPreset
// 0x00E8 (0x0150 - 0x0068)
class USubmixEffectDynamicsProcessorPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0068(0x0088) MISSED OFFSET
	struct FSubmixEffectDynamicsProcessorSettings      Settings;                                                 // 0x00F0(0x0060) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AudioMixer.SubmixEffectDynamicsProcessorPreset"));
		return ptr;
	}


	void SetSettings(const struct FSubmixEffectDynamicsProcessorSettings& Settings);//Offset:Discovery.exe+0x4BF8D60
	void SetExternalSubmix(class USoundSubmix* Submix);//Offset:Discovery.exe+0x4BF8E80
	void SetAudioBus(class UAudioBus* AudioBus);//Offset:Discovery.exe+0x4BF8F20
	void ResetKey();//Offset:Discovery.exe+0x4BF8FC0
};


// Class AudioMixer.SubmixEffectSubmixEQPreset
// 0x0048 (0x00B0 - 0x0068)
class USubmixEffectSubmixEQPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0068(0x0038) MISSED OFFSET
	struct FSubmixEffectSubmixEQSettings               Settings;                                                 // 0x00A0(0x0010) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AudioMixer.SubmixEffectSubmixEQPreset"));
		return ptr;
	}


	void SetSettings(const struct FSubmixEffectSubmixEQSettings& InSettings);//Offset:Discovery.exe+0x2155A60
};


// Class AudioMixer.SubmixEffectReverbPreset
// 0x00A8 (0x0110 - 0x0068)
class USubmixEffectReverbPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0068(0x0068) MISSED OFFSET
	struct FSubmixEffectReverbSettings                 Settings;                                                 // 0x00D0(0x0040) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AudioMixer.SubmixEffectReverbPreset"));
		return ptr;
	}


	void SetSettingsWithReverbEffect(class UReverbEffect* InReverbEffect, float WetLevel, float DryLevel);//Offset:Discovery.exe+0x4BF98C0
	void SetSettings(const struct FSubmixEffectReverbSettings& InSettings);//Offset:Discovery.exe+0x4BF99F0
};


// Class AudioMixer.QuartzSubsystem
// 0x0110 (0x0150 - 0x0040)
class UQuartzSubsystem : public UTickableWorldSubsystem
{
public:
	unsigned char                                      UnknownData00[0x110];                                     // 0x0040(0x0110) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AudioMixer.QuartzSubsystem"));
		return ptr;
	}


	bool IsQuartzEnabled();//Offset:Discovery.exe+0x1B14430
	bool IsClockRunning(class UObject* WorldContextObject, const struct FName& ClockName);//Offset:Discovery.exe+0x4BFA680
	float GetRoundTripMinLatency(class UObject* WorldContextObject);//Offset:Discovery.exe+0x4BF9FD0
	float GetRoundTripMaxLatency(class UObject* WorldContextObject);//Offset:Discovery.exe+0x4BF9F30
	float GetRoundTripAverageLatency(class UObject* WorldContextObject);//Offset:Discovery.exe+0x4BFA070
	class UQuartzClockHandle* GetHandleForClock(class UObject* WorldContextObject, const struct FName& ClockName);//Offset:Discovery.exe+0x4BFA860
	float GetGameThreadToAudioRenderThreadMinLatency(class UObject* WorldContextObject);//Offset:Discovery.exe+0x4BFA1A0
	float GetGameThreadToAudioRenderThreadMaxLatency(class UObject* WorldContextObject);//Offset:Discovery.exe+0x4BFA1A0
	float GetGameThreadToAudioRenderThreadAverageLatency(class UObject* WorldContextObject);//Offset:Discovery.exe+0x4BFA240
	float GetEstimatedClockRunTime(class UObject* WorldContextObject, const struct FName& InClockName);//Offset:Discovery.exe+0x4BFA2E0
	float GetDurationOfQuantizationTypeInSeconds(class UObject* WorldContextObject, const struct FName& ClockName, enum class EQuartzCommandQuantization QuantizationType, float Multiplier);//Offset:Discovery.exe+0x4BFA4E0
	struct FQuartzTransportTimeStamp GetCurrentClockTimestamp(class UObject* WorldContextObject, const struct FName& InClockName);//Offset:Discovery.exe+0x4BFA3E0
	float GetAudioRenderThreadToGameThreadMinLatency();//Offset:Discovery.exe+0x4BFA140
	float GetAudioRenderThreadToGameThreadMaxLatency();//Offset:Discovery.exe+0x4BFA110
	float GetAudioRenderThreadToGameThreadAverageLatency();//Offset:Discovery.exe+0x4BFA170
	bool DoesClockExist(class UObject* WorldContextObject, const struct FName& ClockName);//Offset:Discovery.exe+0x4BFA770
	void DeleteClockByName(class UObject* WorldContextObject, const struct FName& ClockName);//Offset:Discovery.exe+0x4BFAA40
	void DeleteClockByHandle(class UObject* WorldContextObject, class UQuartzClockHandle** InClockHandle);//Offset:Discovery.exe+0x4BFA950
	class UQuartzClockHandle* CreateNewClock(class UObject* WorldContextObject, const struct FName& ClockName, const struct FQuartzClockSettings& InSettings, bool bOverrideSettingsIfClockExists, bool bUseAudioEngineClockManager);//Offset:Discovery.exe+0x4BFAB20
};


// Class AudioMixer.SynthSound
// 0x0020 (0x03B0 - 0x0390)
class USynthSound : public USoundWaveProcedural
{
public:
	TWeakObjectPtr<class USynthComponent>              OwningSynthComponent;                                     // 0x0390(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0398(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AudioMixer.SynthSound"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
