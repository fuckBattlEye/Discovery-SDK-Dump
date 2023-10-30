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

// Function EmbarkUI.AngularProgressBarBase.OnSynchronizeProperties
struct UAngularProgressBarBase_OnSynchronizeProperties_Params
{
};

// Function EmbarkUI.EmbarkButtonBaseOld.SimulateMouseLeave
struct UEmbarkButtonBaseOld_SimulateMouseLeave_Params
{
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkUI.EmbarkButtonBaseOld.SimulateMouseEnter
struct UEmbarkButtonBaseOld_SimulateMouseEnter_Params
{
	struct FGeometry                                   MyGeometry;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkUI.EmbarkButtonBaseOld.SimulateMouseButtonUp
struct UEmbarkButtonBaseOld_SimulateMouseButtonUp_Params
{
};

// Function EmbarkUI.EmbarkButtonBaseOld.SimulateMouseButtonDown
struct UEmbarkButtonBaseOld_SimulateMouseButtonDown_Params
{
};

// Function EmbarkUI.EmbarkButtonBaseOld.SimulateClick
struct UEmbarkButtonBaseOld_SimulateClick_Params
{
};

// Function EmbarkUI.EmbarkButtonBaseOld.SetPressedSound
struct UEmbarkButtonBaseOld_SetPressedSound_Params
{
	struct FSlateSound                                 InPressedSound;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkUI.EmbarkButtonBaseOld.OnKeyUp
struct UEmbarkButtonBaseOld_OnKeyUp_Params
{
	struct FGeometry                                   MyGeometry;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FKeyEvent                                   InKeyEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkUI.EmbarkButtonBaseOld.OnKeyDown
struct UEmbarkButtonBaseOld_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FKeyEvent                                   InKeyEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkUI.EmbarkButtonBaseOld.OnConstruct
struct UEmbarkButtonBaseOld_OnConstruct_Params
{
};

// Function EmbarkUI.EmbarkButtonBase.UpdateCurrentButtonStyle
struct UEmbarkButtonBase_UpdateCurrentButtonStyle_Params
{
};

// Function EmbarkUI.EmbarkButtonBase.TempGetNormalButtonStyle
struct UEmbarkButtonBase_TempGetNormalButtonStyle_Params
{
	struct FButtonStyle                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkUI.EmbarkButtonBase.SetTouchMethod
struct UEmbarkButtonBase_SetTouchMethod_Params
{
	TEnumAsByte<EButtonTouchMethod>                    InTouchMethod;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUI.EmbarkButtonBase.SetPressMethod
struct UEmbarkButtonBase_SetPressMethod_Params
{
	TEnumAsByte<EButtonPressMethod>                    InPressMethod;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUI.EmbarkButtonBase.SetIsFocusable
struct UEmbarkButtonBase_SetIsFocusable_Params
{
	bool                                               bInIsFocusable;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUI.EmbarkButtonBase.SetClickMethod
struct UEmbarkButtonBase_SetClickMethod_Params
{
	TEnumAsByte<EButtonClickMethod>                    InClickMethod;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUI.EmbarkButtonBase.OnUnhovered
struct UEmbarkButtonBase_OnUnhovered_Params
{
};

// Function EmbarkUI.EmbarkButtonBase.OnReleased
struct UEmbarkButtonBase_OnReleased_Params
{
};

// Function EmbarkUI.EmbarkButtonBase.OnPressed
struct UEmbarkButtonBase_OnPressed_Params
{
};

// Function EmbarkUI.EmbarkButtonBase.OnHovered
struct UEmbarkButtonBase_OnHovered_Params
{
};

// Function EmbarkUI.EmbarkButtonBase.OnEnabledStateChanged
struct UEmbarkButtonBase_OnEnabledStateChanged_Params
{
	bool                                               bInIsEnabled;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUI.EmbarkButtonBase.OnDoubleClicked
struct UEmbarkButtonBase_OnDoubleClicked_Params
{
};

// Function EmbarkUI.EmbarkButtonBase.OnClicked
struct UEmbarkButtonBase_OnClicked_Params
{
};

// Function EmbarkUI.EmbarkButtonBase.OnButtonStateChanged
struct UEmbarkButtonBase_OnButtonStateChanged_Params
{
	enum class EEmbarkButtonState                      InButtonState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUI.EmbarkButtonBase.IsPressed
struct UEmbarkButtonBase_IsPressed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUI.EmbarkButtonBase.IsInteractionEnabled
struct UEmbarkButtonBase_IsInteractionEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUI.EmbarkButtonBase.HandleButtonUnhovered
struct UEmbarkButtonBase_HandleButtonUnhovered_Params
{
};

// Function EmbarkUI.EmbarkButtonBase.HandleButtonReleased
struct UEmbarkButtonBase_HandleButtonReleased_Params
{
};

// Function EmbarkUI.EmbarkButtonBase.HandleButtonPressed
struct UEmbarkButtonBase_HandleButtonPressed_Params
{
};

// Function EmbarkUI.EmbarkButtonBase.HandleButtonHovered
struct UEmbarkButtonBase_HandleButtonHovered_Params
{
};

// Function EmbarkUI.EmbarkButtonBase.HandleButtonClicked
struct UEmbarkButtonBase_HandleButtonClicked_Params
{
};

// Function EmbarkUI.EmbarkButtonBase.GetIsFocusable
struct UEmbarkButtonBase_GetIsFocusable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUI.EmbarkButtonBase.GetIsButtonEnabled
struct UEmbarkButtonBase_GetIsButtonEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUI.EmbarkButtonBase.GetDisabledButtonStyle
struct UEmbarkButtonBase_GetDisabledButtonStyle_Params
{
	struct FButtonStyle                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkUI.EmbarkButtonBase.GetCurrentButtonStyle
struct UEmbarkButtonBase_GetCurrentButtonStyle_Params
{
	struct FButtonStyle                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkUI.EmbarkButtonBase.GetButtonState
struct UEmbarkButtonBase_GetButtonState_Params
{
	enum class EEmbarkButtonState                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUI.EmbarkButtonBase.BuildStyles
struct UEmbarkButtonBase_BuildStyles_Params
{
	class UEmbarkButtonStyleBase*                      InStyle;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUI.EmbarkButtonBase.BuildSoundStyles
struct UEmbarkButtonBase_BuildSoundStyles_Params
{
	class UEmbarkButtonSoundStyleBase*                 InStyle;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUI.EmbarkButtonSoundStyleBase.GetButtonSoundStyle
struct UEmbarkButtonSoundStyleBase_GetButtonSoundStyle_Params
{
	class UClass*                                      InButtonSoundStyle;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UEmbarkButtonSoundStyleBase*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUI.EmbarkButtonStyleBase.GetNormalPressedBrush
struct UEmbarkButtonStyleBase_GetNormalPressedBrush_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkUI.EmbarkButtonStyleBase.GetNormalHighlightBrush
struct UEmbarkButtonStyleBase_GetNormalHighlightBrush_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkUI.EmbarkButtonStyleBase.GetNormalBaseBrush
struct UEmbarkButtonStyleBase_GetNormalBaseBrush_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkUI.EmbarkButtonStyleBase.GetDisabledBrush
struct UEmbarkButtonStyleBase_GetDisabledBrush_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkUI.EmbarkButtonStyleBase.GetButtonStyle
struct UEmbarkButtonStyleBase_GetButtonStyle_Params
{
	class UClass*                                      InButtonStyle;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UEmbarkButtonStyleBase*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUI.EmbarkCommonActionWidget.SetInputActionColor
struct UEmbarkCommonActionWidget_SetInputActionColor_Params
{
	struct FLinearColor                                Color;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FLinearColor                                TextColor;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function EmbarkUI.EmbarkCommonActivatableWidgetBase.RequestFocus
struct UEmbarkCommonActivatableWidgetBase_RequestFocus_Params
{
};

// Function EmbarkUI.EmbarkCommonActivatableWidgetBase.HandleBackAction
struct UEmbarkCommonActivatableWidgetBase_HandleBackAction_Params
{
};

// Function EmbarkUI.EmbarkCommonActivatableWidgetStack.GetAllWidgets
struct UEmbarkCommonActivatableWidgetStack_GetAllWidgets_Params
{
	TArray<class UCommonActivatableWidget*>            ReturnValue;                                              // (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function EmbarkUI.EmbarkCommonButtonBase.SimulateClick
struct UEmbarkCommonButtonBase_SimulateClick_Params
{
};

// Function EmbarkUI.EmbarkCommonButtonBase.OnEmbarkButtonReleased
struct UEmbarkCommonButtonBase_OnEmbarkButtonReleased_Params
{
};

// Function EmbarkUI.EmbarkCommonButtonBase.OnEmbarkButtonPressed
struct UEmbarkCommonButtonBase_OnEmbarkButtonPressed_Params
{
};

// Function EmbarkUI.EmbarkCommonTabListWidgetBase.SetupTabs
struct UEmbarkCommonTabListWidgetBase_SetupTabs_Params
{
};

// Function EmbarkUI.EmbarkCommonTabListWidgetBase.RegisterDynamicTab
struct UEmbarkCommonTabListWidgetBase_RegisterDynamicTab_Params
{
	struct FEmbarkTabDescriptor                        TabDescriptor;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUI.EmbarkCommonTabListWidgetBase.HandleTabContentCreation
struct UEmbarkCommonTabListWidgetBase_HandleTabContentCreation_Params
{
	struct FName                                       TabNameID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonUserWidget*                           TabWidget;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function EmbarkUI.EmbarkCommonTabListWidgetBase.GetRegisteredStaticTab
struct UEmbarkCommonTabListWidgetBase_GetRegisteredStaticTab_Params
{
	struct FName                                       TabNameID;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkTabDescriptor                        OutTabInfo;                                               // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUI.EmbarkCommonTabListWidgetBase.GetActiveTabContent
struct UEmbarkCommonTabListWidgetBase_GetActiveTabContent_Params
{
	class UCommonUserWidget*                           ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function EmbarkUI.EmbarkImageBase.OnConstruct
struct UEmbarkImageBase_OnConstruct_Params
{
};

// Function EmbarkUI.EmbarkInputKeySelectorBase.OnSynchronizeProperties
struct UEmbarkInputKeySelectorBase_OnSynchronizeProperties_Params
{
};

// Function EmbarkUI.EmbarkInputKeySelectorBase.OnConstruct
struct UEmbarkInputKeySelectorBase_OnConstruct_Params
{
};

// Function EmbarkUI.EmbarkListView.SetEntrySpacing
struct UEmbarkListView_SetEntrySpacing_Params
{
	float                                              InEntrySpacing;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUI.EmbarkLoadingScreenSubsystem.ShowWidgetLoadingScreen
struct UEmbarkLoadingScreenSubsystem_ShowWidgetLoadingScreen_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function EmbarkUI.EmbarkLoadingScreenSubsystem.ShowLoadingScreen
struct UEmbarkLoadingScreenSubsystem_ShowLoadingScreen_Params
{
	struct FString                                     InMapName;                                                // (Parm, ZeroConstructor)
};

// Function EmbarkUI.EmbarkLoadingScreenSubsystem.SetNextLoadingScreen
struct UEmbarkLoadingScreenSubsystem_SetNextLoadingScreen_Params
{
	struct FName                                       Tag;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function EmbarkUI.EmbarkLoadingScreenSubsystem.SetCanInterruptLoadingScreen
struct UEmbarkLoadingScreenSubsystem_SetCanInterruptLoadingScreen_Params
{
	bool                                               bInCanInterrupt;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUI.EmbarkLoadingScreenSubsystem.SetAutoStopLoadingScreen
struct UEmbarkLoadingScreenSubsystem_SetAutoStopLoadingScreen_Params
{
	bool                                               bInAutoStop;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUI.EmbarkLoadingScreenSubsystem.HideWidgetLoadingScreen
struct UEmbarkLoadingScreenSubsystem_HideWidgetLoadingScreen_Params
{
};

// Function EmbarkUI.EmbarkLoadingScreenSubsystem.EndLoadingScreen
struct UEmbarkLoadingScreenSubsystem_EndLoadingScreen_Params
{
	class UWorld*                                      InLoadedWorld;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUI.EmbarkLoadingScreenSubsystem.BeginLoadingScreen
struct UEmbarkLoadingScreenSubsystem_BeginLoadingScreen_Params
{
	struct FString                                     InMapName;                                                // (Parm, ZeroConstructor)
};

// Function EmbarkUI.EmbarkMaterialBox.SetTextureParameter
struct UEmbarkMaterialBox_SetTextureParameter_Params
{
	struct FName                                       TextureParameter;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUI.EmbarkMaterialBox.SetRenderToTexture
struct UEmbarkMaterialBox_SetRenderToTexture_Params
{
	bool                                               bInRenderToTexture;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUI.EmbarkMaterialBox.SetEffectMaterial
struct UEmbarkMaterialBox_SetEffectMaterial_Params
{
	class UMaterialInterface*                          EffectMaterial;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUI.EmbarkMaterialBox.GetEffectMaterial
struct UEmbarkMaterialBox_GetEffectMaterial_Params
{
	unsigned char                                      Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUI.EmbarkUserWidget.RenameInputComponent
struct UEmbarkUserWidget_RenameInputComponent_Params
{
	struct FString                                     NewName;                                                  // (Parm, ZeroConstructor)
};

// Function EmbarkUI.EmbarkUserWidget.GetCurrentFocus
struct UEmbarkUserWidget_GetCurrentFocus_Params
{
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function EmbarkUI.EmbarkUserWidget.BP_GetDesiredFocusTarget
struct UEmbarkUserWidget_BP_GetDesiredFocusTarget_Params
{
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function EmbarkUI.EmbarkModalWidget.NavigateUp
struct UEmbarkModalWidget_NavigateUp_Params
{
	enum class EUINavigation                           InNavigation;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function EmbarkUI.EmbarkModalWidget.NavigateRight
struct UEmbarkModalWidget_NavigateRight_Params
{
	enum class EUINavigation                           InNavigation;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function EmbarkUI.EmbarkModalWidget.NavigateLeft
struct UEmbarkModalWidget_NavigateLeft_Params
{
	enum class EUINavigation                           InNavigation;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function EmbarkUI.EmbarkModalWidget.NavigateDown
struct UEmbarkModalWidget_NavigateDown_Params
{
	enum class EUINavigation                           InNavigation;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function EmbarkUI.EmbarkModalWidget.MakeInputActionBlocking
struct UEmbarkModalWidget_MakeInputActionBlocking_Params
{
};

// Function EmbarkUI.EmbarkOverlayingContainer.SetOverlayingState
struct UEmbarkOverlayingContainer_SetOverlayingState_Params
{
	bool                                               bInIsHovered;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUI.EmbarkOverlayingContainer.IsOverlaying
struct UEmbarkOverlayingContainer_IsOverlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUI.EmbarkRichTextBlockColorDecorator.GetColorForId
struct UEmbarkRichTextBlockColorDecorator_GetColorForId_Params
{
	struct FString                                     ColorKey;                                                 // (Parm, ZeroConstructor)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUI.EmbarkSavingIndicatorSubsystem.EndSave
struct UEmbarkSavingIndicatorSubsystem_EndSave_Params
{
};

// Function EmbarkUI.EmbarkSavingIndicatorSubsystem.BeginSave
struct UEmbarkSavingIndicatorSubsystem_BeginSave_Params
{
};

// Function EmbarkUI.EmbarkScrollBoxBase.UpdateStyle
struct UEmbarkScrollBoxBase_UpdateStyle_Params
{
	struct FSlateBrush                                 BottomShadowBrush;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FSlateBrush                                 LeftShadowBrush;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FSlateBrush                                 RightShadowBrush;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FSlateBrush                                 TopShadowBrush;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkUI.EmbarkScrollBoxBase.UpdateScrollbarStyle
struct UEmbarkScrollBoxBase_UpdateScrollbarStyle_Params
{
	struct FSlateBrush                                 ForegroundBrush;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FSlateBrush                                 BackgroundBrush;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                Thickness;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUI.EmbarkScrollBoxBase.SetAllowRightClickDragScrolling
struct UEmbarkScrollBoxBase_SetAllowRightClickDragScrolling_Params
{
	bool                                               bInAllowRightClickDragScrolling;                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUI.EmbarkScrollBoxBase.OnSynchronizeProperties
struct UEmbarkScrollBoxBase_OnSynchronizeProperties_Params
{
};

// Function EmbarkUI.EmbarkScrollBoxBase.OnConstruct
struct UEmbarkScrollBoxBase_OnConstruct_Params
{
};

// Function EmbarkUI.EmbarkSubtitleWidget.OnSetSubtitleTextChanged
struct UEmbarkSubtitleWidget_OnSetSubtitleTextChanged_Params
{
	struct FText                                       InSubtitleText;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkUI.EmbarkSubtitleWidget.OnSetSubtitleText
struct UEmbarkSubtitleWidget_OnSetSubtitleText_Params
{
	struct FText                                       InSubtitleText;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkUI.EmbarkText3DActor.SetText
struct AEmbarkText3DActor_SetText_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkUI.EmbarkText3DActor.OnTextGenerated
struct AEmbarkText3DActor_OnTextGenerated_Params
{
};

// Function EmbarkUI.EmbarkText3DActor.GetText
struct AEmbarkText3DActor_GetText_Params
{
	struct FText                                       ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function EmbarkUI.EmbarkTextBlockBase.SetLineHeight
struct UEmbarkTextBlockBase_SetLineHeight_Params
{
	float                                              InLineHeightPercentage;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUI.EmbarkTextBlockBase.SetColorBinding
struct UEmbarkTextBlockBase_SetColorBinding_Params
{
};

// Function EmbarkUI.EmbarkTextBlockBase.SetColorAndOpacityDelegate
struct UEmbarkTextBlockBase_SetColorAndOpacityDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                               // (Parm, ZeroConstructor)
};

// Function EmbarkUI.EmbarkTextBlockBase.OnSynchronizeProperties
struct UEmbarkTextBlockBase_OnSynchronizeProperties_Params
{
};

// Function EmbarkUI.EmbarkTextBlockBase.OnConstruct
struct UEmbarkTextBlockBase_OnConstruct_Params
{
};

// Function EmbarkUI.EmbarkTextBlockBase.GetNativeColor
struct UEmbarkTextBlockBase_GetNativeColor_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkUI.EmbarkViewData.SetTextProperty
struct UEmbarkViewData_SetTextProperty_Params
{
	struct FName                                       PropertyName;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FText                                       Value;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkUI.EmbarkViewData.SetStringProperty
struct UEmbarkViewData_SetStringProperty_Params
{
	struct FName                                       PropertyName;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
};

// Function EmbarkUI.EmbarkViewData.SetIntProperty
struct UEmbarkViewData_SetIntProperty_Params
{
	struct FName                                       PropertyName;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUI.EmbarkViewData.SetFloatProperty
struct UEmbarkViewData_SetFloatProperty_Params
{
	struct FName                                       PropertyName;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUI.EmbarkViewData.RemoveTextUFunction
struct UEmbarkViewData_RemoveTextUFunction_Params
{
	struct FName                                       PropertyName;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUI.EmbarkViewData.RemoveStringUFunction
struct UEmbarkViewData_RemoveStringUFunction_Params
{
	struct FName                                       PropertyName;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUI.EmbarkViewData.RemoveIntUFunction
struct UEmbarkViewData_RemoveIntUFunction_Params
{
	struct FName                                       PropertyName;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUI.EmbarkViewData.RemoveFloatUFunction
struct UEmbarkViewData_RemoveFloatUFunction_Params
{
	struct FName                                       PropertyName;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction EmbarkUI.EmbarkViewData.OnViewDataChangedSignature__DelegateSignature
struct UEmbarkViewData_OnViewDataChangedSignature__DelegateSignature_Params
{
};

// Function EmbarkUI.EmbarkViewData.AddTextUFunction
struct UEmbarkViewData_AddTextUFunction_Params
{
	struct FName                                       PropertyName;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       FunctionName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUI.EmbarkViewData.AddStringUFunction
struct UEmbarkViewData_AddStringUFunction_Params
{
	struct FName                                       PropertyName;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       FunctionName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUI.EmbarkViewData.AddIntUFunction
struct UEmbarkViewData_AddIntUFunction_Params
{
	struct FName                                       PropertyName;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       FunctionName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUI.EmbarkViewData.AddFloatUFunction
struct UEmbarkViewData_AddFloatUFunction_Params
{
	struct FName                                       PropertyName;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       FunctionName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUI.IEmbarkViewDataSubsystem.SetViewDataTextProperty
struct UIEmbarkViewDataSubsystem_SetViewDataTextProperty_Params
{
	TEnumAsByte<EUIDataContext>                        Context;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       PropertyName;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FText                                       Value;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkUI.IEmbarkViewDataSubsystem.SetViewDataStringProperty
struct UIEmbarkViewDataSubsystem_SetViewDataStringProperty_Params
{
	TEnumAsByte<EUIDataContext>                        Context;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       PropertyName;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
};

// Function EmbarkUI.IEmbarkViewDataSubsystem.SetViewDataIntProperty
struct UIEmbarkViewDataSubsystem_SetViewDataIntProperty_Params
{
	TEnumAsByte<EUIDataContext>                        Context;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       PropertyName;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUI.IEmbarkViewDataSubsystem.SetViewDataFloatProperty
struct UIEmbarkViewDataSubsystem_SetViewDataFloatProperty_Params
{
	TEnumAsByte<EUIDataContext>                        Context;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       PropertyName;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUI.IEmbarkViewDataSubsystem.RemoveViewData
struct UIEmbarkViewDataSubsystem_RemoveViewData_Params
{
	TEnumAsByte<EUIDataContext>                        Context;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUI.IEmbarkViewDataSubsystem.GetViewDataTextProperty
struct UIEmbarkViewDataSubsystem_GetViewDataTextProperty_Params
{
	TEnumAsByte<EUIDataContext>                        Context;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       PropertyName;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FText                                       OutValue;                                                 // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUI.IEmbarkViewDataSubsystem.GetViewDataStringProperty
struct UIEmbarkViewDataSubsystem_GetViewDataStringProperty_Params
{
	TEnumAsByte<EUIDataContext>                        Context;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       PropertyName;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FString                                     OutValue;                                                 // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUI.IEmbarkViewDataSubsystem.GetViewDataIntProperty
struct UIEmbarkViewDataSubsystem_GetViewDataIntProperty_Params
{
	TEnumAsByte<EUIDataContext>                        Context;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       PropertyName;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                OutValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUI.IEmbarkViewDataSubsystem.GetViewDataFloatProperty
struct UIEmbarkViewDataSubsystem_GetViewDataFloatProperty_Params
{
	TEnumAsByte<EUIDataContext>                        Context;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       PropertyName;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              OutValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUI.IEmbarkViewDataSubsystem.GetViewData
struct UIEmbarkViewDataSubsystem_GetViewData_Params
{
	TEnumAsByte<EUIDataContext>                        Context;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UEmbarkViewData*                             OutViewData;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUI.IEmbarkViewDataSubsystem.CreateViewData
struct UIEmbarkViewDataSubsystem_CreateViewData_Params
{
	TEnumAsByte<EUIDataContext>                        Context;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ViewDataClass;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UEmbarkViewData*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUI.IEmbarkViewDataSubsystem.ClearContext
struct UIEmbarkViewDataSubsystem_ClearContext_Params
{
	TEnumAsByte<EUIDataContext>                        Context;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUI.EmbarkWidgetBlueprintLibrary.SetInputMode_GameOnly_WithoutForceFocus
struct UEmbarkWidgetBlueprintLibrary_SetInputMode_GameOnly_WithoutForceFocus_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUI.EmbarkWidgetBlueprintLibrary.GetPerformanceOverlayStats
struct UEmbarkWidgetBlueprintLibrary_GetPerformanceOverlayStats_Params
{
	struct FPerformanceOverlayStats                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkUI.EmbarkWidgetBlueprintLibrary.GetGPUUtilizationPercent
struct UEmbarkWidgetBlueprintLibrary_GetGPUUtilizationPercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUI.QRCodeGeneratorLibrary.GenerateQRCode
struct UQRCodeGeneratorLibrary_GenerateQRCode_Params
{
	struct FString                                     TextToEncode;                                             // (Parm, ZeroConstructor)
	bool                                               bTransparent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUI.UIAnimationState.ShouldApplyAnimation
struct UUIAnimationState_ShouldApplyAnimation_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUI.UIAnimationState.IsAnimationOngoing
struct UUIAnimationState_IsAnimationOngoing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUI.UIAnimationParticipantContainer.TickAnimation
struct UUIAnimationParticipantContainer_TickAnimation_Params
{
	struct FUIAnimationTickParameter                   Parameter;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkUI.UIAnimationParticipantContainer.PreTickAnimation
struct UUIAnimationParticipantContainer_PreTickAnimation_Params
{
	bool                                               bIsAnimating;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AnimationProgress;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUI.UIAnimationParticipantContainer.GlobalAnimationStart
struct UUIAnimationParticipantContainer_GlobalAnimationStart_Params
{
};

// Function EmbarkUI.UIAnimationParticipantContainer.GlobalAnimationComplete
struct UUIAnimationParticipantContainer_GlobalAnimationComplete_Params
{
};

// Function EmbarkUI.UIAnimationParticipantContainer.AnimationStart
struct UUIAnimationParticipantContainer_AnimationStart_Params
{
};

// Function EmbarkUI.UIAnimationParticipantContainer.AnimationComplete
struct UUIAnimationParticipantContainer_AnimationComplete_Params
{
};

// Function EmbarkUI.UIAnimationDriverContainer.StopAnimation
struct UUIAnimationDriverContainer_StopAnimation_Params
{
};

// Function EmbarkUI.UIAnimationDriverContainer.StartAnimation
struct UUIAnimationDriverContainer_StartAnimation_Params
{
};

// Function EmbarkUI.UIAnimationDriverContainer.PopulateStateDistance
struct UUIAnimationDriverContainer_PopulateStateDistance_Params
{
	TArray<class UUIAnimationState*>                   States;                                                   // (Parm, OutParm, ZeroConstructor)
	struct FGeometry                                   ContainerGeometry;                                        // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function EmbarkUI.UIAnimationDriverContainer.IsAnimating
struct UUIAnimationDriverContainer_IsAnimating_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUI.UIMetaDataItem.GetKey
struct UUIMetaDataItem_GetKey_Params
{
	int64_t                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUI.UIMetaDataItem.GetDebugDisplayName
struct UUIMetaDataItem_GetDebugDisplayName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkUI.IUIMetaDataRepository.Uninitialize
struct UIUIMetaDataRepository_Uninitialize_Params
{
};

// Function EmbarkUI.IUIMetaDataRepository.IsInitialized
struct UIUIMetaDataRepository_IsInitialized_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUI.IUIMetaDataRepository.Initialize
struct UIUIMetaDataRepository_Initialize_Params
{
};

// Function EmbarkUI.IUIMetaDataRepository.GetItemByKey
struct UIUIMetaDataRepository_GetItemByKey_Params
{
	class UClass*                                      ItemClass;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            Key;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UUIMetaDataItem*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUI.UISimpleAnimationContainer.RestartAnimation
struct UUISimpleAnimationContainer_RestartAnimation_Params
{
};

// Function EmbarkUI.UISimpleAnimationContainer.PlayExitAnimation
struct UUISimpleAnimationContainer_PlayExitAnimation_Params
{
};

// Function EmbarkUI.WatermarkBaseWidget.SetPath
struct UWatermarkBaseWidget_SetPath_Params
{
	struct FString                                     InPath;                                                   // (Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
