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

// Enum EmbarkFire.EEmbarkFireObjectType
enum class EEmbarkFireObjectType : uint8_t
{
	Disabled                       = 0,
	Burnable                       = 1,
	HeatModifier                   = 2,
	EEmbarkFireObjectType_MAX      = 3
};


// Enum EmbarkFire.EEmbarkFireBurnableGroupType
enum class EEmbarkFireBurnableGroupType : uint8_t
{
	Player                         = 0,
	GameplayObjects                = 1,
	Environment                    = 2,
	EEmbarkFireBurnableGroupType_MAX = 3
};


// Enum EmbarkFire.EEmbarkFireHeatModifierBehavior
enum class EEmbarkFireHeatModifierBehavior : uint8_t
{
	ConstantHeat                   = 0,
	Extinguish                     = 1,
	Ignite                         = 2,
	MaxHeat                        = 3,
	EEmbarkFireHeatModifierBehavior_MAX = 4
};


// Enum EmbarkFire.EEmbarkFireObjectStateModified
enum class EEmbarkFireObjectStateModified : uint8_t
{
	None                           = 0,
	Changed                        = 1,
	EEmbarkFireObjectStateModified_MAX = 2
};


// Enum EmbarkFire.EEmbarkFireObjectRepresentation
enum class EEmbarkFireObjectRepresentation : uint8_t
{
	None                           = 0,
	SceneComponent                 = 1,
	Sphere                         = 2,
	EEmbarkFireObjectRepresentation_MAX = 3
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EmbarkFire.EmbarkFireObjectHandle
// 0x0004
struct FEmbarkFireObjectHandle
{
	int                                                Index;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkFire.ReplicatedEmbarkFireStateItem
// 0x0018 (0x0024 - 0x000C)
struct FReplicatedEmbarkFireStateItem : public FFastArraySerializerItem
{
	TWeakObjectPtr<class USceneComponent>              Component;                                                // 0x000C(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // 0x0014(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FEmbarkFireObjectHandle                     Handle;                                                   // 0x001C(0x0004)
	TEnumAsByte<EPhysicalSurface>                      PhysicalSurface;                                          // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsBurning;                                               // 0x0021(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0022(0x0002) MISSED OFFSET
};

// ScriptStruct EmbarkFire.ReplicatedEmbarkFireStateFastArray
// 0x0068 (0x0178 - 0x0110)
struct FReplicatedEmbarkFireStateFastArray : public FFastArraySerializer
{
	TArray<struct FReplicatedEmbarkFireStateItem>      Items;                                                    // 0x0110(0x0010) (ZeroConstructor)
	class AEmbarkFireReplicationActor*                 FireReplicationActor;                                     // 0x0120(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0128(0x0050) MISSED OFFSET
};

// ScriptStruct EmbarkFire.EmbarkFireSurfaceEffectSettings
// 0x00A8
struct FEmbarkFireSurfaceEffectSettings
{
	struct FEmbarkFXParticleParams                     ParticleSettings;                                         // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FEmbarkFXAudioParams                        SoundSettings;                                            // 0x0010(0x0048) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FEmbarkFXDecalParams                        DecalSettings;                                            // 0x0058(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct EmbarkFire.EmbarkFireOnStateChangedData
// 0x0050
struct FEmbarkFireOnStateChangedData
{
	struct FEmbarkFireObjectHandle                     Handle;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible)
	bool                                               bIsBurning;                                               // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	struct FInstigator                                 Instigator;                                               // 0x0008(0x0048) (Edit, BlueprintVisible)
};

// ScriptStruct EmbarkFire.EmbarkFireBurnableHeatLimitSetting
// 0x000C
struct FEmbarkFireBurnableHeatLimitSetting
{
	struct FGameplayTag                                SourceTagToLimitHeatFrom;                                 // 0x0000(0x0008) (Edit, BlueprintVisible)
	float                                              MaxHeatAddedPerSecondBySourceTag;                         // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkFire.EmbarkFireBurnableSettings
// 0x0038
struct FEmbarkFireBurnableSettings
{
	float                                              HeatRecipientBoundsModifier;                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	float                                              StartingHeat;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IgnitionPoint;                                            // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxHeat;                                                  // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HeatToAddWhileIgnitedPerSecond;                           // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HeatDecayPerSecond;                                       // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLimitAmountOfHeatToAddPerSecondBySourceTag;              // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	struct FEmbarkFireBurnableHeatLimitSetting         HeatLimitSettings;                                        // 0x0020(0x000C) (Edit, BlueprintVisible)
	float                                              StartingFuel;                                             // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FuelDepletionPerSecond;                                   // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseDefaultFireFXWhenIgnited;                             // 0x0034(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>                      PhysicalSurface;                                          // 0x0035(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0036(0x0002) MISSED OFFSET
};

// ScriptStruct EmbarkFire.EmbarkFireHeatModifierSettings
// 0x000C
struct FEmbarkFireHeatModifierSettings
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	float                                              Heat;                                                     // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Lifetime;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkFire.EmbarkFireObjectSettings
// 0x0058
struct FEmbarkFireObjectSettings
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	struct FGameplayTag                                SourceTag;                                                // 0x0004(0x0008) (Edit, BlueprintVisible)
	float                                              HeatTransferBoundsModifier;                               // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFireBurnableSettings                 BurnableSettings;                                         // 0x0010(0x0038) (Edit, BlueprintVisible)
	struct FEmbarkFireHeatModifierSettings             HeatModifierSettings;                                     // 0x0048(0x000C) (Edit, BlueprintVisible)
	float                                              DamagePerSecondWhileOnFire;                               // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkFire.EmbarkFireLocationUpdate
// 0x0020
struct FEmbarkFireLocationUpdate
{
	struct FEmbarkFireObjectHandle                     Handle;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FVector                                     NewLocation;                                              // 0x0008(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkFire.EmbarkFireObjectSphereData
// 0x0030
struct FEmbarkFireObjectSphereData
{
	struct FVector                                     Location;                                                 // 0x0000(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class USceneComponent>              AssociatedComponent;                                      // 0x001C(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // 0x0024(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct EmbarkFire.EmbarkFireObjectStateInitData
// 0x00F0
struct FEmbarkFireObjectStateInitData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class USceneComponent*                             Component;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FEmbarkFireObjectSphereData                 SphereData;                                               // 0x0010(0x0030) (Edit, BlueprintVisible)
	struct FEmbarkFireObjectSettings                   Settings;                                                 // 0x0040(0x0058) (Edit, BlueprintVisible)
	struct FScriptDelegate                             OnStateChangedCallback;                                   // 0x0098(0x0010) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FInstigator                                 SpawnInstigator;                                          // 0x00A8(0x0048) (Edit, BlueprintVisible)
};

// ScriptStruct EmbarkFire.EmbarkFireObjectState
// 0x0118
struct FEmbarkFireObjectState
{
	unsigned char                                      UnknownData00[0x118];                                     // 0x0000(0x0118) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
