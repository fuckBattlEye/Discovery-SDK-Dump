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

// Class EmbarkUI.AngularProgressBarBase
// 0x0000 (0x0290 - 0x0290)
class UAngularProgressBarBase : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUI.AngularProgressBarBase"));
		return ptr;
	}


	void OnSynchronizeProperties();//Offset:Discovery.exe+0x30700
};


// Class EmbarkUI.EmbarkButtonBaseOld
// 0x0030 (0x0600 - 0x05D0)
class UEmbarkButtonBaseOld : public UButton
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x05D0(0x0008) MISSED OFFSET
	struct FSlateSound                                 PressedSound;                                             // 0x05D8(0x0018)
	unsigned char                                      UnknownData01[0x10];                                      // 0x05F0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUI.EmbarkButtonBaseOld"));
		return ptr;
	}


	void SimulateMouseLeave(const struct FPointerEvent& MouseEvent);//Offset:Discovery.exe+0x1AFFFF0
	void SimulateMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);//Offset:Discovery.exe+0x1B00150
	void SimulateMouseButtonUp();//Offset:Discovery.exe+0x1AFFFB0
	void SimulateMouseButtonDown();//Offset:Discovery.exe+0x1AFFFD0
	void SimulateClick();//Offset:Discovery.exe+0x155C060
	void SetPressedSound(const struct FSlateSound& InPressedSound);//Offset:Discovery.exe+0x1AFFF00
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);//Offset:Discovery.exe+0x1AFFBC0
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);//Offset:Discovery.exe+0x1AFFD60
	void OnConstruct();//Offset:Discovery.exe+0x1B00320
};


// Class EmbarkUI.EmbarkButtonInternalBase
// 0x0040 (0x0610 - 0x05D0)
class UEmbarkButtonInternalBase : public UButton
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x05D0(0x0028) MISSED OFFSET
	bool                                               bButtonEnabled;                                           // 0x05F8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x17];                                      // 0x05F9(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUI.EmbarkButtonInternalBase"));
		return ptr;
	}

};


// Class EmbarkUI.EmbarkButtonBase
// 0x0860 (0x0AF0 - 0x0290)
class UEmbarkButtonBase : public UUserWidget
{
public:
	TEnumAsByte<EButtonClickMethod>                    ClickMethod;                                              // 0x0290(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EButtonTouchMethod>                    TouchMethod;                                              // 0x0291(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EButtonPressMethod>                    PressMethod;                                              // 0x0292(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x15];                                      // 0x0293(0x0015) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnEmbarkButtonClicked;                                    // 0x02A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEmbarkButtonDoubleClicked;                              // 0x02B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEmbarkButtonHovered;                                    // 0x02C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEmbarkButtonUnhovered;                                  // 0x02D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEmbarkButtonStateChanged;                               // 0x02E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x8];                                       // 0x02F8(0x0008) MISSED OFFSET
	struct FButtonStyle                                NormalStyle;                                              // 0x0300(0x03F0)
	struct FButtonStyle                                DisabledStyle;                                            // 0x06F0(0x03F0)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0AE0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUI.EmbarkButtonBase"));
		return ptr;
	}


	void UpdateCurrentButtonStyle();//Offset:Discovery.exe+0x1B01010
	struct FButtonStyle TempGetNormalButtonStyle();//Offset:Discovery.exe+0x1B00C70
	void SetTouchMethod(TEnumAsByte<EButtonTouchMethod> InTouchMethod);//Offset:Discovery.exe+0x1B011F0
	void SetPressMethod(TEnumAsByte<EButtonPressMethod> InPressMethod);//Offset:Discovery.exe+0x1B01160
	void SetIsFocusable(bool bInIsFocusable);//Offset:Discovery.exe+0x1B01090
	void SetClickMethod(TEnumAsByte<EButtonClickMethod> InClickMethod);//Offset:Discovery.exe+0x1B01280
	void OnUnhovered();//Offset:Discovery.exe+0x327F8B0
	void OnReleased();//Offset:Discovery.exe+0x327F8B0
	void OnPressed();//Offset:Discovery.exe+0x327F8B0
	void OnHovered();//Offset:Discovery.exe+0x327F8B0
	void OnEnabledStateChanged(bool bInIsEnabled);//Offset:Discovery.exe+0x327F8B0
	void OnDoubleClicked();//Offset:Discovery.exe+0x327F8B0
	void OnClicked();//Offset:Discovery.exe+0x327F8B0
	void OnButtonStateChanged(enum class EEmbarkButtonState InButtonState);//Offset:Discovery.exe+0x327F8B0
	bool IsPressed();//Offset:Discovery.exe+0x1B01310
	bool IsInteractionEnabled();//Offset:Discovery.exe+0x1B01130
	void HandleButtonUnhovered();//Offset:Discovery.exe+0x1B00F80
	void HandleButtonReleased();//Offset:Discovery.exe+0x1B00F40
	void HandleButtonPressed();//Offset:Discovery.exe+0x1B00F60
	void HandleButtonHovered();//Offset:Discovery.exe+0x1B00FA0
	void HandleButtonClicked();//Offset:Discovery.exe+0x1B00FC0
	bool GetIsFocusable();//Offset:Discovery.exe+0x1B01060
	bool GetIsButtonEnabled();//Offset:Discovery.exe+0x1B01030
	struct FButtonStyle GetDisabledButtonStyle();//Offset:Discovery.exe+0x1B00ED0
	struct FButtonStyle GetCurrentButtonStyle();//Offset:Discovery.exe+0x1B00E60
	enum class EEmbarkButtonState GetButtonState();//Offset:Discovery.exe+0x1B00FE0
	void BuildStyles(class UEmbarkButtonStyleBase* InStyle);//Offset:Discovery.exe+0x327F8B0
	void BuildSoundStyles(class UEmbarkButtonSoundStyleBase* InStyle);//Offset:Discovery.exe+0x327F8B0
};


// Class EmbarkUI.EmbarkButtonSoundStyleBase
// 0x0070 (0x0098 - 0x0028)
class UEmbarkButtonSoundStyleBase : public UObject
{
public:
	struct FSlateSound                                 PressedSlateSound;                                        // 0x0028(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FSlateSound                                 HoveredSlateSound;                                        // 0x0040(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FEmbarkOptionalSlateSound                   DisabledPressedSlateSound;                                // 0x0058(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FEmbarkOptionalSlateSound                   DisabledHoveredSlateSound;                                // 0x0078(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUI.EmbarkButtonSoundStyleBase"));
		return ptr;
	}


	class UEmbarkButtonSoundStyleBase* STATIC_GetButtonSoundStyle(class UClass* InButtonSoundStyle);//Offset:Discovery.exe+0x1B02830
};


// Class EmbarkUI.EmbarkButtonStyleBase
// 0x0000 (0x0028 - 0x0028)
class UEmbarkButtonStyleBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUI.EmbarkButtonStyleBase"));
		return ptr;
	}


	struct FSlateBrush GetNormalPressedBrush();//Offset:Discovery.exe+0x1B02C10
	struct FSlateBrush GetNormalHighlightBrush();//Offset:Discovery.exe+0x1B02D20
	struct FSlateBrush GetNormalBaseBrush();//Offset:Discovery.exe+0x1B02E30
	struct FSlateBrush GetDisabledBrush();//Offset:Discovery.exe+0x1B02B00
	class UEmbarkButtonStyleBase* STATIC_GetButtonStyle(class UClass* InButtonStyle);//Offset:Discovery.exe+0x1B02F40
};


// Class EmbarkUI.EmbarkCommonActionWidget
// 0x01B0 (0x05E0 - 0x0430)
class UEmbarkCommonActionWidget : public UCommonActionWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0430(0x0008) MISSED OFFSET
	struct FSlateFontInfo                              InputActionTextFont;                                      // 0x0438(0x0058) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FSlateColor                                 InputActionTextColor;                                     // 0x0490(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly)
	enum class ETextTransformPolicy                    InputActionTextTransformPolicy;                           // 0x04A4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x04A5(0x0003) MISSED OFFSET
	struct FMargin                                     InputActionTextPadding;                                   // 0x04A8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     InputActionIconPadding;                                   // 0x04B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x04C8(0x0008) MISSED OFFSET
	struct FSlateBrush                                 InputActionTextRim;                                       // 0x04D0(0x00D0) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FSlateColor                                 InputActionIconColor;                                     // 0x05A0(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData03[0x2C];                                      // 0x05B4(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUI.EmbarkCommonActionWidget"));
		return ptr;
	}


	void SetInputActionColor(const struct FLinearColor& Color, const struct FLinearColor& TextColor);//Offset:Discovery.exe+0x1B03820
};


// Class EmbarkUI.EmbarkCommonActivatableWidgetBase
// 0x0008 (0x0380 - 0x0378)
class UEmbarkCommonActivatableWidgetBase : public UCommonActivatableWidget
{
public:
	enum class EEmbarkWidgetInputMode                  InputConfig;                                              // 0x0378(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	enum class EMouseCaptureMode                       GameMouseCaptureMode;                                     // 0x0379(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x037A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUI.EmbarkCommonActivatableWidgetBase"));
		return ptr;
	}


	void RequestFocus();//Offset:Discovery.exe+0x1B03D20
	void HandleBackAction();//Offset:Discovery.exe+0x1B03D00
};


// Class EmbarkUI.EmbarkCommonActivatableWidgetStack
// 0x0000 (0x0258 - 0x0258)
class UEmbarkCommonActivatableWidgetStack : public UCommonActivatableWidgetStack
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUI.EmbarkCommonActivatableWidgetStack"));
		return ptr;
	}


	TArray<class UCommonActivatableWidget*> GetAllWidgets();//Offset:Discovery.exe+0x1B04140
};


// Class EmbarkUI.EmbarkCommonActivatableWidgetQueue
// 0x0000 (0x0248 - 0x0248)
class UEmbarkCommonActivatableWidgetQueue : public UCommonActivatableWidgetQueue
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUI.EmbarkCommonActivatableWidgetQueue"));
		return ptr;
	}

};


// Class EmbarkUI.EmbarkCommonActivatableWidgetSwitcher
// 0x0000 (0x01B0 - 0x01B0)
class UEmbarkCommonActivatableWidgetSwitcher : public UCommonActivatableWidgetSwitcher
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUI.EmbarkCommonActivatableWidgetSwitcher"));
		return ptr;
	}

};


// Class EmbarkUI.EmbarkCommonBoundActionBar
// 0x0000 (0x0218 - 0x0218)
class UEmbarkCommonBoundActionBar : public UCommonBoundActionBar
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUI.EmbarkCommonBoundActionBar"));
		return ptr;
	}

};


// Class EmbarkUI.EmbarkCommonButtonBase
// 0x0000 (0x1070 - 0x1070)
class UEmbarkCommonButtonBase : public UCommonButtonBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUI.EmbarkCommonButtonBase"));
		return ptr;
	}


	void SimulateClick();//Offset:Discovery.exe+0x155C060
	void OnEmbarkButtonReleased();//Offset:Discovery.exe+0x327F8B0
	void OnEmbarkButtonPressed();//Offset:Discovery.exe+0x327F8B0
};


// Class EmbarkUI.EmbarkCommonTabListWidgetBase
// 0x0010 (0x0398 - 0x0388)
class UEmbarkCommonTabListWidgetBase : public UCommonTabListWidgetBase
{
public:
	TArray<struct FEmbarkTabDescriptor>                RegisteredStaticTabs;                                     // 0x0388(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUI.EmbarkCommonTabListWidgetBase"));
		return ptr;
	}


	void SetupTabs();//Offset:Discovery.exe+0x1B04F70
	bool RegisterDynamicTab(const struct FEmbarkTabDescriptor& TabDescriptor);//Offset:Discovery.exe+0x1B04D20
	void HandleTabContentCreation(const struct FName& TabNameID, class UCommonUserWidget* TabWidget);//Offset:Discovery.exe+0x1B04C00
	bool GetRegisteredStaticTab(const struct FName& TabNameID, struct FEmbarkTabDescriptor* OutTabInfo);//Offset:Discovery.exe+0x1B04E20
	class UCommonUserWidget* GetActiveTabContent();//Offset:Discovery.exe+0x1B04CF0
};


// Class EmbarkUI.EmbarkImageBase
// 0x0000 (0x0280 - 0x0280)
class UEmbarkImageBase : public UImage
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUI.EmbarkImageBase"));
		return ptr;
	}


	void OnConstruct();//Offset:Discovery.exe+0x1B054E0
};


// Class EmbarkUI.EmbarkInputKeySelectorBase
// 0x0030 (0x09A0 - 0x0970)
class UEmbarkInputKeySelectorBase : public UInputKeySelector
{
public:
	struct FText                                       KeySelection;                                             // 0x0970(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       NoKeySpecified;                                           // 0x0988(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUI.EmbarkInputKeySelectorBase"));
		return ptr;
	}


	void OnSynchronizeProperties();//Offset:Discovery.exe+0x1B057D0
	void OnConstruct();//Offset:Discovery.exe+0x1B057F0
};


// Class EmbarkUI.EmbarkListView
// 0x0010 (0x0BF0 - 0x0BE0)
class UEmbarkListView : public UListView
{
public:
	bool                                               bPartialClippingEnabled;                                  // 0x0BE0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0BE1(0x0003) MISSED OFFSET
	float                                              PartialClippingMargin;                                    // 0x0BE4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0BE8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUI.EmbarkListView"));
		return ptr;
	}


	void SetEntrySpacing(float InEntrySpacing);//Offset:Discovery.exe+0x1B05B90
};


// Class EmbarkUI.EmbarkLoadingScreenSubsystem
// 0x0058 (0x0088 - 0x0030)
class UEmbarkLoadingScreenSubsystem : public UScriptGameInstanceSubsystem
{
public:
	struct FSoftObjectPath                             UILoadingScreenConfigurationRef;                          // 0x0030(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0048(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUI.EmbarkLoadingScreenSubsystem"));
		return ptr;
	}


	void ShowWidgetLoadingScreen(class UUserWidget* Widget);//Offset:Discovery.exe+0x1B060F0
	void ShowLoadingScreen(const struct FString& InMapName);//Offset:Discovery.exe+0x1B06190
	void SetNextLoadingScreen(const struct FName& Tag);//Offset:Discovery.exe+0x1B05EE0
	void SetCanInterruptLoadingScreen(bool bInCanInterrupt);//Offset:Discovery.exe+0x1B05F90
	void SetAutoStopLoadingScreen(bool bInAutoStop);//Offset:Discovery.exe+0x1B06030
	void HideWidgetLoadingScreen();//Offset:Discovery.exe+0x1B060D0
	void EndLoadingScreen(class UWorld* InLoadedWorld);//Offset:Discovery.exe+0x1B06240
	void BeginLoadingScreen(const struct FString& InMapName);//Offset:Discovery.exe+0x11BE180
};


// Class EmbarkUI.IUILoadingScreenBase
// 0x0028 (0x0050 - 0x0028)
class UIUILoadingScreenBase : public UObject
{
public:
	struct FName                                       Tag;                                                      // 0x0028(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	TArray<struct FString>                             MoviePaths;                                               // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TEnumAsByte<EMoviePlaybackType>                    PlaybackType;                                             // 0x0040(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowEngineTick;                                         // 0x0041(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0042(0x0002) MISSED OFFSET
	float                                              MinimumLoadingScreenDisplayTime;                          // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideStopConfig;                                      // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoCompleteWhenLoadingCompletes;                        // 0x0049(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bWaitForManualStop;                                       // 0x004A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x004B(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUI.IUILoadingScreenBase"));
		return ptr;
	}

};


// Class EmbarkUI.UIEmptyLoadingScreen
// 0x0020 (0x0070 - 0x0050)
class UUIEmptyLoadingScreen : public UIUILoadingScreenBase
{
public:
	struct FSoftObjectPath                             SpinnerRef;                                               // 0x0050(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bShowBlackBackground;                                     // 0x0068(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0069(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUI.UIEmptyLoadingScreen"));
		return ptr;
	}

};


// Class EmbarkUI.UIConceptArtLoadingScreen
// 0x0190 (0x01E0 - 0x0050)
class UUIConceptArtLoadingScreen : public UIUILoadingScreenBase
{
public:
	TArray<struct FUILoadingScreenConfiguration>       ConfigurationList;                                        // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	enum class EUIConceptArtLoadingScreenSelectionStrategy SelectionStrategy;                                        // 0x0060(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	int                                                SelectionIndex;                                           // 0x0064(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FSoftObjectPath                             SpinnerRef;                                               // 0x0068(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FSlateFontInfo                              HeaderFont;                                               // 0x0080(0x0058) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FSlateFontInfo                              SecondHeaderFont;                                         // 0x00D8(0x0058) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FSlateFontInfo                              SubtitleFont;                                             // 0x0130(0x0058) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FSlateFontInfo                              SecondSubtitleFont;                                       // 0x0188(0x0058) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUI.UIConceptArtLoadingScreen"));
		return ptr;
	}

};


// Class EmbarkUI.UILoadingScreenConfigurationDataAsset
// 0x0050 (0x0080 - 0x0030)
class UUILoadingScreenConfigurationDataAsset : public UPrimaryDataAsset
{
public:
	TMap<struct FName, class UIUILoadingScreenBase*>   LoadingScreens;                                           // 0x0030(0x0050) (Edit, BlueprintVisible, ExportObject)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUI.UILoadingScreenConfigurationDataAsset"));
		return ptr;
	}

};


// Class EmbarkUI.EmbarkMaterialBox
// 0x0038 (0x0178 - 0x0140)
class UEmbarkMaterialBox : public UContentWidget
{
public:
	bool                                               bRenderToTexture;                                         // 0x0140(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	enum class EMaterialBoxScaling                     Scaling;                                                  // 0x0141(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0142(0x0002) MISSED OFFSET
	float                                              OversizeScaling;                                          // 0x0144(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          EffectMaterial;                                           // 0x0148(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInterface*>                  AdditionalMaterials;                                      // 0x0150(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FName                                       TextureParameter;                                         // 0x0160(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0168(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUI.EmbarkMaterialBox"));
		return ptr;
	}


	void SetTextureParameter(const struct FName& TextureParameter);//Offset:Discovery.exe+0x1B09710
	void SetRenderToTexture(bool bInRenderToTexture);//Offset:Discovery.exe+0x1B09670
	void SetEffectMaterial(class UMaterialInterface* EffectMaterial, unsigned char Index);//Offset:Discovery.exe+0x1B097B0
	class UMaterialInstanceDynamic* GetEffectMaterial(unsigned char Index);//Offset:Discovery.exe+0x1B09890
};


// Class EmbarkUI.EmbarkUserWidget
// 0x0000 (0x02B8 - 0x02B8)
class UEmbarkUserWidget : public UCommonUserWidget
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUI.EmbarkUserWidget"));
		return ptr;
	}


	void RenameInputComponent(const struct FString& NewName);//Offset:Discovery.exe+0x1B0D520
	class UWidget* GetCurrentFocus();//Offset:Discovery.exe+0x327F8B0
	class UWidget* BP_GetDesiredFocusTarget();//Offset:Discovery.exe+0x327F8B0
};


// Class EmbarkUI.EmbarkModalWidget
// 0x0050 (0x0308 - 0x02B8)
class UEmbarkModalWidget : public UEmbarkUserWidget
{
public:
	struct FScriptDelegate                             UpNavigation;                                             // 0x02B8(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             DownNavigation;                                           // 0x02C8(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             RightNavigation;                                          // 0x02D8(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             LeftNavigation;                                           // 0x02E8(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData00[0x10];                                      // 0x02F8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUI.EmbarkModalWidget"));
		return ptr;
	}


	class UWidget* NavigateUp(enum class EUINavigation InNavigation);//Offset:Discovery.exe+0x1B09F70
	class UWidget* NavigateRight(enum class EUINavigation InNavigation);//Offset:Discovery.exe+0x1B09E30
	class UWidget* NavigateLeft(enum class EUINavigation InNavigation);//Offset:Discovery.exe+0x1B09D90
	class UWidget* NavigateDown(enum class EUINavigation InNavigation);//Offset:Discovery.exe+0x1B09ED0
	void MakeInputActionBlocking();//Offset:Discovery.exe+0x1B09D70
};


// Class EmbarkUI.EmbarkOverlayingContainer
// 0x0020 (0x0160 - 0x0140)
class UEmbarkOverlayingContainer : public UContentWidget
{
public:
	int                                                LayerOffset;                                              // 0x0140(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bValidateLayerOffsetAgainstOwnChildren;                   // 0x0144(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1B];                                      // 0x0145(0x001B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUI.EmbarkOverlayingContainer"));
		return ptr;
	}


	void SetOverlayingState(bool bInIsHovered);//Offset:Discovery.exe+0x1B0A640
	bool IsOverlaying();//Offset:Discovery.exe+0x1B0A610
};


// Class EmbarkUI.EmbarkRichTextBlockColorDecorator
// 0x0000 (0x0028 - 0x0028)
class UEmbarkRichTextBlockColorDecorator : public URichTextBlockDecorator
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUI.EmbarkRichTextBlockColorDecorator"));
		return ptr;
	}


	struct FLinearColor GetColorForId(const struct FString& ColorKey);//Offset:Discovery.exe+0x327F8B0
};


// Class EmbarkUI.EmbarkSavingIndicatorSubsystem
// 0x0018 (0x0048 - 0x0030)
class UEmbarkSavingIndicatorSubsystem : public UScriptGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUI.EmbarkSavingIndicatorSubsystem"));
		return ptr;
	}


	void EndSave();//Offset:Discovery.exe+0x11B97D0
	void BeginSave();//Offset:Discovery.exe+0x11BA100
};


// Class EmbarkUI.EmbarkScrollBoxBase
// 0x0000 (0x0C80 - 0x0C80)
class UEmbarkScrollBoxBase : public UScrollBox
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUI.EmbarkScrollBoxBase"));
		return ptr;
	}


	void UpdateStyle(const struct FSlateBrush& BottomShadowBrush, const struct FSlateBrush& LeftShadowBrush, const struct FSlateBrush& RightShadowBrush, const struct FSlateBrush& TopShadowBrush);//Offset:Discovery.exe+0x1B0AF60
	void UpdateScrollbarStyle(const struct FSlateBrush& ForegroundBrush, const struct FSlateBrush& BackgroundBrush, int Thickness);//Offset:Discovery.exe+0x1B0B230
	void SetAllowRightClickDragScrolling(bool bInAllowRightClickDragScrolling);//Offset:Discovery.exe+0x1B0B430
	void OnSynchronizeProperties();//Offset:Discovery.exe+0x1B00320
	void OnConstruct();//Offset:Discovery.exe+0x1B0B410
};


// Class EmbarkUI.EmbarkSubtitleWidget
// 0x0018 (0x02D0 - 0x02B8)
class UEmbarkSubtitleWidget : public UEmbarkUserWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x02B8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUI.EmbarkSubtitleWidget"));
		return ptr;
	}


	void OnSetSubtitleTextChanged(const struct FText& InSubtitleText);//Offset:Discovery.exe+0x327F8B0
	void OnSetSubtitleText(const struct FText& InSubtitleText);//Offset:Discovery.exe+0x1B0B9F0
};


// Class EmbarkUI.EmbarkText3DActor
// 0x0018 (0x02E0 - 0x02C8)
class AEmbarkText3DActor : public AActor
{
public:
	struct FScriptMulticastDelegate                    OnTextGeneratedDelegate;                                  // 0x02C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class USceneComponent*                             Text3DComponent;                                          // 0x02D8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUI.EmbarkText3DActor"));
		return ptr;
	}


	void SetText(const struct FText& Text);//Offset:Discovery.exe+0x1B0BF70
	void OnTextGenerated();//Offset:Discovery.exe+0x1B0BED0
	struct FText GetText();//Offset:Discovery.exe+0x1B0BEF0
};


// Class EmbarkUI.EmbarkTextBlockBase
// 0x0030 (0x0340 - 0x0310)
class UEmbarkTextBlockBase : public UTextBlock
{
public:
	bool                                               bEnableTextScrolling;                                     // 0x0310(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0311(0x0003) MISSED OFFSET
	struct FScrollParameters                           ScrollParameters;                                         // 0x0314(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0328(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUI.EmbarkTextBlockBase"));
		return ptr;
	}


	void SetLineHeight(float InLineHeightPercentage);//Offset:Discovery.exe+0x1B0C5C0
	void SetColorBinding();//Offset:Discovery.exe+0x1B0C5A0
	void SetColorAndOpacityDelegate(const struct FScriptDelegate& InDelegate);//Offset:Discovery.exe+0x1B0C4E0
	void OnSynchronizeProperties();//Offset:Discovery.exe+0x1B00320
	void OnConstruct();//Offset:Discovery.exe+0x1B0B410
	struct FSlateColor GetNativeColor();//Offset:Discovery.exe+0x1B0C480
};


// Class EmbarkUI.EmbarkTileView
// 0x0010 (0x0C10 - 0x0C00)
class UEmbarkTileView : public UTileView
{
public:
	bool                                               bPartialClippingEnabled;                                  // 0x0C00(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0C01(0x0003) MISSED OFFSET
	float                                              PartialClippingMargin;                                    // 0x0C04(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0C08(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUI.EmbarkTileView"));
		return ptr;
	}

};


// Class EmbarkUI.EmbarkUISettings
// 0x0048 (0x0080 - 0x0038)
class UEmbarkUISettings : public UDeveloperSettings
{
public:
	struct FSoftObjectPath                             DefaultLoadingScreenBackgroundImage;                      // 0x0038(0x0018) (Edit, ZeroConstructor, Config)
	struct FSoftObjectPath                             DefaultLoadingScreenSpinner;                              // 0x0050(0x0018) (Edit, ZeroConstructor, Config)
	struct FSoftObjectPath                             DefaultLoadingScreenGradient;                             // 0x0068(0x0018) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUI.EmbarkUISettings"));
		return ptr;
	}

};


// Class EmbarkUI.EmbarkUIStyleDataAsset
// 0x0000 (0x0030 - 0x0030)
class UEmbarkUIStyleDataAsset : public UDataAsset
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUI.EmbarkUIStyleDataAsset"));
		return ptr;
	}

};


// Class EmbarkUI.EmbarkUIStyleColors
// 0x0000 (0x0030 - 0x0030)
class UEmbarkUIStyleColors : public UEmbarkUIStyleDataAsset
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUI.EmbarkUIStyleColors"));
		return ptr;
	}

};


// Class EmbarkUI.EmbarkUIStyleOpacity
// 0x0000 (0x0030 - 0x0030)
class UEmbarkUIStyleOpacity : public UEmbarkUIStyleDataAsset
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUI.EmbarkUIStyleOpacity"));
		return ptr;
	}

};


// Class EmbarkUI.EmbarkUIStyleTextStyle
// 0x0000 (0x0030 - 0x0030)
class UEmbarkUIStyleTextStyle : public UEmbarkUIStyleDataAsset
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUI.EmbarkUIStyleTextStyle"));
		return ptr;
	}

};


// Class EmbarkUI.EmbarkViewData
// 0x0150 (0x0178 - 0x0028)
class UEmbarkViewData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x140];                                     // 0x0028(0x0140) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnViewDataChanged;                                        // 0x0168(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUI.EmbarkViewData"));
		return ptr;
	}


	void SetTextProperty(const struct FName& PropertyName, const struct FText& Value);//Offset:Discovery.exe+0x1B0D960
	void SetStringProperty(const struct FName& PropertyName, const struct FString& Value);//Offset:Discovery.exe+0x1B0D850
	void SetIntProperty(const struct FName& PropertyName, int Value);//Offset:Discovery.exe+0x1B0DCD0
	void SetFloatProperty(const struct FName& PropertyName, float Value);//Offset:Discovery.exe+0x1B0DAA0
	void RemoveTextUFunction(const struct FName& PropertyName, class UObject* Object);//Offset:Discovery.exe+0x1B0E0D0
	void RemoveStringUFunction(const struct FName& PropertyName, class UObject* Object);//Offset:Discovery.exe+0x1B0DEE0
	void RemoveIntUFunction(const struct FName& PropertyName, class UObject* Object);//Offset:Discovery.exe+0x1B0E4A0
	void RemoveFloatUFunction(const struct FName& PropertyName, class UObject* Object);//Offset:Discovery.exe+0x1B0E2C0
	void OnViewDataChangedSignature__DelegateSignature();//Offset:Discovery.exe+0x327F8B0
	void AddTextUFunction(const struct FName& PropertyName, class UObject* Object, const struct FName& FunctionName);//Offset:Discovery.exe+0x1B0E8E0
	void AddStringUFunction(const struct FName& PropertyName, class UObject* Object, const struct FName& FunctionName);//Offset:Discovery.exe+0x1B0E680
	void AddIntUFunction(const struct FName& PropertyName, class UObject* Object, const struct FName& FunctionName);//Offset:Discovery.exe+0x1B0ED90
	void AddFloatUFunction(const struct FName& PropertyName, class UObject* Object, const struct FName& FunctionName);//Offset:Discovery.exe+0x1B0EB40
};


// Class EmbarkUI.IEmbarkViewDataSubsystem
// 0x0140 (0x0170 - 0x0030)
class UIEmbarkViewDataSubsystem : public UScriptGameInstanceSubsystem
{
public:
	TMap<int, class UEmbarkViewData*>                  StaticViewData;                                           // 0x0030(0x0050)
	TMap<int, class UEmbarkViewData*>                  FrontendViewData;                                         // 0x0080(0x0050)
	TMap<int, class UEmbarkViewData*>                  LobbyViewData;                                            // 0x00D0(0x0050)
	TMap<int, class UEmbarkViewData*>                  IngameViewData;                                           // 0x0120(0x0050)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUI.IEmbarkViewDataSubsystem"));
		return ptr;
	}


	void SetViewDataTextProperty(TEnumAsByte<EUIDataContext> Context, int ID, const struct FName& PropertyName, const struct FText& Value);//Offset:Discovery.exe+0x1B100A0
	void SetViewDataStringProperty(TEnumAsByte<EUIDataContext> Context, int ID, const struct FName& PropertyName, const struct FString& Value);//Offset:Discovery.exe+0x1B0FF00
	void SetViewDataIntProperty(TEnumAsByte<EUIDataContext> Context, int ID, const struct FName& PropertyName, int Value);//Offset:Discovery.exe+0x1B10400
	void SetViewDataFloatProperty(TEnumAsByte<EUIDataContext> Context, int ID, const struct FName& PropertyName, float Value);//Offset:Discovery.exe+0x1B10270
	void RemoveViewData(TEnumAsByte<EUIDataContext> Context, int ID);//Offset:Discovery.exe+0x1B10620
	bool GetViewDataTextProperty(TEnumAsByte<EUIDataContext> Context, int ID, const struct FName& PropertyName, struct FText* OutValue);//Offset:Discovery.exe+0x1B0F9E0
	bool GetViewDataStringProperty(TEnumAsByte<EUIDataContext> Context, int ID, const struct FName& PropertyName, struct FString* OutValue);//Offset:Discovery.exe+0x1B0F830
	bool GetViewDataIntProperty(TEnumAsByte<EUIDataContext> Context, int ID, const struct FName& PropertyName, int* OutValue);//Offset:Discovery.exe+0x1B0FD60
	bool GetViewDataFloatProperty(TEnumAsByte<EUIDataContext> Context, int ID, const struct FName& PropertyName, float* OutValue);//Offset:Discovery.exe+0x1B0FBC0
	bool GetViewData(TEnumAsByte<EUIDataContext> Context, int ID, class UEmbarkViewData** OutViewData);//Offset:Discovery.exe+0x1B10700
	class UEmbarkViewData* CreateViewData(TEnumAsByte<EUIDataContext> Context, int ID, class UClass* ViewDataClass);//Offset:Discovery.exe+0x1B10840
	void ClearContext(TEnumAsByte<EUIDataContext> Context);//Offset:Discovery.exe+0x1B10590
};


// Class EmbarkUI.EmbarkWebBrowser
// 0x0000 (0x0170 - 0x0170)
class UEmbarkWebBrowser : public UWebBrowser
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUI.EmbarkWebBrowser"));
		return ptr;
	}

};


// Class EmbarkUI.EmbarkWidgetBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UEmbarkWidgetBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUI.EmbarkWidgetBlueprintLibrary"));
		return ptr;
	}


	void STATIC_SetInputMode_GameOnly_WithoutForceFocus(class APlayerController* PlayerController);//Offset:Discovery.exe+0x1B13A90
	struct FPerformanceOverlayStats STATIC_GetPerformanceOverlayStats();//Offset:Discovery.exe+0x1B13A30
	float STATIC_GetGPUUtilizationPercent();//Offset:Discovery.exe+0x1B13A00
};


// Class EmbarkUI.EmbarkWidgetComponent
// 0x0000 (0x0700 - 0x0700)
class UEmbarkWidgetComponent : public UWidgetComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUI.EmbarkWidgetComponent"));
		return ptr;
	}

};


// Class EmbarkUI.QRCodeGeneratorLibrary
// 0x0000 (0x0028 - 0x0028)
class UQRCodeGeneratorLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUI.QRCodeGeneratorLibrary"));
		return ptr;
	}


	class UTexture2D* STATIC_GenerateQRCode(const struct FString& TextToEncode, bool bTransparent);//Offset:Discovery.exe+0x1B13FF0
};


// Class EmbarkUI.UIAnimationState
// 0x0050 (0x0078 - 0x0028)
class UUIAnimationState : public UObject
{
public:
	struct FGeometry                                   InitialParticipantGeometry;                               // 0x0028(0x0040) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              Distance;                                                 // 0x0068(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AnimationProgress;                                        // 0x006C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0070(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUI.UIAnimationState"));
		return ptr;
	}


	bool ShouldApplyAnimation();//Offset:Discovery.exe+0x1B14430
	bool IsAnimationOngoing();//Offset:Discovery.exe+0x1B14460
};


// Class EmbarkUI.UIAnimationParticipantContainer
// 0x0060 (0x01A0 - 0x0140)
class UUIAnimationParticipantContainer : public UContentWidget
{
public:
	bool                                               bStartAnimationWithZeroRenderOpacity;                     // 0x0140(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0141(0x0007) MISSED OFFSET
	class UUIAnimationState*                           AnimationState;                                           // 0x0148(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnGlobalAnimationStarted;                                 // 0x0150(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnGlobalAnimationCompleted;                               // 0x0160(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAnimationStarted;                                       // 0x0170(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAnimationCompleted;                                     // 0x0180(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0190(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUI.UIAnimationParticipantContainer"));
		return ptr;
	}


	void TickAnimation(const struct FUIAnimationTickParameter& Parameter);//Offset:Discovery.exe+0x327F8B0
	void PreTickAnimation(bool bIsAnimating, float AnimationProgress);//Offset:Discovery.exe+0x327F8B0
	void GlobalAnimationStart();//Offset:Discovery.exe+0x327F8B0
	void GlobalAnimationComplete();//Offset:Discovery.exe+0x327F8B0
	void AnimationStart();//Offset:Discovery.exe+0x327F8B0
	void AnimationComplete();//Offset:Discovery.exe+0x327F8B0
};


// Class EmbarkUI.UIAnimationDriverContainer
// 0x0030 (0x0170 - 0x0140)
class UUIAnimationDriverContainer : public UContentWidget
{
public:
	float                                              AnimationTimeElapsed;                                     // 0x0140(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AnimationDurationSeconds;                                 // 0x0144(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AnimationParticipantDurationSeconds;                      // 0x0148(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEvenTimeSpacing;                                         // 0x014C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x23];                                      // 0x014D(0x0023) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUI.UIAnimationDriverContainer"));
		return ptr;
	}


	void StopAnimation();//Offset:Discovery.exe+0x1B14DA0
	void StartAnimation();//Offset:Discovery.exe+0x1B14DC0
	void PopulateStateDistance(const struct FGeometry& ContainerGeometry, TArray<class UUIAnimationState*>* States);//Offset:Discovery.exe+0x1B14C80
	bool IsAnimating();//Offset:Discovery.exe+0x1B14C50
};


// Class EmbarkUI.UIMetaDataAsset
// 0x0010 (0x0040 - 0x0030)
class UUIMetaDataAsset : public UPrimaryDataAsset
{
public:
	TArray<class UUIMetaDataItem*>                     Items;                                                    // 0x0030(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUI.UIMetaDataAsset"));
		return ptr;
	}

};


// Class EmbarkUI.UIMetaDataItem
// 0x0000 (0x0028 - 0x0028)
class UUIMetaDataItem : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUI.UIMetaDataItem"));
		return ptr;
	}


	int64_t GetKey();//Offset:Discovery.exe+0x1B15590
	struct FString GetDebugDisplayName();//Offset:Discovery.exe+0x1B15510
};


// Class EmbarkUI.IUIMetaDataRepository
// 0x0000 (0x0030 - 0x0030)
class UIUIMetaDataRepository : public UDataAsset
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUI.IUIMetaDataRepository"));
		return ptr;
	}


	void Uninitialize();//Offset:Discovery.exe+0x191D9E0
	bool IsInitialized();//Offset:Discovery.exe+0x1461900
	void Initialize();//Offset:Discovery.exe+0x14618E0
	class UUIMetaDataItem* GetItemByKey(class UClass* ItemClass, int64_t Key);//Offset:Discovery.exe+0x1B15AC0
};


// Class EmbarkUI.UIMetaDataRepository
// 0x0068 (0x0098 - 0x0030)
class UUIMetaDataRepository : public UIUIMetaDataRepository
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
	TMap<int64_t, class UUIMetaDataItem*>              ItemMap;                                                  // 0x0038(0x0050)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0088(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUI.UIMetaDataRepository"));
		return ptr;
	}

};


// Class EmbarkUI.UISimpleAnimationContainer
// 0x0028 (0x0168 - 0x0140)
class UUISimpleAnimationContainer : public UContentWidget
{
public:
	bool                                               bIsPulsing;                                               // 0x0140(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0141(0x0003) MISSED OFFSET
	float                                              PulseMinOpacity;                                          // 0x0144(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PulseDuration;                                            // 0x0148(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FadeInDuration;                                           // 0x014C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FadeOutDuration;                                          // 0x0150(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x0154(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUI.UISimpleAnimationContainer"));
		return ptr;
	}


	void RestartAnimation();//Offset:Discovery.exe+0x1B16020
	void PlayExitAnimation();//Offset:Discovery.exe+0x1B16000
};


// Class EmbarkUI.WatermarkBaseWidget
// 0x0050 (0x02E0 - 0x0290)
class UWatermarkBaseWidget : public UUserWidget
{
public:
	class UWidget*                                     WatermarkContent;                                         // 0x0290(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FText                                       Label;                                                    // 0x0298(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	float                                              TimeThreshold;                                            // 0x02B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FWatermarkGrid                              Grid;                                                     // 0x02B4(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	unsigned char                                      UnknownData00[0x20];                                      // 0x02C0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUI.WatermarkBaseWidget"));
		return ptr;
	}


	void SetPath(const struct FString& InPath);//Offset:Discovery.exe+0x1B163F0
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
