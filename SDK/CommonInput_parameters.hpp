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

// Function CommonInput.CommonInputBaseControllerData.GetRegisteredGamepads
struct UCommonInputBaseControllerData_GetRegisteredGamepads_Params
{
	TArray<struct FName>                               ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function CommonInput.CommonInputSubsystem.TryGetInputBrush
struct UCommonInputSubsystem_TryGetInputBrush_Params
{
	struct FSlateBrush                                 OutBrush;                                                 // (Parm, OutParm)
	struct FKey                                        Key;                                                      // (Parm)
	enum class ECommonInputType                        InputType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       GamepadName;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonInput.CommonInputSubsystem.TryGetGamepadTexture
struct UCommonInputSubsystem_TryGetGamepadTexture_Params
{
	struct FName                                       GamepadName;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonInput.CommonInputSubsystem.ShouldShowInputKeys
struct UCommonInputSubsystem_ShouldShowInputKeys_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonInput.CommonInputSubsystem.SetGamepadInputType
struct UCommonInputSubsystem_SetGamepadInputType_Params
{
	struct FName                                       InGamepadInputType;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonInput.CommonInputSubsystem.SetCurrentInputType
struct UCommonInputSubsystem_SetCurrentInputType_Params
{
	enum class ECommonInputType                        NewInputType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonInput.CommonInputSubsystem.IsUsingPointerInput
struct UCommonInputSubsystem_IsUsingPointerInput_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonInput.CommonInputSubsystem.IsInputMethodActive
struct UCommonInputSubsystem_IsInputMethodActive_Params
{
	enum class ECommonInputType                        InputMethod;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonInput.CommonInputSubsystem.GetDefaultInputType
struct UCommonInputSubsystem_GetDefaultInputType_Params
{
	enum class ECommonInputType                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonInput.CommonInputSubsystem.GetCurrentInputType
struct UCommonInputSubsystem_GetCurrentInputType_Params
{
	enum class ECommonInputType                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonInput.CommonInputSubsystem.GetCurrentGamepadName
struct UCommonInputSubsystem_GetCurrentGamepadName_Params
{
	struct FName                                       ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
