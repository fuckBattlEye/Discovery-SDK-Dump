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

// Class PrefabricatorRuntime.PrefabActor
// 0x0020 (0x02E8 - 0x02C8)
class APrefabActor : public AActor
{
public:
	class UPrefabComponent*                            PrefabComponent;                                          // 0x02C8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	struct FGuid                                       LastUpdateID;                                             // 0x02D0(0x0010) (ZeroConstructor, IsPlainOldData)
	int                                                Seed;                                                     // 0x02E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02E4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class PrefabricatorRuntime.PrefabActor"));
		return ptr;
	}


	void SavePrefab();//Offset:Discovery.exe+0x2A1ACB0
	void RandomizeSeed(const struct FRandomStream& InRandom, bool bRecursive);//Offset:Discovery.exe+0x2A1AB50
	void LoadPrefab();//Offset:Discovery.exe+0x2A1ACD0
	bool IsPrefabOutdated();//Offset:Discovery.exe+0x2A1AC80
	class UPrefabricatorAsset* GetPrefabAsset();//Offset:Discovery.exe+0x2A1AC50
};


// Class PrefabricatorRuntime.ReplicablePrefabActor
// 0x0000 (0x02E8 - 0x02E8)
class AReplicablePrefabActor : public APrefabActor
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class PrefabricatorRuntime.ReplicablePrefabActor"));
		return ptr;
	}

};


// Class PrefabricatorRuntime.PrefabComponent
// 0x0030 (0x0300 - 0x02D0)
class UPrefabComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x02D0(0x0028) UNKNOWN PROPERTY: PrefabAssetInterface
	unsigned char                                      UnknownData01[0x8];                                       // 0x02F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class PrefabricatorRuntime.PrefabComponent"));
		return ptr;
	}

};


// Class PrefabricatorRuntime.PrefabDebugActor
// 0x0018 (0x02E0 - 0x02C8)
class APrefabDebugActor : public AActor
{
public:
	class AActor*                                      Actor;                                                    // 0x02C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              ActorData;                                                // 0x02D0(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class PrefabricatorRuntime.PrefabDebugActor"));
		return ptr;
	}

};


// Class PrefabricatorRuntime.PrefabRandomizer
// 0x0050 (0x0318 - 0x02C8)
class APrefabRandomizer : public AActor
{
public:
	bool                                               bRandomizeOnBeginPlay;                                    // 0x02C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02C9(0x0003) MISSED OFFSET
	int                                                SeedOffset;                                               // 0x02CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxBuildTimePerFrame;                                     // 0x02D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02D4(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnRandomizationComplete;                                  // 0x02D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bFastSyncBuild;                                           // 0x02E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x02E9(0x0007) MISSED OFFSET
	TArray<class APrefabActor*>                        ActorsToRandomize;                                        // 0x02F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData03[0x18];                                      // 0x0300(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class PrefabricatorRuntime.PrefabRandomizer"));
		return ptr;
	}


	void Randomize(int InSeed);//Offset:Discovery.exe+0x2A1B640
};


// Class PrefabricatorRuntime.PrefabricatorProperty
// 0x0048 (0x0070 - 0x0028)
class UPrefabricatorProperty : public UObject
{
public:
	struct FString                                     PropertyName;                                             // 0x0028(0x0010) (ZeroConstructor)
	struct FString                                     ExportedValue;                                            // 0x0038(0x0010) (ZeroConstructor)
	TArray<struct FPrefabricatorPropertyAssetMapping>  AssetSoftReferenceMappings;                               // 0x0048(0x0010) (ZeroConstructor)
	bool                                               bIsCrossReferencedActor;                                  // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0059(0x0003) MISSED OFFSET
	struct FGuid                                       CrossReferencePrefabActorId;                              // 0x005C(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x006C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class PrefabricatorRuntime.PrefabricatorProperty"));
		return ptr;
	}

};


// Class PrefabricatorRuntime.PrefabricatorEventListener
// 0x0000 (0x0028 - 0x0028)
class UPrefabricatorEventListener : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class PrefabricatorRuntime.PrefabricatorEventListener"));
		return ptr;
	}


	void PostSpawn(class APrefabActor* Prefab);//Offset:Discovery.exe+0x2A1BC70
};


// Class PrefabricatorRuntime.PrefabricatorAssetInterface
// 0x0010 (0x0038 - 0x0028)
class UPrefabricatorAssetInterface : public UObject
{
public:
	class UClass*                                      EventListener;                                            // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bReplicates;                                              // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class PrefabricatorRuntime.PrefabricatorAssetInterface"));
		return ptr;
	}

};


// Class PrefabricatorRuntime.PrefabricatorAsset
// 0x0038 (0x0070 - 0x0038)
class UPrefabricatorAsset : public UPrefabricatorAssetInterface
{
public:
	TArray<struct FPrefabricatorActorData>             ActorData;                                                // 0x0038(0x0010) (ZeroConstructor)
	TEnumAsByte<EComponentMobility>                    PrefabMobility;                                           // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	struct FGuid                                       LastUpdateID;                                             // 0x004C(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	class UThumbnailInfo*                              ThumbnailInfo;                                            // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           Version;                                                  // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x006C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class PrefabricatorRuntime.PrefabricatorAsset"));
		return ptr;
	}

};


// Class PrefabricatorRuntime.PrefabricatorAssetCollection
// 0x0018 (0x0050 - 0x0038)
class UPrefabricatorAssetCollection : public UPrefabricatorAssetInterface
{
public:
	TArray<struct FPrefabricatorAssetCollectionItem>   Prefabs;                                                  // 0x0038(0x0010) (Edit, ZeroConstructor)
	uint32_t                                           Version;                                                  // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class PrefabricatorRuntime.PrefabricatorAssetCollection"));
		return ptr;
	}

};


// Class PrefabricatorRuntime.PrefabricatorAssetUserData
// 0x0018 (0x0040 - 0x0028)
class UPrefabricatorAssetUserData : public UAssetUserData
{
public:
	TWeakObjectPtr<class APrefabActor>                 PrefabActor;                                              // 0x0028(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FGuid                                       ItemId;                                                   // 0x0030(0x0010) (Edit, ZeroConstructor, EditConst, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class PrefabricatorRuntime.PrefabricatorAssetUserData"));
		return ptr;
	}

};


// Class PrefabricatorRuntime.PrefabricatorBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UPrefabricatorBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class PrefabricatorRuntime.PrefabricatorBlueprintLibrary"));
		return ptr;
	}


	void STATIC_UnlinkPrefab(class APrefabActor* PrefabActor);//Offset:Discovery.exe+0x2A1C600
	class APrefabActor* STATIC_SpawnPrefab(class UObject* WorldContextObject, class UPrefabricatorAssetInterface* Prefab, const struct FTransform& Transform, int Seed);//Offset:Discovery.exe+0x2A1C780
	void STATIC_SetPrefabAsset(class APrefabActor* PrefabActor, class UPrefabricatorAssetInterface* Prefab, bool bReloadPrefab);//Offset:Discovery.exe+0x2A1C3D0
	void STATIC_RandomizePrefab(class APrefabActor* PrefabActor, const struct FRandomStream& InRandom);//Offset:Discovery.exe+0x2A1C690
	void STATIC_GetAllAttachedActors(class AActor* Prefab, TArray<class AActor*>* AttachedActors);//Offset:Discovery.exe+0x2A1C500
	class APrefabActor* STATIC_FindTopMostPrefabActor(class AActor* InActor);//Offset:Discovery.exe+0x2A1C330
};


// Class PrefabricatorRuntime.PrefabricatorSettings
// 0x0068 (0x00A0 - 0x0038)
class UPrefabricatorSettings : public UDeveloperSettings
{
public:
	enum class EPrefabricatorPivotPosition             PivotPosition;                                            // 0x0038(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bAllowDynamicUpdate;                                      // 0x0039(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x003A(0x0006) MISSED OFFSET
	unsigned char                                      UnknownData01[0x50];                                      // 0x003A(0x0050) UNKNOWN PROPERTY: IgnoreBoundingBoxForObjects
	float                                              DefaultThumbnailPitch;                                    // 0x0090(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              DefaultThumbnailYaw;                                      // 0x0094(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              DefaultThumbnailZoom;                                     // 0x0098(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x009C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class PrefabricatorRuntime.PrefabricatorSettings"));
		return ptr;
	}

};


// Class PrefabricatorRuntime.PrefabSeedLinkerComponent
// 0x0000 (0x02D0 - 0x02D0)
class UPrefabSeedLinkerComponent : public USceneComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class PrefabricatorRuntime.PrefabSeedLinkerComponent"));
		return ptr;
	}

};


// Class PrefabricatorRuntime.PrefabSeedLinker
// 0x0018 (0x02E0 - 0x02C8)
class APrefabSeedLinker : public AActor
{
public:
	TArray<TWeakObjectPtr<class APrefabActor>>         LinkedActors;                                             // 0x02C8(0x0010) (Edit, ZeroConstructor)
	class UPrefabSeedLinkerComponent*                  SeedLinkerComponent;                                      // 0x02D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class PrefabricatorRuntime.PrefabSeedLinker"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
