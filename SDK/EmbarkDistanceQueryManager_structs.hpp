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

// Enum EmbarkDistanceQueryManager.EEmbarkDistanceQueryCallbackFlags
enum class EEmbarkDistanceQueryCallbackFlags : uint8_t
{
	None                           = 0,
	Source                         = 1,
	Target                         = 2,
	SourceAndTarget                = 3,
	EEmbarkDistanceQueryCallbackFlags_MAX = 4
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EmbarkDistanceQueryManager.EmbarkDistanceQueryTickFunction
// 0x0008 (0x0030 - 0x0028)
struct FEmbarkDistanceQueryTickFunction : public FTickFunction
{
	class UEmbarkDistanceQueryManager*                 QueryManager;                                             // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmbarkDistanceQueryManager.EmbarkDistanceQueryKey
// 0x0018
struct FEmbarkDistanceQueryKey
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct EmbarkDistanceQueryManager.EmbarkDistanceQueryInfo
// 0x0048
struct FEmbarkDistanceQueryInfo
{
	struct FEmbarkDistanceQueryKey                     SourceKey;                                                // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FEmbarkDistanceQueryKey                     TargetKey;                                                // 0x0018(0x0018) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Source;                                                   // 0x0030(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Target;                                                   // 0x0038(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // 0x0040(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
