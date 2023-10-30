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

// Function AudioExtensions.AudioParameterControllerInterface.SetTriggerParameter
struct UAudioParameterControllerInterface_SetTriggerParameter_Params
{
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioExtensions.AudioParameterControllerInterface.SetStringParameter
struct UAudioParameterControllerInterface_SetStringParameter_Params
{
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InValue;                                                  // (Parm, ZeroConstructor)
};

// Function AudioExtensions.AudioParameterControllerInterface.SetStringArrayParameter
struct UAudioParameterControllerInterface_SetStringArrayParameter_Params
{
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             InValue;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AudioExtensions.AudioParameterControllerInterface.SetParameters_Blueprint
struct UAudioParameterControllerInterface_SetParameters_Blueprint_Params
{
	TArray<struct FAudioParameter>                     InParameters;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AudioExtensions.AudioParameterControllerInterface.SetObjectParameter
struct UAudioParameterControllerInterface_SetObjectParameter_Params
{
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioExtensions.AudioParameterControllerInterface.SetObjectArrayParameter
struct UAudioParameterControllerInterface_SetObjectArrayParameter_Params
{
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UObject*>                             InValue;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AudioExtensions.AudioParameterControllerInterface.SetIntParameter
struct UAudioParameterControllerInterface_SetIntParameter_Params
{
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                inInt;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioExtensions.AudioParameterControllerInterface.SetIntArrayParameter
struct UAudioParameterControllerInterface_SetIntArrayParameter_Params
{
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        InValue;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AudioExtensions.AudioParameterControllerInterface.SetFloatParameter
struct UAudioParameterControllerInterface_SetFloatParameter_Params
{
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InFloat;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioExtensions.AudioParameterControllerInterface.SetFloatArrayParameter
struct UAudioParameterControllerInterface_SetFloatArrayParameter_Params
{
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      InValue;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AudioExtensions.AudioParameterControllerInterface.SetBoolParameter
struct UAudioParameterControllerInterface_SetBoolParameter_Params
{
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InBool;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioExtensions.AudioParameterControllerInterface.SetBoolArrayParameter
struct UAudioParameterControllerInterface_SetBoolArrayParameter_Params
{
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<bool>                                       InValue;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AudioExtensions.AudioParameterControllerInterface.ResetParameters
struct UAudioParameterControllerInterface_ResetParameters_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
