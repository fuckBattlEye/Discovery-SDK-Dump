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

// Function EmbarkStateInterpolator.StateInterpolatorComponent.UpdateSettings
// (Final, Native, Public, BlueprintCallable)

void UStateInterpolatorComponent::UpdateSettings()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkStateInterpolator.StateInterpolatorComponent.UpdateSettings"));

	UStateInterpolatorComponent_UpdateSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkStateInterpolator.StateInterpolatorComponent.PreUpdateInputForOwnerEvent_RemoveUFunction
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   FunctionName                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UStateInterpolatorComponent::PreUpdateInputForOwnerEvent_RemoveUFunction(class UObject* Object, const struct FName& FunctionName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkStateInterpolator.StateInterpolatorComponent.PreUpdateInputForOwnerEvent_RemoveUFunction"));

	UStateInterpolatorComponent_PreUpdateInputForOwnerEvent_RemoveUFunction_Params params;
	params.Object = Object;
	params.FunctionName = FunctionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkStateInterpolator.StateInterpolatorComponent.PreUpdateInputForOwnerEvent_AddUFunction
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   FunctionName                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UStateInterpolatorComponent::PreUpdateInputForOwnerEvent_AddUFunction(class UObject* Object, const struct FName& FunctionName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkStateInterpolator.StateInterpolatorComponent.PreUpdateInputForOwnerEvent_AddUFunction"));

	UStateInterpolatorComponent_PreUpdateInputForOwnerEvent_AddUFunction_Params params;
	params.Object = Object;
	params.FunctionName = FunctionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkStateInterpolator.StateInterpolatorComponent.PreUpdateEvent_RemoveFunction
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   FunctionName                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UStateInterpolatorComponent::PreUpdateEvent_RemoveFunction(class UObject* Object, const struct FName& FunctionName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkStateInterpolator.StateInterpolatorComponent.PreUpdateEvent_RemoveFunction"));

	UStateInterpolatorComponent_PreUpdateEvent_RemoveFunction_Params params;
	params.Object = Object;
	params.FunctionName = FunctionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkStateInterpolator.StateInterpolatorComponent.PreUpdateEvent_AddUFunction
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   FunctionName                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UStateInterpolatorComponent::PreUpdateEvent_AddUFunction(class UObject* Object, const struct FName& FunctionName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkStateInterpolator.StateInterpolatorComponent.PreUpdateEvent_AddUFunction"));

	UStateInterpolatorComponent_PreUpdateEvent_AddUFunction_Params params;
	params.Object = Object;
	params.FunctionName = FunctionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkStateInterpolator.StateInterpolatorComponent.IsInitialized
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UStateInterpolatorComponent::IsInitialized()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkStateInterpolator.StateInterpolatorComponent.IsInitialized"));

	UStateInterpolatorComponent_IsInitialized_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkStateInterpolator.StateInterpolatorComponent.HasAnyActiveInterpolator
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UStateInterpolatorComponent::HasAnyActiveInterpolator()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkStateInterpolator.StateInterpolatorComponent.HasAnyActiveInterpolator"));

	UStateInterpolatorComponent_HasAnyActiveInterpolator_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkStateInterpolator.StateInterpolatorComponent.GetStateInterpolatorSubsystem
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UStateInterpolatorSubsystem* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UStateInterpolatorSubsystem* UStateInterpolatorComponent::GetStateInterpolatorSubsystem()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkStateInterpolator.StateInterpolatorComponent.GetStateInterpolatorSubsystem"));

	UStateInterpolatorComponent_GetStateInterpolatorSubsystem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkStateInterpolator.StateInterpolatorComponent.GetStateInterpolator
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  StateClass                     (Parm, ZeroConstructor, IsPlainOldData)
// class UStateInterpolator*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UStateInterpolator* UStateInterpolatorComponent::GetStateInterpolator(class UClass* StateClass)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkStateInterpolator.StateInterpolatorComponent.GetStateInterpolator"));

	UStateInterpolatorComponent_GetStateInterpolator_Params params;
	params.StateClass = StateClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkStateInterpolator.StateInterpolatorComponent.GetStateInstanceId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Key                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FStateInstanceId        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FStateInstanceId UStateInterpolatorComponent::GetStateInstanceId(int Key)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkStateInterpolator.StateInterpolatorComponent.GetStateInstanceId"));

	UStateInterpolatorComponent_GetStateInstanceId_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkStateInterpolator.StateInterpolatorComponent.GetLatestSyncTimestamp
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UStateInterpolatorComponent::GetLatestSyncTimestamp()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkStateInterpolator.StateInterpolatorComponent.GetLatestSyncTimestamp"));

	UStateInterpolatorComponent_GetLatestSyncTimestamp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkStateInterpolator.StateInterpolatorComponent.GetEstimatedLocalInterpolationDelayTarget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UStateInterpolatorComponent::GetEstimatedLocalInterpolationDelayTarget()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkStateInterpolator.StateInterpolatorComponent.GetEstimatedLocalInterpolationDelayTarget"));

	UStateInterpolatorComponent_GetEstimatedLocalInterpolationDelayTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkStateInterpolator.StateInterpolatorComponent.GetDefaultStateInstanceId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FStateInstanceId        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FStateInstanceId UStateInterpolatorComponent::GetDefaultStateInstanceId()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkStateInterpolator.StateInterpolatorComponent.GetDefaultStateInstanceId"));

	UStateInterpolatorComponent_GetDefaultStateInstanceId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkStateInterpolator.StateInterpolatorComponent.GetCurrentTotalInterpolationDelay
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UStateInterpolatorComponent::GetCurrentTotalInterpolationDelay()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkStateInterpolator.StateInterpolatorComponent.GetCurrentTotalInterpolationDelay"));

	UStateInterpolatorComponent_GetCurrentTotalInterpolationDelay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkStateInterpolator.StateInterpolatorComponent.GetCurrentInterpolationTimestamp
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UStateInterpolatorComponent::GetCurrentInterpolationTimestamp()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkStateInterpolator.StateInterpolatorComponent.GetCurrentInterpolationTimestamp"));

	UStateInterpolatorComponent_GetCurrentInterpolationTimestamp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkStateInterpolator.StateInterpolator.HasInstanceForActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UStateInterpolator::HasInstanceForActor(class AActor* Actor)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkStateInterpolator.StateInterpolator.HasInstanceForActor"));

	UStateInterpolator_HasInstanceForActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkStateInterpolator.StateInterpolator.HasInstance
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FStateInstanceId        StateInstance                  (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UStateInterpolator::HasInstance(const struct FStateInstanceId& StateInstance)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkStateInterpolator.StateInterpolator.HasInstance"));

	UStateInterpolator_HasInstance_Params params;
	params.StateInstance = StateInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkStateInterpolator.BPObjectInterpolator.Interpolate_BP
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<class UObject*>         A_Array                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UObject*>         B_Array                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<float>                  Alphas                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UObject*>         OutResults                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBPObjectInterpolator::Interpolate_BP(TArray<class UObject*> A_Array, TArray<class UObject*> B_Array, TArray<float> Alphas, TArray<class UObject*> OutResults)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkStateInterpolator.BPObjectInterpolator.Interpolate_BP"));

	UBPObjectInterpolator_Interpolate_BP_Params params;
	params.A_Array = A_Array;
	params.B_Array = B_Array;
	params.Alphas = Alphas;
	params.OutResults = OutResults;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkStateInterpolator.BPObjectInterpolator.GetObjectType_BP
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UBPObjectInterpolator::GetObjectType_BP()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkStateInterpolator.BPObjectInterpolator.GetObjectType_BP"));

	UBPObjectInterpolator_GetObjectType_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkStateInterpolator.BPObjectInterpolator.GetLatestStateObj_BP
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FStateInstanceId        InstanceId                     (ConstParm, Parm, OutParm, ReferenceParm)
// class UObject*                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UBPObjectInterpolator::GetLatestStateObj_BP(const struct FStateInstanceId& InstanceId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkStateInterpolator.BPObjectInterpolator.GetLatestStateObj_BP"));

	UBPObjectInterpolator_GetLatestStateObj_BP_Params params;
	params.InstanceId = InstanceId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkStateInterpolator.BPObjectInterpolator.GetInterpolatedStateObj_BP
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FStateInstanceId        InstanceId                     (ConstParm, Parm, OutParm, ReferenceParm)
// class UObject*                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UBPObjectInterpolator::GetInterpolatedStateObj_BP(const struct FStateInstanceId& InstanceId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkStateInterpolator.BPObjectInterpolator.GetInterpolatedStateObj_BP"));

	UBPObjectInterpolator_GetInterpolatedStateObj_BP_Params params;
	params.InstanceId = InstanceId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkStateInterpolator.BPObjectInterpolator.GetInputStateObj_BP
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FStateInstanceId        InstanceId                     (ConstParm, Parm, OutParm, ReferenceParm)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UBPObjectInterpolator::GetInputStateObj_BP(const struct FStateInstanceId& InstanceId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkStateInterpolator.BPObjectInterpolator.GetInputStateObj_BP"));

	UBPObjectInterpolator_GetInputStateObj_BP_Params params;
	params.InstanceId = InstanceId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkStateInterpolator.InterpolatedTestActor.SetVelocity
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Velocity                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AInterpolatedTestActor::SetVelocity(const struct FVector& Velocity)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkStateInterpolator.InterpolatedTestActor.SetVelocity"));

	AInterpolatedTestActor_SetVelocity_Params params;
	params.Velocity = Velocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkStateInterpolator.InterpolatedTestActor.SetAngularVelocity
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Velocity                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AInterpolatedTestActor::SetAngularVelocity(const struct FVector& Velocity)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkStateInterpolator.InterpolatedTestActor.SetAngularVelocity"));

	AInterpolatedTestActor_SetAngularVelocity_Params params;
	params.Velocity = Velocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkStateInterpolator.InterpolatedTestActor.OnRep_Transform
// (Final, Native, Public)

void AInterpolatedTestActor::OnRep_Transform()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkStateInterpolator.InterpolatedTestActor.OnRep_Transform"));

	AInterpolatedTestActor_OnRep_Transform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkStateInterpolator.InterpolationUtilsStatics.SinusoidalVector
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 A                              (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 B                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Alpha                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UInterpolationUtilsStatics::STATIC_SinusoidalVector(const struct FVector& A, const struct FVector& B, float Alpha)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkStateInterpolator.InterpolationUtilsStatics.SinusoidalVector"));

	UInterpolationUtilsStatics_SinusoidalVector_Params params;
	params.A = A;
	params.B = B;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkStateInterpolator.InterpolationUtilsStatics.SinusoidalFloat
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          A                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          B                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Alpha                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UInterpolationUtilsStatics::STATIC_SinusoidalFloat(float A, float B, float Alpha)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkStateInterpolator.InterpolationUtilsStatics.SinusoidalFloat"));

	UInterpolationUtilsStatics_SinusoidalFloat_Params params;
	params.A = A;
	params.B = B;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkStateInterpolator.InterpolationUtilsStatics.MinInt
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            A                              (Parm, ZeroConstructor, IsPlainOldData)
// int                            B                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Alpha                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UInterpolationUtilsStatics::STATIC_MinInt(int A, int B, float Alpha)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkStateInterpolator.InterpolationUtilsStatics.MinInt"));

	UInterpolationUtilsStatics_MinInt_Params params;
	params.A = A;
	params.B = B;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkStateInterpolator.InterpolationUtilsStatics.MinFloat
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          A                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          B                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Alpha                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UInterpolationUtilsStatics::STATIC_MinFloat(float A, float B, float Alpha)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkStateInterpolator.InterpolationUtilsStatics.MinFloat"));

	UInterpolationUtilsStatics_MinFloat_Params params;
	params.A = A;
	params.B = B;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkStateInterpolator.InterpolationUtilsStatics.MinBool
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           A                              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           B                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Alpha                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInterpolationUtilsStatics::STATIC_MinBool(bool A, bool B, float Alpha)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkStateInterpolator.InterpolationUtilsStatics.MinBool"));

	UInterpolationUtilsStatics_MinBool_Params params;
	params.A = A;
	params.B = B;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkStateInterpolator.InterpolationUtilsStatics.MaxInt
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            A                              (Parm, ZeroConstructor, IsPlainOldData)
// int                            B                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Alpha                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UInterpolationUtilsStatics::STATIC_MaxInt(int A, int B, float Alpha)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkStateInterpolator.InterpolationUtilsStatics.MaxInt"));

	UInterpolationUtilsStatics_MaxInt_Params params;
	params.A = A;
	params.B = B;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkStateInterpolator.InterpolationUtilsStatics.MaxFloat
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          A                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          B                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Alpha                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UInterpolationUtilsStatics::STATIC_MaxFloat(float A, float B, float Alpha)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkStateInterpolator.InterpolationUtilsStatics.MaxFloat"));

	UInterpolationUtilsStatics_MaxFloat_Params params;
	params.A = A;
	params.B = B;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkStateInterpolator.InterpolationUtilsStatics.MaxBool
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           A                              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           B                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Alpha                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInterpolationUtilsStatics::STATIC_MaxBool(bool A, bool B, float Alpha)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkStateInterpolator.InterpolationUtilsStatics.MaxBool"));

	UInterpolationUtilsStatics_MaxBool_Params params;
	params.A = A;
	params.B = B;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkStateInterpolator.InterpolationUtilsStatics.LinearVector
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 A                              (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 B                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Alpha                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UInterpolationUtilsStatics::STATIC_LinearVector(const struct FVector& A, const struct FVector& B, float Alpha)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkStateInterpolator.InterpolationUtilsStatics.LinearVector"));

	UInterpolationUtilsStatics_LinearVector_Params params;
	params.A = A;
	params.B = B;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkStateInterpolator.InterpolationUtilsStatics.LinearFloat
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          A                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          B                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Alpha                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UInterpolationUtilsStatics::STATIC_LinearFloat(float A, float B, float Alpha)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkStateInterpolator.InterpolationUtilsStatics.LinearFloat"));

	UInterpolationUtilsStatics_LinearFloat_Params params;
	params.A = A;
	params.B = B;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkStateInterpolator.InterpolationUtilsStatics.CutoffVector
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 A                              (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 B                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Alpha                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          CutoffPoint                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UInterpolationUtilsStatics::STATIC_CutoffVector(const struct FVector& A, const struct FVector& B, float Alpha, float CutoffPoint)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkStateInterpolator.InterpolationUtilsStatics.CutoffVector"));

	UInterpolationUtilsStatics_CutoffVector_Params params;
	params.A = A;
	params.B = B;
	params.Alpha = Alpha;
	params.CutoffPoint = CutoffPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkStateInterpolator.InterpolationUtilsStatics.CutoffInt
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            A                              (Parm, ZeroConstructor, IsPlainOldData)
// int                            B                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Alpha                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          CutoffPoint                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UInterpolationUtilsStatics::STATIC_CutoffInt(int A, int B, float Alpha, float CutoffPoint)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkStateInterpolator.InterpolationUtilsStatics.CutoffInt"));

	UInterpolationUtilsStatics_CutoffInt_Params params;
	params.A = A;
	params.B = B;
	params.Alpha = Alpha;
	params.CutoffPoint = CutoffPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkStateInterpolator.InterpolationUtilsStatics.CutoffFloat
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          A                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          B                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Alpha                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          CutoffPoint                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UInterpolationUtilsStatics::STATIC_CutoffFloat(float A, float B, float Alpha, float CutoffPoint)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkStateInterpolator.InterpolationUtilsStatics.CutoffFloat"));

	UInterpolationUtilsStatics_CutoffFloat_Params params;
	params.A = A;
	params.B = B;
	params.Alpha = Alpha;
	params.CutoffPoint = CutoffPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkStateInterpolator.InterpolationUtilsStatics.CutoffBool
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           A                              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           B                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Alpha                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          CutoffPoint                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInterpolationUtilsStatics::STATIC_CutoffBool(bool A, bool B, float Alpha, float CutoffPoint)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkStateInterpolator.InterpolationUtilsStatics.CutoffBool"));

	UInterpolationUtilsStatics_CutoffBool_Params params;
	params.A = A;
	params.B = B;
	params.Alpha = Alpha;
	params.CutoffPoint = CutoffPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkStateInterpolator.StateInstanceIdMixinLibrary.IsValid
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FStateInstanceId        StateInstanceId                (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UStateInstanceIdMixinLibrary::STATIC_IsValid(const struct FStateInstanceId& StateInstanceId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkStateInterpolator.StateInstanceIdMixinLibrary.IsValid"));

	UStateInstanceIdMixinLibrary_IsValid_Params params;
	params.StateInstanceId = StateInstanceId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkStateInterpolator.StateInstanceIdMixinLibrary.GetKey
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FStateInstanceId        StateInstanceId                (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UStateInstanceIdMixinLibrary::STATIC_GetKey(const struct FStateInstanceId& StateInstanceId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkStateInterpolator.StateInstanceIdMixinLibrary.GetKey"));

	UStateInstanceIdMixinLibrary_GetKey_Params params;
	params.StateInstanceId = StateInstanceId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkStateInterpolator.StateInstanceIdMixinLibrary.GetActor
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FStateInstanceId        StateInstanceId                (ConstParm, Parm, OutParm, ReferenceParm)
// class AActor*                  ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UStateInstanceIdMixinLibrary::STATIC_GetActor(const struct FStateInstanceId& StateInstanceId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkStateInterpolator.StateInstanceIdMixinLibrary.GetActor"));

	UStateInstanceIdMixinLibrary_GetActor_Params params;
	params.StateInstanceId = StateInstanceId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkStateInterpolator.StateInterpolatorSubsystem.SetGlobalMinInterpolationReplicationDelayOverride
// (Final, Native, Public)
// Parameters:
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)

void UStateInterpolatorSubsystem::SetGlobalMinInterpolationReplicationDelayOverride(float Delay)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkStateInterpolator.StateInterpolatorSubsystem.SetGlobalMinInterpolationReplicationDelayOverride"));

	UStateInterpolatorSubsystem_SetGlobalMinInterpolationReplicationDelayOverride_Params params;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkStateInterpolator.StateInterpolatorSubsystem.SetDebugModeForInstanceOnInterpolator
// (Final, Native, Public, HasOutParms)
// Parameters:
// class UClass*                  StateInterpolatorClass         (Parm, ZeroConstructor, IsPlainOldData)
// struct FStateInstanceId        StateInstance                  (ConstParm, Parm, OutParm, ReferenceParm)
// enum class EStateInterpolatorDebugMode DebugMode                      (Parm, ZeroConstructor, IsPlainOldData)

void UStateInterpolatorSubsystem::SetDebugModeForInstanceOnInterpolator(class UClass* StateInterpolatorClass, const struct FStateInstanceId& StateInstance, enum class EStateInterpolatorDebugMode DebugMode)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkStateInterpolator.StateInterpolatorSubsystem.SetDebugModeForInstanceOnInterpolator"));

	UStateInterpolatorSubsystem_SetDebugModeForInstanceOnInterpolator_Params params;
	params.StateInterpolatorClass = StateInterpolatorClass;
	params.StateInstance = StateInstance;
	params.DebugMode = DebugMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkStateInterpolator.StateInterpolatorSubsystem.SetDebugModeForInstance
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FStateInstanceId        StateInstance                  (ConstParm, Parm, OutParm, ReferenceParm)
// enum class EStateInterpolatorDebugMode DebugMode                      (Parm, ZeroConstructor, IsPlainOldData)

void UStateInterpolatorSubsystem::SetDebugModeForInstance(const struct FStateInstanceId& StateInstance, enum class EStateInterpolatorDebugMode DebugMode)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkStateInterpolator.StateInterpolatorSubsystem.SetDebugModeForInstance"));

	UStateInterpolatorSubsystem_SetDebugModeForInstance_Params params;
	params.StateInstance = StateInstance;
	params.DebugMode = DebugMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkStateInterpolator.StateInterpolatorSubsystem.SetDebugModeForAllOnInterpolator
// (Final, Native, Public)
// Parameters:
// class UClass*                  StateInterpolatorClass         (Parm, ZeroConstructor, IsPlainOldData)
// enum class EStateInterpolatorDebugMode DebugMode                      (Parm, ZeroConstructor, IsPlainOldData)

void UStateInterpolatorSubsystem::SetDebugModeForAllOnInterpolator(class UClass* StateInterpolatorClass, enum class EStateInterpolatorDebugMode DebugMode)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkStateInterpolator.StateInterpolatorSubsystem.SetDebugModeForAllOnInterpolator"));

	UStateInterpolatorSubsystem_SetDebugModeForAllOnInterpolator_Params params;
	params.StateInterpolatorClass = StateInterpolatorClass;
	params.DebugMode = DebugMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkStateInterpolator.StateInterpolatorSubsystem.SetDebugModeForAll
// (Final, Native, Public)
// Parameters:
// enum class EStateInterpolatorDebugMode DebugMode                      (Parm, ZeroConstructor, IsPlainOldData)

void UStateInterpolatorSubsystem::SetDebugModeForAll(enum class EStateInterpolatorDebugMode DebugMode)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkStateInterpolator.StateInterpolatorSubsystem.SetDebugModeForAll"));

	UStateInterpolatorSubsystem_SetDebugModeForAll_Params params;
	params.DebugMode = DebugMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkStateInterpolator.StateInterpolatorSubsystem.SetDebugModeForActorOnInterpolator
// (Final, Native, Public)
// Parameters:
// class UClass*                  StateInterpolatorClass         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// enum class EStateInterpolatorDebugMode DebugMode                      (Parm, ZeroConstructor, IsPlainOldData)

void UStateInterpolatorSubsystem::SetDebugModeForActorOnInterpolator(class UClass* StateInterpolatorClass, class AActor* Actor, enum class EStateInterpolatorDebugMode DebugMode)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkStateInterpolator.StateInterpolatorSubsystem.SetDebugModeForActorOnInterpolator"));

	UStateInterpolatorSubsystem_SetDebugModeForActorOnInterpolator_Params params;
	params.StateInterpolatorClass = StateInterpolatorClass;
	params.Actor = Actor;
	params.DebugMode = DebugMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkStateInterpolator.StateInterpolatorSubsystem.SetDebugModeForActor
// (Final, Native, Public)
// Parameters:
// class AActor*                  Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// enum class EStateInterpolatorDebugMode DebugMode                      (Parm, ZeroConstructor, IsPlainOldData)

void UStateInterpolatorSubsystem::SetDebugModeForActor(class AActor* Actor, enum class EStateInterpolatorDebugMode DebugMode)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkStateInterpolator.StateInterpolatorSubsystem.SetDebugModeForActor"));

	UStateInterpolatorSubsystem_SetDebugModeForActor_Params params;
	params.Actor = Actor;
	params.DebugMode = DebugMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkStateInterpolator.StateInterpolatorSubsystem.ManuallySetActorHasNewState
// (Final, Native, Public)
// Parameters:
// class AActor*                  Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UStateInterpolatorSubsystem::ManuallySetActorHasNewState(class AActor* Actor)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkStateInterpolator.StateInterpolatorSubsystem.ManuallySetActorHasNewState"));

	UStateInterpolatorSubsystem_ManuallySetActorHasNewState_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkStateInterpolator.StateInterpolatorStatics.GetSubsystem
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UStateInterpolatorSubsystem* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UStateInterpolatorSubsystem* UStateInterpolatorStatics::STATIC_GetSubsystem(class UObject* WorldContextObject)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkStateInterpolator.StateInterpolatorStatics.GetSubsystem"));

	UStateInterpolatorStatics_GetSubsystem_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkStateInterpolator.TransformInterpolator.SetInput
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FStateInstanceId        InstanceId                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FTransformInterpolatorData InputData                      (ConstParm, Parm, OutParm, ReferenceParm)

void UTransformInterpolator::SetInput(const struct FStateInstanceId& InstanceId, const struct FTransformInterpolatorData& InputData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkStateInterpolator.TransformInterpolator.SetInput"));

	UTransformInterpolator_SetInput_Params params;
	params.InstanceId = InstanceId;
	params.InputData = InputData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkStateInterpolator.TransformInterpolator.GetLatestState
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FStateInstanceId        InstanceId                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FTransformInterpolatorData OutTransformInterpolatorData   (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTransformInterpolator::GetLatestState(const struct FStateInstanceId& InstanceId, struct FTransformInterpolatorData* OutTransformInterpolatorData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkStateInterpolator.TransformInterpolator.GetLatestState"));

	UTransformInterpolator_GetLatestState_Params params;
	params.InstanceId = InstanceId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTransformInterpolatorData != nullptr)
		*OutTransformInterpolatorData = params.OutTransformInterpolatorData;

	return params.ReturnValue;
}


// Function EmbarkStateInterpolator.TransformInterpolator.GetInterpolatedState
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FStateInstanceId        InstanceId                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FTransformInterpolatorData OutTransformInterpolatorData   (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTransformInterpolator::GetInterpolatedState(const struct FStateInstanceId& InstanceId, struct FTransformInterpolatorData* OutTransformInterpolatorData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkStateInterpolator.TransformInterpolator.GetInterpolatedState"));

	UTransformInterpolator_GetInterpolatedState_Params params;
	params.InstanceId = InstanceId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTransformInterpolatorData != nullptr)
		*OutTransformInterpolatorData = params.OutTransformInterpolatorData;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
