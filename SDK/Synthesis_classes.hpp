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

// Class Synthesis.ModularSynthPresetBank
// 0x0010 (0x0038 - 0x0028)
class UModularSynthPresetBank : public UObject
{
public:
	TArray<struct FModularSynthPresetBankEntry>        Presets;                                                  // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Synthesis.ModularSynthPresetBank"));
		return ptr;
	}

};


// Class Synthesis.ModularSynthLibrary
// 0x0000 (0x0028 - 0x0028)
class UModularSynthLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Synthesis.ModularSynthLibrary"));
		return ptr;
	}


	void STATIC_AddModularSynthPresetToBankAsset(class UModularSynthPresetBank* InBank, const struct FModularSynthPreset& Preset, const struct FString& PresetName);//Offset:Discovery.exe+0x214CA80
};


// Class Synthesis.ModularSynthComponent
// 0x06C0 (0x0E80 - 0x07C0)
class UModularSynthComponent : public USynthComponent
{
public:
	int                                                VoiceCount;                                               // 0x07C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6BC];                                     // 0x07C4(0x06BC) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Synthesis.ModularSynthComponent"));
		return ptr;
	}


	void SetSynthPreset(const struct FModularSynthPreset& SynthPreset);//Offset:Discovery.exe+0x214D250
	void SetSustainGain(float SustainGain);//Offset:Discovery.exe+0x214E5C0
	void SetStereoDelayWetlevel(float DelayWetlevel);//Offset:Discovery.exe+0x214D7B0
	void SetStereoDelayTime(float DelayTimeMsec);//Offset:Discovery.exe+0x214D8F0
	void SetStereoDelayRatio(float DelayRatio);//Offset:Discovery.exe+0x214D710
	void SetStereoDelayMode(enum class ESynthStereoDelayMode StereoDelayMode);//Offset:Discovery.exe+0x214D990
	void SetStereoDelayIsEnabled(bool StereoDelayEnabled);//Offset:Discovery.exe+0x214DA20
	void SetStereoDelayFeedback(float DelayFeedback);//Offset:Discovery.exe+0x214D850
	void SetSpread(float Spread);//Offset:Discovery.exe+0x214EE60
	void SetReleaseTime(float ReleaseTimeMsec);//Offset:Discovery.exe+0x214E520
	void SetPortamento(float Portamento);//Offset:Discovery.exe+0x214F1C0
	void SetPitchBend(float PitchBend);//Offset:Discovery.exe+0x214F260
	void SetPan(float Pan);//Offset:Discovery.exe+0x214EF00
	void SetOscType(int OscIndex, enum class ESynth1OscType OscType);//Offset:Discovery.exe+0x214F5A0
	void SetOscSync(bool bIsSynced);//Offset:Discovery.exe+0x214EFA0
	void SetOscSemitones(int OscIndex, float Semitones);//Offset:Discovery.exe+0x214F3E0
	void SetOscPulsewidth(int OscIndex, float Pulsewidth);//Offset:Discovery.exe+0x214F0E0
	void SetOscOctave(int OscIndex, float Octave);//Offset:Discovery.exe+0x214F4C0
	void SetOscGainMod(int OscIndex, float OscGainMod);//Offset:Discovery.exe+0x214F760
	void SetOscGain(int OscIndex, float OscGain);//Offset:Discovery.exe+0x214F840
	void SetOscFrequencyMod(int OscIndex, float OscFreqMod);//Offset:Discovery.exe+0x214F680
	void SetOscCents(int OscIndex, float Cents);//Offset:Discovery.exe+0x214F300
	void SetModEnvSustainGain(float SustainGain);//Offset:Discovery.exe+0x214E040
	void SetModEnvReleaseTime(float Release);//Offset:Discovery.exe+0x214DFA0
	void SetModEnvPatch(enum class ESynthModEnvPatch InPatchType);//Offset:Discovery.exe+0x214E490
	void SetModEnvInvert(bool bInvert);//Offset:Discovery.exe+0x214E360
	void SetModEnvDepth(float Depth);//Offset:Discovery.exe+0x214E220
	void SetModEnvDecayTime(float DecayTimeMsec);//Offset:Discovery.exe+0x214E0E0
	void SetModEnvBiasPatch(enum class ESynthModEnvBiasPatch InPatchType);//Offset:Discovery.exe+0x214E400
	void SetModEnvBiasInvert(bool bInvert);//Offset:Discovery.exe+0x214E2C0
	void SetModEnvAttackTime(float AttackTimeMsec);//Offset:Discovery.exe+0x214E180
	void SetLFOType(int LFOIndex, enum class ESynthLFOType LFOType);//Offset:Discovery.exe+0x214EA00
	void SetLFOPatch(int LFOIndex, enum class ESynthLFOPatchType LFOPatchType);//Offset:Discovery.exe+0x214E840
	void SetLFOMode(int LFOIndex, enum class ESynthLFOMode LFOMode);//Offset:Discovery.exe+0x214E920
	void SetLFOGainMod(int LFOIndex, float GainMod);//Offset:Discovery.exe+0x214EAE0
	void SetLFOGain(int LFOIndex, float Gain);//Offset:Discovery.exe+0x214EBC0
	void SetLFOFrequencyMod(int LFOIndex, float FrequencyModHz);//Offset:Discovery.exe+0x214ECA0
	void SetLFOFrequency(int LFOIndex, float FrequencyHz);//Offset:Discovery.exe+0x214ED80
	void SetGainDb(float GainDb);//Offset:Discovery.exe+0x214E7A0
	void SetFilterType(enum class ESynthFilterType FilterType);//Offset:Discovery.exe+0x214DB50
	void SetFilterQMod(float FilterQ);//Offset:Discovery.exe+0x214DBE0
	void SetFilterQ(float FilterQ);//Offset:Discovery.exe+0x214DC80
	void SetFilterFrequencyMod(float FilterFrequencyHz);//Offset:Discovery.exe+0x214DD20
	void SetFilterFrequency(float FilterFrequencyHz);//Offset:Discovery.exe+0x214DDC0
	void SetFilterAlgorithm(enum class ESynthFilterAlgorithm FilterAlgorithm);//Offset:Discovery.exe+0x214DAC0
	void SetEnableUnison(bool EnableUnison);//Offset:Discovery.exe+0x214F040
	void SetEnableRetrigger(bool RetriggerEnabled);//Offset:Discovery.exe+0x214DE60
	void SetEnablePolyphony(bool bEnablePolyphony);//Offset:Discovery.exe+0x214F920
	bool SetEnablePatch(const struct FPatchId& PatchId, bool bIsEnabled);//Offset:Discovery.exe+0x214CFF0
	void SetEnableLegato(bool LegatoEnabled);//Offset:Discovery.exe+0x214DF00
	void SetDecayTime(float DecayTimeMsec);//Offset:Discovery.exe+0x214E660
	void SetChorusFrequency(float Frequency);//Offset:Discovery.exe+0x214D490
	void SetChorusFeedback(float Feedback);//Offset:Discovery.exe+0x214D530
	void SetChorusEnabled(bool EnableChorus);//Offset:Discovery.exe+0x214D670
	void SetChorusDepth(float Depth);//Offset:Discovery.exe+0x214D5D0
	void SetAttackTime(float AttackTimeMsec);//Offset:Discovery.exe+0x214E700
	void NoteOn(float Note, int Velocity, float Duration);//Offset:Discovery.exe+0x214FB00
	void NoteOff(float Note, bool bAllNotesOff, bool bKillAllNotes);//Offset:Discovery.exe+0x214F9C0
	struct FPatchId CreatePatch(enum class ESynth1PatchSource PatchSource, TArray<struct FSynth1PatchCable> PatchCables, bool bEnableByDefault);//Offset:Discovery.exe+0x214D0E0
};


// Class Synthesis.SourceEffectBitCrusherPreset
// 0x0088 (0x00F0 - 0x0068)
class USourceEffectBitCrusherPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0068(0x0058) MISSED OFFSET
	struct FSourceEffectBitCrusherSettings             Settings;                                                 // 0x00C0(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Synthesis.SourceEffectBitCrusherPreset"));
		return ptr;
	}


	void SetSettings(const struct FSourceEffectBitCrusherBaseSettings& Settings);//Offset:Discovery.exe+0x2152D30
	void SetSampleRateModulator(class USoundModulatorBase* Modulator);//Offset:Discovery.exe+0x2152DE0
	void SetSampleRate(float SampleRate);//Offset:Discovery.exe+0x2152E80
	void SetModulationSettings(const struct FSourceEffectBitCrusherSettings& ModulationSettings);//Offset:Discovery.exe+0x2152C60
	void SetBits(float Bits);//Offset:Discovery.exe+0x2152FC0
	void SetBitModulator(class USoundModulatorBase* Modulator);//Offset:Discovery.exe+0x2152F20
};


// Class Synthesis.SourceEffectChorusPreset
// 0x0118 (0x0180 - 0x0068)
class USourceEffectChorusPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0068(0x00A0) MISSED OFFSET
	struct FSourceEffectChorusSettings                 Settings;                                                 // 0x0108(0x0078) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Synthesis.SourceEffectChorusPreset"));
		return ptr;
	}


	void SetWetModulator(class USoundModulatorBase* Modulator);//Offset:Discovery.exe+0x2153BF0
	void SetWet(float WetAmount);//Offset:Discovery.exe+0x2153C90
	void SetSpreadModulator(class USoundModulatorBase* Modulator);//Offset:Discovery.exe+0x2153970
	void SetSpread(float Spread);//Offset:Discovery.exe+0x2153A10
	void SetSettings(const struct FSourceEffectChorusBaseSettings& Settings);//Offset:Discovery.exe+0x21538B0
	void SetModulationSettings(const struct FSourceEffectChorusSettings& ModulationSettings);//Offset:Discovery.exe+0x2153780
	void SetFrequencyModulator(class USoundModulatorBase* Modulator);//Offset:Discovery.exe+0x2153D30
	void SetFrequency(float Frequency);//Offset:Discovery.exe+0x2153DD0
	void SetFeedbackModulator(class USoundModulatorBase* Modulator);//Offset:Discovery.exe+0x2153E70
	void SetFeedback(float Feedback);//Offset:Discovery.exe+0x2153F10
	void SetDryModulator(class USoundModulatorBase* Modulator);//Offset:Discovery.exe+0x2153AB0
	void SetDry(float DryAmount);//Offset:Discovery.exe+0x2153B50
	void SetDepthModulator(class USoundModulatorBase* Modulator);//Offset:Discovery.exe+0x2153FB0
	void SetDepth(float Depth);//Offset:Discovery.exe+0x2154050
};


// Class Synthesis.SourceEffectDynamicsProcessorPreset
// 0x0078 (0x00E0 - 0x0068)
class USourceEffectDynamicsProcessorPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0068(0x0050) MISSED OFFSET
	struct FSourceEffectDynamicsProcessorSettings      Settings;                                                 // 0x00B8(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Synthesis.SourceEffectDynamicsProcessorPreset"));
		return ptr;
	}


	void SetSettings(const struct FSourceEffectDynamicsProcessorSettings& InSettings);//Offset:Discovery.exe+0x2154CF0
};


// Class Synthesis.EnvelopeFollowerListener
// 0x0020 (0x00D8 - 0x00B8)
class UEnvelopeFollowerListener : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnEnvelopeFollowerUpdate;                                 // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x00C8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Synthesis.EnvelopeFollowerListener"));
		return ptr;
	}

};


// Class Synthesis.SourceEffectEnvelopeFollowerPreset
// 0x0040 (0x00A8 - 0x0068)
class USourceEffectEnvelopeFollowerPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData00[0x34];                                      // 0x0068(0x0034) MISSED OFFSET
	struct FSourceEffectEnvelopeFollowerSettings       Settings;                                                 // 0x009C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Synthesis.SourceEffectEnvelopeFollowerPreset"));
		return ptr;
	}


	void UnregisterEnvelopeFollowerListener(class UEnvelopeFollowerListener* EnvelopeFollowerListener);//Offset:Discovery.exe+0x2155340
	void SetSettings(const struct FSourceEffectEnvelopeFollowerSettings& InSettings);//Offset:Discovery.exe+0x2155480
	void RegisterEnvelopeFollowerListener(class UEnvelopeFollowerListener* EnvelopeFollowerListener);//Offset:Discovery.exe+0x21553E0
};


// Class Synthesis.SourceEffectEQPreset
// 0x0048 (0x00B0 - 0x0068)
class USourceEffectEQPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0068(0x0038) MISSED OFFSET
	struct FSourceEffectEQSettings                     Settings;                                                 // 0x00A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Synthesis.SourceEffectEQPreset"));
		return ptr;
	}


	void SetSettings(const struct FSourceEffectEQSettings& InSettings);//Offset:Discovery.exe+0x2155A60
};


// Class Synthesis.SourceEffectFilterPreset
// 0x0068 (0x00D0 - 0x0068)
class USourceEffectFilterPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0068(0x0048) MISSED OFFSET
	struct FSourceEffectFilterSettings                 Settings;                                                 // 0x00B0(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Synthesis.SourceEffectFilterPreset"));
		return ptr;
	}


	void SetSettings(const struct FSourceEffectFilterSettings& InSettings);//Offset:Discovery.exe+0x2156070
};


// Class Synthesis.SourceEffectFoldbackDistortionPreset
// 0x0040 (0x00A8 - 0x0068)
class USourceEffectFoldbackDistortionPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData00[0x34];                                      // 0x0068(0x0034) MISSED OFFSET
	struct FSourceEffectFoldbackDistortionSettings     Settings;                                                 // 0x009C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Synthesis.SourceEffectFoldbackDistortionPreset"));
		return ptr;
	}


	void SetSettings(const struct FSourceEffectFoldbackDistortionSettings& InSettings);//Offset:Discovery.exe+0x21564E0
};


// Class Synthesis.SourceEffectMidSideSpreaderPreset
// 0x0038 (0x00A0 - 0x0068)
class USourceEffectMidSideSpreaderPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0068(0x0030) MISSED OFFSET
	struct FSourceEffectMidSideSpreaderSettings        Settings;                                                 // 0x0098(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Synthesis.SourceEffectMidSideSpreaderPreset"));
		return ptr;
	}


	void SetSettings(const struct FSourceEffectMidSideSpreaderSettings& InSettings);//Offset:Discovery.exe+0x2156980
};


// Class Synthesis.SourceEffectMotionFilterPreset
// 0x0118 (0x0180 - 0x0068)
class USourceEffectMotionFilterPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0068(0x00A0) MISSED OFFSET
	struct FSourceEffectMotionFilterSettings           Settings;                                                 // 0x0108(0x0078) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Synthesis.SourceEffectMotionFilterPreset"));
		return ptr;
	}


	void SetSettings(const struct FSourceEffectMotionFilterSettings& InSettings);//Offset:Discovery.exe+0x2157140
};


// Class Synthesis.SourceEffectPannerPreset
// 0x0038 (0x00A0 - 0x0068)
class USourceEffectPannerPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0068(0x0030) MISSED OFFSET
	struct FSourceEffectPannerSettings                 Settings;                                                 // 0x0098(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Synthesis.SourceEffectPannerPreset"));
		return ptr;
	}


	void SetSettings(const struct FSourceEffectPannerSettings& InSettings);//Offset:Discovery.exe+0x2159C80
};


// Class Synthesis.SourceEffectPhaserPreset
// 0x0048 (0x00B0 - 0x0068)
class USourceEffectPhaserPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0068(0x0038) MISSED OFFSET
	struct FSourceEffectPhaserSettings                 Settings;                                                 // 0x00A0(0x0010) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Synthesis.SourceEffectPhaserPreset"));
		return ptr;
	}


	void SetSettings(const struct FSourceEffectPhaserSettings& InSettings);//Offset:Discovery.exe+0x215A110
};


// Class Synthesis.SourceEffectRingModulationPreset
// 0x0068 (0x00D0 - 0x0068)
class USourceEffectRingModulationPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0068(0x0048) MISSED OFFSET
	struct FSourceEffectRingModulationSettings         Settings;                                                 // 0x00B0(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Synthesis.SourceEffectRingModulationPreset"));
		return ptr;
	}


	void SetSettings(const struct FSourceEffectRingModulationSettings& InSettings);//Offset:Discovery.exe+0x215A5E0
};


// Class Synthesis.SourceEffectSimpleDelayPreset
// 0x0058 (0x00C0 - 0x0068)
class USourceEffectSimpleDelayPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0068(0x0040) MISSED OFFSET
	struct FSourceEffectSimpleDelaySettings            Settings;                                                 // 0x00A8(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Synthesis.SourceEffectSimpleDelayPreset"));
		return ptr;
	}


	void SetSettings(const struct FSourceEffectSimpleDelaySettings& InSettings);//Offset:Discovery.exe+0x215AA50
};


// Class Synthesis.SourceEffectStereoDelayPreset
// 0x0070 (0x00D8 - 0x0068)
class USourceEffectStereoDelayPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData00[0x4C];                                      // 0x0068(0x004C) MISSED OFFSET
	struct FSourceEffectStereoDelaySettings            Settings;                                                 // 0x00B4(0x0024) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Synthesis.SourceEffectStereoDelayPreset"));
		return ptr;
	}


	void SetSettings(const struct FSourceEffectStereoDelaySettings& InSettings);//Offset:Discovery.exe+0x215AF90
};


// Class Synthesis.SourceEffectWaveShaperPreset
// 0x0038 (0x00A0 - 0x0068)
class USourceEffectWaveShaperPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0068(0x0030) MISSED OFFSET
	struct FSourceEffectWaveShaperSettings             Settings;                                                 // 0x0098(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Synthesis.SourceEffectWaveShaperPreset"));
		return ptr;
	}


	void SetSettings(const struct FSourceEffectWaveShaperSettings& InSettings);//Offset:Discovery.exe+0x2159C80
};


// Class Synthesis.AudioImpulseResponse
// 0x0030 (0x0058 - 0x0028)
class UAudioImpulseResponse : public UObject
{
public:
	TArray<float>                                      ImpulseResponse;                                          // 0x0028(0x0010) (ZeroConstructor)
	int                                                NumChannels;                                              // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SampleRate;                                               // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              NormalizationVolumeDb;                                    // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bTrueStereo;                                              // 0x0044(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	TArray<float>                                      IRData;                                                   // 0x0048(0x0010) (ZeroConstructor, Deprecated)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Synthesis.AudioImpulseResponse"));
		return ptr;
	}

};


// Class Synthesis.SubmixEffectConvolutionReverbPreset
// 0x0088 (0x00F0 - 0x0068)
class USubmixEffectConvolutionReverbPreset : public USoundEffectSubmixPreset
{
public:
	class UAudioImpulseResponse*                       ImpulseResponse;                                          // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSubmixEffectConvolutionReverbSettings      Settings;                                                 // 0x0070(0x0028) (Edit, BlueprintVisible)
	enum class ESubmixEffectConvolutionReverbBlockSize BlockSize;                                                // 0x0098(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableHardwareAcceleration;                              // 0x0099(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x56];                                      // 0x009A(0x0056) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Synthesis.SubmixEffectConvolutionReverbPreset"));
		return ptr;
	}


	void SetSettings(const struct FSubmixEffectConvolutionReverbSettings& InSettings);//Offset:Discovery.exe+0x215B960
	void SetImpulseResponse(class UAudioImpulseResponse* InImpulseResponse);//Offset:Discovery.exe+0x215B8C0
};


// Class Synthesis.SubmixEffectDelayStatics
// 0x0000 (0x0028 - 0x0028)
class USubmixEffectDelayStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Synthesis.SubmixEffectDelayStatics"));
		return ptr;
	}


	struct FSubmixEffectDelaySettings STATIC_SetMaximumDelayLength(float MaximumDelayLength, struct FSubmixEffectDelaySettings* DelaySettings);//Offset:Discovery.exe+0x215C080
	struct FSubmixEffectDelaySettings STATIC_SetInterpolationTime(float InterpolationTime, struct FSubmixEffectDelaySettings* DelaySettings);//Offset:Discovery.exe+0x215BF40
	struct FSubmixEffectDelaySettings STATIC_SetDelayLength(float DelayLength, struct FSubmixEffectDelaySettings* DelaySettings);//Offset:Discovery.exe+0x215BDD0
};


// Class Synthesis.SubmixEffectDelayPreset
// 0x0050 (0x00B8 - 0x0068)
class USubmixEffectDelayPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x34];                                      // 0x0068(0x0034) MISSED OFFSET
	struct FSubmixEffectDelaySettings                  Settings;                                                 // 0x009C(0x000C) (Edit, BlueprintVisible)
	struct FSubmixEffectDelaySettings                  DynamicSettings;                                          // 0x00A8(0x000C) (Transient)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Synthesis.SubmixEffectDelayPreset"));
		return ptr;
	}


	void SetSettings(const struct FSubmixEffectDelaySettings& InSettings);//Offset:Discovery.exe+0x215C7A0
	void SetInterpolationTime(float Time);//Offset:Discovery.exe+0x215C620
	void SetDelay(float Length);//Offset:Discovery.exe+0x215C580
	void SetDefaultSettings(const struct FSubmixEffectDelaySettings& InSettings);//Offset:Discovery.exe+0x215C6F0
	float GetMaxDelayInMilliseconds();//Offset:Discovery.exe+0x215C6C0
};


// Class Synthesis.SubmixEffectFilterPreset
// 0x0040 (0x00A8 - 0x0068)
class USubmixEffectFilterPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x34];                                      // 0x0068(0x0034) MISSED OFFSET
	struct FSubmixEffectFilterSettings                 Settings;                                                 // 0x009C(0x000C) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Synthesis.SubmixEffectFilterPreset"));
		return ptr;
	}


	void SetSettings(const struct FSubmixEffectFilterSettings& InSettings);//Offset:Discovery.exe+0x215D260
	void SetFilterType(enum class ESubmixFilterType InType);//Offset:Discovery.exe+0x215D1D0
	void SetFilterQMod(float InQ);//Offset:Discovery.exe+0x215CEC0
	void SetFilterQ(float InQ);//Offset:Discovery.exe+0x215CF60
	void SetFilterCutoffFrequencyMod(float InFrequency);//Offset:Discovery.exe+0x215D000
	void SetFilterCutoffFrequency(float InFrequency);//Offset:Discovery.exe+0x215D0A0
	void SetFilterAlgorithm(enum class ESubmixFilterAlgorithm InAlgorithm);//Offset:Discovery.exe+0x215D140
};


// Class Synthesis.SubmixEffectFlexiverbPreset
// 0x0048 (0x00B0 - 0x0068)
class USubmixEffectFlexiverbPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0068(0x0038) MISSED OFFSET
	struct FSubmixEffectFlexiverbSettings              Settings;                                                 // 0x00A0(0x0010) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Synthesis.SubmixEffectFlexiverbPreset"));
		return ptr;
	}


	void SetSettings(const struct FSubmixEffectFlexiverbSettings& InSettings);//Offset:Discovery.exe+0x215D9B0
};


// Class Synthesis.SubmixEffectMultibandCompressorPreset
// 0x0098 (0x0100 - 0x0068)
class USubmixEffectMultibandCompressorPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0068(0x0060) MISSED OFFSET
	struct FSubmixEffectMultibandCompressorSettings    Settings;                                                 // 0x00C8(0x0038) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Synthesis.SubmixEffectMultibandCompressorPreset"));
		return ptr;
	}


	void SetSettings(const struct FSubmixEffectMultibandCompressorSettings& InSettings);//Offset:Discovery.exe+0x215DEA0
	void SetExternalSubmix(class USoundSubmix* Submix);//Offset:Discovery.exe+0x215DF80
	void SetAudioBus(class UAudioBus* AudioBus);//Offset:Discovery.exe+0x215E020
	void ResetKey();//Offset:Discovery.exe+0x215E0C0
};


// Class Synthesis.SubmixEffectStereoDelayPreset
// 0x0070 (0x00D8 - 0x0068)
class USubmixEffectStereoDelayPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x4C];                                      // 0x0068(0x004C) MISSED OFFSET
	struct FSubmixEffectStereoDelaySettings            Settings;                                                 // 0x00B4(0x0024) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Synthesis.SubmixEffectStereoDelayPreset"));
		return ptr;
	}


	void SetSettings(const struct FSubmixEffectStereoDelaySettings& InSettings);//Offset:Discovery.exe+0x215AF90
};


// Class Synthesis.SubmixEffectTapDelayPreset
// 0x0070 (0x00D8 - 0x0068)
class USubmixEffectTapDelayPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0068(0x0040) MISSED OFFSET
	struct FSubmixEffectTapDelaySettings               Settings;                                                 // 0x00A8(0x0018) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x18];                                      // 0x00C0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Synthesis.SubmixEffectTapDelayPreset"));
		return ptr;
	}


	void SetTap(int TapId, const struct FTapDelayInfo& TapInfo);//Offset:Discovery.exe+0x2160950
	void SetSettings(const struct FSubmixEffectTapDelaySettings& InSettings);//Offset:Discovery.exe+0x2160B90
	void SetInterpolationTime(float Time);//Offset:Discovery.exe+0x21606E0
	void RemoveTap(int TapId);//Offset:Discovery.exe+0x2160A40
	void GetTapIds(TArray<int>* TapIds);//Offset:Discovery.exe+0x21607B0
	void GetTap(int TapId, struct FTapDelayInfo* TapInfo);//Offset:Discovery.exe+0x2160860
	float GetMaxDelayInMilliseconds();//Offset:Discovery.exe+0x2160780
	void AddTap(int* TapId);//Offset:Discovery.exe+0x2160AE0
};


// Class Synthesis.Synth2DSlider
// 0x04E8 (0x0610 - 0x0128)
class USynth2DSlider : public UWidget
{
public:
	float                                              ValueX;                                                   // 0x0128(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ValueY;                                                   // 0x012C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             ValueXDelegate;                                           // 0x0130(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             ValueYDelegate;                                           // 0x0140(0x0010) (ZeroConstructor, InstancedReference)
	struct FSynth2DSliderStyle                         WidgetStyle;                                              // 0x0150(0x0430) (Edit, BlueprintVisible)
	struct FLinearColor                                SliderHandleColor;                                        // 0x0580(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IndentHandle;                                             // 0x0590(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               Locked;                                                   // 0x0591(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0592(0x0002) MISSED OFFSET
	float                                              StepSize;                                                 // 0x0594(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsFocusable;                                              // 0x0598(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0599(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnMouseCaptureBegin;                                      // 0x05A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMouseCaptureEnd;                                        // 0x05B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnControllerCaptureBegin;                                 // 0x05C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnControllerCaptureEnd;                                   // 0x05D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnValueChangedX;                                          // 0x05E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnValueChangedY;                                          // 0x05F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0600(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Synthesis.Synth2DSlider"));
		return ptr;
	}


	void SetValue(const struct FVector2D& InValue);//Offset:Discovery.exe+0x2161670
	void SetStepSize(float InValue);//Offset:Discovery.exe+0x2161490
	void SetSliderHandleColor(const struct FLinearColor& InValue);//Offset:Discovery.exe+0x21613F0
	void SetLocked(bool InValue);//Offset:Discovery.exe+0x2161530
	void SetIndentHandle(bool InValue);//Offset:Discovery.exe+0x21615D0
	struct FVector2D GetValue();//Offset:Discovery.exe+0x2161710
};


// Class Synthesis.GranularSynth
// 0x03E0 (0x0BA0 - 0x07C0)
class UGranularSynth : public USynthComponent
{
public:
	class USoundWave*                                  GranulatedSoundWave;                                      // 0x07C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3D8];                                     // 0x07C8(0x03D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Synthesis.GranularSynth"));
		return ptr;
	}


	void SetSustainGain(float SustainGain);//Offset:Discovery.exe+0x2162990
	void SetSoundWave(class USoundWave* InSoundWave);//Offset:Discovery.exe+0x2162AD0
	void SetScrubMode(bool bScrubMode);//Offset:Discovery.exe+0x2161FD0
	void SetReleaseTimeMsec(float ReleaseTimeMsec);//Offset:Discovery.exe+0x21628F0
	void SetPlayheadTime(float InPositionSec, float LerpTimeSec, enum class EGranularSynthSeekType SeekType);//Offset:Discovery.exe+0x2161EA0
	void SetPlaybackSpeed(float InPlayheadRate);//Offset:Discovery.exe+0x2162460
	void SetGrainVolume(float BaseVolume, const struct FVector2D& VolumeRange);//Offset:Discovery.exe+0x2162280
	void SetGrainsPerSecond(float InGrainsPerSecond);//Offset:Discovery.exe+0x2162630
	void SetGrainProbability(float InGrainProbability);//Offset:Discovery.exe+0x2162590
	void SetGrainPitch(float BasePitch, const struct FVector2D& PitchRange);//Offset:Discovery.exe+0x2162370
	void SetGrainPan(float BasePan, const struct FVector2D& PanRange);//Offset:Discovery.exe+0x2162190
	void SetGrainEnvelopeType(enum class EGranularSynthEnvelopeType EnvelopeType);//Offset:Discovery.exe+0x2162500
	void SetGrainDuration(float BaseDurationMsec, const struct FVector2D& DurationRange);//Offset:Discovery.exe+0x21620A0
	void SetDecayTime(float DecayTimeMsec);//Offset:Discovery.exe+0x2162A30
	void SetAttackTime(float AttackTimeMsec);//Offset:Discovery.exe+0x2162A30
	void NoteOn(float Note, int Velocity, float Duration);//Offset:Discovery.exe+0x21627C0
	void NoteOff(float Note, bool bKill);//Offset:Discovery.exe+0x21626D0
	bool IsLoaded();//Offset:Discovery.exe+0x2161E40
	float GetSampleDuration();//Offset:Discovery.exe+0x2162070
	float GetCurrentPlayheadTime();//Offset:Discovery.exe+0x2161E70
};


// Class Synthesis.MonoWaveTableSynthPreset
// 0x0148 (0x0170 - 0x0028)
class UMonoWaveTableSynthPreset : public UObject
{
public:
	struct FString                                     PresetName;                                               // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      bLockKeyframesToGridBool : 1;                             // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	int                                                LockKeyframesToGrid;                                      // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                WaveTableResolution;                                      // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	TArray<struct FRuntimeFloatCurve>                  WaveTable;                                                // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      bNormalizeWaveTables : 1;                                 // 0x0058(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData02[0x117];                                     // 0x0059(0x0117) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Synthesis.MonoWaveTableSynthPreset"));
		return ptr;
	}

};


// Class Synthesis.SynthComponentMonoWaveTable
// 0x0740 (0x0F00 - 0x07C0)
class USynthComponentMonoWaveTable : public USynthComponent
{
public:
	struct FScriptMulticastDelegate                    OnTableAltered;                                           // 0x07C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNumTablesChanged;                                       // 0x07D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UMonoWaveTableSynthPreset*                   CurrentPreset;                                            // 0x07E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x718];                                     // 0x07E8(0x0718) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Synthesis.SynthComponentMonoWaveTable"));
		return ptr;
	}


	void SetWaveTablePosition(float InPosition);//Offset:Discovery.exe+0x2165090
	void SetSustainPedalState(bool InSustainPedalState);//Offset:Discovery.exe+0x2165310
	void SetPosLfoType(enum class ESynthLFOType InLfoType);//Offset:Discovery.exe+0x2164E00
	void SetPosLfoFrequency(float InLfoFrequency);//Offset:Discovery.exe+0x2164F30
	void SetPosLfoDepth(float InLfoDepth);//Offset:Discovery.exe+0x2164E90
	void SetPositionEnvelopeSustainGain(float InSustainGain);//Offset:Discovery.exe+0x2164180
	void SetPositionEnvelopeReleaseTime(float InReleaseTimeMsec);//Offset:Discovery.exe+0x21640E0
	void SetPositionEnvelopeInvert(bool bInInvert);//Offset:Discovery.exe+0x2164040
	void SetPositionEnvelopeDepth(float InDepth);//Offset:Discovery.exe+0x2163F00
	void SetPositionEnvelopeDecayTime(float InDecayTimeMsec);//Offset:Discovery.exe+0x2164220
	void SetPositionEnvelopeBiasInvert(bool bInBiasInvert);//Offset:Discovery.exe+0x2163FA0
	void SetPositionEnvelopeBiasDepth(float InDepth);//Offset:Discovery.exe+0x2163E60
	void SetPositionEnvelopeAttackTime(float InAttackTimeMsec);//Offset:Discovery.exe+0x21642C0
	void SetLowPassFilterResonance(float InNewQ);//Offset:Discovery.exe+0x2164D60
	void SetFrequencyWithMidiNote(float InMidiNote);//Offset:Discovery.exe+0x2165130
	void SetFrequencyPitchBend(float FrequencyOffsetCents);//Offset:Discovery.exe+0x21651D0
	void SetFrequency(float FrequencyHz);//Offset:Discovery.exe+0x2165270
	void SetFilterEnvelopeSustainGain(float InSustainGain);//Offset:Discovery.exe+0x2164680
	void SetFilterEnvelopeReleaseTime(float InReleaseTimeMsec);//Offset:Discovery.exe+0x21645E0
	void SetFilterEnvelopenDecayTime(float InDecayTimeMsec);//Offset:Discovery.exe+0x2164720
	void SetFilterEnvelopeInvert(bool bInInvert);//Offset:Discovery.exe+0x2164540
	void SetFilterEnvelopeDepth(float InDepth);//Offset:Discovery.exe+0x2164400
	void SetFilterEnvelopeBiasInvert(bool bInBiasInvert);//Offset:Discovery.exe+0x21644A0
	void SetFilterEnvelopeBiasDepth(float InDepth);//Offset:Discovery.exe+0x2164360
	void SetFilterEnvelopeAttackTime(float InAttackTimeMsec);//Offset:Discovery.exe+0x21647C0
	bool SetCurveValue(int TableIndex, int KeyframeIndex, float NewValue);//Offset:Discovery.exe+0x2163CE0
	bool SetCurveTangent(int TableIndex, float InNewTangent);//Offset:Discovery.exe+0x2163B00
	bool SetCurveInterpolationType(enum class ECurveInterpolationType InterpolationType, int TableIndex);//Offset:Discovery.exe+0x2163BF0
	void SetAmpEnvelopeSustainGain(float InSustainGain);//Offset:Discovery.exe+0x2164B80
	void SetAmpEnvelopeReleaseTime(float InReleaseTimeMsec);//Offset:Discovery.exe+0x2164AE0
	void SetAmpEnvelopeInvert(bool bInInvert);//Offset:Discovery.exe+0x2164A40
	void SetAmpEnvelopeDepth(float InDepth);//Offset:Discovery.exe+0x2164900
	void SetAmpEnvelopeDecayTime(float InDecayTimeMsec);//Offset:Discovery.exe+0x2164C20
	void SetAmpEnvelopeBiasInvert(bool bInBiasInvert);//Offset:Discovery.exe+0x21649A0
	void SetAmpEnvelopeBiasDepth(float InDepth);//Offset:Discovery.exe+0x2164860
	void SetAmpEnvelopeAttackTime(float InAttackTimeMsec);//Offset:Discovery.exe+0x2164CC0
	void RefreshWaveTable(int Index);//Offset:Discovery.exe+0x2164FF0
	void RefreshAllWaveTables();//Offset:Discovery.exe+0x2164FD0
	void NoteOn(float InMidiNote, float InVelocity);//Offset:Discovery.exe+0x2165450
	void NoteOff(float InMidiNote);//Offset:Discovery.exe+0x21653B0
	int GetNumTableEntries();//Offset:Discovery.exe+0x2165530
	int GetMaxTableIndex();//Offset:Discovery.exe+0x2163E10
	TArray<float> GetKeyFrameValuesForTable(float TableIndex);//Offset:Discovery.exe+0x2163980
	float GetCurveTangent(int TableIndex);//Offset:Discovery.exe+0x2163A60
};


// Class Synthesis.SynthComponentToneGenerator
// 0x00F0 (0x08B0 - 0x07C0)
class USynthComponentToneGenerator : public USynthComponent
{
public:
	float                                              Frequency;                                                // 0x07C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Volume;                                                   // 0x07C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRuntimeFloatCurve                          DistanceAttenuationCurve;                                 // 0x07C8(0x0088) (Edit, BlueprintVisible)
	struct FVector2D                                   DistanceRange;                                            // 0x0850(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AttenuationDbAtMaxRange;                                  // 0x0860(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4C];                                      // 0x0864(0x004C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Synthesis.SynthComponentToneGenerator"));
		return ptr;
	}


	void SetVolume(float InVolume);//Offset:Discovery.exe+0x2167820
	void SetFrequency(float InFrequency);//Offset:Discovery.exe+0x21678C0
};


// Class Synthesis.SynthSamplePlayer
// 0x0130 (0x08F0 - 0x07C0)
class USynthSamplePlayer : public USynthComponent
{
public:
	class USoundWave*                                  SoundWave;                                                // 0x07C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnSampleLoaded;                                           // 0x07C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSamplePlaybackProgress;                                 // 0x07D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x108];                                     // 0x07E8(0x0108) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Synthesis.SynthSamplePlayer"));
		return ptr;
	}


	void SetSoundWave(class USoundWave* InSoundWave);//Offset:Discovery.exe+0x2168180
	void SetScrubTimeWidth(float InScrubTimeWidthSec);//Offset:Discovery.exe+0x2167E30
	void SetScrubMode(bool bScrubMode);//Offset:Discovery.exe+0x2167ED0
	void SetPitch(float InPitch, float TimeSec);//Offset:Discovery.exe+0x21680A0
	void SeekToTime(float TimeSec, enum class ESamplePlayerSeekType SeekType, bool bWrap);//Offset:Discovery.exe+0x2167F70
	bool IsLoaded();//Offset:Discovery.exe+0x2167D70
	float GetSampleDuration();//Offset:Discovery.exe+0x2167E00
	float GetCurrentPlaybackProgressTime();//Offset:Discovery.exe+0x2167DD0
	float GetCurrentPlaybackProgressPercent();//Offset:Discovery.exe+0x2167DA0
};


// Class Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class USynthesisUtilitiesBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary"));
		return ptr;
	}


	float STATIC_GetLogFrequency(float InLinearValue, float InDomainMin, float InDomainMax, float InRangeMin, float InRangeMax);//Offset:Discovery.exe+0x2168B90
	float STATIC_GetLinearFrequency(float InLogFrequencyValue, float InDomainMin, float InDomainMax, float InRangeMin, float InRangeMax);//Offset:Discovery.exe+0x21689C0
};


// Class Synthesis.SynthKnob
// 0x0428 (0x0550 - 0x0128)
class USynthKnob : public UWidget
{
public:
	float                                              Value;                                                    // 0x0128(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StepSize;                                                 // 0x012C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MouseSpeed;                                               // 0x0130(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MouseFineTuneSpeed;                                       // 0x0134(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ShowTooltipInfo : 1;                                      // 0x0138(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0139(0x0007) MISSED OFFSET
	struct FText                                       ParameterName;                                            // 0x0140(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       ParameterUnits;                                           // 0x0158(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FScriptDelegate                             ValueDelegate;                                            // 0x0170(0x0010) (ZeroConstructor, InstancedReference)
	struct FSynthKnobStyle                             WidgetStyle;                                              // 0x0180(0x0360) (Edit, BlueprintVisible)
	bool                                               Locked;                                                   // 0x04E0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsFocusable;                                              // 0x04E1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x04E2(0x0006) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnMouseCaptureBegin;                                      // 0x04E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMouseCaptureEnd;                                        // 0x04F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnControllerCaptureBegin;                                 // 0x0508(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnControllerCaptureEnd;                                   // 0x0518(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnValueChanged;                                           // 0x0528(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0538(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Synthesis.SynthKnob"));
		return ptr;
	}


	void SetValue(float InValue);//Offset:Discovery.exe+0x21691A0
	void SetStepSize(float InValue);//Offset:Discovery.exe+0x2169060
	void SetLocked(bool InValue);//Offset:Discovery.exe+0x2169100
	float GetValue();//Offset:Discovery.exe+0x2169240
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
