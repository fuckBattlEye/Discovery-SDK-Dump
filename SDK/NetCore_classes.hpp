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

// Class NetCore.StatePerObjectConfig
// 0x0040 (0x0068 - 0x0028)
class UStatePerObjectConfig : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET
	struct FString                                     PerObjectConfigSection;                                   // 0x0050(0x0010) (ZeroConstructor)
	bool                                               bEnabled;                                                 // 0x0060(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0061(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class NetCore.StatePerObjectConfig"));
		return ptr;
	}

};


// Class NetCore.EscalationManagerConfig
// 0x0020 (0x0088 - 0x0068)
class UEscalationManagerConfig : public UStatePerObjectConfig
{
public:
	TArray<struct FString>                             EscalationSeverity;                                       // 0x0068(0x0010) (ZeroConstructor, Config)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0078(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class NetCore.EscalationManagerConfig"));
		return ptr;
	}

};


// Class NetCore.NetAnalyticsAggregatorConfig
// 0x0010 (0x0038 - 0x0028)
class UNetAnalyticsAggregatorConfig : public UObject
{
public:
	TArray<struct FNetAnalyticsDataConfig>             NetAnalyticsData;                                         // 0x0028(0x0010) (ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class NetCore.NetAnalyticsAggregatorConfig"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
