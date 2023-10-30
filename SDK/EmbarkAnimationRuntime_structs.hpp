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

// Enum EmbarkAnimationRuntime.EPSMExpressionType
enum class EPSMExpressionType : uint8_t
{
	ET_INVALID                     = 0,
	ET_IntMatch                    = 1,
	ET_IntRange                    = 2,
	ET_FloatRange                  = 3,
	ET_GameplayTagMatch            = 4,
	ET_BoolMatch                   = 5,
	ET_EnumMatch                   = 6,
	ET_MAX                         = 7
};


// Enum EmbarkAnimationRuntime.EPlantedStatus
enum class EPlantedStatus : uint8_t
{
	Planted                        = 0,
	Unplanted                      = 1,
	Replanting                     = 2,
	PlantedThisFrame               = 3,
	UnplantedThisFrame             = 4,
	StartedReplantingThisFrame     = 5,
	WentFromReplantingToUnplanted  = 6,
	EPlantedStatus_MAX             = 7
};


// Enum EmbarkAnimationRuntime.EUnplantStatus
enum class EUnplantStatus : uint8_t
{
	PlantingAllowed                = 0,
	AnimWantsToUnplant             = 1,
	SystemWantsToUnplant           = 2,
	EUnplantStatus_MAX             = 3
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EmbarkAnimationRuntime.SequenceMixerEntry
// 0x0018
struct FSequenceMixerEntry
{
	class UAnimSequenceBase*                           SequenceBase;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Length;                                                   // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TrimStart;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TrimEnd;                                                  // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkAnimationRuntime.BoneWeightsBlendArrayEntry
// 0x0010
struct FBoneWeightsBlendArrayEntry
{
	class UBoneWeightsAsset*                           BoneWeightsAsset;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EntryPlacementValue;                                      // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                IndexIntoUniqueAssetArray;                                // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkAnimationRuntime.TagMapping
// 0x0028
struct FTagMapping
{
	struct FGameplayTagContainer                       TagContainer;                                             // 0x0000(0x0020) (Edit, BlueprintVisible)
	bool                                               bExactMatching;                                           // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct EmbarkAnimationRuntime.AnimNode_BlendListByGameplayTag
// 0x0030 (0x0078 - 0x0048)
struct FAnimNode_BlendListByGameplayTag : public FAnimNode_BlendListBase
{
	struct FGameplayTagContainer                       GameplayTagContainerInput;                                // 0x0048(0x0020) (Edit, BlueprintVisible)
	TArray<struct FTagMapping>                         TagToPoseIndexMappings;                                   // 0x0068(0x0010) (Edit, EditFixedSize, ZeroConstructor)
};

// ScriptStruct EmbarkAnimationRuntime.AnimNode_CurveMask
// 0x0030 (0x0040 - 0x0010)
struct FAnimNode_CurveMask : public FAnimNode_Base
{
	struct FPoseLink                                   InputPose;                                                // 0x0010(0x0010) (Edit, BlueprintVisible)
	TArray<struct FName>                               CurveNamesToMaskOut;                                      // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
};

// ScriptStruct EmbarkAnimationRuntime.AnimNode_DynamicPoseBlendSpace
// 0x0040 (0x0050 - 0x0010)
struct FAnimNode_DynamicPoseBlendSpace : public FAnimNode_Base
{
	TArray<struct FPoseLink>                           InputPoses;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              X;                                                        // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 TemplateBlendSpace;                                       // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0030(0x0020) MISSED OFFSET
};

// ScriptStruct EmbarkAnimationRuntime.LODGate_LODDriver
// 0x0038
struct FLODGate_LODDriver
{
	struct FName                                       LodGateStateMachineID;                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               LodGateStateNames;                                        // 0x0008(0x0010) (Edit, ZeroConstructor)
	TWeakObjectPtr<class UAnimInstance>                DriverInstance;                                           // 0x0018(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0020(0x0010) MISSED OFFSET
	int                                                StateMachineNodeIndex;                                    // 0x0030(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct EmbarkAnimationRuntime.LODGate_DriverCollection
// 0x0020
struct FLODGate_DriverCollection
{
	TArray<struct FLODGate_LODDriver>                  LODDrivers;                                               // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAnimInstanceProxy>                  TransitionProxies;                                        // 0x0010(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct EmbarkAnimationRuntime.AnimNode_LODGate
// 0x0080 (0x0090 - 0x0010)
struct FAnimNode_LODGate : public FAnimNode_Base
{
	struct FPoseLink                                   InputPose;                                                // 0x0010(0x0010) (Edit, BlueprintVisible)
	int                                                CollectionToUse;                                          // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	TArray<struct FLODGate_DriverCollection>           LODDriverCollections;                                     // 0x0028(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData01[0x58];                                      // 0x0038(0x0058) MISSED OFFSET
};

// ScriptStruct EmbarkAnimationRuntime.BoneWeightsAssetBlendArrayData
// 0x0048
struct FBoneWeightsAssetBlendArrayData
{
	TArray<class UBoneWeightsAsset*>                   BoneWeightsAssets;                                        // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0010(0x0020) MISSED OFFSET
	float                                              BlendDuration;                                            // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x0034(0x0014) MISSED OFFSET
};

// ScriptStruct EmbarkAnimationRuntime.AnimNode_PoseMask
// 0x00D0 (0x00E0 - 0x0010)
struct FAnimNode_PoseMask : public FAnimNode_Base
{
	struct FPoseLink                                   InputPose;                                                // 0x0010(0x0010) (Edit, BlueprintVisible)
	class UBoneWeightsAsset*                           BoneWeightsAsset;                                         // 0x0020(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                SelectedAssetIndex;                                       // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FBoneWeightsAssetBlendArrayData             BWABlendArrayData;                                        // 0x0030(0x0048) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x68];                                      // 0x0078(0x0068) MISSED OFFSET
};

// ScriptStruct EmbarkAnimationRuntime.AnimNode_PoseMaskBlendArray
// 0x00B0 (0x00C0 - 0x0010)
struct FAnimNode_PoseMaskBlendArray : public FAnimNode_Base
{
	struct FPoseLink                                   InputPose;                                                // 0x0010(0x0010) (Edit, BlueprintVisible)
	class UBoneWeightsBlendArrayAsset*                 BoneWeightsBlendArrayAsset;                               // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Input;                                                    // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x94];                                      // 0x002C(0x0094) MISSED OFFSET
};

// ScriptStruct EmbarkAnimationRuntime.ReferencedInput
// 0x0008
struct FReferencedInput
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	int                                                InternalArrayIndex;                                       // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkAnimationRuntime.FloatRangeValues
// 0x0008
struct FFloatRangeValues
{
	float                                              MinValue;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkAnimationRuntime.FloatRangeEvaluator
// 0x0018
struct FFloatRangeEvaluator
{
	struct FReferencedInput                            ReferencedInput;                                          // 0x0000(0x0008)
	TArray<struct FFloatRangeValues>                   PerPoseValues;                                            // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkAnimationRuntime.IntValueRange
// 0x0008
struct FIntValueRange
{
	int                                                MinValue;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxValue;                                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkAnimationRuntime.IntRangeEvaluator
// 0x0018
struct FIntRangeEvaluator
{
	struct FReferencedInput                            ReferencedInput;                                          // 0x0000(0x0008)
	TArray<struct FIntValueRange>                      PerPoseValues;                                            // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkAnimationRuntime.BoolMatchingEvaluator
// 0x0018
struct FBoolMatchingEvaluator
{
	struct FReferencedInput                            ReferencedInput;                                          // 0x0000(0x0008)
	TArray<bool>                                       PerPoseValue;                                             // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkAnimationRuntime.GameplayTagMatchingEvaluator
// 0x0018
struct FGameplayTagMatchingEvaluator
{
	struct FReferencedInput                            ReferencedInput;                                          // 0x0000(0x0008)
	TArray<struct FGameplayTagContainer>               PerPoseValue;                                             // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkAnimationRuntime.IntMatchingEvaluator
// 0x0018
struct FIntMatchingEvaluator
{
	struct FReferencedInput                            ReferencedInput;                                          // 0x0000(0x0008)
	TArray<int>                                        PerPoseValue;                                             // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkAnimationRuntime.MatchingEnumEntries
// 0x0010
struct FMatchingEnumEntries
{
	TArray<unsigned char>                              EnumValues;                                               // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkAnimationRuntime.EnumMatchingEvaluator
// 0x0018
struct FEnumMatchingEvaluator
{
	struct FReferencedInput                            ReferencedInput;                                          // 0x0000(0x0008)
	TArray<struct FMatchingEnumEntries>                PerPoseValues;                                            // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkAnimationRuntime.AnimNode_PoseSelectionMatrix
// 0x0120 (0x0130 - 0x0010)
struct FAnimNode_PoseSelectionMatrix : public FAnimNode_Base
{
	TArray<struct FPoseLink>                           InputPoses;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FName>                               InputPosesNames;                                          // 0x0020(0x0010) (ZeroConstructor)
	float                                              BlendTime;                                                // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bChooseOnce;                                              // 0x0034(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bResetChildOnActivation;                                  // 0x0035(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0036(0x0002) MISSED OFFSET
	TArray<int>                                        IntInputs;                                                // 0x0038(0x0010) (Edit, ZeroConstructor)
	TArray<float>                                      FloatInputs;                                              // 0x0048(0x0010) (Edit, ZeroConstructor)
	TArray<bool>                                       BoolInputs;                                               // 0x0058(0x0010) (Edit, ZeroConstructor)
	TArray<struct FGameplayTagContainer>               TagInputs;                                                // 0x0068(0x0010) (Edit, ZeroConstructor)
	TArray<unsigned char>                              EnumInputs;                                               // 0x0078(0x0010) (Edit, ZeroConstructor)
	TArray<struct FFloatRangeEvaluator>                FloatRangeEvaluators;                                     // 0x0088(0x0010) (ZeroConstructor)
	TArray<struct FBoolMatchingEvaluator>              BoolMatchingEvaluators;                                   // 0x0098(0x0010) (ZeroConstructor)
	TArray<struct FIntRangeEvaluator>                  IntRangeEvaluators;                                       // 0x00A8(0x0010) (ZeroConstructor)
	TArray<struct FIntMatchingEvaluator>               IntMatchingEvaluators;                                    // 0x00B8(0x0010) (ZeroConstructor)
	TArray<struct FGameplayTagMatchingEvaluator>       GameplayTagMatchingEvaluators;                            // 0x00C8(0x0010) (ZeroConstructor)
	TArray<struct FEnumMatchingEvaluator>              EnumMatchingEvaluators;                                   // 0x00D8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x48];                                      // 0x00E8(0x0048) MISSED OFFSET
};

// ScriptStruct EmbarkAnimationRuntime.AnimSubsystem_CompiledPinExpressions
// 0x0000 (0x0008 - 0x0008)
struct FAnimSubsystem_CompiledPinExpressions : public FAnimSubsystem
{

};

// ScriptStruct EmbarkAnimationRuntime.EmbarkAnimInstanceProxy_Base
// 0x0010 (0x0890 - 0x0880)
struct FEmbarkAnimInstanceProxy_Base : public FAnimInstanceProxy
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0880(0x0010) MISSED OFFSET
};

// ScriptStruct EmbarkAnimationRuntime.RigUnit_EmbarkAim
// 0x0070 (0x0140 - 0x00D0)
struct FRigUnit_EmbarkAim : public FRigUnit_HighlevelBaseMutable
{
	struct FVector                                     Point;                                                    // 0x00D0(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Target;                                                   // 0x00E8(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     UpTarget;                                                 // 0x0100(0x0018) (ZeroConstructor, IsPlainOldData)
	bool                                               bDebugDrawing;                                            // 0x0118(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0119(0x0007) MISSED OFFSET
	struct FQuat                                       Result;                                                   // 0x0120(0x0020) (IsPlainOldData)
};

// ScriptStruct EmbarkAnimationRuntime.RigUnit_EmbarkSphericalAim
// 0x00A0 (0x0170 - 0x00D0)
struct FRigUnit_EmbarkSphericalAim : public FRigUnit_HighlevelBaseMutable
{
	struct FTransform                                  Origin;                                                   // 0x00D0(0x0060) (IsPlainOldData)
	struct FVector                                     Target;                                                   // 0x0130(0x0018) (ZeroConstructor, IsPlainOldData)
	bool                                               bDebugDrawing;                                            // 0x0148(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0149(0x0007) MISSED OFFSET
	struct FQuat                                       Result;                                                   // 0x0150(0x0020) (IsPlainOldData)
};

// ScriptStruct EmbarkAnimationRuntime.EmbarkCircleIK_DebugSettings
// 0x0014
struct FEmbarkCircleIK_DebugSettings
{
	bool                                               bEnabled;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FLinearColor                                ColorTint;                                                // 0x0004(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkAnimationRuntime.StartMidEndIndexes
// 0x000C
struct FStartMidEndIndexes
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct EmbarkAnimationRuntime.EmbarkCircleIK_SolveParams
// 0x00A0
struct FEmbarkCircleIK_SolveParams
{
	struct FVector                                     IKStartLocation;                                          // 0x0000(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     IKPoleVectorLocation;                                     // 0x0018(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FTransform                                  IKEndTransform;                                           // 0x0030(0x0060) (IsPlainOldData)
	float                                              MaxStretchDistance;                                       // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Limb1Length;                                              // 0x0094(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Limb2Length;                                              // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
};

// ScriptStruct EmbarkAnimationRuntime.StartMidEndTransforms
// 0x0120
struct FStartMidEndTransforms
{
	unsigned char                                      UnknownData00[0x120];                                     // 0x0000(0x0120) MISSED OFFSET
};

// ScriptStruct EmbarkAnimationRuntime.RigUnit_EmbarkCircleIK
// 0x0210 (0x02E0 - 0x00D0)
struct FRigUnit_EmbarkCircleIK : public FRigUnit_HighlevelBaseMutable
{
	struct FName                                       StartBone;                                                // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       MidBone;                                                  // 0x00D8(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       EndBone;                                                  // 0x00E0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E8(0x0008) MISSED OFFSET
	struct FEmbarkCircleIK_SolveParams                 IKSolveParams;                                            // 0x00F0(0x00A0)
	float                                              Weight;                                                   // 0x0190(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FEmbarkCircleIK_DebugSettings               DebugSettings;                                            // 0x0194(0x0014)
	struct FStartMidEndIndexes                         CachedBoneIndexes;                                        // 0x01A8(0x000C) (Transient)
	unsigned char                                      UnknownData01[0xC];                                       // 0x01B4(0x000C) MISSED OFFSET
	struct FStartMidEndTransforms                      InitialBoneOffsets;                                       // 0x01C0(0x0120) (Transient)
};

// ScriptStruct EmbarkAnimationRuntime.FootPlantBoundaries
// 0x001C
struct FFootPlantBoundaries
{
	float                                              AllowPlantVelocityThreshold;                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AllowPlantDistanceToAnimThreshold;                        // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AllowReplantDistanceToAnimThreshold;                      // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              UnplantBlendoutDuration;                                  // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxSystemHyperExtensionDistance;                          // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxSystemPlantDistance;                                   // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bForceUnplanted;                                          // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
};

// ScriptStruct EmbarkAnimationRuntime.EmbarkFootPlanting_FootState
// 0x00F0
struct FEmbarkFootPlanting_FootState
{
	struct FTransform                                  FloorTransform;                                           // 0x0000(0x0060) (IsPlainOldData)
	struct FTransform                                  BlendedFootTransform;                                     // 0x0060(0x0060) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00C0(0x0004) MISSED OFFSET
	float                                              CurrentBlendoutTime;                                      // 0x00C4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FootVelocity;                                             // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET
	struct FVector                                     CachedToeLocationInFloorSpace;                            // 0x00D0(0x0018) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x00E8(0x0008) MISSED OFFSET
};

// ScriptStruct EmbarkAnimationRuntime.LegIndexes
// 0x000C
struct FLegIndexes
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct EmbarkAnimationRuntime.RigUnit_EmbarkFootPlanting
// 0x0200 (0x02D0 - 0x00D0)
struct FRigUnit_EmbarkFootPlanting : public FRigUnit_HighlevelBaseMutable
{
	struct FName                                       HipBone;                                                  // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       FootBone;                                                 // 0x00D8(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       ToeBone;                                                  // 0x00E0(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              FootVelocityCurve;                                        // 0x00E8(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bSpaceSwitchToNewFloor;                                   // 0x00EC(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bResetFootplantStates;                                    // 0x00ED(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00EE(0x0002) MISSED OFFSET
	struct FTransform                                  FloorTransform;                                           // 0x00F0(0x0060) (IsPlainOldData)
	struct FFootPlantBoundaries                        Boundaries;                                               // 0x0150(0x001C)
	unsigned char                                      UnknownData01[0x4];                                       // 0x016C(0x0004) MISSED OFFSET
	struct FTransform                                  FootIKTransform;                                          // 0x0170(0x0060) (IsPlainOldData)
	float                                              PlantStatus;                                              // 0x01D0(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FLegIndexes                                 CachedLegIndexes;                                         // 0x01D4(0x000C) (Transient)
	struct FEmbarkFootPlanting_FootState               FootState;                                                // 0x01E0(0x00F0) (Transient)
};

// ScriptStruct EmbarkAnimationRuntime.EmbarkSOD_DebugSettings
// 0x000C
struct FEmbarkSOD_DebugSettings
{
	bool                                               bEnabled;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              LineThickness;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GraphSize;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkAnimationRuntime.EmbarkSOD_DebugGraph
// 0x0E5C
struct FEmbarkSOD_DebugGraph
{
	unsigned char                                      UnknownData00[0xE5C];                                     // 0x0000(0x0E5C) MISSED OFFSET
};

// ScriptStruct EmbarkAnimationRuntime.RigUnit_EmbarkSOD
// 0x0FB0 (0x1080 - 0x00D0)
struct FRigUnit_EmbarkSOD : public FRigUnit_HighlevelBaseMutable
{
	float                                              Frequency;                                                // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Damping;                                                  // 0x00D4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Response;                                                 // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              IntermediateSpeed;                                        // 0x00DC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PastIntermediateSpeed;                                    // 0x00E0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               HasIntermediate;                                          // 0x00E4(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00E5(0x0003) MISSED OFFSET
	struct FVector                                     ClampIntermedatePosiviteAxes;                             // 0x00E8(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     ClampIntermedateNegativeAxes;                             // 0x0100(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Target;                                                   // 0x0118(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     IntermediateTarget;                                       // 0x0130(0x0018) (ZeroConstructor, Transient, IsPlainOldData)
	struct FEmbarkSOD_DebugSettings                    DebugSettings;                                            // 0x0148(0x000C)
	struct FEmbarkSOD_DebugGraph                       DebugGraph;                                               // 0x0154(0x0E5C)
	struct FVector                                     Result;                                                   // 0x0FB0(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // 0x0FC8(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Acceleration;                                             // 0x0FE0(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FSODSpringVector                            SODVector;                                                // 0x0FF8(0x0088) (Transient)
};

// ScriptStruct EmbarkAnimationRuntime.RigUnit_EmbarkVectorDeltaAimBones_GlobalOrientation
// 0x0030
struct FRigUnit_EmbarkVectorDeltaAimBones_GlobalOrientation
{
	struct FVector                                     Forward;                                                  // 0x0000(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Up;                                                       // 0x0018(0x0018) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkAnimationRuntime.RigUnit_EmbarkVectorDeltaAimBones_BoneSettings
// 0x000C
struct FRigUnit_EmbarkVectorDeltaAimBones_BoneSettings
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkAnimationRuntime.RigUnit_EmbarkVectorDeltaAimBones_CachedBones
// 0x0020
struct FRigUnit_EmbarkVectorDeltaAimBones_CachedBones
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct EmbarkAnimationRuntime.RigUnit_EmbarkVectorDeltaAimBones
// 0x00C0 (0x0190 - 0x00D0)
struct FRigUnit_EmbarkVectorDeltaAimBones : public FRigUnit_HighlevelBaseMutable
{
	float                                              MaxAngle;                                                 // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bSmoothBlendOffWhenOutsideMaxAngle;                       // 0x00D4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00D5(0x0003) MISSED OFFSET
	struct FVector                                     ReferencePoint;                                           // 0x00D8(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     AnimatedTarget;                                           // 0x00F0(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     ProceduralTarget;                                         // 0x0108(0x0018) (ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // 0x0120(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0124(0x0004) MISSED OFFSET
	struct FRigUnit_EmbarkVectorDeltaAimBones_GlobalOrientation GlobalOrientation;                                        // 0x0128(0x0030)
	TArray<struct FRigUnit_EmbarkVectorDeltaAimBones_BoneSettings> Bones;                                                    // 0x0158(0x0010) (ZeroConstructor)
	struct FRigUnit_EmbarkVectorDeltaAimBones_CachedBones CachedBones;                                              // 0x0168(0x0020) (Transient)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0188(0x0008) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
