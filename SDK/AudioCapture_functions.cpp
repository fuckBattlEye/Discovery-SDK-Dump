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

// Function AudioCapture.AudioCapture.StopCapturingAudio
// (Final, Native, Public, BlueprintCallable)

void UAudioCapture::StopCapturingAudio()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioCapture.AudioCapture.StopCapturingAudio"));

	UAudioCapture_StopCapturingAudio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioCapture.AudioCapture.StartCapturingAudio
// (Final, Native, Public, BlueprintCallable)

void UAudioCapture::StartCapturingAudio()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioCapture.AudioCapture.StartCapturingAudio"));

	UAudioCapture_StartCapturingAudio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioCapture.AudioCapture.IsCapturingAudio
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAudioCapture::IsCapturingAudio()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioCapture.AudioCapture.IsCapturingAudio"));

	UAudioCapture_IsCapturingAudio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioCapture.AudioCapture.GetAudioCaptureDeviceInfo
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAudioCaptureDeviceInfo OutInfo                        (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAudioCapture::GetAudioCaptureDeviceInfo(struct FAudioCaptureDeviceInfo* OutInfo)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioCapture.AudioCapture.GetAudioCaptureDeviceInfo"));

	UAudioCapture_GetAudioCaptureDeviceInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutInfo != nullptr)
		*OutInfo = params.OutInfo;

	return params.ReturnValue;
}


// Function AudioCapture.AudioCaptureFunctionLibrary.CreateAudioCapture
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAudioCapture*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAudioCapture* UAudioCaptureFunctionLibrary::STATIC_CreateAudioCapture()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioCapture.AudioCaptureFunctionLibrary.CreateAudioCapture"));

	UAudioCaptureFunctionLibrary_CreateAudioCapture_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioCapture.AudioCaptureBlueprintLibrary.GetAvailableAudioInputDevices
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         OnObtainDevicesEvent           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAudioCaptureBlueprintLibrary::STATIC_GetAvailableAudioInputDevices(class UObject* WorldContextObject, const struct FScriptDelegate& OnObtainDevicesEvent)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioCapture.AudioCaptureBlueprintLibrary.GetAvailableAudioInputDevices"));

	UAudioCaptureBlueprintLibrary_GetAvailableAudioInputDevices_Params params;
	params.WorldContextObject = WorldContextObject;
	params.OnObtainDevicesEvent = OnObtainDevicesEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioCapture.AudioCaptureBlueprintLibrary.Conv_AudioInputDeviceInfoToString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAudioInputDeviceInfo   Info                           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UAudioCaptureBlueprintLibrary::STATIC_Conv_AudioInputDeviceInfoToString(const struct FAudioInputDeviceInfo& Info)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioCapture.AudioCaptureBlueprintLibrary.Conv_AudioInputDeviceInfoToString"));

	UAudioCaptureBlueprintLibrary_Conv_AudioInputDeviceInfoToString_Params params;
	params.Info = Info;

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
