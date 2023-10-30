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

// Function EmbarkObjectPools.EmbarkObjectPoolSubsystem.ResetPool
struct UEmbarkObjectPoolSubsystem_ResetPool_Params
{
	int                                                Capacity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkObjectPools.EmbarkObjectPoolSubsystem.PoolObject
struct UEmbarkObjectPoolSubsystem_PoolObject_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkObjectPools.EmbarkObjectPoolSubsystem.OnInitializeSubsystem
struct UEmbarkObjectPoolSubsystem_OnInitializeSubsystem_Params
{
};

// Function EmbarkObjectPools.EmbarkObjectPoolSubsystem.OnDeinitializeSubsystem
struct UEmbarkObjectPoolSubsystem_OnDeinitializeSubsystem_Params
{
};

// Function EmbarkObjectPools.EmbarkObjectPoolSubsystem.NextOrCreateObject
struct UEmbarkObjectPoolSubsystem_NextOrCreateObject_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkObjectPools.EmbarkObjectPoolSubsystem.NextObject
struct UEmbarkObjectPoolSubsystem_NextObject_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkObjectPools.EmbarkObjectPoolSubsystem.InitializePool
struct UEmbarkObjectPoolSubsystem_InitializePool_Params
{
	struct FName                                       Name;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UClass*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             Delegate;                                                 // (Parm, ZeroConstructor)
	int                                                Capacity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FillTarget;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FillRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkObjectPools.EmbarkObjectPoolSubsystem.FinalizePool
struct UEmbarkObjectPoolSubsystem_FinalizePool_Params
{
};

// Function EmbarkObjectPools.EmbarkObjectPoolSubsystem.FillPool
struct UEmbarkObjectPoolSubsystem_FillPool_Params
{
	int                                                FillTarget;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FillRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkObjectPools.EmbarkObjectPool.ResetPool
struct UEmbarkObjectPool_ResetPool_Params
{
	int                                                Capacity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkObjectPools.EmbarkObjectPool.PoolObject
struct UEmbarkObjectPool_PoolObject_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkObjectPools.EmbarkObjectPool.NextOrCreateObject
struct UEmbarkObjectPool_NextOrCreateObject_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkObjectPools.EmbarkObjectPool.NextObject
struct UEmbarkObjectPool_NextObject_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkObjectPools.EmbarkObjectPool.InitializePool
struct UEmbarkObjectPool_InitializePool_Params
{
	struct FName                                       Name;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UClass*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             Delegate;                                                 // (Parm, ZeroConstructor)
	int                                                Capacity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FillTarget;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FillRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkObjectPools.EmbarkObjectPool.FinalizePool
struct UEmbarkObjectPool_FinalizePool_Params
{
};

// Function EmbarkObjectPools.EmbarkObjectPool.FillPool
struct UEmbarkObjectPool_FillPool_Params
{
	int                                                FillTarget;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FillRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkObjectPools.EmbarkActorPool.ResetPool
struct UEmbarkActorPool_ResetPool_Params
{
	int                                                Capacity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkObjectPools.EmbarkActorPool.PoolObject
struct UEmbarkActorPool_PoolObject_Params
{
	class AActor*                                      Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkObjectPools.EmbarkActorPool.NextOrCreateObject
struct UEmbarkActorPool_NextOrCreateObject_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkObjectPools.EmbarkActorPool.NextObject
struct UEmbarkActorPool_NextObject_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkObjectPools.EmbarkActorPool.InitializePool
struct UEmbarkActorPool_InitializePool_Params
{
	struct FName                                       Name;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UClass*                                      Class;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FScriptDelegate                             Delegate;                                                 // (Parm, ZeroConstructor)
	int                                                Capacity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FillTarget;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FillRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkObjectPools.EmbarkActorPool.FinalizePool
struct UEmbarkActorPool_FinalizePool_Params
{
};

// Function EmbarkObjectPools.EmbarkActorPool.FillPool
struct UEmbarkActorPool_FillPool_Params
{
	int                                                FillTarget;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FillRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkObjectPools.EmbarkActorComponentPool.ResetPool
struct UEmbarkActorComponentPool_ResetPool_Params
{
	int                                                Capacity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkObjectPools.EmbarkActorComponentPool.PoolObject
struct UEmbarkActorComponentPool_PoolObject_Params
{
	class UActorComponent*                             Object;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkObjectPools.EmbarkActorComponentPool.NextOrCreateObject
struct UEmbarkActorComponentPool_NextOrCreateObject_Params
{
	class UActorComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function EmbarkObjectPools.EmbarkActorComponentPool.NextObject
struct UEmbarkActorComponentPool_NextObject_Params
{
	class UActorComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function EmbarkObjectPools.EmbarkActorComponentPool.InitializePool
struct UEmbarkActorComponentPool_InitializePool_Params
{
	struct FName                                       Name;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UClass*                                      Class;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FScriptDelegate                             Delegate;                                                 // (Parm, ZeroConstructor)
	int                                                Capacity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FillTarget;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FillRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkObjectPools.EmbarkActorComponentPool.FinalizePool
struct UEmbarkActorComponentPool_FinalizePool_Params
{
};

// Function EmbarkObjectPools.EmbarkActorComponentPool.FillPool
struct UEmbarkActorComponentPool_FillPool_Params
{
	int                                                FillTarget;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FillRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkObjectPools.EmbarkObjectVariantPool.ResetPool
struct UEmbarkObjectVariantPool_ResetPool_Params
{
	int                                                Capacity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkObjectPools.EmbarkObjectVariantPool.PrewarmPool
struct UEmbarkObjectVariantPool_PrewarmPool_Params
{
	class UClass*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkObjectPools.EmbarkObjectVariantPool.PoolObject
struct UEmbarkObjectVariantPool_PoolObject_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkObjectPools.EmbarkObjectVariantPool.NextOrCreateObject
struct UEmbarkObjectVariantPool_NextOrCreateObject_Params
{
	class UClass*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkObjectPools.EmbarkObjectVariantPool.NextObject
struct UEmbarkObjectVariantPool_NextObject_Params
{
	class UClass*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkObjectPools.EmbarkObjectVariantPool.InitializePool
struct UEmbarkObjectVariantPool_InitializePool_Params
{
	struct FName                                       Name;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FScriptDelegate                             Delegate;                                                 // (Parm, ZeroConstructor)
	int                                                Capacity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FillTarget;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FillRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkObjectPools.EmbarkObjectVariantPool.FinalizePool
struct UEmbarkObjectVariantPool_FinalizePool_Params
{
};

// Function EmbarkObjectPools.EmbarkObjectVariantPool.FillPool
struct UEmbarkObjectVariantPool_FillPool_Params
{
	class UClass*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FillTarget;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FillRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkObjectPools.EmbarkActorVariantPool.ResetPool
struct UEmbarkActorVariantPool_ResetPool_Params
{
	int                                                Capacity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkObjectPools.EmbarkActorVariantPool.PrewarmPool
struct UEmbarkActorVariantPool_PrewarmPool_Params
{
	class UClass*                                      Class;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function EmbarkObjectPools.EmbarkActorVariantPool.PoolObject
struct UEmbarkActorVariantPool_PoolObject_Params
{
	class AActor*                                      Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkObjectPools.EmbarkActorVariantPool.NextOrCreateObject
struct UEmbarkActorVariantPool_NextOrCreateObject_Params
{
	class UClass*                                      Class;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkObjectPools.EmbarkActorVariantPool.NextObject
struct UEmbarkActorVariantPool_NextObject_Params
{
	class UClass*                                      Class;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkObjectPools.EmbarkActorVariantPool.InitializePool
struct UEmbarkActorVariantPool_InitializePool_Params
{
	struct FName                                       Name;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FScriptDelegate                             Delegate;                                                 // (Parm, ZeroConstructor)
	int                                                Capacity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FillTarget;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FillRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkObjectPools.EmbarkActorVariantPool.FinalizePool
struct UEmbarkActorVariantPool_FinalizePool_Params
{
};

// Function EmbarkObjectPools.EmbarkActorVariantPool.FillPool
struct UEmbarkActorVariantPool_FillPool_Params
{
	class UClass*                                      Class;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                FillTarget;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FillRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkObjectPools.EmbarkActorComponentVariantPool.ResetPool
struct UEmbarkActorComponentVariantPool_ResetPool_Params
{
	int                                                Capacity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkObjectPools.EmbarkActorComponentVariantPool.PrewarmPool
struct UEmbarkActorComponentVariantPool_PrewarmPool_Params
{
	class UClass*                                      Class;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function EmbarkObjectPools.EmbarkActorComponentVariantPool.PoolObject
struct UEmbarkActorComponentVariantPool_PoolObject_Params
{
	class UActorComponent*                             Object;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkObjectPools.EmbarkActorComponentVariantPool.NextOrCreateObject
struct UEmbarkActorComponentVariantPool_NextOrCreateObject_Params
{
	class UClass*                                      Class;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UActorComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function EmbarkObjectPools.EmbarkActorComponentVariantPool.NextObject
struct UEmbarkActorComponentVariantPool_NextObject_Params
{
	class UClass*                                      Class;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UActorComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function EmbarkObjectPools.EmbarkActorComponentVariantPool.InitializePool
struct UEmbarkActorComponentVariantPool_InitializePool_Params
{
	struct FName                                       Name;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FScriptDelegate                             Delegate;                                                 // (Parm, ZeroConstructor)
	int                                                Capacity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FillTarget;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FillRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkObjectPools.EmbarkActorComponentVariantPool.FinalizePool
struct UEmbarkActorComponentVariantPool_FinalizePool_Params
{
};

// Function EmbarkObjectPools.EmbarkActorComponentVariantPool.FillPool
struct UEmbarkActorComponentVariantPool_FillPool_Params
{
	class UClass*                                      Class;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                FillTarget;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FillRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkObjectPools.EmbarkActorPoolSubsystem.ResetPool
struct UEmbarkActorPoolSubsystem_ResetPool_Params
{
	int                                                Capacity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkObjectPools.EmbarkActorPoolSubsystem.PoolObject
struct UEmbarkActorPoolSubsystem_PoolObject_Params
{
	class AActor*                                      Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkObjectPools.EmbarkActorPoolSubsystem.OnInitializeSubsystem
struct UEmbarkActorPoolSubsystem_OnInitializeSubsystem_Params
{
};

// Function EmbarkObjectPools.EmbarkActorPoolSubsystem.OnDeinitializeSubsystem
struct UEmbarkActorPoolSubsystem_OnDeinitializeSubsystem_Params
{
};

// Function EmbarkObjectPools.EmbarkActorPoolSubsystem.NextOrCreateObject
struct UEmbarkActorPoolSubsystem_NextOrCreateObject_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkObjectPools.EmbarkActorPoolSubsystem.NextObject
struct UEmbarkActorPoolSubsystem_NextObject_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkObjectPools.EmbarkActorPoolSubsystem.InitializePool
struct UEmbarkActorPoolSubsystem_InitializePool_Params
{
	struct FName                                       Name;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UClass*                                      Class;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FScriptDelegate                             Delegate;                                                 // (Parm, ZeroConstructor)
	int                                                Capacity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FillTarget;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FillRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkObjectPools.EmbarkActorPoolSubsystem.FinalizePool
struct UEmbarkActorPoolSubsystem_FinalizePool_Params
{
};

// Function EmbarkObjectPools.EmbarkActorPoolSubsystem.FillPool
struct UEmbarkActorPoolSubsystem_FillPool_Params
{
	int                                                FillTarget;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FillRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkObjectPools.EmbarkActorComponentPoolSubsystem.ResetPool
struct UEmbarkActorComponentPoolSubsystem_ResetPool_Params
{
	int                                                Capacity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkObjectPools.EmbarkActorComponentPoolSubsystem.PoolObject
struct UEmbarkActorComponentPoolSubsystem_PoolObject_Params
{
	class UActorComponent*                             Object;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkObjectPools.EmbarkActorComponentPoolSubsystem.OnInitializeSubsystem
struct UEmbarkActorComponentPoolSubsystem_OnInitializeSubsystem_Params
{
};

// Function EmbarkObjectPools.EmbarkActorComponentPoolSubsystem.OnDeinitializeSubsystem
struct UEmbarkActorComponentPoolSubsystem_OnDeinitializeSubsystem_Params
{
};

// Function EmbarkObjectPools.EmbarkActorComponentPoolSubsystem.NextOrCreateObject
struct UEmbarkActorComponentPoolSubsystem_NextOrCreateObject_Params
{
	class UActorComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function EmbarkObjectPools.EmbarkActorComponentPoolSubsystem.NextObject
struct UEmbarkActorComponentPoolSubsystem_NextObject_Params
{
	class UActorComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function EmbarkObjectPools.EmbarkActorComponentPoolSubsystem.InitializePool
struct UEmbarkActorComponentPoolSubsystem_InitializePool_Params
{
	struct FName                                       Name;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UClass*                                      Class;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FScriptDelegate                             Delegate;                                                 // (Parm, ZeroConstructor)
	int                                                Capacity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FillTarget;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FillRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkObjectPools.EmbarkActorComponentPoolSubsystem.FinalizePool
struct UEmbarkActorComponentPoolSubsystem_FinalizePool_Params
{
};

// Function EmbarkObjectPools.EmbarkActorComponentPoolSubsystem.FillPool
struct UEmbarkActorComponentPoolSubsystem_FillPool_Params
{
	int                                                FillTarget;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FillRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkObjectPools.EmbarkObjectVariantPoolSubsystem.ResetPool
struct UEmbarkObjectVariantPoolSubsystem_ResetPool_Params
{
	int                                                Capacity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkObjectPools.EmbarkObjectVariantPoolSubsystem.PrewarmPool
struct UEmbarkObjectVariantPoolSubsystem_PrewarmPool_Params
{
	class UClass*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkObjectPools.EmbarkObjectVariantPoolSubsystem.PoolObject
struct UEmbarkObjectVariantPoolSubsystem_PoolObject_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkObjectPools.EmbarkObjectVariantPoolSubsystem.OnInitializeSubsystem
struct UEmbarkObjectVariantPoolSubsystem_OnInitializeSubsystem_Params
{
};

// Function EmbarkObjectPools.EmbarkObjectVariantPoolSubsystem.OnDeinitializeSubsystem
struct UEmbarkObjectVariantPoolSubsystem_OnDeinitializeSubsystem_Params
{
};

// Function EmbarkObjectPools.EmbarkObjectVariantPoolSubsystem.NextOrCreateObject
struct UEmbarkObjectVariantPoolSubsystem_NextOrCreateObject_Params
{
	class UClass*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkObjectPools.EmbarkObjectVariantPoolSubsystem.NextObject
struct UEmbarkObjectVariantPoolSubsystem_NextObject_Params
{
	class UClass*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkObjectPools.EmbarkObjectVariantPoolSubsystem.InitializePool
struct UEmbarkObjectVariantPoolSubsystem_InitializePool_Params
{
	struct FName                                       Name;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FScriptDelegate                             Delegate;                                                 // (Parm, ZeroConstructor)
	int                                                Capacity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FillTarget;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FillRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkObjectPools.EmbarkObjectVariantPoolSubsystem.FinalizePool
struct UEmbarkObjectVariantPoolSubsystem_FinalizePool_Params
{
};

// Function EmbarkObjectPools.EmbarkObjectVariantPoolSubsystem.FillPool
struct UEmbarkObjectVariantPoolSubsystem_FillPool_Params
{
	class UClass*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FillTarget;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FillRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkObjectPools.EmbarkActorVariantPoolSubsystem.ResetPool
struct UEmbarkActorVariantPoolSubsystem_ResetPool_Params
{
	int                                                Capacity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkObjectPools.EmbarkActorVariantPoolSubsystem.PrewarmPool
struct UEmbarkActorVariantPoolSubsystem_PrewarmPool_Params
{
	class UClass*                                      Class;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function EmbarkObjectPools.EmbarkActorVariantPoolSubsystem.PoolObject
struct UEmbarkActorVariantPoolSubsystem_PoolObject_Params
{
	class AActor*                                      Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkObjectPools.EmbarkActorVariantPoolSubsystem.OnInitializeSubsystem
struct UEmbarkActorVariantPoolSubsystem_OnInitializeSubsystem_Params
{
};

// Function EmbarkObjectPools.EmbarkActorVariantPoolSubsystem.OnDeinitializeSubsystem
struct UEmbarkActorVariantPoolSubsystem_OnDeinitializeSubsystem_Params
{
};

// Function EmbarkObjectPools.EmbarkActorVariantPoolSubsystem.NextOrCreateObject
struct UEmbarkActorVariantPoolSubsystem_NextOrCreateObject_Params
{
	class UClass*                                      Class;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkObjectPools.EmbarkActorVariantPoolSubsystem.NextObject
struct UEmbarkActorVariantPoolSubsystem_NextObject_Params
{
	class UClass*                                      Class;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkObjectPools.EmbarkActorVariantPoolSubsystem.InitializePool
struct UEmbarkActorVariantPoolSubsystem_InitializePool_Params
{
	struct FName                                       Name;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FScriptDelegate                             Delegate;                                                 // (Parm, ZeroConstructor)
	int                                                Capacity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FillTarget;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FillRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkObjectPools.EmbarkActorVariantPoolSubsystem.FinalizePool
struct UEmbarkActorVariantPoolSubsystem_FinalizePool_Params
{
};

// Function EmbarkObjectPools.EmbarkActorVariantPoolSubsystem.FillPool
struct UEmbarkActorVariantPoolSubsystem_FillPool_Params
{
	class UClass*                                      Class;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                FillTarget;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FillRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkObjectPools.EmbarkActorComponentVariantPoolSubsystem.ResetPool
struct UEmbarkActorComponentVariantPoolSubsystem_ResetPool_Params
{
	int                                                Capacity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkObjectPools.EmbarkActorComponentVariantPoolSubsystem.PrewarmPool
struct UEmbarkActorComponentVariantPoolSubsystem_PrewarmPool_Params
{
	class UClass*                                      Class;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function EmbarkObjectPools.EmbarkActorComponentVariantPoolSubsystem.PoolObject
struct UEmbarkActorComponentVariantPoolSubsystem_PoolObject_Params
{
	class UActorComponent*                             Object;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkObjectPools.EmbarkActorComponentVariantPoolSubsystem.OnInitializeSubsystem
struct UEmbarkActorComponentVariantPoolSubsystem_OnInitializeSubsystem_Params
{
};

// Function EmbarkObjectPools.EmbarkActorComponentVariantPoolSubsystem.OnDeinitializeSubsystem
struct UEmbarkActorComponentVariantPoolSubsystem_OnDeinitializeSubsystem_Params
{
};

// Function EmbarkObjectPools.EmbarkActorComponentVariantPoolSubsystem.NextOrCreateObject
struct UEmbarkActorComponentVariantPoolSubsystem_NextOrCreateObject_Params
{
	class UClass*                                      Class;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UActorComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function EmbarkObjectPools.EmbarkActorComponentVariantPoolSubsystem.NextObject
struct UEmbarkActorComponentVariantPoolSubsystem_NextObject_Params
{
	class UClass*                                      Class;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UActorComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function EmbarkObjectPools.EmbarkActorComponentVariantPoolSubsystem.InitializePool
struct UEmbarkActorComponentVariantPoolSubsystem_InitializePool_Params
{
	struct FName                                       Name;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FScriptDelegate                             Delegate;                                                 // (Parm, ZeroConstructor)
	int                                                Capacity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FillTarget;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FillRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkObjectPools.EmbarkActorComponentVariantPoolSubsystem.FinalizePool
struct UEmbarkActorComponentVariantPoolSubsystem_FinalizePool_Params
{
};

// Function EmbarkObjectPools.EmbarkActorComponentVariantPoolSubsystem.FillPool
struct UEmbarkActorComponentVariantPoolSubsystem_FillPool_Params
{
	class UClass*                                      Class;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                FillTarget;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FillRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
