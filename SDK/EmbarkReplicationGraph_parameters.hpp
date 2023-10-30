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

// Function EmbarkReplicationGraph.EmbarkReplicationGraphStatics.RemoveDependentActor_Server
struct UEmbarkReplicationGraphStatics_RemoveDependentActor_Server_Params
{
	class AActor*                                      Parent;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Child;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkReplicationGraph.EmbarkReplicationGraphStatics.AddDependentActor_Server
struct UEmbarkReplicationGraphStatics_AddDependentActor_Server_Params
{
	class AActor*                                      Parent;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Child;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
