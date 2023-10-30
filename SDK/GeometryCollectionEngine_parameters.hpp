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

// Function GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents
struct UChaosDestructionListener_SortTrailingEvents_Params
{
	TArray<struct FChaosTrailingEventData>             TrailingEvents;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	enum class EChaosTrailingSortMethod                SortMethod;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GeometryCollectionEngine.ChaosDestructionListener.SortRemovalEvents
struct UChaosDestructionListener_SortRemovalEvents_Params
{
	TArray<struct FChaosRemovalEventData>              RemovalEvents;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	enum class EChaosRemovalSortMethod                 SortMethod;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents
struct UChaosDestructionListener_SortCollisionEvents_Params
{
	TArray<struct FChaosCollisionEventData>            CollisionEvents;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	enum class EChaosCollisionSortMethod               SortMethod;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents
struct UChaosDestructionListener_SortBreakingEvents_Params
{
	TArray<struct FChaosBreakingEventData>             BreakingEvents;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	enum class EChaosBreakingSortMethod                SortMethod;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings
struct UChaosDestructionListener_SetTrailingEventRequestSettings_Params
{
	struct FChaosTrailingEventRequestSettings          InSettings;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventEnabled
struct UChaosDestructionListener_SetTrailingEventEnabled_Params
{
	bool                                               bIsEnabled;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GeometryCollectionEngine.ChaosDestructionListener.SetRemovalEventRequestSettings
struct UChaosDestructionListener_SetRemovalEventRequestSettings_Params
{
	struct FChaosRemovalEventRequestSettings           InSettings;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GeometryCollectionEngine.ChaosDestructionListener.SetRemovalEventEnabled
struct UChaosDestructionListener_SetRemovalEventEnabled_Params
{
	bool                                               bIsEnabled;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventRequestSettings
struct UChaosDestructionListener_SetCollisionEventRequestSettings_Params
{
	struct FChaosCollisionEventRequestSettings         InSettings;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventEnabled
struct UChaosDestructionListener_SetCollisionEventEnabled_Params
{
	bool                                               bIsEnabled;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventRequestSettings
struct UChaosDestructionListener_SetBreakingEventRequestSettings_Params
{
	struct FChaosBreakingEventRequestSettings          InSettings;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventEnabled
struct UChaosDestructionListener_SetBreakingEventEnabled_Params
{
	bool                                               bIsEnabled;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GeometryCollectionEngine.ChaosDestructionListener.RemoveGeometryCollectionActor
struct UChaosDestructionListener_RemoveGeometryCollectionActor_Params
{
	class AGeometryCollectionActor*                    GeometryCollectionActor;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor
struct UChaosDestructionListener_RemoveChaosSolverActor_Params
{
	class AChaosSolverActor*                           ChaosSolverActor;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GeometryCollectionEngine.ChaosDestructionListener.IsEventListening
struct UChaosDestructionListener_IsEventListening_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GeometryCollectionEngine.ChaosDestructionListener.AddGeometryCollectionActor
struct UChaosDestructionListener_AddGeometryCollectionActor_Params
{
	class AGeometryCollectionActor*                    GeometryCollectionActor;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor
struct UChaosDestructionListener_AddChaosSolverActor_Params
{
	class AChaosSolverActor*                           ChaosSolverActor;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle
struct AGeometryCollectionActor_RaycastSingle_Params
{
	struct FVector                                     Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyRemovals
struct UGeometryCollectionComponent_SetNotifyRemovals_Params
{
	bool                                               bNewNotifyRemovals;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks
struct UGeometryCollectionComponent_SetNotifyBreaks_Params
{
	bool                                               bNewNotifyBreaks;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GeometryCollectionEngine.GeometryCollectionComponent.ReceivePhysicsCollision
struct UGeometryCollectionComponent_ReceivePhysicsCollision_Params
{
	struct FChaosPhysicsCollisionInfo                  CollisionInfo;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GeometryCollectionEngine.GeometryCollectionComponent.OnRep_RepData
struct UGeometryCollectionComponent_OnRep_RepData_Params
{
	struct FGeometryCollectionRepData                  OldData;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsStateChange__DelegateSignature
struct UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsStateChange__DelegateSignature_Params
{
	class UGeometryCollectionComponent*                FracturedComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature
struct UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature_Params
{
	class UGeometryCollectionComponent*                FracturedComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GeometryCollectionEngine.GeometryCollectionComponent.NetAbandonCluster
struct UGeometryCollectionComponent_NetAbandonCluster_Params
{
	int                                                TransformIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyPhysicsField
struct UGeometryCollectionComponent_ApplyPhysicsField_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	enum class EGeometryCollectionPhysicsTypeEnum      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UFieldSystemMetaData*                        MetaData;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFieldNodeBase*                              Field;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyKinematicField
struct UGeometryCollectionComponent_ApplyKinematicField_Params
{
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
