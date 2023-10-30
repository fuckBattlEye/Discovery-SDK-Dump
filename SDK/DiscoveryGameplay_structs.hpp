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

// ScriptStruct DiscoveryGameplay.DiscoveryAnimationSignificanceDistance
// 0x0018
struct FDiscoveryAnimationSignificanceDistance
{
	float                                              DistanceSignificanceAdd;                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FVector2D                                   DistanceRange;                                            // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DiscoveryGameplay.DiscoCharMovementStartPhysicsTickFunction
// 0x0008 (0x0030 - 0x0028)
struct FDiscoCharMovementStartPhysicsTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct DiscoveryGameplay.DiscoCharMovementPostPhysicsTickFunction
// 0x0008 (0x0030 - 0x0028)
struct FDiscoCharMovementPostPhysicsTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct DiscoveryGameplay.DiscoveryFastArrayBreakItem
// 0x0010 (0x0020 - 0x0010)
struct FDiscoveryFastArrayBreakItem : public FEmbarkFastArrayItemBase
{
	struct FEmbarkFastReplicatorActorOrComponent       Ref;                                                      // 0x0010(0x0010)
};

// ScriptStruct DiscoveryGameplay.DiscoveryFastArrayBreak
// 0x0010 (0x0130 - 0x0120)
struct FDiscoveryFastArrayBreak : public FEmbarkFastArrayBase
{
	TArray<struct FDiscoveryFastArrayBreakItem>        Items;                                                    // 0x0120(0x0010) (ZeroConstructor)
};

// ScriptStruct DiscoveryGameplay.DiscoveryReplicatedDamageData
// 0x0060
struct FDiscoveryReplicatedDamageData
{
	struct FVector                                     ImpactPoint;                                              // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     Origin;                                                   // 0x0018(0x0018) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     Direction;                                                // 0x0030(0x0018) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              MaxHealth;                                                // 0x0048(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              NewHealth;                                                // 0x004C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              Damage;                                                   // 0x0050(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              Time;                                                     // 0x0054(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<EDSMDamageType>                        DamageType;                                               // 0x0058(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bHasImpactPoint : 1;                                      // 0x0059(0x0001) (Transient, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      bHasOrigin : 1;                                           // 0x0059(0x0001) (Transient, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      bHasDirection : 1;                                        // 0x0059(0x0001) (Transient, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      bHasHealth : 1;                                           // 0x0059(0x0001) (Transient, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      bHasDamage : 1;                                           // 0x0059(0x0001) (Transient, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x6];                                       // 0x005A(0x0006) MISSED OFFSET
};

// ScriptStruct DiscoveryGameplay.DiscoveryFastArrayDamageItem
// 0x0070 (0x0080 - 0x0010)
struct FDiscoveryFastArrayDamageItem : public FEmbarkFastArrayItemBase
{
	struct FEmbarkFastReplicatorActorOrComponent       Ref;                                                      // 0x0010(0x0010)
	struct FDiscoveryReplicatedDamageData              Damage;                                                   // 0x0020(0x0060)
};

// ScriptStruct DiscoveryGameplay.DiscoveryFastArrayDamage
// 0x0010 (0x0130 - 0x0120)
struct FDiscoveryFastArrayDamage : public FEmbarkFastArrayBase
{
	TArray<struct FDiscoveryFastArrayDamageItem>       Items;                                                    // 0x0120(0x0010) (ZeroConstructor)
};

// ScriptStruct DiscoveryGameplay.CrouchPredictionParams
// 0x0028
struct FCrouchPredictionParams
{
	float                                              CapsuleRadius;                                            // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CrouchedCapsuleHalfHeight;                                // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StandingCapsuleHalfHeight;                                // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FVector                                     UnCrouchAtLocation;                                       // 0x0010(0x0018) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DiscoveryGameplay.EmbarkJumpState
// 0x0020
struct FEmbarkJumpState
{
	float                                              StartedJumpingTimeStamp;                                  // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FVector                                     CharacterLocationWhenStartedJumping;                      // 0x0008(0x0018) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DiscoveryGameplay.DMDamageEventInfo
// 0x00A0
struct FDMDamageEventInfo
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NewHealth;                                                // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PreviousHealth;                                           // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxHealth;                                                // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FVector                                     Location;                                                 // 0x0018(0x0018) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BoundsExtent;                                             // 0x0030(0x0018) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDSMDamageType>                        DamageType;                                               // 0x0048(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	float                                              StaleReplicationDataSeconds;                              // 0x004C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize10                       Origin;                                                   // 0x0050(0x0018) (BlueprintVisible)
	struct FVector_NetQuantize10                       ImpactPoint;                                              // 0x0068(0x0018) (BlueprintVisible)
	struct FVector_NetQuantizeNormal                   Direction;                                                // 0x0080(0x0018) (BlueprintVisible)
	bool                                               bStartSimulating;                                         // 0x0098(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0099(0x0007) MISSED OFFSET
};

// ScriptStruct DiscoveryGameplay.DiscoveryClientDamageData
// 0x0058
struct FDiscoveryClientDamageData
{
	float                                              CurrentHealthUNorm_RoughEstimate;                         // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              HealthChangeSNorm_RoughEstimate;                          // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	struct FVector_NetQuantize                         Origin;                                                   // 0x0008(0x0018) (BlueprintVisible, Transient)
	struct FVector_NetQuantize                         ImpactPoint;                                              // 0x0020(0x0018) (BlueprintVisible, Transient)
	struct FVector_NetQuantizeNormal                   ImpactNormal;                                             // 0x0038(0x0018) (BlueprintVisible, Transient)
	bool                                               bHasOrigin;                                               // 0x0050(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
