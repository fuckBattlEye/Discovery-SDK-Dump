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

// ScriptStruct OnlineSubsystemEmbark.EmbarkLinkingCode
// 0x0018
struct FEmbarkLinkingCode
{
	struct FString                                     Code;                                                     // 0x0000(0x0010) (ZeroConstructor)
	struct FDateTime                                   ExpiresAt;                                                // 0x0010(0x0008) (ZeroConstructor)
};

// ScriptStruct OnlineSubsystemEmbark.EmbarkRegionInfo
// 0x0030
struct FEmbarkRegionInfo
{
	struct FString                                     OnlineName;                                               // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FText                                       DisplayName;                                              // 0x0010(0x0018) (Edit)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
