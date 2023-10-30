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

// Enum ConstructionSystemRuntime.EConstructionSystemToolType
enum class EConstructionSystemToolType : uint8_t
{
	BuildTool                      = 0,
	RemoveTool                     = 1,
	EConstructionSystemToolType_MAX = 2
};


// Enum ConstructionSystemRuntime.EConstructionSystemCursorVisiblity
enum class EConstructionSystemCursorVisiblity : uint8_t
{
	Visible                        = 0,
	VisibleInvalid                 = 1,
	Hidden                         = 2,
	EConstructionSystemCursorVisiblity_MAX = 3
};


// Enum ConstructionSystemRuntime.EPrefabricatorConstructionSnapType
enum class EPrefabricatorConstructionSnapType : uint8_t
{
	Floor                          = 0,
	Wall                           = 1,
	Object                         = 2,
	EPrefabricatorConstructionSnapType_MAX = 3
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ConstructionSystemRuntime.ConstructionSystemSavePlayerInfo
// 0x0090
struct FConstructionSystemSavePlayerInfo
{
	bool                                               bRestorePlayerInfo;                                       // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0001(0x000F) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0010(0x0060) (IsPlainOldData)
	struct FRotator                                    ControlRotation;                                          // 0x0070(0x0018) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0088(0x0008) MISSED OFFSET
};

// ScriptStruct ConstructionSystemRuntime.ConstructionSystemSaveConstructedItem
// 0x0070
struct FConstructionSystemSaveConstructedItem
{
	class UPrefabricatorAssetInterface*                PrefabAsset;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                Seed;                                                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0010(0x0060) (IsPlainOldData)
};

// ScriptStruct ConstructionSystemRuntime.PCSnapConstraintFloor
// 0x0006
struct FPCSnapConstraintFloor
{
	bool                                               AttachX;                                                  // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AttachXNegative;                                          // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AttachY;                                                  // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AttachYNegative;                                          // 0x0003(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AttachZ;                                                  // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AttachZNegative;                                          // 0x0005(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConstructionSystemRuntime.PCSnapConstraintWall
// 0x0004
struct FPCSnapConstraintWall
{
	bool                                               AttachTop;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AttachBottom;                                             // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AttachLeft;                                               // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AttachRight;                                              // 0x0003(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConstructionSystemRuntime.ConstructionSystemUIPrefabEntry
// 0x0040
struct FConstructionSystemUIPrefabEntry
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       ToolTip;                                                  // 0x0018(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	class UTexture2D*                                  Icon;                                                     // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UPrefabricatorAssetInterface*                Prefab;                                                   // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConstructionSystemRuntime.ConstructionSystemUICategory
// 0x0030
struct FConstructionSystemUICategory
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	class UTexture2D*                                  Icon;                                                     // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FConstructionSystemUIPrefabEntry>    PrefabEntries;                                            // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
