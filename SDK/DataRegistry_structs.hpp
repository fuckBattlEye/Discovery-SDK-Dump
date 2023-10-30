#pragma once

//   SDK By:if

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace sdk
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum DataRegistry.EDataRegistryAcquireStatus
enum class EDataRegistryAcquireStatus : uint8_t
{
	NotStarted                     = 0,
	WaitingForInitialAcquire       = 1,
	InitialAcquireFinished         = 2,
	WaitingForResources            = 3,
	AcquireFinished                = 4,
	AcquireError                   = 5,
	DoesNotExist                   = 6,
	EDataRegistryAcquireStatus_MAX = 7
};


// Enum DataRegistry.EMetaDataRegistrySourceAssetUsage
enum class EMetaDataRegistrySourceAssetUsage : uint8_t
{
	NoAssets                       = 0,
	SearchAssets                   = 1,
	RegisterAssets                 = 2,
	SearchAndRegisterAssets        = 3,
	EMetaDataRegistrySourceAssetUsage_MAX = 4
};


// Enum DataRegistry.EDataRegistrySubsystemGetItemResult
enum class EDataRegistrySubsystemGetItemResult : uint8_t
{
	Found                          = 0,
	NotFound                       = 1,
	EDataRegistrySubsystemGetItemResult_MAX = 2
};


// Enum DataRegistry.EDataRegistryAvailability
enum class EDataRegistryAvailability : uint8_t
{
	DoesNotExist                   = 0,
	Unknown                        = 1,
	Remote                         = 2,
	OnDisk                         = 3,
	LocalAsset                     = 4,
	PreCached                      = 5,
	EDataRegistryAvailability_MAX  = 6
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct DataRegistry.DataRegistryIdFormat
// 0x0008
struct FDataRegistryIdFormat
{
	struct FGameplayTag                                BaseGameplayTag;                                          // 0x0000(0x0008) (Edit)
};

// ScriptStruct DataRegistry.DataRegistryCachePolicy
// 0x0014
struct FDataRegistryCachePolicy
{
	bool                                               bCacheIsAlwaysVolatile;                                   // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseCurveTableCacheVersion;                               // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	int                                                MinNumberKept;                                            // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxNumberKept;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ForceKeepSeconds;                                         // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ForceReleaseSeconds;                                      // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DataRegistry.DataRegistrySource_DataTableRules
// 0x0008
struct FDataRegistrySource_DataTableRules
{
	bool                                               bPrecacheTable;                                           // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              CachedTableKeepSeconds;                                   // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DataRegistry.DataRegistryType
// 0x0008
struct FDataRegistryType
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
};

// ScriptStruct DataRegistry.DataRegistryId
// 0x0010
struct FDataRegistryId
{
	struct FDataRegistryType                           RegistryType;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, SaveGame)
	struct FName                                       ItemName;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
};

// ScriptStruct DataRegistry.DataRegistryLookup
// 0x0020
struct FDataRegistryLookup
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct DataRegistry.DataRegistrySourceItemId
// 0x0040
struct FDataRegistrySourceItemId
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
