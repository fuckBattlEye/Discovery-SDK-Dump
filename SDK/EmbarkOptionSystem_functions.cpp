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

// Function EmbarkOptionSystem.IEmbarkUserSetting.SetValue
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UIEmbarkUserSetting::SetValue(int Index)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkOptionSystem.IEmbarkUserSetting.SetValue"));

	UIEmbarkUserSetting_SetValue_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkOptionSystem.IEmbarkUserSetting.IsDefault
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIEmbarkUserSetting::IsDefault()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkOptionSystem.IEmbarkUserSetting.IsDefault"));

	UIEmbarkUserSetting_IsDefault_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkOptionSystem.IEmbarkUserSetting.IsAvailable
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIEmbarkUserSetting::IsAvailable()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkOptionSystem.IEmbarkUserSetting.IsAvailable"));

	UIEmbarkUserSetting_IsAvailable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkOptionSystem.IEmbarkUserSetting.Initialize
// (Native, Event, Public, BlueprintEvent)

void UIEmbarkUserSetting::Initialize()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkOptionSystem.IEmbarkUserSetting.Initialize"));

	UIEmbarkUserSetting_Initialize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkOptionSystem.IEmbarkUserSetting.GetValueIndex
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UIEmbarkUserSetting::GetValueIndex()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkOptionSystem.IEmbarkUserSetting.GetValueIndex"));

	UIEmbarkUserSetting_GetValueIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkOptionSystem.IEmbarkUserSetting.GetNumOptions
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UIEmbarkUserSetting::GetNumOptions()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkOptionSystem.IEmbarkUserSetting.GetNumOptions"));

	UIEmbarkUserSetting_GetNumOptions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkOptionSystem.IEmbarkUserSetting.GetDisplayText
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UIEmbarkUserSetting::GetDisplayText(int Index)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkOptionSystem.IEmbarkUserSetting.GetDisplayText"));

	UIEmbarkUserSetting_GetDisplayText_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkOptionSystem.IEmbarkUserSetting.GetDefaultIndex
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UIEmbarkUserSetting::GetDefaultIndex()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkOptionSystem.IEmbarkUserSetting.GetDefaultIndex"));

	UIEmbarkUserSetting_GetDefaultIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkOptionSystem.IEmbarkUserSetting.CanChange
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIEmbarkUserSetting::CanChange()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkOptionSystem.IEmbarkUserSetting.CanChange"));

	UIEmbarkUserSetting_CanChange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkOptionSystem.EmbarkOptionBase.Store
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UEmbarkOptionBase::Store()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkOptionSystem.EmbarkOptionBase.Store"));

	UEmbarkOptionBase_Store_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkOptionSystem.EmbarkOptionBase.SendOptionChangeTelemetry
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 OldValue                       (Parm, ZeroConstructor)
// struct FString                 NewValue                       (Parm, ZeroConstructor)

void UEmbarkOptionBase::SendOptionChangeTelemetry(const struct FString& OldValue, const struct FString& NewValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkOptionSystem.EmbarkOptionBase.SendOptionChangeTelemetry"));

	UEmbarkOptionBase_SendOptionChangeTelemetry_Params params;
	params.OldValue = OldValue;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkOptionSystem.EmbarkOptionBase.Restore
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 String                         (Parm, ZeroConstructor)

void UEmbarkOptionBase::Restore(const struct FString& String)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkOptionSystem.EmbarkOptionBase.Restore"));

	UEmbarkOptionBase_Restore_Params params;
	params.String = String;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkOptionSystem.EmbarkOptionBase.ResetToPreviousValue
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 InValue                        (Parm, ZeroConstructor)

void UEmbarkOptionBase::ResetToPreviousValue(const struct FString& InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkOptionSystem.EmbarkOptionBase.ResetToPreviousValue"));

	UEmbarkOptionBase_ResetToPreviousValue_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkOptionSystem.EmbarkOptionBase.ResetToDefault
// (Native, Event, Public, BlueprintEvent)

void UEmbarkOptionBase::ResetToDefault()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkOptionSystem.EmbarkOptionBase.ResetToDefault"));

	UEmbarkOptionBase_ResetToDefault_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkOptionSystem.EmbarkOptionBase.NotifyOnExternalEvent
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// enum class EEmbarkOptionExternalEvent Event                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkOptionBase::NotifyOnExternalEvent(enum class EEmbarkOptionExternalEvent Event)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkOptionSystem.EmbarkOptionBase.NotifyOnExternalEvent"));

	UEmbarkOptionBase_NotifyOnExternalEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkOptionSystem.EmbarkOptionBase.IsDefault
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkOptionBase::IsDefault()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkOptionSystem.EmbarkOptionBase.IsDefault"));

	UEmbarkOptionBase_IsDefault_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkOptionSystem.EmbarkOptionBase.IsAvailable
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkOptionBase::IsAvailable()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkOptionSystem.EmbarkOptionBase.IsAvailable"));

	UEmbarkOptionBase_IsAvailable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkOptionSystem.EmbarkOptionBase.Initialize
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 InValue                        (Parm, ZeroConstructor)

void UEmbarkOptionBase::Initialize(const struct FString& InValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkOptionSystem.EmbarkOptionBase.Initialize"));

	UEmbarkOptionBase_Initialize_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkOptionSystem.EmbarkOptionBase.CanChange
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkOptionBase::CanChange()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkOptionSystem.EmbarkOptionBase.CanChange"));

	UEmbarkOptionBase_CanChange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkOptionSystem.IEmbarkOptionFloat.SetValue
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// float                          NewValue                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UIEmbarkOptionFloat::SetValue(float NewValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkOptionSystem.IEmbarkOptionFloat.SetValue"));

	UIEmbarkOptionFloat_SetValue_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkOptionSystem.IEmbarkOptionFloat.SetNormalizedValue
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// float                          NewValue                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UIEmbarkOptionFloat::SetNormalizedValue(float NewValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkOptionSystem.IEmbarkOptionFloat.SetNormalizedValue"));

	UIEmbarkOptionFloat_SetNormalizedValue_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkOptionSystem.IEmbarkOptionFloat.GetValue
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UIEmbarkOptionFloat::GetValue()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkOptionSystem.IEmbarkOptionFloat.GetValue"));

	UIEmbarkOptionFloat_GetValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkOptionSystem.IEmbarkOptionFloat.GetNormalizedValue
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UIEmbarkOptionFloat::GetNormalizedValue()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkOptionSystem.IEmbarkOptionFloat.GetNormalizedValue"));

	UIEmbarkOptionFloat_GetNormalizedValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkOptionSystem.IEmbarkOptionFloat.GetMinValue
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UIEmbarkOptionFloat::GetMinValue()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkOptionSystem.IEmbarkOptionFloat.GetMinValue"));

	UIEmbarkOptionFloat_GetMinValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkOptionSystem.IEmbarkOptionFloat.GetMaxValue
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UIEmbarkOptionFloat::GetMaxValue()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkOptionSystem.IEmbarkOptionFloat.GetMaxValue"));

	UIEmbarkOptionFloat_GetMaxValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkOptionSystem.IEmbarkDynamicEnum.GetNumOptions
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UIEmbarkDynamicEnum::GetNumOptions()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkOptionSystem.IEmbarkDynamicEnum.GetNumOptions"));

	UIEmbarkDynamicEnum_GetNumOptions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkOptionSystem.IEmbarkDynamicEnum.GetNameByIndex
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// int                            Index                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UIEmbarkDynamicEnum::GetNameByIndex(int Index)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkOptionSystem.IEmbarkDynamicEnum.GetNameByIndex"));

	UIEmbarkDynamicEnum_GetNameByIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkOptionSystem.IEmbarkDynamicEnum.GetIndexByName
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 Value                          (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UIEmbarkDynamicEnum::GetIndexByName(const struct FString& Value)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkOptionSystem.IEmbarkDynamicEnum.GetIndexByName"));

	UIEmbarkDynamicEnum_GetIndexByName_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkOptionSystem.IEmbarkDynamicEnum.GetDisplayName
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// int                            Index                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UIEmbarkDynamicEnum::GetDisplayName(int Index)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkOptionSystem.IEmbarkDynamicEnum.GetDisplayName"));

	UIEmbarkDynamicEnum_GetDisplayName_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkOptionSystem.IEmbarkDynamicEnum.GetDefaultIndex
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UIEmbarkDynamicEnum::GetDefaultIndex()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkOptionSystem.IEmbarkDynamicEnum.GetDefaultIndex"));

	UIEmbarkDynamicEnum_GetDefaultIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkOptionSystem.IEmbarkOptionEnum.SetIndex
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// int                            NewIndex                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UIEmbarkOptionEnum::SetIndex(int NewIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkOptionSystem.IEmbarkOptionEnum.SetIndex"));

	UIEmbarkOptionEnum_SetIndex_Params params;
	params.NewIndex = NewIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkOptionSystem.IEmbarkOptionEnum.GetMaxIndexInclusive
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UIEmbarkOptionEnum::GetMaxIndexInclusive()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkOptionSystem.IEmbarkOptionEnum.GetMaxIndexInclusive"));

	UIEmbarkOptionEnum_GetMaxIndexInclusive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkOptionSystem.IEmbarkOptionEnum.GetIndex
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UIEmbarkOptionEnum::GetIndex()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkOptionSystem.IEmbarkOptionEnum.GetIndex"));

	UIEmbarkOptionEnum_GetIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkOptionSystem.IEmbarkOptionEnum.GetDisplayText
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UIEmbarkOptionEnum::GetDisplayText()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkOptionSystem.IEmbarkOptionEnum.GetDisplayText"));

	UIEmbarkOptionEnum_GetDisplayText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkOptionSystem.IEmbarkOptionBool.SetValue
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                           bNewValue                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UIEmbarkOptionBool::SetValue(bool bNewValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkOptionSystem.IEmbarkOptionBool.SetValue"));

	UIEmbarkOptionBool_SetValue_Params params;
	params.bNewValue = bNewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkOptionSystem.IEmbarkOptionBool.GetValue
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIEmbarkOptionBool::GetValue()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkOptionSystem.IEmbarkOptionBool.GetValue"));

	UIEmbarkOptionBool_GetValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkOptionSystem.IEmbarkOptionInt.SetValue
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// int                            NewValue                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UIEmbarkOptionInt::SetValue(int NewValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkOptionSystem.IEmbarkOptionInt.SetValue"));

	UIEmbarkOptionInt_SetValue_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkOptionSystem.IEmbarkOptionInt.GetValue
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UIEmbarkOptionInt::GetValue()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkOptionSystem.IEmbarkOptionInt.GetValue"));

	UIEmbarkOptionInt_GetValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkOptionSystem.IEmbarkOptionString.SetValue
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 NewValue                       (Parm, ZeroConstructor)

void UIEmbarkOptionString::SetValue(const struct FString& NewValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkOptionSystem.IEmbarkOptionString.SetValue"));

	UIEmbarkOptionString_SetValue_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkOptionSystem.IEmbarkOptionString.GetValue
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UIEmbarkOptionString::GetValue()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkOptionSystem.IEmbarkOptionString.GetValue"));

	UIEmbarkOptionString_GetValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkOptionSystem.IEmbarkOptionGameplayTag.SetValue
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayTag            NewValue                       (ConstParm, Parm, OutParm, ReferenceParm)

void UIEmbarkOptionGameplayTag::SetValue(const struct FGameplayTag& NewValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkOptionSystem.IEmbarkOptionGameplayTag.SetValue"));

	UIEmbarkOptionGameplayTag_SetValue_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkOptionSystem.IEmbarkOptionGameplayTag.GetValue
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// struct FGameplayTag            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayTag UIEmbarkOptionGameplayTag::GetValue()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkOptionSystem.IEmbarkOptionGameplayTag.GetValue"));

	UIEmbarkOptionGameplayTag_GetValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkOptionSystem.EmbarkOptionManager.SetOptionString
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FGameplayTag            OptionTag                      (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 NewString                      (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkOptionManager::SetOptionString(const struct FGameplayTag& OptionTag, const struct FString& NewString)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkOptionSystem.EmbarkOptionManager.SetOptionString"));

	UEmbarkOptionManager_SetOptionString_Params params;
	params.OptionTag = OptionTag;
	params.NewString = NewString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkOptionSystem.EmbarkOptionManager.SetOptionInt
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FGameplayTag            OptionTag                      (ConstParm, Parm, OutParm, ReferenceParm)
// int                            NewValue                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkOptionManager::SetOptionInt(const struct FGameplayTag& OptionTag, int NewValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkOptionSystem.EmbarkOptionManager.SetOptionInt"));

	UEmbarkOptionManager_SetOptionInt_Params params;
	params.OptionTag = OptionTag;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkOptionSystem.EmbarkOptionManager.SetOptionGameplayTag
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FGameplayTag            OptionTag                      (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            NewValue                       (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkOptionManager::SetOptionGameplayTag(const struct FGameplayTag& OptionTag, const struct FGameplayTag& NewValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkOptionSystem.EmbarkOptionManager.SetOptionGameplayTag"));

	UEmbarkOptionManager_SetOptionGameplayTag_Params params;
	params.OptionTag = OptionTag;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkOptionSystem.EmbarkOptionManager.SetOptionFloat
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FGameplayTag            OptionTag                      (ConstParm, Parm, OutParm, ReferenceParm)
// float                          NewValue                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkOptionManager::SetOptionFloat(const struct FGameplayTag& OptionTag, float NewValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkOptionSystem.EmbarkOptionManager.SetOptionFloat"));

	UEmbarkOptionManager_SetOptionFloat_Params params;
	params.OptionTag = OptionTag;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkOptionSystem.EmbarkOptionManager.SetOptionEnum
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FGameplayTag            OptionTag                      (ConstParm, Parm, OutParm, ReferenceParm)
// int                            NewIndex                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkOptionManager::SetOptionEnum(const struct FGameplayTag& OptionTag, int NewIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkOptionSystem.EmbarkOptionManager.SetOptionEnum"));

	UEmbarkOptionManager_SetOptionEnum_Params params;
	params.OptionTag = OptionTag;
	params.NewIndex = NewIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkOptionSystem.EmbarkOptionManager.SetOptionBool
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FGameplayTag            OptionTag                      (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bNewValue                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkOptionManager::SetOptionBool(const struct FGameplayTag& OptionTag, bool bNewValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkOptionSystem.EmbarkOptionManager.SetOptionBool"));

	UEmbarkOptionManager_SetOptionBool_Params params;
	params.OptionTag = OptionTag;
	params.bNewValue = bNewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkOptionSystem.EmbarkOptionManager.SaveAll
// (Final, Native, Public)

void UEmbarkOptionManager::SaveAll()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkOptionSystem.EmbarkOptionManager.SaveAll"));

	UEmbarkOptionManager_SaveAll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkOptionSystem.EmbarkOptionManager.Save
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FGameplayTag            TagCategory                    (ConstParm, Parm, OutParm, ReferenceParm)

void UEmbarkOptionManager::Save(const struct FGameplayTag& TagCategory)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkOptionSystem.EmbarkOptionManager.Save"));

	UEmbarkOptionManager_Save_Params params;
	params.TagCategory = TagCategory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkOptionSystem.EmbarkOptionManager.RestartRequiredToTakeEffect
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkOptionManager::RestartRequiredToTakeEffect()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkOptionSystem.EmbarkOptionManager.RestartRequiredToTakeEffect"));

	UEmbarkOptionManager_RestartRequiredToTakeEffect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkOptionSystem.EmbarkOptionManager.ResetUnsavedOptions
// (Final, Native, Public)

void UEmbarkOptionManager::ResetUnsavedOptions()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkOptionSystem.EmbarkOptionManager.ResetUnsavedOptions"));

	UEmbarkOptionManager_ResetUnsavedOptions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkOptionSystem.EmbarkOptionManager.ResetOptionsToDefault
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FGameplayTag            TagCategory                    (ConstParm, Parm, OutParm, ReferenceParm)

void UEmbarkOptionManager::ResetOptionsToDefault(const struct FGameplayTag& TagCategory)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkOptionSystem.EmbarkOptionManager.ResetOptionsToDefault"));

	UEmbarkOptionManager_ResetOptionsToDefault_Params params;
	params.TagCategory = TagCategory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkOptionSystem.EmbarkOptionManager.HasUnsavedOptions
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkOptionManager::HasUnsavedOptions()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkOptionSystem.EmbarkOptionManager.HasUnsavedOptions"));

	UEmbarkOptionManager_HasUnsavedOptions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkOptionSystem.EmbarkOptionManager.GetOptionString
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UEmbarkOptionManager*    Manager                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            OptionTag                      (ConstParm, Parm, OutParm, ReferenceParm)
// class UIEmbarkOptionString*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UIEmbarkOptionString* UEmbarkOptionManager::STATIC_GetOptionString(class UEmbarkOptionManager* Manager, const struct FGameplayTag& OptionTag)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkOptionSystem.EmbarkOptionManager.GetOptionString"));

	UEmbarkOptionManager_GetOptionString_Params params;
	params.Manager = Manager;
	params.OptionTag = OptionTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkOptionSystem.EmbarkOptionManager.GetOptionInt
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UEmbarkOptionManager*    Manager                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            OptionTag                      (ConstParm, Parm, OutParm, ReferenceParm)
// class UIEmbarkOptionInt*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UIEmbarkOptionInt* UEmbarkOptionManager::STATIC_GetOptionInt(class UEmbarkOptionManager* Manager, const struct FGameplayTag& OptionTag)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkOptionSystem.EmbarkOptionManager.GetOptionInt"));

	UEmbarkOptionManager_GetOptionInt_Params params;
	params.Manager = Manager;
	params.OptionTag = OptionTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkOptionSystem.EmbarkOptionManager.GetOptionGameplayTag
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UEmbarkOptionManager*    Manager                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            OptionTag                      (ConstParm, Parm, OutParm, ReferenceParm)
// class UIEmbarkOptionGameplayTag* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UIEmbarkOptionGameplayTag* UEmbarkOptionManager::STATIC_GetOptionGameplayTag(class UEmbarkOptionManager* Manager, const struct FGameplayTag& OptionTag)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkOptionSystem.EmbarkOptionManager.GetOptionGameplayTag"));

	UEmbarkOptionManager_GetOptionGameplayTag_Params params;
	params.Manager = Manager;
	params.OptionTag = OptionTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkOptionSystem.EmbarkOptionManager.GetOptionFloat
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UEmbarkOptionManager*    Manager                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            OptionTag                      (ConstParm, Parm, OutParm, ReferenceParm)
// class UIEmbarkOptionFloat*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UIEmbarkOptionFloat* UEmbarkOptionManager::STATIC_GetOptionFloat(class UEmbarkOptionManager* Manager, const struct FGameplayTag& OptionTag)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkOptionSystem.EmbarkOptionManager.GetOptionFloat"));

	UEmbarkOptionManager_GetOptionFloat_Params params;
	params.Manager = Manager;
	params.OptionTag = OptionTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkOptionSystem.EmbarkOptionManager.GetOptionEnum
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UEmbarkOptionManager*    Manager                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            OptionTag                      (ConstParm, Parm, OutParm, ReferenceParm)
// class UIEmbarkOptionEnum*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UIEmbarkOptionEnum* UEmbarkOptionManager::STATIC_GetOptionEnum(class UEmbarkOptionManager* Manager, const struct FGameplayTag& OptionTag)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkOptionSystem.EmbarkOptionManager.GetOptionEnum"));

	UEmbarkOptionManager_GetOptionEnum_Params params;
	params.Manager = Manager;
	params.OptionTag = OptionTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkOptionSystem.EmbarkOptionManager.GetOptionBool
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UEmbarkOptionManager*    Manager                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            OptionTag                      (ConstParm, Parm, OutParm, ReferenceParm)
// class UIEmbarkOptionBool*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UIEmbarkOptionBool* UEmbarkOptionManager::STATIC_GetOptionBool(class UEmbarkOptionManager* Manager, const struct FGameplayTag& OptionTag)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkOptionSystem.EmbarkOptionManager.GetOptionBool"));

	UEmbarkOptionManager_GetOptionBool_Params params;
	params.Manager = Manager;
	params.OptionTag = OptionTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkOptionSystem.EmbarkOptionManager.FindOptionString
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// struct FGameplayTag            OptionTag                      (ConstParm, Parm, OutParm, ReferenceParm)
// class UIEmbarkOptionString*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UIEmbarkOptionString* UEmbarkOptionManager::FindOptionString(const struct FGameplayTag& OptionTag)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkOptionSystem.EmbarkOptionManager.FindOptionString"));

	UEmbarkOptionManager_FindOptionString_Params params;
	params.OptionTag = OptionTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkOptionSystem.EmbarkOptionManager.FindOptionInt
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// struct FGameplayTag            OptionTag                      (ConstParm, Parm, OutParm, ReferenceParm)
// class UIEmbarkOptionInt*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UIEmbarkOptionInt* UEmbarkOptionManager::FindOptionInt(const struct FGameplayTag& OptionTag)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkOptionSystem.EmbarkOptionManager.FindOptionInt"));

	UEmbarkOptionManager_FindOptionInt_Params params;
	params.OptionTag = OptionTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkOptionSystem.EmbarkOptionManager.FindOptionGameplayTag
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// struct FGameplayTag            OptionTag                      (ConstParm, Parm, OutParm, ReferenceParm)
// class UIEmbarkOptionGameplayTag* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UIEmbarkOptionGameplayTag* UEmbarkOptionManager::FindOptionGameplayTag(const struct FGameplayTag& OptionTag)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkOptionSystem.EmbarkOptionManager.FindOptionGameplayTag"));

	UEmbarkOptionManager_FindOptionGameplayTag_Params params;
	params.OptionTag = OptionTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkOptionSystem.EmbarkOptionManager.FindOptionFloat
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// struct FGameplayTag            OptionTag                      (ConstParm, Parm, OutParm, ReferenceParm)
// class UIEmbarkOptionFloat*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UIEmbarkOptionFloat* UEmbarkOptionManager::FindOptionFloat(const struct FGameplayTag& OptionTag)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkOptionSystem.EmbarkOptionManager.FindOptionFloat"));

	UEmbarkOptionManager_FindOptionFloat_Params params;
	params.OptionTag = OptionTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkOptionSystem.EmbarkOptionManager.FindOptionEnum
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// struct FGameplayTag            OptionTag                      (ConstParm, Parm, OutParm, ReferenceParm)
// class UIEmbarkOptionEnum*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UIEmbarkOptionEnum* UEmbarkOptionManager::FindOptionEnum(const struct FGameplayTag& OptionTag)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkOptionSystem.EmbarkOptionManager.FindOptionEnum"));

	UEmbarkOptionManager_FindOptionEnum_Params params;
	params.OptionTag = OptionTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkOptionSystem.EmbarkOptionManager.FindOptionBool
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// struct FGameplayTag            OptionTag                      (ConstParm, Parm, OutParm, ReferenceParm)
// class UIEmbarkOptionBool*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UIEmbarkOptionBool* UEmbarkOptionManager::FindOptionBool(const struct FGameplayTag& OptionTag)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkOptionSystem.EmbarkOptionManager.FindOptionBool"));

	UEmbarkOptionManager_FindOptionBool_Params params;
	params.OptionTag = OptionTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkOptionSystem.EmbarkOptionManager.FindOption
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// struct FGameplayTag            OptionTag                      (ConstParm, Parm, OutParm, ReferenceParm)
// class UEmbarkOptionBase*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UEmbarkOptionBase* UEmbarkOptionManager::FindOption(const struct FGameplayTag& OptionTag)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkOptionSystem.EmbarkOptionManager.FindOption"));

	UEmbarkOptionManager_FindOption_Params params;
	params.OptionTag = OptionTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkOptionSystem.EmbarkOptionManager.AddOption
// (Final, Native, Public)
// Parameters:
// class UEmbarkOptionBase*       Option                         (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkOptionManager::AddOption(class UEmbarkOptionBase* Option)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkOptionSystem.EmbarkOptionManager.AddOption"));

	UEmbarkOptionManager_AddOption_Params params;
	params.Option = Option;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
