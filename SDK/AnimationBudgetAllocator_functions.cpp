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

// Function AnimationBudgetAllocator.SkeletalMeshComponentBudgeted.SetAutoRegisterWithBudgetAllocator
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInAutoRegisterWithBudgetAllocator (Parm, ZeroConstructor, IsPlainOldData)

void USkeletalMeshComponentBudgeted::SetAutoRegisterWithBudgetAllocator(bool bInAutoRegisterWithBudgetAllocator)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AnimationBudgetAllocator.SkeletalMeshComponentBudgeted.SetAutoRegisterWithBudgetAllocator"));

	USkeletalMeshComponentBudgeted_SetAutoRegisterWithBudgetAllocator_Params params;
	params.bInAutoRegisterWithBudgetAllocator = bInAutoRegisterWithBudgetAllocator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary.SetAnimationBudgetParameters
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FAnimationBudgetAllocatorParameters InParameters                   (ConstParm, Parm, OutParm, ReferenceParm)

void UAnimationBudgetBlueprintLibrary::STATIC_SetAnimationBudgetParameters(class UObject* WorldContextObject, const struct FAnimationBudgetAllocatorParameters& InParameters)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary.SetAnimationBudgetParameters"));

	UAnimationBudgetBlueprintLibrary_SetAnimationBudgetParameters_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InParameters = InParameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary.EnableAnimationBudget
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UAnimationBudgetBlueprintLibrary::STATIC_EnableAnimationBudget(class UObject* WorldContextObject, bool bEnabled)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary.EnableAnimationBudget"));

	UAnimationBudgetBlueprintLibrary_EnableAnimationBudget_Params params;
	params.WorldContextObject = WorldContextObject;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimationBudgetAllocator.EmbarkAnimationBudgetBlueprintLibrary.UnregisterComponent
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponentBudgeted* InComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UEmbarkAnimationBudgetBlueprintLibrary::STATIC_UnregisterComponent(class UObject* WorldContextObject, class USkeletalMeshComponentBudgeted* InComponent)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AnimationBudgetAllocator.EmbarkAnimationBudgetBlueprintLibrary.UnregisterComponent"));

	UEmbarkAnimationBudgetBlueprintLibrary_UnregisterComponent_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InComponent = InComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimationBudgetAllocator.EmbarkAnimationBudgetBlueprintLibrary.SetParameters
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FAnimationBudgetAllocatorParameters InParameters                   (ConstParm, Parm, OutParm, ReferenceParm)

void UEmbarkAnimationBudgetBlueprintLibrary::STATIC_SetParameters(class UObject* WorldContextObject, const struct FAnimationBudgetAllocatorParameters& InParameters)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AnimationBudgetAllocator.EmbarkAnimationBudgetBlueprintLibrary.SetParameters"));

	UEmbarkAnimationBudgetBlueprintLibrary_SetParameters_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InParameters = InParameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimationBudgetAllocator.EmbarkAnimationBudgetBlueprintLibrary.SetComponentSignificance
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponentBudgeted* Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Significance                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bNeverSkip                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bTickEvenIfNotRendered         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAllowReducedWork              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForceInterpolate              (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkAnimationBudgetBlueprintLibrary::STATIC_SetComponentSignificance(class UObject* WorldContextObject, class USkeletalMeshComponentBudgeted* Component, float Significance, bool bNeverSkip, bool bTickEvenIfNotRendered, bool bAllowReducedWork, bool bForceInterpolate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AnimationBudgetAllocator.EmbarkAnimationBudgetBlueprintLibrary.SetComponentSignificance"));

	UEmbarkAnimationBudgetBlueprintLibrary_SetComponentSignificance_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Component = Component;
	params.Significance = Significance;
	params.bNeverSkip = bNeverSkip;
	params.bTickEvenIfNotRendered = bTickEvenIfNotRendered;
	params.bAllowReducedWork = bAllowReducedWork;
	params.bForceInterpolate = bForceInterpolate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimationBudgetAllocator.EmbarkAnimationBudgetBlueprintLibrary.RegisterComponent
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponentBudgeted* InComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UEmbarkAnimationBudgetBlueprintLibrary::STATIC_RegisterComponent(class UObject* WorldContextObject, class USkeletalMeshComponentBudgeted* InComponent)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AnimationBudgetAllocator.EmbarkAnimationBudgetBlueprintLibrary.RegisterComponent"));

	UEmbarkAnimationBudgetBlueprintLibrary_RegisterComponent_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InComponent = InComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimationBudgetAllocator.EmbarkAnimationBudgetBlueprintLibrary.RecalculatePrerequisite
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponentBudgeted* ForComp                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USkeletalMeshComponentBudgeted* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USkeletalMeshComponentBudgeted* UEmbarkAnimationBudgetBlueprintLibrary::STATIC_RecalculatePrerequisite(class UObject* WorldContextObject, class USkeletalMeshComponentBudgeted* ForComp)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AnimationBudgetAllocator.EmbarkAnimationBudgetBlueprintLibrary.RecalculatePrerequisite"));

	UEmbarkAnimationBudgetBlueprintLibrary_RecalculatePrerequisite_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ForComp = ForComp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnimationBudgetAllocator.EmbarkAnimationBudgetBlueprintLibrary.GetAllRegisteredComponents
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FEmbarkAnimBudgetAllocatorComponentData> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FEmbarkAnimBudgetAllocatorComponentData> UEmbarkAnimationBudgetBlueprintLibrary::STATIC_GetAllRegisteredComponents(class UObject* WorldContextObject)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AnimationBudgetAllocator.EmbarkAnimationBudgetBlueprintLibrary.GetAllRegisteredComponents"));

	UEmbarkAnimationBudgetBlueprintLibrary_GetAllRegisteredComponents_Params params;
	params.WorldContextObject = WorldContextObject;

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
