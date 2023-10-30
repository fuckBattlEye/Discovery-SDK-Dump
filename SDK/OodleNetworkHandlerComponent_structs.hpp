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

// Enum OodleNetworkHandlerComponent.EOodleNetResult
enum class EOodleNetResult : uint8_t
{
	Unknown                        = 0,
	Success                        = 1,
	OodleDecodeFailed              = 2,
	OodleSerializePayloadFail      = 3,
	OodleBadDecompressedLength     = 4,
	OodleNoDictionary              = 5,
	EOodleNetResult_MAX            = 6
};


// Enum OodleNetworkHandlerComponent.EOodleNetworkEnableMode
enum class EOodleNetworkEnableMode : uint8_t
{
	AlwaysEnabled                  = 0,
	WhenCompressedPacketReceived   = 1,
	EOodleNetworkEnableMode_MAX    = 2
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
