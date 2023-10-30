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

// Enum CommonInput.ECommonInputType
enum class ECommonInputType : uint8_t
{
	MouseAndKeyboard               = 0,
	Gamepad                        = 1,
	Touch                          = 2,
	Count                          = 3,
	ECommonInputType_MAX           = 4
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct CommonInput.InputDeviceIdentifierPair
// 0x0018
struct FInputDeviceIdentifierPair
{
	struct FName                                       InputDeviceName;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     HardwareDeviceIdentifier;                                 // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct CommonInput.CommonInputKeyBrushConfiguration
// 0x00F0
struct FCommonInputKeyBrushConfiguration
{
	struct FKey                                        Key;                                                      // 0x0000(0x0018) (Edit)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
	struct FSlateBrush                                 KeyBrush;                                                 // 0x0020(0x00D0) (Edit)
};

// ScriptStruct CommonInput.CommonInputKeySetBrushConfiguration
// 0x00E0
struct FCommonInputKeySetBrushConfiguration
{
	TArray<struct FKey>                                Keys;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FSlateBrush                                 KeyBrush;                                                 // 0x0010(0x00D0) (Edit)
};

// ScriptStruct CommonInput.CommonInputPlatformBaseData
// 0x0038
struct FCommonInputPlatformBaseData
{
	unsigned char                                      UnknownData00[0x9];                                       // 0x0000(0x0009) MISSED OFFSET
	bool                                               bSupportsMouseAndKeyboard;                                // 0x0009(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSupportsGamepad;                                         // 0x000A(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x000B(0x0001) MISSED OFFSET
	struct FName                                       DefaultGamepadName;                                       // 0x000C(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCanChangeGamepadType;                                    // 0x0014(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSupportsTouch;                                           // 0x0015(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0016(0x0002) MISSED OFFSET
	unsigned char                                      UnknownData03[0x10];                                      // 0x0016(0x0010) UNKNOWN PROPERTY: ControllerData
	TArray<class UClass*>                              ControllerDataClasses;                                    // 0x0028(0x0010) (ZeroConstructor, Transient)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
