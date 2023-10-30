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

// Function EmbarkGlobalActor.EmbarkGlobalActorFactorySubsystem.ReceiveShouldCreateSubsystem
struct UEmbarkGlobalActorFactorySubsystem_ReceiveShouldCreateSubsystem_Params
{
	class UObject*                                     Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkGlobalActor.EmbarkGlobalActorFactorySubsystem.ReceivePostInitialize
struct UEmbarkGlobalActorFactorySubsystem_ReceivePostInitialize_Params
{
};

// Function EmbarkGlobalActor.EmbarkGlobalActorFactorySubsystem.ReceiveOnInitialize
struct UEmbarkGlobalActorFactorySubsystem_ReceiveOnInitialize_Params
{
};

// Function EmbarkGlobalActor.EmbarkGameplayGlobalActorFactorySubsystemBase.GetTransformFastReplicator
struct UEmbarkGameplayGlobalActorFactorySubsystemBase_GetTransformFastReplicator_Params
{
	class AEmbarkFastReplicatorTransform*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
