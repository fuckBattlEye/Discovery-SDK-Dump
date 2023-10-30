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

// Enum AntiCheatCore.EAntiCheatClientActionReason
enum class EAntiCheatClientActionReason : uint8_t
{
	Invalid                        = 0,
	InternalError                  = 1,
	InvalidMessage                 = 2,
	AuthenticationFailed           = 3,
	NullClient                     = 4,
	HeartbeatTimeout               = 5,
	ClientViolation                = 6,
	BackendViolation               = 7,
	TemporaryCooldown              = 8,
	TemporaryBanned                = 9,
	PermanentBanned                = 10,
	EAntiCheatClientActionReason_MAX = 11
};


// Enum AntiCheatCore.EAntiCheatClientAction
enum class EAntiCheatClientAction : uint8_t
{
	Invalid                        = 0,
	RemovePlayer                   = 1,
	EAntiCheatClientAction_MAX     = 2
};


// Enum AntiCheatCore.EAntiCheatClientViolationType
enum class EAntiCheatClientViolationType : uint8_t
{
	Invalid                        = 0,
	IntegrityCatalogNotFound       = 1,
	IntegrityCatalogError          = 2,
	IntegrityCatalogCertificateRevoked = 3,
	IntegrityCatalogMissingMainExecutable = 4,
	GameFileMismatch               = 5,
	RequiredGameFileNotFound       = 6,
	UnknownGameFileForbidden       = 7,
	SystemFileUntrusted            = 8,
	ForbiddenModuleLoaded          = 9,
	CorruptedMemory                = 10,
	ForbiddenToolDetected          = 11,
	InternalAntiCheatViolation     = 12,
	CorruptedNetworkMessageFlow    = 13,
	VirtualMachineNotAllowed       = 14,
	ForbiddenSystemConfiguration   = 15,
	EAntiCheatClientViolationType_MAX = 16
};


// Enum AntiCheatCore.EAntiCheatClientAuthStatus
enum class EAntiCheatClientAuthStatus : uint8_t
{
	Invalid                        = 0,
	LocalAuthComplete              = 1,
	RemoteAuthComplete             = 2,
	EAntiCheatClientAuthStatus_MAX = 3
};


// Enum AntiCheatCore.EAntiCheatClientType
enum class EAntiCheatClientType : uint8_t
{
	ProtectedClient                = 0,
	UnprotectedClient              = 1,
	AIBot                          = 2,
	EAntiCheatClientType_MAX       = 3
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
