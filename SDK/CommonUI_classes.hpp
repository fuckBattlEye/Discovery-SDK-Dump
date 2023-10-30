#pragma once

//   SDK By:if

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace sdk
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class CommonUI.CommonActionWidget
// 0x0308 (0x0430 - 0x0128)
class UCommonActionWidget : public UWidget
{
public:
	struct FScriptMulticastDelegate                    OnInputMethodChanged;                                     // 0x0128(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0138(0x0008) MISSED OFFSET
	struct FSlateBrush                                 ProgressMaterialBrush;                                    // 0x0140(0x00D0) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FName                                       ProgressMaterialParam;                                    // 0x0210(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0218(0x0008) MISSED OFFSET
	struct FSlateBrush                                 IconRimBrush;                                             // 0x0220(0x00D0) (Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<struct FDataTableRowHandle>                 InputActions;                                             // 0x02F0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0300(0x0008) MISSED OFFSET
	class UMaterialInstanceDynamic*                    ProgressDynamicMaterial;                                  // 0x0308(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x120];                                     // 0x0310(0x0120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class CommonUI.CommonActionWidget"));
		return ptr;
	}


	void SetInputActions(TArray<struct FDataTableRowHandle> NewInputActions);//Offset:Discovery.exe+0x2500F50
	void SetInputAction(const struct FDataTableRowHandle& InputActionRow);//Offset:Discovery.exe+0x2501040
	void SetIconRimBrush(const struct FSlateBrush& InIconRimBrush);//Offset:Discovery.exe+0x2500E10
	void OnInputMethodChanged__DelegateSignature(bool bUsingGamepad);//Offset:Discovery.exe+0x327F8B0
	bool IsHeldAction();//Offset:Discovery.exe+0x2500DE0
	struct FSlateBrush GetIcon();//Offset:Discovery.exe+0x2501170
	struct FText GetDisplayText();//Offset:Discovery.exe+0x25010E0
};


// Class CommonUI.CommonUserWidget
// 0x0028 (0x02B8 - 0x0290)
class UCommonUserWidget : public UUserWidget
{
public:
	bool                                               bDisplayInActionBar;                                      // 0x0290(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bConsumePointerInput;                                     // 0x0291(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x26];                                      // 0x0292(0x0026) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class CommonUI.CommonUserWidget"));
		return ptr;
	}


	void SetConsumePointerInput(bool bInConsumePointerInput);//Offset:Discovery.exe+0x25154F0
};


// Class CommonUI.CommonActivatableWidget
// 0x00C0 (0x0378 - 0x02B8)
class UCommonActivatableWidget : public UCommonUserWidget
{
public:
	bool                                               bIsBackHandler;                                           // 0x02B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsBackActionDisplayedInActionBar;                        // 0x02B9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoActivate;                                            // 0x02BA(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSupportsActivationFocus;                                 // 0x02BB(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsModal;                                                 // 0x02BC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoRestoreFocus;                                        // 0x02BD(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x02BE(0x0002) MISSED OFFSET
	struct FScriptMulticastDelegate                    BP_OnWidgetActivated;                                     // 0x02C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    BP_OnWidgetDeactivated;                                   // 0x02D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bIsActive;                                                // 0x02E0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x02E1(0x0007) MISSED OFFSET
	TArray<TWeakObjectPtr<class UCommonActivatableWidget>> VisibilityBoundWidgets;                                   // 0x02E8(0x0010) (ExportObject, ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0x78];                                      // 0x02F8(0x0078) MISSED OFFSET
	bool                                               bSetVisibilityOnActivated;                                // 0x0370(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	enum class ESlateVisibility                        ActivatedVisibility;                                      // 0x0371(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSetVisibilityOnDeactivated;                              // 0x0372(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	enum class ESlateVisibility                        DeactivatedVisibility;                                    // 0x0373(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0374(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class CommonUI.CommonActivatableWidget"));
		return ptr;
	}


	void SetBindVisibilities(enum class ESlateVisibility OnActivatedVisibility, enum class ESlateVisibility OnDeactivatedVisibility, bool bInAllActive);//Offset:Discovery.exe+0x2501880
	bool IsActivated();//Offset:Discovery.exe+0x25019F0
	class UWidget* GetDesiredFocusTarget();//Offset:Discovery.exe+0x25017B0
	void DeactivateWidget();//Offset:Discovery.exe+0x25019B0
	bool BP_OnHandleBackAction();//Offset:Discovery.exe+0x327F8B0
	void BP_OnDeactivated();//Offset:Discovery.exe+0x327F8B0
	void BP_OnActivated();//Offset:Discovery.exe+0x327F8B0
	class UWidget* BP_GetDesiredFocusTarget();//Offset:Discovery.exe+0x327F8B0
	void BindVisibilityToActivation(class UCommonActivatableWidget* ActivatableWidget);//Offset:Discovery.exe+0x25017E0
	void ActivateWidget();//Offset:Discovery.exe+0x25019D0
};


// Class CommonUI.CommonActivatableWidgetContainerBase
// 0x0120 (0x0248 - 0x0128)
class UCommonActivatableWidgetContainerBase : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0128(0x0018) MISSED OFFSET
	enum class ECommonSwitcherTransition               TransitionType;                                           // 0x0140(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	enum class ETransitionCurve                        TransitionCurveType;                                      // 0x0141(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0142(0x0002) MISSED OFFSET
	float                                              TransitionDuration;                                       // 0x0144(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UCommonActivatableWidget*>            WidgetList;                                               // 0x0148(0x0010) (ExportObject, ZeroConstructor, Transient)
	class UCommonActivatableWidget*                    DisplayedWidget;                                          // 0x0158(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FUserWidgetPool                             GeneratedWidgetsPool;                                     // 0x0160(0x0088) (Transient)
	unsigned char                                      UnknownData02[0x60];                                      // 0x01E8(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class CommonUI.CommonActivatableWidgetContainerBase"));
		return ptr;
	}


	void SetTransitionDuration(float Duration);//Offset:Discovery.exe+0x2502520
	void RemoveWidget(class UCommonActivatableWidget* WidgetToRemove);//Offset:Discovery.exe+0x2502270
	float GetTransitionDuration();//Offset:Discovery.exe+0x25024F0
	class UCommonActivatableWidget* GetActiveWidget();//Offset:Discovery.exe+0x25025E0
	void ClearWidgets();//Offset:Discovery.exe+0x25025C0
	class UCommonActivatableWidget* BP_AddWidgetWithCallback(class UClass* ActivatableWidgetClass, class UObject* Opt_CallbackObject, const struct FName& Opt_CallbackFunctionName);//Offset:Discovery.exe+0x2502310
	class UCommonActivatableWidget* BP_AddWidget(class UClass* ActivatableWidgetClass);//Offset:Discovery.exe+0x2502450
};


// Class CommonUI.CommonActivatableWidgetStack
// 0x0010 (0x0258 - 0x0248)
class UCommonActivatableWidgetStack : public UCommonActivatableWidgetContainerBase
{
public:
	class UClass*                                      RootContentWidgetClass;                                   // 0x0248(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCommonActivatableWidget*                    RootContentWidget;                                        // 0x0250(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class CommonUI.CommonActivatableWidgetStack"));
		return ptr;
	}

};


// Class CommonUI.CommonActivatableWidgetQueue
// 0x0000 (0x0248 - 0x0248)
class UCommonActivatableWidgetQueue : public UCommonActivatableWidgetContainerBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class CommonUI.CommonActivatableWidgetQueue"));
		return ptr;
	}

};


// Class CommonUI.CommonAnimatedSwitcher
// 0x0058 (0x01B0 - 0x0158)
class UCommonAnimatedSwitcher : public UWidgetSwitcher
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0158(0x0018) MISSED OFFSET
	enum class ECommonSwitcherTransition               TransitionType;                                           // 0x0170(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	enum class ETransitionCurve                        TransitionCurveType;                                      // 0x0171(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0172(0x0002) MISSED OFFSET
	float                                              TransitionDuration;                                       // 0x0174(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x38];                                      // 0x0178(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class CommonUI.CommonAnimatedSwitcher"));
		return ptr;
	}


	void SetDisableTransitionAnimation(bool bDisableAnimation);//Offset:Discovery.exe+0x2502FA0
	bool IsCurrentlySwitching();//Offset:Discovery.exe+0x2502F70
	bool HasWidgets();//Offset:Discovery.exe+0x2503040
	void ActivatePreviousWidget(bool bCanWrap);//Offset:Discovery.exe+0x2503070
	void ActivateNextWidget(bool bCanWrap);//Offset:Discovery.exe+0x2503110
};


// Class CommonUI.CommonActivatableWidgetSwitcher
// 0x0000 (0x01B0 - 0x01B0)
class UCommonActivatableWidgetSwitcher : public UCommonAnimatedSwitcher
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class CommonUI.CommonActivatableWidgetSwitcher"));
		return ptr;
	}

};


// Class CommonUI.CommonBoundActionBar
// 0x0010 (0x0218 - 0x0208)
class UCommonBoundActionBar : public UDynamicEntryBoxBase
{
public:
	class UClass*                                      ActionButtonClass;                                        // 0x0208(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDisplayOwningPlayerActionsOnly;                          // 0x0210(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreDuplicateActions;                                  // 0x0211(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0212(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class CommonUI.CommonBoundActionBar"));
		return ptr;
	}


	void SetDisplayOwningPlayerActionsOnly(bool bShouldOnlyDisplayOwningPlayerActions);//Offset:Discovery.exe+0x2503C20
};


// Class CommonUI.CommonButtonBase
// 0x0DB8 (0x1070 - 0x02B8)
class UCommonButtonBase : public UCommonUserWidget
{
public:
	int                                                MinWidth;                                                 // 0x02B8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MinHeight;                                                // 0x02BC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Style;                                                    // 0x02C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHideInputAction;                                         // 0x02C8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02C9(0x0007) MISSED OFFSET
	struct FSlateSound                                 PressedSlateSoundOverride;                                // 0x02D0(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FSlateSound                                 HoveredSlateSoundOverride;                                // 0x02E8(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bApplyAlphaOnDisable : 1;                                 // 0x0300(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bSelectable : 1;                                          // 0x0300(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bShouldSelectUponReceivingFocus : 1;                      // 0x0300(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bInteractableWhenSelected : 1;                            // 0x0300(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bToggleable : 1;                                          // 0x0300(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bDisplayInputActionWhenNotInteractable : 1;               // 0x0300(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bHideInputActionWithKeyboard : 1;                         // 0x0300(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bShouldUseFallbackDefaultInputAction : 1;                 // 0x0300(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0301(0x0001) MISSED OFFSET
	TEnumAsByte<EButtonClickMethod>                    ClickMethod;                                              // 0x0302(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EButtonTouchMethod>                    TouchMethod;                                              // 0x0303(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EButtonPressMethod>                    PressMethod;                                              // 0x0304(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0305(0x0003) MISSED OFFSET
	int                                                InputPriority;                                            // 0x0308(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x030C(0x0004) MISSED OFFSET
	struct FDataTableRowHandle                         TriggeringInputAction;                                    // 0x0310(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData04[0x10];                                      // 0x0320(0x0010) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnSelectedChangedBase;                                    // 0x0330(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnButtonBaseClicked;                                      // 0x0340(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnButtonBaseDoubleClicked;                                // 0x0350(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnButtonBaseHovered;                                      // 0x0360(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnButtonBaseUnhovered;                                    // 0x0370(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0380(0x0004) MISSED OFFSET
	bool                                               bIsPersistentBinding;                                     // 0x0384(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	enum class ECommonInputMode                        InputModeOverride;                                        // 0x0385(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x32];                                      // 0x0386(0x0032) MISSED OFFSET
	class UMaterialInstanceDynamic*                    SingleMaterialStyleMID;                                   // 0x03B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FButtonStyle                                NormalStyle;                                              // 0x03C0(0x03F0)
	struct FButtonStyle                                SelectedStyle;                                            // 0x07B0(0x03F0)
	struct FButtonStyle                                DisabledStyle;                                            // 0x0BA0(0x03F0)
	unsigned char                                      bStopDoubleClickPropagation : 1;                          // 0x0F90(0x0001) (Transient)
	unsigned char                                      UnknownData07[0xCF];                                      // 0x0F91(0x00CF) MISSED OFFSET
	class UCommonActionWidget*                         InputActionWidget;                                        // 0x1060(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData08[0x8];                                       // 0x1068(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class CommonUI.CommonButtonBase"));
		return ptr;
	}


	void StopDoubleClickPropagation();//Offset:Discovery.exe+0x25058F0
	void SetTriggeringInputAction(const struct FDataTableRowHandle& InputActionRow);//Offset:Discovery.exe+0x2505EF0
	void SetTriggeredInputAction(const struct FDataTableRowHandle& InputActionRow);//Offset:Discovery.exe+0x2505FA0
	void SetTouchMethod(TEnumAsByte<EButtonTouchMethod> InTouchMethod);//Offset:Discovery.exe+0x2506900
	void SetStyle(class UClass* InStyle);//Offset:Discovery.exe+0x2506340
	void SetShouldUseFallbackDefaultInputAction(bool bInShouldUseFallbackDefaultInputAction);//Offset:Discovery.exe+0x25065F0
	void SetShouldSelectUponReceivingFocus(bool bInShouldSelectUponReceivingFocus);//Offset:Discovery.exe+0x2506410
	void SetSelectedInternal(bool bInSelected, bool bAllowSound, bool bBroadcast);//Offset:Discovery.exe+0x25057B0
	void SetPressMethod(TEnumAsByte<EButtonPressMethod> InPressMethod);//Offset:Discovery.exe+0x2506870
	void SetPressedSoundOverride(class USoundBase* Sound);//Offset:Discovery.exe+0x2505B80
	void SetMinDimensions(int InMinWidth, int InMinHeight);//Offset:Discovery.exe+0x2506050
	void SetIsToggleable(bool bInIsToggleable);//Offset:Discovery.exe+0x2506690
	void SetIsSelected(bool InSelected, bool bGiveClickFeedback);//Offset:Discovery.exe+0x2506500
	void SetIsSelectable(bool bInIsSelectable);//Offset:Discovery.exe+0x25067D0
	void SetIsInteractionEnabled(bool bInIsInteractionEnabled);//Offset:Discovery.exe+0x2506A80
	void SetIsInteractableWhenSelected(bool bInInteractableWhenSelected);//Offset:Discovery.exe+0x2506730
	void SetIsFocusable(bool bInIsFocusable);//Offset:Discovery.exe+0x2505DA0
	void SetInputActionProgressMaterial(const struct FSlateBrush& InProgressMaterialBrush, const struct FName& InProgressMaterialParam);//Offset:Discovery.exe+0x2505C20
	void SetHoveredSoundOverride(class USoundBase* Sound);//Offset:Discovery.exe+0x2505AE0
	void SetClickMethod(TEnumAsByte<EButtonClickMethod> InClickMethod);//Offset:Discovery.exe+0x2506990
	void OnTriggeredInputActionChanged(const struct FDataTableRowHandle& NewTriggeredAction);//Offset:Discovery.exe+0x327F8B0
	void OnInputMethodChanged(enum class ECommonInputType CurrentInputType);//Offset:Discovery.exe+0x2505A40
	void OnCurrentTextStyleChanged();//Offset:Discovery.exe+0x327F8B0
	void OnActionProgress(float HeldPercent);//Offset:Discovery.exe+0x327F8B0
	void OnActionComplete();//Offset:Discovery.exe+0x327F8B0
	void NativeOnActionProgress(float HeldPercent);//Offset:Discovery.exe+0x2505710
	void NativeOnActionComplete();//Offset:Discovery.exe+0x25056F0
	bool IsPressed();//Offset:Discovery.exe+0x2506A20
	bool IsInteractionEnabled();//Offset:Discovery.exe+0x2506A50
	void HandleTriggeringActionCommited(bool* bPassThrough);//Offset:Discovery.exe+0x2505990
	void HandleFocusReceived();//Offset:Discovery.exe+0x2505950
	void HandleButtonReleased();//Offset:Discovery.exe+0x2505910
	void HandleButtonPressed();//Offset:Discovery.exe+0x2505930
	void HandleButtonClicked();//Offset:Discovery.exe+0x2505970
	class UCommonButtonStyle* GetStyle();//Offset:Discovery.exe+0x2506310
	class UMaterialInstanceDynamic* GetSingleMaterialStyleMID();//Offset:Discovery.exe+0x2505D70
	bool GetShouldSelectUponReceivingFocus();//Offset:Discovery.exe+0x25063E0
	bool GetSelected();//Offset:Discovery.exe+0x25064D0
	bool GetIsFocusable();//Offset:Discovery.exe+0x1B01060
	bool GetInputAction(struct FDataTableRowHandle* InputActionRow);//Offset:Discovery.exe+0x2505E40
	class UClass* GetCurrentTextStyleClass();//Offset:Discovery.exe+0x2506130
	class UCommonTextStyle* GetCurrentTextStyle();//Offset:Discovery.exe+0x2506180
	void GetCurrentCustomPadding(struct FMargin* OutCustomPadding);//Offset:Discovery.exe+0x25061B0
	void GetCurrentButtonPadding(struct FMargin* OutButtonPadding);//Offset:Discovery.exe+0x2506260
	void DisableButtonWithReason(const struct FText& DisabledReason);//Offset:Discovery.exe+0x2506B20
	void ClearSelection();//Offset:Discovery.exe+0x25064B0
	void BP_OnUnhovered();//Offset:Discovery.exe+0x327F8B0
	void BP_OnSelected();//Offset:Discovery.exe+0x327F8B0
	void BP_OnHovered();//Offset:Discovery.exe+0x327F8B0
	void BP_OnEnabled();//Offset:Discovery.exe+0x327F8B0
	void BP_OnDoubleClicked();//Offset:Discovery.exe+0x327F8B0
	void BP_OnDisabled();//Offset:Discovery.exe+0x327F8B0
	void BP_OnDeselected();//Offset:Discovery.exe+0x327F8B0
	void BP_OnClicked();//Offset:Discovery.exe+0x327F8B0
};


// Class CommonUI.CommonTabListWidgetBase
// 0x00D0 (0x0388 - 0x02B8)
class UCommonTabListWidgetBase : public UCommonUserWidget
{
public:
	struct FScriptMulticastDelegate                    OnTabSelected;                                            // 0x02B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTabButtonCreation;                                      // 0x02C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTabButtonRemoval;                                       // 0x02D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FDataTableRowHandle                         NextTabInputActionData;                                   // 0x02E8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FDataTableRowHandle                         PreviousTabInputActionData;                               // 0x02F8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bAutoListenForInput;                                      // 0x0308(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoSelectTabButton;                                     // 0x0309(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x030A(0x0002) MISSED OFFSET
	TWeakObjectPtr<class UCommonAnimatedSwitcher>      LinkedSwitcher;                                           // 0x030C(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0314(0x0004) MISSED OFFSET
	class UCommonButtonGroupBase*                      TabButtonGroup;                                           // 0x0318(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0320(0x0008) MISSED OFFSET
	TMap<struct FName, struct FCommonRegisteredTabInfo> RegisteredTabsByID;                                       // 0x0328(0x0050) (Transient)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0378(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class CommonUI.CommonTabListWidgetBase"));
		return ptr;
	}


	void SetTabVisibility(const struct FName& TabNameID, enum class ESlateVisibility NewVisibility);//Offset:Discovery.exe+0x2510180
	void SetTabInteractionEnabled(const struct FName& TabNameID, bool bEnable);//Offset:Discovery.exe+0x250FFA0
	void SetTabEnabled(const struct FName& TabNameID, bool bEnable);//Offset:Discovery.exe+0x2510090
	void SetListeningForInput(bool bShouldListen);//Offset:Discovery.exe+0x250FDE0
	void SetLinkedSwitcher(class UCommonAnimatedSwitcher* CommonSwitcher);//Offset:Discovery.exe+0x25106B0
	bool SelectTabByID(const struct FName& TabNameID, bool bSuppressClickFeedback);//Offset:Discovery.exe+0x2510360
	bool RemoveTab(const struct FName& TabNameID);//Offset:Discovery.exe+0x25104A0
	void RemoveAllTabs();//Offset:Discovery.exe+0x2510480
	bool RegisterTab(const struct FName& TabNameID, class UClass* ButtonWidgetType, class UWidget* ContentWidget);//Offset:Discovery.exe+0x2510540
	void OnTabSelected__DelegateSignature(const struct FName& TabId);//Offset:Discovery.exe+0x327F8B0
	void OnTabButtonRemoval__DelegateSignature(const struct FName& TabId, class UCommonButtonBase* TabButton);//Offset:Discovery.exe+0x327F8B0
	void OnTabButtonCreation__DelegateSignature(const struct FName& TabId, class UCommonButtonBase* TabButton);//Offset:Discovery.exe+0x327F8B0
	void HandleTabSelection(const struct FName& TabNameID, class UCommonButtonBase* TabButton);//Offset:Discovery.exe+0x250F9D0
	void HandleTabRemoval(const struct FName& TabNameID, class UCommonButtonBase* TabButton);//Offset:Discovery.exe+0x250FAC0
	void HandleTabCreation(const struct FName& TabNameID, class UCommonButtonBase* TabButton);//Offset:Discovery.exe+0x250FBB0
	void HandleTabButtonSelected(class UCommonButtonBase* SelectedTabButton, int ButtonIndex);//Offset:Discovery.exe+0x250F8F0
	void HandlePreviousTabInputAction(bool* bPassThrough);//Offset:Discovery.exe+0x250F850
	void HandlePreLinkedSwitcherChanged_BP();//Offset:Discovery.exe+0x327F8B0
	void HandlePostLinkedSwitcherChanged_BP();//Offset:Discovery.exe+0x327F8B0
	void HandleNextTabInputAction(bool* bPassThrough);//Offset:Discovery.exe+0x250F7B0
	class UWidget* GetTabWidgetBaseByID(const struct FName& TabNameID);//Offset:Discovery.exe+0x250FCA0
	struct FName GetTabIdAtIndex(int Index);//Offset:Discovery.exe+0x2510260
	int GetTabCount();//Offset:Discovery.exe+0x2510450
	class UCommonButtonBase* GetTabButtonBaseByID(const struct FName& TabNameID);//Offset:Discovery.exe+0x250FD40
	struct FName GetSelectedTabId();//Offset:Discovery.exe+0x2510310
	class UCommonAnimatedSwitcher* GetLinkedSwitcher();//Offset:Discovery.exe+0x2510680
	struct FName GetActiveTab();//Offset:Discovery.exe+0x2510750
	void DisableTabWithReason(const struct FName& TabNameID, const struct FText& Reason);//Offset:Discovery.exe+0x250FE80
};


// Class CommonUI.AnalogSlider
// 0x0020 (0x0700 - 0x06E0)
class UAnalogSlider : public USlider
{
public:
	struct FScriptMulticastDelegate                    OnAnalogCapture;                                          // 0x06E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x06F0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class CommonUI.AnalogSlider"));
		return ptr;
	}

};


// Class CommonUI.CommonActionHandlerInterface
// 0x0000 (0x0028 - 0x0028)
class UCommonActionHandlerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class CommonUI.CommonActionHandlerInterface"));
		return ptr;
	}

};


// Class CommonUI.CommonBorderStyle
// 0x00D8 (0x0100 - 0x0028)
class UCommonBorderStyle : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FSlateBrush                                 Background;                                               // 0x0030(0x00D0) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class CommonUI.CommonBorderStyle"));
		return ptr;
	}


	void GetBackgroundBrush(struct FSlateBrush* Brush);//Offset:Discovery.exe+0x2503570
};


// Class CommonUI.CommonBorder
// 0x0020 (0x0310 - 0x02F0)
class UCommonBorder : public UBorder
{
public:
	bool                                               bReducePaddingBySafezone;                                 // 0x02F0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02F1(0x0003) MISSED OFFSET
	struct FMargin                                     MinimumPadding;                                           // 0x02F4(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0304(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class CommonUI.CommonBorder"));
		return ptr;
	}


	void SetStyle(class UClass* InStyle);//Offset:Discovery.exe+0x25038E0
};


// Class CommonUI.CommonBoundActionButton
// 0x0010 (0x1080 - 0x1070)
class UCommonBoundActionButton : public UCommonButtonBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x1070(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class CommonUI.CommonBoundActionButton"));
		return ptr;
	}


	void OnUpdateInputAction(const struct FText& ActionName);//Offset:Discovery.exe+0x327F8B0
};


// Class CommonUI.CommonButtonStyle
// 0x0788 (0x07B0 - 0x0028)
class UCommonButtonStyle : public UObject
{
public:
	bool                                               bSingleMaterial;                                          // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FSlateBrush                                 SingleMaterialBrush;                                      // 0x0030(0x00D0) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FSlateBrush                                 NormalBase;                                               // 0x0100(0x00D0) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FSlateBrush                                 NormalHovered;                                            // 0x01D0(0x00D0) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FSlateBrush                                 NormalPressed;                                            // 0x02A0(0x00D0) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FSlateBrush                                 SelectedBase;                                             // 0x0370(0x00D0) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FSlateBrush                                 SelectedHovered;                                          // 0x0440(0x00D0) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FSlateBrush                                 SelectedPressed;                                          // 0x0510(0x00D0) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FSlateBrush                                 Disabled;                                                 // 0x05E0(0x00D0) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FMargin                                     ButtonPadding;                                            // 0x06B0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FMargin                                     CustomPadding;                                            // 0x06C0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MinWidth;                                                 // 0x06D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MinHeight;                                                // 0x06D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      NormalTextStyle;                                          // 0x06D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      NormalHoveredTextStyle;                                   // 0x06E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      SelectedTextStyle;                                        // 0x06E8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      SelectedHoveredTextStyle;                                 // 0x06F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      DisabledTextStyle;                                        // 0x06F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FSlateSound                                 PressedSlateSound;                                        // 0x0700(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FCommonButtonStyleOptionalSlateSound        SelectedPressedSlateSound;                                // 0x0718(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FCommonButtonStyleOptionalSlateSound        DisabledPressedSlateSound;                                // 0x0738(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FSlateSound                                 HoveredSlateSound;                                        // 0x0758(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FCommonButtonStyleOptionalSlateSound        SelectedHoveredSlateSound;                                // 0x0770(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FCommonButtonStyleOptionalSlateSound        DisabledHoveredSlateSound;                                // 0x0790(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class CommonUI.CommonButtonStyle"));
		return ptr;
	}


	class UCommonTextStyle* GetSelectedTextStyle();//Offset:Discovery.exe+0x25042C0
	void GetSelectedPressedBrush(struct FSlateBrush* Brush);//Offset:Discovery.exe+0x25045A0
	class UCommonTextStyle* GetSelectedHoveredTextStyle();//Offset:Discovery.exe+0x2504290
	void GetSelectedHoveredBrush(struct FSlateBrush* Brush);//Offset:Discovery.exe+0x2504690
	void GetSelectedBaseBrush(struct FSlateBrush* Brush);//Offset:Discovery.exe+0x2504780
	class UCommonTextStyle* GetNormalTextStyle();//Offset:Discovery.exe+0x2504320
	void GetNormalPressedBrush(struct FSlateBrush* Brush);//Offset:Discovery.exe+0x2504870
	class UCommonTextStyle* GetNormalHoveredTextStyle();//Offset:Discovery.exe+0x25042F0
	void GetNormalHoveredBrush(struct FSlateBrush* Brush);//Offset:Discovery.exe+0x2504960
	void GetNormalBaseBrush(struct FSlateBrush* Brush);//Offset:Discovery.exe+0x2504A50
	void GetMaterialBrush(struct FSlateBrush* Brush);//Offset:Discovery.exe+0x2503570
	class UCommonTextStyle* GetDisabledTextStyle();//Offset:Discovery.exe+0x2504260
	void GetDisabledBrush(struct FSlateBrush* Brush);//Offset:Discovery.exe+0x25044B0
	void GetCustomPadding(struct FMargin* OutCustomPadding);//Offset:Discovery.exe+0x2504350
	void GetButtonPadding(struct FMargin* OutButtonPadding);//Offset:Discovery.exe+0x2504400
};


// Class CommonUI.CommonButtonInternalBase
// 0x0060 (0x0630 - 0x05D0)
class UCommonButtonInternalBase : public UButton
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x05D0(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnDoubleClicked;                                          // 0x05D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x10];                                      // 0x05E8(0x0010) MISSED OFFSET
	int                                                MinWidth;                                                 // 0x05F8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MinHeight;                                                // 0x05FC(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bButtonEnabled;                                           // 0x0600(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bInteractionEnabled;                                      // 0x0601(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2E];                                      // 0x0602(0x002E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class CommonUI.CommonButtonInternalBase"));
		return ptr;
	}

};


// Class CommonUI.CommonWidgetGroupBase
// 0x0000 (0x0028 - 0x0028)
class UCommonWidgetGroupBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class CommonUI.CommonWidgetGroupBase"));
		return ptr;
	}


	void RemoveWidget(class UWidget* InWidget);//Offset:Discovery.exe+0x25176E0
	void RemoveAll();//Offset:Discovery.exe+0x25176C0
	void AddWidget(class UWidget* InWidget);//Offset:Discovery.exe+0x2517780
};


// Class CommonUI.CommonButtonGroupBase
// 0x00E8 (0x0110 - 0x0028)
class UCommonButtonGroupBase : public UCommonWidgetGroupBase
{
public:
	struct FScriptMulticastDelegate                    OnSelectedButtonBaseChanged;                              // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnHoveredButtonBaseChanged;                               // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0060(0x0018) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnButtonBaseClicked;                                      // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0088(0x0018) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnButtonBaseDoubleClicked;                                // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0x18];                                      // 0x00B0(0x0018) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnSelectionCleared;                                       // 0x00C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData04[0x18];                                      // 0x00D8(0x0018) MISSED OFFSET
	bool                                               bSelectionRequired;                                       // 0x00F0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x1F];                                      // 0x00F1(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class CommonUI.CommonButtonGroupBase"));
		return ptr;
	}


	void SetSelectionRequired(bool bRequireSelection);//Offset:Discovery.exe+0x2509AA0
	void SelectPreviousButton(bool bAllowWrap);//Offset:Discovery.exe+0x2509940
	void SelectNextButton(bool bAllowWrap);//Offset:Discovery.exe+0x25099E0
	void SelectButtonAtIndex(int ButtonIndex);//Offset:Discovery.exe+0x25098A0
	void OnSelectionStateChangedBase(class UCommonButtonBase* BaseButton, bool bIsSelected);//Offset:Discovery.exe+0x2509580
	void OnHandleButtonBaseDoubleClicked(class UCommonButtonBase* BaseButton);//Offset:Discovery.exe+0x2509440
	void OnHandleButtonBaseClicked(class UCommonButtonBase* BaseButton);//Offset:Discovery.exe+0x25094E0
	void OnButtonBaseUnhovered(class UCommonButtonBase* BaseButton);//Offset:Discovery.exe+0x21C66F0
	void OnButtonBaseHovered(class UCommonButtonBase* BaseButton);//Offset:Discovery.exe+0x25093A0
	bool HasAnyButtons();//Offset:Discovery.exe+0x25096A0
	int GetSelectedButtonIndex();//Offset:Discovery.exe+0x2509870
	class UCommonButtonBase* GetSelectedButtonBase();//Offset:Discovery.exe+0x25096D0
	int GetHoveredButtonIndex();//Offset:Discovery.exe+0x2509840
	int GetButtonCount();//Offset:Discovery.exe+0x2509670
	class UCommonButtonBase* GetButtonBaseAtIndex(int Index);//Offset:Discovery.exe+0x2509700
	int FindButtonIndex(class UCommonButtonBase* ButtonToFind);//Offset:Discovery.exe+0x25097A0
	void DeselectAll();//Offset:Discovery.exe+0x2509A80
};


// Class CommonUI.CommonCustomNavigation
// 0x0010 (0x0300 - 0x02F0)
class UCommonCustomNavigation : public UBorder
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x02F0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class CommonUI.CommonCustomNavigation"));
		return ptr;
	}

};


// Class CommonUI.CommonTextBlock
// 0x0030 (0x0340 - 0x0310)
class UCommonTextBlock : public UTextBlock
{
public:
	class UClass*                                      Style;                                                    // 0x0310(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ScrollStyle;                                              // 0x0318(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bDisplayAllCaps;                                          // 0x0320(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bAutoCollapseWithEmptyText;                               // 0x0321(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0322(0x0002) MISSED OFFSET
	float                                              MobileFontSizeMultiplier;                                 // 0x0324(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0328(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class CommonUI.CommonTextBlock"));
		return ptr;
	}


	void SetWrapTextWidth(int InWrapTextAt);//Offset:Discovery.exe+0x25123B0
	void SetTextCase(bool bUseAllCaps);//Offset:Discovery.exe+0x2512310
	void SetStyle(class UClass* InStyle);//Offset:Discovery.exe+0x2512270
	void ResetScrollState();//Offset:Discovery.exe+0x2512250
};


// Class CommonUI.CommonDateTimeTextBlock
// 0x0050 (0x0390 - 0x0340)
class UCommonDateTimeTextBlock : public UCommonTextBlock
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0340(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class CommonUI.CommonDateTimeTextBlock"));
		return ptr;
	}


	void SetTimespanValue(const struct FTimespan& InTimespan);//Offset:Discovery.exe+0x250A870
	void SetDateTimeValue(const struct FDateTime& InDateTime, bool bShowAsCountdown, float InRefreshDelay);//Offset:Discovery.exe+0x250A910
	void SetCountDownCompletionText(const struct FText& InCompletionText);//Offset:Discovery.exe+0x250A780
	struct FDateTime GetDateTime();//Offset:Discovery.exe+0x250A730
};


// Class CommonUI.CommonGameViewportClient
// 0x0040 (0x0440 - 0x0400)
class UCommonGameViewportClient : public UGameViewportClient
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0400(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class CommonUI.CommonGameViewportClient"));
		return ptr;
	}

};


// Class CommonUI.CommonGenericInputActionDataTable
// 0x0000 (0x00B0 - 0x00B0)
class UCommonGenericInputActionDataTable : public UDataTable
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class CommonUI.CommonGenericInputActionDataTable"));
		return ptr;
	}

};


// Class CommonUI.CommonInputActionDataProcessor
// 0x0000 (0x0028 - 0x0028)
class UCommonInputActionDataProcessor : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class CommonUI.CommonInputActionDataProcessor"));
		return ptr;
	}

};


// Class CommonUI.CommonHardwareVisibilityBorder
// 0x0050 (0x0360 - 0x0310)
class UCommonHardwareVisibilityBorder : public UCommonBorder
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0310(0x0040) MISSED OFFSET
	enum class ESlateVisibility                        VisibleType;                                              // 0x0350(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	enum class ESlateVisibility                        HiddenType;                                               // 0x0351(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xE];                                       // 0x0352(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class CommonUI.CommonHardwareVisibilityBorder"));
		return ptr;
	}

};


// Class CommonUI.CommonHierarchicalScrollBox
// 0x0000 (0x0C80 - 0x0C80)
class UCommonHierarchicalScrollBox : public UScrollBox
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class CommonUI.CommonHierarchicalScrollBox"));
		return ptr;
	}

};


// Class CommonUI.CommonLazyImage
// 0x0110 (0x0390 - 0x0280)
class UCommonLazyImage : public UImage
{
public:
	struct FSlateBrush                                 LoadingBackgroundBrush;                                   // 0x0280(0x00D0) (Edit)
	struct FName                                       MaterialTextureParamName;                                 // 0x0350(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    BP_OnLoadingStateChanged;                                 // 0x0358(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0368(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class CommonUI.CommonLazyImage"));
		return ptr;
	}


	void SetMaterialTextureParamName(const struct FName& TextureParamName);//Offset:Discovery.exe+0x250B440
	void SetBrushFromLazyTexture(bool bMatchSize);//Offset:Discovery.exe+0x250B720
	void SetBrushFromLazyMaterial();//Offset:Discovery.exe+0x250B640
	void SetBrushFromLazyDisplayAsset(bool bMatchTextureSize);//Offset:Discovery.exe+0x250B510
	bool IsLoading();//Offset:Discovery.exe+0x250B4E0
};


// Class CommonUI.CommonLazyWidget
// 0x0158 (0x0280 - 0x0128)
class UCommonLazyWidget : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0128(0x0008) MISSED OFFSET
	struct FSlateBrush                                 LoadingBackgroundBrush;                                   // 0x0130(0x00D0) (Edit)
	class UUserWidget*                                 Content;                                                  // 0x0200(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0208(0x0028) MISSED OFFSET
	struct FScriptMulticastDelegate                    BP_OnLoadingStateChanged;                                 // 0x0230(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x40];                                      // 0x0240(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class CommonUI.CommonLazyWidget"));
		return ptr;
	}


	void SetLazyContent();//Offset:Discovery.exe+0x250BD80
	bool IsLoading();//Offset:Discovery.exe+0x250BD20
	class UUserWidget* GetContent();//Offset:Discovery.exe+0x250BD50
};


// Class CommonUI.CommonListView
// 0x0000 (0x0BE0 - 0x0BE0)
class UCommonListView : public UListView
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class CommonUI.CommonListView"));
		return ptr;
	}


	void SetEntrySpacing(float InEntrySpacing);//Offset:Discovery.exe+0x1B05B90
};


// Class CommonUI.LoadGuardSlot
// 0x0028 (0x0060 - 0x0038)
class ULoadGuardSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0038(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0049(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x16];                                      // 0x004A(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class CommonUI.LoadGuardSlot"));
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);//Offset:Discovery.exe+0x250C500
	void SetPadding(const struct FMargin& InPadding);//Offset:Discovery.exe+0x250C620
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);//Offset:Discovery.exe+0x250C590
};


// Class CommonUI.CommonLoadGuard
// 0x0160 (0x02A0 - 0x0140)
class UCommonLoadGuard : public UContentWidget
{
public:
	struct FSlateBrush                                 LoadingBackgroundBrush;                                   // 0x0140(0x00D0) (Edit)
	TEnumAsByte<EHorizontalAlignment>                  ThrobberAlignment;                                        // 0x0210(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0211(0x0003) MISSED OFFSET
	struct FMargin                                     ThrobberPadding;                                          // 0x0214(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0224(0x0004) MISSED OFFSET
	struct FText                                       LoadingText;                                              // 0x0228(0x0018) (Edit)
	class UClass*                                      TextStyle;                                                // 0x0240(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    BP_OnLoadingStateChanged;                                 // 0x0248(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FSoftObjectPath                             SpinnerMaterialPath;                                      // 0x0258(0x0018) (ZeroConstructor, Config)
	unsigned char                                      UnknownData02[0x30];                                      // 0x0270(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class CommonUI.CommonLoadGuard"));
		return ptr;
	}


	void SetLoadingText(const struct FText& InLoadingText);//Offset:Discovery.exe+0x250CD10
	void SetIsLoading(bool bInIsLoading);//Offset:Discovery.exe+0x250CC70
	void OnAssetLoaded__DelegateSignature(class UObject* Object);//Offset:Discovery.exe+0x327F8B0
	bool IsLoading();//Offset:Discovery.exe+0x250CC40
	void BP_GuardAndLoadAsset(const struct FScriptDelegate& OnAssetLoaded);//Offset:Discovery.exe+0x250CAE0
};


// Class CommonUI.CommonNumericTextBlock
// 0x00A0 (0x03E0 - 0x0340)
class UCommonNumericTextBlock : public UCommonTextBlock
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0340(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnInterpolationUpdatedEvent;                              // 0x0348(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnOutroEvent;                                             // 0x0358(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnInterpolationEndedEvent;                                // 0x0368(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              CurrentNumericValue;                                      // 0x0378(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	enum class ECommonNumericType                      NumericType;                                              // 0x037C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x037D(0x0003) MISSED OFFSET
	struct FCommonNumberFormattingOptions              FormattingSpecification;                                  // 0x0380(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              EaseOutInterpolationExponent;                             // 0x0394(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              InterpolationUpdateInterval;                              // 0x0398(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PostInterpolationShrinkDuration;                          // 0x039C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               PerformSizeInterpolation;                                 // 0x03A0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsPercentage;                                             // 0x03A1(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3E];                                      // 0x03A2(0x003E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class CommonUI.CommonNumericTextBlock"));
		return ptr;
	}


	void SetNumericType(enum class ECommonNumericType InNumericType);//Offset:Discovery.exe+0x250D4A0
	void SetCurrentValue(float NewValue);//Offset:Discovery.exe+0x250D6E0
	void OnOutro__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock);//Offset:Discovery.exe+0x327F8B0
	void OnInterpolationUpdated__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock, float LastValue, float NewValue);//Offset:Discovery.exe+0x327F8B0
	void OnInterpolationStarted__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock);//Offset:Discovery.exe+0x327F8B0
	void OnInterpolationEnded__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock, bool HadCompleted);//Offset:Discovery.exe+0x327F8B0
	bool IsInterpolatingNumericValue();//Offset:Discovery.exe+0x250D530
	void InterpolateToValue(float TargetValue, float MaximumInterpolationDuration, float MinimumChangeRate, float OutroOffset);//Offset:Discovery.exe+0x250D560
	float GetTargetValue();//Offset:Discovery.exe+0x250D780
};


// Class CommonUI.CommonPoolableWidgetInterface
// 0x0000 (0x0028 - 0x0028)
class UCommonPoolableWidgetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class CommonUI.CommonPoolableWidgetInterface"));
		return ptr;
	}


	void OnReleaseToPool();//Offset:Discovery.exe+0x250DBA0
	void OnAcquireFromPool();//Offset:Discovery.exe+0x1C8BD60
};


// Class CommonUI.CommonRichTextBlock
// 0x0040 (0x0880 - 0x0840)
class UCommonRichTextBlock : public URichTextBlock
{
public:
	enum class ERichTextInlineIconDisplayMode          InlineIconDisplayMode;                                    // 0x0840(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bTintInlineIcon;                                          // 0x0841(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0842(0x0006) MISSED OFFSET
	class UClass*                                      DefaultTextStyleOverrideClass;                            // 0x0848(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MobileTextBlockScale;                                     // 0x0850(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0854(0x0004) MISSED OFFSET
	class UClass*                                      ScrollStyle;                                              // 0x0858(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDisplayAllCaps;                                          // 0x0860(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1F];                                      // 0x0861(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class CommonUI.CommonRichTextBlock"));
		return ptr;
	}

};


// Class CommonUI.CommonRotator
// 0x0050 (0x10C0 - 0x1070)
class UCommonRotator : public UCommonButtonBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x1070(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnRotated;                                                // 0x1078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x18];                                      // 0x1088(0x0018) MISSED OFFSET
	class UCommonTextBlock*                            MyText;                                                   // 0x10A0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x18];                                      // 0x10A8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class CommonUI.CommonRotator"));
		return ptr;
	}


	void ShiftTextRight();//Offset:Discovery.exe+0x250E0C0
	void ShiftTextLeft();//Offset:Discovery.exe+0x250E0E0
	void SetSelectedItem(int InValue);//Offset:Discovery.exe+0x250E130
	void PopulateTextLabels(TArray<struct FText> Labels);//Offset:Discovery.exe+0x250E260
	struct FText GetSelectedText();//Offset:Discovery.exe+0x250E1D0
	int GetSelectedIndex();//Offset:Discovery.exe+0x250E100
	void BP_OnOptionsPopulated(int Count);//Offset:Discovery.exe+0x327F8B0
	void BP_OnOptionSelected(int Index);//Offset:Discovery.exe+0x327F8B0
};


// Class CommonUI.CommonTextStyle
// 0x0188 (0x01B0 - 0x0028)
class UCommonTextStyle : public UObject
{
public:
	struct FSlateFontInfo                              Font;                                                     // 0x0028(0x0058) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FLinearColor                                Color;                                                    // 0x0080(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUsesDropShadow;                                          // 0x0090(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0091(0x0007) MISSED OFFSET
	struct FVector2D                                   ShadowOffset;                                             // 0x0098(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                ShadowColor;                                              // 0x00A8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FMargin                                     Margin;                                                   // 0x00B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	struct FSlateBrush                                 StrikeBrush;                                              // 0x00D0(0x00D0) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	float                                              LineHeightPercentage;                                     // 0x01A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x01A4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class CommonUI.CommonTextStyle"));
		return ptr;
	}


	void GetStrikeBrush(struct FSlateBrush* OutStrikeBrush);//Offset:Discovery.exe+0x2511740
	void GetShadowOffset(struct FVector2D* OutShadowOffset);//Offset:Discovery.exe+0x25118D0
	void GetShadowColor(struct FLinearColor* OutColor);//Offset:Discovery.exe+0x2511830
	void GetMargin(struct FMargin* OutMargin);//Offset:Discovery.exe+0x25119A0
	float GetLineHeightPercentage();//Offset:Discovery.exe+0x2511970
	void GetFont(struct FSlateFontInfo* OutFont);//Offset:Discovery.exe+0x2511AF0
	void GetColor(struct FLinearColor* OutColor);//Offset:Discovery.exe+0x2511A50
};


// Class CommonUI.CommonTextScrollStyle
// 0x0018 (0x0040 - 0x0028)
class UCommonTextScrollStyle : public UObject
{
public:
	float                                              Speed;                                                    // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              StartDelay;                                               // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              EndDelay;                                                 // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FadeInDelay;                                              // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FadeOutDelay;                                             // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class CommonUI.CommonTextScrollStyle"));
		return ptr;
	}

};


// Class CommonUI.CommonTileView
// 0x0000 (0x0C00 - 0x0C00)
class UCommonTileView : public UTileView
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class CommonUI.CommonTileView"));
		return ptr;
	}

};


// Class CommonUI.CommonTreeView
// 0x0000 (0x0C40 - 0x0C40)
class UCommonTreeView : public UTreeView
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class CommonUI.CommonTreeView"));
		return ptr;
	}

};


// Class CommonUI.CommonUIActionRouterBase
// 0x00D8 (0x0108 - 0x0030)
class UCommonUIActionRouterBase : public ULocalPlayerSubsystem
{
public:
	unsigned char                                      UnknownData00[0xD8];                                      // 0x0030(0x00D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class CommonUI.CommonUIActionRouterBase"));
		return ptr;
	}

};


// Class CommonUI.CommonUIEditorSettings
// 0x0080 (0x00A8 - 0x0028)
class UCommonUIEditorSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) UNKNOWN PROPERTY: TemplateTextStyle
	unsigned char                                      UnknownData01[0x28];                                      // 0x0050(0x0028) UNKNOWN PROPERTY: TemplateButtonStyle
	unsigned char                                      UnknownData02[0x28];                                      // 0x0078(0x0028) UNKNOWN PROPERTY: TemplateBorderStyle
	unsigned char                                      UnknownData03[0x8];                                       // 0x00A0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class CommonUI.CommonUIEditorSettings"));
		return ptr;
	}

};


// Class CommonUI.CommonUIInputSettings
// 0x0050 (0x0078 - 0x0028)
class UCommonUIInputSettings : public UObject
{
public:
	bool                                               bLinkCursorToGamepadFocus;                                // 0x0028(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	int                                                UIActionProcessingPriority;                               // 0x002C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TArray<struct FUIInputAction>                      InputActions;                                             // 0x0030(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FUIInputAction>                      ActionOverrides;                                          // 0x0040(0x0010) (ZeroConstructor, Config)
	struct FCommonAnalogCursorSettings                 AnalogCursorSettings;                                     // 0x0050(0x0024) (Edit, Config)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0074(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class CommonUI.CommonUIInputSettings"));
		return ptr;
	}

};


// Class CommonUI.CommonUILibrary
// 0x0000 (0x0028 - 0x0028)
class UCommonUILibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class CommonUI.CommonUILibrary"));
		return ptr;
	}


	class UWidget* STATIC_FindParentWidgetOfType(class UWidget* StartingWidget, class UClass* Type);//Offset:Discovery.exe+0x2513030
};


// Class CommonUI.CommonUIRichTextData
// 0x0008 (0x0030 - 0x0028)
class UCommonUIRichTextData : public UObject
{
public:
	class UDataTable*                                  InlineIconSet;                                            // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class CommonUI.CommonUIRichTextData"));
		return ptr;
	}

};


// Class CommonUI.CommonUISettings
// 0x01A8 (0x01D0 - 0x0028)
class UCommonUISettings : public UObject
{
public:
	bool                                               bAutoLoadData;                                            // 0x0028(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x0029(0x0028) UNKNOWN PROPERTY: DefaultImageResourceObject
	unsigned char                                      UnknownData02[0x28];                                      // 0x0058(0x0028) UNKNOWN PROPERTY: DefaultThrobberMaterial
	unsigned char                                      UnknownData03[0x28];                                      // 0x0080(0x0028) UNKNOWN PROPERTY: DefaultRichTextDataClass
	TArray<struct FGameplayTag>                        PlatformTraits;                                           // 0x00A8(0x0010) (Edit, ZeroConstructor, Config)
	unsigned char                                      UnknownData04[0x28];                                      // 0x00B8(0x0028) MISSED OFFSET
	class UObject*                                     DefaultImageResourceObjectInstance;                       // 0x00E0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMaterialInterface*                          DefaultThrobberMaterialInstance;                          // 0x00E8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FSlateBrush                                 DefaultThrobberBrush;                                     // 0x00F0(0x00D0) (Transient)
	class UCommonUIRichTextData*                       RichTextDataInstance;                                     // 0x01C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x8];                                       // 0x01C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class CommonUI.CommonUISettings"));
		return ptr;
	}

};


// Class CommonUI.CommonUISubsystemBase
// 0x0010 (0x0040 - 0x0030)
class UCommonUISubsystemBase : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class CommonUI.CommonUISubsystemBase"));
		return ptr;
	}


	struct FSlateBrush GetInputActionButtonIcon(const struct FDataTableRowHandle& InputActionRowHandle, enum class ECommonInputType InputType, const struct FName& GamepadName);//Offset:Discovery.exe+0x2513600
};


// Class CommonUI.CommonUIVisibilitySubsystem
// 0x0058 (0x0088 - 0x0030)
class UCommonUIVisibilitySubsystem : public ULocalPlayerSubsystem
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0030(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class CommonUI.CommonUIVisibilitySubsystem"));
		return ptr;
	}

};


// Class CommonUI.CommonVideoPlayer
// 0x0158 (0x0280 - 0x0128)
class UCommonVideoPlayer : public UWidget
{
public:
	class UMediaSource*                                Video;                                                    // 0x0128(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMediaPlayer*                                MediaPlayer;                                              // 0x0130(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMediaTexture*                               MediaTexture;                                             // 0x0138(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMaterial*                                   VideoMaterial;                                            // 0x0140(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMediaSoundComponent*                        SoundComponent;                                           // 0x0148(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FSlateBrush                                 VideoBrush;                                               // 0x0150(0x00D0) (Transient)
	unsigned char                                      UnknownData00[0x60];                                      // 0x0220(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class CommonUI.CommonVideoPlayer"));
		return ptr;
	}

};


// Class CommonUI.CommonVisibilitySwitcher
// 0x0028 (0x0178 - 0x0150)
class UCommonVisibilitySwitcher : public UOverlay
{
public:
	enum class ESlateVisibility                        ShownVisibility;                                          // 0x0150(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0151(0x0003) MISSED OFFSET
	int                                                ActiveWidgetIndex;                                        // 0x0154(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoActivateSlot;                                        // 0x0158(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bActivateFirstSlotOnAdding;                               // 0x0159(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1E];                                      // 0x015A(0x001E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class CommonUI.CommonVisibilitySwitcher"));
		return ptr;
	}


	void SetActiveWidgetIndex(int Index);//Offset:Discovery.exe+0x2515BA0
	void SetActiveWidget(class UWidget* Widget);//Offset:Discovery.exe+0x2515AA0
	void IncrementActiveWidgetIndex(bool bAllowWrapping);//Offset:Discovery.exe+0x2515A00
	int GetActiveWidgetIndex();//Offset:Discovery.exe+0x2515B70
	class UWidget* GetActiveWidget();//Offset:Discovery.exe+0x2515B40
	void DecrementActiveWidgetIndex(bool bAllowWrapping);//Offset:Discovery.exe+0x2515960
	void DeactivateVisibleSlot();//Offset:Discovery.exe+0x2515920
	void ActivateVisibleSlot();//Offset:Discovery.exe+0x2515940
};


// Class CommonUI.CommonVisibilitySwitcherSlot
// 0x0010 (0x0068 - 0x0058)
class UCommonVisibilitySwitcherSlot : public UOverlaySlot
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0058(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class CommonUI.CommonVisibilitySwitcherSlot"));
		return ptr;
	}

};


// Class CommonUI.UCommonVisibilityWidgetBase
// 0x0050 (0x0360 - 0x0310)
class UUCommonVisibilityWidgetBase : public UCommonBorder
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0310(0x0048) MISSED OFFSET
	bool                                               bShowForGamepad;                                          // 0x0358(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowForMouseAndKeyboard;                                 // 0x0359(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowForTouch;                                            // 0x035A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	enum class ESlateVisibility                        VisibleType;                                              // 0x035B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	enum class ESlateVisibility                        HiddenType;                                               // 0x035C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x035D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class CommonUI.UCommonVisibilityWidgetBase"));
		return ptr;
	}


	TArray<struct FName> STATIC_GetRegisteredPlatforms();//Offset:Discovery.exe+0x25163D0
};


// Class CommonUI.CommonVisualAttachment
// 0x0020 (0x0198 - 0x0178)
class UCommonVisualAttachment : public USizeBox
{
public:
	struct FVector2D                                   ContentAnchor;                                            // 0x0178(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0188(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class CommonUI.CommonVisualAttachment"));
		return ptr;
	}

};


// Class CommonUI.CommonWidgetCarousel
// 0x0048 (0x0188 - 0x0140)
class UCommonWidgetCarousel : public UPanelWidget
{
public:
	int                                                ActiveWidgetIndex;                                        // 0x0140(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0144(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnCurrentPageIndexChanged;                                // 0x0148(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x30];                                      // 0x0158(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class CommonUI.CommonWidgetCarousel"));
		return ptr;
	}


	void SetActiveWidgetIndex(int Index);//Offset:Discovery.exe+0x2516A70
	void SetActiveWidget(class UWidget* Widget);//Offset:Discovery.exe+0x1DB91F0
	void PreviousPage();//Offset:Discovery.exe+0x25168D0
	void NextPage();//Offset:Discovery.exe+0x25168F0
	class UWidget* GetWidgetAtIndex(int Index);//Offset:Discovery.exe+0x25169D0
	int GetActiveWidgetIndex();//Offset:Discovery.exe+0x2516B10
	void EndAutoScrolling();//Offset:Discovery.exe+0x2516910
	void BeginAutoScrolling(float ScrollInterval);//Offset:Discovery.exe+0x2516930
};


// Class CommonUI.CommonWidgetCarouselNavBar
// 0x0048 (0x0170 - 0x0128)
class UCommonWidgetCarouselNavBar : public UWidget
{
public:
	class UClass*                                      ButtonWidgetType;                                         // 0x0128(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     ButtonPadding;                                            // 0x0130(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0140(0x0010) MISSED OFFSET
	class UCommonWidgetCarousel*                       LinkedCarousel;                                           // 0x0150(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCommonButtonGroupBase*                      ButtonGroup;                                              // 0x0158(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UCommonButtonBase*>                   Buttons;                                                  // 0x0160(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class CommonUI.CommonWidgetCarouselNavBar"));
		return ptr;
	}


	void SetLinkedCarousel(class UCommonWidgetCarousel* CommonCarousel);//Offset:Discovery.exe+0x2517290
	void HandlePageChanged(class UCommonWidgetCarousel* CommonCarousel, int PageIndex);//Offset:Discovery.exe+0x25171B0
	void HandleButtonClicked(class UCommonButtonBase* AssociatedButton, int ButtonIndex);//Offset:Discovery.exe+0x25170D0
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
