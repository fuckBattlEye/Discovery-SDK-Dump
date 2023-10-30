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

// Enum NavigationSystem.ERuntimeGenerationType
enum class ERuntimeGenerationType : uint8_t
{
	Static                         = 0,
	DynamicModifiersOnly           = 1,
	Dynamic                        = 2,
	LegacyGeneration               = 3,
	ERuntimeGenerationType_MAX     = 4
};


// Enum NavigationSystem.ENavCostDisplay
enum class ENavCostDisplay : uint8_t
{
	TotalCost                      = 0,
	HeuristicOnly                  = 1,
	RealCostOnly                   = 2,
	ENavCostDisplay_MAX            = 3
};


// Enum NavigationSystem.ENavSystemOverridePolicy
enum class ENavSystemOverridePolicy : uint8_t
{
	Override                       = 0,
	Append                         = 1,
	Skip                           = 2,
	ENavSystemOverridePolicy_MAX   = 3
};


// Enum NavigationSystem.ERecastPartitioning
enum class ERecastPartitioning : uint8_t
{
	Monotone                       = 0,
	Watershed                      = 1,
	ChunkyMonotone                 = 2,
	ERecastPartitioning_MAX        = 3
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct NavigationSystem.SupportedAreaData
// 0x0020
struct FSupportedAreaData
{
	struct FString                                     AreaClassName;                                            // 0x0000(0x0010) (ZeroConstructor)
	int                                                AreaID;                                                   // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class UClass*                                      AreaClass;                                                // 0x0018(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct NavigationSystem.NavCollisionCylinder
// 0x0020
struct FNavCollisionCylinder
{
	struct FVector                                     Offset;                                                   // 0x0000(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct NavigationSystem.NavCollisionBox
// 0x0030
struct FNavCollisionBox
{
	struct FVector                                     Offset;                                                   // 0x0000(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Extent;                                                   // 0x0018(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct NavigationSystem.NavGraphNode
// 0x0018
struct FNavGraphNode
{
	class UObject*                                     Owner;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct NavigationSystem.NavigationFilterArea
// 0x0018
struct FNavigationFilterArea
{
	class UClass*                                      AreaClass;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TravelCostOverride;                                       // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EnteringCostOverride;                                     // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsExcluded : 1;                                          // 0x0010(0x0001) (Edit)
	unsigned char                                      bOverrideTravelCost : 1;                                  // 0x0010(0x0001) (Edit)
	unsigned char                                      bOverrideEnteringCost : 1;                                // 0x0010(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct NavigationSystem.NavigationFilterFlags
// 0x0004
struct FNavigationFilterFlags
{
	unsigned char                                      bNavFlag0 : 1;                                            // 0x0000(0x0001) (Edit)
	unsigned char                                      bNavFlag1 : 1;                                            // 0x0000(0x0001) (Edit)
	unsigned char                                      bNavFlag2 : 1;                                            // 0x0000(0x0001) (Edit)
	unsigned char                                      bNavFlag3 : 1;                                            // 0x0000(0x0001) (Edit)
	unsigned char                                      bNavFlag4 : 1;                                            // 0x0000(0x0001) (Edit)
	unsigned char                                      bNavFlag5 : 1;                                            // 0x0000(0x0001) (Edit)
	unsigned char                                      bNavFlag6 : 1;                                            // 0x0000(0x0001) (Edit)
	unsigned char                                      bNavFlag7 : 1;                                            // 0x0000(0x0001) (Edit)
	unsigned char                                      bNavFlag8 : 1;                                            // 0x0001(0x0001) (Edit)
	unsigned char                                      bNavFlag9 : 1;                                            // 0x0001(0x0001) (Edit)
	unsigned char                                      bNavFlag10 : 1;                                           // 0x0001(0x0001) (Edit)
	unsigned char                                      bNavFlag11 : 1;                                           // 0x0001(0x0001) (Edit)
	unsigned char                                      bNavFlag12 : 1;                                           // 0x0001(0x0001) (Edit)
	unsigned char                                      bNavFlag13 : 1;                                           // 0x0001(0x0001) (Edit)
	unsigned char                                      bNavFlag14 : 1;                                           // 0x0001(0x0001) (Edit)
	unsigned char                                      bNavFlag15 : 1;                                           // 0x0001(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
};

// ScriptStruct NavigationSystem.RecastNavMeshTileGenerationDebug
// 0x0014
struct FRecastNavMeshTileGenerationDebug
{
	unsigned char                                      bEnabled : 1;                                             // 0x0000(0x0001) (Edit, Transient)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FIntVector                                  TileCoordinate;                                           // 0x0004(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bHeightfieldSolidFromRasterization : 1;                   // 0x0010(0x0001) (Edit)
	unsigned char                                      bHeightfieldSolidPostRadiusFiltering : 1;                 // 0x0010(0x0001) (Edit)
	unsigned char                                      bHeightfieldSolidPostHeightFiltering : 1;                 // 0x0010(0x0001) (Edit)
	unsigned char                                      bCompactHeightfield : 1;                                  // 0x0010(0x0001) (Edit)
	unsigned char                                      bCompactHeightfieldEroded : 1;                            // 0x0010(0x0001) (Edit)
	unsigned char                                      bCompactHeightfieldRegions : 1;                           // 0x0010(0x0001) (Edit)
	unsigned char                                      bCompactHeightfieldDistances : 1;                         // 0x0010(0x0001) (Edit)
	unsigned char                                      bTileCacheLayerAreas : 1;                                 // 0x0010(0x0001) (Edit)
	unsigned char                                      bTileCacheLayerRegions : 1;                               // 0x0011(0x0001) (Edit)
	unsigned char                                      bTileCacheContours : 1;                                   // 0x0011(0x0001) (Edit)
	unsigned char                                      bTileCachePolyMesh : 1;                                   // 0x0011(0x0001) (Edit)
	unsigned char                                      bTileCacheDetailMesh : 1;                                 // 0x0011(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0012(0x0002) MISSED OFFSET
};

// ScriptStruct NavigationSystem.NavGraphEdge
// 0x0018
struct FNavGraphEdge
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct NavigationSystem.NavLinkCustomInstanceData
// 0x0008 (0x0070 - 0x0068)
struct FNavLinkCustomInstanceData : public FActorComponentInstanceData
{
	uint32_t                                           NavLinkUserId;                                            // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
};

// ScriptStruct NavigationSystem.RecastNavMeshGenerationProperties
// 0x0040
struct FRecastNavMeshGenerationProperties
{
	int                                                TilePoolSize;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TileSizeUU;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CellSize;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CellHeight;                                               // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AgentRadius;                                              // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AgentHeight;                                              // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AgentMaxSlope;                                            // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AgentMaxStepHeight;                                       // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinRegionArea;                                            // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MergeRegionSize;                                          // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxSimplificationError;                                   // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                TileNumberHardLimit;                                      // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERecastPartitioning>                   RegionPartitioning;                                       // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERecastPartitioning>                   LayerPartitioning;                                        // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0032(0x0002) MISSED OFFSET
	int                                                RegionChunkSplits;                                        // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                LayerChunkSplits;                                         // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bSortNavigationAreasByCost : 1;                           // 0x003C(0x0001) (Edit)
	unsigned char                                      bPerformVoxelFiltering : 1;                               // 0x003C(0x0001) (Edit)
	unsigned char                                      bMarkLowHeightAreas : 1;                                  // 0x003C(0x0001) (Edit)
	unsigned char                                      bUseExtraTopCellWhenMarkingAreas : 1;                     // 0x003C(0x0001) (Edit)
	unsigned char                                      bFilterLowSpanSequences : 1;                              // 0x003C(0x0001) (Edit)
	unsigned char                                      bFilterLowSpanFromTileCache : 1;                          // 0x003C(0x0001) (Edit)
	unsigned char                                      bFixedTilePoolSize : 1;                                   // 0x003C(0x0001) (Edit)
	unsigned char                                      bIsWorldPartitioned : 1;                                  // 0x003C(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
