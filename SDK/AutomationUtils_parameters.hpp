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

// Function AutomationUtils.AutomationUtilsBlueprintLibrary.TakeGameplayAutomationScreenshot
struct UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot_Params
{
	struct FString                                     ScreenshotName;                                           // (ConstParm, Parm, ZeroConstructor)
	float                                              MaxGlobalError;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxLocalError;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     MapNameOverride;                                          // (Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
