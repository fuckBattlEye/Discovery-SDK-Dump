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

// Function NiagaraUIRenderer.NiagaraSystemWidget.UpdateTickWhenPaused
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           NewTickWhenPaused              (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraSystemWidget::UpdateTickWhenPaused(bool NewTickWhenPaused)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function NiagaraUIRenderer.NiagaraSystemWidget.UpdateTickWhenPaused"));

	UNiagaraSystemWidget_UpdateTickWhenPaused_Params params;
	params.NewTickWhenPaused = NewTickWhenPaused;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NiagaraUIRenderer.NiagaraSystemWidget.UpdateNiagaraSystemReference
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UNiagaraSystem*          NewNiagaraSystem               (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraSystemWidget::UpdateNiagaraSystemReference(class UNiagaraSystem* NewNiagaraSystem)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function NiagaraUIRenderer.NiagaraSystemWidget.UpdateNiagaraSystemReference"));

	UNiagaraSystemWidget_UpdateNiagaraSystemReference_Params params;
	params.NewNiagaraSystem = NewNiagaraSystem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NiagaraUIRenderer.NiagaraSystemWidget.SetRemapMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*      OriginalMaterial               (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface*      RemapMaterial                  (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraSystemWidget::SetRemapMaterial(class UMaterialInterface* OriginalMaterial, class UMaterialInterface* RemapMaterial)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function NiagaraUIRenderer.NiagaraSystemWidget.SetRemapMaterial"));

	UNiagaraSystemWidget_SetRemapMaterial_Params params;
	params.OriginalMaterial = OriginalMaterial;
	params.RemapMaterial = RemapMaterial;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NiagaraUIRenderer.NiagaraSystemWidget.SetDesiredWidgetSize
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               NewDesiredSize                 (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraSystemWidget::SetDesiredWidgetSize(const struct FVector2D& NewDesiredSize)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function NiagaraUIRenderer.NiagaraSystemWidget.SetDesiredWidgetSize"));

	UNiagaraSystemWidget_SetDesiredWidgetSize_Params params;
	params.NewDesiredSize = NewDesiredSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NiagaraUIRenderer.NiagaraSystemWidget.GetRemapMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*      OriginalMaterial               (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMaterialInterface* UNiagaraSystemWidget::GetRemapMaterial(class UMaterialInterface* OriginalMaterial)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function NiagaraUIRenderer.NiagaraSystemWidget.GetRemapMaterial"));

	UNiagaraSystemWidget_GetRemapMaterial_Params params;
	params.OriginalMaterial = OriginalMaterial;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NiagaraUIRenderer.NiagaraSystemWidget.GetNiagaraComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UNiagaraUIComponent*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UNiagaraUIComponent* UNiagaraSystemWidget::GetNiagaraComponent()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function NiagaraUIRenderer.NiagaraSystemWidget.GetNiagaraComponent"));

	UNiagaraSystemWidget_GetNiagaraComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NiagaraUIRenderer.NiagaraSystemWidget.DeactivateSystem
// (Final, Native, Public, BlueprintCallable)

void UNiagaraSystemWidget::DeactivateSystem()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function NiagaraUIRenderer.NiagaraSystemWidget.DeactivateSystem"));

	UNiagaraSystemWidget_DeactivateSystem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NiagaraUIRenderer.NiagaraSystemWidget.ActivateSystem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Reset                          (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraSystemWidget::ActivateSystem(bool Reset)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function NiagaraUIRenderer.NiagaraSystemWidget.ActivateSystem"));

	UNiagaraSystemWidget_ActivateSystem_Params params;
	params.Reset = Reset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
