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

// Class NavigationSystem.NavigationData
// 0x0218 (0x04E0 - 0x02C8)
class ANavigationData : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02C8(0x0008) MISSED OFFSET
	class UPrimitiveComponent*                         RenderingComp;                                            // 0x02D0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData)
	struct FNavDataConfig                              NavDataConfig;                                            // 0x02D8(0x0088)
	unsigned char                                      bEnableDrawing : 1;                                       // 0x0360(0x0001) (Edit, Transient)
	unsigned char                                      bForceRebuildOnLoad : 1;                                  // 0x0360(0x0001) (Edit, Config)
	unsigned char                                      bAutoDestroyWhenNoNavigation : 1;                         // 0x0360(0x0001) (Edit, Config)
	unsigned char                                      bCanBeMainNavData : 1;                                    // 0x0360(0x0001) (Edit, Config)
	unsigned char                                      bCanSpawnOnRebuild : 1;                                   // 0x0360(0x0001) (Edit, Config, EditConst)
	unsigned char                                      bRebuildAtRuntime : 1;                                    // 0x0360(0x0001) (Config, Deprecated)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0361(0x0003) MISSED OFFSET
	enum class ERuntimeGenerationType                  RuntimeGeneration;                                        // 0x0364(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0365(0x0003) MISSED OFFSET
	float                                              ObservedPathsTickInterval;                                // 0x0368(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	uint32_t                                           DataVersion;                                              // 0x036C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x108];                                     // 0x0370(0x0108) MISSED OFFSET
	TArray<struct FSupportedAreaData>                  SupportedAreas;                                           // 0x0478(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData04[0x58];                                      // 0x0488(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class NavigationSystem.NavigationData"));
		return ptr;
	}

};


// Class NavigationSystem.AbstractNavData
// 0x0000 (0x04E0 - 0x04E0)
class AAbstractNavData : public ANavigationData
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class NavigationSystem.AbstractNavData"));
		return ptr;
	}

};


// Class NavigationSystem.CrowdManagerBase
// 0x0000 (0x0028 - 0x0028)
class UCrowdManagerBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class NavigationSystem.CrowdManagerBase"));
		return ptr;
	}

};


// Class NavigationSystem.NavArea
// 0x0018 (0x0048 - 0x0030)
class UNavArea : public UNavAreaBase
{
public:
	float                                              DefaultCost;                                              // 0x0030(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              FixedAreaEnteringCost;                                    // 0x0034(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FColor                                      DrawColor;                                                // 0x0038(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FNavAgentSelector                           SupportedAgents;                                          // 0x003C(0x0004) (Edit, Config)
	unsigned char                                      bSupportsAgent0 : 1;                                      // 0x0040(0x0001) (Config)
	unsigned char                                      bSupportsAgent1 : 1;                                      // 0x0040(0x0001) (Config)
	unsigned char                                      bSupportsAgent2 : 1;                                      // 0x0040(0x0001) (Config)
	unsigned char                                      bSupportsAgent3 : 1;                                      // 0x0040(0x0001) (Config)
	unsigned char                                      bSupportsAgent4 : 1;                                      // 0x0040(0x0001) (Config)
	unsigned char                                      bSupportsAgent5 : 1;                                      // 0x0040(0x0001) (Config)
	unsigned char                                      bSupportsAgent6 : 1;                                      // 0x0040(0x0001) (Config)
	unsigned char                                      bSupportsAgent7 : 1;                                      // 0x0040(0x0001) (Config)
	unsigned char                                      bSupportsAgent8 : 1;                                      // 0x0041(0x0001) (Config)
	unsigned char                                      bSupportsAgent9 : 1;                                      // 0x0041(0x0001) (Config)
	unsigned char                                      bSupportsAgent10 : 1;                                     // 0x0041(0x0001) (Config)
	unsigned char                                      bSupportsAgent11 : 1;                                     // 0x0041(0x0001) (Config)
	unsigned char                                      bSupportsAgent12 : 1;                                     // 0x0041(0x0001) (Config)
	unsigned char                                      bSupportsAgent13 : 1;                                     // 0x0041(0x0001) (Config)
	unsigned char                                      bSupportsAgent14 : 1;                                     // 0x0041(0x0001) (Config)
	unsigned char                                      bSupportsAgent15 : 1;                                     // 0x0041(0x0001) (Config)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0042(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class NavigationSystem.NavArea"));
		return ptr;
	}

};


// Class NavigationSystem.NavAreaMeta
// 0x0000 (0x0048 - 0x0048)
class UNavAreaMeta : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class NavigationSystem.NavAreaMeta"));
		return ptr;
	}

};


// Class NavigationSystem.NavAreaMeta_SwitchByAgent
// 0x0080 (0x00C8 - 0x0048)
class UNavAreaMeta_SwitchByAgent : public UNavAreaMeta
{
public:
	class UClass*                                      Agent0Area;                                               // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent1Area;                                               // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent2Area;                                               // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent3Area;                                               // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent4Area;                                               // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent5Area;                                               // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent6Area;                                               // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent7Area;                                               // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent8Area;                                               // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent9Area;                                               // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent10Area;                                              // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent11Area;                                              // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent12Area;                                              // 0x00A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent13Area;                                              // 0x00B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent14Area;                                              // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent15Area;                                              // 0x00C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class NavigationSystem.NavAreaMeta_SwitchByAgent"));
		return ptr;
	}

};


// Class NavigationSystem.NavArea_Default
// 0x0000 (0x0048 - 0x0048)
class UNavArea_Default : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class NavigationSystem.NavArea_Default"));
		return ptr;
	}

};


// Class NavigationSystem.NavArea_LowHeight
// 0x0000 (0x0048 - 0x0048)
class UNavArea_LowHeight : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class NavigationSystem.NavArea_LowHeight"));
		return ptr;
	}

};


// Class NavigationSystem.NavArea_Null
// 0x0000 (0x0048 - 0x0048)
class UNavArea_Null : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class NavigationSystem.NavArea_Null"));
		return ptr;
	}

};


// Class NavigationSystem.NavArea_Obstacle
// 0x0000 (0x0048 - 0x0048)
class UNavArea_Obstacle : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class NavigationSystem.NavArea_Obstacle"));
		return ptr;
	}

};


// Class NavigationSystem.NavCollision
// 0x0068 (0x00D8 - 0x0070)
class UNavCollision : public UNavCollisionBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0070(0x0010) MISSED OFFSET
	TArray<struct FNavCollisionCylinder>               CylinderCollision;                                        // 0x0080(0x0010) (Edit, ZeroConstructor)
	TArray<struct FNavCollisionBox>                    BoxCollision;                                             // 0x0090(0x0010) (Edit, ZeroConstructor)
	class UClass*                                      AreaClass;                                                // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bGatherConvexGeometry : 1;                                // 0x00A8(0x0001) (Edit, Config)
	unsigned char                                      bCreateOnClient : 1;                                      // 0x00A8(0x0001) (Edit, Config)
	unsigned char                                      UnknownData01[0x2F];                                      // 0x00A9(0x002F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class NavigationSystem.NavCollision"));
		return ptr;
	}

};


// Class NavigationSystem.NavigationGraph
// 0x0000 (0x04E0 - 0x04E0)
class ANavigationGraph : public ANavigationData
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class NavigationSystem.NavigationGraph"));
		return ptr;
	}

};


// Class NavigationSystem.NavigationGraphNode
// 0x0000 (0x02C8 - 0x02C8)
class ANavigationGraphNode : public AActor
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class NavigationSystem.NavigationGraphNode"));
		return ptr;
	}

};


// Class NavigationSystem.NavigationGraphNodeComponent
// 0x0030 (0x0300 - 0x02D0)
class UNavigationGraphNodeComponent : public USceneComponent
{
public:
	struct FNavGraphNode                               Node;                                                     // 0x02D0(0x0018)
	class UNavigationGraphNodeComponent*               NextNodeComponent;                                        // 0x02E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UNavigationGraphNodeComponent*               PrevNodeComponent;                                        // 0x02F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x02F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class NavigationSystem.NavigationGraphNodeComponent"));
		return ptr;
	}

};


// Class NavigationSystem.NavigationInvokerComponent
// 0x0008 (0x00C0 - 0x00B8)
class UNavigationInvokerComponent : public UActorComponent
{
public:
	float                                              TileGenerationRadius;                                     // 0x00B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TileRemovalRadius;                                        // 0x00BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class NavigationSystem.NavigationInvokerComponent"));
		return ptr;
	}

};


// Class NavigationSystem.NavigationPath
// 0x0060 (0x0088 - 0x0028)
class UNavigationPath : public UObject
{
public:
	struct FScriptMulticastDelegate                    PathUpdatedNotifier;                                      // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<struct FVector>                             PathPoints;                                               // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TEnumAsByte<ENavigationOptionFlag>                 RecalculateOnInvalidation;                                // 0x0048(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3F];                                      // 0x0049(0x003F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class NavigationSystem.NavigationPath"));
		return ptr;
	}


	bool IsValid();//Offset:Discovery.exe+0x5C24D10
	bool IsStringPulled();//Offset:Discovery.exe+0x1DB6450
	bool IsPartial();//Offset:Discovery.exe+0x5C24D40
	float GetPathLength();//Offset:Discovery.exe+0x5C24DA0
	float GetPathCost();//Offset:Discovery.exe+0x5C24D70
	struct FString GetDebugString();//Offset:Discovery.exe+0x5C24F50
	void EnableRecalculationOnInvalidation(TEnumAsByte<ENavigationOptionFlag> DoRecalculation);//Offset:Discovery.exe+0x5C24DD0
	void EnableDebugDrawing(bool bShouldDrawDebugData, const struct FLinearColor& PathColor);//Offset:Discovery.exe+0x5C24E60
};


// Class NavigationSystem.NavigationPathGenerator
// 0x0000 (0x0028 - 0x0028)
class UNavigationPathGenerator : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class NavigationSystem.NavigationPathGenerator"));
		return ptr;
	}

};


// Class NavigationSystem.NavigationQueryFilter
// 0x0020 (0x0048 - 0x0028)
class UNavigationQueryFilter : public UObject
{
public:
	TArray<struct FNavigationFilterArea>               Areas;                                                    // 0x0028(0x0010) (Edit, ZeroConstructor)
	struct FNavigationFilterFlags                      IncludeFlags;                                             // 0x0038(0x0004) (Edit)
	struct FNavigationFilterFlags                      ExcludeFlags;                                             // 0x003C(0x0004) (Edit)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class NavigationSystem.NavigationQueryFilter"));
		return ptr;
	}

};


// Class NavigationSystem.NavigationSystemV1
// 0x1620 (0x1648 - 0x0028)
class UNavigationSystemV1 : public UNavigationSystemBase
{
public:
	class ANavigationData*                             MainNavData;                                              // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class ANavigationData*                             AbstractNavData;                                          // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       DefaultAgentName;                                         // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0040(0x0028) UNKNOWN PROPERTY: CrowdManagerClass
	unsigned char                                      bAutoCreateNavigationData : 1;                            // 0x0068(0x0001) (Edit, Config)
	unsigned char                                      bSpawnNavDataInNavBoundsLevel : 1;                        // 0x0068(0x0001) (Edit, Config)
	unsigned char                                      bAllowClientSideNavigation : 1;                           // 0x0068(0x0001) (Edit, Config)
	unsigned char                                      bShouldDiscardSubLevelNavData : 1;                        // 0x0068(0x0001) (Edit, Config)
	unsigned char                                      bTickWhilePaused : 1;                                     // 0x0068(0x0001) (Edit, Config)
	unsigned char                                      bSupportRebuilding : 1;                                   // 0x0068(0x0001)
	unsigned char                                      bInitialBuildingLocked : 1;                               // 0x0068(0x0001) (Edit, Config)
	unsigned char                                      UnknownData01 : 1;                                        // 0x0068(0x0001)
	unsigned char                                      bSkipAgentHeightCheckWhenPickingNavData : 1;              // 0x0069(0x0001) (Edit, Config)
	unsigned char                                      bGenerateNavigationOnlyAroundNavigationInvokers : 1;      // 0x0069(0x0001) (Edit, Config, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x2];                                       // 0x006A(0x0002) MISSED OFFSET
	float                                              ActiveTilesUpdateInterval;                                // 0x006C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	enum class ENavDataGatheringModeConfig             DataGatheringMode;                                        // 0x0070(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0071(0x0003) MISSED OFFSET
	float                                              DirtyAreaWarningSizeThreshold;                            // 0x0074(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              GatheringNavModifiersWarningLimitTime;                    // 0x0078(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	TArray<struct FNavDataConfig>                      SupportedAgents;                                          // 0x0080(0x0010) (Edit, ZeroConstructor, Config)
	struct FNavAgentSelector                           SupportedAgentsMask;                                      // 0x0090(0x0004) (Edit, Config)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	struct FBox                                        BuildBounds;                                              // 0x0098(0x0038) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class ANavigationData*>                     NavDataSet;                                               // 0x00D0(0x0010) (ZeroConstructor, Transient)
	TArray<class ANavigationData*>                     NavDataRegistrationQueue;                                 // 0x00E0(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData06[0x10];                                      // 0x00F0(0x0010) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnNavDataRegisteredEvent;                                 // 0x0100(0x0010) (ZeroConstructor, Transient, InstancedReference)
	struct FScriptMulticastDelegate                    OnNavigationGenerationFinishedDelegate;                   // 0x0110(0x0010) (ZeroConstructor, Transient, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData07[0xDC];                                      // 0x0120(0x00DC) MISSED OFFSET
	enum class EFNavigationSystemRunMode               OperationMode;                                            // 0x01FC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x1427];                                    // 0x01FD(0x1427) MISSED OFFSET
	float                                              DirtyAreasUpdateFreq;                                     // 0x1624(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData09[0x20];                                      // 0x1628(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class NavigationSystem.NavigationSystemV1"));
		return ptr;
	}


	void UnregisterNavigationInvoker(class AActor* Invoker);//Offset:Discovery.exe+0x5C26430
	void STATIC_SimpleMoveToLocation(class AController* Controller, const struct FVector& Goal);//Offset:Discovery.exe+0x5C25AC0
	void STATIC_SimpleMoveToActor(class AController* Controller, class AActor* Goal);//Offset:Discovery.exe+0x58AC860
	void SetMaxSimultaneousTileGenerationJobsCount(int MaxNumberOfJobs);//Offset:Discovery.exe+0x5C26620
	void SetGeometryGatheringMode(enum class ENavDataGatheringModeConfig NewMode);//Offset:Discovery.exe+0x5C263A0
	void ResetMaxSimultaneousTileGenerationJobsCount();//Offset:Discovery.exe+0x5C26600
	void RegisterNavigationInvoker(class AActor* Invoker, float TileGenerationRadius, float TileRemovalRadius);//Offset:Discovery.exe+0x5C264D0
	struct FVector STATIC_ProjectPointToNavigation(class UObject* WorldContextObject, const struct FVector& Point, class ANavigationData* NavData, class UClass* FilterClass, const struct FVector& QueryExtent);//Offset:Discovery.exe+0x5C25FA0
	void OnNavigationBoundsUpdated(class ANavMeshBoundsVolume* NavVolume);//Offset:Discovery.exe+0x5C261C0
	bool STATIC_NavigationRaycast(class UObject* WorldContextObject, const struct FVector& RayStart, const struct FVector& RayEnd, class UClass* FilterClass, class AController* Querier, struct FVector* HitLocation);//Offset:Discovery.exe+0x5C266C0
	bool K2_ReplaceAreaInOctreeData(class UObject* Object, class UClass* OldArea, class UClass* NewArea);//Offset:Discovery.exe+0x5C26260
	bool STATIC_K2_ProjectPointToNavigation(class UObject* WorldContextObject, const struct FVector& Point, class ANavigationData* NavData, class UClass* FilterClass, const struct FVector& QueryExtent, struct FVector* ProjectedLocation);//Offset:Discovery.exe+0x5C277A0
	bool STATIC_K2_GetRandomReachablePointInRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius, class ANavigationData* NavData, class UClass* FilterClass, struct FVector* RandomLocation);//Offset:Discovery.exe+0x5C27560
	bool STATIC_K2_GetRandomPointInNavigableRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius, class ANavigationData* NavData, class UClass* FilterClass, struct FVector* RandomLocation);//Offset:Discovery.exe+0x5C25880
	bool STATIC_K2_GetRandomLocationInNavigableRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius, class ANavigationData* NavData, class UClass* FilterClass, struct FVector* RandomLocation);//Offset:Discovery.exe+0x5C27320
	bool STATIC_IsNavigationBeingBuiltOrLocked(class UObject* WorldContextObject);//Offset:Discovery.exe+0x5C26D20
	bool STATIC_IsNavigationBeingBuilt(class UObject* WorldContextObject);//Offset:Discovery.exe+0x5C26DC0
	struct FVector STATIC_GetRandomReachablePointInRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius, class ANavigationData* NavData, class UClass* FilterClass);//Offset:Discovery.exe+0x5C25DA0
	struct FVector STATIC_GetRandomPointInNavigableRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius, class ANavigationData* NavData, class UClass* FilterClass);//Offset:Discovery.exe+0x5C25BA0
	TEnumAsByte<ENavigationQueryResult> STATIC_GetPathLength(class UObject* WorldContextObject, const struct FVector& PathStart, const struct FVector& PathEnd, class ANavigationData* NavData, class UClass* FilterClass, float* PathLength);//Offset:Discovery.exe+0x5C26E60
	TEnumAsByte<ENavigationQueryResult> STATIC_GetPathCost(class UObject* WorldContextObject, const struct FVector& PathStart, const struct FVector& PathEnd, class ANavigationData* NavData, class UClass* FilterClass, float* PathCost);//Offset:Discovery.exe+0x5C270C0
	class UNavigationSystemV1* STATIC_GetNavigationSystem(class UObject* WorldContextObject);//Offset:Discovery.exe+0x5C27A00
	class UNavigationPath* STATIC_FindPathToLocationSynchronously(class UObject* WorldContextObject, const struct FVector& PathStart, const struct FVector& PathEnd, class AActor* PathfindingContext, class UClass* FilterClass);//Offset:Discovery.exe+0x5C26B40
	class UNavigationPath* STATIC_FindPathToActorSynchronously(class UObject* WorldContextObject, const struct FVector& PathStart, class AActor* GoalActor, float TetherDistance, class AActor* PathfindingContext, class UClass* FilterClass);//Offset:Discovery.exe+0x5C26910
};


// Class NavigationSystem.NavigationSystemModuleConfig
// 0x0008 (0x0058 - 0x0050)
class UNavigationSystemModuleConfig : public UNavigationSystemConfig
{
public:
	unsigned char                                      bStrictlyStatic : 1;                                      // 0x0050(0x0001) (Edit)
	unsigned char                                      bCreateOnClient : 1;                                      // 0x0050(0x0001) (Edit)
	unsigned char                                      bAutoSpawnMissingNavData : 1;                             // 0x0050(0x0001) (Edit)
	unsigned char                                      bSpawnNavDataInNavBoundsLevel : 1;                        // 0x0050(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class NavigationSystem.NavigationSystemModuleConfig"));
		return ptr;
	}

};


// Class NavigationSystem.NavigationTestingActor
// 0x0118 (0x03E0 - 0x02C8)
class ANavigationTestingActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x02C8(0x0010) MISSED OFFSET
	class UCapsuleComponent*                           CapsuleComponent;                                         // 0x02D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UNavigationInvokerComponent*                 InvokerComponent;                                         // 0x02E0(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      bActAsNavigationInvoker : 1;                              // 0x02E8(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x7];                                       // 0x02E9(0x0007) MISSED OFFSET
	struct FNavAgentProperties                         NavAgentProps;                                            // 0x02F0(0x0030) (Edit)
	struct FVector                                     QueryingExtent;                                           // 0x0320(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	class ANavigationData*                             MyNavData;                                                // 0x0338(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     ProjectedLocation;                                        // 0x0340(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      bProjectedLocationValid : 1;                              // 0x0358(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	unsigned char                                      bSearchStart : 1;                                         // 0x0358(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0359(0x0003) MISSED OFFSET
	float                                              CostLimitFactor;                                          // 0x035C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinimumCostLimit;                                         // 0x0360(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bBacktracking : 1;                                        // 0x0364(0x0001) (Edit)
	unsigned char                                      bUseHierarchicalPathfinding : 1;                          // 0x0364(0x0001) (Edit)
	unsigned char                                      bGatherDetailedInfo : 1;                                  // 0x0364(0x0001) (Edit)
	unsigned char                                      bDrawDistanceToWall : 1;                                  // 0x0364(0x0001) (Edit)
	unsigned char                                      bShowNodePool : 1;                                        // 0x0364(0x0001) (Edit)
	unsigned char                                      bShowBestPath : 1;                                        // 0x0364(0x0001) (Edit)
	unsigned char                                      bShowDiffWithPreviousStep : 1;                            // 0x0364(0x0001) (Edit)
	unsigned char                                      bShouldBeVisibleInGame : 1;                               // 0x0364(0x0001) (Edit)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0365(0x0003) MISSED OFFSET
	TEnumAsByte<ENavCostDisplay>                       CostDisplayMode;                                          // 0x0368(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0369(0x0007) MISSED OFFSET
	struct FVector2D                                   TextCanvasOffset;                                         // 0x0370(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bPathExist : 1;                                           // 0x0380(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst)
	unsigned char                                      bPathIsPartial : 1;                                       // 0x0380(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst)
	unsigned char                                      bPathSearchOutOfNodes : 1;                                // 0x0380(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0381(0x0003) MISSED OFFSET
	float                                              PathfindingTime;                                          // 0x0384(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	float                                              PathCost;                                                 // 0x0388(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	int                                                PathfindingSteps;                                         // 0x038C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	class ANavigationTestingActor*                     OtherActor;                                               // 0x0390(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FilterClass;                                              // 0x0398(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ShowStepIndex;                                            // 0x03A0(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, IsPlainOldData)
	float                                              OffsetFromCornersDistance;                                // 0x03A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x38];                                      // 0x03A8(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class NavigationSystem.NavigationTestingActor"));
		return ptr;
	}

};


// Class NavigationSystem.NavLinkComponent
// 0x0020 (0x05B0 - 0x0590)
class UNavLinkComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0590(0x0008) MISSED OFFSET
	TArray<struct FNavigationLink>                     Links;                                                    // 0x0598(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x05A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class NavigationSystem.NavLinkComponent"));
		return ptr;
	}

};


// Class NavigationSystem.NavRelevantComponent
// 0x0050 (0x0108 - 0x00B8)
class UNavRelevantComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x00B8(0x0040) MISSED OFFSET
	unsigned char                                      bAttachToOwnersRoot : 1;                                  // 0x00F8(0x0001)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00F9(0x0007) MISSED OFFSET
	class UObject*                                     CachedNavParent;                                          // 0x0100(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class NavigationSystem.NavRelevantComponent"));
		return ptr;
	}


	void SetNavigationRelevancy(bool bRelevant);//Offset:Discovery.exe+0x5C2A920
};


// Class NavigationSystem.NavLinkCustomComponent
// 0x00E0 (0x01E8 - 0x0108)
class UNavLinkCustomComponent : public UNavRelevantComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0108(0x0008) MISSED OFFSET
	uint32_t                                           NavLinkUserId;                                            // 0x0110(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0114(0x0004) MISSED OFFSET
	class UClass*                                      EnabledAreaClass;                                         // 0x0118(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DisabledAreaClass;                                        // 0x0120(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNavAgentSelector                           SupportedAgents;                                          // 0x0128(0x0004) (Edit)
	unsigned char                                      UnknownData02[0x4];                                       // 0x012C(0x0004) MISSED OFFSET
	struct FVector                                     LinkRelativeStart;                                        // 0x0130(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LinkRelativeEnd;                                          // 0x0148(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENavLinkDirection>                     LinkDirection;                                            // 0x0160(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0161(0x0003) MISSED OFFSET
	unsigned char                                      bLinkEnabled : 1;                                         // 0x0164(0x0001) (Edit)
	unsigned char                                      bNotifyWhenEnabled : 1;                                   // 0x0164(0x0001) (Edit)
	unsigned char                                      bNotifyWhenDisabled : 1;                                  // 0x0164(0x0001) (Edit)
	unsigned char                                      bCreateBoxObstacle : 1;                                   // 0x0164(0x0001) (Edit)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0165(0x0003) MISSED OFFSET
	struct FVector                                     ObstacleOffset;                                           // 0x0168(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ObstacleExtent;                                           // 0x0180(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ObstacleAreaClass;                                        // 0x0198(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BroadcastRadius;                                          // 0x01A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BroadcastInterval;                                        // 0x01A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     BroadcastChannel;                                         // 0x01A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3F];                                      // 0x01A9(0x003F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class NavigationSystem.NavLinkCustomComponent"));
		return ptr;
	}

};


// Class NavigationSystem.NavLinkCustomInterface
// 0x0000 (0x0028 - 0x0028)
class UNavLinkCustomInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class NavigationSystem.NavLinkCustomInterface"));
		return ptr;
	}

};


// Class NavigationSystem.NavLinkHostInterface
// 0x0000 (0x0028 - 0x0028)
class UNavLinkHostInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class NavigationSystem.NavLinkHostInterface"));
		return ptr;
	}

};


// Class NavigationSystem.NavLinkRenderingComponent
// 0x0000 (0x0590 - 0x0590)
class UNavLinkRenderingComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class NavigationSystem.NavLinkRenderingComponent"));
		return ptr;
	}

};


// Class NavigationSystem.NavLinkTrivial
// 0x0000 (0x0050 - 0x0050)
class UNavLinkTrivial : public UNavLinkDefinition
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class NavigationSystem.NavLinkTrivial"));
		return ptr;
	}

};


// Class NavigationSystem.NavMeshBoundsVolume
// 0x0008 (0x0308 - 0x0300)
class ANavMeshBoundsVolume : public AVolume
{
public:
	struct FNavAgentSelector                           SupportedAgents;                                          // 0x0300(0x0004) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0304(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class NavigationSystem.NavMeshBoundsVolume"));
		return ptr;
	}

};


// Class NavigationSystem.NavMeshRenderingComponent
// 0x0010 (0x05A0 - 0x0590)
class UNavMeshRenderingComponent : public UDebugDrawComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0590(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class NavigationSystem.NavMeshRenderingComponent"));
		return ptr;
	}

};


// Class NavigationSystem.NavModifierComponent
// 0x00A8 (0x01B0 - 0x0108)
class UNavModifierComponent : public UNavRelevantComponent
{
public:
	class UClass*                                      AreaClass;                                                // 0x0108(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     FailsafeExtent;                                           // 0x0110(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIncludeAgentHeight : 1;                                  // 0x0128(0x0001) (Edit, Config)
	unsigned char                                      UnknownData00[0x87];                                      // 0x0129(0x0087) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class NavigationSystem.NavModifierComponent"));
		return ptr;
	}


	void SetAreaClass(class UClass* NewAreaClass);//Offset:Discovery.exe+0x5C2A1E0
};


// Class NavigationSystem.NavModifierVolume
// 0x0018 (0x0318 - 0x0300)
class ANavModifierVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0300(0x0008) MISSED OFFSET
	class UClass*                                      AreaClass;                                                // 0x0308(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bMaskFillCollisionUnderneathForNavmesh;                   // 0x0310(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0311(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class NavigationSystem.NavModifierVolume"));
		return ptr;
	}


	void SetAreaClass(class UClass* NewAreaClass);//Offset:Discovery.exe+0x5C2A510
};


// Class NavigationSystem.NavNodeInterface
// 0x0000 (0x0028 - 0x0028)
class UNavNodeInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class NavigationSystem.NavNodeInterface"));
		return ptr;
	}

};


// Class NavigationSystem.NavSystemConfigOverride
// 0x0010 (0x02D8 - 0x02C8)
class ANavSystemConfigOverride : public AActor
{
public:
	class UNavigationSystemConfig*                     NavigationSystemConfig;                                   // 0x02C8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	enum class ENavSystemOverridePolicy                OverridePolicy;                                           // 0x02D0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bLoadOnClient : 1;                                        // 0x02D1(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x6];                                       // 0x02D2(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class NavigationSystem.NavSystemConfigOverride"));
		return ptr;
	}

};


// Class NavigationSystem.NavTestRenderingComponent
// 0x0000 (0x0590 - 0x0590)
class UNavTestRenderingComponent : public UDebugDrawComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class NavigationSystem.NavTestRenderingComponent"));
		return ptr;
	}

};


// Class NavigationSystem.RecastFilter_UseDefaultArea
// 0x0000 (0x0048 - 0x0048)
class URecastFilter_UseDefaultArea : public UNavigationQueryFilter
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class NavigationSystem.RecastFilter_UseDefaultArea"));
		return ptr;
	}

};


// Class NavigationSystem.RecastNavMesh
// 0x00D0 (0x05B0 - 0x04E0)
class ARecastNavMesh : public ANavigationData
{
public:
	unsigned char                                      bDrawTriangleEdges : 1;                                   // 0x04E0(0x0001) (Edit)
	unsigned char                                      bDrawPolyEdges : 1;                                       // 0x04E0(0x0001) (Edit, Config)
	unsigned char                                      bDrawFilledPolys : 1;                                     // 0x04E0(0x0001) (Edit)
	unsigned char                                      bDrawNavMeshEdges : 1;                                    // 0x04E0(0x0001) (Edit)
	unsigned char                                      bDrawTileBounds : 1;                                      // 0x04E0(0x0001) (Edit)
	unsigned char                                      bDrawPathCollidingGeometry : 1;                           // 0x04E0(0x0001) (Edit)
	unsigned char                                      bDrawTileLabels : 1;                                      // 0x04E0(0x0001) (Edit)
	unsigned char                                      bDrawPolygonLabels : 1;                                   // 0x04E0(0x0001) (Edit)
	unsigned char                                      bDrawDefaultPolygonCost : 1;                              // 0x04E1(0x0001) (Edit)
	unsigned char                                      bDrawPolygonFlags : 1;                                    // 0x04E1(0x0001) (Edit)
	unsigned char                                      bDrawLabelsOnPathNodes : 1;                               // 0x04E1(0x0001) (Edit)
	unsigned char                                      bDrawNavLinks : 1;                                        // 0x04E1(0x0001) (Edit)
	unsigned char                                      bDrawFailedNavLinks : 1;                                  // 0x04E1(0x0001) (Edit)
	unsigned char                                      bDrawClusters : 1;                                        // 0x04E1(0x0001) (Edit)
	unsigned char                                      bDrawOctree : 1;                                          // 0x04E1(0x0001) (Edit)
	unsigned char                                      bDrawOctreeDetails : 1;                                   // 0x04E1(0x0001) (Edit)
	unsigned char                                      bDrawMarkedForbiddenPolys : 1;                            // 0x04E2(0x0001) (Edit)
	unsigned char                                      bDistinctlyDrawTilesBeingBuilt : 1;                       // 0x04E2(0x0001) (Config)
	unsigned char                                      UnknownData00[0x1];                                       // 0x04E3(0x0001) MISSED OFFSET
	float                                              DrawOffset;                                               // 0x04E4(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FRecastNavMeshTileGenerationDebug           TileGenerationDebug;                                      // 0x04E8(0x0014) (Edit)
	unsigned char                                      bFixedTilePoolSize : 1;                                   // 0x04FC(0x0001) (Edit, Config)
	unsigned char                                      UnknownData01[0x3];                                       // 0x04FD(0x0003) MISSED OFFSET
	int                                                TilePoolSize;                                             // 0x0500(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              TileSizeUU;                                               // 0x0504(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CellSize;                                                 // 0x0508(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CellHeight;                                               // 0x050C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              AgentRadius;                                              // 0x0510(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              AgentHeight;                                              // 0x0514(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              AgentMaxSlope;                                            // 0x0518(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              AgentMaxStepHeight;                                       // 0x051C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MinRegionArea;                                            // 0x0520(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MergeRegionSize;                                          // 0x0524(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxSimplificationError;                                   // 0x0528(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                MaxSimultaneousTileGenerationJobsCount;                   // 0x052C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                TileNumberHardLimit;                                      // 0x0530(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                PolyRefTileBits;                                          // 0x0534(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                PolyRefNavPolyBits;                                       // 0x0538(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                PolyRefSaltBits;                                          // 0x053C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FVector                                     NavMeshOriginOffset;                                      // 0x0540(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DefaultDrawDistance;                                      // 0x0558(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              DefaultMaxSearchNodes;                                    // 0x055C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              DefaultMaxHierarchicalSearchNodes;                        // 0x0560(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<ERecastPartitioning>                   RegionPartitioning;                                       // 0x0564(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<ERecastPartitioning>                   LayerPartitioning;                                        // 0x0565(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0566(0x0002) MISSED OFFSET
	int                                                RegionChunkSplits;                                        // 0x0568(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                LayerChunkSplits;                                         // 0x056C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bSortNavigationAreasByCost : 1;                           // 0x0570(0x0001) (Edit, Config)
	unsigned char                                      bIsWorldPartitioned : 1;                                  // 0x0570(0x0001) (Edit, Config)
	unsigned char                                      bPerformVoxelFiltering : 1;                               // 0x0570(0x0001) (Edit, Config)
	unsigned char                                      bMarkLowHeightAreas : 1;                                  // 0x0570(0x0001) (Edit, Config)
	unsigned char                                      bUseExtraTopCellWhenMarkingAreas : 1;                     // 0x0570(0x0001) (Edit, Config)
	unsigned char                                      bFilterLowSpanSequences : 1;                              // 0x0570(0x0001) (Edit, Config)
	unsigned char                                      bFilterLowSpanFromTileCache : 1;                          // 0x0570(0x0001) (Edit, Config)
	unsigned char                                      bDoFullyAsyncNavDataGathering : 1;                        // 0x0570(0x0001) (Edit, Config)
	unsigned char                                      bUseBetterOffsetsFromCorners : 1;                         // 0x0571(0x0001) (Config)
	unsigned char                                      bStoreEmptyTileLayers : 1;                                // 0x0571(0x0001) (Config)
	unsigned char                                      bUseVirtualFilters : 1;                                   // 0x0571(0x0001) (Config)
	unsigned char                                      bUseVirtualGeometryFilteringAndDirtying : 1;              // 0x0571(0x0001) (Config)
	unsigned char                                      bAllowNavLinkAsPathEnd : 1;                               // 0x0571(0x0001) (Config)
	unsigned char                                      bUseVoxelCache : 1;                                       // 0x0571(0x0001) (Config)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0572(0x0002) MISSED OFFSET
	float                                              TileSetUpdateInterval;                                    // 0x0574(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              HeuristicScale;                                           // 0x0578(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              VerticalDeviationFromGroundCompensation;                  // 0x057C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData04[0x30];                                      // 0x0580(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class NavigationSystem.RecastNavMesh"));
		return ptr;
	}


	bool K2_ReplaceAreaInTileBounds(const struct FBox& Bounds, class UClass* OldArea, class UClass* NewArea, bool ReplaceLinks);//Offset:Discovery.exe+0x5C2B0B0
};


// Class NavigationSystem.RecastNavMeshDataChunk
// 0x0010 (0x0040 - 0x0030)
class URecastNavMeshDataChunk : public UNavigationDataChunk
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class NavigationSystem.RecastNavMeshDataChunk"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
