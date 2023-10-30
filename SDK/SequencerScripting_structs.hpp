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

// Enum SequencerScripting.ESequenceTimeUnit
enum class ESequenceTimeUnit : uint8_t
{
	DisplayRate                    = 0,
	TickResolution                 = 1,
	ESequenceTimeUnit_MAX          = 2
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SequencerScripting.SequencerBindingProxy
// 0x0018
struct FSequencerBindingProxy
{
	struct FGuid                                       BindingID;                                                // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	class UMovieSceneSequence*                         Sequence;                                                 // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SequencerScripting.SequencerScriptingRange
// 0x0014
struct FSequencerScriptingRange
{
	unsigned char                                      bHasStart : 1;                                            // 0x0000(0x0001) (BlueprintVisible)
	unsigned char                                      bHasEnd : 1;                                              // 0x0000(0x0001) (BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                InclusiveStart;                                           // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ExclusiveEnd;                                             // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FFrameRate                                  InternalRate;                                             // 0x000C(0x0008) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
