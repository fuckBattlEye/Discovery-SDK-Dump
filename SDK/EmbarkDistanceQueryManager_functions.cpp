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

// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.UpdateTimers
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkDistanceQueryManager::UpdateTimers(float DeltaTime)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.UpdateTimers"));

	UEmbarkDistanceQueryManager_UpdateTimers_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.UpdateQueries
// (Final, Native, Private, BlueprintCallable)

void UEmbarkDistanceQueryManager::UpdateQueries()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.UpdateQueries"));

	UEmbarkDistanceQueryManager_UpdateQueries_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.SetQueryStickiness
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            QueryID                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          Stickiness                     (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkDistanceQueryManager::SetQueryStickiness(int QueryID, float Stickiness)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.SetQueryStickiness"));

	UEmbarkDistanceQueryManager_SetQueryStickiness_Params params;
	params.QueryID = QueryID;
	params.Stickiness = Stickiness;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.SetQueryResultsCapacity
// (Final, Native, Public)
// Parameters:
// int                            Capacity                       (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkDistanceQueryManager::SetQueryResultsCapacity(int Capacity)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.SetQueryResultsCapacity"));

	UEmbarkDistanceQueryManager_SetQueryResultsCapacity_Params params;
	params.Capacity = Capacity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.SetQueryEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            QueryID                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkDistanceQueryManager::SetQueryEnabled(int QueryID, bool bEnabled)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.SetQueryEnabled"));

	UEmbarkDistanceQueryManager_SetQueryEnabled_Params params;
	params.QueryID = QueryID;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.SetQueryDistance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            QueryID                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          DistanceToCheck                (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkDistanceQueryManager::SetQueryDistance(int QueryID, float DistanceToCheck)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.SetQueryDistance"));

	UEmbarkDistanceQueryManager_SetQueryDistance_Params params;
	params.QueryID = QueryID;
	params.DistanceToCheck = DistanceToCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.SetQueryCallbackFlags
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            QueryID                        (Parm, ZeroConstructor, IsPlainOldData)
// enum class EEmbarkDistanceQueryCallbackFlags CallbackFlags                  (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkDistanceQueryManager::SetQueryCallbackFlags(int QueryID, enum class EEmbarkDistanceQueryCallbackFlags CallbackFlags)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.SetQueryCallbackFlags"));

	UEmbarkDistanceQueryManager_SetQueryCallbackFlags_Params params;
	params.QueryID = QueryID;
	params.CallbackFlags = CallbackFlags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.SetQueryAtomic
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            QueryID                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAtomic                        (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkDistanceQueryManager::SetQueryAtomic(int QueryID, bool bAtomic)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.SetQueryAtomic"));

	UEmbarkDistanceQueryManager_SetQueryAtomic_Params params;
	params.QueryID = QueryID;
	params.bAtomic = bAtomic;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.SetLocationDataEx
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UClass*                  GroupClass                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 NewLocation                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          DistanceToCheck                (Parm, ZeroConstructor, IsPlainOldData)
// float                          Stickiness                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            Specifier                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Vector                         (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkDistanceQueryManager::SetLocationDataEx(class UClass* GroupClass, const struct FVector& Location, const struct FVector& NewLocation, float DistanceToCheck, float Stickiness, int Specifier, float Radius, const struct FVector& Vector)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.SetLocationDataEx"));

	UEmbarkDistanceQueryManager_SetLocationDataEx_Params params;
	params.GroupClass = GroupClass;
	params.Location = Location;
	params.NewLocation = NewLocation;
	params.DistanceToCheck = DistanceToCheck;
	params.Stickiness = Stickiness;
	params.Specifier = Specifier;
	params.Radius = Radius;
	params.Vector = Vector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.SetLocationData
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UClass*                  GroupClass                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          DistanceToCheck                (Parm, ZeroConstructor, IsPlainOldData)
// float                          Stickiness                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            Specifier                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Vector                         (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkDistanceQueryManager::SetLocationData(class UClass* GroupClass, const struct FVector& Location, float DistanceToCheck, float Stickiness, int Specifier, float Radius, const struct FVector& Vector)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.SetLocationData"));

	UEmbarkDistanceQueryManager_SetLocationData_Params params;
	params.GroupClass = GroupClass;
	params.Location = Location;
	params.DistanceToCheck = DistanceToCheck;
	params.Stickiness = Stickiness;
	params.Specifier = Specifier;
	params.Radius = Radius;
	params.Vector = Vector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.SetComponentData
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UClass*                  GroupClass                     (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          DistanceToCheck                (Parm, ZeroConstructor, IsPlainOldData)
// float                          Stickiness                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            Specifier                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Vector                         (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkDistanceQueryManager::SetComponentData(class UClass* GroupClass, class USceneComponent* Component, float DistanceToCheck, float Stickiness, int Specifier, float Radius, const struct FVector& Vector)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.SetComponentData"));

	UEmbarkDistanceQueryManager_SetComponentData_Params params;
	params.GroupClass = GroupClass;
	params.Component = Component;
	params.DistanceToCheck = DistanceToCheck;
	params.Stickiness = Stickiness;
	params.Specifier = Specifier;
	params.Radius = Radius;
	params.Vector = Vector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.SetCapsuleLocationDataEx
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UClass*                  GroupClass                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 NewLocation                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          HalfHeight                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FQuat                   Rotation                       (Parm, IsPlainOldData)
// float                          DistanceToCheck                (Parm, ZeroConstructor, IsPlainOldData)
// float                          Stickiness                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            Specifier                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkDistanceQueryManager::SetCapsuleLocationDataEx(class UClass* GroupClass, const struct FVector& Location, const struct FVector& NewLocation, float HalfHeight, const struct FQuat& Rotation, float DistanceToCheck, float Stickiness, int Specifier, float Radius)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.SetCapsuleLocationDataEx"));

	UEmbarkDistanceQueryManager_SetCapsuleLocationDataEx_Params params;
	params.GroupClass = GroupClass;
	params.Location = Location;
	params.NewLocation = NewLocation;
	params.HalfHeight = HalfHeight;
	params.Rotation = Rotation;
	params.DistanceToCheck = DistanceToCheck;
	params.Stickiness = Stickiness;
	params.Specifier = Specifier;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.SetCapsuleLocationData
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UClass*                  GroupClass                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          HalfHeight                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FQuat                   Rotation                       (Parm, IsPlainOldData)
// float                          DistanceToCheck                (Parm, ZeroConstructor, IsPlainOldData)
// float                          Stickiness                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            Specifier                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkDistanceQueryManager::SetCapsuleLocationData(class UClass* GroupClass, const struct FVector& Location, float HalfHeight, const struct FQuat& Rotation, float DistanceToCheck, float Stickiness, int Specifier, float Radius)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.SetCapsuleLocationData"));

	UEmbarkDistanceQueryManager_SetCapsuleLocationData_Params params;
	params.GroupClass = GroupClass;
	params.Location = Location;
	params.HalfHeight = HalfHeight;
	params.Rotation = Rotation;
	params.DistanceToCheck = DistanceToCheck;
	params.Stickiness = Stickiness;
	params.Specifier = Specifier;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.SetCapsuleComponentData
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UClass*                  GroupClass                     (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          HalfHeight                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FQuat                   Rotation                       (Parm, IsPlainOldData)
// float                          DistanceToCheck                (Parm, ZeroConstructor, IsPlainOldData)
// float                          Stickiness                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            Specifier                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkDistanceQueryManager::SetCapsuleComponentData(class UClass* GroupClass, class USceneComponent* Component, float HalfHeight, const struct FQuat& Rotation, float DistanceToCheck, float Stickiness, int Specifier, float Radius)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.SetCapsuleComponentData"));

	UEmbarkDistanceQueryManager_SetCapsuleComponentData_Params params;
	params.GroupClass = GroupClass;
	params.Component = Component;
	params.HalfHeight = HalfHeight;
	params.Rotation = Rotation;
	params.DistanceToCheck = DistanceToCheck;
	params.Stickiness = Stickiness;
	params.Specifier = Specifier;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.SetCapsuleActorData
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UClass*                  GroupClass                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          HalfHeight                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FQuat                   Rotation                       (Parm, IsPlainOldData)
// float                          DistanceToCheck                (Parm, ZeroConstructor, IsPlainOldData)
// float                          Stickiness                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            Specifier                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkDistanceQueryManager::SetCapsuleActorData(class UClass* GroupClass, class AActor* Actor, float HalfHeight, const struct FQuat& Rotation, float DistanceToCheck, float Stickiness, int Specifier, float Radius)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.SetCapsuleActorData"));

	UEmbarkDistanceQueryManager_SetCapsuleActorData_Params params;
	params.GroupClass = GroupClass;
	params.Actor = Actor;
	params.HalfHeight = HalfHeight;
	params.Rotation = Rotation;
	params.DistanceToCheck = DistanceToCheck;
	params.Stickiness = Stickiness;
	params.Specifier = Specifier;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.SetActorData
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UClass*                  GroupClass                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          DistanceToCheck                (Parm, ZeroConstructor, IsPlainOldData)
// float                          Stickiness                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            Specifier                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Vector                         (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkDistanceQueryManager::SetActorData(class UClass* GroupClass, class AActor* Actor, float DistanceToCheck, float Stickiness, int Specifier, float Radius, const struct FVector& Vector)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.SetActorData"));

	UEmbarkDistanceQueryManager_SetActorData_Params params;
	params.GroupClass = GroupClass;
	params.Actor = Actor;
	params.DistanceToCheck = DistanceToCheck;
	params.Stickiness = Stickiness;
	params.Specifier = Specifier;
	params.Radius = Radius;
	params.Vector = Vector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.RemoveLocation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UClass*                  GroupClass                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            Specifier                      (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkDistanceQueryManager::RemoveLocation(class UClass* GroupClass, const struct FVector& Location, int Specifier)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.RemoveLocation"));

	UEmbarkDistanceQueryManager_RemoveLocation_Params params;
	params.GroupClass = GroupClass;
	params.Location = Location;
	params.Specifier = Specifier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.RemoveComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  GroupClass                     (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            Specifier                      (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkDistanceQueryManager::RemoveComponent(class UClass* GroupClass, class USceneComponent* Component, int Specifier)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.RemoveComponent"));

	UEmbarkDistanceQueryManager_RemoveComponent_Params params;
	params.GroupClass = GroupClass;
	params.Component = Component;
	params.Specifier = Specifier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.RemoveActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  GroupClass                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Specifier                      (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkDistanceQueryManager::RemoveActor(class UClass* GroupClass, class AActor* Actor, int Specifier)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.RemoveActor"));

	UEmbarkDistanceQueryManager_RemoveActor_Params params;
	params.GroupClass = GroupClass;
	params.Actor = Actor;
	params.Specifier = Specifier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.MakeQuery
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  SourceGroupClass               (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  TargetGroupClass               (Parm, ZeroConstructor, IsPlainOldData)
// float                          DistanceToCheck                (Parm, ZeroConstructor, IsPlainOldData)
// float                          Stickiness                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAtomic                        (Parm, ZeroConstructor, IsPlainOldData)
// enum class EEmbarkDistanceQueryCallbackFlags CallbackFlags                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UEmbarkDistanceQueryManager::MakeQuery(class UClass* SourceGroupClass, class UClass* TargetGroupClass, float DistanceToCheck, float Stickiness, bool bEnabled, bool bAtomic, enum class EEmbarkDistanceQueryCallbackFlags CallbackFlags)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.MakeQuery"));

	UEmbarkDistanceQueryManager_MakeQuery_Params params;
	params.SourceGroupClass = SourceGroupClass;
	params.TargetGroupClass = TargetGroupClass;
	params.DistanceToCheck = DistanceToCheck;
	params.Stickiness = Stickiness;
	params.bEnabled = bEnabled;
	params.bAtomic = bAtomic;
	params.CallbackFlags = CallbackFlags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.MakeQueries
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UClass*                  SourceGroupClass               (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UClass*>          TargetGroupClasses             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          DistanceToCheck                (Parm, ZeroConstructor, IsPlainOldData)
// float                          Stickiness                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAtomic                        (Parm, ZeroConstructor, IsPlainOldData)
// enum class EEmbarkDistanceQueryCallbackFlags CallbackFlags                  (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkDistanceQueryManager::MakeQueries(class UClass* SourceGroupClass, TArray<class UClass*> TargetGroupClasses, float DistanceToCheck, float Stickiness, bool bEnabled, bool bAtomic, enum class EEmbarkDistanceQueryCallbackFlags CallbackFlags)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.MakeQueries"));

	UEmbarkDistanceQueryManager_MakeQueries_Params params;
	params.SourceGroupClass = SourceGroupClass;
	params.TargetGroupClasses = TargetGroupClasses;
	params.DistanceToCheck = DistanceToCheck;
	params.Stickiness = Stickiness;
	params.bEnabled = bEnabled;
	params.bAtomic = bAtomic;
	params.CallbackFlags = CallbackFlags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.GetQueryKeySpecifier
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FEmbarkDistanceQueryKey Key                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UEmbarkDistanceQueryManager::STATIC_GetQueryKeySpecifier(const struct FEmbarkDistanceQueryKey& Key)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.GetQueryKeySpecifier"));

	UEmbarkDistanceQueryManager_GetQueryKeySpecifier_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.GetQueryKeyName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FEmbarkDistanceQueryKey Key                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UEmbarkDistanceQueryManager::STATIC_GetQueryKeyName(const struct FEmbarkDistanceQueryKey& Key)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.GetQueryKeyName"));

	UEmbarkDistanceQueryManager_GetQueryKeyName_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.GetQueryKeyLocation
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FEmbarkDistanceQueryKey Key                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UEmbarkDistanceQueryManager::STATIC_GetQueryKeyLocation(const struct FEmbarkDistanceQueryKey& Key)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.GetQueryKeyLocation"));

	UEmbarkDistanceQueryManager_GetQueryKeyLocation_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.GetQueryKeyComponent
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FEmbarkDistanceQueryKey Key                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class USceneComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USceneComponent* UEmbarkDistanceQueryManager::STATIC_GetQueryKeyComponent(const struct FEmbarkDistanceQueryKey& Key)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.GetQueryKeyComponent"));

	UEmbarkDistanceQueryManager_GetQueryKeyComponent_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.GetQueryKeyActor
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FEmbarkDistanceQueryKey Key                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UEmbarkDistanceQueryManager::STATIC_GetQueryKeyActor(const struct FEmbarkDistanceQueryKey& Key)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.GetQueryKeyActor"));

	UEmbarkDistanceQueryManager_GetQueryKeyActor_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.GetDistanceQueryManagerWithContext
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UEmbarkDistanceQueryManager* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UEmbarkDistanceQueryManager* UEmbarkDistanceQueryManager::STATIC_GetDistanceQueryManagerWithContext(class UObject* WorldContextObject)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.GetDistanceQueryManagerWithContext"));

	UEmbarkDistanceQueryManager_GetDistanceQueryManagerWithContext_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.GetDistanceQueryManager
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UEmbarkDistanceQueryManager* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UEmbarkDistanceQueryManager* UEmbarkDistanceQueryManager::STATIC_GetDistanceQueryManager(class UObject* WorldContextObject)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.GetDistanceQueryManager"));

	UEmbarkDistanceQueryManager_GetDistanceQueryManager_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.Dump
// (Final, Native, Public, BlueprintCallable)

void UEmbarkDistanceQueryManager::Dump()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.Dump"));

	UEmbarkDistanceQueryManager_Dump_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.AddLocationWithCallback
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UClass*                  GroupClass                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FScriptDelegate         Callback                       (Parm, ZeroConstructor)
// float                          DistanceToCheck                (Parm, ZeroConstructor, IsPlainOldData)
// float                          Stickiness                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            Specifier                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Vector                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeToLive                     (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkDistanceQueryManager::AddLocationWithCallback(class UClass* GroupClass, const struct FVector& Location, const struct FScriptDelegate& Callback, float DistanceToCheck, float Stickiness, int Specifier, float Radius, const struct FVector& Vector, float TimeToLive)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.AddLocationWithCallback"));

	UEmbarkDistanceQueryManager_AddLocationWithCallback_Params params;
	params.GroupClass = GroupClass;
	params.Location = Location;
	params.Callback = Callback;
	params.DistanceToCheck = DistanceToCheck;
	params.Stickiness = Stickiness;
	params.Specifier = Specifier;
	params.Radius = Radius;
	params.Vector = Vector;
	params.TimeToLive = TimeToLive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.AddLocation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UClass*                  GroupClass                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          DistanceToCheck                (Parm, ZeroConstructor, IsPlainOldData)
// float                          Stickiness                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            Specifier                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Vector                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeToLive                     (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkDistanceQueryManager::AddLocation(class UClass* GroupClass, const struct FVector& Location, float DistanceToCheck, float Stickiness, int Specifier, float Radius, const struct FVector& Vector, float TimeToLive)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.AddLocation"));

	UEmbarkDistanceQueryManager_AddLocation_Params params;
	params.GroupClass = GroupClass;
	params.Location = Location;
	params.DistanceToCheck = DistanceToCheck;
	params.Stickiness = Stickiness;
	params.Specifier = Specifier;
	params.Radius = Radius;
	params.Vector = Vector;
	params.TimeToLive = TimeToLive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.AddComponentWithCallback
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UClass*                  GroupClass                     (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FScriptDelegate         Callback                       (Parm, ZeroConstructor)
// float                          DistanceToCheck                (Parm, ZeroConstructor, IsPlainOldData)
// float                          Stickiness                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            Specifier                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Vector                         (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkDistanceQueryManager::AddComponentWithCallback(class UClass* GroupClass, class USceneComponent* Component, const struct FScriptDelegate& Callback, float DistanceToCheck, float Stickiness, int Specifier, float Radius, const struct FVector& Vector)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.AddComponentWithCallback"));

	UEmbarkDistanceQueryManager_AddComponentWithCallback_Params params;
	params.GroupClass = GroupClass;
	params.Component = Component;
	params.Callback = Callback;
	params.DistanceToCheck = DistanceToCheck;
	params.Stickiness = Stickiness;
	params.Specifier = Specifier;
	params.Radius = Radius;
	params.Vector = Vector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.AddComponent
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UClass*                  GroupClass                     (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          DistanceToCheck                (Parm, ZeroConstructor, IsPlainOldData)
// float                          Stickiness                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            Specifier                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Vector                         (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkDistanceQueryManager::AddComponent(class UClass* GroupClass, class USceneComponent* Component, float DistanceToCheck, float Stickiness, int Specifier, float Radius, const struct FVector& Vector)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.AddComponent"));

	UEmbarkDistanceQueryManager_AddComponent_Params params;
	params.GroupClass = GroupClass;
	params.Component = Component;
	params.DistanceToCheck = DistanceToCheck;
	params.Stickiness = Stickiness;
	params.Specifier = Specifier;
	params.Radius = Radius;
	params.Vector = Vector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.AddCapsuleLocationWithCallback
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UClass*                  GroupClass                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          HalfHeight                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FQuat                   Rotation                       (Parm, IsPlainOldData)
// struct FScriptDelegate         Callback                       (Parm, ZeroConstructor)
// float                          DistanceToCheck                (Parm, ZeroConstructor, IsPlainOldData)
// float                          Stickiness                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            Specifier                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeToLive                     (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkDistanceQueryManager::AddCapsuleLocationWithCallback(class UClass* GroupClass, const struct FVector& Location, float HalfHeight, const struct FQuat& Rotation, const struct FScriptDelegate& Callback, float DistanceToCheck, float Stickiness, int Specifier, float Radius, float TimeToLive)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.AddCapsuleLocationWithCallback"));

	UEmbarkDistanceQueryManager_AddCapsuleLocationWithCallback_Params params;
	params.GroupClass = GroupClass;
	params.Location = Location;
	params.HalfHeight = HalfHeight;
	params.Rotation = Rotation;
	params.Callback = Callback;
	params.DistanceToCheck = DistanceToCheck;
	params.Stickiness = Stickiness;
	params.Specifier = Specifier;
	params.Radius = Radius;
	params.TimeToLive = TimeToLive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.AddCapsuleLocation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UClass*                  GroupClass                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          HalfHeight                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FQuat                   Rotation                       (Parm, IsPlainOldData)
// float                          DistanceToCheck                (Parm, ZeroConstructor, IsPlainOldData)
// float                          Stickiness                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            Specifier                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeToLive                     (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkDistanceQueryManager::AddCapsuleLocation(class UClass* GroupClass, const struct FVector& Location, float HalfHeight, const struct FQuat& Rotation, float DistanceToCheck, float Stickiness, int Specifier, float Radius, float TimeToLive)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.AddCapsuleLocation"));

	UEmbarkDistanceQueryManager_AddCapsuleLocation_Params params;
	params.GroupClass = GroupClass;
	params.Location = Location;
	params.HalfHeight = HalfHeight;
	params.Rotation = Rotation;
	params.DistanceToCheck = DistanceToCheck;
	params.Stickiness = Stickiness;
	params.Specifier = Specifier;
	params.Radius = Radius;
	params.TimeToLive = TimeToLive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.AddCapsuleComponentWithCallback
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UClass*                  GroupClass                     (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          HalfHeight                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FQuat                   Rotation                       (Parm, IsPlainOldData)
// struct FScriptDelegate         Callback                       (Parm, ZeroConstructor)
// float                          DistanceToCheck                (Parm, ZeroConstructor, IsPlainOldData)
// float                          Stickiness                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            Specifier                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkDistanceQueryManager::AddCapsuleComponentWithCallback(class UClass* GroupClass, class USceneComponent* Component, float HalfHeight, const struct FQuat& Rotation, const struct FScriptDelegate& Callback, float DistanceToCheck, float Stickiness, int Specifier, float Radius)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.AddCapsuleComponentWithCallback"));

	UEmbarkDistanceQueryManager_AddCapsuleComponentWithCallback_Params params;
	params.GroupClass = GroupClass;
	params.Component = Component;
	params.HalfHeight = HalfHeight;
	params.Rotation = Rotation;
	params.Callback = Callback;
	params.DistanceToCheck = DistanceToCheck;
	params.Stickiness = Stickiness;
	params.Specifier = Specifier;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.AddCapsuleComponent
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UClass*                  GroupClass                     (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          HalfHeight                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FQuat                   Rotation                       (Parm, IsPlainOldData)
// float                          DistanceToCheck                (Parm, ZeroConstructor, IsPlainOldData)
// float                          Stickiness                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            Specifier                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkDistanceQueryManager::AddCapsuleComponent(class UClass* GroupClass, class USceneComponent* Component, float HalfHeight, const struct FQuat& Rotation, float DistanceToCheck, float Stickiness, int Specifier, float Radius)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.AddCapsuleComponent"));

	UEmbarkDistanceQueryManager_AddCapsuleComponent_Params params;
	params.GroupClass = GroupClass;
	params.Component = Component;
	params.HalfHeight = HalfHeight;
	params.Rotation = Rotation;
	params.DistanceToCheck = DistanceToCheck;
	params.Stickiness = Stickiness;
	params.Specifier = Specifier;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.AddCapsuleActorWithCallback
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UClass*                  GroupClass                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          HalfHeight                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FQuat                   Rotation                       (Parm, IsPlainOldData)
// struct FScriptDelegate         Callback                       (Parm, ZeroConstructor)
// float                          DistanceToCheck                (Parm, ZeroConstructor, IsPlainOldData)
// float                          Stickiness                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            Specifier                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkDistanceQueryManager::AddCapsuleActorWithCallback(class UClass* GroupClass, class AActor* Actor, float HalfHeight, const struct FQuat& Rotation, const struct FScriptDelegate& Callback, float DistanceToCheck, float Stickiness, int Specifier, float Radius)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.AddCapsuleActorWithCallback"));

	UEmbarkDistanceQueryManager_AddCapsuleActorWithCallback_Params params;
	params.GroupClass = GroupClass;
	params.Actor = Actor;
	params.HalfHeight = HalfHeight;
	params.Rotation = Rotation;
	params.Callback = Callback;
	params.DistanceToCheck = DistanceToCheck;
	params.Stickiness = Stickiness;
	params.Specifier = Specifier;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.AddCapsuleActor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UClass*                  GroupClass                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          HalfHeight                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FQuat                   Rotation                       (Parm, IsPlainOldData)
// float                          DistanceToCheck                (Parm, ZeroConstructor, IsPlainOldData)
// float                          Stickiness                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            Specifier                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkDistanceQueryManager::AddCapsuleActor(class UClass* GroupClass, class AActor* Actor, float HalfHeight, const struct FQuat& Rotation, float DistanceToCheck, float Stickiness, int Specifier, float Radius)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.AddCapsuleActor"));

	UEmbarkDistanceQueryManager_AddCapsuleActor_Params params;
	params.GroupClass = GroupClass;
	params.Actor = Actor;
	params.HalfHeight = HalfHeight;
	params.Rotation = Rotation;
	params.DistanceToCheck = DistanceToCheck;
	params.Stickiness = Stickiness;
	params.Specifier = Specifier;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.AddActorWithCallback
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UClass*                  GroupClass                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         Callback                       (Parm, ZeroConstructor)
// float                          DistanceToCheck                (Parm, ZeroConstructor, IsPlainOldData)
// float                          Stickiness                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            Specifier                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Vector                         (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkDistanceQueryManager::AddActorWithCallback(class UClass* GroupClass, class AActor* Actor, const struct FScriptDelegate& Callback, float DistanceToCheck, float Stickiness, int Specifier, float Radius, const struct FVector& Vector)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.AddActorWithCallback"));

	UEmbarkDistanceQueryManager_AddActorWithCallback_Params params;
	params.GroupClass = GroupClass;
	params.Actor = Actor;
	params.Callback = Callback;
	params.DistanceToCheck = DistanceToCheck;
	params.Stickiness = Stickiness;
	params.Specifier = Specifier;
	params.Radius = Radius;
	params.Vector = Vector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.AddActor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UClass*                  GroupClass                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          DistanceToCheck                (Parm, ZeroConstructor, IsPlainOldData)
// float                          Stickiness                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            Specifier                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Vector                         (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkDistanceQueryManager::AddActor(class UClass* GroupClass, class AActor* Actor, float DistanceToCheck, float Stickiness, int Specifier, float Radius, const struct FVector& Vector)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkDistanceQueryManager.EmbarkDistanceQueryManager.AddActor"));

	UEmbarkDistanceQueryManager_AddActor_Params params;
	params.GroupClass = GroupClass;
	params.Actor = Actor;
	params.DistanceToCheck = DistanceToCheck;
	params.Stickiness = Stickiness;
	params.Specifier = Specifier;
	params.Radius = Radius;
	params.Vector = Vector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
