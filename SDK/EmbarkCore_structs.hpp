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

// ScriptStruct EmbarkCore.FeatureFlagLock
// 0x0020
struct FFeatureFlagLock
{
	struct FString                                     EnableFeatureFlag;                                        // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     DisableFeatureFlag;                                       // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct EmbarkCore.FeatureFlag
// 0x0010
struct FFeatureFlag
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkCore.VersionInfo
// 0x0048
struct FVersionInfo
{
	int                                                DataVersion;                                              // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     Build;                                                    // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     BaseIdentifier;                                           // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     BuildNumber;                                              // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Configuration;                                            // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct EmbarkCore.EmbarkScriptStruct
// 0x0018
struct FEmbarkScriptStruct
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct EmbarkCore.EmbarkScriptStructMap
// 0x0050
struct FEmbarkScriptStructMap
{
	TMap<struct FName, struct FEmbarkScriptStruct>     Structs;                                                  // 0x0000(0x0050) (Transient)
};

// ScriptStruct EmbarkCore.EmbarkScriptStructHolder
// 0x0050
struct FEmbarkScriptStructHolder
{
	TMap<struct FName, struct FEmbarkScriptStructMap>  StructMap;                                                // 0x0000(0x0050) (Transient)
};

// ScriptStruct EmbarkCore.ScopedFeatureFlagOverride
// 0x0010
struct FScopedFeatureFlagOverride
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct EmbarkCore.ManifestInfo
// 0x0050
struct FManifestInfo
{
	struct FString                                     CL;                                                       // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     Identifier;                                               // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     BaseIdentifier;                                           // 0x0020(0x0010) (ZeroConstructor)
	struct FString                                     BuildNumber;                                              // 0x0030(0x0010) (ZeroConstructor)
	struct FString                                     Configuration;                                            // 0x0040(0x0010) (ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
