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

// Function EmbarkAbilitySystem.EmbarkAbilitySystemComponent.UnregisterGameplayTagEventWithParentRangeAll
struct UEmbarkAbilitySystemComponent_UnregisterGameplayTagEventWithParentRangeAll_Params
{
	struct FGameplayTag                                StartTag;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                EndTag;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGameplayTagEventType>                 EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAbilitySystem.EmbarkAbilitySystemComponent.UnregisterGameplayTagEventWithParentRange
struct UEmbarkAbilitySystemComponent_UnregisterGameplayTagEventWithParentRange_Params
{
	struct FGameplayTag                                StartTag;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                EndTag;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<struct FDelegateHandleHolder>               DelegateHolders;                                          // (Parm, OutParm, ZeroConstructor)
	TEnumAsByte<EGameplayTagEventType>                 EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAbilitySystem.EmbarkAbilitySystemComponent.UnregisterGameplayTagEventsExactAll
struct UEmbarkAbilitySystemComponent_UnregisterGameplayTagEventsExactAll_Params
{
	struct FGameplayTag                                Tag;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGameplayTagEventType>                 EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAbilitySystem.EmbarkAbilitySystemComponent.UnregisterGameplayTagEventExact
struct UEmbarkAbilitySystemComponent_UnregisterGameplayTagEventExact_Params
{
	struct FGameplayTag                                Tag;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FDelegateHandleHolder                       DelegateHolder;                                           // (Parm)
	TEnumAsByte<EGameplayTagEventType>                 EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAbilitySystem.EmbarkAbilitySystemComponent.TryActivateAllAbilitiesByClass
struct UEmbarkAbilitySystemComponent_TryActivateAllAbilitiesByClass_Params
{
	class UClass*                                      InAbilityToActivate;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowRemoteActivation;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAbilitySystem.EmbarkAbilitySystemComponent.TriggerAbilityFromGameplayEvent
struct UEmbarkAbilitySystemComponent_TriggerAbilityFromGameplayEvent_Params
{
	struct FGameplayAbilitySpecHandle                  Handle;                                                   // (Parm)
	struct FGameplayTag                                EventTag;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayEventData                          Payload;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAbilitySystem.EmbarkAbilitySystemComponent.RegisterGameplayTagEventWithParentRange
struct UEmbarkAbilitySystemComponent_RegisterGameplayTagEventWithParentRange_Params
{
	struct FGameplayTag                                StartTag;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                EndTag;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       FunctionName;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TEnumAsByte<EGameplayTagEventType>                 EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FDelegateHandleHolder>               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkAbilitySystem.EmbarkAbilitySystemComponent.RegisterGameplayTagEventExact
struct UEmbarkAbilitySystemComponent_RegisterGameplayTagEventExact_Params
{
	struct FGameplayTag                                Tag;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       FunctionName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGameplayTagEventType>                 EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDelegateHandleHolder                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkAbilitySystem.EmbarkAbilitySystemComponent.EndEmbarkAbilityByHandle
struct UEmbarkAbilitySystemComponent_EndEmbarkAbilityByHandle_Params
{
	struct FGameplayAbilitySpecHandle                  Handle;                                                   // (Parm)
};

// Function EmbarkAbilitySystem.EmbarkAbilitySystemComponent.EndEmbarkAbilitiesByTags
struct UEmbarkAbilitySystemComponent_EndEmbarkAbilitiesByTags_Params
{
	struct FGameplayTagContainer                       WithTags;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       WithoutTags;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkAbilitySystem.EmbarkAbilitySystemComponent.CancelAllActiveAbilities
struct UEmbarkAbilitySystemComponent_CancelAllActiveAbilities_Params
{
	class UGameplayAbility*                            Ignore;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAbilitySystem.EmbarkAbilitySystemComponent.ApplyGameplayEffectSpecDirectToTarget
struct UEmbarkAbilitySystemComponent_ApplyGameplayEffectSpecDirectToTarget_Params
{
	struct FGameplayEffectSpec                         Spec;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	class UAbilitySystemComponent*                     Target;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FActiveGameplayEffectHandle                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkAbilitySystem.EmbarkGameplayAbility.K2_RemoveGameplayCue_Static
struct UEmbarkGameplayAbility_K2_RemoveGameplayCue_Static_Params
{
	class UClass*                                      GameplayCue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAbilitySystem.EmbarkGameplayAbility.K2_RemoveGameplayCue_Actor
struct UEmbarkGameplayAbility_K2_RemoveGameplayCue_Actor_Params
{
	class UClass*                                      GameplayCue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAbilitySystem.EmbarkGameplayAbility.K2_OnRemoveAbility
struct UEmbarkGameplayAbility_K2_OnRemoveAbility_Params
{
	struct FGameplayAbilityActorInfo                   InActorInfo;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayAbilitySpec                        InSpec;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkAbilitySystem.EmbarkGameplayAbility.K2_OnGiveAbility
struct UEmbarkGameplayAbility_K2_OnGiveAbility_Params
{
	struct FGameplayAbilityActorInfo                   InActorInfo;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayAbilitySpec                        InSpec;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkAbilitySystem.EmbarkGameplayAbility.K2_GetCurrentAbilitySpecHandle
struct UEmbarkGameplayAbility_K2_GetCurrentAbilitySpecHandle_Params
{
	struct FGameplayAbilitySpecHandle                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkAbilitySystem.EmbarkGameplayAbility.K2_ExecuteGameplayCueWithParams_Static
struct UEmbarkGameplayAbility_K2_ExecuteGameplayCueWithParams_Static_Params
{
	class UClass*                                      GameplayCue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      GameplayCueParameters;                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkAbilitySystem.EmbarkGameplayAbility.K2_ExecuteGameplayCueWithParams_Actor
struct UEmbarkGameplayAbility_K2_ExecuteGameplayCueWithParams_Actor_Params
{
	class UClass*                                      GameplayCue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      GameplayCueParameters;                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkAbilitySystem.EmbarkGameplayAbility.K2_ExecuteGameplayCue_Static
struct UEmbarkGameplayAbility_K2_ExecuteGameplayCue_Static_Params
{
	class UClass*                                      GameplayCue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle                Context;                                                  // (Parm)
};

// Function EmbarkAbilitySystem.EmbarkGameplayAbility.K2_ExecuteGameplayCue_Actor
struct UEmbarkGameplayAbility_K2_ExecuteGameplayCue_Actor_Params
{
	class UClass*                                      GameplayCue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle                Context;                                                  // (Parm)
};

// Function EmbarkAbilitySystem.EmbarkGameplayAbility.K2_CanBeCanceled
struct UEmbarkGameplayAbility_K2_CanBeCanceled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAbilitySystem.EmbarkGameplayAbility.K2_AddGameplayCueWithParams_Static
struct UEmbarkGameplayAbility_K2_AddGameplayCueWithParams_Static_Params
{
	class UClass*                                      GameplayCue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      GameplayCueParameter;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bRemoveOnAbilityEnd;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAbilitySystem.EmbarkGameplayAbility.K2_AddGameplayCueWithParams_Actor
struct UEmbarkGameplayAbility_K2_AddGameplayCueWithParams_Actor_Params
{
	class UClass*                                      GameplayCue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      GameplayCueParameter;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bRemoveOnAbilityEnd;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAbilitySystem.EmbarkGameplayAbility.K2_AddGameplayCue_Static
struct UEmbarkGameplayAbility_K2_AddGameplayCue_Static_Params
{
	class UClass*                                      GameplayCue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle                Context;                                                  // (Parm)
	bool                                               bRemoveOnAbilityEnd;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAbilitySystem.EmbarkGameplayAbility.K2_AddGameplayCue_Actor
struct UEmbarkGameplayAbility_K2_AddGameplayCue_Actor_Params
{
	class UClass*                                      GameplayCue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle                Context;                                                  // (Parm)
	bool                                               bRemoveOnAbilityEnd;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAbilitySystem.ActiveGameplayEffectHandleMixinLibrary.GetOwningAbilitySystemComponent
struct UActiveGameplayEffectHandleMixinLibrary_GetOwningAbilitySystemComponent_Params
{
	struct FActiveGameplayEffectHandle                 Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	class UAbilitySystemComponent*                     ReturnValue;                                              // (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function EmbarkAbilitySystem.EmbarkGameplayCueUtils.RemoveLocalGameplayCue
struct UEmbarkGameplayCueUtils_RemoveLocalGameplayCue_Params
{
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                GameplayCueTag;                                           // (Parm)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkAbilitySystem.EmbarkGameplayCueUtils.ExecuteLocalGameplayCue
struct UEmbarkGameplayCueUtils_ExecuteLocalGameplayCue_Params
{
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                GameplayCueTag;                                           // (Parm)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkAbilitySystem.EmbarkGameplayCueUtils.AddLocalGameplayCue
struct UEmbarkGameplayCueUtils_AddLocalGameplayCue_Params
{
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                GameplayCueTag;                                           // (Parm)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkAbilitySystem.EmbarkAbilitySystemUtils.IsGameplayAbilitySpecHandleValid
struct UEmbarkAbilitySystemUtils_IsGameplayAbilitySpecHandleValid_Params
{
	struct FGameplayAbilitySpecHandle                  Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAbilitySystem.EmbarkAbilitySystemUtils.GetTargetDataLocationInfo
struct UEmbarkAbilitySystemUtils_GetTargetDataLocationInfo_Params
{
	struct FGameplayAbilityTargetDataHandle            Handle;                                                   // (ConstParm, Parm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayAbilityTargetData_LocationInfo     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkAbilitySystem.EmbarkAbilitySystemUtils.CreateEmbarkScriptStructTargetData
struct UEmbarkAbilitySystemUtils_CreateEmbarkScriptStructTargetData_Params
{
	struct FGameplayAbilityTargetDataHandle            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkAbilitySystem.AbilitySystemComponentMixinLibrary2.IsAbilityGrantedByEffect
struct UAbilitySystemComponentMixinLibrary2_IsAbilityGrantedByEffect_Params
{
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                   // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayAbilitySpecHandle                  Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAbilitySystem.AbilitySystemComponentMixinLibrary2.GetGameplayEffectContext
struct UAbilitySystemComponentMixinLibrary2_GetGameplayEffectContext_Params
{
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                   // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FActiveGameplayEffectHandle                 Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayEffectContextHandle                ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function EmbarkAbilitySystem.AbilitySystemComponentMixinLibrary2.GetDurationForEffect
struct UAbilitySystemComponentMixinLibrary2_GetDurationForEffect_Params
{
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                   // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FActiveGameplayEffectHandle                 Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAbilitySystem.AbilitySystemComponentMixinLibrary2.GetCooldownTimeRemainingAndDurationForAbility
struct UAbilitySystemComponentMixinLibrary2_GetCooldownTimeRemainingAndDurationForAbility_Params
{
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayAbilitySpecHandle                  Handle;                                                   // (Parm)
	float                                              Cooldown;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAbilitySystem.AbilitySystemComponentMixinLibrary2.GetActivatableGameplayAbilitySpecHandlesByAllMatchingTags
struct UAbilitySystemComponentMixinLibrary2_GetActivatableGameplayAbilitySpecHandlesByAllMatchingTags_Params
{
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayTagContainer                       GameplayTagContainer;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<struct FGameplayAbilitySpecHandle>          MatchingGameplayAbilities;                                // (Parm, OutParm, ZeroConstructor)
	bool                                               bOnlyAbilitiesThatSatisfyTagRequirements;                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkAbilitySystem.AbilitySystemComponentMixinLibrary2.GetAbilityCDO
struct UAbilitySystemComponentMixinLibrary2_GetAbilityCDO_Params
{
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayAbilitySpecHandle                  Handle;                                                   // (Parm)
	class UGameplayAbility*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAbilitySystem.AbilitySystemComponentMixinLibrary2.FindActiveGameplayEffectHandle
struct UAbilitySystemComponentMixinLibrary2_FindActiveGameplayEffectHandle_Params
{
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                   // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayAbilitySpecHandle                  Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FActiveGameplayEffectHandle                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkAbilitySystem.GameplayModMagnitudeCalculationMixinLibrary.GetCapturedAttributeMagnitude
struct UGameplayModMagnitudeCalculationMixinLibrary_GetCapturedAttributeMagnitude_Params
{
	class UGameplayModMagnitudeCalculation*            GameplayModMagnitudeCalculation;                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectAttributeCaptureDefinition   Def;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayEffectSpec                         Spec;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              Magnitude;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAbilitySystem.GameplayCueParametersPartIDMixinLibrary.GetNumPartIDs
struct UGameplayCueParametersPartIDMixinLibrary_GetNumPartIDs_Params
{
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAbilitySystem.GameplayCueParametersPartIDMixinLibrary.GetFirstPartID
struct UGameplayCueParametersPartIDMixinLibrary_GetFirstPartID_Params
{
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAbilitySystem.GameplayCueParametersPartIDMixinLibrary.ArePartIDsValid
struct UGameplayCueParametersPartIDMixinLibrary_ArePartIDsValid_Params
{
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAbilitySystem.EmbarkAbilityTaskLibrary.WaitNetSync
struct UEmbarkAbilityTaskLibrary_WaitNetSync_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	enum class EAbilityTaskNetSyncType                 SyncType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAbilityTask_NetworkSyncPoint*               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAbilitySystem.EmbarkAbilityTaskLibrary.WaitGameplayTagRemove
struct UEmbarkAbilityTaskLibrary_WaitGameplayTagRemove_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                Tag;                                                      // (Parm)
	class AActor*                                      InOptionalExternalTarget;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OnlyTriggerOnce;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UAbilityTask_WaitGameplayTagRemoved*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAbilitySystem.EmbarkAbilityTaskLibrary.WaitGameplayTagAdd
struct UEmbarkAbilityTaskLibrary_WaitGameplayTagAdd_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                Tag;                                                      // (Parm)
	class AActor*                                      InOptionalExternalTarget;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OnlyTriggerOnce;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UAbilityTask_WaitGameplayTagAdded*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAbilitySystem.EmbarkAbilityTaskLibrary.WaitGameplayEvent
struct UEmbarkAbilityTaskLibrary_WaitGameplayEvent_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                EventTag;                                                 // (Parm)
	class AActor*                                      OptionalExternalTarget;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OnlyTriggerOnce;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OnlyMatchExact;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UAbilityTask_WaitGameplayEvent*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAbilitySystem.EmbarkAbilityTaskLibrary.WaitDelay
struct UEmbarkAbilityTaskLibrary_WaitDelay_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UAbilityTask_WaitDelay*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAbilitySystem.EmbarkAbilityTaskLibrary.PlayMontageAndWait
struct UEmbarkAbilityTaskLibrary_PlayMontageAndWait_Params
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

// Function EmbarkAbilitySystem.EmbarkAbilityTask_ServerWaitForClientTargetData.ServerWaitForClientTargetData
struct UEmbarkAbilityTask_ServerWaitForClientTargetData_ServerWaitForClientTargetData_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TaskInstanceName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TriggerOnce;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UEmbarkAbilityTask_ServerWaitForClientTargetData* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAbilitySystem.EmbarkAbilityTask_ServerWaitForClientTargetData.OnTargetDataReplicatedCallback
struct UEmbarkAbilityTask_ServerWaitForClientTargetData_OnTargetDataReplicatedCallback_Params
{
	struct FGameplayAbilityTargetDataHandle            Data;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ActivationTag;                                            // (Parm)
};

// Function EmbarkAbilitySystem.EmbarkAbilityTask_WaitTargetData.SendTargetData
struct UEmbarkAbilityTask_WaitTargetData_SendTargetData_Params
{
	struct FGameplayAbilityTargetDataHandle            Data;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkAbilitySystem.EmbarkAbilityTask_WaitTargetData.OnTargetDataReplicatedCallback
struct UEmbarkAbilityTask_WaitTargetData_OnTargetDataReplicatedCallback_Params
{
	struct FGameplayAbilityTargetDataHandle            Data;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ActivationTag;                                            // (Parm)
};

// Function EmbarkAbilitySystem.EmbarkActiveGameplayEffectExecution.GetGameplayEffect
struct UEmbarkActiveGameplayEffectExecution_GetGameplayEffect_Params
{
	class UGameplayEffect*                             ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkAbilitySystem.EmbarkActiveGameplayEffectExecution.GetContext
struct UEmbarkActiveGameplayEffectExecution_GetContext_Params
{
	struct FGameplayEffectContextHandle                ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function EmbarkAbilitySystem.EmbarkActiveGameplayEffectExecution.GetAbilitySystemComponent
struct UEmbarkActiveGameplayEffectExecution_GetAbilitySystemComponent_Params
{
	class UAbilitySystemComponent*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function EmbarkAbilitySystem.EmbarkActiveGameplayEffectExecution.BP_OnRemove
struct UEmbarkActiveGameplayEffectExecution_BP_OnRemove_Params
{
};

// Function EmbarkAbilitySystem.EmbarkActiveGameplayEffectExecution.BP_OnApply
struct UEmbarkActiveGameplayEffectExecution_BP_OnApply_Params
{
};

// Function EmbarkAbilitySystem.EmbarkAttributeInitializerMixinLibrary.Init
struct UEmbarkAttributeInitializerMixinLibrary_Init_Params
{
	struct FEmbarkAttributeInitializer                 AttributeInitializer;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	class UAbilitySystemComponent*                     AbilitySystem;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
