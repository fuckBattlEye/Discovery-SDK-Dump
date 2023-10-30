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

// Class GeometryCollectionEngine.ChaosDestructionListener
// 0x02B0 (0x0580 - 0x02D0)
class UChaosDestructionListener : public USceneComponent
{
public:
	unsigned char                                      bIsCollisionEventListeningEnabled : 1;                    // 0x02D0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bIsBreakingEventListeningEnabled : 1;                     // 0x02D0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bIsTrailingEventListeningEnabled : 1;                     // 0x02D0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bIsRemovalEventListeningEnabled : 1;                      // 0x02D0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02D1(0x0003) MISSED OFFSET
	struct FChaosCollisionEventRequestSettings         CollisionEventRequestSettings;                            // 0x02D4(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FChaosBreakingEventRequestSettings          BreakingEventRequestSettings;                             // 0x02EC(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FChaosTrailingEventRequestSettings          TrailingEventRequestSettings;                             // 0x0304(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FChaosRemovalEventRequestSettings           RemovalEventRequestSettings;                              // 0x031C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x4];                                       // 0x032C(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData02[0x50];                                      // 0x032C(0x0050) UNKNOWN PROPERTY: ChaosSolverActors
	unsigned char                                      UnknownData03[0x50];                                      // 0x0380(0x0050) UNKNOWN PROPERTY: GeometryCollectionActors
	struct FScriptMulticastDelegate                    OnCollisionEvents;                                        // 0x03D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBreakingEvents;                                         // 0x03E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTrailingEvents;                                         // 0x03F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRemovalEvents;                                          // 0x0400(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData04[0x170];                                     // 0x0410(0x0170) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GeometryCollectionEngine.ChaosDestructionListener"));
		return ptr;
	}


	void SortTrailingEvents(enum class EChaosTrailingSortMethod SortMethod, TArray<struct FChaosTrailingEventData>* TrailingEvents);//Offset:Discovery.exe+0x5E3FF30
	void SortRemovalEvents(enum class EChaosRemovalSortMethod SortMethod, TArray<struct FChaosRemovalEventData>* RemovalEvents);//Offset:Discovery.exe+0x5E3FE30
	void SortCollisionEvents(enum class EChaosCollisionSortMethod SortMethod, TArray<struct FChaosCollisionEventData>* CollisionEvents);//Offset:Discovery.exe+0x5E40130
	void SortBreakingEvents(enum class EChaosBreakingSortMethod SortMethod, TArray<struct FChaosBreakingEventData>* BreakingEvents);//Offset:Discovery.exe+0x5E40030
	void SetTrailingEventRequestSettings(const struct FChaosTrailingEventRequestSettings& InSettings);//Offset:Discovery.exe+0x5E40590
	void SetTrailingEventEnabled(bool bIsEnabled);//Offset:Discovery.exe+0x5E40300
	void SetRemovalEventRequestSettings(const struct FChaosRemovalEventRequestSettings& InSettings);//Offset:Discovery.exe+0x5E404E0
	void SetRemovalEventEnabled(bool bIsEnabled);//Offset:Discovery.exe+0x5E40260
	void SetCollisionEventRequestSettings(const struct FChaosCollisionEventRequestSettings& InSettings);//Offset:Discovery.exe+0x5E406F0
	void SetCollisionEventEnabled(bool bIsEnabled);//Offset:Discovery.exe+0x5E40440
	void SetBreakingEventRequestSettings(const struct FChaosBreakingEventRequestSettings& InSettings);//Offset:Discovery.exe+0x5E40640
	void SetBreakingEventEnabled(bool bIsEnabled);//Offset:Discovery.exe+0x5E403A0
	void RemoveGeometryCollectionActor(class AGeometryCollectionActor* GeometryCollectionActor);//Offset:Discovery.exe+0x5E407A0
	void RemoveChaosSolverActor(class AChaosSolverActor* ChaosSolverActor);//Offset:Discovery.exe+0x2CEDDA0
	bool IsEventListening();//Offset:Discovery.exe+0x5E40230
	void AddGeometryCollectionActor(class AGeometryCollectionActor* GeometryCollectionActor);//Offset:Discovery.exe+0x5E40840
	void AddChaosSolverActor(class AChaosSolverActor* ChaosSolverActor);//Offset:Discovery.exe+0x2CEDDA0
};


// Class GeometryCollectionEngine.GeometryCollectionActor
// 0x0010 (0x02D8 - 0x02C8)
class AGeometryCollectionActor : public AActor
{
public:
	class UGeometryCollectionComponent*                GeometryCollectionComponent;                              // 0x02C8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UGeometryCollectionDebugDrawComponent*       GeometryCollectionDebugDrawComponent;                     // 0x02D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, Deprecated, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GeometryCollectionEngine.GeometryCollectionActor"));
		return ptr;
	}


	bool RaycastSingle(const struct FVector& Start, const struct FVector& End, struct FHitResult* OutHit);//Offset:Discovery.exe+0x5E41A00
};


// Class GeometryCollectionEngine.GeometryCollectionCache
// 0x0028 (0x0050 - 0x0028)
class UGeometryCollectionCache : public UObject
{
public:
	struct FRecordedTransformTrack                     RecordedData;                                             // 0x0028(0x0010)
	class UGeometryCollection*                         SupportedCollection;                                      // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       CompatibleCollectionState;                                // 0x0040(0x0010) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GeometryCollectionEngine.GeometryCollectionCache"));
		return ptr;
	}

};


// Class GeometryCollectionEngine.GeometryCollectionComponent
// 0x0540 (0x0B00 - 0x05C0)
class UGeometryCollectionComponent : public UMeshComponent
{
public:
	class AChaosSolverActor*                           ChaosSolverActor;                                         // 0x05C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xE8];                                      // 0x05C8(0x00E8) MISSED OFFSET
	class UGeometryCollection*                         RestCollection;                                           // 0x06B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoClear, IsPlainOldData)
	TArray<class AFieldSystemActor*>                   InitializationFields;                                     // 0x06B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoClear)
	bool                                               Simulating;                                               // 0x06C8(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x06C9(0x0007) MISSED OFFSET
	enum class EObjectStateTypeEnum                    ObjectType;                                               // 0x06D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForceMotionBlur;                                         // 0x06D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnableClustering;                                         // 0x06D2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x06D3(0x0001) MISSED OFFSET
	int                                                ClusterGroupIndex;                                        // 0x06D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxClusterLevel;                                          // 0x06D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x06DC(0x0004) MISSED OFFSET
	TArray<float>                                      DamageThreshold;                                          // 0x06E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bUseSizeSpecificDamageThreshold;                          // 0x06F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	enum class EClusterConnectionTypeEnum              ClusterConnectionType;                                    // 0x06F1(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x06F2(0x0002) MISSED OFFSET
	int                                                CollisionGroup;                                           // 0x06F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CollisionSampleFraction;                                  // 0x06F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LinearEtherDrag;                                          // 0x06FC(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              AngularEtherDrag;                                         // 0x0700(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0704(0x0004) MISSED OFFSET
	class UChaosPhysicalMaterial*                      PhysicalMaterial;                                         // 0x0708(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	enum class EInitialVelocityTypeEnum                InitialVelocityType;                                      // 0x0710(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0711(0x0007) MISSED OFFSET
	struct FVector                                     InitialLinearVelocity;                                    // 0x0718(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InitialAngularVelocity;                                   // 0x0730(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPhysicalMaterial*                           PhysicalMaterialOverride;                                 // 0x0748(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FGeomComponentCacheParameters               CacheParameters;                                          // 0x0750(0x0050)
	TArray<struct FTransform>                          RestTransforms;                                           // 0x07A0(0x0010) (ZeroConstructor)
	struct FScriptMulticastDelegate                    NotifyGeometryCollectionPhysicsStateChange;               // 0x07B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    NotifyGeometryCollectionPhysicsLoadingStateChange;        // 0x07C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData07[0x18];                                      // 0x07D0(0x0018) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnChaosBreakEvent;                                        // 0x07E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnChaosRemovalEvent;                                      // 0x07F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              DesiredCacheTime;                                         // 0x0808(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	bool                                               CachePlayback;                                            // 0x080C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x080D(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnChaosPhysicsCollision;                                  // 0x0810(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bNotifyBreaks;                                            // 0x0820(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bNotifyCollisions;                                        // 0x0821(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bNotifyTrailing;                                          // 0x0822(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bNotifyRemovals;                                          // 0x0823(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bStoreVelocities;                                         // 0x0824(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bShowBoneColors;                                          // 0x0825(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableReplication;                                       // 0x0826(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               bEnableAbandonAfterLevel;                                 // 0x0827(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	int                                                ReplicationAbandonClusterLevel;                           // 0x0828(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x082C(0x0004) MISSED OFFSET
	struct FGeometryCollectionRepData                  RepData;                                                  // 0x0830(0x0018) (Net)
	unsigned char                                      UnknownData10[0x288];                                     // 0x0848(0x0288) MISSED OFFSET
	class UBodySetup*                                  DummyBodySetup;                                           // 0x0AD0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x8];                                       // 0x0AD8(0x0008) MISSED OFFSET
	TArray<class UInstancedStaticMeshComponent*>       EmbeddedGeometryComponents;                               // 0x0AE0(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData12[0x10];                                      // 0x0AF0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GeometryCollectionEngine.GeometryCollectionComponent"));
		return ptr;
	}


	void SetNotifyRemovals(bool bNewNotifyRemovals);//Offset:Discovery.exe+0x5E424E0
	void SetNotifyBreaks(bool bNewNotifyBreaks);//Offset:Discovery.exe+0x5E42580
	void ReceivePhysicsCollision(const struct FChaosPhysicsCollisionInfo& CollisionInfo);//Offset:Discovery.exe+0x327F8B0
	void OnRep_RepData(const struct FGeometryCollectionRepData& OldData);//Offset:Discovery.exe+0x5E42420
	void NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(class UGeometryCollectionComponent* FracturedComponent);//Offset:Discovery.exe+0x327F8B0
	void NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(class UGeometryCollectionComponent* FracturedComponent);//Offset:Discovery.exe+0x327F8B0
	void NetAbandonCluster(int TransformIndex);//Offset:Discovery.exe+0x5E42380
	void ApplyPhysicsField(bool Enabled, enum class EGeometryCollectionPhysicsTypeEnum Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field);//Offset:Discovery.exe+0x5E42620
	void ApplyKinematicField(float Radius, const struct FVector& Position);//Offset:Discovery.exe+0x5E427A0
};


// Class GeometryCollectionEngine.GeometryCollectionDebugDrawActor
// 0x00C0 (0x0388 - 0x02C8)
class AGeometryCollectionDebugDrawActor : public AActor
{
public:
	struct FGeometryCollectionDebugDrawWarningMessage  WarningMessage;                                           // 0x02C8(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02C9(0x0007) MISSED OFFSET
	struct FGeometryCollectionDebugDrawActorSelectedRigidBody SelectedRigidBody;                                        // 0x02D0(0x0018) (Deprecated)
	bool                                               bDebugDrawWholeCollection;                                // 0x02E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugDrawHierarchy;                                      // 0x02E9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugDrawClustering;                                     // 0x02EA(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	enum class EGeometryCollectionDebugDrawActorHideGeometry HideGeometry;                                             // 0x02EB(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowRigidBodyId;                                         // 0x02EC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowRigidBodyCollision;                                  // 0x02ED(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCollisionAtOrigin;                                       // 0x02EE(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowRigidBodyTransform;                                  // 0x02EF(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowRigidBodyInertia;                                    // 0x02F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowRigidBodyVelocity;                                   // 0x02F1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowRigidBodyForce;                                      // 0x02F2(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowRigidBodyInfos;                                      // 0x02F3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowTransformIndex;                                      // 0x02F4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowTransform;                                           // 0x02F5(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowParent;                                              // 0x02F6(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowLevel;                                               // 0x02F7(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowConnectivityEdges;                                   // 0x02F8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowGeometryIndex;                                       // 0x02F9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowGeometryTransform;                                   // 0x02FA(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowBoundingBox;                                         // 0x02FB(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowFaces;                                               // 0x02FC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowFaceIndices;                                         // 0x02FD(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowFaceNormals;                                         // 0x02FE(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowSingleFace;                                          // 0x02FF(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SingleFaceIndex;                                          // 0x0300(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowVertices;                                            // 0x0304(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowVertexIndices;                                       // 0x0305(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowVertexNormals;                                       // 0x0306(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseActiveVisualization;                                  // 0x0307(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PointThickness;                                           // 0x0308(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LineThickness;                                            // 0x030C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bTextShadow;                                              // 0x0310(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0311(0x0003) MISSED OFFSET
	float                                              TextScale;                                                // 0x0314(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NormalScale;                                              // 0x0318(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AxisScale;                                                // 0x031C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ArrowScale;                                               // 0x0320(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      RigidBodyIdColor;                                         // 0x0324(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RigidBodyTransformScale;                                  // 0x0328(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      RigidBodyCollisionColor;                                  // 0x032C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      RigidBodyInertiaColor;                                    // 0x0330(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      RigidBodyVelocityColor;                                   // 0x0334(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      RigidBodyForceColor;                                      // 0x0338(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      RigidBodyInfoColor;                                       // 0x033C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      TransformIndexColor;                                      // 0x0340(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TransformScale;                                           // 0x0344(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      LevelColor;                                               // 0x0348(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      ParentColor;                                              // 0x034C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ConnectivityEdgeThickness;                                // 0x0350(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      GeometryIndexColor;                                       // 0x0354(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GeometryTransformScale;                                   // 0x0358(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      BoundingBoxColor;                                         // 0x035C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      FaceColor;                                                // 0x0360(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      FaceIndexColor;                                           // 0x0364(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      FaceNormalColor;                                          // 0x0368(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      SingleFaceColor;                                          // 0x036C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      VertexColor;                                              // 0x0370(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      VertexIndexColor;                                         // 0x0374(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      VertexNormalColor;                                        // 0x0378(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x037C(0x0004) MISSED OFFSET
	class UBillboardComponent*                         SpriteComponent;                                          // 0x0380(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GeometryCollectionEngine.GeometryCollectionDebugDrawActor"));
		return ptr;
	}

};


// Class GeometryCollectionEngine.GeometryCollectionDebugDrawComponent
// 0x0018 (0x00D0 - 0x00B8)
class UGeometryCollectionDebugDrawComponent : public UActorComponent
{
public:
	class AGeometryCollectionDebugDrawActor*           GeometryCollectionDebugDrawActor;                         // 0x00B8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class AGeometryCollectionRenderLevelSetActor*      GeometryCollectionRenderLevelSetActor;                    // 0x00C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GeometryCollectionEngine.GeometryCollectionDebugDrawComponent"));
		return ptr;
	}

};


// Class GeometryCollectionEngine.GeometryCollection
// 0x00E0 (0x0108 - 0x0028)
class UGeometryCollection : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	bool                                               EnableClustering;                                         // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	int                                                ClusterGroupIndex;                                        // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxClusterLevel;                                          // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	TArray<float>                                      DamageThreshold;                                          // 0x0040(0x0010) (Edit, ZeroConstructor)
	enum class EClusterConnectionTypeEnum              ClusterConnectionType;                                    // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
	TArray<class UMaterialInterface*>                  Materials;                                                // 0x0058(0x0010) (Edit, ZeroConstructor)
	TArray<struct FGeometryCollectionEmbeddedExemplar> EmbeddedGeometryExemplar;                                 // 0x0068(0x0010) (Edit, ZeroConstructor)
	bool                                               bUseFullPrecisionUVs;                                     // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bStripOnCook;                                             // 0x0079(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               EnableNanite;                                             // 0x007A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bMassAsDensity;                                           // 0x007B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Mass;                                                     // 0x007C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinimumMassClamp;                                         // 0x0080(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bRemoveOnMaxSleep;                                        // 0x0084(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0085(0x0003) MISSED OFFSET
	struct FVector2D                                   MaximumSleepTime;                                         // 0x0088(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   RemovalDuration;                                          // 0x0098(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FGeometryCollectionSizeSpecificData> SizeSpecificData;                                         // 0x00A8(0x0010) (Edit, ZeroConstructor)
	bool                                               EnableRemovePiecesOnFracture;                             // 0x00B8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x00B9(0x0007) MISSED OFFSET
	TArray<class UMaterialInterface*>                  RemoveOnFractureMaterials;                                // 0x00C0(0x0010) (Edit, ZeroConstructor)
	struct FGuid                                       PersistentGuid;                                           // 0x00D0(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       StateGuid;                                                // 0x00E0(0x0010) (ZeroConstructor, IsPlainOldData)
	int                                                BoneSelectedMaterialIndex;                                // 0x00F0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x14];                                      // 0x00F4(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GeometryCollectionEngine.GeometryCollection"));
		return ptr;
	}

};


// Class GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor
// 0x00F8 (0x03C0 - 0x02C8)
class AGeometryCollectionRenderLevelSetActor : public AActor
{
public:
	class UVolumeTexture*                              TargetVolumeTexture;                                      // 0x02C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterial*                                   RayMarchMaterial;                                         // 0x02D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SurfaceTolerance;                                         // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Isovalue;                                                 // 0x02DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Enabled;                                                  // 0x02E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               RenderVolumeBoundingBox;                                  // 0x02E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xDE];                                      // 0x02E2(0x00DE) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
