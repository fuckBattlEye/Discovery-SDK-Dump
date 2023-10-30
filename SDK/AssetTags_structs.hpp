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

// Enum AssetTags.ECollectionScriptingShareType
enum class ECollectionScriptingShareType : uint8_t
{
	Local                          = 0,
	Private                        = 1,
	Shared                         = 2,
	ECollectionScriptingShareType_MAX = 3
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
