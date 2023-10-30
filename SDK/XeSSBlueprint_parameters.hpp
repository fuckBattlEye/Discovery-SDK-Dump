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

// Function XeSSBlueprint.XeSSBlueprintLibrary.SetXeSSQualityMode
struct UXeSSBlueprintLibrary_SetXeSSQualityMode_Params
{
	enum class EXeSSQualityMode                        QualityMode;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function XeSSBlueprint.XeSSBlueprintLibrary.IsXeSSSupported
struct UXeSSBlueprintLibrary_IsXeSSSupported_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function XeSSBlueprint.XeSSBlueprintLibrary.GetXeSSQualityModeInformation
struct UXeSSBlueprintLibrary_GetXeSSQualityModeInformation_Params
{
	enum class EXeSSQualityMode                        QualityMode;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ScreenPercentage;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function XeSSBlueprint.XeSSBlueprintLibrary.GetXeSSQualityMode
struct UXeSSBlueprintLibrary_GetXeSSQualityMode_Params
{
	enum class EXeSSQualityMode                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function XeSSBlueprint.XeSSBlueprintLibrary.GetSupportedXeSSQualityModes
struct UXeSSBlueprintLibrary_GetSupportedXeSSQualityModes_Params
{
	TArray<enum class EXeSSQualityMode>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function XeSSBlueprint.XeSSBlueprintLibrary.GetDefaultXeSSQualityMode
struct UXeSSBlueprintLibrary_GetDefaultXeSSQualityMode_Params
{
	struct FIntPoint                                   ScreenResolution;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	enum class EXeSSQualityMode                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
