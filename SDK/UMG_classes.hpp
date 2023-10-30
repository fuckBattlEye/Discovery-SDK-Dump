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

// Class UMG.Visual
// 0x0000 (0x0028 - 0x0028)
class UVisual : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.Visual"));
		return ptr;
	}

};


// Class UMG.Widget
// 0x0100 (0x0128 - 0x0028)
class UWidget : public UVisual
{
public:
	class UPanelSlot*                                  Slot;                                                     // 0x0028(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptDelegate                             bIsEnabledDelegate;                                       // 0x0030(0x0010) (ZeroConstructor, InstancedReference)
	struct FText                                       ToolTipText;                                              // 0x0040(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FScriptDelegate                             ToolTipTextDelegate;                                      // 0x0058(0x0010) (ZeroConstructor, InstancedReference)
	class UWidget*                                     ToolTipWidget;                                            // 0x0068(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	struct FScriptDelegate                             ToolTipWidgetDelegate;                                    // 0x0070(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             VisibilityDelegate;                                       // 0x0080(0x0010) (ZeroConstructor, InstancedReference)
	struct FWidgetTransform                            RenderTransform;                                          // 0x0090(0x0038) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FVector2D                                   RenderTransformPivot;                                     // 0x00C8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsVariable : 1;                                          // 0x00D8(0x0001)
	unsigned char                                      bCreatedByConstructionScript : 1;                         // 0x00D8(0x0001) (Transient)
	unsigned char                                      bIsEnabled : 1;                                           // 0x00D8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bOverride_Cursor : 1;                                     // 0x00D8(0x0001) (Edit)
	enum class EFlowDirectionPreference                FlowDirectionPreference;                                  // 0x00D9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x00DA(0x0006) MISSED OFFSET
	class USlateAccessibleWidgetData*                  AccessibleWidgetData;                                     // 0x00E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      bIsVolatile : 1;                                          // 0x00E8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<EMouseCursor>                          Cursor;                                                   // 0x00E9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	enum class EWidgetClipping                         Clipping;                                                 // 0x00EA(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	enum class ESlateVisibility                        Visibility;                                               // 0x00EB(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RenderOpacity;                                            // 0x00EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UWidgetNavigation*                           Navigation;                                               // 0x00F0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x00F8(0x0020) MISSED OFFSET
	TArray<class UPropertyBinding*>                    NativeBindings;                                           // 0x0118(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.Widget"));
		return ptr;
	}


	void SetVisibility(enum class ESlateVisibility InVisibility);//Offset:Discovery.exe+0x4B7B250
	void SetUserFocus(class APlayerController* PlayerController);//Offset:Discovery.exe+0x4B7AC50
	void SetToolTipText(const struct FText& InToolTipText);//Offset:Discovery.exe+0x4B7B4A0
	void SetToolTip(class UWidget* Widget);//Offset:Discovery.exe+0x4B7B400
	void SetRenderTranslation(const struct FVector2D& Translation);//Offset:Discovery.exe+0x4B7B6F0
	void SetRenderTransformPivot(const struct FVector2D& Pivot);//Offset:Discovery.exe+0x4B7B650
	void SetRenderTransformAngle(float Angle);//Offset:Discovery.exe+0x4B7B7C0
	void SetRenderTransform(const struct FWidgetTransform& InTransform);//Offset:Discovery.exe+0x4B7B9A0
	void SetRenderShear(const struct FVector2D& Shear);//Offset:Discovery.exe+0x4B7B860
	void SetRenderScale(const struct FVector2D& Scale);//Offset:Discovery.exe+0x4B7B900
	void SetRenderOpacity(float InOpacity);//Offset:Discovery.exe+0x4B7B180
	void SetNavigationRuleExplicit(enum class EUINavigation Direction, class UWidget* InWidget);//Offset:Discovery.exe+0x4B7A7F0
	void SetNavigationRuleCustomBoundary(enum class EUINavigation Direction, const struct FScriptDelegate& InCustomDelegate);//Offset:Discovery.exe+0x4B7A5F0
	void SetNavigationRuleCustom(enum class EUINavigation Direction, const struct FScriptDelegate& InCustomDelegate);//Offset:Discovery.exe+0x4B7A6F0
	void SetNavigationRuleBase(enum class EUINavigation Direction, enum class EUINavigationRule Rule);//Offset:Discovery.exe+0x4B7A8D0
	void SetNavigationRule(enum class EUINavigation Direction, enum class EUINavigationRule Rule, const struct FName& WidgetToFocus);//Offset:Discovery.exe+0x4B7A9B0
	void SetKeyboardFocus();//Offset:Discovery.exe+0x4B7AEB0
	void SetIsEnabled(bool bInIsEnabled);//Offset:Discovery.exe+0x4B7B580
	void SetFocus();//Offset:Discovery.exe+0x4B7ACF0
	void SetCursor(TEnumAsByte<EMouseCursor> InCursor);//Offset:Discovery.exe+0x4B7B370
	void SetClipping(enum class EWidgetClipping InClipping);//Offset:Discovery.exe+0x4B7B0C0
	void SetAllNavigationRules(enum class EUINavigationRule Rule, const struct FName& WidgetToFocus);//Offset:Discovery.exe+0x4B7AAE0
	void ResetCursor();//Offset:Discovery.exe+0x4B7B350
	void RemoveFromParent();//Offset:Discovery.exe+0x11B97D0
	struct FEventReply OnReply__DelegateSignature();//Offset:Discovery.exe+0x327F8B0
	struct FEventReply OnPointerEvent__DelegateSignature(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);//Offset:Discovery.exe+0x327F8B0
	bool IsVisible();//Offset:Discovery.exe+0x4B7B320
	bool IsHovered();//Offset:Discovery.exe+0x11BE930
	void InvalidateLayoutAndVolatility();//Offset:Discovery.exe+0x4B7AC10
	bool HasUserFocusedDescendants(class APlayerController* PlayerController);//Offset:Discovery.exe+0x4B7AD10
	bool HasUserFocus(class APlayerController* PlayerController);//Offset:Discovery.exe+0x4B7AE10
	bool HasMouseCaptureByUser(int UserIndex, int PointerIndex);//Offset:Discovery.exe+0x4B7AED0
	bool HasMouseCapture();//Offset:Discovery.exe+0x4B7AFC0
	bool HasKeyboardFocus();//Offset:Discovery.exe+0x4B7AFF0
	bool HasFocusedDescendants();//Offset:Discovery.exe+0x4B7ADB0
	bool HasAnyUserFocus();//Offset:Discovery.exe+0x4B7ADE0
	class UWidget* GetWidget__DelegateSignature();//Offset:Discovery.exe+0x327F8B0
	enum class ESlateVisibility GetVisibility();//Offset:Discovery.exe+0x4B7B2F0
	struct FGeometry GetTickSpaceGeometry();//Offset:Discovery.exe+0x4B7A560
	struct FText GetText__DelegateSignature();//Offset:Discovery.exe+0x327F8B0
	enum class ESlateVisibility GetSlateVisibility__DelegateSignature();//Offset:Discovery.exe+0x327F8B0
	struct FSlateColor GetSlateColor__DelegateSignature();//Offset:Discovery.exe+0x327F8B0
	struct FSlateBrush GetSlateBrush__DelegateSignature();//Offset:Discovery.exe+0x327F8B0
	float GetRenderTransformAngle();//Offset:Discovery.exe+0x4B7B790
	float GetRenderOpacity();//Offset:Discovery.exe+0x4B7B220
	class UPanelWidget* GetParent();//Offset:Discovery.exe+0x4B7A5C0
	struct FGeometry GetPaintSpaceGeometry();//Offset:Discovery.exe+0x4B7A530
	class APlayerController* GetOwningPlayer();//Offset:Discovery.exe+0x11B97F0
	class ULocalPlayer* GetOwningLocalPlayer();//Offset:Discovery.exe+0x1DB6580
	TEnumAsByte<EMouseCursor> GetMouseCursor__DelegateSignature();//Offset:Discovery.exe+0x327F8B0
	struct FLinearColor GetLinearColor__DelegateSignature();//Offset:Discovery.exe+0x327F8B0
	bool GetIsEnabled();//Offset:Discovery.exe+0x4B7B620
	int GetInt32__DelegateSignature();//Offset:Discovery.exe+0x327F8B0
	class UGameInstance* GetGameInstance();//Offset:Discovery.exe+0x4B7A500
	float GetFloat__DelegateSignature();//Offset:Discovery.exe+0x327F8B0
	struct FVector2D GetDesiredSize();//Offset:Discovery.exe+0x4B7ABC0
	enum class EWidgetClipping GetClipping();//Offset:Discovery.exe+0x4B7B150
	enum class ECheckBoxState GetCheckBoxState__DelegateSignature();//Offset:Discovery.exe+0x327F8B0
	struct FGeometry GetCachedGeometry();//Offset:Discovery.exe+0x4B7A590
	bool GetBool__DelegateSignature();//Offset:Discovery.exe+0x327F8B0
	struct FText GetAccessibleText();//Offset:Discovery.exe+0x4B7A470
	struct FText GetAccessibleSummaryText();//Offset:Discovery.exe+0x4B7A3E0
	class UWidget* GenerateWidgetForString__DelegateSignature(const struct FString& Item);//Offset:Discovery.exe+0x327F8B0
	class UWidget* GenerateWidgetForObject__DelegateSignature(class UObject* Item);//Offset:Discovery.exe+0x327F8B0
	void ForceVolatile(bool bForce);//Offset:Discovery.exe+0x4B7B020
	void ForceLayoutPrepass();//Offset:Discovery.exe+0x4B7AC30
};


// Class UMG.UserWidget
// 0x0168 (0x0290 - 0x0128)
class UUserWidget : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0128(0x0008) MISSED OFFSET
	struct FLinearColor                                ColorAndOpacity;                                          // 0x0130(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             ColorAndOpacityDelegate;                                  // 0x0140(0x0010) (ZeroConstructor, InstancedReference)
	struct FSlateColor                                 ForegroundColor;                                          // 0x0150(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FScriptDelegate                             ForegroundColorDelegate;                                  // 0x0164(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0174(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnVisibilityChanged;                                      // 0x0178(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0188(0x0018) MISSED OFFSET
	struct FMargin                                     Padding;                                                  // 0x01A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class UUMGSequencePlayer*>                  ActiveSequencePlayers;                                    // 0x01B0(0x0010) (ZeroConstructor, Transient)
	class UUMGSequenceTickManager*                     AnimationTickManager;                                     // 0x01C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UUMGSequencePlayer*>                  StoppedSequencePlayers;                                   // 0x01C8(0x0010) (ZeroConstructor, Transient)
	TArray<struct FNamedSlotBinding>                   NamedSlotBindings;                                        // 0x01D8(0x0010) (ZeroConstructor)
	class UWidgetTree*                                 WidgetTree;                                               // 0x01E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Priority;                                                 // 0x01F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bSupportsKeyboardFocus : 1;                               // 0x01F4(0x0001) (Deprecated)
	unsigned char                                      bIsFocusable : 1;                                         // 0x01F4(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bStopAction : 1;                                          // 0x01F4(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bHasScriptImplementedTick : 1;                            // 0x01F4(0x0001)
	unsigned char                                      bHasScriptImplementedPaint : 1;                           // 0x01F4(0x0001)
	unsigned char                                      UnknownData03[0x13];                                      // 0x01F5(0x0013) MISSED OFFSET
	enum class EWidgetTickFrequency                    TickFrequency;                                            // 0x0208(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0209(0x0007) MISSED OFFSET
	class UInputComponent*                             InputComponent;                                           // 0x0210(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData)
	TArray<struct FAnimationEventBinding>              AnimationCallbacks;                                       // 0x0218(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	unsigned char                                      UnknownData05[0x68];                                      // 0x0228(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.UserWidget"));
		return ptr;
	}


	void UnregisterInputComponent();//Offset:Discovery.exe+0x4B6D3E0
	void UnbindFromAnimationStarted(class UWidgetAnimation* Animation, const struct FScriptDelegate& Delegate);//Offset:Discovery.exe+0x4B6ECE0
	void UnbindFromAnimationFinished(class UWidgetAnimation* Animation, const struct FScriptDelegate& Delegate);//Offset:Discovery.exe+0x4B6EA40
	void UnbindAllFromAnimationStarted(class UWidgetAnimation* Animation);//Offset:Discovery.exe+0x4B6EC40
	void UnbindAllFromAnimationFinished(class UWidgetAnimation* Animation);//Offset:Discovery.exe+0x4B6E9A0
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);//Offset:Discovery.exe+0x327F8B0
	void StopListeningForInputAction(const struct FName& ActionName, TEnumAsByte<EInputEvent> EventType);//Offset:Discovery.exe+0x4B6D440
	void StopListeningForAllInputActions();//Offset:Discovery.exe+0x4B6D420
	void StopAnimationsAndLatentActions();//Offset:Discovery.exe+0x4B6EEE0
	void StopAnimation(class UWidgetAnimation* InAnimation);//Offset:Discovery.exe+0x4B6DDB0
	void StopAllAnimations();//Offset:Discovery.exe+0x4B6DD90
	void SetPositionInViewport(const struct FVector2D& Position, bool bRemoveDPIScale);//Offset:Discovery.exe+0x4B6F2F0
	void SetPlaybackSpeed(class UWidgetAnimation* InAnimation, float PlaybackSpeed);//Offset:Discovery.exe+0x4B6D8E0
	void SetPadding(const struct FMargin& InPadding);//Offset:Discovery.exe+0x4B6E580
	void SetOwningPlayer(class APlayerController* LocalPlayerController);//Offset:Discovery.exe+0x4B6EF80
	void SetNumLoopsToPlay(class UWidgetAnimation* InAnimation, int NumLoopsToPlay);//Offset:Discovery.exe+0x4B6D9C0
	void SetInputActionPriority(int NewPriority);//Offset:Discovery.exe+0x4B6D2A0
	void SetInputActionBlocking(bool bShouldBlock);//Offset:Discovery.exe+0x4B6D200
	void SetForegroundColor(const struct FSlateColor& InForegroundColor);//Offset:Discovery.exe+0x4B6E620
	void SetDesiredSizeInViewport(const struct FVector2D& Size);//Offset:Discovery.exe+0x4B6F250
	void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);//Offset:Discovery.exe+0x4B6E6D0
	void SetAnimationCurrentTime(class UWidgetAnimation* InAnimation, float InTime);//Offset:Discovery.exe+0x4B6DB70
	void SetAnchorsInViewport(const struct FAnchors& Anchors);//Offset:Discovery.exe+0x4B6F1A0
	void SetAlignmentInViewport(const struct FVector2D& Alignment);//Offset:Discovery.exe+0x4B6F100
	void ReverseAnimation(class UWidgetAnimation* InAnimation);//Offset:Discovery.exe+0x4B6D840
	void RemoveFromViewport();//Offset:Discovery.exe+0x4B6F3E0
	void RegisterInputComponent();//Offset:Discovery.exe+0x4B6D400
	void PreConstruct(bool IsDesignTime);//Offset:Discovery.exe+0x327F8B0
	void PlaySound(class USoundBase* SoundToPlay);//Offset:Discovery.exe+0x4B6D6E0
	class UUMGSequencePlayer* PlayAnimationTimeRange(class UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed, bool bRestoreState);//Offset:Discovery.exe+0x4B6E0D0
	class UUMGSequencePlayer* PlayAnimationReverse(class UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState);//Offset:Discovery.exe+0x4B6DE50
	class UUMGSequencePlayer* PlayAnimationForward(class UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState);//Offset:Discovery.exe+0x4B6DF90
	class UUMGSequencePlayer* PlayAnimation(class UWidgetAnimation* InAnimation, float StartAtTime, int NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed, bool bRestoreState);//Offset:Discovery.exe+0x4B6E350
	float PauseAnimation(class UWidgetAnimation* InAnimation);//Offset:Discovery.exe+0x4B6DCF0
	struct FEventReply OnTouchStarted(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent);//Offset:Discovery.exe+0x327F8B0
	struct FEventReply OnTouchMoved(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent);//Offset:Discovery.exe+0x327F8B0
	struct FEventReply OnTouchGesture(const struct FGeometry& MyGeometry, const struct FPointerEvent& GestureEvent);//Offset:Discovery.exe+0x327F8B0
	struct FEventReply OnTouchForceChanged(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent);//Offset:Discovery.exe+0x327F8B0
	struct FEventReply OnTouchEnded(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent);//Offset:Discovery.exe+0x327F8B0
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);//Offset:Discovery.exe+0x327F8B0
	struct FEventReply OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);//Offset:Discovery.exe+0x327F8B0
	struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);//Offset:Discovery.exe+0x327F8B0
	void OnPaint(struct FPaintContext* Context);//Offset:Discovery.exe+0x327F8B0
	struct FEventReply OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);//Offset:Discovery.exe+0x327F8B0
	struct FEventReply OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);//Offset:Discovery.exe+0x327F8B0
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);//Offset:Discovery.exe+0x327F8B0
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);//Offset:Discovery.exe+0x327F8B0
	void OnMouseCaptureLost();//Offset:Discovery.exe+0x327F8B0
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);//Offset:Discovery.exe+0x327F8B0
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);//Offset:Discovery.exe+0x327F8B0
	struct FEventReply OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent);//Offset:Discovery.exe+0x327F8B0
	struct FEventReply OnMotionDetected(const struct FGeometry& MyGeometry, const struct FMotionEvent& InMotionEvent);//Offset:Discovery.exe+0x327F8B0
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);//Offset:Discovery.exe+0x327F8B0
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);//Offset:Discovery.exe+0x327F8B0
	struct FEventReply OnKeyChar(const struct FGeometry& MyGeometry, const struct FCharacterEvent& InCharacterEvent);//Offset:Discovery.exe+0x327F8B0
	void OnInitialized();//Offset:Discovery.exe+0x327F8B0
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);//Offset:Discovery.exe+0x327F8B0
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);//Offset:Discovery.exe+0x327F8B0
	bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);//Offset:Discovery.exe+0x327F8B0
	bool OnDragOver(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);//Offset:Discovery.exe+0x327F8B0
	void OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);//Offset:Discovery.exe+0x327F8B0
	void OnDragEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);//Offset:Discovery.exe+0x327F8B0
	void OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation);//Offset:Discovery.exe+0x327F8B0
	void OnDragCancelled(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);//Offset:Discovery.exe+0x327F8B0
	void OnAnimationStarted(class UWidgetAnimation* Animation);//Offset:Discovery.exe+0x1DB9050
	void OnAnimationFinished(class UWidgetAnimation* Animation);//Offset:Discovery.exe+0x4B6E770
	struct FEventReply OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent);//Offset:Discovery.exe+0x327F8B0
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);//Offset:Discovery.exe+0x327F8B0
	void ListenForInputAction(const struct FName& ActionName, TEnumAsByte<EInputEvent> EventType, bool bConsume, const struct FScriptDelegate& Callback);//Offset:Discovery.exe+0x4B6D520
	bool IsPlayingAnimation();//Offset:Discovery.exe+0x4B6D6C0
	bool IsListeningForInputAction(const struct FName& ActionName);//Offset:Discovery.exe+0x4B6D340
	bool IsInViewport();//Offset:Discovery.exe+0x4B6F020
	bool IsInteractable();//Offset:Discovery.exe+0x327F8B0
	bool IsAnyAnimationPlaying();//Offset:Discovery.exe+0x4B6DAA0
	bool IsAnimationPlayingForward(class UWidgetAnimation* InAnimation);//Offset:Discovery.exe+0x4B6D7A0
	bool IsAnimationPlaying(class UWidgetAnimation* InAnimation);//Offset:Discovery.exe+0x4B6DAD0
	class APawn* GetOwningPlayerPawn();//Offset:Discovery.exe+0x4B6EF50
	class APlayerCameraManager* GetOwningPlayerCameraManager();//Offset:Discovery.exe+0x4B6EF20
	bool GetIsVisible();//Offset:Discovery.exe+0x4B6F020
	float GetAnimationCurrentTime(class UWidgetAnimation* InAnimation);//Offset:Discovery.exe+0x4B6DC50
	struct FAnchors GetAnchorsInViewport();//Offset:Discovery.exe+0x4B6F0A0
	struct FVector2D GetAlignmentInViewport();//Offset:Discovery.exe+0x4B6F050
	void FlushAnimations();//Offset:Discovery.exe+0x4B6D780
	void Destruct();//Offset:Discovery.exe+0x327F8B0
	void Construct();//Offset:Discovery.exe+0x327F8B0
	void CancelLatentActions();//Offset:Discovery.exe+0x4B6EF00
	void BindToAnimationStarted(class UWidgetAnimation* Animation, const struct FScriptDelegate& Delegate);//Offset:Discovery.exe+0x4B6EDE0
	void BindToAnimationFinished(class UWidgetAnimation* Animation, const struct FScriptDelegate& Delegate);//Offset:Discovery.exe+0x4B6EB40
	void BindToAnimationEvent(class UWidgetAnimation* Animation, const struct FScriptDelegate& Delegate, enum class EWidgetAnimationEvent AnimationEvent, const struct FName& UserTag);//Offset:Discovery.exe+0x4B6E810
	void AddToViewport(int ZOrder);//Offset:Discovery.exe+0x4B6F4A0
	bool AddToPlayerScreen(int ZOrder);//Offset:Discovery.exe+0x4B6F400
};


// Class UMG.PanelWidget
// 0x0018 (0x0140 - 0x0128)
class UPanelWidget : public UWidget
{
public:
	TArray<class UPanelSlot*>                          Slots;                                                    // 0x0128(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0138(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.PanelWidget"));
		return ptr;
	}


	bool RemoveChildAt(int Index);//Offset:Discovery.exe+0x4B5B300
	bool RemoveChild(class UWidget* Content);//Offset:Discovery.exe+0x4B5B1C0
	bool HasChild(class UWidget* Content);//Offset:Discovery.exe+0x4B5B3A0
	bool HasAnyChildren();//Offset:Discovery.exe+0x2503040
	int GetChildrenCount();//Offset:Discovery.exe+0x44D22E0
	int GetChildIndex(class UWidget* Content);//Offset:Discovery.exe+0x4B5B440
	class UWidget* GetChildAt(int Index);//Offset:Discovery.exe+0x4B5B560
	TArray<class UWidget*> GetAllChildren();//Offset:Discovery.exe+0x4B5B4E0
	void ClearChildren();//Offset:Discovery.exe+0x4B5B1A0
	class UPanelSlot* AddChild(class UWidget* Content);//Offset:Discovery.exe+0x4B5B260
};


// Class UMG.ContentWidget
// 0x0000 (0x0140 - 0x0140)
class UContentWidget : public UPanelWidget
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.ContentWidget"));
		return ptr;
	}


	class UPanelSlot* SetContent(class UWidget* Content);//Offset:Discovery.exe+0x4B4B2F0
	class UPanelSlot* GetContentSlot();//Offset:Discovery.exe+0x4B4B390
	class UWidget* GetContent();//Offset:Discovery.exe+0x4B4B2C0
};


// Class UMG.Button
// 0x0490 (0x05D0 - 0x0140)
class UButton : public UContentWidget
{
public:
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x0140(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0148(0x0008) MISSED OFFSET
	struct FButtonStyle                                WidgetStyle;                                              // 0x0150(0x03F0) (Edit, BlueprintVisible)
	struct FLinearColor                                ColorAndOpacity;                                          // 0x0540(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                BackgroundColor;                                          // 0x0550(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EButtonClickMethod>                    ClickMethod;                                              // 0x0560(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EButtonTouchMethod>                    TouchMethod;                                              // 0x0561(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EButtonPressMethod>                    PressMethod;                                              // 0x0562(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsFocusable;                                              // 0x0563(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0564(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnClicked;                                                // 0x0568(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPressed;                                                // 0x0578(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnReleased;                                               // 0x0588(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnHovered;                                                // 0x0598(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnUnhovered;                                              // 0x05A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x18];                                      // 0x05B8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.Button"));
		return ptr;
	}


	void SetTouchMethod(TEnumAsByte<EButtonTouchMethod> InTouchMethod);//Offset:Discovery.exe+0x4B456D0
	void SetStyle(const struct FButtonStyle& InStyle);//Offset:Discovery.exe+0x4B45960
	void SetPressMethod(TEnumAsByte<EButtonPressMethod> InPressMethod);//Offset:Discovery.exe+0x4B45640
	void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);//Offset:Discovery.exe+0x4B458C0
	void SetClickMethod(TEnumAsByte<EButtonClickMethod> InClickMethod);//Offset:Discovery.exe+0x4B45760
	void SetBackgroundColor(const struct FLinearColor& InBackgroundColor);//Offset:Discovery.exe+0x4B45820
	bool IsPressed();//Offset:Discovery.exe+0x4B457F0
};


// Class UMG.WidgetSwitcher
// 0x0018 (0x0158 - 0x0140)
class UWidgetSwitcher : public UPanelWidget
{
public:
	int                                                ActiveWidgetIndex;                                        // 0x0140(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0144(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.WidgetSwitcher"));
		return ptr;
	}


	void SetActiveWidgetIndex(int Index);//Offset:Discovery.exe+0x2516A70
	void SetActiveWidget(class UWidget* Widget);//Offset:Discovery.exe+0x1DB91F0
	class UWidget* GetWidgetAtIndex(int Index);//Offset:Discovery.exe+0x25169D0
	int GetNumWidgets();//Offset:Discovery.exe+0x4B8CE00
	int GetActiveWidgetIndex();//Offset:Discovery.exe+0x4B8CDD0
	class UWidget* GetActiveWidget();//Offset:Discovery.exe+0x4B8CDA0
};


// Class UMG.DynamicEntryBoxBase
// 0x00E0 (0x0208 - 0x0128)
class UDynamicEntryBoxBase : public UWidget
{
public:
	enum class EDynamicBoxType                         EntryBoxType;                                             // 0x0128(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0129(0x0007) MISSED OFFSET
	struct FVector2D                                   EntrySpacing;                                             // 0x0130(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector2D>                           SpacingPattern;                                           // 0x0140(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FSlateChildSize                             EntrySizeRule;                                            // 0x0150(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<EHorizontalAlignment>                  EntryHorizontalAlignment;                                 // 0x0158(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    EntryVerticalAlignment;                                   // 0x0159(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x015A(0x0002) MISSED OFFSET
	int                                                MaxElementSize;                                           // 0x015C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRadialBoxSettings                          RadialBoxSettings;                                        // 0x0160(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0170(0x0010) MISSED OFFSET
	struct FUserWidgetPool                             EntryWidgetPool;                                          // 0x0180(0x0088) (Transient)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.DynamicEntryBoxBase"));
		return ptr;
	}


	void SetRadialSettings(const struct FRadialBoxSettings& InSettings);//Offset:Discovery.exe+0x4B4CCB0
	void SetEntrySpacing(const struct FVector2D& InEntrySpacing);//Offset:Discovery.exe+0x4B4CD70
	int GetNumEntries();//Offset:Discovery.exe+0x4B4CE10
	TArray<class UUserWidget*> GetAllEntries();//Offset:Discovery.exe+0x4B4CE40
};


// Class UMG.Image
// 0x0158 (0x0280 - 0x0128)
class UImage : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0128(0x0008) MISSED OFFSET
	struct FSlateBrush                                 Brush;                                                    // 0x0130(0x00D0) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FScriptDelegate                             BrushDelegate;                                            // 0x0200(0x0010) (ZeroConstructor, InstancedReference)
	struct FLinearColor                                ColorAndOpacity;                                          // 0x0210(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             ColorAndOpacityDelegate;                                  // 0x0220(0x0010) (ZeroConstructor, InstancedReference)
	bool                                               bFlipForRightToLeftFlowDirection;                         // 0x0230(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0231(0x0003) MISSED OFFSET
	struct FScriptDelegate                             OnMouseButtonDownEvent;                                   // 0x0234(0x0010) (Edit, ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData02[0x3C];                                      // 0x0244(0x003C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.Image"));
		return ptr;
	}


	void SetOpacity(float InOpacity);//Offset:Discovery.exe+0x4B52190
	void SetDesiredSizeOverride(const struct FVector2D& DesiredSize);//Offset:Discovery.exe+0x4B520F0
	void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);//Offset:Discovery.exe+0x4B52230
	void SetBrushTintColor(const struct FSlateColor& TintColor);//Offset:Discovery.exe+0x4B52040
	void SetBrushResourceObject(class UObject* ResourceObject);//Offset:Discovery.exe+0x4B51FA0
	void SetBrushFromTextureDynamic(class UTexture2DDynamic* Texture, bool bMatchSize);//Offset:Discovery.exe+0x4B51B30
	void SetBrushFromTexture(class UTexture2D* Texture, bool bMatchSize);//Offset:Discovery.exe+0x4B51D10
	void SetBrushFromSoftTexture(bool bMatchSize);//Offset:Discovery.exe+0x4B51970
	void SetBrushFromSoftMaterial();//Offset:Discovery.exe+0x4B51810
	void SetBrushFromMaterial(class UMaterialInterface* Material);//Offset:Discovery.exe+0x1DB91F0
	void SetBrushFromAtlasInterface(const TScriptInterface<class USlateTextureAtlasInterface>& AtlasRegion, bool bMatchSize);//Offset:Discovery.exe+0x4B51C20
	void SetBrushFromAsset(class USlateBrushAsset* Asset);//Offset:Discovery.exe+0x4B51E00
	void SetBrush(const struct FSlateBrush& InBrush);//Offset:Discovery.exe+0x4B51EA0
	class UMaterialInstanceDynamic* GetDynamicMaterial();//Offset:Discovery.exe+0x4B517E0
};


// Class UMG.InputKeySelector
// 0x0848 (0x0970 - 0x0128)
class UInputKeySelector : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0128(0x0008) MISSED OFFSET
	struct FButtonStyle                                WidgetStyle;                                              // 0x0130(0x03F0) (Edit, BlueprintVisible)
	struct FTextBlockStyle                             TextStyle;                                                // 0x0520(0x0340) (Edit, BlueprintVisible)
	struct FInputChord                                 SelectedKey;                                              // 0x0860(0x0020) (BlueprintVisible, BlueprintReadOnly)
	struct FSlateFontInfo                              Font;                                                     // 0x0880(0x0058) (Deprecated)
	struct FMargin                                     Margin;                                                   // 0x08D8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ColorAndOpacity;                                          // 0x08E8(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FText                                       KeySelectionText;                                         // 0x08F8(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       NoKeySpecifiedText;                                       // 0x0910(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bAllowModifierKeys;                                       // 0x0928(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowGamepadKeys;                                        // 0x0929(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x092A(0x0006) MISSED OFFSET
	TArray<struct FKey>                                EscapeKeys;                                               // 0x0930(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FScriptMulticastDelegate                    OnKeySelected;                                            // 0x0940(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnIsSelectingKeyChanged;                                  // 0x0950(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0960(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.InputKeySelector"));
		return ptr;
	}


	void SetTextBlockVisibility(enum class ESlateVisibility InVisibility);//Offset:Discovery.exe+0x4B52DC0
	void SetSelectedKey(const struct FInputChord& InSelectedKey);//Offset:Discovery.exe+0x4B531A0
	void SetNoKeySpecifiedText(const struct FText& InNoKeySpecifiedText);//Offset:Discovery.exe+0x4B52FC0
	void SetKeySelectionText(const struct FText& InKeySelectionText);//Offset:Discovery.exe+0x4B530B0
	void SetEscapeKeys(TArray<struct FKey> InKeys);//Offset:Discovery.exe+0x4B52CC0
	void SetAllowModifierKeys(bool bInAllowModifierKeys);//Offset:Discovery.exe+0x4B52F20
	void SetAllowGamepadKeys(bool bInAllowGamepadKeys);//Offset:Discovery.exe+0x4B52E80
	void OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey);//Offset:Discovery.exe+0x327F8B0
	void OnIsSelectingKeyChanged__DelegateSignature();//Offset:Discovery.exe+0x327F8B0
	bool GetIsSelectingKey();//Offset:Discovery.exe+0x4B52E50
};


// Class UMG.ListViewBase
// 0x0118 (0x0240 - 0x0128)
class UListViewBase : public UWidget
{
public:
	class UClass*                                      EntryWidgetClass;                                         // 0x0128(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WheelScrollMultiplier;                                    // 0x0130(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableScrollAnimation;                                   // 0x0134(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               AllowOverscroll;                                          // 0x0135(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableRightClickScrolling;                               // 0x0136(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableFixedLineOffset;                                   // 0x0137(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FixedLineScrollOffset;                                    // 0x0138(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowDragging;                                           // 0x013C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x013D(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    BP_OnEntryGenerated;                                      // 0x0140(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    BP_OnEntryReleased;                                       // 0x0150(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FUserWidgetPool                             EntryWidgetPool;                                          // 0x0160(0x0088) (Transient)
	unsigned char                                      UnknownData01[0x58];                                      // 0x01E8(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.ListViewBase"));
		return ptr;
	}


	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier);//Offset:Discovery.exe+0x4B56FA0
	void SetScrollOffset(float InScrollOffset);//Offset:Discovery.exe+0x4B57040
	void SetScrollbarVisibility(enum class ESlateVisibility InVisibility);//Offset:Discovery.exe+0x4B56F10
	void ScrollToTop();//Offset:Discovery.exe+0x4B57100
	void ScrollToBottom();//Offset:Discovery.exe+0x4B570E0
	void RequestRefresh();//Offset:Discovery.exe+0x4B56EF0
	void RegenerateAllEntries();//Offset:Discovery.exe+0x4B57120
	float GetScrollOffset();//Offset:Discovery.exe+0x4B57140
	TArray<class UUserWidget*> GetDisplayedEntryWidgets();//Offset:Discovery.exe+0x4B57170
};


// Class UMG.ListView
// 0x09A0 (0x0BE0 - 0x0240)
class UListView : public UListViewBase
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0240(0x00C0) MISSED OFFSET
	struct FTableViewStyle                             WidgetStyle;                                              // 0x0300(0x00E0) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FScrollBarStyle                             ScrollBarStyle;                                           // 0x03E0(0x0770) (Edit, BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<EOrientation>                          Orientation;                                              // 0x0B50(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESelectionMode>                        SelectionMode;                                            // 0x0B51(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	enum class EConsumeMouseWheel                      ConsumeMouseWheel;                                        // 0x0B52(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bClearSelectionOnClick;                                   // 0x0B53(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsFocusable;                                             // 0x0B54(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0B55(0x0003) MISSED OFFSET
	float                                              EntrySpacing;                                             // 0x0B58(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bReturnFocusToSelection;                                  // 0x0B5C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0B5D(0x0003) MISSED OFFSET
	TArray<class UObject*>                             ListItems;                                                // 0x0B60(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0B70(0x0010) MISSED OFFSET
	struct FScriptMulticastDelegate                    BP_OnEntryInitialized;                                    // 0x0B80(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    BP_OnItemClicked;                                         // 0x0B90(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    BP_OnItemDoubleClicked;                                   // 0x0BA0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    BP_OnItemIsHoveredChanged;                                // 0x0BB0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    BP_OnItemSelectionChanged;                                // 0x0BC0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    BP_OnItemScrolledIntoView;                                // 0x0BD0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.ListView"));
		return ptr;
	}


	void SetSelectionMode(TEnumAsByte<ESelectionMode> SelectionMode);//Offset:Discovery.exe+0x4B554A0
	void SetSelectedIndex(int Index);//Offset:Discovery.exe+0x4B55330
	void ScrollIndexIntoView(int Index);//Offset:Discovery.exe+0x4B553D0
	void RemoveItem(class UObject* Item);//Offset:Discovery.exe+0x4B556C0
	void OnListItemOuterEndPlayed(class AActor* ItemOuter, TEnumAsByte<EEndPlayReason> EndPlayReason);//Offset:Discovery.exe+0x4B550D0
	void OnListItemEndPlayed(class AActor* Item, TEnumAsByte<EEndPlayReason> EndPlayReason);//Offset:Discovery.exe+0x4B551B0
	void NavigateToIndex(int Index);//Offset:Discovery.exe+0x4B55290
	bool IsRefreshPending();//Offset:Discovery.exe+0x4B55470
	int GetNumItems();//Offset:Discovery.exe+0x4B555F0
	TArray<class UObject*> GetListItems();//Offset:Discovery.exe+0x4B55800
	class UObject* GetItemAt(int Index);//Offset:Discovery.exe+0x4B55620
	int GetIndexForItem(class UObject* Item);//Offset:Discovery.exe+0x4B55550
	void ClearListItems();//Offset:Discovery.exe+0x4B55530
	void BP_SetSelectedItem(class UObject* Item);//Offset:Discovery.exe+0x4B55030
	void BP_SetListItems(TArray<class UObject*> InListItems);//Offset:Discovery.exe+0x4B54B80
	void BP_SetItemSelection(class UObject* Item, bool bSelected);//Offset:Discovery.exe+0x4B54F40
	void BP_ScrollItemIntoView(class UObject* Item);//Offset:Discovery.exe+0x4B54C50
	void BP_NavigateToItem(class UObject* Item);//Offset:Discovery.exe+0x4B54CF0
	bool BP_IsItemVisible(class UObject* Item);//Offset:Discovery.exe+0x4B54D90
	bool BP_GetSelectedItems(TArray<class UObject*>* Items);//Offset:Discovery.exe+0x4B54E30
	class UObject* BP_GetSelectedItem();//Offset:Discovery.exe+0x4B54B50
	int BP_GetNumItemsSelected();//Offset:Discovery.exe+0x4B54EF0
	void BP_ClearSelection();//Offset:Discovery.exe+0x4B54F20
	void BP_CancelScrollIntoView();//Offset:Discovery.exe+0x4B54C30
	void AddItem(class UObject* Item);//Offset:Discovery.exe+0x4B55760
};


// Class UMG.RichTextBlockDecorator
// 0x0000 (0x0028 - 0x0028)
class URichTextBlockDecorator : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.RichTextBlockDecorator"));
		return ptr;
	}

};


// Class UMG.ScrollBox
// 0x0B40 (0x0C80 - 0x0140)
class UScrollBox : public UPanelWidget
{
public:
	struct FScrollBoxStyle                             WidgetStyle;                                              // 0x0140(0x0350) (Edit, BlueprintVisible)
	struct FScrollBarStyle                             WidgetBarStyle;                                           // 0x0490(0x0770) (Edit, BlueprintVisible)
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x0C00(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateWidgetStyleAsset*                      BarStyle;                                                 // 0x0C08(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	TEnumAsByte<EOrientation>                          Orientation;                                              // 0x0C10(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	enum class ESlateVisibility                        ScrollBarVisibility;                                      // 0x0C11(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	enum class EConsumeMouseWheel                      ConsumeMouseWheel;                                        // 0x0C12(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0C13(0x0005) MISSED OFFSET
	struct FVector2D                                   ScrollbarThickness;                                       // 0x0C18(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     ScrollbarPadding;                                         // 0x0C28(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               AlwaysShowScrollbar;                                      // 0x0C38(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               AlwaysShowScrollbarTrack;                                 // 0x0C39(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               AllowOverscroll;                                          // 0x0C3A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               BackPadScrolling;                                         // 0x0C3B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               FrontPadScrolling;                                        // 0x0C3C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAnimateWheelScrolling;                                   // 0x0C3D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	enum class EDescendantScrollDestination            NavigationDestination;                                    // 0x0C3E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0C3F(0x0001) MISSED OFFSET
	float                                              NavigationScrollPadding;                                  // 0x0C40(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	enum class EScrollWhenFocusChanges                 ScrollWhenFocusChanges;                                   // 0x0C44(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowRightClickDragScrolling;                            // 0x0C45(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0C46(0x0002) MISSED OFFSET
	float                                              WheelScrollMultiplier;                                    // 0x0C48(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0C4C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnUserScrolled;                                           // 0x0C50(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData04[0x20];                                      // 0x0C60(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.ScrollBox"));
		return ptr;
	}


	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier);//Offset:Discovery.exe+0x4B60360
	void SetScrollWhenFocusChanges(enum class EScrollWhenFocusChanges NewScrollWhenFocusChanges);//Offset:Discovery.exe+0x4B602D0
	void SetScrollOffset(float NewScrollOffset);//Offset:Discovery.exe+0x4B60180
	void SetScrollbarVisibility(enum class ESlateVisibility NewScrollBarVisibility);//Offset:Discovery.exe+0x4B60730
	void SetScrollbarThickness(const struct FVector2D& NewScrollbarThickness);//Offset:Discovery.exe+0x4B60690
	void SetScrollbarPadding(const struct FMargin& NewScrollbarPadding);//Offset:Discovery.exe+0x4B605E0
	void SetOrientation(TEnumAsByte<EOrientation> NewOrientation);//Offset:Discovery.exe+0x4B607C0
	void SetNavigationDestination(enum class EDescendantScrollDestination NewNavigationDestination);//Offset:Discovery.exe+0x4B60240
	void SetConsumeMouseWheel(enum class EConsumeMouseWheel NewConsumeMouseWheel);//Offset:Discovery.exe+0x4B60850
	void SetAnimateWheelScrolling(bool bShouldAnimateWheelScrolling);//Offset:Discovery.exe+0x4B60400
	void SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar);//Offset:Discovery.exe+0x4B60540
	void SetAllowOverscroll(bool NewAllowOverscroll);//Offset:Discovery.exe+0x4B604A0
	void ScrollWidgetIntoView(class UWidget* WidgetToFind, bool AnimateScroll, enum class EDescendantScrollDestination ScrollDestination, float Padding);//Offset:Discovery.exe+0x4B5FF20
	void ScrollToStart();//Offset:Discovery.exe+0x4B600D0
	void ScrollToEnd();//Offset:Discovery.exe+0x4B600B0
	float GetViewOffsetFraction();//Offset:Discovery.exe+0x4B600F0
	float GetScrollOffsetOfEnd();//Offset:Discovery.exe+0x4B60120
	float GetScrollOffset();//Offset:Discovery.exe+0x4B60150
	void EndInertialScrolling();//Offset:Discovery.exe+0x4B60220
};


// Class UMG.TextLayoutWidget
// 0x0020 (0x0148 - 0x0128)
class UTextLayoutWidget : public UWidget
{
public:
	struct FShapedTextOptions                          ShapedTextOptions;                                        // 0x0128(0x0003) (Edit, BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<ETextJustify>                          Justification;                                            // 0x012B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	enum class ETextWrappingPolicy                     WrappingPolicy;                                           // 0x012C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      AutoWrapText : 1;                                         // 0x012D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x2];                                       // 0x012E(0x0002) MISSED OFFSET
	float                                              WrapTextAt;                                               // 0x0130(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     Margin;                                                   // 0x0134(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LineHeightPercentage;                                     // 0x0144(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.TextLayoutWidget"));
		return ptr;
	}


	void SetJustification(TEnumAsByte<ETextJustify> InJustification);//Offset:Discovery.exe+0x4B6A5F0
};


// Class UMG.TextBlock
// 0x01C8 (0x0310 - 0x0148)
class UTextBlock : public UTextLayoutWidget
{
public:
	struct FText                                       Text;                                                     // 0x0148(0x0018) (Edit)
	struct FScriptDelegate                             TextDelegate;                                             // 0x0160(0x0010) (ZeroConstructor, InstancedReference)
	struct FSlateColor                                 ColorAndOpacity;                                          // 0x0170(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FScriptDelegate                             ColorAndOpacityDelegate;                                  // 0x0184(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0194(0x0004) MISSED OFFSET
	struct FSlateFontInfo                              Font;                                                     // 0x0198(0x0058) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FSlateBrush                                 StrikeBrush;                                              // 0x01F0(0x00D0) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FVector2D                                   ShadowOffset;                                             // 0x02C0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ShadowColorAndOpacity;                                    // 0x02D0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             ShadowColorAndOpacityDelegate;                            // 0x02E0(0x0010) (ZeroConstructor, InstancedReference)
	float                                              MinDesiredWidth;                                          // 0x02F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bWrapWithInvalidationPanel;                               // 0x02F4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoWrapText;                                            // 0x02F5(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	enum class ETextTransformPolicy                    TextTransformPolicy;                                      // 0x02F6(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	enum class ETextOverflowPolicy                     TextOverflowPolicy;                                       // 0x02F7(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSimpleTextMode;                                          // 0x02F8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x17];                                      // 0x02F9(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.TextBlock"));
		return ptr;
	}


	void SetTextTransformPolicy(enum class ETextTransformPolicy InTransformPolicy);//Offset:Discovery.exe+0x4B694E0
	void SetTextOverflowPolicy(enum class ETextOverflowPolicy InOverflowPolicy);//Offset:Discovery.exe+0x4B69450
	void SetText(const struct FText& InText);//Offset:Discovery.exe+0x4B69270
	void SetStrikeBrush(const struct FSlateBrush& InStrikeBrush);//Offset:Discovery.exe+0x4B696B0
	void SetShadowOffset(const struct FVector2D& InShadowOffset);//Offset:Discovery.exe+0x4B69920
	void SetShadowColorAndOpacity(const struct FLinearColor& InShadowColorAndOpacity);//Offset:Discovery.exe+0x4B699C0
	void SetOpacity(float InOpacity);//Offset:Discovery.exe+0x4B69A60
	void SetMinDesiredWidth(float InMinDesiredWidth);//Offset:Discovery.exe+0x4B69610
	void SetFont(const struct FSlateFontInfo& InFontInfo);//Offset:Discovery.exe+0x4B697F0
	void SetColorAndOpacity(const struct FSlateColor& InColorAndOpacity);//Offset:Discovery.exe+0x4B69B00
	void SetAutoWrapText(bool InAutoTextWrap);//Offset:Discovery.exe+0x4B69570
	struct FText GetText();//Offset:Discovery.exe+0x4B69360
	class UMaterialInstanceDynamic* GetDynamicOutlineMaterial();//Offset:Discovery.exe+0x4B693F0
	class UMaterialInstanceDynamic* GetDynamicFontMaterial();//Offset:Discovery.exe+0x4B69420
};


// Class UMG.TileView
// 0x0020 (0x0C00 - 0x0BE0)
class UTileView : public UListView
{
public:
	float                                              EntryHeight;                                              // 0x0BE0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EntryWidth;                                               // 0x0BE4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	enum class EListItemAlignment                      TileAlignment;                                            // 0x0BE8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bWrapHorizontalNavigation;                                // 0x0BE9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x16];                                      // 0x0BEA(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.TileView"));
		return ptr;
	}


	void SetEntryWidth(float NewWidth);//Offset:Discovery.exe+0x4B6B020
	void SetEntryHeight(float NewHeight);//Offset:Discovery.exe+0x4B6B0C0
	float GetEntryWidth();//Offset:Discovery.exe+0x4B6AFC0
	float GetEntryHeight();//Offset:Discovery.exe+0x4B6AFF0
};


// Class UMG.WidgetComponent
// 0x0140 (0x0700 - 0x05C0)
class UWidgetComponent : public UMeshComponent
{
public:
	class UClass*                                      WidgetClass;                                              // 0x05C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FIntPoint                                   DrawSize;                                                 // 0x05C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bManuallyRedraw;                                          // 0x05D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRedrawRequested;                                         // 0x05D1(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x05D2(0x0002) MISSED OFFSET
	float                                              RedrawTime;                                               // 0x05D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x05D8(0x0008) MISSED OFFSET
	struct FIntPoint                                   CurrentDrawSize;                                          // 0x05E0(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bDrawAtDesiredSize;                                       // 0x05E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x05E9(0x0007) MISSED OFFSET
	struct FVector2D                                   Pivot;                                                    // 0x05F0(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bReceiveHardwareInput;                                    // 0x0600(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bWindowFocusable;                                         // 0x0601(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	enum class EWindowVisibility                       WindowVisibility;                                         // 0x0602(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bApplyGammaCorrection;                                    // 0x0603(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0604(0x0004) MISSED OFFSET
	class ULocalPlayer*                                OwnerPlayer;                                              // 0x0608(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                BackgroundColor;                                          // 0x0610(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                TintColorAndOpacity;                                      // 0x0620(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OpacityFromTexture;                                       // 0x0630(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	enum class EWidgetBlendMode                        BlendMode;                                                // 0x0634(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsTwoSided;                                              // 0x0635(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               TickWhenOffscreen;                                        // 0x0636(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x0637(0x0001) MISSED OFFSET
	class UBodySetup*                                  BodySetup;                                                // 0x0638(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UMaterialInterface*                          TranslucentMaterial;                                      // 0x0640(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          TranslucentMaterial_OneSided;                             // 0x0648(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          OpaqueMaterial;                                           // 0x0650(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          OpaqueMaterial_OneSided;                                  // 0x0658(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          MaskedMaterial;                                           // 0x0660(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          MaskedMaterial_OneSided;                                  // 0x0668(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTextureRenderTarget2D*                      RenderTarget;                                             // 0x0670(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MaterialInstance;                                         // 0x0678(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               bAddedToScreen;                                           // 0x0680(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               bEditTimeUsable;                                          // 0x0681(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x0682(0x0002) MISSED OFFSET
	struct FName                                       SharedLayerName;                                          // 0x0684(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LayerZOrder;                                              // 0x068C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	enum class EWidgetGeometryMode                     GeometryMode;                                             // 0x0690(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0691(0x0003) MISSED OFFSET
	float                                              CylinderArcAngle;                                         // 0x0694(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	enum class ETickMode                               TickMode;                                                 // 0x0698(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2F];                                      // 0x0699(0x002F) MISSED OFFSET
	class UUserWidget*                                 Widget;                                                   // 0x06C8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x30];                                      // 0x06D0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.WidgetComponent"));
		return ptr;
	}


	void SetWindowVisibility(enum class EWindowVisibility InVisibility);//Offset:Discovery.exe+0x4B85B40
	void SetWindowFocusable(bool bInWindowFocusable);//Offset:Discovery.exe+0x4B85C00
	void SetWidgetSpace(enum class EWidgetSpace NewSpace);//Offset:Discovery.exe+0x4B85E50
	void SetWidget(class UUserWidget* Widget);//Offset:Discovery.exe+0x4B867A0
	void SetTwoSided(bool bWantTwoSided);//Offset:Discovery.exe+0x4B863E0
	void SetTintColorAndOpacity(const struct FLinearColor& NewTintColorAndOpacity);//Offset:Discovery.exe+0x4B861C0
	void SetTickWhenOffscreen(bool bWantTickWhenOffscreen);//Offset:Discovery.exe+0x4B86300
	void SetTickMode(enum class ETickMode InTickMode);//Offset:Discovery.exe+0x4B85AB0
	void SetRedrawTime(float InRedrawTime);//Offset:Discovery.exe+0x4B85F20
	void SetPivot(const struct FVector2D& InPivot);//Offset:Discovery.exe+0x4B860E0
	void SetOwnerPlayer(class ULocalPlayer* LocalPlayer);//Offset:Discovery.exe+0x4B86700
	void SetManuallyRedraw(bool bUseManualRedraw);//Offset:Discovery.exe+0x4B86660
	void SetGeometryMode(enum class EWidgetGeometryMode InGeometryMode);//Offset:Discovery.exe+0x4B85DA0
	void SetDrawSize(const struct FVector2D& Size);//Offset:Discovery.exe+0x4B864F0
	void SetDrawAtDesiredSize(bool bInDrawAtDesiredSize);//Offset:Discovery.exe+0x4B86000
	void SetCylinderArcAngle(float InCylinderArcAngle);//Offset:Discovery.exe+0x4B85CD0
	void SetBackgroundColor(const struct FLinearColor& NewBackgroundColor);//Offset:Discovery.exe+0x4B86260
	void RequestRenderUpdate();//Offset:Discovery.exe+0x4B864B0
	void RequestRedraw();//Offset:Discovery.exe+0x4B864D0
	bool IsWidgetVisible();//Offset:Discovery.exe+0x4B85A80
	enum class EWindowVisibility GetWindowVisiblility();//Offset:Discovery.exe+0x4B85BD0
	bool GetWindowFocusable();//Offset:Discovery.exe+0x4B85CA0
	enum class EWidgetSpace GetWidgetSpace();//Offset:Discovery.exe+0x4B85EF0
	class UUserWidget* GetWidget();//Offset:Discovery.exe+0x4B86840
	class UUserWidget* GetUserWidgetObject();//Offset:Discovery.exe+0x4B868D0
	bool GetTwoSided();//Offset:Discovery.exe+0x4B86480
	bool GetTickWhenOffscreen();//Offset:Discovery.exe+0x4B863B0
	class UTextureRenderTarget2D* GetRenderTarget();//Offset:Discovery.exe+0x4B868A0
	float GetRedrawTime();//Offset:Discovery.exe+0x4B85FD0
	struct FVector2D GetPivot();//Offset:Discovery.exe+0x4B86190
	class ULocalPlayer* GetOwnerPlayer();//Offset:Discovery.exe+0x4B86630
	class UMaterialInstanceDynamic* GetMaterialInstance();//Offset:Discovery.exe+0x4B86870
	bool GetManuallyRedraw();//Offset:Discovery.exe+0x44EEA30
	enum class EWidgetGeometryMode GetGeometryMode();//Offset:Discovery.exe+0x4B85E30
	struct FVector2D GetDrawSize();//Offset:Discovery.exe+0x4B865E0
	bool GetDrawAtDesiredSize();//Offset:Discovery.exe+0x4B860B0
	float GetCylinderArcAngle();//Offset:Discovery.exe+0x4B85D80
	struct FVector2D GetCurrentDrawSize();//Offset:Discovery.exe+0x4B86590
};


// Class UMG.Slider
// 0x05B8 (0x06E0 - 0x0128)
class USlider : public UWidget
{
public:
	float                                              Value;                                                    // 0x0128(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             ValueDelegate;                                            // 0x012C(0x0010) (ZeroConstructor, InstancedReference)
	float                                              MinValue;                                                 // 0x013C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // 0x0140(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0144(0x000C) MISSED OFFSET
	struct FSliderStyle                                WidgetStyle;                                              // 0x0150(0x0500) (Edit, BlueprintVisible)
	TEnumAsByte<EOrientation>                          Orientation;                                              // 0x0650(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0651(0x0003) MISSED OFFSET
	struct FLinearColor                                SliderBarColor;                                           // 0x0654(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                SliderHandleColor;                                        // 0x0664(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IndentHandle;                                             // 0x0674(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               Locked;                                                   // 0x0675(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               MouseUsesStep;                                            // 0x0676(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               RequiresControllerLock;                                   // 0x0677(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              StepSize;                                                 // 0x0678(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsFocusable;                                              // 0x067C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x067D(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnMouseCaptureBegin;                                      // 0x0680(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMouseCaptureEnd;                                        // 0x0690(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnControllerCaptureBegin;                                 // 0x06A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnControllerCaptureEnd;                                   // 0x06B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnValueChanged;                                           // 0x06C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0x10];                                      // 0x06D0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.Slider"));
		return ptr;
	}


	void SetValue(float InValue);//Offset:Discovery.exe+0x4B66180
	void SetStepSize(float InValue);//Offset:Discovery.exe+0x4B65E60
	void SetSliderHandleColor(const struct FLinearColor& InValue);//Offset:Discovery.exe+0x4B65D20
	void SetSliderBarColor(const struct FLinearColor& InValue);//Offset:Discovery.exe+0x4B65DC0
	void SetMinValue(float InValue);//Offset:Discovery.exe+0x4B660E0
	void SetMaxValue(float InValue);//Offset:Discovery.exe+0x4B66040
	void SetLocked(bool InValue);//Offset:Discovery.exe+0x4B65F00
	void SetIndentHandle(bool InValue);//Offset:Discovery.exe+0x4B65FA0
	float GetValue();//Offset:Discovery.exe+0x4B66250
	float GetNormalizedValue();//Offset:Discovery.exe+0x4B66220
};


// Class UMG.Border
// 0x01B0 (0x02F0 - 0x0140)
class UBorder : public UContentWidget
{
public:
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0140(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0141(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bShowEffectWhenDisabled : 1;                              // 0x0142(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0143(0x0001) MISSED OFFSET
	struct FLinearColor                                ContentColorAndOpacity;                                   // 0x0144(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             ContentColorAndOpacityDelegate;                           // 0x0154(0x0010) (ZeroConstructor, InstancedReference)
	struct FMargin                                     Padding;                                                  // 0x0164(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0174(0x000C) MISSED OFFSET
	struct FSlateBrush                                 Background;                                               // 0x0180(0x00D0) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FScriptDelegate                             BackgroundDelegate;                                       // 0x0250(0x0010) (ZeroConstructor, InstancedReference)
	struct FLinearColor                                BrushColor;                                               // 0x0260(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             BrushColorDelegate;                                       // 0x0270(0x0010) (ZeroConstructor, InstancedReference)
	struct FVector2D                                   DesiredSizeScale;                                         // 0x0280(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bFlipForRightToLeftFlowDirection;                         // 0x0290(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0291(0x0003) MISSED OFFSET
	struct FScriptDelegate                             OnMouseButtonDownEvent;                                   // 0x0294(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnMouseButtonUpEvent;                                     // 0x02A4(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnMouseMoveEvent;                                         // 0x02B4(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnMouseDoubleClickEvent;                                  // 0x02C4(0x0010) (Edit, ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData03[0x1C];                                      // 0x02D4(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.Border"));
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);//Offset:Discovery.exe+0x4B44260
	void SetPadding(const struct FMargin& InPadding);//Offset:Discovery.exe+0x4B44380
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);//Offset:Discovery.exe+0x4B442F0
	void SetDesiredSizeScale(const struct FVector2D& InScale);//Offset:Discovery.exe+0x4B43EC0
	void SetContentColorAndOpacity(const struct FLinearColor& InContentColorAndOpacity);//Offset:Discovery.exe+0x4B44420
	void SetBrushFromTexture(class UTexture2D* Texture);//Offset:Discovery.exe+0x4B43F90
	void SetBrushFromMaterial(class UMaterialInterface* Material);//Offset:Discovery.exe+0x4B43F90
	void SetBrushFromAsset(class USlateBrushAsset* Asset);//Offset:Discovery.exe+0x4B44030
	void SetBrushColor(const struct FLinearColor& InBrushColor);//Offset:Discovery.exe+0x4B441C0
	void SetBrush(const struct FSlateBrush& InBrush);//Offset:Discovery.exe+0x4B440D0
	class UMaterialInstanceDynamic* GetDynamicMaterial();//Offset:Discovery.exe+0x4B43F60
};


// Class UMG.PanelSlot
// 0x0010 (0x0038 - 0x0028)
class UPanelSlot : public UVisual
{
public:
	class UPanelWidget*                                Parent;                                                   // 0x0028(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     Content;                                                  // 0x0030(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.PanelSlot"));
		return ptr;
	}

};


// Class UMG.RichTextBlock
// 0x06F8 (0x0840 - 0x0148)
class URichTextBlock : public UTextLayoutWidget
{
public:
	struct FText                                       Text;                                                     // 0x0148(0x0018) (Edit)
	class UDataTable*                                  TextStyleSet;                                             // 0x0160(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              DecoratorClasses;                                         // 0x0168(0x0010) (Edit, ZeroConstructor)
	bool                                               bOverrideDefaultStyle;                                    // 0x0178(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0179(0x0007) MISSED OFFSET
	struct FTextBlockStyle                             DefaultTextStyleOverride;                                 // 0x0180(0x0340) (Edit)
	float                                              MinDesiredWidth;                                          // 0x04C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	enum class ETextTransformPolicy                    TextTransformPolicy;                                      // 0x04C4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	enum class ETextOverflowPolicy                     TextOverflowPolicy;                                       // 0x04C5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xA];                                       // 0x04C6(0x000A) MISSED OFFSET
	struct FTextBlockStyle                             DefaultTextStyle;                                         // 0x04D0(0x0340) (Transient)
	TArray<class URichTextBlockDecorator*>             InstanceDecorators;                                       // 0x0810(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0x20];                                      // 0x0820(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.RichTextBlock"));
		return ptr;
	}


	void SetTextTransformPolicy(enum class ETextTransformPolicy InTransformPolicy);//Offset:Discovery.exe+0x4B5D840
	void SetTextStyleSet(class UDataTable* NewTextStyleSet);//Offset:Discovery.exe+0x4B5D490
	void SetTextOverflowPolicy(enum class ETextOverflowPolicy InOverflowPolicy);//Offset:Discovery.exe+0x4B5D7B0
	void SetText(const struct FText& InText);//Offset:Discovery.exe+0x4B5D530
	void SetMinDesiredWidth(float InMinDesiredWidth);//Offset:Discovery.exe+0x4B5D970
	void SetDefaultTextStyle(const struct FTextBlockStyle& InDefaultTextStyle);//Offset:Discovery.exe+0x4B5D6F0
	void SetDefaultStrikeBrush(struct FSlateBrush* InStrikeBrush);//Offset:Discovery.exe+0x4B5DA10
	void SetDefaultShadowOffset(const struct FVector2D& InShadowOffset);//Offset:Discovery.exe+0x4B5DC30
	void SetDefaultShadowColorAndOpacity(const struct FLinearColor& InShadowColorAndOpacity);//Offset:Discovery.exe+0x4B5DCD0
	void SetDefaultFont(const struct FSlateFontInfo& InFontInfo);//Offset:Discovery.exe+0x4B5DB00
	void SetDefaultColorAndOpacity(const struct FSlateColor& InColorAndOpacity);//Offset:Discovery.exe+0x4B5DD70
	void SetAutoWrapText(bool InAutoTextWrap);//Offset:Discovery.exe+0x4B5D8D0
	void RefreshTextLayout();//Offset:Discovery.exe+0x4B5D3D0
	struct FText GetText();//Offset:Discovery.exe+0x4B5D610
	class UMaterialInstanceDynamic* GetDefaultDynamicMaterial();//Offset:Discovery.exe+0x4B5D6A0
	class URichTextBlockDecorator* GetDecoratorByClass(class UClass* DecoratorClass);//Offset:Discovery.exe+0x4B5D3F0
	void ClearAllDefaultStyleOverrides();//Offset:Discovery.exe+0x4B5D6D0
};


// Class UMG.TreeView
// 0x0060 (0x0C40 - 0x0BE0)
class UTreeView : public UListView
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0BE0(0x0010) MISSED OFFSET
	struct FScriptDelegate                             BP_OnGetItemChildren;                                     // 0x0BF0(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    BP_OnItemExpansionChanged;                                // 0x0C00(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x30];                                      // 0x0C10(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.TreeView"));
		return ptr;
	}


	void SetItemExpansion(class UObject* Item, bool bExpandItem);//Offset:Discovery.exe+0x4B6B620
	void ExpandAll();//Offset:Discovery.exe+0x4B6B600
	void CollapseAll();//Offset:Discovery.exe+0x4B6B5E0
};


// Class UMG.Overlay
// 0x0010 (0x0150 - 0x0140)
class UOverlay : public UPanelWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0140(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.Overlay"));
		return ptr;
	}


	class UOverlaySlot* AddChildToOverlay(class UWidget* Content);//Offset:Discovery.exe+0x4B5A7E0
};


// Class UMG.OverlaySlot
// 0x0020 (0x0058 - 0x0038)
class UOverlaySlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	struct FMargin                                     Padding;                                                  // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0051(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0052(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.OverlaySlot"));
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);//Offset:Discovery.exe+0x4B5ABF0
	void SetPadding(const struct FMargin& InPadding);//Offset:Discovery.exe+0x4B513D0
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);//Offset:Discovery.exe+0x4B5AC80
};


// Class UMG.SizeBox
// 0x0038 (0x0178 - 0x0140)
class USizeBox : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0140(0x0010) MISSED OFFSET
	float                                              WidthOverride;                                            // 0x0150(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HeightOverride;                                           // 0x0154(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinDesiredWidth;                                          // 0x0158(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinDesiredHeight;                                         // 0x015C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxDesiredWidth;                                          // 0x0160(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxDesiredHeight;                                         // 0x0164(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinAspectRatio;                                           // 0x0168(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxAspectRatio;                                           // 0x016C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bOverride_WidthOverride : 1;                              // 0x0170(0x0001) (Edit)
	unsigned char                                      bOverride_HeightOverride : 1;                             // 0x0170(0x0001) (Edit)
	unsigned char                                      bOverride_MinDesiredWidth : 1;                            // 0x0170(0x0001) (Edit)
	unsigned char                                      bOverride_MinDesiredHeight : 1;                           // 0x0170(0x0001) (Edit)
	unsigned char                                      bOverride_MaxDesiredWidth : 1;                            // 0x0170(0x0001) (Edit)
	unsigned char                                      bOverride_MaxDesiredHeight : 1;                           // 0x0170(0x0001) (Edit)
	unsigned char                                      bOverride_MinAspectRatio : 1;                             // 0x0170(0x0001) (Edit)
	unsigned char                                      bOverride_MaxAspectRatio : 1;                             // 0x0170(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0171(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.SizeBox"));
		return ptr;
	}


	void SetWidthOverride(float InWidthOverride);//Offset:Discovery.exe+0x4B62850
	void SetMinDesiredWidth(float InMinDesiredWidth);//Offset:Discovery.exe+0x4B626D0
	void SetMinDesiredHeight(float InMinDesiredHeight);//Offset:Discovery.exe+0x4B62610
	void SetMinAspectRatio(float InMinAspectRatio);//Offset:Discovery.exe+0x4B623D0
	void SetMaxDesiredWidth(float InMaxDesiredWidth);//Offset:Discovery.exe+0x4B62550
	void SetMaxDesiredHeight(float InMaxDesiredHeight);//Offset:Discovery.exe+0x4B62490
	void SetMaxAspectRatio(float InMaxAspectRatio);//Offset:Discovery.exe+0x4B62330
	void SetHeightOverride(float InHeightOverride);//Offset:Discovery.exe+0x4B62790
	void ClearWidthOverride();//Offset:Discovery.exe+0x4B62830
	void ClearMinDesiredWidth();//Offset:Discovery.exe+0x4B626B0
	void ClearMinDesiredHeight();//Offset:Discovery.exe+0x4B625F0
	void ClearMinAspectRatio();//Offset:Discovery.exe+0x4B62310
	void ClearMaxDesiredWidth();//Offset:Discovery.exe+0x4B62530
	void ClearMaxDesiredHeight();//Offset:Discovery.exe+0x4B62470
	void ClearMaxAspectRatio();//Offset:Discovery.exe+0x4B622F0
	void ClearHeightOverride();//Offset:Discovery.exe+0x4B62770
};


// Class UMG.AsyncTaskDownloadImage
// 0x0020 (0x0050 - 0x0030)
class UAsyncTaskDownloadImage : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFail;                                                   // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.AsyncTaskDownloadImage"));
		return ptr;
	}


	class UAsyncTaskDownloadImage* STATIC_DownloadImage(const struct FString& URL);//Offset:Discovery.exe+0x4B42760
};


// Class UMG.BackgroundBlur
// 0x0120 (0x0260 - 0x0140)
class UBackgroundBlur : public UContentWidget
{
public:
	struct FMargin                                     Padding;                                                  // 0x0140(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0150(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0151(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bApplyAlphaToBlur;                                        // 0x0152(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0153(0x0001) MISSED OFFSET
	float                                              BlurStrength;                                             // 0x0154(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideAutoRadiusCalculation;                           // 0x0158(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0159(0x0003) MISSED OFFSET
	int                                                BlurRadius;                                               // 0x015C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    CornerRadius;                                             // 0x0160(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 LowQualityFallbackBrush;                                  // 0x0180(0x00D0) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0250(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.BackgroundBlur"));
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);//Offset:Discovery.exe+0x4B42E80
	void SetPadding(const struct FMargin& InPadding);//Offset:Discovery.exe+0x4B42FA0
	void SetLowQualityFallbackBrush(const struct FSlateBrush& InBrush);//Offset:Discovery.exe+0x4B42AE0
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);//Offset:Discovery.exe+0x4B42F10
	void SetCornerRadius(const struct FVector4& InCornerRadius);//Offset:Discovery.exe+0x4B42BD0
	void SetBlurStrength(float InStrength);//Offset:Discovery.exe+0x4B42CA0
	void SetBlurRadius(int InBlurRadius);//Offset:Discovery.exe+0x4B42D40
	void SetApplyAlphaToBlur(bool bInApplyAlphaToBlur);//Offset:Discovery.exe+0x4B42DE0
};


// Class UMG.BackgroundBlurSlot
// 0x0028 (0x0060 - 0x0038)
class UBackgroundBlurSlot : public UPanelSlot
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
			ptr = UObject::FindClass(XorStr("Class UMG.BackgroundBlurSlot"));
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);//Offset:Discovery.exe+0x4B436A0
	void SetPadding(const struct FMargin& InPadding);//Offset:Discovery.exe+0x4B437C0
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);//Offset:Discovery.exe+0x4B43730
};


// Class UMG.PropertyBinding
// 0x0038 (0x0060 - 0x0028)
class UPropertyBinding : public UObject
{
public:
	TWeakObjectPtr<class UObject>                      SourceObject;                                             // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FDynamicPropertyPath                        SourcePath;                                               // 0x0030(0x0028)
	struct FName                                       DestinationProperty;                                      // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.PropertyBinding"));
		return ptr;
	}

};


// Class UMG.BoolBinding
// 0x0000 (0x0060 - 0x0060)
class UBoolBinding : public UPropertyBinding
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.BoolBinding"));
		return ptr;
	}


	bool GetValue();//Offset:Discovery.exe+0x4B43BF0
};


// Class UMG.BorderSlot
// 0x0028 (0x0060 - 0x0038)
class UBorderSlot : public UPanelSlot
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
			ptr = UObject::FindClass(XorStr("Class UMG.BorderSlot"));
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);//Offset:Discovery.exe+0x4B44C90
	void SetPadding(const struct FMargin& InPadding);//Offset:Discovery.exe+0x4B44DB0
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);//Offset:Discovery.exe+0x4B44D20
};


// Class UMG.BrushBinding
// 0x0008 (0x0068 - 0x0060)
class UBrushBinding : public UPropertyBinding
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0060(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.BrushBinding"));
		return ptr;
	}


	struct FSlateBrush GetValue();//Offset:Discovery.exe+0x4B451E0
};


// Class UMG.ButtonSlot
// 0x0028 (0x0060 - 0x0038)
class UButtonSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0049(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x16];                                      // 0x004A(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.ButtonSlot"));
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);//Offset:Discovery.exe+0x4B45FE0
	void SetPadding(const struct FMargin& InPadding);//Offset:Discovery.exe+0x4B46100
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);//Offset:Discovery.exe+0x4B46070
};


// Class UMG.CanvasPanel
// 0x0010 (0x0150 - 0x0140)
class UCanvasPanel : public UPanelWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0140(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.CanvasPanel"));
		return ptr;
	}


	class UCanvasPanelSlot* AddChildToCanvas(class UWidget* Content);//Offset:Discovery.exe+0x4B46530
};


// Class UMG.CanvasPanelSlot
// 0x0050 (0x0088 - 0x0038)
class UCanvasPanelSlot : public UPanelSlot
{
public:
	struct FAnchorData                                 LayoutData;                                               // 0x0038(0x0040) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bAutoSize;                                                // 0x0078(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0079(0x0003) MISSED OFFSET
	int                                                ZOrder;                                                   // 0x007C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0080(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.CanvasPanelSlot"));
		return ptr;
	}


	void SetZOrder(int InZOrder);//Offset:Discovery.exe+0x4B46B20
	void SetSize(const struct FVector2D& InSize);//Offset:Discovery.exe+0x4B46FD0
	void SetPosition(const struct FVector2D& InPosition);//Offset:Discovery.exe+0x4B470C0
	void SetOffsets(const struct FMargin& InOffset);//Offset:Discovery.exe+0x4B46EE0
	void SetMinimum(const struct FVector2D& InMinimumAnchors);//Offset:Discovery.exe+0x4B46A50
	void SetMaximum(const struct FVector2D& InMaximumAnchors);//Offset:Discovery.exe+0x4B469B0
	void SetLayout(const struct FAnchorData& InLayoutData);//Offset:Discovery.exe+0x4B471D0
	void SetAutoSize(bool InbAutoSize);//Offset:Discovery.exe+0x4B46BF0
	void SetAnchors(const struct FAnchors& InAnchors);//Offset:Discovery.exe+0x4B46DE0
	void SetAlignment(const struct FVector2D& InAlignment);//Offset:Discovery.exe+0x4B46CE0
	int GetZOrder();//Offset:Discovery.exe+0x4B46AF0
	struct FVector2D GetSize();//Offset:Discovery.exe+0x4B46F80
	struct FVector2D GetPosition();//Offset:Discovery.exe+0x4B47070
	struct FMargin GetOffsets();//Offset:Discovery.exe+0x4B46E90
	struct FAnchorData GetLayout();//Offset:Discovery.exe+0x4B47160
	bool GetAutoSize();//Offset:Discovery.exe+0x4B46BC0
	struct FAnchors GetAnchors();//Offset:Discovery.exe+0x4B46D80
	struct FVector2D GetAlignment();//Offset:Discovery.exe+0x4B46C90
};


// Class UMG.CheckBox
// 0x0B90 (0x0CD0 - 0x0140)
class UCheckBox : public UContentWidget
{
public:
	enum class ECheckBoxState                          CheckedState;                                             // 0x0140(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0141(0x0003) MISSED OFFSET
	struct FScriptDelegate                             CheckedStateDelegate;                                     // 0x0144(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0154(0x000C) MISSED OFFSET
	struct FCheckBoxStyle                              WidgetStyle;                                              // 0x0160(0x0AD0) (Edit, BlueprintVisible)
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x0C30(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            UncheckedImage;                                           // 0x0C38(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            UncheckedHoveredImage;                                    // 0x0C40(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            UncheckedPressedImage;                                    // 0x0C48(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            CheckedImage;                                             // 0x0C50(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            CheckedHoveredImage;                                      // 0x0C58(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            CheckedPressedImage;                                      // 0x0C60(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            UndeterminedImage;                                        // 0x0C68(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            UndeterminedHoveredImage;                                 // 0x0C70(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            UndeterminedPressedImage;                                 // 0x0C78(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0C80(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0C81(0x0003) MISSED OFFSET
	struct FMargin                                     Padding;                                                  // 0x0C84(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FSlateColor                                 BorderBackgroundColor;                                    // 0x0C94(0x0014) (Deprecated)
	TEnumAsByte<EButtonClickMethod>                    ClickMethod;                                              // 0x0CA8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EButtonTouchMethod>                    TouchMethod;                                              // 0x0CA9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EButtonPressMethod>                    PressMethod;                                              // 0x0CAA(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsFocusable;                                              // 0x0CAB(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0CAC(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnCheckStateChanged;                                      // 0x0CB0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData04[0x10];                                      // 0x0CC0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.CheckBox"));
		return ptr;
	}


	void SetTouchMethod(TEnumAsByte<EButtonTouchMethod> InTouchMethod);//Offset:Discovery.exe+0x4B47DF0
	void SetPressMethod(TEnumAsByte<EButtonPressMethod> InPressMethod);//Offset:Discovery.exe+0x4B47D60
	void SetIsChecked(bool InIsChecked);//Offset:Discovery.exe+0x4B47FA0
	void SetClickMethod(TEnumAsByte<EButtonClickMethod> InClickMethod);//Offset:Discovery.exe+0x4B47E80
	void SetCheckedState(enum class ECheckBoxState InCheckedState);//Offset:Discovery.exe+0x4B47F10
	bool IsPressed();//Offset:Discovery.exe+0x4B480A0
	bool IsChecked();//Offset:Discovery.exe+0x4B48070
	enum class ECheckBoxState GetCheckedState();//Offset:Discovery.exe+0x4B48040
};


// Class UMG.CheckedStateBinding
// 0x0008 (0x0068 - 0x0060)
class UCheckedStateBinding : public UPropertyBinding
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0060(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.CheckedStateBinding"));
		return ptr;
	}


	enum class ECheckBoxState GetValue();//Offset:Discovery.exe+0x4B48710
};


// Class UMG.CircularThrobber
// 0x0108 (0x0230 - 0x0128)
class UCircularThrobber : public UWidget
{
public:
	int                                                NumberOfPieces;                                           // 0x0128(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Period;                                                   // 0x012C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0130(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0134(0x0004) MISSED OFFSET
	class USlateBrushAsset*                            PieceImage;                                               // 0x0138(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FSlateBrush                                 Image;                                                    // 0x0140(0x00D0) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bEnableRadius;                                            // 0x0210(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1F];                                      // 0x0211(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.CircularThrobber"));
		return ptr;
	}


	void SetRadius(float InRadius);//Offset:Discovery.exe+0x4B49060
	void SetPeriod(float InPeriod);//Offset:Discovery.exe+0x4B49100
	void SetNumberOfPieces(int InNumberOfPieces);//Offset:Discovery.exe+0x4B491A0
};


// Class UMG.ColorBinding
// 0x0008 (0x0068 - 0x0060)
class UColorBinding : public UPropertyBinding
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0060(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.ColorBinding"));
		return ptr;
	}


	struct FSlateColor GetSlateValue();//Offset:Discovery.exe+0x4B49620
	struct FLinearColor GetLinearValue();//Offset:Discovery.exe+0x4B495D0
};


// Class UMG.ComboBox
// 0x0038 (0x0160 - 0x0128)
class UComboBox : public UWidget
{
public:
	TArray<class UObject*>                             Items;                                                    // 0x0128(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FScriptDelegate                             OnGenerateWidgetEvent;                                    // 0x0138(0x0010) (Edit, ZeroConstructor, InstancedReference)
	bool                                               bIsFocusable;                                             // 0x0148(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0149(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.ComboBox"));
		return ptr;
	}

};


// Class UMG.ComboBoxKey
// 0x1458 (0x1580 - 0x0128)
class UComboBoxKey : public UWidget
{
public:
	TArray<struct FName>                               Options;                                                  // 0x0128(0x0010) (Edit, ZeroConstructor)
	struct FName                                       SelectedOption;                                           // 0x0138(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FComboBoxStyle                              WidgetStyle;                                              // 0x0140(0x0660) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FTableRowStyle                              ItemStyle;                                                // 0x07A0(0x0D50) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FSlateColor                                 ForegroundColor;                                          // 0x14F0(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FMargin                                     ContentPadding;                                           // 0x1504(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxListHeight;                                            // 0x1514(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHasDownArrow;                                            // 0x1518(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableGamepadNavigationMode;                             // 0x1519(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsFocusable;                                             // 0x151A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x151B(0x0001) MISSED OFFSET
	struct FScriptDelegate                             OnGenerateContentWidget;                                  // 0x151C(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnGenerateItemWidget;                                     // 0x152C(0x0010) (Edit, ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData01[0x4];                                       // 0x153C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnSelectionChanged;                                       // 0x1540(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnOpening;                                                // 0x1550(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x20];                                      // 0x1560(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.ComboBoxKey"));
		return ptr;
	}


	void SetSelectedOption(const struct FName& Option);//Offset:Discovery.exe+0x4B49BC0
	bool RemoveOption(const struct FName& Option);//Offset:Discovery.exe+0x4B49CA0
	void OnSelectionChangedEvent__DelegateSignature(const struct FName& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);//Offset:Discovery.exe+0x327F8B0
	void OnOpeningEvent__DelegateSignature();//Offset:Discovery.exe+0x327F8B0
	bool IsOpen();//Offset:Discovery.exe+0x4B49B40
	struct FName GetSelectedOption();//Offset:Discovery.exe+0x4B49B70
	class UWidget* GenerateWidgetEvent__DelegateSignature(const struct FName& Item);//Offset:Discovery.exe+0x327F8B0
	void ClearSelection();//Offset:Discovery.exe+0x4B49C60
	void ClearOptions();//Offset:Discovery.exe+0x4B49C80
	void AddOption(const struct FName& Option);//Offset:Discovery.exe+0x4B49D40
};


// Class UMG.ComboBoxString
// 0x14E8 (0x1610 - 0x0128)
class UComboBoxString : public UWidget
{
public:
	TArray<struct FString>                             DefaultOptions;                                           // 0x0128(0x0010) (Edit, ZeroConstructor)
	struct FString                                     SelectedOption;                                           // 0x0138(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0148(0x0008) MISSED OFFSET
	struct FComboBoxStyle                              WidgetStyle;                                              // 0x0150(0x0660) (Edit, BlueprintVisible)
	struct FTableRowStyle                              ItemStyle;                                                // 0x07B0(0x0D50) (Edit, BlueprintVisible)
	struct FMargin                                     ContentPadding;                                           // 0x1500(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxListHeight;                                            // 0x1510(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               HasDownArrow;                                             // 0x1514(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               EnableGamepadNavigationMode;                              // 0x1515(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x1516(0x0002) MISSED OFFSET
	struct FSlateFontInfo                              Font;                                                     // 0x1518(0x0058) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FSlateColor                                 ForegroundColor;                                          // 0x1570(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bIsFocusable;                                             // 0x1584(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x1585(0x0003) MISSED OFFSET
	struct FScriptDelegate                             OnGenerateWidgetEvent;                                    // 0x1588(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnSelectionChanged;                                       // 0x1598(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnOpening;                                                // 0x15A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0x58];                                      // 0x15B8(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.ComboBoxString"));
		return ptr;
	}


	void SetSelectedOption(const struct FString& Option);//Offset:Discovery.exe+0x4B4A5C0
	void SetSelectedIndex(int Index);//Offset:Discovery.exe+0x4B4A520
	bool RemoveOption(const struct FString& Option);//Offset:Discovery.exe+0x4B4A8A0
	void RefreshOptions();//Offset:Discovery.exe+0x4B4A6B0
	void OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);//Offset:Discovery.exe+0x327F8B0
	void OnOpeningEvent__DelegateSignature();//Offset:Discovery.exe+0x327F8B0
	bool IsOpen();//Offset:Discovery.exe+0x4B4A410
	struct FString GetSelectedOption();//Offset:Discovery.exe+0x4B4A4A0
	int GetSelectedIndex();//Offset:Discovery.exe+0x4B4A470
	int GetOptionCount();//Offset:Discovery.exe+0x4B4A440
	struct FString GetOptionAtIndex(int Index);//Offset:Discovery.exe+0x4B4A710
	int FindOptionIndex(const struct FString& Option);//Offset:Discovery.exe+0x4B4A7F0
	void ClearSelection();//Offset:Discovery.exe+0x4B4A6D0
	void ClearOptions();//Offset:Discovery.exe+0x4B4A6F0
	void AddOption(const struct FString& Option);//Offset:Discovery.exe+0x4B4A950
};


// Class UMG.DragDropOperation
// 0x0068 (0x0090 - 0x0028)
class UDragDropOperation : public UObject
{
public:
	struct FString                                     Tag;                                                      // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UObject*                                     Payload;                                                  // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     DefaultDragVisual;                                        // 0x0040(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	enum class EDragPivot                              Pivot;                                                    // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
	struct FVector2D                                   Offset;                                                   // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnDrop;                                                   // 0x0060(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDragCancelled;                                          // 0x0070(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDragged;                                                // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.DragDropOperation"));
		return ptr;
	}


	void Drop(const struct FPointerEvent& PointerEvent);//Offset:Discovery.exe+0x4B4BB80
	void Dragged(const struct FPointerEvent& PointerEvent);//Offset:Discovery.exe+0x4B4B8A0
	void DragCancelled(const struct FPointerEvent& PointerEvent);//Offset:Discovery.exe+0x4B4BA10
};


// Class UMG.DynamicEntryBox
// 0x0008 (0x0210 - 0x0208)
class UDynamicEntryBox : public UDynamicEntryBoxBase
{
public:
	class UClass*                                      EntryWidgetClass;                                         // 0x0208(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.DynamicEntryBox"));
		return ptr;
	}


	void Reset(bool bDeleteWidgets);//Offset:Discovery.exe+0x4B4C730
	void RemoveEntry(class UUserWidget* EntryWidget);//Offset:Discovery.exe+0x4B4C690
	class UUserWidget* BP_CreateEntryOfClass(class UClass* EntryClass);//Offset:Discovery.exe+0x4B4C5C0
	class UUserWidget* BP_CreateEntry();//Offset:Discovery.exe+0x4B4C660
};


// Class UMG.EditableText
// 0x0428 (0x0550 - 0x0128)
class UEditableText : public UWidget
{
public:
	struct FText                                       Text;                                                     // 0x0128(0x0018) (Edit)
	struct FScriptDelegate                             TextDelegate;                                             // 0x0140(0x0010) (ZeroConstructor, InstancedReference)
	struct FText                                       HintText;                                                 // 0x0150(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FScriptDelegate                             HintTextDelegate;                                         // 0x0168(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0178(0x0008) MISSED OFFSET
	struct FEditableTextStyle                          WidgetStyle;                                              // 0x0180(0x02F0) (Edit, BlueprintVisible)
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x0470(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            BackgroundImageSelected;                                  // 0x0478(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            BackgroundImageComposing;                                 // 0x0480(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            CaretImage;                                               // 0x0488(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FSlateFontInfo                              Font;                                                     // 0x0490(0x0058) (Deprecated)
	struct FSlateColor                                 ColorAndOpacity;                                          // 0x04E8(0x0014) (Deprecated)
	bool                                               IsReadOnly;                                               // 0x04FC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsPassword;                                               // 0x04FD(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x04FE(0x0002) MISSED OFFSET
	float                                              MinimumDesiredWidth;                                      // 0x0500(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsCaretMovedWhenGainFocus;                                // 0x0504(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               SelectAllTextWhenFocused;                                 // 0x0505(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RevertTextOnEscape;                                       // 0x0506(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ClearKeyboardFocusOnCommit;                               // 0x0507(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               SelectAllTextOnCommit;                                    // 0x0508(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AllowContextMenu;                                         // 0x0509(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVirtualKeyboardType>                  KeyboardType;                                             // 0x050A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVirtualKeyboardOptions                     VirtualKeyboardOptions;                                   // 0x050B(0x0001) (Edit)
	enum class EVirtualKeyboardTrigger                 VirtualKeyboardTrigger;                                   // 0x050C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	enum class EVirtualKeyboardDismissAction           VirtualKeyboardDismissAction;                             // 0x050D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextJustify>                          Justification;                                            // 0x050E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	enum class ETextOverflowPolicy                     OverflowPolicy;                                           // 0x050F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FShapedTextOptions                          ShapedTextOptions;                                        // 0x0510(0x0003) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData02[0x5];                                       // 0x0513(0x0005) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnTextChanged;                                            // 0x0518(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTextCommitted;                                          // 0x0528(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0x18];                                      // 0x0538(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.EditableText"));
		return ptr;
	}


	void SetTextOverflowPolicy(enum class ETextOverflowPolicy InOverflowPolicy);//Offset:Discovery.exe+0x4B4D3D0
	void SetText(const struct FText& InText);//Offset:Discovery.exe+0x4B4D720
	void SetJustification(TEnumAsByte<ETextJustify> InJustification);//Offset:Discovery.exe+0x4B4D460
	void SetIsReadOnly(bool InbIsReadyOnly);//Offset:Discovery.exe+0x4B4D4F0
	void SetIsPassword(bool InbIsPassword);//Offset:Discovery.exe+0x4B4D680
	void SetHintText(const struct FText& InHintText);//Offset:Discovery.exe+0x4B4D590
	void OnEditableTextCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);//Offset:Discovery.exe+0x327F8B0
	void OnEditableTextChangedEvent__DelegateSignature(const struct FText& Text);//Offset:Discovery.exe+0x327F8B0
	struct FText GetText();//Offset:Discovery.exe+0x4B4D810
};


// Class UMG.EditableTextBox
// 0x0CD8 (0x0E00 - 0x0128)
class UEditableTextBox : public UWidget
{
public:
	struct FText                                       Text;                                                     // 0x0128(0x0018) (Edit)
	struct FScriptDelegate                             TextDelegate;                                             // 0x0140(0x0010) (ZeroConstructor, InstancedReference)
	struct FEditableTextBoxStyle                       WidgetStyle;                                              // 0x0150(0x0BA0) (Edit, BlueprintVisible)
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x0CF0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FText                                       HintText;                                                 // 0x0CF8(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FScriptDelegate                             HintTextDelegate;                                         // 0x0D10(0x0010) (ZeroConstructor, InstancedReference)
	struct FSlateFontInfo                              Font;                                                     // 0x0D20(0x0058) (Deprecated)
	struct FLinearColor                                ForegroundColor;                                          // 0x0D78(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FLinearColor                                BackgroundColor;                                          // 0x0D88(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FLinearColor                                ReadOnlyForegroundColor;                                  // 0x0D98(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               IsReadOnly;                                               // 0x0DA8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsPassword;                                               // 0x0DA9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0DAA(0x0002) MISSED OFFSET
	float                                              MinimumDesiredWidth;                                      // 0x0DAC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     Padding;                                                  // 0x0DB0(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               IsCaretMovedWhenGainFocus;                                // 0x0DC0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               SelectAllTextWhenFocused;                                 // 0x0DC1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               RevertTextOnEscape;                                       // 0x0DC2(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               ClearKeyboardFocusOnCommit;                               // 0x0DC3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               SelectAllTextOnCommit;                                    // 0x0DC4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               AllowContextMenu;                                         // 0x0DC5(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVirtualKeyboardType>                  KeyboardType;                                             // 0x0DC6(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVirtualKeyboardOptions                     VirtualKeyboardOptions;                                   // 0x0DC7(0x0001) (Edit)
	enum class EVirtualKeyboardTrigger                 VirtualKeyboardTrigger;                                   // 0x0DC8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	enum class EVirtualKeyboardDismissAction           VirtualKeyboardDismissAction;                             // 0x0DC9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextJustify>                          Justification;                                            // 0x0DCA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	enum class ETextOverflowPolicy                     OverflowPolicy;                                           // 0x0DCB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FShapedTextOptions                          ShapedTextOptions;                                        // 0x0DCC(0x0003) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0DCF(0x0001) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnTextChanged;                                            // 0x0DD0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTextCommitted;                                          // 0x0DE0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0DF0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.EditableTextBox"));
		return ptr;
	}


	void SetTextOverflowPolicy(enum class ETextOverflowPolicy InOverflowPolicy);//Offset:Discovery.exe+0x4B4DFC0
	void SetText(const struct FText& InText);//Offset:Discovery.exe+0x4B4E450
	void SetJustification(TEnumAsByte<ETextJustify> InJustification);//Offset:Discovery.exe+0x4B4E050
	void SetIsReadOnly(bool bReadOnly);//Offset:Discovery.exe+0x4B4E1D0
	void SetIsPassword(bool bIsPassword);//Offset:Discovery.exe+0x4B4E130
	void SetHintText(const struct FText& InText);//Offset:Discovery.exe+0x4B4E360
	void SetForegroundColor(const struct FLinearColor& Color);//Offset:Discovery.exe+0x4B4DF20
	void SetError(const struct FText& InError);//Offset:Discovery.exe+0x4B4E270
	void OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);//Offset:Discovery.exe+0x327F8B0
	void OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text);//Offset:Discovery.exe+0x327F8B0
	bool HasError();//Offset:Discovery.exe+0x4B4E0E0
	struct FText GetText();//Offset:Discovery.exe+0x4B4E540
	void ClearError();//Offset:Discovery.exe+0x4B4E110
};


// Class UMG.ExpandableArea
// 0x0308 (0x0430 - 0x0128)
class UExpandableArea : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0128(0x0008) MISSED OFFSET
	struct FExpandableAreaStyle                        Style;                                                    // 0x0130(0x01C0) (Edit)
	struct FSlateBrush                                 BorderBrush;                                              // 0x02F0(0x00D0) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FSlateColor                                 BorderColor;                                              // 0x03C0(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bIsExpanded;                                              // 0x03D4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03D5(0x0003) MISSED OFFSET
	float                                              MaxHeight;                                                // 0x03D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     HeaderPadding;                                            // 0x03DC(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     AreaPadding;                                              // 0x03EC(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03FC(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnExpansionChanged;                                       // 0x0400(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UWidget*                                     HeaderContent;                                            // 0x0410(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     BodyContent;                                              // 0x0418(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0420(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.ExpandableArea"));
		return ptr;
	}


	void SetIsExpanded_Animated(bool IsExpanded);//Offset:Discovery.exe+0x4B4F460
	void SetIsExpanded(bool IsExpanded);//Offset:Discovery.exe+0x4B4F500
	bool GetIsExpanded();//Offset:Discovery.exe+0x4B4F5A0
};


// Class UMG.FloatBinding
// 0x0000 (0x0060 - 0x0060)
class UFloatBinding : public UPropertyBinding
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.FloatBinding"));
		return ptr;
	}


	float GetValue();//Offset:Discovery.exe+0x4B4F8C0
};


// Class UMG.GridPanel
// 0x0030 (0x0170 - 0x0140)
class UGridPanel : public UPanelWidget
{
public:
	TArray<float>                                      ColumnFill;                                               // 0x0140(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<float>                                      RowFill;                                                  // 0x0150(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0160(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.GridPanel"));
		return ptr;
	}


	void SetRowFill(int ColumnIndex, float Coefficient);//Offset:Discovery.exe+0x4B4FB80
	void SetColumnFill(int ColumnIndex, float Coefficient);//Offset:Discovery.exe+0x4B4FC60
	class UGridSlot* AddChildToGrid(class UWidget* Content, int InRow, int InColumn);//Offset:Discovery.exe+0x4B4FD40
};


// Class UMG.GridSlot
// 0x0040 (0x0078 - 0x0038)
class UGridSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0049(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x004A(0x0002) MISSED OFFSET
	int                                                Row;                                                      // 0x004C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                RowSpan;                                                  // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Column;                                                   // 0x0054(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ColumnSpan;                                               // 0x0058(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Layer;                                                    // 0x005C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Nudge;                                                    // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0070(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.GridSlot"));
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);//Offset:Discovery.exe+0x4B502C0
	void SetRowSpan(int InRowSpan);//Offset:Discovery.exe+0x4B50660
	void SetRow(int InRow);//Offset:Discovery.exe+0x4B50700
	void SetPadding(const struct FMargin& InPadding);//Offset:Discovery.exe+0x4B507A0
	void SetNudge(const struct FVector2D& InNudge);//Offset:Discovery.exe+0x4B503E0
	void SetLayer(int InLayer);//Offset:Discovery.exe+0x4B50480
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);//Offset:Discovery.exe+0x4B50350
	void SetColumnSpan(int InColumnSpan);//Offset:Discovery.exe+0x4B50520
	void SetColumn(int InColumn);//Offset:Discovery.exe+0x4B505C0
};


// Class UMG.HorizontalBox
// 0x0010 (0x0150 - 0x0140)
class UHorizontalBox : public UPanelWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0140(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.HorizontalBox"));
		return ptr;
	}


	class UHorizontalBoxSlot* AddChildToHorizontalBox(class UWidget* Content);//Offset:Discovery.exe+0x4B50E30
};


// Class UMG.HorizontalBoxSlot
// 0x0028 (0x0060 - 0x0038)
class UHorizontalBoxSlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	struct FMargin                                     Padding;                                                  // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FSlateChildSize                             Size;                                                     // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0058(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0059(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x005A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.HorizontalBoxSlot"));
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);//Offset:Discovery.exe+0x4B51210
	void SetSize(const struct FSlateChildSize& InSize);//Offset:Discovery.exe+0x4B51330
	void SetPadding(const struct FMargin& InPadding);//Offset:Discovery.exe+0x4B513D0
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);//Offset:Discovery.exe+0x4B512A0
};


// Class UMG.Int32Binding
// 0x0000 (0x0060 - 0x0060)
class UInt32Binding : public UPropertyBinding
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.Int32Binding"));
		return ptr;
	}


	int GetValue();//Offset:Discovery.exe+0x4B538D0
};


// Class UMG.InvalidationBox
// 0x0018 (0x0158 - 0x0140)
class UInvalidationBox : public UContentWidget
{
public:
	bool                                               bCanCache;                                                // 0x0140(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               CacheRelativeTransforms;                                  // 0x0141(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x16];                                      // 0x0142(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.InvalidationBox"));
		return ptr;
	}


	void SetCanCache(bool CanCache);//Offset:Discovery.exe+0x4B53B90
	void InvalidateCache();//Offset:Discovery.exe+0x155C060
	bool GetCanCache();//Offset:Discovery.exe+0x4B53C30
};


// Class UMG.UserListEntry
// 0x0000 (0x0028 - 0x0028)
class UUserListEntry : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.UserListEntry"));
		return ptr;
	}


	void BP_OnItemSelectionChanged(bool bIsSelected);//Offset:Discovery.exe+0x327F8B0
	void BP_OnItemExpansionChanged(bool bIsExpanded);//Offset:Discovery.exe+0x327F8B0
	void BP_OnEntryReleased();//Offset:Discovery.exe+0x327F8B0
};


// Class UMG.UserListEntryLibrary
// 0x0000 (0x0028 - 0x0028)
class UUserListEntryLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.UserListEntryLibrary"));
		return ptr;
	}


	bool STATIC_IsListItemSelected(const TScriptInterface<class UUserListEntry>& UserListEntry);//Offset:Discovery.exe+0x4B543B0
	bool STATIC_IsListItemExpanded(const TScriptInterface<class UUserListEntry>& UserListEntry);//Offset:Discovery.exe+0x4B54310
	class UListViewBase* STATIC_GetOwningListView(const TScriptInterface<class UUserListEntry>& UserListEntry);//Offset:Discovery.exe+0x4B54270
};


// Class UMG.UserObjectListEntry
// 0x0000 (0x0028 - 0x0028)
class UUserObjectListEntry : public UUserListEntry
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.UserObjectListEntry"));
		return ptr;
	}


	void OnListItemObjectSet(class UObject* ListItemObject);//Offset:Discovery.exe+0x327F8B0
};


// Class UMG.UserObjectListEntryLibrary
// 0x0000 (0x0028 - 0x0028)
class UUserObjectListEntryLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.UserObjectListEntryLibrary"));
		return ptr;
	}


	class UObject* STATIC_GetListItemObject(const TScriptInterface<class UUserObjectListEntry>& UserObjectListEntry);//Offset:Discovery.exe+0x4B547F0
};


// Class UMG.ListViewDesignerPreviewItem
// 0x0000 (0x0028 - 0x0028)
class UListViewDesignerPreviewItem : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.ListViewDesignerPreviewItem"));
		return ptr;
	}

};


// Class UMG.MenuAnchor
// 0x0050 (0x0190 - 0x0140)
class UMenuAnchor : public UContentWidget
{
public:
	class UClass*                                      MenuClass;                                                // 0x0140(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             OnGetMenuContentEvent;                                    // 0x0148(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnGetUserMenuContentEvent;                                // 0x0158(0x0010) (Edit, ZeroConstructor, InstancedReference)
	TEnumAsByte<EMenuPlacement>                        Placement;                                                // 0x0168(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bFitInWindow;                                             // 0x0169(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldDeferPaintingAfterWindowContent;                    // 0x016A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               UseApplicationMenuStack;                                  // 0x016B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x016C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnMenuOpenChanged;                                        // 0x0170(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0180(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.MenuAnchor"));
		return ptr;
	}


	void ToggleOpen(bool bFocusOnOpen);//Offset:Discovery.exe+0x4B57BC0
	bool ShouldOpenDueToClick();//Offset:Discovery.exe+0x4B57AA0
	void SetPlacement(TEnumAsByte<EMenuPlacement> InPlacement);//Offset:Discovery.exe+0x4B57D00
	void Open(bool bFocusMenu);//Offset:Discovery.exe+0x4B57B20
	bool IsOpen();//Offset:Discovery.exe+0x4B57AD0
	bool HasOpenSubMenus();//Offset:Discovery.exe+0x4B57A20
	class UUserWidget* GetUserWidget__DelegateSignature();//Offset:Discovery.exe+0x327F8B0
	struct FVector2D GetMenuPosition();//Offset:Discovery.exe+0x4B57A50
	void FitInWindow(bool bFit);//Offset:Discovery.exe+0x4B57C60
	void Close();//Offset:Discovery.exe+0x4B57B00
};


// Class UMG.MouseCursorBinding
// 0x0000 (0x0060 - 0x0060)
class UMouseCursorBinding : public UPropertyBinding
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.MouseCursorBinding"));
		return ptr;
	}


	TEnumAsByte<EMouseCursor> GetValue();//Offset:Discovery.exe+0x4B58400
};


// Class UMG.MovieScene2DTransformPropertySystem
// 0x0000 (0x0058 - 0x0058)
class UMovieScene2DTransformPropertySystem : public UMovieScenePropertySystem
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.MovieScene2DTransformPropertySystem"));
		return ptr;
	}

};


// Class UMG.MovieScene2DTransformSection
// 0x0668 (0x0750 - 0x00E8)
class UMovieScene2DTransformSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E8(0x0008) MISSED OFFSET
	struct FMovieScene2DTransformMask                  TransformMask;                                            // 0x00F0(0x0004)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00F4(0x0004) MISSED OFFSET
	struct FMovieSceneFloatChannel                     Translation[0x2];                                         // 0x00F8(0x00E8)
	struct FMovieSceneFloatChannel                     Rotation;                                                 // 0x02C8(0x00E8)
	struct FMovieSceneFloatChannel                     Scale[0x2];                                               // 0x03B0(0x00E8)
	struct FMovieSceneFloatChannel                     Shear[0x2];                                               // 0x0580(0x00E8)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.MovieScene2DTransformSection"));
		return ptr;
	}

};


// Class UMG.MovieScene2DTransformTrack
// 0x0000 (0x00C0 - 0x00C0)
class UMovieScene2DTransformTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.MovieScene2DTransformTrack"));
		return ptr;
	}

};


// Class UMG.MovieSceneMarginPropertySystem
// 0x0000 (0x0058 - 0x0058)
class UMovieSceneMarginPropertySystem : public UMovieScenePropertySystem
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.MovieSceneMarginPropertySystem"));
		return ptr;
	}

};


// Class UMG.MovieSceneMarginSection
// 0x03A8 (0x0490 - 0x00E8)
class UMovieSceneMarginSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E8(0x0008) MISSED OFFSET
	struct FMovieSceneFloatChannel                     TopCurve;                                                 // 0x00F0(0x00E8)
	struct FMovieSceneFloatChannel                     LeftCurve;                                                // 0x01D8(0x00E8)
	struct FMovieSceneFloatChannel                     RightCurve;                                               // 0x02C0(0x00E8)
	struct FMovieSceneFloatChannel                     BottomCurve;                                              // 0x03A8(0x00E8)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.MovieSceneMarginSection"));
		return ptr;
	}

};


// Class UMG.MovieSceneMarginTrack
// 0x0000 (0x00C0 - 0x00C0)
class UMovieSceneMarginTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.MovieSceneMarginTrack"));
		return ptr;
	}

};


// Class UMG.MovieSceneWidgetMaterialTrack
// 0x0020 (0x00C0 - 0x00A0)
class UMovieSceneWidgetMaterialTrack : public UMovieSceneMaterialTrack
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00A0(0x0008) MISSED OFFSET
	TArray<struct FName>                               BrushPropertyNamePath;                                    // 0x00A8(0x0010) (ZeroConstructor)
	struct FName                                       TrackName;                                                // 0x00B8(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.MovieSceneWidgetMaterialTrack"));
		return ptr;
	}

};


// Class UMG.MultiLineEditableText
// 0x0428 (0x0570 - 0x0148)
class UMultiLineEditableText : public UTextLayoutWidget
{
public:
	struct FText                                       Text;                                                     // 0x0148(0x0018) (Edit)
	struct FText                                       HintText;                                                 // 0x0160(0x0018) (Edit)
	struct FScriptDelegate                             HintTextDelegate;                                         // 0x0178(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0188(0x0008) MISSED OFFSET
	struct FTextBlockStyle                             WidgetStyle;                                              // 0x0190(0x0340) (Edit, BlueprintVisible)
	bool                                               bIsReadOnly;                                              // 0x04D0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x04D1(0x0007) MISSED OFFSET
	struct FSlateFontInfo                              Font;                                                     // 0x04D8(0x0058) (Deprecated)
	bool                                               SelectAllTextWhenFocused;                                 // 0x0530(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ClearTextSelectionOnFocusLoss;                            // 0x0531(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RevertTextOnEscape;                                       // 0x0532(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ClearKeyboardFocusOnCommit;                               // 0x0533(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AllowContextMenu;                                         // 0x0534(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVirtualKeyboardOptions                     VirtualKeyboardOptions;                                   // 0x0535(0x0001) (Edit)
	enum class EVirtualKeyboardDismissAction           VirtualKeyboardDismissAction;                             // 0x0536(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0537(0x0001) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnTextChanged;                                            // 0x0538(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTextCommitted;                                          // 0x0548(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0x18];                                      // 0x0558(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.MultiLineEditableText"));
		return ptr;
	}


	void SetWidgetStyle(const struct FTextBlockStyle& InWidgetStyle);//Offset:Discovery.exe+0x4B58EF0
	void SetText(const struct FText& InText);//Offset:Discovery.exe+0x4B591D0
	void SetIsReadOnly(bool bReadOnly);//Offset:Discovery.exe+0x4B58FB0
	void SetHintText(const struct FText& InHintText);//Offset:Discovery.exe+0x4B59050
	void OnMultiLineEditableTextCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);//Offset:Discovery.exe+0x327F8B0
	void OnMultiLineEditableTextChangedEvent__DelegateSignature(const struct FText& Text);//Offset:Discovery.exe+0x327F8B0
	struct FText GetText();//Offset:Discovery.exe+0x4B592C0
	struct FText GetHintText();//Offset:Discovery.exe+0x4B59140
};


// Class UMG.MultiLineEditableTextBox
// 0x0FF8 (0x1140 - 0x0148)
class UMultiLineEditableTextBox : public UTextLayoutWidget
{
public:
	struct FText                                       Text;                                                     // 0x0148(0x0018) (Edit)
	struct FText                                       HintText;                                                 // 0x0160(0x0018) (Edit)
	struct FScriptDelegate                             HintTextDelegate;                                         // 0x0178(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0188(0x0008) MISSED OFFSET
	struct FEditableTextBoxStyle                       WidgetStyle;                                              // 0x0190(0x0BA0) (Edit, BlueprintVisible)
	struct FTextBlockStyle                             TextStyle;                                                // 0x0D30(0x0340) (Edit, BlueprintVisible)
	bool                                               bIsReadOnly;                                              // 0x1070(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               AllowContextMenu;                                         // 0x1071(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVirtualKeyboardOptions                     VirtualKeyboardOptions;                                   // 0x1072(0x0001) (Edit)
	enum class EVirtualKeyboardDismissAction           VirtualKeyboardDismissAction;                             // 0x1073(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x1074(0x0004) MISSED OFFSET
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x1078(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FSlateFontInfo                              Font;                                                     // 0x1080(0x0058) (Deprecated)
	struct FLinearColor                                ForegroundColor;                                          // 0x10D8(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FLinearColor                                BackgroundColor;                                          // 0x10E8(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FLinearColor                                ReadOnlyForegroundColor;                                  // 0x10F8(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnTextChanged;                                            // 0x1108(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTextCommitted;                                          // 0x1118(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x18];                                      // 0x1128(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.MultiLineEditableTextBox"));
		return ptr;
	}


	void SetTextStyle(const struct FTextBlockStyle& InTextStyle);//Offset:Discovery.exe+0x4B599C0
	void SetText(const struct FText& InText);//Offset:Discovery.exe+0x4B59D90
	void SetIsReadOnly(bool bReadOnly);//Offset:Discovery.exe+0x4B59A80
	void SetHintText(const struct FText& InHintText);//Offset:Discovery.exe+0x4B59C10
	void SetForegroundColor(const struct FLinearColor& Color);//Offset:Discovery.exe+0x4B59920
	void SetError(const struct FText& InError);//Offset:Discovery.exe+0x4B59B20
	void OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);//Offset:Discovery.exe+0x327F8B0
	void OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text);//Offset:Discovery.exe+0x327F8B0
	struct FText GetText();//Offset:Discovery.exe+0x4B59E80
	struct FText GetHintText();//Offset:Discovery.exe+0x4B59D00
};


// Class UMG.NamedSlot
// 0x0010 (0x0150 - 0x0140)
class UNamedSlot : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0140(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.NamedSlot"));
		return ptr;
	}

};


// Class UMG.NamedSlotInterface
// 0x0000 (0x0028 - 0x0028)
class UNamedSlotInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.NamedSlotInterface"));
		return ptr;
	}

};


// Class UMG.NativeWidgetHost
// 0x0010 (0x0138 - 0x0128)
class UNativeWidgetHost : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0128(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.NativeWidgetHost"));
		return ptr;
	}

};


// Class UMG.ProgressBar
// 0x0318 (0x0440 - 0x0128)
class UProgressBar : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0128(0x0008) MISSED OFFSET
	struct FProgressBarStyle                           WidgetStyle;                                              // 0x0130(0x0290) (Edit, BlueprintVisible)
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x03C0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            BackgroundImage;                                          // 0x03C8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            FillImage;                                                // 0x03D0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            MarqueeImage;                                             // 0x03D8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              Percent;                                                  // 0x03E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EProgressBarFillType>                  BarFillType;                                              // 0x03E4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EProgressBarFillStyle>                 BarFillStyle;                                             // 0x03E5(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsMarquee;                                               // 0x03E6(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x03E7(0x0001) MISSED OFFSET
	struct FVector2D                                   BorderPadding;                                            // 0x03E8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             PercentDelegate;                                          // 0x03F8(0x0010) (ZeroConstructor, InstancedReference)
	struct FLinearColor                                FillColorAndOpacity;                                      // 0x0408(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             FillColorAndOpacityDelegate;                              // 0x0418(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0428(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.ProgressBar"));
		return ptr;
	}


	void SetPercent(float InPercent);//Offset:Discovery.exe+0x4B5C500
	void SetIsMarquee(bool InbIsMarquee);//Offset:Discovery.exe+0x4B5C3C0
	void SetFillColorAndOpacity(const struct FLinearColor& InColor);//Offset:Discovery.exe+0x4B5C460
};


// Class UMG.RetainerBox
// 0x0030 (0x0170 - 0x0140)
class URetainerBox : public UContentWidget
{
public:
	bool                                               bRetainRender;                                            // 0x0140(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bLogsZeroSizePaint;                                       // 0x0141(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RenderOnInvalidation;                                     // 0x0142(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               RenderOnPhase;                                            // 0x0143(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Phase;                                                    // 0x0144(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                PhaseCount;                                               // 0x0148(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x014C(0x0004) MISSED OFFSET
	class UMaterialInterface*                          EffectMaterial;                                           // 0x0150(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       TextureParameter;                                         // 0x0158(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0160(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.RetainerBox"));
		return ptr;
	}


	void SetTextureParameter(const struct FName& TextureParameter);//Offset:Discovery.exe+0x4B5CB70
	void SetRetainRendering(bool bInRetainRendering);//Offset:Discovery.exe+0x4B5CAD0
	void SetRenderingPhase(int RenderPhase, int TotalPhases);//Offset:Discovery.exe+0x4B5CD00
	void SetEffectMaterial(class UMaterialInterface* EffectMaterial);//Offset:Discovery.exe+0x4B5CC10
	void RequestRender();//Offset:Discovery.exe+0x4B5CCE0
	class UMaterialInstanceDynamic* GetEffectMaterial();//Offset:Discovery.exe+0x4B5CCB0
};


// Class UMG.RichTextBlockImageDecorator
// 0x0008 (0x0030 - 0x0028)
class URichTextBlockImageDecorator : public URichTextBlockDecorator
{
public:
	class UDataTable*                                  ImageSet;                                                 // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.RichTextBlockImageDecorator"));
		return ptr;
	}

};


// Class UMG.SafeZone
// 0x0018 (0x0158 - 0x0140)
class USafeZone : public UContentWidget
{
public:
	bool                                               PadLeft;                                                  // 0x0140(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               PadRight;                                                 // 0x0141(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               PadTop;                                                   // 0x0142(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               PadBottom;                                                // 0x0143(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0144(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.SafeZone"));
		return ptr;
	}


	void SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom);//Offset:Discovery.exe+0x4B5EB90
};


// Class UMG.SafeZoneSlot
// 0x0028 (0x0060 - 0x0038)
class USafeZoneSlot : public UPanelSlot
{
public:
	bool                                               bIsTitleSafe;                                             // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	struct FMargin                                     SafeAreaScale;                                            // 0x003C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  HAlign;                                                   // 0x004C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VAlign;                                                   // 0x004D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x004E(0x0002) MISSED OFFSET
	struct FMargin                                     Padding;                                                  // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.SafeZoneSlot"));
		return ptr;
	}

};


// Class UMG.ScaleBox
// 0x0020 (0x0160 - 0x0140)
class UScaleBox : public UContentWidget
{
public:
	TEnumAsByte<EStretch>                              Stretch;                                                  // 0x0140(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EStretchDirection>                     StretchDirection;                                         // 0x0141(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0142(0x0002) MISSED OFFSET
	float                                              UserSpecifiedScale;                                       // 0x0144(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreInheritedScale;                                     // 0x0148(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x17];                                      // 0x0149(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.ScaleBox"));
		return ptr;
	}


	void SetUserSpecifiedScale(float InUserSpecifiedScale);//Offset:Discovery.exe+0x4B5F150
	void SetStretchDirection(TEnumAsByte<EStretchDirection> InStretchDirection);//Offset:Discovery.exe+0x4B5F1F0
	void SetStretch(TEnumAsByte<EStretch> InStretch);//Offset:Discovery.exe+0x4B5F280
	void SetIgnoreInheritedScale(bool bInIgnoreInheritedScale);//Offset:Discovery.exe+0x4B5F0B0
};


// Class UMG.ScaleBoxSlot
// 0x0028 (0x0060 - 0x0038)
class UScaleBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0049(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x16];                                      // 0x004A(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.ScaleBoxSlot"));
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);//Offset:Discovery.exe+0x4B45FE0
	void SetPadding(const struct FMargin& InPadding);//Offset:Discovery.exe+0x4B5F730
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);//Offset:Discovery.exe+0x4B46070
};


// Class UMG.ScrollBar
// 0x07B8 (0x08E0 - 0x0128)
class UScrollBar : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0128(0x0008) MISSED OFFSET
	struct FScrollBarStyle                             WidgetStyle;                                              // 0x0130(0x0770) (Edit, BlueprintVisible)
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x08A0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bAlwaysShowScrollbar;                                     // 0x08A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAlwaysShowScrollbarTrack;                                // 0x08A9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EOrientation>                          Orientation;                                              // 0x08AA(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x08AB(0x0005) MISSED OFFSET
	struct FVector2D                                   Thickness;                                                // 0x08B0(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     Padding;                                                  // 0x08C0(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x08D0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.ScrollBar"));
		return ptr;
	}


	void SetState(float InOffsetFraction, float InThumbSizeFraction);//Offset:Discovery.exe+0x4B5FB60
};


// Class UMG.ScrollBoxSlot
// 0x0020 (0x0058 - 0x0038)
class UScrollBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0049(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xE];                                       // 0x004A(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.ScrollBoxSlot"));
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);//Offset:Discovery.exe+0x4B61520
	void SetPadding(const struct FMargin& InPadding);//Offset:Discovery.exe+0x4B61640
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);//Offset:Discovery.exe+0x4B615B0
};


// Class UMG.SizeBoxSlot
// 0x0028 (0x0060 - 0x0038)
class USizeBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0048(0x0010) MISSED OFFSET
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0058(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0059(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x005A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.SizeBoxSlot"));
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);//Offset:Discovery.exe+0x4B63370
	void SetPadding(const struct FMargin& InPadding);//Offset:Discovery.exe+0x4B63490
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);//Offset:Discovery.exe+0x4B63400
};


// Class UMG.SlateBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class USlateBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.SlateBlueprintLibrary"));
		return ptr;
	}


	struct FVector2D STATIC_TransformVectorLocalToAbsolute(const struct FGeometry& Geometry, const struct FVector2D& LocalVector);//Offset:Discovery.exe+0x4B64270
	struct FVector2D STATIC_TransformVectorAbsoluteToLocal(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteVector);//Offset:Discovery.exe+0x4B64380
	float STATIC_TransformScalarLocalToAbsolute(const struct FGeometry& Geometry, float LocalScalar);//Offset:Discovery.exe+0x4B64490
	float STATIC_TransformScalarAbsoluteToLocal(const struct FGeometry& Geometry, float AbsoluteScalar);//Offset:Discovery.exe+0x4B64590
	void STATIC_ScreenToWidgetLocal(class UObject* WorldContextObject, const struct FGeometry& Geometry, const struct FVector2D& ScreenPosition, bool bIncludeWindowPosition, struct FVector2D* LocalCoordinate);//Offset:Discovery.exe+0x4B63B70
	void STATIC_ScreenToWidgetAbsolute(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, bool bIncludeWindowPosition, struct FVector2D* AbsoluteCoordinate);//Offset:Discovery.exe+0x4B639F0
	void STATIC_ScreenToViewport(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, struct FVector2D* ViewportPosition);//Offset:Discovery.exe+0x4B638C0
	void STATIC_LocalToViewport(class UObject* WorldContextObject, const struct FGeometry& Geometry, const struct FVector2D& LocalCoordinate, struct FVector2D* PixelPosition, struct FVector2D* ViewportPosition);//Offset:Discovery.exe+0x4B63EE0
	struct FVector2D STATIC_LocalToAbsolute(const struct FGeometry& Geometry, const struct FVector2D& LocalCoordinate);//Offset:Discovery.exe+0x4B648D0
	bool STATIC_IsUnderLocation(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteCoordinate);//Offset:Discovery.exe+0x4B64AF0
	struct FVector2D STATIC_GetLocalTopLeft(const struct FGeometry& Geometry);//Offset:Discovery.exe+0x4B64810
	struct FVector2D STATIC_GetLocalSize(const struct FGeometry& Geometry);//Offset:Discovery.exe+0x4B64750
	struct FVector2D STATIC_GetAbsoluteSize(const struct FGeometry& Geometry);//Offset:Discovery.exe+0x4B64690
	bool STATIC_EqualEqual_SlateBrush(const struct FSlateBrush& A, const struct FSlateBrush& B);//Offset:Discovery.exe+0x4B640E0
	void STATIC_AbsoluteToViewport(class UObject* WorldContextObject, const struct FVector2D& AbsoluteDesktopCoordinate, struct FVector2D* PixelPosition, struct FVector2D* ViewportPosition);//Offset:Discovery.exe+0x4B63D60
	struct FVector2D STATIC_AbsoluteToLocal(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteCoordinate);//Offset:Discovery.exe+0x4B649E0
};


// Class UMG.SlateVectorArtData
// 0x0048 (0x0070 - 0x0028)
class USlateVectorArtData : public UObject
{
public:
	TArray<struct FSlateMeshVertex>                    VertexData;                                               // 0x0028(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   IndexData;                                                // 0x0038(0x0010) (ZeroConstructor)
	class UMaterialInterface*                          Material;                                                 // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ExtentMin;                                                // 0x0050(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ExtentMax;                                                // 0x0060(0x0010) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.SlateVectorArtData"));
		return ptr;
	}

};


// Class UMG.SlateAccessibleWidgetData
// 0x0058 (0x0080 - 0x0028)
class USlateAccessibleWidgetData : public UObject
{
public:
	bool                                               bCanChildrenBeAccessible;                                 // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	enum class ESlateAccessibleBehavior                AccessibleBehavior;                                       // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData)
	enum class ESlateAccessibleBehavior                AccessibleSummaryBehavior;                                // 0x002A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x002B(0x0005) MISSED OFFSET
	struct FText                                       AccessibleText;                                           // 0x0030(0x0018)
	struct FScriptDelegate                             AccessibleTextDelegate;                                   // 0x0048(0x0010) (ZeroConstructor, InstancedReference)
	struct FText                                       AccessibleSummaryText;                                    // 0x0058(0x0018)
	struct FScriptDelegate                             AccessibleSummaryTextDelegate;                            // 0x0070(0x0010) (ZeroConstructor, InstancedReference)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.SlateAccessibleWidgetData"));
		return ptr;
	}

};


// Class UMG.Spacer
// 0x0020 (0x0148 - 0x0128)
class USpacer : public UWidget
{
public:
	struct FVector2D                                   Size;                                                     // 0x0128(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0138(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.Spacer"));
		return ptr;
	}


	void SetSize(const struct FVector2D& InSize);//Offset:Discovery.exe+0x4B669F0
};


// Class UMG.SpinBox
// 0x0718 (0x0840 - 0x0128)
class USpinBox : public UWidget
{
public:
	float                                              Value;                                                    // 0x0128(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             ValueDelegate;                                            // 0x012C(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData00[0x4];                                       // 0x013C(0x0004) MISSED OFFSET
	struct FSpinBoxStyle                               WidgetStyle;                                              // 0x0140(0x0600) (Edit, BlueprintVisible)
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x0740(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                MinFractionalDigits;                                      // 0x0748(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxFractionalDigits;                                      // 0x074C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAlwaysUsesDeltaSnap;                                     // 0x0750(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0751(0x0003) MISSED OFFSET
	float                                              Delta;                                                    // 0x0754(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SliderExponent;                                           // 0x0758(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x075C(0x0004) MISSED OFFSET
	struct FSlateFontInfo                              Font;                                                     // 0x0760(0x0058) (Edit, BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<ETextJustify>                          Justification;                                            // 0x07B8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x07B9(0x0003) MISSED OFFSET
	float                                              MinDesiredWidth;                                          // 0x07BC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               ClearKeyboardFocusOnCommit;                               // 0x07C0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               SelectAllTextOnCommit;                                    // 0x07C1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x07C2(0x0002) MISSED OFFSET
	struct FSlateColor                                 ForegroundColor;                                          // 0x07C4(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FScriptMulticastDelegate                    OnValueChanged;                                           // 0x07D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnValueCommitted;                                         // 0x07E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBeginSliderMovement;                                    // 0x07F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEndSliderMovement;                                      // 0x0808(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      bOverride_MinValue : 1;                                   // 0x0818(0x0001) (Edit)
	unsigned char                                      bOverride_MaxValue : 1;                                   // 0x0818(0x0001) (Edit)
	unsigned char                                      bOverride_MinSliderValue : 1;                             // 0x0818(0x0001) (Edit)
	unsigned char                                      bOverride_MaxSliderValue : 1;                             // 0x0818(0x0001) (Edit)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0819(0x0003) MISSED OFFSET
	float                                              MinValue;                                                 // 0x081C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // 0x0820(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinSliderValue;                                           // 0x0824(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxSliderValue;                                           // 0x0828(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x14];                                      // 0x082C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.SpinBox"));
		return ptr;
	}


	void SetValue(float NewValue);//Offset:Discovery.exe+0x4B67590
	void SetMinValue(float NewValue);//Offset:Discovery.exe+0x4B67180
	void SetMinSliderValue(float NewValue);//Offset:Discovery.exe+0x4B66FA0
	void SetMinFractionalDigits(int NewValue);//Offset:Discovery.exe+0x4B674C0
	void SetMaxValue(float NewValue);//Offset:Discovery.exe+0x4B67090
	void SetMaxSliderValue(float NewValue);//Offset:Discovery.exe+0x4B66EB0
	void SetMaxFractionalDigits(int NewValue);//Offset:Discovery.exe+0x4B673F0
	void SetForegroundColor(const struct FSlateColor& InForegroundColor);//Offset:Discovery.exe+0x4B66DE0
	void SetDelta(float NewValue);//Offset:Discovery.exe+0x4B67250
	void SetAlwaysUsesDeltaSnap(bool bNewValue);//Offset:Discovery.exe+0x4B67320
	void OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit> CommitMethod);//Offset:Discovery.exe+0x327F8B0
	void OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);//Offset:Discovery.exe+0x327F8B0
	void OnSpinBoxBeginSliderMovement__DelegateSignature();//Offset:Discovery.exe+0x327F8B0
	float GetValue();//Offset:Discovery.exe+0x4B67630
	float GetMinValue();//Offset:Discovery.exe+0x4B67220
	float GetMinSliderValue();//Offset:Discovery.exe+0x4B67040
	int GetMinFractionalDigits();//Offset:Discovery.exe+0x4B67560
	float GetMaxValue();//Offset:Discovery.exe+0x4B67130
	float GetMaxSliderValue();//Offset:Discovery.exe+0x4B66F50
	int GetMaxFractionalDigits();//Offset:Discovery.exe+0x4B67490
	float GetDelta();//Offset:Discovery.exe+0x4B672F0
	bool GetAlwaysUsesDeltaSnap();//Offset:Discovery.exe+0x4B673C0
	void ClearMinValue();//Offset:Discovery.exe+0x4B67160
	void ClearMinSliderValue();//Offset:Discovery.exe+0x4B66F80
	void ClearMaxValue();//Offset:Discovery.exe+0x4B67070
	void ClearMaxSliderValue();//Offset:Discovery.exe+0x4B66E90
};


// Class UMG.TextBinding
// 0x0008 (0x0068 - 0x0060)
class UTextBinding : public UPropertyBinding
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0060(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.TextBinding"));
		return ptr;
	}


	struct FText GetTextValue();//Offset:Discovery.exe+0x4B68E80
	struct FString GetStringValue();//Offset:Discovery.exe+0x4B68E00
};


// Class UMG.Throbber
// 0x00F8 (0x0220 - 0x0128)
class UThrobber : public UWidget
{
public:
	int                                                NumberOfPieces;                                           // 0x0128(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAnimateHorizontally;                                     // 0x012C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAnimateVertically;                                       // 0x012D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAnimateOpacity;                                          // 0x012E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x012F(0x0001) MISSED OFFSET
	class USlateBrushAsset*                            PieceImage;                                               // 0x0130(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0138(0x0008) MISSED OFFSET
	struct FSlateBrush                                 Image;                                                    // 0x0140(0x00D0) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0210(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.Throbber"));
		return ptr;
	}


	void SetNumberOfPieces(int InNumberOfPieces);//Offset:Discovery.exe+0x4B6AAE0
	void SetAnimateVertically(bool bInAnimateVertically);//Offset:Discovery.exe+0x4B6A9A0
	void SetAnimateOpacity(bool bInAnimateOpacity);//Offset:Discovery.exe+0x4B6A900
	void SetAnimateHorizontally(bool bInAnimateHorizontally);//Offset:Discovery.exe+0x4B6AA40
};


// Class UMG.UMGSequencePlayer
// 0x0370 (0x0398 - 0x0028)
class UUMGSequencePlayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x210];                                     // 0x0028(0x0210) MISSED OFFSET
	class UWidgetAnimation*                            Animation;                                                // 0x0238(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0240(0x0008) MISSED OFFSET
	struct FMovieSceneRootEvaluationTemplateInstance   RootTemplateInstance;                                     // 0x0248(0x00E0)
	unsigned char                                      UnknownData02[0x70];                                      // 0x0328(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.UMGSequencePlayer"));
		return ptr;
	}


	void SetUserTag(const struct FName& InUserTag);//Offset:Discovery.exe+0x4B6BB30
	struct FName GetUserTag();//Offset:Discovery.exe+0x4B6BBE0
};


// Class UMG.UMGSequenceTickManager
// 0x00F0 (0x0118 - 0x0028)
class UUMGSequenceTickManager : public UObject
{
public:
	TMap<TWeakObjectPtr<class UUserWidget>, struct FSequenceTickManagerWidgetData> WeakUserWidgetData;                                       // 0x0028(0x0050) (Transient)
	class UMovieSceneEntitySystemLinker*               Linker;                                                   // 0x0078(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x98];                                      // 0x0080(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.UMGSequenceTickManager"));
		return ptr;
	}

};


// Class UMG.UniformGridPanel
// 0x0028 (0x0168 - 0x0140)
class UUniformGridPanel : public UPanelWidget
{
public:
	struct FMargin                                     SlotPadding;                                              // 0x0140(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinDesiredSlotWidth;                                      // 0x0150(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinDesiredSlotHeight;                                     // 0x0154(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0158(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.UniformGridPanel"));
		return ptr;
	}


	void SetSlotPadding(const struct FMargin& InSlotPadding);//Offset:Discovery.exe+0x4B6C3E0
	void SetMinDesiredSlotWidth(float InMinDesiredSlotWidth);//Offset:Discovery.exe+0x4B6C340
	void SetMinDesiredSlotHeight(float InMinDesiredSlotHeight);//Offset:Discovery.exe+0x4B6C2A0
	class UUniformGridSlot* AddChildToUniformGrid(class UWidget* Content, int InRow, int InColumn);//Offset:Discovery.exe+0x4B6C160
};


// Class UMG.UniformGridSlot
// 0x0018 (0x0050 - 0x0038)
class UUniformGridSlot : public UPanelSlot
{
public:
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0039(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x003A(0x0002) MISSED OFFSET
	int                                                Row;                                                      // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Column;                                                   // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0044(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.UniformGridSlot"));
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);//Offset:Discovery.exe+0x4B6C940
	void SetRow(int InRow);//Offset:Discovery.exe+0x4B6CB00
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);//Offset:Discovery.exe+0x4B6C9D0
	void SetColumn(int InColumn);//Offset:Discovery.exe+0x4B6CA60
};


// Class UMG.UserWidgetBlueprint
// 0x0000 (0x00A0 - 0x00A0)
class UUserWidgetBlueprint : public UBlueprint
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.UserWidgetBlueprint"));
		return ptr;
	}

};


// Class UMG.VerticalBox
// 0x0010 (0x0150 - 0x0140)
class UVerticalBox : public UPanelWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0140(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.VerticalBox"));
		return ptr;
	}


	class UVerticalBoxSlot* AddChildToVerticalBox(class UWidget* Content);//Offset:Discovery.exe+0x4B78A60
};


// Class UMG.VerticalBoxSlot
// 0x0028 (0x0060 - 0x0038)
class UVerticalBoxSlot : public UPanelSlot
{
public:
	struct FSlateChildSize                             Size;                                                     // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FMargin                                     Padding;                                                  // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0058(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0059(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x005A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.VerticalBoxSlot"));
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);//Offset:Discovery.exe+0x4B78EF0
	void SetSize(const struct FSlateChildSize& InSize);//Offset:Discovery.exe+0x4B79010
	void SetPadding(const struct FMargin& InPadding);//Offset:Discovery.exe+0x4B790B0
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);//Offset:Discovery.exe+0x4B78F80
};


// Class UMG.Viewport
// 0x0050 (0x0190 - 0x0140)
class UViewport : public UContentWidget
{
public:
	struct FLinearColor                                BackgroundColor;                                          // 0x0140(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0150(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.Viewport"));
		return ptr;
	}


	class AActor* Spawn(class UClass* ActorClass);//Offset:Discovery.exe+0x4B794C0
	void SetViewRotation(const struct FRotator& Rotation);//Offset:Discovery.exe+0x4B79560
	void SetViewLocation(const struct FVector& Location);//Offset:Discovery.exe+0x4B79660
	struct FRotator GetViewRotation();//Offset:Discovery.exe+0x4B79600
	class UWorld* GetViewportWorld();//Offset:Discovery.exe+0x4B79760
	struct FVector GetViewLocation();//Offset:Discovery.exe+0x4B79700
};


// Class UMG.VisibilityBinding
// 0x0000 (0x0060 - 0x0060)
class UVisibilityBinding : public UPropertyBinding
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.VisibilityBinding"));
		return ptr;
	}


	enum class ESlateVisibility GetValue();//Offset:Discovery.exe+0x4B79CC0
};


// Class UMG.WidgetAnimation
// 0x0030 (0x0090 - 0x0060)
class UWidgetAnimation : public UMovieSceneSequence
{
public:
	class UMovieScene*                                 MovieScene;                                               // 0x0060(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FWidgetAnimationBinding>             AnimationBindings;                                        // 0x0068(0x0010) (ZeroConstructor)
	bool                                               bLegacyFinishOnStop;                                      // 0x0078(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0079(0x0007) MISSED OFFSET
	struct FString                                     DisplayLabel;                                             // 0x0080(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.WidgetAnimation"));
		return ptr;
	}


	void UnbindFromAnimationStarted(class UUserWidget* Widget, const struct FScriptDelegate& Delegate);//Offset:Discovery.exe+0x4B7DA10
	void UnbindFromAnimationFinished(class UUserWidget* Widget, const struct FScriptDelegate& Delegate);//Offset:Discovery.exe+0x4B7D770
	void UnbindAllFromAnimationStarted(class UUserWidget* Widget);//Offset:Discovery.exe+0x4B7D970
	void UnbindAllFromAnimationFinished(class UUserWidget* Widget);//Offset:Discovery.exe+0x4B7D6D0
	float GetStartTime();//Offset:Discovery.exe+0x4B7DC40
	float GetEndTime();//Offset:Discovery.exe+0x4B7DC10
	void BindToAnimationStarted(class UUserWidget* Widget, const struct FScriptDelegate& Delegate);//Offset:Discovery.exe+0x4B7DB10
	void BindToAnimationFinished(class UUserWidget* Widget, const struct FScriptDelegate& Delegate);//Offset:Discovery.exe+0x4B7D870
};


// Class UMG.WidgetAnimationDelegateBinding
// 0x0010 (0x0038 - 0x0028)
class UWidgetAnimationDelegateBinding : public UDynamicBlueprintBinding
{
public:
	TArray<struct FBlueprintWidgetAnimationDelegateBinding> WidgetAnimationDelegateBindings;                          // 0x0028(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.WidgetAnimationDelegateBinding"));
		return ptr;
	}

};


// Class UMG.WidgetAnimationPlayCallbackProxy
// 0x0020 (0x0048 - 0x0028)
class UWidgetAnimationPlayCallbackProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    Finished;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.WidgetAnimationPlayCallbackProxy"));
		return ptr;
	}


	class UWidgetAnimationPlayCallbackProxy* STATIC_CreatePlayAnimationTimeRangeProxyObject(class UUserWidget* Widget, class UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed, class UUMGSequencePlayer** Result);//Offset:Discovery.exe+0x4B7EC80
	class UWidgetAnimationPlayCallbackProxy* STATIC_CreatePlayAnimationProxyObject(class UUserWidget* Widget, class UWidgetAnimation* InAnimation, float StartAtTime, int NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed, class UUMGSequencePlayer** Result);//Offset:Discovery.exe+0x4B7EF50
};


// Class UMG.WidgetBinding
// 0x0000 (0x0060 - 0x0060)
class UWidgetBinding : public UPropertyBinding
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.WidgetBinding"));
		return ptr;
	}


	class UWidget* GetValue();//Offset:Discovery.exe+0x4B7F4E0
};


// Class UMG.WidgetBlueprintGeneratedClass
// 0x0040 (0x03C8 - 0x0388)
class UWidgetBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:
	class UWidgetTree*                                 WidgetTree;                                               // 0x0388(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bClassRequiresNativeTick : 1;                             // 0x0390(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0391(0x0007) MISSED OFFSET
	TArray<struct FDelegateRuntimeBinding>             Bindings;                                                 // 0x0398(0x0010) (ZeroConstructor)
	TArray<class UWidgetAnimation*>                    Animations;                                               // 0x03A8(0x0010) (ZeroConstructor)
	TArray<struct FName>                               NamedSlots;                                               // 0x03B8(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.WidgetBlueprintGeneratedClass"));
		return ptr;
	}

};


// Class UMG.WidgetBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UWidgetBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.WidgetBlueprintLibrary"));
		return ptr;
	}


	struct FEventReply STATIC_UnlockMouse(struct FEventReply* Reply);//Offset:Discovery.exe+0x4B824B0
	struct FEventReply STATIC_Unhandled();//Offset:Discovery.exe+0x4B82A90
	void STATIC_SetWindowTitleBarState(class UWidget* TitleBarContent, enum class EWindowTitleBarMode Mode, bool bTitleBarDragEnabled, bool bWindowButtonsVisible, bool bTitleBarVisible);//Offset:Discovery.exe+0x4B7FB80
	void STATIC_SetWindowTitleBarOnCloseClickedDelegate(const struct FScriptDelegate& Delegate);//Offset:Discovery.exe+0x4B7FAB0
	void STATIC_SetWindowTitleBarCloseButtonActive(bool bActive);//Offset:Discovery.exe+0x4B7FA20
	struct FEventReply STATIC_SetUserFocus(class UWidget* FocusWidget, bool bInAllUsers, struct FEventReply* Reply);//Offset:Discovery.exe+0x4B822C0
	struct FEventReply STATIC_SetMousePosition(const struct FVector2D& NewMousePosition, struct FEventReply* Reply);//Offset:Discovery.exe+0x4B81D90
	void STATIC_SetInputMode_UIOnlyEx(class APlayerController* PlayerController, class UWidget* InWidgetToFocus, enum class EMouseLockMode InMouseLockMode);//Offset:Discovery.exe+0x4B838A0
	void STATIC_SetInputMode_GameOnly(class APlayerController* PlayerController);//Offset:Discovery.exe+0x4B836A0
	void STATIC_SetInputMode_GameAndUIEx(class APlayerController* PlayerController, class UWidget* InWidgetToFocus, enum class EMouseLockMode InMouseLockMode, bool bHideCursorDuringCapture);//Offset:Discovery.exe+0x4B83730
	bool STATIC_SetHardwareCursor(class UObject* WorldContextObject, TEnumAsByte<EMouseCursor> CursorShape, const struct FName& CursorName, const struct FVector2D& HotSpot);//Offset:Discovery.exe+0x4B7FD50
	void STATIC_SetFocusToGameViewport();//Offset:Discovery.exe+0x4B83680
	void STATIC_SetColorVisionDeficiencyType(enum class EColorVisionDeficiency Type, float Severity, bool CorrectDeficiency, bool ShowCorrectionWithDeficiency);//Offset:Discovery.exe+0x4B7FED0
	void STATIC_SetBrushResourceToTexture(class UTexture2D* Texture, struct FSlateBrush* Brush);//Offset:Discovery.exe+0x4B80DB0
	void STATIC_SetBrushResourceToMaterial(class UMaterialInterface* Material, struct FSlateBrush* Brush);//Offset:Discovery.exe+0x4B80DB0
	void STATIC_RestorePreviousWindowTitleBarState();//Offset:Discovery.exe+0x4B7FB60
	struct FEventReply STATIC_ReleaseMouseCapture(struct FEventReply* Reply);//Offset:Discovery.exe+0x4B827A0
	struct FEventReply STATIC_ReleaseJoystickCapture(bool bInAllJoysticks, struct FEventReply* Reply);//Offset:Discovery.exe+0x4B81F30
	void OnGameWindowCloseButtonClickedDelegate__DelegateSignature();//Offset:Discovery.exe+0x327F8B0
	struct FSlateBrush STATIC_NoResourceBrush();//Offset:Discovery.exe+0x4B80CA0
	struct FSlateBrush STATIC_MakeBrushFromTexture(class UTexture2D* Texture, int Width, int Height);//Offset:Discovery.exe+0x4B813B0
	struct FSlateBrush STATIC_MakeBrushFromMaterial(class UMaterialInterface* Material, int Width, int Height);//Offset:Discovery.exe+0x4B811C0
	struct FSlateBrush STATIC_MakeBrushFromAsset(class USlateBrushAsset* BrushAsset);//Offset:Discovery.exe+0x4B815A0
	struct FEventReply STATIC_LockMouse(class UWidget* CapturingWidget, struct FEventReply* Reply);//Offset:Discovery.exe+0x4B82600
	bool STATIC_IsDragDropping();//Offset:Discovery.exe+0x4B81750
	struct FEventReply STATIC_Handled();//Offset:Discovery.exe+0x4B82B00
	void STATIC_GetSafeZonePadding(class UObject* WorldContextObject, struct FVector4* SafePadding, struct FVector2D* SafePaddingScale, struct FVector4* SpillOverPadding);//Offset:Discovery.exe+0x4B80050
	struct FKeyEvent STATIC_GetKeyEventFromAnalogInputEvent(const struct FAnalogInputEvent& Event);//Offset:Discovery.exe+0x4B80560
	struct FInputEvent STATIC_GetInputEventFromPointerEvent(const struct FPointerEvent& Event);//Offset:Discovery.exe+0x4B80300
	struct FInputEvent STATIC_GetInputEventFromNavigationEvent(const struct FNavigationEvent& Event);//Offset:Discovery.exe+0x4B80220
	struct FInputEvent STATIC_GetInputEventFromKeyEvent(const struct FKeyEvent& Event);//Offset:Discovery.exe+0x4B80730
	struct FInputEvent STATIC_GetInputEventFromCharacterEvent(const struct FCharacterEvent& Event);//Offset:Discovery.exe+0x4B80480
	class UMaterialInstanceDynamic* STATIC_GetDynamicMaterial(struct FSlateBrush* Brush);//Offset:Discovery.exe+0x4B80BB0
	class UDragDropOperation* STATIC_GetDragDroppingContent();//Offset:Discovery.exe+0x4B81720
	class UTexture2D* STATIC_GetBrushResourceAsTexture2D(const struct FSlateBrush& Brush);//Offset:Discovery.exe+0x4B80FE0
	class UMaterialInterface* STATIC_GetBrushResourceAsMaterial(const struct FSlateBrush& Brush);//Offset:Discovery.exe+0x4B80EF0
	class UObject* STATIC_GetBrushResource(const struct FSlateBrush& Brush);//Offset:Discovery.exe+0x4B810D0
	void STATIC_GetAllWidgetsWithInterface(class UObject* WorldContextObject, class UClass* Interface, bool TopLevelOnly, TArray<class UUserWidget*>* FoundWidgets);//Offset:Discovery.exe+0x4B80850
	void STATIC_GetAllWidgetsOfClass(class UObject* WorldContextObject, class UClass* WidgetClass, bool TopLevelOnly, TArray<class UUserWidget*>* FoundWidgets);//Offset:Discovery.exe+0x4B809F0
	struct FEventReply STATIC_EndDragDrop(struct FEventReply* Reply);//Offset:Discovery.exe+0x4B81780
	void STATIC_DrawTextFormatted(const struct FText& Text, const struct FVector2D& Position, class UFont* Font, int FontSize, const struct FName& FontTypeFace, const struct FLinearColor& Tint, struct FPaintContext* Context);//Offset:Discovery.exe+0x4B82B70
	void STATIC_DrawText(const struct FString& InString, const struct FVector2D& Position, const struct FLinearColor& Tint, struct FPaintContext* Context);//Offset:Discovery.exe+0x4B82E70
	void STATIC_DrawLines(TArray<struct FVector2D> Points, const struct FLinearColor& Tint, bool bAntiAlias, float Thickness, struct FPaintContext* Context);//Offset:Discovery.exe+0x4B83010
	void STATIC_DrawLine(const struct FVector2D& PositionA, const struct FVector2D& PositionB, const struct FLinearColor& Tint, bool bAntiAlias, float Thickness, struct FPaintContext* Context);//Offset:Discovery.exe+0x4B83220
	void STATIC_DrawBox(const struct FVector2D& Position, const struct FVector2D& Size, class USlateBrushAsset* Brush, const struct FLinearColor& Tint, struct FPaintContext* Context);//Offset:Discovery.exe+0x4B83480
	void STATIC_DismissAllMenus();//Offset:Discovery.exe+0x4B80B90
	struct FEventReply STATIC_DetectDragIfPressed(const struct FPointerEvent& PointerEvent, class UWidget* WidgetDetectingDrag, const struct FKey& DragKey);//Offset:Discovery.exe+0x4B818D0
	struct FEventReply STATIC_DetectDrag(class UWidget* WidgetDetectingDrag, const struct FKey& DragKey, struct FEventReply* Reply);//Offset:Discovery.exe+0x4B81B50
	class UDragDropOperation* STATIC_CreateDragDropOperation(class UClass* OperationClass);//Offset:Discovery.exe+0x4B839D0
	class UUserWidget* STATIC_Create(class UObject* WorldContextObject, class UClass* WidgetType, class APlayerController* OwningPlayer);//Offset:Discovery.exe+0x146C200
	struct FEventReply STATIC_ClearUserFocus(bool bInAllUsers, struct FEventReply* Reply);//Offset:Discovery.exe+0x4B81F30
	struct FEventReply STATIC_CaptureMouse(class UWidget* CapturingWidget, struct FEventReply* Reply);//Offset:Discovery.exe+0x4B828F0
	struct FEventReply STATIC_CaptureJoystick(class UWidget* CapturingWidget, bool bInAllJoysticks, struct FEventReply* Reply);//Offset:Discovery.exe+0x4B820D0
	void STATIC_CancelDragDrop();//Offset:Discovery.exe+0x4B81700
};


// Class UMG.WidgetInteractionComponent
// 0x02D0 (0x05A0 - 0x02D0)
class UWidgetInteractionComponent : public USceneComponent
{
public:
	struct FScriptMulticastDelegate                    OnHoveredWidgetChanged;                                   // 0x02D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x02E0(0x0010) MISSED OFFSET
	int                                                VirtualUserIndex;                                         // 0x02F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PointerIndex;                                             // 0x02F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     TraceChannel;                                             // 0x02F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02F9(0x0003) MISSED OFFSET
	float                                              InteractionDistance;                                      // 0x02FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	enum class EWidgetInteractionSource                InteractionSource;                                        // 0x0300(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableHitTesting;                                        // 0x0301(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShowDebug;                                               // 0x0302(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0303(0x0001) MISSED OFFSET
	float                                              DebugSphereLineThickness;                                 // 0x0304(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DebugLineThickness;                                       // 0x0308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                DebugColor;                                               // 0x030C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7C];                                      // 0x031C(0x007C) MISSED OFFSET
	struct FHitResult                                  CustomHitResult;                                          // 0x0398(0x00E8) (Transient, IsPlainOldData)
	struct FVector2D                                   LocalHitLocation;                                         // 0x0480(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector2D                                   LastLocalHitLocation;                                     // 0x0490(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetComponent*                            HoveredWidgetComponent;                                   // 0x04A0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FHitResult                                  LastHitResult;                                            // 0x04A8(0x00E8) (Transient, IsPlainOldData)
	bool                                               bIsHoveredWidgetInteractable;                             // 0x0590(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsHoveredWidgetFocusable;                                // 0x0591(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsHoveredWidgetHitTestVisible;                           // 0x0592(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0xD];                                       // 0x0593(0x000D) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.WidgetInteractionComponent"));
		return ptr;
	}


	void SetFocus(class UWidget* FocusWidget);//Offset:Discovery.exe+0x4B89980
	void SetCustomHitResult(const struct FHitResult& HitResult);//Offset:Discovery.exe+0x4B89A20
	bool SendKeyChar(const struct FString& Characters, bool bRepeat);//Offset:Discovery.exe+0x4B89D80
	void ScrollWheel(float ScrollDelta);//Offset:Discovery.exe+0x4B89CE0
	void ReleasePointerKey(const struct FKey& Key);//Offset:Discovery.exe+0x4B8A1F0
	bool ReleaseKey(const struct FKey& Key);//Offset:Discovery.exe+0x4B89FC0
	void PressPointerKey(const struct FKey& Key);//Offset:Discovery.exe+0x4B8A2E0
	bool PressKey(const struct FKey& Key, bool bRepeat);//Offset:Discovery.exe+0x4B8A0B0
	bool PressAndReleaseKey(const struct FKey& Key);//Offset:Discovery.exe+0x4B89ED0
	bool IsOverInteractableWidget();//Offset:Discovery.exe+0x4B89C80
	bool IsOverHitTestVisibleWidget();//Offset:Discovery.exe+0x4B89C20
	bool IsOverFocusableWidget();//Offset:Discovery.exe+0x4B89C50
	struct FHitResult GetLastHitResult();//Offset:Discovery.exe+0x4B89BE0
	class UWidgetComponent* GetHoveredWidgetComponent();//Offset:Discovery.exe+0x4B89CB0
	struct FVector2D Get2DHitLocation();//Offset:Discovery.exe+0x4B89B90
};


// Class UMG.WidgetLayoutLibrary
// 0x0000 (0x0028 - 0x0028)
class UWidgetLayoutLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.WidgetLayoutLibrary"));
		return ptr;
	}


	class UWrapBoxSlot* STATIC_SlotAsWrapBoxSlot(class UWidget* Widget);//Offset:Discovery.exe+0x4B8AF00
	class UWidgetSwitcherSlot* STATIC_SlotAsWidgetSwitcherSlot(class UWidget* Widget);//Offset:Discovery.exe+0x4B8AE60
	class UVerticalBoxSlot* STATIC_SlotAsVerticalBoxSlot(class UWidget* Widget);//Offset:Discovery.exe+0x4B8B220
	class UUniformGridSlot* STATIC_SlotAsUniformGridSlot(class UWidget* Widget);//Offset:Discovery.exe+0x4B8B2C0
	class USizeBoxSlot* STATIC_SlotAsSizeBoxSlot(class UWidget* Widget);//Offset:Discovery.exe+0x4B8AFA0
	class UScrollBoxSlot* STATIC_SlotAsScrollBoxSlot(class UWidget* Widget);//Offset:Discovery.exe+0x4B8B180
	class UScaleBoxSlot* STATIC_SlotAsScaleBoxSlot(class UWidget* Widget);//Offset:Discovery.exe+0x4B8B040
	class USafeZoneSlot* STATIC_SlotAsSafeBoxSlot(class UWidget* Widget);//Offset:Discovery.exe+0x4B8B0E0
	class UOverlaySlot* STATIC_SlotAsOverlaySlot(class UWidget* Widget);//Offset:Discovery.exe+0x4B8B360
	class UHorizontalBoxSlot* STATIC_SlotAsHorizontalBoxSlot(class UWidget* Widget);//Offset:Discovery.exe+0x4B8B400
	class UGridSlot* STATIC_SlotAsGridSlot(class UWidget* Widget);//Offset:Discovery.exe+0x4B8B4A0
	class UCanvasPanelSlot* STATIC_SlotAsCanvasSlot(class UWidget* Widget);//Offset:Discovery.exe+0x4B8B540
	class UBorderSlot* STATIC_SlotAsBorderSlot(class UWidget* Widget);//Offset:Discovery.exe+0x4B8B5E0
	void STATIC_RemoveAllWidgets(class UObject* WorldContextObject);//Offset:Discovery.exe+0x4B8ADD0
	bool STATIC_ProjectWorldLocationToWidgetPosition(class APlayerController* PlayerController, const struct FVector& WorldLocation, bool bPlayerViewportRelative, struct FVector2D* ScreenPosition);//Offset:Discovery.exe+0x4B8BB60
	struct FGeometry STATIC_GetViewportWidgetGeometry(class UObject* WorldContextObject);//Offset:Discovery.exe+0x4B8B970
	struct FVector2D STATIC_GetViewportSize(class UObject* WorldContextObject);//Offset:Discovery.exe+0x4B8BA20
	float STATIC_GetViewportScale(class UObject* WorldContextObject);//Offset:Discovery.exe+0x4B8BAC0
	struct FGeometry STATIC_GetPlayerScreenWidgetGeometry(class APlayerController* PlayerController);//Offset:Discovery.exe+0x4B8B8C0
	bool STATIC_GetMousePositionScaledByDPI(class APlayerController* Player, float* LocationX, float* LocationY);//Offset:Discovery.exe+0x4B8B680
	struct FVector2D STATIC_GetMousePositionOnViewport(class UObject* WorldContextObject);//Offset:Discovery.exe+0x4B8B7D0
	struct FVector2D STATIC_GetMousePositionOnPlatform();//Offset:Discovery.exe+0x4B8B870
};


// Class UMG.WidgetNavigation
// 0x00D8 (0x0100 - 0x0028)
class UWidgetNavigation : public UObject
{
public:
	struct FWidgetNavigationData                       Up;                                                       // 0x0028(0x0024) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FWidgetNavigationData                       Down;                                                     // 0x004C(0x0024) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FWidgetNavigationData                       Left;                                                     // 0x0070(0x0024) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FWidgetNavigationData                       Right;                                                    // 0x0094(0x0024) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FWidgetNavigationData                       Next;                                                     // 0x00B8(0x0024) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FWidgetNavigationData                       Previous;                                                 // 0x00DC(0x0024) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.WidgetNavigation"));
		return ptr;
	}

};


// Class UMG.WidgetSwitcherSlot
// 0x0020 (0x0058 - 0x0038)
class UWidgetSwitcherSlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	struct FMargin                                     Padding;                                                  // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0051(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0052(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.WidgetSwitcherSlot"));
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);//Offset:Discovery.exe+0x4B5ABF0
	void SetPadding(const struct FMargin& InPadding);//Offset:Discovery.exe+0x4B513D0
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);//Offset:Discovery.exe+0x4B5AC80
};


// Class UMG.WidgetTree
// 0x0008 (0x0030 - 0x0028)
class UWidgetTree : public UObject
{
public:
	class UWidget*                                     RootWidget;                                               // 0x0028(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.WidgetTree"));
		return ptr;
	}

};


// Class UMG.WindowTitleBarArea
// 0x0020 (0x0160 - 0x0140)
class UWindowTitleBarArea : public UContentWidget
{
public:
	bool                                               bWindowButtonsEnabled;                                    // 0x0140(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bDoubleClickTogglesFullscreen;                            // 0x0141(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E];                                      // 0x0142(0x001E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.WindowTitleBarArea"));
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);//Offset:Discovery.exe+0x4B8D7C0
	void SetPadding(const struct FMargin& InPadding);//Offset:Discovery.exe+0x4B8D8E0
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);//Offset:Discovery.exe+0x4B8D850
};


// Class UMG.WindowTitleBarAreaSlot
// 0x0028 (0x0060 - 0x0038)
class UWindowTitleBarAreaSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0049(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x16];                                      // 0x004A(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.WindowTitleBarAreaSlot"));
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);//Offset:Discovery.exe+0x4B8DD10
	void SetPadding(const struct FMargin& InPadding);//Offset:Discovery.exe+0x4B8DE30
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);//Offset:Discovery.exe+0x4B8DDA0
};


// Class UMG.WrapBox
// 0x0028 (0x0168 - 0x0140)
class UWrapBox : public UPanelWidget
{
public:
	struct FVector2D                                   InnerSlotPadding;                                         // 0x0140(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WrapSize;                                                 // 0x0150(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bExplicitWrapSize;                                        // 0x0154(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0155(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EOrientation>                          Orientation;                                              // 0x0156(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x11];                                      // 0x0157(0x0011) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.WrapBox"));
		return ptr;
	}


	void SetInnerSlotPadding(const struct FVector2D& InPadding);//Offset:Discovery.exe+0x4B8E390
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);//Offset:Discovery.exe+0x4B8E300
	class UWrapBoxSlot* AddChildToWrapBox(class UWidget* Content);//Offset:Discovery.exe+0x4B8E260
};


// Class UMG.WrapBoxSlot
// 0x0028 (0x0060 - 0x0038)
class UWrapBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bFillEmptySpace;                                          // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	float                                              FillSpanWhenLessThan;                                     // 0x004C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0051(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bForceNewLine;                                            // 0x0052(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xD];                                       // 0x0053(0x000D) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class UMG.WrapBoxSlot"));
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);//Offset:Discovery.exe+0x4B8E860
	void SetPadding(const struct FMargin& InPadding);//Offset:Discovery.exe+0x4B8EAC0
	void SetNewLine(bool InForceNewLine);//Offset:Discovery.exe+0x4B8E7C0
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);//Offset:Discovery.exe+0x4B8E8F0
	void SetFillSpanWhenLessThan(float InFillSpanWhenLessThan);//Offset:Discovery.exe+0x4B8E980
	void SetFillEmptySpace(bool InbFillEmptySpace);//Offset:Discovery.exe+0x4B8EA20
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
