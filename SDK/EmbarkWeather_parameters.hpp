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

// Function EmbarkWeather.EmbarkWeatherManager.ShouldEffectBeActive
struct AEmbarkWeatherManager_ShouldEffectBeActive_Params
{
	class UNiagaraSystem*                              NiagaraSystem;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkWeather.EmbarkWeatherManager.GetWeatherTags
struct AEmbarkWeatherManager_GetWeatherTags_Params
{
	struct FGameplayTagContainer                       ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function EmbarkWeather.EmbarkWeatherSubsystem.GetWeatherManager
struct UEmbarkWeatherSubsystem_GetWeatherManager_Params
{
	class AEmbarkWeatherManager*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
