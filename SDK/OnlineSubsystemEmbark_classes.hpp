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

// Class OnlineSubsystemEmbark.EmbarkControlChannel
// 0x0220 (0x02A0 - 0x0080)
class UEmbarkControlChannel : public UControlChannel
{
public:
	unsigned char                                      UnknownData00[0x220];                                     // 0x0080(0x0220) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemEmbark.EmbarkControlChannel"));
		return ptr;
	}

};


// Class OnlineSubsystemEmbark.EmbarkNetDriver
// 0x0028 (0x0800 - 0x07D8)
class UEmbarkNetDriver : public UIpNetDriver
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x07D8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemEmbark.EmbarkNetDriver"));
		return ptr;
	}

};


// Class OnlineSubsystemEmbark.RegionSetting
// 0x0020 (0x0080 - 0x0060)
class URegionSetting : public UIEmbarkOptionEnum
{
public:
	struct FText                                       InvalidDisplayText;                                       // 0x0060(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemEmbark.RegionSetting"));
		return ptr;
	}


	struct FGameplayTag GetCurrentRegionIdentifier();//Offset:Discovery.exe+0x1E3CE90
};


// Class OnlineSubsystemEmbark.EmbarkRegionSubsystem
// 0x0018 (0x0048 - 0x0030)
class UEmbarkRegionSubsystem : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnRegionChanged;                                          // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemEmbark.EmbarkRegionSubsystem"));
		return ptr;
	}


	struct FString GetCurrentRegionOnlineName();//Offset:Discovery.exe+0x1E3D280
	struct FGameplayTag GetCurrentRegionIdentifier();//Offset:Discovery.exe+0x1E3D1D0
	struct FText GetCurrentRegionDisplayName();//Offset:Discovery.exe+0x1E3D200
};


// Class OnlineSubsystemEmbark.OnlineSubsystemFeatureFlagNativeFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UOnlineSubsystemFeatureFlagNativeFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OnlineSubsystemEmbark.OnlineSubsystemFeatureFlagNativeFunctionLibrary"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
