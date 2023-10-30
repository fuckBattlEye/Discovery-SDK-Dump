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

// Function EmbarkAINavigation.DonNavigationHelper.HpaNavigationManager
struct UDonNavigationHelper_HpaNavigationManager_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AHpaNavigationManager*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAINavigation.DonNavigationHelper.DonNavigationManagerForActor
struct UDonNavigationHelper_DonNavigationManagerForActor_Params
{
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ADonNavigationManager*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAINavigation.DonNavigationHelper.DonNavigationManager
struct UDonNavigationHelper_DonNavigationManager_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class ADonNavigationManager*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAINavigation.DonNavigationManager.VisualizeNAVResult
struct ADonNavigationManager_VisualizeNAVResult_Params
{
	TArray<struct FVector>                             PathSolution;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector                                     Source;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Destination;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Reset;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDoNNavigationDebugParams                   DebugParams;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FColor                                      LineColor;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function EmbarkAINavigation.DonNavigationManager.VisualizeDynamicCollisionListeners
struct ADonNavigationManager_VisualizeDynamicCollisionListeners_Params
{
	struct FScriptDelegate                             Listener;                                                 // (Parm, ZeroConstructor)
	struct FDoNNavigationQueryData                     QueryData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkAINavigation.DonNavigationManager.StopListeningToDynamicCollisionsForPathIndex
struct ADonNavigationManager_StopListeningToDynamicCollisionsForPathIndex_Params
{
	struct FScriptDelegate                             ListenerToClear;                                          // (Parm, ZeroConstructor)
	struct FDoNNavigationQueryData                     QueryData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                VolumeIndex;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAINavigation.DonNavigationManager.StopListeningToDynamicCollisionsForPath
struct ADonNavigationManager_StopListeningToDynamicCollisionsForPath_Params
{
	struct FScriptDelegate                             ListenerToClear;                                          // (Parm, ZeroConstructor)
	struct FDoNNavigationQueryData                     QueryData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkAINavigation.DonNavigationManager.SchedulePathfindingTask
struct ADonNavigationManager_SchedulePathfindingTask_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Destination;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDoNNavigationQueryParams                   QueryParams;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FDoNNavigationDebugParams                   DebugParams;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FScriptDelegate                             ResultHandlerDelegate;                                    // (Parm, ZeroConstructor)
	struct FScriptDelegate                             DynamicCollisionListener;                                 // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAINavigation.DonNavigationManager.ScheduleDynamicCollisionUpdate
struct ADonNavigationManager_ScheduleDynamicCollisionUpdate_Params
{
	class UPrimitiveComponent*                         Mesh;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptDelegate                             ResultHandler;                                            // (Parm, ZeroConstructor)
	struct FName                                       CustomCacheIdentifier;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bReplaceExistingTask;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDisableCacheUsage;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bReloadCollisionCache;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseCheapBoundsCollision;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BoundsScaleFactor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceSynchronousExecution;                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawDebug;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAINavigation.DonNavigationManager.IsMeshBoundsWithinNavigableWorld
struct ADonNavigationManager_IsMeshBoundsWithinNavigableWorld_Params
{
	class UPrimitiveComponent*                         Mesh;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              BoundsScaleFactor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAINavigation.DonNavigationManager.IsLocationWithinNavigableWorld
struct ADonNavigationManager_IsLocationWithinNavigableWorld_Params
{
	struct FVector                                     DesiredLocation;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAINavigation.DonNavigationManager.IsLocationBeneathLandscape
struct ADonNavigationManager_IsLocationBeneathLandscape_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LineTraceHeight;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAINavigation.DonNavigationManager.IsDirectPathSweep
struct ADonNavigationManager_IsDirectPathSweep_Params
{
	class UPrimitiveComponent*                         CollisionComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm, IsPlainOldData)
	bool                                               bFindInitialOverlaps;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CollisionShapeInflation;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAINavigation.DonNavigationManager.IsDirectPathLineTrace
struct ADonNavigationManager_IsDirectPathLineTrace_Params
{
	struct FVector                                     Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bFindInitialOverlaps;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAINavigation.DonNavigationManager.IsDirectPathLineSweep
struct ADonNavigationManager_IsDirectPathLineSweep_Params
{
	class UPrimitiveComponent*                         CollisionComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm, IsPlainOldData)
	bool                                               bFindInitialOverlaps;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CollisionShapeInflation;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAINavigation.DonNavigationManager.HasTask
struct ADonNavigationManager_HasTask_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAINavigation.DonNavigationManager.FindRandomPointFromActorInNavWorld
struct ADonNavigationManager_FindRandomPointFromActorInNavWorld_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFoundValidResult;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              MaxDesiredAltitude;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxZAngularDispacement;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxAttempts;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAINavigation.DonNavigationManager.FindRandomPointAroundOriginInNavWorld
struct ADonNavigationManager_FindRandomPointAroundOriginInNavWorld_Params
{
	class AActor*                                      NavigationActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Origin;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFoundValidResult;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              MaxDesiredAltitude;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxZAngularDispacement;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxAttempts;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAINavigation.DonNavigationManager.FindPathSolution_StressTesting
struct ADonNavigationManager_FindPathSolution_StressTesting_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Destination;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             PathSolutionRaw;                                          // (Parm, OutParm, ZeroConstructor)
	TArray<struct FVector>                             PathSolutionOptimized;                                    // (Parm, OutParm, ZeroConstructor)
	struct FDoNNavigationQueryParams                   QueryParams;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FDoNNavigationDebugParams                   DebugParams;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAINavigation.DonNavigationManager.Debug_ToggleWorldBoundaryInGame
struct ADonNavigationManager_Debug_ToggleWorldBoundaryInGame_Params
{
};

// Function EmbarkAINavigation.DonNavigationManager.Debug_DrawVoxelCollisionProfile
struct ADonNavigationManager_Debug_DrawVoxelCollisionProfile_Params
{
	class UPrimitiveComponent*                         MeshOrPrimitive;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bDrawPersistent;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAINavigation.DonNavigationManager.Debug_DrawVolumesAroundPoint
struct ADonNavigationManager_Debug_DrawVolumesAroundPoint_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CubeSize;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DrawPersistentLines;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LineThickness;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoInitializeVolumes;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAINavigation.DonNavigationManager.Debug_DrawAllVolumes
struct ADonNavigationManager_Debug_DrawAllVolumes_Params
{
	float                                              LineThickness;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAINavigation.DonNavigationManager.Debug_ClearAllVolumes
struct ADonNavigationManager_Debug_ClearAllVolumes_Params
{
};

// Function EmbarkAINavigation.DonNavigationManager.ConstructBuilder
struct ADonNavigationManager_ConstructBuilder_Params
{
};

// Function EmbarkAINavigation.DonNavigationManager.ClampLocationToNavigableWorld
struct ADonNavigationManager_ClampLocationToNavigableWorld_Params
{
	struct FVector                                     DesiredLocation;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAINavigation.DonNavigationManager.CanNavigate
struct ADonNavigationManager_CanNavigate_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAINavigation.DonNavigationManager.AbortPathfindingTask
struct ADonNavigationManager_AbortPathfindingTask_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAINavigation.DonNavigator.OnNextSegment
struct UDonNavigator_OnNextSegment_Params
{
	struct FVector                                     NextPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAINavigation.DonNavigator.OnLocomotionEnd
struct UDonNavigator_OnLocomotionEnd_Params
{
	bool                                               bLocomotionSuccess;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAINavigation.DonNavigator.OnLocomotionBegin
struct UDonNavigator_OnLocomotionBegin_Params
{
};

// Function EmbarkAINavigation.DonNavigator.OnLocomotionAbort
struct UDonNavigator_OnLocomotionAbort_Params
{
};

// Function EmbarkAINavigation.DonNavigator.AddMovementInputCustom
struct UDonNavigator_AddMovementInputCustom_Params
{
	struct FVector                                     WorldDirection;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ScaleValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAINavigation.HpaNavigation.LoadData
struct AHpaNavigation_LoadData_Params
{
};

// Function EmbarkAINavigation.HpaNavigation.GetCollisionInStraightLine
struct AHpaNavigation_GetCollisionInStraightLine_Params
{
	struct FVector                                     Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutCollision;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAINavigation.HpaNavigation.GetClosestVoxel
struct AHpaNavigation_GetClosestVoxel_Params
{
	struct FVector                                     WorldLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutVoxelLocation;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               OutNavigable;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAINavigation.HpaNavigation.FindGroundVoxelLocationInWorld
struct AHpaNavigation_FindGroundVoxelLocationInWorld_Params
{
	float                                              WorldLocationX;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              WorldLocationY;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAINavigation.HpaNavigation.FindGroundVoxelLocationFromPoint
struct AHpaNavigation_FindGroundVoxelLocationFromPoint_Params
{
	struct FVector                                     WorldLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAINavigation.HpaNavigation.FindClosestNavigablePositionInRange
struct AHpaNavigation_FindClosestNavigablePositionInRange_Params
{
	struct FVector                                     WorldLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Range;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutLocation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAINavigation.HpaNavigation.FindBidirectionalPath_DebugStressTest
struct AHpaNavigation_FindBidirectionalPath_DebugStressTest_Params
{
	struct FVector                                     Origin;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Destination;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             OutPathSolution;                                          // (Parm, OutParm, ZeroConstructor)
	int                                                OutOpenedNodes;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Optimize;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAINavigation.HpaNavigation.FindBidirectionalPath_DebugStep
struct AHpaNavigation_FindBidirectionalPath_DebugStep_Params
{
	struct FVector                                     Origin;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Destination;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OutOpenedNodes;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ForwardNode;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BackwardNode;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAINavigation.HpaNavigation.CanPathInStraightLine
struct AHpaNavigation_CanPathInStraightLine_Params
{
	struct FVector                                     Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAINavigation.HpaNavigationManager.UnregisterDynamicObstacle
struct AHpaNavigationManager_UnregisterDynamicObstacle_Params
{
	class UHpaNavigationDynamicObstacleComponent*      Obstacle;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function EmbarkAINavigation.HpaNavigationManager.SelectBestGraph
struct AHpaNavigationManager_SelectBestGraph_Params
{
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AHpaNavigation*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAINavigation.HpaNavigationManager.SchedulePathfindingTaskWithOrigin
struct AHpaNavigationManager_SchedulePathfindingTaskWithOrigin_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Origin;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Destination;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHpaNavigationQueryParams                   QueryParams;                                              // (Parm)
	struct FScriptDelegate                             ResultHandlerDelegate;                                    // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAINavigation.HpaNavigationManager.SchedulePathfindingTask
struct AHpaNavigationManager_SchedulePathfindingTask_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Destination;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHpaNavigationQueryParams                   QueryParams;                                              // (Parm)
	struct FScriptDelegate                             ResultHandlerDelegate;                                    // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAINavigation.HpaNavigationManager.RegisterDynamicObstacle
struct AHpaNavigationManager_RegisterDynamicObstacle_Params
{
	class UHpaNavigationDynamicObstacleComponent*      Obstacle;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function EmbarkAINavigation.HpaNavigationManager.RegenerateArea
struct AHpaNavigationManager_RegenerateArea_Params
{
	struct FVector                                     Origin;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BoxExtent;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAINavigation.HpaNavigationManager.HasTask
struct AHpaNavigationManager_HasTask_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAINavigation.HpaNavigationManager.FindMultiplePaths
struct AHpaNavigationManager_FindMultiplePaths_Params
{
	struct FVector                                     Origin;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             Destinations;                                             // (Parm, ZeroConstructor)
	float                                              CollisionRadius;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FPathResult>                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkAINavigation.HpaNavigationManager.FindGroundVoxelLocationInWorld
struct AHpaNavigationManager_FindGroundVoxelLocationInWorld_Params
{
	float                                              WorldLocationX;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              WorldLocationY;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CollisionRadius;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAINavigation.HpaNavigationManager.FindGroundVoxelLocationFromPoint
struct AHpaNavigationManager_FindGroundVoxelLocationFromPoint_Params
{
	struct FVector                                     WorldLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CollisionRadius;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAINavigation.HpaNavigationManager.AbortPathfindingTask
struct AHpaNavigationManager_AbortPathfindingTask_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
