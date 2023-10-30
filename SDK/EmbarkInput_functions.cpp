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

// Function EmbarkInput.EmbarkAnalogCursorSubsystem.Get
// (Final, Native, Static, Public)
// Parameters:
// class ULocalPlayer*            LocalPlayer                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UEmbarkAnalogCursorSubsystem* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UEmbarkAnalogCursorSubsystem* UEmbarkAnalogCursorSubsystem::STATIC_Get(class ULocalPlayer* LocalPlayer)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkInput.EmbarkAnalogCursorSubsystem.Get"));

	UEmbarkAnalogCursorSubsystem_Get_Params params;
	params.LocalPlayer = LocalPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkInput.EmbarkAnalogCursorSubsystem.EnableAnalogCursor
// (Final, Native, Public)
// Parameters:
// bool                           bIsEnabled                     (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkAnalogCursorSubsystem::EnableAnalogCursor(bool bIsEnabled)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkInput.EmbarkAnalogCursorSubsystem.EnableAnalogCursor"));

	UEmbarkAnalogCursorSubsystem_EnableAnalogCursor_Params params;
	params.bIsEnabled = bIsEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkInput.EmbarkInputUtils.PlatformDefaultInputDevice
// (Final, Native, Static, Public)
// Parameters:
// enum class EEmbarkInputDevice  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

enum class EEmbarkInputDevice UEmbarkInputUtils::STATIC_PlatformDefaultInputDevice()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkInput.EmbarkInputUtils.PlatformDefaultInputDevice"));

	UEmbarkInputUtils_PlatformDefaultInputDevice_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkInput.EmbarkInputUtils.GetNavigationDirectionFromKey
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FKeyEvent               InKeyEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// enum class EUINavigation       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

enum class EUINavigation UEmbarkInputUtils::STATIC_GetNavigationDirectionFromKey(const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkInput.EmbarkInputUtils.GetNavigationDirectionFromKey"));

	UEmbarkInputUtils_GetNavigationDirectionFromKey_Params params;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkInput.EmbarkInputUtils.GetNavigationDirectionFromAnalog
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FAnalogInputEvent       InAnalogEvent                  (ConstParm, Parm, OutParm, ReferenceParm)
// enum class EUINavigation       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

enum class EUINavigation UEmbarkInputUtils::STATIC_GetNavigationDirectionFromAnalog(const struct FAnalogInputEvent& InAnalogEvent)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkInput.EmbarkInputUtils.GetNavigationDirectionFromAnalog"));

	UEmbarkInputUtils_GetNavigationDirectionFromAnalog_Params params;
	params.InAnalogEvent = InAnalogEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkInput.EmbarkInputUtils.GetNavigationActionFromKey
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FKeyEvent               InKeyEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// enum class EUINavigationAction ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

enum class EUINavigationAction UEmbarkInputUtils::STATIC_GetNavigationActionFromKey(const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkInput.EmbarkInputUtils.GetNavigationActionFromKey"));

	UEmbarkInputUtils_GetNavigationActionFromKey_Params params;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkInput.EmbarkInputSubsystem.IsUsingGamepad
// (Final, Native, Public, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkInputSubsystem::IsUsingGamepad()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkInput.EmbarkInputSubsystem.IsUsingGamepad"));

	UEmbarkInputSubsystem_IsUsingGamepad_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkInput.EmbarkInputSubsystem.IsMouseAndKeyboard
// (Final, Native, Public, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkInputSubsystem::IsMouseAndKeyboard()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkInput.EmbarkInputSubsystem.IsMouseAndKeyboard"));

	UEmbarkInputSubsystem_IsMouseAndKeyboard_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkInput.EmbarkInputSubsystem.GetCurrentInputDevice
// (Final, Native, Public, Const)
// Parameters:
// enum class EEmbarkInputDevice  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

enum class EEmbarkInputDevice UEmbarkInputSubsystem::GetCurrentInputDevice()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkInput.EmbarkInputSubsystem.GetCurrentInputDevice"));

	UEmbarkInputSubsystem_GetCurrentInputDevice_Params params;

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
