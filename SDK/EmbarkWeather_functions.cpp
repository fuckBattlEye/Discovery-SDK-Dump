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

// Function EmbarkWeather.EmbarkWeatherManager.ShouldEffectBeActive
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UNiagaraSystem*          NiagaraSystem                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AEmbarkWeatherManager::ShouldEffectBeActive(class UNiagaraSystem* NiagaraSystem)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkWeather.EmbarkWeatherManager.ShouldEffectBeActive"));

	AEmbarkWeatherManager_ShouldEffectBeActive_Params params;
	params.NiagaraSystem = NiagaraSystem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkWeather.EmbarkWeatherManager.GetWeatherTags
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTagContainer   ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

struct FGameplayTagContainer AEmbarkWeatherManager::GetWeatherTags()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkWeather.EmbarkWeatherManager.GetWeatherTags"));

	AEmbarkWeatherManager_GetWeatherTags_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkWeather.EmbarkWeatherSubsystem.GetWeatherManager
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AEmbarkWeatherManager*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AEmbarkWeatherManager* UEmbarkWeatherSubsystem::GetWeatherManager()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkWeather.EmbarkWeatherSubsystem.GetWeatherManager"));

	UEmbarkWeatherSubsystem_GetWeatherManager_Params params;

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
