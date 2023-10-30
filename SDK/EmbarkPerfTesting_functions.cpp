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

// Function EmbarkPerfTesting.EmbarkPerfTestingBlueprintLibrary.CaptureScreenshotAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FLatentActionInfo       LatentInfo                     (Parm)
// struct FString                 Filename                       (Parm, ZeroConstructor)

void UEmbarkPerfTestingBlueprintLibrary::STATIC_CaptureScreenshotAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, const struct FString& Filename)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkPerfTesting.EmbarkPerfTestingBlueprintLibrary.CaptureScreenshotAsync"));

	UEmbarkPerfTestingBlueprintLibrary_CaptureScreenshotAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkPerfTesting.EmbarkPerfTestingBlueprintLibrary.CapturePerformanceSnapshot
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FLatentActionInfo       LatentInfo                     (Parm)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (Parm, ZeroConstructor)

void UEmbarkPerfTestingBlueprintLibrary::STATIC_CapturePerformanceSnapshot(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, float Duration, const struct FString& Name)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkPerfTesting.EmbarkPerfTestingBlueprintLibrary.CapturePerformanceSnapshot"));

	UEmbarkPerfTestingBlueprintLibrary_CapturePerformanceSnapshot_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.Duration = Duration;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
