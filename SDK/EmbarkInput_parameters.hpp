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

// Function EmbarkInput.EmbarkAnalogCursorSubsystem.Get
struct UEmbarkAnalogCursorSubsystem_Get_Params
{
	class ULocalPlayer*                                LocalPlayer;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UEmbarkAnalogCursorSubsystem*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkInput.EmbarkAnalogCursorSubsystem.EnableAnalogCursor
struct UEmbarkAnalogCursorSubsystem_EnableAnalogCursor_Params
{
	bool                                               bIsEnabled;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkInput.EmbarkInputUtils.PlatformDefaultInputDevice
struct UEmbarkInputUtils_PlatformDefaultInputDevice_Params
{
	enum class EEmbarkInputDevice                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkInput.EmbarkInputUtils.GetNavigationDirectionFromKey
struct UEmbarkInputUtils_GetNavigationDirectionFromKey_Params
{
	struct FKeyEvent                                   InKeyEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	enum class EUINavigation                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkInput.EmbarkInputUtils.GetNavigationDirectionFromAnalog
struct UEmbarkInputUtils_GetNavigationDirectionFromAnalog_Params
{
	struct FAnalogInputEvent                           InAnalogEvent;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	enum class EUINavigation                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkInput.EmbarkInputUtils.GetNavigationActionFromKey
struct UEmbarkInputUtils_GetNavigationActionFromKey_Params
{
	struct FKeyEvent                                   InKeyEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	enum class EUINavigationAction                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkInput.EmbarkInputSubsystem.IsUsingGamepad
struct UEmbarkInputSubsystem_IsUsingGamepad_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkInput.EmbarkInputSubsystem.IsMouseAndKeyboard
struct UEmbarkInputSubsystem_IsMouseAndKeyboard_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkInput.EmbarkInputSubsystem.GetCurrentInputDevice
struct UEmbarkInputSubsystem_GetCurrentInputDevice_Params
{
	enum class EEmbarkInputDevice                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
