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

// Function Niagara.NiagaraActor.SetDestroyOnSystemFinish
struct ANiagaraActor_SetDestroyOnSystemFinish_Params
{
	bool                                               bShouldDestroyOnSystemFinish;                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraActor.OnNiagaraSystemFinished
struct ANiagaraActor_OnNiagaraSystemFinished_Params
{
	class UNiagaraComponent*                           FinishedComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetVariableVec4
struct UNiagaraComponent_SetVariableVec4_Params
{
	struct FName                                       InVariableName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    InValue;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetVariableVec3
struct UNiagaraComponent_SetVariableVec3_Params
{
	struct FName                                       InVariableName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetVariableVec2
struct UNiagaraComponent_SetVariableVec2_Params
{
	struct FName                                       InVariableName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetVariableTextureRenderTarget
struct UNiagaraComponent_SetVariableTextureRenderTarget_Params
{
	struct FName                                       InVariableName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UTextureRenderTarget*                        TextureRenderTarget;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetVariableTexture
struct UNiagaraComponent_SetVariableTexture_Params
{
	struct FName                                       InVariableName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetVariableStaticMesh
struct UNiagaraComponent_SetVariableStaticMesh_Params
{
	struct FName                                       InVariableName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetVariableQuat
struct UNiagaraComponent_SetVariableQuat_Params
{
	struct FName                                       InVariableName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FQuat                                       InValue;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetVariablePosition
struct UNiagaraComponent_SetVariablePosition_Params
{
	struct FName                                       InVariableName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetVariableObject
struct UNiagaraComponent_SetVariableObject_Params
{
	struct FName                                       InVariableName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetVariableMaterial
struct UNiagaraComponent_SetVariableMaterial_Params
{
	struct FName                                       InVariableName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetVariableLinearColor
struct UNiagaraComponent_SetVariableLinearColor_Params
{
	struct FName                                       InVariableName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                InValue;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetVariableInt
struct UNiagaraComponent_SetVariableInt_Params
{
	struct FName                                       InVariableName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetVariableFloat
struct UNiagaraComponent_SetVariableFloat_Params
{
	struct FName                                       InVariableName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetVariableBool
struct UNiagaraComponent_SetVariableBool_Params
{
	struct FName                                       InVariableName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetVariableActor
struct UNiagaraComponent_SetVariableActor_Params
{
	struct FName                                       InVariableName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetTickBehavior
struct UNiagaraComponent_SetTickBehavior_Params
{
	enum class ENiagaraTickBehavior                    NewTickBehavior;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetSystemFixedBounds
struct UNiagaraComponent_SetSystemFixedBounds_Params
{
	struct FBox                                        LocalBounds;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetSeekDelta
struct UNiagaraComponent_SetSeekDelta_Params
{
	float                                              InSeekDelta;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetRenderingEnabled
struct UNiagaraComponent_SetRenderingEnabled_Params
{
	bool                                               bInRenderingEnabled;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetRandomSeedOffset
struct UNiagaraComponent_SetRandomSeedOffset_Params
{
	int                                                NewRandomSeedOffset;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetPreviewLODDistance
struct UNiagaraComponent_SetPreviewLODDistance_Params
{
	bool                                               bEnablePreviewLODDistance;                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PreviewLODDistance;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PreviewMaxDistance;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetPaused
struct UNiagaraComponent_SetPaused_Params
{
	bool                                               bInPaused;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetNiagaraVariableVec4
struct UNiagaraComponent_SetNiagaraVariableVec4_Params
{
	struct FString                                     InVariableName;                                           // (Parm, ZeroConstructor)
	struct FVector4                                    InValue;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetNiagaraVariableVec3
struct UNiagaraComponent_SetNiagaraVariableVec3_Params
{
	struct FString                                     InVariableName;                                           // (Parm, ZeroConstructor)
	struct FVector                                     InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetNiagaraVariableVec2
struct UNiagaraComponent_SetNiagaraVariableVec2_Params
{
	struct FString                                     InVariableName;                                           // (Parm, ZeroConstructor)
	struct FVector2D                                   InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetNiagaraVariableQuat
struct UNiagaraComponent_SetNiagaraVariableQuat_Params
{
	struct FString                                     InVariableName;                                           // (Parm, ZeroConstructor)
	struct FQuat                                       InValue;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetNiagaraVariablePosition
struct UNiagaraComponent_SetNiagaraVariablePosition_Params
{
	struct FString                                     InVariableName;                                           // (Parm, ZeroConstructor)
	struct FVector                                     InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetNiagaraVariableObject
struct UNiagaraComponent_SetNiagaraVariableObject_Params
{
	struct FString                                     InVariableName;                                           // (Parm, ZeroConstructor)
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetNiagaraVariableLinearColor
struct UNiagaraComponent_SetNiagaraVariableLinearColor_Params
{
	struct FString                                     InVariableName;                                           // (Parm, ZeroConstructor)
	struct FLinearColor                                InValue;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetNiagaraVariableInt
struct UNiagaraComponent_SetNiagaraVariableInt_Params
{
	struct FString                                     InVariableName;                                           // (Parm, ZeroConstructor)
	int                                                InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetNiagaraVariableFloat
struct UNiagaraComponent_SetNiagaraVariableFloat_Params
{
	struct FString                                     InVariableName;                                           // (Parm, ZeroConstructor)
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetNiagaraVariableBool
struct UNiagaraComponent_SetNiagaraVariableBool_Params
{
	struct FString                                     InVariableName;                                           // (Parm, ZeroConstructor)
	bool                                               InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetNiagaraVariableActor
struct UNiagaraComponent_SetNiagaraVariableActor_Params
{
	struct FString                                     InVariableName;                                           // (Parm, ZeroConstructor)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetMaxSimTime
struct UNiagaraComponent_SetMaxSimTime_Params
{
	float                                              InMaxTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetLockDesiredAgeDeltaTimeToSeekDelta
struct UNiagaraComponent_SetLockDesiredAgeDeltaTimeToSeekDelta_Params
{
	bool                                               bLock;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetGpuComputeDebug
struct UNiagaraComponent_SetGpuComputeDebug_Params
{
	bool                                               bEnableDebug;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetForceSolo
struct UNiagaraComponent_SetForceSolo_Params
{
	bool                                               bInForceSolo;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetForceLocalPlayerEffect
struct UNiagaraComponent_SetForceLocalPlayerEffect_Params
{
	bool                                               bIsPlayerEffect;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetEmitterFixedBounds
struct UNiagaraComponent_SetEmitterFixedBounds_Params
{
	struct FName                                       EmitterName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBox                                        LocalBounds;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetDesiredAge
struct UNiagaraComponent_SetDesiredAge_Params
{
	float                                              InDesiredAge;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetCustomTimeDilation
struct UNiagaraComponent_SetCustomTimeDilation_Params
{
	float                                              Dilation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetCanRenderWhileSeeking
struct UNiagaraComponent_SetCanRenderWhileSeeking_Params
{
	bool                                               bInCanRenderWhileSeeking;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetAutoDestroy
struct UNiagaraComponent_SetAutoDestroy_Params
{
	bool                                               bInAutoDestroy;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetAsset
struct UNiagaraComponent_SetAsset_Params
{
	class UNiagaraSystem*                              InAsset;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bResetExistingOverrideParameters;                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetAllowScalability
struct UNiagaraComponent_SetAllowScalability_Params
{
	bool                                               bAllow;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetAgeUpdateMode
struct UNiagaraComponent_SetAgeUpdateMode_Params
{
	enum class ENiagaraAgeUpdateMode                   InAgeUpdateMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SeekToDesiredAge
struct UNiagaraComponent_SeekToDesiredAge_Params
{
	float                                              InDesiredAge;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.ResetSystem
struct UNiagaraComponent_ResetSystem_Params
{
};

// Function Niagara.NiagaraComponent.ReinitializeSystem
struct UNiagaraComponent_ReinitializeSystem_Params
{
};

// Function Niagara.NiagaraComponent.IsPaused
struct UNiagaraComponent_IsPaused_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.InitForPerformanceBaseline
struct UNiagaraComponent_InitForPerformanceBaseline_Params
{
};

// Function Niagara.NiagaraComponent.GetTickBehavior
struct UNiagaraComponent_GetTickBehavior_Params
{
	enum class ENiagaraTickBehavior                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.GetSystemFixedBounds
struct UNiagaraComponent_GetSystemFixedBounds_Params
{
	struct FBox                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.GetSeekDelta
struct UNiagaraComponent_GetSeekDelta_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.GetRandomSeedOffset
struct UNiagaraComponent_GetRandomSeedOffset_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.GetPreviewLODDistanceEnabled
struct UNiagaraComponent_GetPreviewLODDistanceEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.GetPreviewLODDistance
struct UNiagaraComponent_GetPreviewLODDistance_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.GetNiagaraParticleValueVec3_DebugOnly
struct UNiagaraComponent_GetNiagaraParticleValueVec3_DebugOnly_Params
{
	struct FString                                     InEmitterName;                                            // (Parm, ZeroConstructor)
	struct FString                                     InValueName;                                              // (Parm, ZeroConstructor)
	TArray<struct FVector>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Niagara.NiagaraComponent.GetNiagaraParticleValues_DebugOnly
struct UNiagaraComponent_GetNiagaraParticleValues_DebugOnly_Params
{
	struct FString                                     InEmitterName;                                            // (Parm, ZeroConstructor)
	struct FString                                     InValueName;                                              // (Parm, ZeroConstructor)
	TArray<float>                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Niagara.NiagaraComponent.GetNiagaraParticlePositions_DebugOnly
struct UNiagaraComponent_GetNiagaraParticlePositions_DebugOnly_Params
{
	struct FString                                     InEmitterName;                                            // (Parm, ZeroConstructor)
	TArray<struct FVector>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Niagara.NiagaraComponent.GetMaxSimTime
struct UNiagaraComponent_GetMaxSimTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.GetLockDesiredAgeDeltaTimeToSeekDelta
struct UNiagaraComponent_GetLockDesiredAgeDeltaTimeToSeekDelta_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.GetForceSolo
struct UNiagaraComponent_GetForceSolo_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.GetForceLocalPlayerEffect
struct UNiagaraComponent_GetForceLocalPlayerEffect_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.GetEmitterFixedBounds
struct UNiagaraComponent_GetEmitterFixedBounds_Params
{
	struct FName                                       EmitterName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBox                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.GetDesiredAge
struct UNiagaraComponent_GetDesiredAge_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.GetDataInterface
struct UNiagaraComponent_GetDataInterface_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	class UNiagaraDataInterface*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.GetCustomTimeDilation
struct UNiagaraComponent_GetCustomTimeDilation_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.GetAsset
struct UNiagaraComponent_GetAsset_Params
{
	class UNiagaraSystem*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.GetAllowScalability
struct UNiagaraComponent_GetAllowScalability_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.GetAgeUpdateMode
struct UNiagaraComponent_GetAgeUpdateMode_Params
{
	enum class ENiagaraAgeUpdateMode                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.ClearSystemFixedBounds
struct UNiagaraComponent_ClearSystemFixedBounds_Params
{
};

// Function Niagara.NiagaraComponent.ClearEmitterFixedBounds
struct UNiagaraComponent_ClearEmitterFixedBounds_Params
{
	struct FName                                       EmitterName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.AdvanceSimulationByTime
struct UNiagaraComponent_AdvanceSimulationByTime_Params
{
	float                                              SimulateTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TickDeltaSeconds;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraComponent.AdvanceSimulation
struct UNiagaraComponent_AdvanceSimulation_Params
{
	int                                                TickCount;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TickDeltaSeconds;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVectorValue
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVectorValue_Params
{
	class UNiagaraComponent*                           NiagaraSystem;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       OverrideName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bSizeToFit;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector4Value
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4Value_Params
{
	class UNiagaraComponent*                           NiagaraSystem;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       OverrideName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bSizeToFit;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector4
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4_Params
{
	class UNiagaraComponent*                           NiagaraSystem;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       OverrideName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector4>                            ArrayData;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector2DValue
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2DValue_Params
{
	class UNiagaraComponent*                           NiagaraSystem;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       OverrideName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bSizeToFit;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector2D
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2D_Params
{
	class UNiagaraComponent*                           NiagaraSystem;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       OverrideName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector2D>                           ArrayData;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector_Params
{
	class UNiagaraComponent*                           NiagaraSystem;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       OverrideName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             ArrayData;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayQuatValue
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuatValue_Params
{
	class UNiagaraComponent*                           NiagaraSystem;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       OverrideName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FQuat                                       Value;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bSizeToFit;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayQuat
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuat_Params
{
	class UNiagaraComponent*                           NiagaraSystem;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       OverrideName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FQuat>                               ArrayData;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayPositionValue
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayPositionValue_Params
{
	class UNiagaraComponent*                           NiagaraSystem;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       OverrideName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bSizeToFit;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayPosition
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayPosition_Params
{
	class UNiagaraComponent*                           NiagaraSystem;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       OverrideName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             ArrayData;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayInt32Value
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32Value_Params
{
	class UNiagaraComponent*                           NiagaraSystem;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       OverrideName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSizeToFit;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayInt32
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32_Params
{
	class UNiagaraComponent*                           NiagaraSystem;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       OverrideName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        ArrayData;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayFloatValue
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloatValue_Params
{
	class UNiagaraComponent*                           NiagaraSystem;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       OverrideName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSizeToFit;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayFloat
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloat_Params
{
	class UNiagaraComponent*                           NiagaraSystem;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       OverrideName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      ArrayData;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayColorValue
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColorValue_Params
{
	class UNiagaraComponent*                           NiagaraSystem;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       OverrideName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bSizeToFit;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayColor
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColor_Params
{
	class UNiagaraComponent*                           NiagaraSystem;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       OverrideName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FLinearColor>                        ArrayData;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayBoolValue
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBoolValue_Params
{
	class UNiagaraComponent*                           NiagaraSystem;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       OverrideName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bSizeToFit;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayBool
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBool_Params
{
	class UNiagaraComponent*                           NiagaraSystem;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       OverrideName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<bool>                                       ArrayData;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVectorValue
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVectorValue_Params
{
	class UNiagaraComponent*                           NiagaraSystem;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       OverrideName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector4Value
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4Value_Params
{
	class UNiagaraComponent*                           NiagaraSystem;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       OverrideName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector4
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4_Params
{
	class UNiagaraComponent*                           NiagaraSystem;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       OverrideName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector4>                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector2DValue
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2DValue_Params
{
	class UNiagaraComponent*                           NiagaraSystem;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       OverrideName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector2D
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2D_Params
{
	class UNiagaraComponent*                           NiagaraSystem;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       OverrideName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector2D>                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector_Params
{
	class UNiagaraComponent*                           NiagaraSystem;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       OverrideName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayQuatValue
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuatValue_Params
{
	class UNiagaraComponent*                           NiagaraSystem;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       OverrideName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FQuat                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayQuat
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuat_Params
{
	class UNiagaraComponent*                           NiagaraSystem;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       OverrideName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FQuat>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayPositionValue
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayPositionValue_Params
{
	class UNiagaraComponent*                           NiagaraSystem;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       OverrideName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayPosition
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayPosition_Params
{
	class UNiagaraComponent*                           NiagaraSystem;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       OverrideName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayInt32Value
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32Value_Params
{
	class UNiagaraComponent*                           NiagaraSystem;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       OverrideName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayInt32
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32_Params
{
	class UNiagaraComponent*                           NiagaraSystem;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       OverrideName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayFloatValue
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloatValue_Params
{
	class UNiagaraComponent*                           NiagaraSystem;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       OverrideName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayFloat
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloat_Params
{
	class UNiagaraComponent*                           NiagaraSystem;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       OverrideName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayColorValue
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColorValue_Params
{
	class UNiagaraComponent*                           NiagaraSystem;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       OverrideName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayColor
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColor_Params
{
	class UNiagaraComponent*                           NiagaraSystem;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       OverrideName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FLinearColor>                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayBoolValue
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBoolValue_Params
{
	class UNiagaraComponent*                           NiagaraSystem;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       OverrideName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayBool
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBool_Params
{
	class UNiagaraComponent*                           NiagaraSystem;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       OverrideName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<bool>                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Niagara.NiagaraParticleCallbackHandler.ReceiveParticleData
struct UNiagaraParticleCallbackHandler_ReceiveParticleData_Params
{
	TArray<struct FBasicParticleData>                  Data;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UNiagaraSystem*                              NiagaraSystem;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SimulationPositionOffset;                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Niagara.NiagaraDataInterfaceGrid2DCollection.GetTextureSize
struct UNiagaraDataInterfaceGrid2DCollection_GetTextureSize_Params
{
	class UNiagaraComponent*                           Component;                                                // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                SizeX;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                SizeY;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraDataInterfaceGrid2DCollection.GetRawTextureSize
struct UNiagaraDataInterfaceGrid2DCollection_GetRawTextureSize_Params
{
	class UNiagaraComponent*                           Component;                                                // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                SizeX;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                SizeY;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraDataInterfaceGrid2DCollection.FillTexture2D
struct UNiagaraDataInterfaceGrid2DCollection_FillTexture2D_Params
{
	class UNiagaraComponent*                           Component;                                                // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextureRenderTarget2D*                      Dest;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                AttributeIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Niagara.NiagaraDataInterfaceGrid2DCollection.FillRawTexture2D
struct UNiagaraDataInterfaceGrid2DCollection_FillRawTexture2D_Params
{
	class UNiagaraComponent*                           Component;                                                // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextureRenderTarget2D*                      Dest;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TilesX;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                TilesY;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Niagara.NiagaraDataInterfaceGrid3DCollection.GetTextureSize
struct UNiagaraDataInterfaceGrid3DCollection_GetTextureSize_Params
{
	class UNiagaraComponent*                           Component;                                                // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                SizeX;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                SizeY;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                SizeZ;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraDataInterfaceGrid3DCollection.GetRawTextureSize
struct UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize_Params
{
	class UNiagaraComponent*                           Component;                                                // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                SizeX;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                SizeY;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                SizeZ;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraDataInterfaceGrid3DCollection.FillVolumeTexture
struct UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Params
{
	class UNiagaraComponent*                           Component;                                                // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVolumeTexture*                              Dest;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                AttributeIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Niagara.NiagaraDataInterfaceGrid3DCollection.FillRawVolumeTexture
struct UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Params
{
	class UNiagaraComponent*                           Component;                                                // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVolumeTexture*                              Dest;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TilesX;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                TilesY;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                TileZ;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Niagara.NiagaraDataInterfaceUObjectPropertyReader.SetUObjectReaderPropertyRemap
struct UNiagaraDataInterfaceUObjectPropertyReader_SetUObjectReaderPropertyRemap_Params
{
	class UNiagaraComponent*                           NiagaraComponent;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       UserParameterName;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       GraphName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       RemapName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraFunctionLibrary.SpawnSystemAttachedWithParams
struct UNiagaraFunctionLibrary_SpawnSystemAttachedWithParams_Params
{
	struct FFXSystemSpawnParameters                    SpawnParams;                                              // (Parm, OutParm)
	class UNiagaraComponent*                           ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Niagara.NiagaraFunctionLibrary.SpawnSystemAttached
struct UNiagaraFunctionLibrary_SpawnSystemAttached_Params
{
	class UNiagaraSystem*                              SystemTemplate;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             AttachToComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       AttachPointName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAttachLocation>                       LocationType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoDestroy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoActivate;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	enum class ENCPoolMethod                           PoolingMethod;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPreCullCheck;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UNiagaraComponent*                           ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Niagara.NiagaraFunctionLibrary.SpawnSystemAtLocationWithParams
struct UNiagaraFunctionLibrary_SpawnSystemAtLocationWithParams_Params
{
	struct FFXSystemSpawnParameters                    SpawnParams;                                              // (Parm, OutParm)
	class UNiagaraComponent*                           ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Niagara.NiagaraFunctionLibrary.SpawnSystemAtLocation
struct UNiagaraFunctionLibrary_SpawnSystemAtLocation_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UNiagaraSystem*                              SystemTemplate;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoDestroy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoActivate;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	enum class ENCPoolMethod                           PoolingMethod;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPreCullCheck;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UNiagaraComponent*                           ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Niagara.NiagaraFunctionLibrary.SetVolumeTextureObject
struct UNiagaraFunctionLibrary_SetVolumeTextureObject_Params
{
	class UNiagaraComponent*                           NiagaraSystem;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     OverrideName;                                             // (Parm, ZeroConstructor)
	class UVolumeTexture*                              Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraFunctionLibrary.SetTextureObject
struct UNiagaraFunctionLibrary_SetTextureObject_Params
{
	class UNiagaraComponent*                           NiagaraSystem;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     OverrideName;                                             // (Parm, ZeroConstructor)
	class UTexture*                                    Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraFunctionLibrary.SetTexture2DArrayObject
struct UNiagaraFunctionLibrary_SetTexture2DArrayObject_Params
{
	class UNiagaraComponent*                           NiagaraSystem;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     OverrideName;                                             // (Parm, ZeroConstructor)
	class UTexture2DArray*                             Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraFunctionLibrary.SetSkeletalMeshDataInterfaceSamplingRegions
struct UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceSamplingRegions_Params
{
	class UNiagaraComponent*                           NiagaraSystem;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     OverrideName;                                             // (Parm, ZeroConstructor)
	TArray<struct FName>                               SamplingRegions;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Niagara.NiagaraFunctionLibrary.SetComponentNiagaraGPURayTracedCollisionGroup
struct UNiagaraFunctionLibrary_SetComponentNiagaraGPURayTracedCollisionGroup_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         Primitive;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                CollisionGroup;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraFunctionLibrary.SetActorNiagaraGPURayTracedCollisionGroup
struct UNiagaraFunctionLibrary_SetActorNiagaraGPURayTracedCollisionGroup_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CollisionGroup;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraFunctionLibrary.ReleaseNiagaraGPURayTracedCollisionGroup
struct UNiagaraFunctionLibrary_ReleaseNiagaraGPURayTracedCollisionGroup_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CollisionGroup;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMeshComponent
struct UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMeshComponent_Params
{
	class UNiagaraComponent*                           NiagaraSystem;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     OverrideName;                                             // (Parm, ZeroConstructor)
	class UStaticMeshComponent*                        StaticMeshComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMesh
struct UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMesh_Params
{
	class UNiagaraComponent*                           NiagaraSystem;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     OverrideName;                                             // (Parm, ZeroConstructor)
	class UStaticMesh*                                 StaticMesh;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableSkeletalMeshComponent
struct UNiagaraFunctionLibrary_OverrideSystemUserVariableSkeletalMeshComponent_Params
{
	class UNiagaraComponent*                           NiagaraSystem;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     OverrideName;                                             // (Parm, ZeroConstructor)
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Niagara.NiagaraFunctionLibrary.GetNiagaraParameterCollection
struct UNiagaraFunctionLibrary_GetNiagaraParameterCollection_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UNiagaraParameterCollection*                 Collection;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UNiagaraParameterCollectionInstance*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Niagara.NiagaraFunctionLibrary.AcquireNiagaraGPURayTracedCollisionGroup
struct UNiagaraFunctionLibrary_AcquireNiagaraGPURayTracedCollisionGroup_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Niagara.NiagaraParameterCollectionInstance.SetVectorParameter
struct UNiagaraParameterCollectionInstance_SetVectorParameter_Params
{
	struct FString                                     InVariableName;                                           // (Parm, ZeroConstructor)
	struct FVector                                     InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraParameterCollectionInstance.SetVector4Parameter
struct UNiagaraParameterCollectionInstance_SetVector4Parameter_Params
{
	struct FString                                     InVariableName;                                           // (Parm, ZeroConstructor)
	struct FVector4                                    InValue;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Niagara.NiagaraParameterCollectionInstance.SetVector2DParameter
struct UNiagaraParameterCollectionInstance_SetVector2DParameter_Params
{
	struct FString                                     InVariableName;                                           // (Parm, ZeroConstructor)
	struct FVector2D                                   InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraParameterCollectionInstance.SetQuatParameter
struct UNiagaraParameterCollectionInstance_SetQuatParameter_Params
{
	struct FString                                     InVariableName;                                           // (Parm, ZeroConstructor)
	struct FQuat                                       InValue;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Niagara.NiagaraParameterCollectionInstance.SetIntParameter
struct UNiagaraParameterCollectionInstance_SetIntParameter_Params
{
	struct FString                                     InVariableName;                                           // (Parm, ZeroConstructor)
	int                                                InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraParameterCollectionInstance.SetFloatParameter
struct UNiagaraParameterCollectionInstance_SetFloatParameter_Params
{
	struct FString                                     InVariableName;                                           // (Parm, ZeroConstructor)
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraParameterCollectionInstance.SetColorParameter
struct UNiagaraParameterCollectionInstance_SetColorParameter_Params
{
	struct FString                                     InVariableName;                                           // (Parm, ZeroConstructor)
	struct FLinearColor                                InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraParameterCollectionInstance.SetBoolParameter
struct UNiagaraParameterCollectionInstance_SetBoolParameter_Params
{
	struct FString                                     InVariableName;                                           // (Parm, ZeroConstructor)
	bool                                               InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraParameterCollectionInstance.GetVectorParameter
struct UNiagaraParameterCollectionInstance_GetVectorParameter_Params
{
	struct FString                                     InVariableName;                                           // (Parm, ZeroConstructor)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Niagara.NiagaraParameterCollectionInstance.GetVector4Parameter
struct UNiagaraParameterCollectionInstance_GetVector4Parameter_Params
{
	struct FString                                     InVariableName;                                           // (Parm, ZeroConstructor)
	struct FVector4                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Niagara.NiagaraParameterCollectionInstance.GetVector2DParameter
struct UNiagaraParameterCollectionInstance_GetVector2DParameter_Params
{
	struct FString                                     InVariableName;                                           // (Parm, ZeroConstructor)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Niagara.NiagaraParameterCollectionInstance.GetQuatParameter
struct UNiagaraParameterCollectionInstance_GetQuatParameter_Params
{
	struct FString                                     InVariableName;                                           // (Parm, ZeroConstructor)
	struct FQuat                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Niagara.NiagaraParameterCollectionInstance.GetIntParameter
struct UNiagaraParameterCollectionInstance_GetIntParameter_Params
{
	struct FString                                     InVariableName;                                           // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Niagara.NiagaraParameterCollectionInstance.GetFloatParameter
struct UNiagaraParameterCollectionInstance_GetFloatParameter_Params
{
	struct FString                                     InVariableName;                                           // (Parm, ZeroConstructor)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Niagara.NiagaraParameterCollectionInstance.GetColorParameter
struct UNiagaraParameterCollectionInstance_GetColorParameter_Params
{
	struct FString                                     InVariableName;                                           // (Parm, ZeroConstructor)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Niagara.NiagaraParameterCollectionInstance.GetBoolParameter
struct UNiagaraParameterCollectionInstance_GetBoolParameter_Params
{
	struct FString                                     InVariableName;                                           // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Niagara.NiagaraBaselineController.OnTickTest
struct UNiagaraBaselineController_OnTickTest_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Niagara.NiagaraBaselineController.OnOwnerTick
struct UNiagaraBaselineController_OnOwnerTick_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraBaselineController.OnEndTest
struct UNiagaraBaselineController_OnEndTest_Params
{
	struct FNiagaraPerfBaselineStats                   Stats;                                                    // (Parm)
};

// Function Niagara.NiagaraBaselineController.OnBeginTest
struct UNiagaraBaselineController_OnBeginTest_Params
{
};

// Function Niagara.NiagaraBaselineController.GetSystem
struct UNiagaraBaselineController_GetSystem_Params
{
	class UNiagaraSystem*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Niagara.NiagaraPreviewBase.SetSystem
struct ANiagaraPreviewBase_SetSystem_Params
{
	class UNiagaraSystem*                              InSystem;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraPreviewBase.SetLabelText
struct ANiagaraPreviewBase_SetLabelText_Params
{
	struct FText                                       InXAxisText;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText                                       InYAxisText;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Niagara.NiagaraPreviewAxis.Num
struct UNiagaraPreviewAxis_Num_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Niagara.NiagaraPreviewAxis.ApplyToPreview
struct UNiagaraPreviewAxis_ApplyToPreview_Params
{
	class UNiagaraComponent*                           PreviewComponent;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                PreviewIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsXAxis;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     OutLabelText;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function Niagara.NiagaraPreviewGrid.SetPaused
struct ANiagaraPreviewGrid_SetPaused_Params
{
	bool                                               bPaused;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraPreviewGrid.GetPreviews
struct ANiagaraPreviewGrid_GetPreviews_Params
{
	TArray<class UNiagaraComponent*>                   OutPreviews;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function Niagara.NiagaraPreviewGrid.DeactivatePreviews
struct ANiagaraPreviewGrid_DeactivatePreviews_Params
{
};

// Function Niagara.NiagaraPreviewGrid.ActivatePreviews
struct ANiagaraPreviewGrid_ActivatePreviews_Params
{
	bool                                               bReset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Niagara.NiagaraScript.RaiseOnGPUCompilationComplete
struct UNiagaraScript_RaiseOnGPUCompilationComplete_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
