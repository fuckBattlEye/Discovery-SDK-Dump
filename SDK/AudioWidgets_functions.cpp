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

// Function AudioWidgets.AudioMeter.SetMeterValueColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UAudioMeter::SetMeterValueColor(const struct FLinearColor& InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioWidgets.AudioMeter.SetMeterValueColor"));

	UAudioMeter_SetMeterValueColor_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioWidgets.AudioMeter.SetMeterScaleLabelColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UAudioMeter::SetMeterScaleLabelColor(const struct FLinearColor& InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioWidgets.AudioMeter.SetMeterScaleLabelColor"));

	UAudioMeter_SetMeterScaleLabelColor_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioWidgets.AudioMeter.SetMeterScaleColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UAudioMeter::SetMeterScaleColor(const struct FLinearColor& InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioWidgets.AudioMeter.SetMeterScaleColor"));

	UAudioMeter_SetMeterScaleColor_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioWidgets.AudioMeter.SetMeterPeakColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UAudioMeter::SetMeterPeakColor(const struct FLinearColor& InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioWidgets.AudioMeter.SetMeterPeakColor"));

	UAudioMeter_SetMeterPeakColor_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioWidgets.AudioMeter.SetMeterClippingColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UAudioMeter::SetMeterClippingColor(const struct FLinearColor& InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioWidgets.AudioMeter.SetMeterClippingColor"));

	UAudioMeter_SetMeterClippingColor_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioWidgets.AudioMeter.SetMeterChannelInfo
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FMeterChannelInfo> InMeterChannelInfo             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAudioMeter::SetMeterChannelInfo(TArray<struct FMeterChannelInfo> InMeterChannelInfo)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioWidgets.AudioMeter.SetMeterChannelInfo"));

	UAudioMeter_SetMeterChannelInfo_Params params;
	params.InMeterChannelInfo = InMeterChannelInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioWidgets.AudioMeter.SetMeterBackgroundColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UAudioMeter::SetMeterBackgroundColor(const struct FLinearColor& InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioWidgets.AudioMeter.SetMeterBackgroundColor"));

	UAudioMeter_SetMeterBackgroundColor_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioWidgets.AudioMeter.SetBackgroundColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UAudioMeter::SetBackgroundColor(const struct FLinearColor& InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioWidgets.AudioMeter.SetBackgroundColor"));

	UAudioMeter_SetBackgroundColor_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction AudioWidgets.AudioMeter.GetMeterChannelInfo__DelegateSignature
// (Public, Delegate)
// Parameters:
// TArray<struct FMeterChannelInfo> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMeterChannelInfo> UAudioMeter::GetMeterChannelInfo__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("DelegateFunction AudioWidgets.AudioMeter.GetMeterChannelInfo__DelegateSignature"));

	UAudioMeter_GetMeterChannelInfo__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioWidgets.AudioMeter.GetMeterChannelInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FMeterChannelInfo> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMeterChannelInfo> UAudioMeter::GetMeterChannelInfo()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioWidgets.AudioMeter.GetMeterChannelInfo"));

	UAudioMeter_GetMeterChannelInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioWidgets.AudioRadialSlider.SetWidgetLayout
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EAudioRadialSliderLayout> InLayout                       (Parm, ZeroConstructor, IsPlainOldData)

void UAudioRadialSlider::SetWidgetLayout(TEnumAsByte<EAudioRadialSliderLayout> InLayout)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioWidgets.AudioRadialSlider.SetWidgetLayout"));

	UAudioRadialSlider_SetWidgetLayout_Params params;
	params.InLayout = InLayout;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioWidgets.AudioRadialSlider.SetValueTextReadOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bIsReadOnly                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAudioRadialSlider::SetValueTextReadOnly(bool bIsReadOnly)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioWidgets.AudioRadialSlider.SetValueTextReadOnly"));

	UAudioRadialSlider_SetValueTextReadOnly_Params params;
	params.bIsReadOnly = bIsReadOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioWidgets.AudioRadialSlider.SetUnitsTextReadOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bIsReadOnly                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAudioRadialSlider::SetUnitsTextReadOnly(bool bIsReadOnly)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioWidgets.AudioRadialSlider.SetUnitsTextReadOnly"));

	UAudioRadialSlider_SetUnitsTextReadOnly_Params params;
	params.bIsReadOnly = bIsReadOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioWidgets.AudioRadialSlider.SetUnitsText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText                   Units                          (ConstParm, Parm)

void UAudioRadialSlider::SetUnitsText(const struct FText& Units)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioWidgets.AudioRadialSlider.SetUnitsText"));

	UAudioRadialSlider_SetUnitsText_Params params;
	params.Units = Units;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioWidgets.AudioRadialSlider.SetTextLabelBackgroundColor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateColor             InColor                        (Parm)

void UAudioRadialSlider::SetTextLabelBackgroundColor(const struct FSlateColor& InColor)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioWidgets.AudioRadialSlider.SetTextLabelBackgroundColor"));

	UAudioRadialSlider_SetTextLabelBackgroundColor_Params params;
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioWidgets.AudioRadialSlider.SetSliderThickness
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InThickness                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAudioRadialSlider::SetSliderThickness(float InThickness)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioWidgets.AudioRadialSlider.SetSliderThickness"));

	UAudioRadialSlider_SetSliderThickness_Params params;
	params.InThickness = InThickness;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioWidgets.AudioRadialSlider.SetSliderProgressColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UAudioRadialSlider::SetSliderProgressColor(const struct FLinearColor& InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioWidgets.AudioRadialSlider.SetSliderProgressColor"));

	UAudioRadialSlider_SetSliderProgressColor_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioWidgets.AudioRadialSlider.SetSliderBarColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UAudioRadialSlider::SetSliderBarColor(const struct FLinearColor& InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioWidgets.AudioRadialSlider.SetSliderBarColor"));

	UAudioRadialSlider_SetSliderBarColor_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioWidgets.AudioRadialSlider.SetShowUnitsText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bShowUnitsText                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAudioRadialSlider::SetShowUnitsText(bool bShowUnitsText)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioWidgets.AudioRadialSlider.SetShowUnitsText"));

	UAudioRadialSlider_SetShowUnitsText_Params params;
	params.bShowUnitsText = bShowUnitsText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioWidgets.AudioRadialSlider.SetShowLabelOnlyOnHover
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bShowLabelOnlyOnHover          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAudioRadialSlider::SetShowLabelOnlyOnHover(bool bShowLabelOnlyOnHover)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioWidgets.AudioRadialSlider.SetShowLabelOnlyOnHover"));

	UAudioRadialSlider_SetShowLabelOnlyOnHover_Params params;
	params.bShowLabelOnlyOnHover = bShowLabelOnlyOnHover;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioWidgets.AudioRadialSlider.SetOutputRange
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               InOutputRange                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAudioRadialSlider::SetOutputRange(const struct FVector2D& InOutputRange)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioWidgets.AudioRadialSlider.SetOutputRange"));

	UAudioRadialSlider_SetOutputRange_Params params;
	params.InOutputRange = InOutputRange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioWidgets.AudioRadialSlider.SetHandStartEndRatio
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               InHandStartEndRatio            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAudioRadialSlider::SetHandStartEndRatio(const struct FVector2D& InHandStartEndRatio)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioWidgets.AudioRadialSlider.SetHandStartEndRatio"));

	UAudioRadialSlider_SetHandStartEndRatio_Params params;
	params.InHandStartEndRatio = InHandStartEndRatio;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioWidgets.AudioRadialSlider.SetCenterBackgroundColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UAudioRadialSlider::SetCenterBackgroundColor(const struct FLinearColor& InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioWidgets.AudioRadialSlider.SetCenterBackgroundColor"));

	UAudioRadialSlider_SetCenterBackgroundColor_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioWidgets.AudioSliderBase.SetWidgetBackgroundColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UAudioSliderBase::SetWidgetBackgroundColor(const struct FLinearColor& InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioWidgets.AudioSliderBase.SetWidgetBackgroundColor"));

	UAudioSliderBase_SetWidgetBackgroundColor_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioWidgets.AudioSliderBase.SetValueTextReadOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bIsReadOnly                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAudioSliderBase::SetValueTextReadOnly(bool bIsReadOnly)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioWidgets.AudioSliderBase.SetValueTextReadOnly"));

	UAudioSliderBase_SetValueTextReadOnly_Params params;
	params.bIsReadOnly = bIsReadOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioWidgets.AudioSliderBase.SetUnitsTextReadOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bIsReadOnly                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAudioSliderBase::SetUnitsTextReadOnly(bool bIsReadOnly)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioWidgets.AudioSliderBase.SetUnitsTextReadOnly"));

	UAudioSliderBase_SetUnitsTextReadOnly_Params params;
	params.bIsReadOnly = bIsReadOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioWidgets.AudioSliderBase.SetUnitsText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText                   Units                          (ConstParm, Parm)

void UAudioSliderBase::SetUnitsText(const struct FText& Units)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioWidgets.AudioSliderBase.SetUnitsText"));

	UAudioSliderBase_SetUnitsText_Params params;
	params.Units = Units;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioWidgets.AudioSliderBase.SetTextLabelBackgroundColor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateColor             InColor                        (Parm)

void UAudioSliderBase::SetTextLabelBackgroundColor(const struct FSlateColor& InColor)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioWidgets.AudioSliderBase.SetTextLabelBackgroundColor"));

	UAudioSliderBase_SetTextLabelBackgroundColor_Params params;
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioWidgets.AudioSliderBase.SetSliderThumbColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UAudioSliderBase::SetSliderThumbColor(const struct FLinearColor& InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioWidgets.AudioSliderBase.SetSliderThumbColor"));

	UAudioSliderBase_SetSliderThumbColor_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioWidgets.AudioSliderBase.SetSliderBarColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UAudioSliderBase::SetSliderBarColor(const struct FLinearColor& InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioWidgets.AudioSliderBase.SetSliderBarColor"));

	UAudioSliderBase_SetSliderBarColor_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioWidgets.AudioSliderBase.SetSliderBackgroundColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UAudioSliderBase::SetSliderBackgroundColor(const struct FLinearColor& InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioWidgets.AudioSliderBase.SetSliderBackgroundColor"));

	UAudioSliderBase_SetSliderBackgroundColor_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioWidgets.AudioSliderBase.SetShowUnitsText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bShowUnitsText                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAudioSliderBase::SetShowUnitsText(bool bShowUnitsText)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioWidgets.AudioSliderBase.SetShowUnitsText"));

	UAudioSliderBase_SetShowUnitsText_Params params;
	params.bShowUnitsText = bShowUnitsText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioWidgets.AudioSliderBase.SetShowLabelOnlyOnHover
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bShowLabelOnlyOnHover          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAudioSliderBase::SetShowLabelOnlyOnHover(bool bShowLabelOnlyOnHover)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioWidgets.AudioSliderBase.SetShowLabelOnlyOnHover"));

	UAudioSliderBase_SetShowLabelOnlyOnHover_Params params;
	params.bShowLabelOnlyOnHover = bShowLabelOnlyOnHover;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioWidgets.AudioSliderBase.GetOutputValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          LinValue                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAudioSliderBase::GetOutputValue(float LinValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioWidgets.AudioSliderBase.GetOutputValue"));

	UAudioSliderBase_GetOutputValue_Params params;
	params.LinValue = LinValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioWidgets.AudioSliderBase.GetLinValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          OutputValue                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAudioSliderBase::GetLinValue(float OutputValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AudioWidgets.AudioSliderBase.GetLinValue"));

	UAudioSliderBase_GetLinValue_Params params;
	params.OutputValue = OutputValue;

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
