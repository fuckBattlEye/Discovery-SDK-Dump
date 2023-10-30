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

// Enum EmbarkStreaming.EEmbarkStreamingFilter
enum class EEmbarkStreamingFilter : uint8_t
{
	None                           = 0,
	Server                         = 1,
	Editor                         = 2,
	Commandlet                     = 3,
	EEmbarkStreamingFilter_MAX     = 4
};


// Enum EmbarkStreaming.EEmbarkStreamingFlushMode
enum class EEmbarkStreamingFlushMode : uint8_t
{
	KickRequests                   = 0,
	RunCallbacks                   = 1,
	EEmbarkStreamingFlushMode_MAX  = 2
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EmbarkStreaming.EmbarkStreamingBlockOnLoadScope
// 0x0010
struct FEmbarkStreamingBlockOnLoadScope
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct EmbarkStreaming.EmbarkStreamingDontBlockOnLoadScope
// 0x0010
struct FEmbarkStreamingDontBlockOnLoadScope
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
