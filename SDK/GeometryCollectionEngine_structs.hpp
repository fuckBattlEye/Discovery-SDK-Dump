#pragma once

//   SDK By:if

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace sdk
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum GeometryCollectionEngine.EChaosBreakingSortMethod
enum class EChaosBreakingSortMethod : uint8_t
{
	SortNone                       = 0,
	SortByHighestMass              = 1,
	SortByHighestSpeed             = 2,
	SortByNearestFirst             = 3,
	Count                          = 4,
	EChaosBreakingSortMethod_MAX   = 5
};


// Enum GeometryCollectionEngine.EChaosCollisionSortMethod
enum class EChaosCollisionSortMethod : uint8_t
{
	SortNone                       = 0,
	SortByHighestMass              = 1,
	SortByHighestSpeed             = 2,
	SortByHighestImpulse           = 3,
	SortByNearestFirst             = 4,
	Count                          = 5,
	EChaosCollisionSortMethod_MAX  = 6
};


// Enum GeometryCollectionEngine.EChaosRemovalSortMethod
enum class EChaosRemovalSortMethod : uint8_t
{
	SortNone                       = 0,
	SortByHighestMass              = 1,
	SortByNearestFirst             = 2,
	Count                          = 3,
	EChaosRemovalSortMethod_MAX    = 4
};


// Enum GeometryCollectionEngine.EChaosTrailingSortMethod
enum class EChaosTrailingSortMethod : uint8_t
{
	SortNone                       = 0,
	SortByHighestMass              = 1,
	SortByHighestSpeed             = 2,
	SortByNearestFirst             = 3,
	Count                          = 4,
	EChaosTrailingSortMethod_MAX   = 5
};


// Enum GeometryCollectionEngine.EGeometryCollectionDebugDrawActorHideGeometry
enum class EGeometryCollectionDebugDrawActorHideGeometry : uint8_t
{
	HideNone                       = 0,
	HideWithCollision              = 1,
	HideSelected                   = 2,
	HideWholeCollection            = 3,
	HideAll                        = 4,
	EGeometryCollectionDebugDrawActorHideGeometry_MAX = 5
};


// Enum GeometryCollectionEngine.ECollectionAttributeEnum
enum class ECollectionAttributeEnum : uint8_t
{
	Chaos_Active                   = 0,
	Chaos_DynamicState             = 1,
	Chaos_CollisionGroup           = 2,
	Chaos_Max                      = 3
};


// Enum GeometryCollectionEngine.ECollectionGroupEnum
enum class ECollectionGroupEnum : uint8_t
{
	Chaos_Traansform               = 0,
	Chaos_Max                      = 1
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GeometryCollectionEngine.ChaosCollisionEventRequestSettings
// 0x0018
struct FChaosCollisionEventRequestSettings
{
	int                                                MaxNumberResults;                                         // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinMass;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinSpeed;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinImpulse;                                               // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDistance;                                              // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct GeometryCollectionEngine.ChaosBreakingEventRequestSettings
// 0x0018
struct FChaosBreakingEventRequestSettings
{
	int                                                MaxNumberOfResults;                                       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinRadius;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinSpeed;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinMass;                                                  // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDistance;                                              // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct GeometryCollectionEngine.ChaosTrailingEventRequestSettings
// 0x0018
struct FChaosTrailingEventRequestSettings
{
	int                                                MaxNumberOfResults;                                       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinMass;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinSpeed;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinAngularSpeed;                                          // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDistance;                                              // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct GeometryCollectionEngine.ChaosRemovalEventRequestSettings
// 0x0010
struct FChaosRemovalEventRequestSettings
{
	int                                                MaxNumberOfResults;                                       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinMass;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDistance;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct GeometryCollectionEngine.ChaosTrailingEventData
// 0x0050
struct FChaosTrailingEventData
{
	struct FVector                                     Location;                                                 // 0x0000(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // 0x0018(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AngularVelocity;                                          // 0x0030(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Mass;                                                     // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ParticleIndex;                                            // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GeometryCollectionEngine.ChaosRemovalEventData
// 0x0020
struct FChaosRemovalEventData
{
	struct FVector                                     Location;                                                 // 0x0000(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Mass;                                                     // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ParticleIndex;                                            // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GeometryCollectionEngine.ChaosCollisionEventData
// 0x0080
struct FChaosCollisionEventData
{
	struct FVector                                     Location;                                                 // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Normal;                                                   // 0x0018(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity1;                                                // 0x0030(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity2;                                                // 0x0048(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Mass1;                                                    // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Mass2;                                                    // 0x0064(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Impulse;                                                  // 0x0068(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GeometryCollectionEngine.ChaosBreakingEventData
// 0x0038
struct FChaosBreakingEventData
{
	struct FVector                                     Location;                                                 // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // 0x0018(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Mass;                                                     // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct GeometryCollectionEngine.GeomComponentCacheParameters
// 0x0050
struct FGeomComponentCacheParameters
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UGeometryCollectionCache*                    TargetCache;                                              // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ReverseCacheBeginTime;                                    // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               SaveCollisionData;                                        // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               DoGenerateCollisionData;                                  // 0x0015(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0016(0x0002) MISSED OFFSET
	int                                                CollisionDataSizeMax;                                     // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               DoCollisionDataSpatialHash;                               // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	float                                              CollisionDataSpatialHashRadius;                           // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxCollisionPerCell;                                      // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               SaveBreakingData;                                         // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               DoGenerateBreakingData;                                   // 0x0029(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x002A(0x0002) MISSED OFFSET
	int                                                BreakingDataSizeMax;                                      // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               DoBreakingDataSpatialHash;                                // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              BreakingDataSpatialHashRadius;                            // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxBreakingPerCell;                                       // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               SaveTrailingData;                                         // 0x003C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               DoGenerateTrailingData;                                   // 0x003D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x003E(0x0002) MISSED OFFSET
	int                                                TrailingDataSizeMax;                                      // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TrailingMinSpeedThreshold;                                // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TrailingMinVolumeThreshold;                               // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct GeometryCollectionEngine.GeometryCollectionRepData
// 0x0018
struct FGeometryCollectionRepData
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct GeometryCollectionEngine.GeometryCollectionDebugDrawWarningMessage
// 0x0001
struct FGeometryCollectionDebugDrawWarningMessage
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct GeometryCollectionEngine.GeometryCollectionDebugDrawActorSelectedRigidBody
// 0x0018
struct FGeometryCollectionDebugDrawActorSelectedRigidBody
{
	int                                                ID;                                                       // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class AChaosSolverActor*                           Solver;                                                   // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AGeometryCollectionActor*                    GeometryCollection;                                       // 0x0010(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct GeometryCollectionEngine.GeometryCollectionEmbeddedExemplar
// 0x0028
struct FGeometryCollectionEmbeddedExemplar
{
	struct FSoftObjectPath                             StaticMeshExemplar;                                       // 0x0000(0x0018) (Edit, ZeroConstructor)
	float                                              StartCullDistance;                                        // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EndCullDistance;                                          // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                InstanceCount;                                            // 0x0020(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct GeometryCollectionEngine.GeometryCollectionLevelSetData
// 0x0010
struct FGeometryCollectionLevelSetData
{
	int                                                MinLevelSetResolution;                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxLevelSetResolution;                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MinClusterLevelSetResolution;                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxClusterLevelSetResolution;                             // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GeometryCollectionEngine.GeometryCollectionCollisionParticleData
// 0x0008
struct FGeometryCollectionCollisionParticleData
{
	float                                              CollisionParticlesFraction;                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaximumCollisionParticles;                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GeometryCollectionEngine.GeometryCollectionCollisionTypeData
// 0x0024
struct FGeometryCollectionCollisionTypeData
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	struct FGeometryCollectionLevelSetData             LevelSet;                                                 // 0x0004(0x0010) (Edit)
	struct FGeometryCollectionCollisionParticleData    CollisionParticles;                                       // 0x0014(0x0008) (Edit)
	float                                              CollisionObjectReductionPercentage;                       // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CollisionMarginFraction;                                  // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GeometryCollectionEngine.GeometryCollectionSizeSpecificData
// 0x0020
struct FGeometryCollectionSizeSpecificData
{
	float                                              MaxSize;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FGeometryCollectionCollisionTypeData> CollisionShapes;                                          // 0x0008(0x0010) (Edit, ZeroConstructor)
	int                                                DamageThreshold;                                          // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct GeometryCollectionEngine.GeometryCollectionSource
// 0x0090
struct FGeometryCollectionSource
{
	struct FSoftObjectPath                             SourceGeometryObject;                                     // 0x0000(0x0018) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
	struct FTransform                                  LocalTransform;                                           // 0x0020(0x0060) (Edit, BlueprintVisible, IsPlainOldData)
	TArray<class UMaterialInterface*>                  SourceMaterial;                                           // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
