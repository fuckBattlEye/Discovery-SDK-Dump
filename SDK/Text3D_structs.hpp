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

// Enum Text3D.EText3DBevelType
enum class EText3DBevelType : uint8_t
{
	Linear                         = 0,
	HalfCircle                     = 1,
	Convex                         = 2,
	Concave                        = 3,
	OneStep                        = 4,
	TwoSteps                       = 5,
	Engraved                       = 6,
	EText3DBevelType_MAX           = 7
};


// Enum Text3D.EText3DHorizontalTextAlignment
enum class EText3DHorizontalTextAlignment : uint8_t
{
	Left                           = 0,
	Center                         = 1,
	Right                          = 2,
	EText3DHorizontalTextAlignment_MAX = 3
};


// Enum Text3D.EText3DVerticalTextAlignment
enum class EText3DVerticalTextAlignment : uint8_t
{
	FirstLine                      = 0,
	Top                            = 1,
	Center                         = 2,
	Bottom                         = 3,
	EText3DVerticalTextAlignment_MAX = 4
};


// Enum Text3D.EText3DCharacterEffectOrder
enum class EText3DCharacterEffectOrder : uint8_t
{
	Normal                         = 0,
	FromCenter                     = 1,
	ToCenter                       = 2,
	Opposite                       = 3,
	EText3DCharacterEffectOrder_MAX = 4
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Text3D.CachedFontMeshes
// 0x0060
struct FCachedFontMeshes
{
	TMap<uint32_t, class UStaticMesh*>                 Glyphs;                                                   // 0x0000(0x0050)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0050(0x0010) MISSED OFFSET
};

// ScriptStruct Text3D.CachedFontData
// 0x00E8
struct FCachedFontData
{
	class UFont*                                       Font;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TMap<uint32_t, struct FCachedFontMeshes>           Meshes;                                                   // 0x0008(0x0050)
	unsigned char                                      UnknownData00[0x90];                                      // 0x0058(0x0090) MISSED OFFSET
};

// ScriptStruct Text3D.GlyphMeshParameters
// 0x0018
struct FGlyphMeshParameters
{
	float                                              Extrude;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Bevel;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) MISSED OFFSET
	int                                                BevelSegments;                                            // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bOutline;                                                 // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              OutlineExpand;                                            // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
