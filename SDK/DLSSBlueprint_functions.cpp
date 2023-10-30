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

// Function DLSSBlueprint.DLSSLibrary.SetDLSSSharpness
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          Sharpness                      (Parm, ZeroConstructor, IsPlainOldData)

void UDLSSLibrary::STATIC_SetDLSSSharpness(float Sharpness)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DLSSBlueprint.DLSSLibrary.SetDLSSSharpness"));

	UDLSSLibrary_SetDLSSSharpness_Params params;
	params.Sharpness = Sharpness;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLSSBlueprint.DLSSLibrary.SetDLSSMode
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EUDLSSMode          DLSSMode                       (Parm, ZeroConstructor, IsPlainOldData)

void UDLSSLibrary::STATIC_SetDLSSMode(enum class EUDLSSMode DLSSMode)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DLSSBlueprint.DLSSLibrary.SetDLSSMode"));

	UDLSSLibrary_SetDLSSMode_Params params;
	params.DLSSMode = DLSSMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLSSBlueprint.DLSSLibrary.QueryDLSSSupport
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUDLSSSupport       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

enum class EUDLSSSupport UDLSSLibrary::STATIC_QueryDLSSSupport()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DLSSBlueprint.DLSSLibrary.QueryDLSSSupport"));

	UDLSSLibrary_QueryDLSSSupport_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DLSSBlueprint.DLSSLibrary.IsDLSSSupported
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDLSSLibrary::STATIC_IsDLSSSupported()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DLSSBlueprint.DLSSLibrary.IsDLSSSupported"));

	UDLSSLibrary_IsDLSSSupported_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DLSSBlueprint.DLSSLibrary.IsDLSSModeSupported
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUDLSSMode          DLSSMode                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDLSSLibrary::STATIC_IsDLSSModeSupported(enum class EUDLSSMode DLSSMode)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DLSSBlueprint.DLSSLibrary.IsDLSSModeSupported"));

	UDLSSLibrary_IsDLSSModeSupported_Params params;
	params.DLSSMode = DLSSMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DLSSBlueprint.DLSSLibrary.IsDLAAEnabled
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDLSSLibrary::STATIC_IsDLAAEnabled()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DLSSBlueprint.DLSSLibrary.IsDLAAEnabled"));

	UDLSSLibrary_IsDLAAEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DLSSBlueprint.DLSSLibrary.GetSupportedDLSSModes
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<enum class EUDLSSMode>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<enum class EUDLSSMode> UDLSSLibrary::STATIC_GetSupportedDLSSModes()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DLSSBlueprint.DLSSLibrary.GetSupportedDLSSModes"));

	UDLSSLibrary_GetSupportedDLSSModes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DLSSBlueprint.DLSSLibrary.GetDLSSSharpness
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDLSSLibrary::STATIC_GetDLSSSharpness()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DLSSBlueprint.DLSSLibrary.GetDLSSSharpness"));

	UDLSSLibrary_GetDLSSSharpness_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DLSSBlueprint.DLSSLibrary.GetDLSSScreenPercentageRange
// (Final, RequiredAPI, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          MinScreenPercentage            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          MaxScreenPercentage            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDLSSLibrary::STATIC_GetDLSSScreenPercentageRange(float* MinScreenPercentage, float* MaxScreenPercentage)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DLSSBlueprint.DLSSLibrary.GetDLSSScreenPercentageRange"));

	UDLSSLibrary_GetDLSSScreenPercentageRange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MinScreenPercentage != nullptr)
		*MinScreenPercentage = params.MinScreenPercentage;
	if (MaxScreenPercentage != nullptr)
		*MaxScreenPercentage = params.MaxScreenPercentage;
}


// Function DLSSBlueprint.DLSSLibrary.GetDLSSModeInformation
// (Final, RequiredAPI, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUDLSSMode          DLSSMode                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ScreenResolution               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsSupported                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OptimalScreenPercentage        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bIsFixedScreenPercentage       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          MinScreenPercentage            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          MaxScreenPercentage            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OptimalSharpness               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDLSSLibrary::STATIC_GetDLSSModeInformation(enum class EUDLSSMode DLSSMode, const struct FVector2D& ScreenResolution, bool* bIsSupported, float* OptimalScreenPercentage, bool* bIsFixedScreenPercentage, float* MinScreenPercentage, float* MaxScreenPercentage, float* OptimalSharpness)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DLSSBlueprint.DLSSLibrary.GetDLSSModeInformation"));

	UDLSSLibrary_GetDLSSModeInformation_Params params;
	params.DLSSMode = DLSSMode;
	params.ScreenResolution = ScreenResolution;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsSupported != nullptr)
		*bIsSupported = params.bIsSupported;
	if (OptimalScreenPercentage != nullptr)
		*OptimalScreenPercentage = params.OptimalScreenPercentage;
	if (bIsFixedScreenPercentage != nullptr)
		*bIsFixedScreenPercentage = params.bIsFixedScreenPercentage;
	if (MinScreenPercentage != nullptr)
		*MinScreenPercentage = params.MinScreenPercentage;
	if (MaxScreenPercentage != nullptr)
		*MaxScreenPercentage = params.MaxScreenPercentage;
	if (OptimalSharpness != nullptr)
		*OptimalSharpness = params.OptimalSharpness;
}


// Function DLSSBlueprint.DLSSLibrary.GetDLSSMode
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUDLSSMode          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

enum class EUDLSSMode UDLSSLibrary::STATIC_GetDLSSMode()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DLSSBlueprint.DLSSLibrary.GetDLSSMode"));

	UDLSSLibrary_GetDLSSMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DLSSBlueprint.DLSSLibrary.GetDLSSMinimumDriverVersion
// (Final, RequiredAPI, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            MinDriverVersionMajor          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            MinDriverVersionMinor          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDLSSLibrary::STATIC_GetDLSSMinimumDriverVersion(int* MinDriverVersionMajor, int* MinDriverVersionMinor)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DLSSBlueprint.DLSSLibrary.GetDLSSMinimumDriverVersion"));

	UDLSSLibrary_GetDLSSMinimumDriverVersion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MinDriverVersionMajor != nullptr)
		*MinDriverVersionMajor = params.MinDriverVersionMajor;
	if (MinDriverVersionMinor != nullptr)
		*MinDriverVersionMinor = params.MinDriverVersionMinor;
}


// Function DLSSBlueprint.DLSSLibrary.GetDefaultDLSSMode
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUDLSSMode          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

enum class EUDLSSMode UDLSSLibrary::STATIC_GetDefaultDLSSMode()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DLSSBlueprint.DLSSLibrary.GetDefaultDLSSMode"));

	UDLSSLibrary_GetDefaultDLSSMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DLSSBlueprint.DLSSLibrary.EnableDLAA
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UDLSSLibrary::STATIC_EnableDLAA(bool bEnabled)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DLSSBlueprint.DLSSLibrary.EnableDLAA"));

	UDLSSLibrary_EnableDLAA_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
