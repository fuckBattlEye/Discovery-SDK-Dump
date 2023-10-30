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

// Class DLSSBlueprint.DLSSLibrary
// 0x0000 (0x0028 - 0x0028)
class UDLSSLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class DLSSBlueprint.DLSSLibrary"));
		return ptr;
	}


	void STATIC_SetDLSSSharpness(float Sharpness);//Offset:Discovery.exe+0x21F5EF0
	void STATIC_SetDLSSMode(enum class EUDLSSMode DLSSMode);//Offset:Discovery.exe+0x21F5FB0
	enum class EUDLSSSupport STATIC_QueryDLSSSupport();//Offset:Discovery.exe+0x21F6730
	bool STATIC_IsDLSSSupported();//Offset:Discovery.exe+0x21F6760
	bool STATIC_IsDLSSModeSupported(enum class EUDLSSMode DLSSMode);//Offset:Discovery.exe+0x21F64E0
	bool STATIC_IsDLAAEnabled();//Offset:Discovery.exe+0x21F6570
	TArray<enum class EUDLSSMode> STATIC_GetSupportedDLSSModes();//Offset:Discovery.exe+0x21F6460
	float STATIC_GetDLSSSharpness();//Offset:Discovery.exe+0x21F5EC0
	void STATIC_GetDLSSScreenPercentageRange(float* MinScreenPercentage, float* MaxScreenPercentage);//Offset:Discovery.exe+0x21F6040
	void STATIC_GetDLSSModeInformation(enum class EUDLSSMode DLSSMode, const struct FVector2D& ScreenResolution, bool* bIsSupported, float* OptimalScreenPercentage, bool* bIsFixedScreenPercentage, float* MinScreenPercentage, float* MaxScreenPercentage, float* OptimalSharpness);//Offset:Discovery.exe+0x21F6140
	enum class EUDLSSMode STATIC_GetDLSSMode();//Offset:Discovery.exe+0x21F5F80
	void STATIC_GetDLSSMinimumDriverVersion(int* MinDriverVersionMajor, int* MinDriverVersionMinor);//Offset:Discovery.exe+0x21F6630
	enum class EUDLSSMode STATIC_GetDefaultDLSSMode();//Offset:Discovery.exe+0x21F5E90
	void STATIC_EnableDLAA(bool bEnabled);//Offset:Discovery.exe+0x21F65A0
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
