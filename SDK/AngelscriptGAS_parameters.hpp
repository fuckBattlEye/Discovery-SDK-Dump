#pragma once

//   SDK By:if

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../pch.h"

namespace sdk
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function AngelscriptGAS.AbilitySystemComponentMixinLibrary.RemoveLooseGameplayTags
struct UAbilitySystemComponentMixinLibrary_RemoveLooseGameplayTags_Params
{
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayTagContainer                       GameplayTags;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AngelscriptGAS.AbilitySystemComponentMixinLibrary.RemoveLooseGameplayTag
struct UAbilitySystemComponentMixinLibrary_RemoveLooseGameplayTag_Params
{
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayTag                                GameplayTag;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AngelscriptGAS.AbilitySystemComponentMixinLibrary.RemoveGameplayCue
struct UAbilitySystemComponentMixinLibrary_RemoveGameplayCue_Params
{
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayTag                                GameplayCueTag;                                           // (ConstParm, Parm)
};

// Function AngelscriptGAS.AbilitySystemComponentMixinLibrary.RemoveAllGameplayCues
struct UAbilitySystemComponentMixinLibrary_RemoveAllGameplayCues_Params
{
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AngelscriptGAS.AbilitySystemComponentMixinLibrary.InitDefaultGameplayCueParameters
struct UAbilitySystemComponentMixinLibrary_InitDefaultGameplayCueParameters_Params
{
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (Parm, OutParm)
};

// Function AngelscriptGAS.AbilitySystemComponentMixinLibrary.GetOwnedGameplayTags
struct UAbilitySystemComponentMixinLibrary_GetOwnedGameplayTags_Params
{
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                   // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayTagContainer                       TagContainer;                                             // (Parm, OutParm)
};

// Function AngelscriptGAS.AbilitySystemComponentMixinLibrary.GetActiveGameplayEffect
struct UAbilitySystemComponentMixinLibrary_GetActiveGameplayEffect_Params
{
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                   // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FActiveGameplayEffectHandle                 Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FActiveGameplayEffect                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AngelscriptGAS.AbilitySystemComponentMixinLibrary.ExecuteGameplayCueWithParameters
struct UAbilitySystemComponentMixinLibrary_ExecuteGameplayCueWithParameters_Params
{
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayTag                                GameplayCueTag;                                           // (ConstParm, Parm)
	struct FGameplayCueParameters                      GameplayCueParameters;                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AngelscriptGAS.AbilitySystemComponentMixinLibrary.ExecuteGameplayCueWithEffectContext
struct UAbilitySystemComponentMixinLibrary_ExecuteGameplayCueWithEffectContext_Params
{
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayTag                                GameplayCueTag;                                           // (Parm)
	struct FGameplayEffectContextHandle                EffectContext;                                            // (Parm)
};

// Function AngelscriptGAS.AbilitySystemComponentMixinLibrary.AreAbilityTagsBlocked
struct UAbilitySystemComponentMixinLibrary_AreAbilityTagsBlocked_Params
{
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                   // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayTagContainer                       Tags;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.AbilitySystemComponentMixinLibrary.AddLooseGameplayTags
struct UAbilitySystemComponentMixinLibrary_AddLooseGameplayTags_Params
{
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayTagContainer                       GameplayTags;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AngelscriptGAS.AbilitySystemComponentMixinLibrary.AddLooseGameplayTag
struct UAbilitySystemComponentMixinLibrary_AddLooseGameplayTag_Params
{
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayTag                                GameplayTag;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AngelscriptGAS.AbilitySystemComponentMixinLibrary.AddGameplayCueWithParameters
struct UAbilitySystemComponentMixinLibrary_AddGameplayCueWithParameters_Params
{
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayTag                                GameplayCueTag;                                           // (ConstParm, Parm)
	struct FGameplayCueParameters                      GameplayCueParameters;                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AngelscriptGAS.AbilitySystemComponentMixinLibrary.AddGameplayCueWithEffectContext
struct UAbilitySystemComponentMixinLibrary_AddGameplayCueWithEffectContext_Params
{
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayTag                                GameplayCueTag;                                           // (ConstParm, Parm)
	struct FGameplayEffectContextHandle                EffectContext;                                            // (Parm)
};

// Function AngelscriptGAS.ActiveGameplayEffecteMixinLibrary.GetSpec
struct UActiveGameplayEffecteMixinLibrary_GetSpec_Params
{
	struct FActiveGameplayEffect                       ActiveGameplayEffect;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayEffectSpec                         ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function AngelscriptGAS.AngelscriptAttributeChangedDataMixinLibrary.GetTargetAbilitySystemComponent
struct UAngelscriptAttributeChangedDataMixinLibrary_GetTargetAbilitySystemComponent_Params
{
	struct FAngelscriptAttributeChangedData            Data;                                                     // (Parm, OutParm)
	class UAbilitySystemComponent*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAttributeChangedDataMixinLibrary.GetOldValue
struct UAngelscriptAttributeChangedDataMixinLibrary_GetOldValue_Params
{
	struct FAngelscriptAttributeChangedData            Data;                                                     // (Parm, OutParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAttributeChangedDataMixinLibrary.GetNewValue
struct UAngelscriptAttributeChangedDataMixinLibrary_GetNewValue_Params
{
	struct FAngelscriptAttributeChangedData            Data;                                                     // (Parm, OutParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAttributeChangedDataMixinLibrary.GetGameplayModifierEvaluatedData
struct UAngelscriptAttributeChangedDataMixinLibrary_GetGameplayModifierEvaluatedData_Params
{
	struct FAngelscriptAttributeChangedData            Data;                                                     // (Parm, OutParm)
	bool                                               bIsValid;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FGameplayModifierEvaluatedData              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function AngelscriptGAS.AngelscriptAttributeChangedDataMixinLibrary.GetGameplayAttribute
struct UAngelscriptAttributeChangedDataMixinLibrary_GetGameplayAttribute_Params
{
	struct FAngelscriptAttributeChangedData            Data;                                                     // (Parm, OutParm)
	struct FGameplayAttribute                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AngelscriptGAS.AngelscriptAttributeChangedDataMixinLibrary.GetEffectSpec
struct UAngelscriptAttributeChangedDataMixinLibrary_GetEffectSpec_Params
{
	struct FAngelscriptAttributeChangedData            Data;                                                     // (Parm, OutParm)
	bool                                               bIsValid;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectSpec                         ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.TrySetAttributeBaseValue
struct UAngelscriptAbilitySystemComponent_TrySetAttributeBaseValue_Params
{
	class UClass*                                      AttributeSetClass;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       AttributeName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewBaseValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.TryGetFilteredAttributeValue
struct UAngelscriptAbilitySystemComponent_TryGetFilteredAttributeValue_Params
{
	class UClass*                                      AttributeSetClass;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       AttributeName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagRequirements                    SourceTags;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       TargetTags;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              OutValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.TryGetAttributeCurrentValue
struct UAngelscriptAbilitySystemComponent_TryGetAttributeCurrentValue_Params
{
	class UClass*                                      AttributeSetClass;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       AttributeName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutCurrentValue;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.TryGetAttributeBaseValue
struct UAngelscriptAbilitySystemComponent_TryGetAttributeBaseValue_Params
{
	class UClass*                                      AttributeSetClass;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       AttributeName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutBaseValue;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.TryActivateAbilitySpec
struct UAngelscriptAbilitySystemComponent_TryActivateAbilitySpec_Params
{
	struct FGameplayAbilitySpecHandle                  Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bAllowRemoteActivation;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.SetAttributeBaseValue
struct UAngelscriptAbilitySystemComponent_SetAttributeBaseValue_Params
{
	class UClass*                                      AttributeSetClass;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       AttributeName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewBaseValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.SetAbilitySpecSourceObject
struct UAngelscriptAbilitySystemComponent_SetAbilitySpecSourceObject_Params
{
	struct FGameplayAbilitySpecHandle                  AbilitySpecHandle;                                        // (Parm)
	class UObject*                                     NewSourceObject;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.RegisterCallbackForAttribute
struct UAngelscriptAbilitySystemComponent_RegisterCallbackForAttribute_Params
{
	class UClass*                                      AttributeSetClass;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       AttributeName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.RegisterAttributeSet
struct UAngelscriptAbilitySystemComponent_RegisterAttributeSet_Params
{
	class UClass*                                      AttributeSetClass;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class UAngelscriptAttributeSet*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.RegisterAttributeChangedCallback
struct UAngelscriptAbilitySystemComponent_RegisterAttributeChangedCallback_Params
{
	class UClass*                                      AttributeSetClass;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       AttributeName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     CallbackObject;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CallbackFunctionName_FAngelscriptAttributeChangedData;    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.OnAttributeSetRegistered
struct UAngelscriptAbilitySystemComponent_OnAttributeSetRegistered_Params
{
	class UObject*                                     InObject;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       InFunctionName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.ModAttributeUnsafe
struct UAngelscriptAbilitySystemComponent_ModAttributeUnsafe_Params
{
	struct FGameplayAttribute                          GameplayAttribute;                                        // (Parm)
	TEnumAsByte<EGameplayModOp>                        ModifierOp;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ModifierMagnitude;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.IsAbilitySpecActive
struct UAngelscriptAbilitySystemComponent_IsAbilitySpecActive_Params
{
	struct FGameplayAbilitySpecHandle                  AbilitySpecHandle;                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.IsAbilityActive
struct UAngelscriptAbilitySystemComponent_IsAbilityActive_Params
{
	class UClass*                                      InAbilityClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.HasGameplayTag
struct UAngelscriptAbilitySystemComponent_HasGameplayTag_Params
{
	struct FGameplayTag                                TagToCheck;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.HasAnyGameplayTags
struct UAngelscriptAbilitySystemComponent_HasAnyGameplayTags_Params
{
	struct FGameplayTagContainer                       TagContainer;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.HasAllGameplayTags
struct UAngelscriptAbilitySystemComponent_HasAllGameplayTags_Params
{
	struct FGameplayTagContainer                       TagContainer;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.HasAbilitySpec
struct UAngelscriptAbilitySystemComponent_HasAbilitySpec_Params
{
	struct FGameplayAbilitySpecHandle                  AbilitySpecHandle;                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.HasAbility
struct UAngelscriptAbilitySystemComponent_HasAbility_Params
{
	class UClass*                                      InAbilityClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.GetPlayerController
struct UAngelscriptAbilitySystemComponent_GetPlayerController_Params
{
	class APlayerController*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.GetCooldownTimeRemaining
struct UAngelscriptAbilitySystemComponent_GetCooldownTimeRemaining_Params
{
	class UClass*                                      InAbilityClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.GetAvatar
struct UAngelscriptAbilitySystemComponent_GetAvatar_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.GetAttributeCurrentValueChecked
struct UAngelscriptAbilitySystemComponent_GetAttributeCurrentValueChecked_Params
{
	class UClass*                                      AttributeSetClass;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       AttributeName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.GetAttributeCurrentValue
struct UAngelscriptAbilitySystemComponent_GetAttributeCurrentValue_Params
{
	class UClass*                                      AttributeSetClass;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       AttributeName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DefaultValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.GetAttributeBaseValueChecked
struct UAngelscriptAbilitySystemComponent_GetAttributeBaseValueChecked_Params
{
	class UClass*                                      AttributeSetClass;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       AttributeName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.GetAttributeBaseValue
struct UAngelscriptAbilitySystemComponent_GetAttributeBaseValue_Params
{
	class UClass*                                      AttributeSetClass;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       AttributeName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DefaultValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.GetAndRegisterCallbackForAttribute
struct UAngelscriptAbilitySystemComponent_GetAndRegisterCallbackForAttribute_Params
{
	class UClass*                                      AttributeSetClass;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       AttributeName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutCurrentValue;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.GetAndRegisterAttributeChangedCallback
struct UAngelscriptAbilitySystemComponent_GetAndRegisterAttributeChangedCallback_Params
{
	class UClass*                                      AttributeSetClass;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       AttributeName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     CallbackObject;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CallbackFunctionName_FAngelscriptAttributeChangedData;    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutCurrentValue;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.GetActiveAbilitiesWithTags
struct UAngelscriptAbilitySystemComponent_GetActiveAbilitiesWithTags_Params
{
	struct FGameplayTagContainer                       GameplayTagContainer;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<class UGameplayAbility*>                    ActiveAbilities;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.GetAbilitySpecSourceObject
struct UAngelscriptAbilitySystemComponent_GetAbilitySpecSourceObject_Params
{
	struct FGameplayAbilitySpecHandle                  AbilitySpecHandle;                                        // (Parm)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.GetAbilitiesWithTags
struct UAngelscriptAbilitySystemComponent_GetAbilitiesWithTags_Params
{
	struct FGameplayTagContainer                       GameplayTagContainer;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<class UGameplayAbility*>                    Abilities;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.CancelAbilityByHandle
struct UAngelscriptAbilitySystemComponent_CancelAbilityByHandle_Params
{
	struct FGameplayAbilitySpecHandle                  AbilityHandle;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.CancelAbility
struct UAngelscriptAbilitySystemComponent_CancelAbility_Params
{
	class UClass*                                      InAbilityClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.CancelAbilitiesByTags
struct UAngelscriptAbilitySystemComponent_CancelAbilitiesByTags_Params
{
	struct FGameplayTagContainer                       WithTags;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       WithoutTags;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class UGameplayAbility*                            Ignore;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.CanActivateAnyAbilityWithTags
struct UAngelscriptAbilitySystemComponent_CanActivateAnyAbilityWithTags_Params
{
	struct FGameplayTagContainer                       GameplayTagContainer;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.CanActivateAnyAbilityWithTag
struct UAngelscriptAbilitySystemComponent_CanActivateAnyAbilityWithTag_Params
{
	struct FGameplayTag                                GameplayTag;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.CanActivateAbilitySpec
struct UAngelscriptAbilitySystemComponent_CanActivateAbilitySpec_Params
{
	struct FGameplayAbilitySpecHandle                  AbilitySpecHandle;                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.CanActivateAbilityByClass
struct UAngelscriptAbilitySystemComponent_CanActivateAbilityByClass_Params
{
	class UClass*                                      InAbilityToActivate;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.BP_SetRemoveAbilityOnEnd
struct UAngelscriptAbilitySystemComponent_BP_SetRemoveAbilityOnEnd_Params
{
	struct FGameplayAbilitySpecHandle                  AbilitySpecHandle;                                        // (Parm)
};

// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.BP_InitAbilityActorInfo
struct UAngelscriptAbilitySystemComponent_BP_InitAbilityActorInfo_Params
{
	class AActor*                                      InOwnerActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      InAvatarActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.BP_GiveAbilityWithSourceObject
struct UAngelscriptAbilitySystemComponent_BP_GiveAbilityWithSourceObject_Params
{
	class UClass*                                      InAbilityClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OptionalInputID;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     OptionalSourceObject;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayAbilitySpecHandle                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.BP_GiveAbilityAndActivateOnceWithSourceObject
struct UAngelscriptAbilitySystemComponent_BP_GiveAbilityAndActivateOnceWithSourceObject_Params
{
	class UClass*                                      InAbilityClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OptionalInputID;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     OptionalSourceObject;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayAbilitySpecHandle                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.BlueprintUnRegisterGameplayTagEvent
struct UAngelscriptAbilitySystemComponent_BlueprintUnRegisterGameplayTagEvent_Params
{
	struct FDelegateHandleWrapper                      Handle;                                                   // (Parm)
	struct FGameplayTag                                Tag;                                                      // (Parm)
	TEnumAsByte<EGameplayTagEventType>                 EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.BlueprintRegisterGameplayTagEvent
struct UAngelscriptAbilitySystemComponent_BlueprintRegisterGameplayTagEvent_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, ZeroConstructor)
	struct FGameplayTag                                Tag;                                                      // (Parm)
	TEnumAsByte<EGameplayTagEventType>                 EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDelegateHandleWrapper                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.BlueprintRegisterAndCallGameplayTagEvent
struct UAngelscriptAbilitySystemComponent_BlueprintRegisterAndCallGameplayTagEvent_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, ZeroConstructor)
	struct FGameplayTag                                Tag;                                                      // (Parm)
	TEnumAsByte<EGameplayTagEventType>                 EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDelegateHandleWrapper                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.BindInput
struct UAngelscriptAbilitySystemComponent_BindInput_Params
{
	class UInputComponent*                             InputComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FAngelscriptInputBindData                   BindData;                                                 // (Parm)
};

// Function AngelscriptGAS.AngelscriptAbilitySystemComponent.ActivateAbilitiesUsingTags
struct UAngelscriptAbilitySystemComponent_ActivateAbilitiesUsingTags_Params
{
	struct FGameplayTagContainer                       GameplayTagContainer;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bAllowRemoteActivation;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAbilityTask.SetIsTickingTask
struct UAngelscriptAbilityTask_SetIsTickingTask_Params
{
	bool                                               bNewState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAbilityTask.SetIsSimulatedTask
struct UAngelscriptAbilityTask_SetIsSimulatedTask_Params
{
	bool                                               bNewState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAbilityTask.SetIsPausable
struct UAngelscriptAbilityTask_SetIsPausable_Params
{
	bool                                               bNewState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAbilityTask.GetIsTickingTask
struct UAngelscriptAbilityTask_GetIsTickingTask_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAbilityTask.GetIsSimulating
struct UAngelscriptAbilityTask_GetIsSimulating_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAbilityTask.GetIsSimulatedTask
struct UAngelscriptAbilityTask_GetIsSimulatedTask_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAbilityTask.GetIsPausable
struct UAngelscriptAbilityTask_GetIsPausable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAbilityTask.CreateAbilityTaskAndRunIt
struct UAngelscriptAbilityTask_CreateAbilityTaskAndRunIt_Params
{
	class UClass*                                      TaskType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UGameplayAbility*                            ThisAbility;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       NewInstanceName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UAngelscriptAbilityTask*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAbilityTask.CreateAbilityTask
struct UAngelscriptAbilityTask_CreateAbilityTask_Params
{
	class UClass*                                      TaskType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UGameplayAbility*                            ThisAbility;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       NewInstanceName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UAngelscriptAbilityTask*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAbilityTask.BP_TickTask
struct UAngelscriptAbilityTask_BP_TickTask_Params
{
	float                                              DeltaTimeSecs;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAbilityTask.BP_ShouldBroadcastAbilityTaskDelegates
struct UAngelscriptAbilityTask_BP_ShouldBroadcastAbilityTaskDelegates_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAbilityTask.BP_SetWaitingOnRemotePlayerData
struct UAngelscriptAbilityTask_BP_SetWaitingOnRemotePlayerData_Params
{
};

// Function AngelscriptGAS.AngelscriptAbilityTask.BP_SetWaitingOnAvatar
struct UAngelscriptAbilityTask_BP_SetWaitingOnAvatar_Params
{
};

// Function AngelscriptGAS.AngelscriptAbilityTask.BP_SetAbilitySystemComponent
struct UAngelscriptAbilityTask_BP_SetAbilitySystemComponent_Params
{
	class UAbilitySystemComponent*                     InAbilitySystemComponent;                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAbilityTask.BP_OnDestroy
struct UAngelscriptAbilityTask_BP_OnDestroy_Params
{
	bool                                               bInOwnerFinished;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAbilityTask.BP_IsWaitingOnRemotePlayerdata
struct UAngelscriptAbilityTask_BP_IsWaitingOnRemotePlayerdata_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAbilityTask.BP_IsWaitingOnAvatar
struct UAngelscriptAbilityTask_BP_IsWaitingOnAvatar_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAbilityTask.BP_IsPredictingClient
struct UAngelscriptAbilityTask_BP_IsPredictingClient_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAbilityTask.BP_IsLocallyControlled
struct UAngelscriptAbilityTask_BP_IsLocallyControlled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAbilityTask.BP_IsForRemoteClient
struct UAngelscriptAbilityTask_BP_IsForRemoteClient_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAbilityTask.BP_InitSimulatedTask
struct UAngelscriptAbilityTask_BP_InitSimulatedTask_Params
{
	class UGameplayTasksComponent*                     InGameplayTasksComponent;                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAbilityTask.BP_GetAbilitySystemComponent
struct UAngelscriptAbilityTask_BP_GetAbilitySystemComponent_Params
{
	class UAbilitySystemComponent*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAbilityTask.BP_GetAbilitySpecHandle
struct UAngelscriptAbilityTask_BP_GetAbilitySpecHandle_Params
{
	bool                                               bInOwnerFinished;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayAbilitySpecHandle                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AngelscriptGAS.AngelscriptAbilityTask.BP_GetAbility
struct UAngelscriptAbilityTask_BP_GetAbility_Params
{
	bool                                               bInOwnerFinished;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UGameplayAbility*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAbilityTask.BP_ClearWaitingOnRemotePlayerData
struct UAngelscriptAbilityTask_BP_ClearWaitingOnRemotePlayerData_Params
{
};

// Function AngelscriptGAS.AngelscriptAbilityTask.BP_ClearWaitingOnAvatar
struct UAngelscriptAbilityTask_BP_ClearWaitingOnAvatar_Params
{
};

// Function AngelscriptGAS.AngelscriptAbilityTask.BP_Activate
struct UAngelscriptAbilityTask_BP_Activate_Params
{
};

// Function AngelscriptGAS.AngelscriptAbilityTaskLibrary.WaitNetSync
struct UAngelscriptAbilityTaskLibrary_WaitNetSync_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	enum class EAbilityTaskNetSyncType                 SyncType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAbilityTask_NetworkSyncPoint*               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAbilityTaskLibrary.WaitMovementModeChange
struct UAngelscriptAbilityTaskLibrary_WaitMovementModeChange_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         NewMode;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UAbilityTask_WaitMovementModeChange*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAbilityTaskLibrary.WaitGameplayTagRemove
struct UAngelscriptAbilityTaskLibrary_WaitGameplayTagRemove_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                Tag;                                                      // (Parm)
	class AActor*                                      InOptionalExternalTarget;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OnlyTriggerOnce;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UAbilityTask_WaitGameplayTagRemoved*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAbilityTaskLibrary.WaitGameplayTagAdd
struct UAngelscriptAbilityTaskLibrary_WaitGameplayTagAdd_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                Tag;                                                      // (Parm)
	class AActor*                                      InOptionalExternalTarget;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OnlyTriggerOnce;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UAbilityTask_WaitGameplayTagAdded*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAbilityTaskLibrary.WaitGameplayEvent
struct UAngelscriptAbilityTaskLibrary_WaitGameplayEvent_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                EventTag;                                                 // (Parm)
	class AActor*                                      OptionalExternalTarget;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OnlyTriggerOnce;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OnlyMatchExact;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UAbilityTask_WaitGameplayEvent*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAbilityTaskLibrary.WaitDelay
struct UAngelscriptAbilityTaskLibrary_WaitDelay_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UAbilityTask_WaitDelay*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAbilityTaskLibrary.PlayMontageAndWait
struct UAngelscriptAbilityTaskLibrary_PlayMontageAndWait_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TaskInstanceName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                MontageToPlay;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       StartSection;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bStopWhenAbilityEnds;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AnimRootMotionTranslationScale;                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InTimeToStartAnimMontageAt;                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UAbilityTask_PlayMontageAndWait*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAttributeSet.TrySetAttributeBaseValue
struct UAngelscriptAttributeSet_TrySetAttributeBaseValue_Params
{
	struct FName                                       AttributeName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewBaseValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAttributeSet.TryGetGameplayAttribute
struct UAngelscriptAttributeSet_TryGetGameplayAttribute_Params
{
	class UClass*                                      AttributeSetClass;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       AttributeName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayAttribute                          OutGameplayAttribute;                                     // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAttributeSet.TryGetAttributeCurrentValue
struct UAngelscriptAttributeSet_TryGetAttributeCurrentValue_Params
{
	struct FName                                       AttributeName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutCurrentValue;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAttributeSet.TryGetAttributeBaseValue
struct UAngelscriptAttributeSet_TryGetAttributeBaseValue_Params
{
	struct FName                                       AttributeName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutBaseValue;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAttributeSet.OnRep_Attribute
struct UAngelscriptAttributeSet_OnRep_Attribute_Params
{
	struct FAngelscriptGameplayAttributeData           OldAttributeData;                                         // (Parm, OutParm)
};

// Function AngelscriptGAS.AngelscriptAttributeSet.GetGameplayAttribute
struct UAngelscriptAttributeSet_GetGameplayAttribute_Params
{
	class UClass*                                      AttributeSetClass;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       AttributeName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayAttribute                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AngelscriptGAS.AngelscriptAttributeSet.CompareGameplayAttributes
struct UAngelscriptAttributeSet_CompareGameplayAttributes_Params
{
	struct FGameplayAttribute                          First;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayAttribute                          Second;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAttributeSet.BP_PreGameplayEffectExecute
struct UAngelscriptAttributeSet_BP_PreGameplayEffectExecute_Params
{
	struct FGameplayEffectSpec                         EffectSpec;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayModifierEvaluatedData              EvaluatedData;                                            // (Parm, OutParm)
	class UAngelscriptAbilitySystemComponent*          AbilitySystemComponent;                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAttributeSet.BP_PreAttributeChange
struct UAngelscriptAttributeSet_BP_PreAttributeChange_Params
{
	struct FGameplayAttribute                          Attribute;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              NewValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAttributeSet.BP_PreAttributeBaseChange
struct UAngelscriptAttributeSet_BP_PreAttributeBaseChange_Params
{
	struct FGameplayAttribute                          Attribute;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              NewValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAttributeSet.BP_PostGameplayEffectExecute
struct UAngelscriptAttributeSet_BP_PostGameplayEffectExecute_Params
{
	struct FGameplayEffectSpec                         EffectSpec;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayModifierEvaluatedData              EvaluatedData;                                            // (Parm, OutParm)
	class UAngelscriptAbilitySystemComponent*          AbilitySystemComponent;                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAttributeSet.BP_InitFromMetaDataTable
struct UAngelscriptAttributeSet_BP_InitFromMetaDataTable_Params
{
	class UDataTable*                                  DataTable;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAttributeSet.BP_GetOwningActor
struct UAngelscriptAttributeSet_BP_GetOwningActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAttributeSet.BP_GetOwningAbilitySystemComponent
struct UAngelscriptAttributeSet_BP_GetOwningAbilitySystemComponent_Params
{
	class UAngelscriptAbilitySystemComponent*          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptAttributeSet.BP_GetActorInfo
struct UAngelscriptAttributeSet_BP_GetActorInfo_Params
{
	struct FGameplayAbilityActorInfo                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AngelscriptGAS.AngelscriptGameplayAttributeDataMixinLibrary.SetCurrentValue
struct UAngelscriptGameplayAttributeDataMixinLibrary_SetCurrentValue_Params
{
	struct FAngelscriptGameplayAttributeData           Data;                                                     // (Parm, OutParm)
	float                                              NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptGameplayAttributeDataMixinLibrary.SetBaseValue
struct UAngelscriptGameplayAttributeDataMixinLibrary_SetBaseValue_Params
{
	struct FAngelscriptGameplayAttributeData           Data;                                                     // (Parm, OutParm)
	float                                              NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptGameplayAttributeDataMixinLibrary.Initialize
struct UAngelscriptGameplayAttributeDataMixinLibrary_Initialize_Params
{
	struct FAngelscriptGameplayAttributeData           Data;                                                     // (Parm, OutParm)
	float                                              InitialData;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptGameplayAttributeDataMixinLibrary.GetCurrentValue
struct UAngelscriptGameplayAttributeDataMixinLibrary_GetCurrentValue_Params
{
	struct FAngelscriptGameplayAttributeData           Data;                                                     // (Parm, OutParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptGameplayAttributeDataMixinLibrary.GetBaseValue
struct UAngelscriptGameplayAttributeDataMixinLibrary_GetBaseValue_Params
{
	struct FAngelscriptGameplayAttributeData           Data;                                                     // (Parm, OutParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptGameplayCueUtils.RemoveLocalGameplayCue
struct UAngelscriptGameplayCueUtils_RemoveLocalGameplayCue_Params
{
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                GameplayCueTag;                                           // (Parm)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AngelscriptGAS.AngelscriptGameplayCueUtils.FindInstancedCueActor
struct UAngelscriptGameplayCueUtils_FindInstancedCueActor_Params
{
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                Tag;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	class AActor*                                      InstigatorActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     SourceObj;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AGameplayCueNotify_Actor*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptGameplayCueUtils.ExecuteLocalGameplayCue
struct UAngelscriptGameplayCueUtils_ExecuteLocalGameplayCue_Params
{
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                GameplayCueTag;                                           // (Parm)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AngelscriptGAS.AngelscriptGameplayCueUtils.AddLocalGameplayCue
struct UAngelscriptGameplayCueUtils_AddLocalGameplayCue_Params
{
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                GameplayCueTag;                                           // (Parm)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AngelscriptGAS.GameplayEffectExecutionParametersMixinLibrary.SetTargetTags
struct UGameplayEffectExecutionParametersMixinLibrary_SetTargetTags_Params
{
	struct FGameplayEffectExecutionParameters          Data;                                                     // (Parm, OutParm)
	struct FGameplayTagContainer                       TargetTags;                                               // (Parm, OutParm)
};

// Function AngelscriptGAS.GameplayEffectExecutionParametersMixinLibrary.SetSourceTags
struct UGameplayEffectExecutionParametersMixinLibrary_SetSourceTags_Params
{
	struct FGameplayEffectExecutionParameters          Data;                                                     // (Parm, OutParm)
	struct FGameplayTagContainer                       SourceTags;                                               // (Parm, OutParm)
};

// Function AngelscriptGAS.GameplayEffectExecutionParametersMixinLibrary.SetIncludePredictiveMods
struct UGameplayEffectExecutionParametersMixinLibrary_SetIncludePredictiveMods_Params
{
	struct FGameplayEffectExecutionParameters          Data;                                                     // (Parm, OutParm)
	bool                                               bShouldIncludePredictiveMods;                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayEffectExecutionParametersMixinLibrary.SetCapturedSourceTagsFromSpec
struct UGameplayEffectExecutionParametersMixinLibrary_SetCapturedSourceTagsFromSpec_Params
{
	struct FGameplayEffectExecutionParameters          Data;                                                     // (Parm, OutParm)
	struct FGameplayEffectSpec                         Spec;                                                     // (Parm, OutParm)
};

// Function AngelscriptGAS.GameplayEffectExecutionParametersMixinLibrary.GetIncludePredictiveMods
struct UGameplayEffectExecutionParametersMixinLibrary_GetIncludePredictiveMods_Params
{
	struct FGameplayEffectExecutionParameters          Data;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayEffectExecutionParametersMixinLibrary.GetIgnoreHandles
struct UGameplayEffectExecutionParametersMixinLibrary_GetIgnoreHandles_Params
{
	struct FGameplayEffectExecutionParameters          Data;                                                     // (Parm, OutParm)
	TArray<struct FActiveGameplayEffectHandle>         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AngelscriptGAS.GameplayEffectExecutionParametersMixinLibrary.GetAppliedTargetTagFilter
struct UGameplayEffectExecutionParametersMixinLibrary_GetAppliedTargetTagFilter_Params
{
	struct FGameplayEffectExecutionParameters          Data;                                                     // (Parm, OutParm)
	struct FGameplayTagContainer                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AngelscriptGAS.GameplayEffectExecutionParametersMixinLibrary.GetAppliedSourceTagFilter
struct UGameplayEffectExecutionParametersMixinLibrary_GetAppliedSourceTagFilter_Params
{
	struct FGameplayEffectExecutionParameters          Data;                                                     // (Parm, OutParm)
	struct FGameplayTagContainer                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AngelscriptGAS.AngelscriptGameplayEffectUtils.MakeGameplayModifierEvaluationData
struct UAngelscriptGameplayEffectUtils_MakeGameplayModifierEvaluationData_Params
{
	struct FGameplayAttribute                          InAttribute;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<EGameplayModOp>                        InModOp;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InMagnitude;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayModifierEvaluatedData              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AngelscriptGAS.AngelscriptGameplayEffectUtils.MakeGameplayEffectExecutionScopedModifierInfo
struct UAngelscriptGameplayEffectUtils_MakeGameplayEffectExecutionScopedModifierInfo_Params
{
	struct FGameplayEffectAttributeCaptureDefinition   InCaptureDef;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayEffectExecutionScopedModifierInfo  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AngelscriptGAS.AngelscriptGameplayEffectUtils.CaptureGameplayAttribute
struct UAngelscriptGameplayEffectUtils_CaptureGameplayAttribute_Params
{
	class UStruct*                                     AttributeSetType;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       AttributeName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	enum class EGameplayEffectAttributeCaptureSource   InSource;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSnapshot;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectAttributeCaptureDefinition   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AngelscriptGAS.AngelscriptGASAbility.K2_RemoveGameplayCue_Static
struct UAngelscriptGASAbility_K2_RemoveGameplayCue_Static_Params
{
	class UClass*                                      GameplayCue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptGASAbility.K2_RemoveGameplayCue_Actor
struct UAngelscriptGASAbility_K2_RemoveGameplayCue_Actor_Params
{
	class UClass*                                      GameplayCue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptGASAbility.K2_ExecuteGameplayCueWithParams_Static
struct UAngelscriptGASAbility_K2_ExecuteGameplayCueWithParams_Static_Params
{
	class UClass*                                      GameplayCue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      GameplayCueParameters;                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AngelscriptGAS.AngelscriptGASAbility.K2_ExecuteGameplayCueWithParams_Actor
struct UAngelscriptGASAbility_K2_ExecuteGameplayCueWithParams_Actor_Params
{
	class UClass*                                      GameplayCue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      GameplayCueParameters;                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AngelscriptGAS.AngelscriptGASAbility.K2_ExecuteGameplayCue_Static
struct UAngelscriptGASAbility_K2_ExecuteGameplayCue_Static_Params
{
	class UClass*                                      GameplayCue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle                Context;                                                  // (Parm)
};

// Function AngelscriptGAS.AngelscriptGASAbility.K2_ExecuteGameplayCue_Actor
struct UAngelscriptGASAbility_K2_ExecuteGameplayCue_Actor_Params
{
	class UClass*                                      GameplayCue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle                Context;                                                  // (Parm)
};

// Function AngelscriptGAS.AngelscriptGASAbility.K2_AddGameplayCueWithParams_Static
struct UAngelscriptGASAbility_K2_AddGameplayCueWithParams_Static_Params
{
	class UClass*                                      GameplayCue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      GameplayCueParameter;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bRemoveOnAbilityEnd;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptGASAbility.K2_AddGameplayCueWithParams_Actor
struct UAngelscriptGASAbility_K2_AddGameplayCueWithParams_Actor_Params
{
	class UClass*                                      GameplayCue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      GameplayCueParameter;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bRemoveOnAbilityEnd;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptGASAbility.K2_AddGameplayCue_Static
struct UAngelscriptGASAbility_K2_AddGameplayCue_Static_Params
{
	class UClass*                                      GameplayCue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle                Context;                                                  // (Parm)
	bool                                               bRemoveOnAbilityEnd;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptGASAbility.K2_AddGameplayCue_Actor
struct UAngelscriptGASAbility_K2_AddGameplayCue_Actor_Params
{
	class UClass*                                      GameplayCue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle                Context;                                                  // (Parm)
	bool                                               bRemoveOnAbilityEnd;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptGASCharacter.SetupCharacterInput
struct AAngelscriptGASCharacter_SetupCharacterInput_Params
{
	class UInputComponent*                             PlayerInputComponent;                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AngelscriptGAS.AngelscriptGASPawn.SetupPawnInput
struct AAngelscriptGASPawn_SetupPawnInput_Params
{
	class UInputComponent*                             PlayerInputComponent;                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayAbilityActorInfoMixinLibrary.IsNetAuthority
struct UGameplayAbilityActorInfoMixinLibrary_IsNetAuthority_Params
{
	struct FGameplayAbilityActorInfo                   Info;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayAbilityActorInfoMixinLibrary.IsLocallyControlledPlayer
struct UGameplayAbilityActorInfoMixinLibrary_IsLocallyControlledPlayer_Params
{
	struct FGameplayAbilityActorInfo                   Info;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayAbilityActorInfoMixinLibrary.IsLocallyControlled
struct UGameplayAbilityActorInfoMixinLibrary_IsLocallyControlled_Params
{
	struct FGameplayAbilityActorInfo                   Info;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayAbilityActorInfoMixinLibrary.GetSkeletalMeshComponent
struct UGameplayAbilityActorInfoMixinLibrary_GetSkeletalMeshComponent_Params
{
	struct FGameplayAbilityActorInfo                   Info;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	class USkeletalMeshComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayAbilityActorInfoMixinLibrary.GetPlayerController
struct UGameplayAbilityActorInfoMixinLibrary_GetPlayerController_Params
{
	struct FGameplayAbilityActorInfo                   Info;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	class APlayerController*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayAbilityActorInfoMixinLibrary.GetOwnerActor
struct UGameplayAbilityActorInfoMixinLibrary_GetOwnerActor_Params
{
	struct FGameplayAbilityActorInfo                   Info;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayAbilityActorInfoMixinLibrary.GetMovementComponent
struct UGameplayAbilityActorInfoMixinLibrary_GetMovementComponent_Params
{
	struct FGameplayAbilityActorInfo                   Info;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	class UMovementComponent*                          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayAbilityActorInfoMixinLibrary.GetAvatarActor
struct UGameplayAbilityActorInfoMixinLibrary_GetAvatarActor_Params
{
	struct FGameplayAbilityActorInfo                   Info;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayAbilityActorInfoMixinLibrary.GetAnimInstance
struct UGameplayAbilityActorInfoMixinLibrary_GetAnimInstance_Params
{
	struct FGameplayAbilityActorInfo                   Info;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	class UAnimInstance*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayAbilityActorInfoMixinLibrary.GetAbilitySystemComponent
struct UGameplayAbilityActorInfoMixinLibrary_GetAbilitySystemComponent_Params
{
	struct FGameplayAbilityActorInfo                   Info;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	class UAbilitySystemComponent*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayAbilityMixinLibrary.GetSourceObject
struct UGameplayAbilityMixinLibrary_GetSourceObject_Params
{
	class UGameplayAbility*                            Ability;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayAbilitySpecHandle                  Handle;                                                   // (Parm)
	struct FGameplayAbilityActorInfo                   ActorInfo;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayCueParametersMixinLibrary.SetTargetAttachComponent
struct UGameplayCueParametersMixinLibrary_SetTargetAttachComponent_Params
{
	struct FGameplayCueParameters                      GameplayCueParams;                                        // (Parm, OutParm)
	class USceneComponent*                             TargetAttachComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayCueParametersMixinLibrary.SetSourceObject
struct UGameplayCueParametersMixinLibrary_SetSourceObject_Params
{
	struct FGameplayCueParameters                      GameplayCueParams;                                        // (Parm, OutParm)
	class UObject*                                     SourceObject;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayCueParametersMixinLibrary.SetPhysicalMaterial
struct UGameplayCueParametersMixinLibrary_SetPhysicalMaterial_Params
{
	struct FGameplayCueParameters                      GameplayCueParams;                                        // (Parm, OutParm)
	class UPhysicalMaterial*                           PhysicalMaterial;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayCueParametersMixinLibrary.SetInstigator
struct UGameplayCueParametersMixinLibrary_SetInstigator_Params
{
	struct FGameplayCueParameters                      GameplayCueParams;                                        // (Parm, OutParm)
	class AActor*                                      Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayCueParametersMixinLibrary.SetEffectCauser
struct UGameplayCueParametersMixinLibrary_SetEffectCauser_Params
{
	struct FGameplayCueParameters                      GameplayCueParams;                                        // (Parm, OutParm)
	class AActor*                                      EffectCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayCueParametersMixinLibrary.GetTargetAttachComponent
struct UGameplayCueParametersMixinLibrary_GetTargetAttachComponent_Params
{
	struct FGameplayCueParameters                      GameplayCueParams;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	class USceneComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayCueParametersMixinLibrary.GetInstigator
struct UGameplayCueParametersMixinLibrary_GetInstigator_Params
{
	struct FGameplayCueParameters                      GameplayCueParams;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayCueParametersMixinLibrary.GetEffectCauser
struct UGameplayCueParametersMixinLibrary_GetEffectCauser_Params
{
	struct FGameplayCueParameters                      GameplayCueParams;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayEffectContextHandleMixinLibrary.SetEffectCauser
struct UGameplayEffectContextHandleMixinLibrary_SetEffectCauser_Params
{
	struct FGameplayEffectContextHandle                Handle;                                                   // (Parm, OutParm)
	class AActor*                                      NewEffectCauser;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayEffectContextHandleMixinLibrary.SetAbility
struct UGameplayEffectContextHandleMixinLibrary_SetAbility_Params
{
	struct FGameplayEffectContextHandle                Handle;                                                   // (Parm, OutParm)
	class UGameplayAbility*                            InGameplayAbility;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayEffectContextHandleMixinLibrary.IsValid
struct UGameplayEffectContextHandleMixinLibrary_IsValid_Params
{
	struct FGameplayEffectContextHandle                Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayEffectContextHandleMixinLibrary.IsLocallyControlledPlayer
struct UGameplayEffectContextHandleMixinLibrary_IsLocallyControlledPlayer_Params
{
	struct FGameplayEffectContextHandle                Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayEffectContextHandleMixinLibrary.IsLocallyControlled
struct UGameplayEffectContextHandleMixinLibrary_IsLocallyControlled_Params
{
	struct FGameplayEffectContextHandle                Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayEffectContextHandleMixinLibrary.HasOrigin
struct UGameplayEffectContextHandleMixinLibrary_HasOrigin_Params
{
	struct FGameplayEffectContextHandle                Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayEffectContextHandleMixinLibrary.GetSourceObject
struct UGameplayEffectContextHandleMixinLibrary_GetSourceObject_Params
{
	struct FGameplayEffectContextHandle                Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayEffectContextHandleMixinLibrary.GetOwnedGameplayTags
struct UGameplayEffectContextHandleMixinLibrary_GetOwnedGameplayTags_Params
{
	struct FGameplayEffectContextHandle                Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       ActorTagContainer;                                        // (Parm, OutParm)
	struct FGameplayTagContainer                       SpecTagContainer;                                         // (Parm, OutParm)
};

// Function AngelscriptGAS.GameplayEffectContextHandleMixinLibrary.GetOriginalInstigatorAbilitySystemComponent
struct UGameplayEffectContextHandleMixinLibrary_GetOriginalInstigatorAbilitySystemComponent_Params
{
	struct FGameplayEffectContextHandle                Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	class UAbilitySystemComponent*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayEffectContextHandleMixinLibrary.GetOriginalInstigator
struct UGameplayEffectContextHandleMixinLibrary_GetOriginalInstigator_Params
{
	struct FGameplayEffectContextHandle                Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayEffectContextHandleMixinLibrary.GetOrigin
struct UGameplayEffectContextHandleMixinLibrary_GetOrigin_Params
{
	struct FGameplayEffectContextHandle                Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayEffectContextHandleMixinLibrary.GetInstigator
struct UGameplayEffectContextHandleMixinLibrary_GetInstigator_Params
{
	struct FGameplayEffectContextHandle                Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayEffectContextHandleMixinLibrary.GetHitResult
struct UGameplayEffectContextHandleMixinLibrary_GetHitResult_Params
{
	struct FGameplayEffectContextHandle                Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FHitResult                                  OutHitResult;                                             // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayEffectContextHandleMixinLibrary.GetEffectCauser
struct UGameplayEffectContextHandleMixinLibrary_GetEffectCauser_Params
{
	struct FGameplayEffectContextHandle                Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayEffectContextHandleMixinLibrary.GetActors
struct UGameplayEffectContextHandleMixinLibrary_GetActors_Params
{
	struct FGameplayEffectContextHandle                Handle;                                                   // (Parm, OutParm)
	TArray<class AActor*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AngelscriptGAS.GameplayEffectContextHandleMixinLibrary.GetAbilityLevel
struct UGameplayEffectContextHandleMixinLibrary_GetAbilityLevel_Params
{
	struct FGameplayEffectContextHandle                Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayEffectContextHandleMixinLibrary.Clear
struct UGameplayEffectContextHandleMixinLibrary_Clear_Params
{
	struct FGameplayEffectContextHandle                Handle;                                                   // (Parm, OutParm)
};

// Function AngelscriptGAS.GameplayEffectContextHandleMixinLibrary.AddSourceObject
struct UGameplayEffectContextHandleMixinLibrary_AddSourceObject_Params
{
	struct FGameplayEffectContextHandle                Handle;                                                   // (Parm, OutParm)
	class UObject*                                     NewSourceObject;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayEffectContextHandleMixinLibrary.AddOrigin
struct UGameplayEffectContextHandleMixinLibrary_AddOrigin_Params
{
	struct FGameplayEffectContextHandle                Handle;                                                   // (Parm, OutParm)
	struct FVector                                     InOrigin;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayEffectContextHandleMixinLibrary.AddInstigator
struct UGameplayEffectContextHandleMixinLibrary_AddInstigator_Params
{
	struct FGameplayEffectContextHandle                Handle;                                                   // (Parm, OutParm)
	class AActor*                                      InInstigator;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      InEffectCauser;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayEffectContextHandleMixinLibrary.AddHitResult
struct UGameplayEffectContextHandleMixinLibrary_AddHitResult_Params
{
	struct FGameplayEffectContextHandle                Handle;                                                   // (Parm, OutParm)
	struct FHitResult                                  InHitResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bReset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayEffectContextHandleMixinLibrary.AddActors
struct UGameplayEffectContextHandleMixinLibrary_AddActors_Params
{
	struct FGameplayEffectContextHandle                Handle;                                                   // (Parm, OutParm)
	TArray<class AActor*>                              InActors;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bReset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayEffectCustomExecutionOutputMixinLibrary.ShouldTriggerConditionalGameplayEffects
struct UGameplayEffectCustomExecutionOutputMixinLibrary_ShouldTriggerConditionalGameplayEffects_Params
{
	struct FGameplayEffectCustomExecutionOutput        CustomExecutionOutput;                                    // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayEffectCustomExecutionOutputMixinLibrary.MarkStackCountHandledManually
struct UGameplayEffectCustomExecutionOutputMixinLibrary_MarkStackCountHandledManually_Params
{
	struct FGameplayEffectCustomExecutionOutput        CustomExecutionOutput;                                    // (Parm, OutParm)
};

// Function AngelscriptGAS.GameplayEffectCustomExecutionOutputMixinLibrary.MarkGameplayCuesHandledManually
struct UGameplayEffectCustomExecutionOutputMixinLibrary_MarkGameplayCuesHandledManually_Params
{
	struct FGameplayEffectCustomExecutionOutput        CustomExecutionOutput;                                    // (Parm, OutParm)
};

// Function AngelscriptGAS.GameplayEffectCustomExecutionOutputMixinLibrary.MarkConditionalGameplayEffectsToTrigger
struct UGameplayEffectCustomExecutionOutputMixinLibrary_MarkConditionalGameplayEffectsToTrigger_Params
{
	struct FGameplayEffectCustomExecutionOutput        CustomExecutionOutput;                                    // (Parm, OutParm)
};

// Function AngelscriptGAS.GameplayEffectCustomExecutionOutputMixinLibrary.IsStackCountHandledManually
struct UGameplayEffectCustomExecutionOutputMixinLibrary_IsStackCountHandledManually_Params
{
	struct FGameplayEffectCustomExecutionOutput        CustomExecutionOutput;                                    // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayEffectCustomExecutionOutputMixinLibrary.GetOutputModifiersRef
struct UGameplayEffectCustomExecutionOutputMixinLibrary_GetOutputModifiersRef_Params
{
	struct FGameplayEffectCustomExecutionOutput        CustomExecutionOutput;                                    // (Parm, OutParm)
	TArray<struct FGameplayModifierEvaluatedData>      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AngelscriptGAS.GameplayEffectCustomExecutionOutputMixinLibrary.GetOutputModifiers
struct UGameplayEffectCustomExecutionOutputMixinLibrary_GetOutputModifiers_Params
{
	struct FGameplayEffectCustomExecutionOutput        CustomExecutionOutput;                                    // (Parm, OutParm)
	TArray<struct FGameplayModifierEvaluatedData>      ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function AngelscriptGAS.GameplayEffectCustomExecutionOutputMixinLibrary.AreGameplayCuesHandledManually
struct UGameplayEffectCustomExecutionOutputMixinLibrary_AreGameplayCuesHandledManually_Params
{
	struct FGameplayEffectCustomExecutionOutput        CustomExecutionOutput;                                    // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayEffectCustomExecutionOutputMixinLibrary.AddOutputModifier
struct UGameplayEffectCustomExecutionOutputMixinLibrary_AddOutputModifier_Params
{
	struct FGameplayEffectCustomExecutionOutput        CustomExecutionOutput;                                    // (Parm, OutParm)
	struct FGameplayModifierEvaluatedData              InOutputMod;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AngelscriptGAS.GameplayEffectCustomExecutionParametersMixinLibrary.GetTargetAbilitySystemComponent
struct UGameplayEffectCustomExecutionParametersMixinLibrary_GetTargetAbilitySystemComponent_Params
{
	struct FGameplayEffectCustomExecutionParameters    CustomExecutionParameters;                                // (ConstParm, Parm, OutParm, ReferenceParm)
	class UAbilitySystemComponent*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayEffectCustomExecutionParametersMixinLibrary.GetSourceAbilitySystemComponent
struct UGameplayEffectCustomExecutionParametersMixinLibrary_GetSourceAbilitySystemComponent_Params
{
	struct FGameplayEffectCustomExecutionParameters    CustomExecutionParameters;                                // (ConstParm, Parm, OutParm, ReferenceParm)
	class UAbilitySystemComponent*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayEffectCustomExecutionParametersMixinLibrary.GetPredictionKey
struct UGameplayEffectCustomExecutionParametersMixinLibrary_GetPredictionKey_Params
{
	struct FGameplayEffectCustomExecutionParameters    CustomExecutionParameters;                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FPredictionKey                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AngelscriptGAS.GameplayEffectCustomExecutionParametersMixinLibrary.GetPassedInTags
struct UGameplayEffectCustomExecutionParametersMixinLibrary_GetPassedInTags_Params
{
	struct FGameplayEffectCustomExecutionParameters    CustomExecutionParameters;                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function AngelscriptGAS.GameplayEffectCustomExecutionParametersMixinLibrary.GetOwningSpecForPreExecuteMod
struct UGameplayEffectCustomExecutionParametersMixinLibrary_GetOwningSpecForPreExecuteMod_Params
{
	struct FGameplayEffectCustomExecutionParameters    CustomExecutionParameters;                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayEffectSpec                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AngelscriptGAS.GameplayEffectCustomExecutionParametersMixinLibrary.GetOwningSpec
struct UGameplayEffectCustomExecutionParametersMixinLibrary_GetOwningSpec_Params
{
	struct FGameplayEffectCustomExecutionParameters    CustomExecutionParameters;                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayEffectSpec                         ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function AngelscriptGAS.GameplayEffectCustomExecutionParametersMixinLibrary.GetIgnoreHandles
struct UGameplayEffectCustomExecutionParametersMixinLibrary_GetIgnoreHandles_Params
{
	struct FGameplayEffectCustomExecutionParameters    CustomExecutionParameters;                                // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<struct FActiveGameplayEffectHandle>         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AngelscriptGAS.GameplayEffectCustomExecutionParametersMixinLibrary.AttemptCalculateTransientAggregatorMagnitude
struct UGameplayEffectCustomExecutionParametersMixinLibrary_AttemptCalculateTransientAggregatorMagnitude_Params
{
	struct FGameplayEffectCustomExecutionParameters    ExecutionParameters;                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                InAggregatorIdentifier;                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayEffectExecutionParameters          InParams;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              OutMagnitude;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayEffectCustomExecutionParametersMixinLibrary.AttemptCalculateCapturedAttributeMagnitudeWithBase
struct UGameplayEffectCustomExecutionParametersMixinLibrary_AttemptCalculateCapturedAttributeMagnitudeWithBase_Params
{
	struct FGameplayEffectCustomExecutionParameters    CustomExecutionParameters;                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayEffectAttributeCaptureDefinition   InCaptureDef;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayEffectExecutionParameters          InParams;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              InBaseValue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutMagnitude;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayEffectCustomExecutionParametersMixinLibrary.AttemptCalculateCapturedAttributeMagnitude
struct UGameplayEffectCustomExecutionParametersMixinLibrary_AttemptCalculateCapturedAttributeMagnitude_Params
{
	struct FGameplayEffectCustomExecutionParameters    CustomExecutionParameters;                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayEffectAttributeCaptureDefinition   InCaptureDef;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayEffectExecutionParameters          InParams;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              OutMagnitude;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayEffectCustomExecutionParametersMixinLibrary.AttemptCalculateCapturedAttributeBonusMagnitude
struct UGameplayEffectCustomExecutionParametersMixinLibrary_AttemptCalculateCapturedAttributeBonusMagnitude_Params
{
	struct FGameplayEffectCustomExecutionParameters    CustomExecutionParameters;                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayEffectAttributeCaptureDefinition   InCaptureDef;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayEffectExecutionParameters          InParams;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              OutBonusMagnitude;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayEffectCustomExecutionParametersMixinLibrary.AttemptCalculateCapturedAttributeBaseValue
struct UGameplayEffectCustomExecutionParametersMixinLibrary_AttemptCalculateCapturedAttributeBaseValue_Params
{
	struct FGameplayEffectCustomExecutionParameters    CustomExecutionParameters;                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayEffectAttributeCaptureDefinition   InCaptureDef;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              OutBaseValue;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayEffectExecutionScopedModifierInfoMixinLibrary.GetTransientAggregatorIdentifier
struct UGameplayEffectExecutionScopedModifierInfoMixinLibrary_GetTransientAggregatorIdentifier_Params
{
	struct FGameplayEffectExecutionScopedModifierInfo  Handle;                                                   // (Parm, OutParm)
	struct FGameplayTag                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AngelscriptGAS.GameplayEffectExecutionScopedModifierInfoMixinLibrary.GetCapturedAttribute
struct UGameplayEffectExecutionScopedModifierInfoMixinLibrary_GetCapturedAttribute_Params
{
	struct FGameplayEffectExecutionScopedModifierInfo  Handle;                                                   // (Parm, OutParm)
	struct FGameplayEffectAttributeCaptureDefinition   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AngelscriptGAS.GameplayEffectExecutionScopedModifierInfoMixinLibrary.GetAggregatorType
struct UGameplayEffectExecutionScopedModifierInfoMixinLibrary_GetAggregatorType_Params
{
	struct FGameplayEffectExecutionScopedModifierInfo  Handle;                                                   // (Parm, OutParm)
	enum class EGameplayEffectScopedModifierAggregatorType ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayEffectSpecHandleMixinLibrary.IsValid
struct UGameplayEffectSpecHandleMixinLibrary_IsValid_Params
{
	struct FGameplayEffectSpecHandle                   Handle;                                                   // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayEffectSpecHandleMixinLibrary.GetSpec
struct UGameplayEffectSpecHandleMixinLibrary_GetSpec_Params
{
	struct FGameplayEffectSpecHandle                   Handle;                                                   // (Parm, OutParm)
	struct FGameplayEffectSpec                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AngelscriptGAS.GameplayEffectSpecHandleMixinLibrary.AddDynamicAssetTags
struct UGameplayEffectSpecHandleMixinLibrary_AddDynamicAssetTags_Params
{
	struct FGameplayEffectSpecHandle                   Handle;                                                   // (Parm, OutParm)
	struct FGameplayTagContainer                       TagsToAdd;                                                // (Parm)
};

// Function AngelscriptGAS.GameplayEffectSpecHandleMixinLibrary.AddDynamicAssetTag
struct UGameplayEffectSpecHandleMixinLibrary_AddDynamicAssetTag_Params
{
	struct FGameplayEffectSpecHandle                   Handle;                                                   // (Parm, OutParm)
	struct FGameplayTag                                TagToAdd;                                                 // (Parm)
};

// Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.ToSimpleString
struct UGameplayEffectSpecMixinLibrary_ToSimpleString_Params
{
	struct FGameplayEffectSpec                         Spec;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.SetupAttributeCaptureDefinitions
struct UGameplayEffectSpecMixinLibrary_SetupAttributeCaptureDefinitions_Params
{
	struct FGameplayEffectSpec                         Spec;                                                     // (Parm, OutParm)
};

// Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.SetLevel
struct UGameplayEffectSpecMixinLibrary_SetLevel_Params
{
	struct FGameplayEffectSpec                         Spec;                                                     // (Parm, OutParm)
	float                                              InLevel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.SetContext
struct UGameplayEffectSpecMixinLibrary_SetContext_Params
{
	struct FGameplayEffectSpec                         Spec;                                                     // (Parm, OutParm)
	struct FGameplayEffectContextHandle                NewEffectContextHandle;                                   // (Parm)
};

// Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.SetByCallerMagnitude
struct UGameplayEffectSpecMixinLibrary_SetByCallerMagnitude_Params
{
	struct FGameplayEffectSpec                         Spec;                                                     // (Parm, OutParm)
	struct FGameplayTag                                DataTag;                                                  // (Parm)
	float                                              Magnitude;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.RecaptureSourceActorTags
struct UGameplayEffectSpecMixinLibrary_RecaptureSourceActorTags_Params
{
	struct FGameplayEffectSpec                         Spec;                                                     // (Parm, OutParm)
};

// Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.RecaptureAttributeDataForClone
struct UGameplayEffectSpecMixinLibrary_RecaptureAttributeDataForClone_Params
{
	struct FGameplayEffectSpec                         Spec;                                                     // (Parm, OutParm)
	class UAbilitySystemComponent*                     OriginalASC;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAbilitySystemComponent*                     NewASC;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.PrintAll
struct UGameplayEffectSpecMixinLibrary_PrintAll_Params
{
	struct FGameplayEffectSpec                         Spec;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.HasSetByCallerMagnitudeTag
struct UGameplayEffectSpecMixinLibrary_HasSetByCallerMagnitudeTag_Params
{
	struct FGameplayEffectSpec                         Spec;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                DataTag;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.GetStackCount
struct UGameplayEffectSpecMixinLibrary_GetStackCount_Params
{
	struct FGameplayEffectSpec                         Spec;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.GetSetByCallerMagnitude
struct UGameplayEffectSpecMixinLibrary_GetSetByCallerMagnitude_Params
{
	struct FGameplayEffectSpec                         Spec;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                DataTag;                                                  // (Parm)
	float                                              DefaultIfNotFound;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.GetPeriod
struct UGameplayEffectSpecMixinLibrary_GetPeriod_Params
{
	struct FGameplayEffectSpec                         Spec;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.GetModifierMagnitude
struct UGameplayEffectSpecMixinLibrary_GetModifierMagnitude_Params
{
	struct FGameplayEffectSpec                         Spec;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ModifierIdx;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFactorInStackCount;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.GetModifiedAttributeMagnitude
struct UGameplayEffectSpecMixinLibrary_GetModifiedAttributeMagnitude_Params
{
	struct FGameplayEffectSpec                         Spec;                                                     // (Parm, OutParm)
	struct FGameplayAttribute                          Attribute;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.GetLevel
struct UGameplayEffectSpecMixinLibrary_GetLevel_Params
{
	struct FGameplayEffectSpec                         Spec;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.GetGrantedAbilitySpecs
struct UGameplayEffectSpecMixinLibrary_GetGrantedAbilitySpecs_Params
{
	struct FGameplayEffectSpec                         Spec;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<struct FGameplayAbilitySpecDef>             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.GetDynamicGrantedTags
struct UGameplayEffectSpecMixinLibrary_GetDynamicGrantedTags_Params
{
	struct FGameplayEffectSpec                         Spec;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.GetDynamicAssetTags
struct UGameplayEffectSpecMixinLibrary_GetDynamicAssetTags_Params
{
	struct FGameplayEffectSpec                         Spec;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.GetDurationLocked
struct UGameplayEffectSpecMixinLibrary_GetDurationLocked_Params
{
	struct FGameplayEffectSpec                         Spec;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.GetDuration
struct UGameplayEffectSpecMixinLibrary_GetDuration_Params
{
	struct FGameplayEffectSpec                         Spec;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.GetDefinitionEffectCDO
struct UGameplayEffectSpecMixinLibrary_GetDefinitionEffectCDO_Params
{
	struct FGameplayEffectSpec                         Spec;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	class UGameplayEffect*                             ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.GetContext
struct UGameplayEffectSpecMixinLibrary_GetContext_Params
{
	struct FGameplayEffectSpec                         Spec;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayEffectContextHandle                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.GetCompletedTargetAttributeCapture
struct UGameplayEffectSpecMixinLibrary_GetCompletedTargetAttributeCapture_Params
{
	struct FGameplayEffectSpec                         Spec;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.GetCompletedSourceAttributeCapture
struct UGameplayEffectSpecMixinLibrary_GetCompletedSourceAttributeCapture_Params
{
	struct FGameplayEffectSpec                         Spec;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.GetChanceToApplyToTarget
struct UGameplayEffectSpecMixinLibrary_GetChanceToApplyToTarget_Params
{
	struct FGameplayEffectSpec                         Spec;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.GetCapturedTargetTags
struct UGameplayEffectSpecMixinLibrary_GetCapturedTargetTags_Params
{
	struct FGameplayEffectSpec                         Spec;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FAngelscriptTagContainerAggregator          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.GetCapturedSourceTags
struct UGameplayEffectSpecMixinLibrary_GetCapturedSourceTags_Params
{
	struct FGameplayEffectSpec                         Spec;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FAngelscriptTagContainerAggregator          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.GetAllGrantedTags
struct UGameplayEffectSpecMixinLibrary_GetAllGrantedTags_Params
{
	struct FGameplayEffectSpec                         Spec;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.GetAllAssetTags
struct UGameplayEffectSpecMixinLibrary_GetAllAssetTags_Params
{
	struct FGameplayEffectSpec                         Spec;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.CaptureAttributeDataFromTarget
struct UGameplayEffectSpecMixinLibrary_CaptureAttributeDataFromTarget_Params
{
	struct FGameplayEffectSpec                         Spec;                                                     // (Parm, OutParm)
	class UAbilitySystemComponent*                     TargetAbilitySystemComponent;                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.CalculateModifierMagnitudes
struct UGameplayEffectSpecMixinLibrary_CalculateModifierMagnitudes_Params
{
	struct FGameplayEffectSpec                         Spec;                                                     // (Parm, OutParm)
};

// Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.CalculateModifiedDuration
struct UGameplayEffectSpecMixinLibrary_CalculateModifiedDuration_Params
{
	struct FGameplayEffectSpec                         Spec;                                                     // (Parm, OutParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayEffectSpecMixinLibrary.ApplyExecutorModifiersForDefinition
struct UGameplayEffectSpecMixinLibrary_ApplyExecutorModifiersForDefinition_Params
{
	struct FGameplayEffectSpec                         Spec;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	class UClass*                                      CalculationClass;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectAttributeCaptureDefinition   InCaptureDef;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ValueToModify;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayModifierEvaluatedDataMixinLibrary.ToSimpleString
struct UGameplayModifierEvaluatedDataMixinLibrary_ToSimpleString_Params
{
	struct FGameplayModifierEvaluatedData              Data;                                                     // (Parm, OutParm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AngelscriptGAS.GameplayModifierEvaluatedDataMixinLibrary.SetModifierOp
struct UGameplayModifierEvaluatedDataMixinLibrary_SetModifierOp_Params
{
	struct FGameplayModifierEvaluatedData              Data;                                                     // (Parm, OutParm)
	TEnumAsByte<EGameplayModOp>                        NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayModifierEvaluatedDataMixinLibrary.SetMagnitude
struct UGameplayModifierEvaluatedDataMixinLibrary_SetMagnitude_Params
{
	struct FGameplayModifierEvaluatedData              Data;                                                     // (Parm, OutParm)
	float                                              NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayModifierEvaluatedDataMixinLibrary.SetIsValid
struct UGameplayModifierEvaluatedDataMixinLibrary_SetIsValid_Params
{
	struct FGameplayModifierEvaluatedData              Data;                                                     // (Parm, OutParm)
	bool                                               NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayModifierEvaluatedDataMixinLibrary.SetHandle
struct UGameplayModifierEvaluatedDataMixinLibrary_SetHandle_Params
{
	struct FGameplayModifierEvaluatedData              Data;                                                     // (Parm, OutParm)
	struct FActiveGameplayEffectHandle                 NewValue;                                                 // (Parm)
};

// Function AngelscriptGAS.GameplayModifierEvaluatedDataMixinLibrary.SetAttribute
struct UGameplayModifierEvaluatedDataMixinLibrary_SetAttribute_Params
{
	struct FGameplayModifierEvaluatedData              Data;                                                     // (Parm, OutParm)
	struct FGameplayAttribute                          NewValue;                                                 // (Parm, OutParm)
};

// Function AngelscriptGAS.GameplayModifierEvaluatedDataMixinLibrary.GetModifierOp
struct UGameplayModifierEvaluatedDataMixinLibrary_GetModifierOp_Params
{
	struct FGameplayModifierEvaluatedData              Data;                                                     // (Parm, OutParm)
	TEnumAsByte<EGameplayModOp>                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayModifierEvaluatedDataMixinLibrary.GetMagnitude
struct UGameplayModifierEvaluatedDataMixinLibrary_GetMagnitude_Params
{
	struct FGameplayModifierEvaluatedData              Data;                                                     // (Parm, OutParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayModifierEvaluatedDataMixinLibrary.GetIsValid
struct UGameplayModifierEvaluatedDataMixinLibrary_GetIsValid_Params
{
	struct FGameplayModifierEvaluatedData              Data;                                                     // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptGAS.GameplayModifierEvaluatedDataMixinLibrary.GetHandle
struct UGameplayModifierEvaluatedDataMixinLibrary_GetHandle_Params
{
	struct FGameplayModifierEvaluatedData              Data;                                                     // (Parm, OutParm)
	struct FActiveGameplayEffectHandle                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AngelscriptGAS.GameplayModifierEvaluatedDataMixinLibrary.GetAttribute
struct UGameplayModifierEvaluatedDataMixinLibrary_GetAttribute_Params
{
	struct FGameplayModifierEvaluatedData              Data;                                                     // (Parm, OutParm)
	struct FGameplayAttribute                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AngelscriptGAS.GameplayTaskMixinLibrary.ReadyForActivation
struct UGameplayTaskMixinLibrary_ReadyForActivation_Params
{
	class UGameplayTask*                               Task;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AngelscriptGAS.InheritedTagContainerMixinLibrary.RemoveTag
struct UInheritedTagContainerMixinLibrary_RemoveTag_Params
{
	struct FInheritedTagContainer                      Container;                                                // (Parm, OutParm)
	struct FGameplayTag                                TagToRemove;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AngelscriptGAS.InheritedTagContainerMixinLibrary.AddTag
struct UInheritedTagContainerMixinLibrary_AddTag_Params
{
	struct FInheritedTagContainer                      Container;                                                // (Parm, OutParm)
	struct FGameplayTag                                TagToAdd;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
