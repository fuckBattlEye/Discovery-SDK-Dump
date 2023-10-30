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

// Function CommonUI.CommonActionWidget.SetInputActions
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FDataTableRowHandle> NewInputActions                (Parm, ZeroConstructor)

void UCommonActionWidget::SetInputActions(TArray<struct FDataTableRowHandle> NewInputActions)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonActionWidget.SetInputActions"));

	UCommonActionWidget_SetInputActions_Params params;
	params.NewInputActions = NewInputActions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonActionWidget.SetInputAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FDataTableRowHandle     InputActionRow                 (Parm)

void UCommonActionWidget::SetInputAction(const struct FDataTableRowHandle& InputActionRow)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonActionWidget.SetInputAction"));

	UCommonActionWidget_SetInputAction_Params params;
	params.InputActionRow = InputActionRow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonActionWidget.SetIconRimBrush
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateBrush             InIconRimBrush                 (Parm)

void UCommonActionWidget::SetIconRimBrush(const struct FSlateBrush& InIconRimBrush)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonActionWidget.SetIconRimBrush"));

	UCommonActionWidget_SetIconRimBrush_Params params;
	params.InIconRimBrush = InIconRimBrush;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction CommonUI.CommonActionWidget.OnInputMethodChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                           bUsingGamepad                  (Parm, ZeroConstructor, IsPlainOldData)

void UCommonActionWidget::OnInputMethodChanged__DelegateSignature(bool bUsingGamepad)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("DelegateFunction CommonUI.CommonActionWidget.OnInputMethodChanged__DelegateSignature"));

	UCommonActionWidget_OnInputMethodChanged__DelegateSignature_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonActionWidget.IsHeldAction
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCommonActionWidget::IsHeldAction()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonActionWidget.IsHeldAction"));

	UCommonActionWidget_IsHeldAction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonActionWidget.GetIcon
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UCommonActionWidget::GetIcon()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonActionWidget.GetIcon"));

	UCommonActionWidget_GetIcon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonActionWidget.GetDisplayText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UCommonActionWidget::GetDisplayText()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonActionWidget.GetDisplayText"));

	UCommonActionWidget_GetDisplayText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonUserWidget.SetConsumePointerInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInConsumePointerInput         (Parm, ZeroConstructor, IsPlainOldData)

void UCommonUserWidget::SetConsumePointerInput(bool bInConsumePointerInput)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonUserWidget.SetConsumePointerInput"));

	UCommonUserWidget_SetConsumePointerInput_Params params;
	params.bInConsumePointerInput = bInConsumePointerInput;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonActivatableWidget.SetBindVisibilities
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESlateVisibility    OnActivatedVisibility          (Parm, ZeroConstructor, IsPlainOldData)
// enum class ESlateVisibility    OnDeactivatedVisibility        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInAllActive                   (Parm, ZeroConstructor, IsPlainOldData)

void UCommonActivatableWidget::SetBindVisibilities(enum class ESlateVisibility OnActivatedVisibility, enum class ESlateVisibility OnDeactivatedVisibility, bool bInAllActive)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonActivatableWidget.SetBindVisibilities"));

	UCommonActivatableWidget_SetBindVisibilities_Params params;
	params.OnActivatedVisibility = OnActivatedVisibility;
	params.OnDeactivatedVisibility = OnDeactivatedVisibility;
	params.bInAllActive = bInAllActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonActivatableWidget.IsActivated
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCommonActivatableWidget::IsActivated()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonActivatableWidget.IsActivated"));

	UCommonActivatableWidget_IsActivated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonActivatableWidget.GetDesiredFocusTarget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UCommonActivatableWidget::GetDesiredFocusTarget()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonActivatableWidget.GetDesiredFocusTarget"));

	UCommonActivatableWidget_GetDesiredFocusTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonActivatableWidget.DeactivateWidget
// (Final, Native, Public, BlueprintCallable)

void UCommonActivatableWidget::DeactivateWidget()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonActivatableWidget.DeactivateWidget"));

	UCommonActivatableWidget_DeactivateWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonActivatableWidget.BP_OnHandleBackAction
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCommonActivatableWidget::BP_OnHandleBackAction()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonActivatableWidget.BP_OnHandleBackAction"));

	UCommonActivatableWidget_BP_OnHandleBackAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonActivatableWidget.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)

void UCommonActivatableWidget::BP_OnDeactivated()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonActivatableWidget.BP_OnDeactivated"));

	UCommonActivatableWidget_BP_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonActivatableWidget.BP_OnActivated
// (Event, Protected, BlueprintEvent)

void UCommonActivatableWidget::BP_OnActivated()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonActivatableWidget.BP_OnActivated"));

	UCommonActivatableWidget_BP_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonActivatableWidget.BP_GetDesiredFocusTarget
// (Event, Protected, BlueprintEvent, Const)
// Parameters:
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UCommonActivatableWidget::BP_GetDesiredFocusTarget()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonActivatableWidget.BP_GetDesiredFocusTarget"));

	UCommonActivatableWidget_BP_GetDesiredFocusTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonActivatableWidget.BindVisibilityToActivation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCommonActivatableWidget* ActivatableWidget              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCommonActivatableWidget::BindVisibilityToActivation(class UCommonActivatableWidget* ActivatableWidget)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonActivatableWidget.BindVisibilityToActivation"));

	UCommonActivatableWidget_BindVisibilityToActivation_Params params;
	params.ActivatableWidget = ActivatableWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonActivatableWidget.ActivateWidget
// (Final, Native, Public, BlueprintCallable)

void UCommonActivatableWidget::ActivateWidget()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonActivatableWidget.ActivateWidget"));

	UCommonActivatableWidget_ActivateWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonActivatableWidgetContainerBase.SetTransitionDuration
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)

void UCommonActivatableWidgetContainerBase::SetTransitionDuration(float Duration)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonActivatableWidgetContainerBase.SetTransitionDuration"));

	UCommonActivatableWidgetContainerBase_SetTransitionDuration_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonActivatableWidgetContainerBase.RemoveWidget
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class UCommonActivatableWidget* WidgetToRemove                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCommonActivatableWidgetContainerBase::RemoveWidget(class UCommonActivatableWidget* WidgetToRemove)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonActivatableWidgetContainerBase.RemoveWidget"));

	UCommonActivatableWidgetContainerBase_RemoveWidget_Params params;
	params.WidgetToRemove = WidgetToRemove;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonActivatableWidgetContainerBase.GetTransitionDuration
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCommonActivatableWidgetContainerBase::GetTransitionDuration()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonActivatableWidgetContainerBase.GetTransitionDuration"));

	UCommonActivatableWidgetContainerBase_GetTransitionDuration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonActivatableWidgetContainerBase.GetActiveWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCommonActivatableWidget* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UCommonActivatableWidget* UCommonActivatableWidgetContainerBase::GetActiveWidget()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonActivatableWidgetContainerBase.GetActiveWidget"));

	UCommonActivatableWidgetContainerBase_GetActiveWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonActivatableWidgetContainerBase.ClearWidgets
// (Final, Native, Public, BlueprintCallable)

void UCommonActivatableWidgetContainerBase::ClearWidgets()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonActivatableWidgetContainerBase.ClearWidgets"));

	UCommonActivatableWidgetContainerBase_ClearWidgets_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonActivatableWidgetContainerBase.BP_AddWidgetWithCallback
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class UClass*                  ActivatableWidgetClass         (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Opt_CallbackObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Opt_CallbackFunctionName       (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonActivatableWidget* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UCommonActivatableWidget* UCommonActivatableWidgetContainerBase::BP_AddWidgetWithCallback(class UClass* ActivatableWidgetClass, class UObject* Opt_CallbackObject, const struct FName& Opt_CallbackFunctionName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonActivatableWidgetContainerBase.BP_AddWidgetWithCallback"));

	UCommonActivatableWidgetContainerBase_BP_AddWidgetWithCallback_Params params;
	params.ActivatableWidgetClass = ActivatableWidgetClass;
	params.Opt_CallbackObject = Opt_CallbackObject;
	params.Opt_CallbackFunctionName = Opt_CallbackFunctionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonActivatableWidgetContainerBase.BP_AddWidget
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class UClass*                  ActivatableWidgetClass         (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonActivatableWidget* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UCommonActivatableWidget* UCommonActivatableWidgetContainerBase::BP_AddWidget(class UClass* ActivatableWidgetClass)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonActivatableWidgetContainerBase.BP_AddWidget"));

	UCommonActivatableWidgetContainerBase_BP_AddWidget_Params params;
	params.ActivatableWidgetClass = ActivatableWidgetClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonAnimatedSwitcher.SetDisableTransitionAnimation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bDisableAnimation              (Parm, ZeroConstructor, IsPlainOldData)

void UCommonAnimatedSwitcher::SetDisableTransitionAnimation(bool bDisableAnimation)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonAnimatedSwitcher.SetDisableTransitionAnimation"));

	UCommonAnimatedSwitcher_SetDisableTransitionAnimation_Params params;
	params.bDisableAnimation = bDisableAnimation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonAnimatedSwitcher.IsCurrentlySwitching
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCommonAnimatedSwitcher::IsCurrentlySwitching()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonAnimatedSwitcher.IsCurrentlySwitching"));

	UCommonAnimatedSwitcher_IsCurrentlySwitching_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonAnimatedSwitcher.HasWidgets
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCommonAnimatedSwitcher::HasWidgets()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonAnimatedSwitcher.HasWidgets"));

	UCommonAnimatedSwitcher_HasWidgets_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonAnimatedSwitcher.ActivatePreviousWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bCanWrap                       (Parm, ZeroConstructor, IsPlainOldData)

void UCommonAnimatedSwitcher::ActivatePreviousWidget(bool bCanWrap)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonAnimatedSwitcher.ActivatePreviousWidget"));

	UCommonAnimatedSwitcher_ActivatePreviousWidget_Params params;
	params.bCanWrap = bCanWrap;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonAnimatedSwitcher.ActivateNextWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bCanWrap                       (Parm, ZeroConstructor, IsPlainOldData)

void UCommonAnimatedSwitcher::ActivateNextWidget(bool bCanWrap)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonAnimatedSwitcher.ActivateNextWidget"));

	UCommonAnimatedSwitcher_ActivateNextWidget_Params params;
	params.bCanWrap = bCanWrap;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonBoundActionBar.SetDisplayOwningPlayerActionsOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bShouldOnlyDisplayOwningPlayerActions (Parm, ZeroConstructor, IsPlainOldData)

void UCommonBoundActionBar::SetDisplayOwningPlayerActionsOnly(bool bShouldOnlyDisplayOwningPlayerActions)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonBoundActionBar.SetDisplayOwningPlayerActionsOnly"));

	UCommonBoundActionBar_SetDisplayOwningPlayerActionsOnly_Params params;
	params.bShouldOnlyDisplayOwningPlayerActions = bShouldOnlyDisplayOwningPlayerActions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButtonBase.StopDoubleClickPropagation
// (Final, Native, Protected, BlueprintCallable)

void UCommonButtonBase::StopDoubleClickPropagation()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonBase.StopDoubleClickPropagation"));

	UCommonButtonBase_StopDoubleClickPropagation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButtonBase.SetTriggeringInputAction
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FDataTableRowHandle     InputActionRow                 (ConstParm, Parm, OutParm, ReferenceParm)

void UCommonButtonBase::SetTriggeringInputAction(const struct FDataTableRowHandle& InputActionRow)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonBase.SetTriggeringInputAction"));

	UCommonButtonBase_SetTriggeringInputAction_Params params;
	params.InputActionRow = InputActionRow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButtonBase.SetTriggeredInputAction
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FDataTableRowHandle     InputActionRow                 (ConstParm, Parm, OutParm, ReferenceParm)

void UCommonButtonBase::SetTriggeredInputAction(const struct FDataTableRowHandle& InputActionRow)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonBase.SetTriggeredInputAction"));

	UCommonButtonBase_SetTriggeredInputAction_Params params;
	params.InputActionRow = InputActionRow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButtonBase.SetTouchMethod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EButtonTouchMethod> InTouchMethod                  (Parm, ZeroConstructor, IsPlainOldData)

void UCommonButtonBase::SetTouchMethod(TEnumAsByte<EButtonTouchMethod> InTouchMethod)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonBase.SetTouchMethod"));

	UCommonButtonBase_SetTouchMethod_Params params;
	params.InTouchMethod = InTouchMethod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButtonBase.SetStyle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  InStyle                        (Parm, ZeroConstructor, IsPlainOldData)

void UCommonButtonBase::SetStyle(class UClass* InStyle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonBase.SetStyle"));

	UCommonButtonBase_SetStyle_Params params;
	params.InStyle = InStyle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButtonBase.SetShouldUseFallbackDefaultInputAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInShouldUseFallbackDefaultInputAction (Parm, ZeroConstructor, IsPlainOldData)

void UCommonButtonBase::SetShouldUseFallbackDefaultInputAction(bool bInShouldUseFallbackDefaultInputAction)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonBase.SetShouldUseFallbackDefaultInputAction"));

	UCommonButtonBase_SetShouldUseFallbackDefaultInputAction_Params params;
	params.bInShouldUseFallbackDefaultInputAction = bInShouldUseFallbackDefaultInputAction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButtonBase.SetShouldSelectUponReceivingFocus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInShouldSelectUponReceivingFocus (Parm, ZeroConstructor, IsPlainOldData)

void UCommonButtonBase::SetShouldSelectUponReceivingFocus(bool bInShouldSelectUponReceivingFocus)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonBase.SetShouldSelectUponReceivingFocus"));

	UCommonButtonBase_SetShouldSelectUponReceivingFocus_Params params;
	params.bInShouldSelectUponReceivingFocus = bInShouldSelectUponReceivingFocus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButtonBase.SetSelectedInternal
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                           bInSelected                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAllowSound                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBroadcast                     (Parm, ZeroConstructor, IsPlainOldData)

void UCommonButtonBase::SetSelectedInternal(bool bInSelected, bool bAllowSound, bool bBroadcast)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonBase.SetSelectedInternal"));

	UCommonButtonBase_SetSelectedInternal_Params params;
	params.bInSelected = bInSelected;
	params.bAllowSound = bAllowSound;
	params.bBroadcast = bBroadcast;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButtonBase.SetPressMethod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EButtonPressMethod> InPressMethod                  (Parm, ZeroConstructor, IsPlainOldData)

void UCommonButtonBase::SetPressMethod(TEnumAsByte<EButtonPressMethod> InPressMethod)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonBase.SetPressMethod"));

	UCommonButtonBase_SetPressMethod_Params params;
	params.InPressMethod = InPressMethod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButtonBase.SetPressedSoundOverride
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundBase*              Sound                          (Parm, ZeroConstructor, IsPlainOldData)

void UCommonButtonBase::SetPressedSoundOverride(class USoundBase* Sound)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonBase.SetPressedSoundOverride"));

	UCommonButtonBase_SetPressedSoundOverride_Params params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButtonBase.SetMinDimensions
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InMinWidth                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            InMinHeight                    (Parm, ZeroConstructor, IsPlainOldData)

void UCommonButtonBase::SetMinDimensions(int InMinWidth, int InMinHeight)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonBase.SetMinDimensions"));

	UCommonButtonBase_SetMinDimensions_Params params;
	params.InMinWidth = InMinWidth;
	params.InMinHeight = InMinHeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButtonBase.SetIsToggleable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInIsToggleable                (Parm, ZeroConstructor, IsPlainOldData)

void UCommonButtonBase::SetIsToggleable(bool bInIsToggleable)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonBase.SetIsToggleable"));

	UCommonButtonBase_SetIsToggleable_Params params;
	params.bInIsToggleable = bInIsToggleable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButtonBase.SetIsSelected
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InSelected                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bGiveClickFeedback             (Parm, ZeroConstructor, IsPlainOldData)

void UCommonButtonBase::SetIsSelected(bool InSelected, bool bGiveClickFeedback)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonBase.SetIsSelected"));

	UCommonButtonBase_SetIsSelected_Params params;
	params.InSelected = InSelected;
	params.bGiveClickFeedback = bGiveClickFeedback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButtonBase.SetIsSelectable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInIsSelectable                (Parm, ZeroConstructor, IsPlainOldData)

void UCommonButtonBase::SetIsSelectable(bool bInIsSelectable)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonBase.SetIsSelectable"));

	UCommonButtonBase_SetIsSelectable_Params params;
	params.bInIsSelectable = bInIsSelectable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButtonBase.SetIsInteractionEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInIsInteractionEnabled        (Parm, ZeroConstructor, IsPlainOldData)

void UCommonButtonBase::SetIsInteractionEnabled(bool bInIsInteractionEnabled)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonBase.SetIsInteractionEnabled"));

	UCommonButtonBase_SetIsInteractionEnabled_Params params;
	params.bInIsInteractionEnabled = bInIsInteractionEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButtonBase.SetIsInteractableWhenSelected
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInInteractableWhenSelected    (Parm, ZeroConstructor, IsPlainOldData)

void UCommonButtonBase::SetIsInteractableWhenSelected(bool bInInteractableWhenSelected)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonBase.SetIsInteractableWhenSelected"));

	UCommonButtonBase_SetIsInteractableWhenSelected_Params params;
	params.bInInteractableWhenSelected = bInInteractableWhenSelected;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButtonBase.SetIsFocusable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInIsFocusable                 (Parm, ZeroConstructor, IsPlainOldData)

void UCommonButtonBase::SetIsFocusable(bool bInIsFocusable)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonBase.SetIsFocusable"));

	UCommonButtonBase_SetIsFocusable_Params params;
	params.bInIsFocusable = bInIsFocusable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButtonBase.SetInputActionProgressMaterial
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSlateBrush             InProgressMaterialBrush        (ConstParm, Parm, OutParm, ReferenceParm)
// struct FName                   InProgressMaterialParam        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UCommonButtonBase::SetInputActionProgressMaterial(const struct FSlateBrush& InProgressMaterialBrush, const struct FName& InProgressMaterialParam)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonBase.SetInputActionProgressMaterial"));

	UCommonButtonBase_SetInputActionProgressMaterial_Params params;
	params.InProgressMaterialBrush = InProgressMaterialBrush;
	params.InProgressMaterialParam = InProgressMaterialParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButtonBase.SetHoveredSoundOverride
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundBase*              Sound                          (Parm, ZeroConstructor, IsPlainOldData)

void UCommonButtonBase::SetHoveredSoundOverride(class USoundBase* Sound)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonBase.SetHoveredSoundOverride"));

	UCommonButtonBase_SetHoveredSoundOverride_Params params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButtonBase.SetClickMethod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EButtonClickMethod> InClickMethod                  (Parm, ZeroConstructor, IsPlainOldData)

void UCommonButtonBase::SetClickMethod(TEnumAsByte<EButtonClickMethod> InClickMethod)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonBase.SetClickMethod"));

	UCommonButtonBase_SetClickMethod_Params params;
	params.InClickMethod = InClickMethod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButtonBase.OnTriggeredInputActionChanged
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     NewTriggeredAction             (ConstParm, Parm, OutParm, ReferenceParm)

void UCommonButtonBase::OnTriggeredInputActionChanged(const struct FDataTableRowHandle& NewTriggeredAction)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonBase.OnTriggeredInputActionChanged"));

	UCommonButtonBase_OnTriggeredInputActionChanged_Params params;
	params.NewTriggeredAction = NewTriggeredAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButtonBase.OnInputMethodChanged
// (Native, Protected)
// Parameters:
// enum class ECommonInputType    CurrentInputType               (Parm, ZeroConstructor, IsPlainOldData)

void UCommonButtonBase::OnInputMethodChanged(enum class ECommonInputType CurrentInputType)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonBase.OnInputMethodChanged"));

	UCommonButtonBase_OnInputMethodChanged_Params params;
	params.CurrentInputType = CurrentInputType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButtonBase.OnCurrentTextStyleChanged
// (Event, Protected, BlueprintEvent)

void UCommonButtonBase::OnCurrentTextStyleChanged()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonBase.OnCurrentTextStyleChanged"));

	UCommonButtonBase_OnCurrentTextStyleChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButtonBase.OnActionProgress
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          HeldPercent                    (Parm, ZeroConstructor, IsPlainOldData)

void UCommonButtonBase::OnActionProgress(float HeldPercent)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonBase.OnActionProgress"));

	UCommonButtonBase_OnActionProgress_Params params;
	params.HeldPercent = HeldPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButtonBase.OnActionComplete
// (Event, Protected, BlueprintEvent)

void UCommonButtonBase::OnActionComplete()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonBase.OnActionComplete"));

	UCommonButtonBase_OnActionComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButtonBase.NativeOnActionProgress
// (Native, Protected)
// Parameters:
// float                          HeldPercent                    (Parm, ZeroConstructor, IsPlainOldData)

void UCommonButtonBase::NativeOnActionProgress(float HeldPercent)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonBase.NativeOnActionProgress"));

	UCommonButtonBase_NativeOnActionProgress_Params params;
	params.HeldPercent = HeldPercent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButtonBase.NativeOnActionComplete
// (Native, Protected)

void UCommonButtonBase::NativeOnActionComplete()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonBase.NativeOnActionComplete"));

	UCommonButtonBase_NativeOnActionComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButtonBase.IsPressed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCommonButtonBase::IsPressed()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonBase.IsPressed"));

	UCommonButtonBase_IsPressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonButtonBase.IsInteractionEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCommonButtonBase::IsInteractionEnabled()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonBase.IsInteractionEnabled"));

	UCommonButtonBase_IsInteractionEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonButtonBase.HandleTriggeringActionCommited
// (Native, Protected, HasOutParms)
// Parameters:
// bool                           bPassThrough                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCommonButtonBase::HandleTriggeringActionCommited(bool* bPassThrough)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonBase.HandleTriggeringActionCommited"));

	UCommonButtonBase_HandleTriggeringActionCommited_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bPassThrough != nullptr)
		*bPassThrough = params.bPassThrough;
}


// Function CommonUI.CommonButtonBase.HandleFocusReceived
// (Native, Protected)

void UCommonButtonBase::HandleFocusReceived()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonBase.HandleFocusReceived"));

	UCommonButtonBase_HandleFocusReceived_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButtonBase.HandleButtonReleased
// (Final, Native, Protected)

void UCommonButtonBase::HandleButtonReleased()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonBase.HandleButtonReleased"));

	UCommonButtonBase_HandleButtonReleased_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButtonBase.HandleButtonPressed
// (Final, Native, Protected)

void UCommonButtonBase::HandleButtonPressed()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonBase.HandleButtonPressed"));

	UCommonButtonBase_HandleButtonPressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButtonBase.HandleButtonClicked
// (Final, Native, Protected)

void UCommonButtonBase::HandleButtonClicked()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonBase.HandleButtonClicked"));

	UCommonButtonBase_HandleButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButtonBase.GetStyle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCommonButtonStyle*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonButtonStyle* UCommonButtonBase::GetStyle()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonBase.GetStyle"));

	UCommonButtonBase_GetStyle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonButtonBase.GetSingleMaterialStyleMID
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMaterialInstanceDynamic* UCommonButtonBase::GetSingleMaterialStyleMID()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonBase.GetSingleMaterialStyleMID"));

	UCommonButtonBase_GetSingleMaterialStyleMID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonButtonBase.GetShouldSelectUponReceivingFocus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCommonButtonBase::GetShouldSelectUponReceivingFocus()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonBase.GetShouldSelectUponReceivingFocus"));

	UCommonButtonBase_GetShouldSelectUponReceivingFocus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonButtonBase.GetSelected
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCommonButtonBase::GetSelected()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonBase.GetSelected"));

	UCommonButtonBase_GetSelected_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonButtonBase.GetIsFocusable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCommonButtonBase::GetIsFocusable()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonBase.GetIsFocusable"));

	UCommonButtonBase_GetIsFocusable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonButtonBase.GetInputAction
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDataTableRowHandle     InputActionRow                 (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCommonButtonBase::GetInputAction(struct FDataTableRowHandle* InputActionRow)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonBase.GetInputAction"));

	UCommonButtonBase_GetInputAction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InputActionRow != nullptr)
		*InputActionRow = params.InputActionRow;

	return params.ReturnValue;
}


// Function CommonUI.CommonButtonBase.GetCurrentTextStyleClass
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UCommonButtonBase::GetCurrentTextStyleClass()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonBase.GetCurrentTextStyleClass"));

	UCommonButtonBase_GetCurrentTextStyleClass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonButtonBase.GetCurrentTextStyle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCommonTextStyle*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonTextStyle* UCommonButtonBase::GetCurrentTextStyle()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonBase.GetCurrentTextStyle"));

	UCommonButtonBase_GetCurrentTextStyle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonButtonBase.GetCurrentCustomPadding
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMargin                 OutCustomPadding               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCommonButtonBase::GetCurrentCustomPadding(struct FMargin* OutCustomPadding)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonBase.GetCurrentCustomPadding"));

	UCommonButtonBase_GetCurrentCustomPadding_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutCustomPadding != nullptr)
		*OutCustomPadding = params.OutCustomPadding;
}


// Function CommonUI.CommonButtonBase.GetCurrentButtonPadding
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMargin                 OutButtonPadding               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCommonButtonBase::GetCurrentButtonPadding(struct FMargin* OutButtonPadding)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonBase.GetCurrentButtonPadding"));

	UCommonButtonBase_GetCurrentButtonPadding_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutButtonPadding != nullptr)
		*OutButtonPadding = params.OutButtonPadding;
}


// Function CommonUI.CommonButtonBase.DisableButtonWithReason
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FText                   DisabledReason                 (ConstParm, Parm, OutParm, ReferenceParm)

void UCommonButtonBase::DisableButtonWithReason(const struct FText& DisabledReason)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonBase.DisableButtonWithReason"));

	UCommonButtonBase_DisableButtonWithReason_Params params;
	params.DisabledReason = DisabledReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButtonBase.ClearSelection
// (Final, Native, Public, BlueprintCallable)

void UCommonButtonBase::ClearSelection()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonBase.ClearSelection"));

	UCommonButtonBase_ClearSelection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButtonBase.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void UCommonButtonBase::BP_OnUnhovered()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonBase.BP_OnUnhovered"));

	UCommonButtonBase_BP_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButtonBase.BP_OnSelected
// (Event, Protected, BlueprintEvent)

void UCommonButtonBase::BP_OnSelected()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonBase.BP_OnSelected"));

	UCommonButtonBase_BP_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButtonBase.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void UCommonButtonBase::BP_OnHovered()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonBase.BP_OnHovered"));

	UCommonButtonBase_BP_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButtonBase.BP_OnEnabled
// (Event, Protected, BlueprintEvent)

void UCommonButtonBase::BP_OnEnabled()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonBase.BP_OnEnabled"));

	UCommonButtonBase_BP_OnEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButtonBase.BP_OnDoubleClicked
// (Event, Protected, BlueprintEvent)

void UCommonButtonBase::BP_OnDoubleClicked()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonBase.BP_OnDoubleClicked"));

	UCommonButtonBase_BP_OnDoubleClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButtonBase.BP_OnDisabled
// (Event, Protected, BlueprintEvent)

void UCommonButtonBase::BP_OnDisabled()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonBase.BP_OnDisabled"));

	UCommonButtonBase_BP_OnDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButtonBase.BP_OnDeselected
// (Event, Protected, BlueprintEvent)

void UCommonButtonBase::BP_OnDeselected()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonBase.BP_OnDeselected"));

	UCommonButtonBase_BP_OnDeselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButtonBase.BP_OnClicked
// (Event, Protected, BlueprintEvent)

void UCommonButtonBase::BP_OnClicked()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonBase.BP_OnClicked"));

	UCommonButtonBase_BP_OnClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonTabListWidgetBase.SetTabVisibility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   TabNameID                      (Parm, ZeroConstructor, IsPlainOldData)
// enum class ESlateVisibility    NewVisibility                  (Parm, ZeroConstructor, IsPlainOldData)

void UCommonTabListWidgetBase::SetTabVisibility(const struct FName& TabNameID, enum class ESlateVisibility NewVisibility)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonTabListWidgetBase.SetTabVisibility"));

	UCommonTabListWidgetBase_SetTabVisibility_Params params;
	params.TabNameID = TabNameID;
	params.NewVisibility = NewVisibility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonTabListWidgetBase.SetTabInteractionEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   TabNameID                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void UCommonTabListWidgetBase::SetTabInteractionEnabled(const struct FName& TabNameID, bool bEnable)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonTabListWidgetBase.SetTabInteractionEnabled"));

	UCommonTabListWidgetBase_SetTabInteractionEnabled_Params params;
	params.TabNameID = TabNameID;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonTabListWidgetBase.SetTabEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   TabNameID                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void UCommonTabListWidgetBase::SetTabEnabled(const struct FName& TabNameID, bool bEnable)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonTabListWidgetBase.SetTabEnabled"));

	UCommonTabListWidgetBase_SetTabEnabled_Params params;
	params.TabNameID = TabNameID;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonTabListWidgetBase.SetListeningForInput
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bShouldListen                  (Parm, ZeroConstructor, IsPlainOldData)

void UCommonTabListWidgetBase::SetListeningForInput(bool bShouldListen)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonTabListWidgetBase.SetListeningForInput"));

	UCommonTabListWidgetBase_SetListeningForInput_Params params;
	params.bShouldListen = bShouldListen;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonTabListWidgetBase.SetLinkedSwitcher
// (Native, Public, BlueprintCallable)
// Parameters:
// class UCommonAnimatedSwitcher* CommonSwitcher                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCommonTabListWidgetBase::SetLinkedSwitcher(class UCommonAnimatedSwitcher* CommonSwitcher)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonTabListWidgetBase.SetLinkedSwitcher"));

	UCommonTabListWidgetBase_SetLinkedSwitcher_Params params;
	params.CommonSwitcher = CommonSwitcher;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonTabListWidgetBase.SelectTabByID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   TabNameID                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuppressClickFeedback         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCommonTabListWidgetBase::SelectTabByID(const struct FName& TabNameID, bool bSuppressClickFeedback)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonTabListWidgetBase.SelectTabByID"));

	UCommonTabListWidgetBase_SelectTabByID_Params params;
	params.TabNameID = TabNameID;
	params.bSuppressClickFeedback = bSuppressClickFeedback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonTabListWidgetBase.RemoveTab
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   TabNameID                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCommonTabListWidgetBase::RemoveTab(const struct FName& TabNameID)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonTabListWidgetBase.RemoveTab"));

	UCommonTabListWidgetBase_RemoveTab_Params params;
	params.TabNameID = TabNameID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonTabListWidgetBase.RemoveAllTabs
// (Final, Native, Public, BlueprintCallable)

void UCommonTabListWidgetBase::RemoveAllTabs()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonTabListWidgetBase.RemoveAllTabs"));

	UCommonTabListWidgetBase_RemoveAllTabs_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonTabListWidgetBase.RegisterTab
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   TabNameID                      (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ButtonWidgetType               (Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 ContentWidget                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCommonTabListWidgetBase::RegisterTab(const struct FName& TabNameID, class UClass* ButtonWidgetType, class UWidget* ContentWidget)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonTabListWidgetBase.RegisterTab"));

	UCommonTabListWidgetBase_RegisterTab_Params params;
	params.TabNameID = TabNameID;
	params.ButtonWidgetType = ButtonWidgetType;
	params.ContentWidget = ContentWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction CommonUI.CommonTabListWidgetBase.OnTabSelected__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// struct FName                   TabId                          (Parm, ZeroConstructor, IsPlainOldData)

void UCommonTabListWidgetBase::OnTabSelected__DelegateSignature(const struct FName& TabId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("DelegateFunction CommonUI.CommonTabListWidgetBase.OnTabSelected__DelegateSignature"));

	UCommonTabListWidgetBase_OnTabSelected__DelegateSignature_Params params;
	params.TabId = TabId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction CommonUI.CommonTabListWidgetBase.OnTabButtonRemoval__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// struct FName                   TabId                          (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonButtonBase*       TabButton                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCommonTabListWidgetBase::OnTabButtonRemoval__DelegateSignature(const struct FName& TabId, class UCommonButtonBase* TabButton)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("DelegateFunction CommonUI.CommonTabListWidgetBase.OnTabButtonRemoval__DelegateSignature"));

	UCommonTabListWidgetBase_OnTabButtonRemoval__DelegateSignature_Params params;
	params.TabId = TabId;
	params.TabButton = TabButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction CommonUI.CommonTabListWidgetBase.OnTabButtonCreation__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// struct FName                   TabId                          (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonButtonBase*       TabButton                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCommonTabListWidgetBase::OnTabButtonCreation__DelegateSignature(const struct FName& TabId, class UCommonButtonBase* TabButton)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("DelegateFunction CommonUI.CommonTabListWidgetBase.OnTabButtonCreation__DelegateSignature"));

	UCommonTabListWidgetBase_OnTabButtonCreation__DelegateSignature_Params params;
	params.TabId = TabId;
	params.TabButton = TabButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonTabListWidgetBase.HandleTabSelection
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// struct FName                   TabNameID                      (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonButtonBase*       TabButton                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCommonTabListWidgetBase::HandleTabSelection(const struct FName& TabNameID, class UCommonButtonBase* TabButton)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonTabListWidgetBase.HandleTabSelection"));

	UCommonTabListWidgetBase_HandleTabSelection_Params params;
	params.TabNameID = TabNameID;
	params.TabButton = TabButton;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonTabListWidgetBase.HandleTabRemoval
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// struct FName                   TabNameID                      (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonButtonBase*       TabButton                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCommonTabListWidgetBase::HandleTabRemoval(const struct FName& TabNameID, class UCommonButtonBase* TabButton)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonTabListWidgetBase.HandleTabRemoval"));

	UCommonTabListWidgetBase_HandleTabRemoval_Params params;
	params.TabNameID = TabNameID;
	params.TabButton = TabButton;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonTabListWidgetBase.HandleTabCreation
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// struct FName                   TabNameID                      (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonButtonBase*       TabButton                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCommonTabListWidgetBase::HandleTabCreation(const struct FName& TabNameID, class UCommonButtonBase* TabButton)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonTabListWidgetBase.HandleTabCreation"));

	UCommonTabListWidgetBase_HandleTabCreation_Params params;
	params.TabNameID = TabNameID;
	params.TabButton = TabButton;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonTabListWidgetBase.HandleTabButtonSelected
// (Final, Native, Protected)
// Parameters:
// class UCommonButtonBase*       SelectedTabButton              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            ButtonIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void UCommonTabListWidgetBase::HandleTabButtonSelected(class UCommonButtonBase* SelectedTabButton, int ButtonIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonTabListWidgetBase.HandleTabButtonSelected"));

	UCommonTabListWidgetBase_HandleTabButtonSelected_Params params;
	params.SelectedTabButton = SelectedTabButton;
	params.ButtonIndex = ButtonIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonTabListWidgetBase.HandlePreviousTabInputAction
// (Final, Native, Protected, HasOutParms)
// Parameters:
// bool                           bPassThrough                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCommonTabListWidgetBase::HandlePreviousTabInputAction(bool* bPassThrough)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonTabListWidgetBase.HandlePreviousTabInputAction"));

	UCommonTabListWidgetBase_HandlePreviousTabInputAction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bPassThrough != nullptr)
		*bPassThrough = params.bPassThrough;
}


// Function CommonUI.CommonTabListWidgetBase.HandlePreLinkedSwitcherChanged_BP
// (Event, Protected, BlueprintEvent)

void UCommonTabListWidgetBase::HandlePreLinkedSwitcherChanged_BP()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonTabListWidgetBase.HandlePreLinkedSwitcherChanged_BP"));

	UCommonTabListWidgetBase_HandlePreLinkedSwitcherChanged_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonTabListWidgetBase.HandlePostLinkedSwitcherChanged_BP
// (Event, Protected, BlueprintEvent)

void UCommonTabListWidgetBase::HandlePostLinkedSwitcherChanged_BP()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonTabListWidgetBase.HandlePostLinkedSwitcherChanged_BP"));

	UCommonTabListWidgetBase_HandlePostLinkedSwitcherChanged_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonTabListWidgetBase.HandleNextTabInputAction
// (Final, Native, Protected, HasOutParms)
// Parameters:
// bool                           bPassThrough                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCommonTabListWidgetBase::HandleNextTabInputAction(bool* bPassThrough)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonTabListWidgetBase.HandleNextTabInputAction"));

	UCommonTabListWidgetBase_HandleNextTabInputAction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bPassThrough != nullptr)
		*bPassThrough = params.bPassThrough;
}


// Function CommonUI.CommonTabListWidgetBase.GetTabWidgetBaseByID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   TabNameID                      (Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UCommonTabListWidgetBase::GetTabWidgetBaseByID(const struct FName& TabNameID)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonTabListWidgetBase.GetTabWidgetBaseByID"));

	UCommonTabListWidgetBase_GetTabWidgetBaseByID_Params params;
	params.TabNameID = TabNameID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonTabListWidgetBase.GetTabIdAtIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UCommonTabListWidgetBase::GetTabIdAtIndex(int Index)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonTabListWidgetBase.GetTabIdAtIndex"));

	UCommonTabListWidgetBase_GetTabIdAtIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonTabListWidgetBase.GetTabCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCommonTabListWidgetBase::GetTabCount()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonTabListWidgetBase.GetTabCount"));

	UCommonTabListWidgetBase_GetTabCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonTabListWidgetBase.GetTabButtonBaseByID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   TabNameID                      (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonButtonBase*       ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UCommonButtonBase* UCommonTabListWidgetBase::GetTabButtonBaseByID(const struct FName& TabNameID)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonTabListWidgetBase.GetTabButtonBaseByID"));

	UCommonTabListWidgetBase_GetTabButtonBaseByID_Params params;
	params.TabNameID = TabNameID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonTabListWidgetBase.GetSelectedTabId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UCommonTabListWidgetBase::GetSelectedTabId()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonTabListWidgetBase.GetSelectedTabId"));

	UCommonTabListWidgetBase_GetSelectedTabId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonTabListWidgetBase.GetLinkedSwitcher
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCommonAnimatedSwitcher* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UCommonAnimatedSwitcher* UCommonTabListWidgetBase::GetLinkedSwitcher()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonTabListWidgetBase.GetLinkedSwitcher"));

	UCommonTabListWidgetBase_GetLinkedSwitcher_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonTabListWidgetBase.GetActiveTab
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UCommonTabListWidgetBase::GetActiveTab()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonTabListWidgetBase.GetActiveTab"));

	UCommonTabListWidgetBase_GetActiveTab_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonTabListWidgetBase.DisableTabWithReason
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   TabNameID                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Reason                         (ConstParm, Parm, OutParm, ReferenceParm)

void UCommonTabListWidgetBase::DisableTabWithReason(const struct FName& TabNameID, const struct FText& Reason)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonTabListWidgetBase.DisableTabWithReason"));

	UCommonTabListWidgetBase_DisableTabWithReason_Params params;
	params.TabNameID = TabNameID;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonBorderStyle.GetBackgroundBrush
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateBrush             Brush                          (Parm, OutParm)

void UCommonBorderStyle::GetBackgroundBrush(struct FSlateBrush* Brush)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonBorderStyle.GetBackgroundBrush"));

	UCommonBorderStyle_GetBackgroundBrush_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Brush != nullptr)
		*Brush = params.Brush;
}


// Function CommonUI.CommonBorder.SetStyle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  InStyle                        (Parm, ZeroConstructor, IsPlainOldData)

void UCommonBorder::SetStyle(class UClass* InStyle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonBorder.SetStyle"));

	UCommonBorder_SetStyle_Params params;
	params.InStyle = InStyle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonBoundActionButton.OnUpdateInputAction
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   ActionName                     (ConstParm, Parm, OutParm, ReferenceParm)

void UCommonBoundActionButton::OnUpdateInputAction(const struct FText& ActionName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonBoundActionButton.OnUpdateInputAction"));

	UCommonBoundActionButton_OnUpdateInputAction_Params params;
	params.ActionName = ActionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButtonStyle.GetSelectedTextStyle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCommonTextStyle*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonTextStyle* UCommonButtonStyle::GetSelectedTextStyle()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonStyle.GetSelectedTextStyle"));

	UCommonButtonStyle_GetSelectedTextStyle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonButtonStyle.GetSelectedPressedBrush
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateBrush             Brush                          (Parm, OutParm)

void UCommonButtonStyle::GetSelectedPressedBrush(struct FSlateBrush* Brush)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonStyle.GetSelectedPressedBrush"));

	UCommonButtonStyle_GetSelectedPressedBrush_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Brush != nullptr)
		*Brush = params.Brush;
}


// Function CommonUI.CommonButtonStyle.GetSelectedHoveredTextStyle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCommonTextStyle*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonTextStyle* UCommonButtonStyle::GetSelectedHoveredTextStyle()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonStyle.GetSelectedHoveredTextStyle"));

	UCommonButtonStyle_GetSelectedHoveredTextStyle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonButtonStyle.GetSelectedHoveredBrush
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateBrush             Brush                          (Parm, OutParm)

void UCommonButtonStyle::GetSelectedHoveredBrush(struct FSlateBrush* Brush)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonStyle.GetSelectedHoveredBrush"));

	UCommonButtonStyle_GetSelectedHoveredBrush_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Brush != nullptr)
		*Brush = params.Brush;
}


// Function CommonUI.CommonButtonStyle.GetSelectedBaseBrush
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateBrush             Brush                          (Parm, OutParm)

void UCommonButtonStyle::GetSelectedBaseBrush(struct FSlateBrush* Brush)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonStyle.GetSelectedBaseBrush"));

	UCommonButtonStyle_GetSelectedBaseBrush_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Brush != nullptr)
		*Brush = params.Brush;
}


// Function CommonUI.CommonButtonStyle.GetNormalTextStyle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCommonTextStyle*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonTextStyle* UCommonButtonStyle::GetNormalTextStyle()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonStyle.GetNormalTextStyle"));

	UCommonButtonStyle_GetNormalTextStyle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonButtonStyle.GetNormalPressedBrush
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateBrush             Brush                          (Parm, OutParm)

void UCommonButtonStyle::GetNormalPressedBrush(struct FSlateBrush* Brush)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonStyle.GetNormalPressedBrush"));

	UCommonButtonStyle_GetNormalPressedBrush_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Brush != nullptr)
		*Brush = params.Brush;
}


// Function CommonUI.CommonButtonStyle.GetNormalHoveredTextStyle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCommonTextStyle*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonTextStyle* UCommonButtonStyle::GetNormalHoveredTextStyle()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonStyle.GetNormalHoveredTextStyle"));

	UCommonButtonStyle_GetNormalHoveredTextStyle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonButtonStyle.GetNormalHoveredBrush
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateBrush             Brush                          (Parm, OutParm)

void UCommonButtonStyle::GetNormalHoveredBrush(struct FSlateBrush* Brush)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonStyle.GetNormalHoveredBrush"));

	UCommonButtonStyle_GetNormalHoveredBrush_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Brush != nullptr)
		*Brush = params.Brush;
}


// Function CommonUI.CommonButtonStyle.GetNormalBaseBrush
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateBrush             Brush                          (Parm, OutParm)

void UCommonButtonStyle::GetNormalBaseBrush(struct FSlateBrush* Brush)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonStyle.GetNormalBaseBrush"));

	UCommonButtonStyle_GetNormalBaseBrush_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Brush != nullptr)
		*Brush = params.Brush;
}


// Function CommonUI.CommonButtonStyle.GetMaterialBrush
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateBrush             Brush                          (Parm, OutParm)

void UCommonButtonStyle::GetMaterialBrush(struct FSlateBrush* Brush)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonStyle.GetMaterialBrush"));

	UCommonButtonStyle_GetMaterialBrush_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Brush != nullptr)
		*Brush = params.Brush;
}


// Function CommonUI.CommonButtonStyle.GetDisabledTextStyle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCommonTextStyle*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonTextStyle* UCommonButtonStyle::GetDisabledTextStyle()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonStyle.GetDisabledTextStyle"));

	UCommonButtonStyle_GetDisabledTextStyle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonButtonStyle.GetDisabledBrush
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateBrush             Brush                          (Parm, OutParm)

void UCommonButtonStyle::GetDisabledBrush(struct FSlateBrush* Brush)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonStyle.GetDisabledBrush"));

	UCommonButtonStyle_GetDisabledBrush_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Brush != nullptr)
		*Brush = params.Brush;
}


// Function CommonUI.CommonButtonStyle.GetCustomPadding
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMargin                 OutCustomPadding               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCommonButtonStyle::GetCustomPadding(struct FMargin* OutCustomPadding)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonStyle.GetCustomPadding"));

	UCommonButtonStyle_GetCustomPadding_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutCustomPadding != nullptr)
		*OutCustomPadding = params.OutCustomPadding;
}


// Function CommonUI.CommonButtonStyle.GetButtonPadding
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMargin                 OutButtonPadding               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCommonButtonStyle::GetButtonPadding(struct FMargin* OutButtonPadding)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonStyle.GetButtonPadding"));

	UCommonButtonStyle_GetButtonPadding_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutButtonPadding != nullptr)
		*OutButtonPadding = params.OutButtonPadding;
}


// Function CommonUI.CommonWidgetGroupBase.RemoveWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                 InWidget                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCommonWidgetGroupBase::RemoveWidget(class UWidget* InWidget)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonWidgetGroupBase.RemoveWidget"));

	UCommonWidgetGroupBase_RemoveWidget_Params params;
	params.InWidget = InWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonWidgetGroupBase.RemoveAll
// (Final, Native, Public, BlueprintCallable)

void UCommonWidgetGroupBase::RemoveAll()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonWidgetGroupBase.RemoveAll"));

	UCommonWidgetGroupBase_RemoveAll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonWidgetGroupBase.AddWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                 InWidget                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCommonWidgetGroupBase::AddWidget(class UWidget* InWidget)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonWidgetGroupBase.AddWidget"));

	UCommonWidgetGroupBase_AddWidget_Params params;
	params.InWidget = InWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButtonGroupBase.SetSelectionRequired
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bRequireSelection              (Parm, ZeroConstructor, IsPlainOldData)

void UCommonButtonGroupBase::SetSelectionRequired(bool bRequireSelection)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonGroupBase.SetSelectionRequired"));

	UCommonButtonGroupBase_SetSelectionRequired_Params params;
	params.bRequireSelection = bRequireSelection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButtonGroupBase.SelectPreviousButton
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bAllowWrap                     (Parm, ZeroConstructor, IsPlainOldData)

void UCommonButtonGroupBase::SelectPreviousButton(bool bAllowWrap)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonGroupBase.SelectPreviousButton"));

	UCommonButtonGroupBase_SelectPreviousButton_Params params;
	params.bAllowWrap = bAllowWrap;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButtonGroupBase.SelectNextButton
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bAllowWrap                     (Parm, ZeroConstructor, IsPlainOldData)

void UCommonButtonGroupBase::SelectNextButton(bool bAllowWrap)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonGroupBase.SelectNextButton"));

	UCommonButtonGroupBase_SelectNextButton_Params params;
	params.bAllowWrap = bAllowWrap;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButtonGroupBase.SelectButtonAtIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ButtonIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void UCommonButtonGroupBase::SelectButtonAtIndex(int ButtonIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonGroupBase.SelectButtonAtIndex"));

	UCommonButtonGroupBase_SelectButtonAtIndex_Params params;
	params.ButtonIndex = ButtonIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButtonGroupBase.OnSelectionStateChangedBase
// (Native, Protected)
// Parameters:
// class UCommonButtonBase*       BaseButton                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bIsSelected                    (Parm, ZeroConstructor, IsPlainOldData)

void UCommonButtonGroupBase::OnSelectionStateChangedBase(class UCommonButtonBase* BaseButton, bool bIsSelected)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonGroupBase.OnSelectionStateChangedBase"));

	UCommonButtonGroupBase_OnSelectionStateChangedBase_Params params;
	params.BaseButton = BaseButton;
	params.bIsSelected = bIsSelected;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButtonGroupBase.OnHandleButtonBaseDoubleClicked
// (Native, Protected)
// Parameters:
// class UCommonButtonBase*       BaseButton                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCommonButtonGroupBase::OnHandleButtonBaseDoubleClicked(class UCommonButtonBase* BaseButton)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonGroupBase.OnHandleButtonBaseDoubleClicked"));

	UCommonButtonGroupBase_OnHandleButtonBaseDoubleClicked_Params params;
	params.BaseButton = BaseButton;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButtonGroupBase.OnHandleButtonBaseClicked
// (Native, Protected)
// Parameters:
// class UCommonButtonBase*       BaseButton                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCommonButtonGroupBase::OnHandleButtonBaseClicked(class UCommonButtonBase* BaseButton)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonGroupBase.OnHandleButtonBaseClicked"));

	UCommonButtonGroupBase_OnHandleButtonBaseClicked_Params params;
	params.BaseButton = BaseButton;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButtonGroupBase.OnButtonBaseUnhovered
// (Native, Protected)
// Parameters:
// class UCommonButtonBase*       BaseButton                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCommonButtonGroupBase::OnButtonBaseUnhovered(class UCommonButtonBase* BaseButton)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonGroupBase.OnButtonBaseUnhovered"));

	UCommonButtonGroupBase_OnButtonBaseUnhovered_Params params;
	params.BaseButton = BaseButton;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButtonGroupBase.OnButtonBaseHovered
// (Native, Protected)
// Parameters:
// class UCommonButtonBase*       BaseButton                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCommonButtonGroupBase::OnButtonBaseHovered(class UCommonButtonBase* BaseButton)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonGroupBase.OnButtonBaseHovered"));

	UCommonButtonGroupBase_OnButtonBaseHovered_Params params;
	params.BaseButton = BaseButton;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButtonGroupBase.HasAnyButtons
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCommonButtonGroupBase::HasAnyButtons()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonGroupBase.HasAnyButtons"));

	UCommonButtonGroupBase_HasAnyButtons_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonButtonGroupBase.GetSelectedButtonIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCommonButtonGroupBase::GetSelectedButtonIndex()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonGroupBase.GetSelectedButtonIndex"));

	UCommonButtonGroupBase_GetSelectedButtonIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonButtonGroupBase.GetSelectedButtonBase
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCommonButtonBase*       ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UCommonButtonBase* UCommonButtonGroupBase::GetSelectedButtonBase()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonGroupBase.GetSelectedButtonBase"));

	UCommonButtonGroupBase_GetSelectedButtonBase_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonButtonGroupBase.GetHoveredButtonIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCommonButtonGroupBase::GetHoveredButtonIndex()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonGroupBase.GetHoveredButtonIndex"));

	UCommonButtonGroupBase_GetHoveredButtonIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonButtonGroupBase.GetButtonCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCommonButtonGroupBase::GetButtonCount()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonGroupBase.GetButtonCount"));

	UCommonButtonGroupBase_GetButtonCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonButtonGroupBase.GetButtonBaseAtIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonButtonBase*       ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UCommonButtonBase* UCommonButtonGroupBase::GetButtonBaseAtIndex(int Index)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonGroupBase.GetButtonBaseAtIndex"));

	UCommonButtonGroupBase_GetButtonBaseAtIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonButtonGroupBase.FindButtonIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCommonButtonBase*       ButtonToFind                   (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCommonButtonGroupBase::FindButtonIndex(class UCommonButtonBase* ButtonToFind)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonGroupBase.FindButtonIndex"));

	UCommonButtonGroupBase_FindButtonIndex_Params params;
	params.ButtonToFind = ButtonToFind;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonButtonGroupBase.DeselectAll
// (Final, Native, Public, BlueprintCallable)

void UCommonButtonGroupBase::DeselectAll()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonButtonGroupBase.DeselectAll"));

	UCommonButtonGroupBase_DeselectAll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonTextBlock.SetWrapTextWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InWrapTextAt                   (Parm, ZeroConstructor, IsPlainOldData)

void UCommonTextBlock::SetWrapTextWidth(int InWrapTextAt)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonTextBlock.SetWrapTextWidth"));

	UCommonTextBlock_SetWrapTextWidth_Params params;
	params.InWrapTextAt = InWrapTextAt;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonTextBlock.SetTextCase
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bUseAllCaps                    (Parm, ZeroConstructor, IsPlainOldData)

void UCommonTextBlock::SetTextCase(bool bUseAllCaps)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonTextBlock.SetTextCase"));

	UCommonTextBlock_SetTextCase_Params params;
	params.bUseAllCaps = bUseAllCaps;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonTextBlock.SetStyle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  InStyle                        (Parm, ZeroConstructor, IsPlainOldData)

void UCommonTextBlock::SetStyle(class UClass* InStyle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonTextBlock.SetStyle"));

	UCommonTextBlock_SetStyle_Params params;
	params.InStyle = InStyle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonTextBlock.ResetScrollState
// (Final, Native, Public, BlueprintCallable)

void UCommonTextBlock::ResetScrollState()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonTextBlock.ResetScrollState"));

	UCommonTextBlock_ResetScrollState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonDateTimeTextBlock.SetTimespanValue
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTimespan               InTimespan                     (ConstParm, Parm, ZeroConstructor)

void UCommonDateTimeTextBlock::SetTimespanValue(const struct FTimespan& InTimespan)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonDateTimeTextBlock.SetTimespanValue"));

	UCommonDateTimeTextBlock_SetTimespanValue_Params params;
	params.InTimespan = InTimespan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonDateTimeTextBlock.SetDateTimeValue
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FDateTime               InDateTime                     (ConstParm, Parm, ZeroConstructor)
// bool                           bShowAsCountdown               (Parm, ZeroConstructor, IsPlainOldData)
// float                          InRefreshDelay                 (Parm, ZeroConstructor, IsPlainOldData)

void UCommonDateTimeTextBlock::SetDateTimeValue(const struct FDateTime& InDateTime, bool bShowAsCountdown, float InRefreshDelay)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonDateTimeTextBlock.SetDateTimeValue"));

	UCommonDateTimeTextBlock_SetDateTimeValue_Params params;
	params.InDateTime = InDateTime;
	params.bShowAsCountdown = bShowAsCountdown;
	params.InRefreshDelay = InRefreshDelay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonDateTimeTextBlock.SetCountDownCompletionText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText                   InCompletionText               (ConstParm, Parm)

void UCommonDateTimeTextBlock::SetCountDownCompletionText(const struct FText& InCompletionText)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonDateTimeTextBlock.SetCountDownCompletionText"));

	UCommonDateTimeTextBlock_SetCountDownCompletionText_Params params;
	params.InCompletionText = InCompletionText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonDateTimeTextBlock.GetDateTime
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDateTime               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FDateTime UCommonDateTimeTextBlock::GetDateTime()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonDateTimeTextBlock.GetDateTime"));

	UCommonDateTimeTextBlock_GetDateTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonLazyImage.SetMaterialTextureParamName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   TextureParamName               (Parm, ZeroConstructor, IsPlainOldData)

void UCommonLazyImage::SetMaterialTextureParamName(const struct FName& TextureParamName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonLazyImage.SetMaterialTextureParamName"));

	UCommonLazyImage_SetMaterialTextureParamName_Params params;
	params.TextureParamName = TextureParamName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonLazyImage.SetBrushFromLazyTexture
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// bool                           bMatchSize                     (Parm, ZeroConstructor, IsPlainOldData)

void UCommonLazyImage::SetBrushFromLazyTexture(bool bMatchSize)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonLazyImage.SetBrushFromLazyTexture"));

	UCommonLazyImage_SetBrushFromLazyTexture_Params params;
	params.bMatchSize = bMatchSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonLazyImage.SetBrushFromLazyMaterial
// (Final, Native, Public, HasOutParms, BlueprintCallable)

void UCommonLazyImage::SetBrushFromLazyMaterial()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonLazyImage.SetBrushFromLazyMaterial"));

	UCommonLazyImage_SetBrushFromLazyMaterial_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonLazyImage.SetBrushFromLazyDisplayAsset
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// bool                           bMatchTextureSize              (Parm, ZeroConstructor, IsPlainOldData)

void UCommonLazyImage::SetBrushFromLazyDisplayAsset(bool bMatchTextureSize)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonLazyImage.SetBrushFromLazyDisplayAsset"));

	UCommonLazyImage_SetBrushFromLazyDisplayAsset_Params params;
	params.bMatchTextureSize = bMatchTextureSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonLazyImage.IsLoading
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCommonLazyImage::IsLoading()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonLazyImage.IsLoading"));

	UCommonLazyImage_IsLoading_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonLazyWidget.SetLazyContent
// (Final, Native, Public, BlueprintCallable)

void UCommonLazyWidget::SetLazyContent()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonLazyWidget.SetLazyContent"));

	UCommonLazyWidget_SetLazyContent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonLazyWidget.IsLoading
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCommonLazyWidget::IsLoading()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonLazyWidget.IsLoading"));

	UCommonLazyWidget_IsLoading_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonLazyWidget.GetContent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UUserWidget*             ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUserWidget* UCommonLazyWidget::GetContent()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonLazyWidget.GetContent"));

	UCommonLazyWidget_GetContent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonListView.SetEntrySpacing
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InEntrySpacing                 (Parm, ZeroConstructor, IsPlainOldData)

void UCommonListView::SetEntrySpacing(float InEntrySpacing)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonListView.SetEntrySpacing"));

	UCommonListView_SetEntrySpacing_Params params;
	params.InEntrySpacing = InEntrySpacing;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.LoadGuardSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EVerticalAlignment> InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData)

void ULoadGuardSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.LoadGuardSlot.SetVerticalAlignment"));

	ULoadGuardSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.LoadGuardSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                 InPadding                      (Parm, ZeroConstructor, IsPlainOldData)

void ULoadGuardSlot::SetPadding(const struct FMargin& InPadding)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.LoadGuardSlot.SetPadding"));

	ULoadGuardSlot_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.LoadGuardSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData)

void ULoadGuardSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.LoadGuardSlot.SetHorizontalAlignment"));

	ULoadGuardSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonLoadGuard.SetLoadingText
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FText                   InLoadingText                  (ConstParm, Parm, OutParm, ReferenceParm)

void UCommonLoadGuard::SetLoadingText(const struct FText& InLoadingText)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonLoadGuard.SetLoadingText"));

	UCommonLoadGuard_SetLoadingText_Params params;
	params.InLoadingText = InLoadingText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonLoadGuard.SetIsLoading
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInIsLoading                   (Parm, ZeroConstructor, IsPlainOldData)

void UCommonLoadGuard::SetIsLoading(bool bInIsLoading)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonLoadGuard.SetIsLoading"));

	UCommonLoadGuard_SetIsLoading_Params params;
	params.bInIsLoading = bInIsLoading;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction CommonUI.CommonLoadGuard.OnAssetLoaded__DelegateSignature
// (Public, Delegate)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)

void UCommonLoadGuard::OnAssetLoaded__DelegateSignature(class UObject* Object)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("DelegateFunction CommonUI.CommonLoadGuard.OnAssetLoaded__DelegateSignature"));

	UCommonLoadGuard_OnAssetLoaded__DelegateSignature_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonLoadGuard.IsLoading
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCommonLoadGuard::IsLoading()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonLoadGuard.IsLoading"));

	UCommonLoadGuard_IsLoading_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonLoadGuard.BP_GuardAndLoadAsset
// (Final, Native, Private, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         OnAssetLoaded                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCommonLoadGuard::BP_GuardAndLoadAsset(const struct FScriptDelegate& OnAssetLoaded)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonLoadGuard.BP_GuardAndLoadAsset"));

	UCommonLoadGuard_BP_GuardAndLoadAsset_Params params;
	params.OnAssetLoaded = OnAssetLoaded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonNumericTextBlock.SetNumericType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ECommonNumericType  InNumericType                  (Parm, ZeroConstructor, IsPlainOldData)

void UCommonNumericTextBlock::SetNumericType(enum class ECommonNumericType InNumericType)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonNumericTextBlock.SetNumericType"));

	UCommonNumericTextBlock_SetNumericType_Params params;
	params.InNumericType = InNumericType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonNumericTextBlock.SetCurrentValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewValue                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UCommonNumericTextBlock::SetCurrentValue(float NewValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonNumericTextBlock.SetCurrentValue"));

	UCommonNumericTextBlock_SetCurrentValue_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction CommonUI.CommonNumericTextBlock.OnOutro__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UCommonNumericTextBlock* NumericTextBlock               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCommonNumericTextBlock::OnOutro__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("DelegateFunction CommonUI.CommonNumericTextBlock.OnOutro__DelegateSignature"));

	UCommonNumericTextBlock_OnOutro__DelegateSignature_Params params;
	params.NumericTextBlock = NumericTextBlock;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction CommonUI.CommonNumericTextBlock.OnInterpolationUpdated__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UCommonNumericTextBlock* NumericTextBlock               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          LastValue                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          NewValue                       (Parm, ZeroConstructor, IsPlainOldData)

void UCommonNumericTextBlock::OnInterpolationUpdated__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock, float LastValue, float NewValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("DelegateFunction CommonUI.CommonNumericTextBlock.OnInterpolationUpdated__DelegateSignature"));

	UCommonNumericTextBlock_OnInterpolationUpdated__DelegateSignature_Params params;
	params.NumericTextBlock = NumericTextBlock;
	params.LastValue = LastValue;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction CommonUI.CommonNumericTextBlock.OnInterpolationStarted__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UCommonNumericTextBlock* NumericTextBlock               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCommonNumericTextBlock::OnInterpolationStarted__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("DelegateFunction CommonUI.CommonNumericTextBlock.OnInterpolationStarted__DelegateSignature"));

	UCommonNumericTextBlock_OnInterpolationStarted__DelegateSignature_Params params;
	params.NumericTextBlock = NumericTextBlock;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction CommonUI.CommonNumericTextBlock.OnInterpolationEnded__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UCommonNumericTextBlock* NumericTextBlock               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           HadCompleted                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UCommonNumericTextBlock::OnInterpolationEnded__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock, bool HadCompleted)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("DelegateFunction CommonUI.CommonNumericTextBlock.OnInterpolationEnded__DelegateSignature"));

	UCommonNumericTextBlock_OnInterpolationEnded__DelegateSignature_Params params;
	params.NumericTextBlock = NumericTextBlock;
	params.HadCompleted = HadCompleted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonNumericTextBlock.IsInterpolatingNumericValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCommonNumericTextBlock::IsInterpolatingNumericValue()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonNumericTextBlock.IsInterpolatingNumericValue"));

	UCommonNumericTextBlock_IsInterpolatingNumericValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonNumericTextBlock.InterpolateToValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          TargetValue                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          MaximumInterpolationDuration   (Parm, ZeroConstructor, IsPlainOldData)
// float                          MinimumChangeRate              (Parm, ZeroConstructor, IsPlainOldData)
// float                          OutroOffset                    (Parm, ZeroConstructor, IsPlainOldData)

void UCommonNumericTextBlock::InterpolateToValue(float TargetValue, float MaximumInterpolationDuration, float MinimumChangeRate, float OutroOffset)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonNumericTextBlock.InterpolateToValue"));

	UCommonNumericTextBlock_InterpolateToValue_Params params;
	params.TargetValue = TargetValue;
	params.MaximumInterpolationDuration = MaximumInterpolationDuration;
	params.MinimumChangeRate = MinimumChangeRate;
	params.OutroOffset = OutroOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonNumericTextBlock.GetTargetValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCommonNumericTextBlock::GetTargetValue()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonNumericTextBlock.GetTargetValue"));

	UCommonNumericTextBlock_GetTargetValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonPoolableWidgetInterface.OnReleaseToPool
// (Native, Event, Protected, BlueprintEvent)

void UCommonPoolableWidgetInterface::OnReleaseToPool()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonPoolableWidgetInterface.OnReleaseToPool"));

	UCommonPoolableWidgetInterface_OnReleaseToPool_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonPoolableWidgetInterface.OnAcquireFromPool
// (Native, Event, Protected, BlueprintEvent)

void UCommonPoolableWidgetInterface::OnAcquireFromPool()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonPoolableWidgetInterface.OnAcquireFromPool"));

	UCommonPoolableWidgetInterface_OnAcquireFromPool_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonRotator.ShiftTextRight
// (Final, Native, Public, BlueprintCallable)

void UCommonRotator::ShiftTextRight()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonRotator.ShiftTextRight"));

	UCommonRotator_ShiftTextRight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonRotator.ShiftTextLeft
// (Final, Native, Public, BlueprintCallable)

void UCommonRotator::ShiftTextLeft()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonRotator.ShiftTextLeft"));

	UCommonRotator_ShiftTextLeft_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonRotator.SetSelectedItem
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UCommonRotator::SetSelectedItem(int InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonRotator.SetSelectedItem"));

	UCommonRotator_SetSelectedItem_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonRotator.PopulateTextLabels
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FText>           Labels                         (Parm, ZeroConstructor)

void UCommonRotator::PopulateTextLabels(TArray<struct FText> Labels)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonRotator.PopulateTextLabels"));

	UCommonRotator_PopulateTextLabels_Params params;
	params.Labels = Labels;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonRotator.GetSelectedText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UCommonRotator::GetSelectedText()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonRotator.GetSelectedText"));

	UCommonRotator_GetSelectedText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonRotator.GetSelectedIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCommonRotator::GetSelectedIndex()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonRotator.GetSelectedIndex"));

	UCommonRotator_GetSelectedIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonRotator.BP_OnOptionsPopulated
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)

void UCommonRotator::BP_OnOptionsPopulated(int Count)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonRotator.BP_OnOptionsPopulated"));

	UCommonRotator_BP_OnOptionsPopulated_Params params;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonRotator.BP_OnOptionSelected
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UCommonRotator::BP_OnOptionSelected(int Index)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonRotator.BP_OnOptionSelected"));

	UCommonRotator_BP_OnOptionSelected_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonTextStyle.GetStrikeBrush
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateBrush             OutStrikeBrush                 (Parm, OutParm)

void UCommonTextStyle::GetStrikeBrush(struct FSlateBrush* OutStrikeBrush)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonTextStyle.GetStrikeBrush"));

	UCommonTextStyle_GetStrikeBrush_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutStrikeBrush != nullptr)
		*OutStrikeBrush = params.OutStrikeBrush;
}


// Function CommonUI.CommonTextStyle.GetShadowOffset
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D               OutShadowOffset                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCommonTextStyle::GetShadowOffset(struct FVector2D* OutShadowOffset)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonTextStyle.GetShadowOffset"));

	UCommonTextStyle_GetShadowOffset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutShadowOffset != nullptr)
		*OutShadowOffset = params.OutShadowOffset;
}


// Function CommonUI.CommonTextStyle.GetShadowColor
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor            OutColor                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCommonTextStyle::GetShadowColor(struct FLinearColor* OutColor)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonTextStyle.GetShadowColor"));

	UCommonTextStyle_GetShadowColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutColor != nullptr)
		*OutColor = params.OutColor;
}


// Function CommonUI.CommonTextStyle.GetMargin
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMargin                 OutMargin                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCommonTextStyle::GetMargin(struct FMargin* OutMargin)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonTextStyle.GetMargin"));

	UCommonTextStyle_GetMargin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutMargin != nullptr)
		*OutMargin = params.OutMargin;
}


// Function CommonUI.CommonTextStyle.GetLineHeightPercentage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCommonTextStyle::GetLineHeightPercentage()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonTextStyle.GetLineHeightPercentage"));

	UCommonTextStyle_GetLineHeightPercentage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonTextStyle.GetFont
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateFontInfo          OutFont                        (Parm, OutParm)

void UCommonTextStyle::GetFont(struct FSlateFontInfo* OutFont)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonTextStyle.GetFont"));

	UCommonTextStyle_GetFont_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutFont != nullptr)
		*OutFont = params.OutFont;
}


// Function CommonUI.CommonTextStyle.GetColor
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor            OutColor                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCommonTextStyle::GetColor(struct FLinearColor* OutColor)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonTextStyle.GetColor"));

	UCommonTextStyle_GetColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutColor != nullptr)
		*OutColor = params.OutColor;
}


// Function CommonUI.CommonUILibrary.FindParentWidgetOfType
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWidget*                 StartingWidget                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UClass*                  Type                           (Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UCommonUILibrary::STATIC_FindParentWidgetOfType(class UWidget* StartingWidget, class UClass* Type)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonUILibrary.FindParentWidgetOfType"));

	UCommonUILibrary_FindParentWidgetOfType_Params params;
	params.StartingWidget = StartingWidget;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonUISubsystemBase.GetInputActionButtonIcon
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDataTableRowHandle     InputActionRowHandle           (ConstParm, Parm, OutParm, ReferenceParm)
// enum class ECommonInputType    InputType                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   GamepadName                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UCommonUISubsystemBase::GetInputActionButtonIcon(const struct FDataTableRowHandle& InputActionRowHandle, enum class ECommonInputType InputType, const struct FName& GamepadName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonUISubsystemBase.GetInputActionButtonIcon"));

	UCommonUISubsystemBase_GetInputActionButtonIcon_Params params;
	params.InputActionRowHandle = InputActionRowHandle;
	params.InputType = InputType;
	params.GamepadName = GamepadName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonVisibilitySwitcher.SetActiveWidgetIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UCommonVisibilitySwitcher::SetActiveWidgetIndex(int Index)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonVisibilitySwitcher.SetActiveWidgetIndex"));

	UCommonVisibilitySwitcher_SetActiveWidgetIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonVisibilitySwitcher.SetActiveWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                 Widget                         (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCommonVisibilitySwitcher::SetActiveWidget(class UWidget* Widget)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonVisibilitySwitcher.SetActiveWidget"));

	UCommonVisibilitySwitcher_SetActiveWidget_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonVisibilitySwitcher.IncrementActiveWidgetIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bAllowWrapping                 (Parm, ZeroConstructor, IsPlainOldData)

void UCommonVisibilitySwitcher::IncrementActiveWidgetIndex(bool bAllowWrapping)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonVisibilitySwitcher.IncrementActiveWidgetIndex"));

	UCommonVisibilitySwitcher_IncrementActiveWidgetIndex_Params params;
	params.bAllowWrapping = bAllowWrapping;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonVisibilitySwitcher.GetActiveWidgetIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCommonVisibilitySwitcher::GetActiveWidgetIndex()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonVisibilitySwitcher.GetActiveWidgetIndex"));

	UCommonVisibilitySwitcher_GetActiveWidgetIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonVisibilitySwitcher.GetActiveWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UCommonVisibilitySwitcher::GetActiveWidget()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonVisibilitySwitcher.GetActiveWidget"));

	UCommonVisibilitySwitcher_GetActiveWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonVisibilitySwitcher.DecrementActiveWidgetIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bAllowWrapping                 (Parm, ZeroConstructor, IsPlainOldData)

void UCommonVisibilitySwitcher::DecrementActiveWidgetIndex(bool bAllowWrapping)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonVisibilitySwitcher.DecrementActiveWidgetIndex"));

	UCommonVisibilitySwitcher_DecrementActiveWidgetIndex_Params params;
	params.bAllowWrapping = bAllowWrapping;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonVisibilitySwitcher.DeactivateVisibleSlot
// (Final, Native, Public, BlueprintCallable)

void UCommonVisibilitySwitcher::DeactivateVisibleSlot()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonVisibilitySwitcher.DeactivateVisibleSlot"));

	UCommonVisibilitySwitcher_DeactivateVisibleSlot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonVisibilitySwitcher.ActivateVisibleSlot
// (Final, Native, Public, BlueprintCallable)

void UCommonVisibilitySwitcher::ActivateVisibleSlot()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonVisibilitySwitcher.ActivateVisibleSlot"));

	UCommonVisibilitySwitcher_ActivateVisibleSlot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.UCommonVisibilityWidgetBase.GetRegisteredPlatforms
// (Final, Native, Static, Protected)
// Parameters:
// TArray<struct FName>           ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<struct FName> UUCommonVisibilityWidgetBase::STATIC_GetRegisteredPlatforms()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.UCommonVisibilityWidgetBase.GetRegisteredPlatforms"));

	UUCommonVisibilityWidgetBase_GetRegisteredPlatforms_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonWidgetCarousel.SetActiveWidgetIndex
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UCommonWidgetCarousel::SetActiveWidgetIndex(int Index)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonWidgetCarousel.SetActiveWidgetIndex"));

	UCommonWidgetCarousel_SetActiveWidgetIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonWidgetCarousel.SetActiveWidget
// (Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCommonWidgetCarousel::SetActiveWidget(class UWidget* Widget)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonWidgetCarousel.SetActiveWidget"));

	UCommonWidgetCarousel_SetActiveWidget_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonWidgetCarousel.PreviousPage
// (Final, Native, Public, BlueprintCallable)

void UCommonWidgetCarousel::PreviousPage()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonWidgetCarousel.PreviousPage"));

	UCommonWidgetCarousel_PreviousPage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonWidgetCarousel.NextPage
// (Final, Native, Public, BlueprintCallable)

void UCommonWidgetCarousel::NextPage()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonWidgetCarousel.NextPage"));

	UCommonWidgetCarousel_NextPage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonWidgetCarousel.GetWidgetAtIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UCommonWidgetCarousel::GetWidgetAtIndex(int Index)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonWidgetCarousel.GetWidgetAtIndex"));

	UCommonWidgetCarousel_GetWidgetAtIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonWidgetCarousel.GetActiveWidgetIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCommonWidgetCarousel::GetActiveWidgetIndex()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonWidgetCarousel.GetActiveWidgetIndex"));

	UCommonWidgetCarousel_GetActiveWidgetIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonWidgetCarousel.EndAutoScrolling
// (Final, Native, Public, BlueprintCallable)

void UCommonWidgetCarousel::EndAutoScrolling()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonWidgetCarousel.EndAutoScrolling"));

	UCommonWidgetCarousel_EndAutoScrolling_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonWidgetCarousel.BeginAutoScrolling
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ScrollInterval                 (Parm, ZeroConstructor, IsPlainOldData)

void UCommonWidgetCarousel::BeginAutoScrolling(float ScrollInterval)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonWidgetCarousel.BeginAutoScrolling"));

	UCommonWidgetCarousel_BeginAutoScrolling_Params params;
	params.ScrollInterval = ScrollInterval;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonWidgetCarouselNavBar.SetLinkedCarousel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCommonWidgetCarousel*   CommonCarousel                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCommonWidgetCarouselNavBar::SetLinkedCarousel(class UCommonWidgetCarousel* CommonCarousel)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonWidgetCarouselNavBar.SetLinkedCarousel"));

	UCommonWidgetCarouselNavBar_SetLinkedCarousel_Params params;
	params.CommonCarousel = CommonCarousel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonWidgetCarouselNavBar.HandlePageChanged
// (Final, Native, Protected)
// Parameters:
// class UCommonWidgetCarousel*   CommonCarousel                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            PageIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void UCommonWidgetCarouselNavBar::HandlePageChanged(class UCommonWidgetCarousel* CommonCarousel, int PageIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonWidgetCarouselNavBar.HandlePageChanged"));

	UCommonWidgetCarouselNavBar_HandlePageChanged_Params params;
	params.CommonCarousel = CommonCarousel;
	params.PageIndex = PageIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonWidgetCarouselNavBar.HandleButtonClicked
// (Final, Native, Protected)
// Parameters:
// class UCommonButtonBase*       AssociatedButton               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            ButtonIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void UCommonWidgetCarouselNavBar::HandleButtonClicked(class UCommonButtonBase* AssociatedButton, int ButtonIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonUI.CommonWidgetCarouselNavBar.HandleButtonClicked"));

	UCommonWidgetCarouselNavBar_HandleButtonClicked_Params params;
	params.AssociatedButton = AssociatedButton;
	params.ButtonIndex = ButtonIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
