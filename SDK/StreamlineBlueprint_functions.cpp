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

// Function StreamlineBlueprint.StreamlineLibraryDLSSG.SetDLSSGMode
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EUStreamlineDLSSGMode DLSSGMode                      (Parm, ZeroConstructor, IsPlainOldData)

void UStreamlineLibraryDLSSG::STATIC_SetDLSSGMode(enum class EUStreamlineDLSSGMode DLSSGMode)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function StreamlineBlueprint.StreamlineLibraryDLSSG.SetDLSSGMode"));

	UStreamlineLibraryDLSSG_SetDLSSGMode_Params params;
	params.DLSSGMode = DLSSGMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StreamlineBlueprint.StreamlineLibraryDLSSG.SetDLSSGFrames
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            Frames                         (Parm, ZeroConstructor, IsPlainOldData)

void UStreamlineLibraryDLSSG::STATIC_SetDLSSGFrames(int Frames)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function StreamlineBlueprint.StreamlineLibraryDLSSG.SetDLSSGFrames"));

	UStreamlineLibraryDLSSG_SetDLSSGFrames_Params params;
	params.Frames = Frames;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StreamlineBlueprint.StreamlineLibraryDLSSG.QueryDLSSGSupport
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUStreamlineDLSSGSupport ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

enum class EUStreamlineDLSSGSupport UStreamlineLibraryDLSSG::STATIC_QueryDLSSGSupport()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function StreamlineBlueprint.StreamlineLibraryDLSSG.QueryDLSSGSupport"));

	UStreamlineLibraryDLSSG_QueryDLSSGSupport_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StreamlineBlueprint.StreamlineLibraryDLSSG.IsDLSSGSupported
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UStreamlineLibraryDLSSG::STATIC_IsDLSSGSupported()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function StreamlineBlueprint.StreamlineLibraryDLSSG.IsDLSSGSupported"));

	UStreamlineLibraryDLSSG_IsDLSSGSupported_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StreamlineBlueprint.StreamlineLibraryDLSSG.IsDLSSGModeSupported
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUStreamlineDLSSGMode DLSSGMode                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UStreamlineLibraryDLSSG::STATIC_IsDLSSGModeSupported(enum class EUStreamlineDLSSGMode DLSSGMode)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function StreamlineBlueprint.StreamlineLibraryDLSSG.IsDLSSGModeSupported"));

	UStreamlineLibraryDLSSG_IsDLSSGModeSupported_Params params;
	params.DLSSGMode = DLSSGMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetSupportedDLSSGModes
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<enum class EUStreamlineDLSSGMode> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<enum class EUStreamlineDLSSGMode> UStreamlineLibraryDLSSG::STATIC_GetSupportedDLSSGModes()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetSupportedDLSSGModes"));

	UStreamlineLibraryDLSSG_GetSupportedDLSSGModes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetDLSSGSupportedFramesRange
// (Final, RequiredAPI, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            MinFrames                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            MaxFrames                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStreamlineLibraryDLSSG::STATIC_GetDLSSGSupportedFramesRange(int* MinFrames, int* MaxFrames)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetDLSSGSupportedFramesRange"));

	UStreamlineLibraryDLSSG_GetDLSSGSupportedFramesRange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MinFrames != nullptr)
		*MinFrames = params.MinFrames;
	if (MaxFrames != nullptr)
		*MaxFrames = params.MaxFrames;
}


// Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetDLSSGMode
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUStreamlineDLSSGMode ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

enum class EUStreamlineDLSSGMode UStreamlineLibraryDLSSG::STATIC_GetDLSSGMode()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetDLSSGMode"));

	UStreamlineLibraryDLSSG_GetDLSSGMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetDLSSGMinimumDriverVersion
// (Final, RequiredAPI, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            MinDriverVersionMajor          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            MinDriverVersionMinor          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStreamlineLibraryDLSSG::STATIC_GetDLSSGMinimumDriverVersion(int* MinDriverVersionMajor, int* MinDriverVersionMinor)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetDLSSGMinimumDriverVersion"));

	UStreamlineLibraryDLSSG_GetDLSSGMinimumDriverVersion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MinDriverVersionMajor != nullptr)
		*MinDriverVersionMajor = params.MinDriverVersionMajor;
	if (MinDriverVersionMinor != nullptr)
		*MinDriverVersionMinor = params.MinDriverVersionMinor;
}


// Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetDLSSGFrames
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UStreamlineLibraryDLSSG::STATIC_GetDLSSGFrames()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetDLSSGFrames"));

	UStreamlineLibraryDLSSG_GetDLSSGFrames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetDefaultDLSSGMode
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUStreamlineDLSSGMode ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

enum class EUStreamlineDLSSGMode UStreamlineLibraryDLSSG::STATIC_GetDefaultDLSSGMode()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetDefaultDLSSGMode"));

	UStreamlineLibraryDLSSG_GetDefaultDLSSGMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StreamlineBlueprint.StreamlineLibraryReflex.SetReflexMode
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EUStreamlineReflexMode Mode                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UStreamlineLibraryReflex::STATIC_SetReflexMode(enum class EUStreamlineReflexMode Mode)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function StreamlineBlueprint.StreamlineLibraryReflex.SetReflexMode"));

	UStreamlineLibraryReflex_SetReflexMode_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StreamlineBlueprint.StreamlineLibraryReflex.QueryReflexSupport
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUStreamlineReflexSupport ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

enum class EUStreamlineReflexSupport UStreamlineLibraryReflex::STATIC_QueryReflexSupport()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function StreamlineBlueprint.StreamlineLibraryReflex.QueryReflexSupport"));

	UStreamlineLibraryReflex_QueryReflexSupport_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StreamlineBlueprint.StreamlineLibraryReflex.IsReflexSupported
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UStreamlineLibraryReflex::STATIC_IsReflexSupported()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function StreamlineBlueprint.StreamlineLibraryReflex.IsReflexSupported"));

	UStreamlineLibraryReflex_IsReflexSupported_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StreamlineBlueprint.StreamlineLibraryReflex.GetRenderLatencyInMs
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UStreamlineLibraryReflex::STATIC_GetRenderLatencyInMs()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function StreamlineBlueprint.StreamlineLibraryReflex.GetRenderLatencyInMs"));

	UStreamlineLibraryReflex_GetRenderLatencyInMs_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StreamlineBlueprint.StreamlineLibraryReflex.GetReflexMode
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUStreamlineReflexMode ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

enum class EUStreamlineReflexMode UStreamlineLibraryReflex::STATIC_GetReflexMode()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function StreamlineBlueprint.StreamlineLibraryReflex.GetReflexMode"));

	UStreamlineLibraryReflex_GetReflexMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StreamlineBlueprint.StreamlineLibraryReflex.GetGameToRenderLatencyInMs
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UStreamlineLibraryReflex::STATIC_GetGameToRenderLatencyInMs()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function StreamlineBlueprint.StreamlineLibraryReflex.GetGameToRenderLatencyInMs"));

	UStreamlineLibraryReflex_GetGameToRenderLatencyInMs_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StreamlineBlueprint.StreamlineLibraryReflex.GetGameLatencyInMs
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UStreamlineLibraryReflex::STATIC_GetGameLatencyInMs()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function StreamlineBlueprint.StreamlineLibraryReflex.GetGameLatencyInMs"));

	UStreamlineLibraryReflex_GetGameLatencyInMs_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StreamlineBlueprint.StreamlineLibraryReflex.GetDefaultReflexMode
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUStreamlineReflexMode ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

enum class EUStreamlineReflexMode UStreamlineLibraryReflex::STATIC_GetDefaultReflexMode()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function StreamlineBlueprint.StreamlineLibraryReflex.GetDefaultReflexMode"));

	UStreamlineLibraryReflex_GetDefaultReflexMode_Params params;

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
