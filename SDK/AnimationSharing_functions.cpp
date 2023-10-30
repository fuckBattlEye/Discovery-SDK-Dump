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

// Function AnimationSharing.AnimSharingStateInstance.GetInstancedActors
// (Final, Native, Protected, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class AActor*>          Actors                         (Parm, OutParm, ZeroConstructor)

void UAnimSharingStateInstance::GetInstancedActors(TArray<class AActor*>* Actors)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AnimationSharing.AnimSharingStateInstance.GetInstancedActors"));

	UAnimSharingStateInstance_GetInstancedActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Actors != nullptr)
		*Actors = params.Actors;
}


// Function AnimationSharing.AnimationSharingManager.RegisterActorWithSkeletonBP
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData)
// class USkeleton*               SharingSkeleton                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAnimationSharingManager::RegisterActorWithSkeletonBP(class AActor* InActor, class USkeleton* SharingSkeleton)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AnimationSharing.AnimationSharingManager.RegisterActorWithSkeletonBP"));

	UAnimationSharingManager_RegisterActorWithSkeletonBP_Params params;
	params.InActor = InActor;
	params.SharingSkeleton = SharingSkeleton;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimationSharing.AnimationSharingManager.GetAnimationSharingManager
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimationSharingManager* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimationSharingManager* UAnimationSharingManager::STATIC_GetAnimationSharingManager(class UObject* WorldContextObject)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AnimationSharing.AnimationSharingManager.GetAnimationSharingManager"));

	UAnimationSharingManager_GetAnimationSharingManager_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnimationSharing.AnimationSharingManager.CreateAnimationSharingManager
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimationSharingSetup*  Setup                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAnimationSharingManager::STATIC_CreateAnimationSharingManager(class UObject* WorldContextObject, class UAnimationSharingSetup* Setup)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AnimationSharing.AnimationSharingManager.CreateAnimationSharingManager"));

	UAnimationSharingManager_CreateAnimationSharingManager_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Setup = Setup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnimationSharing.AnimationSharingManager.AnimationSharingEnabled
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAnimationSharingManager::STATIC_AnimationSharingEnabled()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AnimationSharing.AnimationSharingManager.AnimationSharingEnabled"));

	UAnimationSharingManager_AnimationSharingEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnimationSharing.AnimationSharingStateProcessor.ProcessActorState
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// int                            OutState                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  CurrentState                   (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  OnDemandState                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bShouldProcess                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAnimationSharingStateProcessor::ProcessActorState(class AActor* InActor, unsigned char CurrentState, unsigned char OnDemandState, int* OutState, bool* bShouldProcess)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AnimationSharing.AnimationSharingStateProcessor.ProcessActorState"));

	UAnimationSharingStateProcessor_ProcessActorState_Params params;
	params.InActor = InActor;
	params.CurrentState = CurrentState;
	params.OnDemandState = OnDemandState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutState != nullptr)
		*OutState = params.OutState;
	if (bShouldProcess != nullptr)
		*bShouldProcess = params.bShouldProcess;
}


// Function AnimationSharing.AnimationSharingStateProcessor.GetAnimationStateEnum
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UEnum*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UEnum* UAnimationSharingStateProcessor::GetAnimationStateEnum()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AnimationSharing.AnimationSharingStateProcessor.GetAnimationStateEnum"));

	UAnimationSharingStateProcessor_GetAnimationStateEnum_Params params;

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
