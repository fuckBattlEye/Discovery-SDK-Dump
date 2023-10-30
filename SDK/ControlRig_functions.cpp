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

// Function ControlRig.ControlRig.SupportsEvent
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   InEventName                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UControlRig::SupportsEvent(const struct FName& InEventName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRig.SupportsEvent"));

	UControlRig_SupportsEvent_Params params;
	params.InEventName = InEventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.ControlRig.SetVariableFromString
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   InVariableName                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 InValue                        (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UControlRig::SetVariableFromString(const struct FName& InVariableName, const struct FString& InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRig.SetVariableFromString"));

	UControlRig_SetVariableFromString_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.ControlRig.SetInteractionRigClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  InInteractionRigClass          (Parm, ZeroConstructor, IsPlainOldData)

void UControlRig::SetInteractionRigClass(class UClass* InInteractionRigClass)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRig.SetInteractionRigClass"));

	UControlRig_SetInteractionRigClass_Params params;
	params.InInteractionRigClass = InInteractionRigClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.ControlRig.SetInteractionRig
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UControlRig*             InInteractionRig               (Parm, ZeroConstructor, IsPlainOldData)

void UControlRig::SetInteractionRig(class UControlRig* InInteractionRig)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRig.SetInteractionRig"));

	UControlRig_SetInteractionRig_Params params;
	params.InInteractionRig = InInteractionRig;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.ControlRig.SetFramesPerSecond
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InFramesPerSecond              (Parm, ZeroConstructor, IsPlainOldData)

void UControlRig::SetFramesPerSecond(float InFramesPerSecond)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRig.SetFramesPerSecond"));

	UControlRig_SetFramesPerSecond_Params params;
	params.InFramesPerSecond = InFramesPerSecond;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.ControlRig.SetDeltaTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UControlRig::SetDeltaTime(float InDeltaTime)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRig.SetDeltaTime"));

	UControlRig_SetDeltaTime_Params params;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.ControlRig.SetAbsoluteTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InAbsoluteTime                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           InSetDeltaTimeZero             (Parm, ZeroConstructor, IsPlainOldData)

void UControlRig::SetAbsoluteTime(float InAbsoluteTime, bool InSetDeltaTimeZero)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRig.SetAbsoluteTime"));

	UControlRig_SetAbsoluteTime_Params params;
	params.InAbsoluteTime = InAbsoluteTime;
	params.InSetDeltaTimeZero = InSetDeltaTimeZero;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.ControlRig.SetAbsoluteAndDeltaTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InAbsoluteTime                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UControlRig::SetAbsoluteAndDeltaTime(float InAbsoluteTime, float InDeltaTime)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRig.SetAbsoluteAndDeltaTime"));

	UControlRig_SetAbsoluteAndDeltaTime_Params params;
	params.InAbsoluteTime = InAbsoluteTime;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.ControlRig.SelectControl
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   InControlName                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           bSelect                        (Parm, ZeroConstructor, IsPlainOldData)

void UControlRig::SelectControl(const struct FName& InControlName, bool bSelect)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRig.SelectControl"));

	UControlRig_SelectControl_Params params;
	params.InControlName = InControlName;
	params.bSelect = bSelect;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.ControlRig.RequestSetup
// (Final, Native, Public, BlueprintCallable)

void UControlRig::RequestSetup()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRig.RequestSetup"));

	UControlRig_RequestSetup_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.ControlRig.RequestInit
// (Final, Native, Public, BlueprintCallable)

void UControlRig::RequestInit()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRig.RequestInit"));

	UControlRig_RequestInit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.ControlRig.IsControlSelected
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   InControlName                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UControlRig::IsControlSelected(const struct FName& InControlName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRig.IsControlSelected"));

	UControlRig_IsControlSelected_Params params;
	params.InControlName = InControlName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.ControlRig.GetVM
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class URigVM*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class URigVM* UControlRig::GetVM()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRig.GetVM"));

	UControlRig_GetVM_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.ControlRig.GetVariableType
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   InVariableName                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UControlRig::GetVariableType(const struct FName& InVariableName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRig.GetVariableType"));

	UControlRig_GetVariableType_Params params;
	params.InVariableName = InVariableName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.ControlRig.GetVariableAsString
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   InVariableName                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UControlRig::GetVariableAsString(const struct FName& InVariableName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRig.GetVariableAsString"));

	UControlRig_GetVariableAsString_Params params;
	params.InVariableName = InVariableName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.ControlRig.GetSupportedEvents
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FName> UControlRig::GetSupportedEvents()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRig.GetSupportedEvents"));

	UControlRig_GetSupportedEvents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.ControlRig.GetScriptAccessibleVariables
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FName> UControlRig::GetScriptAccessibleVariables()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRig.GetScriptAccessibleVariables"));

	UControlRig_GetScriptAccessibleVariables_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.ControlRig.GetInteractionRigClass
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UControlRig::GetInteractionRigClass()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRig.GetInteractionRigClass"));

	UControlRig_GetInteractionRigClass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.ControlRig.GetInteractionRig
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UControlRig*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UControlRig* UControlRig::GetInteractionRig()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRig.GetInteractionRig"));

	UControlRig_GetInteractionRig_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.ControlRig.GetHierarchy
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class URigHierarchy*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class URigHierarchy* UControlRig::GetHierarchy()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRig.GetHierarchy"));

	UControlRig_GetHierarchy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.ControlRig.GetCurrentFramesPerSecond
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UControlRig::GetCurrentFramesPerSecond()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRig.GetCurrentFramesPerSecond"));

	UControlRig_GetCurrentFramesPerSecond_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.ControlRig.GetAbsoluteTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UControlRig::GetAbsoluteTime()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRig.GetAbsoluteTime"));

	UControlRig_GetAbsoluteTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.ControlRig.FindControlRigs
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  OptionalClass                  (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UControlRig*>     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UControlRig*> UControlRig::STATIC_FindControlRigs(class UObject* Outer, class UClass* OptionalClass)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRig.FindControlRigs"));

	UControlRig_FindControlRigs_Params params;
	params.Outer = Outer;
	params.OptionalClass = OptionalClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.ControlRig.Execute
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// enum class EControlRigState    State                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   InEventName                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UControlRig::Execute(enum class EControlRigState State, const struct FName& InEventName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRig.Execute"));

	UControlRig_Execute_Params params;
	params.State = State;
	params.InEventName = InEventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.ControlRig.CurrentControlSelection
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FName> UControlRig::CurrentControlSelection()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRig.CurrentControlSelection"));

	UControlRig_CurrentControlSelection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.ControlRig.ClearControlSelection
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UControlRig::ClearControlSelection()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRig.ClearControlSelection"));

	UControlRig_ClearControlSelection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.ControlRig.CanExecute
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UControlRig::CanExecute()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRig.CanExecute"));

	UControlRig_CanExecute_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.ControlRigComponent.Update
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UControlRigComponent::Update(float DeltaTime)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRigComponent.Update"));

	UControlRigComponent_Update_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.ControlRigComponent.SetMappedElements
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FControlRigComponentMappedElement> NewMappedElements              (Parm, ZeroConstructor)

void UControlRigComponent::SetMappedElements(TArray<struct FControlRigComponentMappedElement> NewMappedElements)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRigComponent.SetMappedElements"));

	UControlRigComponent_SetMappedElements_Params params;
	params.NewMappedElements = NewMappedElements;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.ControlRigComponent.SetInitialSpaceTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   SpaceName                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              InitialTransform               (Parm, IsPlainOldData)
// enum class EControlRigComponentSpace Space                          (Parm, ZeroConstructor, IsPlainOldData)

void UControlRigComponent::SetInitialSpaceTransform(const struct FName& SpaceName, const struct FTransform& InitialTransform, enum class EControlRigComponentSpace Space)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRigComponent.SetInitialSpaceTransform"));

	UControlRigComponent_SetInitialSpaceTransform_Params params;
	params.SpaceName = SpaceName;
	params.InitialTransform = InitialTransform;
	params.Space = Space;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.ControlRigComponent.SetInitialBoneTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              InitialTransform               (Parm, IsPlainOldData)
// enum class EControlRigComponentSpace Space                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPropagateToChildren           (Parm, ZeroConstructor, IsPlainOldData)

void UControlRigComponent::SetInitialBoneTransform(const struct FName& BoneName, const struct FTransform& InitialTransform, enum class EControlRigComponentSpace Space, bool bPropagateToChildren)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRigComponent.SetInitialBoneTransform"));

	UControlRigComponent_SetInitialBoneTransform_Params params;
	params.BoneName = BoneName;
	params.InitialTransform = InitialTransform;
	params.Space = Space;
	params.bPropagateToChildren = bPropagateToChildren;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.ControlRigComponent.SetControlVector2D
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   ControlName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UControlRigComponent::SetControlVector2D(const struct FName& ControlName, const struct FVector2D& Value)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRigComponent.SetControlVector2D"));

	UControlRigComponent_SetControlVector2D_Params params;
	params.ControlName = ControlName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.ControlRigComponent.SetControlTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   ControlName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Value                          (Parm, IsPlainOldData)
// enum class EControlRigComponentSpace Space                          (Parm, ZeroConstructor, IsPlainOldData)

void UControlRigComponent::SetControlTransform(const struct FName& ControlName, const struct FTransform& Value, enum class EControlRigComponentSpace Space)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRigComponent.SetControlTransform"));

	UControlRigComponent_SetControlTransform_Params params;
	params.ControlName = ControlName;
	params.Value = Value;
	params.Space = Space;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.ControlRigComponent.SetControlScale
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   ControlName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Value                          (Parm, ZeroConstructor, IsPlainOldData)
// enum class EControlRigComponentSpace Space                          (Parm, ZeroConstructor, IsPlainOldData)

void UControlRigComponent::SetControlScale(const struct FName& ControlName, const struct FVector& Value, enum class EControlRigComponentSpace Space)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRigComponent.SetControlScale"));

	UControlRigComponent_SetControlScale_Params params;
	params.ControlName = ControlName;
	params.Value = Value;
	params.Space = Space;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.ControlRigComponent.SetControlRotator
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   ControlName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Value                          (Parm, ZeroConstructor, IsPlainOldData)
// enum class EControlRigComponentSpace Space                          (Parm, ZeroConstructor, IsPlainOldData)

void UControlRigComponent::SetControlRotator(const struct FName& ControlName, const struct FRotator& Value, enum class EControlRigComponentSpace Space)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRigComponent.SetControlRotator"));

	UControlRigComponent_SetControlRotator_Params params;
	params.ControlName = ControlName;
	params.Value = Value;
	params.Space = Space;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.ControlRigComponent.SetControlPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   ControlName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Value                          (Parm, ZeroConstructor, IsPlainOldData)
// enum class EControlRigComponentSpace Space                          (Parm, ZeroConstructor, IsPlainOldData)

void UControlRigComponent::SetControlPosition(const struct FName& ControlName, const struct FVector& Value, enum class EControlRigComponentSpace Space)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRigComponent.SetControlPosition"));

	UControlRigComponent_SetControlPosition_Params params;
	params.ControlName = ControlName;
	params.Value = Value;
	params.Space = Space;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.ControlRigComponent.SetControlOffset
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   ControlName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              OffsetTransform                (Parm, IsPlainOldData)
// enum class EControlRigComponentSpace Space                          (Parm, ZeroConstructor, IsPlainOldData)

void UControlRigComponent::SetControlOffset(const struct FName& ControlName, const struct FTransform& OffsetTransform, enum class EControlRigComponentSpace Space)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRigComponent.SetControlOffset"));

	UControlRigComponent_SetControlOffset_Params params;
	params.ControlName = ControlName;
	params.OffsetTransform = OffsetTransform;
	params.Space = Space;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.ControlRigComponent.SetControlInt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   ControlName                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UControlRigComponent::SetControlInt(const struct FName& ControlName, int Value)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRigComponent.SetControlInt"));

	UControlRigComponent_SetControlInt_Params params;
	params.ControlName = ControlName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.ControlRigComponent.SetControlFloat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   ControlName                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UControlRigComponent::SetControlFloat(const struct FName& ControlName, float Value)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRigComponent.SetControlFloat"));

	UControlRigComponent_SetControlFloat_Params params;
	params.ControlName = ControlName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.ControlRigComponent.SetControlBool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   ControlName                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UControlRigComponent::SetControlBool(const struct FName& ControlName, bool Value)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRigComponent.SetControlBool"));

	UControlRigComponent_SetControlBool_Params params;
	params.ControlName = ControlName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.ControlRigComponent.SetBoneTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Transform                      (Parm, IsPlainOldData)
// enum class EControlRigComponentSpace Space                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Weight                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPropagateToChildren           (Parm, ZeroConstructor, IsPlainOldData)

void UControlRigComponent::SetBoneTransform(const struct FName& BoneName, const struct FTransform& Transform, enum class EControlRigComponentSpace Space, float Weight, bool bPropagateToChildren)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRigComponent.SetBoneTransform"));

	UControlRigComponent_SetBoneTransform_Params params;
	params.BoneName = BoneName;
	params.Transform = Transform;
	params.Space = Space;
	params.Weight = Weight;
	params.bPropagateToChildren = bPropagateToChildren;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.ControlRigComponent.SetBoneInitialTransformsFromSkeletalMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USkeletalMesh*           InSkeletalMesh                 (Parm, ZeroConstructor, IsPlainOldData)

void UControlRigComponent::SetBoneInitialTransformsFromSkeletalMesh(class USkeletalMesh* InSkeletalMesh)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRigComponent.SetBoneInitialTransformsFromSkeletalMesh"));

	UControlRigComponent_SetBoneInitialTransformsFromSkeletalMesh_Params params;
	params.InSkeletalMesh = InSkeletalMesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.ControlRigComponent.OnPreSetup
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UControlRigComponent*    Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UControlRigComponent::OnPreSetup(class UControlRigComponent* Component)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRigComponent.OnPreSetup"));

	UControlRigComponent_OnPreSetup_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.ControlRigComponent.OnPreInitialize
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UControlRigComponent*    Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UControlRigComponent::OnPreInitialize(class UControlRigComponent* Component)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRigComponent.OnPreInitialize"));

	UControlRigComponent_OnPreInitialize_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.ControlRigComponent.OnPreForwardsSolve
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UControlRigComponent*    Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UControlRigComponent::OnPreForwardsSolve(class UControlRigComponent* Component)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRigComponent.OnPreForwardsSolve"));

	UControlRigComponent_OnPreForwardsSolve_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.ControlRigComponent.OnPostSetup
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UControlRigComponent*    Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UControlRigComponent::OnPostSetup(class UControlRigComponent* Component)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRigComponent.OnPostSetup"));

	UControlRigComponent_OnPostSetup_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.ControlRigComponent.OnPostInitialize
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UControlRigComponent*    Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UControlRigComponent::OnPostInitialize(class UControlRigComponent* Component)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRigComponent.OnPostInitialize"));

	UControlRigComponent_OnPostInitialize_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.ControlRigComponent.OnPostForwardsSolve
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UControlRigComponent*    Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UControlRigComponent::OnPostForwardsSolve(class UControlRigComponent* Component)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRigComponent.OnPostForwardsSolve"));

	UControlRigComponent_OnPostForwardsSolve_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.ControlRigComponent.Initialize
// (Final, Native, Public, BlueprintCallable)

void UControlRigComponent::Initialize()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRigComponent.Initialize"));

	UControlRigComponent_Initialize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.ControlRigComponent.GetSpaceTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   SpaceName                      (Parm, ZeroConstructor, IsPlainOldData)
// enum class EControlRigComponentSpace Space                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UControlRigComponent::GetSpaceTransform(const struct FName& SpaceName, enum class EControlRigComponentSpace Space)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRigComponent.GetSpaceTransform"));

	UControlRigComponent_GetSpaceTransform_Params params;
	params.SpaceName = SpaceName;
	params.Space = Space;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.ControlRigComponent.GetInitialSpaceTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   SpaceName                      (Parm, ZeroConstructor, IsPlainOldData)
// enum class EControlRigComponentSpace Space                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UControlRigComponent::GetInitialSpaceTransform(const struct FName& SpaceName, enum class EControlRigComponentSpace Space)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRigComponent.GetInitialSpaceTransform"));

	UControlRigComponent_GetInitialSpaceTransform_Params params;
	params.SpaceName = SpaceName;
	params.Space = Space;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.ControlRigComponent.GetInitialBoneTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// enum class EControlRigComponentSpace Space                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UControlRigComponent::GetInitialBoneTransform(const struct FName& BoneName, enum class EControlRigComponentSpace Space)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRigComponent.GetInitialBoneTransform"));

	UControlRigComponent_GetInitialBoneTransform_Params params;
	params.BoneName = BoneName;
	params.Space = Space;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.ControlRigComponent.GetElementNames
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class ERigElementType     ElementType                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FName> UControlRigComponent::GetElementNames(enum class ERigElementType ElementType)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRigComponent.GetElementNames"));

	UControlRigComponent_GetElementNames_Params params;
	params.ElementType = ElementType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.ControlRigComponent.GetControlVector2D
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   ControlName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D UControlRigComponent::GetControlVector2D(const struct FName& ControlName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRigComponent.GetControlVector2D"));

	UControlRigComponent_GetControlVector2D_Params params;
	params.ControlName = ControlName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.ControlRigComponent.GetControlTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   ControlName                    (Parm, ZeroConstructor, IsPlainOldData)
// enum class EControlRigComponentSpace Space                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UControlRigComponent::GetControlTransform(const struct FName& ControlName, enum class EControlRigComponentSpace Space)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRigComponent.GetControlTransform"));

	UControlRigComponent_GetControlTransform_Params params;
	params.ControlName = ControlName;
	params.Space = Space;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.ControlRigComponent.GetControlScale
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   ControlName                    (Parm, ZeroConstructor, IsPlainOldData)
// enum class EControlRigComponentSpace Space                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UControlRigComponent::GetControlScale(const struct FName& ControlName, enum class EControlRigComponentSpace Space)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRigComponent.GetControlScale"));

	UControlRigComponent_GetControlScale_Params params;
	params.ControlName = ControlName;
	params.Space = Space;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.ControlRigComponent.GetControlRotator
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   ControlName                    (Parm, ZeroConstructor, IsPlainOldData)
// enum class EControlRigComponentSpace Space                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator UControlRigComponent::GetControlRotator(const struct FName& ControlName, enum class EControlRigComponentSpace Space)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRigComponent.GetControlRotator"));

	UControlRigComponent_GetControlRotator_Params params;
	params.ControlName = ControlName;
	params.Space = Space;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.ControlRigComponent.GetControlRig
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UControlRig*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UControlRig* UControlRigComponent::GetControlRig()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRigComponent.GetControlRig"));

	UControlRigComponent_GetControlRig_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.ControlRigComponent.GetControlPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   ControlName                    (Parm, ZeroConstructor, IsPlainOldData)
// enum class EControlRigComponentSpace Space                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UControlRigComponent::GetControlPosition(const struct FName& ControlName, enum class EControlRigComponentSpace Space)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRigComponent.GetControlPosition"));

	UControlRigComponent_GetControlPosition_Params params;
	params.ControlName = ControlName;
	params.Space = Space;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.ControlRigComponent.GetControlOffset
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   ControlName                    (Parm, ZeroConstructor, IsPlainOldData)
// enum class EControlRigComponentSpace Space                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UControlRigComponent::GetControlOffset(const struct FName& ControlName, enum class EControlRigComponentSpace Space)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRigComponent.GetControlOffset"));

	UControlRigComponent_GetControlOffset_Params params;
	params.ControlName = ControlName;
	params.Space = Space;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.ControlRigComponent.GetControlInt
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   ControlName                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UControlRigComponent::GetControlInt(const struct FName& ControlName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRigComponent.GetControlInt"));

	UControlRigComponent_GetControlInt_Params params;
	params.ControlName = ControlName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.ControlRigComponent.GetControlFloat
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   ControlName                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UControlRigComponent::GetControlFloat(const struct FName& ControlName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRigComponent.GetControlFloat"));

	UControlRigComponent_GetControlFloat_Params params;
	params.ControlName = ControlName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.ControlRigComponent.GetControlBool
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   ControlName                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UControlRigComponent::GetControlBool(const struct FName& ControlName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRigComponent.GetControlBool"));

	UControlRigComponent_GetControlBool_Params params;
	params.ControlName = ControlName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.ControlRigComponent.GetBoneTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// enum class EControlRigComponentSpace Space                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UControlRigComponent::GetBoneTransform(const struct FName& BoneName, enum class EControlRigComponentSpace Space)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRigComponent.GetBoneTransform"));

	UControlRigComponent_GetBoneTransform_Params params;
	params.BoneName = BoneName;
	params.Space = Space;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.ControlRigComponent.GetAbsoluteTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UControlRigComponent::GetAbsoluteTime()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRigComponent.GetAbsoluteTime"));

	UControlRigComponent_GetAbsoluteTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.ControlRigComponent.DoesElementExist
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// enum class ERigElementType     ElementType                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UControlRigComponent::DoesElementExist(const struct FName& Name, enum class ERigElementType ElementType)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRigComponent.DoesElementExist"));

	UControlRigComponent_DoesElementExist_Params params;
	params.Name = Name;
	params.ElementType = ElementType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.ControlRigComponent.ClearMappedElements
// (Final, Native, Public, BlueprintCallable)

void UControlRigComponent::ClearMappedElements()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRigComponent.ClearMappedElements"));

	UControlRigComponent_ClearMappedElements_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.ControlRigComponent.CanExecute
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UControlRigComponent::CanExecute()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRigComponent.CanExecute"));

	UControlRigComponent_CanExecute_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.ControlRigComponent.AddMappedSkeletalMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  SkeletalMeshComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TArray<struct FControlRigComponentMappedBone> Bones                          (Parm, ZeroConstructor)
// TArray<struct FControlRigComponentMappedCurve> Curves                         (Parm, ZeroConstructor)

void UControlRigComponent::AddMappedSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshComponent, TArray<struct FControlRigComponentMappedBone> Bones, TArray<struct FControlRigComponentMappedCurve> Curves)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRigComponent.AddMappedSkeletalMesh"));

	UControlRigComponent_AddMappedSkeletalMesh_Params params;
	params.SkeletalMeshComponent = SkeletalMeshComponent;
	params.Bones = Bones;
	params.Curves = Curves;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.ControlRigComponent.AddMappedElements
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FControlRigComponentMappedElement> NewMappedElements              (Parm, ZeroConstructor)

void UControlRigComponent::AddMappedElements(TArray<struct FControlRigComponentMappedElement> NewMappedElements)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRigComponent.AddMappedElements"));

	UControlRigComponent_AddMappedElements_Params params;
	params.NewMappedElements = NewMappedElements;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.ControlRigComponent.AddMappedComponents
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FControlRigComponentMappedComponent> Components                     (Parm, ZeroConstructor)

void UControlRigComponent::AddMappedComponents(TArray<struct FControlRigComponentMappedComponent> Components)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRigComponent.AddMappedComponents"));

	UControlRigComponent_AddMappedComponents_Params params;
	params.Components = Components;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.ControlRigComponent.AddMappedCompleteSkeletalMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  SkeletalMeshComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UControlRigComponent::AddMappedCompleteSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshComponent)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRigComponent.AddMappedCompleteSkeletalMesh"));

	UControlRigComponent_AddMappedCompleteSkeletalMesh_Params params;
	params.SkeletalMeshComponent = SkeletalMeshComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.ControlRigControlActor.Refresh
// (Final, Native, Public, BlueprintCallable)

void AControlRigControlActor::Refresh()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRigControlActor.Refresh"));

	AControlRigControlActor_Refresh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.ControlRigControlActor.Clear
// (Final, Native, Public, BlueprintCallable)

void AControlRigControlActor::Clear()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRigControlActor.Clear"));

	AControlRigControlActor_Clear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.ControlRigShapeActor.SetSelected
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInSelected                    (Parm, ZeroConstructor, IsPlainOldData)

void AControlRigShapeActor::SetSelected(bool bInSelected)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRigShapeActor.SetSelected"));

	AControlRigShapeActor_SetSelected_Params params;
	params.bInSelected = bInSelected;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.ControlRigShapeActor.SetSelectable
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInSelectable                  (Parm, ZeroConstructor, IsPlainOldData)

void AControlRigShapeActor::SetSelectable(bool bInSelectable)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRigShapeActor.SetSelectable"));

	AControlRigShapeActor_SetSelectable_Params params;
	params.bInSelectable = bInSelectable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.ControlRigShapeActor.SetHovered
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInHovered                     (Parm, ZeroConstructor, IsPlainOldData)

void AControlRigShapeActor::SetHovered(bool bInHovered)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRigShapeActor.SetHovered"));

	AControlRigShapeActor_SetHovered_Params params;
	params.bInHovered = bInHovered;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.ControlRigShapeActor.SetGlobalTransform
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform              InTransform                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AControlRigShapeActor::SetGlobalTransform(const struct FTransform& InTransform)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRigShapeActor.SetGlobalTransform"));

	AControlRigShapeActor_SetGlobalTransform_Params params;
	params.InTransform = InTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.ControlRigShapeActor.SetEnabled
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInEnabled                     (Parm, ZeroConstructor, IsPlainOldData)

void AControlRigShapeActor::SetEnabled(bool bInEnabled)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRigShapeActor.SetEnabled"));

	AControlRigShapeActor_SetEnabled_Params params;
	params.bInEnabled = bInEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.ControlRigShapeActor.OnTransformChanged
// (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// struct FTransform              NewTransform                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AControlRigShapeActor::OnTransformChanged(const struct FTransform& NewTransform)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRigShapeActor.OnTransformChanged"));

	AControlRigShapeActor_OnTransformChanged_Params params;
	params.NewTransform = NewTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.ControlRigShapeActor.OnSelectionChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bIsSelected                    (Parm, ZeroConstructor, IsPlainOldData)

void AControlRigShapeActor::OnSelectionChanged(bool bIsSelected)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRigShapeActor.OnSelectionChanged"));

	AControlRigShapeActor_OnSelectionChanged_Params params;
	params.bIsSelected = bIsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.ControlRigShapeActor.OnManipulatingChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bIsManipulating                (Parm, ZeroConstructor, IsPlainOldData)

void AControlRigShapeActor::OnManipulatingChanged(bool bIsManipulating)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRigShapeActor.OnManipulatingChanged"));

	AControlRigShapeActor_OnManipulatingChanged_Params params;
	params.bIsManipulating = bIsManipulating;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.ControlRigShapeActor.OnHoveredChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bIsSelected                    (Parm, ZeroConstructor, IsPlainOldData)

void AControlRigShapeActor::OnHoveredChanged(bool bIsSelected)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRigShapeActor.OnHoveredChanged"));

	AControlRigShapeActor_OnHoveredChanged_Params params;
	params.bIsSelected = bIsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.ControlRigShapeActor.OnEnabledChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bIsEnabled                     (Parm, ZeroConstructor, IsPlainOldData)

void AControlRigShapeActor::OnEnabledChanged(bool bIsEnabled)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRigShapeActor.OnEnabledChanged"));

	AControlRigShapeActor_OnEnabledChanged_Params params;
	params.bIsEnabled = bIsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.ControlRigShapeActor.IsSelectedInEditor
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AControlRigShapeActor::IsSelectedInEditor()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRigShapeActor.IsSelectedInEditor"));

	AControlRigShapeActor_IsSelectedInEditor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.ControlRigShapeActor.IsHovered
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AControlRigShapeActor::IsHovered()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRigShapeActor.IsHovered"));

	AControlRigShapeActor_IsHovered_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.ControlRigShapeActor.IsEnabled
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AControlRigShapeActor::IsEnabled()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRigShapeActor.IsEnabled"));

	AControlRigShapeActor_IsEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.ControlRigShapeActor.GetGlobalTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform AControlRigShapeActor::GetGlobalTransform()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRigShapeActor.GetGlobalTransform"));

	AControlRigShapeActor_GetGlobalTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.ControlRigPoseAsset.SelectControls
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UControlRig*             InControlRig                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDoMirror                      (Parm, ZeroConstructor, IsPlainOldData)

void UControlRigPoseAsset::SelectControls(class UControlRig* InControlRig, bool bDoMirror)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRigPoseAsset.SelectControls"));

	UControlRigPoseAsset_SelectControls_Params params;
	params.InControlRig = InControlRig;
	params.bDoMirror = bDoMirror;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.ControlRigPoseAsset.SavePose
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UControlRig*             InControlRig                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseAll                        (Parm, ZeroConstructor, IsPlainOldData)

void UControlRigPoseAsset::SavePose(class UControlRig* InControlRig, bool bUseAll)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRigPoseAsset.SavePose"));

	UControlRigPoseAsset_SavePose_Params params;
	params.InControlRig = InControlRig;
	params.bUseAll = bUseAll;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.ControlRigPoseAsset.ReplaceControlName
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   CurrentName                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   NewName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UControlRigPoseAsset::ReplaceControlName(const struct FName& CurrentName, const struct FName& NewName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRigPoseAsset.ReplaceControlName"));

	UControlRigPoseAsset_ReplaceControlName_Params params;
	params.CurrentName = CurrentName;
	params.NewName = NewName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.ControlRigPoseAsset.PastePose
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UControlRig*             InControlRig                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDoKey                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDoMirror                      (Parm, ZeroConstructor, IsPlainOldData)

void UControlRigPoseAsset::PastePose(class UControlRig* InControlRig, bool bDoKey, bool bDoMirror)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRigPoseAsset.PastePose"));

	UControlRigPoseAsset_PastePose_Params params;
	params.InControlRig = InControlRig;
	params.bDoKey = bDoKey;
	params.bDoMirror = bDoMirror;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.ControlRigPoseAsset.GetCurrentPose
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UControlRig*             InControlRig                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FControlRigControlPose  OutPose                        (Parm, OutParm)

void UControlRigPoseAsset::GetCurrentPose(class UControlRig* InControlRig, struct FControlRigControlPose* OutPose)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRigPoseAsset.GetCurrentPose"));

	UControlRigPoseAsset_GetCurrentPose_Params params;
	params.InControlRig = InControlRig;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPose != nullptr)
		*OutPose = params.OutPose;
}


// Function ControlRig.ControlRigPoseAsset.GetControlNames
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FName> UControlRigPoseAsset::GetControlNames()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRigPoseAsset.GetControlNames"));

	UControlRigPoseAsset_GetControlNames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.ControlRigPoseAsset.DoesMirrorMatch
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UControlRig*             ControlRig                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ControlName                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UControlRigPoseAsset::DoesMirrorMatch(class UControlRig* ControlRig, const struct FName& ControlName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.ControlRigPoseAsset.DoesMirrorMatch"));

	UControlRigPoseAsset_DoesMirrorMatch_Params params;
	params.ControlRig = ControlRig;
	params.ControlName = ControlName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchy.SwitchToWorldSpace
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey          InChild                        (Parm)
// bool                           bInitial                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAffectChildren                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool URigHierarchy::SwitchToWorldSpace(const struct FRigElementKey& InChild, bool bInitial, bool bAffectChildren)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.SwitchToWorldSpace"));

	URigHierarchy_SwitchToWorldSpace_Params params;
	params.InChild = InChild;
	params.bInitial = bInitial;
	params.bAffectChildren = bAffectChildren;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchy.SwitchToParent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey          InChild                        (Parm)
// struct FRigElementKey          InParent                       (Parm)
// bool                           bInitial                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAffectChildren                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool URigHierarchy::SwitchToParent(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, bool bInitial, bool bAffectChildren)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.SwitchToParent"));

	URigHierarchy_SwitchToParent_Params params;
	params.InChild = InChild;
	params.InParent = InParent;
	params.bInitial = bInitial;
	params.bAffectChildren = bAffectChildren;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchy.SwitchToDefaultParent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey          InChild                        (Parm)
// bool                           bInitial                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAffectChildren                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool URigHierarchy::SwitchToDefaultParent(const struct FRigElementKey& InChild, bool bInitial, bool bAffectChildren)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.SwitchToDefaultParent"));

	URigHierarchy_SwitchToDefaultParent_Params params;
	params.InChild = InChild;
	params.bInitial = bInitial;
	params.bAffectChildren = bAffectChildren;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchy.SortKeys
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FRigElementKey>  InKeys                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FRigElementKey>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FRigElementKey> URigHierarchy::SortKeys(TArray<struct FRigElementKey> InKeys)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.SortKeys"));

	URigHierarchy_SortKeys_Params params;
	params.InKeys = InKeys;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchy.SetPose_ForBlueprint
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigPose                InPose                         (Parm)

void URigHierarchy::SetPose_ForBlueprint(const struct FRigPose& InPose)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.SetPose_ForBlueprint"));

	URigHierarchy_SetPose_ForBlueprint_Params params;
	params.InPose = InPose;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.RigHierarchy.SetParentWeightArray
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey          InChild                        (Parm)
// TArray<struct FRigElementWeight> InWeights                      (Parm, ZeroConstructor)
// bool                           bInitial                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAffectChildren                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool URigHierarchy::SetParentWeightArray(const struct FRigElementKey& InChild, TArray<struct FRigElementWeight> InWeights, bool bInitial, bool bAffectChildren)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.SetParentWeightArray"));

	URigHierarchy_SetParentWeightArray_Params params;
	params.InChild = InChild;
	params.InWeights = InWeights;
	params.bInitial = bInitial;
	params.bAffectChildren = bAffectChildren;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchy.SetParentWeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey          InChild                        (Parm)
// struct FRigElementKey          InParent                       (Parm)
// struct FRigElementWeight       InWeight                       (Parm)
// bool                           bInitial                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAffectChildren                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool URigHierarchy::SetParentWeight(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, const struct FRigElementWeight& InWeight, bool bInitial, bool bAffectChildren)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.SetParentWeight"));

	URigHierarchy_SetParentWeight_Params params;
	params.InChild = InChild;
	params.InParent = InParent;
	params.InWeight = InWeight;
	params.bInitial = bInitial;
	params.bAffectChildren = bAffectChildren;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchy.SetLocalTransformByIndex
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// int                            InElementIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              InTransform                    (Parm, IsPlainOldData)
// bool                           bInitial                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAffectChildren                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSetupUndo                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPrintPythonCommands           (Parm, ZeroConstructor, IsPlainOldData)

void URigHierarchy::SetLocalTransformByIndex(int InElementIndex, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.SetLocalTransformByIndex"));

	URigHierarchy_SetLocalTransformByIndex_Params params;
	params.InElementIndex = InElementIndex;
	params.InTransform = InTransform;
	params.bInitial = bInitial;
	params.bAffectChildren = bAffectChildren;
	params.bSetupUndo = bSetupUndo;
	params.bPrintPythonCommands = bPrintPythonCommands;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.RigHierarchy.SetLocalTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRigElementKey          InKey                          (Parm)
// struct FTransform              InTransform                    (Parm, IsPlainOldData)
// bool                           bInitial                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAffectChildren                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSetupUndo                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPrintPythonCommands           (Parm, ZeroConstructor, IsPlainOldData)

void URigHierarchy::SetLocalTransform(const struct FRigElementKey& InKey, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.SetLocalTransform"));

	URigHierarchy_SetLocalTransform_Params params;
	params.InKey = InKey;
	params.InTransform = InTransform;
	params.bInitial = bInitial;
	params.bAffectChildren = bAffectChildren;
	params.bSetupUndo = bSetupUndo;
	params.bPrintPythonCommands = bPrintPythonCommands;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.RigHierarchy.SetGlobalTransformByIndex
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// int                            InElementIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              InTransform                    (Parm, IsPlainOldData)
// bool                           bInitial                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAffectChildren                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSetupUndo                     (Parm, ZeroConstructor, IsPlainOldData)

void URigHierarchy::SetGlobalTransformByIndex(int InElementIndex, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.SetGlobalTransformByIndex"));

	URigHierarchy_SetGlobalTransformByIndex_Params params;
	params.InElementIndex = InElementIndex;
	params.InTransform = InTransform;
	params.bInitial = bInitial;
	params.bAffectChildren = bAffectChildren;
	params.bSetupUndo = bSetupUndo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.RigHierarchy.SetGlobalTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRigElementKey          InKey                          (Parm)
// struct FTransform              InTransform                    (Parm, IsPlainOldData)
// bool                           bInitial                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAffectChildren                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSetupUndo                     (Parm, ZeroConstructor, IsPlainOldData)

void URigHierarchy::SetGlobalTransform(const struct FRigElementKey& InKey, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.SetGlobalTransform"));

	URigHierarchy_SetGlobalTransform_Params params;
	params.InKey = InKey;
	params.InTransform = InTransform;
	params.bInitial = bInitial;
	params.bAffectChildren = bAffectChildren;
	params.bSetupUndo = bSetupUndo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.RigHierarchy.SetCurveValueByIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InElementIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSetupUndo                     (Parm, ZeroConstructor, IsPlainOldData)

void URigHierarchy::SetCurveValueByIndex(int InElementIndex, float InValue, bool bSetupUndo)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.SetCurveValueByIndex"));

	URigHierarchy_SetCurveValueByIndex_Params params;
	params.InElementIndex = InElementIndex;
	params.InValue = InValue;
	params.bSetupUndo = bSetupUndo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.RigHierarchy.SetCurveValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey          InKey                          (Parm)
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSetupUndo                     (Parm, ZeroConstructor, IsPlainOldData)

void URigHierarchy::SetCurveValue(const struct FRigElementKey& InKey, float InValue, bool bSetupUndo)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.SetCurveValue"));

	URigHierarchy_SetCurveValue_Params params;
	params.InKey = InKey;
	params.InValue = InValue;
	params.bSetupUndo = bSetupUndo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.RigHierarchy.SetControlVisibilityByIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InElementIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bVisibility                    (Parm, ZeroConstructor, IsPlainOldData)

void URigHierarchy::SetControlVisibilityByIndex(int InElementIndex, bool bVisibility)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.SetControlVisibilityByIndex"));

	URigHierarchy_SetControlVisibilityByIndex_Params params;
	params.InElementIndex = InElementIndex;
	params.bVisibility = bVisibility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.RigHierarchy.SetControlVisibility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey          InKey                          (Parm)
// bool                           bVisibility                    (Parm, ZeroConstructor, IsPlainOldData)

void URigHierarchy::SetControlVisibility(const struct FRigElementKey& InKey, bool bVisibility)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.SetControlVisibility"));

	URigHierarchy_SetControlVisibility_Params params;
	params.InKey = InKey;
	params.bVisibility = bVisibility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.RigHierarchy.SetControlValueByIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InElementIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FRigControlValue        InValue                        (Parm)
// enum class ERigControlValueType InValueType                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSetupUndo                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPrintPythonCommands           (Parm, ZeroConstructor, IsPlainOldData)

void URigHierarchy::SetControlValueByIndex(int InElementIndex, const struct FRigControlValue& InValue, enum class ERigControlValueType InValueType, bool bSetupUndo, bool bPrintPythonCommands)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.SetControlValueByIndex"));

	URigHierarchy_SetControlValueByIndex_Params params;
	params.InElementIndex = InElementIndex;
	params.InValue = InValue;
	params.InValueType = InValueType;
	params.bSetupUndo = bSetupUndo;
	params.bPrintPythonCommands = bPrintPythonCommands;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.RigHierarchy.SetControlValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey          InKey                          (Parm)
// struct FRigControlValue        InValue                        (Parm)
// enum class ERigControlValueType InValueType                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSetupUndo                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPrintPythonCommands           (Parm, ZeroConstructor, IsPlainOldData)

void URigHierarchy::SetControlValue(const struct FRigElementKey& InKey, const struct FRigControlValue& InValue, enum class ERigControlValueType InValueType, bool bSetupUndo, bool bPrintPythonCommands)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.SetControlValue"));

	URigHierarchy_SetControlValue_Params params;
	params.InKey = InKey;
	params.InValue = InValue;
	params.InValueType = InValueType;
	params.bSetupUndo = bSetupUndo;
	params.bPrintPythonCommands = bPrintPythonCommands;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.RigHierarchy.SetControlShapeTransformByIndex
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// int                            InElementIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              InTransform                    (Parm, IsPlainOldData)
// bool                           bInitial                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSetupUndo                     (Parm, ZeroConstructor, IsPlainOldData)

void URigHierarchy::SetControlShapeTransformByIndex(int InElementIndex, const struct FTransform& InTransform, bool bInitial, bool bSetupUndo)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.SetControlShapeTransformByIndex"));

	URigHierarchy_SetControlShapeTransformByIndex_Params params;
	params.InElementIndex = InElementIndex;
	params.InTransform = InTransform;
	params.bInitial = bInitial;
	params.bSetupUndo = bSetupUndo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.RigHierarchy.SetControlShapeTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRigElementKey          InKey                          (Parm)
// struct FTransform              InTransform                    (Parm, IsPlainOldData)
// bool                           bInitial                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSetupUndo                     (Parm, ZeroConstructor, IsPlainOldData)

void URigHierarchy::SetControlShapeTransform(const struct FRigElementKey& InKey, const struct FTransform& InTransform, bool bInitial, bool bSetupUndo)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.SetControlShapeTransform"));

	URigHierarchy_SetControlShapeTransform_Params params;
	params.InKey = InKey;
	params.InTransform = InTransform;
	params.bInitial = bInitial;
	params.bSetupUndo = bSetupUndo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.RigHierarchy.SetControlSettingsByIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InElementIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FRigControlSettings     InSettings                     (Parm)
// bool                           bSetupUndo                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForce                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPrintPythonCommands           (Parm, ZeroConstructor, IsPlainOldData)

void URigHierarchy::SetControlSettingsByIndex(int InElementIndex, const struct FRigControlSettings& InSettings, bool bSetupUndo, bool bForce, bool bPrintPythonCommands)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.SetControlSettingsByIndex"));

	URigHierarchy_SetControlSettingsByIndex_Params params;
	params.InElementIndex = InElementIndex;
	params.InSettings = InSettings;
	params.bSetupUndo = bSetupUndo;
	params.bForce = bForce;
	params.bPrintPythonCommands = bPrintPythonCommands;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.RigHierarchy.SetControlSettings
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey          InKey                          (Parm)
// struct FRigControlSettings     InSettings                     (Parm)
// bool                           bSetupUndo                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForce                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPrintPythonCommands           (Parm, ZeroConstructor, IsPlainOldData)

void URigHierarchy::SetControlSettings(const struct FRigElementKey& InKey, const struct FRigControlSettings& InSettings, bool bSetupUndo, bool bForce, bool bPrintPythonCommands)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.SetControlSettings"));

	URigHierarchy_SetControlSettings_Params params;
	params.InKey = InKey;
	params.InSettings = InSettings;
	params.bSetupUndo = bSetupUndo;
	params.bForce = bForce;
	params.bPrintPythonCommands = bPrintPythonCommands;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.RigHierarchy.SetControlOffsetTransformByIndex
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// int                            InElementIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              InTransform                    (Parm, IsPlainOldData)
// bool                           bInitial                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAffectChildren                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSetupUndo                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPrintPythonCommands           (Parm, ZeroConstructor, IsPlainOldData)

void URigHierarchy::SetControlOffsetTransformByIndex(int InElementIndex, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.SetControlOffsetTransformByIndex"));

	URigHierarchy_SetControlOffsetTransformByIndex_Params params;
	params.InElementIndex = InElementIndex;
	params.InTransform = InTransform;
	params.bInitial = bInitial;
	params.bAffectChildren = bAffectChildren;
	params.bSetupUndo = bSetupUndo;
	params.bPrintPythonCommands = bPrintPythonCommands;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.RigHierarchy.SetControlOffsetTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRigElementKey          InKey                          (Parm)
// struct FTransform              InTransform                    (Parm, IsPlainOldData)
// bool                           bInitial                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAffectChildren                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSetupUndo                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPrintPythonCommands           (Parm, ZeroConstructor, IsPlainOldData)

void URigHierarchy::SetControlOffsetTransform(const struct FRigElementKey& InKey, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.SetControlOffsetTransform"));

	URigHierarchy_SetControlOffsetTransform_Params params;
	params.InKey = InKey;
	params.InTransform = InTransform;
	params.bInitial = bInitial;
	params.bAffectChildren = bAffectChildren;
	params.bSetupUndo = bSetupUndo;
	params.bPrintPythonCommands = bPrintPythonCommands;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.RigHierarchy.SendAutoKeyEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey          InElement                      (Parm)
// float                          InOffsetInSeconds              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAsynchronous                  (Parm, ZeroConstructor, IsPlainOldData)

void URigHierarchy::SendAutoKeyEvent(const struct FRigElementKey& InElement, float InOffsetInSeconds, bool bAsynchronous)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.SendAutoKeyEvent"));

	URigHierarchy_SendAutoKeyEvent_Params params;
	params.InElement = InElement;
	params.InOffsetInSeconds = InOffsetInSeconds;
	params.bAsynchronous = bAsynchronous;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.RigHierarchy.ResetPoseToInitial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ERigElementType     InTypeFilter                   (Parm, ZeroConstructor, IsPlainOldData)

void URigHierarchy::ResetPoseToInitial(enum class ERigElementType InTypeFilter)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.ResetPoseToInitial"));

	URigHierarchy_ResetPoseToInitial_Params params;
	params.InTypeFilter = InTypeFilter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.RigHierarchy.ResetCurveValues
// (Final, Native, Public, BlueprintCallable)

void URigHierarchy::ResetCurveValues()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.ResetCurveValues"));

	URigHierarchy_ResetCurveValues_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.RigHierarchy.Reset
// (Final, Native, Public, BlueprintCallable)

void URigHierarchy::Reset()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.Reset"));

	URigHierarchy_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.RigHierarchy.Num
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int URigHierarchy::Num()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.Num"));

	URigHierarchy_Num_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchy.MakeControlValueFromVector2D
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               InValue                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FRigControlValue        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRigControlValue URigHierarchy::STATIC_MakeControlValueFromVector2D(const struct FVector2D& InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.MakeControlValueFromVector2D"));

	URigHierarchy_MakeControlValueFromVector2D_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchy.MakeControlValueFromVector
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 InValue                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FRigControlValue        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRigControlValue URigHierarchy::STATIC_MakeControlValueFromVector(const struct FVector& InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.MakeControlValueFromVector"));

	URigHierarchy_MakeControlValueFromVector_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchy.MakeControlValueFromTransformNoScale
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FTransformNoScale       InValue                        (Parm)
// struct FRigControlValue        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRigControlValue URigHierarchy::STATIC_MakeControlValueFromTransformNoScale(const struct FTransformNoScale& InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.MakeControlValueFromTransformNoScale"));

	URigHierarchy_MakeControlValueFromTransformNoScale_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchy.MakeControlValueFromTransform
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform              InValue                        (Parm, IsPlainOldData)
// struct FRigControlValue        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRigControlValue URigHierarchy::STATIC_MakeControlValueFromTransform(const struct FTransform& InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.MakeControlValueFromTransform"));

	URigHierarchy_MakeControlValueFromTransform_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchy.MakeControlValueFromRotator
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                InValue                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FRigControlValue        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRigControlValue URigHierarchy::STATIC_MakeControlValueFromRotator(const struct FRotator& InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.MakeControlValueFromRotator"));

	URigHierarchy_MakeControlValueFromRotator_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchy.MakeControlValueFromInt
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            InValue                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FRigControlValue        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRigControlValue URigHierarchy::STATIC_MakeControlValueFromInt(int InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.MakeControlValueFromInt"));

	URigHierarchy_MakeControlValueFromInt_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchy.MakeControlValueFromFloat
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FRigControlValue        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRigControlValue URigHierarchy::STATIC_MakeControlValueFromFloat(float InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.MakeControlValueFromFloat"));

	URigHierarchy_MakeControlValueFromFloat_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchy.MakeControlValueFromEulerTransform
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FEulerTransform         InValue                        (Parm)
// struct FRigControlValue        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRigControlValue URigHierarchy::STATIC_MakeControlValueFromEulerTransform(const struct FEulerTransform& InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.MakeControlValueFromEulerTransform"));

	URigHierarchy_MakeControlValueFromEulerTransform_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchy.MakeControlValueFromBool
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           InValue                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FRigControlValue        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRigControlValue URigHierarchy::STATIC_MakeControlValueFromBool(bool InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.MakeControlValueFromBool"));

	URigHierarchy_MakeControlValueFromBool_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchy.IsValidIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            InElementIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool URigHierarchy::IsValidIndex(int InElementIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.IsValidIndex"));

	URigHierarchy_IsValidIndex_Params params;
	params.InElementIndex = InElementIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchy.IsSelectedByIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            InIndex                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool URigHierarchy::IsSelectedByIndex(int InIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.IsSelectedByIndex"));

	URigHierarchy_IsSelectedByIndex_Params params;
	params.InIndex = InIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchy.IsSelected
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey          InKey                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool URigHierarchy::IsSelected(const struct FRigElementKey& InKey)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.IsSelected"));

	URigHierarchy_IsSelected_Params params;
	params.InKey = InKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchy.IsParentedTo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey          InChild                        (Parm)
// struct FRigElementKey          InParent                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool URigHierarchy::IsParentedTo(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.IsParentedTo"));

	URigHierarchy_IsParentedTo_Params params;
	params.InChild = InChild;
	params.InParent = InParent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchy.GetVectorFromControlValue
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRigControlValue        InValue                        (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector URigHierarchy::STATIC_GetVectorFromControlValue(const struct FRigControlValue& InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.GetVectorFromControlValue"));

	URigHierarchy_GetVectorFromControlValue_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchy.GetVector2DFromControlValue
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRigControlValue        InValue                        (Parm)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D URigHierarchy::STATIC_GetVector2DFromControlValue(const struct FRigControlValue& InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.GetVector2DFromControlValue"));

	URigHierarchy_GetVector2DFromControlValue_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchy.GetTransformNoScaleFromControlValue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FRigControlValue        InValue                        (Parm)
// struct FTransformNoScale       ReturnValue                    (Parm, OutParm, ReturnParm)

struct FTransformNoScale URigHierarchy::STATIC_GetTransformNoScaleFromControlValue(const struct FRigControlValue& InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.GetTransformNoScaleFromControlValue"));

	URigHierarchy_GetTransformNoScaleFromControlValue_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchy.GetTransformFromControlValue
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRigControlValue        InValue                        (Parm)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform URigHierarchy::STATIC_GetTransformFromControlValue(const struct FRigControlValue& InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.GetTransformFromControlValue"));

	URigHierarchy_GetTransformFromControlValue_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchy.GetSelectedKeys
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ERigElementType     InTypeFilter                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FRigElementKey>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FRigElementKey> URigHierarchy::GetSelectedKeys(enum class ERigElementType InTypeFilter)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.GetSelectedKeys"));

	URigHierarchy_GetSelectedKeys_Params params;
	params.InTypeFilter = InTypeFilter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchy.GetRotatorFromControlValue
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRigControlValue        InValue                        (Parm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator URigHierarchy::STATIC_GetRotatorFromControlValue(const struct FRigControlValue& InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.GetRotatorFromControlValue"));

	URigHierarchy_GetRotatorFromControlValue_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchy.GetRigidBodyKeys
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bTraverse                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FRigElementKey>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FRigElementKey> URigHierarchy::GetRigidBodyKeys(bool bTraverse)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.GetRigidBodyKeys"));

	URigHierarchy_GetRigidBodyKeys_Params params;
	params.bTraverse = bTraverse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchy.GetReferenceKeys
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bTraverse                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FRigElementKey>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FRigElementKey> URigHierarchy::GetReferenceKeys(bool bTraverse)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.GetReferenceKeys"));

	URigHierarchy_GetReferenceKeys_Params params;
	params.bTraverse = bTraverse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchy.GetPreviousParent
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey          InKey                          (ConstParm, Parm, OutParm, ReferenceParm)
// struct FRigElementKey          ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRigElementKey URigHierarchy::GetPreviousParent(const struct FRigElementKey& InKey)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.GetPreviousParent"));

	URigHierarchy_GetPreviousParent_Params params;
	params.InKey = InKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchy.GetPreviousName
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey          InKey                          (ConstParm, Parm, OutParm, ReferenceParm)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName URigHierarchy::GetPreviousName(const struct FRigElementKey& InKey)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.GetPreviousName"));

	URigHierarchy_GetPreviousName_Params params;
	params.InKey = InKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchy.GetPose
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bInitial                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FRigPose                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRigPose URigHierarchy::GetPose(bool bInitial)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.GetPose"));

	URigHierarchy_GetPose_Params params;
	params.bInitial = bInitial;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchy.GetParentWeightArray
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey          InChild                        (Parm)
// bool                           bInitial                       (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FRigElementWeight> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FRigElementWeight> URigHierarchy::GetParentWeightArray(const struct FRigElementKey& InChild, bool bInitial)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.GetParentWeightArray"));

	URigHierarchy_GetParentWeightArray_Params params;
	params.InChild = InChild;
	params.bInitial = bInitial;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchy.GetParentWeight
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey          InChild                        (Parm)
// struct FRigElementKey          InParent                       (Parm)
// bool                           bInitial                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FRigElementWeight       ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRigElementWeight URigHierarchy::GetParentWeight(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, bool bInitial)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.GetParentWeight"));

	URigHierarchy_GetParentWeight_Params params;
	params.InChild = InChild;
	params.InParent = InParent;
	params.bInitial = bInitial;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchy.GetParentTransformByIndex
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            InElementIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInitial                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform URigHierarchy::GetParentTransformByIndex(int InElementIndex, bool bInitial)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.GetParentTransformByIndex"));

	URigHierarchy_GetParentTransformByIndex_Params params;
	params.InElementIndex = InElementIndex;
	params.bInitial = bInitial;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchy.GetParentTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey          InKey                          (Parm)
// bool                           bInitial                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform URigHierarchy::GetParentTransform(const struct FRigElementKey& InKey, bool bInitial)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.GetParentTransform"));

	URigHierarchy_GetParentTransform_Params params;
	params.InKey = InKey;
	params.bInitial = bInitial;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchy.GetParents
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey          InKey                          (Parm)
// bool                           bRecursive                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FRigElementKey>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FRigElementKey> URigHierarchy::GetParents(const struct FRigElementKey& InKey, bool bRecursive)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.GetParents"));

	URigHierarchy_GetParents_Params params;
	params.InKey = InKey;
	params.bRecursive = bRecursive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchy.GetNumberOfParents
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey          InKey                          (Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int URigHierarchy::GetNumberOfParents(const struct FRigElementKey& InKey)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.GetNumberOfParents"));

	URigHierarchy_GetNumberOfParents_Params params;
	params.InKey = InKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchy.GetNullKeys
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bTraverse                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FRigElementKey>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FRigElementKey> URigHierarchy::GetNullKeys(bool bTraverse)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.GetNullKeys"));

	URigHierarchy_GetNullKeys_Params params;
	params.bTraverse = bTraverse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchy.GetLocalTransformByIndex
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            InElementIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInitial                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform URigHierarchy::GetLocalTransformByIndex(int InElementIndex, bool bInitial)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.GetLocalTransformByIndex"));

	URigHierarchy_GetLocalTransformByIndex_Params params;
	params.InElementIndex = InElementIndex;
	params.bInitial = bInitial;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchy.GetLocalTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey          InKey                          (Parm)
// bool                           bInitial                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform URigHierarchy::GetLocalTransform(const struct FRigElementKey& InKey, bool bInitial)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.GetLocalTransform"));

	URigHierarchy_GetLocalTransform_Params params;
	params.InKey = InKey;
	params.bInitial = bInitial;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchy.GetKey
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            InElementIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FRigElementKey          ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRigElementKey URigHierarchy::GetKey(int InElementIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.GetKey"));

	URigHierarchy_GetKey_Params params;
	params.InElementIndex = InElementIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchy.GetIntFromControlValue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FRigControlValue        InValue                        (Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int URigHierarchy::STATIC_GetIntFromControlValue(const struct FRigControlValue& InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.GetIntFromControlValue"));

	URigHierarchy_GetIntFromControlValue_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchy.GetIndex_ForBlueprint
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey          InKey                          (Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int URigHierarchy::GetIndex_ForBlueprint(const struct FRigElementKey& InKey)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.GetIndex_ForBlueprint"));

	URigHierarchy_GetIndex_ForBlueprint_Params params;
	params.InKey = InKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchy.GetGlobalTransformByIndex
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            InElementIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInitial                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform URigHierarchy::GetGlobalTransformByIndex(int InElementIndex, bool bInitial)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.GetGlobalTransformByIndex"));

	URigHierarchy_GetGlobalTransformByIndex_Params params;
	params.InElementIndex = InElementIndex;
	params.bInitial = bInitial;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchy.GetGlobalTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey          InKey                          (Parm)
// bool                           bInitial                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform URigHierarchy::GetGlobalTransform(const struct FRigElementKey& InKey, bool bInitial)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.GetGlobalTransform"));

	URigHierarchy_GetGlobalTransform_Params params;
	params.InKey = InKey;
	params.bInitial = bInitial;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchy.GetGlobalControlShapeTransformByIndex
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            InElementIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInitial                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform URigHierarchy::GetGlobalControlShapeTransformByIndex(int InElementIndex, bool bInitial)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.GetGlobalControlShapeTransformByIndex"));

	URigHierarchy_GetGlobalControlShapeTransformByIndex_Params params;
	params.InElementIndex = InElementIndex;
	params.bInitial = bInitial;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchy.GetGlobalControlShapeTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey          InKey                          (Parm)
// bool                           bInitial                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform URigHierarchy::GetGlobalControlShapeTransform(const struct FRigElementKey& InKey, bool bInitial)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.GetGlobalControlShapeTransform"));

	URigHierarchy_GetGlobalControlShapeTransform_Params params;
	params.InKey = InKey;
	params.bInitial = bInitial;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchy.GetGlobalControlOffsetTransformByIndex
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            InElementIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInitial                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform URigHierarchy::GetGlobalControlOffsetTransformByIndex(int InElementIndex, bool bInitial)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.GetGlobalControlOffsetTransformByIndex"));

	URigHierarchy_GetGlobalControlOffsetTransformByIndex_Params params;
	params.InElementIndex = InElementIndex;
	params.bInitial = bInitial;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchy.GetGlobalControlOffsetTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey          InKey                          (Parm)
// bool                           bInitial                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform URigHierarchy::GetGlobalControlOffsetTransform(const struct FRigElementKey& InKey, bool bInitial)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.GetGlobalControlOffsetTransform"));

	URigHierarchy_GetGlobalControlOffsetTransform_Params params;
	params.InKey = InKey;
	params.bInitial = bInitial;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchy.GetFloatFromControlValue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FRigControlValue        InValue                        (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float URigHierarchy::STATIC_GetFloatFromControlValue(const struct FRigControlValue& InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.GetFloatFromControlValue"));

	URigHierarchy_GetFloatFromControlValue_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchy.GetFirstParent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey          InKey                          (Parm)
// struct FRigElementKey          ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRigElementKey URigHierarchy::GetFirstParent(const struct FRigElementKey& InKey)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.GetFirstParent"));

	URigHierarchy_GetFirstParent_Params params;
	params.InKey = InKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchy.GetEulerTransformFromControlValue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FRigControlValue        InValue                        (Parm)
// struct FEulerTransform         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEulerTransform URigHierarchy::STATIC_GetEulerTransformFromControlValue(const struct FRigControlValue& InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.GetEulerTransformFromControlValue"));

	URigHierarchy_GetEulerTransformFromControlValue_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchy.GetCurveValueByIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            InElementIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float URigHierarchy::GetCurveValueByIndex(int InElementIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.GetCurveValueByIndex"));

	URigHierarchy_GetCurveValueByIndex_Params params;
	params.InElementIndex = InElementIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchy.GetCurveValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey          InKey                          (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float URigHierarchy::GetCurveValue(const struct FRigElementKey& InKey)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.GetCurveValue"));

	URigHierarchy_GetCurveValue_Params params;
	params.InKey = InKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchy.GetCurveKeys
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FRigElementKey>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FRigElementKey> URigHierarchy::GetCurveKeys()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.GetCurveKeys"));

	URigHierarchy_GetCurveKeys_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchy.GetControlValueByIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            InElementIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// enum class ERigControlValueType InValueType                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FRigControlValue        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRigControlValue URigHierarchy::GetControlValueByIndex(int InElementIndex, enum class ERigControlValueType InValueType)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.GetControlValueByIndex"));

	URigHierarchy_GetControlValueByIndex_Params params;
	params.InElementIndex = InElementIndex;
	params.InValueType = InValueType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchy.GetControlValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey          InKey                          (Parm)
// enum class ERigControlValueType InValueType                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FRigControlValue        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRigControlValue URigHierarchy::GetControlValue(const struct FRigElementKey& InKey, enum class ERigControlValueType InValueType)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.GetControlValue"));

	URigHierarchy_GetControlValue_Params params;
	params.InKey = InKey;
	params.InValueType = InValueType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchy.GetController
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bCreateIfNeeded                (Parm, ZeroConstructor, IsPlainOldData)
// class URigHierarchyController* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class URigHierarchyController* URigHierarchy::GetController(bool bCreateIfNeeded)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.GetController"));

	URigHierarchy_GetController_Params params;
	params.bCreateIfNeeded = bCreateIfNeeded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchy.GetControlKeys
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bTraverse                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FRigElementKey>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FRigElementKey> URigHierarchy::GetControlKeys(bool bTraverse)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.GetControlKeys"));

	URigHierarchy_GetControlKeys_Params params;
	params.bTraverse = bTraverse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchy.GetChildren
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey          InKey                          (Parm)
// bool                           bRecursive                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FRigElementKey>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FRigElementKey> URigHierarchy::GetChildren(const struct FRigElementKey& InKey, bool bRecursive)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.GetChildren"));

	URigHierarchy_GetChildren_Params params;
	params.InKey = InKey;
	params.bRecursive = bRecursive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchy.GetBoneKeys
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bTraverse                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FRigElementKey>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FRigElementKey> URigHierarchy::GetBoneKeys(bool bTraverse)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.GetBoneKeys"));

	URigHierarchy_GetBoneKeys_Params params;
	params.bTraverse = bTraverse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchy.GetAllKeys_ForBlueprint
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bTraverse                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FRigElementKey>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FRigElementKey> URigHierarchy::GetAllKeys_ForBlueprint(bool bTraverse)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.GetAllKeys_ForBlueprint"));

	URigHierarchy_GetAllKeys_ForBlueprint_Params params;
	params.bTraverse = bTraverse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchy.FindNull_ForBlueprintOnly
// (Final, Native, Private, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey          InKey                          (ConstParm, Parm, OutParm, ReferenceParm)
// struct FRigNullElement         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRigNullElement URigHierarchy::FindNull_ForBlueprintOnly(const struct FRigElementKey& InKey)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.FindNull_ForBlueprintOnly"));

	URigHierarchy_FindNull_ForBlueprintOnly_Params params;
	params.InKey = InKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchy.FindControl_ForBlueprintOnly
// (Final, Native, Private, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey          InKey                          (ConstParm, Parm, OutParm, ReferenceParm)
// struct FRigControlElement      ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRigControlElement URigHierarchy::FindControl_ForBlueprintOnly(const struct FRigElementKey& InKey)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.FindControl_ForBlueprintOnly"));

	URigHierarchy_FindControl_ForBlueprintOnly_Params params;
	params.InKey = InKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchy.FindBone_ForBlueprintOnly
// (Final, Native, Private, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey          InKey                          (ConstParm, Parm, OutParm, ReferenceParm)
// struct FRigBoneElement         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRigBoneElement URigHierarchy::FindBone_ForBlueprintOnly(const struct FRigElementKey& InKey)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.FindBone_ForBlueprintOnly"));

	URigHierarchy_FindBone_ForBlueprintOnly_Params params;
	params.InKey = InKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchy.CopyPose
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class URigHierarchy*           InHierarchy                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCurrent                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInitial                       (Parm, ZeroConstructor, IsPlainOldData)

void URigHierarchy::CopyPose(class URigHierarchy* InHierarchy, bool bCurrent, bool bInitial)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.CopyPose"));

	URigHierarchy_CopyPose_Params params;
	params.InHierarchy = InHierarchy;
	params.bCurrent = bCurrent;
	params.bInitial = bInitial;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.RigHierarchy.CopyHierarchy
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class URigHierarchy*           InHierarchy                    (Parm, ZeroConstructor, IsPlainOldData)

void URigHierarchy::CopyHierarchy(class URigHierarchy* InHierarchy)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.CopyHierarchy"));

	URigHierarchy_CopyHierarchy_Params params;
	params.InHierarchy = InHierarchy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.RigHierarchy.Contains_ForBlueprint
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey          InKey                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool URigHierarchy::Contains_ForBlueprint(const struct FRigElementKey& InKey)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchy.Contains_ForBlueprint"));

	URigHierarchy_Contains_ForBlueprint_Params params;
	params.InKey = InKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchyController.SetSelection
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FRigElementKey>  InKeys                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bPrintPythonCommand            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool URigHierarchyController::SetSelection(TArray<struct FRigElementKey> InKeys, bool bPrintPythonCommand)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchyController.SetSelection"));

	URigHierarchyController_SetSelection_Params params;
	params.InKeys = InKeys;
	params.bPrintPythonCommand = bPrintPythonCommand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchyController.SetParent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey          InChild                        (Parm)
// struct FRigElementKey          InParent                       (Parm)
// bool                           bMaintainGlobalTransform       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSetupUndo                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPrintPythonCommand            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool URigHierarchyController::SetParent(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchyController.SetParent"));

	URigHierarchyController_SetParent_Params params;
	params.InChild = InChild;
	params.InParent = InParent;
	params.bMaintainGlobalTransform = bMaintainGlobalTransform;
	params.bSetupUndo = bSetupUndo;
	params.bPrintPythonCommand = bPrintPythonCommand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchyController.SetHierarchy
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class URigHierarchy*           InHierarchy                    (Parm, ZeroConstructor, IsPlainOldData)

void URigHierarchyController::SetHierarchy(class URigHierarchy* InHierarchy)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchyController.SetHierarchy"));

	URigHierarchyController_SetHierarchy_Params params;
	params.InHierarchy = InHierarchy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.RigHierarchyController.SetControlSettings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey          InKey                          (Parm)
// struct FRigControlSettings     InSettings                     (Parm)
// bool                           bSetupUndo                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool URigHierarchyController::SetControlSettings(const struct FRigElementKey& InKey, const struct FRigControlSettings& InSettings, bool bSetupUndo)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchyController.SetControlSettings"));

	URigHierarchyController_SetControlSettings_Params params;
	params.InKey = InKey;
	params.InSettings = InSettings;
	params.bSetupUndo = bSetupUndo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchyController.SelectElement
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey          InKey                          (Parm)
// bool                           bSelect                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bClearSelection                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool URigHierarchyController::SelectElement(const struct FRigElementKey& InKey, bool bSelect, bool bClearSelection)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchyController.SelectElement"));

	URigHierarchyController_SelectElement_Params params;
	params.InKey = InKey;
	params.bSelect = bSelect;
	params.bClearSelection = bClearSelection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchyController.RenameElement
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey          InElement                      (Parm)
// struct FName                   InName                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSetupUndo                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPrintPythonCommand            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bClearSelection                (Parm, ZeroConstructor, IsPlainOldData)
// struct FRigElementKey          ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRigElementKey URigHierarchyController::RenameElement(const struct FRigElementKey& InElement, const struct FName& InName, bool bSetupUndo, bool bPrintPythonCommand, bool bClearSelection)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchyController.RenameElement"));

	URigHierarchyController_RenameElement_Params params;
	params.InElement = InElement;
	params.InName = InName;
	params.bSetupUndo = bSetupUndo;
	params.bPrintPythonCommand = bPrintPythonCommand;
	params.bClearSelection = bClearSelection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchyController.RemoveParent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey          InChild                        (Parm)
// struct FRigElementKey          InParent                       (Parm)
// bool                           bMaintainGlobalTransform       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSetupUndo                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPrintPythonCommand            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool URigHierarchyController::RemoveParent(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchyController.RemoveParent"));

	URigHierarchyController_RemoveParent_Params params;
	params.InChild = InChild;
	params.InParent = InParent;
	params.bMaintainGlobalTransform = bMaintainGlobalTransform;
	params.bSetupUndo = bSetupUndo;
	params.bPrintPythonCommand = bPrintPythonCommand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchyController.RemoveElement
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey          InElement                      (Parm)
// bool                           bSetupUndo                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPrintPythonCommand            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool URigHierarchyController::RemoveElement(const struct FRigElementKey& InElement, bool bSetupUndo, bool bPrintPythonCommand)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchyController.RemoveElement"));

	URigHierarchyController_RemoveElement_Params params;
	params.InElement = InElement;
	params.bSetupUndo = bSetupUndo;
	params.bPrintPythonCommand = bPrintPythonCommand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchyController.RemoveAllParents
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey          InChild                        (Parm)
// bool                           bMaintainGlobalTransform       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSetupUndo                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPrintPythonCommand            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool URigHierarchyController::RemoveAllParents(const struct FRigElementKey& InChild, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchyController.RemoveAllParents"));

	URigHierarchyController_RemoveAllParents_Params params;
	params.InChild = InChild;
	params.bMaintainGlobalTransform = bMaintainGlobalTransform;
	params.bSetupUndo = bSetupUndo;
	params.bPrintPythonCommand = bPrintPythonCommand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchyController.MirrorElements
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FRigElementKey>  InKeys                         (Parm, ZeroConstructor)
// struct FRigMirrorSettings      InSettings                     (Parm)
// bool                           bSelectNewElements             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSetupUndo                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPrintPythonCommands           (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FRigElementKey>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FRigElementKey> URigHierarchyController::MirrorElements(TArray<struct FRigElementKey> InKeys, const struct FRigMirrorSettings& InSettings, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchyController.MirrorElements"));

	URigHierarchyController_MirrorElements_Params params;
	params.InKeys = InKeys;
	params.InSettings = InSettings;
	params.bSelectNewElements = bSelectNewElements;
	params.bSetupUndo = bSetupUndo;
	params.bPrintPythonCommands = bPrintPythonCommands;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchyController.ImportFromText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InContent                      (Parm, ZeroConstructor)
// bool                           bReplaceExistingElements       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSelectNewElements             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSetupUndo                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPrintPythonCommands           (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FRigElementKey>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FRigElementKey> URigHierarchyController::ImportFromText(const struct FString& InContent, bool bReplaceExistingElements, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchyController.ImportFromText"));

	URigHierarchyController_ImportFromText_Params params;
	params.InContent = InContent;
	params.bReplaceExistingElements = bReplaceExistingElements;
	params.bSelectNewElements = bSelectNewElements;
	params.bSetupUndo = bSetupUndo;
	params.bPrintPythonCommands = bPrintPythonCommands;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchyController.ImportCurves
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USkeleton*               InSkeleton                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   InNameSpace                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSelectCurves                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSetupUndo                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPrintPythonCommand            (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FRigElementKey>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FRigElementKey> URigHierarchyController::ImportCurves(class USkeleton* InSkeleton, const struct FName& InNameSpace, bool bSelectCurves, bool bSetupUndo, bool bPrintPythonCommand)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchyController.ImportCurves"));

	URigHierarchyController_ImportCurves_Params params;
	params.InSkeleton = InSkeleton;
	params.InNameSpace = InNameSpace;
	params.bSelectCurves = bSelectCurves;
	params.bSetupUndo = bSetupUndo;
	params.bPrintPythonCommand = bPrintPythonCommand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchyController.ImportBones
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USkeleton*               InSkeleton                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   InNameSpace                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bReplaceExistingBones          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRemoveObsoleteBones           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSelectBones                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSetupUndo                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPrintPythonCommand            (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FRigElementKey>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FRigElementKey> URigHierarchyController::ImportBones(class USkeleton* InSkeleton, const struct FName& InNameSpace, bool bReplaceExistingBones, bool bRemoveObsoleteBones, bool bSelectBones, bool bSetupUndo, bool bPrintPythonCommand)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchyController.ImportBones"));

	URigHierarchyController_ImportBones_Params params;
	params.InSkeleton = InSkeleton;
	params.InNameSpace = InNameSpace;
	params.bReplaceExistingBones = bReplaceExistingBones;
	params.bRemoveObsoleteBones = bRemoveObsoleteBones;
	params.bSelectBones = bSelectBones;
	params.bSetupUndo = bSetupUndo;
	params.bPrintPythonCommand = bPrintPythonCommand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchyController.GetHierarchy
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class URigHierarchy*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class URigHierarchy* URigHierarchyController::GetHierarchy()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchyController.GetHierarchy"));

	URigHierarchyController_GetHierarchy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchyController.GetControlSettings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey          InKey                          (Parm)
// struct FRigControlSettings     ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRigControlSettings URigHierarchyController::GetControlSettings(const struct FRigElementKey& InKey)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchyController.GetControlSettings"));

	URigHierarchyController_GetControlSettings_Params params;
	params.InKey = InKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchyController.ExportToText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FRigElementKey>  InKeys                         (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString URigHierarchyController::ExportToText(TArray<struct FRigElementKey> InKeys)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchyController.ExportToText"));

	URigHierarchyController_ExportToText_Params params;
	params.InKeys = InKeys;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchyController.ExportSelectionToText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString URigHierarchyController::ExportSelectionToText()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchyController.ExportSelectionToText"));

	URigHierarchyController_ExportSelectionToText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchyController.DuplicateElements
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FRigElementKey>  InKeys                         (Parm, ZeroConstructor)
// bool                           bSelectNewElements             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSetupUndo                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPrintPythonCommands           (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FRigElementKey>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FRigElementKey> URigHierarchyController::DuplicateElements(TArray<struct FRigElementKey> InKeys, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchyController.DuplicateElements"));

	URigHierarchyController_DuplicateElements_Params params;
	params.InKeys = InKeys;
	params.bSelectNewElements = bSelectNewElements;
	params.bSetupUndo = bSetupUndo;
	params.bPrintPythonCommands = bPrintPythonCommands;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchyController.DeselectElement
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey          InKey                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool URigHierarchyController::DeselectElement(const struct FRigElementKey& InKey)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchyController.DeselectElement"));

	URigHierarchyController_DeselectElement_Params params;
	params.InKey = InKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchyController.ClearSelection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool URigHierarchyController::ClearSelection()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchyController.ClearSelection"));

	URigHierarchyController_ClearSelection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchyController.AddRigidBody
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   InName                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FRigElementKey          InParent                       (Parm)
// struct FRigRigidBodySettings   InSettings                     (Parm)
// struct FTransform              InLocalTransform               (Parm, IsPlainOldData)
// bool                           bSetupUndo                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPrintPythonCommand            (Parm, ZeroConstructor, IsPlainOldData)
// struct FRigElementKey          ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRigElementKey URigHierarchyController::AddRigidBody(const struct FName& InName, const struct FRigElementKey& InParent, const struct FRigRigidBodySettings& InSettings, const struct FTransform& InLocalTransform, bool bSetupUndo, bool bPrintPythonCommand)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchyController.AddRigidBody"));

	URigHierarchyController_AddRigidBody_Params params;
	params.InName = InName;
	params.InParent = InParent;
	params.InSettings = InSettings;
	params.InLocalTransform = InLocalTransform;
	params.bSetupUndo = bSetupUndo;
	params.bPrintPythonCommand = bPrintPythonCommand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchyController.AddParent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey          InChild                        (Parm)
// struct FRigElementKey          InParent                       (Parm)
// float                          InWeight                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bMaintainGlobalTransform       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSetupUndo                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool URigHierarchyController::AddParent(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, float InWeight, bool bMaintainGlobalTransform, bool bSetupUndo)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchyController.AddParent"));

	URigHierarchyController_AddParent_Params params;
	params.InChild = InChild;
	params.InParent = InParent;
	params.InWeight = InWeight;
	params.bMaintainGlobalTransform = bMaintainGlobalTransform;
	params.bSetupUndo = bSetupUndo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchyController.AddNull
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   InName                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FRigElementKey          InParent                       (Parm)
// struct FTransform              InTransform                    (Parm, IsPlainOldData)
// bool                           bTransformInGlobal             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSetupUndo                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPrintPythonCommand            (Parm, ZeroConstructor, IsPlainOldData)
// struct FRigElementKey          ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRigElementKey URigHierarchyController::AddNull(const struct FName& InName, const struct FRigElementKey& InParent, const struct FTransform& InTransform, bool bTransformInGlobal, bool bSetupUndo, bool bPrintPythonCommand)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchyController.AddNull"));

	URigHierarchyController_AddNull_Params params;
	params.InName = InName;
	params.InParent = InParent;
	params.InTransform = InTransform;
	params.bTransformInGlobal = bTransformInGlobal;
	params.bSetupUndo = bSetupUndo;
	params.bPrintPythonCommand = bPrintPythonCommand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchyController.AddCurve
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   InName                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSetupUndo                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPrintPythonCommand            (Parm, ZeroConstructor, IsPlainOldData)
// struct FRigElementKey          ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRigElementKey URigHierarchyController::AddCurve(const struct FName& InName, float InValue, bool bSetupUndo, bool bPrintPythonCommand)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchyController.AddCurve"));

	URigHierarchyController_AddCurve_Params params;
	params.InName = InName;
	params.InValue = InValue;
	params.bSetupUndo = bSetupUndo;
	params.bPrintPythonCommand = bPrintPythonCommand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchyController.AddControl_ForBlueprint
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   InName                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FRigElementKey          InParent                       (Parm)
// struct FRigControlSettings     InSettings                     (Parm)
// struct FRigControlValue        InValue                        (Parm)
// bool                           bSetupUndo                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FRigElementKey          ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRigElementKey URigHierarchyController::AddControl_ForBlueprint(const struct FName& InName, const struct FRigElementKey& InParent, const struct FRigControlSettings& InSettings, const struct FRigControlValue& InValue, bool bSetupUndo)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchyController.AddControl_ForBlueprint"));

	URigHierarchyController_AddControl_ForBlueprint_Params params;
	params.InName = InName;
	params.InParent = InParent;
	params.InSettings = InSettings;
	params.InValue = InValue;
	params.bSetupUndo = bSetupUndo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlRig.RigHierarchyController.AddBone
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   InName                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FRigElementKey          InParent                       (Parm)
// struct FTransform              InTransform                    (Parm, IsPlainOldData)
// bool                           bTransformInGlobal             (Parm, ZeroConstructor, IsPlainOldData)
// enum class ERigBoneType        InBoneType                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSetupUndo                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPrintPythonCommand            (Parm, ZeroConstructor, IsPlainOldData)
// struct FRigElementKey          ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRigElementKey URigHierarchyController::AddBone(const struct FName& InName, const struct FRigElementKey& InParent, const struct FTransform& InTransform, bool bTransformInGlobal, enum class ERigBoneType InBoneType, bool bSetupUndo, bool bPrintPythonCommand)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function ControlRig.RigHierarchyController.AddBone"));

	URigHierarchyController_AddBone_Params params;
	params.InName = InName;
	params.InParent = InParent;
	params.InTransform = InTransform;
	params.bTransformInGlobal = bTransformInGlobal;
	params.InBoneType = InBoneType;
	params.bSetupUndo = bSetupUndo;
	params.bPrintPythonCommand = bPrintPythonCommand;

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
