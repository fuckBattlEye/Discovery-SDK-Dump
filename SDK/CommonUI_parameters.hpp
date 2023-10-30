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

// Function CommonUI.CommonActionWidget.SetInputActions
struct UCommonActionWidget_SetInputActions_Params
{
	TArray<struct FDataTableRowHandle>                 NewInputActions;                                          // (Parm, ZeroConstructor)
};

// Function CommonUI.CommonActionWidget.SetInputAction
struct UCommonActionWidget_SetInputAction_Params
{
	struct FDataTableRowHandle                         InputActionRow;                                           // (Parm)
};

// Function CommonUI.CommonActionWidget.SetIconRimBrush
struct UCommonActionWidget_SetIconRimBrush_Params
{
	struct FSlateBrush                                 InIconRimBrush;                                           // (Parm)
};

// DelegateFunction CommonUI.CommonActionWidget.OnInputMethodChanged__DelegateSignature
struct UCommonActionWidget_OnInputMethodChanged__DelegateSignature_Params
{
	bool                                               bUsingGamepad;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonActionWidget.IsHeldAction
struct UCommonActionWidget_IsHeldAction_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonActionWidget.GetIcon
struct UCommonActionWidget_GetIcon_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CommonUI.CommonActionWidget.GetDisplayText
struct UCommonActionWidget_GetDisplayText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CommonUI.CommonUserWidget.SetConsumePointerInput
struct UCommonUserWidget_SetConsumePointerInput_Params
{
	bool                                               bInConsumePointerInput;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonActivatableWidget.SetBindVisibilities
struct UCommonActivatableWidget_SetBindVisibilities_Params
{
	enum class ESlateVisibility                        OnActivatedVisibility;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	enum class ESlateVisibility                        OnDeactivatedVisibility;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInAllActive;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonActivatableWidget.IsActivated
struct UCommonActivatableWidget_IsActivated_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonActivatableWidget.GetDesiredFocusTarget
struct UCommonActivatableWidget_GetDesiredFocusTarget_Params
{
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonActivatableWidget.DeactivateWidget
struct UCommonActivatableWidget_DeactivateWidget_Params
{
};

// Function CommonUI.CommonActivatableWidget.BP_OnHandleBackAction
struct UCommonActivatableWidget_BP_OnHandleBackAction_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonActivatableWidget.BP_OnDeactivated
struct UCommonActivatableWidget_BP_OnDeactivated_Params
{
};

// Function CommonUI.CommonActivatableWidget.BP_OnActivated
struct UCommonActivatableWidget_BP_OnActivated_Params
{
};

// Function CommonUI.CommonActivatableWidget.BP_GetDesiredFocusTarget
struct UCommonActivatableWidget_BP_GetDesiredFocusTarget_Params
{
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonActivatableWidget.BindVisibilityToActivation
struct UCommonActivatableWidget_BindVisibilityToActivation_Params
{
	class UCommonActivatableWidget*                    ActivatableWidget;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonActivatableWidget.ActivateWidget
struct UCommonActivatableWidget_ActivateWidget_Params
{
};

// Function CommonUI.CommonActivatableWidgetContainerBase.SetTransitionDuration
struct UCommonActivatableWidgetContainerBase_SetTransitionDuration_Params
{
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonActivatableWidgetContainerBase.RemoveWidget
struct UCommonActivatableWidgetContainerBase_RemoveWidget_Params
{
	class UCommonActivatableWidget*                    WidgetToRemove;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonActivatableWidgetContainerBase.GetTransitionDuration
struct UCommonActivatableWidgetContainerBase_GetTransitionDuration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonActivatableWidgetContainerBase.GetActiveWidget
struct UCommonActivatableWidgetContainerBase_GetActiveWidget_Params
{
	class UCommonActivatableWidget*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonActivatableWidgetContainerBase.ClearWidgets
struct UCommonActivatableWidgetContainerBase_ClearWidgets_Params
{
};

// Function CommonUI.CommonActivatableWidgetContainerBase.BP_AddWidgetWithCallback
struct UCommonActivatableWidgetContainerBase_BP_AddWidgetWithCallback_Params
{
	class UClass*                                      ActivatableWidgetClass;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Opt_CallbackObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Opt_CallbackFunctionName;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonActivatableWidget*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonActivatableWidgetContainerBase.BP_AddWidget
struct UCommonActivatableWidgetContainerBase_BP_AddWidget_Params
{
	class UClass*                                      ActivatableWidgetClass;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonActivatableWidget*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonAnimatedSwitcher.SetDisableTransitionAnimation
struct UCommonAnimatedSwitcher_SetDisableTransitionAnimation_Params
{
	bool                                               bDisableAnimation;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonAnimatedSwitcher.IsCurrentlySwitching
struct UCommonAnimatedSwitcher_IsCurrentlySwitching_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonAnimatedSwitcher.HasWidgets
struct UCommonAnimatedSwitcher_HasWidgets_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonAnimatedSwitcher.ActivatePreviousWidget
struct UCommonAnimatedSwitcher_ActivatePreviousWidget_Params
{
	bool                                               bCanWrap;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonAnimatedSwitcher.ActivateNextWidget
struct UCommonAnimatedSwitcher_ActivateNextWidget_Params
{
	bool                                               bCanWrap;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonBoundActionBar.SetDisplayOwningPlayerActionsOnly
struct UCommonBoundActionBar_SetDisplayOwningPlayerActionsOnly_Params
{
	bool                                               bShouldOnlyDisplayOwningPlayerActions;                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonButtonBase.StopDoubleClickPropagation
struct UCommonButtonBase_StopDoubleClickPropagation_Params
{
};

// Function CommonUI.CommonButtonBase.SetTriggeringInputAction
struct UCommonButtonBase_SetTriggeringInputAction_Params
{
	struct FDataTableRowHandle                         InputActionRow;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function CommonUI.CommonButtonBase.SetTriggeredInputAction
struct UCommonButtonBase_SetTriggeredInputAction_Params
{
	struct FDataTableRowHandle                         InputActionRow;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function CommonUI.CommonButtonBase.SetTouchMethod
struct UCommonButtonBase_SetTouchMethod_Params
{
	TEnumAsByte<EButtonTouchMethod>                    InTouchMethod;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonButtonBase.SetStyle
struct UCommonButtonBase_SetStyle_Params
{
	class UClass*                                      InStyle;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonButtonBase.SetShouldUseFallbackDefaultInputAction
struct UCommonButtonBase_SetShouldUseFallbackDefaultInputAction_Params
{
	bool                                               bInShouldUseFallbackDefaultInputAction;                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonButtonBase.SetShouldSelectUponReceivingFocus
struct UCommonButtonBase_SetShouldSelectUponReceivingFocus_Params
{
	bool                                               bInShouldSelectUponReceivingFocus;                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonButtonBase.SetSelectedInternal
struct UCommonButtonBase_SetSelectedInternal_Params
{
	bool                                               bInSelected;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowSound;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBroadcast;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonButtonBase.SetPressMethod
struct UCommonButtonBase_SetPressMethod_Params
{
	TEnumAsByte<EButtonPressMethod>                    InPressMethod;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonButtonBase.SetPressedSoundOverride
struct UCommonButtonBase_SetPressedSoundOverride_Params
{
	class USoundBase*                                  Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonButtonBase.SetMinDimensions
struct UCommonButtonBase_SetMinDimensions_Params
{
	int                                                InMinWidth;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InMinHeight;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonButtonBase.SetIsToggleable
struct UCommonButtonBase_SetIsToggleable_Params
{
	bool                                               bInIsToggleable;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonButtonBase.SetIsSelected
struct UCommonButtonBase_SetIsSelected_Params
{
	bool                                               InSelected;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bGiveClickFeedback;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonButtonBase.SetIsSelectable
struct UCommonButtonBase_SetIsSelectable_Params
{
	bool                                               bInIsSelectable;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonButtonBase.SetIsInteractionEnabled
struct UCommonButtonBase_SetIsInteractionEnabled_Params
{
	bool                                               bInIsInteractionEnabled;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonButtonBase.SetIsInteractableWhenSelected
struct UCommonButtonBase_SetIsInteractableWhenSelected_Params
{
	bool                                               bInInteractableWhenSelected;                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonButtonBase.SetIsFocusable
struct UCommonButtonBase_SetIsFocusable_Params
{
	bool                                               bInIsFocusable;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonButtonBase.SetInputActionProgressMaterial
struct UCommonButtonBase_SetInputActionProgressMaterial_Params
{
	struct FSlateBrush                                 InProgressMaterialBrush;                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FName                                       InProgressMaterialParam;                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function CommonUI.CommonButtonBase.SetHoveredSoundOverride
struct UCommonButtonBase_SetHoveredSoundOverride_Params
{
	class USoundBase*                                  Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonButtonBase.SetClickMethod
struct UCommonButtonBase_SetClickMethod_Params
{
	TEnumAsByte<EButtonClickMethod>                    InClickMethod;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonButtonBase.OnTriggeredInputActionChanged
struct UCommonButtonBase_OnTriggeredInputActionChanged_Params
{
	struct FDataTableRowHandle                         NewTriggeredAction;                                       // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function CommonUI.CommonButtonBase.OnInputMethodChanged
struct UCommonButtonBase_OnInputMethodChanged_Params
{
	enum class ECommonInputType                        CurrentInputType;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonButtonBase.OnCurrentTextStyleChanged
struct UCommonButtonBase_OnCurrentTextStyleChanged_Params
{
};

// Function CommonUI.CommonButtonBase.OnActionProgress
struct UCommonButtonBase_OnActionProgress_Params
{
	float                                              HeldPercent;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonButtonBase.OnActionComplete
struct UCommonButtonBase_OnActionComplete_Params
{
};

// Function CommonUI.CommonButtonBase.NativeOnActionProgress
struct UCommonButtonBase_NativeOnActionProgress_Params
{
	float                                              HeldPercent;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonButtonBase.NativeOnActionComplete
struct UCommonButtonBase_NativeOnActionComplete_Params
{
};

// Function CommonUI.CommonButtonBase.IsPressed
struct UCommonButtonBase_IsPressed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonButtonBase.IsInteractionEnabled
struct UCommonButtonBase_IsInteractionEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonButtonBase.HandleTriggeringActionCommited
struct UCommonButtonBase_HandleTriggeringActionCommited_Params
{
	bool                                               bPassThrough;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonButtonBase.HandleFocusReceived
struct UCommonButtonBase_HandleFocusReceived_Params
{
};

// Function CommonUI.CommonButtonBase.HandleButtonReleased
struct UCommonButtonBase_HandleButtonReleased_Params
{
};

// Function CommonUI.CommonButtonBase.HandleButtonPressed
struct UCommonButtonBase_HandleButtonPressed_Params
{
};

// Function CommonUI.CommonButtonBase.HandleButtonClicked
struct UCommonButtonBase_HandleButtonClicked_Params
{
};

// Function CommonUI.CommonButtonBase.GetStyle
struct UCommonButtonBase_GetStyle_Params
{
	class UCommonButtonStyle*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonButtonBase.GetSingleMaterialStyleMID
struct UCommonButtonBase_GetSingleMaterialStyleMID_Params
{
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonButtonBase.GetShouldSelectUponReceivingFocus
struct UCommonButtonBase_GetShouldSelectUponReceivingFocus_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonButtonBase.GetSelected
struct UCommonButtonBase_GetSelected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonButtonBase.GetIsFocusable
struct UCommonButtonBase_GetIsFocusable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonButtonBase.GetInputAction
struct UCommonButtonBase_GetInputAction_Params
{
	struct FDataTableRowHandle                         InputActionRow;                                           // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonButtonBase.GetCurrentTextStyleClass
struct UCommonButtonBase_GetCurrentTextStyleClass_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonButtonBase.GetCurrentTextStyle
struct UCommonButtonBase_GetCurrentTextStyle_Params
{
	class UCommonTextStyle*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonButtonBase.GetCurrentCustomPadding
struct UCommonButtonBase_GetCurrentCustomPadding_Params
{
	struct FMargin                                     OutCustomPadding;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonButtonBase.GetCurrentButtonPadding
struct UCommonButtonBase_GetCurrentButtonPadding_Params
{
	struct FMargin                                     OutButtonPadding;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonButtonBase.DisableButtonWithReason
struct UCommonButtonBase_DisableButtonWithReason_Params
{
	struct FText                                       DisabledReason;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function CommonUI.CommonButtonBase.ClearSelection
struct UCommonButtonBase_ClearSelection_Params
{
};

// Function CommonUI.CommonButtonBase.BP_OnUnhovered
struct UCommonButtonBase_BP_OnUnhovered_Params
{
};

// Function CommonUI.CommonButtonBase.BP_OnSelected
struct UCommonButtonBase_BP_OnSelected_Params
{
};

// Function CommonUI.CommonButtonBase.BP_OnHovered
struct UCommonButtonBase_BP_OnHovered_Params
{
};

// Function CommonUI.CommonButtonBase.BP_OnEnabled
struct UCommonButtonBase_BP_OnEnabled_Params
{
};

// Function CommonUI.CommonButtonBase.BP_OnDoubleClicked
struct UCommonButtonBase_BP_OnDoubleClicked_Params
{
};

// Function CommonUI.CommonButtonBase.BP_OnDisabled
struct UCommonButtonBase_BP_OnDisabled_Params
{
};

// Function CommonUI.CommonButtonBase.BP_OnDeselected
struct UCommonButtonBase_BP_OnDeselected_Params
{
};

// Function CommonUI.CommonButtonBase.BP_OnClicked
struct UCommonButtonBase_BP_OnClicked_Params
{
};

// Function CommonUI.CommonTabListWidgetBase.SetTabVisibility
struct UCommonTabListWidgetBase_SetTabVisibility_Params
{
	struct FName                                       TabNameID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	enum class ESlateVisibility                        NewVisibility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonTabListWidgetBase.SetTabInteractionEnabled
struct UCommonTabListWidgetBase_SetTabInteractionEnabled_Params
{
	struct FName                                       TabNameID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonTabListWidgetBase.SetTabEnabled
struct UCommonTabListWidgetBase_SetTabEnabled_Params
{
	struct FName                                       TabNameID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonTabListWidgetBase.SetListeningForInput
struct UCommonTabListWidgetBase_SetListeningForInput_Params
{
	bool                                               bShouldListen;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonTabListWidgetBase.SetLinkedSwitcher
struct UCommonTabListWidgetBase_SetLinkedSwitcher_Params
{
	class UCommonAnimatedSwitcher*                     CommonSwitcher;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonTabListWidgetBase.SelectTabByID
struct UCommonTabListWidgetBase_SelectTabByID_Params
{
	struct FName                                       TabNameID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuppressClickFeedback;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonTabListWidgetBase.RemoveTab
struct UCommonTabListWidgetBase_RemoveTab_Params
{
	struct FName                                       TabNameID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonTabListWidgetBase.RemoveAllTabs
struct UCommonTabListWidgetBase_RemoveAllTabs_Params
{
};

// Function CommonUI.CommonTabListWidgetBase.RegisterTab
struct UCommonTabListWidgetBase_RegisterTab_Params
{
	struct FName                                       TabNameID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ButtonWidgetType;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     ContentWidget;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction CommonUI.CommonTabListWidgetBase.OnTabSelected__DelegateSignature
struct UCommonTabListWidgetBase_OnTabSelected__DelegateSignature_Params
{
	struct FName                                       TabId;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction CommonUI.CommonTabListWidgetBase.OnTabButtonRemoval__DelegateSignature
struct UCommonTabListWidgetBase_OnTabButtonRemoval__DelegateSignature_Params
{
	struct FName                                       TabId;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonButtonBase*                           TabButton;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// DelegateFunction CommonUI.CommonTabListWidgetBase.OnTabButtonCreation__DelegateSignature
struct UCommonTabListWidgetBase_OnTabButtonCreation__DelegateSignature_Params
{
	struct FName                                       TabId;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonButtonBase*                           TabButton;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonTabListWidgetBase.HandleTabSelection
struct UCommonTabListWidgetBase_HandleTabSelection_Params
{
	struct FName                                       TabNameID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonButtonBase*                           TabButton;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonTabListWidgetBase.HandleTabRemoval
struct UCommonTabListWidgetBase_HandleTabRemoval_Params
{
	struct FName                                       TabNameID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonButtonBase*                           TabButton;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonTabListWidgetBase.HandleTabCreation
struct UCommonTabListWidgetBase_HandleTabCreation_Params
{
	struct FName                                       TabNameID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonButtonBase*                           TabButton;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonTabListWidgetBase.HandleTabButtonSelected
struct UCommonTabListWidgetBase_HandleTabButtonSelected_Params
{
	class UCommonButtonBase*                           SelectedTabButton;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ButtonIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonTabListWidgetBase.HandlePreviousTabInputAction
struct UCommonTabListWidgetBase_HandlePreviousTabInputAction_Params
{
	bool                                               bPassThrough;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonTabListWidgetBase.HandlePreLinkedSwitcherChanged_BP
struct UCommonTabListWidgetBase_HandlePreLinkedSwitcherChanged_BP_Params
{
};

// Function CommonUI.CommonTabListWidgetBase.HandlePostLinkedSwitcherChanged_BP
struct UCommonTabListWidgetBase_HandlePostLinkedSwitcherChanged_BP_Params
{
};

// Function CommonUI.CommonTabListWidgetBase.HandleNextTabInputAction
struct UCommonTabListWidgetBase_HandleNextTabInputAction_Params
{
	bool                                               bPassThrough;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonTabListWidgetBase.GetTabWidgetBaseByID
struct UCommonTabListWidgetBase_GetTabWidgetBaseByID_Params
{
	struct FName                                       TabNameID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonTabListWidgetBase.GetTabIdAtIndex
struct UCommonTabListWidgetBase_GetTabIdAtIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonTabListWidgetBase.GetTabCount
struct UCommonTabListWidgetBase_GetTabCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonTabListWidgetBase.GetTabButtonBaseByID
struct UCommonTabListWidgetBase_GetTabButtonBaseByID_Params
{
	struct FName                                       TabNameID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonButtonBase*                           ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonTabListWidgetBase.GetSelectedTabId
struct UCommonTabListWidgetBase_GetSelectedTabId_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonTabListWidgetBase.GetLinkedSwitcher
struct UCommonTabListWidgetBase_GetLinkedSwitcher_Params
{
	class UCommonAnimatedSwitcher*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonTabListWidgetBase.GetActiveTab
struct UCommonTabListWidgetBase_GetActiveTab_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonTabListWidgetBase.DisableTabWithReason
struct UCommonTabListWidgetBase_DisableTabWithReason_Params
{
	struct FName                                       TabNameID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Reason;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function CommonUI.CommonBorderStyle.GetBackgroundBrush
struct UCommonBorderStyle_GetBackgroundBrush_Params
{
	struct FSlateBrush                                 Brush;                                                    // (Parm, OutParm)
};

// Function CommonUI.CommonBorder.SetStyle
struct UCommonBorder_SetStyle_Params
{
	class UClass*                                      InStyle;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonBoundActionButton.OnUpdateInputAction
struct UCommonBoundActionButton_OnUpdateInputAction_Params
{
	struct FText                                       ActionName;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function CommonUI.CommonButtonStyle.GetSelectedTextStyle
struct UCommonButtonStyle_GetSelectedTextStyle_Params
{
	class UCommonTextStyle*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonButtonStyle.GetSelectedPressedBrush
struct UCommonButtonStyle_GetSelectedPressedBrush_Params
{
	struct FSlateBrush                                 Brush;                                                    // (Parm, OutParm)
};

// Function CommonUI.CommonButtonStyle.GetSelectedHoveredTextStyle
struct UCommonButtonStyle_GetSelectedHoveredTextStyle_Params
{
	class UCommonTextStyle*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonButtonStyle.GetSelectedHoveredBrush
struct UCommonButtonStyle_GetSelectedHoveredBrush_Params
{
	struct FSlateBrush                                 Brush;                                                    // (Parm, OutParm)
};

// Function CommonUI.CommonButtonStyle.GetSelectedBaseBrush
struct UCommonButtonStyle_GetSelectedBaseBrush_Params
{
	struct FSlateBrush                                 Brush;                                                    // (Parm, OutParm)
};

// Function CommonUI.CommonButtonStyle.GetNormalTextStyle
struct UCommonButtonStyle_GetNormalTextStyle_Params
{
	class UCommonTextStyle*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonButtonStyle.GetNormalPressedBrush
struct UCommonButtonStyle_GetNormalPressedBrush_Params
{
	struct FSlateBrush                                 Brush;                                                    // (Parm, OutParm)
};

// Function CommonUI.CommonButtonStyle.GetNormalHoveredTextStyle
struct UCommonButtonStyle_GetNormalHoveredTextStyle_Params
{
	class UCommonTextStyle*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonButtonStyle.GetNormalHoveredBrush
struct UCommonButtonStyle_GetNormalHoveredBrush_Params
{
	struct FSlateBrush                                 Brush;                                                    // (Parm, OutParm)
};

// Function CommonUI.CommonButtonStyle.GetNormalBaseBrush
struct UCommonButtonStyle_GetNormalBaseBrush_Params
{
	struct FSlateBrush                                 Brush;                                                    // (Parm, OutParm)
};

// Function CommonUI.CommonButtonStyle.GetMaterialBrush
struct UCommonButtonStyle_GetMaterialBrush_Params
{
	struct FSlateBrush                                 Brush;                                                    // (Parm, OutParm)
};

// Function CommonUI.CommonButtonStyle.GetDisabledTextStyle
struct UCommonButtonStyle_GetDisabledTextStyle_Params
{
	class UCommonTextStyle*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonButtonStyle.GetDisabledBrush
struct UCommonButtonStyle_GetDisabledBrush_Params
{
	struct FSlateBrush                                 Brush;                                                    // (Parm, OutParm)
};

// Function CommonUI.CommonButtonStyle.GetCustomPadding
struct UCommonButtonStyle_GetCustomPadding_Params
{
	struct FMargin                                     OutCustomPadding;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonButtonStyle.GetButtonPadding
struct UCommonButtonStyle_GetButtonPadding_Params
{
	struct FMargin                                     OutButtonPadding;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonWidgetGroupBase.RemoveWidget
struct UCommonWidgetGroupBase_RemoveWidget_Params
{
	class UWidget*                                     InWidget;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonWidgetGroupBase.RemoveAll
struct UCommonWidgetGroupBase_RemoveAll_Params
{
};

// Function CommonUI.CommonWidgetGroupBase.AddWidget
struct UCommonWidgetGroupBase_AddWidget_Params
{
	class UWidget*                                     InWidget;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonButtonGroupBase.SetSelectionRequired
struct UCommonButtonGroupBase_SetSelectionRequired_Params
{
	bool                                               bRequireSelection;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonButtonGroupBase.SelectPreviousButton
struct UCommonButtonGroupBase_SelectPreviousButton_Params
{
	bool                                               bAllowWrap;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonButtonGroupBase.SelectNextButton
struct UCommonButtonGroupBase_SelectNextButton_Params
{
	bool                                               bAllowWrap;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonButtonGroupBase.SelectButtonAtIndex
struct UCommonButtonGroupBase_SelectButtonAtIndex_Params
{
	int                                                ButtonIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonButtonGroupBase.OnSelectionStateChangedBase
struct UCommonButtonGroupBase_OnSelectionStateChangedBase_Params
{
	class UCommonButtonBase*                           BaseButton;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsSelected;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonButtonGroupBase.OnHandleButtonBaseDoubleClicked
struct UCommonButtonGroupBase_OnHandleButtonBaseDoubleClicked_Params
{
	class UCommonButtonBase*                           BaseButton;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonButtonGroupBase.OnHandleButtonBaseClicked
struct UCommonButtonGroupBase_OnHandleButtonBaseClicked_Params
{
	class UCommonButtonBase*                           BaseButton;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonButtonGroupBase.OnButtonBaseUnhovered
struct UCommonButtonGroupBase_OnButtonBaseUnhovered_Params
{
	class UCommonButtonBase*                           BaseButton;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonButtonGroupBase.OnButtonBaseHovered
struct UCommonButtonGroupBase_OnButtonBaseHovered_Params
{
	class UCommonButtonBase*                           BaseButton;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonButtonGroupBase.HasAnyButtons
struct UCommonButtonGroupBase_HasAnyButtons_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonButtonGroupBase.GetSelectedButtonIndex
struct UCommonButtonGroupBase_GetSelectedButtonIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonButtonGroupBase.GetSelectedButtonBase
struct UCommonButtonGroupBase_GetSelectedButtonBase_Params
{
	class UCommonButtonBase*                           ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonButtonGroupBase.GetHoveredButtonIndex
struct UCommonButtonGroupBase_GetHoveredButtonIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonButtonGroupBase.GetButtonCount
struct UCommonButtonGroupBase_GetButtonCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonButtonGroupBase.GetButtonBaseAtIndex
struct UCommonButtonGroupBase_GetButtonBaseAtIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonButtonBase*                           ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonButtonGroupBase.FindButtonIndex
struct UCommonButtonGroupBase_FindButtonIndex_Params
{
	class UCommonButtonBase*                           ButtonToFind;                                             // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonButtonGroupBase.DeselectAll
struct UCommonButtonGroupBase_DeselectAll_Params
{
};

// Function CommonUI.CommonTextBlock.SetWrapTextWidth
struct UCommonTextBlock_SetWrapTextWidth_Params
{
	int                                                InWrapTextAt;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonTextBlock.SetTextCase
struct UCommonTextBlock_SetTextCase_Params
{
	bool                                               bUseAllCaps;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonTextBlock.SetStyle
struct UCommonTextBlock_SetStyle_Params
{
	class UClass*                                      InStyle;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonTextBlock.ResetScrollState
struct UCommonTextBlock_ResetScrollState_Params
{
};

// Function CommonUI.CommonDateTimeTextBlock.SetTimespanValue
struct UCommonDateTimeTextBlock_SetTimespanValue_Params
{
	struct FTimespan                                   InTimespan;                                               // (ConstParm, Parm, ZeroConstructor)
};

// Function CommonUI.CommonDateTimeTextBlock.SetDateTimeValue
struct UCommonDateTimeTextBlock_SetDateTimeValue_Params
{
	struct FDateTime                                   InDateTime;                                               // (ConstParm, Parm, ZeroConstructor)
	bool                                               bShowAsCountdown;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InRefreshDelay;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonDateTimeTextBlock.SetCountDownCompletionText
struct UCommonDateTimeTextBlock_SetCountDownCompletionText_Params
{
	struct FText                                       InCompletionText;                                         // (ConstParm, Parm)
};

// Function CommonUI.CommonDateTimeTextBlock.GetDateTime
struct UCommonDateTimeTextBlock_GetDateTime_Params
{
	struct FDateTime                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function CommonUI.CommonLazyImage.SetMaterialTextureParamName
struct UCommonLazyImage_SetMaterialTextureParamName_Params
{
	struct FName                                       TextureParamName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonLazyImage.SetBrushFromLazyTexture
struct UCommonLazyImage_SetBrushFromLazyTexture_Params
{
	bool                                               bMatchSize;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonLazyImage.SetBrushFromLazyMaterial
struct UCommonLazyImage_SetBrushFromLazyMaterial_Params
{
};

// Function CommonUI.CommonLazyImage.SetBrushFromLazyDisplayAsset
struct UCommonLazyImage_SetBrushFromLazyDisplayAsset_Params
{
	bool                                               bMatchTextureSize;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonLazyImage.IsLoading
struct UCommonLazyImage_IsLoading_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonLazyWidget.SetLazyContent
struct UCommonLazyWidget_SetLazyContent_Params
{
};

// Function CommonUI.CommonLazyWidget.IsLoading
struct UCommonLazyWidget_IsLoading_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonLazyWidget.GetContent
struct UCommonLazyWidget_GetContent_Params
{
	class UUserWidget*                                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonListView.SetEntrySpacing
struct UCommonListView_SetEntrySpacing_Params
{
	float                                              InEntrySpacing;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.LoadGuardSlot.SetVerticalAlignment
struct ULoadGuardSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<EVerticalAlignment>                    InVerticalAlignment;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.LoadGuardSlot.SetPadding
struct ULoadGuardSlot_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.LoadGuardSlot.SetHorizontalAlignment
struct ULoadGuardSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<EHorizontalAlignment>                  InHorizontalAlignment;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonLoadGuard.SetLoadingText
struct UCommonLoadGuard_SetLoadingText_Params
{
	struct FText                                       InLoadingText;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function CommonUI.CommonLoadGuard.SetIsLoading
struct UCommonLoadGuard_SetIsLoading_Params
{
	bool                                               bInIsLoading;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction CommonUI.CommonLoadGuard.OnAssetLoaded__DelegateSignature
struct UCommonLoadGuard_OnAssetLoaded__DelegateSignature_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonLoadGuard.IsLoading
struct UCommonLoadGuard_IsLoading_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonLoadGuard.BP_GuardAndLoadAsset
struct UCommonLoadGuard_BP_GuardAndLoadAsset_Params
{
	struct FScriptDelegate                             OnAssetLoaded;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function CommonUI.CommonNumericTextBlock.SetNumericType
struct UCommonNumericTextBlock_SetNumericType_Params
{
	enum class ECommonNumericType                      InNumericType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonNumericTextBlock.SetCurrentValue
struct UCommonNumericTextBlock_SetCurrentValue_Params
{
	float                                              NewValue;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction CommonUI.CommonNumericTextBlock.OnOutro__DelegateSignature
struct UCommonNumericTextBlock_OnOutro__DelegateSignature_Params
{
	class UCommonNumericTextBlock*                     NumericTextBlock;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// DelegateFunction CommonUI.CommonNumericTextBlock.OnInterpolationUpdated__DelegateSignature
struct UCommonNumericTextBlock_OnInterpolationUpdated__DelegateSignature_Params
{
	class UCommonNumericTextBlock*                     NumericTextBlock;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              LastValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction CommonUI.CommonNumericTextBlock.OnInterpolationStarted__DelegateSignature
struct UCommonNumericTextBlock_OnInterpolationStarted__DelegateSignature_Params
{
	class UCommonNumericTextBlock*                     NumericTextBlock;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// DelegateFunction CommonUI.CommonNumericTextBlock.OnInterpolationEnded__DelegateSignature
struct UCommonNumericTextBlock_OnInterpolationEnded__DelegateSignature_Params
{
	class UCommonNumericTextBlock*                     NumericTextBlock;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               HadCompleted;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonNumericTextBlock.IsInterpolatingNumericValue
struct UCommonNumericTextBlock_IsInterpolatingNumericValue_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonNumericTextBlock.InterpolateToValue
struct UCommonNumericTextBlock_InterpolateToValue_Params
{
	float                                              TargetValue;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaximumInterpolationDuration;                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinimumChangeRate;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutroOffset;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonNumericTextBlock.GetTargetValue
struct UCommonNumericTextBlock_GetTargetValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonPoolableWidgetInterface.OnReleaseToPool
struct UCommonPoolableWidgetInterface_OnReleaseToPool_Params
{
};

// Function CommonUI.CommonPoolableWidgetInterface.OnAcquireFromPool
struct UCommonPoolableWidgetInterface_OnAcquireFromPool_Params
{
};

// Function CommonUI.CommonRotator.ShiftTextRight
struct UCommonRotator_ShiftTextRight_Params
{
};

// Function CommonUI.CommonRotator.ShiftTextLeft
struct UCommonRotator_ShiftTextLeft_Params
{
};

// Function CommonUI.CommonRotator.SetSelectedItem
struct UCommonRotator_SetSelectedItem_Params
{
	int                                                InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonRotator.PopulateTextLabels
struct UCommonRotator_PopulateTextLabels_Params
{
	TArray<struct FText>                               Labels;                                                   // (Parm, ZeroConstructor)
};

// Function CommonUI.CommonRotator.GetSelectedText
struct UCommonRotator_GetSelectedText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CommonUI.CommonRotator.GetSelectedIndex
struct UCommonRotator_GetSelectedIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonRotator.BP_OnOptionsPopulated
struct UCommonRotator_BP_OnOptionsPopulated_Params
{
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonRotator.BP_OnOptionSelected
struct UCommonRotator_BP_OnOptionSelected_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonTextStyle.GetStrikeBrush
struct UCommonTextStyle_GetStrikeBrush_Params
{
	struct FSlateBrush                                 OutStrikeBrush;                                           // (Parm, OutParm)
};

// Function CommonUI.CommonTextStyle.GetShadowOffset
struct UCommonTextStyle_GetShadowOffset_Params
{
	struct FVector2D                                   OutShadowOffset;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonTextStyle.GetShadowColor
struct UCommonTextStyle_GetShadowColor_Params
{
	struct FLinearColor                                OutColor;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonTextStyle.GetMargin
struct UCommonTextStyle_GetMargin_Params
{
	struct FMargin                                     OutMargin;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonTextStyle.GetLineHeightPercentage
struct UCommonTextStyle_GetLineHeightPercentage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonTextStyle.GetFont
struct UCommonTextStyle_GetFont_Params
{
	struct FSlateFontInfo                              OutFont;                                                  // (Parm, OutParm)
};

// Function CommonUI.CommonTextStyle.GetColor
struct UCommonTextStyle_GetColor_Params
{
	struct FLinearColor                                OutColor;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonUILibrary.FindParentWidgetOfType
struct UCommonUILibrary_FindParentWidgetOfType_Params
{
	class UWidget*                                     StartingWidget;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonUISubsystemBase.GetInputActionButtonIcon
struct UCommonUISubsystemBase_GetInputActionButtonIcon_Params
{
	struct FDataTableRowHandle                         InputActionRowHandle;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	enum class ECommonInputType                        InputType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       GamepadName;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CommonUI.CommonVisibilitySwitcher.SetActiveWidgetIndex
struct UCommonVisibilitySwitcher_SetActiveWidgetIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonVisibilitySwitcher.SetActiveWidget
struct UCommonVisibilitySwitcher_SetActiveWidget_Params
{
	class UWidget*                                     Widget;                                                   // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonVisibilitySwitcher.IncrementActiveWidgetIndex
struct UCommonVisibilitySwitcher_IncrementActiveWidgetIndex_Params
{
	bool                                               bAllowWrapping;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonVisibilitySwitcher.GetActiveWidgetIndex
struct UCommonVisibilitySwitcher_GetActiveWidgetIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonVisibilitySwitcher.GetActiveWidget
struct UCommonVisibilitySwitcher_GetActiveWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonVisibilitySwitcher.DecrementActiveWidgetIndex
struct UCommonVisibilitySwitcher_DecrementActiveWidgetIndex_Params
{
	bool                                               bAllowWrapping;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonVisibilitySwitcher.DeactivateVisibleSlot
struct UCommonVisibilitySwitcher_DeactivateVisibleSlot_Params
{
};

// Function CommonUI.CommonVisibilitySwitcher.ActivateVisibleSlot
struct UCommonVisibilitySwitcher_ActivateVisibleSlot_Params
{
};

// Function CommonUI.UCommonVisibilityWidgetBase.GetRegisteredPlatforms
struct UUCommonVisibilityWidgetBase_GetRegisteredPlatforms_Params
{
	TArray<struct FName>                               ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function CommonUI.CommonWidgetCarousel.SetActiveWidgetIndex
struct UCommonWidgetCarousel_SetActiveWidgetIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonWidgetCarousel.SetActiveWidget
struct UCommonWidgetCarousel_SetActiveWidget_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonWidgetCarousel.PreviousPage
struct UCommonWidgetCarousel_PreviousPage_Params
{
};

// Function CommonUI.CommonWidgetCarousel.NextPage
struct UCommonWidgetCarousel_NextPage_Params
{
};

// Function CommonUI.CommonWidgetCarousel.GetWidgetAtIndex
struct UCommonWidgetCarousel_GetWidgetAtIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonWidgetCarousel.GetActiveWidgetIndex
struct UCommonWidgetCarousel_GetActiveWidgetIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonWidgetCarousel.EndAutoScrolling
struct UCommonWidgetCarousel_EndAutoScrolling_Params
{
};

// Function CommonUI.CommonWidgetCarousel.BeginAutoScrolling
struct UCommonWidgetCarousel_BeginAutoScrolling_Params
{
	float                                              ScrollInterval;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonWidgetCarouselNavBar.SetLinkedCarousel
struct UCommonWidgetCarouselNavBar_SetLinkedCarousel_Params
{
	class UCommonWidgetCarousel*                       CommonCarousel;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonWidgetCarouselNavBar.HandlePageChanged
struct UCommonWidgetCarouselNavBar_HandlePageChanged_Params
{
	class UCommonWidgetCarousel*                       CommonCarousel;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                PageIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonWidgetCarouselNavBar.HandleButtonClicked
struct UCommonWidgetCarouselNavBar_HandleButtonClicked_Params
{
	class UCommonButtonBase*                           AssociatedButton;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ButtonIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
