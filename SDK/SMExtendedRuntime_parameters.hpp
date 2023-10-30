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

// Function SMExtendedRuntime.SMExtendedGraphPropertyHelpers.ObjectToText
struct USMExtendedGraphPropertyHelpers_ObjectToText_Params
{
	class UObject*                                     InObject;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       InFunctionName;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SMExtendedRuntime.SMExtendedGraphPropertyHelpers.BreakTextGraphProperty
struct USMExtendedGraphPropertyHelpers_BreakTextGraphProperty_Params
{
	struct FSMTextGraphProperty                        GraphProperty;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText                                       Result;                                                   // (Parm, OutParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
