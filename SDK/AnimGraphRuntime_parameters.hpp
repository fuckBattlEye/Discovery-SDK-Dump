#pragma once

//   SDK By:if

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../pch.h"

namespace sdk
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function AnimGraphRuntime.AnimationStateMachineLibrary.IsStateBlendingOut
struct UAnimationStateMachineLibrary_IsStateBlendingOut_Params
{
	struct FAnimUpdateContext                          UpdateContext;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FAnimationStateResultReference              Node;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AnimGraphRuntime.AnimationStateMachineLibrary.IsStateBlendingIn
struct UAnimationStateMachineLibrary_IsStateBlendingIn_Params
{
	struct FAnimUpdateContext                          UpdateContext;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FAnimationStateResultReference              Node;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateResultPure
struct UAnimationStateMachineLibrary_ConvertToAnimationStateResultPure_Params
{
	struct FAnimNodeReference                          Node;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FAnimationStateResultReference              AnimationState;                                           // (Parm, OutParm)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateResult
struct UAnimationStateMachineLibrary_ConvertToAnimationStateResult_Params
{
	struct FAnimNodeReference                          Node;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FAnimationStateResultReference              AnimationState;                                           // (Parm, OutParm)
	enum class EAnimNodeReferenceConversionResult      Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AnimGraphRuntime.AnimExecutionContextLibrary.GetDeltaTime
struct UAnimExecutionContextLibrary_GetDeltaTime_Params
{
	struct FAnimUpdateContext                          Context;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AnimGraphRuntime.AnimExecutionContextLibrary.GetCurrentWeight
struct UAnimExecutionContextLibrary_GetCurrentWeight_Params
{
	struct FAnimUpdateContext                          Context;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AnimGraphRuntime.AnimExecutionContextLibrary.GetAnimNodeReference
struct UAnimExecutionContextLibrary_GetAnimNodeReference_Params
{
	class UAnimInstance*                               Instance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAnimNodeReference                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AnimGraphRuntime.AnimExecutionContextLibrary.GetAnimInstance
struct UAnimExecutionContextLibrary_GetAnimInstance_Params
{
	struct FAnimExecutionContext                       Context;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	class UAnimInstance*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToUpdateContext
struct UAnimExecutionContextLibrary_ConvertToUpdateContext_Params
{
	struct FAnimExecutionContext                       Context;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	enum class EAnimExecutionContextConversionResult   Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FAnimUpdateContext                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToPoseContext
struct UAnimExecutionContextLibrary_ConvertToPoseContext_Params
{
	struct FAnimExecutionContext                       Context;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	enum class EAnimExecutionContextConversionResult   Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FAnimPoseContext                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToInitializationContext
struct UAnimExecutionContextLibrary_ConvertToInitializationContext_Params
{
	struct FAnimExecutionContext                       Context;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	enum class EAnimExecutionContextConversionResult   Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FAnimInitializationContext                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToComponentSpacePoseContext
struct UAnimExecutionContextLibrary_ConvertToComponentSpacePoseContext_Params
{
	struct FAnimExecutionContext                       Context;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	enum class EAnimExecutionContextConversionResult   Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FAnimComponentSpacePoseContext              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AnimGraphRuntime.BoneWeightsAsset.OnTargetSkeletonHierarchyChanged
struct UBoneWeightsAsset_OnTargetSkeletonHierarchyChanged_Params
{
};

// Function AnimGraphRuntime.KismetAnimationLibrary.K2_TwoBoneIK
struct UKismetAnimationLibrary_K2_TwoBoneIK_Params
{
	struct FVector                                     RootPos;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     JointPos;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     EndPos;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     JointTarget;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Effector;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     OutJointPos;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutEndPos;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowStretching;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartStretchRatio;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxStretchScale;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimGraphRuntime.KismetAnimationLibrary.K2_StartProfilingTimer
struct UKismetAnimationLibrary_K2_StartProfilingTimer_Params
{
};

// Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseVectorAndRemap
struct UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RangeOutMinX;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RangeOutMaxX;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RangeOutMinY;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RangeOutMaxY;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RangeOutMinZ;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RangeOutMaxZ;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseAndRemap
struct UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RangeOutMin;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RangeOutMax;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AnimGraphRuntime.KismetAnimationLibrary.K2_LookAt
struct UKismetAnimationLibrary_K2_LookAt_Params
{
	struct FTransform                                  CurrentTransform;                                         // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     TargetPosition;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     LookAtVector;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseUpVector;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     UpVector;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ClampConeInDegree;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function AnimGraphRuntime.KismetAnimationLibrary.K2_EndProfilingTimer
struct UKismetAnimationLibrary_K2_EndProfilingTimer_Params
{
	bool                                               bLog;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     LogPrefix;                                                // (Parm, ZeroConstructor)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AnimGraphRuntime.KismetAnimationLibrary.K2_DistanceBetweenTwoSocketsAndMapRange
struct UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Params
{
	class USkeletalMeshComponent*                      Component;                                                // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       SocketOrBoneNameA;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERelativeTransformSpace>               SocketSpaceA;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketOrBoneNameB;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERelativeTransformSpace>               SocketSpaceB;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRemapRange;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InRangeMin;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InRangeMax;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutRangeMin;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutRangeMax;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AnimGraphRuntime.KismetAnimationLibrary.K2_DirectionBetweenSockets
struct UKismetAnimationLibrary_K2_DirectionBetweenSockets_Params
{
	class USkeletalMeshComponent*                      Component;                                                // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       SocketOrBoneNameFrom;                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketOrBoneNameTo;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromSockets
struct UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       SocketOrBoneName;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReferenceSocketOrBone;                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERelativeTransformSpace>               SocketSpace;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OffsetInBoneSpace;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPositionHistory                            History;                                                  // (Parm, OutParm, ReferenceParm)
	int                                                NumberOfSamples;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              VelocityMin;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              VelocityMax;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	enum class EEasingFuncType                         EasingType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRuntimeFloatCurve                          CustomCurve;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromPositionHistory
struct UKismetAnimationLibrary_K2_CalculateVelocityFromPositionHistory_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPositionHistory                            History;                                                  // (Parm, OutParm, ReferenceParm)
	int                                                NumberOfSamples;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              VelocityMin;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              VelocityMax;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AnimGraphRuntime.KismetAnimationLibrary.CalculateDirection
struct UKismetAnimationLibrary_CalculateDirection_Params
{
	struct FVector                                     Velocity;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    BaseRotation;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AnimGraphRuntime.LinkedAnimGraphLibrary.HasLinkedAnimInstance
struct ULinkedAnimGraphLibrary_HasLinkedAnimInstance_Params
{
	struct FLinkedAnimGraphReference                   Node;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AnimGraphRuntime.LinkedAnimGraphLibrary.GetLinkedAnimInstance
struct ULinkedAnimGraphLibrary_GetLinkedAnimInstance_Params
{
	struct FLinkedAnimGraphReference                   Node;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	class UAnimInstance*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AnimGraphRuntime.LinkedAnimGraphLibrary.ConvertToLinkedAnimGraphPure
struct ULinkedAnimGraphLibrary_ConvertToLinkedAnimGraphPure_Params
{
	struct FAnimNodeReference                          Node;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FLinkedAnimGraphReference                   LinkedAnimGraph;                                          // (Parm, OutParm)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AnimGraphRuntime.LinkedAnimGraphLibrary.ConvertToLinkedAnimGraph
struct ULinkedAnimGraphLibrary_ConvertToLinkedAnimGraph_Params
{
	struct FAnimNodeReference                          Node;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	enum class EAnimNodeReferenceConversionResult      Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FLinkedAnimGraphReference                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEndReceived
struct UPlayMontageCallbackProxy_OnNotifyEndReceived_Params
{
	struct FName                                       NotifyName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBranchingPointNotifyPayload                BranchingPointNotifyPayload;                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBeginReceived
struct UPlayMontageCallbackProxy_OnNotifyBeginReceived_Params
{
	struct FName                                       NotifyName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBranchingPointNotifyPayload                BranchingPointNotifyPayload;                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageEnded
struct UPlayMontageCallbackProxy_OnMontageEnded_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInterrupted;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageBlendingOut
struct UPlayMontageCallbackProxy_OnMontageBlendingOut_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInterrupted;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimGraphRuntime.PlayMontageCallbackProxy.CreateProxyObjectForPlayMontage
struct UPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Params
{
	class USkeletalMeshComponent*                      InSkeletalMeshComponent;                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAnimMontage*                                MontageToPlay;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartingPosition;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       StartingSection;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UPlayMontageCallbackProxy*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AnimGraphRuntime.SequenceEvaluatorLibrary.SetSequenceWithInertialBlending
struct USequenceEvaluatorLibrary_SetSequenceWithInertialBlending_Params
{
	struct FAnimUpdateContext                          UpdateContext;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FSequenceEvaluatorReference                 SequenceEvaluator;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	class UAnimSequenceBase*                           Sequence;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSequenceEvaluatorReference                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AnimGraphRuntime.SequenceEvaluatorLibrary.SetSequence
struct USequenceEvaluatorLibrary_SetSequence_Params
{
	struct FSequenceEvaluatorReference                 SequenceEvaluator;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	class UAnimSequenceBase*                           Sequence;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSequenceEvaluatorReference                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AnimGraphRuntime.SequenceEvaluatorLibrary.SetExplicitTime
struct USequenceEvaluatorLibrary_SetExplicitTime_Params
{
	struct FSequenceEvaluatorReference                 SequenceEvaluator;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSequenceEvaluatorReference                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AnimGraphRuntime.SequenceEvaluatorLibrary.GetSequence
struct USequenceEvaluatorLibrary_GetSequence_Params
{
	struct FSequenceEvaluatorReference                 SequenceEvaluator;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	class UAnimSequenceBase*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AnimGraphRuntime.SequenceEvaluatorLibrary.GetAccumulatedTime
struct USequenceEvaluatorLibrary_GetAccumulatedTime_Params
{
	struct FSequenceEvaluatorReference                 SequenceEvaluator;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AnimGraphRuntime.SequenceEvaluatorLibrary.ConvertToSequenceEvaluatorPure
struct USequenceEvaluatorLibrary_ConvertToSequenceEvaluatorPure_Params
{
	struct FAnimNodeReference                          Node;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FSequenceEvaluatorReference                 SequenceEvaluator;                                        // (Parm, OutParm)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AnimGraphRuntime.SequenceEvaluatorLibrary.ConvertToSequenceEvaluator
struct USequenceEvaluatorLibrary_ConvertToSequenceEvaluator_Params
{
	struct FAnimNodeReference                          Node;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	enum class EAnimNodeReferenceConversionResult      Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FSequenceEvaluatorReference                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AnimGraphRuntime.SequenceEvaluatorLibrary.AdvanceTime
struct USequenceEvaluatorLibrary_AdvanceTime_Params
{
	struct FAnimUpdateContext                          UpdateContext;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FSequenceEvaluatorReference                 SequenceEvaluator;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              PlayRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSequenceEvaluatorReference                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AnimGraphRuntime.SequencePlayerLibrary.SetStartPosition
struct USequencePlayerLibrary_SetStartPosition_Params
{
	struct FSequencePlayerReference                    SequencePlayer;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              StartPosition;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSequencePlayerReference                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AnimGraphRuntime.SequencePlayerLibrary.SetSequenceWithInertialBlending
struct USequencePlayerLibrary_SetSequenceWithInertialBlending_Params
{
	struct FAnimUpdateContext                          UpdateContext;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FSequencePlayerReference                    SequencePlayer;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	class UAnimSequenceBase*                           Sequence;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSequencePlayerReference                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AnimGraphRuntime.SequencePlayerLibrary.SetSequence
struct USequencePlayerLibrary_SetSequence_Params
{
	struct FSequencePlayerReference                    SequencePlayer;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	class UAnimSequenceBase*                           Sequence;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSequencePlayerReference                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AnimGraphRuntime.SequencePlayerLibrary.SetPlayRate
struct USequencePlayerLibrary_SetPlayRate_Params
{
	struct FSequencePlayerReference                    SequencePlayer;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              PlayRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSequencePlayerReference                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AnimGraphRuntime.SequencePlayerLibrary.SetAccumulatedTime
struct USequencePlayerLibrary_SetAccumulatedTime_Params
{
	struct FSequencePlayerReference                    SequencePlayer;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSequencePlayerReference                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AnimGraphRuntime.SequencePlayerLibrary.GetStartPosition
struct USequencePlayerLibrary_GetStartPosition_Params
{
	struct FSequencePlayerReference                    SequencePlayer;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AnimGraphRuntime.SequencePlayerLibrary.GetSequencePure
struct USequencePlayerLibrary_GetSequencePure_Params
{
	struct FSequencePlayerReference                    SequencePlayer;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	class UAnimSequenceBase*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AnimGraphRuntime.SequencePlayerLibrary.GetSequence
struct USequencePlayerLibrary_GetSequence_Params
{
	struct FSequencePlayerReference                    SequencePlayer;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	class UAnimSequenceBase*                           SequenceBase;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FSequencePlayerReference                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AnimGraphRuntime.SequencePlayerLibrary.GetPlayRate
struct USequencePlayerLibrary_GetPlayRate_Params
{
	struct FSequencePlayerReference                    SequencePlayer;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AnimGraphRuntime.SequencePlayerLibrary.GetLoopAnimation
struct USequencePlayerLibrary_GetLoopAnimation_Params
{
	struct FSequencePlayerReference                    SequencePlayer;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AnimGraphRuntime.SequencePlayerLibrary.GetAccumulatedTime
struct USequencePlayerLibrary_GetAccumulatedTime_Params
{
	struct FSequencePlayerReference                    SequencePlayer;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AnimGraphRuntime.SequencePlayerLibrary.ConvertToSequencePlayerPure
struct USequencePlayerLibrary_ConvertToSequencePlayerPure_Params
{
	struct FAnimNodeReference                          Node;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FSequencePlayerReference                    SequencePlayer;                                           // (Parm, OutParm)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AnimGraphRuntime.SequencePlayerLibrary.ConvertToSequencePlayer
struct USequencePlayerLibrary_ConvertToSequencePlayer_Params
{
	struct FAnimNodeReference                          Node;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	enum class EAnimNodeReferenceConversionResult      Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FSequencePlayerReference                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AnimGraphRuntime.SkeletalControlLibrary.SetAlpha
struct USkeletalControlLibrary_SetAlpha_Params
{
	struct FSkeletalControlReference                   SkeletalControl;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              Alpha;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSkeletalControlReference                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AnimGraphRuntime.SkeletalControlLibrary.GetAlpha
struct USkeletalControlLibrary_GetAlpha_Params
{
	struct FSkeletalControlReference                   SkeletalControl;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AnimGraphRuntime.SkeletalControlLibrary.ConvertToSkeletalControlPure
struct USkeletalControlLibrary_ConvertToSkeletalControlPure_Params
{
	struct FAnimNodeReference                          Node;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FSkeletalControlReference                   SkeletalControl;                                          // (Parm, OutParm)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AnimGraphRuntime.SkeletalControlLibrary.ConvertToSkeletalControl
struct USkeletalControlLibrary_ConvertToSkeletalControl_Params
{
	struct FAnimNodeReference                          Node;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	enum class EAnimNodeReferenceConversionResult      Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FSkeletalControlReference                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
