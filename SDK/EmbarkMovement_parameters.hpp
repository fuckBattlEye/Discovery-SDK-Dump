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

// Function EmbarkMovement.EmbarkCharacterMovementComponentBase.SetOverrideCapsuleSize
struct UEmbarkCharacterMovementComponentBase_SetOverrideCapsuleSize_Params
{
	bool                                               bOverrideCapsuleRadius;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewRadiusOverride;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideCapsuleHeight;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewHeightOverride;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkMovement.EmbarkCharacterMovementComponentBase.GetCapsuleRadiusOverride
struct UEmbarkCharacterMovementComponentBase_GetCapsuleRadiusOverride_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkMovement.EmbarkCharacterMovementComponentBase.GetCapsuleHeightOverride
struct UEmbarkCharacterMovementComponentBase_GetCapsuleHeightOverride_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkMovement.EmbarkCharacterMovementComponent.OnRep_ReplicatedTransform
struct UEmbarkCharacterMovementComponent_OnRep_ReplicatedTransform_Params
{
};

// Function EmbarkMovement.EmbarkCharacterMovementComponent.IsCheatFlying
struct UEmbarkCharacterMovementComponent_IsCheatFlying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkMovement.EmbarkCharacterMovementComponent.GetRootWarpSpace
struct UEmbarkCharacterMovementComponent_GetRootWarpSpace_Params
{
	struct FEmbarkRootWarpSpace                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkMovement.EmbarkCharacterMovementComponent.GetRootMotionInputScale
struct UEmbarkCharacterMovementComponent_GetRootMotionInputScale_Params
{
	struct FEmbarkRootMotionInputScale                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkMovement.EmbarkCharacterMovementComponent.GetReplicatedBaseState
struct UEmbarkCharacterMovementComponent_GetReplicatedBaseState_Params
{
	struct FEmbarkCharacterMovementBaseState           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkMovement.EmbarkCharacterMovementComponent.GetMutableReplicatedBaseState
struct UEmbarkCharacterMovementComponent_GetMutableReplicatedBaseState_Params
{
	struct FEmbarkCharacterMovementBaseState           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkMovement.EmbarkCharacterMovementComponent.GetGroundNormal
struct UEmbarkCharacterMovementComponent_GetGroundNormal_Params
{
	struct FVector                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function EmbarkMovement.EmbarkCharacterMovementComponent.GetEmbarkCharacterMovementStateInterpData
struct UEmbarkCharacterMovementComponent_GetEmbarkCharacterMovementStateInterpData_Params
{
	class UEmbarkCharacterMovementStateInterpolatorDataBase* ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkMovement.EmbarkCharacterMovementComponent.ClearRootMotionSources
struct UEmbarkCharacterMovementComponent_ClearRootMotionSources_Params
{
};

// Function EmbarkMovement.EmbarkCharacterMovementGlobalActorBase.UpdateDynamicMovementParams
struct AEmbarkCharacterMovementGlobalActorBase_UpdateDynamicMovementParams_Params
{
	struct FEmbarkMovementParamsDynamic                Dynamics;                                                 // (Parm, OutParm)
	struct FEmbarkMovementParamsStatic                 Statics;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkMovement.EmbarkCharacterMovementGlobalActorBase.GenerateStaticMovementParams
struct AEmbarkCharacterMovementGlobalActorBase_GenerateStaticMovementParams_Params
{
	struct FEmbarkMovementParamsStatic                 OutResult;                                                // (Parm, OutParm)
	class ACharacter*                                  Character;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InputVector;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bWantsToJump;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWantsToCrouch;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OverrideDeltaSeconds;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkMovement.EmbarkCharacterMovementGlobalActorBase.GenerateDynamicMovementParams
struct AEmbarkCharacterMovementGlobalActorBase_GenerateDynamicMovementParams_Params
{
	struct FEmbarkMovementParamsStatic                 Statics;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEmbarkCharacterMovementBaseState           BaseState;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEmbarkMovementParamsDynamic                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkMovement.EmbarkCharacterMovementGlobalActorBase.BlueprintModifyInputVector
struct AEmbarkCharacterMovementGlobalActorBase_BlueprintModifyInputVector_Params
{
	class ACharacter*                                  Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CurrentInputVector;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkMovement.EmbarkCharacterMovementGlobalActorBase.BlueprintGetMaxSpeedModifier
struct AEmbarkCharacterMovementGlobalActorBase_BlueprintGetMaxSpeedModifier_Params
{
	class ACharacter*                                  Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkMovement.EmbarkCharacterMovementGlobalActorBase.BlueprintGetMaxSpeed
struct AEmbarkCharacterMovementGlobalActorBase_BlueprintGetMaxSpeed_Params
{
	struct FEmbarkMovementParamsStatic                 Statics;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEmbarkMovementParamsDynamic                Dynamics;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkMovement.EmbarkCharacterMovementGlobalActorBase.BlueprintGetGravityScaleModifier
struct AEmbarkCharacterMovementGlobalActorBase_BlueprintGetGravityScaleModifier_Params
{
	class ACharacter*                                  Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkMovement.EmbarkCharacterMovementGlobalActorBase.BlueprintGetAirControlModifier
struct AEmbarkCharacterMovementGlobalActorBase_BlueprintGetAirControlModifier_Params
{
	class ACharacter*                                  Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkMovement.EmbarkCharacterMovementGlobalActorBase.BlueprintGenerateStaticMovementParams
struct AEmbarkCharacterMovementGlobalActorBase_BlueprintGenerateStaticMovementParams_Params
{
	class ACharacter*                                  Character;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkMovementParamsStatic                 OutStatics;                                               // (Parm, OutParm)
};

// Function EmbarkMovement.EmbarkPawnMovementComponent.SetAvoidanceEnabled
struct UEmbarkPawnMovementComponent_SetAvoidanceEnabled_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkMovement.EmbarkPawnMovementComponent.GetAvoidanceVelocity
struct UEmbarkPawnMovementComponent_GetAvoidanceVelocity_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkMovement.EmbarkMovementBlockedFloorsContainerMixinLibrary.IsFloorBlocked
struct UEmbarkMovementBlockedFloorsContainerMixinLibrary_IsFloorBlocked_Params
{
	struct FEmbarkMovementBlockedFloorsContainer       Container;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	class AActor*                                      InBlockedFloorActor;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkMovement.EmbarkMovementBlockedFloorsContainerMixinLibrary.FillBlockedFloors
struct UEmbarkMovementBlockedFloorsContainerMixinLibrary_FillBlockedFloors_Params
{
	struct FEmbarkMovementBlockedFloorsContainer       Container;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<class AActor*>                              InOutBlockedFloorActors;                                  // (Parm, OutParm, ZeroConstructor)
};

// Function EmbarkMovement.EmbarkMovementBlockedFloorsContainerMixinLibrary.AddBlockedFloor
struct UEmbarkMovementBlockedFloorsContainerMixinLibrary_AddBlockedFloor_Params
{
	struct FEmbarkMovementBlockedFloorsContainer       Container;                                                // (Parm, OutParm)
	class AActor*                                      InBlockedFloorActor;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkMovement.EmbarkMovementParamsDynamicMixinLibrary.GetCapsuleHalfHeight
struct UEmbarkMovementParamsDynamicMixinLibrary_GetCapsuleHalfHeight_Params
{
	struct FEmbarkMovementParamsDynamic                Dynamics;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEmbarkMovementParamsStatic                 Statics;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkMovement.EmbarkMovementFunctionLibrary.CalcVelocity
struct UEmbarkMovementFunctionLibrary_CalcVelocity_Params
{
	struct FEmbarkMovementParamsDynamic                Dynamics;                                                 // (Parm, OutParm)
	struct FEmbarkMovementParamsStatic                 Statics;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkMovement.EmbarkCharacterMovementStaticCallerBase.ReceiveGetUnCrouchHeightAdjustment
struct UEmbarkCharacterMovementStaticCallerBase_ReceiveGetUnCrouchHeightAdjustment_Params
{
	struct FEmbarkMovementParamsDynamic                Dynamics;                                                 // (Parm, OutParm)
	struct FEmbarkMovementParamsStatic                 Statics;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkMovement.EmbarkRootWarpSpaceMixinLibrary.UpdateTransforms
struct UEmbarkRootWarpSpaceMixinLibrary_UpdateTransforms_Params
{
	struct FEmbarkRootWarpSpace                        RootwarpSpaceTransformData;                               // (Parm, OutParm)
	struct FTransform                                  OutStartTransform;                                        // (Parm, OutParm, IsPlainOldData)
	struct FTransform                                  OutEndTransform;                                          // (Parm, OutParm, IsPlainOldData)
};

// Function EmbarkMovement.EmbarkRootWarpSpaceMixinLibrary.GetAttachedToComponent
struct UEmbarkRootWarpSpaceMixinLibrary_GetAttachedToComponent_Params
{
	struct FEmbarkRootWarpSpace                        RootwarpSpaceTransformData;                               // (ConstParm, Parm, OutParm, ReferenceParm)
	class USceneComponent*                             ReturnValue;                                              // (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function EmbarkMovement.EmbarkRootWarpSpaceMixinLibrary.GetAttachedToBone
struct UEmbarkRootWarpSpaceMixinLibrary_GetAttachedToBone_Params
{
	struct FEmbarkRootWarpSpace                        RootwarpSpaceTransformData;                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkMovement.EmbarkServersideReplicatedInputScriptMixinLibrary.GetBool
struct UEmbarkServersideReplicatedInputScriptMixinLibrary_GetBool_Params
{
	struct FEmbarkServersideReplicatedInput            Input;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FName                                       InputName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkMovement.EmbarkServersideInputReplicationComponent.StopInputGeneration
struct UEmbarkServersideInputReplicationComponent_StopInputGeneration_Params
{
};

// Function EmbarkMovement.EmbarkServersideInputReplicationComponent.StartInputGeneration
struct UEmbarkServersideInputReplicationComponent_StartInputGeneration_Params
{
};

// Function EmbarkMovement.EmbarkServersideInputReplicationComponent.ServerInputProcessingCanBeStarted
struct UEmbarkServersideInputReplicationComponent_ServerInputProcessingCanBeStarted_Params
{
};

// Function EmbarkMovement.EmbarkServersideInputReplicationComponent.RecalculatePendingInput
struct UEmbarkServersideInputReplicationComponent_RecalculatePendingInput_Params
{
};

// Function EmbarkMovement.EmbarkServersideInputReplicationComponent.IsInputNewer
struct UEmbarkServersideInputReplicationComponent_IsInputNewer_Params
{
	unsigned char                                      NewInputFrame;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      BaseInputFrame;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkMovement.EmbarkServersideInputReplicationComponent.GetServerLatestInputFrame_Server
struct UEmbarkServersideInputReplicationComponent_GetServerLatestInputFrame_Server_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkMovement.EmbarkServersideInputReplicationComponent.GetNewInputs
struct UEmbarkServersideInputReplicationComponent_GetNewInputs_Params
{
	TArray<struct FEmbarkServersideReplicatedInput>    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkMovement.EmbarkServersideInputReplicationComponent.GetLatestInputProcessingTime
struct UEmbarkServersideInputReplicationComponent_GetLatestInputProcessingTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkMovement.EmbarkServersideInputReplicationComponent.GetLatestInput
struct UEmbarkServersideInputReplicationComponent_GetLatestInput_Params
{
	struct FEmbarkServersideReplicatedInput            ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function EmbarkMovement.EmbarkServersideInputReplicationComponent.GetInputTimestamp
struct UEmbarkServersideInputReplicationComponent_GetInputTimestamp_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkMovement.EmbarkServersideInputReplicationComponent.GetInputSyncInterval
struct UEmbarkServersideInputReplicationComponent_GetInputSyncInterval_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkMovement.EmbarkServersideInputReplicationComponent.GetInputBufferSize
struct UEmbarkServersideInputReplicationComponent_GetInputBufferSize_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkMovement.EmbarkServersideInputReplicationComponent.ClientInputProcessingStarted
struct UEmbarkServersideInputReplicationComponent_ClientInputProcessingStarted_Params
{
};

// Function EmbarkMovement.EmbarkServersideInputReplicationComponent.ClientInputProcessingSpeedChange
struct UEmbarkServersideInputReplicationComponent_ClientInputProcessingSpeedChange_Params
{
	float                                              SpeedChange;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkMovement.EmbarkRootMotionSourceUtilLibrary.Name_Warp_Upright
struct UEmbarkRootMotionSourceUtilLibrary_Name_Warp_Upright_Params
{
	struct FName                                       ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkMovement.EmbarkRootMotionSourceUtilLibrary.Name_Warp_TranslationVertical
struct UEmbarkRootMotionSourceUtilLibrary_Name_Warp_TranslationVertical_Params
{
	struct FName                                       ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkMovement.EmbarkRootMotionSourceUtilLibrary.Name_Warp_TranslationHorizontal
struct UEmbarkRootMotionSourceUtilLibrary_Name_Warp_TranslationHorizontal_Params
{
	struct FName                                       ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkMovement.EmbarkRootMotionSourceUtilLibrary.Name_Warp_SpeedWarp
struct UEmbarkRootMotionSourceUtilLibrary_Name_Warp_SpeedWarp_Params
{
	struct FName                                       ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkMovement.EmbarkRootMotionSourceUtilLibrary.Name_Warp_Rotation
struct UEmbarkRootMotionSourceUtilLibrary_Name_Warp_Rotation_Params
{
	struct FName                                       ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkMovement.EmbarkRootMotionSourceUtilLibrary.Name_Warp_RootMotionScale
struct UEmbarkRootMotionSourceUtilLibrary_Name_Warp_RootMotionScale_Params
{
	struct FName                                       ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkMovement.EmbarkRootMotionSourceUtilLibrary.Name_Warp_InputScale
struct UEmbarkRootMotionSourceUtilLibrary_Name_Warp_InputScale_Params
{
	struct FName                                       ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkMovement.EmbarkRootMotionSourceUtilLibrary.Name_Warp_Active
struct UEmbarkRootMotionSourceUtilLibrary_Name_Warp_Active_Params
{
	struct FName                                       ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkMovement.EmbarkRootMotionSourceUtilLibrary.GetTotalSequenceLength
struct UEmbarkRootMotionSourceUtilLibrary_GetTotalSequenceLength_Params
{
	TArray<class UAnimSequence*>                       InSequences;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              OneFrameTime;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkMovement.EmbarkRootMotionSourceUtilLibrary.GetCurrentPlayingSequenceData
struct UEmbarkRootMotionSourceUtilLibrary_GetCurrentPlayingSequenceData_Params
{
	TArray<class UAnimSequence*>                       InSequences;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              InTime;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OneFrameTime;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OutClipIndex;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutClipTime;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutPrevClipTime;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	enum class ERootMotionParseRetVal                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkMovement.EmbarkRootMotionSourceUtilLibrary.GenerateTimeWarpCurveRuntimeFloatCurve
struct UEmbarkRootMotionSourceUtilLibrary_GenerateTimeWarpCurveRuntimeFloatCurve_Params
{
	float                                              DeltaTime;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              SpeedScale;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CurveName;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UAnimSequence*>                       Sequences;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FRuntimeFloatCurve                          OutCurve;                                                 // (Parm, OutParm)
	float                                              OutLastTime;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkMovement.EmbarkRootMotionSourceUtilLibrary.GenerateTimeWarpCurve
struct UEmbarkRootMotionSourceUtilLibrary_GenerateTimeWarpCurve_Params
{
	float                                              DeltaTime;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              SpeedScale;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CurveName;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UAnimSequence*>                       Sequences;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UCurveFloat*                                 OutCurve;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutLastTime;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkMovement.AbilityTask_ApplyRootMotion_AnimSequenceBase.GetRootMotionTimeWarpedTime
struct UAbilityTask_ApplyRootMotion_AnimSequenceBase_GetRootMotionTimeWarpedTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkMovement.AbilityTask_ApplyRootMotion_AnimSequenceBase.GetRootMotionSpeedScale
struct UAbilityTask_ApplyRootMotion_AnimSequenceBase_GetRootMotionSpeedScale_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkMovement.AbilityTask_ApplyRootMotion_AnimSequenceBase.GetRootMotionInitialVelocity
struct UAbilityTask_ApplyRootMotion_AnimSequenceBase_GetRootMotionInitialVelocity_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkMovement.AbilityTask_ApplyRootMotion_AnimSequenceBase.GetRootMotionDuration
struct UAbilityTask_ApplyRootMotion_AnimSequenceBase_GetRootMotionDuration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkMovement.AbilityTask_ApplyRootMotion_AnimSequenceRootMotion.ApplyRootMotionAnimSequence
struct UAbilityTask_ApplyRootMotion_AnimSequenceRootMotion_ApplyRootMotionAnimSequence_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TaskInstanceName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UAnimSequence*>                       InSequences;                                              // (Parm, ZeroConstructor)
	struct FRotator                                    MovementDirectionOffset;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideIgnoreGravity;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldSpeedWarp;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SpeedWarpMin;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SpeedWarpMax;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UAbilityTask_ApplyRootMotion_AnimSequenceRootMotion* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkMovement.AbilityTask_ApplyRootMotion_AnimSequenceRootWarp.ApplyRootMotionAnimSequence
struct UAbilityTask_ApplyRootMotion_AnimSequenceRootWarp_ApplyRootMotionAnimSequence_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TaskInstanceName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UAnimSequence*>                       InSequences;                                              // (Parm, ZeroConstructor)
	struct FTransform                                  StartActorTransform;                                      // (Parm, IsPlainOldData)
	struct FTransform                                  WarpTargetTransform;                                      // (Parm, IsPlainOldData)
	class USceneComponent*                             AlignToComponent;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       InCharacterAuxBoneName;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CapsuleHeight;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	enum class ERootMotionFinishVelocityMode           VelocityOnFinishMode;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       InAlignToComponentBoneName;                               // (Parm, ZeroConstructor, IsPlainOldData)
	enum class ERootMotionDefaultCurveType             DefaultCurveType;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendLength;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldSpeedWarp;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SpeedWarpMin;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SpeedWarpMax;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSweepTestDuringRootWarp;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartTimeOffset;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UAbilityTask_ApplyRootMotion_AnimSequenceRootWarp* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
