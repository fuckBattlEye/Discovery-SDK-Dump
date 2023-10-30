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

// Enum EmbarkOptionSystem.EEmbarkOptionExternalEvent
enum class EEmbarkOptionExternalEvent : uint8_t
{
	Unknown                        = 0,
	ConsoleVariableChanged         = 1,
	EEmbarkOptionExternalEvent_MAX = 2
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
