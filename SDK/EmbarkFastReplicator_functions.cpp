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

// Function EmbarkFastReplicator.EmbarkFastReplicator.UnregisterInstance
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FEmbarkFastReplicatorActorOrComponent Ref                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEmbarkFastReplicatorRegisterToken Token                          (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AEmbarkFastReplicator::UnregisterInstance(const struct FEmbarkFastReplicatorActorOrComponent& Ref, struct FEmbarkFastReplicatorRegisterToken* Token)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFastReplicator.EmbarkFastReplicator.UnregisterInstance"));

	AEmbarkFastReplicator_UnregisterInstance_Params params;
	params.Ref = Ref;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Token != nullptr)
		*Token = params.Token;

	return params.ReturnValue;
}


// Function EmbarkFastReplicator.EmbarkFastReplicator.RegisterInstanceComponent
// (Final, Native, Public, HasOutParms)
// Parameters:
// class UActorComponent*         Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FEmbarkFastReplicatorRegisterToken Token                          (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AEmbarkFastReplicator::RegisterInstanceComponent(class UActorComponent* Component, struct FEmbarkFastReplicatorRegisterToken* Token)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFastReplicator.EmbarkFastReplicator.RegisterInstanceComponent"));

	AEmbarkFastReplicator_RegisterInstanceComponent_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Token != nullptr)
		*Token = params.Token;

	return params.ReturnValue;
}


// Function EmbarkFastReplicator.EmbarkFastReplicator.RegisterInstanceActor
// (Final, Native, Public, HasOutParms)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FEmbarkFastReplicatorRegisterToken Token                          (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AEmbarkFastReplicator::RegisterInstanceActor(class AActor* Actor, struct FEmbarkFastReplicatorRegisterToken* Token)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFastReplicator.EmbarkFastReplicator.RegisterInstanceActor"));

	AEmbarkFastReplicator_RegisterInstanceActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Token != nullptr)
		*Token = params.Token;

	return params.ReturnValue;
}


// Function EmbarkFastReplicator.EmbarkFastReplicator.RegisterInstance
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FEmbarkFastReplicatorActorOrComponent Ref                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEmbarkFastReplicatorRegisterToken Token                          (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AEmbarkFastReplicator::RegisterInstance(const struct FEmbarkFastReplicatorActorOrComponent& Ref, struct FEmbarkFastReplicatorRegisterToken* Token)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFastReplicator.EmbarkFastReplicator.RegisterInstance"));

	AEmbarkFastReplicator_RegisterInstance_Params params;
	params.Ref = Ref;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Token != nullptr)
		*Token = params.Token;

	return params.ReturnValue;
}


// Function EmbarkFastReplicator.EmbarkFastReplicator.OnRep_Buckets
// (Final, Native, Protected)

void AEmbarkFastReplicator::OnRep_Buckets()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFastReplicator.EmbarkFastReplicator.OnRep_Buckets"));

	AEmbarkFastReplicator_OnRep_Buckets_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkFastReplicator.EmbarkFastReplicatorCallback.UnregisterCallback_Client
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FEmbarkFastReplicatorActorOrComponent Ref                            (ConstParm, Parm, OutParm, ReferenceParm)

void AEmbarkFastReplicatorCallback::UnregisterCallback_Client(const struct FEmbarkFastReplicatorActorOrComponent& Ref)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFastReplicator.EmbarkFastReplicatorCallback.UnregisterCallback_Client"));

	AEmbarkFastReplicatorCallback_UnregisterCallback_Client_Params params;
	params.Ref = Ref;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkFastReplicator.EmbarkFastReplicatorRegisterTokenScriptMixinLibrary.IsValid
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkFastReplicatorRegisterToken Token                          (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkFastReplicatorRegisterTokenScriptMixinLibrary::STATIC_IsValid(const struct FEmbarkFastReplicatorRegisterToken& Token)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFastReplicator.EmbarkFastReplicatorRegisterTokenScriptMixinLibrary.IsValid"));

	UEmbarkFastReplicatorRegisterTokenScriptMixinLibrary_IsValid_Params params;
	params.Token = Token;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkFastReplicator.EmbarkFastReplicatorActorOrComponentScriptMixinLibrary.IsValid
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkFastReplicatorActorOrComponent Ref                            (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkFastReplicatorActorOrComponentScriptMixinLibrary::STATIC_IsValid(const struct FEmbarkFastReplicatorActorOrComponent& Ref)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFastReplicator.EmbarkFastReplicatorActorOrComponentScriptMixinLibrary.IsValid"));

	UEmbarkFastReplicatorActorOrComponentScriptMixinLibrary_IsValid_Params params;
	params.Ref = Ref;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkFastReplicator.TestEmbarkFastReplicatorMockup.OnCallback
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FEmbarkFastReplicatorActorOrComponent Ref                            (ConstParm, Parm, OutParm, ReferenceParm)

void ATestEmbarkFastReplicatorMockup::OnCallback(const struct FEmbarkFastReplicatorActorOrComponent& Ref)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFastReplicator.TestEmbarkFastReplicatorMockup.OnCallback"));

	ATestEmbarkFastReplicatorMockup_OnCallback_Params params;
	params.Ref = Ref;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkFastReplicator.EmbarkFastReplicatorTransform.UpdateData_Server
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FEmbarkFastReplicatorActorOrComponent Ref                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FReplicatedTransform    NewTransform                   (ConstParm, Parm, OutParm, ReferenceParm)

void AEmbarkFastReplicatorTransform::UpdateData_Server(const struct FEmbarkFastReplicatorActorOrComponent& Ref, const struct FReplicatedTransform& NewTransform)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFastReplicator.EmbarkFastReplicatorTransform.UpdateData_Server"));

	AEmbarkFastReplicatorTransform_UpdateData_Server_Params params;
	params.Ref = Ref;
	params.NewTransform = NewTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkFastReplicator.EmbarkFastReplicatorTransform.RegisterCallback_Client
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FEmbarkFastReplicatorActorOrComponent Ref                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FScriptDelegate         Callback                       (Parm, ZeroConstructor)

void AEmbarkFastReplicatorTransform::RegisterCallback_Client(const struct FEmbarkFastReplicatorActorOrComponent& Ref, const struct FScriptDelegate& Callback)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkFastReplicator.EmbarkFastReplicatorTransform.RegisterCallback_Client"));

	AEmbarkFastReplicatorTransform_RegisterCallback_Client_Params params;
	params.Ref = Ref;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
