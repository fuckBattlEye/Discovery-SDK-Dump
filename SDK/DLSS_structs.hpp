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

// Enum DLSS.EDLSSSettingOverride
enum class EDLSSSettingOverride : uint8_t
{
	Enabled                        = 0,
	Disabled                       = 1,
	UseProjectSettings             = 2,
	EDLSSSettingOverride_MAX       = 3
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
