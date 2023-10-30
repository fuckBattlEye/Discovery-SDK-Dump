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

// Class AudioModulation.AudioModulationSettings
// 0x0010 (0x0048 - 0x0038)
class UAudioModulationSettings : public UDeveloperSettings
{
public:
	TArray<struct FSoftObjectPath>                     Parameters;                                               // 0x0038(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AudioModulation.AudioModulationSettings"));
		return ptr;
	}

};


// Class AudioModulation.AudioModulationStatics
// 0x0000 (0x0028 - 0x0028)
class UAudioModulationStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AudioModulation.AudioModulationStatics"));
		return ptr;
	}


	void STATIC_UpdateModulator(class UObject* WorldContextObject, class USoundModulatorBase* Modulator);//Offset:Discovery.exe+0x2EC6750
	void STATIC_UpdateMixFromObject(class UObject* WorldContextObject, class USoundControlBusMix* Mix, float FadeTime);//Offset:Discovery.exe+0x2EC6830
	void STATIC_UpdateMixByFilter(class UObject* WorldContextObject, class USoundControlBusMix* Mix, const struct FString& AddressFilter, class UClass* ParamClassFilter, class USoundModulationParameter* ParamFilter, float Value, float FadeTime);//Offset:Discovery.exe+0x2EC6960
	void STATIC_UpdateMix(class UObject* WorldContextObject, class USoundControlBusMix* Mix, TArray<struct FSoundControlBusMixStage> Stages, float FadeTime);//Offset:Discovery.exe+0x2EC6FE0
	void STATIC_SetGlobalBusMixValue(class UObject* WorldContextObject, class USoundControlBus* Bus, float Value, float FadeTime);//Offset:Discovery.exe+0x2EC6E70
	void STATIC_SaveMixToProfile(class UObject* WorldContextObject, class USoundControlBusMix* Mix, int ProfileIndex);//Offset:Discovery.exe+0x2EC7380
	TArray<struct FSoundControlBusMixStage> STATIC_LoadMixFromProfile(class UObject* WorldContextObject, class USoundControlBusMix* Mix, bool bActivate, int ProfileIndex);//Offset:Discovery.exe+0x2EC71C0
	void STATIC_DeactivateGenerator(class UObject* WorldContextObject, class USoundModulationGenerator* Generator);//Offset:Discovery.exe+0x2EC74B0
	void STATIC_DeactivateBusMix(class UObject* WorldContextObject, class USoundControlBusMix* Mix);//Offset:Discovery.exe+0x2EC7590
	void STATIC_DeactivateBus(class UObject* WorldContextObject, class USoundControlBus* Bus);//Offset:Discovery.exe+0x2EC7670
	struct FSoundControlBusMixStage STATIC_CreateBusMixStage(class UObject* WorldContextObject, class USoundControlBus* Bus, float Value, float AttackTime, float ReleaseTime);//Offset:Discovery.exe+0x2EC7930
	class USoundControlBusMix* STATIC_CreateBusMix(class UObject* WorldContextObject, const struct FName& Name, TArray<struct FSoundControlBusMixStage> Stages, bool Activate);//Offset:Discovery.exe+0x2EC7750
	class USoundControlBus* STATIC_CreateBus(class UObject* WorldContextObject, const struct FName& Name, class USoundModulationParameter* Parameter, bool Activate);//Offset:Discovery.exe+0x2EC7B30
	void STATIC_ClearGlobalBusMixValue(class UObject* WorldContextObject, class USoundControlBus* Bus, float FadeTime);//Offset:Discovery.exe+0x2EC6D40
	void STATIC_ClearAllGlobalBusMixValues(class UObject* WorldContextObject, float FadeTime);//Offset:Discovery.exe+0x2EC6C60
	void STATIC_ActivateGenerator(class UObject* WorldContextObject, class USoundModulationGenerator* Generator);//Offset:Discovery.exe+0x2EC7CB0
	void STATIC_ActivateBusMix(class UObject* WorldContextObject, class USoundControlBusMix* Mix);//Offset:Discovery.exe+0x2EC7D90
	void STATIC_ActivateBus(class UObject* WorldContextObject, class USoundControlBus* Bus);//Offset:Discovery.exe+0x2EC7E70
};


// Class AudioModulation.AudioModulationStyle
// 0x0000 (0x0028 - 0x0028)
class UAudioModulationStyle : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AudioModulation.AudioModulationStyle"));
		return ptr;
	}


	struct FColor STATIC_GetPatchColor();//Offset:Discovery.exe+0x2EC8DD0
	struct FColor STATIC_GetParameterColor();//Offset:Discovery.exe+0x2EC8DA0
	struct FColor STATIC_GetModulationGeneratorColor();//Offset:Discovery.exe+0x2EC8E60
	struct FColor STATIC_GetControlBusMixColor();//Offset:Discovery.exe+0x2EC8E00
	struct FColor STATIC_GetControlBusColor();//Offset:Discovery.exe+0x2EC8E30
};


// Class AudioModulation.SoundControlBus
// 0x0030 (0x0060 - 0x0030)
class USoundControlBus : public USoundModulatorBase
{
public:
	bool                                               bBypass;                                                  // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	struct FString                                     Address;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class USoundModulationGenerator*>           Generators;                                               // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USoundModulationParameter*                   Parameter;                                                // 0x0058(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AudioModulation.SoundControlBus"));
		return ptr;
	}

};


// Class AudioModulation.SoundControlBusMix
// 0x0018 (0x0040 - 0x0028)
class USoundControlBusMix : public UObject
{
public:
	uint32_t                                           ProfileIndex;                                             // 0x0028(0x0004) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	TArray<struct FSoundControlBusMixStage>            MixStages;                                                // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AudioModulation.SoundControlBusMix"));
		return ptr;
	}


	void SoloMix();//Offset:Discovery.exe+0x2EC9460
	void SaveMixToProfile();//Offset:Discovery.exe+0x2EC9480
	void LoadMixFromProfile();//Offset:Discovery.exe+0x2EC94A0
	void DeactivateMix();//Offset:Discovery.exe+0x2EC9420
	void DeactivateAllMixes();//Offset:Discovery.exe+0x2EC9400
	void ActivateMix();//Offset:Discovery.exe+0x2EC9440
};


// Class AudioModulation.SoundModulationGenerator
// 0x0000 (0x0030 - 0x0030)
class USoundModulationGenerator : public USoundModulatorBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AudioModulation.SoundModulationGenerator"));
		return ptr;
	}

};


// Class AudioModulation.SoundModulationGeneratorEnvelopeFollower
// 0x0020 (0x0050 - 0x0030)
class USoundModulationGeneratorEnvelopeFollower : public USoundModulationGenerator
{
public:
	struct FEnvelopeFollowerGeneratorParams            Params;                                                   // 0x0030(0x0020) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AudioModulation.SoundModulationGeneratorEnvelopeFollower"));
		return ptr;
	}

};


// Class AudioModulation.SoundModulationGeneratorLFO
// 0x0018 (0x0048 - 0x0030)
class USoundModulationGeneratorLFO : public USoundModulationGenerator
{
public:
	struct FSoundModulationLFOParams                   Params;                                                   // 0x0030(0x0014) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AudioModulation.SoundModulationGeneratorLFO"));
		return ptr;
	}

};


// Class AudioModulation.SoundModulationParameter
// 0x0010 (0x0038 - 0x0028)
class USoundModulationParameter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FSoundModulationParameterSettings           Settings;                                                 // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AudioModulation.SoundModulationParameter"));
		return ptr;
	}

};


// Class AudioModulation.SoundModulationParameterScaled
// 0x0008 (0x0040 - 0x0038)
class USoundModulationParameterScaled : public USoundModulationParameter
{
public:
	float                                              UnitMin;                                                  // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              UnitMax;                                                  // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AudioModulation.SoundModulationParameterScaled"));
		return ptr;
	}

};


// Class AudioModulation.SoundModulationParameterFrequencyBase
// 0x0000 (0x0038 - 0x0038)
class USoundModulationParameterFrequencyBase : public USoundModulationParameter
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AudioModulation.SoundModulationParameterFrequencyBase"));
		return ptr;
	}

};


// Class AudioModulation.SoundModulationParameterFrequency
// 0x0008 (0x0040 - 0x0038)
class USoundModulationParameterFrequency : public USoundModulationParameterFrequencyBase
{
public:
	float                                              UnitMin;                                                  // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              UnitMax;                                                  // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AudioModulation.SoundModulationParameterFrequency"));
		return ptr;
	}

};


// Class AudioModulation.SoundModulationParameterFilterFrequency
// 0x0000 (0x0038 - 0x0038)
class USoundModulationParameterFilterFrequency : public USoundModulationParameterFrequencyBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AudioModulation.SoundModulationParameterFilterFrequency"));
		return ptr;
	}

};


// Class AudioModulation.SoundModulationParameterLPFFrequency
// 0x0000 (0x0038 - 0x0038)
class USoundModulationParameterLPFFrequency : public USoundModulationParameterFilterFrequency
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AudioModulation.SoundModulationParameterLPFFrequency"));
		return ptr;
	}

};


// Class AudioModulation.SoundModulationParameterHPFFrequency
// 0x0000 (0x0038 - 0x0038)
class USoundModulationParameterHPFFrequency : public USoundModulationParameterFilterFrequency
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AudioModulation.SoundModulationParameterHPFFrequency"));
		return ptr;
	}

};


// Class AudioModulation.SoundModulationParameterBipolar
// 0x0008 (0x0040 - 0x0038)
class USoundModulationParameterBipolar : public USoundModulationParameter
{
public:
	float                                              UnitRange;                                                // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AudioModulation.SoundModulationParameterBipolar"));
		return ptr;
	}

};


// Class AudioModulation.SoundModulationParameterVolume
// 0x0008 (0x0040 - 0x0038)
class USoundModulationParameterVolume : public USoundModulationParameter
{
public:
	float                                              MinVolume;                                                // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AudioModulation.SoundModulationParameterVolume"));
		return ptr;
	}

};


// Class AudioModulation.SoundModulationPatch
// 0x0020 (0x0050 - 0x0030)
class USoundModulationPatch : public USoundModulatorBase
{
public:
	struct FSoundControlModulationPatch                PatchSettings;                                            // 0x0030(0x0020) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AudioModulation.SoundModulationPatch"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
