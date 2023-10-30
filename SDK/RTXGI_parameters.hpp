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

// Function RTXGI.DDGIVolumeComponent.ToggleVolume
struct UDDGIVolumeComponent_ToggleVolume_Params
{
	bool                                               IsVolumeEnabled;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RTXGI.DDGIVolumeComponent.SetLightMultiplier
struct UDDGIVolumeComponent_SetLightMultiplier_Params
{
	float                                              NewLightMultiplier;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RTXGI.DDGIVolumeComponent.SetIrradianceScalar
struct UDDGIVolumeComponent_SetIrradianceScalar_Params
{
	float                                              NewIrradianceScalar;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RTXGI.DDGIVolumeComponent.SetEmissiveMultiplier
struct UDDGIVolumeComponent_SetEmissiveMultiplier_Params
{
	float                                              NewEmissiveMultiplier;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RTXGI.DDGIVolumeComponent.GetLightMultiplier
struct UDDGIVolumeComponent_GetLightMultiplier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RTXGI.DDGIVolumeComponent.GetIrradianceScalar
struct UDDGIVolumeComponent_GetIrradianceScalar_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RTXGI.DDGIVolumeComponent.GetEmissiveMultiplier
struct UDDGIVolumeComponent_GetEmissiveMultiplier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RTXGI.DDGIVolumeComponent.DDGIClearVolumes
struct UDDGIVolumeComponent_DDGIClearVolumes_Params
{
};

// Function RTXGI.DDGIVolumeComponent.ClearProbeData
struct UDDGIVolumeComponent_ClearProbeData_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
