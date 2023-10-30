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

// Enum OnlineFrameworkEmbark.EBootToGameCompleteResult
enum class EBootToGameCompleteResult : uint8_t
{
	Success                        = 0,
	FindSessionFailure             = 1,
	SessionJoinFailure             = 2,
	PartyJoinFailure               = 3,
	EBootToGameCompleteResult_MAX  = 4
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
