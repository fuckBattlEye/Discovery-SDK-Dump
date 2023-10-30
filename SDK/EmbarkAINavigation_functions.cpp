//   SDK By:if

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../pch.h"

namespace sdk
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function EmbarkAINavigation.DonNavigationHelper.HpaNavigationManager
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class AHpaNavigationManager*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AHpaNavigationManager* UDonNavigationHelper::STATIC_HpaNavigationManager(class UObject* WorldContextObject)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAINavigation.DonNavigationHelper.HpaNavigationManager"));

	UDonNavigationHelper_HpaNavigationManager_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAINavigation.DonNavigationHelper.DonNavigationManagerForActor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class ADonNavigationManager*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ADonNavigationManager* UDonNavigationHelper::STATIC_DonNavigationManagerForActor(class AActor* Actor)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAINavigation.DonNavigationHelper.DonNavigationManagerForActor"));

	UDonNavigationHelper_DonNavigationManagerForActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAINavigation.DonNavigationHelper.DonNavigationManager
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class ADonNavigationManager*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ADonNavigationManager* UDonNavigationHelper::STATIC_DonNavigationManager(class UObject* WorldContextObject)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAINavigation.DonNavigationHelper.DonNavigationManager"));

	UDonNavigationHelper_DonNavigationManager_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAINavigation.DonNavigationManager.VisualizeNAVResult
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// TArray<struct FVector>         PathSolution                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector                 Source                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Destination                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Reset                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FDoNNavigationDebugParams DebugParams                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FColor                  LineColor                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ADonNavigationManager::VisualizeNAVResult(TArray<struct FVector> PathSolution, const struct FVector& Source, const struct FVector& Destination, bool Reset, const struct FDoNNavigationDebugParams& DebugParams, const struct FColor& LineColor)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAINavigation.DonNavigationManager.VisualizeNAVResult"));

	ADonNavigationManager_VisualizeNAVResult_Params params;
	params.PathSolution = PathSolution;
	params.Source = Source;
	params.Destination = Destination;
	params.Reset = Reset;
	params.DebugParams = DebugParams;
	params.LineColor = LineColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAINavigation.DonNavigationManager.VisualizeDynamicCollisionListeners
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Listener                       (Parm, ZeroConstructor)
// struct FDoNNavigationQueryData QueryData                      (ConstParm, Parm, OutParm, ReferenceParm)

void ADonNavigationManager::VisualizeDynamicCollisionListeners(const struct FScriptDelegate& Listener, const struct FDoNNavigationQueryData& QueryData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAINavigation.DonNavigationManager.VisualizeDynamicCollisionListeners"));

	ADonNavigationManager_VisualizeDynamicCollisionListeners_Params params;
	params.Listener = Listener;
	params.QueryData = QueryData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAINavigation.DonNavigationManager.StopListeningToDynamicCollisionsForPathIndex
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         ListenerToClear                (Parm, ZeroConstructor)
// struct FDoNNavigationQueryData QueryData                      (ConstParm, Parm, OutParm, ReferenceParm)
// int                            VolumeIndex                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADonNavigationManager::StopListeningToDynamicCollisionsForPathIndex(const struct FScriptDelegate& ListenerToClear, const struct FDoNNavigationQueryData& QueryData, int VolumeIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAINavigation.DonNavigationManager.StopListeningToDynamicCollisionsForPathIndex"));

	ADonNavigationManager_StopListeningToDynamicCollisionsForPathIndex_Params params;
	params.ListenerToClear = ListenerToClear;
	params.QueryData = QueryData;
	params.VolumeIndex = VolumeIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAINavigation.DonNavigationManager.StopListeningToDynamicCollisionsForPath
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         ListenerToClear                (Parm, ZeroConstructor)
// struct FDoNNavigationQueryData QueryData                      (ConstParm, Parm, OutParm, ReferenceParm)

void ADonNavigationManager::StopListeningToDynamicCollisionsForPath(const struct FScriptDelegate& ListenerToClear, const struct FDoNNavigationQueryData& QueryData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAINavigation.DonNavigationManager.StopListeningToDynamicCollisionsForPath"));

	ADonNavigationManager_StopListeningToDynamicCollisionsForPath_Params params;
	params.ListenerToClear = ListenerToClear;
	params.QueryData = QueryData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAINavigation.DonNavigationManager.SchedulePathfindingTask
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Destination                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FDoNNavigationQueryParams QueryParams                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FDoNNavigationDebugParams DebugParams                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FScriptDelegate         ResultHandlerDelegate          (Parm, ZeroConstructor)
// struct FScriptDelegate         DynamicCollisionListener       (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADonNavigationManager::SchedulePathfindingTask(class AActor* Actor, const struct FVector& Destination, const struct FDoNNavigationQueryParams& QueryParams, const struct FDoNNavigationDebugParams& DebugParams, const struct FScriptDelegate& ResultHandlerDelegate, const struct FScriptDelegate& DynamicCollisionListener)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAINavigation.DonNavigationManager.SchedulePathfindingTask"));

	ADonNavigationManager_SchedulePathfindingTask_Params params;
	params.Actor = Actor;
	params.Destination = Destination;
	params.QueryParams = QueryParams;
	params.DebugParams = DebugParams;
	params.ResultHandlerDelegate = ResultHandlerDelegate;
	params.DynamicCollisionListener = DynamicCollisionListener;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAINavigation.DonNavigationManager.ScheduleDynamicCollisionUpdate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     Mesh                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FScriptDelegate         ResultHandler                  (Parm, ZeroConstructor)
// struct FName                   CustomCacheIdentifier          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bReplaceExistingTask           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDisableCacheUsage             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bReloadCollisionCache          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseCheapBoundsCollision       (Parm, ZeroConstructor, IsPlainOldData)
// float                          BoundsScaleFactor              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForceSynchronousExecution     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDrawDebug                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADonNavigationManager::ScheduleDynamicCollisionUpdate(class UPrimitiveComponent* Mesh, const struct FScriptDelegate& ResultHandler, const struct FName& CustomCacheIdentifier, bool bReplaceExistingTask, bool bDisableCacheUsage, bool bReloadCollisionCache, bool bUseCheapBoundsCollision, float BoundsScaleFactor, bool bForceSynchronousExecution, bool bDrawDebug)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAINavigation.DonNavigationManager.ScheduleDynamicCollisionUpdate"));

	ADonNavigationManager_ScheduleDynamicCollisionUpdate_Params params;
	params.Mesh = Mesh;
	params.ResultHandler = ResultHandler;
	params.CustomCacheIdentifier = CustomCacheIdentifier;
	params.bReplaceExistingTask = bReplaceExistingTask;
	params.bDisableCacheUsage = bDisableCacheUsage;
	params.bReloadCollisionCache = bReloadCollisionCache;
	params.bUseCheapBoundsCollision = bUseCheapBoundsCollision;
	params.BoundsScaleFactor = BoundsScaleFactor;
	params.bForceSynchronousExecution = bForceSynchronousExecution;
	params.bDrawDebug = bDrawDebug;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAINavigation.DonNavigationManager.IsMeshBoundsWithinNavigableWorld
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UPrimitiveComponent*     Mesh                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          BoundsScaleFactor              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADonNavigationManager::IsMeshBoundsWithinNavigableWorld(class UPrimitiveComponent* Mesh, float BoundsScaleFactor)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAINavigation.DonNavigationManager.IsMeshBoundsWithinNavigableWorld"));

	ADonNavigationManager_IsMeshBoundsWithinNavigableWorld_Params params;
	params.Mesh = Mesh;
	params.BoundsScaleFactor = BoundsScaleFactor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAINavigation.DonNavigationManager.IsLocationWithinNavigableWorld
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 DesiredLocation                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADonNavigationManager::IsLocationWithinNavigableWorld(const struct FVector& DesiredLocation)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAINavigation.DonNavigationManager.IsLocationWithinNavigableWorld"));

	ADonNavigationManager_IsLocationWithinNavigableWorld_Params params;
	params.DesiredLocation = DesiredLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAINavigation.DonNavigationManager.IsLocationBeneathLandscape
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          LineTraceHeight                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADonNavigationManager::IsLocationBeneathLandscape(const struct FVector& Location, float LineTraceHeight)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAINavigation.DonNavigationManager.IsLocationBeneathLandscape"));

	ADonNavigationManager_IsLocationBeneathLandscape_Params params;
	params.Location = Location;
	params.LineTraceHeight = LineTraceHeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAINavigation.DonNavigationManager.IsDirectPathSweep
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     CollisionComponent             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 Start                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 End                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData)
// bool                           bFindInitialOverlaps           (Parm, ZeroConstructor, IsPlainOldData)
// float                          CollisionShapeInflation        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADonNavigationManager::IsDirectPathSweep(class UPrimitiveComponent* CollisionComponent, const struct FVector& Start, const struct FVector& End, bool bFindInitialOverlaps, float CollisionShapeInflation, struct FHitResult* OutHit)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAINavigation.DonNavigationManager.IsDirectPathSweep"));

	ADonNavigationManager_IsDirectPathSweep_Params params;
	params.CollisionComponent = CollisionComponent;
	params.Start = Start;
	params.End = End;
	params.bFindInitialOverlaps = bFindInitialOverlaps;
	params.CollisionShapeInflation = CollisionShapeInflation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function EmbarkAINavigation.DonNavigationManager.IsDirectPathLineTrace
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Start                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 End                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData)
// TArray<class AActor*>          ActorsToIgnore                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bFindInitialOverlaps           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADonNavigationManager::IsDirectPathLineTrace(const struct FVector& Start, const struct FVector& End, TArray<class AActor*> ActorsToIgnore, bool bFindInitialOverlaps, struct FHitResult* OutHit)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAINavigation.DonNavigationManager.IsDirectPathLineTrace"));

	ADonNavigationManager_IsDirectPathLineTrace_Params params;
	params.Start = Start;
	params.End = End;
	params.ActorsToIgnore = ActorsToIgnore;
	params.bFindInitialOverlaps = bFindInitialOverlaps;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function EmbarkAINavigation.DonNavigationManager.IsDirectPathLineSweep
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     CollisionComponent             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 Start                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 End                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData)
// bool                           bFindInitialOverlaps           (Parm, ZeroConstructor, IsPlainOldData)
// float                          CollisionShapeInflation        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADonNavigationManager::IsDirectPathLineSweep(class UPrimitiveComponent* CollisionComponent, const struct FVector& Start, const struct FVector& End, bool bFindInitialOverlaps, float CollisionShapeInflation, struct FHitResult* OutHit)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAINavigation.DonNavigationManager.IsDirectPathLineSweep"));

	ADonNavigationManager_IsDirectPathLineSweep_Params params;
	params.CollisionComponent = CollisionComponent;
	params.Start = Start;
	params.End = End;
	params.bFindInitialOverlaps = bFindInitialOverlaps;
	params.CollisionShapeInflation = CollisionShapeInflation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function EmbarkAINavigation.DonNavigationManager.HasTask
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADonNavigationManager::HasTask(class AActor* Actor)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAINavigation.DonNavigationManager.HasTask"));

	ADonNavigationManager_HasTask_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAINavigation.DonNavigationManager.FindRandomPointFromActorInNavWorld
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFoundValidResult              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          MaxDesiredAltitude             (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxZAngularDispacement         (Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxAttempts                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ADonNavigationManager::FindRandomPointFromActorInNavWorld(class AActor* Actor, float Distance, float MaxDesiredAltitude, float MaxZAngularDispacement, int MaxAttempts, bool* bFoundValidResult)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAINavigation.DonNavigationManager.FindRandomPointFromActorInNavWorld"));

	ADonNavigationManager_FindRandomPointFromActorInNavWorld_Params params;
	params.Actor = Actor;
	params.Distance = Distance;
	params.MaxDesiredAltitude = MaxDesiredAltitude;
	params.MaxZAngularDispacement = MaxZAngularDispacement;
	params.MaxAttempts = MaxAttempts;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bFoundValidResult != nullptr)
		*bFoundValidResult = params.bFoundValidResult;

	return params.ReturnValue;
}


// Function EmbarkAINavigation.DonNavigationManager.FindRandomPointAroundOriginInNavWorld
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  NavigationActor                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Origin                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFoundValidResult              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          MaxDesiredAltitude             (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxZAngularDispacement         (Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxAttempts                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ADonNavigationManager::FindRandomPointAroundOriginInNavWorld(class AActor* NavigationActor, const struct FVector& Origin, float Distance, float MaxDesiredAltitude, float MaxZAngularDispacement, int MaxAttempts, bool* bFoundValidResult)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAINavigation.DonNavigationManager.FindRandomPointAroundOriginInNavWorld"));

	ADonNavigationManager_FindRandomPointAroundOriginInNavWorld_Params params;
	params.NavigationActor = NavigationActor;
	params.Origin = Origin;
	params.Distance = Distance;
	params.MaxDesiredAltitude = MaxDesiredAltitude;
	params.MaxZAngularDispacement = MaxZAngularDispacement;
	params.MaxAttempts = MaxAttempts;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bFoundValidResult != nullptr)
		*bFoundValidResult = params.bFoundValidResult;

	return params.ReturnValue;
}


// Function EmbarkAINavigation.DonNavigationManager.FindPathSolution_StressTesting
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Destination                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         PathSolutionRaw                (Parm, OutParm, ZeroConstructor)
// TArray<struct FVector>         PathSolutionOptimized          (Parm, OutParm, ZeroConstructor)
// struct FDoNNavigationQueryParams QueryParams                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FDoNNavigationDebugParams DebugParams                    (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADonNavigationManager::FindPathSolution_StressTesting(class AActor* Actor, const struct FVector& Destination, const struct FDoNNavigationQueryParams& QueryParams, const struct FDoNNavigationDebugParams& DebugParams, TArray<struct FVector>* PathSolutionRaw, TArray<struct FVector>* PathSolutionOptimized)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAINavigation.DonNavigationManager.FindPathSolution_StressTesting"));

	ADonNavigationManager_FindPathSolution_StressTesting_Params params;
	params.Actor = Actor;
	params.Destination = Destination;
	params.QueryParams = QueryParams;
	params.DebugParams = DebugParams;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PathSolutionRaw != nullptr)
		*PathSolutionRaw = params.PathSolutionRaw;
	if (PathSolutionOptimized != nullptr)
		*PathSolutionOptimized = params.PathSolutionOptimized;

	return params.ReturnValue;
}


// Function EmbarkAINavigation.DonNavigationManager.Debug_ToggleWorldBoundaryInGame
// (Final, Native, Public, BlueprintCallable)

void ADonNavigationManager::Debug_ToggleWorldBoundaryInGame()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAINavigation.DonNavigationManager.Debug_ToggleWorldBoundaryInGame"));

	ADonNavigationManager_Debug_ToggleWorldBoundaryInGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAINavigation.DonNavigationManager.Debug_DrawVoxelCollisionProfile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     MeshOrPrimitive                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bDrawPersistent                (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)

void ADonNavigationManager::Debug_DrawVoxelCollisionProfile(class UPrimitiveComponent* MeshOrPrimitive, bool bDrawPersistent, float Duration)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAINavigation.DonNavigationManager.Debug_DrawVoxelCollisionProfile"));

	ADonNavigationManager_Debug_DrawVoxelCollisionProfile_Params params;
	params.MeshOrPrimitive = MeshOrPrimitive;
	params.bDrawPersistent = bDrawPersistent;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAINavigation.DonNavigationManager.Debug_DrawVolumesAroundPoint
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            CubeSize                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DrawPersistentLines            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          LineThickness                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoInitializeVolumes         (Parm, ZeroConstructor, IsPlainOldData)

void ADonNavigationManager::Debug_DrawVolumesAroundPoint(const struct FVector& Location, int CubeSize, bool DrawPersistentLines, float Duration, float LineThickness, bool bAutoInitializeVolumes)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAINavigation.DonNavigationManager.Debug_DrawVolumesAroundPoint"));

	ADonNavigationManager_Debug_DrawVolumesAroundPoint_Params params;
	params.Location = Location;
	params.CubeSize = CubeSize;
	params.DrawPersistentLines = DrawPersistentLines;
	params.Duration = Duration;
	params.LineThickness = LineThickness;
	params.bAutoInitializeVolumes = bAutoInitializeVolumes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAINavigation.DonNavigationManager.Debug_DrawAllVolumes
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          LineThickness                  (Parm, ZeroConstructor, IsPlainOldData)

void ADonNavigationManager::Debug_DrawAllVolumes(float LineThickness)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAINavigation.DonNavigationManager.Debug_DrawAllVolumes"));

	ADonNavigationManager_Debug_DrawAllVolumes_Params params;
	params.LineThickness = LineThickness;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAINavigation.DonNavigationManager.Debug_ClearAllVolumes
// (Final, Native, Public, BlueprintCallable)

void ADonNavigationManager::Debug_ClearAllVolumes()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAINavigation.DonNavigationManager.Debug_ClearAllVolumes"));

	ADonNavigationManager_Debug_ClearAllVolumes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAINavigation.DonNavigationManager.ConstructBuilder
// (Final, Native, Public, BlueprintCallable)

void ADonNavigationManager::ConstructBuilder()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAINavigation.DonNavigationManager.ConstructBuilder"));

	ADonNavigationManager_ConstructBuilder_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAINavigation.DonNavigationManager.ClampLocationToNavigableWorld
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 DesiredLocation                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ADonNavigationManager::ClampLocationToNavigableWorld(const struct FVector& DesiredLocation)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAINavigation.DonNavigationManager.ClampLocationToNavigableWorld"));

	ADonNavigationManager_ClampLocationToNavigableWorld_Params params;
	params.DesiredLocation = DesiredLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAINavigation.DonNavigationManager.CanNavigate
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADonNavigationManager::CanNavigate(const struct FVector& Location)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAINavigation.DonNavigationManager.CanNavigate"));

	ADonNavigationManager_CanNavigate_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAINavigation.DonNavigationManager.AbortPathfindingTask
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void ADonNavigationManager::AbortPathfindingTask(class AActor* Actor)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAINavigation.DonNavigationManager.AbortPathfindingTask"));

	ADonNavigationManager_AbortPathfindingTask_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAINavigation.DonNavigator.OnNextSegment
// (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 NextPoint                      (Parm, ZeroConstructor, IsPlainOldData)

void UDonNavigator::OnNextSegment(const struct FVector& NextPoint)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAINavigation.DonNavigator.OnNextSegment"));

	UDonNavigator_OnNextSegment_Params params;
	params.NextPoint = NextPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAINavigation.DonNavigator.OnLocomotionEnd
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bLocomotionSuccess             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDonNavigator::OnLocomotionEnd(bool bLocomotionSuccess)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAINavigation.DonNavigator.OnLocomotionEnd"));

	UDonNavigator_OnLocomotionEnd_Params params;
	params.bLocomotionSuccess = bLocomotionSuccess;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAINavigation.DonNavigator.OnLocomotionBegin
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UDonNavigator::OnLocomotionBegin()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAINavigation.DonNavigator.OnLocomotionBegin"));

	UDonNavigator_OnLocomotionBegin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAINavigation.DonNavigator.OnLocomotionAbort
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UDonNavigator::OnLocomotionAbort()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAINavigation.DonNavigator.OnLocomotionAbort"));

	UDonNavigator_OnLocomotionAbort_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAINavigation.DonNavigator.AddMovementInputCustom
// (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 WorldDirection                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          ScaleValue                     (Parm, ZeroConstructor, IsPlainOldData)

void UDonNavigator::AddMovementInputCustom(const struct FVector& WorldDirection, float ScaleValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAINavigation.DonNavigator.AddMovementInputCustom"));

	UDonNavigator_AddMovementInputCustom_Params params;
	params.WorldDirection = WorldDirection;
	params.ScaleValue = ScaleValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAINavigation.HpaNavigation.LoadData
// (Final, Native, Public, BlueprintCallable)

void AHpaNavigation::LoadData()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAINavigation.HpaNavigation.LoadData"));

	AHpaNavigation_LoadData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAINavigation.HpaNavigation.GetCollisionInStraightLine
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Start                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 End                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OutCollision                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AHpaNavigation::GetCollisionInStraightLine(const struct FVector& Start, const struct FVector& End, struct FVector* OutCollision)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAINavigation.HpaNavigation.GetCollisionInStraightLine"));

	AHpaNavigation_GetCollisionInStraightLine_Params params;
	params.Start = Start;
	params.End = End;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutCollision != nullptr)
		*OutCollision = params.OutCollision;

	return params.ReturnValue;
}


// Function EmbarkAINavigation.HpaNavigation.GetClosestVoxel
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 WorldLocation                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OutVoxelLocation               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           OutNavigable                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AHpaNavigation::GetClosestVoxel(const struct FVector& WorldLocation, struct FVector* OutVoxelLocation, bool* OutNavigable)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAINavigation.HpaNavigation.GetClosestVoxel"));

	AHpaNavigation_GetClosestVoxel_Params params;
	params.WorldLocation = WorldLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutVoxelLocation != nullptr)
		*OutVoxelLocation = params.OutVoxelLocation;
	if (OutNavigable != nullptr)
		*OutNavigable = params.OutNavigable;

	return params.ReturnValue;
}


// Function EmbarkAINavigation.HpaNavigation.FindGroundVoxelLocationInWorld
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// float                          WorldLocationX                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          WorldLocationY                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AHpaNavigation::FindGroundVoxelLocationInWorld(float WorldLocationX, float WorldLocationY)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAINavigation.HpaNavigation.FindGroundVoxelLocationInWorld"));

	AHpaNavigation_FindGroundVoxelLocationInWorld_Params params;
	params.WorldLocationX = WorldLocationX;
	params.WorldLocationY = WorldLocationY;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAINavigation.HpaNavigation.FindGroundVoxelLocationFromPoint
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 WorldLocation                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AHpaNavigation::FindGroundVoxelLocationFromPoint(const struct FVector& WorldLocation)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAINavigation.HpaNavigation.FindGroundVoxelLocationFromPoint"));

	AHpaNavigation_FindGroundVoxelLocationFromPoint_Params params;
	params.WorldLocation = WorldLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAINavigation.HpaNavigation.FindClosestNavigablePositionInRange
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 WorldLocation                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            Range                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OutLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AHpaNavigation::FindClosestNavigablePositionInRange(const struct FVector& WorldLocation, int Range, struct FVector* OutLocation)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAINavigation.HpaNavigation.FindClosestNavigablePositionInRange"));

	AHpaNavigation_FindClosestNavigablePositionInRange_Params params;
	params.WorldLocation = WorldLocation;
	params.Range = Range;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLocation != nullptr)
		*OutLocation = params.OutLocation;

	return params.ReturnValue;
}


// Function EmbarkAINavigation.HpaNavigation.FindBidirectionalPath_DebugStressTest
// (Final, Native, Private, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Origin                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Destination                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         OutPathSolution                (Parm, OutParm, ZeroConstructor)
// int                            OutOpenedNodes                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Optimize                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AHpaNavigation::FindBidirectionalPath_DebugStressTest(const struct FVector& Origin, const struct FVector& Destination, bool Optimize, TArray<struct FVector>* OutPathSolution, int* OutOpenedNodes)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAINavigation.HpaNavigation.FindBidirectionalPath_DebugStressTest"));

	AHpaNavigation_FindBidirectionalPath_DebugStressTest_Params params;
	params.Origin = Origin;
	params.Destination = Destination;
	params.Optimize = Optimize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPathSolution != nullptr)
		*OutPathSolution = params.OutPathSolution;
	if (OutOpenedNodes != nullptr)
		*OutOpenedNodes = params.OutOpenedNodes;

	return params.ReturnValue;
}


// Function EmbarkAINavigation.HpaNavigation.FindBidirectionalPath_DebugStep
// (Final, Native, Private, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Origin                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Destination                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            OutOpenedNodes                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ForwardNode                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 BackwardNode                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AHpaNavigation::FindBidirectionalPath_DebugStep(const struct FVector& Origin, const struct FVector& Destination, int* OutOpenedNodes, struct FVector* ForwardNode, struct FVector* BackwardNode)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAINavigation.HpaNavigation.FindBidirectionalPath_DebugStep"));

	AHpaNavigation_FindBidirectionalPath_DebugStep_Params params;
	params.Origin = Origin;
	params.Destination = Destination;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutOpenedNodes != nullptr)
		*OutOpenedNodes = params.OutOpenedNodes;
	if (ForwardNode != nullptr)
		*ForwardNode = params.ForwardNode;
	if (BackwardNode != nullptr)
		*BackwardNode = params.BackwardNode;

	return params.ReturnValue;
}


// Function EmbarkAINavigation.HpaNavigation.CanPathInStraightLine
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Start                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 End                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AHpaNavigation::CanPathInStraightLine(const struct FVector& Start, const struct FVector& End)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAINavigation.HpaNavigation.CanPathInStraightLine"));

	AHpaNavigation_CanPathInStraightLine_Params params;
	params.Start = Start;
	params.End = End;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAINavigation.HpaNavigationManager.UnregisterDynamicObstacle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UHpaNavigationDynamicObstacleComponent* Obstacle                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AHpaNavigationManager::UnregisterDynamicObstacle(class UHpaNavigationDynamicObstacleComponent* Obstacle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAINavigation.HpaNavigationManager.UnregisterDynamicObstacle"));

	AHpaNavigationManager_UnregisterDynamicObstacle_Params params;
	params.Obstacle = Obstacle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAINavigation.HpaNavigationManager.SelectBestGraph
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// class AHpaNavigation*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AHpaNavigation* AHpaNavigationManager::SelectBestGraph(float Radius)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAINavigation.HpaNavigationManager.SelectBestGraph"));

	AHpaNavigationManager_SelectBestGraph_Params params;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAINavigation.HpaNavigationManager.SchedulePathfindingTaskWithOrigin
// (Final, Native, Public, HasDefaults)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Origin                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Destination                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FHpaNavigationQueryParams QueryParams                    (Parm)
// struct FScriptDelegate         ResultHandlerDelegate          (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AHpaNavigationManager::SchedulePathfindingTaskWithOrigin(class AActor* Actor, const struct FVector& Origin, const struct FVector& Destination, const struct FHpaNavigationQueryParams& QueryParams, const struct FScriptDelegate& ResultHandlerDelegate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAINavigation.HpaNavigationManager.SchedulePathfindingTaskWithOrigin"));

	AHpaNavigationManager_SchedulePathfindingTaskWithOrigin_Params params;
	params.Actor = Actor;
	params.Origin = Origin;
	params.Destination = Destination;
	params.QueryParams = QueryParams;
	params.ResultHandlerDelegate = ResultHandlerDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAINavigation.HpaNavigationManager.SchedulePathfindingTask
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Destination                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FHpaNavigationQueryParams QueryParams                    (Parm)
// struct FScriptDelegate         ResultHandlerDelegate          (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AHpaNavigationManager::SchedulePathfindingTask(class AActor* Actor, const struct FVector& Destination, const struct FHpaNavigationQueryParams& QueryParams, const struct FScriptDelegate& ResultHandlerDelegate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAINavigation.HpaNavigationManager.SchedulePathfindingTask"));

	AHpaNavigationManager_SchedulePathfindingTask_Params params;
	params.Actor = Actor;
	params.Destination = Destination;
	params.QueryParams = QueryParams;
	params.ResultHandlerDelegate = ResultHandlerDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAINavigation.HpaNavigationManager.RegisterDynamicObstacle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UHpaNavigationDynamicObstacleComponent* Obstacle                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AHpaNavigationManager::RegisterDynamicObstacle(class UHpaNavigationDynamicObstacleComponent* Obstacle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAINavigation.HpaNavigationManager.RegisterDynamicObstacle"));

	AHpaNavigationManager_RegisterDynamicObstacle_Params params;
	params.Obstacle = Obstacle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAINavigation.HpaNavigationManager.RegenerateArea
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Origin                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 BoxExtent                      (Parm, ZeroConstructor, IsPlainOldData)

void AHpaNavigationManager::RegenerateArea(const struct FVector& Origin, const struct FVector& BoxExtent)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAINavigation.HpaNavigationManager.RegenerateArea"));

	AHpaNavigationManager_RegenerateArea_Params params;
	params.Origin = Origin;
	params.BoxExtent = BoxExtent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAINavigation.HpaNavigationManager.HasTask
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AHpaNavigationManager::HasTask(class AActor* Actor)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAINavigation.HpaNavigationManager.HasTask"));

	AHpaNavigationManager_HasTask_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAINavigation.HpaNavigationManager.FindMultiplePaths
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Origin                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         Destinations                   (Parm, ZeroConstructor)
// float                          CollisionRadius                (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FPathResult>     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FPathResult> AHpaNavigationManager::FindMultiplePaths(const struct FVector& Origin, TArray<struct FVector> Destinations, float CollisionRadius)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAINavigation.HpaNavigationManager.FindMultiplePaths"));

	AHpaNavigationManager_FindMultiplePaths_Params params;
	params.Origin = Origin;
	params.Destinations = Destinations;
	params.CollisionRadius = CollisionRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAINavigation.HpaNavigationManager.FindGroundVoxelLocationInWorld
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// float                          WorldLocationX                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          WorldLocationY                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          CollisionRadius                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AHpaNavigationManager::FindGroundVoxelLocationInWorld(float WorldLocationX, float WorldLocationY, float CollisionRadius)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAINavigation.HpaNavigationManager.FindGroundVoxelLocationInWorld"));

	AHpaNavigationManager_FindGroundVoxelLocationInWorld_Params params;
	params.WorldLocationX = WorldLocationX;
	params.WorldLocationY = WorldLocationY;
	params.CollisionRadius = CollisionRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAINavigation.HpaNavigationManager.FindGroundVoxelLocationFromPoint
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 WorldLocation                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          CollisionRadius                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AHpaNavigationManager::FindGroundVoxelLocationFromPoint(const struct FVector& WorldLocation, float CollisionRadius)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAINavigation.HpaNavigationManager.FindGroundVoxelLocationFromPoint"));

	AHpaNavigationManager_FindGroundVoxelLocationFromPoint_Params params;
	params.WorldLocation = WorldLocation;
	params.CollisionRadius = CollisionRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAINavigation.HpaNavigationManager.AbortPathfindingTask
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void AHpaNavigationManager::AbortPathfindingTask(class AActor* Actor)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAINavigation.HpaNavigationManager.AbortPathfindingTask"));

	AHpaNavigationManager_AbortPathfindingTask_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
