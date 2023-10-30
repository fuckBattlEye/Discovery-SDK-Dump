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

// Enum XeSSBlueprint.EXeSSQualityMode
enum class EXeSSQualityMode : uint8_t
{
	Off                            = 0,
	Performance                    = 1,
	Balanced                       = 2,
	Quality                        = 3,
	UltraQuality                   = 4,
	EXeSSQualityMode_MAX           = 5
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
