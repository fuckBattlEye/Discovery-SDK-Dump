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

// Function EmbarkReplicatedSubobjects.ReplicatedSubobject.SetUsesReplicationKeyForReplication
struct UReplicatedSubobject_SetUsesReplicationKeyForReplication_Params
{
	bool                                               bNewUserRepKeyForReplication;                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkReplicatedSubobjects.ReplicatedSubobject.SetReplicationKeyDirty
struct UReplicatedSubobject_SetReplicationKeyDirty_Params
{
};

// Function EmbarkReplicatedSubobjects.ReplicatedSubobject.SetReplicatedSubobjectToPropagateReplicationKeyDirtyTo
struct UReplicatedSubobject_SetReplicatedSubobjectToPropagateReplicationKeyDirtyTo_Params
{
	class UReplicatedSubobject*                        TargtReplicatedSubobject;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkReplicatedSubobjects.ReplicatedSubobject.SetOuter
struct UReplicatedSubobject_SetOuter_Params
{
	class UObject*                                     Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkReplicatedSubobjects.ReplicatedSubobject.SetActorComponentToPropagateReplicationKeyDirtyTo
struct UReplicatedSubobject_SetActorComponentToPropagateReplicationKeyDirtyTo_Params
{
	class UActorComponent*                             ActorComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function EmbarkReplicatedSubobjects.ReplicatedSubobject.ScriptReplicateSubobjects
struct UReplicatedSubobject_ScriptReplicateSubobjects_Params
{
};

// Function EmbarkReplicatedSubobjects.ReplicatedSubobject.PostReplication
struct UReplicatedSubobject_PostReplication_Params
{
};

// Function EmbarkReplicatedSubobjects.ReplicatedSubobject.GetUsesReplicationKeyForReplication
struct UReplicatedSubobject_GetUsesReplicationKeyForReplication_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkReplicatedSubobjects.ReplicatedSubobject.AddObjectToReplicate
struct UReplicatedSubobject_AddObjectToReplicate_Params
{
	class UReplicatedSubobject*                        ObjectToReplicate;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkReplicatedSubobjects.ActorComponentReplicatedSubobjects.ScriptReplicateSubobjects
struct UActorComponentReplicatedSubobjects_ScriptReplicateSubobjects_Params
{
};

// Function EmbarkReplicatedSubobjects.ActorComponentReplicatedSubobjects.AddObjectToReplicate
struct UActorComponentReplicatedSubobjects_AddObjectToReplicate_Params
{
	class UReplicatedSubobject*                        ObjectToReplicate;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkReplicatedSubobjects.ActorReplicatedSubobjects.ScriptReplicateSubobjects
struct AActorReplicatedSubobjects_ScriptReplicateSubobjects_Params
{
};

// Function EmbarkReplicatedSubobjects.ActorReplicatedSubobjects.AddObjectToReplicate
struct AActorReplicatedSubobjects_AddObjectToReplicate_Params
{
	class UReplicatedSubobject*                        ObjectToReplicate;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
