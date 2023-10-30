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

// Function DLSSBlueprint.DLSSLibrary.SetDLSSSharpness
struct UDLSSLibrary_SetDLSSSharpness_Params
{
	float                                              Sharpness;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLSSBlueprint.DLSSLibrary.SetDLSSMode
struct UDLSSLibrary_SetDLSSMode_Params
{
	enum class EUDLSSMode                              DLSSMode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLSSBlueprint.DLSSLibrary.QueryDLSSSupport
struct UDLSSLibrary_QueryDLSSSupport_Params
{
	enum class EUDLSSSupport                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DLSSBlueprint.DLSSLibrary.IsDLSSSupported
struct UDLSSLibrary_IsDLSSSupported_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DLSSBlueprint.DLSSLibrary.IsDLSSModeSupported
struct UDLSSLibrary_IsDLSSModeSupported_Params
{
	enum class EUDLSSMode                              DLSSMode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DLSSBlueprint.DLSSLibrary.IsDLAAEnabled
struct UDLSSLibrary_IsDLAAEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DLSSBlueprint.DLSSLibrary.GetSupportedDLSSModes
struct UDLSSLibrary_GetSupportedDLSSModes_Params
{
	TArray<enum class EUDLSSMode>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DLSSBlueprint.DLSSLibrary.GetDLSSSharpness
struct UDLSSLibrary_GetDLSSSharpness_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DLSSBlueprint.DLSSLibrary.GetDLSSScreenPercentageRange
struct UDLSSLibrary_GetDLSSScreenPercentageRange_Params
{
	float                                              MinScreenPercentage;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              MaxScreenPercentage;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DLSSBlueprint.DLSSLibrary.GetDLSSModeInformation
struct UDLSSLibrary_GetDLSSModeInformation_Params
{
	enum class EUDLSSMode                              DLSSMode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ScreenResolution;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSupported;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OptimalScreenPercentage;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsFixedScreenPercentage;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              MinScreenPercentage;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              MaxScreenPercentage;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OptimalSharpness;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DLSSBlueprint.DLSSLibrary.GetDLSSMode
struct UDLSSLibrary_GetDLSSMode_Params
{
	enum class EUDLSSMode                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DLSSBlueprint.DLSSLibrary.GetDLSSMinimumDriverVersion
struct UDLSSLibrary_GetDLSSMinimumDriverVersion_Params
{
	int                                                MinDriverVersionMajor;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                MinDriverVersionMinor;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DLSSBlueprint.DLSSLibrary.GetDefaultDLSSMode
struct UDLSSLibrary_GetDefaultDLSSMode_Params
{
	enum class EUDLSSMode                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DLSSBlueprint.DLSSLibrary.EnableDLAA
struct UDLSSLibrary_EnableDLAA_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
