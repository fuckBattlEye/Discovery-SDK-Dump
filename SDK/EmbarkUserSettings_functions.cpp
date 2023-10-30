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

// Function EmbarkUserSettings.EmbarkGameUserSettings.SetXeSSMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EXeSSQualityMode    Mode                           (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkGameUserSettings::SetXeSSMode(enum class EXeSSQualityMode Mode)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUserSettings.EmbarkGameUserSettings.SetXeSSMode"));

	UEmbarkGameUserSettings_SetXeSSMode_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUserSettings.EmbarkGameUserSettings.SetRTXGIResolutionQuality
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkGameUserSettings::SetRTXGIResolutionQuality(int Value)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUserSettings.EmbarkGameUserSettings.SetRTXGIResolutionQuality"));

	UEmbarkGameUserSettings_SetRTXGIResolutionQuality_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUserSettings.EmbarkGameUserSettings.SetRTXGIQuality
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ERTXGIQuality       Quality                        (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkGameUserSettings::SetRTXGIQuality(enum class ERTXGIQuality Quality)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUserSettings.EmbarkGameUserSettings.SetRTXGIQuality"));

	UEmbarkGameUserSettings_SetRTXGIQuality_Params params;
	params.Quality = Quality;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUserSettings.EmbarkGameUserSettings.SetResolutionScalingMethod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EResolutionScalingMethod Method                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSetByUser                     (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkGameUserSettings::SetResolutionScalingMethod(enum class EResolutionScalingMethod Method, bool bSetByUser)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUserSettings.EmbarkGameUserSettings.SetResolutionScalingMethod"));

	UEmbarkGameUserSettings_SetResolutionScalingMethod_Params params;
	params.Method = Method;
	params.bSetByUser = bSetByUser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUserSettings.EmbarkGameUserSettings.SetNvReflexMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EUStreamlineReflexMode Mode                           (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkGameUserSettings::SetNvReflexMode(enum class EUStreamlineReflexMode Mode)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUserSettings.EmbarkGameUserSettings.SetNvReflexMode"));

	UEmbarkGameUserSettings_SetNvReflexMode_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUserSettings.EmbarkGameUserSettings.SetMotionBlurEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkGameUserSettings::SetMotionBlurEnabled(bool bEnabled)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUserSettings.EmbarkGameUserSettings.SetMotionBlurEnabled"));

	UEmbarkGameUserSettings_SetMotionBlurEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUserSettings.EmbarkGameUserSettings.SetLensDistortionEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkGameUserSettings::SetLensDistortionEnabled(bool bEnabled)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUserSettings.EmbarkGameUserSettings.SetLensDistortionEnabled"));

	UEmbarkGameUserSettings_SetLensDistortionEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUserSettings.EmbarkGameUserSettings.SetInGameEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkGameUserSettings::SetInGameEnabled(bool bEnabled)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUserSettings.EmbarkGameUserSettings.SetInGameEnabled"));

	UEmbarkGameUserSettings_SetInGameEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUserSettings.EmbarkGameUserSettings.SetFSR2Mode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EFSR2Mode           Mode                           (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkGameUserSettings::SetFSR2Mode(enum class EFSR2Mode Mode)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUserSettings.EmbarkGameUserSettings.SetFSR2Mode"));

	UEmbarkGameUserSettings_SetFSR2Mode_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUserSettings.EmbarkGameUserSettings.SetDLSSMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EDLSSModeOption     Mode                           (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkGameUserSettings::SetDLSSMode(enum class EDLSSModeOption Mode)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUserSettings.EmbarkGameUserSettings.SetDLSSMode"));

	UEmbarkGameUserSettings_SetDLSSMode_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUserSettings.EmbarkGameUserSettings.SetDLSSFrameGenerationMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EUStreamlineDLSSGMode Mode                           (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkGameUserSettings::SetDLSSFrameGenerationMode(enum class EUStreamlineDLSSGMode Mode)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUserSettings.EmbarkGameUserSettings.SetDLSSFrameGenerationMode"));

	UEmbarkGameUserSettings_SetDLSSFrameGenerationMode_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUserSettings.EmbarkGameUserSettings.SetD3D12Enabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkGameUserSettings::SetD3D12Enabled(bool bEnabled)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUserSettings.EmbarkGameUserSettings.SetD3D12Enabled"));

	UEmbarkGameUserSettings_SetD3D12Enabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUserSettings.EmbarkGameUserSettings.IsXeSSSupported
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkGameUserSettings::IsXeSSSupported()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUserSettings.EmbarkGameUserSettings.IsXeSSSupported"));

	UEmbarkGameUserSettings_IsXeSSSupported_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUserSettings.EmbarkGameUserSettings.IsXeSSModeDirty
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkGameUserSettings::IsXeSSModeDirty()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUserSettings.EmbarkGameUserSettings.IsXeSSModeDirty"));

	UEmbarkGameUserSettings_IsXeSSModeDirty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUserSettings.EmbarkGameUserSettings.IsXeSSLoaded
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkGameUserSettings::IsXeSSLoaded()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUserSettings.EmbarkGameUserSettings.IsXeSSLoaded"));

	UEmbarkGameUserSettings_IsXeSSLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUserSettings.EmbarkGameUserSettings.IsRTXGIResolutionQualityDirty
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkGameUserSettings::IsRTXGIResolutionQualityDirty()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUserSettings.EmbarkGameUserSettings.IsRTXGIResolutionQualityDirty"));

	UEmbarkGameUserSettings_IsRTXGIResolutionQualityDirty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUserSettings.EmbarkGameUserSettings.IsRTXGIQualityDirty
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkGameUserSettings::IsRTXGIQualityDirty()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUserSettings.EmbarkGameUserSettings.IsRTXGIQualityDirty"));

	UEmbarkGameUserSettings_IsRTXGIQualityDirty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUserSettings.EmbarkGameUserSettings.IsResolutionScalingMethodDirty
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkGameUserSettings::IsResolutionScalingMethodDirty()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUserSettings.EmbarkGameUserSettings.IsResolutionScalingMethodDirty"));

	UEmbarkGameUserSettings_IsResolutionScalingMethodDirty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUserSettings.EmbarkGameUserSettings.IsRayTracingSupported
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkGameUserSettings::IsRayTracingSupported()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUserSettings.EmbarkGameUserSettings.IsRayTracingSupported"));

	UEmbarkGameUserSettings_IsRayTracingSupported_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUserSettings.EmbarkGameUserSettings.IsPCSettingsAvailable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkGameUserSettings::IsPCSettingsAvailable()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUserSettings.EmbarkGameUserSettings.IsPCSettingsAvailable"));

	UEmbarkGameUserSettings_IsPCSettingsAvailable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUserSettings.EmbarkGameUserSettings.IsNvReflexSupported
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkGameUserSettings::IsNvReflexSupported()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUserSettings.EmbarkGameUserSettings.IsNvReflexSupported"));

	UEmbarkGameUserSettings_IsNvReflexSupported_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUserSettings.EmbarkGameUserSettings.IsNvReflexModeDirty
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkGameUserSettings::IsNvReflexModeDirty()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUserSettings.EmbarkGameUserSettings.IsNvReflexModeDirty"));

	UEmbarkGameUserSettings_IsNvReflexModeDirty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUserSettings.EmbarkGameUserSettings.IsMotionBlurDirty
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkGameUserSettings::IsMotionBlurDirty()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUserSettings.EmbarkGameUserSettings.IsMotionBlurDirty"));

	UEmbarkGameUserSettings_IsMotionBlurDirty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUserSettings.EmbarkGameUserSettings.IsFSR2Supported
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkGameUserSettings::IsFSR2Supported()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUserSettings.EmbarkGameUserSettings.IsFSR2Supported"));

	UEmbarkGameUserSettings_IsFSR2Supported_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUserSettings.EmbarkGameUserSettings.IsFSR2ModeDirty
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkGameUserSettings::IsFSR2ModeDirty()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUserSettings.EmbarkGameUserSettings.IsFSR2ModeDirty"));

	UEmbarkGameUserSettings_IsFSR2ModeDirty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUserSettings.EmbarkGameUserSettings.IsFSR2Loaded
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkGameUserSettings::IsFSR2Loaded()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUserSettings.EmbarkGameUserSettings.IsFSR2Loaded"));

	UEmbarkGameUserSettings_IsFSR2Loaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUserSettings.EmbarkGameUserSettings.IsDLSSSupported
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkGameUserSettings::IsDLSSSupported()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUserSettings.EmbarkGameUserSettings.IsDLSSSupported"));

	UEmbarkGameUserSettings_IsDLSSSupported_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUserSettings.EmbarkGameUserSettings.IsDLSSModeDirty
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkGameUserSettings::IsDLSSModeDirty()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUserSettings.EmbarkGameUserSettings.IsDLSSModeDirty"));

	UEmbarkGameUserSettings_IsDLSSModeDirty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUserSettings.EmbarkGameUserSettings.IsDLSSLoaded
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkGameUserSettings::IsDLSSLoaded()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUserSettings.EmbarkGameUserSettings.IsDLSSLoaded"));

	UEmbarkGameUserSettings_IsDLSSLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUserSettings.EmbarkGameUserSettings.IsDLSSFrameGenerationSupported
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkGameUserSettings::IsDLSSFrameGenerationSupported()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUserSettings.EmbarkGameUserSettings.IsDLSSFrameGenerationSupported"));

	UEmbarkGameUserSettings_IsDLSSFrameGenerationSupported_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUserSettings.EmbarkGameUserSettings.IsDLSSFrameGenerationDirty
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkGameUserSettings::IsDLSSFrameGenerationDirty()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUserSettings.EmbarkGameUserSettings.IsDLSSFrameGenerationDirty"));

	UEmbarkGameUserSettings_IsDLSSFrameGenerationDirty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUserSettings.EmbarkGameUserSettings.IsD3D12Supported
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkGameUserSettings::IsD3D12Supported()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUserSettings.EmbarkGameUserSettings.IsD3D12Supported"));

	UEmbarkGameUserSettings_IsD3D12Supported_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUserSettings.EmbarkGameUserSettings.IsD3D12Dirty
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkGameUserSettings::IsD3D12Dirty()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUserSettings.EmbarkGameUserSettings.IsD3D12Dirty"));

	UEmbarkGameUserSettings_IsD3D12Dirty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUserSettings.EmbarkGameUserSettings.GetXeSSMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EXeSSQualityMode    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

enum class EXeSSQualityMode UEmbarkGameUserSettings::GetXeSSMode()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUserSettings.EmbarkGameUserSettings.GetXeSSMode"));

	UEmbarkGameUserSettings_GetXeSSMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUserSettings.EmbarkGameUserSettings.GetSupportedXeSSModes
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<enum class EXeSSQualityMode> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<enum class EXeSSQualityMode> UEmbarkGameUserSettings::GetSupportedXeSSModes()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUserSettings.EmbarkGameUserSettings.GetSupportedXeSSModes"));

	UEmbarkGameUserSettings_GetSupportedXeSSModes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUserSettings.EmbarkGameUserSettings.GetSupportedDLSSModes
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<enum class EDLSSModeOption> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<enum class EDLSSModeOption> UEmbarkGameUserSettings::GetSupportedDLSSModes()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUserSettings.EmbarkGameUserSettings.GetSupportedDLSSModes"));

	UEmbarkGameUserSettings_GetSupportedDLSSModes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUserSettings.EmbarkGameUserSettings.GetSupportedDLSSFrameGenerationModes
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<enum class EUStreamlineDLSSGMode> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<enum class EUStreamlineDLSSGMode> UEmbarkGameUserSettings::GetSupportedDLSSFrameGenerationModes()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUserSettings.EmbarkGameUserSettings.GetSupportedDLSSFrameGenerationModes"));

	UEmbarkGameUserSettings_GetSupportedDLSSFrameGenerationModes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUserSettings.EmbarkGameUserSettings.GetRTXGIResolutionQuality
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UEmbarkGameUserSettings::GetRTXGIResolutionQuality()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUserSettings.EmbarkGameUserSettings.GetRTXGIResolutionQuality"));

	UEmbarkGameUserSettings_GetRTXGIResolutionQuality_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUserSettings.EmbarkGameUserSettings.GetRTXGIQuality
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ERTXGIQuality       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

enum class ERTXGIQuality UEmbarkGameUserSettings::GetRTXGIQuality()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUserSettings.EmbarkGameUserSettings.GetRTXGIQuality"));

	UEmbarkGameUserSettings_GetRTXGIQuality_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUserSettings.EmbarkGameUserSettings.GetResolutionScalingMethod
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EResolutionScalingMethod ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

enum class EResolutionScalingMethod UEmbarkGameUserSettings::GetResolutionScalingMethod()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUserSettings.EmbarkGameUserSettings.GetResolutionScalingMethod"));

	UEmbarkGameUserSettings_GetResolutionScalingMethod_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUserSettings.EmbarkGameUserSettings.GetNvReflexMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EUStreamlineReflexMode ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

enum class EUStreamlineReflexMode UEmbarkGameUserSettings::GetNvReflexMode()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUserSettings.EmbarkGameUserSettings.GetNvReflexMode"));

	UEmbarkGameUserSettings_GetNvReflexMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUserSettings.EmbarkGameUserSettings.GetMotionBlurEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkGameUserSettings::GetMotionBlurEnabled()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUserSettings.EmbarkGameUserSettings.GetMotionBlurEnabled"));

	UEmbarkGameUserSettings_GetMotionBlurEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUserSettings.EmbarkGameUserSettings.GetLensDistortionEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkGameUserSettings::GetLensDistortionEnabled()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUserSettings.EmbarkGameUserSettings.GetLensDistortionEnabled"));

	UEmbarkGameUserSettings_GetLensDistortionEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUserSettings.EmbarkGameUserSettings.GetFSR2Mode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EFSR2Mode           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

enum class EFSR2Mode UEmbarkGameUserSettings::GetFSR2Mode()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUserSettings.EmbarkGameUserSettings.GetFSR2Mode"));

	UEmbarkGameUserSettings_GetFSR2Mode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUserSettings.EmbarkGameUserSettings.GetEmbarkGameUserSettingsWithDefaultSettings
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UEmbarkGameUserSettings* ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UEmbarkGameUserSettings* UEmbarkGameUserSettings::STATIC_GetEmbarkGameUserSettingsWithDefaultSettings()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUserSettings.EmbarkGameUserSettings.GetEmbarkGameUserSettingsWithDefaultSettings"));

	UEmbarkGameUserSettings_GetEmbarkGameUserSettingsWithDefaultSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUserSettings.EmbarkGameUserSettings.GetEffectiveXeSSMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EXeSSQualityMode    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

enum class EXeSSQualityMode UEmbarkGameUserSettings::GetEffectiveXeSSMode()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUserSettings.EmbarkGameUserSettings.GetEffectiveXeSSMode"));

	UEmbarkGameUserSettings_GetEffectiveXeSSMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUserSettings.EmbarkGameUserSettings.GetEffectiveRTXGIQuality
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ERTXGIQuality       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

enum class ERTXGIQuality UEmbarkGameUserSettings::GetEffectiveRTXGIQuality()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUserSettings.EmbarkGameUserSettings.GetEffectiveRTXGIQuality"));

	UEmbarkGameUserSettings_GetEffectiveRTXGIQuality_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUserSettings.EmbarkGameUserSettings.GetEffectiveFSR2Mode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EFSR2Mode           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

enum class EFSR2Mode UEmbarkGameUserSettings::GetEffectiveFSR2Mode()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUserSettings.EmbarkGameUserSettings.GetEffectiveFSR2Mode"));

	UEmbarkGameUserSettings_GetEffectiveFSR2Mode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUserSettings.EmbarkGameUserSettings.GetEffectiveDLSSMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EDLSSModeOption     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

enum class EDLSSModeOption UEmbarkGameUserSettings::GetEffectiveDLSSMode()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUserSettings.EmbarkGameUserSettings.GetEffectiveDLSSMode"));

	UEmbarkGameUserSettings_GetEffectiveDLSSMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUserSettings.EmbarkGameUserSettings.GetEffectiveDLSSFrameGenerationMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EUStreamlineDLSSGMode ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

enum class EUStreamlineDLSSGMode UEmbarkGameUserSettings::GetEffectiveDLSSFrameGenerationMode()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUserSettings.EmbarkGameUserSettings.GetEffectiveDLSSFrameGenerationMode"));

	UEmbarkGameUserSettings_GetEffectiveDLSSFrameGenerationMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUserSettings.EmbarkGameUserSettings.GetDLSSMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EDLSSModeOption     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

enum class EDLSSModeOption UEmbarkGameUserSettings::GetDLSSMode()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUserSettings.EmbarkGameUserSettings.GetDLSSMode"));

	UEmbarkGameUserSettings_GetDLSSMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUserSettings.EmbarkGameUserSettings.GetDLSSFrameGenerationMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EUStreamlineDLSSGMode ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

enum class EUStreamlineDLSSGMode UEmbarkGameUserSettings::GetDLSSFrameGenerationMode()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUserSettings.EmbarkGameUserSettings.GetDLSSFrameGenerationMode"));

	UEmbarkGameUserSettings_GetDLSSFrameGenerationMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUserSettings.EmbarkGameUserSettings.GetDefaultResolutionScalingMethod
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EResolutionScalingMethod ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

enum class EResolutionScalingMethod UEmbarkGameUserSettings::GetDefaultResolutionScalingMethod()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUserSettings.EmbarkGameUserSettings.GetDefaultResolutionScalingMethod"));

	UEmbarkGameUserSettings_GetDefaultResolutionScalingMethod_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUserSettings.EmbarkGameUserSettings.GetD3D12Enabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkGameUserSettings::GetD3D12Enabled()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUserSettings.EmbarkGameUserSettings.GetD3D12Enabled"));

	UEmbarkGameUserSettings_GetD3D12Enabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUserSettings.EmbarkGameUserSettings.GetAppliedXeSSMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EXeSSQualityMode    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

enum class EXeSSQualityMode UEmbarkGameUserSettings::GetAppliedXeSSMode()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUserSettings.EmbarkGameUserSettings.GetAppliedXeSSMode"));

	UEmbarkGameUserSettings_GetAppliedXeSSMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUserSettings.EmbarkGameUserSettings.GetAppliedRTXGIQuality
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ERTXGIQuality       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

enum class ERTXGIQuality UEmbarkGameUserSettings::GetAppliedRTXGIQuality()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUserSettings.EmbarkGameUserSettings.GetAppliedRTXGIQuality"));

	UEmbarkGameUserSettings_GetAppliedRTXGIQuality_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUserSettings.EmbarkGameUserSettings.GetAppliedFSR2Mode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EFSR2Mode           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

enum class EFSR2Mode UEmbarkGameUserSettings::GetAppliedFSR2Mode()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUserSettings.EmbarkGameUserSettings.GetAppliedFSR2Mode"));

	UEmbarkGameUserSettings_GetAppliedFSR2Mode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUserSettings.EmbarkGameUserSettings.GetAppliedDLSSMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EDLSSModeOption     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

enum class EDLSSModeOption UEmbarkGameUserSettings::GetAppliedDLSSMode()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUserSettings.EmbarkGameUserSettings.GetAppliedDLSSMode"));

	UEmbarkGameUserSettings_GetAppliedDLSSMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUserSettings.EmbarkGameUserSettings.Get
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UEmbarkGameUserSettings* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UEmbarkGameUserSettings* UEmbarkGameUserSettings::STATIC_Get()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUserSettings.EmbarkGameUserSettings.Get"));

	UEmbarkGameUserSettings_Get_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUserSettings.EmbarkGameUserSettings.AutoDetectScalabilitySettings
// (Final, Native, Public, BlueprintCallable)

void UEmbarkGameUserSettings::AutoDetectScalabilitySettings()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUserSettings.EmbarkGameUserSettings.AutoDetectScalabilitySettings"));

	UEmbarkGameUserSettings_AutoDetectScalabilitySettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
