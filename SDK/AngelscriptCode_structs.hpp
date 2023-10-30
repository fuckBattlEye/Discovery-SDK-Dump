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

// Enum AngelscriptCode.EAngelscriptPropertyEditSpecifier
enum class EAngelscriptPropertyEditSpecifier : uint8_t
{
	EditAnywhere                   = 0,
	EditInstanceOnly               = 1,
	EditDefaultsOnly               = 2,
	NotEditable                    = 3,
	EAngelscriptPropertyEditSpecifier_MAX = 4
};


// Enum AngelscriptCode.EAngelscriptPropertyBlueprintSpecifier
enum class EAngelscriptPropertyBlueprintSpecifier : uint8_t
{
	BlueprintReadWrite             = 0,
	BlueprintReadOnly              = 1,
	BlueprintHidden                = 2,
	EAngelscriptPropertyBlueprintSpecifier_MAX = 3
};


// Enum AngelscriptCode.EAngelscriptMathNamespace
enum class EAngelscriptMathNamespace : uint8_t
{
	Math                           = 0,
	FMath                          = 1,
	EAngelscriptMathNamespace_MAX  = 2
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
