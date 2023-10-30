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

// Function NiagaraUIRenderer.NiagaraSystemWidget.UpdateTickWhenPaused
struct UNiagaraSystemWidget_UpdateTickWhenPaused_Params
{
	bool                                               NewTickWhenPaused;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NiagaraUIRenderer.NiagaraSystemWidget.UpdateNiagaraSystemReference
struct UNiagaraSystemWidget_UpdateNiagaraSystemReference_Params
{
	class UNiagaraSystem*                              NewNiagaraSystem;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NiagaraUIRenderer.NiagaraSystemWidget.SetRemapMaterial
struct UNiagaraSystemWidget_SetRemapMaterial_Params
{
	class UMaterialInterface*                          OriginalMaterial;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          RemapMaterial;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NiagaraUIRenderer.NiagaraSystemWidget.SetDesiredWidgetSize
struct UNiagaraSystemWidget_SetDesiredWidgetSize_Params
{
	struct FVector2D                                   NewDesiredSize;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NiagaraUIRenderer.NiagaraSystemWidget.GetRemapMaterial
struct UNiagaraSystemWidget_GetRemapMaterial_Params
{
	class UMaterialInterface*                          OriginalMaterial;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NiagaraUIRenderer.NiagaraSystemWidget.GetNiagaraComponent
struct UNiagaraSystemWidget_GetNiagaraComponent_Params
{
	class UNiagaraUIComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function NiagaraUIRenderer.NiagaraSystemWidget.DeactivateSystem
struct UNiagaraSystemWidget_DeactivateSystem_Params
{
};

// Function NiagaraUIRenderer.NiagaraSystemWidget.ActivateSystem
struct UNiagaraSystemWidget_ActivateSystem_Params
{
	bool                                               Reset;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
