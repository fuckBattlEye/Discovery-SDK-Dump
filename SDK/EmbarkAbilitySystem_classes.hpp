#pragma once

//   SDK By:if

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace sdk
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class EmbarkAbilitySystem.EmbarkAbilitySystemComponent
// 0x0048 (0x1490 - 0x1448)
class UEmbarkAbilitySystemComponent : public UAngelscriptAbilitySystemComponent
{
public:
	struct FScriptMulticastDelegate                    OnAbilityGranted;                                         // 0x1448(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAbilityRemoved;                                         // 0x1458(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEmbarkGameplayEffectAppliedDelegateToSelf;              // 0x1468(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEmbarkGameplayEffectAppliedDelegateToTarget;            // 0x1478(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bEnableForceReplication;                                  // 0x1488(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x1489(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAbilitySystem.EmbarkAbilitySystemComponent"));
		return ptr;
	}


	void UnregisterGameplayTagEventWithParentRangeAll(const struct FGameplayTag& StartTag, const struct FGameplayTag& EndTag, class UObject* Object, TEnumAsByte<EGameplayTagEventType> EventType);//Offset:Discovery.exe+0x1C33BA0
	void UnregisterGameplayTagEventWithParentRange(const struct FGameplayTag& StartTag, const struct FGameplayTag& EndTag, TEnumAsByte<EGameplayTagEventType> EventType, TArray<struct FDelegateHandleHolder>* DelegateHolders);//Offset:Discovery.exe+0x1C33D40
	void UnregisterGameplayTagEventsExactAll(const struct FGameplayTag& Tag, class UObject* Object, TEnumAsByte<EGameplayTagEventType> EventType);//Offset:Discovery.exe+0x1C33F10
	void UnregisterGameplayTagEventExact(const struct FGameplayTag& Tag, const struct FDelegateHandleHolder& DelegateHolder, TEnumAsByte<EGameplayTagEventType> EventType);//Offset:Discovery.exe+0x1C34050
	bool TryActivateAllAbilitiesByClass(class UClass* InAbilityToActivate, bool bAllowRemoteActivation);//Offset:Discovery.exe+0x1C336E0
	bool TriggerAbilityFromGameplayEvent(const struct FGameplayAbilitySpecHandle& Handle, const struct FGameplayTag& EventTag, const struct FGameplayEventData& Payload);//Offset:Discovery.exe+0x1C339C0
	TArray<struct FDelegateHandleHolder> RegisterGameplayTagEventWithParentRange(const struct FGameplayTag& StartTag, const struct FGameplayTag& EndTag, class UObject* Object, const struct FName& FunctionName, TEnumAsByte<EGameplayTagEventType> EventType);//Offset:Discovery.exe+0x1C34190
	struct FDelegateHandleHolder RegisterGameplayTagEventExact(const struct FGameplayTag& Tag, class UObject* Object, const struct FName& FunctionName, TEnumAsByte<EGameplayTagEventType> EventType);//Offset:Discovery.exe+0x1C343E0
	void EndEmbarkAbilityByHandle(const struct FGameplayAbilitySpecHandle& Handle);//Offset:Discovery.exe+0x1C337D0
	void EndEmbarkAbilitiesByTags(const struct FGameplayTagContainer& WithTags, const struct FGameplayTagContainer& WithoutTags);//Offset:Discovery.exe+0x1C33870
	void CancelAllActiveAbilities(class UGameplayAbility* Ignore);//Offset:Discovery.exe+0x1C34590
	struct FActiveGameplayEffectHandle ApplyGameplayEffectSpecDirectToTarget(const struct FGameplayEffectSpec& Spec, class UAbilitySystemComponent* Target);//Offset:Discovery.exe+0x1C335C0
};


// Class EmbarkAbilitySystem.EmbarkGameplayAbility
// 0x0030 (0x03E8 - 0x03B8)
class UEmbarkGameplayAbility : public UGameplayAbility
{
public:
	struct FGameplayTagContainer                       CancelOnTagApplication;                                   // 0x03B8(0x0020) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x10];                                      // 0x03D8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAbilitySystem.EmbarkGameplayAbility"));
		return ptr;
	}


	void K2_RemoveGameplayCue_Static(class UClass* GameplayCue);//Offset:Discovery.exe+0x1487E90
	void K2_RemoveGameplayCue_Actor(class UClass* GameplayCue);//Offset:Discovery.exe+0x14886B0
	void K2_OnRemoveAbility(const struct FGameplayAbilityActorInfo& InActorInfo, const struct FGameplayAbilitySpec& InSpec);//Offset:Discovery.exe+0x327F8B0
	void K2_OnGiveAbility(const struct FGameplayAbilityActorInfo& InActorInfo, const struct FGameplayAbilitySpec& InSpec);//Offset:Discovery.exe+0x327F8B0
	struct FGameplayAbilitySpecHandle K2_GetCurrentAbilitySpecHandle();//Offset:Discovery.exe+0x1C39C40
	void K2_ExecuteGameplayCueWithParams_Static(class UClass* GameplayCue, const struct FGameplayCueParameters& GameplayCueParameters);//Offset:Discovery.exe+0x1488340
	void K2_ExecuteGameplayCueWithParams_Actor(class UClass* GameplayCue, const struct FGameplayCueParameters& GameplayCueParameters);//Offset:Discovery.exe+0x1488B60
	void K2_ExecuteGameplayCue_Static(class UClass* GameplayCue, const struct FGameplayEffectContextHandle& Context);//Offset:Discovery.exe+0x1488560
	void K2_ExecuteGameplayCue_Actor(class UClass* GameplayCue, const struct FGameplayEffectContextHandle& Context);//Offset:Discovery.exe+0x1488D80
	bool K2_CanBeCanceled();//Offset:Discovery.exe+0x327F8B0
	void K2_AddGameplayCueWithParams_Static(class UClass* GameplayCue, const struct FGameplayCueParameters& GameplayCueParameter, bool bRemoveOnAbilityEnd);//Offset:Discovery.exe+0x1487F30
	void K2_AddGameplayCueWithParams_Actor(class UClass* GameplayCue, const struct FGameplayCueParameters& GameplayCueParameter, bool bRemoveOnAbilityEnd);//Offset:Discovery.exe+0x1488750
	void K2_AddGameplayCue_Static(class UClass* GameplayCue, const struct FGameplayEffectContextHandle& Context, bool bRemoveOnAbilityEnd);//Offset:Discovery.exe+0x14881A0
	void K2_AddGameplayCue_Actor(class UClass* GameplayCue, const struct FGameplayEffectContextHandle& Context, bool bRemoveOnAbilityEnd);//Offset:Discovery.exe+0x14889C0
};


// Class EmbarkAbilitySystem.EmbarkGameplayEffect
// 0x0010 (0x0830 - 0x0820)
class UEmbarkGameplayEffect : public UGameplayEffect
{
public:
	TArray<class UEmbarkActiveGameplayEffectExecution*> OnActiveExecution;                                        // 0x0820(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAbilitySystem.EmbarkGameplayEffect"));
		return ptr;
	}

};


// Class EmbarkAbilitySystem.EmbarkAttributeSet
// 0x0000 (0x0040 - 0x0040)
class UEmbarkAttributeSet : public UAngelscriptAttributeSet
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAbilitySystem.EmbarkAttributeSet"));
		return ptr;
	}

};


// Class EmbarkAbilitySystem.ActiveGameplayEffectHandleMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UActiveGameplayEffectHandleMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAbilitySystem.ActiveGameplayEffectHandleMixinLibrary"));
		return ptr;
	}


	class UAbilitySystemComponent* STATIC_GetOwningAbilitySystemComponent(const struct FActiveGameplayEffectHandle& Handle);//Offset:Discovery.exe+0x1C33160
};


// Class EmbarkAbilitySystem.EmbarkAbilitySystemGlobals
// 0x0000 (0x0260 - 0x0260)
class UEmbarkAbilitySystemGlobals : public UAbilitySystemGlobals
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAbilitySystem.EmbarkAbilitySystemGlobals"));
		return ptr;
	}

};


// Class EmbarkAbilitySystem.EmbarkGameplayCueUtils
// 0x0000 (0x0028 - 0x0028)
class UEmbarkGameplayCueUtils : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAbilitySystem.EmbarkGameplayCueUtils"));
		return ptr;
	}


	void STATIC_RemoveLocalGameplayCue(class AActor* TargetActor, const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& Parameters);//Offset:Discovery.exe+0x1C35200
	void STATIC_ExecuteLocalGameplayCue(class AActor* TargetActor, const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& Parameters);//Offset:Discovery.exe+0x1C34FA0
	void STATIC_AddLocalGameplayCue(class AActor* TargetActor, const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& Parameters);//Offset:Discovery.exe+0x1C35460
};


// Class EmbarkAbilitySystem.EmbarkAbilitySystemUtils
// 0x0000 (0x0028 - 0x0028)
class UEmbarkAbilitySystemUtils : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAbilitySystem.EmbarkAbilitySystemUtils"));
		return ptr;
	}


	bool STATIC_IsGameplayAbilitySpecHandleValid(const struct FGameplayAbilitySpecHandle& Handle);//Offset:Discovery.exe+0x1C35B90
	struct FGameplayAbilityTargetData_LocationInfo STATIC_GetTargetDataLocationInfo(const struct FGameplayAbilityTargetDataHandle& Handle, int Index);//Offset:Discovery.exe+0x1C35C30
	struct FGameplayAbilityTargetDataHandle STATIC_CreateEmbarkScriptStructTargetData();//Offset:Discovery.exe+0x1C35A40
};


// Class EmbarkAbilitySystem.AbilitySystemComponentMixinLibrary2
// 0x0000 (0x0028 - 0x0028)
class UAbilitySystemComponentMixinLibrary2 : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAbilitySystem.AbilitySystemComponentMixinLibrary2"));
		return ptr;
	}


	bool STATIC_IsAbilityGrantedByEffect(class UAbilitySystemComponent* AbilitySystemComponent, const struct FGameplayAbilitySpecHandle& Handle);//Offset:Discovery.exe+0x1C36B00
	struct FGameplayEffectContextHandle STATIC_GetGameplayEffectContext(class UAbilitySystemComponent* AbilitySystemComponent, const struct FActiveGameplayEffectHandle& Handle);//Offset:Discovery.exe+0x1C367C0
	float STATIC_GetDurationForEffect(class UAbilitySystemComponent* AbilitySystemComponent, const struct FActiveGameplayEffectHandle& Handle);//Offset:Discovery.exe+0x1C36900
	void STATIC_GetCooldownTimeRemainingAndDurationForAbility(class UAbilitySystemComponent* AbilitySystemComponent, const struct FGameplayAbilitySpecHandle& Handle, float* Cooldown, float* Duration);//Offset:Discovery.exe+0x1C36380
	void STATIC_GetActivatableGameplayAbilitySpecHandlesByAllMatchingTags(class UAbilitySystemComponent* AbilitySystemComponent, const struct FGameplayTagContainer& GameplayTagContainer, bool bOnlyAbilitiesThatSatisfyTagRequirements, TArray<struct FGameplayAbilitySpecHandle>* MatchingGameplayAbilities);//Offset:Discovery.exe+0x1C36510
	class UGameplayAbility* STATIC_GetAbilityCDO(class UAbilitySystemComponent* AbilitySystemComponent, const struct FGameplayAbilitySpecHandle& Handle);//Offset:Discovery.exe+0x1C366E0
	struct FActiveGameplayEffectHandle STATIC_FindActiveGameplayEffectHandle(class UAbilitySystemComponent* AbilitySystemComponent, const struct FGameplayAbilitySpecHandle& Handle);//Offset:Discovery.exe+0x1C36A00
};


// Class EmbarkAbilitySystem.GameplayModMagnitudeCalculationMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UGameplayModMagnitudeCalculationMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAbilitySystem.GameplayModMagnitudeCalculationMixinLibrary"));
		return ptr;
	}


	bool STATIC_GetCapturedAttributeMagnitude(class UGameplayModMagnitudeCalculation* GameplayModMagnitudeCalculation, const struct FGameplayEffectAttributeCaptureDefinition& Def, const struct FGameplayEffectSpec& Spec, float* Magnitude);//Offset:Discovery.exe+0x1C37190
};


// Class EmbarkAbilitySystem.GameplayCueParametersPartIDMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UGameplayCueParametersPartIDMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAbilitySystem.GameplayCueParametersPartIDMixinLibrary"));
		return ptr;
	}


	int STATIC_GetNumPartIDs(const struct FGameplayCueParameters& Parameters);//Offset:Discovery.exe+0x1C377C0
	int STATIC_GetFirstPartID(const struct FGameplayCueParameters& Parameters);//Offset:Discovery.exe+0x1C37600
	bool STATIC_ArePartIDsValid(const struct FGameplayCueParameters& Parameters);//Offset:Discovery.exe+0x1C37980
};


// Class EmbarkAbilitySystem.EmbarkAbilityTaskLibrary
// 0x0000 (0x0028 - 0x0028)
class UEmbarkAbilityTaskLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAbilitySystem.EmbarkAbilityTaskLibrary"));
		return ptr;
	}


	class UAbilityTask_NetworkSyncPoint* STATIC_WaitNetSync(class UGameplayAbility* OwningAbility, enum class EAbilityTaskNetSyncType SyncType);//Offset:Discovery.exe+0x1480DA0
	class UAbilityTask_WaitGameplayTagRemoved* STATIC_WaitGameplayTagRemove(class UGameplayAbility* OwningAbility, const struct FGameplayTag& Tag, class AActor* InOptionalExternalTarget, bool OnlyTriggerOnce);//Offset:Discovery.exe+0x1480E90
	class UAbilityTask_WaitGameplayTagAdded* STATIC_WaitGameplayTagAdd(class UGameplayAbility* OwningAbility, const struct FGameplayTag& Tag, class AActor* InOptionalExternalTarget, bool OnlyTriggerOnce);//Offset:Discovery.exe+0x1481020
	class UAbilityTask_WaitGameplayEvent* STATIC_WaitGameplayEvent(class UGameplayAbility* OwningAbility, const struct FGameplayTag& EventTag, class AActor* OptionalExternalTarget, bool OnlyTriggerOnce, bool OnlyMatchExact);//Offset:Discovery.exe+0x14812A0
	class UAbilityTask_WaitDelay* STATIC_WaitDelay(class UGameplayAbility* OwningAbility, float Time);//Offset:Discovery.exe+0x14811B0
	class UAbilityTask_PlayMontageAndWait* STATIC_PlayMontageAndWait(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, class UAnimMontage* MontageToPlay, float Rate, const struct FName& StartSection, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale, float InTimeToStartAnimMontageAt);//Offset:Discovery.exe+0x1481480
};


// Class EmbarkAbilitySystem.EmbarkAbilityTask_ServerWaitForClientTargetData
// 0x0018 (0x0098 - 0x0080)
class UEmbarkAbilityTask_ServerWaitForClientTargetData : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    ValidData;                                                // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0090(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAbilitySystem.EmbarkAbilityTask_ServerWaitForClientTargetData"));
		return ptr;
	}


	class UEmbarkAbilityTask_ServerWaitForClientTargetData* STATIC_ServerWaitForClientTargetData(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, bool TriggerOnce);//Offset:Discovery.exe+0x1C38550
	void OnTargetDataReplicatedCallback(const struct FGameplayAbilityTargetDataHandle& Data, const struct FGameplayTag& ActivationTag);//Offset:Discovery.exe+0x1C383E0
};


// Class EmbarkAbilitySystem.EmbarkAbilityTask_WaitTargetData
// 0x0010 (0x0090 - 0x0080)
class UEmbarkAbilityTask_WaitTargetData : public UAngelscriptAbilityTask
{
public:
	struct FScriptMulticastDelegate                    ValidData;                                                // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAbilitySystem.EmbarkAbilityTask_WaitTargetData"));
		return ptr;
	}


	void SendTargetData(const struct FGameplayAbilityTargetDataHandle& Data);//Offset:Discovery.exe+0x1C38990
	void OnTargetDataReplicatedCallback(const struct FGameplayAbilityTargetDataHandle& Data, const struct FGameplayTag& ActivationTag);//Offset:Discovery.exe+0x1C38AC0
};


// Class EmbarkAbilitySystem.EmbarkActiveGameplayEffectExecution
// 0x0030 (0x0058 - 0x0028)
class UEmbarkActiveGameplayEffectExecution : public UObject
{
public:
	class UWorld*                                      AbilitySystemWorld;                                       // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                   // 0x0030(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UGameplayEffect*                             GameplayEffect;                                           // 0x0038(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0040(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAbilitySystem.EmbarkActiveGameplayEffectExecution"));
		return ptr;
	}


	class UGameplayEffect* GetGameplayEffect();//Offset:Discovery.exe+0x1C38FE0
	struct FGameplayEffectContextHandle GetContext();//Offset:Discovery.exe+0x1C38F70
	class UAbilitySystemComponent* GetAbilitySystemComponent();//Offset:Discovery.exe+0x1A83670
	void BP_OnRemove();//Offset:Discovery.exe+0x327F8B0
	void BP_OnApply();//Offset:Discovery.exe+0x327F8B0
};


// Class EmbarkAbilitySystem.EmbarkAttributeInitializerMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UEmbarkAttributeInitializerMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAbilitySystem.EmbarkAttributeInitializerMixinLibrary"));
		return ptr;
	}


	void STATIC_Init(const struct FEmbarkAttributeInitializer& AttributeInitializer, class UAbilitySystemComponent* AbilitySystem);//Offset:Discovery.exe+0x1C39670
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
