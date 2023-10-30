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

// Function EmbarkObjectPools.EmbarkObjectPoolSubsystem.ResetPool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Capacity                       (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkObjectPoolSubsystem::ResetPool(int Capacity)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkObjectPoolSubsystem.ResetPool"));

	UEmbarkObjectPoolSubsystem_ResetPool_Params params;
	params.Capacity = Capacity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkObjectPools.EmbarkObjectPoolSubsystem.PoolObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkObjectPoolSubsystem::PoolObject(class UObject* Object)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkObjectPoolSubsystem.PoolObject"));

	UEmbarkObjectPoolSubsystem_PoolObject_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkObjectPools.EmbarkObjectPoolSubsystem.OnInitializeSubsystem
// (Event, Public, BlueprintEvent)

void UEmbarkObjectPoolSubsystem::OnInitializeSubsystem()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkObjectPoolSubsystem.OnInitializeSubsystem"));

	UEmbarkObjectPoolSubsystem_OnInitializeSubsystem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkObjectPools.EmbarkObjectPoolSubsystem.OnDeinitializeSubsystem
// (Event, Public, BlueprintEvent)

void UEmbarkObjectPoolSubsystem::OnDeinitializeSubsystem()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkObjectPoolSubsystem.OnDeinitializeSubsystem"));

	UEmbarkObjectPoolSubsystem_OnDeinitializeSubsystem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkObjectPools.EmbarkObjectPoolSubsystem.NextOrCreateObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UEmbarkObjectPoolSubsystem::NextOrCreateObject()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkObjectPoolSubsystem.NextOrCreateObject"));

	UEmbarkObjectPoolSubsystem_NextOrCreateObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkObjectPools.EmbarkObjectPoolSubsystem.NextObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UEmbarkObjectPoolSubsystem::NextObject()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkObjectPoolSubsystem.NextObject"));

	UEmbarkObjectPoolSubsystem_NextObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkObjectPools.EmbarkObjectPoolSubsystem.InitializePool
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   Name                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         Delegate                       (Parm, ZeroConstructor)
// int                            Capacity                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            FillTarget                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            FillRate                       (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkObjectPoolSubsystem::InitializePool(const struct FName& Name, class UClass* Class, const struct FScriptDelegate& Delegate, int Capacity, int FillTarget, int FillRate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkObjectPoolSubsystem.InitializePool"));

	UEmbarkObjectPoolSubsystem_InitializePool_Params params;
	params.Name = Name;
	params.Class = Class;
	params.Delegate = Delegate;
	params.Capacity = Capacity;
	params.FillTarget = FillTarget;
	params.FillRate = FillRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkObjectPools.EmbarkObjectPoolSubsystem.FinalizePool
// (Final, Native, Public, BlueprintCallable)

void UEmbarkObjectPoolSubsystem::FinalizePool()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkObjectPoolSubsystem.FinalizePool"));

	UEmbarkObjectPoolSubsystem_FinalizePool_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkObjectPools.EmbarkObjectPoolSubsystem.FillPool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            FillTarget                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            FillRate                       (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkObjectPoolSubsystem::FillPool(int FillTarget, int FillRate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkObjectPoolSubsystem.FillPool"));

	UEmbarkObjectPoolSubsystem_FillPool_Params params;
	params.FillTarget = FillTarget;
	params.FillRate = FillRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkObjectPools.EmbarkObjectPool.ResetPool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Capacity                       (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkObjectPool::ResetPool(int Capacity)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkObjectPool.ResetPool"));

	UEmbarkObjectPool_ResetPool_Params params;
	params.Capacity = Capacity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkObjectPools.EmbarkObjectPool.PoolObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkObjectPool::PoolObject(class UObject* Object)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkObjectPool.PoolObject"));

	UEmbarkObjectPool_PoolObject_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkObjectPools.EmbarkObjectPool.NextOrCreateObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UEmbarkObjectPool::NextOrCreateObject()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkObjectPool.NextOrCreateObject"));

	UEmbarkObjectPool_NextOrCreateObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkObjectPools.EmbarkObjectPool.NextObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UEmbarkObjectPool::NextObject()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkObjectPool.NextObject"));

	UEmbarkObjectPool_NextObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkObjectPools.EmbarkObjectPool.InitializePool
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   Name                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         Delegate                       (Parm, ZeroConstructor)
// int                            Capacity                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            FillTarget                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            FillRate                       (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkObjectPool::InitializePool(const struct FName& Name, class UClass* Class, const struct FScriptDelegate& Delegate, int Capacity, int FillTarget, int FillRate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkObjectPool.InitializePool"));

	UEmbarkObjectPool_InitializePool_Params params;
	params.Name = Name;
	params.Class = Class;
	params.Delegate = Delegate;
	params.Capacity = Capacity;
	params.FillTarget = FillTarget;
	params.FillRate = FillRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkObjectPools.EmbarkObjectPool.FinalizePool
// (Final, Native, Public, BlueprintCallable)

void UEmbarkObjectPool::FinalizePool()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkObjectPool.FinalizePool"));

	UEmbarkObjectPool_FinalizePool_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkObjectPools.EmbarkObjectPool.FillPool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            FillTarget                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            FillRate                       (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkObjectPool::FillPool(int FillTarget, int FillRate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkObjectPool.FillPool"));

	UEmbarkObjectPool_FillPool_Params params;
	params.FillTarget = FillTarget;
	params.FillRate = FillRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkObjectPools.EmbarkActorPool.ResetPool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Capacity                       (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkActorPool::ResetPool(int Capacity)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkActorPool.ResetPool"));

	UEmbarkActorPool_ResetPool_Params params;
	params.Capacity = Capacity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkObjectPools.EmbarkActorPool.PoolObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Object                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkActorPool::PoolObject(class AActor* Object)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkActorPool.PoolObject"));

	UEmbarkActorPool_PoolObject_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkObjectPools.EmbarkActorPool.NextOrCreateObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UEmbarkActorPool::NextOrCreateObject()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkActorPool.NextOrCreateObject"));

	UEmbarkActorPool_NextOrCreateObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkObjectPools.EmbarkActorPool.NextObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UEmbarkActorPool::NextObject()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkActorPool.NextObject"));

	UEmbarkActorPool_NextObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkObjectPools.EmbarkActorPool.InitializePool
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   Name                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UClass*                  Class                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FScriptDelegate         Delegate                       (Parm, ZeroConstructor)
// int                            Capacity                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            FillTarget                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            FillRate                       (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkActorPool::InitializePool(const struct FName& Name, class UClass* Class, const struct FScriptDelegate& Delegate, int Capacity, int FillTarget, int FillRate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkActorPool.InitializePool"));

	UEmbarkActorPool_InitializePool_Params params;
	params.Name = Name;
	params.Class = Class;
	params.Delegate = Delegate;
	params.Capacity = Capacity;
	params.FillTarget = FillTarget;
	params.FillRate = FillRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkObjectPools.EmbarkActorPool.FinalizePool
// (Final, Native, Public, BlueprintCallable)

void UEmbarkActorPool::FinalizePool()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkActorPool.FinalizePool"));

	UEmbarkActorPool_FinalizePool_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkObjectPools.EmbarkActorPool.FillPool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            FillTarget                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            FillRate                       (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkActorPool::FillPool(int FillTarget, int FillRate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkActorPool.FillPool"));

	UEmbarkActorPool_FillPool_Params params;
	params.FillTarget = FillTarget;
	params.FillRate = FillRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkObjectPools.EmbarkActorComponentPool.ResetPool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Capacity                       (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkActorComponentPool::ResetPool(int Capacity)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkActorComponentPool.ResetPool"));

	UEmbarkActorComponentPool_ResetPool_Params params;
	params.Capacity = Capacity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkObjectPools.EmbarkActorComponentPool.PoolObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UActorComponent*         Object                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkActorComponentPool::PoolObject(class UActorComponent* Object)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkActorComponentPool.PoolObject"));

	UEmbarkActorComponentPool_PoolObject_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkObjectPools.EmbarkActorComponentPool.NextOrCreateObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UActorComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UActorComponent* UEmbarkActorComponentPool::NextOrCreateObject()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkActorComponentPool.NextOrCreateObject"));

	UEmbarkActorComponentPool_NextOrCreateObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkObjectPools.EmbarkActorComponentPool.NextObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UActorComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UActorComponent* UEmbarkActorComponentPool::NextObject()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkActorComponentPool.NextObject"));

	UEmbarkActorComponentPool_NextObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkObjectPools.EmbarkActorComponentPool.InitializePool
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   Name                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UClass*                  Class                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FScriptDelegate         Delegate                       (Parm, ZeroConstructor)
// int                            Capacity                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            FillTarget                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            FillRate                       (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkActorComponentPool::InitializePool(const struct FName& Name, class UClass* Class, const struct FScriptDelegate& Delegate, int Capacity, int FillTarget, int FillRate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkActorComponentPool.InitializePool"));

	UEmbarkActorComponentPool_InitializePool_Params params;
	params.Name = Name;
	params.Class = Class;
	params.Delegate = Delegate;
	params.Capacity = Capacity;
	params.FillTarget = FillTarget;
	params.FillRate = FillRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkObjectPools.EmbarkActorComponentPool.FinalizePool
// (Final, Native, Public, BlueprintCallable)

void UEmbarkActorComponentPool::FinalizePool()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkActorComponentPool.FinalizePool"));

	UEmbarkActorComponentPool_FinalizePool_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkObjectPools.EmbarkActorComponentPool.FillPool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            FillTarget                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            FillRate                       (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkActorComponentPool::FillPool(int FillTarget, int FillRate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkActorComponentPool.FillPool"));

	UEmbarkActorComponentPool_FillPool_Params params;
	params.FillTarget = FillTarget;
	params.FillRate = FillRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkObjectPools.EmbarkObjectVariantPool.ResetPool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Capacity                       (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkObjectVariantPool::ResetPool(int Capacity)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkObjectVariantPool.ResetPool"));

	UEmbarkObjectVariantPool_ResetPool_Params params;
	params.Capacity = Capacity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkObjectPools.EmbarkObjectVariantPool.PrewarmPool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkObjectVariantPool::PrewarmPool(class UClass* Class)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkObjectVariantPool.PrewarmPool"));

	UEmbarkObjectVariantPool_PrewarmPool_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkObjectPools.EmbarkObjectVariantPool.PoolObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkObjectVariantPool::PoolObject(class UObject* Object)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkObjectVariantPool.PoolObject"));

	UEmbarkObjectVariantPool_PoolObject_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkObjectPools.EmbarkObjectVariantPool.NextOrCreateObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UEmbarkObjectVariantPool::NextOrCreateObject(class UClass* Class)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkObjectVariantPool.NextOrCreateObject"));

	UEmbarkObjectVariantPool_NextOrCreateObject_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkObjectPools.EmbarkObjectVariantPool.NextObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UEmbarkObjectVariantPool::NextObject(class UClass* Class)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkObjectVariantPool.NextObject"));

	UEmbarkObjectVariantPool_NextObject_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkObjectPools.EmbarkObjectVariantPool.InitializePool
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   Name                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FScriptDelegate         Delegate                       (Parm, ZeroConstructor)
// int                            Capacity                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            FillTarget                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            FillRate                       (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkObjectVariantPool::InitializePool(const struct FName& Name, const struct FScriptDelegate& Delegate, int Capacity, int FillTarget, int FillRate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkObjectVariantPool.InitializePool"));

	UEmbarkObjectVariantPool_InitializePool_Params params;
	params.Name = Name;
	params.Delegate = Delegate;
	params.Capacity = Capacity;
	params.FillTarget = FillTarget;
	params.FillRate = FillRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkObjectPools.EmbarkObjectVariantPool.FinalizePool
// (Final, Native, Public, BlueprintCallable)

void UEmbarkObjectVariantPool::FinalizePool()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkObjectVariantPool.FinalizePool"));

	UEmbarkObjectVariantPool_FinalizePool_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkObjectPools.EmbarkObjectVariantPool.FillPool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            FillTarget                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            FillRate                       (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkObjectVariantPool::FillPool(class UClass* Class, int FillTarget, int FillRate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkObjectVariantPool.FillPool"));

	UEmbarkObjectVariantPool_FillPool_Params params;
	params.Class = Class;
	params.FillTarget = FillTarget;
	params.FillRate = FillRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkObjectPools.EmbarkActorVariantPool.ResetPool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Capacity                       (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkActorVariantPool::ResetPool(int Capacity)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkActorVariantPool.ResetPool"));

	UEmbarkActorVariantPool_ResetPool_Params params;
	params.Capacity = Capacity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkObjectPools.EmbarkActorVariantPool.PrewarmPool
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UClass*                  Class                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UEmbarkActorVariantPool::PrewarmPool(class UClass* Class)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkActorVariantPool.PrewarmPool"));

	UEmbarkActorVariantPool_PrewarmPool_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkObjectPools.EmbarkActorVariantPool.PoolObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Object                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkActorVariantPool::PoolObject(class AActor* Object)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkActorVariantPool.PoolObject"));

	UEmbarkActorVariantPool_PoolObject_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkObjectPools.EmbarkActorVariantPool.NextOrCreateObject
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UClass*                  Class                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UEmbarkActorVariantPool::NextOrCreateObject(class UClass* Class)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkActorVariantPool.NextOrCreateObject"));

	UEmbarkActorVariantPool_NextOrCreateObject_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkObjectPools.EmbarkActorVariantPool.NextObject
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UClass*                  Class                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UEmbarkActorVariantPool::NextObject(class UClass* Class)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkActorVariantPool.NextObject"));

	UEmbarkActorVariantPool_NextObject_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkObjectPools.EmbarkActorVariantPool.InitializePool
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   Name                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FScriptDelegate         Delegate                       (Parm, ZeroConstructor)
// int                            Capacity                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            FillTarget                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            FillRate                       (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkActorVariantPool::InitializePool(const struct FName& Name, const struct FScriptDelegate& Delegate, int Capacity, int FillTarget, int FillRate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkActorVariantPool.InitializePool"));

	UEmbarkActorVariantPool_InitializePool_Params params;
	params.Name = Name;
	params.Delegate = Delegate;
	params.Capacity = Capacity;
	params.FillTarget = FillTarget;
	params.FillRate = FillRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkObjectPools.EmbarkActorVariantPool.FinalizePool
// (Final, Native, Public, BlueprintCallable)

void UEmbarkActorVariantPool::FinalizePool()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkActorVariantPool.FinalizePool"));

	UEmbarkActorVariantPool_FinalizePool_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkObjectPools.EmbarkActorVariantPool.FillPool
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UClass*                  Class                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            FillTarget                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            FillRate                       (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkActorVariantPool::FillPool(class UClass* Class, int FillTarget, int FillRate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkActorVariantPool.FillPool"));

	UEmbarkActorVariantPool_FillPool_Params params;
	params.Class = Class;
	params.FillTarget = FillTarget;
	params.FillRate = FillRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkObjectPools.EmbarkActorComponentVariantPool.ResetPool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Capacity                       (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkActorComponentVariantPool::ResetPool(int Capacity)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkActorComponentVariantPool.ResetPool"));

	UEmbarkActorComponentVariantPool_ResetPool_Params params;
	params.Capacity = Capacity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkObjectPools.EmbarkActorComponentVariantPool.PrewarmPool
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UClass*                  Class                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UEmbarkActorComponentVariantPool::PrewarmPool(class UClass* Class)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkActorComponentVariantPool.PrewarmPool"));

	UEmbarkActorComponentVariantPool_PrewarmPool_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkObjectPools.EmbarkActorComponentVariantPool.PoolObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UActorComponent*         Object                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkActorComponentVariantPool::PoolObject(class UActorComponent* Object)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkActorComponentVariantPool.PoolObject"));

	UEmbarkActorComponentVariantPool_PoolObject_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkObjectPools.EmbarkActorComponentVariantPool.NextOrCreateObject
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UClass*                  Class                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UActorComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UActorComponent* UEmbarkActorComponentVariantPool::NextOrCreateObject(class UClass* Class)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkActorComponentVariantPool.NextOrCreateObject"));

	UEmbarkActorComponentVariantPool_NextOrCreateObject_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkObjectPools.EmbarkActorComponentVariantPool.NextObject
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UClass*                  Class                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UActorComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UActorComponent* UEmbarkActorComponentVariantPool::NextObject(class UClass* Class)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkActorComponentVariantPool.NextObject"));

	UEmbarkActorComponentVariantPool_NextObject_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkObjectPools.EmbarkActorComponentVariantPool.InitializePool
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   Name                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FScriptDelegate         Delegate                       (Parm, ZeroConstructor)
// int                            Capacity                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            FillTarget                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            FillRate                       (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkActorComponentVariantPool::InitializePool(const struct FName& Name, const struct FScriptDelegate& Delegate, int Capacity, int FillTarget, int FillRate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkActorComponentVariantPool.InitializePool"));

	UEmbarkActorComponentVariantPool_InitializePool_Params params;
	params.Name = Name;
	params.Delegate = Delegate;
	params.Capacity = Capacity;
	params.FillTarget = FillTarget;
	params.FillRate = FillRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkObjectPools.EmbarkActorComponentVariantPool.FinalizePool
// (Final, Native, Public, BlueprintCallable)

void UEmbarkActorComponentVariantPool::FinalizePool()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkActorComponentVariantPool.FinalizePool"));

	UEmbarkActorComponentVariantPool_FinalizePool_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkObjectPools.EmbarkActorComponentVariantPool.FillPool
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UClass*                  Class                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            FillTarget                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            FillRate                       (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkActorComponentVariantPool::FillPool(class UClass* Class, int FillTarget, int FillRate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkActorComponentVariantPool.FillPool"));

	UEmbarkActorComponentVariantPool_FillPool_Params params;
	params.Class = Class;
	params.FillTarget = FillTarget;
	params.FillRate = FillRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkObjectPools.EmbarkActorPoolSubsystem.ResetPool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Capacity                       (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkActorPoolSubsystem::ResetPool(int Capacity)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkActorPoolSubsystem.ResetPool"));

	UEmbarkActorPoolSubsystem_ResetPool_Params params;
	params.Capacity = Capacity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkObjectPools.EmbarkActorPoolSubsystem.PoolObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Object                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkActorPoolSubsystem::PoolObject(class AActor* Object)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkActorPoolSubsystem.PoolObject"));

	UEmbarkActorPoolSubsystem_PoolObject_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkObjectPools.EmbarkActorPoolSubsystem.OnInitializeSubsystem
// (Event, Public, BlueprintEvent)

void UEmbarkActorPoolSubsystem::OnInitializeSubsystem()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkActorPoolSubsystem.OnInitializeSubsystem"));

	UEmbarkActorPoolSubsystem_OnInitializeSubsystem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkObjectPools.EmbarkActorPoolSubsystem.OnDeinitializeSubsystem
// (Event, Public, BlueprintEvent)

void UEmbarkActorPoolSubsystem::OnDeinitializeSubsystem()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkActorPoolSubsystem.OnDeinitializeSubsystem"));

	UEmbarkActorPoolSubsystem_OnDeinitializeSubsystem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkObjectPools.EmbarkActorPoolSubsystem.NextOrCreateObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UEmbarkActorPoolSubsystem::NextOrCreateObject()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkActorPoolSubsystem.NextOrCreateObject"));

	UEmbarkActorPoolSubsystem_NextOrCreateObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkObjectPools.EmbarkActorPoolSubsystem.NextObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UEmbarkActorPoolSubsystem::NextObject()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkActorPoolSubsystem.NextObject"));

	UEmbarkActorPoolSubsystem_NextObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkObjectPools.EmbarkActorPoolSubsystem.InitializePool
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   Name                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UClass*                  Class                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FScriptDelegate         Delegate                       (Parm, ZeroConstructor)
// int                            Capacity                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            FillTarget                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            FillRate                       (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkActorPoolSubsystem::InitializePool(const struct FName& Name, class UClass* Class, const struct FScriptDelegate& Delegate, int Capacity, int FillTarget, int FillRate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkActorPoolSubsystem.InitializePool"));

	UEmbarkActorPoolSubsystem_InitializePool_Params params;
	params.Name = Name;
	params.Class = Class;
	params.Delegate = Delegate;
	params.Capacity = Capacity;
	params.FillTarget = FillTarget;
	params.FillRate = FillRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkObjectPools.EmbarkActorPoolSubsystem.FinalizePool
// (Final, Native, Public, BlueprintCallable)

void UEmbarkActorPoolSubsystem::FinalizePool()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkActorPoolSubsystem.FinalizePool"));

	UEmbarkActorPoolSubsystem_FinalizePool_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkObjectPools.EmbarkActorPoolSubsystem.FillPool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            FillTarget                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            FillRate                       (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkActorPoolSubsystem::FillPool(int FillTarget, int FillRate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkActorPoolSubsystem.FillPool"));

	UEmbarkActorPoolSubsystem_FillPool_Params params;
	params.FillTarget = FillTarget;
	params.FillRate = FillRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkObjectPools.EmbarkActorComponentPoolSubsystem.ResetPool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Capacity                       (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkActorComponentPoolSubsystem::ResetPool(int Capacity)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkActorComponentPoolSubsystem.ResetPool"));

	UEmbarkActorComponentPoolSubsystem_ResetPool_Params params;
	params.Capacity = Capacity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkObjectPools.EmbarkActorComponentPoolSubsystem.PoolObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UActorComponent*         Object                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkActorComponentPoolSubsystem::PoolObject(class UActorComponent* Object)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkActorComponentPoolSubsystem.PoolObject"));

	UEmbarkActorComponentPoolSubsystem_PoolObject_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkObjectPools.EmbarkActorComponentPoolSubsystem.OnInitializeSubsystem
// (Event, Public, BlueprintEvent)

void UEmbarkActorComponentPoolSubsystem::OnInitializeSubsystem()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkActorComponentPoolSubsystem.OnInitializeSubsystem"));

	UEmbarkActorComponentPoolSubsystem_OnInitializeSubsystem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkObjectPools.EmbarkActorComponentPoolSubsystem.OnDeinitializeSubsystem
// (Event, Public, BlueprintEvent)

void UEmbarkActorComponentPoolSubsystem::OnDeinitializeSubsystem()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkActorComponentPoolSubsystem.OnDeinitializeSubsystem"));

	UEmbarkActorComponentPoolSubsystem_OnDeinitializeSubsystem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkObjectPools.EmbarkActorComponentPoolSubsystem.NextOrCreateObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UActorComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UActorComponent* UEmbarkActorComponentPoolSubsystem::NextOrCreateObject()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkActorComponentPoolSubsystem.NextOrCreateObject"));

	UEmbarkActorComponentPoolSubsystem_NextOrCreateObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkObjectPools.EmbarkActorComponentPoolSubsystem.NextObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UActorComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UActorComponent* UEmbarkActorComponentPoolSubsystem::NextObject()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkActorComponentPoolSubsystem.NextObject"));

	UEmbarkActorComponentPoolSubsystem_NextObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkObjectPools.EmbarkActorComponentPoolSubsystem.InitializePool
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   Name                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UClass*                  Class                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FScriptDelegate         Delegate                       (Parm, ZeroConstructor)
// int                            Capacity                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            FillTarget                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            FillRate                       (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkActorComponentPoolSubsystem::InitializePool(const struct FName& Name, class UClass* Class, const struct FScriptDelegate& Delegate, int Capacity, int FillTarget, int FillRate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkActorComponentPoolSubsystem.InitializePool"));

	UEmbarkActorComponentPoolSubsystem_InitializePool_Params params;
	params.Name = Name;
	params.Class = Class;
	params.Delegate = Delegate;
	params.Capacity = Capacity;
	params.FillTarget = FillTarget;
	params.FillRate = FillRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkObjectPools.EmbarkActorComponentPoolSubsystem.FinalizePool
// (Final, Native, Public, BlueprintCallable)

void UEmbarkActorComponentPoolSubsystem::FinalizePool()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkActorComponentPoolSubsystem.FinalizePool"));

	UEmbarkActorComponentPoolSubsystem_FinalizePool_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkObjectPools.EmbarkActorComponentPoolSubsystem.FillPool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            FillTarget                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            FillRate                       (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkActorComponentPoolSubsystem::FillPool(int FillTarget, int FillRate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkActorComponentPoolSubsystem.FillPool"));

	UEmbarkActorComponentPoolSubsystem_FillPool_Params params;
	params.FillTarget = FillTarget;
	params.FillRate = FillRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkObjectPools.EmbarkObjectVariantPoolSubsystem.ResetPool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Capacity                       (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkObjectVariantPoolSubsystem::ResetPool(int Capacity)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkObjectVariantPoolSubsystem.ResetPool"));

	UEmbarkObjectVariantPoolSubsystem_ResetPool_Params params;
	params.Capacity = Capacity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkObjectPools.EmbarkObjectVariantPoolSubsystem.PrewarmPool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkObjectVariantPoolSubsystem::PrewarmPool(class UClass* Class)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkObjectVariantPoolSubsystem.PrewarmPool"));

	UEmbarkObjectVariantPoolSubsystem_PrewarmPool_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkObjectPools.EmbarkObjectVariantPoolSubsystem.PoolObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkObjectVariantPoolSubsystem::PoolObject(class UObject* Object)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkObjectVariantPoolSubsystem.PoolObject"));

	UEmbarkObjectVariantPoolSubsystem_PoolObject_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkObjectPools.EmbarkObjectVariantPoolSubsystem.OnInitializeSubsystem
// (Event, Public, BlueprintEvent)

void UEmbarkObjectVariantPoolSubsystem::OnInitializeSubsystem()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkObjectVariantPoolSubsystem.OnInitializeSubsystem"));

	UEmbarkObjectVariantPoolSubsystem_OnInitializeSubsystem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkObjectPools.EmbarkObjectVariantPoolSubsystem.OnDeinitializeSubsystem
// (Event, Public, BlueprintEvent)

void UEmbarkObjectVariantPoolSubsystem::OnDeinitializeSubsystem()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkObjectVariantPoolSubsystem.OnDeinitializeSubsystem"));

	UEmbarkObjectVariantPoolSubsystem_OnDeinitializeSubsystem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkObjectPools.EmbarkObjectVariantPoolSubsystem.NextOrCreateObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UEmbarkObjectVariantPoolSubsystem::NextOrCreateObject(class UClass* Class)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkObjectVariantPoolSubsystem.NextOrCreateObject"));

	UEmbarkObjectVariantPoolSubsystem_NextOrCreateObject_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkObjectPools.EmbarkObjectVariantPoolSubsystem.NextObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UEmbarkObjectVariantPoolSubsystem::NextObject(class UClass* Class)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkObjectVariantPoolSubsystem.NextObject"));

	UEmbarkObjectVariantPoolSubsystem_NextObject_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkObjectPools.EmbarkObjectVariantPoolSubsystem.InitializePool
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   Name                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FScriptDelegate         Delegate                       (Parm, ZeroConstructor)
// int                            Capacity                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            FillTarget                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            FillRate                       (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkObjectVariantPoolSubsystem::InitializePool(const struct FName& Name, const struct FScriptDelegate& Delegate, int Capacity, int FillTarget, int FillRate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkObjectVariantPoolSubsystem.InitializePool"));

	UEmbarkObjectVariantPoolSubsystem_InitializePool_Params params;
	params.Name = Name;
	params.Delegate = Delegate;
	params.Capacity = Capacity;
	params.FillTarget = FillTarget;
	params.FillRate = FillRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkObjectPools.EmbarkObjectVariantPoolSubsystem.FinalizePool
// (Final, Native, Public, BlueprintCallable)

void UEmbarkObjectVariantPoolSubsystem::FinalizePool()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkObjectVariantPoolSubsystem.FinalizePool"));

	UEmbarkObjectVariantPoolSubsystem_FinalizePool_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkObjectPools.EmbarkObjectVariantPoolSubsystem.FillPool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            FillTarget                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            FillRate                       (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkObjectVariantPoolSubsystem::FillPool(class UClass* Class, int FillTarget, int FillRate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkObjectVariantPoolSubsystem.FillPool"));

	UEmbarkObjectVariantPoolSubsystem_FillPool_Params params;
	params.Class = Class;
	params.FillTarget = FillTarget;
	params.FillRate = FillRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkObjectPools.EmbarkActorVariantPoolSubsystem.ResetPool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Capacity                       (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkActorVariantPoolSubsystem::ResetPool(int Capacity)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkActorVariantPoolSubsystem.ResetPool"));

	UEmbarkActorVariantPoolSubsystem_ResetPool_Params params;
	params.Capacity = Capacity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkObjectPools.EmbarkActorVariantPoolSubsystem.PrewarmPool
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UClass*                  Class                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UEmbarkActorVariantPoolSubsystem::PrewarmPool(class UClass* Class)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkActorVariantPoolSubsystem.PrewarmPool"));

	UEmbarkActorVariantPoolSubsystem_PrewarmPool_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkObjectPools.EmbarkActorVariantPoolSubsystem.PoolObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Object                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkActorVariantPoolSubsystem::PoolObject(class AActor* Object)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkActorVariantPoolSubsystem.PoolObject"));

	UEmbarkActorVariantPoolSubsystem_PoolObject_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkObjectPools.EmbarkActorVariantPoolSubsystem.OnInitializeSubsystem
// (Event, Public, BlueprintEvent)

void UEmbarkActorVariantPoolSubsystem::OnInitializeSubsystem()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkActorVariantPoolSubsystem.OnInitializeSubsystem"));

	UEmbarkActorVariantPoolSubsystem_OnInitializeSubsystem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkObjectPools.EmbarkActorVariantPoolSubsystem.OnDeinitializeSubsystem
// (Event, Public, BlueprintEvent)

void UEmbarkActorVariantPoolSubsystem::OnDeinitializeSubsystem()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkActorVariantPoolSubsystem.OnDeinitializeSubsystem"));

	UEmbarkActorVariantPoolSubsystem_OnDeinitializeSubsystem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkObjectPools.EmbarkActorVariantPoolSubsystem.NextOrCreateObject
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UClass*                  Class                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UEmbarkActorVariantPoolSubsystem::NextOrCreateObject(class UClass* Class)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkActorVariantPoolSubsystem.NextOrCreateObject"));

	UEmbarkActorVariantPoolSubsystem_NextOrCreateObject_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkObjectPools.EmbarkActorVariantPoolSubsystem.NextObject
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UClass*                  Class                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UEmbarkActorVariantPoolSubsystem::NextObject(class UClass* Class)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkActorVariantPoolSubsystem.NextObject"));

	UEmbarkActorVariantPoolSubsystem_NextObject_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkObjectPools.EmbarkActorVariantPoolSubsystem.InitializePool
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   Name                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FScriptDelegate         Delegate                       (Parm, ZeroConstructor)
// int                            Capacity                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            FillTarget                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            FillRate                       (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkActorVariantPoolSubsystem::InitializePool(const struct FName& Name, const struct FScriptDelegate& Delegate, int Capacity, int FillTarget, int FillRate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkActorVariantPoolSubsystem.InitializePool"));

	UEmbarkActorVariantPoolSubsystem_InitializePool_Params params;
	params.Name = Name;
	params.Delegate = Delegate;
	params.Capacity = Capacity;
	params.FillTarget = FillTarget;
	params.FillRate = FillRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkObjectPools.EmbarkActorVariantPoolSubsystem.FinalizePool
// (Final, Native, Public, BlueprintCallable)

void UEmbarkActorVariantPoolSubsystem::FinalizePool()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkActorVariantPoolSubsystem.FinalizePool"));

	UEmbarkActorVariantPoolSubsystem_FinalizePool_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkObjectPools.EmbarkActorVariantPoolSubsystem.FillPool
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UClass*                  Class                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            FillTarget                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            FillRate                       (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkActorVariantPoolSubsystem::FillPool(class UClass* Class, int FillTarget, int FillRate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkActorVariantPoolSubsystem.FillPool"));

	UEmbarkActorVariantPoolSubsystem_FillPool_Params params;
	params.Class = Class;
	params.FillTarget = FillTarget;
	params.FillRate = FillRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkObjectPools.EmbarkActorComponentVariantPoolSubsystem.ResetPool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Capacity                       (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkActorComponentVariantPoolSubsystem::ResetPool(int Capacity)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkActorComponentVariantPoolSubsystem.ResetPool"));

	UEmbarkActorComponentVariantPoolSubsystem_ResetPool_Params params;
	params.Capacity = Capacity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkObjectPools.EmbarkActorComponentVariantPoolSubsystem.PrewarmPool
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UClass*                  Class                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UEmbarkActorComponentVariantPoolSubsystem::PrewarmPool(class UClass* Class)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkActorComponentVariantPoolSubsystem.PrewarmPool"));

	UEmbarkActorComponentVariantPoolSubsystem_PrewarmPool_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkObjectPools.EmbarkActorComponentVariantPoolSubsystem.PoolObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UActorComponent*         Object                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkActorComponentVariantPoolSubsystem::PoolObject(class UActorComponent* Object)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkActorComponentVariantPoolSubsystem.PoolObject"));

	UEmbarkActorComponentVariantPoolSubsystem_PoolObject_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkObjectPools.EmbarkActorComponentVariantPoolSubsystem.OnInitializeSubsystem
// (Event, Public, BlueprintEvent)

void UEmbarkActorComponentVariantPoolSubsystem::OnInitializeSubsystem()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkActorComponentVariantPoolSubsystem.OnInitializeSubsystem"));

	UEmbarkActorComponentVariantPoolSubsystem_OnInitializeSubsystem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkObjectPools.EmbarkActorComponentVariantPoolSubsystem.OnDeinitializeSubsystem
// (Event, Public, BlueprintEvent)

void UEmbarkActorComponentVariantPoolSubsystem::OnDeinitializeSubsystem()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkActorComponentVariantPoolSubsystem.OnDeinitializeSubsystem"));

	UEmbarkActorComponentVariantPoolSubsystem_OnDeinitializeSubsystem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkObjectPools.EmbarkActorComponentVariantPoolSubsystem.NextOrCreateObject
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UClass*                  Class                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UActorComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UActorComponent* UEmbarkActorComponentVariantPoolSubsystem::NextOrCreateObject(class UClass* Class)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkActorComponentVariantPoolSubsystem.NextOrCreateObject"));

	UEmbarkActorComponentVariantPoolSubsystem_NextOrCreateObject_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkObjectPools.EmbarkActorComponentVariantPoolSubsystem.NextObject
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UClass*                  Class                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UActorComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UActorComponent* UEmbarkActorComponentVariantPoolSubsystem::NextObject(class UClass* Class)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkActorComponentVariantPoolSubsystem.NextObject"));

	UEmbarkActorComponentVariantPoolSubsystem_NextObject_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkObjectPools.EmbarkActorComponentVariantPoolSubsystem.InitializePool
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   Name                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FScriptDelegate         Delegate                       (Parm, ZeroConstructor)
// int                            Capacity                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            FillTarget                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            FillRate                       (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkActorComponentVariantPoolSubsystem::InitializePool(const struct FName& Name, const struct FScriptDelegate& Delegate, int Capacity, int FillTarget, int FillRate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkActorComponentVariantPoolSubsystem.InitializePool"));

	UEmbarkActorComponentVariantPoolSubsystem_InitializePool_Params params;
	params.Name = Name;
	params.Delegate = Delegate;
	params.Capacity = Capacity;
	params.FillTarget = FillTarget;
	params.FillRate = FillRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkObjectPools.EmbarkActorComponentVariantPoolSubsystem.FinalizePool
// (Final, Native, Public, BlueprintCallable)

void UEmbarkActorComponentVariantPoolSubsystem::FinalizePool()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkActorComponentVariantPoolSubsystem.FinalizePool"));

	UEmbarkActorComponentVariantPoolSubsystem_FinalizePool_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkObjectPools.EmbarkActorComponentVariantPoolSubsystem.FillPool
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UClass*                  Class                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            FillTarget                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            FillRate                       (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkActorComponentVariantPoolSubsystem::FillPool(class UClass* Class, int FillTarget, int FillRate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkObjectPools.EmbarkActorComponentVariantPoolSubsystem.FillPool"));

	UEmbarkActorComponentVariantPoolSubsystem_FillPool_Params params;
	params.Class = Class;
	params.FillTarget = FillTarget;
	params.FillRate = FillRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
