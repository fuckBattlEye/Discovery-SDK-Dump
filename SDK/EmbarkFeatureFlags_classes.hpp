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

// Class EmbarkFeatureFlags.FeatureFlagNativeFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UFeatureFlagNativeFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkFeatureFlags.FeatureFlagNativeFunctionLibrary"));
		return ptr;
	}


	bool STATIC_UseKneeHeightMovement();//Offset:Discovery.exe+0x1D155F0
	bool STATIC_IsLocalPlaytest();//Offset:Discovery.exe+0x1D156C0
	bool STATIC_IsDevMode();//Offset:Discovery.exe+0x1D15860
	bool STATIC_IsAutoTestHappypath();//Offset:Discovery.exe+0x1D15790
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
