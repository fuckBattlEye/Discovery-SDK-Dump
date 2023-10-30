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

// Enum AESGCMHandlerComponent.EAESGCMNetResult
enum class EAESGCMNetResult : uint8_t
{
	Unknown                        = 0,
	Success                        = 1,
	AESMissingIV                   = 2,
	AESMissingAuthTag              = 3,
	AESMissingPayload              = 4,
	AESDecryptionFailed            = 5,
	AESZeroLastByte                = 6,
	EAESGCMNetResult_MAX           = 7
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
