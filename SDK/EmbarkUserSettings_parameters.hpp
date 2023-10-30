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

// Function EmbarkUserSettings.EmbarkGameUserSettings.SetXeSSMode
struct UEmbarkGameUserSettings_SetXeSSMode_Params
{
	enum class EXeSSQualityMode                        Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUserSettings.EmbarkGameUserSettings.SetRTXGIResolutionQuality
struct UEmbarkGameUserSettings_SetRTXGIResolutionQuality_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUserSettings.EmbarkGameUserSettings.SetRTXGIQuality
struct UEmbarkGameUserSettings_SetRTXGIQuality_Params
{
	enum class ERTXGIQuality                           Quality;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUserSettings.EmbarkGameUserSettings.SetResolutionScalingMethod
struct UEmbarkGameUserSettings_SetResolutionScalingMethod_Params
{
	enum class EResolutionScalingMethod                Method;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSetByUser;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUserSettings.EmbarkGameUserSettings.SetNvReflexMode
struct UEmbarkGameUserSettings_SetNvReflexMode_Params
{
	enum class EUStreamlineReflexMode                  Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUserSettings.EmbarkGameUserSettings.SetMotionBlurEnabled
struct UEmbarkGameUserSettings_SetMotionBlurEnabled_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUserSettings.EmbarkGameUserSettings.SetLensDistortionEnabled
struct UEmbarkGameUserSettings_SetLensDistortionEnabled_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUserSettings.EmbarkGameUserSettings.SetInGameEnabled
struct UEmbarkGameUserSettings_SetInGameEnabled_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUserSettings.EmbarkGameUserSettings.SetFSR2Mode
struct UEmbarkGameUserSettings_SetFSR2Mode_Params
{
	enum class EFSR2Mode                               Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUserSettings.EmbarkGameUserSettings.SetDLSSMode
struct UEmbarkGameUserSettings_SetDLSSMode_Params
{
	enum class EDLSSModeOption                         Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUserSettings.EmbarkGameUserSettings.SetDLSSFrameGenerationMode
struct UEmbarkGameUserSettings_SetDLSSFrameGenerationMode_Params
{
	enum class EUStreamlineDLSSGMode                   Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUserSettings.EmbarkGameUserSettings.SetD3D12Enabled
struct UEmbarkGameUserSettings_SetD3D12Enabled_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUserSettings.EmbarkGameUserSettings.IsXeSSSupported
struct UEmbarkGameUserSettings_IsXeSSSupported_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUserSettings.EmbarkGameUserSettings.IsXeSSModeDirty
struct UEmbarkGameUserSettings_IsXeSSModeDirty_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUserSettings.EmbarkGameUserSettings.IsXeSSLoaded
struct UEmbarkGameUserSettings_IsXeSSLoaded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUserSettings.EmbarkGameUserSettings.IsRTXGIResolutionQualityDirty
struct UEmbarkGameUserSettings_IsRTXGIResolutionQualityDirty_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUserSettings.EmbarkGameUserSettings.IsRTXGIQualityDirty
struct UEmbarkGameUserSettings_IsRTXGIQualityDirty_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUserSettings.EmbarkGameUserSettings.IsResolutionScalingMethodDirty
struct UEmbarkGameUserSettings_IsResolutionScalingMethodDirty_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUserSettings.EmbarkGameUserSettings.IsRayTracingSupported
struct UEmbarkGameUserSettings_IsRayTracingSupported_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUserSettings.EmbarkGameUserSettings.IsPCSettingsAvailable
struct UEmbarkGameUserSettings_IsPCSettingsAvailable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUserSettings.EmbarkGameUserSettings.IsNvReflexSupported
struct UEmbarkGameUserSettings_IsNvReflexSupported_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUserSettings.EmbarkGameUserSettings.IsNvReflexModeDirty
struct UEmbarkGameUserSettings_IsNvReflexModeDirty_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUserSettings.EmbarkGameUserSettings.IsMotionBlurDirty
struct UEmbarkGameUserSettings_IsMotionBlurDirty_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUserSettings.EmbarkGameUserSettings.IsFSR2Supported
struct UEmbarkGameUserSettings_IsFSR2Supported_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUserSettings.EmbarkGameUserSettings.IsFSR2ModeDirty
struct UEmbarkGameUserSettings_IsFSR2ModeDirty_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUserSettings.EmbarkGameUserSettings.IsFSR2Loaded
struct UEmbarkGameUserSettings_IsFSR2Loaded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUserSettings.EmbarkGameUserSettings.IsDLSSSupported
struct UEmbarkGameUserSettings_IsDLSSSupported_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUserSettings.EmbarkGameUserSettings.IsDLSSModeDirty
struct UEmbarkGameUserSettings_IsDLSSModeDirty_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUserSettings.EmbarkGameUserSettings.IsDLSSLoaded
struct UEmbarkGameUserSettings_IsDLSSLoaded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUserSettings.EmbarkGameUserSettings.IsDLSSFrameGenerationSupported
struct UEmbarkGameUserSettings_IsDLSSFrameGenerationSupported_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUserSettings.EmbarkGameUserSettings.IsDLSSFrameGenerationDirty
struct UEmbarkGameUserSettings_IsDLSSFrameGenerationDirty_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUserSettings.EmbarkGameUserSettings.IsD3D12Supported
struct UEmbarkGameUserSettings_IsD3D12Supported_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUserSettings.EmbarkGameUserSettings.IsD3D12Dirty
struct UEmbarkGameUserSettings_IsD3D12Dirty_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUserSettings.EmbarkGameUserSettings.GetXeSSMode
struct UEmbarkGameUserSettings_GetXeSSMode_Params
{
	enum class EXeSSQualityMode                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUserSettings.EmbarkGameUserSettings.GetSupportedXeSSModes
struct UEmbarkGameUserSettings_GetSupportedXeSSModes_Params
{
	TArray<enum class EXeSSQualityMode>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkUserSettings.EmbarkGameUserSettings.GetSupportedDLSSModes
struct UEmbarkGameUserSettings_GetSupportedDLSSModes_Params
{
	TArray<enum class EDLSSModeOption>                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkUserSettings.EmbarkGameUserSettings.GetSupportedDLSSFrameGenerationModes
struct UEmbarkGameUserSettings_GetSupportedDLSSFrameGenerationModes_Params
{
	TArray<enum class EUStreamlineDLSSGMode>           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkUserSettings.EmbarkGameUserSettings.GetRTXGIResolutionQuality
struct UEmbarkGameUserSettings_GetRTXGIResolutionQuality_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUserSettings.EmbarkGameUserSettings.GetRTXGIQuality
struct UEmbarkGameUserSettings_GetRTXGIQuality_Params
{
	enum class ERTXGIQuality                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUserSettings.EmbarkGameUserSettings.GetResolutionScalingMethod
struct UEmbarkGameUserSettings_GetResolutionScalingMethod_Params
{
	enum class EResolutionScalingMethod                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUserSettings.EmbarkGameUserSettings.GetNvReflexMode
struct UEmbarkGameUserSettings_GetNvReflexMode_Params
{
	enum class EUStreamlineReflexMode                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUserSettings.EmbarkGameUserSettings.GetMotionBlurEnabled
struct UEmbarkGameUserSettings_GetMotionBlurEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUserSettings.EmbarkGameUserSettings.GetLensDistortionEnabled
struct UEmbarkGameUserSettings_GetLensDistortionEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUserSettings.EmbarkGameUserSettings.GetFSR2Mode
struct UEmbarkGameUserSettings_GetFSR2Mode_Params
{
	enum class EFSR2Mode                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUserSettings.EmbarkGameUserSettings.GetEmbarkGameUserSettingsWithDefaultSettings
struct UEmbarkGameUserSettings_GetEmbarkGameUserSettingsWithDefaultSettings_Params
{
	class UEmbarkGameUserSettings*                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUserSettings.EmbarkGameUserSettings.GetEffectiveXeSSMode
struct UEmbarkGameUserSettings_GetEffectiveXeSSMode_Params
{
	enum class EXeSSQualityMode                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUserSettings.EmbarkGameUserSettings.GetEffectiveRTXGIQuality
struct UEmbarkGameUserSettings_GetEffectiveRTXGIQuality_Params
{
	enum class ERTXGIQuality                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUserSettings.EmbarkGameUserSettings.GetEffectiveFSR2Mode
struct UEmbarkGameUserSettings_GetEffectiveFSR2Mode_Params
{
	enum class EFSR2Mode                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUserSettings.EmbarkGameUserSettings.GetEffectiveDLSSMode
struct UEmbarkGameUserSettings_GetEffectiveDLSSMode_Params
{
	enum class EDLSSModeOption                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUserSettings.EmbarkGameUserSettings.GetEffectiveDLSSFrameGenerationMode
struct UEmbarkGameUserSettings_GetEffectiveDLSSFrameGenerationMode_Params
{
	enum class EUStreamlineDLSSGMode                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUserSettings.EmbarkGameUserSettings.GetDLSSMode
struct UEmbarkGameUserSettings_GetDLSSMode_Params
{
	enum class EDLSSModeOption                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUserSettings.EmbarkGameUserSettings.GetDLSSFrameGenerationMode
struct UEmbarkGameUserSettings_GetDLSSFrameGenerationMode_Params
{
	enum class EUStreamlineDLSSGMode                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUserSettings.EmbarkGameUserSettings.GetDefaultResolutionScalingMethod
struct UEmbarkGameUserSettings_GetDefaultResolutionScalingMethod_Params
{
	enum class EResolutionScalingMethod                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUserSettings.EmbarkGameUserSettings.GetD3D12Enabled
struct UEmbarkGameUserSettings_GetD3D12Enabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUserSettings.EmbarkGameUserSettings.GetAppliedXeSSMode
struct UEmbarkGameUserSettings_GetAppliedXeSSMode_Params
{
	enum class EXeSSQualityMode                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUserSettings.EmbarkGameUserSettings.GetAppliedRTXGIQuality
struct UEmbarkGameUserSettings_GetAppliedRTXGIQuality_Params
{
	enum class ERTXGIQuality                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUserSettings.EmbarkGameUserSettings.GetAppliedFSR2Mode
struct UEmbarkGameUserSettings_GetAppliedFSR2Mode_Params
{
	enum class EFSR2Mode                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUserSettings.EmbarkGameUserSettings.GetAppliedDLSSMode
struct UEmbarkGameUserSettings_GetAppliedDLSSMode_Params
{
	enum class EDLSSModeOption                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUserSettings.EmbarkGameUserSettings.Get
struct UEmbarkGameUserSettings_Get_Params
{
	class UEmbarkGameUserSettings*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUserSettings.EmbarkGameUserSettings.AutoDetectScalabilitySettings
struct UEmbarkGameUserSettings_AutoDetectScalabilitySettings_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
