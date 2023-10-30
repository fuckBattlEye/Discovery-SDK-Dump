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

// Function GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FChaosTrailingEventData> TrailingEvents                 (Parm, OutParm, ZeroConstructor, ReferenceParm)
// enum class EChaosTrailingSortMethod SortMethod                     (Parm, ZeroConstructor, IsPlainOldData)

void UChaosDestructionListener::SortTrailingEvents(enum class EChaosTrailingSortMethod SortMethod, TArray<struct FChaosTrailingEventData>* TrailingEvents)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents"));

	UChaosDestructionListener_SortTrailingEvents_Params params;
	params.SortMethod = SortMethod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TrailingEvents != nullptr)
		*TrailingEvents = params.TrailingEvents;
}


// Function GeometryCollectionEngine.ChaosDestructionListener.SortRemovalEvents
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FChaosRemovalEventData> RemovalEvents                  (Parm, OutParm, ZeroConstructor, ReferenceParm)
// enum class EChaosRemovalSortMethod SortMethod                     (Parm, ZeroConstructor, IsPlainOldData)

void UChaosDestructionListener::SortRemovalEvents(enum class EChaosRemovalSortMethod SortMethod, TArray<struct FChaosRemovalEventData>* RemovalEvents)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function GeometryCollectionEngine.ChaosDestructionListener.SortRemovalEvents"));

	UChaosDestructionListener_SortRemovalEvents_Params params;
	params.SortMethod = SortMethod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RemovalEvents != nullptr)
		*RemovalEvents = params.RemovalEvents;
}


// Function GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FChaosCollisionEventData> CollisionEvents                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// enum class EChaosCollisionSortMethod SortMethod                     (Parm, ZeroConstructor, IsPlainOldData)

void UChaosDestructionListener::SortCollisionEvents(enum class EChaosCollisionSortMethod SortMethod, TArray<struct FChaosCollisionEventData>* CollisionEvents)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents"));

	UChaosDestructionListener_SortCollisionEvents_Params params;
	params.SortMethod = SortMethod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CollisionEvents != nullptr)
		*CollisionEvents = params.CollisionEvents;
}


// Function GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FChaosBreakingEventData> BreakingEvents                 (Parm, OutParm, ZeroConstructor, ReferenceParm)
// enum class EChaosBreakingSortMethod SortMethod                     (Parm, ZeroConstructor, IsPlainOldData)

void UChaosDestructionListener::SortBreakingEvents(enum class EChaosBreakingSortMethod SortMethod, TArray<struct FChaosBreakingEventData>* BreakingEvents)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents"));

	UChaosDestructionListener_SortBreakingEvents_Params params;
	params.SortMethod = SortMethod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BreakingEvents != nullptr)
		*BreakingEvents = params.BreakingEvents;
}


// Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FChaosTrailingEventRequestSettings InSettings                     (ConstParm, Parm, OutParm, ReferenceParm)

void UChaosDestructionListener::SetTrailingEventRequestSettings(const struct FChaosTrailingEventRequestSettings& InSettings)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings"));

	UChaosDestructionListener_SetTrailingEventRequestSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bIsEnabled                     (Parm, ZeroConstructor, IsPlainOldData)

void UChaosDestructionListener::SetTrailingEventEnabled(bool bIsEnabled)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventEnabled"));

	UChaosDestructionListener_SetTrailingEventEnabled_Params params;
	params.bIsEnabled = bIsEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeometryCollectionEngine.ChaosDestructionListener.SetRemovalEventRequestSettings
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FChaosRemovalEventRequestSettings InSettings                     (ConstParm, Parm, OutParm, ReferenceParm)

void UChaosDestructionListener::SetRemovalEventRequestSettings(const struct FChaosRemovalEventRequestSettings& InSettings)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function GeometryCollectionEngine.ChaosDestructionListener.SetRemovalEventRequestSettings"));

	UChaosDestructionListener_SetRemovalEventRequestSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeometryCollectionEngine.ChaosDestructionListener.SetRemovalEventEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bIsEnabled                     (Parm, ZeroConstructor, IsPlainOldData)

void UChaosDestructionListener::SetRemovalEventEnabled(bool bIsEnabled)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function GeometryCollectionEngine.ChaosDestructionListener.SetRemovalEventEnabled"));

	UChaosDestructionListener_SetRemovalEventEnabled_Params params;
	params.bIsEnabled = bIsEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventRequestSettings
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FChaosCollisionEventRequestSettings InSettings                     (ConstParm, Parm, OutParm, ReferenceParm)

void UChaosDestructionListener::SetCollisionEventRequestSettings(const struct FChaosCollisionEventRequestSettings& InSettings)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventRequestSettings"));

	UChaosDestructionListener_SetCollisionEventRequestSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bIsEnabled                     (Parm, ZeroConstructor, IsPlainOldData)

void UChaosDestructionListener::SetCollisionEventEnabled(bool bIsEnabled)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventEnabled"));

	UChaosDestructionListener_SetCollisionEventEnabled_Params params;
	params.bIsEnabled = bIsEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventRequestSettings
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FChaosBreakingEventRequestSettings InSettings                     (ConstParm, Parm, OutParm, ReferenceParm)

void UChaosDestructionListener::SetBreakingEventRequestSettings(const struct FChaosBreakingEventRequestSettings& InSettings)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventRequestSettings"));

	UChaosDestructionListener_SetBreakingEventRequestSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bIsEnabled                     (Parm, ZeroConstructor, IsPlainOldData)

void UChaosDestructionListener::SetBreakingEventEnabled(bool bIsEnabled)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventEnabled"));

	UChaosDestructionListener_SetBreakingEventEnabled_Params params;
	params.bIsEnabled = bIsEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeometryCollectionEngine.ChaosDestructionListener.RemoveGeometryCollectionActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AGeometryCollectionActor* GeometryCollectionActor        (Parm, ZeroConstructor, IsPlainOldData)

void UChaosDestructionListener::RemoveGeometryCollectionActor(class AGeometryCollectionActor* GeometryCollectionActor)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function GeometryCollectionEngine.ChaosDestructionListener.RemoveGeometryCollectionActor"));

	UChaosDestructionListener_RemoveGeometryCollectionActor_Params params;
	params.GeometryCollectionActor = GeometryCollectionActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AChaosSolverActor*       ChaosSolverActor               (Parm, ZeroConstructor, IsPlainOldData)

void UChaosDestructionListener::RemoveChaosSolverActor(class AChaosSolverActor* ChaosSolverActor)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor"));

	UChaosDestructionListener_RemoveChaosSolverActor_Params params;
	params.ChaosSolverActor = ChaosSolverActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeometryCollectionEngine.ChaosDestructionListener.IsEventListening
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UChaosDestructionListener::IsEventListening()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function GeometryCollectionEngine.ChaosDestructionListener.IsEventListening"));

	UChaosDestructionListener_IsEventListening_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GeometryCollectionEngine.ChaosDestructionListener.AddGeometryCollectionActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AGeometryCollectionActor* GeometryCollectionActor        (Parm, ZeroConstructor, IsPlainOldData)

void UChaosDestructionListener::AddGeometryCollectionActor(class AGeometryCollectionActor* GeometryCollectionActor)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function GeometryCollectionEngine.ChaosDestructionListener.AddGeometryCollectionActor"));

	UChaosDestructionListener_AddGeometryCollectionActor_Params params;
	params.GeometryCollectionActor = GeometryCollectionActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AChaosSolverActor*       ChaosSolverActor               (Parm, ZeroConstructor, IsPlainOldData)

void UChaosDestructionListener::AddChaosSolverActor(class AChaosSolverActor* ChaosSolverActor)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor"));

	UChaosDestructionListener_AddChaosSolverActor_Params params;
	params.ChaosSolverActor = ChaosSolverActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 Start                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 End                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGeometryCollectionActor::RaycastSingle(const struct FVector& Start, const struct FVector& End, struct FHitResult* OutHit)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle"));

	AGeometryCollectionActor_RaycastSingle_Params params;
	params.Start = Start;
	params.End = End;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyRemovals
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNewNotifyRemovals             (Parm, ZeroConstructor, IsPlainOldData)

void UGeometryCollectionComponent::SetNotifyRemovals(bool bNewNotifyRemovals)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyRemovals"));

	UGeometryCollectionComponent_SetNotifyRemovals_Params params;
	params.bNewNotifyRemovals = bNewNotifyRemovals;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNewNotifyBreaks               (Parm, ZeroConstructor, IsPlainOldData)

void UGeometryCollectionComponent::SetNotifyBreaks(bool bNewNotifyBreaks)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks"));

	UGeometryCollectionComponent_SetNotifyBreaks_Params params;
	params.bNewNotifyBreaks = bNewNotifyBreaks;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeometryCollectionEngine.GeometryCollectionComponent.ReceivePhysicsCollision
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FChaosPhysicsCollisionInfo CollisionInfo                  (ConstParm, Parm, OutParm, ReferenceParm)

void UGeometryCollectionComponent::ReceivePhysicsCollision(const struct FChaosPhysicsCollisionInfo& CollisionInfo)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function GeometryCollectionEngine.GeometryCollectionComponent.ReceivePhysicsCollision"));

	UGeometryCollectionComponent_ReceivePhysicsCollision_Params params;
	params.CollisionInfo = CollisionInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeometryCollectionEngine.GeometryCollectionComponent.OnRep_RepData
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FGeometryCollectionRepData OldData                        (ConstParm, Parm, OutParm, ReferenceParm)

void UGeometryCollectionComponent::OnRep_RepData(const struct FGeometryCollectionRepData& OldData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function GeometryCollectionEngine.GeometryCollectionComponent.OnRep_RepData"));

	UGeometryCollectionComponent_OnRep_RepData_Params params;
	params.OldData = OldData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsStateChange__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UGeometryCollectionComponent* FracturedComponent             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGeometryCollectionComponent::NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(class UGeometryCollectionComponent* FracturedComponent)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsStateChange__DelegateSignature"));

	UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsStateChange__DelegateSignature_Params params;
	params.FracturedComponent = FracturedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UGeometryCollectionComponent* FracturedComponent             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGeometryCollectionComponent::NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(class UGeometryCollectionComponent* FracturedComponent)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature"));

	UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature_Params params;
	params.FracturedComponent = FracturedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeometryCollectionEngine.GeometryCollectionComponent.NetAbandonCluster
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// int                            TransformIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void UGeometryCollectionComponent::NetAbandonCluster(int TransformIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function GeometryCollectionEngine.GeometryCollectionComponent.NetAbandonCluster"));

	UGeometryCollectionComponent_NetAbandonCluster_Params params;
	params.TransformIndex = TransformIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyPhysicsField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData)
// enum class EGeometryCollectionPhysicsTypeEnum Target                         (Parm, ZeroConstructor, IsPlainOldData)
// class UFieldSystemMetaData*    MetaData                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UFieldNodeBase*          Field                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGeometryCollectionComponent::ApplyPhysicsField(bool Enabled, enum class EGeometryCollectionPhysicsTypeEnum Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyPhysicsField"));

	UGeometryCollectionComponent_ApplyPhysicsField_Params params;
	params.Enabled = Enabled;
	params.Target = Target;
	params.MetaData = MetaData;
	params.Field = Field;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyKinematicField
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Position                       (Parm, ZeroConstructor, IsPlainOldData)

void UGeometryCollectionComponent::ApplyKinematicField(float Radius, const struct FVector& Position)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyKinematicField"));

	UGeometryCollectionComponent_ApplyKinematicField_Params params;
	params.Radius = Radius;
	params.Position = Position;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
