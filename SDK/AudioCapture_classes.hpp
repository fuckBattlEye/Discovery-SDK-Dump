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

// Class AudioCapture.AudioCapture
// 0x0008 (0x00B0 - 0x00A8)
class UAudioCapture : public UAudioGenerator
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AudioCapture.AudioCapture"));
		return ptr;
	}


	void StopCapturingAudio();//Offset:Discovery.exe+0x2E5E740
	void StartCapturingAudio();//Offset:Discovery.exe+0x2E5E760
	bool IsCapturingAudio();//Offset:Discovery.exe+0x2E5E710
	bool GetAudioCaptureDeviceInfo(struct FAudioCaptureDeviceInfo* OutInfo);//Offset:Discovery.exe+0x2E5E780
};


// Class AudioCapture.AudioCaptureFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UAudioCaptureFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AudioCapture.AudioCaptureFunctionLibrary"));
		return ptr;
	}


	class UAudioCapture* STATIC_CreateAudioCapture();//Offset:Discovery.exe+0x2E5EC50
};


// Class AudioCapture.AudioCaptureBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UAudioCaptureBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AudioCapture.AudioCaptureBlueprintLibrary"));
		return ptr;
	}


	void STATIC_GetAvailableAudioInputDevices(class UObject* WorldContextObject, const struct FScriptDelegate& OnObtainDevicesEvent);//Offset:Discovery.exe+0x2E5EFD0
	struct FString STATIC_Conv_AudioInputDeviceInfoToString(const struct FAudioInputDeviceInfo& Info);//Offset:Discovery.exe+0x2E5F0D0
};


// Class AudioCapture.AudioCaptureComponent
// 0x00C0 (0x0880 - 0x07C0)
class UAudioCaptureComponent : public USynthComponent
{
public:
	int                                                JitterLatencyFrames;                                      // 0x07C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xBC];                                      // 0x07C4(0x00BC) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AudioCapture.AudioCaptureComponent"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
