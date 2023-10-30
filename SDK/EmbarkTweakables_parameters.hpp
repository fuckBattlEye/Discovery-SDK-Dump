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

// Function EmbarkTweakables.EmbarkTweakablesSubsystem.RegisterOnlineTweakables_Server
struct UEmbarkTweakablesSubsystem_RegisterOnlineTweakables_Server_Params
{
	struct FOnlineTweakablesContainer                  InOnlineTweakablesContainer;                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkTweakables.EmbarkTweakablesSubsystem.RegisterOnlineTweakables_Client
struct UEmbarkTweakablesSubsystem_RegisterOnlineTweakables_Client_Params
{
	struct FOnlineTweakablesContainer                  InOnlineTweakablesContainer;                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkTweakables.EmbarkTweakablesSubsystem.IsInitialized
struct UEmbarkTweakablesSubsystem_IsInitialized_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
