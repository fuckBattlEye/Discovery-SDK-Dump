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

// Enum AnimGraphRuntime.AnimPhysAngularConstraintType
enum class EAnimPhysAngularConstraintType : uint8_t
{
	Angular                        = 0,
	Cone                           = 1,
	AnimPhysAngularConstraintType_MAX = 2
};


// Enum AnimGraphRuntime.AnimPhysLinearConstraintType
enum class EAnimPhysLinearConstraintType : uint8_t
{
	Free                           = 0,
	Limited                        = 1,
	AnimPhysLinearConstraintType_MAX = 2
};


// Enum AnimGraphRuntime.AnimPhysSimSpaceType
enum class EAnimPhysSimSpaceType : uint8_t
{
	Component                      = 0,
	Actor                          = 1,
	World                          = 2,
	RootRelative                   = 3,
	BoneRelative                   = 4,
	AnimPhysSimSpaceType_MAX       = 5
};


// Enum AnimGraphRuntime.ESphericalLimitType
enum class ESphericalLimitType : uint8_t
{
	Inner                          = 0,
	Outer                          = 1,
	ESphericalLimitType_MAX        = 2
};


// Enum AnimGraphRuntime.EBlendListTransitionType
enum class EBlendListTransitionType : uint8_t
{
	StandardBlend                  = 0,
	Inertialization                = 1,
	EBlendListTransitionType_MAX   = 2
};


// Enum AnimGraphRuntime.EDrivenBoneModificationMode
enum class EDrivenBoneModificationMode : uint8_t
{
	AddToInput                     = 0,
	ReplaceComponent               = 1,
	AddToRefPose                   = 2,
	EDrivenBoneModificationMode_MAX = 3
};


// Enum AnimGraphRuntime.EDrivenDestinationMode
enum class EDrivenDestinationMode : uint8_t
{
	Bone                           = 0,
	MorphTarget                    = 1,
	MaterialParameter              = 2,
	EDrivenDestinationMode_MAX     = 3
};


// Enum AnimGraphRuntime.EAnimFunctionCallSite
enum class EAnimFunctionCallSite : uint8_t
{
	OnInitialize                   = 0,
	OnUpdate                       = 1,
	OnBecomeRelevant               = 2,
	OnEvaluate                     = 3,
	OnInitializePostRecursion      = 4,
	OnUpdatePostRecursion          = 5,
	OnBecomeRelevantPostRecursion  = 6,
	OnEvaluatePostRecursion        = 7,
	OnStartedBlendingOut           = 8,
	OnStartedBlendingIn            = 9,
	OnFinishedBlendingOut          = 10,
	OnFinishedBlendingIn           = 11,
	EAnimFunctionCallSite_MAX      = 12
};


// Enum AnimGraphRuntime.EConstraintOffsetOption
enum class EConstraintOffsetOption : uint8_t
{
	None                           = 0,
	Offset_RefPose                 = 1,
	EConstraintOffsetOption_MAX    = 2
};


// Enum AnimGraphRuntime.CopyBoneDeltaMode
enum class ECopyBoneDeltaMode : uint8_t
{
	Accumulate                     = 0,
	Copy                           = 1,
	CopyBoneDeltaMode_MAX          = 2
};


// Enum AnimGraphRuntime.ELayeredBoneBlendMode
enum class ELayeredBoneBlendMode : uint8_t
{
	BranchFilter                   = 0,
	BlendMask                      = 1,
	ELayeredBoneBlendMode_MAX      = 2
};


// Enum AnimGraphRuntime.EAnimLayerCurveBlendMode
enum class EAnimLayerCurveBlendMode : uint8_t
{
	Blend                          = 0,
	Additive                       = 1,
	Override                       = 2,
	Ignored                        = 3,
	EAnimLayerCurveBlendMode_MAX   = 4
};


// Enum AnimGraphRuntime.EAnimLayerAdditivePoseBlendMode
enum class EAnimLayerAdditivePoseBlendMode : uint8_t
{
	LocalSpace                     = 0,
	MeshSpace                      = 1,
	EAnimLayerAdditivePoseBlendMode_MAX = 2
};


// Enum AnimGraphRuntime.EAnimLayerPoseBlendMode
enum class EAnimLayerPoseBlendMode : uint8_t
{
	LocalSpace                     = 0,
	MeshSpace                      = 1,
	EAnimLayerPoseBlendMode_MAX    = 2
};


// Enum AnimGraphRuntime.EInterpolationBlend
enum class EInterpolationBlend : uint8_t
{
	Linear                         = 0,
	Cubic                          = 1,
	Sinusoidal                     = 2,
	EaseInOutExponent2             = 3,
	EaseInOutExponent3             = 4,
	EaseInOutExponent4             = 5,
	EaseInOutExponent5             = 6,
	MAX                            = 7
};


// Enum AnimGraphRuntime.EBoneModificationMode
enum class EBoneModificationMode : uint8_t
{
	BMM_Ignore                     = 0,
	BMM_Replace                    = 1,
	BMM_Additive                   = 2,
	BMM_MAX                        = 3
};


// Enum AnimGraphRuntime.EModifyCurveApplyMode
enum class EModifyCurveApplyMode : uint8_t
{
	Add                            = 0,
	Scale                          = 1,
	Blend                          = 2,
	WeightedMovingAverage          = 3,
	RemapCurve                     = 4,
	EModifyCurveApplyMode_MAX      = 5
};


// Enum AnimGraphRuntime.EPoseDriverType
enum class EPoseDriverType : uint8_t
{
	SwingAndTwist                  = 0,
	SwingOnly                      = 1,
	Translation                    = 2,
	EPoseDriverType_MAX            = 3
};


// Enum AnimGraphRuntime.EPoseDriverSource
enum class EPoseDriverSource : uint8_t
{
	Rotation                       = 0,
	Translation                    = 1,
	EPoseDriverSource_MAX          = 2
};


// Enum AnimGraphRuntime.EPoseDriverOutput
enum class EPoseDriverOutput : uint8_t
{
	DrivePoses                     = 0,
	DriveCurves                    = 1,
	EPoseDriverOutput_MAX          = 2
};


// Enum AnimGraphRuntime.ESnapshotSourceMode
enum class ESnapshotSourceMode : uint8_t
{
	NamedSnapshot                  = 0,
	SnapshotPin                    = 1,
	ESnapshotSourceMode_MAX        = 2
};


// Enum AnimGraphRuntime.ERefPoseType
enum class ERefPoseType : uint8_t
{
	EIT_LocalSpace                 = 0,
	EIT_Additive                   = 1,
	EIT_MAX                        = 2
};


// Enum AnimGraphRuntime.ESimulationSpace
enum class ESimulationSpace : uint8_t
{
	ComponentSpace                 = 0,
	WorldSpace                     = 1,
	BaseBoneSpace                  = 2,
	ESimulationSpace_MAX           = 3
};


// Enum AnimGraphRuntime.EScaleChainInitialLength
enum class EScaleChainInitialLength : uint8_t
{
	FixedDefaultLengthValue        = 0,
	Distance                       = 1,
	ChainLength                    = 2,
	EScaleChainInitialLength_MAX   = 3
};


// Enum AnimGraphRuntime.ESequenceEvalReinit
enum class ESequenceEvalReinit : uint8_t
{
	NoReset                        = 0,
	StartPosition                  = 1,
	ExplicitTime                   = 2,
	ESequenceEvalReinit_MAX        = 3
};


// Enum AnimGraphRuntime.ESplineBoneAxis
enum class ESplineBoneAxis : uint8_t
{
	None                           = 0,
	X                              = 1,
	Y                              = 2,
	Z                              = 3,
	ESplineBoneAxis_MAX            = 4
};


// Enum AnimGraphRuntime.EWarpingEvaluationMode
enum class EWarpingEvaluationMode : uint8_t
{
	Manual                         = 0,
	Graph                          = 1,
	EWarpingEvaluationMode_MAX     = 2
};


// Enum AnimGraphRuntime.EWarpingVectorMode
enum class EWarpingVectorMode : uint8_t
{
	ComponentSpaceVector           = 0,
	ActorSpaceVector               = 1,
	WorldSpaceVector               = 2,
	IKFootRootLocalSpaceVector     = 3,
	EWarpingVectorMode_MAX         = 4
};


// Enum AnimGraphRuntime.EEasingFuncType
enum class EEasingFuncType : uint8_t
{
	Linear                         = 0,
	Sinusoidal                     = 1,
	Cubic                          = 2,
	QuadraticInOut                 = 3,
	CubicInOut                     = 4,
	HermiteCubic                   = 5,
	QuarticInOut                   = 6,
	QuinticInOut                   = 7,
	CircularIn                     = 8,
	CircularOut                    = 9,
	CircularInOut                  = 10,
	ExpIn                          = 11,
	ExpOut                         = 12,
	ExpInOut                       = 13,
	CustomCurve                    = 14,
	EEasingFuncType_MAX            = 15
};


// Enum AnimGraphRuntime.ERotationComponent
enum class ERotationComponent : uint8_t
{
	EulerX                         = 0,
	EulerY                         = 1,
	EulerZ                         = 2,
	QuaternionAngle                = 3,
	SwingAngle                     = 4,
	TwistAngle                     = 5,
	ERotationComponent_MAX         = 6
};


// Enum AnimGraphRuntime.ERBFSolverType
enum class ERBFSolverType : uint8_t
{
	Additive                       = 0,
	Interpolative                  = 1,
	ERBFSolverType_MAX             = 2
};


// Enum AnimGraphRuntime.ERBFFunctionType
enum class ERBFFunctionType : uint8_t
{
	Gaussian                       = 0,
	Exponential                    = 1,
	Linear                         = 2,
	Cubic                          = 3,
	Quintic                        = 4,
	DefaultFunction                = 5,
	ERBFFunctionType_MAX           = 6
};


// Enum AnimGraphRuntime.ERBFDistanceMethod
enum class ERBFDistanceMethod : uint8_t
{
	Euclidean                      = 0,
	Quaternion                     = 1,
	SwingAngle                     = 2,
	TwistAngle                     = 3,
	DefaultMethod                  = 4,
	ERBFDistanceMethod_MAX         = 5
};


// Enum AnimGraphRuntime.ERBFNormalizeMethod
enum class ERBFNormalizeMethod : uint8_t
{
	OnlyNormalizeAboveOne          = 0,
	AlwaysNormalize                = 1,
	NormalizeWithinMedian          = 2,
	NoNormalization                = 3,
	ERBFNormalizeMethod_MAX        = 4
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AnimGraphRuntime.LinkedAnimGraphReference
// 0x0000 (0x0010 - 0x0010)
struct FLinkedAnimGraphReference : public FAnimNodeReference
{

};

// ScriptStruct AnimGraphRuntime.SequenceEvaluatorReference
// 0x0000 (0x0010 - 0x0010)
struct FSequenceEvaluatorReference : public FAnimNodeReference
{

};

// ScriptStruct AnimGraphRuntime.SequencePlayerReference
// 0x0000 (0x0010 - 0x0010)
struct FSequencePlayerReference : public FAnimNodeReference
{

};

// ScriptStruct AnimGraphRuntime.SkeletalControlReference
// 0x0000 (0x0010 - 0x0010)
struct FSkeletalControlReference : public FAnimNodeReference
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListBase
// 0x0038 (0x0048 - 0x0010)
struct FAnimNode_BlendListBase : public FAnimNode_Base
{
	TArray<struct FPoseLink>                           BlendPose;                                                // 0x0010(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0020(0x0028) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_SkeletalControlBase
// 0x00B8 (0x00C8 - 0x0010)
struct FAnimNode_SkeletalControlBase : public FAnimNode_Base
{
	struct FComponentSpacePoseLink                     ComponentPose;                                            // 0x0010(0x0010) (Edit, BlueprintVisible)
	int                                                LODThreshold;                                             // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ActualAlpha;                                              // 0x0024(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0028(0x0001) MISSED OFFSET
	bool                                               bAlphaBoolEnabled;                                        // 0x0029(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x002A(0x0002) MISSED OFFSET
	float                                              Alpha;                                                    // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FInputScaleBias                             AlphaScaleBias;                                           // 0x0030(0x0008) (Edit, BlueprintVisible)
	struct FInputAlphaBoolBlend                        AlphaBoolBlend;                                           // 0x0038(0x0048) (Edit, BlueprintVisible)
	struct FName                                       AlphaCurveName;                                           // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FInputScaleBiasClamp                        AlphaScaleBiasClamp;                                      // 0x0088(0x0030) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData02[0x10];                                      // 0x00B8(0x0010) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.IKFootPelvisPullDownSolver
// 0x0070
struct FIKFootPelvisPullDownSolver
{
	struct FVectorRK4SpringInterpolator                PelvisAdjustmentInterp;                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0008(0x0058) MISSED OFFSET
	float                                              PelvisAdjustmentInterpAlpha;                              // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PelvisAdjustmentMaxDistance;                              // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PelvisAdjustmentErrorTolerance;                           // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PelvisAdjustmentMaxIter;                                  // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.WarpingVectorValue
// 0x0020
struct FWarpingVectorValue
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FVector                                     Value;                                                    // 0x0008(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimationStateResultReference
// 0x0000 (0x0010 - 0x0010)
struct FAnimationStateResultReference : public FAnimNodeReference
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpacePlayer
// 0x0030 (0x0068 - 0x0038)
struct FAnimNode_BlendSpacePlayer : public FAnimNode_AssetPlayerBase
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0038(0x0028) MISSED OFFSET
	class UBlendSpace*                                 PreviousBlendSpace;                                       // 0x0060(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_AimOffsetLookAt
// 0x0168 (0x01D0 - 0x0068)
struct FAnimNode_AimOffsetLookAt : public FAnimNode_BlendSpacePlayer
{
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0068(0x00C8) MISSED OFFSET
	struct FPoseLink                                   BasePose;                                                 // 0x0130(0x0010) (Edit, BlueprintVisible)
	int                                                LODThreshold;                                             // 0x0140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       SourceSocketName;                                         // 0x0144(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       PivotSocketName;                                          // 0x014C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0154(0x0004) MISSED OFFSET
	struct FVector                                     LookAtLocation;                                           // 0x0158(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SocketAxis;                                               // 0x0170(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // 0x0188(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x44];                                      // 0x018C(0x0044) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimPhysConstraintSetup
// 0x0088
struct FAnimPhysConstraintSetup
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FVector                                     LinearAxesMin;                                            // 0x0008(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LinearAxesMax;                                            // 0x0020(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0038(0x0004) MISSED OFFSET
	float                                              ConeAngle;                                                // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AngularLimitsMin;                                         // 0x0040(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AngularLimitsMax;                                         // 0x0058(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AngularTarget;                                            // 0x0070(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimPhysPlanarLimit
// 0x0070
struct FAnimPhysPlanarLimit
{
	struct FBoneReference                              DrivingBone;                                              // 0x0000(0x0010) (Edit)
	struct FTransform                                  PlaneTransform;                                           // 0x0010(0x0060) (Edit, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimPhysSphericalLimit
// 0x0030
struct FAnimPhysSphericalLimit
{
	struct FBoneReference                              DrivingBone;                                              // 0x0000(0x0010) (Edit)
	struct FVector                                     SphereLocalOffset;                                        // 0x0010(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LimitRadius;                                              // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.RotationRetargetingInfo
// 0x01A0
struct FRotationRetargetingInfo
{
	bool                                               bEnabled;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0001(0x000F) MISSED OFFSET
	struct FTransform                                  Source;                                                   // 0x0010(0x0060) (Edit, IsPlainOldData)
	struct FTransform                                  Target;                                                   // 0x0070(0x0060) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00D0(0x0008) MISSED OFFSET
	struct FVector                                     TwistAxis;                                                // 0x00D8(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseAbsoluteAngle;                                        // 0x00F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00F1(0x0003) MISSED OFFSET
	float                                              SourceMinimum;                                            // 0x00F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SourceMaximum;                                            // 0x00F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TargetMinimum;                                            // 0x00FC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TargetMaximum;                                            // 0x0100(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0104(0x0004) MISSED OFFSET
	struct FRuntimeFloatCurve                          CustomCurve;                                              // 0x0108(0x0088) (Edit)
	bool                                               bFlipEasing;                                              // 0x0190(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0191(0x0003) MISSED OFFSET
	float                                              EasingWeight;                                             // 0x0194(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bClamp;                                                   // 0x0198(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0199(0x0007) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_AnimDynamics
// 0x0508 (0x05D0 - 0x00C8)
struct FAnimNode_AnimDynamics : public FAnimNode_SkeletalControlBase
{
	float                                              LinearDampingOverride;                                    // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AngularDampingOverride;                                   // 0x00CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC0];                                      // 0x00D0(0x00C0) MISSED OFFSET
	struct FBoneReference                              RelativeSpaceBone;                                        // 0x0190(0x0010) (Edit)
	struct FBoneReference                              BoundBone;                                                // 0x01A0(0x0010) (Edit)
	struct FBoneReference                              ChainEnd;                                                 // 0x01B0(0x0010) (Edit)
	struct FVector                                     BoxExtents;                                               // 0x01C0(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocalJointOffset;                                         // 0x01D8(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GravityScale;                                             // 0x01F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x01F4(0x0004) MISSED OFFSET
	struct FVector                                     GravityOverride;                                          // 0x01F8(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LinearSpringConstant;                                     // 0x0210(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AngularSpringConstant;                                    // 0x0214(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WindScale;                                                // 0x0218(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x021C(0x0004) MISSED OFFSET
	struct FVector                                     ComponentLinearAccScale;                                  // 0x0220(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ComponentLinearVelScale;                                  // 0x0238(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ComponentAppliedLinearAccClamp;                           // 0x0250(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AngularBiasOverride;                                      // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NumSolverIterationsPreUpdate;                             // 0x026C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumSolverIterationsPostUpdate;                            // 0x0270(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0274(0x0004) MISSED OFFSET
	struct FAnimPhysConstraintSetup                    ConstraintSetup;                                          // 0x0278(0x0088) (Edit)
	TArray<struct FAnimPhysSphericalLimit>             SphericalLimits;                                          // 0x0300(0x0010) (Edit, ZeroConstructor)
	float                                              SphereCollisionRadius;                                    // 0x0310(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0314(0x0004) MISSED OFFSET
	struct FVector                                     ExternalForce;                                            // 0x0318(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FAnimPhysPlanarLimit>                PlanarLimits;                                             // 0x0330(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0340(0x0004) MISSED OFFSET
	unsigned char                                      bUseSphericalLimits : 1;                                  // 0x0344(0x0001) (Edit)
	unsigned char                                      bUsePlanarLimit : 1;                                      // 0x0344(0x0001) (Edit)
	unsigned char                                      bDoUpdate : 1;                                            // 0x0344(0x0001) (Edit)
	unsigned char                                      bDoEval : 1;                                              // 0x0344(0x0001) (Edit)
	unsigned char                                      bOverrideLinearDamping : 1;                               // 0x0344(0x0001) (Edit)
	unsigned char                                      bOverrideAngularBias : 1;                                 // 0x0344(0x0001) (Edit)
	unsigned char                                      bOverrideAngularDamping : 1;                              // 0x0344(0x0001) (Edit)
	unsigned char                                      bEnableWind : 1;                                          // 0x0344(0x0001) (Edit)
	unsigned char                                      UnknownData06 : 1;                                        // 0x0345(0x0001)
	unsigned char                                      bUseGravityOverride : 1;                                  // 0x0345(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGravityOverrideInSimSpace : 1;                           // 0x0345(0x0001) (Edit)
	unsigned char                                      bLinearSpring : 1;                                        // 0x0345(0x0001) (Edit)
	unsigned char                                      bAngularSpring : 1;                                       // 0x0345(0x0001) (Edit)
	unsigned char                                      bChain : 1;                                               // 0x0345(0x0001) (Edit)
	unsigned char                                      UnknownData07[0xA];                                       // 0x0346(0x000A) MISSED OFFSET
	struct FRotationRetargetingInfo                    RetargetingSettings;                                      // 0x0350(0x01A0) (Edit)
	unsigned char                                      UnknownData08[0xE0];                                      // 0x04F0(0x00E0) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_ApplyAdditive
// 0x00B8 (0x00C8 - 0x0010)
struct FAnimNode_ApplyAdditive : public FAnimNode_Base
{
	struct FPoseLink                                   Base;                                                     // 0x0010(0x0010) (Edit, BlueprintVisible)
	struct FPoseLink                                   Additive;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible)
	float                                              Alpha;                                                    // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FInputScaleBias                             AlphaScaleBias;                                           // 0x0034(0x0008) (Edit, BlueprintVisible)
	int                                                LODThreshold;                                             // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FInputAlphaBoolBlend                        AlphaBoolBlend;                                           // 0x0040(0x0048) (Edit, BlueprintVisible)
	struct FName                                       AlphaCurveName;                                           // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FInputScaleBiasClamp                        AlphaScaleBiasClamp;                                      // 0x0090(0x0030) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x5];                                       // 0x00C0(0x0005) MISSED OFFSET
	bool                                               bAlphaBoolEnabled;                                        // 0x00C5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x00C6(0x0002) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AngularRangeLimit
// 0x0040
struct FAngularRangeLimit
{
	struct FVector                                     LimitMin;                                                 // 0x0000(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LimitMax;                                                 // 0x0018(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBoneReference                              bone;                                                     // 0x0030(0x0010) (Edit)
};

// ScriptStruct AnimGraphRuntime.AnimNode_ApplyLimits
// 0x0020 (0x00E8 - 0x00C8)
struct FAnimNode_ApplyLimits : public FAnimNode_SkeletalControlBase
{
	TArray<struct FAngularRangeLimit>                  AngularRangeLimits;                                       // 0x00C8(0x0010) (Edit, ZeroConstructor)
	TArray<struct FVector>                             AngularOffsets;                                           // 0x00D8(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)
};

// ScriptStruct AnimGraphRuntime.BlendBoneByChannelEntry
// 0x0024
struct FBlendBoneByChannelEntry
{
	struct FBoneReference                              SourceBone;                                               // 0x0000(0x0010) (Edit)
	struct FBoneReference                              TargetBone;                                               // 0x0010(0x0010) (Edit)
	bool                                               bBlendTranslation;                                        // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bBlendRotation;                                           // 0x0021(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bBlendScale;                                              // 0x0022(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0023(0x0001) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendBoneByChannel
// 0x0058 (0x0068 - 0x0010)
struct FAnimNode_BlendBoneByChannel : public FAnimNode_Base
{
	struct FPoseLink                                   A;                                                        // 0x0010(0x0010) (Edit, BlueprintVisible)
	struct FPoseLink                                   B;                                                        // 0x0020(0x0010) (Edit, BlueprintVisible)
	TArray<struct FBlendBoneByChannelEntry>            BoneDefinitions;                                          // 0x0030(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET
	float                                              Alpha;                                                    // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	struct FInputScaleBias                             AlphaScaleBias;                                           // 0x0058(0x0008) (Edit, BlueprintVisible)
	TEnumAsByte<EBoneControlSpace>                     TransformsSpace;                                          // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByBool
// 0x0000 (0x0048 - 0x0048)
struct FAnimNode_BlendListByBool : public FAnimNode_BlendListBase
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByEnum
// 0x0000 (0x0048 - 0x0048)
struct FAnimNode_BlendListByEnum : public FAnimNode_BlendListBase
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByInt
// 0x0000 (0x0048 - 0x0048)
struct FAnimNode_BlendListByInt : public FAnimNode_BlendListBase
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpaceEvaluator
// 0x0008 (0x0070 - 0x0068)
struct FAnimNode_BlendSpaceEvaluator : public FAnimNode_BlendSpacePlayer
{
	float                                              NormalizedTime;                                           // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTeleportToNormalizedTime;                                // 0x006C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x006D(0x0003) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpaceGraphBase
// 0x0058 (0x0068 - 0x0010)
struct FAnimNode_BlendSpaceGraphBase : public FAnimNode_Base
{
	float                                              X;                                                        // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       GroupName;                                                // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAnimGroupRole>                        GroupRole;                                                // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	class UBlendSpace*                                 BlendSpace;                                               // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FPoseLink>                           SamplePoseLinks;                                          // 0x0030(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0040(0x0028) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpaceGraph
// 0x0000 (0x0068 - 0x0068)
struct FAnimNode_BlendSpaceGraph : public FAnimNode_BlendSpaceGraphBase
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpaceSampleResult
// 0x0000 (0x0020 - 0x0020)
struct FAnimNode_BlendSpaceSampleResult : public FAnimNode_Root
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_BoneDrivenController
// 0x0050 (0x0118 - 0x00C8)
struct FAnimNode_BoneDrivenController : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              SourceBone;                                               // 0x00C8(0x0010) (Edit)
	class UCurveFloat*                                 DrivingCurve;                                             // 0x00D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Multiplier;                                               // 0x00E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RangeMin;                                                 // 0x00E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RangeMax;                                                 // 0x00E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RemappedMin;                                              // 0x00EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RemappedMax;                                              // 0x00F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       ParameterName;                                            // 0x00F4(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBoneReference                              TargetBone;                                               // 0x00FC(0x0010) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x010C(0x0002) MISSED OFFSET
	TEnumAsByte<EComponentType>                        SourceComponent;                                          // 0x010E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseRange : 1;                                            // 0x010F(0x0001) (Edit)
	unsigned char                                      bAffectTargetTranslationX : 1;                            // 0x010F(0x0001) (Edit)
	unsigned char                                      bAffectTargetTranslationY : 1;                            // 0x010F(0x0001) (Edit)
	unsigned char                                      bAffectTargetTranslationZ : 1;                            // 0x010F(0x0001) (Edit)
	unsigned char                                      bAffectTargetRotationX : 1;                               // 0x010F(0x0001) (Edit)
	unsigned char                                      bAffectTargetRotationY : 1;                               // 0x010F(0x0001) (Edit)
	unsigned char                                      bAffectTargetRotationZ : 1;                               // 0x010F(0x0001) (Edit)
	unsigned char                                      bAffectTargetScaleX : 1;                                  // 0x010F(0x0001) (Edit)
	unsigned char                                      bAffectTargetScaleY : 1;                                  // 0x0110(0x0001) (Edit)
	unsigned char                                      bAffectTargetScaleZ : 1;                                  // 0x0110(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0111(0x0007) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_CallFunction
// 0x0028 (0x0038 - 0x0010)
struct FAnimNode_CallFunction : public FAnimNode_Base
{
	struct FPoseLink                                   Source;                                                   // 0x0010(0x0010) (Edit)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0020(0x0018) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_CCDIK
// 0x00F8 (0x01C0 - 0x00C8)
struct FAnimNode_CCDIK : public FAnimNode_SkeletalControlBase
{
	struct FVector                                     EffectorLocation;                                         // 0x00C8(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     EffectorLocationSpace;                                    // 0x00E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x00E1(0x000F) MISSED OFFSET
	struct FBoneSocketTarget                           EffectorTarget;                                           // 0x00F0(0x0090) (Edit)
	struct FBoneReference                              TipBone;                                                  // 0x0180(0x0010) (Edit)
	struct FBoneReference                              RootBone;                                                 // 0x0190(0x0010) (Edit)
	float                                              Precision;                                                // 0x01A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxIterations;                                            // 0x01A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bStartFromTail;                                           // 0x01A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableRotationLimit;                                     // 0x01A9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x01AA(0x0006) MISSED OFFSET
	TArray<float>                                      RotationLimitPerJoints;                                   // 0x01B0(0x0010) (Edit, EditFixedSize, ZeroConstructor)
};

// ScriptStruct AnimGraphRuntime.Constraint
// 0x001C
struct FConstraint
{
	struct FBoneReference                              TargetBone;                                               // 0x0000(0x0010) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0010(0x0002) MISSED OFFSET
	struct FFilterOptionPerAxis                        PerAxis;                                                  // 0x0012(0x0003) (Edit)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0015(0x0007) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_Constraint
// 0x0040 (0x0108 - 0x00C8)
struct FAnimNode_Constraint : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              BoneToModify;                                             // 0x00C8(0x0010) (Edit)
	TArray<struct FConstraint>                         ConstraintSetup;                                          // 0x00D8(0x0010) (Edit, ZeroConstructor)
	TArray<float>                                      ConstraintWeights;                                        // 0x00E8(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x00F8(0x0010) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyBone
// 0x0028 (0x00F0 - 0x00C8)
struct FAnimNode_CopyBone : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              SourceBone;                                               // 0x00C8(0x0010) (Edit)
	struct FBoneReference                              TargetBone;                                               // 0x00D8(0x0010) (Edit)
	bool                                               bCopyTranslation;                                         // 0x00E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCopyRotation;                                            // 0x00E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCopyScale;                                               // 0x00EA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     ControlSpace;                                             // 0x00EB(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00EC(0x0004) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyBoneDelta
// 0x0030 (0x00F8 - 0x00C8)
struct FAnimNode_CopyBoneDelta : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              SourceBone;                                               // 0x00C8(0x0010) (Edit)
	struct FBoneReference                              TargetBone;                                               // 0x00D8(0x0010) (Edit)
	bool                                               bCopyTranslation;                                         // 0x00E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCopyRotation;                                            // 0x00E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCopyScale;                                               // 0x00EA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x00EB(0x0001) MISSED OFFSET
	float                                              TranslationMultiplier;                                    // 0x00EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RotationMultiplier;                                       // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ScaleMultiplier;                                          // 0x00F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyPoseFromMesh
// 0x01C8 (0x01D8 - 0x0010)
struct FAnimNode_CopyPoseFromMesh : public FAnimNode_Base
{
	TWeakObjectPtr<class USkeletalMeshComponent>       SourceMeshComponent;                                      // 0x0010(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      bUseAttachedParent : 1;                                   // 0x0018(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bCopyCurves : 1;                                          // 0x0018(0x0001) (Edit, BlueprintVisible)
	bool                                               bCopyCustomAttributes;                                    // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseMeshPose : 1;                                         // 0x001A(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x1];                                       // 0x001B(0x0001) MISSED OFFSET
	struct FName                                       RootBoneToCopy;                                           // 0x001C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1B4];                                     // 0x0024(0x01B4) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_CurveSource
// 0x0030 (0x0040 - 0x0010)
struct FAnimNode_CurveSource : public FAnimNode_Base
{
	struct FPoseLink                                   SourcePose;                                               // 0x0010(0x0010) (Edit, BlueprintVisible)
	struct FName                                       SourceBinding;                                            // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	TScriptInterface<class UCurveSourceInterface>      CurveSource;                                              // 0x0030(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_Fabrik
// 0x0128 (0x01F0 - 0x00C8)
struct FAnimNode_Fabrik : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	struct FTransform                                  EffectorTransform;                                        // 0x00D0(0x0060) (Edit, BlueprintVisible, IsPlainOldData)
	struct FBoneSocketTarget                           EffectorTarget;                                           // 0x0130(0x0090) (Edit)
	struct FBoneReference                              TipBone;                                                  // 0x01C0(0x0010) (Edit)
	struct FBoneReference                              RootBone;                                                 // 0x01D0(0x0010) (Edit)
	float                                              Precision;                                                // 0x01E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxIterations;                                            // 0x01E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     EffectorTransformSpace;                                   // 0x01E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneRotationSource>                   EffectorRotationSource;                                   // 0x01E9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x01EA(0x0006) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_HandIKRetargeting
// 0x0058 (0x0120 - 0x00C8)
struct FAnimNode_HandIKRetargeting : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              RightHandFK;                                              // 0x00C8(0x0010) (Edit)
	struct FBoneReference                              LeftHandFK;                                               // 0x00D8(0x0010) (Edit)
	struct FBoneReference                              RightHandIK;                                              // 0x00E8(0x0010) (Edit)
	struct FBoneReference                              LeftHandIK;                                               // 0x00F8(0x0010) (Edit)
	TArray<struct FBoneReference>                      IKBonesToMove;                                            // 0x0108(0x0010) (Edit, ZeroConstructor)
	float                                              HandFKWeight;                                             // 0x0118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x011C(0x0004) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_LayeredBoneBlend
// 0x00D0 (0x00E0 - 0x0010)
struct FAnimNode_LayeredBoneBlend : public FAnimNode_Base
{
	struct FPoseLink                                   BasePose;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible)
	TArray<struct FPoseLink>                           BlendPoses;                                               // 0x0020(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
	TArray<class UBlendProfile*>                       BlendMasks;                                               // 0x0038(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	TArray<struct FInputBlendPose>                     LayerSetup;                                               // 0x0048(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	TArray<float>                                      BlendWeights;                                             // 0x0058(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)
	bool                                               bMeshSpaceRotationBlend;                                  // 0x0068(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bMeshSpaceScaleBlend;                                     // 0x0069(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECurveBlendOption>                     CurveBlendOption;                                         // 0x006A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bBlendRootMotionBasedOnRootBone;                          // 0x006B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	int                                                LODThreshold;                                             // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	TArray<struct FPerBoneBlendWeight>                 PerBoneBlendWeights;                                      // 0x0078(0x0010) (ZeroConstructor)
	struct FGuid                                       SkeletonGuid;                                             // 0x0088(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       VirtualBoneGuid;                                          // 0x0098(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x38];                                      // 0x00A8(0x0038) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.CompactPoseBoneWeightsMapping
// 0x0010
struct FCompactPoseBoneWeightsMapping
{
	TArray<float>                                      BoneWeights;                                              // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct AnimGraphRuntime.BWABlendSettings
// 0x0010
struct FBWABlendSettings
{
	float                                              BlendTime;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UCurveFloat*                                 CustomCurve;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.LayerDistanceLODBlender
// 0x0010
struct FLayerDistanceLODBlender
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	float                                              DistanceLODThreshold;                                     // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DistanceLODBlendTime;                                     // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDriveDistanceLODThresholdAsPin;                          // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimLayerSetup
// 0x00A8
struct FAnimLayerSetup
{
	struct FName                                       LayerName;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLayerDistanceLODBlender                    LayerDistanceLODBlender;                                  // 0x0008(0x0010) (Edit, BlueprintVisible)
	TArray<class UBoneWeightsAsset*>                   BoneWeightAssets;                                         // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              BlendDuration;                                            // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseBWABlendSettings;                                     // 0x002C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x73];                                      // 0x002D(0x0073) MISSED OFFSET
	bool                                               bAdditive;                                                // 0x00A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x00A1(0x0002) MISSED OFFSET
	bool                                               bAlwaysUpdateCurve;                                       // 0x00A3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_Layers
// 0x00B0 (0x00C0 - 0x0010)
struct FAnimNode_Layers : public FAnimNode_Base
{
	struct FName                                       DebugNodeName;                                            // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DebugHyperlinkPath;                                       // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FPoseLink                                   BasePose;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible)
	float                                              CurrentDistanceForLOD;                                    // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	TArray<struct FPoseLink>                           BlendPoses;                                               // 0x0038(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)
	TArray<struct FAnimLayerSetup>                     Layers;                                                   // 0x0048(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	TArray<float>                                      Weight;                                                   // 0x0058(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)
	TArray<bool>                                       Hide;                                                     // 0x0068(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)
	TArray<int>                                        SelectedBoneWeightAsset;                                  // 0x0078(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	TArray<struct FBWABlendSettings>                   BWABlendSettings;                                         // 0x0088(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	TArray<float>                                      DistanceLODThresholdPerLayer;                             // 0x0098(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x00A8(0x0010) MISSED OFFSET
	int                                                LODThreshold;                                             // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.IKChainLink
// 0x0070
struct FIKChainLink
{
	unsigned char                                      UnknownData00[0x70];                                      // 0x0000(0x0070) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.IKChain
// 0x0048
struct FIKChain
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0000(0x0048) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimLegIKDefinition
// 0x002C
struct FAnimLegIKDefinition
{
	struct FBoneReference                              IKFootBone;                                               // 0x0000(0x0010) (Edit)
	struct FBoneReference                              FKFootBone;                                               // 0x0010(0x0010) (Edit)
	int                                                NumBonesInLimb;                                           // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinRotationAngle;                                         // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAxis>                                 FootBoneForwardAxis;                                      // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAxis>                                 HingeRotationAxis;                                        // 0x0029(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableRotationLimit;                                     // 0x002A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableKneeTwistCorrection;                               // 0x002B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimLegIKData
// 0x00E0
struct FAnimLegIKData
{
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0000(0x00E0) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_LegIK
// 0x0030 (0x00F8 - 0x00C8)
struct FAnimNode_LegIK : public FAnimNode_SkeletalControlBase
{
	float                                              ReachPrecision;                                           // 0x00C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxIterations;                                            // 0x00CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FAnimLegIKDefinition>                LegsDefinition;                                           // 0x00D0(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x18];                                      // 0x00E0(0x0018) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_LookAt
// 0x0188 (0x0250 - 0x00C8)
struct FAnimNode_LookAt : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              BoneToModify;                                             // 0x00C8(0x0010) (Edit)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET
	struct FBoneSocketTarget                           LookAtTarget;                                             // 0x00E0(0x0090) (Edit)
	struct FVector                                     LookAtLocation;                                           // 0x0170(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FAxis                                       LookAt_Axis;                                              // 0x0188(0x0020) (Edit)
	bool                                               bUseLookUpAxis;                                           // 0x01A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInterpolationBlend>                   InterpolationType;                                        // 0x01A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x01AA(0x0006) MISSED OFFSET
	struct FAxis                                       LookUp_Axis;                                              // 0x01B0(0x0020) (Edit)
	float                                              LookAtClamp;                                              // 0x01D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InterpolationTime;                                        // 0x01D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InterpolationTriggerThreashold;                           // 0x01D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x74];                                      // 0x01DC(0x0074) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_MakeDynamicAdditive
// 0x0028 (0x0038 - 0x0010)
struct FAnimNode_MakeDynamicAdditive : public FAnimNode_Base
{
	struct FPoseLink                                   Base;                                                     // 0x0010(0x0010) (Edit, BlueprintVisible)
	struct FPoseLink                                   Additive;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible)
	bool                                               bMeshSpaceAdditive;                                       // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_MirrorBase
// 0x0038 (0x0048 - 0x0010)
struct FAnimNode_MirrorBase : public FAnimNode_Base
{
	struct FPoseLink                                   Source;                                                   // 0x0010(0x0010) (Edit)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0020(0x0028) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_Mirror
// 0x0000 (0x0048 - 0x0048)
struct FAnimNode_Mirror : public FAnimNode_MirrorBase
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_Mirror_Standalone
// 0x0018 (0x0060 - 0x0048)
struct FAnimNode_Mirror_Standalone : public FAnimNode_MirrorBase
{
	bool                                               bMirror;                                                  // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
	class UMirrorDataTable*                            MirrorDataTable;                                          // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlendTime;                                                // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bResetChild;                                              // 0x005C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bBoneMirroring;                                           // 0x005D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCurveMirroring;                                          // 0x005E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAttributeMirroring;                                      // 0x005F(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_ModifyBone
// 0x0060 (0x0128 - 0x00C8)
struct FAnimNode_ModifyBone : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              BoneToModify;                                             // 0x00C8(0x0010) (Edit)
	struct FVector                                     Translation;                                              // 0x00D8(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x00F0(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Scale;                                                    // 0x0108(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneModificationMode>                 TranslationMode;                                          // 0x0120(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneModificationMode>                 RotationMode;                                             // 0x0121(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneModificationMode>                 ScaleMode;                                                // 0x0122(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     TranslationSpace;                                         // 0x0123(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     RotationSpace;                                            // 0x0124(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     ScaleSpace;                                               // 0x0125(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0126(0x0002) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_ModifyCurve
// 0x00F0 (0x0100 - 0x0010)
struct FAnimNode_ModifyCurve : public FAnimNode_Base
{
	struct FPoseLink                                   SourcePose;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, EditFixedSize)
	TMap<struct FName, float>                          CurveMap;                                                 // 0x0020(0x0050) (Edit, BlueprintVisible, EditFixedSize)
	TArray<float>                                      CurveValues;                                              // 0x0070(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)
	TArray<struct FName>                               CurveNames;                                               // 0x0080(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x64];                                      // 0x0090(0x0064) MISSED OFFSET
	float                                              Alpha;                                                    // 0x00F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00F8(0x0008) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_MultiWayBlend
// 0x0040 (0x0050 - 0x0010)
struct FAnimNode_MultiWayBlend : public FAnimNode_Base
{
	TArray<struct FPoseLink>                           Poses;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      DesiredAlphas;                                            // 0x0020(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
	struct FInputScaleBias                             AlphaScaleBias;                                           // 0x0040(0x0008) (Edit, BlueprintVisible)
	bool                                               bAdditiveNode;                                            // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bNormalizeAlpha;                                          // 0x0049(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x004A(0x0006) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_ObserveBone
// 0x0060 (0x0128 - 0x00C8)
struct FAnimNode_ObserveBone : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              BoneToObserve;                                            // 0x00C8(0x0010) (Edit)
	TEnumAsByte<EBoneControlSpace>                     DisplaySpace;                                             // 0x00D8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRelativeToRefPose;                                       // 0x00D9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x00DA(0x0006) MISSED OFFSET
	struct FVector                                     Translation;                                              // 0x00E0(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x00F8(0x0018) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Scale;                                                    // 0x0110(0x0018) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseHandler
// 0x0058 (0x0090 - 0x0038)
struct FAnimNode_PoseHandler : public FAnimNode_AssetPlayerBase
{
	class UPoseAsset*                                  PoseAsset;                                                // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0040(0x0050) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseBlendNode
// 0x0020 (0x00B0 - 0x0090)
struct FAnimNode_PoseBlendNode : public FAnimNode_PoseHandler
{
	struct FPoseLink                                   SourcePose;                                               // 0x0090(0x0010) (Edit, BlueprintVisible, EditFixedSize)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00A0(0x0008) MISSED OFFSET
	class UCurveFloat*                                 CustomCurve;                                              // 0x00A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseByName
// 0x0018 (0x00A8 - 0x0090)
struct FAnimNode_PoseByName : public FAnimNode_PoseHandler
{
	struct FName                                       PoseName;                                                 // 0x0090(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PoseWeight;                                               // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x009C(0x000C) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.PoseDriverTransform
// 0x0030
struct FPoseDriverTransform
{
	struct FVector                                     TargetTranslation;                                        // 0x0000(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    TargetRotation;                                           // 0x0018(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.PoseDriverTarget
// 0x00C8
struct FPoseDriverTarget
{
	TArray<struct FPoseDriverTransform>                BoneTransforms;                                           // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FRotator                                    TargetRotation;                                           // 0x0010(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TargetScale;                                              // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x002C(0x0002) MISSED OFFSET
	bool                                               bApplyCustomCurve;                                        // 0x002E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x002F(0x0001) MISSED OFFSET
	struct FRichCurve                                  CustomCurve;                                              // 0x0030(0x0080) (Edit)
	struct FName                                       DrivenName;                                               // 0x00B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x00B8(0x0008) MISSED OFFSET
	bool                                               bIsHidden;                                                // 0x00C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x00C1(0x0007) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.RBFParams
// 0x0038
struct FRBFParams
{
	int                                                TargetDimensions;                                         // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	float                                              Radius;                                                   // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAutomaticRadius;                                         // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x000D(0x0002) MISSED OFFSET
	TEnumAsByte<EBoneAxis>                             TwistAxis;                                                // 0x000F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WeightThreshold;                                          // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FVector                                     MedianReference;                                          // 0x0018(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MedianMin;                                                // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MedianMax;                                                // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseDriver
// 0x00F8 (0x0188 - 0x0090)
struct FAnimNode_PoseDriver : public FAnimNode_PoseHandler
{
	struct FPoseLink                                   SourcePose;                                               // 0x0090(0x0010) (Edit, BlueprintVisible, EditFixedSize)
	TArray<struct FBoneReference>                      SourceBones;                                              // 0x00A0(0x0010) (Edit, ZeroConstructor)
	TArray<struct FBoneReference>                      OnlyDriveBones;                                           // 0x00B0(0x0010) (Edit, ZeroConstructor)
	TArray<struct FPoseDriverTarget>                   PoseTargets;                                              // 0x00C0(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x30];                                      // 0x00D0(0x0030) MISSED OFFSET
	struct FBoneReference                              EvalSpaceBone;                                            // 0x0100(0x0010) (Edit)
	bool                                               bEvalFromRefPose;                                         // 0x0110(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0111(0x0007) MISSED OFFSET
	struct FRBFParams                                  RBFParams;                                                // 0x0118(0x0038) (Edit)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0150(0x0002) MISSED OFFSET
	unsigned char                                      bOnlyDriveSelectedBones : 1;                              // 0x0152(0x0001) (Edit)
	unsigned char                                      UnknownData03[0x1];                                       // 0x0153(0x0001) MISSED OFFSET
	int                                                LODThreshold;                                             // 0x0154(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x30];                                      // 0x0158(0x0030) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseSnapshot
// 0x0080 (0x0090 - 0x0010)
struct FAnimNode_PoseSnapshot : public FAnimNode_Base
{
	struct FName                                       SnapshotName;                                             // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FPoseSnapshot                               Snapshot;                                                 // 0x0018(0x0038) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0050(0x0040) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.RandomPlayerSequenceEntry
// 0x0050
struct FRandomPlayerSequenceEntry
{
	class UAnimSequence*                               Sequence;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ChanceToPlay;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MinLoopCount;                                             // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxLoopCount;                                             // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinPlayRate;                                              // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxPlayRate;                                              // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FAlphaBlend                                 BlendIn;                                                  // 0x0020(0x0030) (Edit)
};

// ScriptStruct AnimGraphRuntime.AnimNode_RandomPlayer
// 0x0068 (0x0078 - 0x0010)
struct FAnimNode_RandomPlayer : public FAnimNode_Base
{
	TArray<struct FRandomPlayerSequenceEntry>          Entries;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0020(0x0050) MISSED OFFSET
	bool                                               bShuffleMode;                                             // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_RefPose
// 0x0000 (0x0010 - 0x0010)
struct FAnimNode_RefPose : public FAnimNode_Base
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_MeshSpaceRefPose
// 0x0000 (0x0010 - 0x0010)
struct FAnimNode_MeshSpaceRefPose : public FAnimNode_Base
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_ResetRoot
// 0x0010 (0x00D8 - 0x00C8)
struct FAnimNode_ResetRoot : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x00C8(0x0010) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.SimSpaceSettings
// 0x0068
struct FSimSpaceSettings
{
	float                                              MasterAlpha;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VelocityScaleZ;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxLinearVelocity;                                        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxAngularVelocity;                                       // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxLinearAcceleration;                                    // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxAngularAcceleration;                                   // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExternalLinearDrag;                                       // 0x0018(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FVector                                     ExternalLinearDragV;                                      // 0x0020(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ExternalLinearVelocity;                                   // 0x0038(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ExternalAngularVelocity;                                  // 0x0050(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_RigidBody
// 0x08C8 (0x0990 - 0x00C8)
struct FAnimNode_RigidBody : public FAnimNode_SkeletalControlBase
{
	class UPhysicsAsset*                               OverridePhysicsAsset;                                     // 0x00C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x128];                                     // 0x00D0(0x0128) MISSED OFFSET
	struct FVector                                     OverrideWorldGravity;                                     // 0x01F8(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ExternalForce;                                            // 0x0210(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ComponentLinearAccScale;                                  // 0x0228(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ComponentLinearVelScale;                                  // 0x0240(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ComponentAppliedLinearAccClamp;                           // 0x0258(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	struct FSimSpaceSettings                           SimSpaceSettings;                                         // 0x0270(0x0068) (Edit)
	float                                              CachedBoundsScale;                                        // 0x02D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBoneReference                              BaseBoneRef;                                              // 0x02DC(0x0010) (Edit)
	TEnumAsByte<ECollisionChannel>                     OverlapChannel;                                           // 0x02EC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x02ED(0x0001) MISSED OFFSET
	bool                                               bForceDisableCollisionBetweenConstraintBodies;            // 0x02EE(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x02EF(0x0001) MISSED OFFSET
	unsigned char                                      bEnableWorldGeometry : 1;                                 // 0x02F0(0x0001) (Edit)
	unsigned char                                      bOverrideWorldGravity : 1;                                // 0x02F0(0x0001) (Edit)
	unsigned char                                      bTransferBoneVelocities : 1;                              // 0x02F0(0x0001) (Edit)
	unsigned char                                      bFreezeIncomingPoseOnStart : 1;                           // 0x02F0(0x0001) (Edit)
	unsigned char                                      bClampLinearTranslationLimitToRefPose : 1;                // 0x02F0(0x0001) (Edit)
	unsigned char                                      UnknownData03[0x3];                                       // 0x02F1(0x0003) MISSED OFFSET
	float                                              WorldSpaceMinimumScale;                                   // 0x02F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EvaluationResetTime;                                      // 0x02F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x694];                                     // 0x02FC(0x0694) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_RotateRootBone
// 0x0098 (0x00A8 - 0x0010)
struct FAnimNode_RotateRootBone : public FAnimNode_Base
{
	struct FPoseLink                                   BasePose;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible)
	float                                              Pitch;                                                    // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FInputScaleBiasClamp                        PitchScaleBiasClamp;                                      // 0x0028(0x0030) (Edit, BlueprintVisible)
	struct FInputScaleBiasClamp                        YawScaleBiasClamp;                                        // 0x0058(0x0030) (Edit, BlueprintVisible)
	struct FRotator                                    MeshToComponent;                                          // 0x0088(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00A0(0x0008) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_RotationMultiplier
// 0x0028 (0x00F0 - 0x00C8)
struct FAnimNode_RotationMultiplier : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              TargetBone;                                               // 0x00C8(0x0010) (Edit)
	struct FBoneReference                              SourceBone;                                               // 0x00D8(0x0010) (Edit)
	float                                              Multiplier;                                               // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneAxis>                             RotationAxisToRefer;                                      // 0x00EC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsAdditive;                                              // 0x00ED(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00EE(0x0002) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_RotationOffsetBlendSpace
// 0x00A8 (0x0110 - 0x0068)
struct FAnimNode_RotationOffsetBlendSpace : public FAnimNode_BlendSpacePlayer
{
	struct FPoseLink                                   BasePose;                                                 // 0x0068(0x0010) (Edit, BlueprintVisible)
	int                                                LODThreshold;                                             // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FInputScaleBias                             AlphaScaleBias;                                           // 0x0080(0x0008) (Edit, BlueprintVisible)
	struct FInputAlphaBoolBlend                        AlphaBoolBlend;                                           // 0x0088(0x0048) (Edit, BlueprintVisible)
	struct FName                                       AlphaCurveName;                                           // 0x00D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FInputScaleBiasClamp                        AlphaScaleBiasClamp;                                      // 0x00D8(0x0030) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0108(0x0005) MISSED OFFSET
	bool                                               bAlphaBoolEnabled;                                        // 0x010D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x010E(0x0002) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_RotationOffsetBlendSpaceGraph
// 0x00A8 (0x0110 - 0x0068)
struct FAnimNode_RotationOffsetBlendSpaceGraph : public FAnimNode_BlendSpaceGraphBase
{
	struct FPoseLink                                   BasePose;                                                 // 0x0068(0x0010) (Edit, BlueprintVisible)
	int                                                LODThreshold;                                             // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FInputScaleBias                             AlphaScaleBias;                                           // 0x0080(0x0008) (Edit, BlueprintVisible)
	struct FInputAlphaBoolBlend                        AlphaBoolBlend;                                           // 0x0088(0x0048) (Edit, BlueprintVisible)
	struct FName                                       AlphaCurveName;                                           // 0x00D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FInputScaleBiasClamp                        AlphaScaleBiasClamp;                                      // 0x00D8(0x0030) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0108(0x0005) MISSED OFFSET
	bool                                               bAlphaBoolEnabled;                                        // 0x010D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x010E(0x0002) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_ScaleChainLength
// 0x0078 (0x0088 - 0x0010)
struct FAnimNode_ScaleChainLength : public FAnimNode_Base
{
	struct FPoseLink                                   InputPose;                                                // 0x0010(0x0010) (Edit)
	float                                              DefaultChainLength;                                       // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBoneReference                              ChainStartBone;                                           // 0x0024(0x0010) (Edit)
	struct FBoneReference                              ChainEndBone;                                             // 0x0034(0x0010) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FVector                                     TargetLocation;                                           // 0x0048(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	struct FInputScaleBias                             AlphaScaleBias;                                           // 0x0068(0x0008) (Edit)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0070(0x0018) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_SequenceEvaluatorBase
// 0x0008 (0x0040 - 0x0038)
struct FAnimNode_SequenceEvaluatorBase : public FAnimNode_AssetPlayerBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_SequenceEvaluator
// 0x0000 (0x0040 - 0x0040)
struct FAnimNode_SequenceEvaluator : public FAnimNode_SequenceEvaluatorBase
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_SequenceEvaluator_Standalone
// 0x0028 (0x0068 - 0x0040)
struct FAnimNode_SequenceEvaluator_Standalone : public FAnimNode_SequenceEvaluatorBase
{
	struct FName                                       GroupName;                                                // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAnimGroupRole>                        GroupRole;                                                // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0049(0x0001) MISSED OFFSET
	bool                                               bIgnoreForRelevancyTest;                                  // 0x004A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x004B(0x0005) MISSED OFFSET
	class UAnimSequenceBase*                           Sequence;                                                 // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ExplicitTime;                                             // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldLoop;                                              // 0x005C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bTeleportToExplicitTime;                                  // 0x005D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESequenceEvalReinit>                   ReinitializationBehavior;                                 // 0x005E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x005F(0x0001) MISSED OFFSET
	float                                              StartPosition;                                            // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_Slot
// 0x0038 (0x0048 - 0x0010)
struct FAnimNode_Slot : public FAnimNode_Base
{
	struct FPoseLink                                   Source;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible)
	struct FName                                       SlotName;                                                 // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAlwaysUpdateSourcePose;                                  // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1F];                                      // 0x0029(0x001F) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.SplineIKCachedBoneData
// 0x0014
struct FSplineIKCachedBoneData
{
	struct FBoneReference                              bone;                                                     // 0x0000(0x0010)
	int                                                RefSkeletonIndex;                                         // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_SplineIK
// 0x01A8 (0x0270 - 0x00C8)
struct FAnimNode_SplineIK : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              StartBone;                                                // 0x00C8(0x0010) (Edit)
	struct FBoneReference                              EndBone;                                                  // 0x00D8(0x0010) (Edit)
	unsigned char                                      UnknownData00[0x1];                                       // 0x00E8(0x0001) MISSED OFFSET
	bool                                               bAutoCalculateSpline;                                     // 0x00E9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x00EA(0x0002) MISSED OFFSET
	int                                                PointCount;                                               // 0x00EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FTransform>                          ControlPoints;                                            // 0x00F0(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)
	float                                              Roll;                                                     // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TwistStart;                                               // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TwistEnd;                                                 // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x010C(0x0004) MISSED OFFSET
	struct FAlphaBlend                                 TwistBlend;                                               // 0x0110(0x0030) (Edit)
	float                                              Stretch;                                                  // 0x0140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Offset;                                                   // 0x0144(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x128];                                     // 0x0148(0x0128) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_SpringBone
// 0x0090 (0x0158 - 0x00C8)
struct FAnimNode_SpringBone : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              SpringBone;                                               // 0x00C8(0x0010) (Edit)
	float                                              MaxDisplacement;                                          // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpringStiffness;                                          // 0x00DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpringDamping;                                            // 0x00E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ErrorResetThresh;                                         // 0x00E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6C];                                      // 0x00E8(0x006C) MISSED OFFSET
	unsigned char                                      bLimitDisplacement : 1;                                   // 0x0154(0x0001) (Edit)
	unsigned char                                      bTranslateX : 1;                                          // 0x0154(0x0001) (Edit)
	unsigned char                                      bTranslateY : 1;                                          // 0x0154(0x0001) (Edit)
	unsigned char                                      bTranslateZ : 1;                                          // 0x0154(0x0001) (Edit)
	unsigned char                                      bRotateX : 1;                                             // 0x0154(0x0001) (Edit)
	unsigned char                                      bRotateY : 1;                                             // 0x0154(0x0001) (Edit)
	unsigned char                                      bRotateZ : 1;                                             // 0x0154(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0155(0x0003) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_StateResult
// 0x0000 (0x0020 - 0x0020)
struct FAnimNode_StateResult : public FAnimNode_Root
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_Sync
// 0x0020 (0x0030 - 0x0010)
struct FAnimNode_Sync : public FAnimNode_Base
{
	struct FPoseLink                                   Source;                                                   // 0x0010(0x0010) (Edit)
	struct FName                                       GroupName;                                                // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAnimGroupRole>                        GroupRole;                                                // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.RotationLimit
// 0x0030
struct FRotationLimit
{
	struct FVector                                     LimitMin;                                                 // 0x0000(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LimitMax;                                                 // 0x0018(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_Trail
// 0x01D8 (0x02A0 - 0x00C8)
struct FAnimNode_Trail : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x68];                                      // 0x00C8(0x0068) MISSED OFFSET
	struct FBoneReference                              TrailBone;                                                // 0x0130(0x0010) (Edit)
	int                                                ChainLength;                                              // 0x0140(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAxis>                                 ChainBoneAxis;                                            // 0x0144(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bInvertChainBoneAxis : 1;                                 // 0x0145(0x0001) (Edit)
	unsigned char                                      bLimitStretch : 1;                                        // 0x0145(0x0001) (Edit)
	unsigned char                                      bLimitRotation : 1;                                       // 0x0145(0x0001) (Edit)
	unsigned char                                      bUsePlanarLimit : 1;                                      // 0x0145(0x0001) (Edit)
	unsigned char                                      bActorSpaceFakeVel : 1;                                   // 0x0145(0x0001) (Edit)
	unsigned char                                      bReorientParentToChild : 1;                               // 0x0145(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0146(0x0002) MISSED OFFSET
	float                                              MaxDeltaTime;                                             // 0x0148(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RelaxationSpeedScale;                                     // 0x014C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRuntimeFloatCurve                          TrailRelaxationSpeed;                                     // 0x0150(0x0088) (Edit)
	struct FInputScaleBiasClamp                        RelaxationSpeedScaleInputProcessor;                       // 0x01D8(0x0030) (Edit, BlueprintVisible)
	TArray<struct FRotationLimit>                      RotationLimits;                                           // 0x0208(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	TArray<struct FVector>                             RotationOffsets;                                          // 0x0218(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)
	TArray<struct FAnimPhysPlanarLimit>                PlanarLimits;                                             // 0x0228(0x0010) (Edit, ZeroConstructor)
	float                                              StretchLimit;                                             // 0x0238(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x023C(0x0004) MISSED OFFSET
	struct FVector                                     FakeVelocity;                                             // 0x0240(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBoneReference                              BaseJoint;                                                // 0x0258(0x0010) (Edit)
	float                                              LastBoneRotationAnimAlphaBlend;                           // 0x0268(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x34];                                      // 0x026C(0x0034) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.ReferenceBoneFrame
// 0x0030
struct FReferenceBoneFrame
{
	struct FBoneReference                              bone;                                                     // 0x0000(0x0010) (Edit)
	struct FAxis                                       Axis;                                                     // 0x0010(0x0020) (Edit)
};

// ScriptStruct AnimGraphRuntime.AnimNode_TwistCorrectiveNode
// 0x00A0 (0x0168 - 0x00C8)
struct FAnimNode_TwistCorrectiveNode : public FAnimNode_SkeletalControlBase
{
	struct FReferenceBoneFrame                         BaseFrame;                                                // 0x00C8(0x0030) (Edit)
	struct FReferenceBoneFrame                         TwistFrame;                                               // 0x00F8(0x0030) (Edit)
	struct FAxis                                       TwistPlaneNormalAxis;                                     // 0x0128(0x0020) (Edit)
	float                                              RangeMax;                                                 // 0x0148(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RemappedMin;                                              // 0x014C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RemappedMax;                                              // 0x0150(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAnimCurveParam                             Curve;                                                    // 0x0154(0x000C) (Edit)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0160(0x0008) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_TwoBoneIK
// 0x01A8 (0x0270 - 0x00C8)
struct FAnimNode_TwoBoneIK : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              IKBone;                                                   // 0x00C8(0x0010) (Edit)
	float                                              StartStretchRatio;                                        // 0x00D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxStretchScale;                                          // 0x00DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EffectorLocation;                                         // 0x00E0(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F8(0x0008) MISSED OFFSET
	struct FBoneSocketTarget                           EffectorTarget;                                           // 0x0100(0x0090) (Edit)
	struct FVector                                     JointTargetLocation;                                      // 0x0190(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x01A8(0x0008) MISSED OFFSET
	struct FBoneSocketTarget                           JointTarget;                                              // 0x01B0(0x0090) (Edit)
	struct FAxis                                       TwistAxis;                                                // 0x0240(0x0020) (Edit)
	TEnumAsByte<EBoneControlSpace>                     EffectorLocationSpace;                                    // 0x0260(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     JointTargetLocationSpace;                                 // 0x0261(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAllowStretching : 1;                                     // 0x0262(0x0001) (Edit)
	unsigned char                                      bTakeRotationFromEffectorSpace : 1;                       // 0x0262(0x0001) (Edit)
	unsigned char                                      bMaintainEffectorRelRot : 1;                              // 0x0262(0x0001) (Edit)
	unsigned char                                      bAllowTwist : 1;                                          // 0x0262(0x0001) (Edit)
	unsigned char                                      UnknownData02[0xD];                                       // 0x0263(0x000D) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_TwoWayBlend
// 0x00B8 (0x00C8 - 0x0010)
struct FAnimNode_TwoWayBlend : public FAnimNode_Base
{
	struct FPoseLink                                   A;                                                        // 0x0010(0x0010) (Edit, BlueprintVisible)
	struct FPoseLink                                   B;                                                        // 0x0020(0x0010) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0030(0x0001) MISSED OFFSET
	unsigned char                                      bAlphaBoolEnabled : 1;                                    // 0x0031(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01 : 2;                                        // 0x0031(0x0001)
	unsigned char                                      bResetChildOnActivation : 1;                              // 0x0031(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0032(0x0002) MISSED OFFSET
	float                                              Alpha;                                                    // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FInputScaleBias                             AlphaScaleBias;                                           // 0x0038(0x0008) (Edit, BlueprintVisible)
	struct FInputAlphaBoolBlend                        AlphaBoolBlend;                                           // 0x0040(0x0048) (Edit, BlueprintVisible)
	struct FName                                       AlphaCurveName;                                           // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FInputScaleBiasClamp                        AlphaScaleBiasClamp;                                      // 0x0090(0x0030) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData03[0x8];                                       // 0x00C0(0x0008) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimSequencerInstanceProxy
// 0x0320 (0x0BA0 - 0x0880)
struct FAnimSequencerInstanceProxy : public FAnimInstanceProxy
{
	unsigned char                                      UnknownData00[0x320];                                     // 0x0880(0x0320) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.PositionHistory
// 0x0030
struct FPositionHistory
{
	TArray<struct FVector>                             Positions;                                                // 0x0000(0x0010) (Edit, ZeroConstructor)
	float                                              Range;                                                    // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0014(0x001C) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.RBFEntry
// 0x0010
struct FRBFEntry
{
	TArray<float>                                      Values;                                                   // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct AnimGraphRuntime.RBFTarget
// 0x0090 (0x00A0 - 0x0010)
struct FRBFTarget : public FRBFEntry
{
	float                                              ScaleFactor;                                              // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bApplyCustomCurve;                                        // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	struct FRichCurve                                  CustomCurve;                                              // 0x0018(0x0080) (Edit)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0098(0x0008) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
