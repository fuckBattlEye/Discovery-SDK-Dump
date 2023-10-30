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

// Enum TimeManagement.EFrameNumberDisplayFormats
enum class EFrameNumberDisplayFormats : uint8_t
{
	NonDropFrameTimecode           = 0,
	DropFrameTimecode              = 1,
	Seconds                        = 2,
	Frames                         = 3,
	MAX_Count                      = 4,
	EFrameNumberDisplayFormats_MAX = 5
};


// Enum TimeManagement.ETimedDataInputEvaluationType
enum class ETimedDataInputEvaluationType : uint8_t
{
	None                           = 0,
	Timecode                       = 1,
	PlatformTime                   = 2,
	ETimedDataInputEvaluationType_MAX = 3
};


// Enum TimeManagement.ETimedDataInputState
enum class ETimedDataInputState : uint8_t
{
	Connected                      = 0,
	Unresponsive                   = 1,
	Disconnected                   = 2,
	ETimedDataInputState_MAX       = 3
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct TimeManagement.TimedDataChannelSampleTime
// 0x0018
struct FTimedDataChannelSampleTime
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct TimeManagement.TimedDataInputEvaluationData
// 0x0008
struct FTimedDataInputEvaluationData
{
	float                                              DistanceToNewestSampleSeconds;                            // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DistanceToOldestSampleSeconds;                            // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
