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

// Enum StreamlineBlueprint.UStreamlineDLSSGSupport
enum class EUStreamlineDLSSGSupport : uint8_t
{
	Supported                      = 0,
	NotSupported                   = 1,
	NotSupportedIncompatibleHardware = 2,
	NotSupportedDriverOutOfDate    = 3,
	NotSupportedOperatingSystemOutOfDate = 4,
	NotSupportedByPlatformAtBuildTime = 5,
	NotSupportedIncompatibleAPICaptureToolActive = 6,
	UStreamlineDLSSGSupport_MAX    = 7
};


// Enum StreamlineBlueprint.UStreamlineDLSSGMode
enum class EUStreamlineDLSSGMode : uint8_t
{
	Off                            = 0,
	On                             = 1,
	UStreamlineDLSSGMode_MAX       = 2
};


// Enum StreamlineBlueprint.UStreamlineReflexMode
enum class EUStreamlineReflexMode : uint8_t
{
	Disabled                       = 0,
	Enabled                        = 1,
	EnabledPlusBoost               = 2,
	UStreamlineReflexMode_MAX      = 3
};


// Enum StreamlineBlueprint.UStreamlineReflexSupport
enum class EUStreamlineReflexSupport : uint8_t
{
	Supported                      = 0,
	NotSupported                   = 1,
	UStreamlineReflexSupport_MAX   = 2
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
