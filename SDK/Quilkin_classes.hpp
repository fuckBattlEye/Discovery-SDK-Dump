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

// Class Quilkin.QuilkinDeveloperSettings
// 0x0030 (0x0068 - 0x0038)
class UQuilkinDeveloperSettings : public UDeveloperSettings
{
public:
	TArray<unsigned char>                              RoutingToken;                                             // 0x0038(0x0010) (Edit, ZeroConstructor, Config)
	bool                                               Enabled;                                                  // 0x0048(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               EnabledInPie;                                             // 0x0049(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               MeasureEndpoints;                                         // 0x004A(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               UseEndpoints;                                             // 0x004B(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	uint64_t                                           JitterThreshold;                                          // 0x0050(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TArray<struct FQuilkinEndpoint>                    Endpoints;                                                // 0x0058(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Quilkin.QuilkinDeveloperSettings"));
		return ptr;
	}

};


// Class Quilkin.QuilkinConfigSubsystem
// 0x0108 (0x0138 - 0x0030)
class UQuilkinConfigSubsystem : public UEngineSubsystem
{
public:
	bool                                               PacketHandling;                                           // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xFF];                                      // 0x0031(0x00FF) MISSED OFFSET
	uint64_t                                           JitterThreshold;                                          // 0x0130(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Quilkin.QuilkinConfigSubsystem"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
