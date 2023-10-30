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

// Class XeSSBlueprint.XeSSBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UXeSSBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class XeSSBlueprint.XeSSBlueprintLibrary"));
		return ptr;
	}


	void STATIC_SetXeSSQualityMode(enum class EXeSSQualityMode QualityMode);//Offset:Discovery.exe+0x247EB10
	bool STATIC_IsXeSSSupported();//Offset:Discovery.exe+0x247ECE0
	bool STATIC_GetXeSSQualityModeInformation(enum class EXeSSQualityMode QualityMode, float* ScreenPercentage);//Offset:Discovery.exe+0x247EA20
	enum class EXeSSQualityMode STATIC_GetXeSSQualityMode();//Offset:Discovery.exe+0x247EC30
	TArray<enum class EXeSSQualityMode> STATIC_GetSupportedXeSSQualityModes();//Offset:Discovery.exe+0x247EC60
	enum class EXeSSQualityMode STATIC_GetDefaultXeSSQualityMode(const struct FIntPoint& ScreenResolution);//Offset:Discovery.exe+0x247EBA0
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
