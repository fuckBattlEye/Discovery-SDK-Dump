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

// Class AudioAnalyzer.AudioAnalyzerAssetBase
// 0x0000 (0x0028 - 0x0028)
class UAudioAnalyzerAssetBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AudioAnalyzer.AudioAnalyzerAssetBase"));
		return ptr;
	}

};


// Class AudioAnalyzer.AudioAnalyzerSettings
// 0x0000 (0x0028 - 0x0028)
class UAudioAnalyzerSettings : public UAudioAnalyzerAssetBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AudioAnalyzer.AudioAnalyzerSettings"));
		return ptr;
	}

};


// Class AudioAnalyzer.AudioAnalyzerNRTSettings
// 0x0000 (0x0028 - 0x0028)
class UAudioAnalyzerNRTSettings : public UAudioAnalyzerAssetBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AudioAnalyzer.AudioAnalyzerNRTSettings"));
		return ptr;
	}

};


// Class AudioAnalyzer.AudioAnalyzerNRT
// 0x0050 (0x0078 - 0x0028)
class UAudioAnalyzerNRT : public UAudioAnalyzerAssetBase
{
public:
	class USoundWave*                                  Sound;                                                    // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DurationInSeconds;                                        // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x44];                                      // 0x0034(0x0044) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AudioAnalyzer.AudioAnalyzerNRT"));
		return ptr;
	}

};


// Class AudioAnalyzer.AudioAnalyzer
// 0x0068 (0x0090 - 0x0028)
class UAudioAnalyzer : public UObject
{
public:
	class UAudioBus*                                   AudioBus;                                                 // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
	class UAudioAnalyzerSubsystem*                     AudioAnalyzerSubsystem;                                   // 0x0038(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0040(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AudioAnalyzer.AudioAnalyzer"));
		return ptr;
	}


	void StopAnalyzing(class UObject* WorldContextObject);//Offset:Discovery.exe+0x5E03650
	void StartAnalyzing(class UObject* WorldContextObject, class UAudioBus* AudioBusToAnalyze);//Offset:Discovery.exe+0x5E036F0
};


// Class AudioAnalyzer.AudioAnalyzerSubsystem
// 0x0020 (0x0050 - 0x0030)
class UAudioAnalyzerSubsystem : public UEngineSubsystem
{
public:
	TArray<class UAudioAnalyzer*>                      AudioAnalyzers;                                           // 0x0030(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AudioAnalyzer.AudioAnalyzerSubsystem"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
