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

// Function AngelscriptGAS.AbilitySystemComponentMixinLibrary.RemoveLooseGameplayTags
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UAbilitySystemComponent* AbilitySystemComponent         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FGameplayTagContainer   GameplayTags                   (ConstParm, Parm, OutParm, ReferenceParm)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)

void UAbilitySystemComponentMixinLibrary::STATIC_RemoveLooseGameplayTags(class UAbilitySystemComponent* AbilitySystemComponent, const struct FGameplayTagContainer& GameplayTags, int Count)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AbilitySystemComponentMixinLibrary.RemoveLooseGameplayTags"));

	UAbilitySystemComponentMixinLibrary_RemoveLooseGameplayTags_Params params;
	params.AbilitySystemComponent = AbilitySystemComponent;
	params.GameplayTags = GameplayTags;
	params.Count = Count;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptGAS.AbilitySystemComponentMixinLibrary.RemoveLooseGameplayTag
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UAbilitySystemComponent* AbilitySystemComponent         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FGameplayTag            GameplayTag                    (ConstParm, Parm, OutParm, ReferenceParm)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)

void UAbilitySystemComponentMixinLibrary::STATIC_RemoveLooseGameplayTag(class UAbilitySystemComponent* AbilitySystemComponent, const struct FGameplayTag& GameplayTag, int Count)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AbilitySystemComponentMixinLibrary.RemoveLooseGameplayTag"));

	UAbilitySystemComponentMixinLibrary_RemoveLooseGameplayTag_Params params;
	params.AbilitySystemComponent = AbilitySystemComponent;
	params.GameplayTag = GameplayTag;
	params.Count = Count;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptGAS.AbilitySystemComponentMixinLibrary.RemoveGameplayCue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAbilitySystemComponent* AbilitySystemComponent         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FGameplayTag            GameplayCueTag                 (ConstParm, Parm)

void UAbilitySystemComponentMixinLibrary::STATIC_RemoveGameplayCue(class UAbilitySystemComponent* AbilitySystemComponent, const struct FGameplayTag& GameplayCueTag)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AbilitySystemComponentMixinLibrary.RemoveGameplayCue"));

	UAbilitySystemComponentMixinLibrary_RemoveGameplayCue_Params params;
	params.AbilitySystemComponent = AbilitySystemComponent;
	params.GameplayCueTag = GameplayCueTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptGAS.AbilitySystemComponentMixinLibrary.RemoveAllGameplayCues
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAbilitySystemComponent* AbilitySystemComponent         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAbilitySystemComponentMixinLibrary::STATIC_RemoveAllGameplayCues(class UAbilitySystemComponent* AbilitySystemComponent)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AbilitySystemComponentMixinLibrary.RemoveAllGameplayCues"));

	UAbilitySystemComponentMixinLibrary_RemoveAllGameplayCues_Params params;
	params.AbilitySystemComponent = AbilitySystemComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptGAS.AbilitySystemComponentMixinLibrary.InitDefaultGameplayCueParameters
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UAbilitySystemComponent* AbilitySystemComponent         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (Parm, OutParm)

void UAbilitySystemComponentMixinLibrary::STATIC_InitDefaultGameplayCueParameters(class UAbilitySystemComponent* AbilitySystemComponent, struct FGameplayCueParameters* Parameters)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AbilitySystemComponentMixinLibrary.InitDefaultGameplayCueParameters"));

	UAbilitySystemComponentMixinLibrary_InitDefaultGameplayCueParameters_Params params;
	params.AbilitySystemComponent = AbilitySystemComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Parameters != nullptr)
		*Parameters = params.Parameters;
}


// Function AngelscriptGAS.AbilitySystemComponentMixinLibrary.GetOwnedGameplayTags
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UAbilitySystemComponent* AbilitySystemComponent         (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FGameplayTagContainer   TagContainer                   (Parm, OutParm)

void UAbilitySystemComponentMixinLibrary::STATIC_GetOwnedGameplayTags(class UAbilitySystemComponent* AbilitySystemComponent, struct FGameplayTagContainer* TagContainer)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AbilitySystemComponentMixinLibrary.GetOwnedGameplayTags"));

	UAbilitySystemComponentMixinLibrary_GetOwnedGameplayTags_Params params;
	params.AbilitySystemComponent = AbilitySystemComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TagContainer != nullptr)
		*TagContainer = params.TagContainer;
}


// Function AngelscriptGAS.AbilitySystemComponentMixinLibrary.GetActiveGameplayEffect
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UAbilitySystemComponent* AbilitySystemComponent         (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FActiveGameplayEffectHandle Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FActiveGameplayEffect   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FActiveGameplayEffect UAbilitySystemComponentMixinLibrary::STATIC_GetActiveGameplayEffect(class UAbilitySystemComponent* AbilitySystemComponent, const struct FActiveGameplayEffectHandle& Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AbilitySystemComponentMixinLibrary.GetActiveGameplayEffect"));

	UAbilitySystemComponentMixinLibrary_GetActiveGameplayEffect_Params params;
	params.AbilitySystemComponent = AbilitySystemComponent;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.AbilitySystemComponentMixinLibrary.ExecuteGameplayCueWithParameters
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UAbilitySystemComponent* AbilitySystemComponent         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FGameplayTag            GameplayCueTag                 (ConstParm, Parm)
// struct FGameplayCueParameters  GameplayCueParameters          (ConstParm, Parm, OutParm, ReferenceParm)

void UAbilitySystemComponentMixinLibrary::STATIC_ExecuteGameplayCueWithParameters(class UAbilitySystemComponent* AbilitySystemComponent, const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& GameplayCueParameters)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AbilitySystemComponentMixinLibrary.ExecuteGameplayCueWithParameters"));

	UAbilitySystemComponentMixinLibrary_ExecuteGameplayCueWithParameters_Params params;
	params.AbilitySystemComponent = AbilitySystemComponent;
	params.GameplayCueTag = GameplayCueTag;
	params.GameplayCueParameters = GameplayCueParameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptGAS.AbilitySystemComponentMixinLibrary.ExecuteGameplayCueWithEffectContext
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAbilitySystemComponent* AbilitySystemComponent         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FGameplayTag            GameplayCueTag                 (Parm)
// struct FGameplayEffectContextHandle EffectContext                  (Parm)

void UAbilitySystemComponentMixinLibrary::STATIC_ExecuteGameplayCueWithEffectContext(class UAbilitySystemComponent* AbilitySystemComponent, const struct FGameplayTag& GameplayCueTag, const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AbilitySystemComponentMixinLibrary.ExecuteGameplayCueWithEffectContext"));

	UAbilitySystemComponentMixinLibrary_ExecuteGameplayCueWithEffectContext_Params params;
	params.AbilitySystemComponent = AbilitySystemComponent;
	params.GameplayCueTag = GameplayCueTag;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptGAS.AbilitySystemComponentMixinLibrary.AreAbilityTagsBlocked
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UAbilitySystemComponent* AbilitySystemComponent         (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FGameplayTagContainer   Tags                           (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAbilitySystemComponentMixinLibrary::STATIC_AreAbilityTagsBlocked(class UAbilitySystemComponent* AbilitySystemComponent, const struct FGameplayTagContainer& Tags)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AbilitySystemComponentMixinLibrary.AreAbilityTagsBlocked"));

	UAbilitySystemComponentMixinLibrary_AreAbilityTagsBlocked_Params params;
	params.AbilitySystemComponent = AbilitySystemComponent;
	params.Tags = Tags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.AbilitySystemComponentMixinLibrary.AddLooseGameplayTags
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UAbilitySystemComponent* AbilitySystemComponent         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FGameplayTagContainer   GameplayTags                   (ConstParm, Parm, OutParm, ReferenceParm)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)

void UAbilitySystemComponentMixinLibrary::STATIC_AddLooseGameplayTags(class UAbilitySystemComponent* AbilitySystemComponent, const struct FGameplayTagContainer& GameplayTags, int Count)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AbilitySystemComponentMixinLibrary.AddLooseGameplayTags"));

	UAbilitySystemComponentMixinLibrary_AddLooseGameplayTags_Params params;
	params.AbilitySystemComponent = AbilitySystemComponent;
	params.GameplayTags = GameplayTags;
	params.Count = Count;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptGAS.AbilitySystemComponentMixinLibrary.AddLooseGameplayTag
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UAbilitySystemComponent* AbilitySystemComponent         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FGameplayTag            GameplayTag                    (ConstParm, Parm, OutParm, ReferenceParm)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)

void UAbilitySystemComponentMixinLibrary::STATIC_AddLooseGameplayTag(class UAbilitySystemComponent* AbilitySystemComponent, const struct FGameplayTag& GameplayTag, int Count)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AbilitySystemComponentMixinLibrary.AddLooseGameplayTag"));

	UAbilitySystemComponentMixinLibrary_AddLooseGameplayTag_Params params;
	params.AbilitySystemComponent = AbilitySystemComponent;
	params.GameplayTag = GameplayTag;
	params.Count = Count;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptGAS.AbilitySystemComponentMixinLibrary.AddGameplayCueWithParameters
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UAbilitySystemComponent* AbilitySystemComponent         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FGameplayTag            GameplayCueTag                 (ConstParm, Parm)
// struct FGameplayCueParameters  GameplayCueParameters          (ConstParm, Parm, OutParm, ReferenceParm)

void UAbilitySystemComponentMixinLibrary::STATIC_AddGameplayCueWithParameters(class UAbilitySystemComponent* AbilitySystemComponent, const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& GameplayCueParameters)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AbilitySystemComponentMixinLibrary.AddGameplayCueWithParameters"));

	UAbilitySystemComponentMixinLibrary_AddGameplayCueWithParameters_Params params;
	params.AbilitySystemComponent = AbilitySystemComponent;
	params.GameplayCueTag = GameplayCueTag;
	params.GameplayCueParameters = GameplayCueParameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptGAS.AbilitySystemComponentMixinLibrary.AddGameplayCueWithEffectContext
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAbilitySystemComponent* AbilitySystemComponent         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FGameplayTag            GameplayCueTag                 (ConstParm, Parm)
// struct FGameplayEffectContextHandle EffectContext                  (Parm)

void UAbilitySystemComponentMixinLibrary::STATIC_AddGameplayCueWithEffectContext(class UAbilitySystemComponent* AbilitySystemComponent, const struct FGameplayTag& GameplayCueTag, const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AbilitySystemComponentMixinLibrary.AddGameplayCueWithEffectContext"));

	UAbilitySystemComponentMixinLibrary_AddGameplayCueWithEffectContext_Params params;
	params.AbilitySystemComponent = AbilitySystemComponent;
	params.GameplayCueTag = GameplayCueTag;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptGAS.ActiveGameplayEffecteMixinLibrary.GetSpec
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FActiveGameplayEffect   ActiveGameplayEffect           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayEffectSpec     ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

struct FGameplayEffectSpec UActiveGameplayEffecteMixinLibrary::STATIC_GetSpec(const struct FActiveGameplayEffect& ActiveGameplayEffect)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.ActiveGameplayEffecteMixinLibrary.GetSpec"));

	UActiveGameplayEffecteMixinLibrary_GetSpec_Params params;
	params.ActiveGameplayEffect = ActiveGameplayEffect;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.AngelscriptAttributeChangedDataMixinLibrary.GetTargetAbilitySystemComponent
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FAngelscriptAttributeChangedData Data                           (Parm, OutParm)
// class UAbilitySystemComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAbilitySystemComponent* UAngelscriptAttributeChangedDataMixinLibrary::STATIC_GetTargetAbilitySystemComponent(struct FAngelscriptAttributeChangedData* Data)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAttributeChangedDataMixinLibrary.GetTargetAbilitySystemComponent"));

	UAngelscriptAttributeChangedDataMixinLibrary_GetTargetAbilitySystemComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;

	return params.ReturnValue;
}


// Function AngelscriptGAS.AngelscriptAttributeChangedDataMixinLibrary.GetOldValue
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FAngelscriptAttributeChangedData Data                           (Parm, OutParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAngelscriptAttributeChangedDataMixinLibrary::STATIC_GetOldValue(struct FAngelscriptAttributeChangedData* Data)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAttributeChangedDataMixinLibrary.GetOldValue"));

	UAngelscriptAttributeChangedDataMixinLibrary_GetOldValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;

	return params.ReturnValue;
}


// Function AngelscriptGAS.AngelscriptAttributeChangedDataMixinLibrary.GetNewValue
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FAngelscriptAttributeChangedData Data                           (Parm, OutParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAngelscriptAttributeChangedDataMixinLibrary::STATIC_GetNewValue(struct FAngelscriptAttributeChangedData* Data)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAttributeChangedDataMixinLibrary.GetNewValue"));

	UAngelscriptAttributeChangedDataMixinLibrary_GetNewValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;

	return params.ReturnValue;
}


// Function AngelscriptGAS.AngelscriptAttributeChangedDataMixinLibrary.GetGameplayModifierEvaluatedData
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FAngelscriptAttributeChangedData Data                           (Parm, OutParm)
// bool                           bIsValid                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FGameplayModifierEvaluatedData ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

struct FGameplayModifierEvaluatedData UAngelscriptAttributeChangedDataMixinLibrary::STATIC_GetGameplayModifierEvaluatedData(struct FAngelscriptAttributeChangedData* Data, bool* bIsValid)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAttributeChangedDataMixinLibrary.GetGameplayModifierEvaluatedData"));

	UAngelscriptAttributeChangedDataMixinLibrary_GetGameplayModifierEvaluatedData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;
	if (bIsValid != nullptr)
		*bIsValid = params.bIsValid;

	return params.ReturnValue;
}


// Function AngelscriptGAS.AngelscriptAttributeChangedDataMixinLibrary.GetGameplayAttribute
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FAngelscriptAttributeChangedData Data                           (Parm, OutParm)
// struct FGameplayAttribute      ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayAttribute UAngelscriptAttributeChangedDataMixinLibrary::STATIC_GetGameplayAttribute(struct FAngelscriptAttributeChangedData* Data)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAttributeChangedDataMixinLibrary.GetGameplayAttribute"));

	UAngelscriptAttributeChangedDataMixinLibrary_GetGameplayAttribute_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;

	return params.ReturnValue;
}


// Function AngelscriptGAS.AngelscriptAttributeChangedDataMixinLibrary.GetEffectSpec
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FAngelscriptAttributeChangedData Data                           (Parm, OutParm)
// bool                           bIsValid                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectSpec     ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

struct FGameplayEffectSpec UAngelscriptAttributeChangedDataMixinLibrary::STATIC_GetEffectSpec(struct FAngelscriptAttributeChangedData* Data, bool* bIsValid)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAttributeChangedDataMixinLibrary.GetEffectSpec"));

	UAngelscriptAttributeChangedDataMixinLibrary_GetEffectSpec_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;
	if (bIsValid != nullptr)
		*bIsValid = params.bIsValid;

	return params.ReturnValue;
}


// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.TrySetAttributeBaseValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  AttributeSetClass              (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   AttributeName                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          NewBaseValue                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAngelscriptAbilitySystemComponent::TrySetAttributeBaseValue(class UClass* AttributeSetClass, const struct FName& AttributeName, float NewBaseValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilitySystemComponent.TrySetAttributeBaseValue"));

	UAngelscriptAbilitySystemComponent_TrySetAttributeBaseValue_Params params;
	params.AttributeSetClass = AttributeSetClass;
	params.AttributeName = AttributeName;
	params.NewBaseValue = NewBaseValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.TryGetFilteredAttributeValue
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                  AttributeSetClass              (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   AttributeName                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagRequirements SourceTags                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   TargetTags                     (ConstParm, Parm, OutParm, ReferenceParm)
// float                          OutValue                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAngelscriptAbilitySystemComponent::TryGetFilteredAttributeValue(class UClass* AttributeSetClass, const struct FName& AttributeName, const struct FGameplayTagRequirements& SourceTags, const struct FGameplayTagContainer& TargetTags, float* OutValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilitySystemComponent.TryGetFilteredAttributeValue"));

	UAngelscriptAbilitySystemComponent_TryGetFilteredAttributeValue_Params params;
	params.AttributeSetClass = AttributeSetClass;
	params.AttributeName = AttributeName;
	params.SourceTags = SourceTags;
	params.TargetTags = TargetTags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutValue != nullptr)
		*OutValue = params.OutValue;

	return params.ReturnValue;
}


// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.TryGetAttributeCurrentValue
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  AttributeSetClass              (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   AttributeName                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          OutCurrentValue                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAngelscriptAbilitySystemComponent::TryGetAttributeCurrentValue(class UClass* AttributeSetClass, const struct FName& AttributeName, float* OutCurrentValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilitySystemComponent.TryGetAttributeCurrentValue"));

	UAngelscriptAbilitySystemComponent_TryGetAttributeCurrentValue_Params params;
	params.AttributeSetClass = AttributeSetClass;
	params.AttributeName = AttributeName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutCurrentValue != nullptr)
		*OutCurrentValue = params.OutCurrentValue;

	return params.ReturnValue;
}


// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.TryGetAttributeBaseValue
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  AttributeSetClass              (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   AttributeName                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          OutBaseValue                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAngelscriptAbilitySystemComponent::TryGetAttributeBaseValue(class UClass* AttributeSetClass, const struct FName& AttributeName, float* OutBaseValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilitySystemComponent.TryGetAttributeBaseValue"));

	UAngelscriptAbilitySystemComponent_TryGetAttributeBaseValue_Params params;
	params.AttributeSetClass = AttributeSetClass;
	params.AttributeName = AttributeName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutBaseValue != nullptr)
		*OutBaseValue = params.OutBaseValue;

	return params.ReturnValue;
}


// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.TryActivateAbilitySpec
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayAbilitySpecHandle Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bAllowRemoteActivation         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAngelscriptAbilitySystemComponent::TryActivateAbilitySpec(const struct FGameplayAbilitySpecHandle& Handle, bool bAllowRemoteActivation)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilitySystemComponent.TryActivateAbilitySpec"));

	UAngelscriptAbilitySystemComponent_TryActivateAbilitySpec_Params params;
	params.Handle = Handle;
	params.bAllowRemoteActivation = bAllowRemoteActivation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.SetAttributeBaseValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  AttributeSetClass              (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   AttributeName                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          NewBaseValue                   (Parm, ZeroConstructor, IsPlainOldData)

void UAngelscriptAbilitySystemComponent::SetAttributeBaseValue(class UClass* AttributeSetClass, const struct FName& AttributeName, float NewBaseValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilitySystemComponent.SetAttributeBaseValue"));

	UAngelscriptAbilitySystemComponent_SetAttributeBaseValue_Params params;
	params.AttributeSetClass = AttributeSetClass;
	params.AttributeName = AttributeName;
	params.NewBaseValue = NewBaseValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.SetAbilitySpecSourceObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilitySpecHandle              (Parm)
// class UObject*                 NewSourceObject                (Parm, ZeroConstructor, IsPlainOldData)

void UAngelscriptAbilitySystemComponent::SetAbilitySpecSourceObject(const struct FGameplayAbilitySpecHandle& AbilitySpecHandle, class UObject* NewSourceObject)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilitySystemComponent.SetAbilitySpecSourceObject"));

	UAngelscriptAbilitySystemComponent_SetAbilitySpecSourceObject_Params params;
	params.AbilitySpecHandle = AbilitySpecHandle;
	params.NewSourceObject = NewSourceObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.RegisterCallbackForAttribute
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  AttributeSetClass              (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   AttributeName                  (Parm, ZeroConstructor, IsPlainOldData)

void UAngelscriptAbilitySystemComponent::RegisterCallbackForAttribute(class UClass* AttributeSetClass, const struct FName& AttributeName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilitySystemComponent.RegisterCallbackForAttribute"));

	UAngelscriptAbilitySystemComponent_RegisterCallbackForAttribute_Params params;
	params.AttributeSetClass = AttributeSetClass;
	params.AttributeName = AttributeName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.RegisterAttributeSet
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  AttributeSetClass              (Parm, ZeroConstructor, IsPlainOldData)
// class UAngelscriptAttributeSet* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAngelscriptAttributeSet* UAngelscriptAbilitySystemComponent::RegisterAttributeSet(class UClass* AttributeSetClass)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilitySystemComponent.RegisterAttributeSet"));

	UAngelscriptAbilitySystemComponent_RegisterAttributeSet_Params params;
	params.AttributeSetClass = AttributeSetClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.RegisterAttributeChangedCallback
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  AttributeSetClass              (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   AttributeName                  (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 CallbackObject                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   CallbackFunctionName_FAngelscriptAttributeChangedData (Parm, ZeroConstructor, IsPlainOldData)

void UAngelscriptAbilitySystemComponent::RegisterAttributeChangedCallback(class UClass* AttributeSetClass, const struct FName& AttributeName, class UObject* CallbackObject, const struct FName& CallbackFunctionName_FAngelscriptAttributeChangedData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilitySystemComponent.RegisterAttributeChangedCallback"));

	UAngelscriptAbilitySystemComponent_RegisterAttributeChangedCallback_Params params;
	params.AttributeSetClass = AttributeSetClass;
	params.AttributeName = AttributeName;
	params.CallbackObject = CallbackObject;
	params.CallbackFunctionName_FAngelscriptAttributeChangedData = CallbackFunctionName_FAngelscriptAttributeChangedData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.OnAttributeSetRegistered
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 InObject                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   InFunctionName                 (Parm, ZeroConstructor, IsPlainOldData)

void UAngelscriptAbilitySystemComponent::OnAttributeSetRegistered(class UObject* InObject, const struct FName& InFunctionName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilitySystemComponent.OnAttributeSetRegistered"));

	UAngelscriptAbilitySystemComponent_OnAttributeSetRegistered_Params params;
	params.InObject = InObject;
	params.InFunctionName = InFunctionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.ModAttributeUnsafe
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayAttribute      GameplayAttribute              (Parm)
// TEnumAsByte<EGameplayModOp>    ModifierOp                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ModifierMagnitude              (Parm, ZeroConstructor, IsPlainOldData)

void UAngelscriptAbilitySystemComponent::ModAttributeUnsafe(const struct FGameplayAttribute& GameplayAttribute, TEnumAsByte<EGameplayModOp> ModifierOp, float ModifierMagnitude)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilitySystemComponent.ModAttributeUnsafe"));

	UAngelscriptAbilitySystemComponent_ModAttributeUnsafe_Params params;
	params.GameplayAttribute = GameplayAttribute;
	params.ModifierOp = ModifierOp;
	params.ModifierMagnitude = ModifierMagnitude;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.IsAbilitySpecActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilitySpecHandle              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAngelscriptAbilitySystemComponent::IsAbilitySpecActive(const struct FGameplayAbilitySpecHandle& AbilitySpecHandle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilitySystemComponent.IsAbilitySpecActive"));

	UAngelscriptAbilitySystemComponent_IsAbilitySpecActive_Params params;
	params.AbilitySpecHandle = AbilitySpecHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.IsAbilityActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                  InAbilityClass                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAngelscriptAbilitySystemComponent::IsAbilityActive(class UClass* InAbilityClass)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilitySystemComponent.IsAbilityActive"));

	UAngelscriptAbilitySystemComponent_IsAbilityActive_Params params;
	params.InAbilityClass = InAbilityClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.HasGameplayTag
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag            TagToCheck                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAngelscriptAbilitySystemComponent::HasGameplayTag(const struct FGameplayTag& TagToCheck)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilitySystemComponent.HasGameplayTag"));

	UAngelscriptAbilitySystemComponent_HasGameplayTag_Params params;
	params.TagToCheck = TagToCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.HasAnyGameplayTags
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTagContainer   TagContainer                   (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAngelscriptAbilitySystemComponent::HasAnyGameplayTags(const struct FGameplayTagContainer& TagContainer)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilitySystemComponent.HasAnyGameplayTags"));

	UAngelscriptAbilitySystemComponent_HasAnyGameplayTags_Params params;
	params.TagContainer = TagContainer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.HasAllGameplayTags
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTagContainer   TagContainer                   (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAngelscriptAbilitySystemComponent::HasAllGameplayTags(const struct FGameplayTagContainer& TagContainer)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilitySystemComponent.HasAllGameplayTags"));

	UAngelscriptAbilitySystemComponent_HasAllGameplayTags_Params params;
	params.TagContainer = TagContainer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.HasAbilitySpec
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilitySpecHandle              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAngelscriptAbilitySystemComponent::HasAbilitySpec(const struct FGameplayAbilitySpecHandle& AbilitySpecHandle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilitySystemComponent.HasAbilitySpec"));

	UAngelscriptAbilitySystemComponent_HasAbilitySpec_Params params;
	params.AbilitySpecHandle = AbilitySpecHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.HasAbility
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                  InAbilityClass                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAngelscriptAbilitySystemComponent::HasAbility(class UClass* InAbilityClass)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilitySystemComponent.HasAbility"));

	UAngelscriptAbilitySystemComponent_HasAbility_Params params;
	params.InAbilityClass = InAbilityClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.GetPlayerController
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APlayerController*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APlayerController* UAngelscriptAbilitySystemComponent::GetPlayerController()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilitySystemComponent.GetPlayerController"));

	UAngelscriptAbilitySystemComponent_GetPlayerController_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.GetCooldownTimeRemaining
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                  InAbilityClass                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAngelscriptAbilitySystemComponent::GetCooldownTimeRemaining(class UClass* InAbilityClass)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilitySystemComponent.GetCooldownTimeRemaining"));

	UAngelscriptAbilitySystemComponent_GetCooldownTimeRemaining_Params params;
	params.InAbilityClass = InAbilityClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.GetAvatar
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UAngelscriptAbilitySystemComponent::GetAvatar()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilitySystemComponent.GetAvatar"));

	UAngelscriptAbilitySystemComponent_GetAvatar_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.GetAttributeCurrentValueChecked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  AttributeSetClass              (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   AttributeName                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAngelscriptAbilitySystemComponent::GetAttributeCurrentValueChecked(class UClass* AttributeSetClass, const struct FName& AttributeName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilitySystemComponent.GetAttributeCurrentValueChecked"));

	UAngelscriptAbilitySystemComponent_GetAttributeCurrentValueChecked_Params params;
	params.AttributeSetClass = AttributeSetClass;
	params.AttributeName = AttributeName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.GetAttributeCurrentValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  AttributeSetClass              (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   AttributeName                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          DefaultValue                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAngelscriptAbilitySystemComponent::GetAttributeCurrentValue(class UClass* AttributeSetClass, const struct FName& AttributeName, float DefaultValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilitySystemComponent.GetAttributeCurrentValue"));

	UAngelscriptAbilitySystemComponent_GetAttributeCurrentValue_Params params;
	params.AttributeSetClass = AttributeSetClass;
	params.AttributeName = AttributeName;
	params.DefaultValue = DefaultValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.GetAttributeBaseValueChecked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  AttributeSetClass              (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   AttributeName                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAngelscriptAbilitySystemComponent::GetAttributeBaseValueChecked(class UClass* AttributeSetClass, const struct FName& AttributeName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilitySystemComponent.GetAttributeBaseValueChecked"));

	UAngelscriptAbilitySystemComponent_GetAttributeBaseValueChecked_Params params;
	params.AttributeSetClass = AttributeSetClass;
	params.AttributeName = AttributeName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.GetAttributeBaseValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  AttributeSetClass              (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   AttributeName                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          DefaultValue                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAngelscriptAbilitySystemComponent::GetAttributeBaseValue(class UClass* AttributeSetClass, const struct FName& AttributeName, float DefaultValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilitySystemComponent.GetAttributeBaseValue"));

	UAngelscriptAbilitySystemComponent_GetAttributeBaseValue_Params params;
	params.AttributeSetClass = AttributeSetClass;
	params.AttributeName = AttributeName;
	params.DefaultValue = DefaultValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.GetAndRegisterCallbackForAttribute
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UClass*                  AttributeSetClass              (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   AttributeName                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          OutCurrentValue                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAngelscriptAbilitySystemComponent::GetAndRegisterCallbackForAttribute(class UClass* AttributeSetClass, const struct FName& AttributeName, float* OutCurrentValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilitySystemComponent.GetAndRegisterCallbackForAttribute"));

	UAngelscriptAbilitySystemComponent_GetAndRegisterCallbackForAttribute_Params params;
	params.AttributeSetClass = AttributeSetClass;
	params.AttributeName = AttributeName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutCurrentValue != nullptr)
		*OutCurrentValue = params.OutCurrentValue;
}


// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.GetAndRegisterAttributeChangedCallback
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UClass*                  AttributeSetClass              (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   AttributeName                  (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 CallbackObject                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   CallbackFunctionName_FAngelscriptAttributeChangedData (Parm, ZeroConstructor, IsPlainOldData)
// float                          OutCurrentValue                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAngelscriptAbilitySystemComponent::GetAndRegisterAttributeChangedCallback(class UClass* AttributeSetClass, const struct FName& AttributeName, class UObject* CallbackObject, const struct FName& CallbackFunctionName_FAngelscriptAttributeChangedData, float* OutCurrentValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilitySystemComponent.GetAndRegisterAttributeChangedCallback"));

	UAngelscriptAbilitySystemComponent_GetAndRegisterAttributeChangedCallback_Params params;
	params.AttributeSetClass = AttributeSetClass;
	params.AttributeName = AttributeName;
	params.CallbackObject = CallbackObject;
	params.CallbackFunctionName_FAngelscriptAttributeChangedData = CallbackFunctionName_FAngelscriptAttributeChangedData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutCurrentValue != nullptr)
		*OutCurrentValue = params.OutCurrentValue;
}


// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.GetActiveAbilitiesWithTags
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTagContainer   GameplayTagContainer           (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<class UGameplayAbility*> ActiveAbilities                (Parm, OutParm, ZeroConstructor)

void UAngelscriptAbilitySystemComponent::GetActiveAbilitiesWithTags(const struct FGameplayTagContainer& GameplayTagContainer, TArray<class UGameplayAbility*>* ActiveAbilities)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilitySystemComponent.GetActiveAbilitiesWithTags"));

	UAngelscriptAbilitySystemComponent_GetActiveAbilitiesWithTags_Params params;
	params.GameplayTagContainer = GameplayTagContainer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActiveAbilities != nullptr)
		*ActiveAbilities = params.ActiveAbilities;
}


// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.GetAbilitySpecSourceObject
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilitySpecHandle              (Parm)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UAngelscriptAbilitySystemComponent::GetAbilitySpecSourceObject(const struct FGameplayAbilitySpecHandle& AbilitySpecHandle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilitySystemComponent.GetAbilitySpecSourceObject"));

	UAngelscriptAbilitySystemComponent_GetAbilitySpecSourceObject_Params params;
	params.AbilitySpecHandle = AbilitySpecHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.GetAbilitiesWithTags
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTagContainer   GameplayTagContainer           (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<class UGameplayAbility*> Abilities                      (Parm, OutParm, ZeroConstructor)

void UAngelscriptAbilitySystemComponent::GetAbilitiesWithTags(const struct FGameplayTagContainer& GameplayTagContainer, TArray<class UGameplayAbility*>* Abilities)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilitySystemComponent.GetAbilitiesWithTags"));

	UAngelscriptAbilitySystemComponent_GetAbilitiesWithTags_Params params;
	params.GameplayTagContainer = GameplayTagContainer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Abilities != nullptr)
		*Abilities = params.Abilities;
}


// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.CancelAbilityByHandle
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilityHandle                  (ConstParm, Parm, OutParm, ReferenceParm)

void UAngelscriptAbilitySystemComponent::CancelAbilityByHandle(const struct FGameplayAbilitySpecHandle& AbilityHandle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilitySystemComponent.CancelAbilityByHandle"));

	UAngelscriptAbilitySystemComponent_CancelAbilityByHandle_Params params;
	params.AbilityHandle = AbilityHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.CancelAbility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  InAbilityClass                 (Parm, ZeroConstructor, IsPlainOldData)

void UAngelscriptAbilitySystemComponent::CancelAbility(class UClass* InAbilityClass)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilitySystemComponent.CancelAbility"));

	UAngelscriptAbilitySystemComponent_CancelAbility_Params params;
	params.InAbilityClass = InAbilityClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.CancelAbilitiesByTags
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer   WithTags                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   WithoutTags                    (ConstParm, Parm, OutParm, ReferenceParm)
// class UGameplayAbility*        Ignore                         (Parm, ZeroConstructor, IsPlainOldData)

void UAngelscriptAbilitySystemComponent::CancelAbilitiesByTags(const struct FGameplayTagContainer& WithTags, const struct FGameplayTagContainer& WithoutTags, class UGameplayAbility* Ignore)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilitySystemComponent.CancelAbilitiesByTags"));

	UAngelscriptAbilitySystemComponent_CancelAbilitiesByTags_Params params;
	params.WithTags = WithTags;
	params.WithoutTags = WithoutTags;
	params.Ignore = Ignore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.CanActivateAnyAbilityWithTags
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTagContainer   GameplayTagContainer           (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAngelscriptAbilitySystemComponent::CanActivateAnyAbilityWithTags(const struct FGameplayTagContainer& GameplayTagContainer)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilitySystemComponent.CanActivateAnyAbilityWithTags"));

	UAngelscriptAbilitySystemComponent_CanActivateAnyAbilityWithTags_Params params;
	params.GameplayTagContainer = GameplayTagContainer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.CanActivateAnyAbilityWithTag
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag            GameplayTag                    (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAngelscriptAbilitySystemComponent::CanActivateAnyAbilityWithTag(const struct FGameplayTag& GameplayTag)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilitySystemComponent.CanActivateAnyAbilityWithTag"));

	UAngelscriptAbilitySystemComponent_CanActivateAnyAbilityWithTag_Params params;
	params.GameplayTag = GameplayTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.CanActivateAbilitySpec
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilitySpecHandle              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAngelscriptAbilitySystemComponent::CanActivateAbilitySpec(const struct FGameplayAbilitySpecHandle& AbilitySpecHandle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilitySystemComponent.CanActivateAbilitySpec"));

	UAngelscriptAbilitySystemComponent_CanActivateAbilitySpec_Params params;
	params.AbilitySpecHandle = AbilitySpecHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.CanActivateAbilityByClass
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  InAbilityToActivate            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAngelscriptAbilitySystemComponent::CanActivateAbilityByClass(class UClass* InAbilityToActivate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilitySystemComponent.CanActivateAbilityByClass"));

	UAngelscriptAbilitySystemComponent_CanActivateAbilityByClass_Params params;
	params.InAbilityToActivate = InAbilityToActivate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.BP_SetRemoveAbilityOnEnd
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilitySpecHandle              (Parm)

void UAngelscriptAbilitySystemComponent::BP_SetRemoveAbilityOnEnd(const struct FGameplayAbilitySpecHandle& AbilitySpecHandle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilitySystemComponent.BP_SetRemoveAbilityOnEnd"));

	UAngelscriptAbilitySystemComponent_BP_SetRemoveAbilityOnEnd_Params params;
	params.AbilitySpecHandle = AbilitySpecHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.BP_InitAbilityActorInfo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  InOwnerActor                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  InAvatarActor                  (Parm, ZeroConstructor, IsPlainOldData)

void UAngelscriptAbilitySystemComponent::BP_InitAbilityActorInfo(class AActor* InOwnerActor, class AActor* InAvatarActor)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilitySystemComponent.BP_InitAbilityActorInfo"));

	UAngelscriptAbilitySystemComponent_BP_InitAbilityActorInfo_Params params;
	params.InOwnerActor = InOwnerActor;
	params.InAvatarActor = InAvatarActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.BP_GiveAbilityWithSourceObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  InAbilityClass                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            Level                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            OptionalInputID                (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 OptionalSourceObject           (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayAbilitySpecHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayAbilitySpecHandle UAngelscriptAbilitySystemComponent::BP_GiveAbilityWithSourceObject(class UClass* InAbilityClass, int Level, int OptionalInputID, class UObject* OptionalSourceObject)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilitySystemComponent.BP_GiveAbilityWithSourceObject"));

	UAngelscriptAbilitySystemComponent_BP_GiveAbilityWithSourceObject_Params params;
	params.InAbilityClass = InAbilityClass;
	params.Level = Level;
	params.OptionalInputID = OptionalInputID;
	params.OptionalSourceObject = OptionalSourceObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.BP_GiveAbilityAndActivateOnceWithSourceObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  InAbilityClass                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            Level                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            OptionalInputID                (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 OptionalSourceObject           (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayAbilitySpecHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayAbilitySpecHandle UAngelscriptAbilitySystemComponent::BP_GiveAbilityAndActivateOnceWithSourceObject(class UClass* InAbilityClass, int Level, int OptionalInputID, class UObject* OptionalSourceObject)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilitySystemComponent.BP_GiveAbilityAndActivateOnceWithSourceObject"));

	UAngelscriptAbilitySystemComponent_BP_GiveAbilityAndActivateOnceWithSourceObject_Params params;
	params.InAbilityClass = InAbilityClass;
	params.Level = Level;
	params.OptionalInputID = OptionalInputID;
	params.OptionalSourceObject = OptionalSourceObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.BlueprintUnRegisterGameplayTagEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FDelegateHandleWrapper  Handle                         (Parm)
// struct FGameplayTag            Tag                            (Parm)
// TEnumAsByte<EGameplayTagEventType> EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAngelscriptAbilitySystemComponent::BlueprintUnRegisterGameplayTagEvent(const struct FDelegateHandleWrapper& Handle, const struct FGameplayTag& Tag, TEnumAsByte<EGameplayTagEventType> EventType)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilitySystemComponent.BlueprintUnRegisterGameplayTagEvent"));

	UAngelscriptAbilitySystemComponent_BlueprintUnRegisterGameplayTagEvent_Params params;
	params.Handle = Handle;
	params.Tag = Tag;
	params.EventType = EventType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.BlueprintRegisterGameplayTagEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, ZeroConstructor)
// struct FGameplayTag            Tag                            (Parm)
// TEnumAsByte<EGameplayTagEventType> EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FDelegateHandleWrapper  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FDelegateHandleWrapper UAngelscriptAbilitySystemComponent::BlueprintRegisterGameplayTagEvent(const struct FScriptDelegate& Delegate, const struct FGameplayTag& Tag, TEnumAsByte<EGameplayTagEventType> EventType)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilitySystemComponent.BlueprintRegisterGameplayTagEvent"));

	UAngelscriptAbilitySystemComponent_BlueprintRegisterGameplayTagEvent_Params params;
	params.Delegate = Delegate;
	params.Tag = Tag;
	params.EventType = EventType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.BlueprintRegisterAndCallGameplayTagEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, ZeroConstructor)
// struct FGameplayTag            Tag                            (Parm)
// TEnumAsByte<EGameplayTagEventType> EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FDelegateHandleWrapper  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FDelegateHandleWrapper UAngelscriptAbilitySystemComponent::BlueprintRegisterAndCallGameplayTagEvent(const struct FScriptDelegate& Delegate, const struct FGameplayTag& Tag, TEnumAsByte<EGameplayTagEventType> EventType)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilitySystemComponent.BlueprintRegisterAndCallGameplayTagEvent"));

	UAngelscriptAbilitySystemComponent_BlueprintRegisterAndCallGameplayTagEvent_Params params;
	params.Delegate = Delegate;
	params.Tag = Tag;
	params.EventType = EventType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.BindInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UInputComponent*         InputComponent                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FAngelscriptInputBindData BindData                       (Parm)

void UAngelscriptAbilitySystemComponent::BindInput(class UInputComponent* InputComponent, const struct FAngelscriptInputBindData& BindData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilitySystemComponent.BindInput"));

	UAngelscriptAbilitySystemComponent_BindInput_Params params;
	params.InputComponent = InputComponent;
	params.BindData = BindData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.ActivateAbilitiesUsingTags
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer   GameplayTagContainer           (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bAllowRemoteActivation         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAngelscriptAbilitySystemComponent::ActivateAbilitiesUsingTags(const struct FGameplayTagContainer& GameplayTagContainer, bool bAllowRemoteActivation)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilitySystemComponent.ActivateAbilitiesUsingTags"));

	UAngelscriptAbilitySystemComponent_ActivateAbilitiesUsingTags_Params params;
	params.GameplayTagContainer = GameplayTagContainer;
	params.bAllowRemoteActivation = bAllowRemoteActivation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.AngelscriptAbilityTask.SetIsTickingTask
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNewState                      (Parm, ZeroConstructor, IsPlainOldData)

void UAngelscriptAbilityTask::SetIsTickingTask(bool bNewState)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilityTask.SetIsTickingTask"));

	UAngelscriptAbilityTask_SetIsTickingTask_Params params;
	params.bNewState = bNewState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptGAS.AngelscriptAbilityTask.SetIsSimulatedTask
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNewState                      (Parm, ZeroConstructor, IsPlainOldData)

void UAngelscriptAbilityTask::SetIsSimulatedTask(bool bNewState)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilityTask.SetIsSimulatedTask"));

	UAngelscriptAbilityTask_SetIsSimulatedTask_Params params;
	params.bNewState = bNewState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptGAS.AngelscriptAbilityTask.SetIsPausable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNewState                      (Parm, ZeroConstructor, IsPlainOldData)

void UAngelscriptAbilityTask::SetIsPausable(bool bNewState)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilityTask.SetIsPausable"));

	UAngelscriptAbilityTask_SetIsPausable_Params params;
	params.bNewState = bNewState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptGAS.AngelscriptAbilityTask.GetIsTickingTask
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAngelscriptAbilityTask::GetIsTickingTask()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilityTask.GetIsTickingTask"));

	UAngelscriptAbilityTask_GetIsTickingTask_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.AngelscriptAbilityTask.GetIsSimulating
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAngelscriptAbilityTask::GetIsSimulating()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilityTask.GetIsSimulating"));

	UAngelscriptAbilityTask_GetIsSimulating_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.AngelscriptAbilityTask.GetIsSimulatedTask
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAngelscriptAbilityTask::GetIsSimulatedTask()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilityTask.GetIsSimulatedTask"));

	UAngelscriptAbilityTask_GetIsSimulatedTask_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.AngelscriptAbilityTask.GetIsPausable
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAngelscriptAbilityTask::GetIsPausable()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilityTask.GetIsPausable"));

	UAngelscriptAbilityTask_GetIsPausable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.AngelscriptAbilityTask.CreateAbilityTaskAndRunIt
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UClass*                  TaskType                       (Parm, ZeroConstructor, IsPlainOldData)
// class UGameplayAbility*        ThisAbility                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   NewInstanceName                (Parm, ZeroConstructor, IsPlainOldData)
// class UAngelscriptAbilityTask* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAngelscriptAbilityTask* UAngelscriptAbilityTask::STATIC_CreateAbilityTaskAndRunIt(class UClass* TaskType, class UGameplayAbility* ThisAbility, const struct FName& NewInstanceName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilityTask.CreateAbilityTaskAndRunIt"));

	UAngelscriptAbilityTask_CreateAbilityTaskAndRunIt_Params params;
	params.TaskType = TaskType;
	params.ThisAbility = ThisAbility;
	params.NewInstanceName = NewInstanceName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.AngelscriptAbilityTask.CreateAbilityTask
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UClass*                  TaskType                       (Parm, ZeroConstructor, IsPlainOldData)
// class UGameplayAbility*        ThisAbility                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   NewInstanceName                (Parm, ZeroConstructor, IsPlainOldData)
// class UAngelscriptAbilityTask* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAngelscriptAbilityTask* UAngelscriptAbilityTask::STATIC_CreateAbilityTask(class UClass* TaskType, class UGameplayAbility* ThisAbility, const struct FName& NewInstanceName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilityTask.CreateAbilityTask"));

	UAngelscriptAbilityTask_CreateAbilityTask_Params params;
	params.TaskType = TaskType;
	params.ThisAbility = ThisAbility;
	params.NewInstanceName = NewInstanceName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.AngelscriptAbilityTask.BP_TickTask
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeSecs                  (Parm, ZeroConstructor, IsPlainOldData)

void UAngelscriptAbilityTask::BP_TickTask(float DeltaTimeSecs)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilityTask.BP_TickTask"));

	UAngelscriptAbilityTask_BP_TickTask_Params params;
	params.DeltaTimeSecs = DeltaTimeSecs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptGAS.AngelscriptAbilityTask.BP_ShouldBroadcastAbilityTaskDelegates
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAngelscriptAbilityTask::BP_ShouldBroadcastAbilityTaskDelegates()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilityTask.BP_ShouldBroadcastAbilityTaskDelegates"));

	UAngelscriptAbilityTask_BP_ShouldBroadcastAbilityTaskDelegates_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.AngelscriptAbilityTask.BP_SetWaitingOnRemotePlayerData
// (Final, Native, Public, BlueprintCallable)

void UAngelscriptAbilityTask::BP_SetWaitingOnRemotePlayerData()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilityTask.BP_SetWaitingOnRemotePlayerData"));

	UAngelscriptAbilityTask_BP_SetWaitingOnRemotePlayerData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptGAS.AngelscriptAbilityTask.BP_SetWaitingOnAvatar
// (Final, Native, Public, BlueprintCallable)

void UAngelscriptAbilityTask::BP_SetWaitingOnAvatar()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilityTask.BP_SetWaitingOnAvatar"));

	UAngelscriptAbilityTask_BP_SetWaitingOnAvatar_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptGAS.AngelscriptAbilityTask.BP_SetAbilitySystemComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAbilitySystemComponent* InAbilitySystemComponent       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAngelscriptAbilityTask::BP_SetAbilitySystemComponent(class UAbilitySystemComponent* InAbilitySystemComponent)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilityTask.BP_SetAbilitySystemComponent"));

	UAngelscriptAbilityTask_BP_SetAbilitySystemComponent_Params params;
	params.InAbilitySystemComponent = InAbilitySystemComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptGAS.AngelscriptAbilityTask.BP_OnDestroy
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bInOwnerFinished               (Parm, ZeroConstructor, IsPlainOldData)

void UAngelscriptAbilityTask::BP_OnDestroy(bool bInOwnerFinished)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilityTask.BP_OnDestroy"));

	UAngelscriptAbilityTask_BP_OnDestroy_Params params;
	params.bInOwnerFinished = bInOwnerFinished;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptGAS.AngelscriptAbilityTask.BP_IsWaitingOnRemotePlayerdata
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAngelscriptAbilityTask::BP_IsWaitingOnRemotePlayerdata()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilityTask.BP_IsWaitingOnRemotePlayerdata"));

	UAngelscriptAbilityTask_BP_IsWaitingOnRemotePlayerdata_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.AngelscriptAbilityTask.BP_IsWaitingOnAvatar
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAngelscriptAbilityTask::BP_IsWaitingOnAvatar()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilityTask.BP_IsWaitingOnAvatar"));

	UAngelscriptAbilityTask_BP_IsWaitingOnAvatar_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.AngelscriptAbilityTask.BP_IsPredictingClient
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAngelscriptAbilityTask::BP_IsPredictingClient()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilityTask.BP_IsPredictingClient"));

	UAngelscriptAbilityTask_BP_IsPredictingClient_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.AngelscriptAbilityTask.BP_IsLocallyControlled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAngelscriptAbilityTask::BP_IsLocallyControlled()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilityTask.BP_IsLocallyControlled"));

	UAngelscriptAbilityTask_BP_IsLocallyControlled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.AngelscriptAbilityTask.BP_IsForRemoteClient
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAngelscriptAbilityTask::BP_IsForRemoteClient()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilityTask.BP_IsForRemoteClient"));

	UAngelscriptAbilityTask_BP_IsForRemoteClient_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.AngelscriptAbilityTask.BP_InitSimulatedTask
// (Event, Public, BlueprintEvent)
// Parameters:
// class UGameplayTasksComponent* InGameplayTasksComponent       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAngelscriptAbilityTask::BP_InitSimulatedTask(class UGameplayTasksComponent* InGameplayTasksComponent)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilityTask.BP_InitSimulatedTask"));

	UAngelscriptAbilityTask_BP_InitSimulatedTask_Params params;
	params.InGameplayTasksComponent = InGameplayTasksComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptGAS.AngelscriptAbilityTask.BP_GetAbilitySystemComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAbilitySystemComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAbilitySystemComponent* UAngelscriptAbilityTask::BP_GetAbilitySystemComponent()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilityTask.BP_GetAbilitySystemComponent"));

	UAngelscriptAbilityTask_BP_GetAbilitySystemComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.AngelscriptAbilityTask.BP_GetAbilitySpecHandle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bInOwnerFinished               (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayAbilitySpecHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayAbilitySpecHandle UAngelscriptAbilityTask::BP_GetAbilitySpecHandle(bool bInOwnerFinished)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilityTask.BP_GetAbilitySpecHandle"));

	UAngelscriptAbilityTask_BP_GetAbilitySpecHandle_Params params;
	params.bInOwnerFinished = bInOwnerFinished;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.AngelscriptAbilityTask.BP_GetAbility
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bInOwnerFinished               (Parm, ZeroConstructor, IsPlainOldData)
// class UGameplayAbility*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGameplayAbility* UAngelscriptAbilityTask::BP_GetAbility(bool bInOwnerFinished)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilityTask.BP_GetAbility"));

	UAngelscriptAbilityTask_BP_GetAbility_Params params;
	params.bInOwnerFinished = bInOwnerFinished;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.AngelscriptAbilityTask.BP_ClearWaitingOnRemotePlayerData
// (Final, Native, Public, BlueprintCallable)

void UAngelscriptAbilityTask::BP_ClearWaitingOnRemotePlayerData()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilityTask.BP_ClearWaitingOnRemotePlayerData"));

	UAngelscriptAbilityTask_BP_ClearWaitingOnRemotePlayerData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptGAS.AngelscriptAbilityTask.BP_ClearWaitingOnAvatar
// (Final, Native, Public, BlueprintCallable)

void UAngelscriptAbilityTask::BP_ClearWaitingOnAvatar()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilityTask.BP_ClearWaitingOnAvatar"));

	UAngelscriptAbilityTask_BP_ClearWaitingOnAvatar_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptGAS.AngelscriptAbilityTask.BP_Activate
// (Event, Public, BlueprintEvent)

void UAngelscriptAbilityTask::BP_Activate()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilityTask.BP_Activate"));

	UAngelscriptAbilityTask_BP_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptGAS.AngelscriptAbilityTaskLibrary.WaitNetSync
// (Final, Native, Static, Public)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// enum class EAbilityTaskNetSyncType SyncType                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_NetworkSyncPoint* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_NetworkSyncPoint* UAngelscriptAbilityTaskLibrary::STATIC_WaitNetSync(class UGameplayAbility* OwningAbility, enum class EAbilityTaskNetSyncType SyncType)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilityTaskLibrary.WaitNetSync"));

	UAngelscriptAbilityTaskLibrary_WaitNetSync_Params params;
	params.OwningAbility = OwningAbility;
	params.SyncType = SyncType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.AngelscriptAbilityTaskLibrary.WaitMovementModeChange
// (Final, Native, Static, Public)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMovementMode>     NewMode                        (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_WaitMovementModeChange* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_WaitMovementModeChange* UAngelscriptAbilityTaskLibrary::STATIC_WaitMovementModeChange(class UGameplayAbility* OwningAbility, TEnumAsByte<EMovementMode> NewMode)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilityTaskLibrary.WaitMovementModeChange"));

	UAngelscriptAbilityTaskLibrary_WaitMovementModeChange_Params params;
	params.OwningAbility = OwningAbility;
	params.NewMode = NewMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.AngelscriptAbilityTaskLibrary.WaitGameplayTagRemove
// (Final, Native, Static, Public)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            Tag                            (Parm)
// class AActor*                  InOptionalExternalTarget       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           OnlyTriggerOnce                (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_WaitGameplayTagRemoved* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_WaitGameplayTagRemoved* UAngelscriptAbilityTaskLibrary::STATIC_WaitGameplayTagRemove(class UGameplayAbility* OwningAbility, const struct FGameplayTag& Tag, class AActor* InOptionalExternalTarget, bool OnlyTriggerOnce)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilityTaskLibrary.WaitGameplayTagRemove"));

	UAngelscriptAbilityTaskLibrary_WaitGameplayTagRemove_Params params;
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


// Function AngelscriptGAS.AngelscriptAbilityTaskLibrary.WaitGameplayTagAdd
// (Final, Native, Static, Public)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            Tag                            (Parm)
// class AActor*                  InOptionalExternalTarget       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           OnlyTriggerOnce                (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_WaitGameplayTagAdded* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_WaitGameplayTagAdded* UAngelscriptAbilityTaskLibrary::STATIC_WaitGameplayTagAdd(class UGameplayAbility* OwningAbility, const struct FGameplayTag& Tag, class AActor* InOptionalExternalTarget, bool OnlyTriggerOnce)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilityTaskLibrary.WaitGameplayTagAdd"));

	UAngelscriptAbilityTaskLibrary_WaitGameplayTagAdd_Params params;
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


// Function AngelscriptGAS.AngelscriptAbilityTaskLibrary.WaitGameplayEvent
// (Final, Native, Static, Public)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            EventTag                       (Parm)
// class AActor*                  OptionalExternalTarget         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           OnlyTriggerOnce                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           OnlyMatchExact                 (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_WaitGameplayEvent* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_WaitGameplayEvent* UAngelscriptAbilityTaskLibrary::STATIC_WaitGameplayEvent(class UGameplayAbility* OwningAbility, const struct FGameplayTag& EventTag, class AActor* OptionalExternalTarget, bool OnlyTriggerOnce, bool OnlyMatchExact)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilityTaskLibrary.WaitGameplayEvent"));

	UAngelscriptAbilityTaskLibrary_WaitGameplayEvent_Params params;
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


// Function AngelscriptGAS.AngelscriptAbilityTaskLibrary.WaitDelay
// (Final, Native, Static, Public)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_WaitDelay*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_WaitDelay* UAngelscriptAbilityTaskLibrary::STATIC_WaitDelay(class UGameplayAbility* OwningAbility, float Time)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilityTaskLibrary.WaitDelay"));

	UAngelscriptAbilityTaskLibrary_WaitDelay_Params params;
	params.OwningAbility = OwningAbility;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.AngelscriptAbilityTaskLibrary.PlayMontageAndWait
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

class UAbilityTask_PlayMontageAndWait* UAngelscriptAbilityTaskLibrary::STATIC_PlayMontageAndWait(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, class UAnimMontage* MontageToPlay, float Rate, const struct FName& StartSection, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale, float InTimeToStartAnimMontageAt)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAbilityTaskLibrary.PlayMontageAndWait"));

	UAngelscriptAbilityTaskLibrary_PlayMontageAndWait_Params params;
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


// Function AngelscriptGAS.AngelscriptAttributeSet.TrySetAttributeBaseValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   AttributeName                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          NewBaseValue                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAngelscriptAttributeSet::TrySetAttributeBaseValue(const struct FName& AttributeName, float NewBaseValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAttributeSet.TrySetAttributeBaseValue"));

	UAngelscriptAttributeSet_TrySetAttributeBaseValue_Params params;
	params.AttributeName = AttributeName;
	params.NewBaseValue = NewBaseValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.AngelscriptAttributeSet.TryGetGameplayAttribute
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                  AttributeSetClass              (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   AttributeName                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayAttribute      OutGameplayAttribute           (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAngelscriptAttributeSet::STATIC_TryGetGameplayAttribute(class UClass* AttributeSetClass, const struct FName& AttributeName, struct FGameplayAttribute* OutGameplayAttribute)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAttributeSet.TryGetGameplayAttribute"));

	UAngelscriptAttributeSet_TryGetGameplayAttribute_Params params;
	params.AttributeSetClass = AttributeSetClass;
	params.AttributeName = AttributeName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutGameplayAttribute != nullptr)
		*OutGameplayAttribute = params.OutGameplayAttribute;

	return params.ReturnValue;
}


// Function AngelscriptGAS.AngelscriptAttributeSet.TryGetAttributeCurrentValue
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   AttributeName                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          OutCurrentValue                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAngelscriptAttributeSet::TryGetAttributeCurrentValue(const struct FName& AttributeName, float* OutCurrentValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAttributeSet.TryGetAttributeCurrentValue"));

	UAngelscriptAttributeSet_TryGetAttributeCurrentValue_Params params;
	params.AttributeName = AttributeName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutCurrentValue != nullptr)
		*OutCurrentValue = params.OutCurrentValue;

	return params.ReturnValue;
}


// Function AngelscriptGAS.AngelscriptAttributeSet.TryGetAttributeBaseValue
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   AttributeName                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          OutBaseValue                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAngelscriptAttributeSet::TryGetAttributeBaseValue(const struct FName& AttributeName, float* OutBaseValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAttributeSet.TryGetAttributeBaseValue"));

	UAngelscriptAttributeSet_TryGetAttributeBaseValue_Params params;
	params.AttributeName = AttributeName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutBaseValue != nullptr)
		*OutBaseValue = params.OutBaseValue;

	return params.ReturnValue;
}


// Function AngelscriptGAS.AngelscriptAttributeSet.OnRep_Attribute
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAngelscriptGameplayAttributeData OldAttributeData               (Parm, OutParm)

void UAngelscriptAttributeSet::OnRep_Attribute(struct FAngelscriptGameplayAttributeData* OldAttributeData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAttributeSet.OnRep_Attribute"));

	UAngelscriptAttributeSet_OnRep_Attribute_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OldAttributeData != nullptr)
		*OldAttributeData = params.OldAttributeData;
}


// Function AngelscriptGAS.AngelscriptAttributeSet.GetGameplayAttribute
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                  AttributeSetClass              (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   AttributeName                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayAttribute      ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayAttribute UAngelscriptAttributeSet::STATIC_GetGameplayAttribute(class UClass* AttributeSetClass, const struct FName& AttributeName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAttributeSet.GetGameplayAttribute"));

	UAngelscriptAttributeSet_GetGameplayAttribute_Params params;
	params.AttributeSetClass = AttributeSetClass;
	params.AttributeName = AttributeName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.AngelscriptAttributeSet.CompareGameplayAttributes
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAttribute      First                          (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayAttribute      Second                         (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAngelscriptAttributeSet::STATIC_CompareGameplayAttributes(const struct FGameplayAttribute& First, const struct FGameplayAttribute& Second)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAttributeSet.CompareGameplayAttributes"));

	UAngelscriptAttributeSet_CompareGameplayAttributes_Params params;
	params.First = First;
	params.Second = Second;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.AngelscriptAttributeSet.BP_PreGameplayEffectExecute
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEffectSpec     EffectSpec                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayModifierEvaluatedData EvaluatedData                  (Parm, OutParm)
// class UAngelscriptAbilitySystemComponent* AbilitySystemComponent         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAngelscriptAttributeSet::BP_PreGameplayEffectExecute(const struct FGameplayEffectSpec& EffectSpec, class UAngelscriptAbilitySystemComponent* AbilitySystemComponent, struct FGameplayModifierEvaluatedData* EvaluatedData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAttributeSet.BP_PreGameplayEffectExecute"));

	UAngelscriptAttributeSet_BP_PreGameplayEffectExecute_Params params;
	params.EffectSpec = EffectSpec;
	params.AbilitySystemComponent = AbilitySystemComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EvaluatedData != nullptr)
		*EvaluatedData = params.EvaluatedData;

	return params.ReturnValue;
}


// Function AngelscriptGAS.AngelscriptAttributeSet.BP_PreAttributeChange
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayAttribute      Attribute                      (ConstParm, Parm, OutParm, ReferenceParm)
// float                          NewValue                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAngelscriptAttributeSet::BP_PreAttributeChange(const struct FGameplayAttribute& Attribute, float* NewValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAttributeSet.BP_PreAttributeChange"));

	UAngelscriptAttributeSet_BP_PreAttributeChange_Params params;
	params.Attribute = Attribute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewValue != nullptr)
		*NewValue = params.NewValue;
}


// Function AngelscriptGAS.AngelscriptAttributeSet.BP_PreAttributeBaseChange
// (Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAttribute      Attribute                      (ConstParm, Parm, OutParm, ReferenceParm)
// float                          NewValue                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAngelscriptAttributeSet::BP_PreAttributeBaseChange(const struct FGameplayAttribute& Attribute, float* NewValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAttributeSet.BP_PreAttributeBaseChange"));

	UAngelscriptAttributeSet_BP_PreAttributeBaseChange_Params params;
	params.Attribute = Attribute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewValue != nullptr)
		*NewValue = params.NewValue;
}


// Function AngelscriptGAS.AngelscriptAttributeSet.BP_PostGameplayEffectExecute
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEffectSpec     EffectSpec                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayModifierEvaluatedData EvaluatedData                  (Parm, OutParm)
// class UAngelscriptAbilitySystemComponent* AbilitySystemComponent         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAngelscriptAttributeSet::BP_PostGameplayEffectExecute(const struct FGameplayEffectSpec& EffectSpec, class UAngelscriptAbilitySystemComponent* AbilitySystemComponent, struct FGameplayModifierEvaluatedData* EvaluatedData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAttributeSet.BP_PostGameplayEffectExecute"));

	UAngelscriptAttributeSet_BP_PostGameplayEffectExecute_Params params;
	params.EffectSpec = EffectSpec;
	params.AbilitySystemComponent = AbilitySystemComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EvaluatedData != nullptr)
		*EvaluatedData = params.EvaluatedData;
}


// Function AngelscriptGAS.AngelscriptAttributeSet.BP_InitFromMetaDataTable
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UDataTable*              DataTable                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAngelscriptAttributeSet::BP_InitFromMetaDataTable(class UDataTable* DataTable)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAttributeSet.BP_InitFromMetaDataTable"));

	UAngelscriptAttributeSet_BP_InitFromMetaDataTable_Params params;
	params.DataTable = DataTable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.AngelscriptAttributeSet.BP_GetOwningActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UAngelscriptAttributeSet::BP_GetOwningActor()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAttributeSet.BP_GetOwningActor"));

	UAngelscriptAttributeSet_BP_GetOwningActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.AngelscriptAttributeSet.BP_GetOwningAbilitySystemComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAngelscriptAbilitySystemComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAngelscriptAbilitySystemComponent* UAngelscriptAttributeSet::BP_GetOwningAbilitySystemComponent()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAttributeSet.BP_GetOwningAbilitySystemComponent"));

	UAngelscriptAttributeSet_BP_GetOwningAbilitySystemComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.AngelscriptAttributeSet.BP_GetActorInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayAbilityActorInfo ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayAbilityActorInfo UAngelscriptAttributeSet::BP_GetActorInfo()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptAttributeSet.BP_GetActorInfo"));

	UAngelscriptAttributeSet_BP_GetActorInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.AngelscriptGameplayAttributeDataMixinLibrary.SetCurrentValue
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAngelscriptGameplayAttributeData Data                           (Parm, OutParm)
// float                          NewValue                       (Parm, ZeroConstructor, IsPlainOldData)

void UAngelscriptGameplayAttributeDataMixinLibrary::SetCurrentValue(float NewValue, struct FAngelscriptGameplayAttributeData* Data)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptGameplayAttributeDataMixinLibrary.SetCurrentValue"));

	UAngelscriptGameplayAttributeDataMixinLibrary_SetCurrentValue_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;
}


// Function AngelscriptGAS.AngelscriptGameplayAttributeDataMixinLibrary.SetBaseValue
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAngelscriptGameplayAttributeData Data                           (Parm, OutParm)
// float                          NewValue                       (Parm, ZeroConstructor, IsPlainOldData)

void UAngelscriptGameplayAttributeDataMixinLibrary::SetBaseValue(float NewValue, struct FAngelscriptGameplayAttributeData* Data)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptGameplayAttributeDataMixinLibrary.SetBaseValue"));

	UAngelscriptGameplayAttributeDataMixinLibrary_SetBaseValue_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;
}


// Function AngelscriptGAS.AngelscriptGameplayAttributeDataMixinLibrary.Initialize
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAngelscriptGameplayAttributeData Data                           (Parm, OutParm)
// float                          InitialData                    (Parm, ZeroConstructor, IsPlainOldData)

void UAngelscriptGameplayAttributeDataMixinLibrary::STATIC_Initialize(float InitialData, struct FAngelscriptGameplayAttributeData* Data)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptGameplayAttributeDataMixinLibrary.Initialize"));

	UAngelscriptGameplayAttributeDataMixinLibrary_Initialize_Params params;
	params.InitialData = InitialData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;
}


// Function AngelscriptGAS.AngelscriptGameplayAttributeDataMixinLibrary.GetCurrentValue
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAngelscriptGameplayAttributeData Data                           (Parm, OutParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAngelscriptGameplayAttributeDataMixinLibrary::GetCurrentValue(struct FAngelscriptGameplayAttributeData* Data)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptGameplayAttributeDataMixinLibrary.GetCurrentValue"));

	UAngelscriptGameplayAttributeDataMixinLibrary_GetCurrentValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;

	return params.ReturnValue;
}


// Function AngelscriptGAS.AngelscriptGameplayAttributeDataMixinLibrary.GetBaseValue
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAngelscriptGameplayAttributeData Data                           (Parm, OutParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAngelscriptGameplayAttributeDataMixinLibrary::GetBaseValue(struct FAngelscriptGameplayAttributeData* Data)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptGameplayAttributeDataMixinLibrary.GetBaseValue"));

	UAngelscriptGameplayAttributeDataMixinLibrary_GetBaseValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;

	return params.ReturnValue;
}


// Function AngelscriptGAS.AngelscriptGameplayCueUtils.RemoveLocalGameplayCue
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            GameplayCueTag                 (Parm)
// struct FGameplayCueParameters  Parameters                     (ConstParm, Parm, OutParm, ReferenceParm)

void UAngelscriptGameplayCueUtils::STATIC_RemoveLocalGameplayCue(class AActor* TargetActor, const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptGameplayCueUtils.RemoveLocalGameplayCue"));

	UAngelscriptGameplayCueUtils_RemoveLocalGameplayCue_Params params;
	params.TargetActor = TargetActor;
	params.GameplayCueTag = GameplayCueTag;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptGAS.AngelscriptGameplayCueUtils.FindInstancedCueActor
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            Tag                            (ConstParm, Parm, OutParm, ReferenceParm)
// class AActor*                  InstigatorActor                (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 SourceObj                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AGameplayCueNotify_Actor* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AGameplayCueNotify_Actor* UAngelscriptGameplayCueUtils::STATIC_FindInstancedCueActor(class AActor* TargetActor, const struct FGameplayTag& Tag, class AActor* InstigatorActor, class UObject* SourceObj)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptGameplayCueUtils.FindInstancedCueActor"));

	UAngelscriptGameplayCueUtils_FindInstancedCueActor_Params params;
	params.TargetActor = TargetActor;
	params.Tag = Tag;
	params.InstigatorActor = InstigatorActor;
	params.SourceObj = SourceObj;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.AngelscriptGameplayCueUtils.ExecuteLocalGameplayCue
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            GameplayCueTag                 (Parm)
// struct FGameplayCueParameters  Parameters                     (ConstParm, Parm, OutParm, ReferenceParm)

void UAngelscriptGameplayCueUtils::STATIC_ExecuteLocalGameplayCue(class AActor* TargetActor, const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptGameplayCueUtils.ExecuteLocalGameplayCue"));

	UAngelscriptGameplayCueUtils_ExecuteLocalGameplayCue_Params params;
	params.TargetActor = TargetActor;
	params.GameplayCueTag = GameplayCueTag;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptGAS.AngelscriptGameplayCueUtils.AddLocalGameplayCue
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            GameplayCueTag                 (Parm)
// struct FGameplayCueParameters  Parameters                     (ConstParm, Parm, OutParm, ReferenceParm)

void UAngelscriptGameplayCueUtils::STATIC_AddLocalGameplayCue(class AActor* TargetActor, const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptGameplayCueUtils.AddLocalGameplayCue"));

	UAngelscriptGameplayCueUtils_AddLocalGameplayCue_Params params;
	params.TargetActor = TargetActor;
	params.GameplayCueTag = GameplayCueTag;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptGAS.GameplayEffectExecutionParametersMixinLibrary.SetTargetTags
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayEffectExecutionParameters Data                           (Parm, OutParm)
// struct FGameplayTagContainer   TargetTags                     (Parm, OutParm)

void UGameplayEffectExecutionParametersMixinLibrary::STATIC_SetTargetTags(struct FGameplayEffectExecutionParameters* Data, struct FGameplayTagContainer* TargetTags)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectExecutionParametersMixinLibrary.SetTargetTags"));

	UGameplayEffectExecutionParametersMixinLibrary_SetTargetTags_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;
	if (TargetTags != nullptr)
		*TargetTags = params.TargetTags;
}


// Function AngelscriptGAS.GameplayEffectExecutionParametersMixinLibrary.SetSourceTags
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayEffectExecutionParameters Data                           (Parm, OutParm)
// struct FGameplayTagContainer   SourceTags                     (Parm, OutParm)

void UGameplayEffectExecutionParametersMixinLibrary::STATIC_SetSourceTags(struct FGameplayEffectExecutionParameters* Data, struct FGameplayTagContainer* SourceTags)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectExecutionParametersMixinLibrary.SetSourceTags"));

	UGameplayEffectExecutionParametersMixinLibrary_SetSourceTags_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;
	if (SourceTags != nullptr)
		*SourceTags = params.SourceTags;
}


// Function AngelscriptGAS.GameplayEffectExecutionParametersMixinLibrary.SetIncludePredictiveMods
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayEffectExecutionParameters Data                           (Parm, OutParm)
// bool                           bShouldIncludePredictiveMods   (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayEffectExecutionParametersMixinLibrary::STATIC_SetIncludePredictiveMods(bool bShouldIncludePredictiveMods, struct FGameplayEffectExecutionParameters* Data)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectExecutionParametersMixinLibrary.SetIncludePredictiveMods"));

	UGameplayEffectExecutionParametersMixinLibrary_SetIncludePredictiveMods_Params params;
	params.bShouldIncludePredictiveMods = bShouldIncludePredictiveMods;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;
}


// Function AngelscriptGAS.GameplayEffectExecutionParametersMixinLibrary.SetCapturedSourceTagsFromSpec
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayEffectExecutionParameters Data                           (Parm, OutParm)
// struct FGameplayEffectSpec     Spec                           (Parm, OutParm)

void UGameplayEffectExecutionParametersMixinLibrary::STATIC_SetCapturedSourceTagsFromSpec(struct FGameplayEffectExecutionParameters* Data, struct FGameplayEffectSpec* Spec)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectExecutionParametersMixinLibrary.SetCapturedSourceTagsFromSpec"));

	UGameplayEffectExecutionParametersMixinLibrary_SetCapturedSourceTagsFromSpec_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;
	if (Spec != nullptr)
		*Spec = params.Spec;
}


// Function AngelscriptGAS.GameplayEffectExecutionParametersMixinLibrary.GetIncludePredictiveMods
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayEffectExecutionParameters Data                           (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayEffectExecutionParametersMixinLibrary::STATIC_GetIncludePredictiveMods(const struct FGameplayEffectExecutionParameters& Data)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectExecutionParametersMixinLibrary.GetIncludePredictiveMods"));

	UGameplayEffectExecutionParametersMixinLibrary_GetIncludePredictiveMods_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayEffectExecutionParametersMixinLibrary.GetIgnoreHandles
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayEffectExecutionParameters Data                           (Parm, OutParm)
// TArray<struct FActiveGameplayEffectHandle> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FActiveGameplayEffectHandle> UGameplayEffectExecutionParametersMixinLibrary::STATIC_GetIgnoreHandles(struct FGameplayEffectExecutionParameters* Data)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectExecutionParametersMixinLibrary.GetIgnoreHandles"));

	UGameplayEffectExecutionParametersMixinLibrary_GetIgnoreHandles_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayEffectExecutionParametersMixinLibrary.GetAppliedTargetTagFilter
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayEffectExecutionParameters Data                           (Parm, OutParm)
// struct FGameplayTagContainer   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayTagContainer UGameplayEffectExecutionParametersMixinLibrary::STATIC_GetAppliedTargetTagFilter(struct FGameplayEffectExecutionParameters* Data)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectExecutionParametersMixinLibrary.GetAppliedTargetTagFilter"));

	UGameplayEffectExecutionParametersMixinLibrary_GetAppliedTargetTagFilter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayEffectExecutionParametersMixinLibrary.GetAppliedSourceTagFilter
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayEffectExecutionParameters Data                           (Parm, OutParm)
// struct FGameplayTagContainer   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayTagContainer UGameplayEffectExecutionParametersMixinLibrary::STATIC_GetAppliedSourceTagFilter(struct FGameplayEffectExecutionParameters* Data)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectExecutionParametersMixinLibrary.GetAppliedSourceTagFilter"));

	UGameplayEffectExecutionParametersMixinLibrary_GetAppliedSourceTagFilter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;

	return params.ReturnValue;
}


// Function AngelscriptGAS.AngelscriptGameplayEffectUtils.MakeGameplayModifierEvaluationData
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayAttribute      InAttribute                    (ConstParm, Parm, OutParm, ReferenceParm)
// TEnumAsByte<EGameplayModOp>    InModOp                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          InMagnitude                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayModifierEvaluatedData ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayModifierEvaluatedData UAngelscriptGameplayEffectUtils::STATIC_MakeGameplayModifierEvaluationData(const struct FGameplayAttribute& InAttribute, TEnumAsByte<EGameplayModOp> InModOp, float InMagnitude)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptGameplayEffectUtils.MakeGameplayModifierEvaluationData"));

	UAngelscriptGameplayEffectUtils_MakeGameplayModifierEvaluationData_Params params;
	params.InAttribute = InAttribute;
	params.InModOp = InModOp;
	params.InMagnitude = InMagnitude;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.AngelscriptGameplayEffectUtils.MakeGameplayEffectExecutionScopedModifierInfo
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayEffectAttributeCaptureDefinition InCaptureDef                   (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayEffectExecutionScopedModifierInfo ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayEffectExecutionScopedModifierInfo UAngelscriptGameplayEffectUtils::STATIC_MakeGameplayEffectExecutionScopedModifierInfo(const struct FGameplayEffectAttributeCaptureDefinition& InCaptureDef)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptGameplayEffectUtils.MakeGameplayEffectExecutionScopedModifierInfo"));

	UAngelscriptGameplayEffectUtils_MakeGameplayEffectExecutionScopedModifierInfo_Params params;
	params.InCaptureDef = InCaptureDef;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.AngelscriptGameplayEffectUtils.CaptureGameplayAttribute
// (Final, Native, Static, Public)
// Parameters:
// class UStruct*                 AttributeSetType               (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   AttributeName                  (Parm, ZeroConstructor, IsPlainOldData)
// enum class EGameplayEffectAttributeCaptureSource InSource                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsSnapshot                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectAttributeCaptureDefinition ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayEffectAttributeCaptureDefinition UAngelscriptGameplayEffectUtils::STATIC_CaptureGameplayAttribute(class UStruct* AttributeSetType, const struct FName& AttributeName, enum class EGameplayEffectAttributeCaptureSource InSource, bool bIsSnapshot)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptGameplayEffectUtils.CaptureGameplayAttribute"));

	UAngelscriptGameplayEffectUtils_CaptureGameplayAttribute_Params params;
	params.AttributeSetType = AttributeSetType;
	params.AttributeName = AttributeName;
	params.InSource = InSource;
	params.bIsSnapshot = bIsSnapshot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.AngelscriptGASAbility.K2_RemoveGameplayCue_Static
// (Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  GameplayCue                    (Parm, ZeroConstructor, IsPlainOldData)

void UAngelscriptGASAbility::K2_RemoveGameplayCue_Static(class UClass* GameplayCue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptGASAbility.K2_RemoveGameplayCue_Static"));

	UAngelscriptGASAbility_K2_RemoveGameplayCue_Static_Params params;
	params.GameplayCue = GameplayCue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptGAS.AngelscriptGASAbility.K2_RemoveGameplayCue_Actor
// (Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  GameplayCue                    (Parm, ZeroConstructor, IsPlainOldData)

void UAngelscriptGASAbility::K2_RemoveGameplayCue_Actor(class UClass* GameplayCue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptGASAbility.K2_RemoveGameplayCue_Actor"));

	UAngelscriptGASAbility_K2_RemoveGameplayCue_Actor_Params params;
	params.GameplayCue = GameplayCue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptGAS.AngelscriptGASAbility.K2_ExecuteGameplayCueWithParams_Static
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UClass*                  GameplayCue                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  GameplayCueParameters          (ConstParm, Parm, OutParm, ReferenceParm)

void UAngelscriptGASAbility::K2_ExecuteGameplayCueWithParams_Static(class UClass* GameplayCue, const struct FGameplayCueParameters& GameplayCueParameters)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptGASAbility.K2_ExecuteGameplayCueWithParams_Static"));

	UAngelscriptGASAbility_K2_ExecuteGameplayCueWithParams_Static_Params params;
	params.GameplayCue = GameplayCue;
	params.GameplayCueParameters = GameplayCueParameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptGAS.AngelscriptGASAbility.K2_ExecuteGameplayCueWithParams_Actor
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UClass*                  GameplayCue                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  GameplayCueParameters          (ConstParm, Parm, OutParm, ReferenceParm)

void UAngelscriptGASAbility::K2_ExecuteGameplayCueWithParams_Actor(class UClass* GameplayCue, const struct FGameplayCueParameters& GameplayCueParameters)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptGASAbility.K2_ExecuteGameplayCueWithParams_Actor"));

	UAngelscriptGASAbility_K2_ExecuteGameplayCueWithParams_Actor_Params params;
	params.GameplayCue = GameplayCue;
	params.GameplayCueParameters = GameplayCueParameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptGAS.AngelscriptGASAbility.K2_ExecuteGameplayCue_Static
// (Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  GameplayCue                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle Context                        (Parm)

void UAngelscriptGASAbility::K2_ExecuteGameplayCue_Static(class UClass* GameplayCue, const struct FGameplayEffectContextHandle& Context)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptGASAbility.K2_ExecuteGameplayCue_Static"));

	UAngelscriptGASAbility_K2_ExecuteGameplayCue_Static_Params params;
	params.GameplayCue = GameplayCue;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptGAS.AngelscriptGASAbility.K2_ExecuteGameplayCue_Actor
// (Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  GameplayCue                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle Context                        (Parm)

void UAngelscriptGASAbility::K2_ExecuteGameplayCue_Actor(class UClass* GameplayCue, const struct FGameplayEffectContextHandle& Context)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptGASAbility.K2_ExecuteGameplayCue_Actor"));

	UAngelscriptGASAbility_K2_ExecuteGameplayCue_Actor_Params params;
	params.GameplayCue = GameplayCue;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptGAS.AngelscriptGASAbility.K2_AddGameplayCueWithParams_Static
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UClass*                  GameplayCue                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  GameplayCueParameter           (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bRemoveOnAbilityEnd            (Parm, ZeroConstructor, IsPlainOldData)

void UAngelscriptGASAbility::K2_AddGameplayCueWithParams_Static(class UClass* GameplayCue, const struct FGameplayCueParameters& GameplayCueParameter, bool bRemoveOnAbilityEnd)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptGASAbility.K2_AddGameplayCueWithParams_Static"));

	UAngelscriptGASAbility_K2_AddGameplayCueWithParams_Static_Params params;
	params.GameplayCue = GameplayCue;
	params.GameplayCueParameter = GameplayCueParameter;
	params.bRemoveOnAbilityEnd = bRemoveOnAbilityEnd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptGAS.AngelscriptGASAbility.K2_AddGameplayCueWithParams_Actor
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UClass*                  GameplayCue                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  GameplayCueParameter           (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bRemoveOnAbilityEnd            (Parm, ZeroConstructor, IsPlainOldData)

void UAngelscriptGASAbility::K2_AddGameplayCueWithParams_Actor(class UClass* GameplayCue, const struct FGameplayCueParameters& GameplayCueParameter, bool bRemoveOnAbilityEnd)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptGASAbility.K2_AddGameplayCueWithParams_Actor"));

	UAngelscriptGASAbility_K2_AddGameplayCueWithParams_Actor_Params params;
	params.GameplayCue = GameplayCue;
	params.GameplayCueParameter = GameplayCueParameter;
	params.bRemoveOnAbilityEnd = bRemoveOnAbilityEnd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptGAS.AngelscriptGASAbility.K2_AddGameplayCue_Static
// (Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  GameplayCue                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle Context                        (Parm)
// bool                           bRemoveOnAbilityEnd            (Parm, ZeroConstructor, IsPlainOldData)

void UAngelscriptGASAbility::K2_AddGameplayCue_Static(class UClass* GameplayCue, const struct FGameplayEffectContextHandle& Context, bool bRemoveOnAbilityEnd)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptGASAbility.K2_AddGameplayCue_Static"));

	UAngelscriptGASAbility_K2_AddGameplayCue_Static_Params params;
	params.GameplayCue = GameplayCue;
	params.Context = Context;
	params.bRemoveOnAbilityEnd = bRemoveOnAbilityEnd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptGAS.AngelscriptGASAbility.K2_AddGameplayCue_Actor
// (Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  GameplayCue                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle Context                        (Parm)
// bool                           bRemoveOnAbilityEnd            (Parm, ZeroConstructor, IsPlainOldData)

void UAngelscriptGASAbility::K2_AddGameplayCue_Actor(class UClass* GameplayCue, const struct FGameplayEffectContextHandle& Context, bool bRemoveOnAbilityEnd)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptGASAbility.K2_AddGameplayCue_Actor"));

	UAngelscriptGASAbility_K2_AddGameplayCue_Actor_Params params;
	params.GameplayCue = GameplayCue;
	params.Context = Context;
	params.bRemoveOnAbilityEnd = bRemoveOnAbilityEnd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptGAS.AngelscriptGASCharacter.SetupCharacterInput
// (Event, Public, BlueprintEvent)
// Parameters:
// class UInputComponent*         PlayerInputComponent           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AAngelscriptGASCharacter::SetupCharacterInput(class UInputComponent* PlayerInputComponent)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptGASCharacter.SetupCharacterInput"));

	AAngelscriptGASCharacter_SetupCharacterInput_Params params;
	params.PlayerInputComponent = PlayerInputComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptGAS.AngelscriptGASPawn.SetupPawnInput
// (Event, Public, BlueprintEvent)
// Parameters:
// class UInputComponent*         PlayerInputComponent           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AAngelscriptGASPawn::SetupPawnInput(class UInputComponent* PlayerInputComponent)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.AngelscriptGASPawn.SetupPawnInput"));

	AAngelscriptGASPawn_SetupPawnInput_Params params;
	params.PlayerInputComponent = PlayerInputComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptGAS.GameplayAbilityActorInfoMixinLibrary.IsNetAuthority
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityActorInfo Info                           (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayAbilityActorInfoMixinLibrary::STATIC_IsNetAuthority(const struct FGameplayAbilityActorInfo& Info)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayAbilityActorInfoMixinLibrary.IsNetAuthority"));

	UGameplayAbilityActorInfoMixinLibrary_IsNetAuthority_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayAbilityActorInfoMixinLibrary.IsLocallyControlledPlayer
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityActorInfo Info                           (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayAbilityActorInfoMixinLibrary::STATIC_IsLocallyControlledPlayer(const struct FGameplayAbilityActorInfo& Info)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayAbilityActorInfoMixinLibrary.IsLocallyControlledPlayer"));

	UGameplayAbilityActorInfoMixinLibrary_IsLocallyControlledPlayer_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayAbilityActorInfoMixinLibrary.IsLocallyControlled
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityActorInfo Info                           (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayAbilityActorInfoMixinLibrary::STATIC_IsLocallyControlled(const struct FGameplayAbilityActorInfo& Info)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayAbilityActorInfoMixinLibrary.IsLocallyControlled"));

	UGameplayAbilityActorInfoMixinLibrary_IsLocallyControlled_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayAbilityActorInfoMixinLibrary.GetSkeletalMeshComponent
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityActorInfo Info                           (ConstParm, Parm, OutParm, ReferenceParm)
// class USkeletalMeshComponent*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USkeletalMeshComponent* UGameplayAbilityActorInfoMixinLibrary::STATIC_GetSkeletalMeshComponent(const struct FGameplayAbilityActorInfo& Info)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayAbilityActorInfoMixinLibrary.GetSkeletalMeshComponent"));

	UGameplayAbilityActorInfoMixinLibrary_GetSkeletalMeshComponent_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayAbilityActorInfoMixinLibrary.GetPlayerController
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityActorInfo Info                           (ConstParm, Parm, OutParm, ReferenceParm)
// class APlayerController*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APlayerController* UGameplayAbilityActorInfoMixinLibrary::STATIC_GetPlayerController(const struct FGameplayAbilityActorInfo& Info)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayAbilityActorInfoMixinLibrary.GetPlayerController"));

	UGameplayAbilityActorInfoMixinLibrary_GetPlayerController_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayAbilityActorInfoMixinLibrary.GetOwnerActor
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityActorInfo Info                           (ConstParm, Parm, OutParm, ReferenceParm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UGameplayAbilityActorInfoMixinLibrary::STATIC_GetOwnerActor(const struct FGameplayAbilityActorInfo& Info)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayAbilityActorInfoMixinLibrary.GetOwnerActor"));

	UGameplayAbilityActorInfoMixinLibrary_GetOwnerActor_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayAbilityActorInfoMixinLibrary.GetMovementComponent
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityActorInfo Info                           (ConstParm, Parm, OutParm, ReferenceParm)
// class UMovementComponent*      ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UMovementComponent* UGameplayAbilityActorInfoMixinLibrary::STATIC_GetMovementComponent(const struct FGameplayAbilityActorInfo& Info)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayAbilityActorInfoMixinLibrary.GetMovementComponent"));

	UGameplayAbilityActorInfoMixinLibrary_GetMovementComponent_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayAbilityActorInfoMixinLibrary.GetAvatarActor
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityActorInfo Info                           (ConstParm, Parm, OutParm, ReferenceParm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UGameplayAbilityActorInfoMixinLibrary::STATIC_GetAvatarActor(const struct FGameplayAbilityActorInfo& Info)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayAbilityActorInfoMixinLibrary.GetAvatarActor"));

	UGameplayAbilityActorInfoMixinLibrary_GetAvatarActor_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayAbilityActorInfoMixinLibrary.GetAnimInstance
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityActorInfo Info                           (ConstParm, Parm, OutParm, ReferenceParm)
// class UAnimInstance*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimInstance* UGameplayAbilityActorInfoMixinLibrary::STATIC_GetAnimInstance(const struct FGameplayAbilityActorInfo& Info)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayAbilityActorInfoMixinLibrary.GetAnimInstance"));

	UGameplayAbilityActorInfoMixinLibrary_GetAnimInstance_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayAbilityActorInfoMixinLibrary.GetAbilitySystemComponent
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityActorInfo Info                           (ConstParm, Parm, OutParm, ReferenceParm)
// class UAbilitySystemComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAbilitySystemComponent* UGameplayAbilityActorInfoMixinLibrary::STATIC_GetAbilitySystemComponent(const struct FGameplayAbilityActorInfo& Info)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayAbilityActorInfoMixinLibrary.GetAbilitySystemComponent"));

	UGameplayAbilityActorInfoMixinLibrary_GetAbilitySystemComponent_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayAbilityMixinLibrary.GetSourceObject
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UGameplayAbility*        Ability                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayAbilitySpecHandle Handle                         (Parm)
// struct FGameplayAbilityActorInfo ActorInfo                      (ConstParm, Parm, OutParm, ReferenceParm)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UGameplayAbilityMixinLibrary::STATIC_GetSourceObject(class UGameplayAbility* Ability, const struct FGameplayAbilitySpecHandle& Handle, const struct FGameplayAbilityActorInfo& ActorInfo)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayAbilityMixinLibrary.GetSourceObject"));

	UGameplayAbilityMixinLibrary_GetSourceObject_Params params;
	params.Ability = Ability;
	params.Handle = Handle;
	params.ActorInfo = ActorInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayCueParametersMixinLibrary.SetTargetAttachComponent
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayCueParameters  GameplayCueParams              (Parm, OutParm)
// class USceneComponent*         TargetAttachComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGameplayCueParametersMixinLibrary::STATIC_SetTargetAttachComponent(class USceneComponent* TargetAttachComponent, struct FGameplayCueParameters* GameplayCueParams)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayCueParametersMixinLibrary.SetTargetAttachComponent"));

	UGameplayCueParametersMixinLibrary_SetTargetAttachComponent_Params params;
	params.TargetAttachComponent = TargetAttachComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GameplayCueParams != nullptr)
		*GameplayCueParams = params.GameplayCueParams;
}


// Function AngelscriptGAS.GameplayCueParametersMixinLibrary.SetSourceObject
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayCueParameters  GameplayCueParams              (Parm, OutParm)
// class UObject*                 SourceObject                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UGameplayCueParametersMixinLibrary::STATIC_SetSourceObject(class UObject* SourceObject, struct FGameplayCueParameters* GameplayCueParams)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayCueParametersMixinLibrary.SetSourceObject"));

	UGameplayCueParametersMixinLibrary_SetSourceObject_Params params;
	params.SourceObject = SourceObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GameplayCueParams != nullptr)
		*GameplayCueParams = params.GameplayCueParams;
}


// Function AngelscriptGAS.GameplayCueParametersMixinLibrary.SetPhysicalMaterial
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayCueParameters  GameplayCueParams              (Parm, OutParm)
// class UPhysicalMaterial*       PhysicalMaterial               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UGameplayCueParametersMixinLibrary::STATIC_SetPhysicalMaterial(class UPhysicalMaterial* PhysicalMaterial, struct FGameplayCueParameters* GameplayCueParams)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayCueParametersMixinLibrary.SetPhysicalMaterial"));

	UGameplayCueParametersMixinLibrary_SetPhysicalMaterial_Params params;
	params.PhysicalMaterial = PhysicalMaterial;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GameplayCueParams != nullptr)
		*GameplayCueParams = params.GameplayCueParams;
}


// Function AngelscriptGAS.GameplayCueParametersMixinLibrary.SetInstigator
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayCueParameters  GameplayCueParams              (Parm, OutParm)
// class AActor*                  Instigator                     (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayCueParametersMixinLibrary::STATIC_SetInstigator(class AActor* Instigator, struct FGameplayCueParameters* GameplayCueParams)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayCueParametersMixinLibrary.SetInstigator"));

	UGameplayCueParametersMixinLibrary_SetInstigator_Params params;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GameplayCueParams != nullptr)
		*GameplayCueParams = params.GameplayCueParams;
}


// Function AngelscriptGAS.GameplayCueParametersMixinLibrary.SetEffectCauser
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayCueParameters  GameplayCueParams              (Parm, OutParm)
// class AActor*                  EffectCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayCueParametersMixinLibrary::STATIC_SetEffectCauser(class AActor* EffectCauser, struct FGameplayCueParameters* GameplayCueParams)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayCueParametersMixinLibrary.SetEffectCauser"));

	UGameplayCueParametersMixinLibrary_SetEffectCauser_Params params;
	params.EffectCauser = EffectCauser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GameplayCueParams != nullptr)
		*GameplayCueParams = params.GameplayCueParams;
}


// Function AngelscriptGAS.GameplayCueParametersMixinLibrary.GetTargetAttachComponent
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayCueParameters  GameplayCueParams              (ConstParm, Parm, OutParm, ReferenceParm)
// class USceneComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USceneComponent* UGameplayCueParametersMixinLibrary::STATIC_GetTargetAttachComponent(const struct FGameplayCueParameters& GameplayCueParams)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayCueParametersMixinLibrary.GetTargetAttachComponent"));

	UGameplayCueParametersMixinLibrary_GetTargetAttachComponent_Params params;
	params.GameplayCueParams = GameplayCueParams;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayCueParametersMixinLibrary.GetInstigator
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayCueParameters  GameplayCueParams              (ConstParm, Parm, OutParm, ReferenceParm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UGameplayCueParametersMixinLibrary::STATIC_GetInstigator(const struct FGameplayCueParameters& GameplayCueParams)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayCueParametersMixinLibrary.GetInstigator"));

	UGameplayCueParametersMixinLibrary_GetInstigator_Params params;
	params.GameplayCueParams = GameplayCueParams;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayCueParametersMixinLibrary.GetEffectCauser
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayCueParameters  GameplayCueParams              (ConstParm, Parm, OutParm, ReferenceParm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UGameplayCueParametersMixinLibrary::STATIC_GetEffectCauser(const struct FGameplayCueParameters& GameplayCueParams)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayCueParametersMixinLibrary.GetEffectCauser"));

	UGameplayCueParametersMixinLibrary_GetEffectCauser_Params params;
	params.GameplayCueParams = GameplayCueParams;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayEffectContextHandleMixinLibrary.SetEffectCauser
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayEffectContextHandle Handle                         (Parm, OutParm)
// class AActor*                  NewEffectCauser                (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayEffectContextHandleMixinLibrary::STATIC_SetEffectCauser(class AActor* NewEffectCauser, struct FGameplayEffectContextHandle* Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectContextHandleMixinLibrary.SetEffectCauser"));

	UGameplayEffectContextHandleMixinLibrary_SetEffectCauser_Params params;
	params.NewEffectCauser = NewEffectCauser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handle != nullptr)
		*Handle = params.Handle;
}


// Function AngelscriptGAS.GameplayEffectContextHandleMixinLibrary.SetAbility
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayEffectContextHandle Handle                         (Parm, OutParm)
// class UGameplayAbility*        InGameplayAbility              (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayEffectContextHandleMixinLibrary::STATIC_SetAbility(class UGameplayAbility* InGameplayAbility, struct FGameplayEffectContextHandle* Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectContextHandleMixinLibrary.SetAbility"));

	UGameplayEffectContextHandleMixinLibrary_SetAbility_Params params;
	params.InGameplayAbility = InGameplayAbility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handle != nullptr)
		*Handle = params.Handle;
}


// Function AngelscriptGAS.GameplayEffectContextHandleMixinLibrary.IsValid
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandle Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayEffectContextHandleMixinLibrary::STATIC_IsValid(const struct FGameplayEffectContextHandle& Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectContextHandleMixinLibrary.IsValid"));

	UGameplayEffectContextHandleMixinLibrary_IsValid_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayEffectContextHandleMixinLibrary.IsLocallyControlledPlayer
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandle Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayEffectContextHandleMixinLibrary::STATIC_IsLocallyControlledPlayer(const struct FGameplayEffectContextHandle& Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectContextHandleMixinLibrary.IsLocallyControlledPlayer"));

	UGameplayEffectContextHandleMixinLibrary_IsLocallyControlledPlayer_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayEffectContextHandleMixinLibrary.IsLocallyControlled
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandle Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayEffectContextHandleMixinLibrary::STATIC_IsLocallyControlled(const struct FGameplayEffectContextHandle& Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectContextHandleMixinLibrary.IsLocallyControlled"));

	UGameplayEffectContextHandleMixinLibrary_IsLocallyControlled_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayEffectContextHandleMixinLibrary.HasOrigin
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandle Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayEffectContextHandleMixinLibrary::STATIC_HasOrigin(const struct FGameplayEffectContextHandle& Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectContextHandleMixinLibrary.HasOrigin"));

	UGameplayEffectContextHandleMixinLibrary_HasOrigin_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayEffectContextHandleMixinLibrary.GetSourceObject
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandle Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UGameplayEffectContextHandleMixinLibrary::STATIC_GetSourceObject(const struct FGameplayEffectContextHandle& Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectContextHandleMixinLibrary.GetSourceObject"));

	UGameplayEffectContextHandleMixinLibrary_GetSourceObject_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayEffectContextHandleMixinLibrary.GetOwnedGameplayTags
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayEffectContextHandle Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   ActorTagContainer              (Parm, OutParm)
// struct FGameplayTagContainer   SpecTagContainer               (Parm, OutParm)

void UGameplayEffectContextHandleMixinLibrary::STATIC_GetOwnedGameplayTags(const struct FGameplayEffectContextHandle& Handle, struct FGameplayTagContainer* ActorTagContainer, struct FGameplayTagContainer* SpecTagContainer)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectContextHandleMixinLibrary.GetOwnedGameplayTags"));

	UGameplayEffectContextHandleMixinLibrary_GetOwnedGameplayTags_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActorTagContainer != nullptr)
		*ActorTagContainer = params.ActorTagContainer;
	if (SpecTagContainer != nullptr)
		*SpecTagContainer = params.SpecTagContainer;
}


// Function AngelscriptGAS.GameplayEffectContextHandleMixinLibrary.GetOriginalInstigatorAbilitySystemComponent
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandle Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// class UAbilitySystemComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAbilitySystemComponent* UGameplayEffectContextHandleMixinLibrary::STATIC_GetOriginalInstigatorAbilitySystemComponent(const struct FGameplayEffectContextHandle& Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectContextHandleMixinLibrary.GetOriginalInstigatorAbilitySystemComponent"));

	UGameplayEffectContextHandleMixinLibrary_GetOriginalInstigatorAbilitySystemComponent_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayEffectContextHandleMixinLibrary.GetOriginalInstigator
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandle Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UGameplayEffectContextHandleMixinLibrary::STATIC_GetOriginalInstigator(const struct FGameplayEffectContextHandle& Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectContextHandleMixinLibrary.GetOriginalInstigator"));

	UGameplayEffectContextHandleMixinLibrary_GetOriginalInstigator_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayEffectContextHandleMixinLibrary.GetOrigin
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandle Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UGameplayEffectContextHandleMixinLibrary::STATIC_GetOrigin(const struct FGameplayEffectContextHandle& Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectContextHandleMixinLibrary.GetOrigin"));

	UGameplayEffectContextHandleMixinLibrary_GetOrigin_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayEffectContextHandleMixinLibrary.GetInstigator
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandle Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UGameplayEffectContextHandleMixinLibrary::STATIC_GetInstigator(const struct FGameplayEffectContextHandle& Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectContextHandleMixinLibrary.GetInstigator"));

	UGameplayEffectContextHandleMixinLibrary_GetInstigator_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayEffectContextHandleMixinLibrary.GetHitResult
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandle Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FHitResult              OutHitResult                   (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayEffectContextHandleMixinLibrary::STATIC_GetHitResult(const struct FGameplayEffectContextHandle& Handle, struct FHitResult* OutHitResult)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectContextHandleMixinLibrary.GetHitResult"));

	UGameplayEffectContextHandleMixinLibrary_GetHitResult_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutHitResult != nullptr)
		*OutHitResult = params.OutHitResult;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayEffectContextHandleMixinLibrary.GetEffectCauser
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandle Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UGameplayEffectContextHandleMixinLibrary::STATIC_GetEffectCauser(const struct FGameplayEffectContextHandle& Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectContextHandleMixinLibrary.GetEffectCauser"));

	UGameplayEffectContextHandleMixinLibrary_GetEffectCauser_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayEffectContextHandleMixinLibrary.GetActors
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayEffectContextHandle Handle                         (Parm, OutParm)
// TArray<class AActor*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AActor*> UGameplayEffectContextHandleMixinLibrary::STATIC_GetActors(struct FGameplayEffectContextHandle* Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectContextHandleMixinLibrary.GetActors"));

	UGameplayEffectContextHandleMixinLibrary_GetActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handle != nullptr)
		*Handle = params.Handle;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayEffectContextHandleMixinLibrary.GetAbilityLevel
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandle Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGameplayEffectContextHandleMixinLibrary::STATIC_GetAbilityLevel(const struct FGameplayEffectContextHandle& Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectContextHandleMixinLibrary.GetAbilityLevel"));

	UGameplayEffectContextHandleMixinLibrary_GetAbilityLevel_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayEffectContextHandleMixinLibrary.Clear
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayEffectContextHandle Handle                         (Parm, OutParm)

void UGameplayEffectContextHandleMixinLibrary::STATIC_Clear(struct FGameplayEffectContextHandle* Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectContextHandleMixinLibrary.Clear"));

	UGameplayEffectContextHandleMixinLibrary_Clear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handle != nullptr)
		*Handle = params.Handle;
}


// Function AngelscriptGAS.GameplayEffectContextHandleMixinLibrary.AddSourceObject
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayEffectContextHandle Handle                         (Parm, OutParm)
// class UObject*                 NewSourceObject                (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayEffectContextHandleMixinLibrary::STATIC_AddSourceObject(class UObject* NewSourceObject, struct FGameplayEffectContextHandle* Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectContextHandleMixinLibrary.AddSourceObject"));

	UGameplayEffectContextHandleMixinLibrary_AddSourceObject_Params params;
	params.NewSourceObject = NewSourceObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handle != nullptr)
		*Handle = params.Handle;
}


// Function AngelscriptGAS.GameplayEffectContextHandleMixinLibrary.AddOrigin
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGameplayEffectContextHandle Handle                         (Parm, OutParm)
// struct FVector                 InOrigin                       (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayEffectContextHandleMixinLibrary::STATIC_AddOrigin(const struct FVector& InOrigin, struct FGameplayEffectContextHandle* Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectContextHandleMixinLibrary.AddOrigin"));

	UGameplayEffectContextHandleMixinLibrary_AddOrigin_Params params;
	params.InOrigin = InOrigin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handle != nullptr)
		*Handle = params.Handle;
}


// Function AngelscriptGAS.GameplayEffectContextHandleMixinLibrary.AddInstigator
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayEffectContextHandle Handle                         (Parm, OutParm)
// class AActor*                  InInstigator                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  InEffectCauser                 (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayEffectContextHandleMixinLibrary::STATIC_AddInstigator(class AActor* InInstigator, class AActor* InEffectCauser, struct FGameplayEffectContextHandle* Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectContextHandleMixinLibrary.AddInstigator"));

	UGameplayEffectContextHandleMixinLibrary_AddInstigator_Params params;
	params.InInstigator = InInstigator;
	params.InEffectCauser = InEffectCauser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handle != nullptr)
		*Handle = params.Handle;
}


// Function AngelscriptGAS.GameplayEffectContextHandleMixinLibrary.AddHitResult
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayEffectContextHandle Handle                         (Parm, OutParm)
// struct FHitResult              InHitResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bReset                         (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayEffectContextHandleMixinLibrary::STATIC_AddHitResult(const struct FHitResult& InHitResult, bool bReset, struct FGameplayEffectContextHandle* Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectContextHandleMixinLibrary.AddHitResult"));

	UGameplayEffectContextHandleMixinLibrary_AddHitResult_Params params;
	params.InHitResult = InHitResult;
	params.bReset = bReset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handle != nullptr)
		*Handle = params.Handle;
}


// Function AngelscriptGAS.GameplayEffectContextHandleMixinLibrary.AddActors
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayEffectContextHandle Handle                         (Parm, OutParm)
// TArray<class AActor*>          InActors                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bReset                         (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayEffectContextHandleMixinLibrary::STATIC_AddActors(TArray<class AActor*> InActors, bool bReset, struct FGameplayEffectContextHandle* Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectContextHandleMixinLibrary.AddActors"));

	UGameplayEffectContextHandleMixinLibrary_AddActors_Params params;
	params.InActors = InActors;
	params.bReset = bReset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handle != nullptr)
		*Handle = params.Handle;
}


// Function AngelscriptGAS.GameplayEffectCustomExecutionOutputMixinLibrary.ShouldTriggerConditionalGameplayEffects
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayEffectCustomExecutionOutput CustomExecutionOutput          (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayEffectCustomExecutionOutputMixinLibrary::STATIC_ShouldTriggerConditionalGameplayEffects(struct FGameplayEffectCustomExecutionOutput* CustomExecutionOutput)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectCustomExecutionOutputMixinLibrary.ShouldTriggerConditionalGameplayEffects"));

	UGameplayEffectCustomExecutionOutputMixinLibrary_ShouldTriggerConditionalGameplayEffects_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CustomExecutionOutput != nullptr)
		*CustomExecutionOutput = params.CustomExecutionOutput;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayEffectCustomExecutionOutputMixinLibrary.MarkStackCountHandledManually
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayEffectCustomExecutionOutput CustomExecutionOutput          (Parm, OutParm)

void UGameplayEffectCustomExecutionOutputMixinLibrary::STATIC_MarkStackCountHandledManually(struct FGameplayEffectCustomExecutionOutput* CustomExecutionOutput)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectCustomExecutionOutputMixinLibrary.MarkStackCountHandledManually"));

	UGameplayEffectCustomExecutionOutputMixinLibrary_MarkStackCountHandledManually_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CustomExecutionOutput != nullptr)
		*CustomExecutionOutput = params.CustomExecutionOutput;
}


// Function AngelscriptGAS.GameplayEffectCustomExecutionOutputMixinLibrary.MarkGameplayCuesHandledManually
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayEffectCustomExecutionOutput CustomExecutionOutput          (Parm, OutParm)

void UGameplayEffectCustomExecutionOutputMixinLibrary::STATIC_MarkGameplayCuesHandledManually(struct FGameplayEffectCustomExecutionOutput* CustomExecutionOutput)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectCustomExecutionOutputMixinLibrary.MarkGameplayCuesHandledManually"));

	UGameplayEffectCustomExecutionOutputMixinLibrary_MarkGameplayCuesHandledManually_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CustomExecutionOutput != nullptr)
		*CustomExecutionOutput = params.CustomExecutionOutput;
}


// Function AngelscriptGAS.GameplayEffectCustomExecutionOutputMixinLibrary.MarkConditionalGameplayEffectsToTrigger
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayEffectCustomExecutionOutput CustomExecutionOutput          (Parm, OutParm)

void UGameplayEffectCustomExecutionOutputMixinLibrary::STATIC_MarkConditionalGameplayEffectsToTrigger(struct FGameplayEffectCustomExecutionOutput* CustomExecutionOutput)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectCustomExecutionOutputMixinLibrary.MarkConditionalGameplayEffectsToTrigger"));

	UGameplayEffectCustomExecutionOutputMixinLibrary_MarkConditionalGameplayEffectsToTrigger_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CustomExecutionOutput != nullptr)
		*CustomExecutionOutput = params.CustomExecutionOutput;
}


// Function AngelscriptGAS.GameplayEffectCustomExecutionOutputMixinLibrary.IsStackCountHandledManually
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayEffectCustomExecutionOutput CustomExecutionOutput          (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayEffectCustomExecutionOutputMixinLibrary::STATIC_IsStackCountHandledManually(struct FGameplayEffectCustomExecutionOutput* CustomExecutionOutput)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectCustomExecutionOutputMixinLibrary.IsStackCountHandledManually"));

	UGameplayEffectCustomExecutionOutputMixinLibrary_IsStackCountHandledManually_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CustomExecutionOutput != nullptr)
		*CustomExecutionOutput = params.CustomExecutionOutput;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayEffectCustomExecutionOutputMixinLibrary.GetOutputModifiersRef
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayEffectCustomExecutionOutput CustomExecutionOutput          (Parm, OutParm)
// TArray<struct FGameplayModifierEvaluatedData> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FGameplayModifierEvaluatedData> UGameplayEffectCustomExecutionOutputMixinLibrary::STATIC_GetOutputModifiersRef(struct FGameplayEffectCustomExecutionOutput* CustomExecutionOutput)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectCustomExecutionOutputMixinLibrary.GetOutputModifiersRef"));

	UGameplayEffectCustomExecutionOutputMixinLibrary_GetOutputModifiersRef_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CustomExecutionOutput != nullptr)
		*CustomExecutionOutput = params.CustomExecutionOutput;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayEffectCustomExecutionOutputMixinLibrary.GetOutputModifiers
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayEffectCustomExecutionOutput CustomExecutionOutput          (Parm, OutParm)
// TArray<struct FGameplayModifierEvaluatedData> ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<struct FGameplayModifierEvaluatedData> UGameplayEffectCustomExecutionOutputMixinLibrary::STATIC_GetOutputModifiers(struct FGameplayEffectCustomExecutionOutput* CustomExecutionOutput)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectCustomExecutionOutputMixinLibrary.GetOutputModifiers"));

	UGameplayEffectCustomExecutionOutputMixinLibrary_GetOutputModifiers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CustomExecutionOutput != nullptr)
		*CustomExecutionOutput = params.CustomExecutionOutput;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayEffectCustomExecutionOutputMixinLibrary.AreGameplayCuesHandledManually
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayEffectCustomExecutionOutput CustomExecutionOutput          (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayEffectCustomExecutionOutputMixinLibrary::STATIC_AreGameplayCuesHandledManually(struct FGameplayEffectCustomExecutionOutput* CustomExecutionOutput)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectCustomExecutionOutputMixinLibrary.AreGameplayCuesHandledManually"));

	UGameplayEffectCustomExecutionOutputMixinLibrary_AreGameplayCuesHandledManually_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CustomExecutionOutput != nullptr)
		*CustomExecutionOutput = params.CustomExecutionOutput;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayEffectCustomExecutionOutputMixinLibrary.AddOutputModifier
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayEffectCustomExecutionOutput CustomExecutionOutput          (Parm, OutParm)
// struct FGameplayModifierEvaluatedData InOutputMod                    (ConstParm, Parm, OutParm, ReferenceParm)

void UGameplayEffectCustomExecutionOutputMixinLibrary::STATIC_AddOutputModifier(const struct FGameplayModifierEvaluatedData& InOutputMod, struct FGameplayEffectCustomExecutionOutput* CustomExecutionOutput)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectCustomExecutionOutputMixinLibrary.AddOutputModifier"));

	UGameplayEffectCustomExecutionOutputMixinLibrary_AddOutputModifier_Params params;
	params.InOutputMod = InOutputMod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CustomExecutionOutput != nullptr)
		*CustomExecutionOutput = params.CustomExecutionOutput;
}


// Function AngelscriptGAS.GameplayEffectCustomExecutionParametersMixinLibrary.GetTargetAbilitySystemComponent
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayEffectCustomExecutionParameters CustomExecutionParameters      (ConstParm, Parm, OutParm, ReferenceParm)
// class UAbilitySystemComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAbilitySystemComponent* UGameplayEffectCustomExecutionParametersMixinLibrary::STATIC_GetTargetAbilitySystemComponent(const struct FGameplayEffectCustomExecutionParameters& CustomExecutionParameters)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectCustomExecutionParametersMixinLibrary.GetTargetAbilitySystemComponent"));

	UGameplayEffectCustomExecutionParametersMixinLibrary_GetTargetAbilitySystemComponent_Params params;
	params.CustomExecutionParameters = CustomExecutionParameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayEffectCustomExecutionParametersMixinLibrary.GetSourceAbilitySystemComponent
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayEffectCustomExecutionParameters CustomExecutionParameters      (ConstParm, Parm, OutParm, ReferenceParm)
// class UAbilitySystemComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAbilitySystemComponent* UGameplayEffectCustomExecutionParametersMixinLibrary::STATIC_GetSourceAbilitySystemComponent(const struct FGameplayEffectCustomExecutionParameters& CustomExecutionParameters)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectCustomExecutionParametersMixinLibrary.GetSourceAbilitySystemComponent"));

	UGameplayEffectCustomExecutionParametersMixinLibrary_GetSourceAbilitySystemComponent_Params params;
	params.CustomExecutionParameters = CustomExecutionParameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayEffectCustomExecutionParametersMixinLibrary.GetPredictionKey
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayEffectCustomExecutionParameters CustomExecutionParameters      (ConstParm, Parm, OutParm, ReferenceParm)
// struct FPredictionKey          ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPredictionKey UGameplayEffectCustomExecutionParametersMixinLibrary::STATIC_GetPredictionKey(const struct FGameplayEffectCustomExecutionParameters& CustomExecutionParameters)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectCustomExecutionParametersMixinLibrary.GetPredictionKey"));

	UGameplayEffectCustomExecutionParametersMixinLibrary_GetPredictionKey_Params params;
	params.CustomExecutionParameters = CustomExecutionParameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayEffectCustomExecutionParametersMixinLibrary.GetPassedInTags
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayEffectCustomExecutionParameters CustomExecutionParameters      (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

struct FGameplayTagContainer UGameplayEffectCustomExecutionParametersMixinLibrary::STATIC_GetPassedInTags(const struct FGameplayEffectCustomExecutionParameters& CustomExecutionParameters)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectCustomExecutionParametersMixinLibrary.GetPassedInTags"));

	UGameplayEffectCustomExecutionParametersMixinLibrary_GetPassedInTags_Params params;
	params.CustomExecutionParameters = CustomExecutionParameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayEffectCustomExecutionParametersMixinLibrary.GetOwningSpecForPreExecuteMod
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayEffectCustomExecutionParameters CustomExecutionParameters      (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayEffectSpec     ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayEffectSpec UGameplayEffectCustomExecutionParametersMixinLibrary::STATIC_GetOwningSpecForPreExecuteMod(const struct FGameplayEffectCustomExecutionParameters& CustomExecutionParameters)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectCustomExecutionParametersMixinLibrary.GetOwningSpecForPreExecuteMod"));

	UGameplayEffectCustomExecutionParametersMixinLibrary_GetOwningSpecForPreExecuteMod_Params params;
	params.CustomExecutionParameters = CustomExecutionParameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayEffectCustomExecutionParametersMixinLibrary.GetOwningSpec
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayEffectCustomExecutionParameters CustomExecutionParameters      (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayEffectSpec     ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

struct FGameplayEffectSpec UGameplayEffectCustomExecutionParametersMixinLibrary::STATIC_GetOwningSpec(const struct FGameplayEffectCustomExecutionParameters& CustomExecutionParameters)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectCustomExecutionParametersMixinLibrary.GetOwningSpec"));

	UGameplayEffectCustomExecutionParametersMixinLibrary_GetOwningSpec_Params params;
	params.CustomExecutionParameters = CustomExecutionParameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayEffectCustomExecutionParametersMixinLibrary.GetIgnoreHandles
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayEffectCustomExecutionParameters CustomExecutionParameters      (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<struct FActiveGameplayEffectHandle> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FActiveGameplayEffectHandle> UGameplayEffectCustomExecutionParametersMixinLibrary::STATIC_GetIgnoreHandles(const struct FGameplayEffectCustomExecutionParameters& CustomExecutionParameters)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectCustomExecutionParametersMixinLibrary.GetIgnoreHandles"));

	UGameplayEffectCustomExecutionParametersMixinLibrary_GetIgnoreHandles_Params params;
	params.CustomExecutionParameters = CustomExecutionParameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayEffectCustomExecutionParametersMixinLibrary.AttemptCalculateTransientAggregatorMagnitude
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayEffectCustomExecutionParameters ExecutionParameters            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            InAggregatorIdentifier         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayEffectExecutionParameters InParams                       (ConstParm, Parm, OutParm, ReferenceParm)
// float                          OutMagnitude                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGameplayEffectCustomExecutionParametersMixinLibrary::STATIC_AttemptCalculateTransientAggregatorMagnitude(const struct FGameplayEffectCustomExecutionParameters& ExecutionParameters, const struct FGameplayTag& InAggregatorIdentifier, const struct FGameplayEffectExecutionParameters& InParams, float* OutMagnitude)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectCustomExecutionParametersMixinLibrary.AttemptCalculateTransientAggregatorMagnitude"));

	UGameplayEffectCustomExecutionParametersMixinLibrary_AttemptCalculateTransientAggregatorMagnitude_Params params;
	params.ExecutionParameters = ExecutionParameters;
	params.InAggregatorIdentifier = InAggregatorIdentifier;
	params.InParams = InParams;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutMagnitude != nullptr)
		*OutMagnitude = params.OutMagnitude;
}


// Function AngelscriptGAS.GameplayEffectCustomExecutionParametersMixinLibrary.AttemptCalculateCapturedAttributeMagnitudeWithBase
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayEffectCustomExecutionParameters CustomExecutionParameters      (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayEffectAttributeCaptureDefinition InCaptureDef                   (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayEffectExecutionParameters InParams                       (ConstParm, Parm, OutParm, ReferenceParm)
// float                          InBaseValue                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          OutMagnitude                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayEffectCustomExecutionParametersMixinLibrary::STATIC_AttemptCalculateCapturedAttributeMagnitudeWithBase(const struct FGameplayEffectCustomExecutionParameters& CustomExecutionParameters, const struct FGameplayEffectAttributeCaptureDefinition& InCaptureDef, const struct FGameplayEffectExecutionParameters& InParams, float InBaseValue, float* OutMagnitude)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectCustomExecutionParametersMixinLibrary.AttemptCalculateCapturedAttributeMagnitudeWithBase"));

	UGameplayEffectCustomExecutionParametersMixinLibrary_AttemptCalculateCapturedAttributeMagnitudeWithBase_Params params;
	params.CustomExecutionParameters = CustomExecutionParameters;
	params.InCaptureDef = InCaptureDef;
	params.InParams = InParams;
	params.InBaseValue = InBaseValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutMagnitude != nullptr)
		*OutMagnitude = params.OutMagnitude;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayEffectCustomExecutionParametersMixinLibrary.AttemptCalculateCapturedAttributeMagnitude
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayEffectCustomExecutionParameters CustomExecutionParameters      (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayEffectAttributeCaptureDefinition InCaptureDef                   (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayEffectExecutionParameters InParams                       (ConstParm, Parm, OutParm, ReferenceParm)
// float                          OutMagnitude                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayEffectCustomExecutionParametersMixinLibrary::STATIC_AttemptCalculateCapturedAttributeMagnitude(const struct FGameplayEffectCustomExecutionParameters& CustomExecutionParameters, const struct FGameplayEffectAttributeCaptureDefinition& InCaptureDef, const struct FGameplayEffectExecutionParameters& InParams, float* OutMagnitude)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectCustomExecutionParametersMixinLibrary.AttemptCalculateCapturedAttributeMagnitude"));

	UGameplayEffectCustomExecutionParametersMixinLibrary_AttemptCalculateCapturedAttributeMagnitude_Params params;
	params.CustomExecutionParameters = CustomExecutionParameters;
	params.InCaptureDef = InCaptureDef;
	params.InParams = InParams;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutMagnitude != nullptr)
		*OutMagnitude = params.OutMagnitude;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayEffectCustomExecutionParametersMixinLibrary.AttemptCalculateCapturedAttributeBonusMagnitude
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayEffectCustomExecutionParameters CustomExecutionParameters      (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayEffectAttributeCaptureDefinition InCaptureDef                   (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayEffectExecutionParameters InParams                       (ConstParm, Parm, OutParm, ReferenceParm)
// float                          OutBonusMagnitude              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayEffectCustomExecutionParametersMixinLibrary::STATIC_AttemptCalculateCapturedAttributeBonusMagnitude(const struct FGameplayEffectCustomExecutionParameters& CustomExecutionParameters, const struct FGameplayEffectAttributeCaptureDefinition& InCaptureDef, const struct FGameplayEffectExecutionParameters& InParams, float* OutBonusMagnitude)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectCustomExecutionParametersMixinLibrary.AttemptCalculateCapturedAttributeBonusMagnitude"));

	UGameplayEffectCustomExecutionParametersMixinLibrary_AttemptCalculateCapturedAttributeBonusMagnitude_Params params;
	params.CustomExecutionParameters = CustomExecutionParameters;
	params.InCaptureDef = InCaptureDef;
	params.InParams = InParams;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutBonusMagnitude != nullptr)
		*OutBonusMagnitude = params.OutBonusMagnitude;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayEffectCustomExecutionParametersMixinLibrary.AttemptCalculateCapturedAttributeBaseValue
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayEffectCustomExecutionParameters CustomExecutionParameters      (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayEffectAttributeCaptureDefinition InCaptureDef                   (ConstParm, Parm, OutParm, ReferenceParm)
// float                          OutBaseValue                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayEffectCustomExecutionParametersMixinLibrary::STATIC_AttemptCalculateCapturedAttributeBaseValue(const struct FGameplayEffectCustomExecutionParameters& CustomExecutionParameters, const struct FGameplayEffectAttributeCaptureDefinition& InCaptureDef, float* OutBaseValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectCustomExecutionParametersMixinLibrary.AttemptCalculateCapturedAttributeBaseValue"));

	UGameplayEffectCustomExecutionParametersMixinLibrary_AttemptCalculateCapturedAttributeBaseValue_Params params;
	params.CustomExecutionParameters = CustomExecutionParameters;
	params.InCaptureDef = InCaptureDef;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutBaseValue != nullptr)
		*OutBaseValue = params.OutBaseValue;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayEffectExecutionScopedModifierInfoMixinLibrary.GetTransientAggregatorIdentifier
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectExecutionScopedModifierInfo Handle                         (Parm, OutParm)
// struct FGameplayTag            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayTag UGameplayEffectExecutionScopedModifierInfoMixinLibrary::STATIC_GetTransientAggregatorIdentifier(struct FGameplayEffectExecutionScopedModifierInfo* Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectExecutionScopedModifierInfoMixinLibrary.GetTransientAggregatorIdentifier"));

	UGameplayEffectExecutionScopedModifierInfoMixinLibrary_GetTransientAggregatorIdentifier_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handle != nullptr)
		*Handle = params.Handle;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayEffectExecutionScopedModifierInfoMixinLibrary.GetCapturedAttribute
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectExecutionScopedModifierInfo Handle                         (Parm, OutParm)
// struct FGameplayEffectAttributeCaptureDefinition ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayEffectAttributeCaptureDefinition UGameplayEffectExecutionScopedModifierInfoMixinLibrary::STATIC_GetCapturedAttribute(struct FGameplayEffectExecutionScopedModifierInfo* Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectExecutionScopedModifierInfoMixinLibrary.GetCapturedAttribute"));

	UGameplayEffectExecutionScopedModifierInfoMixinLibrary_GetCapturedAttribute_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handle != nullptr)
		*Handle = params.Handle;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayEffectExecutionScopedModifierInfoMixinLibrary.GetAggregatorType
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectExecutionScopedModifierInfo Handle                         (Parm, OutParm)
// enum class EGameplayEffectScopedModifierAggregatorType ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

enum class EGameplayEffectScopedModifierAggregatorType UGameplayEffectExecutionScopedModifierInfoMixinLibrary::STATIC_GetAggregatorType(struct FGameplayEffectExecutionScopedModifierInfo* Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectExecutionScopedModifierInfoMixinLibrary.GetAggregatorType"));

	UGameplayEffectExecutionScopedModifierInfoMixinLibrary_GetAggregatorType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handle != nullptr)
		*Handle = params.Handle;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayEffectSpecHandleMixinLibrary.IsValid
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectSpecHandle Handle                         (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayEffectSpecHandleMixinLibrary::STATIC_IsValid(struct FGameplayEffectSpecHandle* Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectSpecHandleMixinLibrary.IsValid"));

	UGameplayEffectSpecHandleMixinLibrary_IsValid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handle != nullptr)
		*Handle = params.Handle;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayEffectSpecHandleMixinLibrary.GetSpec
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectSpecHandle Handle                         (Parm, OutParm)
// struct FGameplayEffectSpec     ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayEffectSpec UGameplayEffectSpecHandleMixinLibrary::STATIC_GetSpec(struct FGameplayEffectSpecHandle* Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectSpecHandleMixinLibrary.GetSpec"));

	UGameplayEffectSpecHandleMixinLibrary_GetSpec_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handle != nullptr)
		*Handle = params.Handle;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayEffectSpecHandleMixinLibrary.AddDynamicAssetTags
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectSpecHandle Handle                         (Parm, OutParm)
// struct FGameplayTagContainer   TagsToAdd                      (Parm)

void UGameplayEffectSpecHandleMixinLibrary::STATIC_AddDynamicAssetTags(const struct FGameplayTagContainer& TagsToAdd, struct FGameplayEffectSpecHandle* Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectSpecHandleMixinLibrary.AddDynamicAssetTags"));

	UGameplayEffectSpecHandleMixinLibrary_AddDynamicAssetTags_Params params;
	params.TagsToAdd = TagsToAdd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handle != nullptr)
		*Handle = params.Handle;
}


// Function AngelscriptGAS.GameplayEffectSpecHandleMixinLibrary.AddDynamicAssetTag
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectSpecHandle Handle                         (Parm, OutParm)
// struct FGameplayTag            TagToAdd                       (Parm)

void UGameplayEffectSpecHandleMixinLibrary::STATIC_AddDynamicAssetTag(const struct FGameplayTag& TagToAdd, struct FGameplayEffectSpecHandle* Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectSpecHandleMixinLibrary.AddDynamicAssetTag"));

	UGameplayEffectSpecHandleMixinLibrary_AddDynamicAssetTag_Params params;
	params.TagToAdd = TagToAdd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handle != nullptr)
		*Handle = params.Handle;
}


// Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.ToSimpleString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectSpec     Spec                           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UGameplayEffectSpecMixinLibrary::STATIC_ToSimpleString(const struct FGameplayEffectSpec& Spec)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.ToSimpleString"));

	UGameplayEffectSpecMixinLibrary_ToSimpleString_Params params;
	params.Spec = Spec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.SetupAttributeCaptureDefinitions
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpec     Spec                           (Parm, OutParm)

void UGameplayEffectSpecMixinLibrary::STATIC_SetupAttributeCaptureDefinitions(struct FGameplayEffectSpec* Spec)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.SetupAttributeCaptureDefinitions"));

	UGameplayEffectSpecMixinLibrary_SetupAttributeCaptureDefinitions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Spec != nullptr)
		*Spec = params.Spec;
}


// Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.SetLevel
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpec     Spec                           (Parm, OutParm)
// float                          InLevel                        (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayEffectSpecMixinLibrary::STATIC_SetLevel(float InLevel, struct FGameplayEffectSpec* Spec)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.SetLevel"));

	UGameplayEffectSpecMixinLibrary_SetLevel_Params params;
	params.InLevel = InLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Spec != nullptr)
		*Spec = params.Spec;
}


// Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.SetContext
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpec     Spec                           (Parm, OutParm)
// struct FGameplayEffectContextHandle NewEffectContextHandle         (Parm)

void UGameplayEffectSpecMixinLibrary::STATIC_SetContext(const struct FGameplayEffectContextHandle& NewEffectContextHandle, struct FGameplayEffectSpec* Spec)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.SetContext"));

	UGameplayEffectSpecMixinLibrary_SetContext_Params params;
	params.NewEffectContextHandle = NewEffectContextHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Spec != nullptr)
		*Spec = params.Spec;
}


// Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.SetByCallerMagnitude
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpec     Spec                           (Parm, OutParm)
// struct FGameplayTag            DataTag                        (Parm)
// float                          Magnitude                      (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayEffectSpecMixinLibrary::STATIC_SetByCallerMagnitude(const struct FGameplayTag& DataTag, float Magnitude, struct FGameplayEffectSpec* Spec)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.SetByCallerMagnitude"));

	UGameplayEffectSpecMixinLibrary_SetByCallerMagnitude_Params params;
	params.DataTag = DataTag;
	params.Magnitude = Magnitude;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Spec != nullptr)
		*Spec = params.Spec;
}


// Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.RecaptureSourceActorTags
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpec     Spec                           (Parm, OutParm)

void UGameplayEffectSpecMixinLibrary::STATIC_RecaptureSourceActorTags(struct FGameplayEffectSpec* Spec)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.RecaptureSourceActorTags"));

	UGameplayEffectSpecMixinLibrary_RecaptureSourceActorTags_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Spec != nullptr)
		*Spec = params.Spec;
}


// Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.RecaptureAttributeDataForClone
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpec     Spec                           (Parm, OutParm)
// class UAbilitySystemComponent* OriginalASC                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UAbilitySystemComponent* NewASC                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGameplayEffectSpecMixinLibrary::STATIC_RecaptureAttributeDataForClone(class UAbilitySystemComponent* OriginalASC, class UAbilitySystemComponent* NewASC, struct FGameplayEffectSpec* Spec)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.RecaptureAttributeDataForClone"));

	UGameplayEffectSpecMixinLibrary_RecaptureAttributeDataForClone_Params params;
	params.OriginalASC = OriginalASC;
	params.NewASC = NewASC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Spec != nullptr)
		*Spec = params.Spec;
}


// Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.PrintAll
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpec     Spec                           (ConstParm, Parm, OutParm, ReferenceParm)

void UGameplayEffectSpecMixinLibrary::STATIC_PrintAll(const struct FGameplayEffectSpec& Spec)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.PrintAll"));

	UGameplayEffectSpecMixinLibrary_PrintAll_Params params;
	params.Spec = Spec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.HasSetByCallerMagnitudeTag
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectSpec     Spec                           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            DataTag                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayEffectSpecMixinLibrary::STATIC_HasSetByCallerMagnitudeTag(const struct FGameplayEffectSpec& Spec, const struct FGameplayTag& DataTag)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.HasSetByCallerMagnitudeTag"));

	UGameplayEffectSpecMixinLibrary_HasSetByCallerMagnitudeTag_Params params;
	params.Spec = Spec;
	params.DataTag = DataTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.GetStackCount
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectSpec     Spec                           (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGameplayEffectSpecMixinLibrary::STATIC_GetStackCount(const struct FGameplayEffectSpec& Spec)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.GetStackCount"));

	UGameplayEffectSpecMixinLibrary_GetStackCount_Params params;
	params.Spec = Spec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.GetSetByCallerMagnitude
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectSpec     Spec                           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            DataTag                        (Parm)
// float                          DefaultIfNotFound              (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGameplayEffectSpecMixinLibrary::STATIC_GetSetByCallerMagnitude(const struct FGameplayEffectSpec& Spec, const struct FGameplayTag& DataTag, float DefaultIfNotFound)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.GetSetByCallerMagnitude"));

	UGameplayEffectSpecMixinLibrary_GetSetByCallerMagnitude_Params params;
	params.Spec = Spec;
	params.DataTag = DataTag;
	params.DefaultIfNotFound = DefaultIfNotFound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.GetPeriod
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectSpec     Spec                           (ConstParm, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGameplayEffectSpecMixinLibrary::STATIC_GetPeriod(const struct FGameplayEffectSpec& Spec)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.GetPeriod"));

	UGameplayEffectSpecMixinLibrary_GetPeriod_Params params;
	params.Spec = Spec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.GetModifierMagnitude
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectSpec     Spec                           (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ModifierIdx                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFactorInStackCount            (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGameplayEffectSpecMixinLibrary::STATIC_GetModifierMagnitude(const struct FGameplayEffectSpec& Spec, int ModifierIdx, bool bFactorInStackCount)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.GetModifierMagnitude"));

	UGameplayEffectSpecMixinLibrary_GetModifierMagnitude_Params params;
	params.Spec = Spec;
	params.ModifierIdx = ModifierIdx;
	params.bFactorInStackCount = bFactorInStackCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.GetModifiedAttributeMagnitude
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectSpec     Spec                           (Parm, OutParm)
// struct FGameplayAttribute      Attribute                      (ConstParm, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGameplayEffectSpecMixinLibrary::STATIC_GetModifiedAttributeMagnitude(const struct FGameplayAttribute& Attribute, struct FGameplayEffectSpec* Spec)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.GetModifiedAttributeMagnitude"));

	UGameplayEffectSpecMixinLibrary_GetModifiedAttributeMagnitude_Params params;
	params.Attribute = Attribute;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Spec != nullptr)
		*Spec = params.Spec;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.GetLevel
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectSpec     Spec                           (ConstParm, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGameplayEffectSpecMixinLibrary::STATIC_GetLevel(const struct FGameplayEffectSpec& Spec)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.GetLevel"));

	UGameplayEffectSpecMixinLibrary_GetLevel_Params params;
	params.Spec = Spec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.GetGrantedAbilitySpecs
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectSpec     Spec                           (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<struct FGameplayAbilitySpecDef> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FGameplayAbilitySpecDef> UGameplayEffectSpecMixinLibrary::STATIC_GetGrantedAbilitySpecs(const struct FGameplayEffectSpec& Spec)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.GetGrantedAbilitySpecs"));

	UGameplayEffectSpecMixinLibrary_GetGrantedAbilitySpecs_Params params;
	params.Spec = Spec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.GetDynamicGrantedTags
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectSpec     Spec                           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayTagContainer UGameplayEffectSpecMixinLibrary::STATIC_GetDynamicGrantedTags(const struct FGameplayEffectSpec& Spec)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.GetDynamicGrantedTags"));

	UGameplayEffectSpecMixinLibrary_GetDynamicGrantedTags_Params params;
	params.Spec = Spec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.GetDynamicAssetTags
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectSpec     Spec                           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayTagContainer UGameplayEffectSpecMixinLibrary::STATIC_GetDynamicAssetTags(const struct FGameplayEffectSpec& Spec)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.GetDynamicAssetTags"));

	UGameplayEffectSpecMixinLibrary_GetDynamicAssetTags_Params params;
	params.Spec = Spec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.GetDurationLocked
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectSpec     Spec                           (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGameplayEffectSpecMixinLibrary::STATIC_GetDurationLocked(const struct FGameplayEffectSpec& Spec)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.GetDurationLocked"));

	UGameplayEffectSpecMixinLibrary_GetDurationLocked_Params params;
	params.Spec = Spec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.GetDuration
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectSpec     Spec                           (ConstParm, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGameplayEffectSpecMixinLibrary::STATIC_GetDuration(const struct FGameplayEffectSpec& Spec)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.GetDuration"));

	UGameplayEffectSpecMixinLibrary_GetDuration_Params params;
	params.Spec = Spec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.GetDefinitionEffectCDO
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectSpec     Spec                           (ConstParm, Parm, OutParm, ReferenceParm)
// class UGameplayEffect*         ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGameplayEffect* UGameplayEffectSpecMixinLibrary::STATIC_GetDefinitionEffectCDO(const struct FGameplayEffectSpec& Spec)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.GetDefinitionEffectCDO"));

	UGameplayEffectSpecMixinLibrary_GetDefinitionEffectCDO_Params params;
	params.Spec = Spec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.GetContext
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectSpec     Spec                           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayEffectContextHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayEffectContextHandle UGameplayEffectSpecMixinLibrary::STATIC_GetContext(const struct FGameplayEffectSpec& Spec)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.GetContext"));

	UGameplayEffectSpecMixinLibrary_GetContext_Params params;
	params.Spec = Spec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.GetCompletedTargetAttributeCapture
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectSpec     Spec                           (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGameplayEffectSpecMixinLibrary::STATIC_GetCompletedTargetAttributeCapture(const struct FGameplayEffectSpec& Spec)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.GetCompletedTargetAttributeCapture"));

	UGameplayEffectSpecMixinLibrary_GetCompletedTargetAttributeCapture_Params params;
	params.Spec = Spec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.GetCompletedSourceAttributeCapture
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectSpec     Spec                           (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGameplayEffectSpecMixinLibrary::STATIC_GetCompletedSourceAttributeCapture(const struct FGameplayEffectSpec& Spec)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.GetCompletedSourceAttributeCapture"));

	UGameplayEffectSpecMixinLibrary_GetCompletedSourceAttributeCapture_Params params;
	params.Spec = Spec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.GetChanceToApplyToTarget
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectSpec     Spec                           (ConstParm, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGameplayEffectSpecMixinLibrary::STATIC_GetChanceToApplyToTarget(const struct FGameplayEffectSpec& Spec)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.GetChanceToApplyToTarget"));

	UGameplayEffectSpecMixinLibrary_GetChanceToApplyToTarget_Params params;
	params.Spec = Spec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.GetCapturedTargetTags
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectSpec     Spec                           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FAngelscriptTagContainerAggregator ReturnValue                    (Parm, OutParm, ReturnParm)

struct FAngelscriptTagContainerAggregator UGameplayEffectSpecMixinLibrary::STATIC_GetCapturedTargetTags(const struct FGameplayEffectSpec& Spec)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.GetCapturedTargetTags"));

	UGameplayEffectSpecMixinLibrary_GetCapturedTargetTags_Params params;
	params.Spec = Spec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.GetCapturedSourceTags
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectSpec     Spec                           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FAngelscriptTagContainerAggregator ReturnValue                    (Parm, OutParm, ReturnParm)

struct FAngelscriptTagContainerAggregator UGameplayEffectSpecMixinLibrary::STATIC_GetCapturedSourceTags(const struct FGameplayEffectSpec& Spec)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.GetCapturedSourceTags"));

	UGameplayEffectSpecMixinLibrary_GetCapturedSourceTags_Params params;
	params.Spec = Spec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.GetAllGrantedTags
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectSpec     Spec                           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayTagContainer UGameplayEffectSpecMixinLibrary::STATIC_GetAllGrantedTags(const struct FGameplayEffectSpec& Spec)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.GetAllGrantedTags"));

	UGameplayEffectSpecMixinLibrary_GetAllGrantedTags_Params params;
	params.Spec = Spec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.GetAllAssetTags
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectSpec     Spec                           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayTagContainer UGameplayEffectSpecMixinLibrary::STATIC_GetAllAssetTags(const struct FGameplayEffectSpec& Spec)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.GetAllAssetTags"));

	UGameplayEffectSpecMixinLibrary_GetAllAssetTags_Params params;
	params.Spec = Spec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.CaptureAttributeDataFromTarget
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpec     Spec                           (Parm, OutParm)
// class UAbilitySystemComponent* TargetAbilitySystemComponent   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGameplayEffectSpecMixinLibrary::STATIC_CaptureAttributeDataFromTarget(class UAbilitySystemComponent* TargetAbilitySystemComponent, struct FGameplayEffectSpec* Spec)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.CaptureAttributeDataFromTarget"));

	UGameplayEffectSpecMixinLibrary_CaptureAttributeDataFromTarget_Params params;
	params.TargetAbilitySystemComponent = TargetAbilitySystemComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Spec != nullptr)
		*Spec = params.Spec;
}


// Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.CalculateModifierMagnitudes
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpec     Spec                           (Parm, OutParm)

void UGameplayEffectSpecMixinLibrary::STATIC_CalculateModifierMagnitudes(struct FGameplayEffectSpec* Spec)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.CalculateModifierMagnitudes"));

	UGameplayEffectSpecMixinLibrary_CalculateModifierMagnitudes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Spec != nullptr)
		*Spec = params.Spec;
}


// Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.CalculateModifiedDuration
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectSpec     Spec                           (Parm, OutParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGameplayEffectSpecMixinLibrary::STATIC_CalculateModifiedDuration(struct FGameplayEffectSpec* Spec)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.CalculateModifiedDuration"));

	UGameplayEffectSpecMixinLibrary_CalculateModifiedDuration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Spec != nullptr)
		*Spec = params.Spec;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.ApplyExecutorModifiersForDefinition
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpec     Spec                           (ConstParm, Parm, OutParm, ReferenceParm)
// class UClass*                  CalculationClass               (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectAttributeCaptureDefinition InCaptureDef                   (ConstParm, Parm, OutParm, ReferenceParm)
// float                          ValueToModify                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGameplayEffectSpecMixinLibrary::STATIC_ApplyExecutorModifiersForDefinition(const struct FGameplayEffectSpec& Spec, class UClass* CalculationClass, const struct FGameplayEffectAttributeCaptureDefinition& InCaptureDef, float* ValueToModify)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.ApplyExecutorModifiersForDefinition"));

	UGameplayEffectSpecMixinLibrary_ApplyExecutorModifiersForDefinition_Params params;
	params.Spec = Spec;
	params.CalculationClass = CalculationClass;
	params.InCaptureDef = InCaptureDef;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ValueToModify != nullptr)
		*ValueToModify = params.ValueToModify;
}


// Function AngelscriptGAS.GameplayModifierEvaluatedDataMixinLibrary.ToSimpleString
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayModifierEvaluatedData Data                           (Parm, OutParm)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UGameplayModifierEvaluatedDataMixinLibrary::STATIC_ToSimpleString(struct FGameplayModifierEvaluatedData* Data)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayModifierEvaluatedDataMixinLibrary.ToSimpleString"));

	UGameplayModifierEvaluatedDataMixinLibrary_ToSimpleString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayModifierEvaluatedDataMixinLibrary.SetModifierOp
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayModifierEvaluatedData Data                           (Parm, OutParm)
// TEnumAsByte<EGameplayModOp>    NewValue                       (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayModifierEvaluatedDataMixinLibrary::STATIC_SetModifierOp(TEnumAsByte<EGameplayModOp> NewValue, struct FGameplayModifierEvaluatedData* Data)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayModifierEvaluatedDataMixinLibrary.SetModifierOp"));

	UGameplayModifierEvaluatedDataMixinLibrary_SetModifierOp_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;
}


// Function AngelscriptGAS.GameplayModifierEvaluatedDataMixinLibrary.SetMagnitude
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayModifierEvaluatedData Data                           (Parm, OutParm)
// float                          NewValue                       (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayModifierEvaluatedDataMixinLibrary::STATIC_SetMagnitude(float NewValue, struct FGameplayModifierEvaluatedData* Data)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayModifierEvaluatedDataMixinLibrary.SetMagnitude"));

	UGameplayModifierEvaluatedDataMixinLibrary_SetMagnitude_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;
}


// Function AngelscriptGAS.GameplayModifierEvaluatedDataMixinLibrary.SetIsValid
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayModifierEvaluatedData Data                           (Parm, OutParm)
// bool                           NewValue                       (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayModifierEvaluatedDataMixinLibrary::STATIC_SetIsValid(bool NewValue, struct FGameplayModifierEvaluatedData* Data)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayModifierEvaluatedDataMixinLibrary.SetIsValid"));

	UGameplayModifierEvaluatedDataMixinLibrary_SetIsValid_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;
}


// Function AngelscriptGAS.GameplayModifierEvaluatedDataMixinLibrary.SetHandle
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayModifierEvaluatedData Data                           (Parm, OutParm)
// struct FActiveGameplayEffectHandle NewValue                       (Parm)

void UGameplayModifierEvaluatedDataMixinLibrary::STATIC_SetHandle(const struct FActiveGameplayEffectHandle& NewValue, struct FGameplayModifierEvaluatedData* Data)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayModifierEvaluatedDataMixinLibrary.SetHandle"));

	UGameplayModifierEvaluatedDataMixinLibrary_SetHandle_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;
}


// Function AngelscriptGAS.GameplayModifierEvaluatedDataMixinLibrary.SetAttribute
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayModifierEvaluatedData Data                           (Parm, OutParm)
// struct FGameplayAttribute      NewValue                       (Parm, OutParm)

void UGameplayModifierEvaluatedDataMixinLibrary::STATIC_SetAttribute(struct FGameplayModifierEvaluatedData* Data, struct FGameplayAttribute* NewValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayModifierEvaluatedDataMixinLibrary.SetAttribute"));

	UGameplayModifierEvaluatedDataMixinLibrary_SetAttribute_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;
	if (NewValue != nullptr)
		*NewValue = params.NewValue;
}


// Function AngelscriptGAS.GameplayModifierEvaluatedDataMixinLibrary.GetModifierOp
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayModifierEvaluatedData Data                           (Parm, OutParm)
// TEnumAsByte<EGameplayModOp>    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EGameplayModOp> UGameplayModifierEvaluatedDataMixinLibrary::STATIC_GetModifierOp(struct FGameplayModifierEvaluatedData* Data)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayModifierEvaluatedDataMixinLibrary.GetModifierOp"));

	UGameplayModifierEvaluatedDataMixinLibrary_GetModifierOp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayModifierEvaluatedDataMixinLibrary.GetMagnitude
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayModifierEvaluatedData Data                           (Parm, OutParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGameplayModifierEvaluatedDataMixinLibrary::STATIC_GetMagnitude(struct FGameplayModifierEvaluatedData* Data)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayModifierEvaluatedDataMixinLibrary.GetMagnitude"));

	UGameplayModifierEvaluatedDataMixinLibrary_GetMagnitude_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayModifierEvaluatedDataMixinLibrary.GetIsValid
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayModifierEvaluatedData Data                           (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayModifierEvaluatedDataMixinLibrary::STATIC_GetIsValid(struct FGameplayModifierEvaluatedData* Data)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayModifierEvaluatedDataMixinLibrary.GetIsValid"));

	UGameplayModifierEvaluatedDataMixinLibrary_GetIsValid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayModifierEvaluatedDataMixinLibrary.GetHandle
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayModifierEvaluatedData Data                           (Parm, OutParm)
// struct FActiveGameplayEffectHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FActiveGameplayEffectHandle UGameplayModifierEvaluatedDataMixinLibrary::STATIC_GetHandle(struct FGameplayModifierEvaluatedData* Data)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayModifierEvaluatedDataMixinLibrary.GetHandle"));

	UGameplayModifierEvaluatedDataMixinLibrary_GetHandle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayModifierEvaluatedDataMixinLibrary.GetAttribute
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayModifierEvaluatedData Data                           (Parm, OutParm)
// struct FGameplayAttribute      ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayAttribute UGameplayModifierEvaluatedDataMixinLibrary::STATIC_GetAttribute(struct FGameplayModifierEvaluatedData* Data)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayModifierEvaluatedDataMixinLibrary.GetAttribute"));

	UGameplayModifierEvaluatedDataMixinLibrary_GetAttribute_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;

	return params.ReturnValue;
}


// Function AngelscriptGAS.GameplayTaskMixinLibrary.ReadyForActivation
// (Final, Native, Static, Private)
// Parameters:
// class UGameplayTask*           Task                           (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayTaskMixinLibrary::STATIC_ReadyForActivation(class UGameplayTask* Task)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.GameplayTaskMixinLibrary.ReadyForActivation"));

	UGameplayTaskMixinLibrary_ReadyForActivation_Params params;
	params.Task = Task;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptGAS.InheritedTagContainerMixinLibrary.RemoveTag
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FInheritedTagContainer  Container                      (Parm, OutParm)
// struct FGameplayTag            TagToRemove                    (ConstParm, Parm, OutParm, ReferenceParm)

void UInheritedTagContainerMixinLibrary::STATIC_RemoveTag(const struct FGameplayTag& TagToRemove, struct FInheritedTagContainer* Container)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.InheritedTagContainerMixinLibrary.RemoveTag"));

	UInheritedTagContainerMixinLibrary_RemoveTag_Params params;
	params.TagToRemove = TagToRemove;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Container != nullptr)
		*Container = params.Container;
}


// Function AngelscriptGAS.InheritedTagContainerMixinLibrary.AddTag
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FInheritedTagContainer  Container                      (Parm, OutParm)
// struct FGameplayTag            TagToAdd                       (ConstParm, Parm, OutParm, ReferenceParm)

void UInheritedTagContainerMixinLibrary::STATIC_AddTag(const struct FGameplayTag& TagToAdd, struct FInheritedTagContainer* Container)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptGAS.InheritedTagContainerMixinLibrary.AddTag"));

	UInheritedTagContainerMixinLibrary_AddTag_Params params;
	params.TagToAdd = TagToAdd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Container != nullptr)
		*Container = params.Container;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
