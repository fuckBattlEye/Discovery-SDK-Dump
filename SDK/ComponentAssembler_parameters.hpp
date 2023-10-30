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

// Function ComponentAssembler.ComponentAssemblerComponentBase.GetAssemblyType
struct UComponentAssemblerComponentBase_GetAssemblyType_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ComponentAssembler.ComponentAssemblerComponentBase.GetAssemblyPropertyName
struct UComponentAssemblerComponentBase_GetAssemblyPropertyName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ComponentAssembler.ComponentAssemblerComponentBase.DisassembleComponents
struct UComponentAssemblerComponentBase_DisassembleComponents_Params
{
};

// Function ComponentAssembler.ComponentAssemblerComponentBase.AssembleComponents
struct UComponentAssemblerComponentBase_AssembleComponents_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
