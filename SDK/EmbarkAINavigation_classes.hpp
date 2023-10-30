#pragma once

//   SDK By:if

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace sdk
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class EmbarkAINavigation.DonNavigationHelper
// 0x0000 (0x0028 - 0x0028)
class UDonNavigationHelper : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAINavigation.DonNavigationHelper"));
		return ptr;
	}


	class AHpaNavigationManager* STATIC_HpaNavigationManager(class UObject* WorldContextObject);//Offset:Discovery.exe+0x1C86A80
	class ADonNavigationManager* STATIC_DonNavigationManagerForActor(class AActor* Actor);//Offset:Discovery.exe+0x1C869E0
	class ADonNavigationManager* STATIC_DonNavigationManager(class UObject* WorldContextObject);//Offset:Discovery.exe+0x1C86B20
};


// Class EmbarkAINavigation.DonNavigationManager
// 0x6B18 (0x6DE0 - 0x02C8)
class ADonNavigationManager : public AActor
{
public:
	unsigned char                                      UnknownData00[0x1FC];                                     // 0x02C8(0x01FC) MISSED OFFSET
	bool                                               bIsUnbound;                                               // 0x04C4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x04C5(0x0003) MISSED OFFSET
	class USceneComponent*                             SceneComponent;                                           // 0x04C8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UBillboardComponent*                         Billboard;                                                // 0x04D0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x04D8(0x0010) MISSED OFFSET
	float                                              VoxelSize;                                                // 0x04E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                XGridSize;                                                // 0x04EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                YGridSize;                                                // 0x04F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ZGridSize;                                                // 0x04F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x10];                                      // 0x04F8(0x0010) MISSED OFFSET
	TEnumAsByte<ECollisionChannel>                     ObstacleQueryChannel;                                     // 0x0508(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0509(0x0007) MISSED OFFSET
	TArray<class AActor*>                              ActorsToIgnoreForCollision;                               // 0x0510(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      AutoCorrectionGuessList;                                  // 0x0520(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              UnrealPhyxPenetrationDepth;                               // 0x0530(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PerformCollisionChecksOnStartup;                          // 0x0534(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0535(0x0003) MISSED OFFSET
	int                                                MaxPathSolverIterationsPerTick;                           // 0x0538(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxCollisionSolverIterationsPerTick;                      // 0x053C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x8];                                       // 0x0540(0x0008) MISSED OFFSET
	int                                                MaxPathSolverIterationsPerTick_Unbound;                   // 0x0548(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxCollisionSolverIterationsPerTick_Unbound;              // 0x054C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x8];                                       // 0x0550(0x0008) MISSED OFFSET
	class UBoxComponent*                               WorldBoundaryVisualizer;                                  // 0x0558(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bDisplayWorldBoundary;                                    // 0x0560(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDisplayWorldBoundaryInGame;                              // 0x0561(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x2];                                       // 0x0562(0x0002) MISSED OFFSET
	float                                              DebugVoxelsLineThickness;                                 // 0x0564(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRunDebugValidationsForDynamicCollisions;                 // 0x0568(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x66EF];                                    // 0x0569(0x66EF) MISSED OFFSET
	unsigned char                                      UnknownData10[0x50];                                      // 0x0569(0x0050) UNKNOWN PROPERTY: ActiveNavigationTaskOwners
	unsigned char                                      UnknownData11[0x50];                                      // 0x6CA8(0x0050) UNKNOWN PROPERTY: ActiveCollisionTaskOwners
	unsigned char                                      UnknownData12[0xE8];                                      // 0x6CF8(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAINavigation.DonNavigationManager"));
		return ptr;
	}


	void VisualizeNAVResult(TArray<struct FVector> PathSolution, const struct FVector& Source, const struct FVector& Destination, bool Reset, const struct FDoNNavigationDebugParams& DebugParams, const struct FColor& LineColor);//Offset:Discovery.exe+0x1C87DA0
	void VisualizeDynamicCollisionListeners(const struct FScriptDelegate& Listener, const struct FDoNNavigationQueryData& QueryData);//Offset:Discovery.exe+0x1C87AA0
	void StopListeningToDynamicCollisionsForPathIndex(const struct FScriptDelegate& ListenerToClear, const struct FDoNNavigationQueryData& QueryData, int VolumeIndex);//Offset:Discovery.exe+0x1C894F0
	void StopListeningToDynamicCollisionsForPath(const struct FScriptDelegate& ListenerToClear, const struct FDoNNavigationQueryData& QueryData);//Offset:Discovery.exe+0x1C89840
	bool SchedulePathfindingTask(class AActor* Actor, const struct FVector& Destination, const struct FDoNNavigationQueryParams& QueryParams, const struct FDoNNavigationDebugParams& DebugParams, const struct FScriptDelegate& ResultHandlerDelegate, const struct FScriptDelegate& DynamicCollisionListener);//Offset:Discovery.exe+0x1C8A0E0
	bool ScheduleDynamicCollisionUpdate(class UPrimitiveComponent* Mesh, const struct FScriptDelegate& ResultHandler, const struct FName& CustomCacheIdentifier, bool bReplaceExistingTask, bool bDisableCacheUsage, bool bReloadCollisionCache, bool bUseCheapBoundsCollision, float BoundsScaleFactor, bool bForceSynchronousExecution, bool bDrawDebug);//Offset:Discovery.exe+0x1C89B40
	bool IsMeshBoundsWithinNavigableWorld(class UPrimitiveComponent* Mesh, float BoundsScaleFactor);//Offset:Discovery.exe+0x1C88070
	bool IsLocationWithinNavigableWorld(const struct FVector& DesiredLocation);//Offset:Discovery.exe+0x1C8A410
	bool IsLocationBeneathLandscape(const struct FVector& Location, float LineTraceHeight);//Offset:Discovery.exe+0x1C88160
	bool IsDirectPathSweep(class UPrimitiveComponent* CollisionComponent, const struct FVector& Start, const struct FVector& End, bool bFindInitialOverlaps, float CollisionShapeInflation, struct FHitResult* OutHit);//Offset:Discovery.exe+0x1C88E60
	bool IsDirectPathLineTrace(const struct FVector& Start, const struct FVector& End, TArray<class AActor*> ActorsToIgnore, bool bFindInitialOverlaps, struct FHitResult* OutHit);//Offset:Discovery.exe+0x1C88B40
	bool IsDirectPathLineSweep(class UPrimitiveComponent* CollisionComponent, const struct FVector& Start, const struct FVector& End, bool bFindInitialOverlaps, float CollisionShapeInflation, struct FHitResult* OutHit);//Offset:Discovery.exe+0x1C887D0
	bool HasTask(class AActor* Actor);//Offset:Discovery.exe+0x1C89F40
	struct FVector FindRandomPointFromActorInNavWorld(class AActor* Actor, float Distance, float MaxDesiredAltitude, float MaxZAngularDispacement, int MaxAttempts, bool* bFoundValidResult);//Offset:Discovery.exe+0x1C88570
	struct FVector FindRandomPointAroundOriginInNavWorld(class AActor* NavigationActor, const struct FVector& Origin, float Distance, float MaxDesiredAltitude, float MaxZAngularDispacement, int MaxAttempts, bool* bFoundValidResult);//Offset:Discovery.exe+0x1C88260
	bool FindPathSolution_StressTesting(class AActor* Actor, const struct FVector& Destination, const struct FDoNNavigationQueryParams& QueryParams, const struct FDoNNavigationDebugParams& DebugParams, TArray<struct FVector>* PathSolutionRaw, TArray<struct FVector>* PathSolutionOptimized);//Offset:Discovery.exe+0x1C891D0
	void Debug_ToggleWorldBoundaryInGame();//Offset:Discovery.exe+0x1C8ACA0
	void Debug_DrawVoxelCollisionProfile(class UPrimitiveComponent* MeshOrPrimitive, bool bDrawPersistent, float Duration);//Offset:Discovery.exe+0x1C8A880
	void Debug_DrawVolumesAroundPoint(const struct FVector& Location, int CubeSize, bool DrawPersistentLines, float Duration, float LineThickness, bool bAutoInitializeVolumes);//Offset:Discovery.exe+0x1C8A9C0
	void Debug_DrawAllVolumes(float LineThickness);//Offset:Discovery.exe+0x1C8AC00
	void Debug_ClearAllVolumes();//Offset:Discovery.exe+0x1C8A860
	void ConstructBuilder();//Offset:Discovery.exe+0x1C8ACC0
	struct FVector ClampLocationToNavigableWorld(const struct FVector& DesiredLocation);//Offset:Discovery.exe+0x1C8A620
	bool CanNavigate(const struct FVector& Location);//Offset:Discovery.exe+0x1C879F0
	void AbortPathfindingTask(class AActor* Actor);//Offset:Discovery.exe+0x1C8A040
};


// Class EmbarkAINavigation.DonNavigationManagerUnbound
// 0x0000 (0x6DE0 - 0x6DE0)
class ADonNavigationManagerUnbound : public ADonNavigationManager
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAINavigation.DonNavigationManagerUnbound"));
		return ptr;
	}

};


// Class EmbarkAINavigation.DonNavigator
// 0x0000 (0x0028 - 0x0028)
class UDonNavigator : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAINavigation.DonNavigator"));
		return ptr;
	}


	void OnNextSegment(const struct FVector& NextPoint);//Offset:Discovery.exe+0x1C8BCC0
	void OnLocomotionEnd(bool bLocomotionSuccess);//Offset:Discovery.exe+0x1C8BD80
	void OnLocomotionBegin();//Offset:Discovery.exe+0x1C8BE20
	void OnLocomotionAbort();//Offset:Discovery.exe+0x1C8BD60
	void AddMovementInputCustom(const struct FVector& WorldDirection, float ScaleValue);//Offset:Discovery.exe+0x1C8BE40
};


// Class EmbarkAINavigation.HpaNavigation
// 0x0450 (0x0718 - 0x02C8)
class AHpaNavigation : public AActor
{
public:
	class USceneComponent*                             SceneComponent;                                           // 0x02C8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               WorldBoundaryVisualizer;                                  // 0x02D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                VoxelSize;                                                // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                XGridSize;                                                // 0x02DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                YGridSize;                                                // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ZGridSize;                                                // 0x02E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseDiagonalMovementVolumes;                              // 0x02E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseDiagonalMovementVoxels;                               // 0x02E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x02EA(0x0002) MISSED OFFSET
	float                                              VoxelVoxelCost;                                           // 0x02EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VoxelVolumeCost;                                          // 0x02F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VolumeVoxelCost;                                          // 0x02F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VolumeVolumeCost;                                         // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02FC(0x0004) MISSED OFFSET
	class UHpaVoxelData*                               Data;                                                     // 0x0300(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDisplayWorldBoundary;                                    // 0x0308(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0309(0x0003) MISSED OFFSET
	struct FIntVector                                  WorldOrigin;                                              // 0x030C(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	struct FIntVector                                  GridMax;                                                  // 0x0318(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	int                                                VolumeSize;                                               // 0x0324(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	TArray<uint64_t>                                   VoxelData;                                                // 0x0328(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst)
	unsigned char                                      UnknownData03[0x100];                                     // 0x0338(0x0100) MISSED OFFSET
	class AActor*                                      DebugOrigin;                                              // 0x0438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DebugDestination;                                         // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2D0];                                     // 0x0448(0x02D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAINavigation.HpaNavigation"));
		return ptr;
	}


	void LoadData();//Offset:Discovery.exe+0x1C8CC60
	bool GetCollisionInStraightLine(const struct FVector& Start, const struct FVector& End, struct FVector* OutCollision);//Offset:Discovery.exe+0x1C8CC80
	bool GetClosestVoxel(const struct FVector& WorldLocation, struct FVector* OutVoxelLocation, bool* OutNavigable);//Offset:Discovery.exe+0x1C8CF00
	struct FVector FindGroundVoxelLocationInWorld(float WorldLocationX, float WorldLocationY);//Offset:Discovery.exe+0x1C8D060
	struct FVector FindGroundVoxelLocationFromPoint(const struct FVector& WorldLocation);//Offset:Discovery.exe+0x1C8D160
	bool FindClosestNavigablePositionInRange(const struct FVector& WorldLocation, int Range, struct FVector* OutLocation);//Offset:Discovery.exe+0x1C8D220
	bool FindBidirectionalPath_DebugStressTest(const struct FVector& Origin, const struct FVector& Destination, bool Optimize, TArray<struct FVector>* OutPathSolution, int* OutOpenedNodes);//Offset:Discovery.exe+0x1C8C7C0
	bool FindBidirectionalPath_DebugStep(const struct FVector& Origin, const struct FVector& Destination, int* OutOpenedNodes, struct FVector* ForwardNode, struct FVector* BackwardNode);//Offset:Discovery.exe+0x1C8CA10
	bool CanPathInStraightLine(const struct FVector& Start, const struct FVector& End);//Offset:Discovery.exe+0x1C8CDF0
};


// Class EmbarkAINavigation.HpaNavigationDynamicObstacleComponent
// 0x0038 (0x00F0 - 0x00B8)
class UHpaNavigationDynamicObstacleComponent : public UActorComponent
{
public:
	struct FBox                                        ObstacleDimensions;                                       // 0x00B8(0x0038) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAINavigation.HpaNavigationDynamicObstacleComponent"));
		return ptr;
	}

};


// Class EmbarkAINavigation.HpaNavigationStaticObstacleComponent
// 0x0000 (0x00B8 - 0x00B8)
class UHpaNavigationStaticObstacleComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAINavigation.HpaNavigationStaticObstacleComponent"));
		return ptr;
	}

};


// Class EmbarkAINavigation.HpaNavigationManager
// 0xDA18 (0xDCE0 - 0x02C8)
class AHpaNavigationManager : public AActor
{
public:
	int                                                MaxNodesPushedOntoOpenSetEachFrame;                       // 0x02C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxSimultaniousTasks;                                     // 0x02CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DynamicObstacleUpdateTime;                                // 0x02D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02D4(0x0004) MISSED OFFSET
	TArray<class AHpaNavigation*>                      NavigationGraphs;                                         // 0x02D8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0xD9A0];                                    // 0x02E8(0xD9A0) MISSED OFFSET
	unsigned char                                      UnknownData02[0x50];                                      // 0x02E8(0x0050) UNKNOWN PROPERTY: ActiveNavigationTaskOwners
	unsigned char                                      UnknownData03[0x8];                                       // 0xDCD8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAINavigation.HpaNavigationManager"));
		return ptr;
	}


	void UnregisterDynamicObstacle(class UHpaNavigationDynamicObstacleComponent* Obstacle);//Offset:Discovery.exe+0x1C8E420
	class AHpaNavigation* SelectBestGraph(float Radius);//Offset:Discovery.exe+0x1C8DDF0
	bool SchedulePathfindingTaskWithOrigin(class AActor* Actor, const struct FVector& Origin, const struct FVector& Destination, const struct FHpaNavigationQueryParams& QueryParams, const struct FScriptDelegate& ResultHandlerDelegate);//Offset:Discovery.exe+0x1C8DE90
	bool SchedulePathfindingTask(class AActor* Actor, const struct FVector& Destination, const struct FHpaNavigationQueryParams& QueryParams, const struct FScriptDelegate& ResultHandlerDelegate);//Offset:Discovery.exe+0x1C8E190
	void RegisterDynamicObstacle(class UHpaNavigationDynamicObstacleComponent* Obstacle);//Offset:Discovery.exe+0x1C8E4C0
	void RegenerateArea(const struct FVector& Origin, const struct FVector& BoxExtent);//Offset:Discovery.exe+0x1C8DCE0
	bool HasTask(class AActor* Actor);//Offset:Discovery.exe+0x1C8E560
	TArray<struct FPathResult> FindMultiplePaths(const struct FVector& Origin, TArray<struct FVector> Destinations, float CollisionRadius);//Offset:Discovery.exe+0x1C8E660
	struct FVector FindGroundVoxelLocationInWorld(float WorldLocationX, float WorldLocationY, float CollisionRadius);//Offset:Discovery.exe+0x1C8E8D0
	struct FVector FindGroundVoxelLocationFromPoint(const struct FVector& WorldLocation, float CollisionRadius);//Offset:Discovery.exe+0x1C8EA20
	void AbortPathfindingTask(class AActor* Actor);//Offset:Discovery.exe+0x1C8EB30
};


// Class EmbarkAINavigation.HpaVoxelData
// 0x0030 (0x0060 - 0x0030)
class UHpaVoxelData : public UDataAsset
{
public:
	TArray<uint64_t>                                   Data;                                                     // 0x0030(0x0010) (ZeroConstructor)
	float                                              VoxelSize;                                                // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FIntVector                                  WorldOrigin;                                              // 0x0044(0x000C) (ZeroConstructor, IsPlainOldData)
	int                                                XGridSize;                                                // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                YGridSize;                                                // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ZGridSize;                                                // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAINavigation.HpaVoxelData"));
		return ptr;
	}

};


// Class EmbarkAINavigation.HpaTestingPawn
// 0x0048 (0x0390 - 0x0348)
class AHpaTestingPawn : public APawn
{
public:
	class USceneComponent*                             SceneComponent;                                           // 0x0348(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	enum class EHpaGraphSize                           GraphSize;                                                // 0x0350(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0351(0x0003) MISSED OFFSET
	int                                                DrawSize;                                                 // 0x0354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FColor                                      Color;                                                    // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x035C(0x0004) MISSED OFFSET
	class AHpaNavigationManager*                       NavManager;                                               // 0x0360(0x0008) (ZeroConstructor, IsPlainOldData)
	class AHpaNavigation*                              CurrentNavGraph;                                          // 0x0368(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x20];                                      // 0x0370(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAINavigation.HpaTestingPawn"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
