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

// Function EmbarkGlobalSubsystemAngelscript.SubsystemFunctionLibrary.GetGlobalSubsystem
struct USubsystemFunctionLibrary_GetGlobalSubsystem_Params
{
	class UClass*                                      SubsystemClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UEmbarkGlobalSubsystem*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
