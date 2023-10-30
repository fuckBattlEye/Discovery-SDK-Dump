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

// Enum EmbarkCloth.EEmbarkWeightMapTarget
enum class EEmbarkWeightMapTarget : uint8_t
{
	None                           = 0,
	MaxDistance                    = 1,
	BackstopDistance               = 2,
	BackstopRadius                 = 3,
	AnimDriveStiffness             = 4,
	Frequency                      = 5,
	Damping                        = 6,
	Response                       = 7,
	EEmbarkWeightMapTarget_MAX     = 8
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EmbarkCloth.EmbarkClothWeightedValue
// 0x0008
struct FEmbarkClothWeightedValue
{
	float                                              Low;                                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              High;                                                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
