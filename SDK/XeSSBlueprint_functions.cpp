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

// Function XeSSBlueprint.XeSSBlueprintLibrary.SetXeSSQualityMode
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EXeSSQualityMode    QualityMode                    (Parm, ZeroConstructor, IsPlainOldData)

void UXeSSBlueprintLibrary::STATIC_SetXeSSQualityMode(enum class EXeSSQualityMode QualityMode)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function XeSSBlueprint.XeSSBlueprintLibrary.SetXeSSQualityMode"));

	UXeSSBlueprintLibrary_SetXeSSQualityMode_Params params;
	params.QualityMode = QualityMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XeSSBlueprint.XeSSBlueprintLibrary.IsXeSSSupported
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UXeSSBlueprintLibrary::STATIC_IsXeSSSupported()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function XeSSBlueprint.XeSSBlueprintLibrary.IsXeSSSupported"));

	UXeSSBlueprintLibrary_IsXeSSSupported_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function XeSSBlueprint.XeSSBlueprintLibrary.GetXeSSQualityModeInformation
// (Final, RequiredAPI, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// enum class EXeSSQualityMode    QualityMode                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          ScreenPercentage               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UXeSSBlueprintLibrary::STATIC_GetXeSSQualityModeInformation(enum class EXeSSQualityMode QualityMode, float* ScreenPercentage)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function XeSSBlueprint.XeSSBlueprintLibrary.GetXeSSQualityModeInformation"));

	UXeSSBlueprintLibrary_GetXeSSQualityModeInformation_Params params;
	params.QualityMode = QualityMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ScreenPercentage != nullptr)
		*ScreenPercentage = params.ScreenPercentage;

	return params.ReturnValue;
}


// Function XeSSBlueprint.XeSSBlueprintLibrary.GetXeSSQualityMode
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EXeSSQualityMode    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

enum class EXeSSQualityMode UXeSSBlueprintLibrary::STATIC_GetXeSSQualityMode()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function XeSSBlueprint.XeSSBlueprintLibrary.GetXeSSQualityMode"));

	UXeSSBlueprintLibrary_GetXeSSQualityMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function XeSSBlueprint.XeSSBlueprintLibrary.GetSupportedXeSSQualityModes
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<enum class EXeSSQualityMode> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<enum class EXeSSQualityMode> UXeSSBlueprintLibrary::STATIC_GetSupportedXeSSQualityModes()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function XeSSBlueprint.XeSSBlueprintLibrary.GetSupportedXeSSQualityModes"));

	UXeSSBlueprintLibrary_GetSupportedXeSSQualityModes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function XeSSBlueprint.XeSSBlueprintLibrary.GetDefaultXeSSQualityMode
// (Final, RequiredAPI, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FIntPoint               ScreenResolution               (Parm, ZeroConstructor, IsPlainOldData)
// enum class EXeSSQualityMode    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

enum class EXeSSQualityMode UXeSSBlueprintLibrary::STATIC_GetDefaultXeSSQualityMode(const struct FIntPoint& ScreenResolution)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function XeSSBlueprint.XeSSBlueprintLibrary.GetDefaultXeSSQualityMode"));

	UXeSSBlueprintLibrary_GetDefaultXeSSQualityMode_Params params;
	params.ScreenResolution = ScreenResolution;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
