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

// Class EmbarkFire.EmbarkFireDebugManager
// 0x0018 (0x0040 - 0x0028)
class UEmbarkFireDebugManager : public UObject
{
public:
	class UEmbarkFireObjectStorage*                    ObjectStorage;                                            // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEmbarkFireObjectGraph*                      ObjectGraph;                                              // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEmbarkFireSettings*                         EmbarkFireSettings;                                       // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkFire.EmbarkFireDebugManager"));
		return ptr;
	}

};


// Class EmbarkFire.EmbarkFireFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UEmbarkFireFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkFire.EmbarkFireFunctionLibrary"));
		return ptr;
	}


	void STATIC_UnregisterHandle_Server(class UObject* WorldContextObject, const struct FEmbarkFireObjectHandle& Handle);//Offset:Discovery.exe+0x1CEDDA0
	void STATIC_SetSphereLocation_Server(class UObject* WorldContextObject, const struct FEmbarkFireObjectHandle& Handle, const struct FVector& Location);//Offset:Discovery.exe+0x1CED8E0
	void STATIC_SetInstigator_Server(class UObject* WorldContextObject, const struct FEmbarkFireObjectHandle& Handle, const struct FInstigator& Instigator);//Offset:Discovery.exe+0x1CED770
	struct FEmbarkFireObjectHandle STATIC_RegisterObject_Server(class UObject* WorldContextObject, const struct FEmbarkFireObjectStateInitData& InitData);//Offset:Discovery.exe+0x1CEDE80
	bool STATIC_IsHandleValid(class UObject* WorldContextObject, const struct FEmbarkFireObjectHandle& Handle);//Offset:Discovery.exe+0x1CED690
	class UEmbarkFireSubsystem* STATIC_GetEmbarkFireSubsystem_Server(class UObject* WorldContextObject);//Offset:Discovery.exe+0x1CEE0D0
	void STATIC_EnableHandle_Server(class UObject* WorldContextObject, const struct FEmbarkFireObjectHandle& Handle);//Offset:Discovery.exe+0x1CEDCC0
	void STATIC_DisableHandle_Server(class UObject* WorldContextObject, const struct FEmbarkFireObjectHandle& Handle);//Offset:Discovery.exe+0x1CEDBE0
	void STATIC_AddHeat_Server(class UObject* WorldContextObject, const struct FEmbarkFireObjectHandle& Handle, float HeatToAdd, const struct FInstigator& Instigator);//Offset:Discovery.exe+0x1CEDA10
};


// Class EmbarkFire.EmbarkFireObjectGraphGroup_BurnableEnvironment
// 0x0000 (0x00B8 - 0x00B8)
class UEmbarkFireObjectGraphGroup_BurnableEnvironment : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkFire.EmbarkFireObjectGraphGroup_BurnableEnvironment"));
		return ptr;
	}

};


// Class EmbarkFire.EmbarkFireObjectGraphGroup_BurnableGameplayObjects
// 0x0000 (0x00B8 - 0x00B8)
class UEmbarkFireObjectGraphGroup_BurnableGameplayObjects : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkFire.EmbarkFireObjectGraphGroup_BurnableGameplayObjects"));
		return ptr;
	}

};


// Class EmbarkFire.EmbarkFireObjectGraphGroup_BurnablePlayer
// 0x0000 (0x00B8 - 0x00B8)
class UEmbarkFireObjectGraphGroup_BurnablePlayer : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkFire.EmbarkFireObjectGraphGroup_BurnablePlayer"));
		return ptr;
	}

};


// Class EmbarkFire.EmbarkFireObjectGraphGroup_HeatModifier
// 0x0000 (0x00B8 - 0x00B8)
class UEmbarkFireObjectGraphGroup_HeatModifier : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkFire.EmbarkFireObjectGraphGroup_HeatModifier"));
		return ptr;
	}

};


// Class EmbarkFire.EmbarkFireObjectGraphGroup_ActiveFire
// 0x0000 (0x00B8 - 0x00B8)
class UEmbarkFireObjectGraphGroup_ActiveFire : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkFire.EmbarkFireObjectGraphGroup_ActiveFire"));
		return ptr;
	}

};


// Class EmbarkFire.EmbarkFireObjectGraph
// 0x0130 (0x0158 - 0x0028)
class UEmbarkFireObjectGraph : public UObject
{
public:
	unsigned char                                      UnknownData00[0x110];                                     // 0x0028(0x0110) MISSED OFFSET
	class UEmbarkFireSubsystem*                        FireSubsystem;                                            // 0x0138(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEmbarkFireObjectStorage*                    ObjectStorage;                                            // 0x0140(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEmbarkDistanceQueryManager*                 DQM;                                                      // 0x0148(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0150(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkFire.EmbarkFireObjectGraph"));
		return ptr;
	}


	void OnDistanceQueryManagerData(const struct FEmbarkDistanceQueryInfo& Info, bool bOverlapping);//Offset:Discovery.exe+0x1CEED80
};


// Class EmbarkFire.EmbarkFireObjectStorage
// 0x0080 (0x00A8 - 0x0028)
class UEmbarkFireObjectStorage : public UObject
{
public:
	class UEmbarkFireSubsystem*                        FireSubsystem;                                            // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x78];                                      // 0x0030(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkFire.EmbarkFireObjectStorage"));
		return ptr;
	}

};


// Class EmbarkFire.EmbarkFireReplicationActor
// 0x0280 (0x0548 - 0x02C8)
class AEmbarkFireReplicationActor : public AActor
{
public:
	struct FReplicatedEmbarkFireStateFastArray         FireStateFastArray;                                       // 0x02C8(0x0178) (Net)
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0440(0x00F0) MISSED OFFSET
	class UEmbarkFireSubsystem*                        FireSubsystem;                                            // 0x0530(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEmbarkFireObjectStorage*                    ObjectStorage;                                            // 0x0538(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEmbarkFireEffectsDataAsset*                 FireEffectsDataAsset;                                     // 0x0540(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkFire.EmbarkFireReplicationActor"));
		return ptr;
	}

};


// Class EmbarkFire.EmbarkFireEffectsDataAsset
// 0x0128 (0x0158 - 0x0030)
class UEmbarkFireEffectsDataAsset : public UDataAsset
{
public:
	int                                                FXGridSize;                                               // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ActiveFireCountParameterName;                             // 0x0034(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ActiveFiresParameterName;                                 // 0x003C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       LocationsParameterName;                                   // 0x0044(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoundsParameterName;                                      // 0x004C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       IntensityParameterName;                                   // 0x0054(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FadeOutTime;                                              // 0x005C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFireSurfaceEffectSettings            DefaultSurfaceEffectSettings;                             // 0x0060(0x00A8) (Edit, BlueprintVisible, BlueprintReadOnly)
	TMap<TEnumAsByte<EPhysicalSurface>, struct FEmbarkFireSurfaceEffectSettings> PhysicalSurfaceEffectSettings;                            // 0x0108(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkFire.EmbarkFireEffectsDataAsset"));
		return ptr;
	}

};


// Class EmbarkFire.EmbarkFireSettings
// 0x0048 (0x0080 - 0x0038)
class UEmbarkFireSettings : public UDeveloperSettings
{
public:
	float                                              HeatTransferRate;                                         // 0x0038(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x003C(0x0028) UNKNOWN PROPERTY: FireEffectsDataAsset
	int                                                MaximumNumberOfIgnitedFires;                              // 0x0068(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                FiresToSimulatePerFrame;                                  // 0x006C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                FireEffectsToUpdatePerFrame;                              // 0x0070(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              DebugDrawDistanceFromCamera;                              // 0x0074(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              DebugDrawAngleFromCamera;                                 // 0x0078(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x007C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkFire.EmbarkFireSettings"));
		return ptr;
	}

};


// Class EmbarkFire.EmbarkFireSimulationManager
// 0x0020 (0x0048 - 0x0028)
class UEmbarkFireSimulationManager : public UObject
{
public:
	class UEmbarkFireSubsystem*                        FireSubsystem;                                            // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEmbarkFireObjectStorage*                    ObjectStorage;                                            // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEmbarkFireObjectGraph*                      ObjectGraph;                                              // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEmbarkFireSettings*                         EmbarkFireSettings;                                       // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkFire.EmbarkFireSimulationManager"));
		return ptr;
	}

};


// Class EmbarkFire.EmbarkFireSubsystem
// 0x0108 (0x0138 - 0x0030)
class UEmbarkFireSubsystem : public UWorldSubsystem
{
public:
	class UEmbarkFireObjectStorage*                    ObjectStorage;                                            // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEmbarkFireObjectGraph*                      ObjectGraph;                                              // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEmbarkFireSimulationManager*                SimulationManager;                                        // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEmbarkFireDebugManager*                     DebugManager;                                             // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	class AEmbarkFireReplicationActor*                 ReplicationActor;                                         // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0058(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkFire.EmbarkFireSubsystem"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
