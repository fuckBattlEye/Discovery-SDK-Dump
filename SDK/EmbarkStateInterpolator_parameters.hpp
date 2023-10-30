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

// Function EmbarkStateInterpolator.StateInterpolatorComponent.UpdateSettings
struct UStateInterpolatorComponent_UpdateSettings_Params
{
};

// Function EmbarkStateInterpolator.StateInterpolatorComponent.PreUpdateInputForOwnerEvent_RemoveUFunction
struct UStateInterpolatorComponent_PreUpdateInputForOwnerEvent_RemoveUFunction_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       FunctionName;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function EmbarkStateInterpolator.StateInterpolatorComponent.PreUpdateInputForOwnerEvent_AddUFunction
struct UStateInterpolatorComponent_PreUpdateInputForOwnerEvent_AddUFunction_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       FunctionName;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function EmbarkStateInterpolator.StateInterpolatorComponent.PreUpdateEvent_RemoveFunction
struct UStateInterpolatorComponent_PreUpdateEvent_RemoveFunction_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       FunctionName;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function EmbarkStateInterpolator.StateInterpolatorComponent.PreUpdateEvent_AddUFunction
struct UStateInterpolatorComponent_PreUpdateEvent_AddUFunction_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       FunctionName;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function EmbarkStateInterpolator.StateInterpolatorComponent.IsInitialized
struct UStateInterpolatorComponent_IsInitialized_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkStateInterpolator.StateInterpolatorComponent.HasAnyActiveInterpolator
struct UStateInterpolatorComponent_HasAnyActiveInterpolator_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkStateInterpolator.StateInterpolatorComponent.GetStateInterpolatorSubsystem
struct UStateInterpolatorComponent_GetStateInterpolatorSubsystem_Params
{
	class UStateInterpolatorSubsystem*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkStateInterpolator.StateInterpolatorComponent.GetStateInterpolator
struct UStateInterpolatorComponent_GetStateInterpolator_Params
{
	class UClass*                                      StateClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UStateInterpolator*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkStateInterpolator.StateInterpolatorComponent.GetStateInstanceId
struct UStateInterpolatorComponent_GetStateInstanceId_Params
{
	int                                                Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FStateInstanceId                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkStateInterpolator.StateInterpolatorComponent.GetLatestSyncTimestamp
struct UStateInterpolatorComponent_GetLatestSyncTimestamp_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkStateInterpolator.StateInterpolatorComponent.GetEstimatedLocalInterpolationDelayTarget
struct UStateInterpolatorComponent_GetEstimatedLocalInterpolationDelayTarget_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkStateInterpolator.StateInterpolatorComponent.GetDefaultStateInstanceId
struct UStateInterpolatorComponent_GetDefaultStateInstanceId_Params
{
	struct FStateInstanceId                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkStateInterpolator.StateInterpolatorComponent.GetCurrentTotalInterpolationDelay
struct UStateInterpolatorComponent_GetCurrentTotalInterpolationDelay_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkStateInterpolator.StateInterpolatorComponent.GetCurrentInterpolationTimestamp
struct UStateInterpolatorComponent_GetCurrentInterpolationTimestamp_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkStateInterpolator.StateInterpolator.HasInstanceForActor
struct UStateInterpolator_HasInstanceForActor_Params
{
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkStateInterpolator.StateInterpolator.HasInstance
struct UStateInterpolator_HasInstance_Params
{
	struct FStateInstanceId                            StateInstance;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkStateInterpolator.BPObjectInterpolator.Interpolate_BP
struct UBPObjectInterpolator_Interpolate_BP_Params
{
	TArray<class UObject*>                             A_Array;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UObject*>                             B_Array;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      Alphas;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UObject*>                             OutResults;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function EmbarkStateInterpolator.BPObjectInterpolator.GetObjectType_BP
struct UBPObjectInterpolator_GetObjectType_BP_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkStateInterpolator.BPObjectInterpolator.GetLatestStateObj_BP
struct UBPObjectInterpolator_GetLatestStateObj_BP_Params
{
	struct FStateInstanceId                            InstanceId;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	class UObject*                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkStateInterpolator.BPObjectInterpolator.GetInterpolatedStateObj_BP
struct UBPObjectInterpolator_GetInterpolatedStateObj_BP_Params
{
	struct FStateInstanceId                            InstanceId;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	class UObject*                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkStateInterpolator.BPObjectInterpolator.GetInputStateObj_BP
struct UBPObjectInterpolator_GetInputStateObj_BP_Params
{
	struct FStateInstanceId                            InstanceId;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkStateInterpolator.InterpolatedTestActor.SetVelocity
struct AInterpolatedTestActor_SetVelocity_Params
{
	struct FVector                                     Velocity;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function EmbarkStateInterpolator.InterpolatedTestActor.SetAngularVelocity
struct AInterpolatedTestActor_SetAngularVelocity_Params
{
	struct FVector                                     Velocity;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function EmbarkStateInterpolator.InterpolatedTestActor.OnRep_Transform
struct AInterpolatedTestActor_OnRep_Transform_Params
{
};

// Function EmbarkStateInterpolator.InterpolationUtilsStatics.SinusoidalVector
struct UInterpolationUtilsStatics_SinusoidalVector_Params
{
	struct FVector                                     A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkStateInterpolator.InterpolationUtilsStatics.SinusoidalFloat
struct UInterpolationUtilsStatics_SinusoidalFloat_Params
{
	float                                              A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkStateInterpolator.InterpolationUtilsStatics.MinInt
struct UInterpolationUtilsStatics_MinInt_Params
{
	int                                                A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkStateInterpolator.InterpolationUtilsStatics.MinFloat
struct UInterpolationUtilsStatics_MinFloat_Params
{
	float                                              A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkStateInterpolator.InterpolationUtilsStatics.MinBool
struct UInterpolationUtilsStatics_MinBool_Params
{
	bool                                               A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkStateInterpolator.InterpolationUtilsStatics.MaxInt
struct UInterpolationUtilsStatics_MaxInt_Params
{
	int                                                A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkStateInterpolator.InterpolationUtilsStatics.MaxFloat
struct UInterpolationUtilsStatics_MaxFloat_Params
{
	float                                              A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkStateInterpolator.InterpolationUtilsStatics.MaxBool
struct UInterpolationUtilsStatics_MaxBool_Params
{
	bool                                               A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkStateInterpolator.InterpolationUtilsStatics.LinearVector
struct UInterpolationUtilsStatics_LinearVector_Params
{
	struct FVector                                     A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkStateInterpolator.InterpolationUtilsStatics.LinearFloat
struct UInterpolationUtilsStatics_LinearFloat_Params
{
	float                                              A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkStateInterpolator.InterpolationUtilsStatics.CutoffVector
struct UInterpolationUtilsStatics_CutoffVector_Params
{
	struct FVector                                     A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CutoffPoint;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkStateInterpolator.InterpolationUtilsStatics.CutoffInt
struct UInterpolationUtilsStatics_CutoffInt_Params
{
	int                                                A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CutoffPoint;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkStateInterpolator.InterpolationUtilsStatics.CutoffFloat
struct UInterpolationUtilsStatics_CutoffFloat_Params
{
	float                                              A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CutoffPoint;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkStateInterpolator.InterpolationUtilsStatics.CutoffBool
struct UInterpolationUtilsStatics_CutoffBool_Params
{
	bool                                               A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CutoffPoint;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkStateInterpolator.StateInstanceIdMixinLibrary.IsValid
struct UStateInstanceIdMixinLibrary_IsValid_Params
{
	struct FStateInstanceId                            StateInstanceId;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkStateInterpolator.StateInstanceIdMixinLibrary.GetKey
struct UStateInstanceIdMixinLibrary_GetKey_Params
{
	struct FStateInstanceId                            StateInstanceId;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkStateInterpolator.StateInstanceIdMixinLibrary.GetActor
struct UStateInstanceIdMixinLibrary_GetActor_Params
{
	struct FStateInstanceId                            StateInstanceId;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	class AActor*                                      ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkStateInterpolator.StateInterpolatorSubsystem.SetGlobalMinInterpolationReplicationDelayOverride
struct UStateInterpolatorSubsystem_SetGlobalMinInterpolationReplicationDelayOverride_Params
{
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkStateInterpolator.StateInterpolatorSubsystem.SetDebugModeForInstanceOnInterpolator
struct UStateInterpolatorSubsystem_SetDebugModeForInstanceOnInterpolator_Params
{
	class UClass*                                      StateInterpolatorClass;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FStateInstanceId                            StateInstance;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	enum class EStateInterpolatorDebugMode             DebugMode;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkStateInterpolator.StateInterpolatorSubsystem.SetDebugModeForInstance
struct UStateInterpolatorSubsystem_SetDebugModeForInstance_Params
{
	struct FStateInstanceId                            StateInstance;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	enum class EStateInterpolatorDebugMode             DebugMode;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkStateInterpolator.StateInterpolatorSubsystem.SetDebugModeForAllOnInterpolator
struct UStateInterpolatorSubsystem_SetDebugModeForAllOnInterpolator_Params
{
	class UClass*                                      StateInterpolatorClass;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	enum class EStateInterpolatorDebugMode             DebugMode;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkStateInterpolator.StateInterpolatorSubsystem.SetDebugModeForAll
struct UStateInterpolatorSubsystem_SetDebugModeForAll_Params
{
	enum class EStateInterpolatorDebugMode             DebugMode;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkStateInterpolator.StateInterpolatorSubsystem.SetDebugModeForActorOnInterpolator
struct UStateInterpolatorSubsystem_SetDebugModeForActorOnInterpolator_Params
{
	class UClass*                                      StateInterpolatorClass;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	enum class EStateInterpolatorDebugMode             DebugMode;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkStateInterpolator.StateInterpolatorSubsystem.SetDebugModeForActor
struct UStateInterpolatorSubsystem_SetDebugModeForActor_Params
{
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	enum class EStateInterpolatorDebugMode             DebugMode;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkStateInterpolator.StateInterpolatorSubsystem.ManuallySetActorHasNewState
struct UStateInterpolatorSubsystem_ManuallySetActorHasNewState_Params
{
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkStateInterpolator.StateInterpolatorStatics.GetSubsystem
struct UStateInterpolatorStatics_GetSubsystem_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UStateInterpolatorSubsystem*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkStateInterpolator.TransformInterpolator.SetInput
struct UTransformInterpolator_SetInput_Params
{
	struct FStateInstanceId                            InstanceId;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FTransformInterpolatorData                  InputData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkStateInterpolator.TransformInterpolator.GetLatestState
struct UTransformInterpolator_GetLatestState_Params
{
	struct FStateInstanceId                            InstanceId;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FTransformInterpolatorData                  OutTransformInterpolatorData;                             // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkStateInterpolator.TransformInterpolator.GetInterpolatedState
struct UTransformInterpolator_GetInterpolatedState_Params
{
	struct FStateInstanceId                            InstanceId;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FTransformInterpolatorData                  OutTransformInterpolatorData;                             // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
