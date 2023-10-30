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

// Function EmbarkPerfTesting.EmbarkPerfTestingBlueprintLibrary.CaptureScreenshotAsync
struct UEmbarkPerfTestingBlueprintLibrary_CaptureScreenshotAsync_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
};

// Function EmbarkPerfTesting.EmbarkPerfTestingBlueprintLibrary.CapturePerformanceSnapshot
struct UEmbarkPerfTestingBlueprintLibrary_CapturePerformanceSnapshot_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
