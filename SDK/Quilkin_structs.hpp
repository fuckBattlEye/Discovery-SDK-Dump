#pragma once

//   SDK By:if

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace sdk
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Quilkin.QuilkinEndpoint
// 0x0028
struct FQuilkinEndpoint
{
	struct FString                                     Host;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor, Config)
	uint16_t                                           QcmpPort;                                                 // 0x0010(0x0002) (Edit, ZeroConstructor, Config, IsPlainOldData)
	uint16_t                                           TrafficPort;                                              // 0x0012(0x0002) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     Region;                                                   // 0x0018(0x0010) (Edit, ZeroConstructor, Config)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
