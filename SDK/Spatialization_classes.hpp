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

// Class Spatialization.ITDSpatializationSourceSettings
// 0x0090 (0x00B8 - 0x0028)
class UITDSpatializationSourceSettings : public USpatializationPluginSourceSettingsBase
{
public:
	bool                                               bEnableILD;                                               // 0x0028(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FRuntimeFloatCurve                          PanningIntensityOverDistance;                             // 0x0030(0x0088) (Edit, BlueprintVisible, Config, GlobalConfig)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Spatialization.ITDSpatializationSourceSettings"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
