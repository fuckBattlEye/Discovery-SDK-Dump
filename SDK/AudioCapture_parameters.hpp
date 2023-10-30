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

// Function AudioCapture.AudioCapture.StopCapturingAudio
struct UAudioCapture_StopCapturingAudio_Params
{
};

// Function AudioCapture.AudioCapture.StartCapturingAudio
struct UAudioCapture_StartCapturingAudio_Params
{
};

// Function AudioCapture.AudioCapture.IsCapturingAudio
struct UAudioCapture_IsCapturingAudio_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AudioCapture.AudioCapture.GetAudioCaptureDeviceInfo
struct UAudioCapture_GetAudioCaptureDeviceInfo_Params
{
	struct FAudioCaptureDeviceInfo                     OutInfo;                                                  // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AudioCapture.AudioCaptureFunctionLibrary.CreateAudioCapture
struct UAudioCaptureFunctionLibrary_CreateAudioCapture_Params
{
	class UAudioCapture*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AudioCapture.AudioCaptureBlueprintLibrary.GetAvailableAudioInputDevices
struct UAudioCaptureBlueprintLibrary_GetAvailableAudioInputDevices_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             OnObtainDevicesEvent;                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AudioCapture.AudioCaptureBlueprintLibrary.Conv_AudioInputDeviceInfoToString
struct UAudioCaptureBlueprintLibrary_Conv_AudioInputDeviceInfoToString_Params
{
	struct FAudioInputDeviceInfo                       Info;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
