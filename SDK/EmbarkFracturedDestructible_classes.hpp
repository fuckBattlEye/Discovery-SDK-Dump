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

// Class EmbarkFracturedDestructible.EmbarkDestructiblePhysXSyncSubsystem
// 0x0060 (0x00A0 - 0x0040)
class UEmbarkDestructiblePhysXSyncSubsystem : public UTickableWorldSubsystem
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET
	unsigned char                                      UnknownData01[0x50];                                      // 0x0040(0x0050) UNKNOWN PROPERTY: ActiveGraphActors

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkFracturedDestructible.EmbarkDestructiblePhysXSyncSubsystem"));
		return ptr;
	}

};


// Class EmbarkFracturedDestructible.EmbarkDestructionBudgetSubsystem
// 0x0088 (0x00C8 - 0x0040)
class UEmbarkDestructionBudgetSubsystem : public UTickableWorldSubsystem
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0040(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkFracturedDestructible.EmbarkDestructionBudgetSubsystem"));
		return ptr;
	}

};


// Class EmbarkFracturedDestructible.EmbarkDestructionListenerVolumeComponent
// 0x0018 (0x00D0 - 0x00B8)
class UEmbarkDestructionListenerVolumeComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnDestructionEvent;                                       // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	int                                                InterestedEventType;                                      // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkFracturedDestructible.EmbarkDestructionListenerVolumeComponent"));
		return ptr;
	}

};


// Class EmbarkFracturedDestructible.EmbarkDestructionCollectorSubsystem
// 0x0140 (0x0180 - 0x0040)
class UEmbarkDestructionCollectorSubsystem : public UTickableWorldSubsystem
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET
	struct FEmbarkFXParticleParams                     GridEffect;                                               // 0x0048(0x0010)
	unsigned char                                      UnknownData01[0x128];                                     // 0x0058(0x0128) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkFracturedDestructible.EmbarkDestructionCollectorSubsystem"));
		return ptr;
	}


	void RegisterListener(class UEmbarkDestructionListenerVolumeComponent* Listener);//Offset:Discovery.exe+0x1CD3350
	void AddDestructionEvent(const struct FVector& Location, const struct FVector& Extents, enum class EDestructionEventType EventType, class UPrimitiveComponent* Component, int BoneIndex);//Offset:Discovery.exe+0x1CD33F0
};


// Class EmbarkFracturedDestructible.EmbarkDestructionGraphActor
// 0x0348 (0x0610 - 0x02C8)
class AEmbarkDestructionGraphActor : public AActor
{
public:
	class UStateInterpolatorComponent*                 StateInterpolatorComponent;                               // 0x02C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTransformInterpolator*                      TransformInterpolator;                                    // 0x02D0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x190];                                     // 0x02D8(0x0190) MISSED OFFSET
	class UStrainSettingsAsset*                        StrainSettingsOverride;                                   // 0x0468(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FFracturedDestructionReplicationSettings    ReplicationSettings;                                      // 0x0470(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly)
	TMap<struct FDestructibleBoneHandle, struct FFracturedDestructibleRuntimeData> DestructiblesRuntimeData;                                 // 0x04C0(0x0050) (Transient)
	struct FEmbarkDestructionGraphData                 DestructionGraphData_Cooked;                              // 0x0510(0x00C8) (Edit, EditConst)
	struct FBlackBoardDeltaCompressionPtr              BlackBoardReplicationPtr;                                 // 0x05D8(0x0030) (Net)
	int                                                DestructionGraphHash;                                     // 0x0608(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x060C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkFracturedDestructible.EmbarkDestructionGraphActor"));
		return ptr;
	}


	bool TryGetBoneHandle(class UEmbarkFracturedDestructibleMeshComponent* InFracturedDestructibleMeshComponent, int InBoneIndex, struct FDestructibleBoneHandle* OutBoneHandle);//Offset:Discovery.exe+0x1CD3D50
	void OnRep_DestructionGraphHash();//Offset:Discovery.exe+0x155C060
	void OnRep_BlackBoardReplicationPtr();//Offset:Discovery.exe+0x1CD3AE0
	bool IsValidBoneLink(const struct FDestructibleBoneHandle& InBoneHandle, int LinkIndex);//Offset:Discovery.exe+0x1CD43A0
	TArray<struct FFracturedDestructibleStrainBone> GetStrainBonesLevelData();//Offset:Discovery.exe+0x1CD3F00
	class AEmbarkDestructionGraphActor* STATIC_GetFromComponent(class UActorComponent* InComponentContext);//Offset:Discovery.exe+0x1CD4720
	class AEmbarkDestructionGraphActor* STATIC_GetFromActor(class AActor* InActorContext);//Offset:Discovery.exe+0x1CD47C0
	TArray<struct FFracturedDestructibleBoneLevelData> GetBonesLevelData();//Offset:Discovery.exe+0x1CD4010
	float GetBoneHealth(const struct FDestructibleBoneHandle& InBoneHandle);//Offset:Discovery.exe+0x1CD4530
	class UEmbarkFracturedDestructibleMeshComponent* GetBoneFracturedDestructibleComponent(const struct FDestructibleBoneHandle& InBoneHandle);//Offset:Discovery.exe+0x1CD3B00
	void FindAllConnectedBones(const struct FDestructibleBoneHandle& InBoneHandle, bool bIncludeBrokenConnections, bool bIncludeDestroyedBones);//Offset:Discovery.exe+0x1CD4140
	void DamageBone(const struct FDestructibleBoneHandle& InBoneHandle, const struct FBoneDamage& Damage);//Offset:Discovery.exe+0x1CD45D0
	bool BoneHasAnyValidConnections(const struct FDestructibleBoneHandle& InBoneHandle);//Offset:Discovery.exe+0x1CD4490
};


// Class EmbarkFracturedDestructible.EmbarkDestructionGraphActorSubsystem
// 0x0050 (0x0080 - 0x0030)
class UEmbarkDestructionGraphActorSubsystem : public UWorldSubsystem
{
public:
	TMap<class ULevel*, class AEmbarkDestructionGraphActor*> DestructionGraphs;                                        // 0x0030(0x0050)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkFracturedDestructible.EmbarkDestructionGraphActorSubsystem"));
		return ptr;
	}

};


// Class EmbarkFracturedDestructible.EmbarkDestructionGraphVolume
// 0x0010 (0x05E0 - 0x05D0)
class UEmbarkDestructionGraphVolume : public UBoxComponent
{
public:
	bool                                               bRemoveConnectionsOutsideStrainGraph;                     // 0x05D0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x05D1(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkFracturedDestructible.EmbarkDestructionGraphVolume"));
		return ptr;
	}

};


// Class EmbarkFracturedDestructible.EmbarkDestructionGraphVolumeActor
// 0x0000 (0x02C8 - 0x02C8)
class AEmbarkDestructionGraphVolumeActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkFracturedDestructible.EmbarkDestructionGraphVolumeActor"));
		return ptr;
	}

};


// Class EmbarkFracturedDestructible.FracturedMaterialEffects
// 0x0068 (0x0098 - 0x0030)
class UFracturedMaterialEffects : public UDataAsset
{
public:
	struct FEmbarkFXParticleParams                     BreakEffect;                                              // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<EAttachLocation>                       AttachMode;                                               // 0x0040(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	struct FEmbarkFXAudioParams                        BreakSound;                                               // 0x0048(0x0048) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bUseBoundsForLocation;                                    // 0x0090(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bPropagateToEnvironment;                                  // 0x0091(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0092(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkFracturedDestructible.FracturedMaterialEffects"));
		return ptr;
	}

};


// Class EmbarkFracturedDestructible.FracturedMaterialGameplay
// 0x00C8 (0x00F8 - 0x0030)
class UFracturedMaterialGameplay : public UDataAsset
{
public:
	float                                              Health;                                                   // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BreakAtPercent;                                           // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                MaterialTag;                                              // 0x0038(0x0008) (Edit, BlueprintVisible)
	struct FStrainMaterialSettings                     StrainSettings;                                           // 0x0040(0x0048) (Edit, BlueprintVisible)
	struct FEmbarkFireObjectSettings                   FireSettings;                                             // 0x0088(0x0058) (Edit, BlueprintVisible)
	float                                              StrainBreakDamagePercent;                                 // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StrainBreakMaxHealthReductionPercent;                     // 0x00E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ImpactImpulseLimit;                                       // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StrainImpactImpulseScale;                                 // 0x00EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDelayDestruction;                                        // 0x00F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00F1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkFracturedDestructible.FracturedMaterialGameplay"));
		return ptr;
	}

};


// Class EmbarkFracturedDestructible.FracturedEdgeMaterial
// 0x0058 (0x0088 - 0x0030)
class UFracturedEdgeMaterial : public UDataAsset
{
public:
	TMap<enum class EEdgeMeshSize, struct FMeshArray>  EdgeMeshesMap;                                            // 0x0030(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly)
	class UFracturedMaterialEffects*                   BreakMaterial;                                            // 0x0080(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkFracturedDestructible.FracturedEdgeMaterial"));
		return ptr;
	}

};


// Class EmbarkFracturedDestructible.FracturedMaterialAsset
// 0x0020 (0x0050 - 0x0030)
class UFracturedMaterialAsset : public UDataAsset
{
public:
	class UFracturedMaterialEffects*                   EffectMaterial;                                           // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UFracturedMaterialGameplay*                  GameplayMaterial;                                         // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UFracturedEdgeMaterial*                      EdgeMaterial;                                             // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UPhysicalMaterial*                           PhysicalMaterial;                                         // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkFracturedDestructible.FracturedMaterialAsset"));
		return ptr;
	}

};


// Class EmbarkFracturedDestructible.FracturedMaterialMapping
// 0x0068 (0x0098 - 0x0030)
class UFracturedMaterialMapping : public UDataAsset
{
public:
	TMap<struct FName, class UFracturedMaterialAsset*> DefaultMaterialMapping;                                   // 0x0030(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly)
	class UFracturedMaterialGameplay*                  GameplayFallback;                                         // 0x0080(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXParticleParams                     LingeringSmokeEffect;                                     // 0x0088(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkFracturedDestructible.FracturedMaterialMapping"));
		return ptr;
	}

};


// Class EmbarkFracturedDestructible.FracturedMaterialsSettings
// 0x0028 (0x0060 - 0x0038)
class UFracturedMaterialsSettings : public UDeveloperSettings
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0038(0x0028) UNKNOWN PROPERTY: SettingsAsset

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkFracturedDestructible.FracturedMaterialsSettings"));
		return ptr;
	}


	class UFracturedMaterialMapping* STATIC_GetDefaultMapping();//Offset:Discovery.exe+0x1CD5FE0
};


// Class EmbarkFracturedDestructible.FracturedMaterialSubsystem
// 0x0008 (0x0038 - 0x0030)
class UFracturedMaterialSubsystem : public UScriptGameInstanceSubsystem
{
public:
	class UFracturedMaterialMapping*                   Mapping;                                                  // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkFracturedDestructible.FracturedMaterialSubsystem"));
		return ptr;
	}


	void OnMappingLoaded();//Offset:Discovery.exe+0x1CD6290
};


// Class EmbarkFracturedDestructible.StrainSettingsAsset
// 0x0070 (0x00A0 - 0x0030)
class UStrainSettingsAsset : public UDataAsset
{
public:
	struct FStrainSettings                             StrainSettings;                                           // 0x0030(0x0070) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkFracturedDestructible.StrainSettingsAsset"));
		return ptr;
	}

};


// Class EmbarkFracturedDestructible.FracturedStrainSettings
// 0x0030 (0x0068 - 0x0038)
class UFracturedStrainSettings : public UDeveloperSettings
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0038(0x0028) UNKNOWN PROPERTY: StrainSettings
	class UStrainSettingsAsset*                        CachedStrainSettingsAsset;                                // 0x0060(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkFracturedDestructible.FracturedStrainSettings"));
		return ptr;
	}


	class UStrainSettingsAsset* STATIC_GetDefaultStrainSettingsAsset();//Offset:Discovery.exe+0x1CD6840
};


// Class EmbarkFracturedDestructible.EmbarkDestructionStrainGraphSubsystem
// 0x0080 (0x00C0 - 0x0040)
class UEmbarkDestructionStrainGraphSubsystem : public UTickableWorldSubsystem
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0040(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkFracturedDestructible.EmbarkDestructionStrainGraphSubsystem"));
		return ptr;
	}

};


// Class EmbarkFracturedDestructible.EmbarkEdgeMeshComponent
// 0x0010 (0x0630 - 0x0620)
class UEmbarkEdgeMeshComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0620(0x0008) MISSED OFFSET
	class UEmbarkEdgeMeshSystem*                       EdgeSystem;                                               // 0x0628(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkFracturedDestructible.EmbarkEdgeMeshComponent"));
		return ptr;
	}

};


// Class EmbarkFracturedDestructible.EmbarkEdgeMeshSystem
// 0x0170 (0x01A0 - 0x0030)
class UEmbarkEdgeMeshSystem : public UWorldSubsystem
{
public:
	TMap<uint32_t, struct FEdgeMeshTypeEntry>          Meshes;                                                   // 0x0030(0x0050)
	TArray<class UStaticMesh*>                         MeshAssets;                                               // 0x0080(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x110];                                     // 0x0090(0x0110) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkFracturedDestructible.EmbarkEdgeMeshSystem"));
		return ptr;
	}

};


// Class EmbarkFracturedDestructible.EmbarkFracturedDestructibleMeshAssetUserData
// 0x0078 (0x00A0 - 0x0028)
class UEmbarkFracturedDestructibleMeshAssetUserData : public UAssetUserData
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	TArray<struct FEmbarkDestructibleBoneAssetData>    Bones;                                                    // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<struct FName, int>                            BoneNameToIndexLookup;                                    // 0x0040(0x0050) (BlueprintVisible, BlueprintReadOnly)
	uint32_t                                           CRC;                                                      // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Version;                                                  // 0x0094(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0098(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkFracturedDestructible.EmbarkFracturedDestructibleMeshAssetUserData"));
		return ptr;
	}

};


// Class EmbarkFracturedDestructible.EmbarkFracturedDestructibleMeshComponent
// 0x02D0 (0x0920 - 0x0650)
class UEmbarkFracturedDestructibleMeshComponent : public UCompositeMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0650(0x0008) MISSED OFFSET
	TMap<struct FName, class UFracturedMaterialAsset*> RuntimeMaterialSettings;                                  // 0x0658(0x0050) (Transient)
	class UFracturedMaterialGameplay*                  GameplayFallback;                                         // 0x06A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x100];                                     // 0x06B0(0x0100) MISSED OFFSET
	bool                                               bPruneDiagonalConnections;                                // 0x07B0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x07B1(0x0007) MISSED OFFSET
	struct FRotator                                    DiagonalPruneRotationOffset;                              // 0x07B8(0x0018) (ZeroConstructor, IsPlainOldData)
	enum class EFracturedDestructibleStrainMode        StrainMode;                                               // 0x07D0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x07D1(0x0007) MISSED OFFSET
	TMap<struct FName, class UFracturedMaterialAsset*> MaterialSettingsOverrides;                                // 0x07D8(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly)
	class UFracturedMaterialEffects*                   BreakMaterialOverride;                                    // 0x0828(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FBoneDestructionSettings                    DefaultBoneSettings;                                      // 0x0830(0x0058) (Edit, BlueprintVisible)
	TMap<struct FName, struct FBoneDestructionSettings> BonesSettingsOverride;                                    // 0x0888(0x0050) (Edit, BlueprintVisible)
	struct FScriptMulticastDelegate                    OnBoneDamaged;                                            // 0x08D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	double                                             PostFractureImpulseScale;                                 // 0x08E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bReduceLODsWhenBroken;                                    // 0x08F0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnableEncodeBoneHealthInPrimitiveCustomData;             // 0x08F1(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x08F2(0x0006) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnBoneBeginSimulate;                                      // 0x08F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSimulationChanged;                                      // 0x0908(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData05[0x8];                                       // 0x0918(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkFracturedDestructible.EmbarkFracturedDestructibleMeshComponent"));
		return ptr;
	}


	void StartSimulateFractured();//Offset:Discovery.exe+0x155C060
	void OnHitCallback(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);//Offset:Discovery.exe+0x1CDB4E0
	void OnFireObjectStateChanged(const struct FEmbarkFireOnStateChangedData& ChangedData);//Offset:Discovery.exe+0x1CDB940
	void OnBoneDamagedCallback(const struct FBoneDamageEventType& Damage);//Offset:Discovery.exe+0x1CDB7D0
	bool IsBoneDestroyed(int InBoneIndex);//Offset:Discovery.exe+0x1CDC5C0
	struct FTransform GetWeldedBoneTransform(const struct FName& BoneName);//Offset:Discovery.exe+0x1CDBE40
	int GetNumBones();//Offset:Discovery.exe+0x1CDC6B0
	class UFracturedMaterialAsset* GetMaterialSettings(const struct FName& Material);//Offset:Discovery.exe+0x1CDD8E0
	class UEmbarkFracturedDestructibleMeshAssetUserData* GetDestructibleMeshAssetData();//Offset:Discovery.exe+0x1CDCBC0
	struct FTransform GetBoneTransform(int BoneIndex, TEnumAsByte<ERelativeTransformSpace> TransformSpace);//Offset:Discovery.exe+0x1CDBD00
	bool GetBoneSimulatePhysics(int BoneIndex);//Offset:Discovery.exe+0x1CDC3C0
	bool GetBoneNameSimulatePhysics(const struct FName& BoneName);//Offset:Discovery.exe+0x1CDC120
	struct FName GetBoneName(int InBoneIndex);//Offset:Discovery.exe+0x1CDC7A0
	class UFracturedMaterialAsset* GetBoneMaterialSettings(int BoneIndex);//Offset:Discovery.exe+0x1CDD620
	float GetBoneMass(int BoneIndex, bool bGetWelded);//Offset:Discovery.exe+0x1CDC490
	int GetBoneIndex(const struct FName& BoneName);//Offset:Discovery.exe+0x1CDC950
	float GetBoneHealth(int BoneIndex);//Offset:Discovery.exe+0x1CDBF30
	struct FGameplayTag GetBoneGameplayTag(const struct FName& BoneName);//Offset:Discovery.exe+0x1CDCCC0
	class UFracturedMaterialGameplay* GetBoneGameplayMaterial(int BoneIndex);//Offset:Discovery.exe+0x1CDD240
	class UFracturedMaterialEffects* GetBoneBreakMaterial(int BoneIndex);//Offset:Discovery.exe+0x1CDD580
	struct FBoxSphereBounds GetBoneBounds(int BoneIndex);//Offset:Discovery.exe+0x1CDBA30
	void DamageBone(int BoneIndex, const struct FBoneDamage& InDamage);//Offset:Discovery.exe+0x1CDBFD0
	struct FBoxSphereBounds CalcBoneBounds(int BoneIndex, const struct FTransform& LocalToWorld);//Offset:Discovery.exe+0x1CDBB90
	void BoneFireDamageTimer();//Offset:Discovery.exe+0x1CDB920
};


// Class EmbarkFracturedDestructible.DestructibleBoneHandleLibrary
// 0x0000 (0x0028 - 0x0028)
class UDestructibleBoneHandleLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkFracturedDestructible.DestructibleBoneHandleLibrary"));
		return ptr;
	}


	int STATIC_IsSet(const struct FDestructibleBoneHandle& InBoneHandle);//Offset:Discovery.exe+0x1CDEA20
	int STATIC_GetRootBoneGraphIndex(const struct FDestructibleBoneHandle& InBoneHandle);//Offset:Discovery.exe+0x1CDEB70
	int STATIC_GetBoneIndex(const struct FDestructibleBoneHandle& InBoneHandle);//Offset:Discovery.exe+0x1CDEAD0
	int STATIC_GetBoneGraphIndex(const struct FDestructibleBoneHandle& InBoneHandle);//Offset:Discovery.exe+0x1CDEC20
};


// Class EmbarkFracturedDestructible.EmbarkFracturedDestructionListenerComponent
// 0x0058 (0x0110 - 0x00B8)
class UEmbarkFracturedDestructionListenerComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnDestructibleBoneDestroyed;                              // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDestructibleBoneBeginSimulate;                          // 0x00C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bRuntimeRegistered;                                       // 0x00D8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeHiddenComponents;                                 // 0x00D9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseBoundsOverlap;                                        // 0x00DA(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x00DB(0x0005) MISSED OFFSET
	TArray<class UClass*>                              ComponentBoundsBlacklist;                                 // 0x00E0(0x0010) (Edit, ZeroConstructor)
	struct FVector                                     BoundsInflateAmount;                                      // 0x00F0(0x0018) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugDrawBoundsOverlap;                                  // 0x0108(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0109(0x0003) MISSED OFFSET
	float                                              DebugDrawBoundsTime;                                      // 0x010C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkFracturedDestructible.EmbarkFracturedDestructionListenerComponent"));
		return ptr;
	}


	void DebugDrawBoundsOverlap();//Offset:Discovery.exe+0x1CDF990
	void CalcDestructionListenerBounds(struct FVector* OutBoundsLocation, struct FQuat* OutBoundsRotation, struct FVector* OutBoundsExtent);//Offset:Discovery.exe+0x1CDF840
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
