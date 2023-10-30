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

// Enum TypedElementRuntime.ETypedElementChildInclusionMethod
enum class ETypedElementChildInclusionMethod : uint8_t
{
	None                           = 0,
	Immediate                      = 1,
	Recursive                      = 2,
	ETypedElementChildInclusionMethod_MAX = 3
};


// Enum TypedElementRuntime.ETypedElementSelectionMethod
enum class ETypedElementSelectionMethod : uint8_t
{
	Primary                        = 0,
	Secondary                      = 1,
	ETypedElementSelectionMethod_MAX = 2
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct TypedElementRuntime.TypedElementSelectionSetState
// 0x0018
struct FTypedElementSelectionSetState
{
	TWeakObjectPtr<class UTypedElementSelectionSet>    CreatedFromSelectionSet;                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct TypedElementRuntime.TypedElementSelectionOptions
// 0x0005
struct FTypedElementSelectionOptions
{
	bool                                               bAllowHidden;                                             // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowGroups;                                             // 0x0001(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowLegacyNotifications;                                // 0x0002(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bWarnIfLocked;                                            // 0x0003(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0004(0x0001) MISSED OFFSET
};

// ScriptStruct TypedElementRuntime.TypedElementIsSelectedOptions
// 0x0001
struct FTypedElementIsSelectedOptions
{
	bool                                               bAllowIndirect;                                           // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct TypedElementRuntime.TypedElementSelectionNormalizationOptions
// 0x0002
struct FTypedElementSelectionNormalizationOptions
{
	bool                                               bExpandGroups;                                            // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFollowAttachment;                                        // 0x0001(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
