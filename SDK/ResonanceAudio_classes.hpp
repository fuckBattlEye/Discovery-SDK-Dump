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

// Class ResonanceAudio.ResonanceAudioSoundfieldSettings
// 0x0008 (0x0030 - 0x0028)
class UResonanceAudioSoundfieldSettings : public USoundfieldEncodingSettingsBase
{
public:
	enum class EResonanceRenderMode                    RenderMode;                                               // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ResonanceAudio.ResonanceAudioSoundfieldSettings"));
		return ptr;
	}

};


// Class ResonanceAudio.ResonanceAudioBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UResonanceAudioBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ResonanceAudio.ResonanceAudioBlueprintFunctionLibrary"));
		return ptr;
	}


	void STATIC_SetGlobalReverbPreset(class UResonanceAudioReverbPluginPreset* InPreset);//Offset:Discovery.exe+0x2F306F0
	class UResonanceAudioReverbPluginPreset* STATIC_GetGlobalReverbPreset();//Offset:Discovery.exe+0x2F306C0
};


// Class ResonanceAudio.ResonanceAudioDirectivityVisualizer
// 0x0080 (0x0348 - 0x02C8)
class AResonanceAudioDirectivityVisualizer : public AActor
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x02C8(0x0070) MISSED OFFSET
	class UMaterial*                                   Material;                                                 // 0x0338(0x0008) (ZeroConstructor, IsPlainOldData)
	class UResonanceAudioSpatializationSourceSettings* Settings;                                                 // 0x0340(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ResonanceAudio.ResonanceAudioDirectivityVisualizer"));
		return ptr;
	}

};


// Class ResonanceAudio.ResonanceAudioReverbPluginPreset
// 0x0108 (0x0170 - 0x0068)
class UResonanceAudioReverbPluginPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0068(0x0098) MISSED OFFSET
	struct FResonanceAudioReverbPluginSettings         Settings;                                                 // 0x0100(0x0070) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ResonanceAudio.ResonanceAudioReverbPluginPreset"));
		return ptr;
	}


	void SetRoomRotation(const struct FQuat& InRotation);//Offset:Discovery.exe+0x2F31300
	void SetRoomPosition(const struct FVector& InPosition);//Offset:Discovery.exe+0x2F313A0
	void SetRoomMaterials(TArray<enum class ERaMaterialName> InMaterials);//Offset:Discovery.exe+0x2F311B0
	void SetRoomDimensions(const struct FVector& InDimensions);//Offset:Discovery.exe+0x2F31260
	void SetReverbTimeModifier(float InReverbTimeModifier);//Offset:Discovery.exe+0x2F30FD0
	void SetReverbGain(float InReverbGain);//Offset:Discovery.exe+0x2F31070
	void SetReverbBrightness(float InReverbBrightness);//Offset:Discovery.exe+0x2F30F30
	void SetReflectionScalar(float InReflectionScalar);//Offset:Discovery.exe+0x2F31110
	void SetEnableRoomEffects(bool bInEnableRoomEffects);//Offset:Discovery.exe+0x2F31440
};


// Class ResonanceAudio.ResonanceAudioSettings
// 0x0050 (0x0078 - 0x0028)
class UResonanceAudioSettings : public UObject
{
public:
	struct FSoftObjectPath                             OutputSubmix;                                             // 0x0028(0x0018) (Edit, ZeroConstructor, Config, GlobalConfig)
	enum class ERaQualityMode                          QualityMode;                                              // 0x0040(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	struct FSoftObjectPath                             GlobalReverbPreset;                                       // 0x0048(0x0018) (Edit, ZeroConstructor, Config, GlobalConfig)
	struct FSoftObjectPath                             GlobalSourcePreset;                                       // 0x0060(0x0018) (Edit, ZeroConstructor, Config, GlobalConfig)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ResonanceAudio.ResonanceAudioSettings"));
		return ptr;
	}

};


// Class ResonanceAudio.ResonanceAudioSpatializationSourceSettings
// 0x0028 (0x0050 - 0x0028)
class UResonanceAudioSpatializationSourceSettings : public USpatializationPluginSourceSettingsBase
{
public:
	enum class ERaSpatializationMethod                 SpatializationMethod;                                     // 0x0028(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	float                                              Pattern;                                                  // 0x002C(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	float                                              Sharpness;                                                // 0x0030(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bToggleVisualization;                                     // 0x0034(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	float                                              Scale;                                                    // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Spread;                                                   // 0x003C(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	enum class ERaDistanceRolloffModel                 Rolloff;                                                  // 0x0040(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	float                                              MinDistance;                                              // 0x0044(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	float                                              MaxDistance;                                              // 0x0048(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x004C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ResonanceAudio.ResonanceAudioSpatializationSourceSettings"));
		return ptr;
	}


	void SetSoundSourceSpread(float InSpread);//Offset:Discovery.exe+0x2F31CF0
	void SetSoundSourceDirectivity(float InPattern, float InSharpness);//Offset:Discovery.exe+0x2F31D90
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
