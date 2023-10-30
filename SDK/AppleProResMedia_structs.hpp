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

// Enum AppleProResMedia.EAppleProResEncoderCodec
enum class EAppleProResEncoderCodec : uint8_t
{
	ProRes_422Proxy                = 0,
	ProRes_422LT                   = 1,
	ProRes_422                     = 2,
	ProRes_422HQ                   = 3,
	ProRes_4444                    = 4,
	ProRes_4444XQ                  = 5,
	ProRes_MAX                     = 6
};


// Enum AppleProResMedia.EAppleProResEncoderColorPrimaries
enum class EAppleProResEncoderColorPrimaries : uint8_t
{
	CD_SDREC601_525_60HZ           = 0,
	CD_SDREC601_625_50HZ           = 1,
	CD_HDREC709                    = 2,
	CD_MAX                         = 3
};


// Enum AppleProResMedia.EAppleProResEncoderScanMode
enum class EAppleProResEncoderScanMode : uint8_t
{
	IM_PROGRESSIVE_SCAN            = 0,
	IM_INTERLACED_TOP_FIELD_FIRST  = 1,
	IM_INTERLATED_BOTTOM_FIRST_FIRST = 2,
	IM_MAX                         = 3
};


// Enum AppleProResMedia.EAppleProResEncoderFormats
enum class EAppleProResEncoderFormats : uint8_t
{
	F_422HQ                        = 0,
	F_422                          = 1,
	F_422LT                        = 2,
	F_422Proxy                     = 3,
	F_4444                         = 4,
	F_4444XQ                       = 5,
	F_MAX                          = 6
};


// Enum AppleProResMedia.EAppleProResEncoderColorDescription
enum class EAppleProResEncoderColorDescription : uint8_t
{
	CD_SDREC601_525_60HZ           = 0,
	CD_SDREC601_625_50HZ           = 1,
	CD_HDREC709                    = 2,
	CD_MAX                         = 3
};


// Enum AppleProResMedia.EAppleProResEncoderScanType
enum class EAppleProResEncoderScanType : uint8_t
{
	IM_PROGRESSIVE_SCAN            = 0,
	IM_INTERLACED_TOP_FIELD_FIRST  = 1,
	IM_INTERLATED_BOTTOM_FIRST_FIRST = 2,
	IM_MAX                         = 3
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
