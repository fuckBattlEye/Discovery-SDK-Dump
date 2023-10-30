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

// Enum EmbarkTrace.EQueryResult
enum class EQueryResult : uint8_t
{
	GQB_Failed                     = 0,
	GQB_Miss                       = 1,
	GQB_Success                    = 2,
	GQB_MAX                        = 3
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EmbarkTrace.RayHitSimple
// 0x0050
struct FRayHitSimple
{
	struct FVector                                     Location;                                                 // 0x0000(0x0018) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CacheLocation;                                            // 0x0018(0x0018) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Normal;                                                   // 0x0030(0x0018) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsHit;                                                   // 0x0048(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
};

// ScriptStruct EmbarkTrace.EmbarkTraceLineSeg
// 0x0030
struct FEmbarkTraceLineSeg
{
	struct FVector                                     Start;                                                    // 0x0000(0x0018) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     End;                                                      // 0x0018(0x0018) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
