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

// Function EmbarkReplicatedSubobjects.ReplicatedSubobject.SetUsesReplicationKeyForReplication
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNewUserRepKeyForReplication   (Parm, ZeroConstructor, IsPlainOldData)

void UReplicatedSubobject::SetUsesReplicationKeyForReplication(bool bNewUserRepKeyForReplication)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkReplicatedSubobjects.ReplicatedSubobject.SetUsesReplicationKeyForReplication"));

	UReplicatedSubobject_SetUsesReplicationKeyForReplication_Params params;
	params.bNewUserRepKeyForReplication = bNewUserRepKeyForReplication;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkReplicatedSubobjects.ReplicatedSubobject.SetReplicationKeyDirty
// (Final, Native, Public, BlueprintCallable)

void UReplicatedSubobject::SetReplicationKeyDirty()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkReplicatedSubobjects.ReplicatedSubobject.SetReplicationKeyDirty"));

	UReplicatedSubobject_SetReplicationKeyDirty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkReplicatedSubobjects.ReplicatedSubobject.SetReplicatedSubobjectToPropagateReplicationKeyDirtyTo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UReplicatedSubobject*    TargtReplicatedSubobject       (Parm, ZeroConstructor, IsPlainOldData)

void UReplicatedSubobject::SetReplicatedSubobjectToPropagateReplicationKeyDirtyTo(class UReplicatedSubobject* TargtReplicatedSubobject)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkReplicatedSubobjects.ReplicatedSubobject.SetReplicatedSubobjectToPropagateReplicationKeyDirtyTo"));

	UReplicatedSubobject_SetReplicatedSubobjectToPropagateReplicationKeyDirtyTo_Params params;
	params.TargtReplicatedSubobject = TargtReplicatedSubobject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkReplicatedSubobjects.ReplicatedSubobject.SetOuter
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UObject*                 Outer                          (Parm, ZeroConstructor, IsPlainOldData)

void UReplicatedSubobject::SetOuter(class UObject* Outer)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkReplicatedSubobjects.ReplicatedSubobject.SetOuter"));

	UReplicatedSubobject_SetOuter_Params params;
	params.Outer = Outer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkReplicatedSubobjects.ReplicatedSubobject.SetActorComponentToPropagateReplicationKeyDirtyTo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UActorComponent*         ActorComponent                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UReplicatedSubobject::SetActorComponentToPropagateReplicationKeyDirtyTo(class UActorComponent* ActorComponent)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkReplicatedSubobjects.ReplicatedSubobject.SetActorComponentToPropagateReplicationKeyDirtyTo"));

	UReplicatedSubobject_SetActorComponentToPropagateReplicationKeyDirtyTo_Params params;
	params.ActorComponent = ActorComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkReplicatedSubobjects.ReplicatedSubobject.ScriptReplicateSubobjects
// (Event, Protected, BlueprintEvent)

void UReplicatedSubobject::ScriptReplicateSubobjects()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkReplicatedSubobjects.ReplicatedSubobject.ScriptReplicateSubobjects"));

	UReplicatedSubobject_ScriptReplicateSubobjects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkReplicatedSubobjects.ReplicatedSubobject.PostReplication
// (Event, Protected, BlueprintEvent)

void UReplicatedSubobject::PostReplication()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkReplicatedSubobjects.ReplicatedSubobject.PostReplication"));

	UReplicatedSubobject_PostReplication_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkReplicatedSubobjects.ReplicatedSubobject.GetUsesReplicationKeyForReplication
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UReplicatedSubobject::GetUsesReplicationKeyForReplication()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkReplicatedSubobjects.ReplicatedSubobject.GetUsesReplicationKeyForReplication"));

	UReplicatedSubobject_GetUsesReplicationKeyForReplication_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkReplicatedSubobjects.ReplicatedSubobject.AddObjectToReplicate
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UReplicatedSubobject*    ObjectToReplicate              (Parm, ZeroConstructor, IsPlainOldData)

void UReplicatedSubobject::AddObjectToReplicate(class UReplicatedSubobject* ObjectToReplicate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkReplicatedSubobjects.ReplicatedSubobject.AddObjectToReplicate"));

	UReplicatedSubobject_AddObjectToReplicate_Params params;
	params.ObjectToReplicate = ObjectToReplicate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkReplicatedSubobjects.ActorComponentReplicatedSubobjects.ScriptReplicateSubobjects
// (Event, Protected, BlueprintEvent)

void UActorComponentReplicatedSubobjects::ScriptReplicateSubobjects()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkReplicatedSubobjects.ActorComponentReplicatedSubobjects.ScriptReplicateSubobjects"));

	UActorComponentReplicatedSubobjects_ScriptReplicateSubobjects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkReplicatedSubobjects.ActorComponentReplicatedSubobjects.AddObjectToReplicate
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UReplicatedSubobject*    ObjectToReplicate              (Parm, ZeroConstructor, IsPlainOldData)

void UActorComponentReplicatedSubobjects::AddObjectToReplicate(class UReplicatedSubobject* ObjectToReplicate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkReplicatedSubobjects.ActorComponentReplicatedSubobjects.AddObjectToReplicate"));

	UActorComponentReplicatedSubobjects_AddObjectToReplicate_Params params;
	params.ObjectToReplicate = ObjectToReplicate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkReplicatedSubobjects.ActorReplicatedSubobjects.ScriptReplicateSubobjects
// (Event, Protected, BlueprintEvent)

void AActorReplicatedSubobjects::ScriptReplicateSubobjects()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkReplicatedSubobjects.ActorReplicatedSubobjects.ScriptReplicateSubobjects"));

	AActorReplicatedSubobjects_ScriptReplicateSubobjects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkReplicatedSubobjects.ActorReplicatedSubobjects.AddObjectToReplicate
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UReplicatedSubobject*    ObjectToReplicate              (Parm, ZeroConstructor, IsPlainOldData)

void AActorReplicatedSubobjects::AddObjectToReplicate(class UReplicatedSubobject* ObjectToReplicate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkReplicatedSubobjects.ActorReplicatedSubobjects.AddObjectToReplicate"));

	AActorReplicatedSubobjects_AddObjectToReplicate_Params params;
	params.ObjectToReplicate = ObjectToReplicate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
