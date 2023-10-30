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

// ScriptStruct EmbarkAnimationDebugRuntime.ActiveAnimInfo
// 0x0018
struct FActiveAnimInfo
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	float                                              Weight;                                                   // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PlayTime;                                                 // 0x0014(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
