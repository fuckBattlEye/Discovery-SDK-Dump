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

// ScriptStruct EmbarkTweakables.Tweakables
// 0x0050
struct FTweakables
{
	TMap<struct FString, struct FString>               PropertyNameToPropertyValueMap;                           // 0x0000(0x0050)
};

// ScriptStruct EmbarkTweakables.TweakablesContainer
// 0x0050
struct FTweakablesContainer
{
	TMap<struct FString, struct FTweakables>           ObjectPathNameToTweakablesMap;                            // 0x0000(0x0050)
};

// ScriptStruct EmbarkTweakables.OnlineTweakable
// 0x0030
struct FOnlineTweakable
{
	struct FString                                     ObjectPathName;                                           // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     PropertyName;                                             // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     PropertyValue;                                            // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct EmbarkTweakables.OnlineTweakablesContainer
// 0x0010
struct FOnlineTweakablesContainer
{
	TArray<struct FOnlineTweakable>                    Tweakables;                                               // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
