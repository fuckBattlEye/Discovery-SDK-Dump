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

// Function EmbarkFire.EmbarkFireFunctionLibrary.UnregisterHandle_Server
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFireObjectHandle Handle                         (Parm)

void UEmbarkFireFunctionLibrary::STATIC_UnregisterHandle_Server(class UObject* WorldContextObject, const struct FEmbarkFireObjectHandle& Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFire.EmbarkFireFunctionLibrary.UnregisterHandle_Server"));

	UEmbarkFireFunctionLibrary_UnregisterHandle_Server_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkFire.EmbarkFireFunctionLibrary.SetSphereLocation_Server
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFireObjectHandle Handle                         (Parm)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkFireFunctionLibrary::STATIC_SetSphereLocation_Server(class UObject* WorldContextObject, const struct FEmbarkFireObjectHandle& Handle, const struct FVector& Location)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFire.EmbarkFireFunctionLibrary.SetSphereLocation_Server"));

	UEmbarkFireFunctionLibrary_SetSphereLocation_Server_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Handle = Handle;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkFire.EmbarkFireFunctionLibrary.SetInstigator_Server
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFireObjectHandle Handle                         (Parm)
// struct FInstigator             Instigator                     (ConstParm, Parm, OutParm, ReferenceParm)

void UEmbarkFireFunctionLibrary::STATIC_SetInstigator_Server(class UObject* WorldContextObject, const struct FEmbarkFireObjectHandle& Handle, const struct FInstigator& Instigator)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFire.EmbarkFireFunctionLibrary.SetInstigator_Server"));

	UEmbarkFireFunctionLibrary_SetInstigator_Server_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Handle = Handle;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkFire.EmbarkFireFunctionLibrary.RegisterObject_Server
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFireObjectStateInitData InitData                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEmbarkFireObjectHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEmbarkFireObjectHandle UEmbarkFireFunctionLibrary::STATIC_RegisterObject_Server(class UObject* WorldContextObject, const struct FEmbarkFireObjectStateInitData& InitData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFire.EmbarkFireFunctionLibrary.RegisterObject_Server"));

	UEmbarkFireFunctionLibrary_RegisterObject_Server_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InitData = InitData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkFire.EmbarkFireFunctionLibrary.IsHandleValid
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFireObjectHandle Handle                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkFireFunctionLibrary::STATIC_IsHandleValid(class UObject* WorldContextObject, const struct FEmbarkFireObjectHandle& Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFire.EmbarkFireFunctionLibrary.IsHandleValid"));

	UEmbarkFireFunctionLibrary_IsHandleValid_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkFire.EmbarkFireFunctionLibrary.GetEmbarkFireSubsystem_Server
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UEmbarkFireSubsystem*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UEmbarkFireSubsystem* UEmbarkFireFunctionLibrary::STATIC_GetEmbarkFireSubsystem_Server(class UObject* WorldContextObject)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFire.EmbarkFireFunctionLibrary.GetEmbarkFireSubsystem_Server"));

	UEmbarkFireFunctionLibrary_GetEmbarkFireSubsystem_Server_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkFire.EmbarkFireFunctionLibrary.EnableHandle_Server
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFireObjectHandle Handle                         (Parm)

void UEmbarkFireFunctionLibrary::STATIC_EnableHandle_Server(class UObject* WorldContextObject, const struct FEmbarkFireObjectHandle& Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFire.EmbarkFireFunctionLibrary.EnableHandle_Server"));

	UEmbarkFireFunctionLibrary_EnableHandle_Server_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkFire.EmbarkFireFunctionLibrary.DisableHandle_Server
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFireObjectHandle Handle                         (Parm)

void UEmbarkFireFunctionLibrary::STATIC_DisableHandle_Server(class UObject* WorldContextObject, const struct FEmbarkFireObjectHandle& Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFire.EmbarkFireFunctionLibrary.DisableHandle_Server"));

	UEmbarkFireFunctionLibrary_DisableHandle_Server_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkFire.EmbarkFireFunctionLibrary.AddHeat_Server
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFireObjectHandle Handle                         (Parm)
// float                          HeatToAdd                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FInstigator             Instigator                     (ConstParm, Parm, OutParm, ReferenceParm)

void UEmbarkFireFunctionLibrary::STATIC_AddHeat_Server(class UObject* WorldContextObject, const struct FEmbarkFireObjectHandle& Handle, float HeatToAdd, const struct FInstigator& Instigator)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFire.EmbarkFireFunctionLibrary.AddHeat_Server"));

	UEmbarkFireFunctionLibrary_AddHeat_Server_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Handle = Handle;
	params.HeatToAdd = HeatToAdd;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkFire.EmbarkFireObjectGraph.OnDistanceQueryManagerData
// (Final, Native, Private)
// Parameters:
// struct FEmbarkDistanceQueryInfo Info                           (Parm)
// bool                           bOverlapping                   (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkFireObjectGraph::OnDistanceQueryManagerData(const struct FEmbarkDistanceQueryInfo& Info, bool bOverlapping)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFire.EmbarkFireObjectGraph.OnDistanceQueryManagerData"));

	UEmbarkFireObjectGraph_OnDistanceQueryManagerData_Params params;
	params.Info = Info;
	params.bOverlapping = bOverlapping;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
