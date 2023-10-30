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

// Enum EmbarkSoundCueNodes.EEmbarkModulatorParameterOperation
enum class EEmbarkModulatorParameterOperation : uint8_t
{
	Multiply                       = 0,
	Add                            = 1,
	Min                            = 2,
	Max                            = 3
};


// Enum EmbarkSoundCueNodes.EEmbarkModulatorParameterMode
enum class EEmbarkModulatorParameterMode : uint8_t
{
	Name                           = 0,
	GameplayTag                    = 1,
	Distance                       = 2,
	Velocity                       = 3,
	Azimuth                        = 4,
	IsOccluded                     = 5,
	RotationTowardsListener        = 6,
	EEmbarkModulatorParameterMode_MAX = 7
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EmbarkSoundCueNodes.EmbarkModulatorParams
// 0x0040
struct FEmbarkModulatorParams
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	struct FName                                       ParameterName;                                            // 0x0004(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                ParameterTag;                                             // 0x000C(0x0008) (Edit)
	float                                              Default;                                                  // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   InputRange;                                               // 0x0018(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   OutputRange;                                              // 0x0028(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0038(0x0001) MISSED OFFSET
	bool                                               bInvertCurve;                                             // 0x0039(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x003A(0x0006) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
