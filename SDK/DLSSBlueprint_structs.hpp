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

// Enum DLSSBlueprint.UDLSSSupport
enum class EUDLSSSupport : uint8_t
{
	Supported                      = 0,
	NotSupported                   = 1,
	NotSupportedIncompatibleHardware = 2,
	NotSupportedDriverOutOfDate    = 3,
	NotSupportedOperatingSystemOutOfDate = 4,
	NotSupportedByPlatformAtBuildTime = 5,
	NotSupportedIncompatibleAPICaptureToolActive = 6,
	UDLSSSupport_MAX               = 7
};


// Enum DLSSBlueprint.UDLSSMode
enum class EUDLSSMode : uint8_t
{
	Off                            = 0,
	Auto                           = 1,
	UltraQuality                   = 2,
	Quality                        = 3,
	Balanced                       = 4,
	Performance                    = 5,
	UltraPerformance               = 6,
	UDLSSMode_MAX                  = 7
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
