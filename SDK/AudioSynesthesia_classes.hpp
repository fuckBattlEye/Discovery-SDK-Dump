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

// Class AudioSynesthesia.AudioSynesthesiaSettings
// 0x0000 (0x0028 - 0x0028)
class UAudioSynesthesiaSettings : public UAudioAnalyzerSettings
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AudioSynesthesia.AudioSynesthesiaSettings"));
		return ptr;
	}

};


// Class AudioSynesthesia.AudioSynesthesiaNRTSettings
// 0x0000 (0x0028 - 0x0028)
class UAudioSynesthesiaNRTSettings : public UAudioAnalyzerNRTSettings
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AudioSynesthesia.AudioSynesthesiaNRTSettings"));
		return ptr;
	}

};


// Class AudioSynesthesia.AudioSynesthesiaNRT
// 0x0000 (0x0078 - 0x0078)
class UAudioSynesthesiaNRT : public UAudioAnalyzerNRT
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AudioSynesthesia.AudioSynesthesiaNRT"));
		return ptr;
	}

};


// Class AudioSynesthesia.ConstantQNRTSettings
// 0x0020 (0x0048 - 0x0028)
class UConstantQNRTSettings : public UAudioSynesthesiaNRTSettings
{
public:
	float                                              StartingFrequency;                                        // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumBands;                                                 // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              NumBandsPerOctave;                                        // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AnalysisPeriod;                                           // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bDownmixToMono;                                           // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	enum class EConstantQFFTSizeEnum                   FFTSize;                                                  // 0x0039(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	enum class EFFTWindowType                          WindowType;                                               // 0x003A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	enum class EAudioSpectrumType                      SpectrumType;                                             // 0x003B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BandWidthStretch;                                         // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	enum class EConstantQNormalizationEnum             CQTNormalization;                                         // 0x0040(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	float                                              NoiseFloorDb;                                             // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AudioSynesthesia.ConstantQNRTSettings"));
		return ptr;
	}

};


// Class AudioSynesthesia.ConstantQNRT
// 0x0008 (0x0080 - 0x0078)
class UConstantQNRT : public UAudioSynesthesiaNRT
{
public:
	class UConstantQNRTSettings*                       Settings;                                                 // 0x0078(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AudioSynesthesia.ConstantQNRT"));
		return ptr;
	}


	void GetNormalizedChannelConstantQAtTime(float InSeconds, int InChannel, TArray<float>* OutConstantQ);//Offset:Discovery.exe+0x217A470
	void GetChannelConstantQAtTime(float InSeconds, int InChannel, TArray<float>* OutConstantQ);//Offset:Discovery.exe+0x217A5C0
};


// Class AudioSynesthesia.LoudnessSettings
// 0x0018 (0x0040 - 0x0028)
class ULoudnessSettings : public UAudioSynesthesiaSettings
{
public:
	float                                              AnalysisPeriod;                                           // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinimumFrequency;                                         // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaximumFrequency;                                         // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	enum class ELoudnessCurveTypeEnum                  CurveType;                                                // 0x0034(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	float                                              NoiseFloorDb;                                             // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ExpectedMaxLoudness;                                      // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AudioSynesthesia.LoudnessSettings"));
		return ptr;
	}

};


// Class AudioSynesthesia.LoudnessAnalyzer
// 0x0048 (0x00D8 - 0x0090)
class ULoudnessAnalyzer : public UAudioAnalyzer
{
public:
	class ULoudnessSettings*                           Settings;                                                 // 0x0090(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnOverallLoudnessResults;                                 // 0x0098(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPerChannelLoudnessResults;                              // 0x00A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLatestOverallLoudnessResults;                           // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLatestPerChannelLoudnessResults;                        // 0x00C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AudioSynesthesia.LoudnessAnalyzer"));
		return ptr;
	}

};


// Class AudioSynesthesia.LoudnessNRTSettings
// 0x0018 (0x0040 - 0x0028)
class ULoudnessNRTSettings : public UAudioSynesthesiaNRTSettings
{
public:
	float                                              AnalysisPeriod;                                           // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinimumFrequency;                                         // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaximumFrequency;                                         // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	enum class ELoudnessNRTCurveTypeEnum               CurveType;                                                // 0x0034(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	float                                              NoiseFloorDb;                                             // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AudioSynesthesia.LoudnessNRTSettings"));
		return ptr;
	}

};


// Class AudioSynesthesia.LoudnessNRT
// 0x0008 (0x0080 - 0x0078)
class ULoudnessNRT : public UAudioSynesthesiaNRT
{
public:
	class ULoudnessNRTSettings*                        Settings;                                                 // 0x0078(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AudioSynesthesia.LoudnessNRT"));
		return ptr;
	}


	void GetNormalizedLoudnessAtTime(float InSeconds, float* OutLoudness);//Offset:Discovery.exe+0x217AFD0
	void GetNormalizedChannelLoudnessAtTime(float InSeconds, int InChannel, float* OutLoudness);//Offset:Discovery.exe+0x217AE90
	void GetLoudnessAtTime(float InSeconds, float* OutLoudness);//Offset:Discovery.exe+0x217B200
	void GetChannelLoudnessAtTime(float InSeconds, int InChannel, float* OutLoudness);//Offset:Discovery.exe+0x217B0C0
};


// Class AudioSynesthesia.MeterSettings
// 0x0018 (0x0040 - 0x0028)
class UMeterSettings : public UAudioSynesthesiaSettings
{
public:
	float                                              AnalysisPeriod;                                           // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	enum class EMeterPeakType                          PeakMode;                                                 // 0x002C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	int                                                MeterAttackTime;                                          // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MeterReleaseTime;                                         // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                PeakHoldTime;                                             // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ClippingThreshold;                                        // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AudioSynesthesia.MeterSettings"));
		return ptr;
	}

};


// Class AudioSynesthesia.MeterAnalyzer
// 0x00A8 (0x0138 - 0x0090)
class UMeterAnalyzer : public UAudioAnalyzer
{
public:
	class UMeterSettings*                              Settings;                                                 // 0x0090(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnOverallMeterResults;                                    // 0x0098(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x18];                                      // 0x00A8(0x0018) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPerChannelMeterResults;                                 // 0x00C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x18];                                      // 0x00D0(0x0018) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnLatestOverallMeterResults;                              // 0x00E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x18];                                      // 0x00F8(0x0018) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnLatestPerChannelMeterResults;                           // 0x0110(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0x18];                                      // 0x0120(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AudioSynesthesia.MeterAnalyzer"));
		return ptr;
	}

};


// Class AudioSynesthesia.OnsetNRTSettings
// 0x0018 (0x0040 - 0x0028)
class UOnsetNRTSettings : public UAudioSynesthesiaNRTSettings
{
public:
	bool                                               bDownmixToMono;                                           // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	float                                              GranularityInSeconds;                                     // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Sensitivity;                                              // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinimumFrequency;                                         // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaximumFrequency;                                         // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AudioSynesthesia.OnsetNRTSettings"));
		return ptr;
	}

};


// Class AudioSynesthesia.OnsetNRT
// 0x0008 (0x0080 - 0x0078)
class UOnsetNRT : public UAudioSynesthesiaNRT
{
public:
	class UOnsetNRTSettings*                           Settings;                                                 // 0x0078(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AudioSynesthesia.OnsetNRT"));
		return ptr;
	}


	void GetNormalizedChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int InChannel, TArray<float>* OutOnsetTimestamps, TArray<float>* OutOnsetStrengths);//Offset:Discovery.exe+0x217BAE0
	void GetChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int InChannel, TArray<float>* OutOnsetTimestamps, TArray<float>* OutOnsetStrengths);//Offset:Discovery.exe+0x217BCF0
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
