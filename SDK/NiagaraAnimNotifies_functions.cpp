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

// Function NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect.GetSpawnedEffect
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UMeshComponent*          MeshComp                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UFXSystemComponent*      ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UFXSystemComponent* UAnimNotifyState_TimedNiagaraEffect::GetSpawnedEffect(class UMeshComponent* MeshComp)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect.GetSpawnedEffect"));

	UAnimNotifyState_TimedNiagaraEffect_GetSpawnedEffect_Params params;
	params.MeshComp = MeshComp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffectAdvanced.GetNotifyProgress
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UMeshComponent*          MeshComp                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAnimNotifyState_TimedNiagaraEffectAdvanced::GetNotifyProgress(class UMeshComponent* MeshComp)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffectAdvanced.GetNotifyProgress"));

	UAnimNotifyState_TimedNiagaraEffectAdvanced_GetNotifyProgress_Params params;
	params.MeshComp = MeshComp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect.GetSpawnedEffect
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFXSystemComponent*      ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UFXSystemComponent* UAnimNotify_PlayNiagaraEffect::GetSpawnedEffect()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect.GetSpawnedEffect"));

	UAnimNotify_PlayNiagaraEffect_GetSpawnedEffect_Params params;

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
