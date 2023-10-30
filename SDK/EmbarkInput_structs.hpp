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

// Enum EmbarkInput.EEmbarkInputDevice
enum class EEmbarkInputDevice : uint8_t
{
	Unknown                        = 0,
	MouseAndKeyboard               = 1,
	Gamepad                        = 2,
	EEmbarkInputDevice_MAX         = 3
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
