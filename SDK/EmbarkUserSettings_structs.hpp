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

// Enum EmbarkUserSettings.EResolutionScalingMethod
enum class EResolutionScalingMethod : uint8_t
{
	TAAU                           = 0,
	TSR                            = 1,
	DLSS                           = 2,
	FSR2                           = 3,
	XeSS                           = 4,
	Invalid                        = 5,
	EResolutionScalingMethod_MAX   = 6
};


// Enum EmbarkUserSettings.EDLSSModeOption
enum class EDLSSModeOption : uint8_t
{
	Off                            = 0,
	Auto                           = 1,
	UltraQuality                   = 2,
	Quality                        = 3,
	Balanced                       = 4,
	Performance                    = 5,
	UltraPerformance               = 6,
	DLAA                           = 7,
	EDLSSModeOption_MAX            = 8
};


// Enum EmbarkUserSettings.EFSR2Mode
enum class EFSR2Mode : uint8_t
{
	Off                            = 0,
	Quality                        = 1,
	Balanced                       = 2,
	Performance                    = 3,
	UltraPerformance               = 4,
	Count                          = 5,
	EFSR2Mode_MAX                  = 6
};


// Enum EmbarkUserSettings.ERTXGIQuality
enum class ERTXGIQuality : uint8_t
{
	Static                         = 0,
	DynamicLow                     = 1,
	DynamicMedium                  = 2,
	DynamicHigh                    = 3,
	DynamicEpic                    = 4,
	COUNT                          = 5,
	Invalid                        = 6,
	ERTXGIQuality_MAX              = 7
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EmbarkUserSettings.ScalabilityText
// 0x0078
struct FScalabilityText
{
	struct FText                                       LowScalabilityText;                                       // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       MediumScalabilityText;                                    // 0x0018(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       HighScalabilityText;                                      // 0x0030(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       EpicScalabilityText;                                      // 0x0048(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       CinematicScalabilityText;                                 // 0x0060(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
