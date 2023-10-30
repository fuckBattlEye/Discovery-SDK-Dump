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

// Enum IKRig.ERetargetTranslationMode
enum class ERetargetTranslationMode : uint8_t
{
	None                           = 0,
	GloballyScaled                 = 1,
	Absolute                       = 2,
	ERetargetTranslationMode_MAX   = 3
};


// Enum IKRig.ERetargetRotationMode
enum class ERetargetRotationMode : uint8_t
{
	Interpolated                   = 0,
	OneToOne                       = 1,
	OneToOneReversed               = 2,
	None                           = 3,
	ERetargetRotationMode_MAX      = 4
};


// Enum IKRig.EIKRigGoalSpace
enum class EIKRigGoalSpace : uint8_t
{
	Component                      = 0,
	Additive                       = 1,
	World                          = 2,
	EIKRigGoalSpace_MAX            = 3
};


// Enum IKRig.EIKRigGoalTransformSource
enum class EIKRigGoalTransformSource : uint8_t
{
	Manual                         = 0,
	Bone                           = 1,
	ActorComponent                 = 2,
	EIKRigGoalTransformSource_MAX  = 3
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct IKRig.IKRetargetPose
// 0x0068
struct FIKRetargetPose
{
	struct FVector                                     RootTranslationOffset;                                    // 0x0000(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	TMap<struct FName, struct FQuat>                   BoneRotationOffsets;                                      // 0x0018(0x0050) (Edit)
};

// ScriptStruct IKRig.RetargetChainMap
// 0x0010
struct FRetargetChainMap
{
	struct FName                                       SourceChain;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       TargetChain;                                              // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct IKRig.IKRigGoal
// 0x00A0
struct FIKRigGoal
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) MISSED OFFSET
	struct FBoneReference                              SourceBone;                                               // 0x000C(0x0010) (Edit)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FVector                                     Position;                                                 // 0x0020(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0038(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PositionAlpha;                                            // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RotationAlpha;                                            // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0058(0x0008) MISSED OFFSET
	struct FVector                                     FinalBlendedPosition;                                     // 0x0060(0x0018) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0078(0x0008) MISSED OFFSET
	struct FQuat                                       FinalBlendedRotation;                                     // 0x0080(0x0020) (Transient, IsPlainOldData)
};

// ScriptStruct IKRig.IKRigSkeleton
// 0x0070
struct FIKRigSkeleton
{
	TArray<struct FName>                               BoneNames;                                                // 0x0000(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<int>                                        ParentIndices;                                            // 0x0010(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<struct FName>                               ExcludedBones;                                            // 0x0020(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<struct FTransform>                          CurrentPoseGlobal;                                        // 0x0030(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<struct FTransform>                          CurrentPoseLocal;                                         // 0x0040(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<struct FTransform>                          RefPoseGlobal;                                            // 0x0050(0x0010) (Edit, ZeroConstructor, EditConst)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0060(0x0010) MISSED OFFSET
};

// ScriptStruct IKRig.BoneChain
// 0x0030
struct FBoneChain
{
	struct FName                                       ChainName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBoneReference                              StartBone;                                                // 0x0008(0x0010) (Edit)
	struct FBoneReference                              EndBone;                                                  // 0x0018(0x0010) (Edit)
	struct FName                                       IKGoalName;                                               // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct IKRig.RetargetDefinition
// 0x0018
struct FRetargetDefinition
{
	struct FName                                       RootBone;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FBoneChain>                          BoneChains;                                               // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct IKRig.AnimNode_IKRig
// 0x0188 (0x01E0 - 0x0058)
struct FAnimNode_IKRig : public FAnimNode_CustomProperty
{
	struct FPoseLink                                   Source;                                                   // 0x0058(0x0010) (Edit)
	class UIKRigDefinition*                            RigDefinitionAsset;                                       // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FIKRigGoal>                          Goals;                                                    // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bStartFromRefPose;                                        // 0x0080(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0081(0x0001) MISSED OFFSET
	bool                                               bAlphaBoolEnabled;                                        // 0x0082(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0083(0x0001) MISSED OFFSET
	float                                              Alpha;                                                    // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FInputScaleBias                             AlphaScaleBias;                                           // 0x0088(0x0008) (Edit, BlueprintVisible)
	struct FInputAlphaBoolBlend                        AlphaBoolBlend;                                           // 0x0090(0x0048) (Edit, BlueprintVisible)
	struct FName                                       AlphaCurveName;                                           // 0x00D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FInputScaleBiasClamp                        AlphaScaleBiasClamp;                                      // 0x00E0(0x0030) (Edit, BlueprintVisible)
	class UIKRigProcessor*                             IKRigProcessor;                                           // 0x0110(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC0];                                      // 0x0118(0x00C0) MISSED OFFSET
	float                                              ActualAlpha;                                              // 0x01D8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x01DC(0x0004) MISSED OFFSET
};

// ScriptStruct IKRig.AnimNode_RetargetPoseFromMesh
// 0x0050 (0x0060 - 0x0010)
struct FAnimNode_RetargetPoseFromMesh : public FAnimNode_Base
{
	TWeakObjectPtr<class USkeletalMeshComponent>       SourceMeshComponent;                                      // 0x0010(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	bool                                               bUseAttachedParent;                                       // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	class UIKRetargeter*                               IKRetargeterAsset;                                        // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	class UIKRetargetProcessor*                        Processor;                                                // 0x0038(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x20];                                      // 0x0040(0x0020) MISSED OFFSET
};

// ScriptStruct IKRig.IKRigGoalContainer
// 0x0010
struct FIKRigGoalContainer
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct IKRig.GoalBone
// 0x0010
struct FGoalBone
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct IKRig.IKRigSkeletonChain
// 0x0010
struct FIKRigSkeletonChain
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct IKRig.IKRigInputSkeleton
// 0x0030
struct FIKRigInputSkeleton
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct IKRig.LimbSolverSettings
// 0x0024
struct FLimbSolverSettings
{
	float                                              ReachPrecision;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAxis>                                 HingeRotationAxis;                                        // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	int                                                MaxIterations;                                            // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableLimit;                                             // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	float                                              MinRotationAngle;                                         // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAveragePull;                                             // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	float                                              PullDistribution;                                         // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ReachStepAlpha;                                           // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableTwistCorrection;                                   // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAxis>                                 EndBoneForwardAxis;                                       // 0x0021(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0022(0x0002) MISSED OFFSET
};

// ScriptStruct IKRig.LimbLink
// 0x0068
struct FLimbLink
{
	unsigned char                                      UnknownData00[0x68];                                      // 0x0000(0x0068) MISSED OFFSET
};

// ScriptStruct IKRig.LimbSolver
// 0x0018
struct FLimbSolver
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
