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

// Class EmbarkInput.EmbarkAnalogCursorSubsystem
// 0x0010 (0x0040 - 0x0030)
class UEmbarkAnalogCursorSubsystem : public ULocalPlayerSubsystem
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkInput.EmbarkAnalogCursorSubsystem"));
		return ptr;
	}


	class UEmbarkAnalogCursorSubsystem* STATIC_Get(class ULocalPlayer* LocalPlayer);//Offset:Discovery.exe+0x1C459C0
	void EnableAnalogCursor(bool bIsEnabled);//Offset:Discovery.exe+0x1C45920
};


// Class EmbarkInput.EmbarkInputUtils
// 0x0000 (0x0028 - 0x0028)
class UEmbarkInputUtils : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkInput.EmbarkInputUtils"));
		return ptr;
	}


	enum class EEmbarkInputDevice STATIC_PlatformDefaultInputDevice();//Offset:Discovery.exe+0x1C46160
	enum class EUINavigation STATIC_GetNavigationDirectionFromKey(const struct FKeyEvent& InKeyEvent);//Offset:Discovery.exe+0x1C46050
	enum class EUINavigation STATIC_GetNavigationDirectionFromAnalog(const struct FAnalogInputEvent& InAnalogEvent);//Offset:Discovery.exe+0x1C45F40
	enum class EUINavigationAction STATIC_GetNavigationActionFromKey(const struct FKeyEvent& InKeyEvent);//Offset:Discovery.exe+0x1C45E30
};


// Class EmbarkInput.EmbarkInputSubsystem
// 0x0038 (0x0068 - 0x0030)
class UEmbarkInputSubsystem : public ULocalPlayerSubsystem
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnInputDeviceChanged;                                     // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0058(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkInput.EmbarkInputSubsystem"));
		return ptr;
	}


	bool IsUsingGamepad();//Offset:Discovery.exe+0x1C46600
	bool IsMouseAndKeyboard();//Offset:Discovery.exe+0x1C465D0
	enum class EEmbarkInputDevice GetCurrentInputDevice();//Offset:Discovery.exe+0x1C46630
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
