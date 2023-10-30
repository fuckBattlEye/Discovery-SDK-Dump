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

// Enum EmbarkFracturedDestructible.EDSMDamageType
enum class EDSMDamageType : uint8_t
{
	PointDamage                    = 0,
	RadialDamage                   = 1,
	FireDamage                     = 2,
	IntegrityFailure               = 3,
	Delayed                        = 4,
	MAX_NUM                        = 5,
	EDSMDamageType_MAX             = 6
};


// Enum EmbarkFracturedDestructible.EDestructionEventType
enum class EDestructionEventType : uint8_t
{
	None                           = 0,
	FracturedBoneDestroyed         = 1,
	BreakEvent                     = 2,
	PropDestroyed                  = 3,
	Fire                           = 4,
	EDestructionEventType_MAX      = 5
};


// Enum EmbarkFracturedDestructible.EEdgeMeshSize
enum class EEdgeMeshSize : uint8_t
{
	INVALID                        = 0,
	E50                            = 1,
	E100                           = 2,
	E200                           = 3,
	E300                           = 4,
	E400                           = 5,
	SCATTER                        = 6,
	EEdgeMeshSize_MAX              = 7
};


// Enum EmbarkFracturedDestructible.EFracturedDestructibleStrainMode
enum class EFracturedDestructibleStrainMode : uint8_t
{
	TryUseStrainBoneGroups         = 0,
	OneStrainBonePerComponent      = 1,
	OneStrainBonePerActor          = 2,
	OneStrainBonePerBone           = 3,
	MergeWithNeighbour             = 4,
	DisableStrain                  = 5,
	EFracturedDestructibleStrainMode_MAX = 6
};


// Enum EmbarkFracturedDestructible.EMergeWithNeighbourMode
enum class EMergeWithNeighbourMode : uint8_t
{
	PerBoneBestFit                 = 0,
	PerComponentBestFit            = 1,
	PerActorBestFit                = 2,
	EMergeWithNeighbourMode_MAX    = 3
};


// Enum EmbarkFracturedDestructible.EFracturedStrainSolverType
enum class EFracturedStrainSolverType : uint8_t
{
	NoStrainSolver                 = 0,
	DebugGlobalStrainSolver        = 1,
	BlockGlobalStrainSolver        = 2,
	SequentialStrainSolver         = 3,
	ReducedDofBlockGlobalStrainSolver = 4,
	EFracturedStrainSolverType_MAX = 5
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EmbarkFracturedDestructible.FracturedDestructionReplicationSettings
// 0x0050
struct FFracturedDestructionReplicationSettings
{
	struct FVector                                     MaxBoneLocationBounds;                                    // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     MinBoneLocationBounds;                                    // 0x0018(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FIntVector                                  FullChangeBitCountXYZ;                                    // 0x0030(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FIntVector                                  SmallChangeBitCountXYZ;                                   // 0x003C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                BitCountForSmallChangeRotation;                           // 0x0048(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                BitCountForFullChangeRotation;                            // 0x004C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkFracturedDestructible.DestructibleBoneHandle
// 0x0004
struct FDestructibleBoneHandle
{
	int                                                _Data;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkFracturedDestructible.FracturedDestructibleOverlappingProp
// 0x0058
struct FFracturedDestructibleOverlappingProp
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: DestructionListenerComponent
	unsigned char                                      UnknownData01[0x28];                                      // 0x0028(0x0028) UNKNOWN PROPERTY: OverlappingComponent
	int                                                ItemIndex;                                                // 0x0050(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct EmbarkFracturedDestructible.FracturedDestructibleRuntimeData
// 0x0010
struct FFracturedDestructibleRuntimeData
{
	TArray<struct FFracturedDestructibleOverlappingProp> RuntimeRegisteredProps;                                   // 0x0000(0x0010) (Edit, ZeroConstructor, EditConst)
};

// ScriptStruct EmbarkFracturedDestructible.FracturedDestructibleBoneLevelData
// 0x0070
struct FFracturedDestructibleBoneLevelData
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: DestructibleMeshComponentPtr
	struct FDestructibleBoneHandle                     BoneHandle;                                               // 0x0028(0x0004) (Edit, EditConst)
	bool                                               bIsSupportive;                                            // 0x002C(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bIsDestructible;                                          // 0x002D(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x002E(0x0002) MISSED OFFSET
	TArray<struct FDestructibleBoneHandle>             BoneConnections;                                          // 0x0030(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<struct FFracturedDestructibleOverlappingProp> RegisteredProps;                                          // 0x0040(0x0010) (Edit, ZeroConstructor, EditConst)
	float                                              Health;                                                   // 0x0050(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	struct FVector                                     InitialLocation;                                          // 0x0058(0x0018) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct EmbarkFracturedDestructible.StrainBoneHandle
// 0x0004
struct FStrainBoneHandle
{
	int                                                Index;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkFracturedDestructible.DestructibleBoneHandlePair
// 0x0008
struct FDestructibleBoneHandlePair
{
	struct FDestructibleBoneHandle                     BoneHandle1;                                              // 0x0000(0x0004)
	struct FDestructibleBoneHandle                     BoneHandle2;                                              // 0x0004(0x0004)
};

// ScriptStruct EmbarkFracturedDestructible.DestructibleBoneHandlePairArray
// 0x0010
struct FDestructibleBoneHandlePairArray
{
	TArray<struct FDestructibleBoneHandlePair>         BoneHandlePairArray;                                      // 0x0000(0x0010) (Edit, ZeroConstructor, EditConst)
};

// ScriptStruct EmbarkFracturedDestructible.FracturedDestructibleStrainBone
// 0x0040
struct FFracturedDestructibleStrainBone
{
	struct FStrainBoneHandle                           StrainBoneHandle;                                         // 0x0000(0x0004) (Edit, EditConst)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FDestructibleBoneHandle>             BoneHandles;                                              // 0x0008(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<struct FStrainBoneHandle>                   StrainBoneConnections;                                    // 0x0018(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<struct FDestructibleBoneHandlePairArray>    StrainBoneConnectionToDestructionBoneConnections;         // 0x0028(0x0010) (Edit, ZeroConstructor, EditConst)
	bool                                               bIsSupportiveBone;                                        // 0x0038(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	int                                                StrainGraphIndex;                                         // 0x003C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct EmbarkFracturedDestructible.EmbarkDestructionGraphData
// 0x00C8
struct FEmbarkDestructionGraphData
{
	TArray<struct FFracturedDestructibleBoneLevelData> DestructibleGraphLevelData;                               // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0010(0x0050) UNKNOWN PROPERTY: DestructibleToBoneGraphIndexLookup
	TArray<struct FFracturedDestructibleStrainBone>    StrainGraphLevelData;                                     // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TMap<struct FDestructibleBoneHandle, struct FStrainBoneHandle> DestructibleBoneToStrainHandleLookup;                     // 0x0070(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	int                                                VersionNumber;                                            // 0x00C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                Hash;                                                     // 0x00C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct EmbarkFracturedDestructible.StrainMaterialSettings
// 0x0048
struct FStrainMaterialSettings
{
	double                                             BendStrainWeighting;                                      // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                BendMagnitudeRescale;                                     // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	double                                             TensionStrainWeighting;                                   // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	double                                             CompressionStrainWeighting;                               // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	double                                             ShearStrainWeighting;                                     // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	double                                             StrainBreakOffsetIncreaseByAverageScale;                  // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	double                                             StrainBreakOffsetTotal;                                   // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	double                                             StrainBreakMultipleTotal;                                 // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	double                                             StrainBreakJoinedMaterialsScaling;                        // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkFracturedDestructible.MeshArray
// 0x0010
struct FMeshArray
{
	TArray<class UStaticMesh*>                         Meshes;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct EmbarkFracturedDestructible.StrainSettings
// 0x0070
struct FStrainSettings
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	int                                                DefaultBaseLineWarmStartAverage;                          // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaxNrOfStrainBreaksPerSolve;                              // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SequentialSolverIterationCount;                           // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               UseMedianForAverage;                                      // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	double                                             NumericalSoftening;                                       // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	double                                             NumericalNanGuard;                                        // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FStrainMaterialSettings                     DefaultSettings;                                          // 0x0028(0x0048) (Edit, BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct EmbarkFracturedDestructible.EdgeMeshEntry
// 0x0070
struct FEdgeMeshEntry
{
	TArray<class UEmbarkEdgeMeshComponent*>            Instances;                                                // 0x0000(0x0010) (ExportObject, ZeroConstructor)
	class UFracturedMaterialEffects*                   BreakMaterial;                                            // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0018(0x0058) MISSED OFFSET
};

// ScriptStruct EmbarkFracturedDestructible.EdgeMeshTypeEntry
// 0x0058
struct FEdgeMeshTypeEntry
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TMap<enum class EEdgeMeshSize, struct FEdgeMeshEntry> Entries;                                                  // 0x0008(0x0050)
};

// ScriptStruct EmbarkFracturedDestructible.EmbarkBoneMassProperties
// 0x0060
struct FEmbarkBoneMassProperties
{
	float                                              Mass;                                                     // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FVector                                     LocalCenterOfMass;                                        // 0x0008(0x0018) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     MassSpaceInertiaTensor;                                   // 0x0020(0x0018) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	struct FQuat                                       MassFrame;                                                // 0x0040(0x0020) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
};

// ScriptStruct EmbarkFracturedDestructible.EmbarkEdgeMeshEntry
// 0x0080
struct FEmbarkEdgeMeshEntry
{
	struct FName                                       EdgeMeshKey;                                              // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Length;                                                   // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MeshType;                                                 // 0x000C(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0014(0x000C) MISSED OFFSET
	struct FTransform                                  EdgeTransform;                                            // 0x0020(0x0060) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
};

// ScriptStruct EmbarkFracturedDestructible.EmbarkBoneEdgeMeshes
// 0x0010
struct FEmbarkBoneEdgeMeshes
{
	TArray<struct FEmbarkEdgeMeshEntry>                Meshes;                                                   // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct EmbarkFracturedDestructible.EmbarkDestructibleBoneAssetData
// 0x0100
struct FEmbarkDestructibleBoneAssetData
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BoneRefLocation;                                          // 0x0008(0x0018) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               LinkedBones;                                              // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bIsDestructible;                                          // 0x0030(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSupportive;                                            // 0x0031(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0032(0x0002) MISSED OFFSET
	struct FName                                       PhysicalMaterial;                                         // 0x0034(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FName                                       StrainBoneGroup;                                          // 0x003C(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MeshIndex;                                                // 0x0044(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBodySetup*                                  BoneBodySetup;                                            // 0x0048(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FEmbarkBoneMassProperties                   MassProperties;                                           // 0x0050(0x0060) (BlueprintVisible, BlueprintReadOnly)
	TMap<struct FName, struct FEmbarkBoneEdgeMeshes>   EdgeMeshes;                                               // 0x00B0(0x0050) (BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct EmbarkFracturedDestructible.EmbarkDestructibleBoneData
// 0x0250
struct FEmbarkDestructibleBoneData
{
	unsigned char                                      UnknownData00[0x1F8];                                     // 0x0000(0x01F8) MISSED OFFSET
	class UPhysicalMaterial*                           PhysicalMaterial;                                         // 0x01F8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0200(0x0050) UNKNOWN PROPERTY: AttachedChildren
};

// ScriptStruct EmbarkFracturedDestructible.EmbarkFracturedDestructibleBoneRef
// 0x0030
struct FEmbarkFracturedDestructibleBoneRef
{
	struct FComponentReference                         FracturedDestructibleMeshComponent;                       // 0x0000(0x0028) (Edit, BlueprintVisible)
	struct FName                                       BoneName;                                                 // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkFracturedDestructible.BoneDestructionSettings
// 0x0058
struct FBoneDestructionSettings
{
	unsigned char                                      bOverride_bIsSupportive : 1;                              // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_bIsDestructible : 1;                            // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_bSupportiveIfOnStableGround : 1;                // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_bPruneDiagonalConnections : 1;                  // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_DiagonalPruneRotationOffset : 1;                // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_StrainGraphIndex : 1;                           // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_StrainMode : 1;                                 // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_bCutConnectionsToExternalStrainGraphs : 1;      // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_MergeWithNeighbourMode : 1;                     // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_MergeWithNeighbourOverride : 1;                 // 0x0001(0x0001) (Edit, BlueprintVisible)
	bool                                               bIsSupportive;                                            // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsDestructible;                                          // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSupportiveIfOnStableGround;                              // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPruneDiagonalConnections;                                // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	struct FRotator                                    DiagonalPruneRotationOffset;                              // 0x0008(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                StrainGraphIndex;                                         // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0024(0x0001) MISSED OFFSET
	bool                                               bCutConnectionsToExternalStrainGraphs;                    // 0x0025(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0026(0x0002) MISSED OFFSET
	struct FEmbarkFracturedDestructibleBoneRef         MergeWithNeighbourOverride;                               // 0x0028(0x0030) (Edit, BlueprintVisible)
};

// ScriptStruct EmbarkFracturedDestructible.BoneDamage
// 0x0150
struct FBoneDamage
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDamageEntireSubgraph;                                    // 0x000C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableDelayedDamage;                                     // 0x000D(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDSMDamageType>                        DamageType;                                               // 0x000E(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x000F(0x0001) MISSED OFFSET
	struct FVector                                     Origin;                                                   // 0x0010(0x0018) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ImpactPoint;                                              // 0x0028(0x0018) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // 0x0040(0x0018) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectCustomExecutionParameters    ExecutionContext;                                         // 0x0058(0x00F8) (BlueprintVisible)
};

// ScriptStruct EmbarkFracturedDestructible.BoneDamageEventType
// 0x01A0
struct FBoneDamageEventType
{
	class UEmbarkFracturedDestructibleMeshComponent*   DestructibleMeshComponent;                                // 0x0000(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBoneDamage                                 Damage;                                                   // 0x0008(0x0150) (BlueprintVisible)
	bool                                               bIsDestroyed;                                             // 0x0158(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSimulating;                                            // 0x0159(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x015A(0x0006) MISSED OFFSET
	struct FBox                                        BoneBounds;                                               // 0x0160(0x0038) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NormalizedBoneHealth;                                     // 0x0198(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x019C(0x0004) MISSED OFFSET
};

// ScriptStruct EmbarkFracturedDestructible.DestructionBlackBoardVariableHealthItem
// 0x0001
struct FDestructionBlackBoardVariableHealthItem
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct EmbarkFracturedDestructible.DestructionBlackBoardVariable
// 0x0001
struct FDestructionBlackBoardVariable
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct EmbarkFracturedDestructible.StrainBoneHandlePair
// 0x0008
struct FStrainBoneHandlePair
{
	struct FStrainBoneHandle                           StrainBoneHandle1;                                        // 0x0000(0x0004)
	struct FStrainBoneHandle                           StrainBoneHandle2;                                        // 0x0004(0x0004)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
