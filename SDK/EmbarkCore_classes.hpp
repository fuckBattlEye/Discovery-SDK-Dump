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

// Class EmbarkCore.FFeatureFlagLockMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UFFeatureFlagLockMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkCore.FFeatureFlagLockMixinLibrary"));
		return ptr;
	}


	bool STATIC_IsFeatureEnabled(const struct FFeatureFlagLock& FeatureFlagLock);//Offset:Discovery.exe+0x1ED8410
};


// Class EmbarkCore.EmbarkFeatureFlag
// 0x0000 (0x0028 - 0x0028)
class UEmbarkFeatureFlag : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkCore.EmbarkFeatureFlag"));
		return ptr;
	}


	struct FString STATIC_ToCommandLine(const struct FString& Prefix);//Offset:Discovery.exe+0x1ED88F0
	bool STATIC_RawIsEnabled(const struct FString& FeatureFlagName);//Offset:Discovery.exe+0x1ED8A80
	bool STATIC_IsEnabled(const struct FFeatureFlag& Flag);//Offset:Discovery.exe+0x1ED8B30
	bool STATIC_IsDeclared(const struct FString& FeatureFlagName);//Offset:Discovery.exe+0x1ED89D0
};


// Class EmbarkCore.UEmbarkFeatureFlagStatics
// 0x0000 (0x0028 - 0x0028)
class UUEmbarkFeatureFlagStatics : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkCore.UEmbarkFeatureFlagStatics"));
		return ptr;
	}


	void STATIC_ApplyFromAgonesLabel(const struct FString& AgonesLabel);//Offset:Discovery.exe+0x1ED8FE0
};


// Class EmbarkCore.FVersionInfoStatics
// 0x0000 (0x0028 - 0x0028)
class UFVersionInfoStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkCore.FVersionInfoStatics"));
		return ptr;
	}


	bool STATIC_TryGetGlobalVersionInfo(struct FVersionInfo* OutVersionInfo);//Offset:Discovery.exe+0x1ED9420
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
