#pragma once

//   SDK By:if

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace sdk
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EmbarkAbilitySystem.EmbarkAttributeInitializerEntry
// 0x0040
struct FEmbarkAttributeInitializerEntry
{
	struct FGameplayAttribute                          Attribute;                                                // 0x0000(0x0038)
	float                                              DefaultValue;                                             // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct EmbarkAbilitySystem.EmbarkAttributeInitializerDefinition
// 0x0040
struct FEmbarkAttributeInitializerDefinition
{
	struct FGameplayAttribute                          Attribute;                                                // 0x0000(0x0038)
	class UClass*                                      AttributeSetClass;                                        // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkAbilitySystem.EmbarkAttributeInitializer
// 0x0020
struct FEmbarkAttributeInitializer
{
	TArray<struct FEmbarkAttributeInitializerEntry>    Internal_DefaultAttributeValues;                          // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FEmbarkAttributeInitializerDefinition> Attributes;                                               // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkAbilitySystem.EmbarkGameplayEffectContextGrantedCueParameters
// 0x00F0
struct FEmbarkGameplayEffectContextGrantedCueParameters
{
	struct FGameplayCueParameters                      Parameters;                                               // 0x0000(0x00E8) (Transient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E8(0x0008) MISSED OFFSET
};

// ScriptStruct EmbarkAbilitySystem.EmbarkGameplayEffectContext
// 0x0060 (0x00E0 - 0x0080)
struct FEmbarkGameplayEffectContext : public FGameplayEffectContext
{
	TMap<struct FName, struct FEmbarkScriptStruct>     ScriptStructMap;                                          // 0x0080(0x0050) (Transient)
	TArray<struct FEmbarkGameplayEffectContextGrantedCueParameters> GrantedCues;                                              // 0x00D0(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct EmbarkAbilitySystem.DelegateHandleHolder
// 0x0008
struct FDelegateHandleHolder
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct EmbarkAbilitySystem.EmbarkScriptStructTargetData
// 0x0050 (0x0058 - 0x0008)
struct FEmbarkScriptStructTargetData : public FGameplayAbilityTargetData
{
	TMap<struct FName, struct FEmbarkScriptStruct>     ScriptStructMap;                                          // 0x0008(0x0050) (Transient)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
