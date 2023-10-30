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

// ScriptStruct CustomMeshComponent.CustomMeshTriangle
// 0x0048
struct FCustomMeshTriangle
{
	struct FVector                                     Vertex0;                                                  // 0x0000(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Vertex1;                                                  // 0x0018(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Vertex2;                                                  // 0x0030(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
