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

// Enum EmbarkPubNub.EEmbarkPubNubMessageType
enum class EEmbarkPubNubMessageType : uint8_t
{
	Message                        = 0,
	Signal                         = 1,
	Objects                        = 2,
	MessageActions                 = 3,
	File                           = 4,
	EEmbarkPubNubMessageType_MAX   = 5
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
