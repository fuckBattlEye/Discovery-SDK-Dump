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

// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.UpdateTimers
struct UEmbarkDistanceQueryManager_UpdateTimers_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.UpdateQueries
struct UEmbarkDistanceQueryManager_UpdateQueries_Params
{
};

// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.SetQueryStickiness
struct UEmbarkDistanceQueryManager_SetQueryStickiness_Params
{
	int                                                QueryID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Stickiness;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.SetQueryResultsCapacity
struct UEmbarkDistanceQueryManager_SetQueryResultsCapacity_Params
{
	int                                                Capacity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.SetQueryEnabled
struct UEmbarkDistanceQueryManager_SetQueryEnabled_Params
{
	int                                                QueryID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.SetQueryDistance
struct UEmbarkDistanceQueryManager_SetQueryDistance_Params
{
	int                                                QueryID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DistanceToCheck;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.SetQueryCallbackFlags
struct UEmbarkDistanceQueryManager_SetQueryCallbackFlags_Params
{
	int                                                QueryID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	enum class EEmbarkDistanceQueryCallbackFlags       CallbackFlags;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.SetQueryAtomic
struct UEmbarkDistanceQueryManager_SetQueryAtomic_Params
{
	int                                                QueryID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAtomic;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.SetLocationDataEx
struct UEmbarkDistanceQueryManager_SetLocationDataEx_Params
{
	class UClass*                                      GroupClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     NewLocation;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              DistanceToCheck;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Stickiness;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Specifier;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Vector;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.SetLocationData
struct UEmbarkDistanceQueryManager_SetLocationData_Params
{
	class UClass*                                      GroupClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              DistanceToCheck;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Stickiness;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Specifier;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Vector;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.SetComponentData
struct UEmbarkDistanceQueryManager_SetComponentData_Params
{
	class UClass*                                      GroupClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              DistanceToCheck;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Stickiness;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Specifier;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Vector;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.SetCapsuleLocationDataEx
struct UEmbarkDistanceQueryManager_SetCapsuleLocationDataEx_Params
{
	class UClass*                                      GroupClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     NewLocation;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              HalfHeight;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FQuat                                       Rotation;                                                 // (Parm, IsPlainOldData)
	float                                              DistanceToCheck;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Stickiness;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Specifier;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.SetCapsuleLocationData
struct UEmbarkDistanceQueryManager_SetCapsuleLocationData_Params
{
	class UClass*                                      GroupClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              HalfHeight;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FQuat                                       Rotation;                                                 // (Parm, IsPlainOldData)
	float                                              DistanceToCheck;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Stickiness;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Specifier;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.SetCapsuleComponentData
struct UEmbarkDistanceQueryManager_SetCapsuleComponentData_Params
{
	class UClass*                                      GroupClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              HalfHeight;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FQuat                                       Rotation;                                                 // (Parm, IsPlainOldData)
	float                                              DistanceToCheck;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Stickiness;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Specifier;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.SetCapsuleActorData
struct UEmbarkDistanceQueryManager_SetCapsuleActorData_Params
{
	class UClass*                                      GroupClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HalfHeight;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FQuat                                       Rotation;                                                 // (Parm, IsPlainOldData)
	float                                              DistanceToCheck;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Stickiness;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Specifier;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.SetActorData
struct UEmbarkDistanceQueryManager_SetActorData_Params
{
	class UClass*                                      GroupClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DistanceToCheck;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Stickiness;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Specifier;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Vector;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.RemoveLocation
struct UEmbarkDistanceQueryManager_RemoveLocation_Params
{
	class UClass*                                      GroupClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                Specifier;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.RemoveComponent
struct UEmbarkDistanceQueryManager_RemoveComponent_Params
{
	class UClass*                                      GroupClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                Specifier;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.RemoveActor
struct UEmbarkDistanceQueryManager_RemoveActor_Params
{
	class UClass*                                      GroupClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Specifier;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.MakeQuery
struct UEmbarkDistanceQueryManager_MakeQuery_Params
{
	class UClass*                                      SourceGroupClass;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      TargetGroupClass;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DistanceToCheck;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Stickiness;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAtomic;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	enum class EEmbarkDistanceQueryCallbackFlags       CallbackFlags;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.MakeQueries
struct UEmbarkDistanceQueryManager_MakeQueries_Params
{
	class UClass*                                      SourceGroupClass;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              TargetGroupClasses;                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              DistanceToCheck;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Stickiness;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAtomic;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	enum class EEmbarkDistanceQueryCallbackFlags       CallbackFlags;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.GetQueryKeySpecifier
struct UEmbarkDistanceQueryManager_GetQueryKeySpecifier_Params
{
	struct FEmbarkDistanceQueryKey                     Key;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.GetQueryKeyName
struct UEmbarkDistanceQueryManager_GetQueryKeyName_Params
{
	struct FEmbarkDistanceQueryKey                     Key;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.GetQueryKeyLocation
struct UEmbarkDistanceQueryManager_GetQueryKeyLocation_Params
{
	struct FEmbarkDistanceQueryKey                     Key;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.GetQueryKeyComponent
struct UEmbarkDistanceQueryManager_GetQueryKeyComponent_Params
{
	struct FEmbarkDistanceQueryKey                     Key;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class USceneComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.GetQueryKeyActor
struct UEmbarkDistanceQueryManager_GetQueryKeyActor_Params
{
	struct FEmbarkDistanceQueryKey                     Key;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.GetDistanceQueryManagerWithContext
struct UEmbarkDistanceQueryManager_GetDistanceQueryManagerWithContext_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UEmbarkDistanceQueryManager*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.GetDistanceQueryManager
struct UEmbarkDistanceQueryManager_GetDistanceQueryManager_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UEmbarkDistanceQueryManager*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.Dump
struct UEmbarkDistanceQueryManager_Dump_Params
{
};

// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.AddLocationWithCallback
struct UEmbarkDistanceQueryManager_AddLocationWithCallback_Params
{
	class UClass*                                      GroupClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FScriptDelegate                             Callback;                                                 // (Parm, ZeroConstructor)
	float                                              DistanceToCheck;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Stickiness;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Specifier;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Vector;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeToLive;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.AddLocation
struct UEmbarkDistanceQueryManager_AddLocation_Params
{
	class UClass*                                      GroupClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              DistanceToCheck;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Stickiness;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Specifier;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Vector;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeToLive;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.AddComponentWithCallback
struct UEmbarkDistanceQueryManager_AddComponentWithCallback_Params
{
	class UClass*                                      GroupClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptDelegate                             Callback;                                                 // (Parm, ZeroConstructor)
	float                                              DistanceToCheck;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Stickiness;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Specifier;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Vector;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.AddComponent
struct UEmbarkDistanceQueryManager_AddComponent_Params
{
	class UClass*                                      GroupClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              DistanceToCheck;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Stickiness;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Specifier;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Vector;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.AddCapsuleLocationWithCallback
struct UEmbarkDistanceQueryManager_AddCapsuleLocationWithCallback_Params
{
	class UClass*                                      GroupClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              HalfHeight;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FQuat                                       Rotation;                                                 // (Parm, IsPlainOldData)
	struct FScriptDelegate                             Callback;                                                 // (Parm, ZeroConstructor)
	float                                              DistanceToCheck;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Stickiness;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Specifier;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeToLive;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.AddCapsuleLocation
struct UEmbarkDistanceQueryManager_AddCapsuleLocation_Params
{
	class UClass*                                      GroupClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              HalfHeight;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FQuat                                       Rotation;                                                 // (Parm, IsPlainOldData)
	float                                              DistanceToCheck;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Stickiness;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Specifier;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeToLive;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.AddCapsuleComponentWithCallback
struct UEmbarkDistanceQueryManager_AddCapsuleComponentWithCallback_Params
{
	class UClass*                                      GroupClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              HalfHeight;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FQuat                                       Rotation;                                                 // (Parm, IsPlainOldData)
	struct FScriptDelegate                             Callback;                                                 // (Parm, ZeroConstructor)
	float                                              DistanceToCheck;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Stickiness;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Specifier;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.AddCapsuleComponent
struct UEmbarkDistanceQueryManager_AddCapsuleComponent_Params
{
	class UClass*                                      GroupClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              HalfHeight;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FQuat                                       Rotation;                                                 // (Parm, IsPlainOldData)
	float                                              DistanceToCheck;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Stickiness;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Specifier;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.AddCapsuleActorWithCallback
struct UEmbarkDistanceQueryManager_AddCapsuleActorWithCallback_Params
{
	class UClass*                                      GroupClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HalfHeight;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FQuat                                       Rotation;                                                 // (Parm, IsPlainOldData)
	struct FScriptDelegate                             Callback;                                                 // (Parm, ZeroConstructor)
	float                                              DistanceToCheck;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Stickiness;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Specifier;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.AddCapsuleActor
struct UEmbarkDistanceQueryManager_AddCapsuleActor_Params
{
	class UClass*                                      GroupClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HalfHeight;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FQuat                                       Rotation;                                                 // (Parm, IsPlainOldData)
	float                                              DistanceToCheck;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Stickiness;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Specifier;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.AddActorWithCallback
struct UEmbarkDistanceQueryManager_AddActorWithCallback_Params
{
	class UClass*                                      GroupClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             Callback;                                                 // (Parm, ZeroConstructor)
	float                                              DistanceToCheck;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Stickiness;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Specifier;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Vector;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.AddActor
struct UEmbarkDistanceQueryManager_AddActor_Params
{
	class UClass*                                      GroupClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DistanceToCheck;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Stickiness;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Specifier;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Vector;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
