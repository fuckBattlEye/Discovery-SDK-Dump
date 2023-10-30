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

// Enum AndroidFileServer.EAFSActiveType
enum class EAFSActiveType : uint8_t
{
	None                           = 0,
	USBOnly                        = 1,
	NetworkOnly                    = 2,
	Combined                       = 3,
	EAFSActiveType_MAX             = 4
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
