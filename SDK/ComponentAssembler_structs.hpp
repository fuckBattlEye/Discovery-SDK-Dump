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

// Enum ComponentAssembler.EAssemblyNetworkMode
enum class EAssemblyNetworkMode : uint8_t
{
	OnlyCreateOnClient             = 0,
	OnlyCreateOnServer             = 1,
	CreateOnBothClientAndServer    = 2,
	CreateOnServerAndReplicateToClient = 3,
	EAssemblyNetworkMode_MAX       = 4
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
