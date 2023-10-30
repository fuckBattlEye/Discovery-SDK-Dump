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

// Enum ProceduralMeshComponent.EProcMeshSliceCapOption
enum class EProcMeshSliceCapOption : uint8_t
{
	NoCap                          = 0,
	CreateNewSectionForCap         = 1,
	UseLastSectionForCap           = 2,
	EProcMeshSliceCapOption_MAX    = 3
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ProceduralMeshComponent.ProcMeshTangent
// 0x0020
struct FProcMeshTangent
{
	struct FVector                                     TangentX;                                                 // 0x0000(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFlipTangentY;                                            // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct ProceduralMeshComponent.ProcMeshVertex
// 0x0098
struct FProcMeshVertex
{
	struct FVector                                     Position;                                                 // 0x0000(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Normal;                                                   // 0x0018(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FProcMeshTangent                            Tangent;                                                  // 0x0030(0x0020) (Edit, BlueprintVisible)
	struct FColor                                      Color;                                                    // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	struct FVector2D                                   UV0;                                                      // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   UV1;                                                      // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   UV2;                                                      // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   UV3;                                                      // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ProceduralMeshComponent.ProcMeshSection
// 0x0060
struct FProcMeshSection
{
	TArray<struct FProcMeshVertex>                     ProcVertexBuffer;                                         // 0x0000(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   ProcIndexBuffer;                                          // 0x0010(0x0010) (ZeroConstructor)
	struct FBox                                        SectionLocalBox;                                          // 0x0020(0x0038) (ZeroConstructor, IsPlainOldData)
	bool                                               bEnableCollision;                                         // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bSectionVisible;                                          // 0x0059(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x005A(0x0006) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
