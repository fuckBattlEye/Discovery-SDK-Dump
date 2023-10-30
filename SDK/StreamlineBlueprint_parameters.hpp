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

// Function StreamlineBlueprint.StreamlineLibraryDLSSG.SetDLSSGMode
struct UStreamlineLibraryDLSSG_SetDLSSGMode_Params
{
	enum class EUStreamlineDLSSGMode                   DLSSGMode;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StreamlineBlueprint.StreamlineLibraryDLSSG.SetDLSSGFrames
struct UStreamlineLibraryDLSSG_SetDLSSGFrames_Params
{
	int                                                Frames;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StreamlineBlueprint.StreamlineLibraryDLSSG.QueryDLSSGSupport
struct UStreamlineLibraryDLSSG_QueryDLSSGSupport_Params
{
	enum class EUStreamlineDLSSGSupport                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StreamlineBlueprint.StreamlineLibraryDLSSG.IsDLSSGSupported
struct UStreamlineLibraryDLSSG_IsDLSSGSupported_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StreamlineBlueprint.StreamlineLibraryDLSSG.IsDLSSGModeSupported
struct UStreamlineLibraryDLSSG_IsDLSSGModeSupported_Params
{
	enum class EUStreamlineDLSSGMode                   DLSSGMode;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetSupportedDLSSGModes
struct UStreamlineLibraryDLSSG_GetSupportedDLSSGModes_Params
{
	TArray<enum class EUStreamlineDLSSGMode>           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetDLSSGSupportedFramesRange
struct UStreamlineLibraryDLSSG_GetDLSSGSupportedFramesRange_Params
{
	int                                                MinFrames;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                MaxFrames;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetDLSSGMode
struct UStreamlineLibraryDLSSG_GetDLSSGMode_Params
{
	enum class EUStreamlineDLSSGMode                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetDLSSGMinimumDriverVersion
struct UStreamlineLibraryDLSSG_GetDLSSGMinimumDriverVersion_Params
{
	int                                                MinDriverVersionMajor;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                MinDriverVersionMinor;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetDLSSGFrames
struct UStreamlineLibraryDLSSG_GetDLSSGFrames_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetDefaultDLSSGMode
struct UStreamlineLibraryDLSSG_GetDefaultDLSSGMode_Params
{
	enum class EUStreamlineDLSSGMode                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StreamlineBlueprint.StreamlineLibraryReflex.SetReflexMode
struct UStreamlineLibraryReflex_SetReflexMode_Params
{
	enum class EUStreamlineReflexMode                  Mode;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StreamlineBlueprint.StreamlineLibraryReflex.QueryReflexSupport
struct UStreamlineLibraryReflex_QueryReflexSupport_Params
{
	enum class EUStreamlineReflexSupport               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StreamlineBlueprint.StreamlineLibraryReflex.IsReflexSupported
struct UStreamlineLibraryReflex_IsReflexSupported_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StreamlineBlueprint.StreamlineLibraryReflex.GetRenderLatencyInMs
struct UStreamlineLibraryReflex_GetRenderLatencyInMs_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StreamlineBlueprint.StreamlineLibraryReflex.GetReflexMode
struct UStreamlineLibraryReflex_GetReflexMode_Params
{
	enum class EUStreamlineReflexMode                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StreamlineBlueprint.StreamlineLibraryReflex.GetGameToRenderLatencyInMs
struct UStreamlineLibraryReflex_GetGameToRenderLatencyInMs_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StreamlineBlueprint.StreamlineLibraryReflex.GetGameLatencyInMs
struct UStreamlineLibraryReflex_GetGameLatencyInMs_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StreamlineBlueprint.StreamlineLibraryReflex.GetDefaultReflexMode
struct UStreamlineLibraryReflex_GetDefaultReflexMode_Params
{
	enum class EUStreamlineReflexMode                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
