#pragma once

//   SDK By:if

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace sdk
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class CommonInput.CommonUIInputData
// 0x0020 (0x0048 - 0x0028)
class UCommonUIInputData : public UObject
{
public:
	struct FDataTableRowHandle                         DefaultClickAction;                                       // 0x0028(0x0010) (Edit, DisableEditOnInstance)
	struct FDataTableRowHandle                         DefaultBackAction;                                        // 0x0038(0x0010) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class CommonInput.CommonUIInputData"));
		return ptr;
	}

};


// Class CommonInput.CommonInputBaseControllerData
// 0x00D8 (0x0100 - 0x0028)
class UCommonInputBaseControllerData : public UObject
{
public:
	enum class ECommonInputType                        InputType;                                                // 0x0028(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	struct FName                                       GamepadName;                                              // 0x002C(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FText                                       GamepadDisplayName;                                       // 0x0038(0x0018) (Edit, DisableEditOnInstance)
	struct FText                                       GamepadCategory;                                          // 0x0050(0x0018) (Edit, DisableEditOnInstance)
	struct FText                                       GamepadPlatformName;                                      // 0x0068(0x0018) (Edit, DisableEditOnInstance)
	TArray<struct FInputDeviceIdentifierPair>          GamepadHardwareIdMapping;                                 // 0x0080(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x28];                                      // 0x0090(0x0028) UNKNOWN PROPERTY: ControllerTexture
	unsigned char                                      UnknownData03[0x28];                                      // 0x00B8(0x0028) UNKNOWN PROPERTY: ControllerButtonMaskTexture
	TArray<struct FCommonInputKeyBrushConfiguration>   InputBrushDataMap;                                        // 0x00E0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FCommonInputKeySetBrushConfiguration> InputBrushKeySets;                                        // 0x00F0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class CommonInput.CommonInputBaseControllerData"));
		return ptr;
	}


	TArray<struct FName> STATIC_GetRegisteredGamepads();//Offset:Discovery.exe+0x251DD20
};


// Class CommonInput.CommonInputPlatformSettings
// 0x0030 (0x0070 - 0x0040)
class UCommonInputPlatformSettings : public UPlatformSettings
{
public:
	enum class ECommonInputType                        DefaultInputType;                                         // 0x0040(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bSupportsMouseAndKeyboard;                                // 0x0041(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bSupportsTouch;                                           // 0x0042(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bSupportsGamepad;                                         // 0x0043(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FName                                       DefaultGamepadName;                                       // 0x0044(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bCanChangeGamepadType;                                    // 0x004C(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
	unsigned char                                      UnknownData01[0x10];                                      // 0x004D(0x0010) UNKNOWN PROPERTY: ControllerData
	TArray<class UClass*>                              ControllerDataClasses;                                    // 0x0060(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class CommonInput.CommonInputPlatformSettings"));
		return ptr;
	}

};


// Class CommonInput.CommonInputSettings
// 0x00B0 (0x00E8 - 0x0038)
class UCommonInputSettings : public UDeveloperSettings
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0038(0x0028) UNKNOWN PROPERTY: InputData
	struct FPerPlatformSettings                        PlatformInput;                                            // 0x0060(0x0010) (Edit)
	TMap<struct FName, struct FCommonInputPlatformBaseData> CommonInputPlatformData;                                  // 0x0070(0x0050) (Config, Deprecated)
	bool                                               bEnableInputMethodThrashingProtection;                    // 0x00C0(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00C1(0x0003) MISSED OFFSET
	int                                                InputMethodThrashingLimit;                                // 0x00C4(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	double                                             InputMethodThrashingWindowInSeconds;                      // 0x00C8(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
	double                                             InputMethodThrashingCooldownInSeconds;                    // 0x00D0(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bAllowOutOfFocusDeviceInput;                              // 0x00D8(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00D9(0x0007) MISSED OFFSET
	class UClass*                                      InputDataClass;                                           // 0x00E0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class CommonInput.CommonInputSettings"));
		return ptr;
	}

};


// Class CommonInput.CommonInputSubsystem
// 0x00D0 (0x0100 - 0x0030)
class UCommonInputSubsystem : public ULocalPlayerSubsystem
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0030(0x0028) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnInputMethodChanged;                                     // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	int                                                NumberOfInputMethodChangesRecently;                       // 0x0068(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	double                                             LastInputMethodChangeTime;                                // 0x0070(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	double                                             LastTimeInputMethodThrashingBegan;                        // 0x0078(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	enum class ECommonInputType                        LastInputType;                                            // 0x0080(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	enum class ECommonInputType                        CurrentInputType;                                         // 0x0081(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0082(0x0002) MISSED OFFSET
	struct FName                                       GamepadInputType;                                         // 0x0084(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	TMap<struct FName, enum class ECommonInputType>    CurrentInputLocks;                                        // 0x0090(0x0050) (Transient)
	unsigned char                                      UnknownData04[0x18];                                      // 0x00E0(0x0018) MISSED OFFSET
	bool                                               bIsGamepadSimulatedClick;                                 // 0x00F8(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x00F9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class CommonInput.CommonInputSubsystem"));
		return ptr;
	}


	bool TryGetInputBrush(const struct FKey& Key, enum class ECommonInputType InputType, const struct FName& GamepadName, struct FSlateBrush* OutBrush);//Offset:Discovery.exe+0x251E480
	void TryGetGamepadTexture(const struct FName& GamepadName);//Offset:Discovery.exe+0x251E370
	bool ShouldShowInputKeys();//Offset:Discovery.exe+0x251E6B0
	void SetGamepadInputType(const struct FName& InGamepadInputType);//Offset:Discovery.exe+0x251E710
	void SetCurrentInputType(enum class ECommonInputType NewInputType);//Offset:Discovery.exe+0x251E800
	bool IsUsingPointerInput();//Offset:Discovery.exe+0x251E6E0
	bool IsInputMethodActive(enum class ECommonInputType InputMethod);//Offset:Discovery.exe+0x251E8F0
	enum class ECommonInputType GetDefaultInputType();//Offset:Discovery.exe+0x251E890
	enum class ECommonInputType GetCurrentInputType();//Offset:Discovery.exe+0x251E8C0
	struct FName GetCurrentGamepadName();//Offset:Discovery.exe+0x251E7B0
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
