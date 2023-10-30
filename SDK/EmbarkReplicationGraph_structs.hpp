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

// Enum EmbarkReplicationGraph.EClassReplicationPolicy
enum class EClassReplicationPolicy : uint8_t
{
	None                           = 0,
	AlwaysRelevant                 = 1,
	AlwaysRelevantPerConnection    = 2,
	SpatializeStatic               = 3,
	SpatializeDynamic              = 4,
	EClassReplicationPolicy_MAX    = 5
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EmbarkReplicationGraph.ConnectionAlwaysRelevantPair
// 0x0010
struct FConnectionAlwaysRelevantPair
{
	class UNetConnection*                              NetConnection;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UReplicationGraphNode_AlwaysRelevant_ForConnection* Node;                                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
