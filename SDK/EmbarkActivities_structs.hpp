#pragma once

//   SDK By:if

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace sdk
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum EmbarkActivities.EMatchStatus
enum class EMatchStatus : uint8_t
{
	Invalid                        = 0,
	InProgress                     = 1,
	Paused                         = 2,
	Aborted                        = 3,
	Finished                       = 4,
	EMatchStatus_MAX               = 5
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EmbarkActivities.Score
// 0x0060
struct FScore
{
	int                                                Rank;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	double                                             Score;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TMap<struct FString, struct FString>               Stats;                                                    // 0x0010(0x0050) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
