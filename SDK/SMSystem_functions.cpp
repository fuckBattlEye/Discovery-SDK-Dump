//   SDK By:if

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../pch.h"

namespace sdk
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function SMSystem.SMInstance.Update
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void USMInstance::Update(float DeltaSeconds)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.Update"));

	USMInstance_Update_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMInstance.TryGetTransitionInfo
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGuid                   Guid                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FSMTransitionInfo       TransitionInfo                 (Parm, OutParm)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USMInstance::TryGetTransitionInfo(const struct FGuid& Guid, struct FSMTransitionInfo* TransitionInfo, bool* bSuccess)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.TryGetTransitionInfo"));

	USMInstance_TryGetTransitionInfo_Params params;
	params.Guid = Guid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TransitionInfo != nullptr)
		*TransitionInfo = params.TransitionInfo;
	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function SMSystem.SMInstance.TryGetStateInfo
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGuid                   Guid                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FSMStateInfo            StateInfo                      (Parm, OutParm)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USMInstance::TryGetStateInfo(const struct FGuid& Guid, struct FSMStateInfo* StateInfo, bool* bSuccess)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.TryGetStateInfo"));

	USMInstance_TryGetStateInfo_Params params;
	params.Guid = Guid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StateInfo != nullptr)
		*StateInfo = params.StateInfo;
	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function SMSystem.SMInstance.TryGetNestedActiveState
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSMStateInfo            FoundState                     (Parm, OutParm)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USMInstance::TryGetNestedActiveState(struct FSMStateInfo* FoundState, bool* bSuccess)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.TryGetNestedActiveState"));

	USMInstance_TryGetNestedActiveState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FoundState != nullptr)
		*FoundState = params.FoundState;
	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function SMSystem.SMInstance.Tick
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void USMInstance::Tick(float DeltaTime)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.Tick"));

	USMInstance_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMInstance.TakeTransitionChain
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class USMTransitionInstance*> InTransitionChain              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USMInstance::TakeTransitionChain(TArray<class USMTransitionInstance*> InTransitionChain)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.TakeTransitionChain"));

	USMInstance_TakeTransitionChain_Params params;
	params.InTransitionChain = InTransitionChain;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMInstance.SwitchActiveStateByQualifiedName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InFullPath                     (Parm, ZeroConstructor)
// bool                           bDeactivateOtherStates         (Parm, ZeroConstructor, IsPlainOldData)

void USMInstance::SwitchActiveStateByQualifiedName(const struct FString& InFullPath, bool bDeactivateOtherStates)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.SwitchActiveStateByQualifiedName"));

	USMInstance_SwitchActiveStateByQualifiedName_Params params;
	params.InFullPath = InFullPath;
	params.bDeactivateOtherStates = bDeactivateOtherStates;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMInstance.SwitchActiveState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USMStateInstance_Base*   NewStateInstance               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDeactivateOtherStates         (Parm, ZeroConstructor, IsPlainOldData)

void USMInstance::SwitchActiveState(class USMStateInstance_Base* NewStateInstance, bool bDeactivateOtherStates)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.SwitchActiveState"));

	USMInstance_SwitchActiveState_Params params;
	params.NewStateInstance = NewStateInstance;
	params.bDeactivateOtherStates = bDeactivateOtherStates;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMInstance.Stop
// (Native, Public, BlueprintCallable)

void USMInstance::Stop()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.Stop"));

	USMInstance_Stop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMInstance.StartWithNewContext
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Context                        (Parm, ZeroConstructor, IsPlainOldData)

void USMInstance::StartWithNewContext(class UObject* Context)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.StartWithNewContext"));

	USMInstance_StartWithNewContext_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMInstance.Start
// (Native, Public, BlueprintCallable)

void USMInstance::Start()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.Start"));

	USMInstance_Start_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMInstance.Shutdown
// (Native, Public, BlueprintCallable)

void USMInstance::Shutdown()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.Shutdown"));

	USMInstance_Shutdown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMInstance.SetTickOnManualUpdate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void USMInstance::SetTickOnManualUpdate(bool Value)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.SetTickOnManualUpdate"));

	USMInstance_SetTickOnManualUpdate_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMInstance.SetTickInterval
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void USMInstance::SetTickInterval(float Value)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.SetTickInterval"));

	USMInstance_SetTickInterval_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMInstance.SetTickBeforeBeginPlay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void USMInstance::SetTickBeforeBeginPlay(bool Value)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.SetTickBeforeBeginPlay"));

	USMInstance_SetTickBeforeBeginPlay_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMInstance.SetStopOnEndState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void USMInstance::SetStopOnEndState(bool Value)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.SetStopOnEndState"));

	USMInstance_SetStopOnEndState_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMInstance.SetStateMachineClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  NewStateMachineClass           (Parm, ZeroConstructor, IsPlainOldData)

void USMInstance::SetStateMachineClass(class UClass* NewStateMachineClass)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.SetStateMachineClass"));

	USMInstance_SetStateMachineClass_Params params;
	params.NewStateMachineClass = NewStateMachineClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMInstance.SetStateHistoryMaxCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            NewSize                        (Parm, ZeroConstructor, IsPlainOldData)

void USMInstance::SetStateHistoryMaxCount(int NewSize)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.SetStateHistoryMaxCount"));

	USMInstance_SetStateHistoryMaxCount_Params params;
	params.NewSize = NewSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMInstance.SetGuidRedirectMap
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TMap<struct FGuid, struct FGuid> InGuidMap                      (ConstParm, Parm, OutParm, ReferenceParm)

void USMInstance::SetGuidRedirectMap(TMap<struct FGuid, struct FGuid> InGuidMap)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.SetGuidRedirectMap"));

	USMInstance_SetGuidRedirectMap_Params params;
	params.InGuidMap = InGuidMap;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMInstance.SetContext
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Context                        (Parm, ZeroConstructor, IsPlainOldData)

void USMInstance::SetContext(class UObject* Context)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.SetContext"));

	USMInstance_SetContext_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMInstance.SetCanTickWhenPaused
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void USMInstance::SetCanTickWhenPaused(bool Value)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.SetCanTickWhenPaused"));

	USMInstance_SetCanTickWhenPaused_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMInstance.SetCanEverTick
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void USMInstance::SetCanEverTick(bool Value)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.SetCanEverTick"));

	USMInstance_SetCanEverTick_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMInstance.SetAutoManageTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void USMInstance::SetAutoManageTime(bool Value)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.SetAutoManageTime"));

	USMInstance_SetAutoManageTime_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMInstance.RunUpdateAsReference
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void USMInstance::RunUpdateAsReference(float DeltaSeconds)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.RunUpdateAsReference"));

	USMInstance_RunUpdateAsReference_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMInstance.Restart
// (Native, Public, BlueprintCallable)

void USMInstance::Restart()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.Restart"));

	USMInstance_Restart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMInstance.ReplicatedStop
// (Final, Native, Public, BlueprintCallable)

void USMInstance::ReplicatedStop()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.ReplicatedStop"));

	USMInstance_ReplicatedStop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMInstance.ReplicatedStart
// (Final, Native, Public, BlueprintCallable)

void USMInstance::ReplicatedStart()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.ReplicatedStart"));

	USMInstance_ReplicatedStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMInstance.ReplicatedRestart
// (Final, Native, Public, BlueprintCallable)

void USMInstance::ReplicatedRestart()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.ReplicatedRestart"));

	USMInstance_ReplicatedRestart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMInstance.REP_OnReplicatedReferencesLoaded
// (Final, Native, Private)

void USMInstance::REP_OnReplicatedReferencesLoaded()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.REP_OnReplicatedReferencesLoaded"));

	USMInstance_REP_OnReplicatedReferencesLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMInstance.PreloadAllNodeInstances
// (Final, Native, Public, BlueprintCallable)

void USMInstance::PreloadAllNodeInstances()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.PreloadAllNodeInstances"));

	USMInstance_PreloadAllNodeInstances_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMInstance.OnStateMachineUpdate
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void USMInstance::OnStateMachineUpdate(float DeltaSeconds)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.OnStateMachineUpdate"));

	USMInstance_OnStateMachineUpdate_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMInstance.OnStateMachineTransitionTaken
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FSMTransitionInfo       Transition                     (ConstParm, Parm, OutParm, ReferenceParm)

void USMInstance::OnStateMachineTransitionTaken(const struct FSMTransitionInfo& Transition)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.OnStateMachineTransitionTaken"));

	USMInstance_OnStateMachineTransitionTaken_Params params;
	params.Transition = Transition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMInstance.OnStateMachineStop
// (Native, Event, Public, BlueprintEvent)

void USMInstance::OnStateMachineStop()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.OnStateMachineStop"));

	USMInstance_OnStateMachineStop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMInstance.OnStateMachineStateStarted
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FSMStateInfo            State                          (ConstParm, Parm, OutParm, ReferenceParm)

void USMInstance::OnStateMachineStateStarted(const struct FSMStateInfo& State)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.OnStateMachineStateStarted"));

	USMInstance_OnStateMachineStateStarted_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMInstance.OnStateMachineStateChanged
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FSMStateInfo            ToState                        (ConstParm, Parm, OutParm, ReferenceParm)
// struct FSMStateInfo            FromState                      (ConstParm, Parm, OutParm, ReferenceParm)

void USMInstance::OnStateMachineStateChanged(const struct FSMStateInfo& ToState, const struct FSMStateInfo& FromState)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.OnStateMachineStateChanged"));

	USMInstance_OnStateMachineStateChanged_Params params;
	params.ToState = ToState;
	params.FromState = FromState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMInstance.OnStateMachineStart
// (Native, Event, Public, BlueprintEvent)

void USMInstance::OnStateMachineStart()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.OnStateMachineStart"));

	USMInstance_OnStateMachineStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMInstance.OnStateMachineShutdown
// (Native, Event, Public, BlueprintEvent)

void USMInstance::OnStateMachineShutdown()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.OnStateMachineShutdown"));

	USMInstance_OnStateMachineShutdown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMInstance.OnStateMachineInitialStateLoaded
// (Native, Event, Protected, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// struct FGuid                   StateGuid                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void USMInstance::OnStateMachineInitialStateLoaded(const struct FGuid& StateGuid)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.OnStateMachineInitialStateLoaded"));

	USMInstance_OnStateMachineInitialStateLoaded_Params params;
	params.StateGuid = StateGuid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMInstance.OnStateMachineInitialized
// (Native, Event, Public, BlueprintEvent)

void USMInstance::OnStateMachineInitialized()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.OnStateMachineInitialized"));

	USMInstance_OnStateMachineInitialized_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMInstance.OnPreStateMachineInitialized
// (Native, Event, Public, BlueprintEvent)

void USMInstance::OnPreStateMachineInitialized()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.OnPreStateMachineInitialized"));

	USMInstance_OnPreStateMachineInitialized_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMInstance.OnContextPawnRestarted
// (Final, Native, Private)
// Parameters:
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData)

void USMInstance::OnContextPawnRestarted(class APawn* Pawn)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.OnContextPawnRestarted"));

	USMInstance_OnContextPawnRestarted_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMInstance.LoadFromState
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGuid                   FromGuid                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           bAllParents                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bNotify                        (Parm, ZeroConstructor, IsPlainOldData)

void USMInstance::LoadFromState(const struct FGuid& FromGuid, bool bAllParents, bool bNotify)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.LoadFromState"));

	USMInstance_LoadFromState_Params params;
	params.FromGuid = FromGuid;
	params.bAllParents = bAllParents;
	params.bNotify = bNotify;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMInstance.LoadFromMultipleStates
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FGuid>           FromGuids                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bNotify                        (Parm, ZeroConstructor, IsPlainOldData)

void USMInstance::LoadFromMultipleStates(TArray<struct FGuid> FromGuids, bool bNotify)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.LoadFromMultipleStates"));

	USMInstance_LoadFromMultipleStates_Params params;
	params.FromGuids = FromGuids;
	params.bNotify = bNotify;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMInstance.K2_TryGetNetworkInterface
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TScriptInterface<class USMStateMachineNetworkedInterface> Interface                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bIsValid                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USMInstance::K2_TryGetNetworkInterface(TScriptInterface<class USMStateMachineNetworkedInterface>* Interface, bool* bIsValid)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.K2_TryGetNetworkInterface"));

	USMInstance_K2_TryGetNetworkInterface_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Interface != nullptr)
		*Interface = params.Interface;
	if (bIsValid != nullptr)
		*bIsValid = params.bIsValid;
}


// Function SMSystem.SMInstance.K2_InitializeAsync
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Context                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FLatentActionInfo       LatentInfo                     (Parm)

void USMInstance::K2_InitializeAsync(class UObject* Context, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.K2_InitializeAsync"));

	USMInstance_K2_InitializeAsync_Params params;
	params.Context = Context;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMInstance.IsTickableWhenPaused
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USMInstance::IsTickableWhenPaused()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.IsTickableWhenPaused"));

	USMInstance_IsTickableWhenPaused_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMInstance.IsTickable
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USMInstance::IsTickable()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.IsTickable"));

	USMInstance_IsTickable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMInstance.IsInitializingAsync
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USMInstance::IsInitializingAsync()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.IsInitializingAsync"));

	USMInstance_IsInitializingAsync_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMInstance.IsInitialized
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USMInstance::IsInitialized()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.IsInitialized"));

	USMInstance_IsInitialized_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMInstance.IsInEndState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USMInstance::IsInEndState()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.IsInEndState"));

	USMInstance_IsInEndState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMInstance.IsActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USMInstance::IsActive()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.IsActive"));

	USMInstance_IsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMInstance.Internal_Update
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void USMInstance::Internal_Update(float DeltaSeconds)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.Internal_Update"));

	USMInstance_Internal_Update_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMInstance.Internal_EventUpdate
// (Final, Native, Protected, BlueprintCallable)

void USMInstance::Internal_EventUpdate()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.Internal_EventUpdate"));

	USMInstance_Internal_EventUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMInstance.Internal_EventCleanup
// (Final, Native, Protected, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGuid                   PathGuid                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void USMInstance::Internal_EventCleanup(const struct FGuid& PathGuid)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.Internal_EventCleanup"));

	USMInstance_Internal_EventCleanup_Params params;
	params.PathGuid = PathGuid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMInstance.Internal_EvaluateAndTakeTransitionChainByGuid
// (Final, Native, Protected, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGuid                   PathGuid                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USMInstance::Internal_EvaluateAndTakeTransitionChainByGuid(const struct FGuid& PathGuid)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.Internal_EvaluateAndTakeTransitionChainByGuid"));

	USMInstance_Internal_EvaluateAndTakeTransitionChainByGuid_Params params;
	params.PathGuid = PathGuid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMInstance.Initialize
// (Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Context                        (Parm, ZeroConstructor, IsPlainOldData)

void USMInstance::Initialize(class UObject* Context)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.Initialize"));

	USMInstance_Initialize_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMInstance.HasStarted
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USMInstance::HasStarted()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.HasStarted"));

	USMInstance_HasStarted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMInstance.GetTransitionInstanceByGuid
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGuid                   Guid                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class USMTransitionInstance*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USMTransitionInstance* USMInstance::GetTransitionInstanceByGuid(const struct FGuid& Guid)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.GetTransitionInstanceByGuid"));

	USMInstance_GetTransitionInstanceByGuid_Params params;
	params.Guid = Guid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMInstance.GetTickInterval
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USMInstance::GetTickInterval()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.GetTickInterval"));

	USMInstance_GetTickInterval_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMInstance.GetStopOnEndState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USMInstance::GetStopOnEndState()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.GetStopOnEndState"));

	USMInstance_GetStopOnEndState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMInstance.GetStateMachineClass
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* USMInstance::GetStateMachineClass()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.GetStateMachineClass"));

	USMInstance_GetStateMachineClass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMInstance.GetStateInstanceByQualifiedName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 InFullPath                     (Parm, ZeroConstructor)
// class USMStateInstance_Base*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USMStateInstance_Base* USMInstance::GetStateInstanceByQualifiedName(const struct FString& InFullPath)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.GetStateInstanceByQualifiedName"));

	USMInstance_GetStateInstanceByQualifiedName_Params params;
	params.InFullPath = InFullPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMInstance.GetStateInstanceByGuid
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGuid                   Guid                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class USMStateInstance_Base*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USMStateInstance_Base* USMInstance::GetStateInstanceByGuid(const struct FGuid& Guid)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.GetStateInstanceByGuid"));

	USMInstance_GetStateInstanceByGuid_Params params;
	params.Guid = Guid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMInstance.GetStateHistoryMaxCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USMInstance::GetStateHistoryMaxCount()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.GetStateHistoryMaxCount"));

	USMInstance_GetStateHistoryMaxCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMInstance.GetStateHistory
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FSMStateHistory> ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<struct FSMStateHistory> USMInstance::GetStateHistory()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.GetStateHistory"));

	USMInstance_GetStateHistory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMInstance.GetSingleActiveStateInstance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bCheckNested                   (Parm, ZeroConstructor, IsPlainOldData)
// class USMStateInstance_Base*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USMStateInstance_Base* USMInstance::GetSingleActiveStateInstance(bool bCheckNested)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.GetSingleActiveStateInstance"));

	USMInstance_GetSingleActiveStateInstance_Params params;
	params.bCheckNested = bCheckNested;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMInstance.GetSingleActiveStateGuid
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bCheckNested                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FGuid                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FGuid USMInstance::GetSingleActiveStateGuid(bool bCheckNested)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.GetSingleActiveStateGuid"));

	USMInstance_GetSingleActiveStateGuid_Params params;
	params.bCheckNested = bCheckNested;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMInstance.GetRootStateMachineNodeInstance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USMStateMachineInstance* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USMStateMachineInstance* USMInstance::GetRootStateMachineNodeInstance()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.GetRootStateMachineNodeInstance"));

	USMInstance_GetRootStateMachineNodeInstance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMInstance.GetRootStateMachineInstance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USMStateMachineInstance* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USMStateMachineInstance* USMInstance::GetRootStateMachineInstance()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.GetRootStateMachineInstance"));

	USMInstance_GetRootStateMachineInstance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMInstance.GetReferenceOwner
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USMInstance*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USMInstance* USMInstance::GetReferenceOwner()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.GetReferenceOwner"));

	USMInstance_GetReferenceOwner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMInstance.GetReferencedInstanceByGuid
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGuid                   Guid                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class USMInstance*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USMInstance* USMInstance::GetReferencedInstanceByGuid(const struct FGuid& Guid)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.GetReferencedInstanceByGuid"));

	USMInstance_GetReferencedInstanceByGuid_Params params;
	params.Guid = Guid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMInstance.GetPrimaryReferenceOwner
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class USMInstance*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USMInstance* USMInstance::GetPrimaryReferenceOwner()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.GetPrimaryReferenceOwner"));

	USMInstance_GetPrimaryReferenceOwner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMInstance.GetNodeInstanceByGuid
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGuid                   Guid                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class USMNodeInstance*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USMNodeInstance* USMInstance::GetNodeInstanceByGuid(const struct FGuid& Guid)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.GetNodeInstanceByGuid"));

	USMInstance_GetNodeInstanceByGuid_Params params;
	params.Guid = Guid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMInstance.GetNetworkInterface
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class USMStateMachineNetworkedInterface> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TScriptInterface<class USMStateMachineNetworkedInterface> USMInstance::GetNetworkInterface()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.GetNetworkInterface"));

	USMInstance_GetNetworkInterface_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMInstance.GetNestedActiveStateName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString USMInstance::GetNestedActiveStateName()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.GetNestedActiveStateName"));

	USMInstance_GetNestedActiveStateName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMInstance.GetNestedActiveStateGuid
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGuid                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FGuid USMInstance::GetNestedActiveStateGuid()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.GetNestedActiveStateGuid"));

	USMInstance_GetNestedActiveStateGuid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMInstance.GetMasterReferenceOwner
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class USMInstance*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USMInstance* USMInstance::GetMasterReferenceOwner()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.GetMasterReferenceOwner"));

	USMInstance_GetMasterReferenceOwner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMInstance.GetInputComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UInputComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UInputComponent* USMInstance::GetInputComponent()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.GetInputComponent"));

	USMInstance_GetInputComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMInstance.GetGuidRedirectMap
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TMap<struct FGuid, struct FGuid> ReturnValue                    (Parm, OutParm, ReturnParm)

TMap<struct FGuid, struct FGuid> USMInstance::GetGuidRedirectMap()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.GetGuidRedirectMap"));

	USMInstance_GetGuidRedirectMap_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMInstance.GetContext
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* USMInstance::GetContext()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.GetContext"));

	USMInstance_GetContext_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMInstance.GetComponentOwner
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USMStateMachineComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USMStateMachineComponent* USMInstance::GetComponentOwner()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.GetComponentOwner"));

	USMInstance_GetComponentOwner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMInstance.GetAllTransitionInstances
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class USMTransitionInstance*> TransitionInstances            (Parm, OutParm, ZeroConstructor)

void USMInstance::GetAllTransitionInstances(TArray<class USMTransitionInstance*>* TransitionInstances)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.GetAllTransitionInstances"));

	USMInstance_GetAllTransitionInstances_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TransitionInstances != nullptr)
		*TransitionInstances = params.TransitionInstances;
}


// Function SMSystem.SMInstance.GetAllStateInstances
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class USMStateInstance_Base*> StateInstances                 (Parm, OutParm, ZeroConstructor)

void USMInstance::GetAllStateInstances(TArray<class USMStateInstance_Base*>* StateInstances)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.GetAllStateInstances"));

	USMInstance_GetAllStateInstances_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StateInstances != nullptr)
		*StateInstances = params.StateInstances;
}


// Function SMSystem.SMInstance.GetAllReferencedInstances
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bIncludeChildren               (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class USMInstance*>     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class USMInstance*> USMInstance::GetAllReferencedInstances(bool bIncludeChildren)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.GetAllReferencedInstances"));

	USMInstance_GetAllReferencedInstances_Params params;
	params.bIncludeChildren = bIncludeChildren;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMInstance.GetAllCurrentStateGuids
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FGuid>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FGuid> USMInstance::GetAllCurrentStateGuids()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.GetAllCurrentStateGuids"));

	USMInstance_GetAllCurrentStateGuids_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMInstance.GetAllActiveStateInstances
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class USMStateInstance_Base*> ActiveStateInstances           (Parm, OutParm, ZeroConstructor)

void USMInstance::GetAllActiveStateInstances(TArray<class USMStateInstance_Base*>* ActiveStateInstances)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.GetAllActiveStateInstances"));

	USMInstance_GetAllActiveStateInstances_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActiveStateInstances != nullptr)
		*ActiveStateInstances = params.ActiveStateInstances;
}


// Function SMSystem.SMInstance.GetAllActiveStateGuids
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FGuid>           ActiveGuids                    (Parm, OutParm, ZeroConstructor)

void USMInstance::GetAllActiveStateGuids(TArray<struct FGuid>* ActiveGuids)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.GetAllActiveStateGuids"));

	USMInstance_GetAllActiveStateGuids_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActiveGuids != nullptr)
		*ActiveGuids = params.ActiveGuids;
}


// Function SMSystem.SMInstance.GetActiveStateName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString USMInstance::GetActiveStateName()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.GetActiveStateName"));

	USMInstance_GetActiveStateName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMInstance.GetActiveStateInstance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bCheckNested                   (Parm, ZeroConstructor, IsPlainOldData)
// class USMStateInstance_Base*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USMStateInstance_Base* USMInstance::GetActiveStateInstance(bool bCheckNested)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.GetActiveStateInstance"));

	USMInstance_GetActiveStateInstance_Params params;
	params.bCheckNested = bCheckNested;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMInstance.GetActiveStateGuid
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGuid                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FGuid USMInstance::GetActiveStateGuid()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.GetActiveStateGuid"));

	USMInstance_GetActiveStateGuid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMInstance.EvaluateTransitions
// (Final, Native, Public, BlueprintCallable)

void USMInstance::EvaluateTransitions()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.EvaluateTransitions"));

	USMInstance_EvaluateTransitions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMInstance.EvaluateAndTakeTransitionChain
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USMTransitionInstance*   InFirstTransitionInstance      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USMInstance::EvaluateAndTakeTransitionChain(class USMTransitionInstance* InFirstTransitionInstance)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.EvaluateAndTakeTransitionChain"));

	USMInstance_EvaluateAndTakeTransitionChain_Params params;
	params.InFirstTransitionInstance = InFirstTransitionInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMInstance.EvaluateAndFindTransitionChain
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class USMTransitionInstance*   InFirstTransitionInstance      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class USMTransitionInstance*> OutTransitionChain             (Parm, OutParm, ZeroConstructor)
// class USMStateInstance_Base*   OutDestinationState            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bRequirePreviousStateActive    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USMInstance::EvaluateAndFindTransitionChain(class USMTransitionInstance* InFirstTransitionInstance, bool bRequirePreviousStateActive, TArray<class USMTransitionInstance*>* OutTransitionChain, class USMStateInstance_Base** OutDestinationState)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.EvaluateAndFindTransitionChain"));

	USMInstance_EvaluateAndFindTransitionChain_Params params;
	params.InFirstTransitionInstance = InFirstTransitionInstance;
	params.bRequirePreviousStateActive = bRequirePreviousStateActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTransitionChain != nullptr)
		*OutTransitionChain = params.OutTransitionChain;
	if (OutDestinationState != nullptr)
		*OutDestinationState = params.OutDestinationState;

	return params.ReturnValue;
}


// Function SMSystem.SMInstance.ClearStateHistory
// (Final, Native, Public, BlueprintCallable)

void USMInstance::ClearStateHistory()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.ClearStateHistory"));

	USMInstance_ClearStateHistory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMInstance.ClearLoadedStates
// (Final, Native, Public, BlueprintCallable)

void USMInstance::ClearLoadedStates()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.ClearLoadedStates"));

	USMInstance_ClearLoadedStates_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMInstance.CanTickOnManualUpdate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USMInstance::CanTickOnManualUpdate()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.CanTickOnManualUpdate"));

	USMInstance_CanTickOnManualUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMInstance.CanEverTick
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USMInstance::CanEverTick()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.CanEverTick"));

	USMInstance_CanEverTick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMInstance.CanAutoManageTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USMInstance::CanAutoManageTime()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.CanAutoManageTime"));

	USMInstance_CanAutoManageTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMInstance.AreInitialStatesSetFromLoad
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USMInstance::AreInitialStatesSetFromLoad()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMInstance.AreInitialStatesSetFromLoad"));

	USMInstance_AreInitialStatesSetFromLoad_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMEditorGraphNodeInterface.GetEditorGraphPropertyAsArray
// (Native, Public, BlueprintCallable, Const)
// Parameters:
// struct FName                   PropertyName                   (Parm, ZeroConstructor, IsPlainOldData)
// class USMNodeInstance*         NodeInstance                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ArrayIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<TScriptInterface<class USMEditorGraphPropertyNodeInterface>> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<TScriptInterface<class USMEditorGraphPropertyNodeInterface>> USMEditorGraphNodeInterface::GetEditorGraphPropertyAsArray(const struct FName& PropertyName, class USMNodeInstance* NodeInstance, int ArrayIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMEditorGraphNodeInterface.GetEditorGraphPropertyAsArray"));

	USMEditorGraphNodeInterface_GetEditorGraphPropertyAsArray_Params params;
	params.PropertyName = PropertyName;
	params.NodeInstance = NodeInstance;
	params.ArrayIndex = ArrayIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMEditorGraphNodeInterface.GetEditorGraphProperty
// (Native, Public, BlueprintCallable, Const)
// Parameters:
// struct FName                   PropertyName                   (Parm, ZeroConstructor, IsPlainOldData)
// class USMNodeInstance*         NodeInstance                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ArrayIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class USMEditorGraphPropertyNodeInterface> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TScriptInterface<class USMEditorGraphPropertyNodeInterface> USMEditorGraphNodeInterface::GetEditorGraphProperty(const struct FName& PropertyName, class USMNodeInstance* NodeInstance, int ArrayIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMEditorGraphNodeInterface.GetEditorGraphProperty"));

	USMEditorGraphNodeInterface_GetEditorGraphProperty_Params params;
	params.PropertyName = PropertyName;
	params.NodeInstance = NodeInstance;
	params.ArrayIndex = ArrayIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMEditorGraphNodeInterface.GetAllEditorGraphProperties
// (Native, Public, BlueprintCallable, Const)
// Parameters:
// class USMNodeInstance*         NodeInstance                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<TScriptInterface<class USMEditorGraphPropertyNodeInterface>> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<TScriptInterface<class USMEditorGraphPropertyNodeInterface>> USMEditorGraphNodeInterface::GetAllEditorGraphProperties(class USMNodeInstance* NodeInstance)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMEditorGraphNodeInterface.GetAllEditorGraphProperties"));

	USMEditorGraphNodeInterface_GetAllEditorGraphProperties_Params params;
	params.NodeInstance = NodeInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMEditorGraphPropertyNodeInterface.SetNotificationAndHighlight
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)
// enum class ESMLogType          Severity                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Message                        (Parm, ZeroConstructor)
// bool                           bClearOnCompile                (Parm, ZeroConstructor, IsPlainOldData)

void USMEditorGraphPropertyNodeInterface::SetNotificationAndHighlight(bool bEnable, enum class ESMLogType Severity, const struct FString& Message, bool bClearOnCompile)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMEditorGraphPropertyNodeInterface.SetNotificationAndHighlight"));

	USMEditorGraphPropertyNodeInterface_SetNotificationAndHighlight_Params params;
	params.bEnable = bEnable;
	params.Severity = Severity;
	params.Message = Message;
	params.bClearOnCompile = bClearOnCompile;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMEditorGraphPropertyNodeInterface.SetNotification
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)
// enum class ESMLogType          Severity                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Message                        (Parm, ZeroConstructor)
// bool                           bClearOnCompile                (Parm, ZeroConstructor, IsPlainOldData)

void USMEditorGraphPropertyNodeInterface::SetNotification(bool bEnable, enum class ESMLogType Severity, const struct FString& Message, bool bClearOnCompile)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMEditorGraphPropertyNodeInterface.SetNotification"));

	USMEditorGraphPropertyNodeInterface_SetNotification_Params params;
	params.bEnable = bEnable;
	params.Severity = Severity;
	params.Message = Message;
	params.bClearOnCompile = bClearOnCompile;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMEditorGraphPropertyNodeInterface.SetHighlight
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bClearOnCompile                (Parm, ZeroConstructor, IsPlainOldData)

void USMEditorGraphPropertyNodeInterface::SetHighlight(bool bEnable, const struct FLinearColor& Color, bool bClearOnCompile)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMEditorGraphPropertyNodeInterface.SetHighlight"));

	USMEditorGraphPropertyNodeInterface_SetHighlight_Params params;
	params.bEnable = bEnable;
	params.Color = Color;
	params.bClearOnCompile = bClearOnCompile;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMEditorGraphPropertyNodeInterface.ResetProperty
// (Native, Public, BlueprintCallable)

void USMEditorGraphPropertyNodeInterface::ResetProperty()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMEditorGraphPropertyNodeInterface.ResetProperty"));

	USMEditorGraphPropertyNodeInterface_ResetProperty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMStateMachineNetworkedInterface.IsSimulatedProxy
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USMStateMachineNetworkedInterface::IsSimulatedProxy()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateMachineNetworkedInterface.IsSimulatedProxy"));

	USMStateMachineNetworkedInterface_IsSimulatedProxy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMStateMachineNetworkedInterface.IsConfiguredForNetworking
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USMStateMachineNetworkedInterface::IsConfiguredForNetworking()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateMachineNetworkedInterface.IsConfiguredForNetworking"));

	USMStateMachineNetworkedInterface_IsConfiguredForNetworking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMStateMachineNetworkedInterface.HasAuthority
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USMStateMachineNetworkedInterface::HasAuthority()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateMachineNetworkedInterface.HasAuthority"));

	USMStateMachineNetworkedInterface_HasAuthority_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMNodeInstance.WithExecutionEnvironment
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// enum class ESMExecutionEnvironment ExecutionEnvironment           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USMNodeInstance::WithExecutionEnvironment(enum class ESMExecutionEnvironment* ExecutionEnvironment)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMNodeInstance.WithExecutionEnvironment"));

	USMNodeInstance_WithExecutionEnvironment_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecutionEnvironment != nullptr)
		*ExecutionEnvironment = params.ExecutionEnvironment;
}


// Function SMSystem.SMNodeInstance.SetVariableReadOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   VariableName                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSetIsReadOnly                 (Parm, ZeroConstructor, IsPlainOldData)

void USMNodeInstance::SetVariableReadOnly(const struct FName& VariableName, bool bSetIsReadOnly)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMNodeInstance.SetVariableReadOnly"));

	USMNodeInstance_SetVariableReadOnly_Params params;
	params.VariableName = VariableName;
	params.bSetIsReadOnly = bSetIsReadOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMNodeInstance.SetVariableHidden
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   VariableName                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSetHidden                     (Parm, ZeroConstructor, IsPlainOldData)

void USMNodeInstance::SetVariableHidden(const struct FName& VariableName, bool bSetHidden)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMNodeInstance.SetVariableHidden"));

	USMNodeInstance_SetVariableHidden_Params params;
	params.VariableName = VariableName;
	params.bSetHidden = bSetHidden;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMNodeInstance.SetUseCustomIcon
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bValue                         (Parm, ZeroConstructor, IsPlainOldData)

void USMNodeInstance::SetUseCustomIcon(bool bValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMNodeInstance.SetUseCustomIcon"));

	USMNodeInstance_SetUseCustomIcon_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMNodeInstance.SetUseCustomColor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bValue                         (Parm, ZeroConstructor, IsPlainOldData)

void USMNodeInstance::SetUseCustomColor(bool bValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMNodeInstance.SetUseCustomColor"));

	USMNodeInstance_SetUseCustomColor_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMNodeInstance.SetNodeDescriptionText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText                   NewDescription                 (Parm)

void USMNodeInstance::SetNodeDescriptionText(const struct FText& NewDescription)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMNodeInstance.SetNodeDescriptionText"));

	USMNodeInstance_SetNodeDescriptionText_Params params;
	params.NewDescription = NewDescription;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMNodeInstance.SetNodeColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            NewColor                       (Parm, ZeroConstructor, IsPlainOldData)

void USMNodeInstance::SetNodeColor(const struct FLinearColor& NewColor)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMNodeInstance.SetNodeColor"));

	USMNodeInstance_SetNodeColor_Params params;
	params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMNodeInstance.SetDisplayName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   NewDisplayName                 (Parm, ZeroConstructor, IsPlainOldData)

void USMNodeInstance::SetDisplayName(const struct FName& NewDisplayName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMNodeInstance.SetDisplayName"));

	USMNodeInstance_SetDisplayName_Params params;
	params.NewDisplayName = NewDisplayName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMNodeInstance.ResetVariables
// (Final, Native, Public, BlueprintCallable)

void USMNodeInstance::ResetVariables()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMNodeInstance.ResetVariables"));

	USMNodeInstance_ResetVariables_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMNodeInstance.OnRootStateMachineStop
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void USMNodeInstance::OnRootStateMachineStop()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMNodeInstance.OnRootStateMachineStop"));

	USMNodeInstance_OnRootStateMachineStop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMNodeInstance.OnRootStateMachineStart
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void USMNodeInstance::OnRootStateMachineStart()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMNodeInstance.OnRootStateMachineStart"));

	USMNodeInstance_OnRootStateMachineStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMNodeInstance.OnPreCompileValidate
// (Native, Event, Protected, BlueprintEvent, Const)
// Parameters:
// class USMCompilerLog*          CompilerLog                    (Parm, ZeroConstructor, IsPlainOldData)

void USMNodeInstance::OnPreCompileValidate(class USMCompilerLog* CompilerLog)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMNodeInstance.OnPreCompileValidate"));

	USMNodeInstance_OnPreCompileValidate_Params params;
	params.CompilerLog = CompilerLog;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMNodeInstance.OnContextPawnControllerChanged
// (Final, Native, Protected)
// Parameters:
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             NewController                  (Parm, ZeroConstructor, IsPlainOldData)

void USMNodeInstance::OnContextPawnControllerChanged(class APawn* Pawn, class AController* NewController)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMNodeInstance.OnContextPawnControllerChanged"));

	USMNodeInstance_OnContextPawnControllerChanged_Params params;
	params.Pawn = Pawn;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMNodeInstance.K2_TryGetOwningEditorGraphNode
// (Final, Native, Public, HasOutParms, BlueprintCallable, Const)
// Parameters:
// TScriptInterface<class USMEditorGraphNodeInterface> EditorNode                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// enum class ESMValidEditorNode  IsValidNode                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USMNodeInstance::K2_TryGetOwningEditorGraphNode(TScriptInterface<class USMEditorGraphNodeInterface>* EditorNode, enum class ESMValidEditorNode* IsValidNode)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMNodeInstance.K2_TryGetOwningEditorGraphNode"));

	USMNodeInstance_K2_TryGetOwningEditorGraphNode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EditorNode != nullptr)
		*EditorNode = params.EditorNode;
	if (IsValidNode != nullptr)
		*IsValidNode = params.IsValidNode;
}


// Function SMSystem.SMNodeInstance.IsInitializedAndReadyForInputEvents
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USMNodeInstance::IsInitializedAndReadyForInputEvents()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMNodeInstance.IsInitializedAndReadyForInputEvents"));

	USMNodeInstance_IsInitializedAndReadyForInputEvents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMNodeInstance.IsInitialized
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USMNodeInstance::IsInitialized()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMNodeInstance.IsInitialized"));

	USMNodeInstance_IsInitialized_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMNodeInstance.IsInEndState
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USMNodeInstance::IsInEndState()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMNodeInstance.IsInEndState"));

	USMNodeInstance_IsInEndState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMNodeInstance.IsEditorExecution
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USMNodeInstance::IsEditorExecution()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMNodeInstance.IsEditorExecution"));

	USMNodeInstance_IsEditorExecution_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMNodeInstance.IsActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USMNodeInstance::IsActive()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMNodeInstance.IsActive"));

	USMNodeInstance_IsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMNodeInstance.HasUpdated
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USMNodeInstance::HasUpdated()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMNodeInstance.HasUpdated"));

	USMNodeInstance_HasUpdated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMNodeInstance.GetTimeInState
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USMNodeInstance::GetTimeInState()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMNodeInstance.GetTimeInState"));

	USMNodeInstance_GetTimeInState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMNodeInstance.GetStateMachineInstance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bTopMostInstance               (Parm, ZeroConstructor, IsPlainOldData)
// class USMInstance*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USMInstance* USMNodeInstance::GetStateMachineInstance(bool bTopMostInstance)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMNodeInstance.GetStateMachineInstance"));

	USMNodeInstance_GetStateMachineInstance_Params params;
	params.bTopMostInstance = bTopMostInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMNodeInstance.GetOwningStateMachineNodeInstance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USMStateMachineInstance* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USMStateMachineInstance* USMNodeInstance::GetOwningStateMachineNodeInstance()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMNodeInstance.GetOwningStateMachineNodeInstance"));

	USMNodeInstance_GetOwningStateMachineNodeInstance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMNodeInstance.GetOwningEditorGraphNode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class USMEditorGraphNodeInterface> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TScriptInterface<class USMEditorGraphNodeInterface> USMNodeInstance::GetOwningEditorGraphNode()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMNodeInstance.GetOwningEditorGraphNode"));

	USMNodeInstance_GetOwningEditorGraphNode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMNodeInstance.GetNodePosition
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D               ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)

struct FVector2D USMNodeInstance::GetNodePosition()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMNodeInstance.GetNodePosition"));

	USMNodeInstance_GetNodePosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMNodeInstance.GetNodeName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString USMNodeInstance::GetNodeName()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMNodeInstance.GetNodeName"));

	USMNodeInstance_GetNodeName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMNodeInstance.GetNodeIconTintColor
// (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor USMNodeInstance::GetNodeIconTintColor()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMNodeInstance.GetNodeIconTintColor"));

	USMNodeInstance_GetNodeIconTintColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMNodeInstance.GetNodeIconSize
// (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D USMNodeInstance::GetNodeIconSize()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMNodeInstance.GetNodeIconSize"));

	USMNodeInstance_GetNodeIconSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMNodeInstance.GetNodeIcon
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* USMNodeInstance::GetNodeIcon()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMNodeInstance.GetNodeIcon"));

	USMNodeInstance_GetNodeIcon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMNodeInstance.GetNodeDescriptionText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText USMNodeInstance::GetNodeDescriptionText()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMNodeInstance.GetNodeDescriptionText"));

	USMNodeInstance_GetNodeDescriptionText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMNodeInstance.GetNetworkInterface
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class USMStateMachineNetworkedInterface> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TScriptInterface<class USMStateMachineNetworkedInterface> USMNodeInstance::GetNetworkInterface()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMNodeInstance.GetNetworkInterface"));

	USMNodeInstance_GetNetworkInterface_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMNodeInstance.GetInputComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UInputComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UInputComponent* USMNodeInstance::GetInputComponent()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMNodeInstance.GetInputComponent"));

	USMNodeInstance_GetInputComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMNodeInstance.GetGuid
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGuid                   ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)

struct FGuid USMNodeInstance::GetGuid()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMNodeInstance.GetGuid"));

	USMNodeInstance_GetGuid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMNodeInstance.GetContext
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* USMNodeInstance::GetContext()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMNodeInstance.GetContext"));

	USMNodeInstance_GetContext_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMNodeInstance.EvaluateGraphProperties
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bTargetOnly                    (Parm, ZeroConstructor, IsPlainOldData)

void USMNodeInstance::EvaluateGraphProperties(bool bTargetOnly)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMNodeInstance.EvaluateGraphProperties"));

	USMNodeInstance_EvaluateGraphProperties_Params params;
	params.bTargetOnly = bTargetOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMNodeInstance.ConstructionScript
// (Native, Event, Protected, BlueprintEvent)

void USMNodeInstance::ConstructionScript()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMNodeInstance.ConstructionScript"));

	USMNodeInstance_ConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMStateInstance_Base.SwitchToLinkedStateByTransition
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USMTransitionInstance*   TransitionInstance             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRequireTransitionToPass       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bActivateNow                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USMStateInstance_Base::SwitchToLinkedStateByTransition(class USMTransitionInstance* TransitionInstance, bool bRequireTransitionToPass, bool bActivateNow)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateInstance_Base.SwitchToLinkedStateByTransition"));

	USMStateInstance_Base_SwitchToLinkedStateByTransition_Params params;
	params.TransitionInstance = TransitionInstance;
	params.bRequireTransitionToPass = bRequireTransitionToPass;
	params.bActivateNow = bActivateNow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMStateInstance_Base.SwitchToLinkedStateByName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 NextStateName                  (Parm, ZeroConstructor)
// bool                           bRequireTransitionToPass       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bActivateNow                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USMStateInstance_Base::SwitchToLinkedStateByName(const struct FString& NextStateName, bool bRequireTransitionToPass, bool bActivateNow)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateInstance_Base.SwitchToLinkedStateByName"));

	USMStateInstance_Base_SwitchToLinkedStateByName_Params params;
	params.NextStateName = NextStateName;
	params.bRequireTransitionToPass = bRequireTransitionToPass;
	params.bActivateNow = bActivateNow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMStateInstance_Base.SwitchToLinkedState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USMStateInstance_Base*   NextStateInstance              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRequireTransitionToPass       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bActivateNow                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USMStateInstance_Base::SwitchToLinkedState(class USMStateInstance_Base* NextStateInstance, bool bRequireTransitionToPass, bool bActivateNow)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateInstance_Base.SwitchToLinkedState"));

	USMStateInstance_Base_SwitchToLinkedState_Params params;
	params.NextStateInstance = NextStateInstance;
	params.bRequireTransitionToPass = bRequireTransitionToPass;
	params.bActivateNow = bActivateNow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMStateInstance_Base.SetStayActiveOnStateChange
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bValue                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void USMStateInstance_Base::SetStayActiveOnStateChange(bool bValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateInstance_Base.SetStayActiveOnStateChange"));

	USMStateInstance_Base_SetStayActiveOnStateChange_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMStateInstance_Base.SetExcludeFromAnyState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bValue                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void USMStateInstance_Base::SetExcludeFromAnyState(bool bValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateInstance_Base.SetExcludeFromAnyState"));

	USMStateInstance_Base_SetExcludeFromAnyState_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMStateInstance_Base.SetEvalTransitionsOnStart
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bValue                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void USMStateInstance_Base::SetEvalTransitionsOnStart(bool bValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateInstance_Base.SetEvalTransitionsOnStart"));

	USMStateInstance_Base_SetEvalTransitionsOnStart_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMStateInstance_Base.SetDisableTickTransitionEvaluation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bValue                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void USMStateInstance_Base::SetDisableTickTransitionEvaluation(bool bValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateInstance_Base.SetDisableTickTransitionEvaluation"));

	USMStateInstance_Base_SetDisableTickTransitionEvaluation_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMStateInstance_Base.SetDefaultToParallel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bValue                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void USMStateInstance_Base::SetDefaultToParallel(bool bValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateInstance_Base.SetDefaultToParallel"));

	USMStateInstance_Base_SetDefaultToParallel_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMStateInstance_Base.SetAlwaysUpdate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bValue                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void USMStateInstance_Base::SetAlwaysUpdate(bool bValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateInstance_Base.SetAlwaysUpdate"));

	USMStateInstance_Base_SetAlwaysUpdate_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMStateInstance_Base.SetAllowParallelReentry
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bValue                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void USMStateInstance_Base::SetAllowParallelReentry(bool bValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateInstance_Base.SetAllowParallelReentry"));

	USMStateInstance_Base_SetAllowParallelReentry_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMStateInstance_Base.SetActive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bValue                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSetAllParents                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bActivateNow                   (Parm, ZeroConstructor, IsPlainOldData)

void USMStateInstance_Base::SetActive(bool bValue, bool bSetAllParents, bool bActivateNow)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateInstance_Base.SetActive"));

	USMStateInstance_Base_SetActive_Params params;
	params.bValue = bValue;
	params.bSetAllParents = bSetAllParents;
	params.bActivateNow = bActivateNow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMStateInstance_Base.OnStateUpdate
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void USMStateInstance_Base::OnStateUpdate(float DeltaSeconds)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateInstance_Base.OnStateUpdate"));

	USMStateInstance_Base_OnStateUpdate_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMStateInstance_Base.OnStateEnd
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void USMStateInstance_Base::OnStateEnd()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateInstance_Base.OnStateEnd"));

	USMStateInstance_Base_OnStateEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMStateInstance_Base.OnStateBegin
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void USMStateInstance_Base::OnStateBegin()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateInstance_Base.OnStateBegin"));

	USMStateInstance_Base_OnStateBegin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMStateInstance_Base.IsStateMachine
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USMStateInstance_Base::IsStateMachine()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateInstance_Base.IsStateMachine"));

	USMStateInstance_Base_IsStateMachine_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMStateInstance_Base.IsEntryState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USMStateInstance_Base::IsEntryState()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateInstance_Base.IsEntryState"));

	USMStateInstance_Base_IsEntryState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMStateInstance_Base.GetTransitionToTake
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USMTransitionInstance*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USMTransitionInstance* USMStateInstance_Base::GetTransitionToTake()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateInstance_Base.GetTransitionToTake"));

	USMStateInstance_Base_GetTransitionToTake_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMStateInstance_Base.GetTransitionByIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class USMTransitionInstance*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USMTransitionInstance* USMStateInstance_Base::GetTransitionByIndex(int Index)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateInstance_Base.GetTransitionByIndex"));

	USMStateInstance_Base_GetTransitionByIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMStateInstance_Base.GetStayActiveOnStateChange
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USMStateInstance_Base::GetStayActiveOnStateChange()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateInstance_Base.GetStayActiveOnStateChange"));

	USMStateInstance_Base_GetStayActiveOnStateChange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMStateInstance_Base.GetStateInfo
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSMStateInfo            State                          (Parm, OutParm)

void USMStateInstance_Base::GetStateInfo(struct FSMStateInfo* State)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateInstance_Base.GetStateInfo"));

	USMStateInstance_Base_GetStateInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;
}


// Function SMSystem.SMStateInstance_Base.GetStartTime
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDateTime               ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FDateTime USMStateInstance_Base::GetStartTime()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateInstance_Base.GetStartTime"));

	USMStateInstance_Base_GetStartTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMStateInstance_Base.GetServerTimeInState
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bOutUsedLocalTime              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USMStateInstance_Base::GetServerTimeInState(bool* bOutUsedLocalTime)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateInstance_Base.GetServerTimeInState"));

	USMStateInstance_Base_GetServerTimeInState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bOutUsedLocalTime != nullptr)
		*bOutUsedLocalTime = params.bOutUsedLocalTime;

	return params.ReturnValue;
}


// Function SMSystem.SMStateInstance_Base.GetPreviousStateByName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 StateName                      (Parm, ZeroConstructor)
// class USMStateInstance_Base*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USMStateInstance_Base* USMStateInstance_Base::GetPreviousStateByName(const struct FString& StateName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateInstance_Base.GetPreviousStateByName"));

	USMStateInstance_Base_GetPreviousStateByName_Params params;
	params.StateName = StateName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMStateInstance_Base.GetPreviousActiveTransition
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USMTransitionInstance*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USMTransitionInstance* USMStateInstance_Base::GetPreviousActiveTransition()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateInstance_Base.GetPreviousActiveTransition"));

	USMStateInstance_Base_GetPreviousActiveTransition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMStateInstance_Base.GetPreviousActiveState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USMStateInstance_Base*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USMStateInstance_Base* USMStateInstance_Base::GetPreviousActiveState()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateInstance_Base.GetPreviousActiveState"));

	USMStateInstance_Base_GetPreviousActiveState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMStateInstance_Base.GetOutgoingTransitions
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class USMTransitionInstance*> Transitions                    (Parm, OutParm, ZeroConstructor)
// bool                           bExcludeAlwaysFalse            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USMStateInstance_Base::GetOutgoingTransitions(bool bExcludeAlwaysFalse, TArray<class USMTransitionInstance*>* Transitions)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateInstance_Base.GetOutgoingTransitions"));

	USMStateInstance_Base_GetOutgoingTransitions_Params params;
	params.bExcludeAlwaysFalse = bExcludeAlwaysFalse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Transitions != nullptr)
		*Transitions = params.Transitions;

	return params.ReturnValue;
}


// Function SMSystem.SMStateInstance_Base.GetNextStateByTransitionIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class USMStateInstance_Base*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USMStateInstance_Base* USMStateInstance_Base::GetNextStateByTransitionIndex(int Index)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateInstance_Base.GetNextStateByTransitionIndex"));

	USMStateInstance_Base_GetNextStateByTransitionIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMStateInstance_Base.GetNextStateByName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 StateName                      (Parm, ZeroConstructor)
// class USMStateInstance_Base*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USMStateInstance_Base* USMStateInstance_Base::GetNextStateByName(const struct FString& StateName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateInstance_Base.GetNextStateByName"));

	USMStateInstance_Base_GetNextStateByName_Params params;
	params.StateName = StateName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMStateInstance_Base.GetIncomingTransitions
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class USMTransitionInstance*> Transitions                    (Parm, OutParm, ZeroConstructor)
// bool                           bExcludeAlwaysFalse            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USMStateInstance_Base::GetIncomingTransitions(bool bExcludeAlwaysFalse, TArray<class USMTransitionInstance*>* Transitions)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateInstance_Base.GetIncomingTransitions"));

	USMStateInstance_Base_GetIncomingTransitions_Params params;
	params.bExcludeAlwaysFalse = bExcludeAlwaysFalse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Transitions != nullptr)
		*Transitions = params.Transitions;

	return params.ReturnValue;
}


// Function SMSystem.SMStateInstance_Base.GetExcludeFromAnyState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USMStateInstance_Base::GetExcludeFromAnyState()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateInstance_Base.GetExcludeFromAnyState"));

	USMStateInstance_Base_GetExcludeFromAnyState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMStateInstance_Base.GetEvalTransitionsOnStart
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USMStateInstance_Base::GetEvalTransitionsOnStart()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateInstance_Base.GetEvalTransitionsOnStart"));

	USMStateInstance_Base_GetEvalTransitionsOnStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMStateInstance_Base.GetDisableTickTransitionEvaluation
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USMStateInstance_Base::GetDisableTickTransitionEvaluation()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateInstance_Base.GetDisableTickTransitionEvaluation"));

	USMStateInstance_Base_GetDisableTickTransitionEvaluation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMStateInstance_Base.GetDefaultToParallel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USMStateInstance_Base::GetDefaultToParallel()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateInstance_Base.GetDefaultToParallel"));

	USMStateInstance_Base_GetDefaultToParallel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMStateInstance_Base.GetAlwaysUpdate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USMStateInstance_Base::GetAlwaysUpdate()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateInstance_Base.GetAlwaysUpdate"));

	USMStateInstance_Base_GetAlwaysUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMStateInstance_Base.GetAllowParallelReentry
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USMStateInstance_Base::GetAllowParallelReentry()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateInstance_Base.GetAllowParallelReentry"));

	USMStateInstance_Base_GetAllowParallelReentry_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMStateInstance_Base.EvaluateTransitions
// (Final, Native, Public, BlueprintCallable)

void USMStateInstance_Base::EvaluateTransitions()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateInstance_Base.EvaluateTransitions"));

	USMStateInstance_Base_EvaluateTransitions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMStateInstance_Base.AreAllOutgoingTransitionsFromAnAnyState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USMStateInstance_Base::AreAllOutgoingTransitionsFromAnAnyState()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateInstance_Base.AreAllOutgoingTransitionsFromAnAnyState"));

	USMStateInstance_Base_AreAllOutgoingTransitionsFromAnAnyState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMStateInstance_Base.AreAllIncomingTransitionsFromAnAnyState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USMStateInstance_Base::AreAllIncomingTransitionsFromAnAnyState()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateInstance_Base.AreAllIncomingTransitionsFromAnAnyState"));

	USMStateInstance_Base_AreAllIncomingTransitionsFromAnAnyState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMConduitInstance.SetEvalWithTransitions
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bValue                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void USMConduitInstance::SetEvalWithTransitions(bool bValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMConduitInstance.SetEvalWithTransitions"));

	USMConduitInstance_SetEvalWithTransitions_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMConduitInstance.SetCanEvaluate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bValue                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void USMConduitInstance::SetCanEvaluate(bool bValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMConduitInstance.SetCanEvaluate"));

	USMConduitInstance_SetCanEvaluate_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMConduitInstance.OnConduitShutdown
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void USMConduitInstance::OnConduitShutdown()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMConduitInstance.OnConduitShutdown"));

	USMConduitInstance_OnConduitShutdown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMConduitInstance.OnConduitInitialized
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void USMConduitInstance::OnConduitInitialized()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMConduitInstance.OnConduitInitialized"));

	USMConduitInstance_OnConduitInitialized_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMConduitInstance.OnConduitEntered
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void USMConduitInstance::OnConduitEntered()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMConduitInstance.OnConduitEntered"));

	USMConduitInstance_OnConduitEntered_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMConduitInstance.GetEvalWithTransitions
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USMConduitInstance::GetEvalWithTransitions()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMConduitInstance.GetEvalWithTransitions"));

	USMConduitInstance_GetEvalWithTransitions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMConduitInstance.GetCanEvaluate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USMConduitInstance::GetCanEvaluate()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMConduitInstance.GetCanEvaluate"));

	USMConduitInstance_GetCanEvaluate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMConduitInstance.CanEnterTransition
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USMConduitInstance::CanEnterTransition()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMConduitInstance.CanEnterTransition"));

	USMConduitInstance_CanEnterTransition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMCompilerLog.LogProperty
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   PropertyName                   (Parm, ZeroConstructor, IsPlainOldData)
// class USMNodeInstance*         NodeInstance                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Message                        (Parm, ZeroConstructor)
// enum class ESMCompilerLogType  Severity                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHighlight                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSilent                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            ArrayIndex                     (Parm, ZeroConstructor, IsPlainOldData)

void USMCompilerLog::LogProperty(const struct FName& PropertyName, class USMNodeInstance* NodeInstance, const struct FString& Message, enum class ESMCompilerLogType Severity, bool bHighlight, bool bSilent, int ArrayIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMCompilerLog.LogProperty"));

	USMCompilerLog_LogProperty_Params params;
	params.PropertyName = PropertyName;
	params.NodeInstance = NodeInstance;
	params.Message = Message;
	params.Severity = Severity;
	params.bHighlight = bHighlight;
	params.bSilent = bSilent;
	params.ArrayIndex = ArrayIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMCompilerLog.Log
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESMCompilerLogType  Severity                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Message                        (Parm, ZeroConstructor)

void USMCompilerLog::Log(enum class ESMCompilerLogType Severity, const struct FString& Message)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMCompilerLog.Log"));

	USMCompilerLog_Log_Params params;
	params.Severity = Severity;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMStateInstance.RemoveStateFromStack
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            StackIndex                     (Parm, ZeroConstructor, IsPlainOldData)

void USMStateInstance::RemoveStateFromStack(int StackIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateInstance.RemoveStateFromStack"));

	USMStateInstance_RemoveStateFromStack_Params params;
	params.StackIndex = StackIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMStateInstance.OnStateShutdown
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void USMStateInstance::OnStateShutdown()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateInstance.OnStateShutdown"));

	USMStateInstance_OnStateShutdown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMStateInstance.OnStateInitialized
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void USMStateInstance::OnStateInitialized()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateInstance.OnStateInitialized"));

	USMStateInstance_OnStateInitialized_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMStateInstance.GetStateStackCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USMStateInstance::GetStateStackCount()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateInstance.GetStateStackCount"));

	USMStateInstance_GetStateStackCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMStateInstance.GetStateInStackByClass
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  StateClass                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIncludeChildren               (Parm, ZeroConstructor, IsPlainOldData)
// class USMStateInstance_Base*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USMStateInstance_Base* USMStateInstance::GetStateInStackByClass(class UClass* StateClass, bool bIncludeChildren)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateInstance.GetStateInStackByClass"));

	USMStateInstance_GetStateInStackByClass_Params params;
	params.StateClass = StateClass;
	params.bIncludeChildren = bIncludeChildren;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMStateInstance.GetStateInStack
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class USMStateInstance_Base*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USMStateInstance_Base* USMStateInstance::GetStateInStack(int Index)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateInstance.GetStateInStack"));

	USMStateInstance_GetStateInStack_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMStateInstance.GetStateIndexInStack
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USMStateInstance_Base*   StateInstance                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USMStateInstance::GetStateIndexInStack(class USMStateInstance_Base* StateInstance)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateInstance.GetStateIndexInStack"));

	USMStateInstance_GetStateIndexInStack_Params params;
	params.StateInstance = StateInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMStateInstance.GetStackOwnerInstance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USMStateInstance_Base*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USMStateInstance_Base* USMStateInstance::GetStackOwnerInstance()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateInstance.GetStackOwnerInstance"));

	USMStateInstance_GetStackOwnerInstance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMStateInstance.GetAllStateStackInstances
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class USMStateInstance_Base*> StateStackInstances            (Parm, OutParm, ZeroConstructor)

void USMStateInstance::GetAllStateStackInstances(TArray<class USMStateInstance_Base*>* StateStackInstances)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateInstance.GetAllStateStackInstances"));

	USMStateInstance_GetAllStateStackInstances_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StateStackInstances != nullptr)
		*StateStackInstances = params.StateStackInstances;
}


// Function SMSystem.SMStateInstance.GetAllStatesInStackOfClass
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  StateClass                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class USMStateInstance_Base*> StateStackInstances            (Parm, OutParm, ZeroConstructor)
// bool                           bIncludeChildren               (Parm, ZeroConstructor, IsPlainOldData)

void USMStateInstance::GetAllStatesInStackOfClass(class UClass* StateClass, bool bIncludeChildren, TArray<class USMStateInstance_Base*>* StateStackInstances)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateInstance.GetAllStatesInStackOfClass"));

	USMStateInstance_GetAllStatesInStackOfClass_Params params;
	params.StateClass = StateClass;
	params.bIncludeChildren = bIncludeChildren;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StateStackInstances != nullptr)
		*StateStackInstances = params.StateStackInstances;
}


// Function SMSystem.SMStateInstance.ClearStateStack
// (Final, Native, Public, BlueprintCallable)

void USMStateInstance::ClearStateStack()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateInstance.ClearStateStack"));

	USMStateInstance_ClearStateStack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMStateInstance.AddStateToStack
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  StateClass                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            StackIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// class USMStateInstance*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USMStateInstance* USMStateInstance::AddStateToStack(class UClass* StateClass, int StackIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateInstance.AddStateToStack"));

	USMStateInstance_AddStateToStack_Params params;
	params.StateClass = StateClass;
	params.StackIndex = StackIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMStateMachineComponent.Update
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void USMStateMachineComponent::Update(float DeltaSeconds)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateMachineComponent.Update"));

	USMStateMachineComponent_Update_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMStateMachineComponent.Stop
// (Native, Public, BlueprintCallable)

void USMStateMachineComponent::Stop()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateMachineComponent.Stop"));

	USMStateMachineComponent_Stop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMStateMachineComponent.Start
// (Native, Public, BlueprintCallable)

void USMStateMachineComponent::Start()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateMachineComponent.Start"));

	USMStateMachineComponent_Start_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMStateMachineComponent.Shutdown
// (Native, Public, BlueprintCallable)

void USMStateMachineComponent::Shutdown()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateMachineComponent.Shutdown"));

	USMStateMachineComponent_Shutdown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMStateMachineComponent.SetCanInstanceNetworkTick
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bCanEverTick                   (Parm, ZeroConstructor, IsPlainOldData)

void USMStateMachineComponent::SetCanInstanceNetworkTick(bool bCanEverTick)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateMachineComponent.SetCanInstanceNetworkTick"));

	USMStateMachineComponent_SetCanInstanceNetworkTick_Params params;
	params.bCanEverTick = bCanEverTick;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMStateMachineComponent.SERVER_Update
// (Net, NetReliable, Native, Event, Protected, NetServer)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void USMStateMachineComponent::SERVER_Update(float DeltaTime)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateMachineComponent.SERVER_Update"));

	USMStateMachineComponent_SERVER_Update_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMStateMachineComponent.SERVER_TakeTransitions
// (Net, NetReliable, Native, Event, Protected, NetServer)
// Parameters:
// TArray<struct FSMTransitionTransaction> TransitionTransactions         (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void USMStateMachineComponent::SERVER_TakeTransitions(TArray<struct FSMTransitionTransaction> TransitionTransactions)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateMachineComponent.SERVER_TakeTransitions"));

	USMStateMachineComponent_SERVER_TakeTransitions_Params params;
	params.TransitionTransactions = TransitionTransactions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMStateMachineComponent.SERVER_Stop
// (Net, NetReliable, Native, Event, Protected, NetServer)
// Parameters:
// struct FSMTransaction_Base     Transaction                    (ConstParm, Parm, ReferenceParm)

void USMStateMachineComponent::SERVER_Stop(const struct FSMTransaction_Base& Transaction)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateMachineComponent.SERVER_Stop"));

	USMStateMachineComponent_SERVER_Stop_Params params;
	params.Transaction = Transaction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMStateMachineComponent.SERVER_Start
// (Net, NetReliable, Native, Event, Protected, NetServer)
// Parameters:
// struct FSMTransaction_Base     Transaction                    (ConstParm, Parm, ReferenceParm)

void USMStateMachineComponent::SERVER_Start(const struct FSMTransaction_Base& Transaction)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateMachineComponent.SERVER_Start"));

	USMStateMachineComponent_SERVER_Start_Params params;
	params.Transaction = Transaction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMStateMachineComponent.SERVER_Shutdown
// (Net, NetReliable, Native, Event, Protected, NetServer)
// Parameters:
// struct FSMTransaction_Base     Transaction                    (ConstParm, Parm, ReferenceParm)

void USMStateMachineComponent::SERVER_Shutdown(const struct FSMTransaction_Base& Transaction)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateMachineComponent.SERVER_Shutdown"));

	USMStateMachineComponent_SERVER_Shutdown_Params params;
	params.Transaction = Transaction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMStateMachineComponent.SERVER_RequestFullSync
// (Net, NetReliable, Native, Event, Protected, NetServer)
// Parameters:
// bool                           bForceFullRefresh              (Parm, ZeroConstructor, IsPlainOldData)

void USMStateMachineComponent::SERVER_RequestFullSync(bool bForceFullRefresh)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateMachineComponent.SERVER_RequestFullSync"));

	USMStateMachineComponent_SERVER_RequestFullSync_Params params;
	params.bForceFullRefresh = bForceFullRefresh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMStateMachineComponent.SERVER_Initialize
// (Net, NetReliable, Native, Event, Protected, NetServer)
// Parameters:
// struct FSMInitializeTransaction Transaction                    (ConstParm, Parm, ReferenceParm)

void USMStateMachineComponent::SERVER_Initialize(const struct FSMInitializeTransaction& Transaction)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateMachineComponent.SERVER_Initialize"));

	USMStateMachineComponent_SERVER_Initialize_Params params;
	params.Transaction = Transaction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMStateMachineComponent.SERVER_FullSync
// (Net, NetReliable, Native, Event, Protected, NetServer)
// Parameters:
// struct FSMFullSyncTransaction  FullSyncTransaction            (ConstParm, Parm, ReferenceParm)

void USMStateMachineComponent::SERVER_FullSync(const struct FSMFullSyncTransaction& FullSyncTransaction)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateMachineComponent.SERVER_FullSync"));

	USMStateMachineComponent_SERVER_FullSync_Params params;
	params.FullSyncTransaction = FullSyncTransaction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMStateMachineComponent.SERVER_ActivateStates
// (Net, NetReliable, Native, Event, Protected, NetServer)
// Parameters:
// TArray<struct FSMActivateStateTransaction> StateTransactions              (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void USMStateMachineComponent::SERVER_ActivateStates(TArray<struct FSMActivateStateTransaction> StateTransactions)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateMachineComponent.SERVER_ActivateStates"));

	USMStateMachineComponent_SERVER_ActivateStates_Params params;
	params.StateTransactions = StateTransactions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMStateMachineComponent.Restart
// (Native, Public, BlueprintCallable)

void USMStateMachineComponent::Restart()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateMachineComponent.Restart"));

	USMStateMachineComponent_Restart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMStateMachineComponent.REP_OnInstanceLoaded
// (Native, Protected)

void USMStateMachineComponent::REP_OnInstanceLoaded()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateMachineComponent.REP_OnInstanceLoaded"));

	USMStateMachineComponent_REP_OnInstanceLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMStateMachineComponent.OnPostInitialize
// (Event, Protected, BlueprintEvent)

void USMStateMachineComponent::OnPostInitialize()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateMachineComponent.OnPostInitialize"));

	USMStateMachineComponent_OnPostInitialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMStateMachineComponent.OnContextPawnControllerChanged
// (Final, Native, Private)
// Parameters:
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             NewController                  (Parm, ZeroConstructor, IsPlainOldData)

void USMStateMachineComponent::OnContextPawnControllerChanged(class APawn* Pawn, class AController* NewController)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateMachineComponent.OnContextPawnControllerChanged"));

	USMStateMachineComponent_OnContextPawnControllerChanged_Params params;
	params.Pawn = Pawn;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMStateMachineComponent.MULTICAST_TakeTransitions
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// TArray<struct FSMTransitionTransaction> Transactions                   (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void USMStateMachineComponent::MULTICAST_TakeTransitions(TArray<struct FSMTransitionTransaction> Transactions)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateMachineComponent.MULTICAST_TakeTransitions"));

	USMStateMachineComponent_MULTICAST_TakeTransitions_Params params;
	params.Transactions = Transactions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMStateMachineComponent.MULTICAST_Stop
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// struct FSMTransaction_Base     Transaction                    (ConstParm, Parm, ReferenceParm)

void USMStateMachineComponent::MULTICAST_Stop(const struct FSMTransaction_Base& Transaction)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateMachineComponent.MULTICAST_Stop"));

	USMStateMachineComponent_MULTICAST_Stop_Params params;
	params.Transaction = Transaction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMStateMachineComponent.MULTICAST_Start
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// struct FSMTransaction_Base     Transaction                    (ConstParm, Parm, ReferenceParm)

void USMStateMachineComponent::MULTICAST_Start(const struct FSMTransaction_Base& Transaction)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateMachineComponent.MULTICAST_Start"));

	USMStateMachineComponent_MULTICAST_Start_Params params;
	params.Transaction = Transaction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMStateMachineComponent.MULTICAST_Shutdown
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// struct FSMTransaction_Base     Transaction                    (ConstParm, Parm, ReferenceParm)

void USMStateMachineComponent::MULTICAST_Shutdown(const struct FSMTransaction_Base& Transaction)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateMachineComponent.MULTICAST_Shutdown"));

	USMStateMachineComponent_MULTICAST_Shutdown_Params params;
	params.Transaction = Transaction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMStateMachineComponent.MULTICAST_FullSync
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// struct FSMFullSyncTransaction  FullSyncTransaction            (ConstParm, Parm, ReferenceParm)

void USMStateMachineComponent::MULTICAST_FullSync(const struct FSMFullSyncTransaction& FullSyncTransaction)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateMachineComponent.MULTICAST_FullSync"));

	USMStateMachineComponent_MULTICAST_FullSync_Params params;
	params.FullSyncTransaction = FullSyncTransaction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMStateMachineComponent.MULTICAST_ActivateStates
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// TArray<struct FSMActivateStateTransaction> StateTransactions              (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void USMStateMachineComponent::MULTICAST_ActivateStates(TArray<struct FSMActivateStateTransaction> StateTransactions)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateMachineComponent.MULTICAST_ActivateStates"));

	USMStateMachineComponent_MULTICAST_ActivateStates_Params params;
	params.StateTransactions = StateTransactions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMStateMachineComponent.K2_InitializeAsync
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Context                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FLatentActionInfo       LatentInfo                     (Parm)

void USMStateMachineComponent::K2_InitializeAsync(class UObject* Context, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateMachineComponent.K2_InitializeAsync"));

	USMStateMachineComponent_K2_InitializeAsync_Params params;
	params.Context = Context;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMStateMachineComponent.IsStateMachineActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USMStateMachineComponent::IsStateMachineActive()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateMachineComponent.IsStateMachineActive"));

	USMStateMachineComponent_IsStateMachineActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMStateMachineComponent.IsInitialized
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USMStateMachineComponent::IsInitialized()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateMachineComponent.IsInitialized"));

	USMStateMachineComponent_IsInitialized_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMStateMachineComponent.Internal_OnStateMachineUpdated
// (Final, Native, Protected)
// Parameters:
// class USMInstance*             Instance                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void USMStateMachineComponent::Internal_OnStateMachineUpdated(class USMInstance* Instance, float DeltaSeconds)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateMachineComponent.Internal_OnStateMachineUpdated"));

	USMStateMachineComponent_Internal_OnStateMachineUpdated_Params params;
	params.Instance = Instance;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMStateMachineComponent.Internal_OnStateMachineTransitionTaken
// (Final, Native, Protected)
// Parameters:
// class USMInstance*             Instance                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FSMTransitionInfo       Transition                     (Parm)

void USMStateMachineComponent::Internal_OnStateMachineTransitionTaken(class USMInstance* Instance, const struct FSMTransitionInfo& Transition)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateMachineComponent.Internal_OnStateMachineTransitionTaken"));

	USMStateMachineComponent_Internal_OnStateMachineTransitionTaken_Params params;
	params.Instance = Instance;
	params.Transition = Transition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMStateMachineComponent.Internal_OnStateMachineStopped
// (Final, Native, Protected)
// Parameters:
// class USMInstance*             Instance                       (Parm, ZeroConstructor, IsPlainOldData)

void USMStateMachineComponent::Internal_OnStateMachineStopped(class USMInstance* Instance)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateMachineComponent.Internal_OnStateMachineStopped"));

	USMStateMachineComponent_Internal_OnStateMachineStopped_Params params;
	params.Instance = Instance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMStateMachineComponent.Internal_OnStateMachineStateStarted
// (Final, Native, Protected)
// Parameters:
// class USMInstance*             Instance                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FSMStateInfo            State                          (Parm)

void USMStateMachineComponent::Internal_OnStateMachineStateStarted(class USMInstance* Instance, const struct FSMStateInfo& State)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateMachineComponent.Internal_OnStateMachineStateStarted"));

	USMStateMachineComponent_Internal_OnStateMachineStateStarted_Params params;
	params.Instance = Instance;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMStateMachineComponent.Internal_OnStateMachineStateChanged
// (Final, Native, Protected)
// Parameters:
// class USMInstance*             Instance                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FSMStateInfo            ToState                        (Parm)
// struct FSMStateInfo            FromState                      (Parm)

void USMStateMachineComponent::Internal_OnStateMachineStateChanged(class USMInstance* Instance, const struct FSMStateInfo& ToState, const struct FSMStateInfo& FromState)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateMachineComponent.Internal_OnStateMachineStateChanged"));

	USMStateMachineComponent_Internal_OnStateMachineStateChanged_Params params;
	params.Instance = Instance;
	params.ToState = ToState;
	params.FromState = FromState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMStateMachineComponent.Internal_OnStateMachineStarted
// (Final, Native, Protected)
// Parameters:
// class USMInstance*             Instance                       (Parm, ZeroConstructor, IsPlainOldData)

void USMStateMachineComponent::Internal_OnStateMachineStarted(class USMInstance* Instance)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateMachineComponent.Internal_OnStateMachineStarted"));

	USMStateMachineComponent_Internal_OnStateMachineStarted_Params params;
	params.Instance = Instance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMStateMachineComponent.Internal_OnStateMachineShutdown
// (Final, Native, Protected)
// Parameters:
// class USMInstance*             Instance                       (Parm, ZeroConstructor, IsPlainOldData)

void USMStateMachineComponent::Internal_OnStateMachineShutdown(class USMInstance* Instance)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateMachineComponent.Internal_OnStateMachineShutdown"));

	USMStateMachineComponent_Internal_OnStateMachineShutdown_Params params;
	params.Instance = Instance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMStateMachineComponent.Internal_OnReplicatedInstanceInitialized
// (Final, Native, Protected)
// Parameters:
// class USMInstance*             Instance                       (Parm, ZeroConstructor, IsPlainOldData)

void USMStateMachineComponent::Internal_OnReplicatedInstanceInitialized(class USMInstance* Instance)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateMachineComponent.Internal_OnReplicatedInstanceInitialized"));

	USMStateMachineComponent_Internal_OnReplicatedInstanceInitialized_Params params;
	params.Instance = Instance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMStateMachineComponent.Internal_OnInstanceInitializedAsync
// (Final, Native, Protected)
// Parameters:
// class USMInstance*             Instance                       (Parm, ZeroConstructor, IsPlainOldData)

void USMStateMachineComponent::Internal_OnInstanceInitializedAsync(class USMInstance* Instance)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateMachineComponent.Internal_OnInstanceInitializedAsync"));

	USMStateMachineComponent_Internal_OnInstanceInitializedAsync_Params params;
	params.Instance = Instance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMStateMachineComponent.Initialize
// (Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Context                        (Parm, ZeroConstructor, IsPlainOldData)

void USMStateMachineComponent::Initialize(class UObject* Context)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateMachineComponent.Initialize"));

	USMStateMachineComponent_Initialize_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMStateMachineComponent.GetTopMostParentActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* USMStateMachineComponent::GetTopMostParentActor()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateMachineComponent.GetTopMostParentActor"));

	USMStateMachineComponent_GetTopMostParentActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMStateMachineComponent.GetInstance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USMInstance*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USMInstance* USMStateMachineComponent::GetInstance()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateMachineComponent.GetInstance"));

	USMStateMachineComponent_GetInstance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMStateMachineComponent.GetContextForInitialization
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* USMStateMachineComponent::GetContextForInitialization()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateMachineComponent.GetContextForInitialization"));

	USMStateMachineComponent_GetContextForInitialization_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMStateMachineComponent.CopySettingsFromOtherComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USMStateMachineComponent* OtherComponent                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void USMStateMachineComponent::CopySettingsFromOtherComponent(class USMStateMachineComponent* OtherComponent)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateMachineComponent.CopySettingsFromOtherComponent"));

	USMStateMachineComponent_CopySettingsFromOtherComponent_Params params;
	params.OtherComponent = OtherComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMStateMachineComponent.CLIENT_TakeTransitions
// (Final, Net, NetReliable, Native, Event, Private, NetClient)
// Parameters:
// TArray<struct FSMTransitionTransaction> Transactions                   (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void USMStateMachineComponent::CLIENT_TakeTransitions(TArray<struct FSMTransitionTransaction> Transactions)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateMachineComponent.CLIENT_TakeTransitions"));

	USMStateMachineComponent_CLIENT_TakeTransitions_Params params;
	params.Transactions = Transactions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMStateMachineComponent.CLIENT_Stop
// (Final, Net, NetReliable, Native, Event, Private, NetClient)
// Parameters:
// struct FSMTransaction_Base     Transaction                    (ConstParm, Parm, ReferenceParm)

void USMStateMachineComponent::CLIENT_Stop(const struct FSMTransaction_Base& Transaction)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateMachineComponent.CLIENT_Stop"));

	USMStateMachineComponent_CLIENT_Stop_Params params;
	params.Transaction = Transaction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMStateMachineComponent.CLIENT_Start
// (Final, Net, NetReliable, Native, Event, Private, NetClient)
// Parameters:
// struct FSMTransaction_Base     Transaction                    (ConstParm, Parm, ReferenceParm)

void USMStateMachineComponent::CLIENT_Start(const struct FSMTransaction_Base& Transaction)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateMachineComponent.CLIENT_Start"));

	USMStateMachineComponent_CLIENT_Start_Params params;
	params.Transaction = Transaction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMStateMachineComponent.CLIENT_Shutdown
// (Final, Net, NetReliable, Native, Event, Private, NetClient)
// Parameters:
// struct FSMTransaction_Base     Transaction                    (ConstParm, Parm, ReferenceParm)

void USMStateMachineComponent::CLIENT_Shutdown(const struct FSMTransaction_Base& Transaction)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateMachineComponent.CLIENT_Shutdown"));

	USMStateMachineComponent_CLIENT_Shutdown_Params params;
	params.Transaction = Transaction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMStateMachineComponent.CLIENT_FullSync
// (Final, Net, NetReliable, Native, Event, Private, NetClient)
// Parameters:
// struct FSMFullSyncTransaction  FullSyncTransaction            (ConstParm, Parm, ReferenceParm)

void USMStateMachineComponent::CLIENT_FullSync(const struct FSMFullSyncTransaction& FullSyncTransaction)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateMachineComponent.CLIENT_FullSync"));

	USMStateMachineComponent_CLIENT_FullSync_Params params;
	params.FullSyncTransaction = FullSyncTransaction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMStateMachineComponent.CLIENT_ActivateStates
// (Final, Net, NetReliable, Native, Event, Private, NetClient)
// Parameters:
// TArray<struct FSMActivateStateTransaction> StateTransactions              (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void USMStateMachineComponent::CLIENT_ActivateStates(TArray<struct FSMActivateStateTransaction> StateTransactions)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateMachineComponent.CLIENT_ActivateStates"));

	USMStateMachineComponent_CLIENT_ActivateStates_Params params;
	params.StateTransactions = StateTransactions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMStateMachineInstance.SetWaitForEndState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bValue                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void USMStateMachineInstance::SetWaitForEndState(bool bValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateMachineInstance.SetWaitForEndState"));

	USMStateMachineInstance_SetWaitForEndState_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMStateMachineInstance.SetReuseIfNotEndState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bValue                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void USMStateMachineInstance::SetReuseIfNotEndState(bool bValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateMachineInstance.SetReuseIfNotEndState"));

	USMStateMachineInstance_SetReuseIfNotEndState_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMStateMachineInstance.SetReuseCurrentState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bValue                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void USMStateMachineInstance::SetReuseCurrentState(bool bValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateMachineInstance.SetReuseCurrentState"));

	USMStateMachineInstance_SetReuseCurrentState_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMStateMachineInstance.OnStateShutdown
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void USMStateMachineInstance::OnStateShutdown()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateMachineInstance.OnStateShutdown"));

	USMStateMachineInstance_OnStateShutdown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMStateMachineInstance.OnStateMachineCompleted
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void USMStateMachineInstance::OnStateMachineCompleted()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateMachineInstance.OnStateMachineCompleted"));

	USMStateMachineInstance_OnStateMachineCompleted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMStateMachineInstance.OnStateInitialized
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void USMStateMachineInstance::OnStateInitialized()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateMachineInstance.OnStateInitialized"));

	USMStateMachineInstance_OnStateInitialized_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMStateMachineInstance.OnEndStateReached
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void USMStateMachineInstance::OnEndStateReached()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateMachineInstance.OnEndStateReached"));

	USMStateMachineInstance_OnEndStateReached_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMStateMachineInstance.GetWaitForEndState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USMStateMachineInstance::GetWaitForEndState()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateMachineInstance.GetWaitForEndState"));

	USMStateMachineInstance_GetWaitForEndState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMStateMachineInstance.GetStateMachineReference
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USMInstance*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USMInstance* USMStateMachineInstance::GetStateMachineReference()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateMachineInstance.GetStateMachineReference"));

	USMStateMachineInstance_GetStateMachineReference_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMStateMachineInstance.GetReuseIfNotEndState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USMStateMachineInstance::GetReuseIfNotEndState()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateMachineInstance.GetReuseIfNotEndState"));

	USMStateMachineInstance_GetReuseIfNotEndState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMStateMachineInstance.GetReuseCurrentState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USMStateMachineInstance::GetReuseCurrentState()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateMachineInstance.GetReuseCurrentState"));

	USMStateMachineInstance_GetReuseCurrentState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMStateMachineInstance.GetEntryStates
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class USMStateInstance_Base*> EntryStates                    (Parm, OutParm, ZeroConstructor)

void USMStateMachineInstance::GetEntryStates(TArray<class USMStateInstance_Base*>* EntryStates)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateMachineInstance.GetEntryStates"));

	USMStateMachineInstance_GetEntryStates_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EntryStates != nullptr)
		*EntryStates = params.EntryStates;
}


// Function SMSystem.SMStateMachineInstance.GetContainedStateByName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 StateName                      (Parm, ZeroConstructor)
// class USMStateInstance_Base*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USMStateInstance_Base* USMStateMachineInstance::GetContainedStateByName(const struct FString& StateName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateMachineInstance.GetContainedStateByName"));

	USMStateMachineInstance_GetContainedStateByName_Params params;
	params.StateName = StateName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMStateMachineInstance.GetAllStateInstances
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class USMStateInstance_Base*> StateInstances                 (Parm, OutParm, ZeroConstructor)

void USMStateMachineInstance::GetAllStateInstances(TArray<class USMStateInstance_Base*>* StateInstances)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateMachineInstance.GetAllStateInstances"));

	USMStateMachineInstance_GetAllStateInstances_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StateInstances != nullptr)
		*StateInstances = params.StateInstances;
}


// Function SMSystem.SMStateMachineInstance.GetActiveStates
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class USMStateInstance_Base*> ActiveStates                   (Parm, OutParm, ZeroConstructor)

void USMStateMachineInstance::GetActiveStates(TArray<class USMStateInstance_Base*>* ActiveStates)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMStateMachineInstance.GetActiveStates"));

	USMStateMachineInstance_GetActiveStates_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActiveStates != nullptr)
		*ActiveStates = params.ActiveStates;
}


// Function SMSystem.SMTransitionInstance.SetRunParallel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bValue                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void USMTransitionInstance::SetRunParallel(bool bValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMTransitionInstance.SetRunParallel"));

	USMTransitionInstance_SetRunParallel_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMTransitionInstance.SetPriorityOrder
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void USMTransitionInstance::SetPriorityOrder(int Value)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMTransitionInstance.SetPriorityOrder"));

	USMTransitionInstance_SetPriorityOrder_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMTransitionInstance.SetEvalIfNextStateActive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bValue                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void USMTransitionInstance::SetEvalIfNextStateActive(bool bValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMTransitionInstance.SetEvalIfNextStateActive"));

	USMTransitionInstance_SetEvalIfNextStateActive_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMTransitionInstance.SetCanEvalWithStartState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bValue                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void USMTransitionInstance::SetCanEvalWithStartState(bool bValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMTransitionInstance.SetCanEvalWithStartState"));

	USMTransitionInstance_SetCanEvalWithStartState_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMTransitionInstance.SetCanEvaluateFromEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bValue                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void USMTransitionInstance::SetCanEvaluateFromEvent(bool bValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMTransitionInstance.SetCanEvaluateFromEvent"));

	USMTransitionInstance_SetCanEvaluateFromEvent_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMTransitionInstance.SetCanEvaluate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bValue                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void USMTransitionInstance::SetCanEvaluate(bool bValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMTransitionInstance.SetCanEvaluate"));

	USMTransitionInstance_SetCanEvaluate_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMTransitionInstance.OnTransitionShutdown
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void USMTransitionInstance::OnTransitionShutdown()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMTransitionInstance.OnTransitionShutdown"));

	USMTransitionInstance_OnTransitionShutdown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMTransitionInstance.OnTransitionInitialized
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void USMTransitionInstance::OnTransitionInitialized()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMTransitionInstance.OnTransitionInitialized"));

	USMTransitionInstance_OnTransitionInitialized_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMTransitionInstance.OnTransitionEntered
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void USMTransitionInstance::OnTransitionEntered()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMTransitionInstance.OnTransitionEntered"));

	USMTransitionInstance_OnTransitionEntered_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SMSystem.SMTransitionInstance.IsTransitionFromLinkState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USMTransitionInstance::IsTransitionFromLinkState()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMTransitionInstance.IsTransitionFromLinkState"));

	USMTransitionInstance_IsTransitionFromLinkState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMTransitionInstance.IsTransitionFromAnyState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USMTransitionInstance::IsTransitionFromAnyState()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMTransitionInstance.IsTransitionFromAnyState"));

	USMTransitionInstance_IsTransitionFromAnyState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMTransitionInstance.GetTransitionStackCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USMTransitionInstance::GetTransitionStackCount()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMTransitionInstance.GetTransitionStackCount"));

	USMTransitionInstance_GetTransitionStackCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMTransitionInstance.GetTransitionInStackByClass
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  TransitionClass                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIncludeChildren               (Parm, ZeroConstructor, IsPlainOldData)
// class USMTransitionInstance*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USMTransitionInstance* USMTransitionInstance::GetTransitionInStackByClass(class UClass* TransitionClass, bool bIncludeChildren)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMTransitionInstance.GetTransitionInStackByClass"));

	USMTransitionInstance_GetTransitionInStackByClass_Params params;
	params.TransitionClass = TransitionClass;
	params.bIncludeChildren = bIncludeChildren;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMTransitionInstance.GetTransitionInStack
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class USMTransitionInstance*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USMTransitionInstance* USMTransitionInstance::GetTransitionInStack(int Index)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMTransitionInstance.GetTransitionInStack"));

	USMTransitionInstance_GetTransitionInStack_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMTransitionInstance.GetTransitionInfo
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSMTransitionInfo       Transition                     (Parm, OutParm)

void USMTransitionInstance::GetTransitionInfo(struct FSMTransitionInfo* Transition)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMTransitionInstance.GetTransitionInfo"));

	USMTransitionInstance_GetTransitionInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Transition != nullptr)
		*Transition = params.Transition;
}


// Function SMSystem.SMTransitionInstance.GetTransitionIndexInStack
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USMTransitionInstance*   TransitionInstance             (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USMTransitionInstance::GetTransitionIndexInStack(class USMTransitionInstance* TransitionInstance)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMTransitionInstance.GetTransitionIndexInStack"));

	USMTransitionInstance_GetTransitionIndexInStack_Params params;
	params.TransitionInstance = TransitionInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMTransitionInstance.GetStackOwnerInstance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USMTransitionInstance*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USMTransitionInstance* USMTransitionInstance::GetStackOwnerInstance()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMTransitionInstance.GetStackOwnerInstance"));

	USMTransitionInstance_GetStackOwnerInstance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMTransitionInstance.GetSourceStateForActiveTransition
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USMStateInstance_Base*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USMStateInstance_Base* USMTransitionInstance::GetSourceStateForActiveTransition()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMTransitionInstance.GetSourceStateForActiveTransition"));

	USMTransitionInstance_GetSourceStateForActiveTransition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMTransitionInstance.GetServerTimestamp
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDateTime               ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

struct FDateTime USMTransitionInstance::GetServerTimestamp()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMTransitionInstance.GetServerTimestamp"));

	USMTransitionInstance_GetServerTimestamp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMTransitionInstance.GetRunParallel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USMTransitionInstance::GetRunParallel()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMTransitionInstance.GetRunParallel"));

	USMTransitionInstance_GetRunParallel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMTransitionInstance.GetPriorityOrder
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USMTransitionInstance::GetPriorityOrder()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMTransitionInstance.GetPriorityOrder"));

	USMTransitionInstance_GetPriorityOrder_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMTransitionInstance.GetPreviousStateInstance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USMStateInstance_Base*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USMStateInstance_Base* USMTransitionInstance::GetPreviousStateInstance()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMTransitionInstance.GetPreviousStateInstance"));

	USMTransitionInstance_GetPreviousStateInstance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMTransitionInstance.GetNextStateInstance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USMStateInstance_Base*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USMStateInstance_Base* USMTransitionInstance::GetNextStateInstance()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMTransitionInstance.GetNextStateInstance"));

	USMTransitionInstance_GetNextStateInstance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMTransitionInstance.GetEvalIfNextStateActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USMTransitionInstance::GetEvalIfNextStateActive()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMTransitionInstance.GetEvalIfNextStateActive"));

	USMTransitionInstance_GetEvalIfNextStateActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMTransitionInstance.GetDestinationStateForActiveTransition
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USMStateInstance_Base*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USMStateInstance_Base* USMTransitionInstance::GetDestinationStateForActiveTransition()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMTransitionInstance.GetDestinationStateForActiveTransition"));

	USMTransitionInstance_GetDestinationStateForActiveTransition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMTransitionInstance.GetCanEvalWithStartState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USMTransitionInstance::GetCanEvalWithStartState()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMTransitionInstance.GetCanEvalWithStartState"));

	USMTransitionInstance_GetCanEvalWithStartState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMTransitionInstance.GetCanEvaluateFromEvent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USMTransitionInstance::GetCanEvaluateFromEvent()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMTransitionInstance.GetCanEvaluateFromEvent"));

	USMTransitionInstance_GetCanEvaluateFromEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMTransitionInstance.GetCanEvaluate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USMTransitionInstance::GetCanEvaluate()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMTransitionInstance.GetCanEvaluate"));

	USMTransitionInstance_GetCanEvaluate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMTransitionInstance.GetAllTransitionStackInstances
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class USMTransitionInstance*> TransitionStackInstances       (Parm, OutParm, ZeroConstructor)

void USMTransitionInstance::GetAllTransitionStackInstances(TArray<class USMTransitionInstance*>* TransitionStackInstances)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMTransitionInstance.GetAllTransitionStackInstances"));

	USMTransitionInstance_GetAllTransitionStackInstances_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TransitionStackInstances != nullptr)
		*TransitionStackInstances = params.TransitionStackInstances;
}


// Function SMSystem.SMTransitionInstance.GetAllTransitionsInStackOfClass
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  TransitionClass                (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class USMTransitionInstance*> TransitionStackInstances       (Parm, OutParm, ZeroConstructor)
// bool                           bIncludeChildren               (Parm, ZeroConstructor, IsPlainOldData)

void USMTransitionInstance::GetAllTransitionsInStackOfClass(class UClass* TransitionClass, bool bIncludeChildren, TArray<class USMTransitionInstance*>* TransitionStackInstances)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMTransitionInstance.GetAllTransitionsInStackOfClass"));

	USMTransitionInstance_GetAllTransitionsInStackOfClass_Params params;
	params.TransitionClass = TransitionClass;
	params.bIncludeChildren = bIncludeChildren;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TransitionStackInstances != nullptr)
		*TransitionStackInstances = params.TransitionStackInstances;
}


// Function SMSystem.SMTransitionInstance.EvaluateFromManuallyBoundEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USMTransitionInstance::EvaluateFromManuallyBoundEvent()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMTransitionInstance.EvaluateFromManuallyBoundEvent"));

	USMTransitionInstance_EvaluateFromManuallyBoundEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMTransitionInstance.DoesTransitionPass
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USMTransitionInstance::DoesTransitionPass()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMTransitionInstance.DoesTransitionPass"));

	USMTransitionInstance_DoesTransitionPass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMTransitionInstance.CanEnterTransition
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USMTransitionInstance::CanEnterTransition()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMTransitionInstance.CanEnterTransition"));

	USMTransitionInstance_CanEnterTransition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMBlueprintUtils.K2_CreateStateMachineInstancePure
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                  StateMachineClass              (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Context                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInitializeNow                 (Parm, ZeroConstructor, IsPlainOldData)
// class USMInstance*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USMInstance* USMBlueprintUtils::STATIC_K2_CreateStateMachineInstancePure(class UClass* StateMachineClass, class UObject* Context, bool bInitializeNow)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMBlueprintUtils.K2_CreateStateMachineInstancePure"));

	USMBlueprintUtils_K2_CreateStateMachineInstancePure_Params params;
	params.StateMachineClass = StateMachineClass;
	params.Context = Context;
	params.bInitializeNow = bInitializeNow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMBlueprintUtils.K2_CreateStateMachineInstanceAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UClass*                  StateMachineClass              (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Context                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FLatentActionInfo       LatentInfo                     (Parm)
// class USMInstance*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USMInstance* USMBlueprintUtils::STATIC_K2_CreateStateMachineInstanceAsync(class UClass* StateMachineClass, class UObject* Context, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMBlueprintUtils.K2_CreateStateMachineInstanceAsync"));

	USMBlueprintUtils_K2_CreateStateMachineInstanceAsync_Params params;
	params.StateMachineClass = StateMachineClass;
	params.Context = Context;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMBlueprintUtils.K2_CreateStateMachineInstance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UClass*                  StateMachineClass              (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Context                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInitializeNow                 (Parm, ZeroConstructor, IsPlainOldData)
// class USMInstance*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USMInstance* USMBlueprintUtils::STATIC_K2_CreateStateMachineInstance(class UClass* StateMachineClass, class UObject* Context, bool bInitializeNow)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMBlueprintUtils.K2_CreateStateMachineInstance"));

	USMBlueprintUtils_K2_CreateStateMachineInstance_Params params;
	params.StateMachineClass = StateMachineClass;
	params.Context = Context;
	params.bInitializeNow = bInitializeNow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SMSystem.SMBlueprintUtils.CreateStateMachineInstanceFromTemplate
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                  StateMachineClass              (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Context                        (Parm, ZeroConstructor, IsPlainOldData)
// class USMInstance*             Template                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInitializeNow                 (Parm, ZeroConstructor, IsPlainOldData)
// class USMInstance*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USMInstance* USMBlueprintUtils::STATIC_CreateStateMachineInstanceFromTemplate(class UClass* StateMachineClass, class UObject* Context, class USMInstance* Template, bool bInitializeNow)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SMSystem.SMBlueprintUtils.CreateStateMachineInstanceFromTemplate"));

	USMBlueprintUtils_CreateStateMachineInstanceFromTemplate_Params params;
	params.StateMachineClass = StateMachineClass;
	params.Context = Context;
	params.Template = Template;
	params.bInitializeNow = bInitializeNow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
