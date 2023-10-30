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

// Class EmbarkWeather.EmbarkNiagaraDataInterfaceWeather
// 0x0008 (0x0040 - 0x0038)
class UEmbarkNiagaraDataInterfaceWeather : public UNiagaraDataInterface
{
public:
	struct FGameplayTag                                WeatherTag;                                               // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkWeather.EmbarkNiagaraDataInterfaceWeather"));
		return ptr;
	}

};


// Class EmbarkWeather.EmbarkWeatherManager
// 0x0020 (0x02E8 - 0x02C8)
class AEmbarkWeatherManager : public AActor
{
public:
	struct FGameplayTagContainer                       WeatherTags;                                              // 0x02C8(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkWeather.EmbarkWeatherManager"));
		return ptr;
	}


	bool ShouldEffectBeActive(class UNiagaraSystem* NiagaraSystem);//Offset:Discovery.exe+0x1C495F0
	struct FGameplayTagContainer GetWeatherTags();//Offset:Discovery.exe+0x1C49690
};


// Class EmbarkWeather.EmbarkWeatherSubsystem
// 0x0008 (0x0038 - 0x0030)
class UEmbarkWeatherSubsystem : public UWorldSubsystem
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkWeather.EmbarkWeatherSubsystem"));
		return ptr;
	}


	class AEmbarkWeatherManager* GetWeatherManager();//Offset:Discovery.exe+0x1C499D0
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
