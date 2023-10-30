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

// ScriptStruct EmbarkFastReplicator.EmbarkFastReplicatorActorOrComponent
// 0x0010
struct FEmbarkFastReplicatorActorOrComponent
{
	class UObject*                                     Actor;                                                    // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UActorComponent*                             Component;                                                // 0x0008(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
};

// ScriptStruct EmbarkFastReplicator.EmbarkFastReplicatorRegisterToken
// 0x0004
struct FEmbarkFastReplicatorRegisterToken
{
	int                                                Key;                                                      // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct EmbarkFastReplicator.EmbarkFastArrayBase
// 0x0010 (0x0120 - 0x0110)
struct FEmbarkFastArrayBase : public FFastArraySerializer
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0110(0x0010) MISSED OFFSET
};

// ScriptStruct EmbarkFastReplicator.EmbarkFastArrayItemBase
// 0x0004 (0x0010 - 0x000C)
struct FEmbarkFastArrayItemBase : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct EmbarkFastReplicator.TestEmbarkFastArrayItemMockup
// 0x0010 (0x0020 - 0x0010)
struct FTestEmbarkFastArrayItemMockup : public FEmbarkFastArrayItemBase
{
	struct FEmbarkFastReplicatorActorOrComponent       Ref;                                                      // 0x0010(0x0010)
};

// ScriptStruct EmbarkFastReplicator.TestEmbarkFastArrayMockup
// 0x0010 (0x0130 - 0x0120)
struct FTestEmbarkFastArrayMockup : public FEmbarkFastArrayBase
{
	TArray<struct FTestEmbarkFastArrayItemMockup>      Items;                                                    // 0x0120(0x0010) (ZeroConstructor)
};

// ScriptStruct EmbarkFastReplicator.EmbarkFastArrayTransformItem
// 0x0078 (0x0088 - 0x0010)
struct FEmbarkFastArrayTransformItem : public FEmbarkFastArrayItemBase
{
	struct FEmbarkFastReplicatorActorOrComponent       Ref;                                                      // 0x0010(0x0010)
	struct FReplicatedTransform                        Transform;                                                // 0x0020(0x0068)
};

// ScriptStruct EmbarkFastReplicator.EmbarkFastArrayTransform
// 0x0010 (0x0130 - 0x0120)
struct FEmbarkFastArrayTransform : public FEmbarkFastArrayBase
{
	TArray<struct FEmbarkFastArrayTransformItem>       Items;                                                    // 0x0120(0x0010) (ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
