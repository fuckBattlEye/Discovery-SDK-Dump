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

// Function CommonInput.CommonInputBaseControllerData.GetRegisteredGamepads
// (Final, Native, Static, Public)
// Parameters:
// TArray<struct FName>           ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<struct FName> UCommonInputBaseControllerData::STATIC_GetRegisteredGamepads()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonInput.CommonInputBaseControllerData.GetRegisteredGamepads"));

	UCommonInputBaseControllerData_GetRegisteredGamepads_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonInput.CommonInputSubsystem.TryGetInputBrush
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateBrush             OutBrush                       (Parm, OutParm)
// struct FKey                    Key                            (Parm)
// enum class ECommonInputType    InputType                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   GamepadName                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCommonInputSubsystem::TryGetInputBrush(const struct FKey& Key, enum class ECommonInputType InputType, const struct FName& GamepadName, struct FSlateBrush* OutBrush)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonInput.CommonInputSubsystem.TryGetInputBrush"));

	UCommonInputSubsystem_TryGetInputBrush_Params params;
	params.Key = Key;
	params.InputType = InputType;
	params.GamepadName = GamepadName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutBrush != nullptr)
		*OutBrush = params.OutBrush;

	return params.ReturnValue;
}


// Function CommonInput.CommonInputSubsystem.TryGetGamepadTexture
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   GamepadName                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UCommonInputSubsystem::TryGetGamepadTexture(const struct FName& GamepadName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonInput.CommonInputSubsystem.TryGetGamepadTexture"));

	UCommonInputSubsystem_TryGetGamepadTexture_Params params;
	params.GamepadName = GamepadName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonInput.CommonInputSubsystem.ShouldShowInputKeys
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCommonInputSubsystem::ShouldShowInputKeys()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonInput.CommonInputSubsystem.ShouldShowInputKeys"));

	UCommonInputSubsystem_ShouldShowInputKeys_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonInput.CommonInputSubsystem.SetGamepadInputType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   InGamepadInputType             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UCommonInputSubsystem::SetGamepadInputType(const struct FName& InGamepadInputType)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonInput.CommonInputSubsystem.SetGamepadInputType"));

	UCommonInputSubsystem_SetGamepadInputType_Params params;
	params.InGamepadInputType = InGamepadInputType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonInput.CommonInputSubsystem.SetCurrentInputType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ECommonInputType    NewInputType                   (Parm, ZeroConstructor, IsPlainOldData)

void UCommonInputSubsystem::SetCurrentInputType(enum class ECommonInputType NewInputType)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonInput.CommonInputSubsystem.SetCurrentInputType"));

	UCommonInputSubsystem_SetCurrentInputType_Params params;
	params.NewInputType = NewInputType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonInput.CommonInputSubsystem.IsUsingPointerInput
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCommonInputSubsystem::IsUsingPointerInput()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonInput.CommonInputSubsystem.IsUsingPointerInput"));

	UCommonInputSubsystem_IsUsingPointerInput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonInput.CommonInputSubsystem.IsInputMethodActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ECommonInputType    InputMethod                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCommonInputSubsystem::IsInputMethodActive(enum class ECommonInputType InputMethod)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonInput.CommonInputSubsystem.IsInputMethodActive"));

	UCommonInputSubsystem_IsInputMethodActive_Params params;
	params.InputMethod = InputMethod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonInput.CommonInputSubsystem.GetDefaultInputType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ECommonInputType    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

enum class ECommonInputType UCommonInputSubsystem::GetDefaultInputType()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonInput.CommonInputSubsystem.GetDefaultInputType"));

	UCommonInputSubsystem_GetDefaultInputType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonInput.CommonInputSubsystem.GetCurrentInputType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ECommonInputType    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

enum class ECommonInputType UCommonInputSubsystem::GetCurrentInputType()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonInput.CommonInputSubsystem.GetCurrentInputType"));

	UCommonInputSubsystem_GetCurrentInputType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonInput.CommonInputSubsystem.GetCurrentGamepadName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UCommonInputSubsystem::GetCurrentGamepadName()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function CommonInput.CommonInputSubsystem.GetCurrentGamepadName"));

	UCommonInputSubsystem_GetCurrentGamepadName_Params params;

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
