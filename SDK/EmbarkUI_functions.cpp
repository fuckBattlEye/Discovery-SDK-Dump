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

// Function EmbarkUI.AngularProgressBarBase.OnSynchronizeProperties
// (Native, Event, Public, BlueprintEvent)

void UAngularProgressBarBase::OnSynchronizeProperties()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.AngularProgressBarBase.OnSynchronizeProperties"));

	UAngularProgressBarBase_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkButtonBaseOld.SimulateMouseLeave
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FPointerEvent           MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)

void UEmbarkButtonBaseOld::SimulateMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkButtonBaseOld.SimulateMouseLeave"));

	UEmbarkButtonBaseOld_SimulateMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkButtonBaseOld.SimulateMouseEnter
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FGeometry               MyGeometry                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)

void UEmbarkButtonBaseOld::SimulateMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkButtonBaseOld.SimulateMouseEnter"));

	UEmbarkButtonBaseOld_SimulateMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkButtonBaseOld.SimulateMouseButtonUp
// (Final, Native, Public)

void UEmbarkButtonBaseOld::SimulateMouseButtonUp()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkButtonBaseOld.SimulateMouseButtonUp"));

	UEmbarkButtonBaseOld_SimulateMouseButtonUp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkButtonBaseOld.SimulateMouseButtonDown
// (Final, Native, Public)

void UEmbarkButtonBaseOld::SimulateMouseButtonDown()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkButtonBaseOld.SimulateMouseButtonDown"));

	UEmbarkButtonBaseOld_SimulateMouseButtonDown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkButtonBaseOld.SimulateClick
// (Final, Native, Public)

void UEmbarkButtonBaseOld::SimulateClick()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkButtonBaseOld.SimulateClick"));

	UEmbarkButtonBaseOld_SimulateClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkButtonBaseOld.SetPressedSound
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FSlateSound             InPressedSound                 (ConstParm, Parm, OutParm, ReferenceParm)

void UEmbarkButtonBaseOld::SetPressedSound(const struct FSlateSound& InPressedSound)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkButtonBaseOld.SetPressedSound"));

	UEmbarkButtonBaseOld_SetPressedSound_Params params;
	params.InPressedSound = InPressedSound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkButtonBaseOld.OnKeyUp
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FGeometry               MyGeometry                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UEmbarkButtonBaseOld::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkButtonBaseOld.OnKeyUp"));

	UEmbarkButtonBaseOld_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUI.EmbarkButtonBaseOld.OnKeyDown
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FGeometry               MyGeometry                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UEmbarkButtonBaseOld::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkButtonBaseOld.OnKeyDown"));

	UEmbarkButtonBaseOld_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUI.EmbarkButtonBaseOld.OnConstruct
// (Native, Event, Public, BlueprintEvent)

void UEmbarkButtonBaseOld::OnConstruct()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkButtonBaseOld.OnConstruct"));

	UEmbarkButtonBaseOld_OnConstruct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkButtonBase.UpdateCurrentButtonStyle
// (Final, Native, Public, BlueprintCallable)

void UEmbarkButtonBase::UpdateCurrentButtonStyle()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkButtonBase.UpdateCurrentButtonStyle"));

	UEmbarkButtonBase_UpdateCurrentButtonStyle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkButtonBase.TempGetNormalButtonStyle
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FButtonStyle            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FButtonStyle UEmbarkButtonBase::TempGetNormalButtonStyle()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkButtonBase.TempGetNormalButtonStyle"));

	UEmbarkButtonBase_TempGetNormalButtonStyle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUI.EmbarkButtonBase.SetTouchMethod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EButtonTouchMethod> InTouchMethod                  (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkButtonBase::SetTouchMethod(TEnumAsByte<EButtonTouchMethod> InTouchMethod)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkButtonBase.SetTouchMethod"));

	UEmbarkButtonBase_SetTouchMethod_Params params;
	params.InTouchMethod = InTouchMethod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkButtonBase.SetPressMethod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EButtonPressMethod> InPressMethod                  (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkButtonBase::SetPressMethod(TEnumAsByte<EButtonPressMethod> InPressMethod)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkButtonBase.SetPressMethod"));

	UEmbarkButtonBase_SetPressMethod_Params params;
	params.InPressMethod = InPressMethod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkButtonBase.SetIsFocusable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInIsFocusable                 (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkButtonBase::SetIsFocusable(bool bInIsFocusable)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkButtonBase.SetIsFocusable"));

	UEmbarkButtonBase_SetIsFocusable_Params params;
	params.bInIsFocusable = bInIsFocusable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkButtonBase.SetClickMethod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EButtonClickMethod> InClickMethod                  (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkButtonBase::SetClickMethod(TEnumAsByte<EButtonClickMethod> InClickMethod)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkButtonBase.SetClickMethod"));

	UEmbarkButtonBase_SetClickMethod_Params params;
	params.InClickMethod = InClickMethod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkButtonBase.OnUnhovered
// (Event, Protected, BlueprintEvent)

void UEmbarkButtonBase::OnUnhovered()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkButtonBase.OnUnhovered"));

	UEmbarkButtonBase_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkButtonBase.OnReleased
// (Event, Protected, BlueprintEvent)

void UEmbarkButtonBase::OnReleased()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkButtonBase.OnReleased"));

	UEmbarkButtonBase_OnReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkButtonBase.OnPressed
// (Event, Protected, BlueprintEvent)

void UEmbarkButtonBase::OnPressed()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkButtonBase.OnPressed"));

	UEmbarkButtonBase_OnPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkButtonBase.OnHovered
// (Event, Protected, BlueprintEvent)

void UEmbarkButtonBase::OnHovered()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkButtonBase.OnHovered"));

	UEmbarkButtonBase_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkButtonBase.OnEnabledStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bInIsEnabled                   (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkButtonBase::OnEnabledStateChanged(bool bInIsEnabled)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkButtonBase.OnEnabledStateChanged"));

	UEmbarkButtonBase_OnEnabledStateChanged_Params params;
	params.bInIsEnabled = bInIsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkButtonBase.OnDoubleClicked
// (Event, Protected, BlueprintEvent)

void UEmbarkButtonBase::OnDoubleClicked()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkButtonBase.OnDoubleClicked"));

	UEmbarkButtonBase_OnDoubleClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkButtonBase.OnClicked
// (Event, Protected, BlueprintEvent)

void UEmbarkButtonBase::OnClicked()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkButtonBase.OnClicked"));

	UEmbarkButtonBase_OnClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkButtonBase.OnButtonStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEmbarkButtonState  InButtonState                  (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkButtonBase::OnButtonStateChanged(enum class EEmbarkButtonState InButtonState)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkButtonBase.OnButtonStateChanged"));

	UEmbarkButtonBase_OnButtonStateChanged_Params params;
	params.InButtonState = InButtonState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkButtonBase.IsPressed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkButtonBase::IsPressed()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkButtonBase.IsPressed"));

	UEmbarkButtonBase_IsPressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUI.EmbarkButtonBase.IsInteractionEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkButtonBase::IsInteractionEnabled()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkButtonBase.IsInteractionEnabled"));

	UEmbarkButtonBase_IsInteractionEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUI.EmbarkButtonBase.HandleButtonUnhovered
// (Final, Native, Protected)

void UEmbarkButtonBase::HandleButtonUnhovered()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkButtonBase.HandleButtonUnhovered"));

	UEmbarkButtonBase_HandleButtonUnhovered_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkButtonBase.HandleButtonReleased
// (Final, Native, Protected)

void UEmbarkButtonBase::HandleButtonReleased()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkButtonBase.HandleButtonReleased"));

	UEmbarkButtonBase_HandleButtonReleased_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkButtonBase.HandleButtonPressed
// (Final, Native, Protected)

void UEmbarkButtonBase::HandleButtonPressed()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkButtonBase.HandleButtonPressed"));

	UEmbarkButtonBase_HandleButtonPressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkButtonBase.HandleButtonHovered
// (Final, Native, Protected)

void UEmbarkButtonBase::HandleButtonHovered()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkButtonBase.HandleButtonHovered"));

	UEmbarkButtonBase_HandleButtonHovered_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkButtonBase.HandleButtonClicked
// (Final, Native, Protected)

void UEmbarkButtonBase::HandleButtonClicked()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkButtonBase.HandleButtonClicked"));

	UEmbarkButtonBase_HandleButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkButtonBase.GetIsFocusable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkButtonBase::GetIsFocusable()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkButtonBase.GetIsFocusable"));

	UEmbarkButtonBase_GetIsFocusable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUI.EmbarkButtonBase.GetIsButtonEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkButtonBase::GetIsButtonEnabled()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkButtonBase.GetIsButtonEnabled"));

	UEmbarkButtonBase_GetIsButtonEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUI.EmbarkButtonBase.GetDisabledButtonStyle
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// struct FButtonStyle            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FButtonStyle UEmbarkButtonBase::GetDisabledButtonStyle()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkButtonBase.GetDisabledButtonStyle"));

	UEmbarkButtonBase_GetDisabledButtonStyle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUI.EmbarkButtonBase.GetCurrentButtonStyle
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// struct FButtonStyle            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FButtonStyle UEmbarkButtonBase::GetCurrentButtonStyle()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkButtonBase.GetCurrentButtonStyle"));

	UEmbarkButtonBase_GetCurrentButtonStyle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUI.EmbarkButtonBase.GetButtonState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EEmbarkButtonState  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

enum class EEmbarkButtonState UEmbarkButtonBase::GetButtonState()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkButtonBase.GetButtonState"));

	UEmbarkButtonBase_GetButtonState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUI.EmbarkButtonBase.BuildStyles
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UEmbarkButtonStyleBase*  InStyle                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkButtonBase::BuildStyles(class UEmbarkButtonStyleBase* InStyle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkButtonBase.BuildStyles"));

	UEmbarkButtonBase_BuildStyles_Params params;
	params.InStyle = InStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkButtonBase.BuildSoundStyles
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UEmbarkButtonSoundStyleBase* InStyle                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkButtonBase::BuildSoundStyles(class UEmbarkButtonSoundStyleBase* InStyle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkButtonBase.BuildSoundStyles"));

	UEmbarkButtonBase_BuildSoundStyles_Params params;
	params.InStyle = InStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkButtonSoundStyleBase.GetButtonSoundStyle
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                  InButtonSoundStyle             (Parm, ZeroConstructor, IsPlainOldData)
// class UEmbarkButtonSoundStyleBase* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UEmbarkButtonSoundStyleBase* UEmbarkButtonSoundStyleBase::STATIC_GetButtonSoundStyle(class UClass* InButtonSoundStyle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkButtonSoundStyleBase.GetButtonSoundStyle"));

	UEmbarkButtonSoundStyleBase_GetButtonSoundStyle_Params params;
	params.InButtonSoundStyle = InButtonSoundStyle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUI.EmbarkButtonStyleBase.GetNormalPressedBrush
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UEmbarkButtonStyleBase::GetNormalPressedBrush()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkButtonStyleBase.GetNormalPressedBrush"));

	UEmbarkButtonStyleBase_GetNormalPressedBrush_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUI.EmbarkButtonStyleBase.GetNormalHighlightBrush
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UEmbarkButtonStyleBase::GetNormalHighlightBrush()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkButtonStyleBase.GetNormalHighlightBrush"));

	UEmbarkButtonStyleBase_GetNormalHighlightBrush_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUI.EmbarkButtonStyleBase.GetNormalBaseBrush
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UEmbarkButtonStyleBase::GetNormalBaseBrush()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkButtonStyleBase.GetNormalBaseBrush"));

	UEmbarkButtonStyleBase_GetNormalBaseBrush_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUI.EmbarkButtonStyleBase.GetDisabledBrush
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UEmbarkButtonStyleBase::GetDisabledBrush()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkButtonStyleBase.GetDisabledBrush"));

	UEmbarkButtonStyleBase_GetDisabledBrush_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUI.EmbarkButtonStyleBase.GetButtonStyle
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                  InButtonStyle                  (Parm, ZeroConstructor, IsPlainOldData)
// class UEmbarkButtonStyleBase*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UEmbarkButtonStyleBase* UEmbarkButtonStyleBase::STATIC_GetButtonStyle(class UClass* InButtonStyle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkButtonStyleBase.GetButtonStyle"));

	UEmbarkButtonStyleBase_GetButtonStyle_Params params;
	params.InButtonStyle = InButtonStyle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUI.EmbarkCommonActionWidget.SetInputActionColor
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FLinearColor            Color                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FLinearColor            TextColor                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UEmbarkCommonActionWidget::SetInputActionColor(const struct FLinearColor& Color, const struct FLinearColor& TextColor)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkCommonActionWidget.SetInputActionColor"));

	UEmbarkCommonActionWidget_SetInputActionColor_Params params;
	params.Color = Color;
	params.TextColor = TextColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkCommonActivatableWidgetBase.RequestFocus
// (Final, Native, Protected, BlueprintCallable)

void UEmbarkCommonActivatableWidgetBase::RequestFocus()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkCommonActivatableWidgetBase.RequestFocus"));

	UEmbarkCommonActivatableWidgetBase_RequestFocus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkCommonActivatableWidgetBase.HandleBackAction
// (Final, Native, Protected, BlueprintCallable)

void UEmbarkCommonActivatableWidgetBase::HandleBackAction()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkCommonActivatableWidgetBase.HandleBackAction"));

	UEmbarkCommonActivatableWidgetBase_HandleBackAction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkCommonActivatableWidgetStack.GetAllWidgets
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UCommonActivatableWidget*> ReturnValue                    (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<class UCommonActivatableWidget*> UEmbarkCommonActivatableWidgetStack::GetAllWidgets()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkCommonActivatableWidgetStack.GetAllWidgets"));

	UEmbarkCommonActivatableWidgetStack_GetAllWidgets_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUI.EmbarkCommonButtonBase.SimulateClick
// (Final, Native, Public, BlueprintCallable)

void UEmbarkCommonButtonBase::SimulateClick()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkCommonButtonBase.SimulateClick"));

	UEmbarkCommonButtonBase_SimulateClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkCommonButtonBase.OnEmbarkButtonReleased
// (Event, Public, BlueprintEvent)

void UEmbarkCommonButtonBase::OnEmbarkButtonReleased()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkCommonButtonBase.OnEmbarkButtonReleased"));

	UEmbarkCommonButtonBase_OnEmbarkButtonReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkCommonButtonBase.OnEmbarkButtonPressed
// (Event, Public, BlueprintEvent)

void UEmbarkCommonButtonBase::OnEmbarkButtonPressed()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkCommonButtonBase.OnEmbarkButtonPressed"));

	UEmbarkCommonButtonBase_OnEmbarkButtonPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkCommonTabListWidgetBase.SetupTabs
// (Final, Native, Public, BlueprintCallable)

void UEmbarkCommonTabListWidgetBase::SetupTabs()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkCommonTabListWidgetBase.SetupTabs"));

	UEmbarkCommonTabListWidgetBase_SetupTabs_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkCommonTabListWidgetBase.RegisterDynamicTab
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FEmbarkTabDescriptor    TabDescriptor                  (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkCommonTabListWidgetBase::RegisterDynamicTab(const struct FEmbarkTabDescriptor& TabDescriptor)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkCommonTabListWidgetBase.RegisterDynamicTab"));

	UEmbarkCommonTabListWidgetBase_RegisterDynamicTab_Params params;
	params.TabDescriptor = TabDescriptor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUI.EmbarkCommonTabListWidgetBase.HandleTabContentCreation
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// struct FName                   TabNameID                      (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonUserWidget*       TabWidget                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UEmbarkCommonTabListWidgetBase::HandleTabContentCreation(const struct FName& TabNameID, class UCommonUserWidget* TabWidget)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkCommonTabListWidgetBase.HandleTabContentCreation"));

	UEmbarkCommonTabListWidgetBase_HandleTabContentCreation_Params params;
	params.TabNameID = TabNameID;
	params.TabWidget = TabWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkCommonTabListWidgetBase.GetRegisteredStaticTab
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   TabNameID                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkTabDescriptor    OutTabInfo                     (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkCommonTabListWidgetBase::GetRegisteredStaticTab(const struct FName& TabNameID, struct FEmbarkTabDescriptor* OutTabInfo)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkCommonTabListWidgetBase.GetRegisteredStaticTab"));

	UEmbarkCommonTabListWidgetBase_GetRegisteredStaticTab_Params params;
	params.TabNameID = TabNameID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTabInfo != nullptr)
		*OutTabInfo = params.OutTabInfo;

	return params.ReturnValue;
}


// Function EmbarkUI.EmbarkCommonTabListWidgetBase.GetActiveTabContent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCommonUserWidget*       ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UCommonUserWidget* UEmbarkCommonTabListWidgetBase::GetActiveTabContent()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkCommonTabListWidgetBase.GetActiveTabContent"));

	UEmbarkCommonTabListWidgetBase_GetActiveTabContent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUI.EmbarkImageBase.OnConstruct
// (Native, Event, Public, BlueprintEvent)

void UEmbarkImageBase::OnConstruct()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkImageBase.OnConstruct"));

	UEmbarkImageBase_OnConstruct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkInputKeySelectorBase.OnSynchronizeProperties
// (Native, Event, Public, BlueprintEvent)

void UEmbarkInputKeySelectorBase::OnSynchronizeProperties()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkInputKeySelectorBase.OnSynchronizeProperties"));

	UEmbarkInputKeySelectorBase_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkInputKeySelectorBase.OnConstruct
// (Native, Event, Public, BlueprintEvent)

void UEmbarkInputKeySelectorBase::OnConstruct()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkInputKeySelectorBase.OnConstruct"));

	UEmbarkInputKeySelectorBase_OnConstruct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkListView.SetEntrySpacing
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InEntrySpacing                 (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkListView::SetEntrySpacing(float InEntrySpacing)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkListView.SetEntrySpacing"));

	UEmbarkListView_SetEntrySpacing_Params params;
	params.InEntrySpacing = InEntrySpacing;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkLoadingScreenSubsystem.ShowWidgetLoadingScreen
// (Final, Native, Public)
// Parameters:
// class UUserWidget*             Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UEmbarkLoadingScreenSubsystem::ShowWidgetLoadingScreen(class UUserWidget* Widget)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkLoadingScreenSubsystem.ShowWidgetLoadingScreen"));

	UEmbarkLoadingScreenSubsystem_ShowWidgetLoadingScreen_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkLoadingScreenSubsystem.ShowLoadingScreen
// (Native, Public)
// Parameters:
// struct FString                 InMapName                      (Parm, ZeroConstructor)

void UEmbarkLoadingScreenSubsystem::ShowLoadingScreen(const struct FString& InMapName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkLoadingScreenSubsystem.ShowLoadingScreen"));

	UEmbarkLoadingScreenSubsystem_ShowLoadingScreen_Params params;
	params.InMapName = InMapName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkLoadingScreenSubsystem.SetNextLoadingScreen
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FName                   Tag                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UEmbarkLoadingScreenSubsystem::SetNextLoadingScreen(const struct FName& Tag)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkLoadingScreenSubsystem.SetNextLoadingScreen"));

	UEmbarkLoadingScreenSubsystem_SetNextLoadingScreen_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkLoadingScreenSubsystem.SetCanInterruptLoadingScreen
// (Final, Native, Public)
// Parameters:
// bool                           bInCanInterrupt                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkLoadingScreenSubsystem::SetCanInterruptLoadingScreen(bool bInCanInterrupt)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkLoadingScreenSubsystem.SetCanInterruptLoadingScreen"));

	UEmbarkLoadingScreenSubsystem_SetCanInterruptLoadingScreen_Params params;
	params.bInCanInterrupt = bInCanInterrupt;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkLoadingScreenSubsystem.SetAutoStopLoadingScreen
// (Final, Native, Public)
// Parameters:
// bool                           bInAutoStop                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkLoadingScreenSubsystem::SetAutoStopLoadingScreen(bool bInAutoStop)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkLoadingScreenSubsystem.SetAutoStopLoadingScreen"));

	UEmbarkLoadingScreenSubsystem_SetAutoStopLoadingScreen_Params params;
	params.bInAutoStop = bInAutoStop;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkLoadingScreenSubsystem.HideWidgetLoadingScreen
// (Final, Native, Public)

void UEmbarkLoadingScreenSubsystem::HideWidgetLoadingScreen()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkLoadingScreenSubsystem.HideWidgetLoadingScreen"));

	UEmbarkLoadingScreenSubsystem_HideWidgetLoadingScreen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkLoadingScreenSubsystem.EndLoadingScreen
// (Native, Public)
// Parameters:
// class UWorld*                  InLoadedWorld                  (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkLoadingScreenSubsystem::EndLoadingScreen(class UWorld* InLoadedWorld)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkLoadingScreenSubsystem.EndLoadingScreen"));

	UEmbarkLoadingScreenSubsystem_EndLoadingScreen_Params params;
	params.InLoadedWorld = InLoadedWorld;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkLoadingScreenSubsystem.BeginLoadingScreen
// (Native, Public)
// Parameters:
// struct FString                 InMapName                      (Parm, ZeroConstructor)

void UEmbarkLoadingScreenSubsystem::BeginLoadingScreen(const struct FString& InMapName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkLoadingScreenSubsystem.BeginLoadingScreen"));

	UEmbarkLoadingScreenSubsystem_BeginLoadingScreen_Params params;
	params.InMapName = InMapName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkMaterialBox.SetTextureParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   TextureParameter               (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkMaterialBox::SetTextureParameter(const struct FName& TextureParameter)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkMaterialBox.SetTextureParameter"));

	UEmbarkMaterialBox_SetTextureParameter_Params params;
	params.TextureParameter = TextureParameter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkMaterialBox.SetRenderToTexture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInRenderToTexture             (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkMaterialBox::SetRenderToTexture(bool bInRenderToTexture)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkMaterialBox.SetRenderToTexture"));

	UEmbarkMaterialBox_SetRenderToTexture_Params params;
	params.bInRenderToTexture = bInRenderToTexture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkMaterialBox.SetEffectMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*      EffectMaterial                 (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkMaterialBox::SetEffectMaterial(class UMaterialInterface* EffectMaterial, unsigned char Index)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkMaterialBox.SetEffectMaterial"));

	UEmbarkMaterialBox_SetEffectMaterial_Params params;
	params.EffectMaterial = EffectMaterial;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkMaterialBox.GetEffectMaterial
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// unsigned char                  Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMaterialInstanceDynamic* UEmbarkMaterialBox::GetEffectMaterial(unsigned char Index)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkMaterialBox.GetEffectMaterial"));

	UEmbarkMaterialBox_GetEffectMaterial_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUI.EmbarkUserWidget.RenameInputComponent
// (Final, Native, Protected)
// Parameters:
// struct FString                 NewName                        (Parm, ZeroConstructor)

void UEmbarkUserWidget::RenameInputComponent(const struct FString& NewName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkUserWidget.RenameInputComponent"));

	UEmbarkUserWidget_RenameInputComponent_Params params;
	params.NewName = NewName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkUserWidget.GetCurrentFocus
// (BlueprintCosmetic, Event, Protected, BlueprintEvent, Const)
// Parameters:
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UEmbarkUserWidget::GetCurrentFocus()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkUserWidget.GetCurrentFocus"));

	UEmbarkUserWidget_GetCurrentFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUI.EmbarkUserWidget.BP_GetDesiredFocusTarget
// (Event, Protected, BlueprintEvent, Const)
// Parameters:
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UEmbarkUserWidget::BP_GetDesiredFocusTarget()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkUserWidget.BP_GetDesiredFocusTarget"));

	UEmbarkUserWidget_BP_GetDesiredFocusTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUI.EmbarkModalWidget.NavigateUp
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// enum class EUINavigation       InNavigation                   (Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UEmbarkModalWidget::NavigateUp(enum class EUINavigation InNavigation)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkModalWidget.NavigateUp"));

	UEmbarkModalWidget_NavigateUp_Params params;
	params.InNavigation = InNavigation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUI.EmbarkModalWidget.NavigateRight
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// enum class EUINavigation       InNavigation                   (Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UEmbarkModalWidget::NavigateRight(enum class EUINavigation InNavigation)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkModalWidget.NavigateRight"));

	UEmbarkModalWidget_NavigateRight_Params params;
	params.InNavigation = InNavigation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUI.EmbarkModalWidget.NavigateLeft
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// enum class EUINavigation       InNavigation                   (Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UEmbarkModalWidget::NavigateLeft(enum class EUINavigation InNavigation)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkModalWidget.NavigateLeft"));

	UEmbarkModalWidget_NavigateLeft_Params params;
	params.InNavigation = InNavigation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUI.EmbarkModalWidget.NavigateDown
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// enum class EUINavigation       InNavigation                   (Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UEmbarkModalWidget::NavigateDown(enum class EUINavigation InNavigation)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkModalWidget.NavigateDown"));

	UEmbarkModalWidget_NavigateDown_Params params;
	params.InNavigation = InNavigation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUI.EmbarkModalWidget.MakeInputActionBlocking
// (Final, Native, Protected)

void UEmbarkModalWidget::MakeInputActionBlocking()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkModalWidget.MakeInputActionBlocking"));

	UEmbarkModalWidget_MakeInputActionBlocking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkOverlayingContainer.SetOverlayingState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInIsHovered                   (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkOverlayingContainer::SetOverlayingState(bool bInIsHovered)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkOverlayingContainer.SetOverlayingState"));

	UEmbarkOverlayingContainer_SetOverlayingState_Params params;
	params.bInIsHovered = bInIsHovered;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkOverlayingContainer.IsOverlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkOverlayingContainer::IsOverlaying()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkOverlayingContainer.IsOverlaying"));

	UEmbarkOverlayingContainer_IsOverlaying_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUI.EmbarkRichTextBlockColorDecorator.GetColorForId
// (Event, Public, HasDefaults, BlueprintEvent, Const)
// Parameters:
// struct FString                 ColorKey                       (Parm, ZeroConstructor)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UEmbarkRichTextBlockColorDecorator::GetColorForId(const struct FString& ColorKey)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkRichTextBlockColorDecorator.GetColorForId"));

	UEmbarkRichTextBlockColorDecorator_GetColorForId_Params params;
	params.ColorKey = ColorKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUI.EmbarkSavingIndicatorSubsystem.EndSave
// (Native, Public)

void UEmbarkSavingIndicatorSubsystem::EndSave()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkSavingIndicatorSubsystem.EndSave"));

	UEmbarkSavingIndicatorSubsystem_EndSave_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkSavingIndicatorSubsystem.BeginSave
// (Native, Public)

void UEmbarkSavingIndicatorSubsystem::BeginSave()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkSavingIndicatorSubsystem.BeginSave"));

	UEmbarkSavingIndicatorSubsystem_BeginSave_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkScrollBoxBase.UpdateStyle
// (Final, Native, Protected, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSlateBrush             BottomShadowBrush              (ConstParm, Parm, OutParm, ReferenceParm)
// struct FSlateBrush             LeftShadowBrush                (ConstParm, Parm, OutParm, ReferenceParm)
// struct FSlateBrush             RightShadowBrush               (ConstParm, Parm, OutParm, ReferenceParm)
// struct FSlateBrush             TopShadowBrush                 (ConstParm, Parm, OutParm, ReferenceParm)

void UEmbarkScrollBoxBase::UpdateStyle(const struct FSlateBrush& BottomShadowBrush, const struct FSlateBrush& LeftShadowBrush, const struct FSlateBrush& RightShadowBrush, const struct FSlateBrush& TopShadowBrush)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkScrollBoxBase.UpdateStyle"));

	UEmbarkScrollBoxBase_UpdateStyle_Params params;
	params.BottomShadowBrush = BottomShadowBrush;
	params.LeftShadowBrush = LeftShadowBrush;
	params.RightShadowBrush = RightShadowBrush;
	params.TopShadowBrush = TopShadowBrush;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkScrollBoxBase.UpdateScrollbarStyle
// (Final, Native, Protected, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSlateBrush             ForegroundBrush                (ConstParm, Parm, OutParm, ReferenceParm)
// struct FSlateBrush             BackgroundBrush                (ConstParm, Parm, OutParm, ReferenceParm)
// int                            Thickness                      (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkScrollBoxBase::UpdateScrollbarStyle(const struct FSlateBrush& ForegroundBrush, const struct FSlateBrush& BackgroundBrush, int Thickness)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkScrollBoxBase.UpdateScrollbarStyle"));

	UEmbarkScrollBoxBase_UpdateScrollbarStyle_Params params;
	params.ForegroundBrush = ForegroundBrush;
	params.BackgroundBrush = BackgroundBrush;
	params.Thickness = Thickness;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkScrollBoxBase.SetAllowRightClickDragScrolling
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInAllowRightClickDragScrolling (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkScrollBoxBase::SetAllowRightClickDragScrolling(bool bInAllowRightClickDragScrolling)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkScrollBoxBase.SetAllowRightClickDragScrolling"));

	UEmbarkScrollBoxBase_SetAllowRightClickDragScrolling_Params params;
	params.bInAllowRightClickDragScrolling = bInAllowRightClickDragScrolling;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkScrollBoxBase.OnSynchronizeProperties
// (Native, Event, Public, BlueprintEvent)

void UEmbarkScrollBoxBase::OnSynchronizeProperties()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkScrollBoxBase.OnSynchronizeProperties"));

	UEmbarkScrollBoxBase_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkScrollBoxBase.OnConstruct
// (Native, Event, Public, BlueprintEvent)

void UEmbarkScrollBoxBase::OnConstruct()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkScrollBoxBase.OnConstruct"));

	UEmbarkScrollBoxBase_OnConstruct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkSubtitleWidget.OnSetSubtitleTextChanged
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   InSubtitleText                 (ConstParm, Parm, OutParm, ReferenceParm)

void UEmbarkSubtitleWidget::OnSetSubtitleTextChanged(const struct FText& InSubtitleText)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkSubtitleWidget.OnSetSubtitleTextChanged"));

	UEmbarkSubtitleWidget_OnSetSubtitleTextChanged_Params params;
	params.InSubtitleText = InSubtitleText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkSubtitleWidget.OnSetSubtitleText
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FText                   InSubtitleText                 (ConstParm, Parm, OutParm, ReferenceParm)

void UEmbarkSubtitleWidget::OnSetSubtitleText(const struct FText& InSubtitleText)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkSubtitleWidget.OnSetSubtitleText"));

	UEmbarkSubtitleWidget_OnSetSubtitleText_Params params;
	params.InSubtitleText = InSubtitleText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkText3DActor.SetText
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)

void AEmbarkText3DActor::SetText(const struct FText& Text)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkText3DActor.SetText"));

	AEmbarkText3DActor_SetText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkText3DActor.OnTextGenerated
// (Final, Native, Private)

void AEmbarkText3DActor::OnTextGenerated()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkText3DActor.OnTextGenerated"));

	AEmbarkText3DActor_OnTextGenerated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkText3DActor.GetText
// (Final, Native, Public, Const)
// Parameters:
// struct FText                   ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

struct FText AEmbarkText3DActor::GetText()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkText3DActor.GetText"));

	AEmbarkText3DActor_GetText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUI.EmbarkTextBlockBase.SetLineHeight
// (Final, Native, Public)
// Parameters:
// float                          InLineHeightPercentage         (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkTextBlockBase::SetLineHeight(float InLineHeightPercentage)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkTextBlockBase.SetLineHeight"));

	UEmbarkTextBlockBase_SetLineHeight_Params params;
	params.InLineHeightPercentage = InLineHeightPercentage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkTextBlockBase.SetColorBinding
// (Final, Native, Public)

void UEmbarkTextBlockBase::SetColorBinding()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkTextBlockBase.SetColorBinding"));

	UEmbarkTextBlockBase_SetColorBinding_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkTextBlockBase.SetColorAndOpacityDelegate
// (Final, Native, Public)
// Parameters:
// struct FScriptDelegate         InDelegate                     (Parm, ZeroConstructor)

void UEmbarkTextBlockBase::SetColorAndOpacityDelegate(const struct FScriptDelegate& InDelegate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkTextBlockBase.SetColorAndOpacityDelegate"));

	UEmbarkTextBlockBase_SetColorAndOpacityDelegate_Params params;
	params.InDelegate = InDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkTextBlockBase.OnSynchronizeProperties
// (Native, Event, Public, BlueprintEvent)

void UEmbarkTextBlockBase::OnSynchronizeProperties()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkTextBlockBase.OnSynchronizeProperties"));

	UEmbarkTextBlockBase_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkTextBlockBase.OnConstruct
// (Native, Event, Public, BlueprintEvent)

void UEmbarkTextBlockBase::OnConstruct()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkTextBlockBase.OnConstruct"));

	UEmbarkTextBlockBase_OnConstruct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkTextBlockBase.GetNativeColor
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UEmbarkTextBlockBase::GetNativeColor()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkTextBlockBase.GetNativeColor"));

	UEmbarkTextBlockBase_GetNativeColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUI.EmbarkViewData.SetTextProperty
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   PropertyName                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FText                   Value                          (ConstParm, Parm, OutParm, ReferenceParm)

void UEmbarkViewData::SetTextProperty(const struct FName& PropertyName, const struct FText& Value)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkViewData.SetTextProperty"));

	UEmbarkViewData_SetTextProperty_Params params;
	params.PropertyName = PropertyName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkViewData.SetStringProperty
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   PropertyName                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 Value                          (Parm, ZeroConstructor)

void UEmbarkViewData::SetStringProperty(const struct FName& PropertyName, const struct FString& Value)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkViewData.SetStringProperty"));

	UEmbarkViewData_SetStringProperty_Params params;
	params.PropertyName = PropertyName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkViewData.SetIntProperty
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   PropertyName                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkViewData::SetIntProperty(const struct FName& PropertyName, int Value)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkViewData.SetIntProperty"));

	UEmbarkViewData_SetIntProperty_Params params;
	params.PropertyName = PropertyName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkViewData.SetFloatProperty
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   PropertyName                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkViewData::SetFloatProperty(const struct FName& PropertyName, float Value)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkViewData.SetFloatProperty"));

	UEmbarkViewData_SetFloatProperty_Params params;
	params.PropertyName = PropertyName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkViewData.RemoveTextUFunction
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   PropertyName                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkViewData::RemoveTextUFunction(const struct FName& PropertyName, class UObject* Object)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkViewData.RemoveTextUFunction"));

	UEmbarkViewData_RemoveTextUFunction_Params params;
	params.PropertyName = PropertyName;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkViewData.RemoveStringUFunction
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   PropertyName                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkViewData::RemoveStringUFunction(const struct FName& PropertyName, class UObject* Object)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkViewData.RemoveStringUFunction"));

	UEmbarkViewData_RemoveStringUFunction_Params params;
	params.PropertyName = PropertyName;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkViewData.RemoveIntUFunction
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   PropertyName                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkViewData::RemoveIntUFunction(const struct FName& PropertyName, class UObject* Object)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkViewData.RemoveIntUFunction"));

	UEmbarkViewData_RemoveIntUFunction_Params params;
	params.PropertyName = PropertyName;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkViewData.RemoveFloatUFunction
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   PropertyName                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkViewData::RemoveFloatUFunction(const struct FName& PropertyName, class UObject* Object)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkViewData.RemoveFloatUFunction"));

	UEmbarkViewData_RemoveFloatUFunction_Params params;
	params.PropertyName = PropertyName;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction EmbarkUI.EmbarkViewData.OnViewDataChangedSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UEmbarkViewData::OnViewDataChangedSignature__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("DelegateFunction EmbarkUI.EmbarkViewData.OnViewDataChangedSignature__DelegateSignature"));

	UEmbarkViewData_OnViewDataChangedSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkViewData.AddTextUFunction
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   PropertyName                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   FunctionName                   (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkViewData::AddTextUFunction(const struct FName& PropertyName, class UObject* Object, const struct FName& FunctionName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkViewData.AddTextUFunction"));

	UEmbarkViewData_AddTextUFunction_Params params;
	params.PropertyName = PropertyName;
	params.Object = Object;
	params.FunctionName = FunctionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkViewData.AddStringUFunction
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   PropertyName                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   FunctionName                   (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkViewData::AddStringUFunction(const struct FName& PropertyName, class UObject* Object, const struct FName& FunctionName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkViewData.AddStringUFunction"));

	UEmbarkViewData_AddStringUFunction_Params params;
	params.PropertyName = PropertyName;
	params.Object = Object;
	params.FunctionName = FunctionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkViewData.AddIntUFunction
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   PropertyName                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   FunctionName                   (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkViewData::AddIntUFunction(const struct FName& PropertyName, class UObject* Object, const struct FName& FunctionName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkViewData.AddIntUFunction"));

	UEmbarkViewData_AddIntUFunction_Params params;
	params.PropertyName = PropertyName;
	params.Object = Object;
	params.FunctionName = FunctionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkViewData.AddFloatUFunction
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   PropertyName                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   FunctionName                   (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkViewData::AddFloatUFunction(const struct FName& PropertyName, class UObject* Object, const struct FName& FunctionName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkViewData.AddFloatUFunction"));

	UEmbarkViewData_AddFloatUFunction_Params params;
	params.PropertyName = PropertyName;
	params.Object = Object;
	params.FunctionName = FunctionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.IEmbarkViewDataSubsystem.SetViewDataTextProperty
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TEnumAsByte<EUIDataContext>    Context                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   PropertyName                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FText                   Value                          (ConstParm, Parm, OutParm, ReferenceParm)

void UIEmbarkViewDataSubsystem::SetViewDataTextProperty(TEnumAsByte<EUIDataContext> Context, int ID, const struct FName& PropertyName, const struct FText& Value)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.IEmbarkViewDataSubsystem.SetViewDataTextProperty"));

	UIEmbarkViewDataSubsystem_SetViewDataTextProperty_Params params;
	params.Context = Context;
	params.ID = ID;
	params.PropertyName = PropertyName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.IEmbarkViewDataSubsystem.SetViewDataStringProperty
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TEnumAsByte<EUIDataContext>    Context                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   PropertyName                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 Value                          (Parm, ZeroConstructor)

void UIEmbarkViewDataSubsystem::SetViewDataStringProperty(TEnumAsByte<EUIDataContext> Context, int ID, const struct FName& PropertyName, const struct FString& Value)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.IEmbarkViewDataSubsystem.SetViewDataStringProperty"));

	UIEmbarkViewDataSubsystem_SetViewDataStringProperty_Params params;
	params.Context = Context;
	params.ID = ID;
	params.PropertyName = PropertyName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.IEmbarkViewDataSubsystem.SetViewDataIntProperty
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TEnumAsByte<EUIDataContext>    Context                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   PropertyName                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UIEmbarkViewDataSubsystem::SetViewDataIntProperty(TEnumAsByte<EUIDataContext> Context, int ID, const struct FName& PropertyName, int Value)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.IEmbarkViewDataSubsystem.SetViewDataIntProperty"));

	UIEmbarkViewDataSubsystem_SetViewDataIntProperty_Params params;
	params.Context = Context;
	params.ID = ID;
	params.PropertyName = PropertyName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.IEmbarkViewDataSubsystem.SetViewDataFloatProperty
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TEnumAsByte<EUIDataContext>    Context                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   PropertyName                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UIEmbarkViewDataSubsystem::SetViewDataFloatProperty(TEnumAsByte<EUIDataContext> Context, int ID, const struct FName& PropertyName, float Value)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.IEmbarkViewDataSubsystem.SetViewDataFloatProperty"));

	UIEmbarkViewDataSubsystem_SetViewDataFloatProperty_Params params;
	params.Context = Context;
	params.ID = ID;
	params.PropertyName = PropertyName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.IEmbarkViewDataSubsystem.RemoveViewData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EUIDataContext>    Context                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)

void UIEmbarkViewDataSubsystem::RemoveViewData(TEnumAsByte<EUIDataContext> Context, int ID)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.IEmbarkViewDataSubsystem.RemoveViewData"));

	UIEmbarkViewDataSubsystem_RemoveViewData_Params params;
	params.Context = Context;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.IEmbarkViewDataSubsystem.GetViewDataTextProperty
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TEnumAsByte<EUIDataContext>    Context                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   PropertyName                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FText                   OutValue                       (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIEmbarkViewDataSubsystem::GetViewDataTextProperty(TEnumAsByte<EUIDataContext> Context, int ID, const struct FName& PropertyName, struct FText* OutValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.IEmbarkViewDataSubsystem.GetViewDataTextProperty"));

	UIEmbarkViewDataSubsystem_GetViewDataTextProperty_Params params;
	params.Context = Context;
	params.ID = ID;
	params.PropertyName = PropertyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutValue != nullptr)
		*OutValue = params.OutValue;

	return params.ReturnValue;
}


// Function EmbarkUI.IEmbarkViewDataSubsystem.GetViewDataStringProperty
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TEnumAsByte<EUIDataContext>    Context                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   PropertyName                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 OutValue                       (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIEmbarkViewDataSubsystem::GetViewDataStringProperty(TEnumAsByte<EUIDataContext> Context, int ID, const struct FName& PropertyName, struct FString* OutValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.IEmbarkViewDataSubsystem.GetViewDataStringProperty"));

	UIEmbarkViewDataSubsystem_GetViewDataStringProperty_Params params;
	params.Context = Context;
	params.ID = ID;
	params.PropertyName = PropertyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutValue != nullptr)
		*OutValue = params.OutValue;

	return params.ReturnValue;
}


// Function EmbarkUI.IEmbarkViewDataSubsystem.GetViewDataIntProperty
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TEnumAsByte<EUIDataContext>    Context                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   PropertyName                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            OutValue                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIEmbarkViewDataSubsystem::GetViewDataIntProperty(TEnumAsByte<EUIDataContext> Context, int ID, const struct FName& PropertyName, int* OutValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.IEmbarkViewDataSubsystem.GetViewDataIntProperty"));

	UIEmbarkViewDataSubsystem_GetViewDataIntProperty_Params params;
	params.Context = Context;
	params.ID = ID;
	params.PropertyName = PropertyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutValue != nullptr)
		*OutValue = params.OutValue;

	return params.ReturnValue;
}


// Function EmbarkUI.IEmbarkViewDataSubsystem.GetViewDataFloatProperty
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TEnumAsByte<EUIDataContext>    Context                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   PropertyName                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          OutValue                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIEmbarkViewDataSubsystem::GetViewDataFloatProperty(TEnumAsByte<EUIDataContext> Context, int ID, const struct FName& PropertyName, float* OutValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.IEmbarkViewDataSubsystem.GetViewDataFloatProperty"));

	UIEmbarkViewDataSubsystem_GetViewDataFloatProperty_Params params;
	params.Context = Context;
	params.ID = ID;
	params.PropertyName = PropertyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutValue != nullptr)
		*OutValue = params.OutValue;

	return params.ReturnValue;
}


// Function EmbarkUI.IEmbarkViewDataSubsystem.GetViewData
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TEnumAsByte<EUIDataContext>    Context                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UEmbarkViewData*         OutViewData                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIEmbarkViewDataSubsystem::GetViewData(TEnumAsByte<EUIDataContext> Context, int ID, class UEmbarkViewData** OutViewData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.IEmbarkViewDataSubsystem.GetViewData"));

	UIEmbarkViewDataSubsystem_GetViewData_Params params;
	params.Context = Context;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutViewData != nullptr)
		*OutViewData = params.OutViewData;

	return params.ReturnValue;
}


// Function EmbarkUI.IEmbarkViewDataSubsystem.CreateViewData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EUIDataContext>    Context                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ViewDataClass                  (Parm, ZeroConstructor, IsPlainOldData)
// class UEmbarkViewData*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UEmbarkViewData* UIEmbarkViewDataSubsystem::CreateViewData(TEnumAsByte<EUIDataContext> Context, int ID, class UClass* ViewDataClass)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.IEmbarkViewDataSubsystem.CreateViewData"));

	UIEmbarkViewDataSubsystem_CreateViewData_Params params;
	params.Context = Context;
	params.ID = ID;
	params.ViewDataClass = ViewDataClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUI.IEmbarkViewDataSubsystem.ClearContext
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EUIDataContext>    Context                        (Parm, ZeroConstructor, IsPlainOldData)

void UIEmbarkViewDataSubsystem::ClearContext(TEnumAsByte<EUIDataContext> Context)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.IEmbarkViewDataSubsystem.ClearContext"));

	UIEmbarkViewDataSubsystem_ClearContext_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkWidgetBlueprintLibrary.SetInputMode_GameOnly_WithoutForceFocus
// (Final, BlueprintCosmetic, Native, Static, Private, BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkWidgetBlueprintLibrary::STATIC_SetInputMode_GameOnly_WithoutForceFocus(class APlayerController* PlayerController)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkWidgetBlueprintLibrary.SetInputMode_GameOnly_WithoutForceFocus"));

	UEmbarkWidgetBlueprintLibrary_SetInputMode_GameOnly_WithoutForceFocus_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.EmbarkWidgetBlueprintLibrary.GetPerformanceOverlayStats
// (Final, Native, Static, Private, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPerformanceOverlayStats ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPerformanceOverlayStats UEmbarkWidgetBlueprintLibrary::STATIC_GetPerformanceOverlayStats()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkWidgetBlueprintLibrary.GetPerformanceOverlayStats"));

	UEmbarkWidgetBlueprintLibrary_GetPerformanceOverlayStats_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUI.EmbarkWidgetBlueprintLibrary.GetGPUUtilizationPercent
// (Final, Native, Static, Private, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UEmbarkWidgetBlueprintLibrary::STATIC_GetGPUUtilizationPercent()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.EmbarkWidgetBlueprintLibrary.GetGPUUtilizationPercent"));

	UEmbarkWidgetBlueprintLibrary_GetGPUUtilizationPercent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUI.QRCodeGeneratorLibrary.GenerateQRCode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 TextToEncode                   (Parm, ZeroConstructor)
// bool                           bTransparent                   (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* UQRCodeGeneratorLibrary::STATIC_GenerateQRCode(const struct FString& TextToEncode, bool bTransparent)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.QRCodeGeneratorLibrary.GenerateQRCode"));

	UQRCodeGeneratorLibrary_GenerateQRCode_Params params;
	params.TextToEncode = TextToEncode;
	params.bTransparent = bTransparent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUI.UIAnimationState.ShouldApplyAnimation
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUIAnimationState::ShouldApplyAnimation()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.UIAnimationState.ShouldApplyAnimation"));

	UUIAnimationState_ShouldApplyAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUI.UIAnimationState.IsAnimationOngoing
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUIAnimationState::IsAnimationOngoing()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.UIAnimationState.IsAnimationOngoing"));

	UUIAnimationState_IsAnimationOngoing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUI.UIAnimationParticipantContainer.TickAnimation
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FUIAnimationTickParameter Parameter                      (ConstParm, Parm, OutParm, ReferenceParm)

void UUIAnimationParticipantContainer::TickAnimation(const struct FUIAnimationTickParameter& Parameter)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.UIAnimationParticipantContainer.TickAnimation"));

	UUIAnimationParticipantContainer_TickAnimation_Params params;
	params.Parameter = Parameter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.UIAnimationParticipantContainer.PreTickAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bIsAnimating                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          AnimationProgress              (Parm, ZeroConstructor, IsPlainOldData)

void UUIAnimationParticipantContainer::PreTickAnimation(bool bIsAnimating, float AnimationProgress)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.UIAnimationParticipantContainer.PreTickAnimation"));

	UUIAnimationParticipantContainer_PreTickAnimation_Params params;
	params.bIsAnimating = bIsAnimating;
	params.AnimationProgress = AnimationProgress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.UIAnimationParticipantContainer.GlobalAnimationStart
// (Event, Public, BlueprintEvent)

void UUIAnimationParticipantContainer::GlobalAnimationStart()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.UIAnimationParticipantContainer.GlobalAnimationStart"));

	UUIAnimationParticipantContainer_GlobalAnimationStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.UIAnimationParticipantContainer.GlobalAnimationComplete
// (Event, Public, BlueprintEvent)

void UUIAnimationParticipantContainer::GlobalAnimationComplete()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.UIAnimationParticipantContainer.GlobalAnimationComplete"));

	UUIAnimationParticipantContainer_GlobalAnimationComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.UIAnimationParticipantContainer.AnimationStart
// (Event, Public, BlueprintEvent)

void UUIAnimationParticipantContainer::AnimationStart()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.UIAnimationParticipantContainer.AnimationStart"));

	UUIAnimationParticipantContainer_AnimationStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.UIAnimationParticipantContainer.AnimationComplete
// (Event, Public, BlueprintEvent)

void UUIAnimationParticipantContainer::AnimationComplete()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.UIAnimationParticipantContainer.AnimationComplete"));

	UUIAnimationParticipantContainer_AnimationComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.UIAnimationDriverContainer.StopAnimation
// (Final, Native, Public, BlueprintCallable)

void UUIAnimationDriverContainer::StopAnimation()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.UIAnimationDriverContainer.StopAnimation"));

	UUIAnimationDriverContainer_StopAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.UIAnimationDriverContainer.StartAnimation
// (Final, Native, Public, BlueprintCallable)

void UUIAnimationDriverContainer::StartAnimation()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.UIAnimationDriverContainer.StartAnimation"));

	UUIAnimationDriverContainer_StartAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.UIAnimationDriverContainer.PopulateStateDistance
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<class UUIAnimationState*> States                         (Parm, OutParm, ZeroConstructor)
// struct FGeometry               ContainerGeometry              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UUIAnimationDriverContainer::PopulateStateDistance(const struct FGeometry& ContainerGeometry, TArray<class UUIAnimationState*>* States)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.UIAnimationDriverContainer.PopulateStateDistance"));

	UUIAnimationDriverContainer_PopulateStateDistance_Params params;
	params.ContainerGeometry = ContainerGeometry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (States != nullptr)
		*States = params.States;
}


// Function EmbarkUI.UIAnimationDriverContainer.IsAnimating
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUIAnimationDriverContainer::IsAnimating()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.UIAnimationDriverContainer.IsAnimating"));

	UUIAnimationDriverContainer_IsAnimating_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUI.UIMetaDataItem.GetKey
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int64_t                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int64_t UUIMetaDataItem::GetKey()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.UIMetaDataItem.GetKey"));

	UUIMetaDataItem_GetKey_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUI.UIMetaDataItem.GetDebugDisplayName
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UUIMetaDataItem::GetDebugDisplayName()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.UIMetaDataItem.GetDebugDisplayName"));

	UUIMetaDataItem_GetDebugDisplayName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUI.IUIMetaDataRepository.Uninitialize
// (Native, Event, Public, BlueprintEvent)

void UIUIMetaDataRepository::Uninitialize()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.IUIMetaDataRepository.Uninitialize"));

	UIUIMetaDataRepository_Uninitialize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.IUIMetaDataRepository.IsInitialized
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIUIMetaDataRepository::IsInitialized()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.IUIMetaDataRepository.IsInitialized"));

	UIUIMetaDataRepository_IsInitialized_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUI.IUIMetaDataRepository.Initialize
// (Native, Event, Public, BlueprintEvent)

void UIUIMetaDataRepository::Initialize()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.IUIMetaDataRepository.Initialize"));

	UIUIMetaDataRepository_Initialize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.IUIMetaDataRepository.GetItemByKey
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UClass*                  ItemClass                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        Key                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UUIMetaDataItem*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUIMetaDataItem* UIUIMetaDataRepository::GetItemByKey(class UClass* ItemClass, int64_t Key)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.IUIMetaDataRepository.GetItemByKey"));

	UIUIMetaDataRepository_GetItemByKey_Params params;
	params.ItemClass = ItemClass;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkUI.UISimpleAnimationContainer.RestartAnimation
// (Final, Native, Public, BlueprintCallable)

void UUISimpleAnimationContainer::RestartAnimation()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.UISimpleAnimationContainer.RestartAnimation"));

	UUISimpleAnimationContainer_RestartAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.UISimpleAnimationContainer.PlayExitAnimation
// (Final, Native, Public, BlueprintCallable)

void UUISimpleAnimationContainer::PlayExitAnimation()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.UISimpleAnimationContainer.PlayExitAnimation"));

	UUISimpleAnimationContainer_PlayExitAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkUI.WatermarkBaseWidget.SetPath
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InPath                         (Parm, ZeroConstructor)

void UWatermarkBaseWidget::SetPath(const struct FString& InPath)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkUI.WatermarkBaseWidget.SetPath"));

	UWatermarkBaseWidget_SetPath_Params params;
	params.InPath = InPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
