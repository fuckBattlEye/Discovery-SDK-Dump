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

// Class EmbarkAudio.EmbarkAudioSpatializationSettings
// 0x0018 (0x0040 - 0x0028)
class UEmbarkAudioSpatializationSettings : public USpatializationPluginSourceSettingsBase
{
public:
	struct FEmbarkAudioSpatializationSourceSettings    Settings;                                                 // 0x0028(0x0008) (Edit)
	class USoundSubmix*                                TargetSubmix;                                             // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	enum class EEmbarkAudioSpeakerConfig               SpeakerConfiguration;                                     // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAudio.EmbarkAudioSpatializationSettings"));
		return ptr;
	}

};


// Class EmbarkAudio.EmbarkAudioFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UEmbarkAudioFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAudio.EmbarkAudioFunctionLibrary"));
		return ptr;
	}


	void STATIC_StopListeningForAudioDeviceDestroyed(class UObject* InObject);//Offset:Discovery.exe+0x193C530
	void STATIC_StopListeningForAudioDeviceCreated(class UObject* InObject);//Offset:Discovery.exe+0x193C720
	void STATIC_SetSubmixOutputVolumeForAudioDevice(uint32_t ID, class USoundSubmix* InSoundSubmix, float InOutputVolume);//Offset:Discovery.exe+0x193BFD0
	void STATIC_SetSoundMixClassOverrideForAudioDevice(uint32_t ID, class USoundMix* InSoundMixModifier, class USoundClass* InSoundClass, float Volume, float Pitch, float FadeInTime, bool bApplyToChildren);//Offset:Discovery.exe+0x193C2C0
	void STATIC_PushSoundMixModifierForAudioDevice(uint32_t ID, class USoundMix* InSoundMixModifier);//Offset:Discovery.exe+0x193C1E0
	void STATIC_PopSoundMixModifierForAudioDevice(uint32_t ID, class USoundMix* InSoundMixModifier);//Offset:Discovery.exe+0x193C100
	void STATIC_ListenForAudioDeviceDestroyed(class UObject* InObject, const struct FName& InFunctionName);//Offset:Discovery.exe+0x193C5E0
	void STATIC_ListenForAudioDeviceCreated(class UObject* InObject, const struct FName& InFunctionName);//Offset:Discovery.exe+0x193C7D0
	bool STATIC_IsWorldAudioMuted(class UWorld* World);//Offset:Discovery.exe+0x193CD00
	float STATIC_GetMaxDistance(class USoundBase* Sound);//Offset:Discovery.exe+0x193BBC0
	int STATIC_GetMaxChannelsForAudioDvice(uint32_t ID);//Offset:Discovery.exe+0x193BE60
	float STATIC_GetMappedRangeClampedCurve(const struct FVector2D& InRange, const struct FVector2D& OutRange, float Value, enum class EMapRangeCurve Curve, bool bInvertCurve);//Offset:Discovery.exe+0x193CA40
	struct FTransform STATIC_GetFirstListenerTransform(class UWorld* World);//Offset:Discovery.exe+0x193CDA0
	struct FVector STATIC_GetFirstListenerPosition(class UWorld* World);//Offset:Discovery.exe+0x193CE90
	float STATIC_GetDistanceToNearestListener(class UWorld* World, const struct FVector& Location);//Offset:Discovery.exe+0x193D030
	class AAudioVolume* STATIC_GetAudioVolume(class UWorld* World, const struct FVector& Location);//Offset:Discovery.exe+0x193BC90
	void STATIC_GetAudioDeviceIDs(TArray<uint32_t>* OutAudioDeviceIDs);//Offset:Discovery.exe+0x193BDB0
	float STATIC_GetActorDistanceToNearestListener(class AActor* InActor);//Offset:Discovery.exe+0x193CF40
	void STATIC_ClearSoundMix(class UWorld* World, class USoundMix* SoundMix);//Offset:Discovery.exe+0x193CC20
	void STATIC_BindToOnQueueSubtitles(class UAudioComponent* AudioComponent, class UObject* Object, const struct FName& FunctionName);//Offset:Discovery.exe+0x193C910
};


// Class EmbarkAudio.FEmbarkAudioParametersMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UFEmbarkAudioParametersMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAudio.FEmbarkAudioParametersMixinLibrary"));
		return ptr;
	}


	void STATIC_AddTrigger(const struct FName& InName, struct FEmbarkAudioParameters* Parameters);//Offset:Discovery.exe+0x193F950
	void STATIC_AddStringArray(const struct FName& InName, TArray<struct FString> InValue, struct FEmbarkAudioParameters* Parameters);//Offset:Discovery.exe+0x193DFC0
	void STATIC_AddString(const struct FName& InName, const struct FString& InValue, struct FEmbarkAudioParameters* Parameters);//Offset:Discovery.exe+0x193F060
	void STATIC_AddObjectArray(const struct FName& InName, TArray<class UObject*> InValue, struct FEmbarkAudioParameters* Parameters);//Offset:Discovery.exe+0x193DE30
	void STATIC_AddObject(const struct FName& InName, class UObject* InValue, struct FEmbarkAudioParameters* Parameters);//Offset:Discovery.exe+0x193EC60
	void STATIC_AddIntArray(const struct FName& InName, TArray<int> InValue, struct FEmbarkAudioParameters* Parameters);//Offset:Discovery.exe+0x193E320
	void STATIC_AddInt(const struct FName& InName, int InValue, struct FEmbarkAudioParameters* Parameters);//Offset:Discovery.exe+0x193F660
	void STATIC_AddFloatArray(const struct FName& InName, TArray<float> InValue, struct FEmbarkAudioParameters* Parameters);//Offset:Discovery.exe+0x193E190
	void STATIC_AddFloat(const struct FName& InName, float InValue, struct FEmbarkAudioParameters* Parameters);//Offset:Discovery.exe+0x193F4F0
	void STATIC_AddBoolArray(const struct FName& InName, TArray<bool> InValue, struct FEmbarkAudioParameters* Parameters);//Offset:Discovery.exe+0x193E7C0
	void STATIC_AddBool(const struct FName& InName, bool bInValue, struct FEmbarkAudioParameters* Parameters);//Offset:Discovery.exe+0x193F7D0
};


// Class EmbarkAudio.EmbarkAudioComponentMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UEmbarkAudioComponentMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAudio.EmbarkAudioComponentMixinLibrary"));
		return ptr;
	}


	void STATIC_SetTriggerParameter(class UAudioComponent* AudioComponent, const struct FName& InName);//Offset:Discovery.exe+0x1940EE0
	void STATIC_SetStringParameter(class UAudioComponent* AudioComponent, const struct FName& InName, const struct FString& InValue);//Offset:Discovery.exe+0x1940D80
	void STATIC_SetStringArrayParameter(class UAudioComponent* AudioComponent, const struct FName& InName, TArray<struct FString> InValue);//Offset:Discovery.exe+0x1940630
	void STATIC_SetParameters(class UAudioComponent* AudioComponent, struct FEmbarkAudioParameters* InParameters);//Offset:Discovery.exe+0x1940FF0
	void STATIC_SetObjectParameter(class UAudioComponent* AudioComponent, const struct FName& InName, class UObject* InValue);//Offset:Discovery.exe+0x1940C30
	void STATIC_SetObjectArrayParameter(class UAudioComponent* AudioComponent, const struct FName& InName, TArray<class UObject*> InValue);//Offset:Discovery.exe+0x19404C0
	void STATIC_SetIntArrayParameter(class UAudioComponent* AudioComponent, const struct FName& InName, TArray<int> InValue);//Offset:Discovery.exe+0x1940950
	void STATIC_SetFloatArrayParameter(class UAudioComponent* AudioComponent, const struct FName& InName, TArray<float> InValue);//Offset:Discovery.exe+0x19407E0
	void STATIC_SetBoolArrayParameter(class UAudioComponent* AudioComponent, const struct FName& InName, TArray<bool> InValue);//Offset:Discovery.exe+0x1940AC0
};


// Class EmbarkAudio.EmbarkAudioTickableObject
// 0x0010 (0x0038 - 0x0028)
class UEmbarkAudioTickableObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	bool                                               bIsInitialized;                                           // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAudio.EmbarkAudioTickableObject"));
		return ptr;
	}


	void OnTick(float DeltaSeconds);//Offset:Discovery.exe+0x327F8B0
};


// Class EmbarkAudio.SoundWaveCollection
// 0x0028 (0x0058 - 0x0030)
class USoundWaveCollection : public UDataAsset
{
public:
	TArray<class USoundWave*>                          SoundList;                                                // 0x0030(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0040(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAudio.SoundWaveCollection"));
		return ptr;
	}


	void RegisterCallback(class UObject* Object, const struct FName& FuncName);//Offset:Discovery.exe+0x1941A20
	class USoundWave* GetSoundWave(int RequestedIndex);//Offset:Discovery.exe+0x1941B00
};


// Class EmbarkAudio.SoundWeaponSynthComponent
// 0x0050 (0x0810 - 0x07C0)
class USoundWeaponSynthComponent : public USynthComponent
{
public:
	enum class EWeaponSynthFiringMode                  FiringMode;                                               // 0x07C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x07C1(0x0003) MISSED OFFSET
	float                                              RateOfFire;                                               // 0x07C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MasterAmplitude;                                          // 0x07C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PreFireDelayTime;                                         // 0x07CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DeactivationTime;                                         // 0x07D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bBypassVolumeScaleForPriority;                            // 0x07D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x07D5(0x0003) MISSED OFFSET
	float                                              Priority;                                                 // 0x07D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x34];                                      // 0x07DC(0x0034) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkAudio.SoundWeaponSynthComponent"));
		return ptr;
	}


	void StopFiring();//Offset:Discovery.exe+0x19424E0
	void StartFiring();//Offset:Discovery.exe+0x1942500
	void SetStayActive(bool bSetStayActive);//Offset:Discovery.exe+0x1941F00
	void SetSoundLayerSounds(int SoundLayerIndex, class USoundWaveCollection* Sounds);//Offset:Discovery.exe+0x1941FA0
	void SetSoundLayerParameters(int SoundLayerIndex, enum class EWeaponSynthSoundLayerType LayerType, float Amplitude, float Pitch, int Offset, bool bAlignWithEndOfShot);//Offset:Discovery.exe+0x19421B0
	void SetSoundLayerBurstEnvelope(int SoundLayerIndex, float AttackGain, float DecayTime);//Offset:Discovery.exe+0x1942080
	void PrepareSoundLayers(int NumSoundLayers, const struct FName& AssetDebugName);//Offset:Discovery.exe+0x19423D0
	bool IsSilent();//Offset:Discovery.exe+0x19424B0
	void IncrementShotsFiredExternal();//Offset:Discovery.exe+0x1941EE0
	float GetDistanceToListener();//Offset:Discovery.exe+0x1941EB0
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
