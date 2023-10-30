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

// Function EmbarkFastReplicator.EmbarkFastReplicator.UnregisterInstance
struct AEmbarkFastReplicator_UnregisterInstance_Params
{
	struct FEmbarkFastReplicatorActorOrComponent       Ref;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEmbarkFastReplicatorRegisterToken          Token;                                                    // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkFastReplicator.EmbarkFastReplicator.RegisterInstanceComponent
struct AEmbarkFastReplicator_RegisterInstanceComponent_Params
{
	class UActorComponent*                             Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FEmbarkFastReplicatorRegisterToken          Token;                                                    // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkFastReplicator.EmbarkFastReplicator.RegisterInstanceActor
struct AEmbarkFastReplicator_RegisterInstanceActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFastReplicatorRegisterToken          Token;                                                    // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkFastReplicator.EmbarkFastReplicator.RegisterInstance
struct AEmbarkFastReplicator_RegisterInstance_Params
{
	struct FEmbarkFastReplicatorActorOrComponent       Ref;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEmbarkFastReplicatorRegisterToken          Token;                                                    // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkFastReplicator.EmbarkFastReplicator.OnRep_Buckets
struct AEmbarkFastReplicator_OnRep_Buckets_Params
{
};

// Function EmbarkFastReplicator.EmbarkFastReplicatorCallback.UnregisterCallback_Client
struct AEmbarkFastReplicatorCallback_UnregisterCallback_Client_Params
{
	struct FEmbarkFastReplicatorActorOrComponent       Ref;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkFastReplicator.EmbarkFastReplicatorRegisterTokenScriptMixinLibrary.IsValid
struct UEmbarkFastReplicatorRegisterTokenScriptMixinLibrary_IsValid_Params
{
	struct FEmbarkFastReplicatorRegisterToken          Token;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkFastReplicator.EmbarkFastReplicatorActorOrComponentScriptMixinLibrary.IsValid
struct UEmbarkFastReplicatorActorOrComponentScriptMixinLibrary_IsValid_Params
{
	struct FEmbarkFastReplicatorActorOrComponent       Ref;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkFastReplicator.TestEmbarkFastReplicatorMockup.OnCallback
struct ATestEmbarkFastReplicatorMockup_OnCallback_Params
{
	struct FEmbarkFastReplicatorActorOrComponent       Ref;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkFastReplicator.EmbarkFastReplicatorTransform.UpdateData_Server
struct AEmbarkFastReplicatorTransform_UpdateData_Server_Params
{
	struct FEmbarkFastReplicatorActorOrComponent       Ref;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FReplicatedTransform                        NewTransform;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkFastReplicator.EmbarkFastReplicatorTransform.RegisterCallback_Client
struct AEmbarkFastReplicatorTransform_RegisterCallback_Client_Params
{
	struct FEmbarkFastReplicatorActorOrComponent       Ref;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FScriptDelegate                             Callback;                                                 // (Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
