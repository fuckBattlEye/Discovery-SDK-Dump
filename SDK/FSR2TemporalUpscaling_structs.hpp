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

// Enum FSR2TemporalUpscaling.EFSR2QualityMode
enum class EFSR2QualityMode : uint8_t
{
	Unused                         = 0,
	Quality                        = 1,
	Balanced                       = 2,
	Performance                    = 3,
	UltraPerformance               = 4,
	EFSR2QualityMode_MAX           = 5
};


// Enum FSR2TemporalUpscaling.EFSR2HistoryFormat
enum class EFSR2HistoryFormat : uint8_t
{
	FloatRGBA                      = 0,
	FloatR11G11B10                 = 1,
	EFSR2HistoryFormat_MAX         = 2
};


// Enum FSR2TemporalUpscaling.EFSR2DeDitherMode
enum class EFSR2DeDitherMode : uint8_t
{
	Off                            = 0,
	Full                           = 1,
	HairOnly                       = 2,
	EFSR2DeDitherMode_MAX          = 3
};


// Enum FSR2TemporalUpscaling.EFSR2LandscapeHISMMode
enum class EFSR2LandscapeHISMMode : uint8_t
{
	Off                            = 0,
	AllStatic                      = 1,
	StaticWPO                      = 2,
	EFSR2LandscapeHISMMode_MAX     = 3
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
