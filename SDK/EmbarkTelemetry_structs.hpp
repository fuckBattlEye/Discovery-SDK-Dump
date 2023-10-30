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

// Enum EmbarkTelemetry.EBackendGameTransformationNativeErrorCode
enum class EBackendGameTransformationNativeErrorCode : uint8_t
{
	Default                        = 0,
	BackendInvalidData             = 1,
	ThirdPartyInvalidData          = 2,
	EBackendGameTransformationNativeErrorCode_MAX = 3
};


// Enum EmbarkTelemetry.EBackendGameTransformationNativeDetailedInfo
enum class EBackendGameTransformationNativeDetailedInfo : uint8_t
{
	StoreOfferInvalidThirdPartyProductId = 0,
	CharacterItemMissingSkinSelection = 1,
	CharacterItemSelectedSkinDoesNotExist = 2,
	CharacterItemSelectedSchematicDoesNotExist = 3,
	StoreOfferNoCachedThirdPartyProduct = 4,
	EBackendGameTransformationNativeDetailedInfo_MAX = 5
};


// Enum EmbarkTelemetry.ETelemetryClientActivity
enum class ETelemetryClientActivity : uint8_t
{
	MainMenu                       = 0,
	Matchmaking                    = 1,
	InRound                        = 2,
	ETelemetryClientActivity_MAX   = 3
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
