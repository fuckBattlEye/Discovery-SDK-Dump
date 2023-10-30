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

// Class EmbarkSynthesis.SourceEffectAdaptiveNoisePreset
// 0x0060 (0x00C8 - 0x0068)
class USourceEffectAdaptiveNoisePreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData00[0x44];                                      // 0x0068(0x0044) MISSED OFFSET
	struct FSourceEffectAdaptiveNoiseSettings          Settings;                                                 // 0x00AC(0x001C) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkSynthesis.SourceEffectAdaptiveNoisePreset"));
		return ptr;
	}


	void SetSettings(const struct FSourceEffectAdaptiveNoiseSettings& InSettings);//Offset:Discovery.exe+0x194BFB0
};


// Class EmbarkSynthesis.SourceEffectBounceCombPreset
// 0x0050 (0x00B8 - 0x0068)
class USourceEffectBounceCombPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0068(0x003C) MISSED OFFSET
	struct FSourceEffectBounceCombSettings             Settings;                                                 // 0x00A4(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkSynthesis.SourceEffectBounceCombPreset"));
		return ptr;
	}


	void SetSettings(const struct FSourceEffectBounceCombSettings& InSettings);//Offset:Discovery.exe+0x194C450
};


// Class EmbarkSynthesis.SourceEffectRadioStaticPreset
// 0x01D8 (0x0240 - 0x0068)
class USourceEffectRadioStaticPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData00[0x100];                                     // 0x0068(0x0100) MISSED OFFSET
	struct FSourceEffectRadioStaticSettings            Settings;                                                 // 0x0168(0x00D8) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkSynthesis.SourceEffectRadioStaticPreset"));
		return ptr;
	}


	void SetSettings(const struct FSourceEffectRadioStaticSettings& InSettings);//Offset:Discovery.exe+0x194C890
};


// Class EmbarkSynthesis.SourceEffectSoftDistortionPreset
// 0x0040 (0x00A8 - 0x0068)
class USourceEffectSoftDistortionPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData00[0x34];                                      // 0x0068(0x0034) MISSED OFFSET
	struct FSourceEffectSoftDistortionSettings         Settings;                                                 // 0x009C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkSynthesis.SourceEffectSoftDistortionPreset"));
		return ptr;
	}


	void SetSettings(const struct FSourceEffectSoftDistortionSettings& InSettings);//Offset:Discovery.exe+0x194CD30
};


// Class EmbarkSynthesis.SourceEffectTransientShaperPreset
// 0x0048 (0x00B0 - 0x0068)
class USourceEffectTransientShaperPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0068(0x0038) MISSED OFFSET
	struct FSourceEffectTransientShaperSettings        Settings;                                                 // 0x00A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkSynthesis.SourceEffectTransientShaperPreset"));
		return ptr;
	}


	void SetSettings(const struct FSourceEffectTransientShaperSettings& InSettings);//Offset:Discovery.exe+0x194D160
};


// Class EmbarkSynthesis.SourceEffectTunedResonatorPreset
// 0x0050 (0x00B8 - 0x0068)
class USourceEffectTunedResonatorPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0068(0x003C) MISSED OFFSET
	struct FSourceEffectTunedResonatorSettings         Settings;                                                 // 0x00A4(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkSynthesis.SourceEffectTunedResonatorPreset"));
		return ptr;
	}


	void SetSettings(const struct FSourceEffectTunedResonatorSettings& InSettings);//Offset:Discovery.exe+0x194D590
};


// Class EmbarkSynthesis.SubmixEffectAdaptiveNoisePreset
// 0x0060 (0x00C8 - 0x0068)
class USubmixEffectAdaptiveNoisePreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x44];                                      // 0x0068(0x0044) MISSED OFFSET
	struct FSubmixEffectAdaptiveNoiseSettings          Settings;                                                 // 0x00AC(0x001C) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkSynthesis.SubmixEffectAdaptiveNoisePreset"));
		return ptr;
	}


	void SetSettings(const struct FSubmixEffectAdaptiveNoiseSettings& InSettings);//Offset:Discovery.exe+0x194BFB0
};


// Class EmbarkSynthesis.SubmixEffectMultitapDelayPreset
// 0x0088 (0x00F0 - 0x0068)
class USubmixEffectMultitapDelayPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0068(0x0048) MISSED OFFSET
	struct FSubmixEffectMultitapDelaySettings          Settings;                                                 // 0x00B0(0x0020) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x20];                                      // 0x00D0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkSynthesis.SubmixEffectMultitapDelayPreset"));
		return ptr;
	}


	void SetSettings(const struct FSubmixEffectMultitapDelaySettings& InSettings);//Offset:Discovery.exe+0x194DE60
	int GetMaxTapCount();//Offset:Discovery.exe+0x194DE10
	float GetMaxDelayTime();//Offset:Discovery.exe+0x194DE30
};


// Class EmbarkSynthesis.SubmixEffectSoftDistortionPreset
// 0x0040 (0x00A8 - 0x0068)
class USubmixEffectSoftDistortionPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x34];                                      // 0x0068(0x0034) MISSED OFFSET
	struct FSubmixEffectSoftDistortionSettings         Settings;                                                 // 0x009C(0x000C) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkSynthesis.SubmixEffectSoftDistortionPreset"));
		return ptr;
	}


	void SetSettings(const struct FSubmixEffectSoftDistortionSettings& InSettings);//Offset:Discovery.exe+0x194CD30
};


// Class EmbarkSynthesis.SubmixEffectTransientShaperPreset
// 0x0048 (0x00B0 - 0x0068)
class USubmixEffectTransientShaperPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0068(0x0038) MISSED OFFSET
	struct FSubmixEffectTransientShaperSettings        Settings;                                                 // 0x00A0(0x0010) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkSynthesis.SubmixEffectTransientShaperPreset"));
		return ptr;
	}


	void SetSettings(const struct FSubmixEffectTransientShaperSettings& InSettings);//Offset:Discovery.exe+0x194D160
};


// Class EmbarkSynthesis.SubmixEffectTunedResonatorPreset
// 0x0050 (0x00B8 - 0x0068)
class USubmixEffectTunedResonatorPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0068(0x003C) MISSED OFFSET
	struct FSubmixEffectTunedResonatorSettings         Settings;                                                 // 0x00A4(0x0014) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkSynthesis.SubmixEffectTunedResonatorPreset"));
		return ptr;
	}


	void SetSettings(const struct FSubmixEffectTunedResonatorSettings& InSettings);//Offset:Discovery.exe+0x194D590
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
