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

// Function NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect.GetSpawnedEffect
struct UAnimNotifyState_TimedNiagaraEffect_GetSpawnedEffect_Params
{
	class UMeshComponent*                              MeshComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFXSystemComponent*                          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffectAdvanced.GetNotifyProgress
struct UAnimNotifyState_TimedNiagaraEffectAdvanced_GetNotifyProgress_Params
{
	class UMeshComponent*                              MeshComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect.GetSpawnedEffect
struct UAnimNotify_PlayNiagaraEffect_GetSpawnedEffect_Params
{
	class UFXSystemComponent*                          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
