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

// Function EmbarkGlobalActor.EmbarkGlobalActorFactorySubsystem.ReceiveShouldCreateSubsystem
// (Native, Event, Protected, BlueprintEvent, Const)
// Parameters:
// class UObject*                 Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkGlobalActorFactorySubsystem::ReceiveShouldCreateSubsystem(class UObject* Outer)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGlobalActor.EmbarkGlobalActorFactorySubsystem.ReceiveShouldCreateSubsystem"));

	UEmbarkGlobalActorFactorySubsystem_ReceiveShouldCreateSubsystem_Params params;
	params.Outer = Outer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkGlobalActor.EmbarkGlobalActorFactorySubsystem.ReceivePostInitialize
// (Event, Protected, BlueprintEvent)

void UEmbarkGlobalActorFactorySubsystem::ReceivePostInitialize()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGlobalActor.EmbarkGlobalActorFactorySubsystem.ReceivePostInitialize"));

	UEmbarkGlobalActorFactorySubsystem_ReceivePostInitialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGlobalActor.EmbarkGlobalActorFactorySubsystem.ReceiveOnInitialize
// (Event, Protected, BlueprintEvent)

void UEmbarkGlobalActorFactorySubsystem::ReceiveOnInitialize()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGlobalActor.EmbarkGlobalActorFactorySubsystem.ReceiveOnInitialize"));

	UEmbarkGlobalActorFactorySubsystem_ReceiveOnInitialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkGlobalActor.EmbarkGameplayGlobalActorFactorySubsystemBase.GetTransformFastReplicator
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AEmbarkFastReplicatorTransform* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AEmbarkFastReplicatorTransform* UEmbarkGameplayGlobalActorFactorySubsystemBase::GetTransformFastReplicator()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkGlobalActor.EmbarkGameplayGlobalActorFactorySubsystemBase.GetTransformFastReplicator"));

	UEmbarkGameplayGlobalActorFactorySubsystemBase_GetTransformFastReplicator_Params params;

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
