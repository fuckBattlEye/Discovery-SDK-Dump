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

// Function UMG.Widget.SetVisibility
struct UWidget_SetVisibility_Params
{
	enum class ESlateVisibility                        InVisibility;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Widget.SetUserFocus
struct UWidget_SetUserFocus_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Widget.SetToolTipText
struct UWidget_SetToolTipText_Params
{
	struct FText                                       InToolTipText;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UMG.Widget.SetToolTip
struct UWidget_SetToolTip_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UMG.Widget.SetRenderTranslation
struct UWidget_SetRenderTranslation_Params
{
	struct FVector2D                                   Translation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Widget.SetRenderTransformPivot
struct UWidget_SetRenderTransformPivot_Params
{
	struct FVector2D                                   Pivot;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Widget.SetRenderTransformAngle
struct UWidget_SetRenderTransformAngle_Params
{
	float                                              Angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Widget.SetRenderTransform
struct UWidget_SetRenderTransform_Params
{
	struct FWidgetTransform                            InTransform;                                              // (Parm)
};

// Function UMG.Widget.SetRenderShear
struct UWidget_SetRenderShear_Params
{
	struct FVector2D                                   Shear;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Widget.SetRenderScale
struct UWidget_SetRenderScale_Params
{
	struct FVector2D                                   Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Widget.SetRenderOpacity
struct UWidget_SetRenderOpacity_Params
{
	float                                              InOpacity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Widget.SetNavigationRuleExplicit
struct UWidget_SetNavigationRuleExplicit_Params
{
	enum class EUINavigation                           Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     InWidget;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UMG.Widget.SetNavigationRuleCustomBoundary
struct UWidget_SetNavigationRuleCustomBoundary_Params
{
	enum class EUINavigation                           Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             InCustomDelegate;                                         // (Parm, ZeroConstructor)
};

// Function UMG.Widget.SetNavigationRuleCustom
struct UWidget_SetNavigationRuleCustom_Params
{
	enum class EUINavigation                           Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             InCustomDelegate;                                         // (Parm, ZeroConstructor)
};

// Function UMG.Widget.SetNavigationRuleBase
struct UWidget_SetNavigationRuleBase_Params
{
	enum class EUINavigation                           Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	enum class EUINavigationRule                       Rule;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Widget.SetNavigationRule
struct UWidget_SetNavigationRule_Params
{
	enum class EUINavigation                           Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	enum class EUINavigationRule                       Rule;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       WidgetToFocus;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Widget.SetKeyboardFocus
struct UWidget_SetKeyboardFocus_Params
{
};

// Function UMG.Widget.SetIsEnabled
struct UWidget_SetIsEnabled_Params
{
	bool                                               bInIsEnabled;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Widget.SetFocus
struct UWidget_SetFocus_Params
{
};

// Function UMG.Widget.SetCursor
struct UWidget_SetCursor_Params
{
	TEnumAsByte<EMouseCursor>                          InCursor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Widget.SetClipping
struct UWidget_SetClipping_Params
{
	enum class EWidgetClipping                         InClipping;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Widget.SetAllNavigationRules
struct UWidget_SetAllNavigationRules_Params
{
	enum class EUINavigationRule                       Rule;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       WidgetToFocus;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Widget.ResetCursor
struct UWidget_ResetCursor_Params
{
};

// Function UMG.Widget.RemoveFromParent
struct UWidget_RemoveFromParent_Params
{
};

// DelegateFunction UMG.Widget.OnReply__DelegateSignature
struct UWidget_OnReply__DelegateSignature_Params
{
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature
struct UWidget_OnPointerEvent__DelegateSignature_Params
{
	struct FGeometry                                   MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.Widget.IsVisible
struct UWidget_IsVisible_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.Widget.IsHovered
struct UWidget_IsHovered_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.Widget.InvalidateLayoutAndVolatility
struct UWidget_InvalidateLayoutAndVolatility_Params
{
};

// Function UMG.Widget.HasUserFocusedDescendants
struct UWidget_HasUserFocusedDescendants_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.Widget.HasUserFocus
struct UWidget_HasUserFocus_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.Widget.HasMouseCaptureByUser
struct UWidget_HasMouseCaptureByUser_Params
{
	int                                                UserIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PointerIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.Widget.HasMouseCapture
struct UWidget_HasMouseCapture_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.Widget.HasKeyboardFocus
struct UWidget_HasKeyboardFocus_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.Widget.HasFocusedDescendants
struct UWidget_HasFocusedDescendants_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.Widget.HasAnyUserFocus
struct UWidget_HasAnyUserFocus_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction UMG.Widget.GetWidget__DelegateSignature
struct UWidget_GetWidget__DelegateSignature_Params
{
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UMG.Widget.GetVisibility
struct UWidget_GetVisibility_Params
{
	enum class ESlateVisibility                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.Widget.GetTickSpaceGeometry
struct UWidget_GetTickSpaceGeometry_Params
{
	struct FGeometry                                   ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)
};

// DelegateFunction UMG.Widget.GetText__DelegateSignature
struct UWidget_GetText__DelegateSignature_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature
struct UWidget_GetSlateVisibility__DelegateSignature_Params
{
	enum class ESlateVisibility                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature
struct UWidget_GetSlateColor__DelegateSignature_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature
struct UWidget_GetSlateBrush__DelegateSignature_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.Widget.GetRenderTransformAngle
struct UWidget_GetRenderTransformAngle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.Widget.GetRenderOpacity
struct UWidget_GetRenderOpacity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.Widget.GetParent
struct UWidget_GetParent_Params
{
	class UPanelWidget*                                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UMG.Widget.GetPaintSpaceGeometry
struct UWidget_GetPaintSpaceGeometry_Params
{
	struct FGeometry                                   ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function UMG.Widget.GetOwningPlayer
struct UWidget_GetOwningPlayer_Params
{
	class APlayerController*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.Widget.GetOwningLocalPlayer
struct UWidget_GetOwningLocalPlayer_Params
{
	class ULocalPlayer*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature
struct UWidget_GetMouseCursor__DelegateSignature_Params
{
	TEnumAsByte<EMouseCursor>                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature
struct UWidget_GetLinearColor__DelegateSignature_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.Widget.GetIsEnabled
struct UWidget_GetIsEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction UMG.Widget.GetInt32__DelegateSignature
struct UWidget_GetInt32__DelegateSignature_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.Widget.GetGameInstance
struct UWidget_GetGameInstance_Params
{
	class UGameInstance*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction UMG.Widget.GetFloat__DelegateSignature
struct UWidget_GetFloat__DelegateSignature_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.Widget.GetDesiredSize
struct UWidget_GetDesiredSize_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.Widget.GetClipping
struct UWidget_GetClipping_Params
{
	enum class EWidgetClipping                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature
struct UWidget_GetCheckBoxState__DelegateSignature_Params
{
	enum class ECheckBoxState                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.Widget.GetCachedGeometry
struct UWidget_GetCachedGeometry_Params
{
	struct FGeometry                                   ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)
};

// DelegateFunction UMG.Widget.GetBool__DelegateSignature
struct UWidget_GetBool__DelegateSignature_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.Widget.GetAccessibleText
struct UWidget_GetAccessibleText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.Widget.GetAccessibleSummaryText
struct UWidget_GetAccessibleSummaryText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature
struct UWidget_GenerateWidgetForString__DelegateSignature_Params
{
	struct FString                                     Item;                                                     // (Parm, ZeroConstructor)
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature
struct UWidget_GenerateWidgetForObject__DelegateSignature_Params
{
	class UObject*                                     Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UMG.Widget.ForceVolatile
struct UWidget_ForceVolatile_Params
{
	bool                                               bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Widget.ForceLayoutPrepass
struct UWidget_ForceLayoutPrepass_Params
{
};

// Function UMG.UserWidget.UnregisterInputComponent
struct UUserWidget_UnregisterInputComponent_Params
{
};

// Function UMG.UserWidget.UnbindFromAnimationStarted
struct UUserWidget_UnbindFromAnimationStarted_Params
{
	class UWidgetAnimation*                            Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             Delegate;                                                 // (Parm, ZeroConstructor)
};

// Function UMG.UserWidget.UnbindFromAnimationFinished
struct UUserWidget_UnbindFromAnimationFinished_Params
{
	class UWidgetAnimation*                            Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             Delegate;                                                 // (Parm, ZeroConstructor)
};

// Function UMG.UserWidget.UnbindAllFromAnimationStarted
struct UUserWidget_UnbindAllFromAnimationStarted_Params
{
	class UWidgetAnimation*                            Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.UnbindAllFromAnimationFinished
struct UUserWidget_UnbindAllFromAnimationFinished_Params
{
	class UWidgetAnimation*                            Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.Tick
struct UUserWidget_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.StopListeningForInputAction
struct UUserWidget_StopListeningForInputAction_Params
{
	struct FName                                       ActionName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputEvent>                           EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.StopListeningForAllInputActions
struct UUserWidget_StopListeningForAllInputActions_Params
{
};

// Function UMG.UserWidget.StopAnimationsAndLatentActions
struct UUserWidget_StopAnimationsAndLatentActions_Params
{
};

// Function UMG.UserWidget.StopAnimation
struct UUserWidget_StopAnimation_Params
{
	class UWidgetAnimation*                            InAnimation;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.StopAllAnimations
struct UUserWidget_StopAllAnimations_Params
{
};

// Function UMG.UserWidget.SetPositionInViewport
struct UUserWidget_SetPositionInViewport_Params
{
	struct FVector2D                                   Position;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRemoveDPIScale;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.SetPlaybackSpeed
struct UUserWidget_SetPlaybackSpeed_Params
{
	class UWidgetAnimation*                            InAnimation;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlaybackSpeed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.SetPadding
struct UUserWidget_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.SetOwningPlayer
struct UUserWidget_SetOwningPlayer_Params
{
	class APlayerController*                           LocalPlayerController;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.SetNumLoopsToPlay
struct UUserWidget_SetNumLoopsToPlay_Params
{
	class UWidgetAnimation*                            InAnimation;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoopsToPlay;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.SetInputActionPriority
struct UUserWidget_SetInputActionPriority_Params
{
	int                                                NewPriority;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.SetInputActionBlocking
struct UUserWidget_SetInputActionBlocking_Params
{
	bool                                               bShouldBlock;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.SetForegroundColor
struct UUserWidget_SetForegroundColor_Params
{
	struct FSlateColor                                 InForegroundColor;                                        // (Parm)
};

// Function UMG.UserWidget.SetDesiredSizeInViewport
struct UUserWidget_SetDesiredSizeInViewport_Params
{
	struct FVector2D                                   Size;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.SetColorAndOpacity
struct UUserWidget_SetColorAndOpacity_Params
{
	struct FLinearColor                                InColorAndOpacity;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.SetAnimationCurrentTime
struct UUserWidget_SetAnimationCurrentTime_Params
{
	class UWidgetAnimation*                            InAnimation;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InTime;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.SetAnchorsInViewport
struct UUserWidget_SetAnchorsInViewport_Params
{
	struct FAnchors                                    Anchors;                                                  // (Parm)
};

// Function UMG.UserWidget.SetAlignmentInViewport
struct UUserWidget_SetAlignmentInViewport_Params
{
	struct FVector2D                                   Alignment;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.ReverseAnimation
struct UUserWidget_ReverseAnimation_Params
{
	class UWidgetAnimation*                            InAnimation;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.RemoveFromViewport
struct UUserWidget_RemoveFromViewport_Params
{
};

// Function UMG.UserWidget.RegisterInputComponent
struct UUserWidget_RegisterInputComponent_Params
{
};

// Function UMG.UserWidget.PreConstruct
struct UUserWidget_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.PlaySound
struct UUserWidget_PlaySound_Params
{
	class USoundBase*                                  SoundToPlay;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.PlayAnimationTimeRange
struct UUserWidget_PlayAnimationTimeRange_Params
{
	class UWidgetAnimation*                            InAnimation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartAtTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndAtTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoopsToPlay;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EUMGSequencePlayMode>                  PlayMode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlaybackSpeed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRestoreState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UUMGSequencePlayer*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.PlayAnimationReverse
struct UUserWidget_PlayAnimationReverse_Params
{
	class UWidgetAnimation*                            InAnimation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlaybackSpeed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRestoreState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UUMGSequencePlayer*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.PlayAnimationForward
struct UUserWidget_PlayAnimationForward_Params
{
	class UWidgetAnimation*                            InAnimation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlaybackSpeed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRestoreState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UUMGSequencePlayer*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.PlayAnimation
struct UUserWidget_PlayAnimation_Params
{
	class UWidgetAnimation*                            InAnimation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartAtTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoopsToPlay;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EUMGSequencePlayMode>                  PlayMode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlaybackSpeed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRestoreState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UUMGSequencePlayer*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.PauseAnimation
struct UUserWidget_PauseAnimation_Params
{
	class UWidgetAnimation*                            InAnimation;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.OnTouchStarted
struct UUserWidget_OnTouchStarted_Params
{
	struct FGeometry                                   MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent                               InTouchEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnTouchMoved
struct UUserWidget_OnTouchMoved_Params
{
	struct FGeometry                                   MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent                               InTouchEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnTouchGesture
struct UUserWidget_OnTouchGesture_Params
{
	struct FGeometry                                   MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent                               GestureEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnTouchForceChanged
struct UUserWidget_OnTouchForceChanged_Params
{
	struct FGeometry                                   MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent                               InTouchEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnTouchEnded
struct UUserWidget_OnTouchEnded_Params
{
	struct FGeometry                                   MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent                               InTouchEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnRemovedFromFocusPath
struct UUserWidget_OnRemovedFromFocusPath_Params
{
	struct FFocusEvent                                 InFocusEvent;                                             // (Parm)
};

// Function UMG.UserWidget.OnPreviewMouseButtonDown
struct UUserWidget_OnPreviewMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnPreviewKeyDown
struct UUserWidget_OnPreviewKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FKeyEvent                                   InKeyEvent;                                               // (Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnPaint
struct UUserWidget_OnPaint_Params
{
	struct FPaintContext                               Context;                                                  // (Parm, OutParm, ReferenceParm)
};

// Function UMG.UserWidget.OnMouseWheel
struct UUserWidget_OnMouseWheel_Params
{
	struct FGeometry                                   MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnMouseMove
struct UUserWidget_OnMouseMove_Params
{
	struct FGeometry                                   MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnMouseLeave
struct UUserWidget_OnMouseLeave_Params
{
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UMG.UserWidget.OnMouseEnter
struct UUserWidget_OnMouseEnter_Params
{
	struct FGeometry                                   MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UMG.UserWidget.OnMouseCaptureLost
struct UUserWidget_OnMouseCaptureLost_Params
{
};

// Function UMG.UserWidget.OnMouseButtonUp
struct UUserWidget_OnMouseButtonUp_Params
{
	struct FGeometry                                   MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnMouseButtonDown
struct UUserWidget_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnMouseButtonDoubleClick
struct UUserWidget_OnMouseButtonDoubleClick_Params
{
	struct FGeometry                                   InMyGeometry;                                             // (Parm, IsPlainOldData)
	struct FPointerEvent                               InMouseEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnMotionDetected
struct UUserWidget_OnMotionDetected_Params
{
	struct FGeometry                                   MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FMotionEvent                                InMotionEvent;                                            // (Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnKeyUp
struct UUserWidget_OnKeyUp_Params
{
	struct FGeometry                                   MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FKeyEvent                                   InKeyEvent;                                               // (Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnKeyDown
struct UUserWidget_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FKeyEvent                                   InKeyEvent;                                               // (Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnKeyChar
struct UUserWidget_OnKeyChar_Params
{
	struct FGeometry                                   MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FCharacterEvent                             InCharacterEvent;                                         // (Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnInitialized
struct UUserWidget_OnInitialized_Params
{
};

// Function UMG.UserWidget.OnFocusReceived
struct UUserWidget_OnFocusReceived_Params
{
	struct FGeometry                                   MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FFocusEvent                                 InFocusEvent;                                             // (Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnFocusLost
struct UUserWidget_OnFocusLost_Params
{
	struct FFocusEvent                                 InFocusEvent;                                             // (Parm)
};

// Function UMG.UserWidget.OnDrop
struct UUserWidget_OnDrop_Params
{
	struct FGeometry                                   MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent                               PointerEvent;                                             // (Parm)
	class UDragDropOperation*                          Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.OnDragOver
struct UUserWidget_OnDragOver_Params
{
	struct FGeometry                                   MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent                               PointerEvent;                                             // (Parm)
	class UDragDropOperation*                          Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.OnDragLeave
struct UUserWidget_OnDragLeave_Params
{
	struct FPointerEvent                               PointerEvent;                                             // (Parm)
	class UDragDropOperation*                          Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.OnDragEnter
struct UUserWidget_OnDragEnter_Params
{
	struct FGeometry                                   MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent                               PointerEvent;                                             // (Parm)
	class UDragDropOperation*                          Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.OnDragDetected
struct UUserWidget_OnDragDetected_Params
{
	struct FGeometry                                   MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent                               PointerEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                          Operation;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.OnDragCancelled
struct UUserWidget_OnDragCancelled_Params
{
	struct FPointerEvent                               PointerEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                          Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.OnAnimationStarted
struct UUserWidget_OnAnimationStarted_Params
{
	class UWidgetAnimation*                            Animation;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.OnAnimationFinished
struct UUserWidget_OnAnimationFinished_Params
{
	class UWidgetAnimation*                            Animation;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.OnAnalogValueChanged
struct UUserWidget_OnAnalogValueChanged_Params
{
	struct FGeometry                                   MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FAnalogInputEvent                           InAnalogInputEvent;                                       // (Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnAddedToFocusPath
struct UUserWidget_OnAddedToFocusPath_Params
{
	struct FFocusEvent                                 InFocusEvent;                                             // (Parm)
};

// Function UMG.UserWidget.ListenForInputAction
struct UUserWidget_ListenForInputAction_Params
{
	struct FName                                       ActionName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputEvent>                           EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bConsume;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             Callback;                                                 // (Parm, ZeroConstructor)
};

// Function UMG.UserWidget.IsPlayingAnimation
struct UUserWidget_IsPlayingAnimation_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.IsListeningForInputAction
struct UUserWidget_IsListeningForInputAction_Params
{
	struct FName                                       ActionName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.IsInViewport
struct UUserWidget_IsInViewport_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.IsInteractable
struct UUserWidget_IsInteractable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.IsAnyAnimationPlaying
struct UUserWidget_IsAnyAnimationPlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.IsAnimationPlayingForward
struct UUserWidget_IsAnimationPlayingForward_Params
{
	class UWidgetAnimation*                            InAnimation;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.IsAnimationPlaying
struct UUserWidget_IsAnimationPlaying_Params
{
	class UWidgetAnimation*                            InAnimation;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.GetOwningPlayerPawn
struct UUserWidget_GetOwningPlayerPawn_Params
{
	class APawn*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.GetOwningPlayerCameraManager
struct UUserWidget_GetOwningPlayerCameraManager_Params
{
	class APlayerCameraManager*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.GetIsVisible
struct UUserWidget_GetIsVisible_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.GetAnimationCurrentTime
struct UUserWidget_GetAnimationCurrentTime_Params
{
	class UWidgetAnimation*                            InAnimation;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.GetAnchorsInViewport
struct UUserWidget_GetAnchorsInViewport_Params
{
	struct FAnchors                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.GetAlignmentInViewport
struct UUserWidget_GetAlignmentInViewport_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.FlushAnimations
struct UUserWidget_FlushAnimations_Params
{
};

// Function UMG.UserWidget.Destruct
struct UUserWidget_Destruct_Params
{
};

// Function UMG.UserWidget.Construct
struct UUserWidget_Construct_Params
{
};

// Function UMG.UserWidget.CancelLatentActions
struct UUserWidget_CancelLatentActions_Params
{
};

// Function UMG.UserWidget.BindToAnimationStarted
struct UUserWidget_BindToAnimationStarted_Params
{
	class UWidgetAnimation*                            Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             Delegate;                                                 // (Parm, ZeroConstructor)
};

// Function UMG.UserWidget.BindToAnimationFinished
struct UUserWidget_BindToAnimationFinished_Params
{
	class UWidgetAnimation*                            Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             Delegate;                                                 // (Parm, ZeroConstructor)
};

// Function UMG.UserWidget.BindToAnimationEvent
struct UUserWidget_BindToAnimationEvent_Params
{
	class UWidgetAnimation*                            Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             Delegate;                                                 // (Parm, ZeroConstructor)
	enum class EWidgetAnimationEvent                   AnimationEvent;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       UserTag;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.AddToViewport
struct UUserWidget_AddToViewport_Params
{
	int                                                ZOrder;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.AddToPlayerScreen
struct UUserWidget_AddToPlayerScreen_Params
{
	int                                                ZOrder;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.PanelWidget.RemoveChildAt
struct UPanelWidget_RemoveChildAt_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.PanelWidget.RemoveChild
struct UPanelWidget_RemoveChild_Params
{
	class UWidget*                                     Content;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.PanelWidget.HasChild
struct UPanelWidget_HasChild_Params
{
	class UWidget*                                     Content;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.PanelWidget.HasAnyChildren
struct UPanelWidget_HasAnyChildren_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.PanelWidget.GetChildrenCount
struct UPanelWidget_GetChildrenCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.PanelWidget.GetChildIndex
struct UPanelWidget_GetChildIndex_Params
{
	class UWidget*                                     Content;                                                  // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.PanelWidget.GetChildAt
struct UPanelWidget_GetChildAt_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UMG.PanelWidget.GetAllChildren
struct UPanelWidget_GetAllChildren_Params
{
	TArray<class UWidget*>                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function UMG.PanelWidget.ClearChildren
struct UPanelWidget_ClearChildren_Params
{
};

// Function UMG.PanelWidget.AddChild
struct UPanelWidget_AddChild_Params
{
	class UWidget*                                     Content;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPanelSlot*                                  ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UMG.ContentWidget.SetContent
struct UContentWidget_SetContent_Params
{
	class UWidget*                                     Content;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPanelSlot*                                  ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UMG.ContentWidget.GetContentSlot
struct UContentWidget_GetContentSlot_Params
{
	class UPanelSlot*                                  ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UMG.ContentWidget.GetContent
struct UContentWidget_GetContent_Params
{
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UMG.Button.SetTouchMethod
struct UButton_SetTouchMethod_Params
{
	TEnumAsByte<EButtonTouchMethod>                    InTouchMethod;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Button.SetStyle
struct UButton_SetStyle_Params
{
	struct FButtonStyle                                InStyle;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UMG.Button.SetPressMethod
struct UButton_SetPressMethod_Params
{
	TEnumAsByte<EButtonPressMethod>                    InPressMethod;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Button.SetColorAndOpacity
struct UButton_SetColorAndOpacity_Params
{
	struct FLinearColor                                InColorAndOpacity;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Button.SetClickMethod
struct UButton_SetClickMethod_Params
{
	TEnumAsByte<EButtonClickMethod>                    InClickMethod;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Button.SetBackgroundColor
struct UButton_SetBackgroundColor_Params
{
	struct FLinearColor                                InBackgroundColor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Button.IsPressed
struct UButton_IsPressed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetSwitcher.SetActiveWidgetIndex
struct UWidgetSwitcher_SetActiveWidgetIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetSwitcher.SetActiveWidget
struct UWidgetSwitcher_SetActiveWidget_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UMG.WidgetSwitcher.GetWidgetAtIndex
struct UWidgetSwitcher_GetWidgetAtIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UMG.WidgetSwitcher.GetNumWidgets
struct UWidgetSwitcher_GetNumWidgets_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetSwitcher.GetActiveWidgetIndex
struct UWidgetSwitcher_GetActiveWidgetIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetSwitcher.GetActiveWidget
struct UWidgetSwitcher_GetActiveWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UMG.DynamicEntryBoxBase.SetRadialSettings
struct UDynamicEntryBoxBase_SetRadialSettings_Params
{
	struct FRadialBoxSettings                          InSettings;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UMG.DynamicEntryBoxBase.SetEntrySpacing
struct UDynamicEntryBoxBase_SetEntrySpacing_Params
{
	struct FVector2D                                   InEntrySpacing;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function UMG.DynamicEntryBoxBase.GetNumEntries
struct UDynamicEntryBoxBase_GetNumEntries_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.DynamicEntryBoxBase.GetAllEntries
struct UDynamicEntryBoxBase_GetAllEntries_Params
{
	TArray<class UUserWidget*>                         ReturnValue;                                              // (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function UMG.Image.SetOpacity
struct UImage_SetOpacity_Params
{
	float                                              InOpacity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Image.SetDesiredSizeOverride
struct UImage_SetDesiredSizeOverride_Params
{
	struct FVector2D                                   DesiredSize;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Image.SetColorAndOpacity
struct UImage_SetColorAndOpacity_Params
{
	struct FLinearColor                                InColorAndOpacity;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Image.SetBrushTintColor
struct UImage_SetBrushTintColor_Params
{
	struct FSlateColor                                 TintColor;                                                // (Parm)
};

// Function UMG.Image.SetBrushResourceObject
struct UImage_SetBrushResourceObject_Params
{
	class UObject*                                     ResourceObject;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Image.SetBrushFromTextureDynamic
struct UImage_SetBrushFromTextureDynamic_Params
{
	class UTexture2DDynamic*                           Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bMatchSize;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Image.SetBrushFromTexture
struct UImage_SetBrushFromTexture_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bMatchSize;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Image.SetBrushFromSoftTexture
struct UImage_SetBrushFromSoftTexture_Params
{
	bool                                               bMatchSize;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Image.SetBrushFromSoftMaterial
struct UImage_SetBrushFromSoftMaterial_Params
{
};

// Function UMG.Image.SetBrushFromMaterial
struct UImage_SetBrushFromMaterial_Params
{
	class UMaterialInterface*                          Material;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Image.SetBrushFromAtlasInterface
struct UImage_SetBrushFromAtlasInterface_Params
{
	TScriptInterface<class USlateTextureAtlasInterface> AtlasRegion;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bMatchSize;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Image.SetBrushFromAsset
struct UImage_SetBrushFromAsset_Params
{
	class USlateBrushAsset*                            Asset;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Image.SetBrush
struct UImage_SetBrush_Params
{
	struct FSlateBrush                                 InBrush;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UMG.Image.GetDynamicMaterial
struct UImage_GetDynamicMaterial_Params
{
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.InputKeySelector.SetTextBlockVisibility
struct UInputKeySelector_SetTextBlockVisibility_Params
{
	enum class ESlateVisibility                        InVisibility;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.InputKeySelector.SetSelectedKey
struct UInputKeySelector_SetSelectedKey_Params
{
	struct FInputChord                                 InSelectedKey;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UMG.InputKeySelector.SetNoKeySpecifiedText
struct UInputKeySelector_SetNoKeySpecifiedText_Params
{
	struct FText                                       InNoKeySpecifiedText;                                     // (Parm)
};

// Function UMG.InputKeySelector.SetKeySelectionText
struct UInputKeySelector_SetKeySelectionText_Params
{
	struct FText                                       InKeySelectionText;                                       // (Parm)
};

// Function UMG.InputKeySelector.SetEscapeKeys
struct UInputKeySelector_SetEscapeKeys_Params
{
	TArray<struct FKey>                                InKeys;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function UMG.InputKeySelector.SetAllowModifierKeys
struct UInputKeySelector_SetAllowModifierKeys_Params
{
	bool                                               bInAllowModifierKeys;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.InputKeySelector.SetAllowGamepadKeys
struct UInputKeySelector_SetAllowGamepadKeys_Params
{
	bool                                               bInAllowGamepadKeys;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction UMG.InputKeySelector.OnKeySelected__DelegateSignature
struct UInputKeySelector_OnKeySelected__DelegateSignature_Params
{
	struct FInputChord                                 SelectedKey;                                              // (Parm)
};

// DelegateFunction UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature
struct UInputKeySelector_OnIsSelectingKeyChanged__DelegateSignature_Params
{
};

// Function UMG.InputKeySelector.GetIsSelectingKey
struct UInputKeySelector_GetIsSelectingKey_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.ListViewBase.SetWheelScrollMultiplier
struct UListViewBase_SetWheelScrollMultiplier_Params
{
	float                                              NewWheelScrollMultiplier;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ListViewBase.SetScrollOffset
struct UListViewBase_SetScrollOffset_Params
{
	float                                              InScrollOffset;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ListViewBase.SetScrollbarVisibility
struct UListViewBase_SetScrollbarVisibility_Params
{
	enum class ESlateVisibility                        InVisibility;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ListViewBase.ScrollToTop
struct UListViewBase_ScrollToTop_Params
{
};

// Function UMG.ListViewBase.ScrollToBottom
struct UListViewBase_ScrollToBottom_Params
{
};

// Function UMG.ListViewBase.RequestRefresh
struct UListViewBase_RequestRefresh_Params
{
};

// Function UMG.ListViewBase.RegenerateAllEntries
struct UListViewBase_RegenerateAllEntries_Params
{
};

// Function UMG.ListViewBase.GetScrollOffset
struct UListViewBase_GetScrollOffset_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.ListViewBase.GetDisplayedEntryWidgets
struct UListViewBase_GetDisplayedEntryWidgets_Params
{
	TArray<class UUserWidget*>                         ReturnValue;                                              // (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function UMG.ListView.SetSelectionMode
struct UListView_SetSelectionMode_Params
{
	TEnumAsByte<ESelectionMode>                        SelectionMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ListView.SetSelectedIndex
struct UListView_SetSelectedIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ListView.ScrollIndexIntoView
struct UListView_ScrollIndexIntoView_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ListView.RemoveItem
struct UListView_RemoveItem_Params
{
	class UObject*                                     Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ListView.OnListItemOuterEndPlayed
struct UListView_OnListItemOuterEndPlayed_Params
{
	class AActor*                                      ItemOuter;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ListView.OnListItemEndPlayed
struct UListView_OnListItemEndPlayed_Params
{
	class AActor*                                      Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ListView.NavigateToIndex
struct UListView_NavigateToIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ListView.IsRefreshPending
struct UListView_IsRefreshPending_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.ListView.GetNumItems
struct UListView_GetNumItems_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.ListView.GetListItems
struct UListView_GetListItems_Params
{
	TArray<class UObject*>                             ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function UMG.ListView.GetItemAt
struct UListView_GetItemAt_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.ListView.GetIndexForItem
struct UListView_GetIndexForItem_Params
{
	class UObject*                                     Item;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.ListView.ClearListItems
struct UListView_ClearListItems_Params
{
};

// Function UMG.ListView.BP_SetSelectedItem
struct UListView_BP_SetSelectedItem_Params
{
	class UObject*                                     Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ListView.BP_SetListItems
struct UListView_BP_SetListItems_Params
{
	TArray<class UObject*>                             InListItems;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function UMG.ListView.BP_SetItemSelection
struct UListView_BP_SetItemSelection_Params
{
	class UObject*                                     Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSelected;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ListView.BP_ScrollItemIntoView
struct UListView_BP_ScrollItemIntoView_Params
{
	class UObject*                                     Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ListView.BP_NavigateToItem
struct UListView_BP_NavigateToItem_Params
{
	class UObject*                                     Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ListView.BP_IsItemVisible
struct UListView_BP_IsItemVisible_Params
{
	class UObject*                                     Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.ListView.BP_GetSelectedItems
struct UListView_BP_GetSelectedItems_Params
{
	TArray<class UObject*>                             Items;                                                    // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.ListView.BP_GetSelectedItem
struct UListView_BP_GetSelectedItem_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.ListView.BP_GetNumItemsSelected
struct UListView_BP_GetNumItemsSelected_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.ListView.BP_ClearSelection
struct UListView_BP_ClearSelection_Params
{
};

// Function UMG.ListView.BP_CancelScrollIntoView
struct UListView_BP_CancelScrollIntoView_Params
{
};

// Function UMG.ListView.AddItem
struct UListView_AddItem_Params
{
	class UObject*                                     Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ScrollBox.SetWheelScrollMultiplier
struct UScrollBox_SetWheelScrollMultiplier_Params
{
	float                                              NewWheelScrollMultiplier;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ScrollBox.SetScrollWhenFocusChanges
struct UScrollBox_SetScrollWhenFocusChanges_Params
{
	enum class EScrollWhenFocusChanges                 NewScrollWhenFocusChanges;                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ScrollBox.SetScrollOffset
struct UScrollBox_SetScrollOffset_Params
{
	float                                              NewScrollOffset;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ScrollBox.SetScrollbarVisibility
struct UScrollBox_SetScrollbarVisibility_Params
{
	enum class ESlateVisibility                        NewScrollBarVisibility;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ScrollBox.SetScrollbarThickness
struct UScrollBox_SetScrollbarThickness_Params
{
	struct FVector2D                                   NewScrollbarThickness;                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function UMG.ScrollBox.SetScrollbarPadding
struct UScrollBox_SetScrollbarPadding_Params
{
	struct FMargin                                     NewScrollbarPadding;                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function UMG.ScrollBox.SetOrientation
struct UScrollBox_SetOrientation_Params
{
	TEnumAsByte<EOrientation>                          NewOrientation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ScrollBox.SetNavigationDestination
struct UScrollBox_SetNavigationDestination_Params
{
	enum class EDescendantScrollDestination            NewNavigationDestination;                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ScrollBox.SetConsumeMouseWheel
struct UScrollBox_SetConsumeMouseWheel_Params
{
	enum class EConsumeMouseWheel                      NewConsumeMouseWheel;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ScrollBox.SetAnimateWheelScrolling
struct UScrollBox_SetAnimateWheelScrolling_Params
{
	bool                                               bShouldAnimateWheelScrolling;                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ScrollBox.SetAlwaysShowScrollbar
struct UScrollBox_SetAlwaysShowScrollbar_Params
{
	bool                                               NewAlwaysShowScrollbar;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ScrollBox.SetAllowOverscroll
struct UScrollBox_SetAllowOverscroll_Params
{
	bool                                               NewAllowOverscroll;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ScrollBox.ScrollWidgetIntoView
struct UScrollBox_ScrollWidgetIntoView_Params
{
	class UWidget*                                     WidgetToFind;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               AnimateScroll;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	enum class EDescendantScrollDestination            ScrollDestination;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Padding;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ScrollBox.ScrollToStart
struct UScrollBox_ScrollToStart_Params
{
};

// Function UMG.ScrollBox.ScrollToEnd
struct UScrollBox_ScrollToEnd_Params
{
};

// Function UMG.ScrollBox.GetViewOffsetFraction
struct UScrollBox_GetViewOffsetFraction_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.ScrollBox.GetScrollOffsetOfEnd
struct UScrollBox_GetScrollOffsetOfEnd_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.ScrollBox.GetScrollOffset
struct UScrollBox_GetScrollOffset_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.ScrollBox.EndInertialScrolling
struct UScrollBox_EndInertialScrolling_Params
{
};

// Function UMG.TextLayoutWidget.SetJustification
struct UTextLayoutWidget_SetJustification_Params
{
	TEnumAsByte<ETextJustify>                          InJustification;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.TextBlock.SetTextTransformPolicy
struct UTextBlock_SetTextTransformPolicy_Params
{
	enum class ETextTransformPolicy                    InTransformPolicy;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.TextBlock.SetTextOverflowPolicy
struct UTextBlock_SetTextOverflowPolicy_Params
{
	enum class ETextOverflowPolicy                     InOverflowPolicy;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.TextBlock.SetText
struct UTextBlock_SetText_Params
{
	struct FText                                       InText;                                                   // (Parm)
};

// Function UMG.TextBlock.SetStrikeBrush
struct UTextBlock_SetStrikeBrush_Params
{
	struct FSlateBrush                                 InStrikeBrush;                                            // (Parm)
};

// Function UMG.TextBlock.SetShadowOffset
struct UTextBlock_SetShadowOffset_Params
{
	struct FVector2D                                   InShadowOffset;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.TextBlock.SetShadowColorAndOpacity
struct UTextBlock_SetShadowColorAndOpacity_Params
{
	struct FLinearColor                                InShadowColorAndOpacity;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.TextBlock.SetOpacity
struct UTextBlock_SetOpacity_Params
{
	float                                              InOpacity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.TextBlock.SetMinDesiredWidth
struct UTextBlock_SetMinDesiredWidth_Params
{
	float                                              InMinDesiredWidth;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.TextBlock.SetFont
struct UTextBlock_SetFont_Params
{
	struct FSlateFontInfo                              InFontInfo;                                               // (Parm)
};

// Function UMG.TextBlock.SetColorAndOpacity
struct UTextBlock_SetColorAndOpacity_Params
{
	struct FSlateColor                                 InColorAndOpacity;                                        // (Parm)
};

// Function UMG.TextBlock.SetAutoWrapText
struct UTextBlock_SetAutoWrapText_Params
{
	bool                                               InAutoTextWrap;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.TextBlock.GetText
struct UTextBlock_GetText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.TextBlock.GetDynamicOutlineMaterial
struct UTextBlock_GetDynamicOutlineMaterial_Params
{
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.TextBlock.GetDynamicFontMaterial
struct UTextBlock_GetDynamicFontMaterial_Params
{
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.TileView.SetEntryWidth
struct UTileView_SetEntryWidth_Params
{
	float                                              NewWidth;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.TileView.SetEntryHeight
struct UTileView_SetEntryHeight_Params
{
	float                                              NewHeight;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.TileView.GetEntryWidth
struct UTileView_GetEntryWidth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.TileView.GetEntryHeight
struct UTileView_GetEntryHeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetComponent.SetWindowVisibility
struct UWidgetComponent_SetWindowVisibility_Params
{
	enum class EWindowVisibility                       InVisibility;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetComponent.SetWindowFocusable
struct UWidgetComponent_SetWindowFocusable_Params
{
	bool                                               bInWindowFocusable;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetComponent.SetWidgetSpace
struct UWidgetComponent_SetWidgetSpace_Params
{
	enum class EWidgetSpace                            NewSpace;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetComponent.SetWidget
struct UWidgetComponent_SetWidget_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UMG.WidgetComponent.SetTwoSided
struct UWidgetComponent_SetTwoSided_Params
{
	bool                                               bWantTwoSided;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetComponent.SetTintColorAndOpacity
struct UWidgetComponent_SetTintColorAndOpacity_Params
{
	struct FLinearColor                                NewTintColorAndOpacity;                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetComponent.SetTickWhenOffscreen
struct UWidgetComponent_SetTickWhenOffscreen_Params
{
	bool                                               bWantTickWhenOffscreen;                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetComponent.SetTickMode
struct UWidgetComponent_SetTickMode_Params
{
	enum class ETickMode                               InTickMode;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetComponent.SetRedrawTime
struct UWidgetComponent_SetRedrawTime_Params
{
	float                                              InRedrawTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetComponent.SetPivot
struct UWidgetComponent_SetPivot_Params
{
	struct FVector2D                                   InPivot;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function UMG.WidgetComponent.SetOwnerPlayer
struct UWidgetComponent_SetOwnerPlayer_Params
{
	class ULocalPlayer*                                LocalPlayer;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetComponent.SetManuallyRedraw
struct UWidgetComponent_SetManuallyRedraw_Params
{
	bool                                               bUseManualRedraw;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetComponent.SetGeometryMode
struct UWidgetComponent_SetGeometryMode_Params
{
	enum class EWidgetGeometryMode                     InGeometryMode;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetComponent.SetDrawSize
struct UWidgetComponent_SetDrawSize_Params
{
	struct FVector2D                                   Size;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetComponent.SetDrawAtDesiredSize
struct UWidgetComponent_SetDrawAtDesiredSize_Params
{
	bool                                               bInDrawAtDesiredSize;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetComponent.SetCylinderArcAngle
struct UWidgetComponent_SetCylinderArcAngle_Params
{
	float                                              InCylinderArcAngle;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetComponent.SetBackgroundColor
struct UWidgetComponent_SetBackgroundColor_Params
{
	struct FLinearColor                                NewBackgroundColor;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetComponent.RequestRenderUpdate
struct UWidgetComponent_RequestRenderUpdate_Params
{
};

// Function UMG.WidgetComponent.RequestRedraw
struct UWidgetComponent_RequestRedraw_Params
{
};

// Function UMG.WidgetComponent.IsWidgetVisible
struct UWidgetComponent_IsWidgetVisible_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetComponent.GetWindowVisiblility
struct UWidgetComponent_GetWindowVisiblility_Params
{
	enum class EWindowVisibility                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetComponent.GetWindowFocusable
struct UWidgetComponent_GetWindowFocusable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetComponent.GetWidgetSpace
struct UWidgetComponent_GetWidgetSpace_Params
{
	enum class EWidgetSpace                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetComponent.GetWidget
struct UWidgetComponent_GetWidget_Params
{
	class UUserWidget*                                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UMG.WidgetComponent.GetUserWidgetObject
struct UWidgetComponent_GetUserWidgetObject_Params
{
	class UUserWidget*                                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UMG.WidgetComponent.GetTwoSided
struct UWidgetComponent_GetTwoSided_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetComponent.GetTickWhenOffscreen
struct UWidgetComponent_GetTickWhenOffscreen_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetComponent.GetRenderTarget
struct UWidgetComponent_GetRenderTarget_Params
{
	class UTextureRenderTarget2D*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetComponent.GetRedrawTime
struct UWidgetComponent_GetRedrawTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetComponent.GetPivot
struct UWidgetComponent_GetPivot_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetComponent.GetOwnerPlayer
struct UWidgetComponent_GetOwnerPlayer_Params
{
	class ULocalPlayer*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetComponent.GetMaterialInstance
struct UWidgetComponent_GetMaterialInstance_Params
{
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetComponent.GetManuallyRedraw
struct UWidgetComponent_GetManuallyRedraw_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetComponent.GetGeometryMode
struct UWidgetComponent_GetGeometryMode_Params
{
	enum class EWidgetGeometryMode                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetComponent.GetDrawSize
struct UWidgetComponent_GetDrawSize_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetComponent.GetDrawAtDesiredSize
struct UWidgetComponent_GetDrawAtDesiredSize_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetComponent.GetCylinderArcAngle
struct UWidgetComponent_GetCylinderArcAngle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetComponent.GetCurrentDrawSize
struct UWidgetComponent_GetCurrentDrawSize_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.Slider.SetValue
struct USlider_SetValue_Params
{
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Slider.SetStepSize
struct USlider_SetStepSize_Params
{
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Slider.SetSliderHandleColor
struct USlider_SetSliderHandleColor_Params
{
	struct FLinearColor                                InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Slider.SetSliderBarColor
struct USlider_SetSliderBarColor_Params
{
	struct FLinearColor                                InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Slider.SetMinValue
struct USlider_SetMinValue_Params
{
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Slider.SetMaxValue
struct USlider_SetMaxValue_Params
{
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Slider.SetLocked
struct USlider_SetLocked_Params
{
	bool                                               InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Slider.SetIndentHandle
struct USlider_SetIndentHandle_Params
{
	bool                                               InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Slider.GetValue
struct USlider_GetValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.Slider.GetNormalizedValue
struct USlider_GetNormalizedValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.Border.SetVerticalAlignment
struct UBorder_SetVerticalAlignment_Params
{
	TEnumAsByte<EVerticalAlignment>                    InVerticalAlignment;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Border.SetPadding
struct UBorder_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Border.SetHorizontalAlignment
struct UBorder_SetHorizontalAlignment_Params
{
	TEnumAsByte<EHorizontalAlignment>                  InHorizontalAlignment;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Border.SetDesiredSizeScale
struct UBorder_SetDesiredSizeScale_Params
{
	struct FVector2D                                   InScale;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Border.SetContentColorAndOpacity
struct UBorder_SetContentColorAndOpacity_Params
{
	struct FLinearColor                                InContentColorAndOpacity;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Border.SetBrushFromTexture
struct UBorder_SetBrushFromTexture_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Border.SetBrushFromMaterial
struct UBorder_SetBrushFromMaterial_Params
{
	class UMaterialInterface*                          Material;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Border.SetBrushFromAsset
struct UBorder_SetBrushFromAsset_Params
{
	class USlateBrushAsset*                            Asset;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Border.SetBrushColor
struct UBorder_SetBrushColor_Params
{
	struct FLinearColor                                InBrushColor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Border.SetBrush
struct UBorder_SetBrush_Params
{
	struct FSlateBrush                                 InBrush;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UMG.Border.GetDynamicMaterial
struct UBorder_GetDynamicMaterial_Params
{
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.RichTextBlock.SetTextTransformPolicy
struct URichTextBlock_SetTextTransformPolicy_Params
{
	enum class ETextTransformPolicy                    InTransformPolicy;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.RichTextBlock.SetTextStyleSet
struct URichTextBlock_SetTextStyleSet_Params
{
	class UDataTable*                                  NewTextStyleSet;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.RichTextBlock.SetTextOverflowPolicy
struct URichTextBlock_SetTextOverflowPolicy_Params
{
	enum class ETextOverflowPolicy                     InOverflowPolicy;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.RichTextBlock.SetText
struct URichTextBlock_SetText_Params
{
	struct FText                                       InText;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UMG.RichTextBlock.SetMinDesiredWidth
struct URichTextBlock_SetMinDesiredWidth_Params
{
	float                                              InMinDesiredWidth;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.RichTextBlock.SetDefaultTextStyle
struct URichTextBlock_SetDefaultTextStyle_Params
{
	struct FTextBlockStyle                             InDefaultTextStyle;                                       // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UMG.RichTextBlock.SetDefaultStrikeBrush
struct URichTextBlock_SetDefaultStrikeBrush_Params
{
	struct FSlateBrush                                 InStrikeBrush;                                            // (Parm, OutParm)
};

// Function UMG.RichTextBlock.SetDefaultShadowOffset
struct URichTextBlock_SetDefaultShadowOffset_Params
{
	struct FVector2D                                   InShadowOffset;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.RichTextBlock.SetDefaultShadowColorAndOpacity
struct URichTextBlock_SetDefaultShadowColorAndOpacity_Params
{
	struct FLinearColor                                InShadowColorAndOpacity;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.RichTextBlock.SetDefaultFont
struct URichTextBlock_SetDefaultFont_Params
{
	struct FSlateFontInfo                              InFontInfo;                                               // (Parm)
};

// Function UMG.RichTextBlock.SetDefaultColorAndOpacity
struct URichTextBlock_SetDefaultColorAndOpacity_Params
{
	struct FSlateColor                                 InColorAndOpacity;                                        // (Parm)
};

// Function UMG.RichTextBlock.SetAutoWrapText
struct URichTextBlock_SetAutoWrapText_Params
{
	bool                                               InAutoTextWrap;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.RichTextBlock.RefreshTextLayout
struct URichTextBlock_RefreshTextLayout_Params
{
};

// Function UMG.RichTextBlock.GetText
struct URichTextBlock_GetText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.RichTextBlock.GetDefaultDynamicMaterial
struct URichTextBlock_GetDefaultDynamicMaterial_Params
{
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.RichTextBlock.GetDecoratorByClass
struct URichTextBlock_GetDecoratorByClass_Params
{
	class UClass*                                      DecoratorClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class URichTextBlockDecorator*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.RichTextBlock.ClearAllDefaultStyleOverrides
struct URichTextBlock_ClearAllDefaultStyleOverrides_Params
{
};

// Function UMG.TreeView.SetItemExpansion
struct UTreeView_SetItemExpansion_Params
{
	class UObject*                                     Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bExpandItem;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.TreeView.ExpandAll
struct UTreeView_ExpandAll_Params
{
};

// Function UMG.TreeView.CollapseAll
struct UTreeView_CollapseAll_Params
{
};

// Function UMG.Overlay.AddChildToOverlay
struct UOverlay_AddChildToOverlay_Params
{
	class UWidget*                                     Content;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOverlaySlot*                                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UMG.OverlaySlot.SetVerticalAlignment
struct UOverlaySlot_SetVerticalAlignment_Params
{
	TEnumAsByte<EVerticalAlignment>                    InVerticalAlignment;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.OverlaySlot.SetPadding
struct UOverlaySlot_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.OverlaySlot.SetHorizontalAlignment
struct UOverlaySlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<EHorizontalAlignment>                  InHorizontalAlignment;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.SizeBox.SetWidthOverride
struct USizeBox_SetWidthOverride_Params
{
	float                                              InWidthOverride;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.SizeBox.SetMinDesiredWidth
struct USizeBox_SetMinDesiredWidth_Params
{
	float                                              InMinDesiredWidth;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.SizeBox.SetMinDesiredHeight
struct USizeBox_SetMinDesiredHeight_Params
{
	float                                              InMinDesiredHeight;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.SizeBox.SetMinAspectRatio
struct USizeBox_SetMinAspectRatio_Params
{
	float                                              InMinAspectRatio;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.SizeBox.SetMaxDesiredWidth
struct USizeBox_SetMaxDesiredWidth_Params
{
	float                                              InMaxDesiredWidth;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.SizeBox.SetMaxDesiredHeight
struct USizeBox_SetMaxDesiredHeight_Params
{
	float                                              InMaxDesiredHeight;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.SizeBox.SetMaxAspectRatio
struct USizeBox_SetMaxAspectRatio_Params
{
	float                                              InMaxAspectRatio;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.SizeBox.SetHeightOverride
struct USizeBox_SetHeightOverride_Params
{
	float                                              InHeightOverride;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.SizeBox.ClearWidthOverride
struct USizeBox_ClearWidthOverride_Params
{
};

// Function UMG.SizeBox.ClearMinDesiredWidth
struct USizeBox_ClearMinDesiredWidth_Params
{
};

// Function UMG.SizeBox.ClearMinDesiredHeight
struct USizeBox_ClearMinDesiredHeight_Params
{
};

// Function UMG.SizeBox.ClearMinAspectRatio
struct USizeBox_ClearMinAspectRatio_Params
{
};

// Function UMG.SizeBox.ClearMaxDesiredWidth
struct USizeBox_ClearMaxDesiredWidth_Params
{
};

// Function UMG.SizeBox.ClearMaxDesiredHeight
struct USizeBox_ClearMaxDesiredHeight_Params
{
};

// Function UMG.SizeBox.ClearMaxAspectRatio
struct USizeBox_ClearMaxAspectRatio_Params
{
};

// Function UMG.SizeBox.ClearHeightOverride
struct USizeBox_ClearHeightOverride_Params
{
};

// Function UMG.AsyncTaskDownloadImage.DownloadImage
struct UAsyncTaskDownloadImage_DownloadImage_Params
{
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
	class UAsyncTaskDownloadImage*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.BackgroundBlur.SetVerticalAlignment
struct UBackgroundBlur_SetVerticalAlignment_Params
{
	TEnumAsByte<EVerticalAlignment>                    InVerticalAlignment;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.BackgroundBlur.SetPadding
struct UBackgroundBlur_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.BackgroundBlur.SetLowQualityFallbackBrush
struct UBackgroundBlur_SetLowQualityFallbackBrush_Params
{
	struct FSlateBrush                                 InBrush;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UMG.BackgroundBlur.SetHorizontalAlignment
struct UBackgroundBlur_SetHorizontalAlignment_Params
{
	TEnumAsByte<EHorizontalAlignment>                  InHorizontalAlignment;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.BackgroundBlur.SetCornerRadius
struct UBackgroundBlur_SetCornerRadius_Params
{
	struct FVector4                                    InCornerRadius;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.BackgroundBlur.SetBlurStrength
struct UBackgroundBlur_SetBlurStrength_Params
{
	float                                              InStrength;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.BackgroundBlur.SetBlurRadius
struct UBackgroundBlur_SetBlurRadius_Params
{
	int                                                InBlurRadius;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.BackgroundBlur.SetApplyAlphaToBlur
struct UBackgroundBlur_SetApplyAlphaToBlur_Params
{
	bool                                               bInApplyAlphaToBlur;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.BackgroundBlurSlot.SetVerticalAlignment
struct UBackgroundBlurSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<EVerticalAlignment>                    InVerticalAlignment;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.BackgroundBlurSlot.SetPadding
struct UBackgroundBlurSlot_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.BackgroundBlurSlot.SetHorizontalAlignment
struct UBackgroundBlurSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<EHorizontalAlignment>                  InHorizontalAlignment;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.BoolBinding.GetValue
struct UBoolBinding_GetValue_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.BorderSlot.SetVerticalAlignment
struct UBorderSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<EVerticalAlignment>                    InVerticalAlignment;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.BorderSlot.SetPadding
struct UBorderSlot_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.BorderSlot.SetHorizontalAlignment
struct UBorderSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<EHorizontalAlignment>                  InHorizontalAlignment;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.BrushBinding.GetValue
struct UBrushBinding_GetValue_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.ButtonSlot.SetVerticalAlignment
struct UButtonSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<EVerticalAlignment>                    InVerticalAlignment;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ButtonSlot.SetPadding
struct UButtonSlot_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ButtonSlot.SetHorizontalAlignment
struct UButtonSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<EHorizontalAlignment>                  InHorizontalAlignment;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.CanvasPanel.AddChildToCanvas
struct UCanvasPanel_AddChildToCanvas_Params
{
	class UWidget*                                     Content;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCanvasPanelSlot*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UMG.CanvasPanelSlot.SetZOrder
struct UCanvasPanelSlot_SetZOrder_Params
{
	int                                                InZOrder;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.CanvasPanelSlot.SetSize
struct UCanvasPanelSlot_SetSize_Params
{
	struct FVector2D                                   InSize;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.CanvasPanelSlot.SetPosition
struct UCanvasPanelSlot_SetPosition_Params
{
	struct FVector2D                                   InPosition;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.CanvasPanelSlot.SetOffsets
struct UCanvasPanelSlot_SetOffsets_Params
{
	struct FMargin                                     InOffset;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.CanvasPanelSlot.SetMinimum
struct UCanvasPanelSlot_SetMinimum_Params
{
	struct FVector2D                                   InMinimumAnchors;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.CanvasPanelSlot.SetMaximum
struct UCanvasPanelSlot_SetMaximum_Params
{
	struct FVector2D                                   InMaximumAnchors;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.CanvasPanelSlot.SetLayout
struct UCanvasPanelSlot_SetLayout_Params
{
	struct FAnchorData                                 InLayoutData;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UMG.CanvasPanelSlot.SetAutoSize
struct UCanvasPanelSlot_SetAutoSize_Params
{
	bool                                               InbAutoSize;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.CanvasPanelSlot.SetAnchors
struct UCanvasPanelSlot_SetAnchors_Params
{
	struct FAnchors                                    InAnchors;                                                // (Parm)
};

// Function UMG.CanvasPanelSlot.SetAlignment
struct UCanvasPanelSlot_SetAlignment_Params
{
	struct FVector2D                                   InAlignment;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.CanvasPanelSlot.GetZOrder
struct UCanvasPanelSlot_GetZOrder_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.CanvasPanelSlot.GetSize
struct UCanvasPanelSlot_GetSize_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.CanvasPanelSlot.GetPosition
struct UCanvasPanelSlot_GetPosition_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.CanvasPanelSlot.GetOffsets
struct UCanvasPanelSlot_GetOffsets_Params
{
	struct FMargin                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.CanvasPanelSlot.GetLayout
struct UCanvasPanelSlot_GetLayout_Params
{
	struct FAnchorData                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.CanvasPanelSlot.GetAutoSize
struct UCanvasPanelSlot_GetAutoSize_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.CanvasPanelSlot.GetAnchors
struct UCanvasPanelSlot_GetAnchors_Params
{
	struct FAnchors                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.CanvasPanelSlot.GetAlignment
struct UCanvasPanelSlot_GetAlignment_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.CheckBox.SetTouchMethod
struct UCheckBox_SetTouchMethod_Params
{
	TEnumAsByte<EButtonTouchMethod>                    InTouchMethod;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.CheckBox.SetPressMethod
struct UCheckBox_SetPressMethod_Params
{
	TEnumAsByte<EButtonPressMethod>                    InPressMethod;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.CheckBox.SetIsChecked
struct UCheckBox_SetIsChecked_Params
{
	bool                                               InIsChecked;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.CheckBox.SetClickMethod
struct UCheckBox_SetClickMethod_Params
{
	TEnumAsByte<EButtonClickMethod>                    InClickMethod;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.CheckBox.SetCheckedState
struct UCheckBox_SetCheckedState_Params
{
	enum class ECheckBoxState                          InCheckedState;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.CheckBox.IsPressed
struct UCheckBox_IsPressed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.CheckBox.IsChecked
struct UCheckBox_IsChecked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.CheckBox.GetCheckedState
struct UCheckBox_GetCheckedState_Params
{
	enum class ECheckBoxState                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.CheckedStateBinding.GetValue
struct UCheckedStateBinding_GetValue_Params
{
	enum class ECheckBoxState                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.CircularThrobber.SetRadius
struct UCircularThrobber_SetRadius_Params
{
	float                                              InRadius;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.CircularThrobber.SetPeriod
struct UCircularThrobber_SetPeriod_Params
{
	float                                              InPeriod;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.CircularThrobber.SetNumberOfPieces
struct UCircularThrobber_SetNumberOfPieces_Params
{
	int                                                InNumberOfPieces;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ColorBinding.GetSlateValue
struct UColorBinding_GetSlateValue_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.ColorBinding.GetLinearValue
struct UColorBinding_GetLinearValue_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.ComboBoxKey.SetSelectedOption
struct UComboBoxKey_SetSelectedOption_Params
{
	struct FName                                       Option;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ComboBoxKey.RemoveOption
struct UComboBoxKey_RemoveOption_Params
{
	struct FName                                       Option;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction UMG.ComboBoxKey.OnSelectionChangedEvent__DelegateSignature
struct UComboBoxKey_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FName                                       SelectedItem;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction UMG.ComboBoxKey.OnOpeningEvent__DelegateSignature
struct UComboBoxKey_OnOpeningEvent__DelegateSignature_Params
{
};

// Function UMG.ComboBoxKey.IsOpen
struct UComboBoxKey_IsOpen_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.ComboBoxKey.GetSelectedOption
struct UComboBoxKey_GetSelectedOption_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction UMG.ComboBoxKey.GenerateWidgetEvent__DelegateSignature
struct UComboBoxKey_GenerateWidgetEvent__DelegateSignature_Params
{
	struct FName                                       Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UMG.ComboBoxKey.ClearSelection
struct UComboBoxKey_ClearSelection_Params
{
};

// Function UMG.ComboBoxKey.ClearOptions
struct UComboBoxKey_ClearOptions_Params
{
};

// Function UMG.ComboBoxKey.AddOption
struct UComboBoxKey_AddOption_Params
{
	struct FName                                       Option;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ComboBoxString.SetSelectedOption
struct UComboBoxString_SetSelectedOption_Params
{
	struct FString                                     Option;                                                   // (Parm, ZeroConstructor)
};

// Function UMG.ComboBoxString.SetSelectedIndex
struct UComboBoxString_SetSelectedIndex_Params
{
	int                                                Index;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ComboBoxString.RemoveOption
struct UComboBoxString_RemoveOption_Params
{
	struct FString                                     Option;                                                   // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.ComboBoxString.RefreshOptions
struct UComboBoxString_RefreshOptions_Params
{
};

// DelegateFunction UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature
struct UComboBoxString_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction UMG.ComboBoxString.OnOpeningEvent__DelegateSignature
struct UComboBoxString_OnOpeningEvent__DelegateSignature_Params
{
};

// Function UMG.ComboBoxString.IsOpen
struct UComboBoxString_IsOpen_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.ComboBoxString.GetSelectedOption
struct UComboBoxString_GetSelectedOption_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function UMG.ComboBoxString.GetSelectedIndex
struct UComboBoxString_GetSelectedIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.ComboBoxString.GetOptionCount
struct UComboBoxString_GetOptionCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.ComboBoxString.GetOptionAtIndex
struct UComboBoxString_GetOptionAtIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function UMG.ComboBoxString.FindOptionIndex
struct UComboBoxString_FindOptionIndex_Params
{
	struct FString                                     Option;                                                   // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.ComboBoxString.ClearSelection
struct UComboBoxString_ClearSelection_Params
{
};

// Function UMG.ComboBoxString.ClearOptions
struct UComboBoxString_ClearOptions_Params
{
};

// Function UMG.ComboBoxString.AddOption
struct UComboBoxString_AddOption_Params
{
	struct FString                                     Option;                                                   // (Parm, ZeroConstructor)
};

// Function UMG.DragDropOperation.Drop
struct UDragDropOperation_Drop_Params
{
	struct FPointerEvent                               PointerEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UMG.DragDropOperation.Dragged
struct UDragDropOperation_Dragged_Params
{
	struct FPointerEvent                               PointerEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UMG.DragDropOperation.DragCancelled
struct UDragDropOperation_DragCancelled_Params
{
	struct FPointerEvent                               PointerEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UMG.DynamicEntryBox.Reset
struct UDynamicEntryBox_Reset_Params
{
	bool                                               bDeleteWidgets;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.DynamicEntryBox.RemoveEntry
struct UDynamicEntryBox_RemoveEntry_Params
{
	class UUserWidget*                                 EntryWidget;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UMG.DynamicEntryBox.BP_CreateEntryOfClass
struct UDynamicEntryBox_BP_CreateEntryOfClass_Params
{
	class UClass*                                      EntryClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UMG.DynamicEntryBox.BP_CreateEntry
struct UDynamicEntryBox_BP_CreateEntry_Params
{
	class UUserWidget*                                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UMG.EditableText.SetTextOverflowPolicy
struct UEditableText_SetTextOverflowPolicy_Params
{
	enum class ETextOverflowPolicy                     InOverflowPolicy;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.EditableText.SetText
struct UEditableText_SetText_Params
{
	struct FText                                       InText;                                                   // (Parm)
};

// Function UMG.EditableText.SetJustification
struct UEditableText_SetJustification_Params
{
	TEnumAsByte<ETextJustify>                          InJustification;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.EditableText.SetIsReadOnly
struct UEditableText_SetIsReadOnly_Params
{
	bool                                               InbIsReadyOnly;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.EditableText.SetIsPassword
struct UEditableText_SetIsPassword_Params
{
	bool                                               InbIsPassword;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.EditableText.SetHintText
struct UEditableText_SetHintText_Params
{
	struct FText                                       InHintText;                                               // (Parm)
};

// DelegateFunction UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature
struct UEditableText_OnEditableTextCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature
struct UEditableText_OnEditableTextChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UMG.EditableText.GetText
struct UEditableText_GetText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.EditableTextBox.SetTextOverflowPolicy
struct UEditableTextBox_SetTextOverflowPolicy_Params
{
	enum class ETextOverflowPolicy                     InOverflowPolicy;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.EditableTextBox.SetText
struct UEditableTextBox_SetText_Params
{
	struct FText                                       InText;                                                   // (Parm)
};

// Function UMG.EditableTextBox.SetJustification
struct UEditableTextBox_SetJustification_Params
{
	TEnumAsByte<ETextJustify>                          InJustification;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.EditableTextBox.SetIsReadOnly
struct UEditableTextBox_SetIsReadOnly_Params
{
	bool                                               bReadOnly;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.EditableTextBox.SetIsPassword
struct UEditableTextBox_SetIsPassword_Params
{
	bool                                               bIsPassword;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.EditableTextBox.SetHintText
struct UEditableTextBox_SetHintText_Params
{
	struct FText                                       InText;                                                   // (Parm)
};

// Function UMG.EditableTextBox.SetForegroundColor
struct UEditableTextBox_SetForegroundColor_Params
{
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.EditableTextBox.SetError
struct UEditableTextBox_SetError_Params
{
	struct FText                                       InError;                                                  // (Parm)
};

// DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature
struct UEditableTextBox_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature
struct UEditableTextBox_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UMG.EditableTextBox.HasError
struct UEditableTextBox_HasError_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.EditableTextBox.GetText
struct UEditableTextBox_GetText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.EditableTextBox.ClearError
struct UEditableTextBox_ClearError_Params
{
};

// Function UMG.ExpandableArea.SetIsExpanded_Animated
struct UExpandableArea_SetIsExpanded_Animated_Params
{
	bool                                               IsExpanded;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ExpandableArea.SetIsExpanded
struct UExpandableArea_SetIsExpanded_Params
{
	bool                                               IsExpanded;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ExpandableArea.GetIsExpanded
struct UExpandableArea_GetIsExpanded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.FloatBinding.GetValue
struct UFloatBinding_GetValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.GridPanel.SetRowFill
struct UGridPanel_SetRowFill_Params
{
	int                                                ColumnIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Coefficient;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.GridPanel.SetColumnFill
struct UGridPanel_SetColumnFill_Params
{
	int                                                ColumnIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Coefficient;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.GridPanel.AddChildToGrid
struct UGridPanel_AddChildToGrid_Params
{
	class UWidget*                                     Content;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InRow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InColumn;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UGridSlot*                                   ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UMG.GridSlot.SetVerticalAlignment
struct UGridSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<EVerticalAlignment>                    InVerticalAlignment;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.GridSlot.SetRowSpan
struct UGridSlot_SetRowSpan_Params
{
	int                                                InRowSpan;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.GridSlot.SetRow
struct UGridSlot_SetRow_Params
{
	int                                                InRow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.GridSlot.SetPadding
struct UGridSlot_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.GridSlot.SetNudge
struct UGridSlot_SetNudge_Params
{
	struct FVector2D                                   InNudge;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.GridSlot.SetLayer
struct UGridSlot_SetLayer_Params
{
	int                                                InLayer;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.GridSlot.SetHorizontalAlignment
struct UGridSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<EHorizontalAlignment>                  InHorizontalAlignment;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.GridSlot.SetColumnSpan
struct UGridSlot_SetColumnSpan_Params
{
	int                                                InColumnSpan;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.GridSlot.SetColumn
struct UGridSlot_SetColumn_Params
{
	int                                                InColumn;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.HorizontalBox.AddChildToHorizontalBox
struct UHorizontalBox_AddChildToHorizontalBox_Params
{
	class UWidget*                                     Content;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UHorizontalBoxSlot*                          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UMG.HorizontalBoxSlot.SetVerticalAlignment
struct UHorizontalBoxSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<EVerticalAlignment>                    InVerticalAlignment;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.HorizontalBoxSlot.SetSize
struct UHorizontalBoxSlot_SetSize_Params
{
	struct FSlateChildSize                             InSize;                                                   // (Parm)
};

// Function UMG.HorizontalBoxSlot.SetPadding
struct UHorizontalBoxSlot_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.HorizontalBoxSlot.SetHorizontalAlignment
struct UHorizontalBoxSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<EHorizontalAlignment>                  InHorizontalAlignment;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Int32Binding.GetValue
struct UInt32Binding_GetValue_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.InvalidationBox.SetCanCache
struct UInvalidationBox_SetCanCache_Params
{
	bool                                               CanCache;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.InvalidationBox.InvalidateCache
struct UInvalidationBox_InvalidateCache_Params
{
};

// Function UMG.InvalidationBox.GetCanCache
struct UInvalidationBox_GetCanCache_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserListEntry.BP_OnItemSelectionChanged
struct UUserListEntry_BP_OnItemSelectionChanged_Params
{
	bool                                               bIsSelected;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserListEntry.BP_OnItemExpansionChanged
struct UUserListEntry_BP_OnItemExpansionChanged_Params
{
	bool                                               bIsExpanded;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserListEntry.BP_OnEntryReleased
struct UUserListEntry_BP_OnEntryReleased_Params
{
};

// Function UMG.UserListEntryLibrary.IsListItemSelected
struct UUserListEntryLibrary_IsListItemSelected_Params
{
	TScriptInterface<class UUserListEntry>             UserListEntry;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserListEntryLibrary.IsListItemExpanded
struct UUserListEntryLibrary_IsListItemExpanded_Params
{
	TScriptInterface<class UUserListEntry>             UserListEntry;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserListEntryLibrary.GetOwningListView
struct UUserListEntryLibrary_GetOwningListView_Params
{
	TScriptInterface<class UUserListEntry>             UserListEntry;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UListViewBase*                               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UMG.UserObjectListEntry.OnListItemObjectSet
struct UUserObjectListEntry_OnListItemObjectSet_Params
{
	class UObject*                                     ListItemObject;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserObjectListEntryLibrary.GetListItemObject
struct UUserObjectListEntryLibrary_GetListItemObject_Params
{
	TScriptInterface<class UUserObjectListEntry>       UserObjectListEntry;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.MenuAnchor.ToggleOpen
struct UMenuAnchor_ToggleOpen_Params
{
	bool                                               bFocusOnOpen;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.MenuAnchor.ShouldOpenDueToClick
struct UMenuAnchor_ShouldOpenDueToClick_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.MenuAnchor.SetPlacement
struct UMenuAnchor_SetPlacement_Params
{
	TEnumAsByte<EMenuPlacement>                        InPlacement;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.MenuAnchor.Open
struct UMenuAnchor_Open_Params
{
	bool                                               bFocusMenu;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.MenuAnchor.IsOpen
struct UMenuAnchor_IsOpen_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.MenuAnchor.HasOpenSubMenus
struct UMenuAnchor_HasOpenSubMenus_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction UMG.MenuAnchor.GetUserWidget__DelegateSignature
struct UMenuAnchor_GetUserWidget__DelegateSignature_Params
{
	class UUserWidget*                                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UMG.MenuAnchor.GetMenuPosition
struct UMenuAnchor_GetMenuPosition_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.MenuAnchor.FitInWindow
struct UMenuAnchor_FitInWindow_Params
{
	bool                                               bFit;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.MenuAnchor.Close
struct UMenuAnchor_Close_Params
{
};

// Function UMG.MouseCursorBinding.GetValue
struct UMouseCursorBinding_GetValue_Params
{
	TEnumAsByte<EMouseCursor>                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.MultiLineEditableText.SetWidgetStyle
struct UMultiLineEditableText_SetWidgetStyle_Params
{
	struct FTextBlockStyle                             InWidgetStyle;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UMG.MultiLineEditableText.SetText
struct UMultiLineEditableText_SetText_Params
{
	struct FText                                       InText;                                                   // (Parm)
};

// Function UMG.MultiLineEditableText.SetIsReadOnly
struct UMultiLineEditableText_SetIsReadOnly_Params
{
	bool                                               bReadOnly;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.MultiLineEditableText.SetHintText
struct UMultiLineEditableText_SetHintText_Params
{
	struct FText                                       InHintText;                                               // (Parm)
};

// DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature
struct UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature
struct UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UMG.MultiLineEditableText.GetText
struct UMultiLineEditableText_GetText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.MultiLineEditableText.GetHintText
struct UMultiLineEditableText_GetHintText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.MultiLineEditableTextBox.SetTextStyle
struct UMultiLineEditableTextBox_SetTextStyle_Params
{
	struct FTextBlockStyle                             InTextStyle;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UMG.MultiLineEditableTextBox.SetText
struct UMultiLineEditableTextBox_SetText_Params
{
	struct FText                                       InText;                                                   // (Parm)
};

// Function UMG.MultiLineEditableTextBox.SetIsReadOnly
struct UMultiLineEditableTextBox_SetIsReadOnly_Params
{
	bool                                               bReadOnly;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.MultiLineEditableTextBox.SetHintText
struct UMultiLineEditableTextBox_SetHintText_Params
{
	struct FText                                       InHintText;                                               // (Parm)
};

// Function UMG.MultiLineEditableTextBox.SetForegroundColor
struct UMultiLineEditableTextBox_SetForegroundColor_Params
{
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.MultiLineEditableTextBox.SetError
struct UMultiLineEditableTextBox_SetError_Params
{
	struct FText                                       InError;                                                  // (Parm)
};

// DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
struct UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
struct UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UMG.MultiLineEditableTextBox.GetText
struct UMultiLineEditableTextBox_GetText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.MultiLineEditableTextBox.GetHintText
struct UMultiLineEditableTextBox_GetHintText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.ProgressBar.SetPercent
struct UProgressBar_SetPercent_Params
{
	float                                              InPercent;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ProgressBar.SetIsMarquee
struct UProgressBar_SetIsMarquee_Params
{
	bool                                               InbIsMarquee;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ProgressBar.SetFillColorAndOpacity
struct UProgressBar_SetFillColorAndOpacity_Params
{
	struct FLinearColor                                InColor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.RetainerBox.SetTextureParameter
struct URetainerBox_SetTextureParameter_Params
{
	struct FName                                       TextureParameter;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.RetainerBox.SetRetainRendering
struct URetainerBox_SetRetainRendering_Params
{
	bool                                               bInRetainRendering;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.RetainerBox.SetRenderingPhase
struct URetainerBox_SetRenderingPhase_Params
{
	int                                                RenderPhase;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TotalPhases;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.RetainerBox.SetEffectMaterial
struct URetainerBox_SetEffectMaterial_Params
{
	class UMaterialInterface*                          EffectMaterial;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.RetainerBox.RequestRender
struct URetainerBox_RequestRender_Params
{
};

// Function UMG.RetainerBox.GetEffectMaterial
struct URetainerBox_GetEffectMaterial_Params
{
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.SafeZone.SetSidesToPad
struct USafeZone_SetSidesToPad_Params
{
	bool                                               InPadLeft;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InPadRight;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InPadTop;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InPadBottom;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ScaleBox.SetUserSpecifiedScale
struct UScaleBox_SetUserSpecifiedScale_Params
{
	float                                              InUserSpecifiedScale;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ScaleBox.SetStretchDirection
struct UScaleBox_SetStretchDirection_Params
{
	TEnumAsByte<EStretchDirection>                     InStretchDirection;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ScaleBox.SetStretch
struct UScaleBox_SetStretch_Params
{
	TEnumAsByte<EStretch>                              InStretch;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ScaleBox.SetIgnoreInheritedScale
struct UScaleBox_SetIgnoreInheritedScale_Params
{
	bool                                               bInIgnoreInheritedScale;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ScaleBoxSlot.SetVerticalAlignment
struct UScaleBoxSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<EVerticalAlignment>                    InVerticalAlignment;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ScaleBoxSlot.SetPadding
struct UScaleBoxSlot_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ScaleBoxSlot.SetHorizontalAlignment
struct UScaleBoxSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<EHorizontalAlignment>                  InHorizontalAlignment;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ScrollBar.SetState
struct UScrollBar_SetState_Params
{
	float                                              InOffsetFraction;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InThumbSizeFraction;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ScrollBoxSlot.SetVerticalAlignment
struct UScrollBoxSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<EVerticalAlignment>                    InVerticalAlignment;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ScrollBoxSlot.SetPadding
struct UScrollBoxSlot_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.ScrollBoxSlot.SetHorizontalAlignment
struct UScrollBoxSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<EHorizontalAlignment>                  InHorizontalAlignment;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.SizeBoxSlot.SetVerticalAlignment
struct USizeBoxSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<EVerticalAlignment>                    InVerticalAlignment;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.SizeBoxSlot.SetPadding
struct USizeBoxSlot_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.SizeBoxSlot.SetHorizontalAlignment
struct USizeBoxSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<EHorizontalAlignment>                  InHorizontalAlignment;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.SlateBlueprintLibrary.TransformVectorLocalToAbsolute
struct USlateBlueprintLibrary_TransformVectorLocalToAbsolute_Params
{
	struct FGeometry                                   Geometry;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   LocalVector;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.SlateBlueprintLibrary.TransformVectorAbsoluteToLocal
struct USlateBlueprintLibrary_TransformVectorAbsoluteToLocal_Params
{
	struct FGeometry                                   Geometry;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   AbsoluteVector;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.SlateBlueprintLibrary.TransformScalarLocalToAbsolute
struct USlateBlueprintLibrary_TransformScalarLocalToAbsolute_Params
{
	struct FGeometry                                   Geometry;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              LocalScalar;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.SlateBlueprintLibrary.TransformScalarAbsoluteToLocal
struct USlateBlueprintLibrary_TransformScalarAbsoluteToLocal_Params
{
	struct FGeometry                                   Geometry;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              AbsoluteScalar;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.SlateBlueprintLibrary.ScreenToWidgetLocal
struct USlateBlueprintLibrary_ScreenToWidgetLocal_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGeometry                                   Geometry;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   ScreenPosition;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   LocalCoordinate;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeWindowPosition;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.SlateBlueprintLibrary.ScreenToWidgetAbsolute
struct USlateBlueprintLibrary_ScreenToWidgetAbsolute_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ScreenPosition;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   AbsoluteCoordinate;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeWindowPosition;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.SlateBlueprintLibrary.ScreenToViewport
struct USlateBlueprintLibrary_ScreenToViewport_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ScreenPosition;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ViewportPosition;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.SlateBlueprintLibrary.LocalToViewport
struct USlateBlueprintLibrary_LocalToViewport_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGeometry                                   Geometry;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   LocalCoordinate;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   PixelPosition;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ViewportPosition;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.SlateBlueprintLibrary.LocalToAbsolute
struct USlateBlueprintLibrary_LocalToAbsolute_Params
{
	struct FGeometry                                   Geometry;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   LocalCoordinate;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.SlateBlueprintLibrary.IsUnderLocation
struct USlateBlueprintLibrary_IsUnderLocation_Params
{
	struct FGeometry                                   Geometry;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   AbsoluteCoordinate;                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.SlateBlueprintLibrary.GetLocalTopLeft
struct USlateBlueprintLibrary_GetLocalTopLeft_Params
{
	struct FGeometry                                   Geometry;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.SlateBlueprintLibrary.GetLocalSize
struct USlateBlueprintLibrary_GetLocalSize_Params
{
	struct FGeometry                                   Geometry;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.SlateBlueprintLibrary.GetAbsoluteSize
struct USlateBlueprintLibrary_GetAbsoluteSize_Params
{
	struct FGeometry                                   Geometry;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.SlateBlueprintLibrary.EqualEqual_SlateBrush
struct USlateBlueprintLibrary_EqualEqual_SlateBrush_Params
{
	struct FSlateBrush                                 A;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FSlateBrush                                 B;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.SlateBlueprintLibrary.AbsoluteToViewport
struct USlateBlueprintLibrary_AbsoluteToViewport_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   AbsoluteDesktopCoordinate;                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   PixelPosition;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ViewportPosition;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.SlateBlueprintLibrary.AbsoluteToLocal
struct USlateBlueprintLibrary_AbsoluteToLocal_Params
{
	struct FGeometry                                   Geometry;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   AbsoluteCoordinate;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.Spacer.SetSize
struct USpacer_SetSize_Params
{
	struct FVector2D                                   InSize;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.SpinBox.SetValue
struct USpinBox_SetValue_Params
{
	float                                              NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.SpinBox.SetMinValue
struct USpinBox_SetMinValue_Params
{
	float                                              NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.SpinBox.SetMinSliderValue
struct USpinBox_SetMinSliderValue_Params
{
	float                                              NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.SpinBox.SetMinFractionalDigits
struct USpinBox_SetMinFractionalDigits_Params
{
	int                                                NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.SpinBox.SetMaxValue
struct USpinBox_SetMaxValue_Params
{
	float                                              NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.SpinBox.SetMaxSliderValue
struct USpinBox_SetMaxSliderValue_Params
{
	float                                              NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.SpinBox.SetMaxFractionalDigits
struct USpinBox_SetMaxFractionalDigits_Params
{
	int                                                NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.SpinBox.SetForegroundColor
struct USpinBox_SetForegroundColor_Params
{
	struct FSlateColor                                 InForegroundColor;                                        // (Parm)
};

// Function UMG.SpinBox.SetDelta
struct USpinBox_SetDelta_Params
{
	float                                              NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.SpinBox.SetAlwaysUsesDeltaSnap
struct USpinBox_SetAlwaysUsesDeltaSnap_Params
{
	bool                                               bNewValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature
struct USpinBox_OnSpinBoxValueCommittedEvent__DelegateSignature_Params
{
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature
struct USpinBox_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature
struct USpinBox_OnSpinBoxBeginSliderMovement__DelegateSignature_Params
{
};

// Function UMG.SpinBox.GetValue
struct USpinBox_GetValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.SpinBox.GetMinValue
struct USpinBox_GetMinValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.SpinBox.GetMinSliderValue
struct USpinBox_GetMinSliderValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.SpinBox.GetMinFractionalDigits
struct USpinBox_GetMinFractionalDigits_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.SpinBox.GetMaxValue
struct USpinBox_GetMaxValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.SpinBox.GetMaxSliderValue
struct USpinBox_GetMaxSliderValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.SpinBox.GetMaxFractionalDigits
struct USpinBox_GetMaxFractionalDigits_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.SpinBox.GetDelta
struct USpinBox_GetDelta_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.SpinBox.GetAlwaysUsesDeltaSnap
struct USpinBox_GetAlwaysUsesDeltaSnap_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.SpinBox.ClearMinValue
struct USpinBox_ClearMinValue_Params
{
};

// Function UMG.SpinBox.ClearMinSliderValue
struct USpinBox_ClearMinSliderValue_Params
{
};

// Function UMG.SpinBox.ClearMaxValue
struct USpinBox_ClearMaxValue_Params
{
};

// Function UMG.SpinBox.ClearMaxSliderValue
struct USpinBox_ClearMaxSliderValue_Params
{
};

// Function UMG.TextBinding.GetTextValue
struct UTextBinding_GetTextValue_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.TextBinding.GetStringValue
struct UTextBinding_GetStringValue_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function UMG.Throbber.SetNumberOfPieces
struct UThrobber_SetNumberOfPieces_Params
{
	int                                                InNumberOfPieces;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Throbber.SetAnimateVertically
struct UThrobber_SetAnimateVertically_Params
{
	bool                                               bInAnimateVertically;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Throbber.SetAnimateOpacity
struct UThrobber_SetAnimateOpacity_Params
{
	bool                                               bInAnimateOpacity;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Throbber.SetAnimateHorizontally
struct UThrobber_SetAnimateHorizontally_Params
{
	bool                                               bInAnimateHorizontally;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UMGSequencePlayer.SetUserTag
struct UUMGSequencePlayer_SetUserTag_Params
{
	struct FName                                       InUserTag;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UMGSequencePlayer.GetUserTag
struct UUMGSequencePlayer_GetUserTag_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UniformGridPanel.SetSlotPadding
struct UUniformGridPanel_SetSlotPadding_Params
{
	struct FMargin                                     InSlotPadding;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UniformGridPanel.SetMinDesiredSlotWidth
struct UUniformGridPanel_SetMinDesiredSlotWidth_Params
{
	float                                              InMinDesiredSlotWidth;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UniformGridPanel.SetMinDesiredSlotHeight
struct UUniformGridPanel_SetMinDesiredSlotHeight_Params
{
	float                                              InMinDesiredSlotHeight;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UniformGridPanel.AddChildToUniformGrid
struct UUniformGridPanel_AddChildToUniformGrid_Params
{
	class UWidget*                                     Content;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InRow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InColumn;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UUniformGridSlot*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UMG.UniformGridSlot.SetVerticalAlignment
struct UUniformGridSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<EVerticalAlignment>                    InVerticalAlignment;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UniformGridSlot.SetRow
struct UUniformGridSlot_SetRow_Params
{
	int                                                InRow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UniformGridSlot.SetHorizontalAlignment
struct UUniformGridSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<EHorizontalAlignment>                  InHorizontalAlignment;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UniformGridSlot.SetColumn
struct UUniformGridSlot_SetColumn_Params
{
	int                                                InColumn;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.VerticalBox.AddChildToVerticalBox
struct UVerticalBox_AddChildToVerticalBox_Params
{
	class UWidget*                                     Content;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVerticalBoxSlot*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UMG.VerticalBoxSlot.SetVerticalAlignment
struct UVerticalBoxSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<EVerticalAlignment>                    InVerticalAlignment;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.VerticalBoxSlot.SetSize
struct UVerticalBoxSlot_SetSize_Params
{
	struct FSlateChildSize                             InSize;                                                   // (Parm)
};

// Function UMG.VerticalBoxSlot.SetPadding
struct UVerticalBoxSlot_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.VerticalBoxSlot.SetHorizontalAlignment
struct UVerticalBoxSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<EHorizontalAlignment>                  InHorizontalAlignment;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Viewport.Spawn
struct UViewport_Spawn_Params
{
	class UClass*                                      ActorClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.Viewport.SetViewRotation
struct UViewport_SetViewRotation_Params
{
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Viewport.SetViewLocation
struct UViewport_SetViewLocation_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.Viewport.GetViewRotation
struct UViewport_GetViewRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.Viewport.GetViewportWorld
struct UViewport_GetViewportWorld_Params
{
	class UWorld*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.Viewport.GetViewLocation
struct UViewport_GetViewLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.VisibilityBinding.GetValue
struct UVisibilityBinding_GetValue_Params
{
	enum class ESlateVisibility                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetAnimation.UnbindFromAnimationStarted
struct UWidgetAnimation_UnbindFromAnimationStarted_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptDelegate                             Delegate;                                                 // (Parm, ZeroConstructor)
};

// Function UMG.WidgetAnimation.UnbindFromAnimationFinished
struct UWidgetAnimation_UnbindFromAnimationFinished_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptDelegate                             Delegate;                                                 // (Parm, ZeroConstructor)
};

// Function UMG.WidgetAnimation.UnbindAllFromAnimationStarted
struct UWidgetAnimation_UnbindAllFromAnimationStarted_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UMG.WidgetAnimation.UnbindAllFromAnimationFinished
struct UWidgetAnimation_UnbindAllFromAnimationFinished_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UMG.WidgetAnimation.GetStartTime
struct UWidgetAnimation_GetStartTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetAnimation.GetEndTime
struct UWidgetAnimation_GetEndTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetAnimation.BindToAnimationStarted
struct UWidgetAnimation_BindToAnimationStarted_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptDelegate                             Delegate;                                                 // (Parm, ZeroConstructor)
};

// Function UMG.WidgetAnimation.BindToAnimationFinished
struct UWidgetAnimation_BindToAnimationFinished_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptDelegate                             Delegate;                                                 // (Parm, ZeroConstructor)
};

// Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationTimeRangeProxyObject
struct UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject_Params
{
	class UUMGSequencePlayer*                          Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetAnimation*                            InAnimation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartAtTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndAtTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoopsToPlay;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EUMGSequencePlayMode>                  PlayMode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlaybackSpeed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidgetAnimationPlayCallbackProxy*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationProxyObject
struct UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationProxyObject_Params
{
	class UUMGSequencePlayer*                          Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetAnimation*                            InAnimation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartAtTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoopsToPlay;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EUMGSequencePlayMode>                  PlayMode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlaybackSpeed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidgetAnimationPlayCallbackProxy*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetBinding.GetValue
struct UWidgetBinding_GetValue_Params
{
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UMG.WidgetBlueprintLibrary.UnlockMouse
struct UWidgetBlueprintLibrary_UnlockMouse_Params
{
	struct FEventReply                                 Reply;                                                    // (Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.WidgetBlueprintLibrary.Unhandled
struct UWidgetBlueprintLibrary_Unhandled_Params
{
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarState
struct UWidgetBlueprintLibrary_SetWindowTitleBarState_Params
{
	class UWidget*                                     TitleBarContent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	enum class EWindowTitleBarMode                     Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTitleBarDragEnabled;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWindowButtonsVisible;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTitleBarVisible;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarOnCloseClickedDelegate
struct UWidgetBlueprintLibrary_SetWindowTitleBarOnCloseClickedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, ZeroConstructor)
};

// Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarCloseButtonActive
struct UWidgetBlueprintLibrary_SetWindowTitleBarCloseButtonActive_Params
{
	bool                                               bActive;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetBlueprintLibrary.SetUserFocus
struct UWidgetBlueprintLibrary_SetUserFocus_Params
{
	struct FEventReply                                 Reply;                                                    // (Parm, OutParm, ReferenceParm)
	class UWidget*                                     FocusWidget;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bInAllUsers;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.WidgetBlueprintLibrary.SetMousePosition
struct UWidgetBlueprintLibrary_SetMousePosition_Params
{
	struct FEventReply                                 Reply;                                                    // (Parm, OutParm, ReferenceParm)
	struct FVector2D                                   NewMousePosition;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnlyEx
struct UWidgetBlueprintLibrary_SetInputMode_UIOnlyEx_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     InWidgetToFocus;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	enum class EMouseLockMode                          InMouseLockMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetBlueprintLibrary.SetInputMode_GameOnly
struct UWidgetBlueprintLibrary_SetInputMode_GameOnly_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUIEx
struct UWidgetBlueprintLibrary_SetInputMode_GameAndUIEx_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     InWidgetToFocus;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	enum class EMouseLockMode                          InMouseLockMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHideCursorDuringCapture;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetBlueprintLibrary.SetHardwareCursor
struct UWidgetBlueprintLibrary_SetHardwareCursor_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMouseCursor>                          CursorShape;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CursorName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   HotSpot;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetBlueprintLibrary.SetFocusToGameViewport
struct UWidgetBlueprintLibrary_SetFocusToGameViewport_Params
{
};

// Function UMG.WidgetBlueprintLibrary.SetColorVisionDeficiencyType
struct UWidgetBlueprintLibrary_SetColorVisionDeficiencyType_Params
{
	enum class EColorVisionDeficiency                  Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Severity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CorrectDeficiency;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShowCorrectionWithDeficiency;                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetBlueprintLibrary.SetBrushResourceToTexture
struct UWidgetBlueprintLibrary_SetBrushResourceToTexture_Params
{
	struct FSlateBrush                                 Brush;                                                    // (Parm, OutParm, ReferenceParm)
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetBlueprintLibrary.SetBrushResourceToMaterial
struct UWidgetBlueprintLibrary_SetBrushResourceToMaterial_Params
{
	struct FSlateBrush                                 Brush;                                                    // (Parm, OutParm, ReferenceParm)
	class UMaterialInterface*                          Material;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetBlueprintLibrary.RestorePreviousWindowTitleBarState
struct UWidgetBlueprintLibrary_RestorePreviousWindowTitleBarState_Params
{
};

// Function UMG.WidgetBlueprintLibrary.ReleaseMouseCapture
struct UWidgetBlueprintLibrary_ReleaseMouseCapture_Params
{
	struct FEventReply                                 Reply;                                                    // (Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.WidgetBlueprintLibrary.ReleaseJoystickCapture
struct UWidgetBlueprintLibrary_ReleaseJoystickCapture_Params
{
	struct FEventReply                                 Reply;                                                    // (Parm, OutParm, ReferenceParm)
	bool                                               bInAllJoysticks;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// DelegateFunction UMG.WidgetBlueprintLibrary.OnGameWindowCloseButtonClickedDelegate__DelegateSignature
struct UWidgetBlueprintLibrary_OnGameWindowCloseButtonClickedDelegate__DelegateSignature_Params
{
};

// Function UMG.WidgetBlueprintLibrary.NoResourceBrush
struct UWidgetBlueprintLibrary_NoResourceBrush_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.WidgetBlueprintLibrary.MakeBrushFromTexture
struct UWidgetBlueprintLibrary_MakeBrushFromTexture_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Width;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.WidgetBlueprintLibrary.MakeBrushFromMaterial
struct UWidgetBlueprintLibrary_MakeBrushFromMaterial_Params
{
	class UMaterialInterface*                          Material;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Width;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.WidgetBlueprintLibrary.MakeBrushFromAsset
struct UWidgetBlueprintLibrary_MakeBrushFromAsset_Params
{
	class USlateBrushAsset*                            BrushAsset;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.WidgetBlueprintLibrary.LockMouse
struct UWidgetBlueprintLibrary_LockMouse_Params
{
	struct FEventReply                                 Reply;                                                    // (Parm, OutParm, ReferenceParm)
	class UWidget*                                     CapturingWidget;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.WidgetBlueprintLibrary.IsDragDropping
struct UWidgetBlueprintLibrary_IsDragDropping_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetBlueprintLibrary.Handled
struct UWidgetBlueprintLibrary_Handled_Params
{
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.WidgetBlueprintLibrary.GetSafeZonePadding
struct UWidgetBlueprintLibrary_GetSafeZonePadding_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    SafePadding;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   SafePaddingScale;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    SpillOverPadding;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetBlueprintLibrary.GetKeyEventFromAnalogInputEvent
struct UWidgetBlueprintLibrary_GetKeyEventFromAnalogInputEvent_Params
{
	struct FAnalogInputEvent                           Event;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FKeyEvent                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.WidgetBlueprintLibrary.GetInputEventFromPointerEvent
struct UWidgetBlueprintLibrary_GetInputEventFromPointerEvent_Params
{
	struct FPointerEvent                               Event;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FInputEvent                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.WidgetBlueprintLibrary.GetInputEventFromNavigationEvent
struct UWidgetBlueprintLibrary_GetInputEventFromNavigationEvent_Params
{
	struct FNavigationEvent                            Event;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FInputEvent                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.WidgetBlueprintLibrary.GetInputEventFromKeyEvent
struct UWidgetBlueprintLibrary_GetInputEventFromKeyEvent_Params
{
	struct FKeyEvent                                   Event;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FInputEvent                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.WidgetBlueprintLibrary.GetInputEventFromCharacterEvent
struct UWidgetBlueprintLibrary_GetInputEventFromCharacterEvent_Params
{
	struct FCharacterEvent                             Event;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FInputEvent                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.WidgetBlueprintLibrary.GetDynamicMaterial
struct UWidgetBlueprintLibrary_GetDynamicMaterial_Params
{
	struct FSlateBrush                                 Brush;                                                    // (Parm, OutParm, ReferenceParm)
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetBlueprintLibrary.GetDragDroppingContent
struct UWidgetBlueprintLibrary_GetDragDroppingContent_Params
{
	class UDragDropOperation*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsTexture2D
struct UWidgetBlueprintLibrary_GetBrushResourceAsTexture2D_Params
{
	struct FSlateBrush                                 Brush;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsMaterial
struct UWidgetBlueprintLibrary_GetBrushResourceAsMaterial_Params
{
	struct FSlateBrush                                 Brush;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	class UMaterialInterface*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetBlueprintLibrary.GetBrushResource
struct UWidgetBlueprintLibrary_GetBrushResource_Params
{
	struct FSlateBrush                                 Brush;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetBlueprintLibrary.GetAllWidgetsWithInterface
struct UWidgetBlueprintLibrary_GetAllWidgetsWithInterface_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UUserWidget*>                         FoundWidgets;                                             // (Parm, OutParm, ZeroConstructor)
	class UClass*                                      Interface;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TopLevelOnly;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetBlueprintLibrary.GetAllWidgetsOfClass
struct UWidgetBlueprintLibrary_GetAllWidgetsOfClass_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UUserWidget*>                         FoundWidgets;                                             // (Parm, OutParm, ZeroConstructor)
	class UClass*                                      WidgetClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TopLevelOnly;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetBlueprintLibrary.EndDragDrop
struct UWidgetBlueprintLibrary_EndDragDrop_Params
{
	struct FEventReply                                 Reply;                                                    // (Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.WidgetBlueprintLibrary.DrawTextFormatted
struct UWidgetBlueprintLibrary_DrawTextFormatted_Params
{
	struct FPaintContext                               Context;                                                  // (Parm, OutParm, ReferenceParm)
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector2D                                   Position;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UFont*                                       Font;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FontSize;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       FontTypeFace;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Tint;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetBlueprintLibrary.DrawText
struct UWidgetBlueprintLibrary_DrawText_Params
{
	struct FPaintContext                               Context;                                                  // (Parm, OutParm, ReferenceParm)
	struct FString                                     InString;                                                 // (Parm, ZeroConstructor)
	struct FVector2D                                   Position;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Tint;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetBlueprintLibrary.DrawLines
struct UWidgetBlueprintLibrary_DrawLines_Params
{
	struct FPaintContext                               Context;                                                  // (Parm, OutParm, ReferenceParm)
	TArray<struct FVector2D>                           Points;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FLinearColor                                Tint;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAntiAlias;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetBlueprintLibrary.DrawLine
struct UWidgetBlueprintLibrary_DrawLine_Params
{
	struct FPaintContext                               Context;                                                  // (Parm, OutParm, ReferenceParm)
	struct FVector2D                                   PositionA;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   PositionB;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Tint;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAntiAlias;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetBlueprintLibrary.DrawBox
struct UWidgetBlueprintLibrary_DrawBox_Params
{
	struct FPaintContext                               Context;                                                  // (Parm, OutParm, ReferenceParm)
	struct FVector2D                                   Position;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Size;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class USlateBrushAsset*                            Brush;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Tint;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetBlueprintLibrary.DismissAllMenus
struct UWidgetBlueprintLibrary_DismissAllMenus_Params
{
};

// Function UMG.WidgetBlueprintLibrary.DetectDragIfPressed
struct UWidgetBlueprintLibrary_DetectDragIfPressed_Params
{
	struct FPointerEvent                               PointerEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	class UWidget*                                     WidgetDetectingDrag;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FKey                                        DragKey;                                                  // (Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.WidgetBlueprintLibrary.DetectDrag
struct UWidgetBlueprintLibrary_DetectDrag_Params
{
	struct FEventReply                                 Reply;                                                    // (Parm, OutParm, ReferenceParm)
	class UWidget*                                     WidgetDetectingDrag;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FKey                                        DragKey;                                                  // (Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.WidgetBlueprintLibrary.CreateDragDropOperation
struct UWidgetBlueprintLibrary_CreateDragDropOperation_Params
{
	class UClass*                                      OperationClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UDragDropOperation*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetBlueprintLibrary.Create
struct UWidgetBlueprintLibrary_Create_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      WidgetType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           OwningPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UMG.WidgetBlueprintLibrary.ClearUserFocus
struct UWidgetBlueprintLibrary_ClearUserFocus_Params
{
	struct FEventReply                                 Reply;                                                    // (Parm, OutParm, ReferenceParm)
	bool                                               bInAllUsers;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.WidgetBlueprintLibrary.CaptureMouse
struct UWidgetBlueprintLibrary_CaptureMouse_Params
{
	struct FEventReply                                 Reply;                                                    // (Parm, OutParm, ReferenceParm)
	class UWidget*                                     CapturingWidget;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.WidgetBlueprintLibrary.CaptureJoystick
struct UWidgetBlueprintLibrary_CaptureJoystick_Params
{
	struct FEventReply                                 Reply;                                                    // (Parm, OutParm, ReferenceParm)
	class UWidget*                                     CapturingWidget;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bInAllJoysticks;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.WidgetBlueprintLibrary.CancelDragDrop
struct UWidgetBlueprintLibrary_CancelDragDrop_Params
{
};

// Function UMG.WidgetInteractionComponent.SetFocus
struct UWidgetInteractionComponent_SetFocus_Params
{
	class UWidget*                                     FocusWidget;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UMG.WidgetInteractionComponent.SetCustomHitResult
struct UWidgetInteractionComponent_SetCustomHitResult_Params
{
	struct FHitResult                                  HitResult;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function UMG.WidgetInteractionComponent.SendKeyChar
struct UWidgetInteractionComponent_SendKeyChar_Params
{
	struct FString                                     Characters;                                               // (Parm, ZeroConstructor)
	bool                                               bRepeat;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetInteractionComponent.ScrollWheel
struct UWidgetInteractionComponent_ScrollWheel_Params
{
	float                                              ScrollDelta;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetInteractionComponent.ReleasePointerKey
struct UWidgetInteractionComponent_ReleasePointerKey_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function UMG.WidgetInteractionComponent.ReleaseKey
struct UWidgetInteractionComponent_ReleaseKey_Params
{
	struct FKey                                        Key;                                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetInteractionComponent.PressPointerKey
struct UWidgetInteractionComponent_PressPointerKey_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function UMG.WidgetInteractionComponent.PressKey
struct UWidgetInteractionComponent_PressKey_Params
{
	struct FKey                                        Key;                                                      // (Parm)
	bool                                               bRepeat;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetInteractionComponent.PressAndReleaseKey
struct UWidgetInteractionComponent_PressAndReleaseKey_Params
{
	struct FKey                                        Key;                                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetInteractionComponent.IsOverInteractableWidget
struct UWidgetInteractionComponent_IsOverInteractableWidget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetInteractionComponent.IsOverHitTestVisibleWidget
struct UWidgetInteractionComponent_IsOverHitTestVisibleWidget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetInteractionComponent.IsOverFocusableWidget
struct UWidgetInteractionComponent_IsOverFocusableWidget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetInteractionComponent.GetLastHitResult
struct UWidgetInteractionComponent_GetLastHitResult_Params
{
	struct FHitResult                                  ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function UMG.WidgetInteractionComponent.GetHoveredWidgetComponent
struct UWidgetInteractionComponent_GetHoveredWidgetComponent_Params
{
	class UWidgetComponent*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UMG.WidgetInteractionComponent.Get2DHitLocation
struct UWidgetInteractionComponent_Get2DHitLocation_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetLayoutLibrary.SlotAsWrapBoxSlot
struct UWidgetLayoutLibrary_SlotAsWrapBoxSlot_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWrapBoxSlot*                                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UMG.WidgetLayoutLibrary.SlotAsWidgetSwitcherSlot
struct UWidgetLayoutLibrary_SlotAsWidgetSwitcherSlot_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetSwitcherSlot*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UMG.WidgetLayoutLibrary.SlotAsVerticalBoxSlot
struct UWidgetLayoutLibrary_SlotAsVerticalBoxSlot_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVerticalBoxSlot*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UMG.WidgetLayoutLibrary.SlotAsUniformGridSlot
struct UWidgetLayoutLibrary_SlotAsUniformGridSlot_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUniformGridSlot*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UMG.WidgetLayoutLibrary.SlotAsSizeBoxSlot
struct UWidgetLayoutLibrary_SlotAsSizeBoxSlot_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USizeBoxSlot*                                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UMG.WidgetLayoutLibrary.SlotAsScrollBoxSlot
struct UWidgetLayoutLibrary_SlotAsScrollBoxSlot_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UScrollBoxSlot*                              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UMG.WidgetLayoutLibrary.SlotAsScaleBoxSlot
struct UWidgetLayoutLibrary_SlotAsScaleBoxSlot_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UScaleBoxSlot*                               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UMG.WidgetLayoutLibrary.SlotAsSafeBoxSlot
struct UWidgetLayoutLibrary_SlotAsSafeBoxSlot_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USafeZoneSlot*                               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UMG.WidgetLayoutLibrary.SlotAsOverlaySlot
struct UWidgetLayoutLibrary_SlotAsOverlaySlot_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOverlaySlot*                                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UMG.WidgetLayoutLibrary.SlotAsHorizontalBoxSlot
struct UWidgetLayoutLibrary_SlotAsHorizontalBoxSlot_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UHorizontalBoxSlot*                          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UMG.WidgetLayoutLibrary.SlotAsGridSlot
struct UWidgetLayoutLibrary_SlotAsGridSlot_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGridSlot*                                   ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UMG.WidgetLayoutLibrary.SlotAsCanvasSlot
struct UWidgetLayoutLibrary_SlotAsCanvasSlot_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCanvasPanelSlot*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UMG.WidgetLayoutLibrary.SlotAsBorderSlot
struct UWidgetLayoutLibrary_SlotAsBorderSlot_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBorderSlot*                                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UMG.WidgetLayoutLibrary.RemoveAllWidgets
struct UWidgetLayoutLibrary_RemoveAllWidgets_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetLayoutLibrary.ProjectWorldLocationToWidgetPosition
struct UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WorldLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ScreenPosition;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bPlayerViewportRelative;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetLayoutLibrary.GetViewportWidgetGeometry
struct UWidgetLayoutLibrary_GetViewportWidgetGeometry_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGeometry                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetLayoutLibrary.GetViewportSize
struct UWidgetLayoutLibrary_GetViewportSize_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetLayoutLibrary.GetViewportScale
struct UWidgetLayoutLibrary_GetViewportScale_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetLayoutLibrary.GetPlayerScreenWidgetGeometry
struct UWidgetLayoutLibrary_GetPlayerScreenWidgetGeometry_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGeometry                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetLayoutLibrary.GetMousePositionScaledByDPI
struct UWidgetLayoutLibrary_GetMousePositionScaledByDPI_Params
{
	class APlayerController*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LocationX;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              LocationY;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetLayoutLibrary.GetMousePositionOnViewport
struct UWidgetLayoutLibrary_GetMousePositionOnViewport_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetLayoutLibrary.GetMousePositionOnPlatform
struct UWidgetLayoutLibrary_GetMousePositionOnPlatform_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.WidgetSwitcherSlot.SetVerticalAlignment
struct UWidgetSwitcherSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<EVerticalAlignment>                    InVerticalAlignment;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetSwitcherSlot.SetPadding
struct UWidgetSwitcherSlot_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WidgetSwitcherSlot.SetHorizontalAlignment
struct UWidgetSwitcherSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<EHorizontalAlignment>                  InHorizontalAlignment;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WindowTitleBarArea.SetVerticalAlignment
struct UWindowTitleBarArea_SetVerticalAlignment_Params
{
	TEnumAsByte<EVerticalAlignment>                    InVerticalAlignment;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WindowTitleBarArea.SetPadding
struct UWindowTitleBarArea_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WindowTitleBarArea.SetHorizontalAlignment
struct UWindowTitleBarArea_SetHorizontalAlignment_Params
{
	TEnumAsByte<EHorizontalAlignment>                  InHorizontalAlignment;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WindowTitleBarAreaSlot.SetVerticalAlignment
struct UWindowTitleBarAreaSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<EVerticalAlignment>                    InVerticalAlignment;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WindowTitleBarAreaSlot.SetPadding
struct UWindowTitleBarAreaSlot_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WindowTitleBarAreaSlot.SetHorizontalAlignment
struct UWindowTitleBarAreaSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<EHorizontalAlignment>                  InHorizontalAlignment;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WrapBox.SetInnerSlotPadding
struct UWrapBox_SetInnerSlotPadding_Params
{
	struct FVector2D                                   InPadding;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WrapBox.SetHorizontalAlignment
struct UWrapBox_SetHorizontalAlignment_Params
{
	TEnumAsByte<EHorizontalAlignment>                  InHorizontalAlignment;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WrapBox.AddChildToWrapBox
struct UWrapBox_AddChildToWrapBox_Params
{
	class UWidget*                                     Content;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWrapBoxSlot*                                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UMG.WrapBoxSlot.SetVerticalAlignment
struct UWrapBoxSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<EVerticalAlignment>                    InVerticalAlignment;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WrapBoxSlot.SetPadding
struct UWrapBoxSlot_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WrapBoxSlot.SetNewLine
struct UWrapBoxSlot_SetNewLine_Params
{
	bool                                               InForceNewLine;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WrapBoxSlot.SetHorizontalAlignment
struct UWrapBoxSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<EHorizontalAlignment>                  InHorizontalAlignment;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WrapBoxSlot.SetFillSpanWhenLessThan
struct UWrapBoxSlot_SetFillSpanWhenLessThan_Params
{
	float                                              InFillSpanWhenLessThan;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.WrapBoxSlot.SetFillEmptySpace
struct UWrapBoxSlot_SetFillEmptySpace_Params
{
	bool                                               InbFillEmptySpace;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
