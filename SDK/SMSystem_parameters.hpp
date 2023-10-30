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

// Function SMSystem.SMInstance.Update
struct USMInstance_Update_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SMSystem.SMInstance.TryGetTransitionInfo
struct USMInstance_TryGetTransitionInfo_Params
{
	struct FGuid                                       Guid;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FSMTransitionInfo                           TransitionInfo;                                           // (Parm, OutParm)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SMSystem.SMInstance.TryGetStateInfo
struct USMInstance_TryGetStateInfo_Params
{
	struct FGuid                                       Guid;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FSMStateInfo                                StateInfo;                                                // (Parm, OutParm)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SMSystem.SMInstance.TryGetNestedActiveState
struct USMInstance_TryGetNestedActiveState_Params
{
	struct FSMStateInfo                                FoundState;                                               // (Parm, OutParm)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SMSystem.SMInstance.Tick
struct USMInstance_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SMSystem.SMInstance.TakeTransitionChain
struct USMInstance_TakeTransitionChain_Params
{
	TArray<class USMTransitionInstance*>               InTransitionChain;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMInstance.SwitchActiveStateByQualifiedName
struct USMInstance_SwitchActiveStateByQualifiedName_Params
{
	struct FString                                     InFullPath;                                               // (Parm, ZeroConstructor)
	bool                                               bDeactivateOtherStates;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SMSystem.SMInstance.SwitchActiveState
struct USMInstance_SwitchActiveState_Params
{
	class USMStateInstance_Base*                       NewStateInstance;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDeactivateOtherStates;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SMSystem.SMInstance.Stop
struct USMInstance_Stop_Params
{
};

// Function SMSystem.SMInstance.StartWithNewContext
struct USMInstance_StartWithNewContext_Params
{
	class UObject*                                     Context;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SMSystem.SMInstance.Start
struct USMInstance_Start_Params
{
};

// Function SMSystem.SMInstance.Shutdown
struct USMInstance_Shutdown_Params
{
};

// Function SMSystem.SMInstance.SetTickOnManualUpdate
struct USMInstance_SetTickOnManualUpdate_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SMSystem.SMInstance.SetTickInterval
struct USMInstance_SetTickInterval_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SMSystem.SMInstance.SetTickBeforeBeginPlay
struct USMInstance_SetTickBeforeBeginPlay_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SMSystem.SMInstance.SetStopOnEndState
struct USMInstance_SetStopOnEndState_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SMSystem.SMInstance.SetStateMachineClass
struct USMInstance_SetStateMachineClass_Params
{
	class UClass*                                      NewStateMachineClass;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SMSystem.SMInstance.SetStateHistoryMaxCount
struct USMInstance_SetStateHistoryMaxCount_Params
{
	int                                                NewSize;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SMSystem.SMInstance.SetGuidRedirectMap
struct USMInstance_SetGuidRedirectMap_Params
{
	TMap<struct FGuid, struct FGuid>                   InGuidMap;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function SMSystem.SMInstance.SetContext
struct USMInstance_SetContext_Params
{
	class UObject*                                     Context;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SMSystem.SMInstance.SetCanTickWhenPaused
struct USMInstance_SetCanTickWhenPaused_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SMSystem.SMInstance.SetCanEverTick
struct USMInstance_SetCanEverTick_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SMSystem.SMInstance.SetAutoManageTime
struct USMInstance_SetAutoManageTime_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SMSystem.SMInstance.RunUpdateAsReference
struct USMInstance_RunUpdateAsReference_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SMSystem.SMInstance.Restart
struct USMInstance_Restart_Params
{
};

// Function SMSystem.SMInstance.ReplicatedStop
struct USMInstance_ReplicatedStop_Params
{
};

// Function SMSystem.SMInstance.ReplicatedStart
struct USMInstance_ReplicatedStart_Params
{
};

// Function SMSystem.SMInstance.ReplicatedRestart
struct USMInstance_ReplicatedRestart_Params
{
};

// Function SMSystem.SMInstance.REP_OnReplicatedReferencesLoaded
struct USMInstance_REP_OnReplicatedReferencesLoaded_Params
{
};

// Function SMSystem.SMInstance.PreloadAllNodeInstances
struct USMInstance_PreloadAllNodeInstances_Params
{
};

// Function SMSystem.SMInstance.OnStateMachineUpdate
struct USMInstance_OnStateMachineUpdate_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SMSystem.SMInstance.OnStateMachineTransitionTaken
struct USMInstance_OnStateMachineTransitionTaken_Params
{
	struct FSMTransitionInfo                           Transition;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function SMSystem.SMInstance.OnStateMachineStop
struct USMInstance_OnStateMachineStop_Params
{
};

// Function SMSystem.SMInstance.OnStateMachineStateStarted
struct USMInstance_OnStateMachineStateStarted_Params
{
	struct FSMStateInfo                                State;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function SMSystem.SMInstance.OnStateMachineStateChanged
struct USMInstance_OnStateMachineStateChanged_Params
{
	struct FSMStateInfo                                ToState;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FSMStateInfo                                FromState;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function SMSystem.SMInstance.OnStateMachineStart
struct USMInstance_OnStateMachineStart_Params
{
};

// Function SMSystem.SMInstance.OnStateMachineShutdown
struct USMInstance_OnStateMachineShutdown_Params
{
};

// Function SMSystem.SMInstance.OnStateMachineInitialStateLoaded
struct USMInstance_OnStateMachineInitialStateLoaded_Params
{
	struct FGuid                                       StateGuid;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function SMSystem.SMInstance.OnStateMachineInitialized
struct USMInstance_OnStateMachineInitialized_Params
{
};

// Function SMSystem.SMInstance.OnPreStateMachineInitialized
struct USMInstance_OnPreStateMachineInitialized_Params
{
};

// Function SMSystem.SMInstance.OnContextPawnRestarted
struct USMInstance_OnContextPawnRestarted_Params
{
	class APawn*                                       Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SMSystem.SMInstance.LoadFromState
struct USMInstance_LoadFromState_Params
{
	struct FGuid                                       FromGuid;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bAllParents;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNotify;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SMSystem.SMInstance.LoadFromMultipleStates
struct USMInstance_LoadFromMultipleStates_Params
{
	TArray<struct FGuid>                               FromGuids;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bNotify;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SMSystem.SMInstance.K2_TryGetNetworkInterface
struct USMInstance_K2_TryGetNetworkInterface_Params
{
	TScriptInterface<class USMStateMachineNetworkedInterface> Interface;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsValid;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SMSystem.SMInstance.K2_InitializeAsync
struct USMInstance_K2_InitializeAsync_Params
{
	class UObject*                                     Context;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
};

// Function SMSystem.SMInstance.IsTickableWhenPaused
struct USMInstance_IsTickableWhenPaused_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMInstance.IsTickable
struct USMInstance_IsTickable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMInstance.IsInitializingAsync
struct USMInstance_IsInitializingAsync_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMInstance.IsInitialized
struct USMInstance_IsInitialized_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMInstance.IsInEndState
struct USMInstance_IsInEndState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMInstance.IsActive
struct USMInstance_IsActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMInstance.Internal_Update
struct USMInstance_Internal_Update_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SMSystem.SMInstance.Internal_EventUpdate
struct USMInstance_Internal_EventUpdate_Params
{
};

// Function SMSystem.SMInstance.Internal_EventCleanup
struct USMInstance_Internal_EventCleanup_Params
{
	struct FGuid                                       PathGuid;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function SMSystem.SMInstance.Internal_EvaluateAndTakeTransitionChainByGuid
struct USMInstance_Internal_EvaluateAndTakeTransitionChainByGuid_Params
{
	struct FGuid                                       PathGuid;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMInstance.Initialize
struct USMInstance_Initialize_Params
{
	class UObject*                                     Context;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SMSystem.SMInstance.HasStarted
struct USMInstance_HasStarted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMInstance.GetTransitionInstanceByGuid
struct USMInstance_GetTransitionInstanceByGuid_Params
{
	struct FGuid                                       Guid;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class USMTransitionInstance*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMInstance.GetTickInterval
struct USMInstance_GetTickInterval_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMInstance.GetStopOnEndState
struct USMInstance_GetStopOnEndState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMInstance.GetStateMachineClass
struct USMInstance_GetStateMachineClass_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMInstance.GetStateInstanceByQualifiedName
struct USMInstance_GetStateInstanceByQualifiedName_Params
{
	struct FString                                     InFullPath;                                               // (Parm, ZeroConstructor)
	class USMStateInstance_Base*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMInstance.GetStateInstanceByGuid
struct USMInstance_GetStateInstanceByGuid_Params
{
	struct FGuid                                       Guid;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class USMStateInstance_Base*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMInstance.GetStateHistoryMaxCount
struct USMInstance_GetStateHistoryMaxCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMInstance.GetStateHistory
struct USMInstance_GetStateHistory_Params
{
	TArray<struct FSMStateHistory>                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function SMSystem.SMInstance.GetSingleActiveStateInstance
struct USMInstance_GetSingleActiveStateInstance_Params
{
	bool                                               bCheckNested;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class USMStateInstance_Base*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMInstance.GetSingleActiveStateGuid
struct USMInstance_GetSingleActiveStateGuid_Params
{
	bool                                               bCheckNested;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMInstance.GetRootStateMachineNodeInstance
struct USMInstance_GetRootStateMachineNodeInstance_Params
{
	class USMStateMachineInstance*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMInstance.GetRootStateMachineInstance
struct USMInstance_GetRootStateMachineInstance_Params
{
	class USMStateMachineInstance*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMInstance.GetReferenceOwner
struct USMInstance_GetReferenceOwner_Params
{
	class USMInstance*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMInstance.GetReferencedInstanceByGuid
struct USMInstance_GetReferencedInstanceByGuid_Params
{
	struct FGuid                                       Guid;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class USMInstance*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMInstance.GetPrimaryReferenceOwner
struct USMInstance_GetPrimaryReferenceOwner_Params
{
	class USMInstance*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMInstance.GetNodeInstanceByGuid
struct USMInstance_GetNodeInstanceByGuid_Params
{
	struct FGuid                                       Guid;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class USMNodeInstance*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMInstance.GetNetworkInterface
struct USMInstance_GetNetworkInterface_Params
{
	TScriptInterface<class USMStateMachineNetworkedInterface> ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMInstance.GetNestedActiveStateName
struct USMInstance_GetNestedActiveStateName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SMSystem.SMInstance.GetNestedActiveStateGuid
struct USMInstance_GetNestedActiveStateGuid_Params
{
	struct FGuid                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMInstance.GetMasterReferenceOwner
struct USMInstance_GetMasterReferenceOwner_Params
{
	class USMInstance*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMInstance.GetInputComponent
struct USMInstance_GetInputComponent_Params
{
	class UInputComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function SMSystem.SMInstance.GetGuidRedirectMap
struct USMInstance_GetGuidRedirectMap_Params
{
	TMap<struct FGuid, struct FGuid>                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SMSystem.SMInstance.GetContext
struct USMInstance_GetContext_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMInstance.GetComponentOwner
struct USMInstance_GetComponentOwner_Params
{
	class USMStateMachineComponent*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function SMSystem.SMInstance.GetAllTransitionInstances
struct USMInstance_GetAllTransitionInstances_Params
{
	TArray<class USMTransitionInstance*>               TransitionInstances;                                      // (Parm, OutParm, ZeroConstructor)
};

// Function SMSystem.SMInstance.GetAllStateInstances
struct USMInstance_GetAllStateInstances_Params
{
	TArray<class USMStateInstance_Base*>               StateInstances;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function SMSystem.SMInstance.GetAllReferencedInstances
struct USMInstance_GetAllReferencedInstances_Params
{
	bool                                               bIncludeChildren;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class USMInstance*>                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SMSystem.SMInstance.GetAllCurrentStateGuids
struct USMInstance_GetAllCurrentStateGuids_Params
{
	TArray<struct FGuid>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SMSystem.SMInstance.GetAllActiveStateInstances
struct USMInstance_GetAllActiveStateInstances_Params
{
	TArray<class USMStateInstance_Base*>               ActiveStateInstances;                                     // (Parm, OutParm, ZeroConstructor)
};

// Function SMSystem.SMInstance.GetAllActiveStateGuids
struct USMInstance_GetAllActiveStateGuids_Params
{
	TArray<struct FGuid>                               ActiveGuids;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function SMSystem.SMInstance.GetActiveStateName
struct USMInstance_GetActiveStateName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SMSystem.SMInstance.GetActiveStateInstance
struct USMInstance_GetActiveStateInstance_Params
{
	bool                                               bCheckNested;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class USMStateInstance_Base*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMInstance.GetActiveStateGuid
struct USMInstance_GetActiveStateGuid_Params
{
	struct FGuid                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMInstance.EvaluateTransitions
struct USMInstance_EvaluateTransitions_Params
{
};

// Function SMSystem.SMInstance.EvaluateAndTakeTransitionChain
struct USMInstance_EvaluateAndTakeTransitionChain_Params
{
	class USMTransitionInstance*                       InFirstTransitionInstance;                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMInstance.EvaluateAndFindTransitionChain
struct USMInstance_EvaluateAndFindTransitionChain_Params
{
	class USMTransitionInstance*                       InFirstTransitionInstance;                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class USMTransitionInstance*>               OutTransitionChain;                                       // (Parm, OutParm, ZeroConstructor)
	class USMStateInstance_Base*                       OutDestinationState;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bRequirePreviousStateActive;                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMInstance.ClearStateHistory
struct USMInstance_ClearStateHistory_Params
{
};

// Function SMSystem.SMInstance.ClearLoadedStates
struct USMInstance_ClearLoadedStates_Params
{
};

// Function SMSystem.SMInstance.CanTickOnManualUpdate
struct USMInstance_CanTickOnManualUpdate_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMInstance.CanEverTick
struct USMInstance_CanEverTick_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMInstance.CanAutoManageTime
struct USMInstance_CanAutoManageTime_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMInstance.AreInitialStatesSetFromLoad
struct USMInstance_AreInitialStatesSetFromLoad_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMEditorGraphNodeInterface.GetEditorGraphPropertyAsArray
struct USMEditorGraphNodeInterface_GetEditorGraphPropertyAsArray_Params
{
	struct FName                                       PropertyName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class USMNodeInstance*                             NodeInstance;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ArrayIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<TScriptInterface<class USMEditorGraphPropertyNodeInterface>> ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SMSystem.SMEditorGraphNodeInterface.GetEditorGraphProperty
struct USMEditorGraphNodeInterface_GetEditorGraphProperty_Params
{
	struct FName                                       PropertyName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class USMNodeInstance*                             NodeInstance;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ArrayIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class USMEditorGraphPropertyNodeInterface> ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMEditorGraphNodeInterface.GetAllEditorGraphProperties
struct USMEditorGraphNodeInterface_GetAllEditorGraphProperties_Params
{
	class USMNodeInstance*                             NodeInstance;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<TScriptInterface<class USMEditorGraphPropertyNodeInterface>> ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SMSystem.SMEditorGraphPropertyNodeInterface.SetNotificationAndHighlight
struct USMEditorGraphPropertyNodeInterface_SetNotificationAndHighlight_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	enum class ESMLogType                              Severity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
	bool                                               bClearOnCompile;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SMSystem.SMEditorGraphPropertyNodeInterface.SetNotification
struct USMEditorGraphPropertyNodeInterface_SetNotification_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	enum class ESMLogType                              Severity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
	bool                                               bClearOnCompile;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SMSystem.SMEditorGraphPropertyNodeInterface.SetHighlight
struct USMEditorGraphPropertyNodeInterface_SetHighlight_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bClearOnCompile;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SMSystem.SMEditorGraphPropertyNodeInterface.ResetProperty
struct USMEditorGraphPropertyNodeInterface_ResetProperty_Params
{
};

// Function SMSystem.SMStateMachineNetworkedInterface.IsSimulatedProxy
struct USMStateMachineNetworkedInterface_IsSimulatedProxy_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMStateMachineNetworkedInterface.IsConfiguredForNetworking
struct USMStateMachineNetworkedInterface_IsConfiguredForNetworking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMStateMachineNetworkedInterface.HasAuthority
struct USMStateMachineNetworkedInterface_HasAuthority_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMNodeInstance.WithExecutionEnvironment
struct USMNodeInstance_WithExecutionEnvironment_Params
{
	enum class ESMExecutionEnvironment                 ExecutionEnvironment;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SMSystem.SMNodeInstance.SetVariableReadOnly
struct USMNodeInstance_SetVariableReadOnly_Params
{
	struct FName                                       VariableName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSetIsReadOnly;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SMSystem.SMNodeInstance.SetVariableHidden
struct USMNodeInstance_SetVariableHidden_Params
{
	struct FName                                       VariableName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSetHidden;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SMSystem.SMNodeInstance.SetUseCustomIcon
struct USMNodeInstance_SetUseCustomIcon_Params
{
	bool                                               bValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SMSystem.SMNodeInstance.SetUseCustomColor
struct USMNodeInstance_SetUseCustomColor_Params
{
	bool                                               bValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SMSystem.SMNodeInstance.SetNodeDescriptionText
struct USMNodeInstance_SetNodeDescriptionText_Params
{
	struct FText                                       NewDescription;                                           // (Parm)
};

// Function SMSystem.SMNodeInstance.SetNodeColor
struct USMNodeInstance_SetNodeColor_Params
{
	struct FLinearColor                                NewColor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SMSystem.SMNodeInstance.SetDisplayName
struct USMNodeInstance_SetDisplayName_Params
{
	struct FName                                       NewDisplayName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SMSystem.SMNodeInstance.ResetVariables
struct USMNodeInstance_ResetVariables_Params
{
};

// Function SMSystem.SMNodeInstance.OnRootStateMachineStop
struct USMNodeInstance_OnRootStateMachineStop_Params
{
};

// Function SMSystem.SMNodeInstance.OnRootStateMachineStart
struct USMNodeInstance_OnRootStateMachineStart_Params
{
};

// Function SMSystem.SMNodeInstance.OnPreCompileValidate
struct USMNodeInstance_OnPreCompileValidate_Params
{
	class USMCompilerLog*                              CompilerLog;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SMSystem.SMNodeInstance.OnContextPawnControllerChanged
struct USMNodeInstance_OnContextPawnControllerChanged_Params
{
	class APawn*                                       Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 NewController;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SMSystem.SMNodeInstance.K2_TryGetOwningEditorGraphNode
struct USMNodeInstance_K2_TryGetOwningEditorGraphNode_Params
{
	TScriptInterface<class USMEditorGraphNodeInterface> EditorNode;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	enum class ESMValidEditorNode                      IsValidNode;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SMSystem.SMNodeInstance.IsInitializedAndReadyForInputEvents
struct USMNodeInstance_IsInitializedAndReadyForInputEvents_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMNodeInstance.IsInitialized
struct USMNodeInstance_IsInitialized_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMNodeInstance.IsInEndState
struct USMNodeInstance_IsInEndState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMNodeInstance.IsEditorExecution
struct USMNodeInstance_IsEditorExecution_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMNodeInstance.IsActive
struct USMNodeInstance_IsActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMNodeInstance.HasUpdated
struct USMNodeInstance_HasUpdated_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMNodeInstance.GetTimeInState
struct USMNodeInstance_GetTimeInState_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMNodeInstance.GetStateMachineInstance
struct USMNodeInstance_GetStateMachineInstance_Params
{
	bool                                               bTopMostInstance;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class USMInstance*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMNodeInstance.GetOwningStateMachineNodeInstance
struct USMNodeInstance_GetOwningStateMachineNodeInstance_Params
{
	class USMStateMachineInstance*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMNodeInstance.GetOwningEditorGraphNode
struct USMNodeInstance_GetOwningEditorGraphNode_Params
{
	TScriptInterface<class USMEditorGraphNodeInterface> ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMNodeInstance.GetNodePosition
struct USMNodeInstance_GetNodePosition_Params
{
	struct FVector2D                                   ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function SMSystem.SMNodeInstance.GetNodeName
struct USMNodeInstance_GetNodeName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SMSystem.SMNodeInstance.GetNodeIconTintColor
struct USMNodeInstance_GetNodeIconTintColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMNodeInstance.GetNodeIconSize
struct USMNodeInstance_GetNodeIconSize_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMNodeInstance.GetNodeIcon
struct USMNodeInstance_GetNodeIcon_Params
{
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMNodeInstance.GetNodeDescriptionText
struct USMNodeInstance_GetNodeDescriptionText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SMSystem.SMNodeInstance.GetNetworkInterface
struct USMNodeInstance_GetNetworkInterface_Params
{
	TScriptInterface<class USMStateMachineNetworkedInterface> ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMNodeInstance.GetInputComponent
struct USMNodeInstance_GetInputComponent_Params
{
	class UInputComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function SMSystem.SMNodeInstance.GetGuid
struct USMNodeInstance_GetGuid_Params
{
	struct FGuid                                       ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function SMSystem.SMNodeInstance.GetContext
struct USMNodeInstance_GetContext_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMNodeInstance.EvaluateGraphProperties
struct USMNodeInstance_EvaluateGraphProperties_Params
{
	bool                                               bTargetOnly;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SMSystem.SMNodeInstance.ConstructionScript
struct USMNodeInstance_ConstructionScript_Params
{
};

// Function SMSystem.SMStateInstance_Base.SwitchToLinkedStateByTransition
struct USMStateInstance_Base_SwitchToLinkedStateByTransition_Params
{
	class USMTransitionInstance*                       TransitionInstance;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRequireTransitionToPass;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bActivateNow;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMStateInstance_Base.SwitchToLinkedStateByName
struct USMStateInstance_Base_SwitchToLinkedStateByName_Params
{
	struct FString                                     NextStateName;                                            // (Parm, ZeroConstructor)
	bool                                               bRequireTransitionToPass;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bActivateNow;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMStateInstance_Base.SwitchToLinkedState
struct USMStateInstance_Base_SwitchToLinkedState_Params
{
	class USMStateInstance_Base*                       NextStateInstance;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRequireTransitionToPass;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bActivateNow;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMStateInstance_Base.SetStayActiveOnStateChange
struct USMStateInstance_Base_SetStayActiveOnStateChange_Params
{
	bool                                               bValue;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SMSystem.SMStateInstance_Base.SetExcludeFromAnyState
struct USMStateInstance_Base_SetExcludeFromAnyState_Params
{
	bool                                               bValue;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SMSystem.SMStateInstance_Base.SetEvalTransitionsOnStart
struct USMStateInstance_Base_SetEvalTransitionsOnStart_Params
{
	bool                                               bValue;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SMSystem.SMStateInstance_Base.SetDisableTickTransitionEvaluation
struct USMStateInstance_Base_SetDisableTickTransitionEvaluation_Params
{
	bool                                               bValue;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SMSystem.SMStateInstance_Base.SetDefaultToParallel
struct USMStateInstance_Base_SetDefaultToParallel_Params
{
	bool                                               bValue;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SMSystem.SMStateInstance_Base.SetAlwaysUpdate
struct USMStateInstance_Base_SetAlwaysUpdate_Params
{
	bool                                               bValue;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SMSystem.SMStateInstance_Base.SetAllowParallelReentry
struct USMStateInstance_Base_SetAllowParallelReentry_Params
{
	bool                                               bValue;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SMSystem.SMStateInstance_Base.SetActive
struct USMStateInstance_Base_SetActive_Params
{
	bool                                               bValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSetAllParents;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bActivateNow;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SMSystem.SMStateInstance_Base.OnStateUpdate
struct USMStateInstance_Base_OnStateUpdate_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SMSystem.SMStateInstance_Base.OnStateEnd
struct USMStateInstance_Base_OnStateEnd_Params
{
};

// Function SMSystem.SMStateInstance_Base.OnStateBegin
struct USMStateInstance_Base_OnStateBegin_Params
{
};

// Function SMSystem.SMStateInstance_Base.IsStateMachine
struct USMStateInstance_Base_IsStateMachine_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMStateInstance_Base.IsEntryState
struct USMStateInstance_Base_IsEntryState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMStateInstance_Base.GetTransitionToTake
struct USMStateInstance_Base_GetTransitionToTake_Params
{
	class USMTransitionInstance*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMStateInstance_Base.GetTransitionByIndex
struct USMStateInstance_Base_GetTransitionByIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class USMTransitionInstance*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMStateInstance_Base.GetStayActiveOnStateChange
struct USMStateInstance_Base_GetStayActiveOnStateChange_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMStateInstance_Base.GetStateInfo
struct USMStateInstance_Base_GetStateInfo_Params
{
	struct FSMStateInfo                                State;                                                    // (Parm, OutParm)
};

// Function SMSystem.SMStateInstance_Base.GetStartTime
struct USMStateInstance_Base_GetStartTime_Params
{
	struct FDateTime                                   ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function SMSystem.SMStateInstance_Base.GetServerTimeInState
struct USMStateInstance_Base_GetServerTimeInState_Params
{
	bool                                               bOutUsedLocalTime;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMStateInstance_Base.GetPreviousStateByName
struct USMStateInstance_Base_GetPreviousStateByName_Params
{
	struct FString                                     StateName;                                                // (Parm, ZeroConstructor)
	class USMStateInstance_Base*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMStateInstance_Base.GetPreviousActiveTransition
struct USMStateInstance_Base_GetPreviousActiveTransition_Params
{
	class USMTransitionInstance*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMStateInstance_Base.GetPreviousActiveState
struct USMStateInstance_Base_GetPreviousActiveState_Params
{
	class USMStateInstance_Base*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMStateInstance_Base.GetOutgoingTransitions
struct USMStateInstance_Base_GetOutgoingTransitions_Params
{
	TArray<class USMTransitionInstance*>               Transitions;                                              // (Parm, OutParm, ZeroConstructor)
	bool                                               bExcludeAlwaysFalse;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMStateInstance_Base.GetNextStateByTransitionIndex
struct USMStateInstance_Base_GetNextStateByTransitionIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class USMStateInstance_Base*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMStateInstance_Base.GetNextStateByName
struct USMStateInstance_Base_GetNextStateByName_Params
{
	struct FString                                     StateName;                                                // (Parm, ZeroConstructor)
	class USMStateInstance_Base*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMStateInstance_Base.GetIncomingTransitions
struct USMStateInstance_Base_GetIncomingTransitions_Params
{
	TArray<class USMTransitionInstance*>               Transitions;                                              // (Parm, OutParm, ZeroConstructor)
	bool                                               bExcludeAlwaysFalse;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMStateInstance_Base.GetExcludeFromAnyState
struct USMStateInstance_Base_GetExcludeFromAnyState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMStateInstance_Base.GetEvalTransitionsOnStart
struct USMStateInstance_Base_GetEvalTransitionsOnStart_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMStateInstance_Base.GetDisableTickTransitionEvaluation
struct USMStateInstance_Base_GetDisableTickTransitionEvaluation_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMStateInstance_Base.GetDefaultToParallel
struct USMStateInstance_Base_GetDefaultToParallel_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMStateInstance_Base.GetAlwaysUpdate
struct USMStateInstance_Base_GetAlwaysUpdate_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMStateInstance_Base.GetAllowParallelReentry
struct USMStateInstance_Base_GetAllowParallelReentry_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMStateInstance_Base.EvaluateTransitions
struct USMStateInstance_Base_EvaluateTransitions_Params
{
};

// Function SMSystem.SMStateInstance_Base.AreAllOutgoingTransitionsFromAnAnyState
struct USMStateInstance_Base_AreAllOutgoingTransitionsFromAnAnyState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMStateInstance_Base.AreAllIncomingTransitionsFromAnAnyState
struct USMStateInstance_Base_AreAllIncomingTransitionsFromAnAnyState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMConduitInstance.SetEvalWithTransitions
struct USMConduitInstance_SetEvalWithTransitions_Params
{
	bool                                               bValue;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SMSystem.SMConduitInstance.SetCanEvaluate
struct USMConduitInstance_SetCanEvaluate_Params
{
	bool                                               bValue;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SMSystem.SMConduitInstance.OnConduitShutdown
struct USMConduitInstance_OnConduitShutdown_Params
{
};

// Function SMSystem.SMConduitInstance.OnConduitInitialized
struct USMConduitInstance_OnConduitInitialized_Params
{
};

// Function SMSystem.SMConduitInstance.OnConduitEntered
struct USMConduitInstance_OnConduitEntered_Params
{
};

// Function SMSystem.SMConduitInstance.GetEvalWithTransitions
struct USMConduitInstance_GetEvalWithTransitions_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMConduitInstance.GetCanEvaluate
struct USMConduitInstance_GetCanEvaluate_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMConduitInstance.CanEnterTransition
struct USMConduitInstance_CanEnterTransition_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMCompilerLog.LogProperty
struct USMCompilerLog_LogProperty_Params
{
	struct FName                                       PropertyName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class USMNodeInstance*                             NodeInstance;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
	enum class ESMCompilerLogType                      Severity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHighlight;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSilent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ArrayIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SMSystem.SMCompilerLog.Log
struct USMCompilerLog_Log_Params
{
	enum class ESMCompilerLogType                      Severity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function SMSystem.SMStateInstance.RemoveStateFromStack
struct USMStateInstance_RemoveStateFromStack_Params
{
	int                                                StackIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SMSystem.SMStateInstance.OnStateShutdown
struct USMStateInstance_OnStateShutdown_Params
{
};

// Function SMSystem.SMStateInstance.OnStateInitialized
struct USMStateInstance_OnStateInitialized_Params
{
};

// Function SMSystem.SMStateInstance.GetStateStackCount
struct USMStateInstance_GetStateStackCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMStateInstance.GetStateInStackByClass
struct USMStateInstance_GetStateInStackByClass_Params
{
	class UClass*                                      StateClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeChildren;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class USMStateInstance_Base*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMStateInstance.GetStateInStack
struct USMStateInstance_GetStateInStack_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class USMStateInstance_Base*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMStateInstance.GetStateIndexInStack
struct USMStateInstance_GetStateIndexInStack_Params
{
	class USMStateInstance_Base*                       StateInstance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMStateInstance.GetStackOwnerInstance
struct USMStateInstance_GetStackOwnerInstance_Params
{
	class USMStateInstance_Base*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMStateInstance.GetAllStateStackInstances
struct USMStateInstance_GetAllStateStackInstances_Params
{
	TArray<class USMStateInstance_Base*>               StateStackInstances;                                      // (Parm, OutParm, ZeroConstructor)
};

// Function SMSystem.SMStateInstance.GetAllStatesInStackOfClass
struct USMStateInstance_GetAllStatesInStackOfClass_Params
{
	class UClass*                                      StateClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class USMStateInstance_Base*>               StateStackInstances;                                      // (Parm, OutParm, ZeroConstructor)
	bool                                               bIncludeChildren;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SMSystem.SMStateInstance.ClearStateStack
struct USMStateInstance_ClearStateStack_Params
{
};

// Function SMSystem.SMStateInstance.AddStateToStack
struct USMStateInstance_AddStateToStack_Params
{
	class UClass*                                      StateClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                StackIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class USMStateInstance*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMStateMachineComponent.Update
struct USMStateMachineComponent_Update_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SMSystem.SMStateMachineComponent.Stop
struct USMStateMachineComponent_Stop_Params
{
};

// Function SMSystem.SMStateMachineComponent.Start
struct USMStateMachineComponent_Start_Params
{
};

// Function SMSystem.SMStateMachineComponent.Shutdown
struct USMStateMachineComponent_Shutdown_Params
{
};

// Function SMSystem.SMStateMachineComponent.SetCanInstanceNetworkTick
struct USMStateMachineComponent_SetCanInstanceNetworkTick_Params
{
	bool                                               bCanEverTick;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SMSystem.SMStateMachineComponent.SERVER_Update
struct USMStateMachineComponent_SERVER_Update_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SMSystem.SMStateMachineComponent.SERVER_TakeTransitions
struct USMStateMachineComponent_SERVER_TakeTransitions_Params
{
	TArray<struct FSMTransitionTransaction>            TransitionTransactions;                                   // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function SMSystem.SMStateMachineComponent.SERVER_Stop
struct USMStateMachineComponent_SERVER_Stop_Params
{
	struct FSMTransaction_Base                         Transaction;                                              // (ConstParm, Parm, ReferenceParm)
};

// Function SMSystem.SMStateMachineComponent.SERVER_Start
struct USMStateMachineComponent_SERVER_Start_Params
{
	struct FSMTransaction_Base                         Transaction;                                              // (ConstParm, Parm, ReferenceParm)
};

// Function SMSystem.SMStateMachineComponent.SERVER_Shutdown
struct USMStateMachineComponent_SERVER_Shutdown_Params
{
	struct FSMTransaction_Base                         Transaction;                                              // (ConstParm, Parm, ReferenceParm)
};

// Function SMSystem.SMStateMachineComponent.SERVER_RequestFullSync
struct USMStateMachineComponent_SERVER_RequestFullSync_Params
{
	bool                                               bForceFullRefresh;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SMSystem.SMStateMachineComponent.SERVER_Initialize
struct USMStateMachineComponent_SERVER_Initialize_Params
{
	struct FSMInitializeTransaction                    Transaction;                                              // (ConstParm, Parm, ReferenceParm)
};

// Function SMSystem.SMStateMachineComponent.SERVER_FullSync
struct USMStateMachineComponent_SERVER_FullSync_Params
{
	struct FSMFullSyncTransaction                      FullSyncTransaction;                                      // (ConstParm, Parm, ReferenceParm)
};

// Function SMSystem.SMStateMachineComponent.SERVER_ActivateStates
struct USMStateMachineComponent_SERVER_ActivateStates_Params
{
	TArray<struct FSMActivateStateTransaction>         StateTransactions;                                        // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function SMSystem.SMStateMachineComponent.Restart
struct USMStateMachineComponent_Restart_Params
{
};

// Function SMSystem.SMStateMachineComponent.REP_OnInstanceLoaded
struct USMStateMachineComponent_REP_OnInstanceLoaded_Params
{
};

// Function SMSystem.SMStateMachineComponent.OnPostInitialize
struct USMStateMachineComponent_OnPostInitialize_Params
{
};

// Function SMSystem.SMStateMachineComponent.OnContextPawnControllerChanged
struct USMStateMachineComponent_OnContextPawnControllerChanged_Params
{
	class APawn*                                       Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 NewController;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SMSystem.SMStateMachineComponent.MULTICAST_TakeTransitions
struct USMStateMachineComponent_MULTICAST_TakeTransitions_Params
{
	TArray<struct FSMTransitionTransaction>            Transactions;                                             // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function SMSystem.SMStateMachineComponent.MULTICAST_Stop
struct USMStateMachineComponent_MULTICAST_Stop_Params
{
	struct FSMTransaction_Base                         Transaction;                                              // (ConstParm, Parm, ReferenceParm)
};

// Function SMSystem.SMStateMachineComponent.MULTICAST_Start
struct USMStateMachineComponent_MULTICAST_Start_Params
{
	struct FSMTransaction_Base                         Transaction;                                              // (ConstParm, Parm, ReferenceParm)
};

// Function SMSystem.SMStateMachineComponent.MULTICAST_Shutdown
struct USMStateMachineComponent_MULTICAST_Shutdown_Params
{
	struct FSMTransaction_Base                         Transaction;                                              // (ConstParm, Parm, ReferenceParm)
};

// Function SMSystem.SMStateMachineComponent.MULTICAST_FullSync
struct USMStateMachineComponent_MULTICAST_FullSync_Params
{
	struct FSMFullSyncTransaction                      FullSyncTransaction;                                      // (ConstParm, Parm, ReferenceParm)
};

// Function SMSystem.SMStateMachineComponent.MULTICAST_ActivateStates
struct USMStateMachineComponent_MULTICAST_ActivateStates_Params
{
	TArray<struct FSMActivateStateTransaction>         StateTransactions;                                        // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function SMSystem.SMStateMachineComponent.K2_InitializeAsync
struct USMStateMachineComponent_K2_InitializeAsync_Params
{
	class UObject*                                     Context;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
};

// Function SMSystem.SMStateMachineComponent.IsStateMachineActive
struct USMStateMachineComponent_IsStateMachineActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMStateMachineComponent.IsInitialized
struct USMStateMachineComponent_IsInitialized_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMStateMachineComponent.Internal_OnStateMachineUpdated
struct USMStateMachineComponent_Internal_OnStateMachineUpdated_Params
{
	class USMInstance*                                 Instance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SMSystem.SMStateMachineComponent.Internal_OnStateMachineTransitionTaken
struct USMStateMachineComponent_Internal_OnStateMachineTransitionTaken_Params
{
	class USMInstance*                                 Instance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSMTransitionInfo                           Transition;                                               // (Parm)
};

// Function SMSystem.SMStateMachineComponent.Internal_OnStateMachineStopped
struct USMStateMachineComponent_Internal_OnStateMachineStopped_Params
{
	class USMInstance*                                 Instance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SMSystem.SMStateMachineComponent.Internal_OnStateMachineStateStarted
struct USMStateMachineComponent_Internal_OnStateMachineStateStarted_Params
{
	class USMInstance*                                 Instance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSMStateInfo                                State;                                                    // (Parm)
};

// Function SMSystem.SMStateMachineComponent.Internal_OnStateMachineStateChanged
struct USMStateMachineComponent_Internal_OnStateMachineStateChanged_Params
{
	class USMInstance*                                 Instance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSMStateInfo                                ToState;                                                  // (Parm)
	struct FSMStateInfo                                FromState;                                                // (Parm)
};

// Function SMSystem.SMStateMachineComponent.Internal_OnStateMachineStarted
struct USMStateMachineComponent_Internal_OnStateMachineStarted_Params
{
	class USMInstance*                                 Instance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SMSystem.SMStateMachineComponent.Internal_OnStateMachineShutdown
struct USMStateMachineComponent_Internal_OnStateMachineShutdown_Params
{
	class USMInstance*                                 Instance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SMSystem.SMStateMachineComponent.Internal_OnReplicatedInstanceInitialized
struct USMStateMachineComponent_Internal_OnReplicatedInstanceInitialized_Params
{
	class USMInstance*                                 Instance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SMSystem.SMStateMachineComponent.Internal_OnInstanceInitializedAsync
struct USMStateMachineComponent_Internal_OnInstanceInitializedAsync_Params
{
	class USMInstance*                                 Instance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SMSystem.SMStateMachineComponent.Initialize
struct USMStateMachineComponent_Initialize_Params
{
	class UObject*                                     Context;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SMSystem.SMStateMachineComponent.GetTopMostParentActor
struct USMStateMachineComponent_GetTopMostParentActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMStateMachineComponent.GetInstance
struct USMStateMachineComponent_GetInstance_Params
{
	class USMInstance*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMStateMachineComponent.GetContextForInitialization
struct USMStateMachineComponent_GetContextForInitialization_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMStateMachineComponent.CopySettingsFromOtherComponent
struct USMStateMachineComponent_CopySettingsFromOtherComponent_Params
{
	class USMStateMachineComponent*                    OtherComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function SMSystem.SMStateMachineComponent.CLIENT_TakeTransitions
struct USMStateMachineComponent_CLIENT_TakeTransitions_Params
{
	TArray<struct FSMTransitionTransaction>            Transactions;                                             // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function SMSystem.SMStateMachineComponent.CLIENT_Stop
struct USMStateMachineComponent_CLIENT_Stop_Params
{
	struct FSMTransaction_Base                         Transaction;                                              // (ConstParm, Parm, ReferenceParm)
};

// Function SMSystem.SMStateMachineComponent.CLIENT_Start
struct USMStateMachineComponent_CLIENT_Start_Params
{
	struct FSMTransaction_Base                         Transaction;                                              // (ConstParm, Parm, ReferenceParm)
};

// Function SMSystem.SMStateMachineComponent.CLIENT_Shutdown
struct USMStateMachineComponent_CLIENT_Shutdown_Params
{
	struct FSMTransaction_Base                         Transaction;                                              // (ConstParm, Parm, ReferenceParm)
};

// Function SMSystem.SMStateMachineComponent.CLIENT_FullSync
struct USMStateMachineComponent_CLIENT_FullSync_Params
{
	struct FSMFullSyncTransaction                      FullSyncTransaction;                                      // (ConstParm, Parm, ReferenceParm)
};

// Function SMSystem.SMStateMachineComponent.CLIENT_ActivateStates
struct USMStateMachineComponent_CLIENT_ActivateStates_Params
{
	TArray<struct FSMActivateStateTransaction>         StateTransactions;                                        // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function SMSystem.SMStateMachineInstance.SetWaitForEndState
struct USMStateMachineInstance_SetWaitForEndState_Params
{
	bool                                               bValue;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SMSystem.SMStateMachineInstance.SetReuseIfNotEndState
struct USMStateMachineInstance_SetReuseIfNotEndState_Params
{
	bool                                               bValue;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SMSystem.SMStateMachineInstance.SetReuseCurrentState
struct USMStateMachineInstance_SetReuseCurrentState_Params
{
	bool                                               bValue;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SMSystem.SMStateMachineInstance.OnStateShutdown
struct USMStateMachineInstance_OnStateShutdown_Params
{
};

// Function SMSystem.SMStateMachineInstance.OnStateMachineCompleted
struct USMStateMachineInstance_OnStateMachineCompleted_Params
{
};

// Function SMSystem.SMStateMachineInstance.OnStateInitialized
struct USMStateMachineInstance_OnStateInitialized_Params
{
};

// Function SMSystem.SMStateMachineInstance.OnEndStateReached
struct USMStateMachineInstance_OnEndStateReached_Params
{
};

// Function SMSystem.SMStateMachineInstance.GetWaitForEndState
struct USMStateMachineInstance_GetWaitForEndState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMStateMachineInstance.GetStateMachineReference
struct USMStateMachineInstance_GetStateMachineReference_Params
{
	class USMInstance*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMStateMachineInstance.GetReuseIfNotEndState
struct USMStateMachineInstance_GetReuseIfNotEndState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMStateMachineInstance.GetReuseCurrentState
struct USMStateMachineInstance_GetReuseCurrentState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMStateMachineInstance.GetEntryStates
struct USMStateMachineInstance_GetEntryStates_Params
{
	TArray<class USMStateInstance_Base*>               EntryStates;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function SMSystem.SMStateMachineInstance.GetContainedStateByName
struct USMStateMachineInstance_GetContainedStateByName_Params
{
	struct FString                                     StateName;                                                // (Parm, ZeroConstructor)
	class USMStateInstance_Base*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMStateMachineInstance.GetAllStateInstances
struct USMStateMachineInstance_GetAllStateInstances_Params
{
	TArray<class USMStateInstance_Base*>               StateInstances;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function SMSystem.SMStateMachineInstance.GetActiveStates
struct USMStateMachineInstance_GetActiveStates_Params
{
	TArray<class USMStateInstance_Base*>               ActiveStates;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function SMSystem.SMTransitionInstance.SetRunParallel
struct USMTransitionInstance_SetRunParallel_Params
{
	bool                                               bValue;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SMSystem.SMTransitionInstance.SetPriorityOrder
struct USMTransitionInstance_SetPriorityOrder_Params
{
	int                                                Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SMSystem.SMTransitionInstance.SetEvalIfNextStateActive
struct USMTransitionInstance_SetEvalIfNextStateActive_Params
{
	bool                                               bValue;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SMSystem.SMTransitionInstance.SetCanEvalWithStartState
struct USMTransitionInstance_SetCanEvalWithStartState_Params
{
	bool                                               bValue;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SMSystem.SMTransitionInstance.SetCanEvaluateFromEvent
struct USMTransitionInstance_SetCanEvaluateFromEvent_Params
{
	bool                                               bValue;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SMSystem.SMTransitionInstance.SetCanEvaluate
struct USMTransitionInstance_SetCanEvaluate_Params
{
	bool                                               bValue;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SMSystem.SMTransitionInstance.OnTransitionShutdown
struct USMTransitionInstance_OnTransitionShutdown_Params
{
};

// Function SMSystem.SMTransitionInstance.OnTransitionInitialized
struct USMTransitionInstance_OnTransitionInitialized_Params
{
};

// Function SMSystem.SMTransitionInstance.OnTransitionEntered
struct USMTransitionInstance_OnTransitionEntered_Params
{
};

// Function SMSystem.SMTransitionInstance.IsTransitionFromLinkState
struct USMTransitionInstance_IsTransitionFromLinkState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMTransitionInstance.IsTransitionFromAnyState
struct USMTransitionInstance_IsTransitionFromAnyState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMTransitionInstance.GetTransitionStackCount
struct USMTransitionInstance_GetTransitionStackCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMTransitionInstance.GetTransitionInStackByClass
struct USMTransitionInstance_GetTransitionInStackByClass_Params
{
	class UClass*                                      TransitionClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeChildren;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class USMTransitionInstance*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMTransitionInstance.GetTransitionInStack
struct USMTransitionInstance_GetTransitionInStack_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class USMTransitionInstance*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMTransitionInstance.GetTransitionInfo
struct USMTransitionInstance_GetTransitionInfo_Params
{
	struct FSMTransitionInfo                           Transition;                                               // (Parm, OutParm)
};

// Function SMSystem.SMTransitionInstance.GetTransitionIndexInStack
struct USMTransitionInstance_GetTransitionIndexInStack_Params
{
	class USMTransitionInstance*                       TransitionInstance;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMTransitionInstance.GetStackOwnerInstance
struct USMTransitionInstance_GetStackOwnerInstance_Params
{
	class USMTransitionInstance*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMTransitionInstance.GetSourceStateForActiveTransition
struct USMTransitionInstance_GetSourceStateForActiveTransition_Params
{
	class USMStateInstance_Base*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMTransitionInstance.GetServerTimestamp
struct USMTransitionInstance_GetServerTimestamp_Params
{
	struct FDateTime                                   ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function SMSystem.SMTransitionInstance.GetRunParallel
struct USMTransitionInstance_GetRunParallel_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMTransitionInstance.GetPriorityOrder
struct USMTransitionInstance_GetPriorityOrder_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMTransitionInstance.GetPreviousStateInstance
struct USMTransitionInstance_GetPreviousStateInstance_Params
{
	class USMStateInstance_Base*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMTransitionInstance.GetNextStateInstance
struct USMTransitionInstance_GetNextStateInstance_Params
{
	class USMStateInstance_Base*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMTransitionInstance.GetEvalIfNextStateActive
struct USMTransitionInstance_GetEvalIfNextStateActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMTransitionInstance.GetDestinationStateForActiveTransition
struct USMTransitionInstance_GetDestinationStateForActiveTransition_Params
{
	class USMStateInstance_Base*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMTransitionInstance.GetCanEvalWithStartState
struct USMTransitionInstance_GetCanEvalWithStartState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMTransitionInstance.GetCanEvaluateFromEvent
struct USMTransitionInstance_GetCanEvaluateFromEvent_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMTransitionInstance.GetCanEvaluate
struct USMTransitionInstance_GetCanEvaluate_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMTransitionInstance.GetAllTransitionStackInstances
struct USMTransitionInstance_GetAllTransitionStackInstances_Params
{
	TArray<class USMTransitionInstance*>               TransitionStackInstances;                                 // (Parm, OutParm, ZeroConstructor)
};

// Function SMSystem.SMTransitionInstance.GetAllTransitionsInStackOfClass
struct USMTransitionInstance_GetAllTransitionsInStackOfClass_Params
{
	class UClass*                                      TransitionClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class USMTransitionInstance*>               TransitionStackInstances;                                 // (Parm, OutParm, ZeroConstructor)
	bool                                               bIncludeChildren;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SMSystem.SMTransitionInstance.EvaluateFromManuallyBoundEvent
struct USMTransitionInstance_EvaluateFromManuallyBoundEvent_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMTransitionInstance.DoesTransitionPass
struct USMTransitionInstance_DoesTransitionPass_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMTransitionInstance.CanEnterTransition
struct USMTransitionInstance_CanEnterTransition_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMBlueprintUtils.K2_CreateStateMachineInstancePure
struct USMBlueprintUtils_K2_CreateStateMachineInstancePure_Params
{
	class UClass*                                      StateMachineClass;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Context;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInitializeNow;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class USMInstance*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMBlueprintUtils.K2_CreateStateMachineInstanceAsync
struct USMBlueprintUtils_K2_CreateStateMachineInstanceAsync_Params
{
	class UClass*                                      StateMachineClass;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Context;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
	class USMInstance*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMBlueprintUtils.K2_CreateStateMachineInstance
struct USMBlueprintUtils_K2_CreateStateMachineInstance_Params
{
	class UClass*                                      StateMachineClass;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Context;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInitializeNow;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class USMInstance*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SMSystem.SMBlueprintUtils.CreateStateMachineInstanceFromTemplate
struct USMBlueprintUtils_CreateStateMachineInstanceFromTemplate_Params
{
	class UClass*                                      StateMachineClass;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Context;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class USMInstance*                                 Template;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInitializeNow;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class USMInstance*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
