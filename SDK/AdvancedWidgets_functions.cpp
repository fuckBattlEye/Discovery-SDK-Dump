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

// Function AdvancedWidgets.RadialSlider.SetValueTags
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<float>                  InValueTags                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void URadialSlider::SetValueTags(TArray<float> InValueTags)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AdvancedWidgets.RadialSlider.SetValueTags"));

	URadialSlider_SetValueTags_Params params;
	params.InValueTags = InValueTags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdvancedWidgets.RadialSlider.SetValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void URadialSlider::SetValue(float InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AdvancedWidgets.RadialSlider.SetValue"));

	URadialSlider_SetValue_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdvancedWidgets.RadialSlider.SetUseVerticalDrag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InUseVerticalDrag              (Parm, ZeroConstructor, IsPlainOldData)

void URadialSlider::SetUseVerticalDrag(bool InUseVerticalDrag)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AdvancedWidgets.RadialSlider.SetUseVerticalDrag"));

	URadialSlider_SetUseVerticalDrag_Params params;
	params.InUseVerticalDrag = InUseVerticalDrag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdvancedWidgets.RadialSlider.SetStepSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void URadialSlider::SetStepSize(float InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AdvancedWidgets.RadialSlider.SetStepSize"));

	URadialSlider_SetStepSize_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdvancedWidgets.RadialSlider.SetSliderRange
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FRuntimeFloatCurve      InSliderRange                  (ConstParm, Parm, OutParm, ReferenceParm)

void URadialSlider::SetSliderRange(const struct FRuntimeFloatCurve& InSliderRange)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AdvancedWidgets.RadialSlider.SetSliderRange"));

	URadialSlider_SetSliderRange_Params params;
	params.InSliderRange = InSliderRange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdvancedWidgets.RadialSlider.SetSliderProgressColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void URadialSlider::SetSliderProgressColor(const struct FLinearColor& InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AdvancedWidgets.RadialSlider.SetSliderProgressColor"));

	URadialSlider_SetSliderProgressColor_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdvancedWidgets.RadialSlider.SetSliderHandleStartAngle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void URadialSlider::SetSliderHandleStartAngle(float InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AdvancedWidgets.RadialSlider.SetSliderHandleStartAngle"));

	URadialSlider_SetSliderHandleStartAngle_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdvancedWidgets.RadialSlider.SetSliderHandleEndAngle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void URadialSlider::SetSliderHandleEndAngle(float InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AdvancedWidgets.RadialSlider.SetSliderHandleEndAngle"));

	URadialSlider_SetSliderHandleEndAngle_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdvancedWidgets.RadialSlider.SetSliderHandleColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void URadialSlider::SetSliderHandleColor(const struct FLinearColor& InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AdvancedWidgets.RadialSlider.SetSliderHandleColor"));

	URadialSlider_SetSliderHandleColor_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdvancedWidgets.RadialSlider.SetSliderBarColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void URadialSlider::SetSliderBarColor(const struct FLinearColor& InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AdvancedWidgets.RadialSlider.SetSliderBarColor"));

	URadialSlider_SetSliderBarColor_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdvancedWidgets.RadialSlider.SetShowSliderHandle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InShowSliderHandle             (Parm, ZeroConstructor, IsPlainOldData)

void URadialSlider::SetShowSliderHandle(bool InShowSliderHandle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AdvancedWidgets.RadialSlider.SetShowSliderHandle"));

	URadialSlider_SetShowSliderHandle_Params params;
	params.InShowSliderHandle = InShowSliderHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdvancedWidgets.RadialSlider.SetShowSliderHand
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InShowSliderHand               (Parm, ZeroConstructor, IsPlainOldData)

void URadialSlider::SetShowSliderHand(bool InShowSliderHand)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AdvancedWidgets.RadialSlider.SetShowSliderHand"));

	URadialSlider_SetShowSliderHand_Params params;
	params.InShowSliderHand = InShowSliderHand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdvancedWidgets.RadialSlider.SetLocked
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void URadialSlider::SetLocked(bool InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AdvancedWidgets.RadialSlider.SetLocked"));

	URadialSlider_SetLocked_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdvancedWidgets.RadialSlider.SetHandStartEndRatio
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void URadialSlider::SetHandStartEndRatio(const struct FVector2D& InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AdvancedWidgets.RadialSlider.SetHandStartEndRatio"));

	URadialSlider_SetHandStartEndRatio_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdvancedWidgets.RadialSlider.SetCustomDefaultValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void URadialSlider::SetCustomDefaultValue(float InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AdvancedWidgets.RadialSlider.SetCustomDefaultValue"));

	URadialSlider_SetCustomDefaultValue_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdvancedWidgets.RadialSlider.SetCenterBackgroundColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void URadialSlider::SetCenterBackgroundColor(const struct FLinearColor& InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AdvancedWidgets.RadialSlider.SetCenterBackgroundColor"));

	URadialSlider_SetCenterBackgroundColor_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdvancedWidgets.RadialSlider.SetAngularOffset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void URadialSlider::SetAngularOffset(float InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AdvancedWidgets.RadialSlider.SetAngularOffset"));

	URadialSlider_SetAngularOffset_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdvancedWidgets.RadialSlider.GetValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float URadialSlider::GetValue()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AdvancedWidgets.RadialSlider.GetValue"));

	URadialSlider_GetValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AdvancedWidgets.RadialSlider.GetNormalizedSliderHandlePosition
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float URadialSlider::GetNormalizedSliderHandlePosition()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AdvancedWidgets.RadialSlider.GetNormalizedSliderHandlePosition"));

	URadialSlider_GetNormalizedSliderHandlePosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AdvancedWidgets.RadialSlider.GetCustomDefaultValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float URadialSlider::GetCustomDefaultValue()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AdvancedWidgets.RadialSlider.GetCustomDefaultValue"));

	URadialSlider_GetCustomDefaultValue_Params params;

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
