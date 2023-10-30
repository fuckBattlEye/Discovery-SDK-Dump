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

// Function EmbarkAbilitySystem.EmbarkAbilitySystemComponent.UnregisterGameplayTagEventWithParentRangeAll
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayTag            StartTag                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            EndTag                         (ConstParm, Parm, OutParm, ReferenceParm)
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EGameplayTagEventType> EventType                      (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkAbilitySystemComponent::UnregisterGameplayTagEventWithParentRangeAll(const struct FGameplayTag& StartTag, const struct FGameplayTag& EndTag, class UObject* Object, TEnumAsByte<EGameplayTagEventType> EventType)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAbilitySystem.EmbarkAbilitySystemComponent.UnregisterGameplayTagEventWithParentRangeAll"));

	UEmbarkAbilitySystemComponent_UnregisterGameplayTagEventWithParentRangeAll_Params params;
	params.StartTag = StartTag;
	params.EndTag = EndTag;
	params.Object = Object;
	params.EventType = EventType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAbilitySystem.EmbarkAbilitySystemComponent.UnregisterGameplayTagEventWithParentRange
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayTag            StartTag                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            EndTag                         (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<struct FDelegateHandleHolder> DelegateHolders                (Parm, OutParm, ZeroConstructor)
// TEnumAsByte<EGameplayTagEventType> EventType                      (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkAbilitySystemComponent::UnregisterGameplayTagEventWithParentRange(const struct FGameplayTag& StartTag, const struct FGameplayTag& EndTag, TEnumAsByte<EGameplayTagEventType> EventType, TArray<struct FDelegateHandleHolder>* DelegateHolders)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAbilitySystem.EmbarkAbilitySystemComponent.UnregisterGameplayTagEventWithParentRange"));

	UEmbarkAbilitySystemComponent_UnregisterGameplayTagEventWithParentRange_Params params;
	params.StartTag = StartTag;
	params.EndTag = EndTag;
	params.EventType = EventType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DelegateHolders != nullptr)
		*DelegateHolders = params.DelegateHolders;
}


// Function EmbarkAbilitySystem.EmbarkAbilitySystemComponent.UnregisterGameplayTagEventsExactAll
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayTag            Tag                            (ConstParm, Parm, OutParm, ReferenceParm)
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EGameplayTagEventType> EventType                      (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkAbilitySystemComponent::UnregisterGameplayTagEventsExactAll(const struct FGameplayTag& Tag, class UObject* Object, TEnumAsByte<EGameplayTagEventType> EventType)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAbilitySystem.EmbarkAbilitySystemComponent.UnregisterGameplayTagEventsExactAll"));

	UEmbarkAbilitySystemComponent_UnregisterGameplayTagEventsExactAll_Params params;
	params.Tag = Tag;
	params.Object = Object;
	params.EventType = EventType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAbilitySystem.EmbarkAbilitySystemComponent.UnregisterGameplayTagEventExact
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayTag            Tag                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FDelegateHandleHolder   DelegateHolder                 (Parm)
// TEnumAsByte<EGameplayTagEventType> EventType                      (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkAbilitySystemComponent::UnregisterGameplayTagEventExact(const struct FGameplayTag& Tag, const struct FDelegateHandleHolder& DelegateHolder, TEnumAsByte<EGameplayTagEventType> EventType)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAbilitySystem.EmbarkAbilitySystemComponent.UnregisterGameplayTagEventExact"));

	UEmbarkAbilitySystemComponent_UnregisterGameplayTagEventExact_Params params;
	params.Tag = Tag;
	params.DelegateHolder = DelegateHolder;
	params.EventType = EventType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAbilitySystem.EmbarkAbilitySystemComponent.TryActivateAllAbilitiesByClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  InAbilityToActivate            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAllowRemoteActivation         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkAbilitySystemComponent::TryActivateAllAbilitiesByClass(class UClass* InAbilityToActivate, bool bAllowRemoteActivation)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAbilitySystem.EmbarkAbilitySystemComponent.TryActivateAllAbilitiesByClass"));

	UEmbarkAbilitySystemComponent_TryActivateAllAbilitiesByClass_Params params;
	params.InAbilityToActivate = InAbilityToActivate;
	params.bAllowRemoteActivation = bAllowRemoteActivation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAbilitySystem.EmbarkAbilitySystemComponent.TriggerAbilityFromGameplayEvent
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayAbilitySpecHandle Handle                         (Parm)
// struct FGameplayTag            EventTag                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayEventData      Payload                        (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkAbilitySystemComponent::TriggerAbilityFromGameplayEvent(const struct FGameplayAbilitySpecHandle& Handle, const struct FGameplayTag& EventTag, const struct FGameplayEventData& Payload)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAbilitySystem.EmbarkAbilitySystemComponent.TriggerAbilityFromGameplayEvent"));

	UEmbarkAbilitySystemComponent_TriggerAbilityFromGameplayEvent_Params params;
	params.Handle = Handle;
	params.EventTag = EventTag;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAbilitySystem.EmbarkAbilitySystemComponent.RegisterGameplayTagEventWithParentRange
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayTag            StartTag                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            EndTag                         (ConstParm, Parm, OutParm, ReferenceParm)
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   FunctionName                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TEnumAsByte<EGameplayTagEventType> EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FDelegateHandleHolder> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FDelegateHandleHolder> UEmbarkAbilitySystemComponent::RegisterGameplayTagEventWithParentRange(const struct FGameplayTag& StartTag, const struct FGameplayTag& EndTag, class UObject* Object, const struct FName& FunctionName, TEnumAsByte<EGameplayTagEventType> EventType)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAbilitySystem.EmbarkAbilitySystemComponent.RegisterGameplayTagEventWithParentRange"));

	UEmbarkAbilitySystemComponent_RegisterGameplayTagEventWithParentRange_Params params;
	params.StartTag = StartTag;
	params.EndTag = EndTag;
	params.Object = Object;
	params.FunctionName = FunctionName;
	params.EventType = EventType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAbilitySystem.EmbarkAbilitySystemComponent.RegisterGameplayTagEventExact
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayTag            Tag                            (ConstParm, Parm, OutParm, ReferenceParm)
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   FunctionName                   (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EGameplayTagEventType> EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FDelegateHandleHolder   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FDelegateHandleHolder UEmbarkAbilitySystemComponent::RegisterGameplayTagEventExact(const struct FGameplayTag& Tag, class UObject* Object, const struct FName& FunctionName, TEnumAsByte<EGameplayTagEventType> EventType)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAbilitySystem.EmbarkAbilitySystemComponent.RegisterGameplayTagEventExact"));

	UEmbarkAbilitySystemComponent_RegisterGameplayTagEventExact_Params params;
	params.Tag = Tag;
	params.Object = Object;
	params.FunctionName = FunctionName;
	params.EventType = EventType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAbilitySystem.EmbarkAbilitySystemComponent.EndEmbarkAbilityByHandle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayAbilitySpecHandle Handle                         (Parm)

void UEmbarkAbilitySystemComponent::EndEmbarkAbilityByHandle(const struct FGameplayAbilitySpecHandle& Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAbilitySystem.EmbarkAbilitySystemComponent.EndEmbarkAbilityByHandle"));

	UEmbarkAbilitySystemComponent_EndEmbarkAbilityByHandle_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAbilitySystem.EmbarkAbilitySystemComponent.EndEmbarkAbilitiesByTags
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer   WithTags                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   WithoutTags                    (ConstParm, Parm, OutParm, ReferenceParm)

void UEmbarkAbilitySystemComponent::EndEmbarkAbilitiesByTags(const struct FGameplayTagContainer& WithTags, const struct FGameplayTagContainer& WithoutTags)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAbilitySystem.EmbarkAbilitySystemComponent.EndEmbarkAbilitiesByTags"));

	UEmbarkAbilitySystemComponent_EndEmbarkAbilitiesByTags_Params params;
	params.WithTags = WithTags;
	params.WithoutTags = WithoutTags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAbilitySystem.EmbarkAbilitySystemComponent.CancelAllActiveAbilities
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*        Ignore                         (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkAbilitySystemComponent::CancelAllActiveAbilities(class UGameplayAbility* Ignore)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAbilitySystem.EmbarkAbilitySystemComponent.CancelAllActiveAbilities"));

	UEmbarkAbilitySystemComponent_CancelAllActiveAbilities_Params params;
	params.Ignore = Ignore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAbilitySystem.EmbarkAbilitySystemComponent.ApplyGameplayEffectSpecDirectToTarget
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpec     Spec                           (ConstParm, Parm, OutParm, ReferenceParm)
// class UAbilitySystemComponent* Target                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FActiveGameplayEffectHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FActiveGameplayEffectHandle UEmbarkAbilitySystemComponent::ApplyGameplayEffectSpecDirectToTarget(const struct FGameplayEffectSpec& Spec, class UAbilitySystemComponent* Target)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAbilitySystem.EmbarkAbilitySystemComponent.ApplyGameplayEffectSpecDirectToTarget"));

	UEmbarkAbilitySystemComponent_ApplyGameplayEffectSpecDirectToTarget_Params params;
	params.Spec = Spec;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAbilitySystem.EmbarkGameplayAbility.K2_RemoveGameplayCue_Static
// (Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  GameplayCue                    (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkGameplayAbility::K2_RemoveGameplayCue_Static(class UClass* GameplayCue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAbilitySystem.EmbarkGameplayAbility.K2_RemoveGameplayCue_Static"));

	UEmbarkGameplayAbility_K2_RemoveGameplayCue_Static_Params params;
	params.GameplayCue = GameplayCue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAbilitySystem.EmbarkGameplayAbility.K2_RemoveGameplayCue_Actor
// (Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  GameplayCue                    (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkGameplayAbility::K2_RemoveGameplayCue_Actor(class UClass* GameplayCue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAbilitySystem.EmbarkGameplayAbility.K2_RemoveGameplayCue_Actor"));

	UEmbarkGameplayAbility_K2_RemoveGameplayCue_Actor_Params params;
	params.GameplayCue = GameplayCue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAbilitySystem.EmbarkGameplayAbility.K2_OnRemoveAbility
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityActorInfo InActorInfo                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayAbilitySpec    InSpec                         (ConstParm, Parm, OutParm, ReferenceParm)

void UEmbarkGameplayAbility::K2_OnRemoveAbility(const struct FGameplayAbilityActorInfo& InActorInfo, const struct FGameplayAbilitySpec& InSpec)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAbilitySystem.EmbarkGameplayAbility.K2_OnRemoveAbility"));

	UEmbarkGameplayAbility_K2_OnRemoveAbility_Params params;
	params.InActorInfo = InActorInfo;
	params.InSpec = InSpec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAbilitySystem.EmbarkGameplayAbility.K2_OnGiveAbility
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityActorInfo InActorInfo                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayAbilitySpec    InSpec                         (ConstParm, Parm, OutParm, ReferenceParm)

void UEmbarkGameplayAbility::K2_OnGiveAbility(const struct FGameplayAbilityActorInfo& InActorInfo, const struct FGameplayAbilitySpec& InSpec)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAbilitySystem.EmbarkGameplayAbility.K2_OnGiveAbility"));

	UEmbarkGameplayAbility_K2_OnGiveAbility_Params params;
	params.InActorInfo = InActorInfo;
	params.InSpec = InSpec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAbilitySystem.EmbarkGameplayAbility.K2_GetCurrentAbilitySpecHandle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayAbilitySpecHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayAbilitySpecHandle UEmbarkGameplayAbility::K2_GetCurrentAbilitySpecHandle()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAbilitySystem.EmbarkGameplayAbility.K2_GetCurrentAbilitySpecHandle"));

	UEmbarkGameplayAbility_K2_GetCurrentAbilitySpecHandle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAbilitySystem.EmbarkGameplayAbility.K2_ExecuteGameplayCueWithParams_Static
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UClass*                  GameplayCue                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  GameplayCueParameters          (ConstParm, Parm, OutParm, ReferenceParm)

void UEmbarkGameplayAbility::K2_ExecuteGameplayCueWithParams_Static(class UClass* GameplayCue, const struct FGameplayCueParameters& GameplayCueParameters)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAbilitySystem.EmbarkGameplayAbility.K2_ExecuteGameplayCueWithParams_Static"));

	UEmbarkGameplayAbility_K2_ExecuteGameplayCueWithParams_Static_Params params;
	params.GameplayCue = GameplayCue;
	params.GameplayCueParameters = GameplayCueParameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAbilitySystem.EmbarkGameplayAbility.K2_ExecuteGameplayCueWithParams_Actor
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UClass*                  GameplayCue                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  GameplayCueParameters          (ConstParm, Parm, OutParm, ReferenceParm)

void UEmbarkGameplayAbility::K2_ExecuteGameplayCueWithParams_Actor(class UClass* GameplayCue, const struct FGameplayCueParameters& GameplayCueParameters)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAbilitySystem.EmbarkGameplayAbility.K2_ExecuteGameplayCueWithParams_Actor"));

	UEmbarkGameplayAbility_K2_ExecuteGameplayCueWithParams_Actor_Params params;
	params.GameplayCue = GameplayCue;
	params.GameplayCueParameters = GameplayCueParameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAbilitySystem.EmbarkGameplayAbility.K2_ExecuteGameplayCue_Static
// (Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  GameplayCue                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle Context                        (Parm)

void UEmbarkGameplayAbility::K2_ExecuteGameplayCue_Static(class UClass* GameplayCue, const struct FGameplayEffectContextHandle& Context)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAbilitySystem.EmbarkGameplayAbility.K2_ExecuteGameplayCue_Static"));

	UEmbarkGameplayAbility_K2_ExecuteGameplayCue_Static_Params params;
	params.GameplayCue = GameplayCue;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAbilitySystem.EmbarkGameplayAbility.K2_ExecuteGameplayCue_Actor
// (Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  GameplayCue                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle Context                        (Parm)

void UEmbarkGameplayAbility::K2_ExecuteGameplayCue_Actor(class UClass* GameplayCue, const struct FGameplayEffectContextHandle& Context)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAbilitySystem.EmbarkGameplayAbility.K2_ExecuteGameplayCue_Actor"));

	UEmbarkGameplayAbility_K2_ExecuteGameplayCue_Actor_Params params;
	params.GameplayCue = GameplayCue;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAbilitySystem.EmbarkGameplayAbility.K2_CanBeCanceled
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkGameplayAbility::K2_CanBeCanceled()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAbilitySystem.EmbarkGameplayAbility.K2_CanBeCanceled"));

	UEmbarkGameplayAbility_K2_CanBeCanceled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAbilitySystem.EmbarkGameplayAbility.K2_AddGameplayCueWithParams_Static
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UClass*                  GameplayCue                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  GameplayCueParameter           (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bRemoveOnAbilityEnd            (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkGameplayAbility::K2_AddGameplayCueWithParams_Static(class UClass* GameplayCue, const struct FGameplayCueParameters& GameplayCueParameter, bool bRemoveOnAbilityEnd)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAbilitySystem.EmbarkGameplayAbility.K2_AddGameplayCueWithParams_Static"));

	UEmbarkGameplayAbility_K2_AddGameplayCueWithParams_Static_Params params;
	params.GameplayCue = GameplayCue;
	params.GameplayCueParameter = GameplayCueParameter;
	params.bRemoveOnAbilityEnd = bRemoveOnAbilityEnd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAbilitySystem.EmbarkGameplayAbility.K2_AddGameplayCueWithParams_Actor
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UClass*                  GameplayCue                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  GameplayCueParameter           (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bRemoveOnAbilityEnd            (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkGameplayAbility::K2_AddGameplayCueWithParams_Actor(class UClass* GameplayCue, const struct FGameplayCueParameters& GameplayCueParameter, bool bRemoveOnAbilityEnd)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAbilitySystem.EmbarkGameplayAbility.K2_AddGameplayCueWithParams_Actor"));

	UEmbarkGameplayAbility_K2_AddGameplayCueWithParams_Actor_Params params;
	params.GameplayCue = GameplayCue;
	params.GameplayCueParameter = GameplayCueParameter;
	params.bRemoveOnAbilityEnd = bRemoveOnAbilityEnd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAbilitySystem.EmbarkGameplayAbility.K2_AddGameplayCue_Static
// (Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  GameplayCue                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle Context                        (Parm)
// bool                           bRemoveOnAbilityEnd            (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkGameplayAbility::K2_AddGameplayCue_Static(class UClass* GameplayCue, const struct FGameplayEffectContextHandle& Context, bool bRemoveOnAbilityEnd)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAbilitySystem.EmbarkGameplayAbility.K2_AddGameplayCue_Static"));

	UEmbarkGameplayAbility_K2_AddGameplayCue_Static_Params params;
	params.GameplayCue = GameplayCue;
	params.Context = Context;
	params.bRemoveOnAbilityEnd = bRemoveOnAbilityEnd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAbilitySystem.EmbarkGameplayAbility.K2_AddGameplayCue_Actor
// (Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  GameplayCue                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle Context                        (Parm)
// bool                           bRemoveOnAbilityEnd            (Parm, ZeroConstructor, IsPlainOldData)

void UEmbarkGameplayAbility::K2_AddGameplayCue_Actor(class UClass* GameplayCue, const struct FGameplayEffectContextHandle& Context, bool bRemoveOnAbilityEnd)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAbilitySystem.EmbarkGameplayAbility.K2_AddGameplayCue_Actor"));

	UEmbarkGameplayAbility_K2_AddGameplayCue_Actor_Params params;
	params.GameplayCue = GameplayCue;
	params.Context = Context;
	params.bRemoveOnAbilityEnd = bRemoveOnAbilityEnd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAbilitySystem.ActiveGameplayEffectHandleMixinLibrary.GetOwningAbilitySystemComponent
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FActiveGameplayEffectHandle Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// class UAbilitySystemComponent* ReturnValue                    (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAbilitySystemComponent* UActiveGameplayEffectHandleMixinLibrary::STATIC_GetOwningAbilitySystemComponent(const struct FActiveGameplayEffectHandle& Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAbilitySystem.ActiveGameplayEffectHandleMixinLibrary.GetOwningAbilitySystemComponent"));

	UActiveGameplayEffectHandleMixinLibrary_GetOwningAbilitySystemComponent_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAbilitySystem.EmbarkGameplayCueUtils.RemoveLocalGameplayCue
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            GameplayCueTag                 (Parm)
// struct FGameplayCueParameters  Parameters                     (ConstParm, Parm, OutParm, ReferenceParm)

void UEmbarkGameplayCueUtils::STATIC_RemoveLocalGameplayCue(class AActor* TargetActor, const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAbilitySystem.EmbarkGameplayCueUtils.RemoveLocalGameplayCue"));

	UEmbarkGameplayCueUtils_RemoveLocalGameplayCue_Params params;
	params.TargetActor = TargetActor;
	params.GameplayCueTag = GameplayCueTag;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAbilitySystem.EmbarkGameplayCueUtils.ExecuteLocalGameplayCue
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            GameplayCueTag                 (Parm)
// struct FGameplayCueParameters  Parameters                     (ConstParm, Parm, OutParm, ReferenceParm)

void UEmbarkGameplayCueUtils::STATIC_ExecuteLocalGameplayCue(class AActor* TargetActor, const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAbilitySystem.EmbarkGameplayCueUtils.ExecuteLocalGameplayCue"));

	UEmbarkGameplayCueUtils_ExecuteLocalGameplayCue_Params params;
	params.TargetActor = TargetActor;
	params.GameplayCueTag = GameplayCueTag;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAbilitySystem.EmbarkGameplayCueUtils.AddLocalGameplayCue
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            GameplayCueTag                 (Parm)
// struct FGameplayCueParameters  Parameters                     (ConstParm, Parm, OutParm, ReferenceParm)

void UEmbarkGameplayCueUtils::STATIC_AddLocalGameplayCue(class AActor* TargetActor, const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAbilitySystem.EmbarkGameplayCueUtils.AddLocalGameplayCue"));

	UEmbarkGameplayCueUtils_AddLocalGameplayCue_Params params;
	params.TargetActor = TargetActor;
	params.GameplayCueTag = GameplayCueTag;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAbilitySystem.EmbarkAbilitySystemUtils.IsGameplayAbilitySpecHandleValid
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayAbilitySpecHandle Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEmbarkAbilitySystemUtils::STATIC_IsGameplayAbilitySpecHandleValid(const struct FGameplayAbilitySpecHandle& Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAbilitySystem.EmbarkAbilitySystemUtils.IsGameplayAbilitySpecHandleValid"));

	UEmbarkAbilitySystemUtils_IsGameplayAbilitySpecHandleValid_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAbilitySystem.EmbarkAbilitySystemUtils.GetTargetDataLocationInfo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameplayAbilityTargetDataHandle Handle                         (ConstParm, Parm)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayAbilityTargetData_LocationInfo ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayAbilityTargetData_LocationInfo UEmbarkAbilitySystemUtils::STATIC_GetTargetDataLocationInfo(const struct FGameplayAbilityTargetDataHandle& Handle, int Index)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAbilitySystem.EmbarkAbilitySystemUtils.GetTargetDataLocationInfo"));

	UEmbarkAbilitySystemUtils_GetTargetDataLocationInfo_Params params;
	params.Handle = Handle;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAbilitySystem.EmbarkAbilitySystemUtils.CreateEmbarkScriptStructTargetData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameplayAbilityTargetDataHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayAbilityTargetDataHandle UEmbarkAbilitySystemUtils::STATIC_CreateEmbarkScriptStructTargetData()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAbilitySystem.EmbarkAbilitySystemUtils.CreateEmbarkScriptStructTargetData"));

	UEmbarkAbilitySystemUtils_CreateEmbarkScriptStructTargetData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAbilitySystem.AbilitySystemComponentMixinLibrary2.IsAbilityGrantedByEffect
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UAbilitySystemComponent* AbilitySystemComponent         (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FGameplayAbilitySpecHandle Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAbilitySystemComponentMixinLibrary2::STATIC_IsAbilityGrantedByEffect(class UAbilitySystemComponent* AbilitySystemComponent, const struct FGameplayAbilitySpecHandle& Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAbilitySystem.AbilitySystemComponentMixinLibrary2.IsAbilityGrantedByEffect"));

	UAbilitySystemComponentMixinLibrary2_IsAbilityGrantedByEffect_Params params;
	params.AbilitySystemComponent = AbilitySystemComponent;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAbilitySystem.AbilitySystemComponentMixinLibrary2.GetGameplayEffectContext
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UAbilitySystemComponent* AbilitySystemComponent         (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FActiveGameplayEffectHandle Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayEffectContextHandle ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

struct FGameplayEffectContextHandle UAbilitySystemComponentMixinLibrary2::STATIC_GetGameplayEffectContext(class UAbilitySystemComponent* AbilitySystemComponent, const struct FActiveGameplayEffectHandle& Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAbilitySystem.AbilitySystemComponentMixinLibrary2.GetGameplayEffectContext"));

	UAbilitySystemComponentMixinLibrary2_GetGameplayEffectContext_Params params;
	params.AbilitySystemComponent = AbilitySystemComponent;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAbilitySystem.AbilitySystemComponentMixinLibrary2.GetDurationForEffect
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UAbilitySystemComponent* AbilitySystemComponent         (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FActiveGameplayEffectHandle Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAbilitySystemComponentMixinLibrary2::STATIC_GetDurationForEffect(class UAbilitySystemComponent* AbilitySystemComponent, const struct FActiveGameplayEffectHandle& Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAbilitySystem.AbilitySystemComponentMixinLibrary2.GetDurationForEffect"));

	UAbilitySystemComponentMixinLibrary2_GetDurationForEffect_Params params;
	params.AbilitySystemComponent = AbilitySystemComponent;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAbilitySystem.AbilitySystemComponentMixinLibrary2.GetCooldownTimeRemainingAndDurationForAbility
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UAbilitySystemComponent* AbilitySystemComponent         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FGameplayAbilitySpecHandle Handle                         (Parm)
// float                          Cooldown                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAbilitySystemComponentMixinLibrary2::STATIC_GetCooldownTimeRemainingAndDurationForAbility(class UAbilitySystemComponent* AbilitySystemComponent, const struct FGameplayAbilitySpecHandle& Handle, float* Cooldown, float* Duration)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAbilitySystem.AbilitySystemComponentMixinLibrary2.GetCooldownTimeRemainingAndDurationForAbility"));

	UAbilitySystemComponentMixinLibrary2_GetCooldownTimeRemainingAndDurationForAbility_Params params;
	params.AbilitySystemComponent = AbilitySystemComponent;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cooldown != nullptr)
		*Cooldown = params.Cooldown;
	if (Duration != nullptr)
		*Duration = params.Duration;
}


// Function EmbarkAbilitySystem.AbilitySystemComponentMixinLibrary2.GetActivatableGameplayAbilitySpecHandlesByAllMatchingTags
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UAbilitySystemComponent* AbilitySystemComponent         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FGameplayTagContainer   GameplayTagContainer           (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<struct FGameplayAbilitySpecHandle> MatchingGameplayAbilities      (Parm, OutParm, ZeroConstructor)
// bool                           bOnlyAbilitiesThatSatisfyTagRequirements (Parm, ZeroConstructor, IsPlainOldData)

void UAbilitySystemComponentMixinLibrary2::STATIC_GetActivatableGameplayAbilitySpecHandlesByAllMatchingTags(class UAbilitySystemComponent* AbilitySystemComponent, const struct FGameplayTagContainer& GameplayTagContainer, bool bOnlyAbilitiesThatSatisfyTagRequirements, TArray<struct FGameplayAbilitySpecHandle>* MatchingGameplayAbilities)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAbilitySystem.AbilitySystemComponentMixinLibrary2.GetActivatableGameplayAbilitySpecHandlesByAllMatchingTags"));

	UAbilitySystemComponentMixinLibrary2_GetActivatableGameplayAbilitySpecHandlesByAllMatchingTags_Params params;
	params.AbilitySystemComponent = AbilitySystemComponent;
	params.GameplayTagContainer = GameplayTagContainer;
	params.bOnlyAbilitiesThatSatisfyTagRequirements = bOnlyAbilitiesThatSatisfyTagRequirements;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MatchingGameplayAbilities != nullptr)
		*MatchingGameplayAbilities = params.MatchingGameplayAbilities;
}


// Function EmbarkAbilitySystem.AbilitySystemComponentMixinLibrary2.GetAbilityCDO
// (Final, Native, Static, Public)
// Parameters:
// class UAbilitySystemComponent* AbilitySystemComponent         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FGameplayAbilitySpecHandle Handle                         (Parm)
// class UGameplayAbility*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGameplayAbility* UAbilitySystemComponentMixinLibrary2::STATIC_GetAbilityCDO(class UAbilitySystemComponent* AbilitySystemComponent, const struct FGameplayAbilitySpecHandle& Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAbilitySystem.AbilitySystemComponentMixinLibrary2.GetAbilityCDO"));

	UAbilitySystemComponentMixinLibrary2_GetAbilityCDO_Params params;
	params.AbilitySystemComponent = AbilitySystemComponent;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAbilitySystem.AbilitySystemComponentMixinLibrary2.FindActiveGameplayEffectHandle
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UAbilitySystemComponent* AbilitySystemComponent         (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FGameplayAbilitySpecHandle Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FActiveGameplayEffectHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FActiveGameplayEffectHandle UAbilitySystemComponentMixinLibrary2::STATIC_FindActiveGameplayEffectHandle(class UAbilitySystemComponent* AbilitySystemComponent, const struct FGameplayAbilitySpecHandle& Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAbilitySystem.AbilitySystemComponentMixinLibrary2.FindActiveGameplayEffectHandle"));

	UAbilitySystemComponentMixinLibrary2_FindActiveGameplayEffectHandle_Params params;
	params.AbilitySystemComponent = AbilitySystemComponent;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAbilitySystem.GameplayModMagnitudeCalculationMixinLibrary.GetCapturedAttributeMagnitude
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UGameplayModMagnitudeCalculation* GameplayModMagnitudeCalculation (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectAttributeCaptureDefinition Def                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayEffectSpec     Spec                           (ConstParm, Parm, OutParm, ReferenceParm)
// float                          Magnitude                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayModMagnitudeCalculationMixinLibrary::STATIC_GetCapturedAttributeMagnitude(class UGameplayModMagnitudeCalculation* GameplayModMagnitudeCalculation, const struct FGameplayEffectAttributeCaptureDefinition& Def, const struct FGameplayEffectSpec& Spec, float* Magnitude)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAbilitySystem.GameplayModMagnitudeCalculationMixinLibrary.GetCapturedAttributeMagnitude"));

	UGameplayModMagnitudeCalculationMixinLibrary_GetCapturedAttributeMagnitude_Params params;
	params.GameplayModMagnitudeCalculation = GameplayModMagnitudeCalculation;
	params.Def = Def;
	params.Spec = Spec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Magnitude != nullptr)
		*Magnitude = params.Magnitude;

	return params.ReturnValue;
}


// Function EmbarkAbilitySystem.GameplayCueParametersPartIDMixinLibrary.GetNumPartIDs
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayCueParameters  Parameters                     (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGameplayCueParametersPartIDMixinLibrary::STATIC_GetNumPartIDs(const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAbilitySystem.GameplayCueParametersPartIDMixinLibrary.GetNumPartIDs"));

	UGameplayCueParametersPartIDMixinLibrary_GetNumPartIDs_Params params;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAbilitySystem.GameplayCueParametersPartIDMixinLibrary.GetFirstPartID
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayCueParameters  Parameters                     (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGameplayCueParametersPartIDMixinLibrary::STATIC_GetFirstPartID(const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAbilitySystem.GameplayCueParametersPartIDMixinLibrary.GetFirstPartID"));

	UGameplayCueParametersPartIDMixinLibrary_GetFirstPartID_Params params;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAbilitySystem.GameplayCueParametersPartIDMixinLibrary.ArePartIDsValid
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayCueParameters  Parameters                     (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayCueParametersPartIDMixinLibrary::STATIC_ArePartIDsValid(const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAbilitySystem.GameplayCueParametersPartIDMixinLibrary.ArePartIDsValid"));

	UGameplayCueParametersPartIDMixinLibrary_ArePartIDsValid_Params params;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAbilitySystem.EmbarkAbilityTaskLibrary.WaitNetSync
// (Final, Native, Static, Public)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// enum class EAbilityTaskNetSyncType SyncType                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_NetworkSyncPoint* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_NetworkSyncPoint* UEmbarkAbilityTaskLibrary::STATIC_WaitNetSync(class UGameplayAbility* OwningAbility, enum class EAbilityTaskNetSyncType SyncType)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAbilitySystem.EmbarkAbilityTaskLibrary.WaitNetSync"));

	UEmbarkAbilityTaskLibrary_WaitNetSync_Params params;
	params.OwningAbility = OwningAbility;
	params.SyncType = SyncType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAbilitySystem.EmbarkAbilityTaskLibrary.WaitGameplayTagRemove
// (Final, Native, Static, Public)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            Tag                            (Parm)
// class AActor*                  InOptionalExternalTarget       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           OnlyTriggerOnce                (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_WaitGameplayTagRemoved* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_WaitGameplayTagRemoved* UEmbarkAbilityTaskLibrary::STATIC_WaitGameplayTagRemove(class UGameplayAbility* OwningAbility, const struct FGameplayTag& Tag, class AActor* InOptionalExternalTarget, bool OnlyTriggerOnce)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAbilitySystem.EmbarkAbilityTaskLibrary.WaitGameplayTagRemove"));

	UEmbarkAbilityTaskLibrary_WaitGameplayTagRemove_Params params;
	params.OwningAbility = OwningAbility;
	params.Tag = Tag;
	params.InOptionalExternalTarget = InOptionalExternalTarget;
	params.OnlyTriggerOnce = OnlyTriggerOnce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAbilitySystem.EmbarkAbilityTaskLibrary.WaitGameplayTagAdd
// (Final, Native, Static, Public)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            Tag                            (Parm)
// class AActor*                  InOptionalExternalTarget       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           OnlyTriggerOnce                (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_WaitGameplayTagAdded* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_WaitGameplayTagAdded* UEmbarkAbilityTaskLibrary::STATIC_WaitGameplayTagAdd(class UGameplayAbility* OwningAbility, const struct FGameplayTag& Tag, class AActor* InOptionalExternalTarget, bool OnlyTriggerOnce)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAbilitySystem.EmbarkAbilityTaskLibrary.WaitGameplayTagAdd"));

	UEmbarkAbilityTaskLibrary_WaitGameplayTagAdd_Params params;
	params.OwningAbility = OwningAbility;
	params.Tag = Tag;
	params.InOptionalExternalTarget = InOptionalExternalTarget;
	params.OnlyTriggerOnce = OnlyTriggerOnce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAbilitySystem.EmbarkAbilityTaskLibrary.WaitGameplayEvent
// (Final, Native, Static, Public)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            EventTag                       (Parm)
// class AActor*                  OptionalExternalTarget         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           OnlyTriggerOnce                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           OnlyMatchExact                 (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_WaitGameplayEvent* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_WaitGameplayEvent* UEmbarkAbilityTaskLibrary::STATIC_WaitGameplayEvent(class UGameplayAbility* OwningAbility, const struct FGameplayTag& EventTag, class AActor* OptionalExternalTarget, bool OnlyTriggerOnce, bool OnlyMatchExact)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAbilitySystem.EmbarkAbilityTaskLibrary.WaitGameplayEvent"));

	UEmbarkAbilityTaskLibrary_WaitGameplayEvent_Params params;
	params.OwningAbility = OwningAbility;
	params.EventTag = EventTag;
	params.OptionalExternalTarget = OptionalExternalTarget;
	params.OnlyTriggerOnce = OnlyTriggerOnce;
	params.OnlyMatchExact = OnlyMatchExact;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAbilitySystem.EmbarkAbilityTaskLibrary.WaitDelay
// (Final, Native, Static, Public)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_WaitDelay*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_WaitDelay* UEmbarkAbilityTaskLibrary::STATIC_WaitDelay(class UGameplayAbility* OwningAbility, float Time)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAbilitySystem.EmbarkAbilityTaskLibrary.WaitDelay"));

	UEmbarkAbilityTaskLibrary_WaitDelay_Params params;
	params.OwningAbility = OwningAbility;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAbilitySystem.EmbarkAbilityTaskLibrary.PlayMontageAndWait
// (Final, Native, Static, Public)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   TaskInstanceName               (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            MontageToPlay                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          Rate                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   StartSection                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bStopWhenAbilityEnds           (Parm, ZeroConstructor, IsPlainOldData)
// float                          AnimRootMotionTranslationScale (Parm, ZeroConstructor, IsPlainOldData)
// float                          InTimeToStartAnimMontageAt     (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_PlayMontageAndWait* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_PlayMontageAndWait* UEmbarkAbilityTaskLibrary::STATIC_PlayMontageAndWait(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, class UAnimMontage* MontageToPlay, float Rate, const struct FName& StartSection, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale, float InTimeToStartAnimMontageAt)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAbilitySystem.EmbarkAbilityTaskLibrary.PlayMontageAndWait"));

	UEmbarkAbilityTaskLibrary_PlayMontageAndWait_Params params;
	params.OwningAbility = OwningAbility;
	params.TaskInstanceName = TaskInstanceName;
	params.MontageToPlay = MontageToPlay;
	params.Rate = Rate;
	params.StartSection = StartSection;
	params.bStopWhenAbilityEnds = bStopWhenAbilityEnds;
	params.AnimRootMotionTranslationScale = AnimRootMotionTranslationScale;
	params.InTimeToStartAnimMontageAt = InTimeToStartAnimMontageAt;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAbilitySystem.EmbarkAbilityTask_ServerWaitForClientTargetData.ServerWaitForClientTargetData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   TaskInstanceName               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           TriggerOnce                    (Parm, ZeroConstructor, IsPlainOldData)
// class UEmbarkAbilityTask_ServerWaitForClientTargetData* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UEmbarkAbilityTask_ServerWaitForClientTargetData* UEmbarkAbilityTask_ServerWaitForClientTargetData::STATIC_ServerWaitForClientTargetData(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, bool TriggerOnce)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAbilitySystem.EmbarkAbilityTask_ServerWaitForClientTargetData.ServerWaitForClientTargetData"));

	UEmbarkAbilityTask_ServerWaitForClientTargetData_ServerWaitForClientTargetData_Params params;
	params.OwningAbility = OwningAbility;
	params.TaskInstanceName = TaskInstanceName;
	params.TriggerOnce = TriggerOnce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAbilitySystem.EmbarkAbilityTask_ServerWaitForClientTargetData.OnTargetDataReplicatedCallback
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FGameplayAbilityTargetDataHandle Data                           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ActivationTag                  (Parm)

void UEmbarkAbilityTask_ServerWaitForClientTargetData::OnTargetDataReplicatedCallback(const struct FGameplayAbilityTargetDataHandle& Data, const struct FGameplayTag& ActivationTag)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAbilitySystem.EmbarkAbilityTask_ServerWaitForClientTargetData.OnTargetDataReplicatedCallback"));

	UEmbarkAbilityTask_ServerWaitForClientTargetData_OnTargetDataReplicatedCallback_Params params;
	params.Data = Data;
	params.ActivationTag = ActivationTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAbilitySystem.EmbarkAbilityTask_WaitTargetData.SendTargetData
// (Final, Native, Private, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayAbilityTargetDataHandle Data                           (ConstParm, Parm, OutParm, ReferenceParm)

void UEmbarkAbilityTask_WaitTargetData::SendTargetData(const struct FGameplayAbilityTargetDataHandle& Data)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAbilitySystem.EmbarkAbilityTask_WaitTargetData.SendTargetData"));

	UEmbarkAbilityTask_WaitTargetData_SendTargetData_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAbilitySystem.EmbarkAbilityTask_WaitTargetData.OnTargetDataReplicatedCallback
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FGameplayAbilityTargetDataHandle Data                           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ActivationTag                  (Parm)

void UEmbarkAbilityTask_WaitTargetData::OnTargetDataReplicatedCallback(const struct FGameplayAbilityTargetDataHandle& Data, const struct FGameplayTag& ActivationTag)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAbilitySystem.EmbarkAbilityTask_WaitTargetData.OnTargetDataReplicatedCallback"));

	UEmbarkAbilityTask_WaitTargetData_OnTargetDataReplicatedCallback_Params params;
	params.Data = Data;
	params.ActivationTag = ActivationTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAbilitySystem.EmbarkActiveGameplayEffectExecution.GetGameplayEffect
// (Final, Native, Public, Const)
// Parameters:
// class UGameplayEffect*         ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGameplayEffect* UEmbarkActiveGameplayEffectExecution::GetGameplayEffect()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAbilitySystem.EmbarkActiveGameplayEffectExecution.GetGameplayEffect"));

	UEmbarkActiveGameplayEffectExecution_GetGameplayEffect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAbilitySystem.EmbarkActiveGameplayEffectExecution.GetContext
// (Final, Native, Public, Const)
// Parameters:
// struct FGameplayEffectContextHandle ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

struct FGameplayEffectContextHandle UEmbarkActiveGameplayEffectExecution::GetContext()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAbilitySystem.EmbarkActiveGameplayEffectExecution.GetContext"));

	UEmbarkActiveGameplayEffectExecution_GetContext_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAbilitySystem.EmbarkActiveGameplayEffectExecution.GetAbilitySystemComponent
// (Final, Native, Public, Const)
// Parameters:
// class UAbilitySystemComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAbilitySystemComponent* UEmbarkActiveGameplayEffectExecution::GetAbilitySystemComponent()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAbilitySystem.EmbarkActiveGameplayEffectExecution.GetAbilitySystemComponent"));

	UEmbarkActiveGameplayEffectExecution_GetAbilitySystemComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EmbarkAbilitySystem.EmbarkActiveGameplayEffectExecution.BP_OnRemove
// (Event, Public, BlueprintEvent, Const)

void UEmbarkActiveGameplayEffectExecution::BP_OnRemove()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAbilitySystem.EmbarkActiveGameplayEffectExecution.BP_OnRemove"));

	UEmbarkActiveGameplayEffectExecution_BP_OnRemove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAbilitySystem.EmbarkActiveGameplayEffectExecution.BP_OnApply
// (Event, Public, BlueprintEvent, Const)

void UEmbarkActiveGameplayEffectExecution::BP_OnApply()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAbilitySystem.EmbarkActiveGameplayEffectExecution.BP_OnApply"));

	UEmbarkActiveGameplayEffectExecution_BP_OnApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkAbilitySystem.EmbarkAttributeInitializerMixinLibrary.Init
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FEmbarkAttributeInitializer AttributeInitializer           (ConstParm, Parm, OutParm, ReferenceParm)
// class UAbilitySystemComponent* AbilitySystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UEmbarkAttributeInitializerMixinLibrary::STATIC_Init(const struct FEmbarkAttributeInitializer& AttributeInitializer, class UAbilitySystemComponent* AbilitySystem)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkAbilitySystem.EmbarkAttributeInitializerMixinLibrary.Init"));

	UEmbarkAttributeInitializerMixinLibrary_Init_Params params;
	params.AttributeInitializer = AttributeInitializer;
	params.AbilitySystem = AbilitySystem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
