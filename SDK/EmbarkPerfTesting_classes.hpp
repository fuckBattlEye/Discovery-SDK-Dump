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

// Class EmbarkPerfTesting.EmbarkPerfTestingBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UEmbarkPerfTestingBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkPerfTesting.EmbarkPerfTestingBlueprintLibrary"));
		return ptr;
	}


	void STATIC_CaptureScreenshotAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, const struct FString& Filename);//Offset:Discovery.exe+0x1C92C70
	void STATIC_CapturePerformanceSnapshot(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, float Duration, const struct FString& Name);//Offset:Discovery.exe+0x1C92E20
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
