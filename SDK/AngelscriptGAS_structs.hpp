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

// ScriptStruct AngelscriptGAS.AngelscriptAttributeChangedData
// 0x0048
struct FAngelscriptAttributeChangedData
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0000(0x0048) MISSED OFFSET
};

// ScriptStruct AngelscriptGAS.DelegateHandleWrapper
// 0x0008
struct FDelegateHandleWrapper
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct AngelscriptGAS.AngelscriptGameplayAttributeData
// 0x0008 (0x0018 - 0x0010)
struct FAngelscriptGameplayAttributeData : public FGameplayAttributeData
{
	struct FName                                       AttributeName;                                            // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AngelscriptGAS.GameplayEffectExecutionParameters
// 0x0068
struct FGameplayEffectExecutionParameters
{
	unsigned char                                      UnknownData00[0x68];                                      // 0x0000(0x0068) MISSED OFFSET
};

// ScriptStruct AngelscriptGAS.AngelscriptModifiedAttribute
// 0x0010
struct FAngelscriptModifiedAttribute
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              OldValue;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              NewValue;                                                 // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct AngelscriptGAS.AngelscriptInputBindData
// 0x0020
struct FAngelscriptInputBindData
{
	struct FName                                       ConfirmTargetCommand;                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       CancelTargetCommand;                                      // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       EnumName;                                                 // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ConfirmTargetInputID;                                     // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CancelTargetInputID;                                      // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AngelscriptGAS.AngelscriptTagContainerAggregator
// 0x0060
struct FAngelscriptTagContainerAggregator
{
	struct FGameplayTagContainer                       CapturedActorTags;                                        // 0x0000(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	struct FGameplayTagContainer                       CapturedSpecTags;                                         // 0x0020(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	struct FGameplayTagContainer                       AggregatedTags;                                           // 0x0040(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
