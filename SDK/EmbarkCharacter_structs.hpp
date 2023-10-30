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

// ScriptStruct EmbarkCharacter.BasedMovementInfoBP
// 0x0048
struct FBasedMovementInfoBP
{
	class UPrimitiveComponent*                         MovementBase;                                             // 0x0000(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize100                      Location;                                                 // 0x0010(0x0018) (BlueprintVisible)
	struct FRotator                                    Rotation;                                                 // 0x0028(0x0018) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bServerHasBaseComponent;                                  // 0x0040(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRelativeLocation;                                        // 0x0041(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRelativeRotation;                                        // 0x0042(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bServerHasVelocity;                                       // 0x0043(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsBaseUnresolved;                                        // 0x0044(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
