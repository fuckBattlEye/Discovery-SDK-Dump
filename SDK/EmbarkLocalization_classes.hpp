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

// Class EmbarkLocalization.EmbarkLocalizationSettings
// 0x0018 (0x0050 - 0x0038)
class UEmbarkLocalizationSettings : public UDeveloperSettings
{
public:
	class UEmbarkLocalizationSourceSet*                SourceSet;                                                // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FEmbarkLocalizationSourceConfig>     SourceConfigs;                                            // 0x0040(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkLocalization.EmbarkLocalizationSettings"));
		return ptr;
	}


	class UEmbarkLocalizationSettings* STATIC_Get();//Offset:Discovery.exe+0x1EDC690
};


// Class EmbarkLocalization.EmbarkLocalizationSourceSet
// 0x0010 (0x0038 - 0x0028)
class UEmbarkLocalizationSourceSet : public UObject
{
public:
	TArray<class UEmbarkLocalizationSource*>           Sources;                                                  // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkLocalization.EmbarkLocalizationSourceSet"));
		return ptr;
	}

};


// Class EmbarkLocalization.EmbarkLocalizationSource
// 0x0028 (0x0050 - 0x0028)
class UEmbarkLocalizationSource : public UObject
{
public:
	struct FEmbarkLocalizationSourceConfig             SourceConfig;                                             // 0x0028(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkLocalization.EmbarkLocalizationSource"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
