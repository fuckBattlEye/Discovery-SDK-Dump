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

// Function EmbarkAnimationRuntime.AnimNotify_EmbarkPlaySound.PlaySound
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class USkeletalMeshComponent*  MeshComp                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UAnimSequenceBase*       Animation                      (Parm, ZeroConstructor, IsPlainOldData)

void UAnimNotify_EmbarkPlaySound::PlaySound(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAnimationRuntime.AnimNotify_EmbarkPlaySound.PlaySound"));

	UAnimNotify_EmbarkPlaySound_PlaySound_Params params;
	params.MeshComp = MeshComp;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAnimationRuntime.EmbarkAnimInstance_Base.SetVariableContainerObjectForCompiledPinExpressions
// (Final, Native, Public)
// Parameters:
// class UObject*                 ContainerObject                (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkAnimInstance_Base::SetVariableContainerObjectForCompiledPinExpressions(class UObject* ContainerObject)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAnimationRuntime.EmbarkAnimInstance_Base.SetVariableContainerObjectForCompiledPinExpressions"));

	UEmbarkAnimInstance_Base_SetVariableContainerObjectForCompiledPinExpressions_Params params;
	params.ContainerObject = ContainerObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAnimationRuntime.EmbarkAnimInstance_Base.RandomIntInRange_Threadsafe
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            Min                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            Max                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UEmbarkAnimInstance_Base::RandomIntInRange_Threadsafe(int Min, int Max)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAnimationRuntime.EmbarkAnimInstance_Base.RandomIntInRange_Threadsafe"));

	UEmbarkAnimInstance_Base_RandomIntInRange_Threadsafe_Params params;
	params.Min = Min;
	params.Max = Max;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAnimationRuntime.EmbarkAnimInstance_Base.RandomFloatInRange_Threadsafe
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Min                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Max                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UEmbarkAnimInstance_Base::RandomFloatInRange_Threadsafe(float Min, float Max)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAnimationRuntime.EmbarkAnimInstance_Base.RandomFloatInRange_Threadsafe"));

	UEmbarkAnimInstance_Base_RandomFloatInRange_Threadsafe_Params params;
	params.Min = Min;
	params.Max = Max;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAnimationRuntime.EmbarkAnimInstance_Base.IsValid_Threadsafe
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 InObject                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkAnimInstance_Base::IsValid_Threadsafe(class UObject* InObject)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAnimationRuntime.EmbarkAnimInstance_Base.IsValid_Threadsafe"));

	UEmbarkAnimInstance_Base_IsValid_Threadsafe_Params params;
	params.InObject = InObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAnimationRuntime.EmbarkAnimInstance_Base.GetAdditiveBaseSequence
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAnimSequence*           InSequence                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          Time                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UAnimSequence*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimSequence* UEmbarkAnimInstance_Base::GetAdditiveBaseSequence(class UAnimSequence* InSequence, float* Time)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAnimationRuntime.EmbarkAnimInstance_Base.GetAdditiveBaseSequence"));

	UEmbarkAnimInstance_Base_GetAdditiveBaseSequence_Params params;
	params.InSequence = InSequence;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Time != nullptr)
		*Time = params.Time;

	return params.ReturnValue;
}


// Function EmbarkAnimationRuntime.EmbarkAnimInstance_Base.CalculatePlayRateToSpecifiedPoint
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Endpoint                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UEmbarkAnimInstance_Base::CalculatePlayRateToSpecifiedPoint(float Duration, float Endpoint)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAnimationRuntime.EmbarkAnimInstance_Base.CalculatePlayRateToSpecifiedPoint"));

	UEmbarkAnimInstance_Base_CalculatePlayRateToSpecifiedPoint_Params params;
	params.Duration = Duration;
	params.Endpoint = Endpoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAnimationRuntime.EmbarkAnimInstance_Base.BlueprintPreUpdateAnimationGameThread
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkAnimInstance_Base::BlueprintPreUpdateAnimationGameThread(float DeltaTimeX)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAnimationRuntime.EmbarkAnimInstance_Base.BlueprintPreUpdateAnimationGameThread"));

	UEmbarkAnimInstance_Base_BlueprintPreUpdateAnimationGameThread_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAnimationRuntime.EmbarkAnimInstance_Base.BlueprintPreUpdateAnimationAnyThread
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkAnimInstance_Base::BlueprintPreUpdateAnimationAnyThread(float DeltaTimeX)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAnimationRuntime.EmbarkAnimInstance_Base.BlueprintPreUpdateAnimationAnyThread"));

	UEmbarkAnimInstance_Base_BlueprintPreUpdateAnimationAnyThread_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAnimationRuntime.EmbarkAnimInstance_Base.BlueprintPostUpdateAnimationGameThread
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkAnimInstance_Base::BlueprintPostUpdateAnimationGameThread(float DeltaTimeX)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAnimationRuntime.EmbarkAnimInstance_Base.BlueprintPostUpdateAnimationGameThread"));

	UEmbarkAnimInstance_Base_BlueprintPostUpdateAnimationGameThread_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAnimationRuntime.EmbarkAnimStateUpdaterComponent.StartTicking
// (Event, Public, BlueprintEvent)

void UEmbarkAnimStateUpdaterComponent::StartTicking()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAnimationRuntime.EmbarkAnimStateUpdaterComponent.StartTicking"));

	UEmbarkAnimStateUpdaterComponent_StartTicking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAnimationRuntime.EmbarkAnimStateUpdaterComponent.SetPairedMeshComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  Comp                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UEmbarkAnimStateUpdaterComponent::SetPairedMeshComponent(class USkeletalMeshComponent* Comp)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAnimationRuntime.EmbarkAnimStateUpdaterComponent.SetPairedMeshComponent"));

	UEmbarkAnimStateUpdaterComponent_SetPairedMeshComponent_Params params;
	params.Comp = Comp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAnimationRuntime.EmbarkAnimStateUpdaterComponent.ParallelTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkAnimStateUpdaterComponent::ParallelTick(float DeltaSeconds)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAnimationRuntime.EmbarkAnimStateUpdaterComponent.ParallelTick"));

	UEmbarkAnimStateUpdaterComponent_ParallelTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAnimationRuntime.EmbarkAnimStateUpdaterComponent.MainThreadPreParallelTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkAnimStateUpdaterComponent::MainThreadPreParallelTick(float DeltaSeconds)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAnimationRuntime.EmbarkAnimStateUpdaterComponent.MainThreadPreParallelTick"));

	UEmbarkAnimStateUpdaterComponent_MainThreadPreParallelTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAnimationRuntime.EmbarkAnimStateUpdaterComponent.MainThreadDebugDraw
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkAnimStateUpdaterComponent::MainThreadDebugDraw(float DeltaSeconds)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAnimationRuntime.EmbarkAnimStateUpdaterComponent.MainThreadDebugDraw"));

	UEmbarkAnimStateUpdaterComponent_MainThreadDebugDraw_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAnimationRuntime.EmbarkAnimStateUpdaterSystem.RegisterStateUpdaterComponent
// (Final, Native, Public)
// Parameters:
// class UEmbarkAnimStateUpdaterComponent* StateUpdaterComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USkeletalMeshComponent*  MeshComponent                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AEmbarkAnimStateUpdaterSystem::RegisterStateUpdaterComponent(class UEmbarkAnimStateUpdaterComponent* StateUpdaterComponent, class USkeletalMeshComponent* MeshComponent)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAnimationRuntime.EmbarkAnimStateUpdaterSystem.RegisterStateUpdaterComponent"));

	AEmbarkAnimStateUpdaterSystem_RegisterStateUpdaterComponent_Params params;
	params.StateUpdaterComponent = StateUpdaterComponent;
	params.MeshComponent = MeshComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAnimationRuntime.EmbarkAnimStateUpdaterSystem.DeregisterStateUpdaterComponent
// (Final, Native, Public)
// Parameters:
// class UEmbarkAnimStateUpdaterComponent* StateUpdaterComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AEmbarkAnimStateUpdaterSystem::DeregisterStateUpdaterComponent(class UEmbarkAnimStateUpdaterComponent* StateUpdaterComponent)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAnimationRuntime.EmbarkAnimStateUpdaterSystem.DeregisterStateUpdaterComponent"));

	AEmbarkAnimStateUpdaterSystem_DeregisterStateUpdaterComponent_Params params;
	params.StateUpdaterComponent = StateUpdaterComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
