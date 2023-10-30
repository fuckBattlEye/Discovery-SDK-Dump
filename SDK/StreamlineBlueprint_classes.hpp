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

// Class StreamlineBlueprint.StreamlineLibraryDLSSG
// 0x0000 (0x0028 - 0x0028)
class UStreamlineLibraryDLSSG : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class StreamlineBlueprint.StreamlineLibraryDLSSG"));
		return ptr;
	}


	void STATIC_SetDLSSGMode(enum class EUStreamlineDLSSGMode DLSSGMode);//Offset:Discovery.exe+0x21E7670
	void STATIC_SetDLSSGFrames(int Frames);//Offset:Discovery.exe+0x21E7580
	enum class EUStreamlineDLSSGSupport STATIC_QueryDLSSGSupport();//Offset:Discovery.exe+0x21E7910
	bool STATIC_IsDLSSGSupported();//Offset:Discovery.exe+0x21E7940
	bool STATIC_IsDLSSGModeSupported(enum class EUStreamlineDLSSGMode DLSSGMode);//Offset:Discovery.exe+0x21E7780
	TArray<enum class EUStreamlineDLSSGMode> STATIC_GetSupportedDLSSGModes();//Offset:Discovery.exe+0x21E7700
	void STATIC_GetDLSSGSupportedFramesRange(int* MinFrames, int* MaxFrames);//Offset:Discovery.exe+0x21E7450
	enum class EUStreamlineDLSSGMode STATIC_GetDLSSGMode();//Offset:Discovery.exe+0x21E7640
	void STATIC_GetDLSSGMinimumDriverVersion(int* MinDriverVersionMajor, int* MinDriverVersionMinor);//Offset:Discovery.exe+0x21E7810
	int STATIC_GetDLSSGFrames();//Offset:Discovery.exe+0x21E7550
	enum class EUStreamlineDLSSGMode STATIC_GetDefaultDLSSGMode();//Offset:Discovery.exe+0x21E7610
};


// Class StreamlineBlueprint.StreamlineLibraryReflex
// 0x0000 (0x0028 - 0x0028)
class UStreamlineLibraryReflex : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class StreamlineBlueprint.StreamlineLibraryReflex"));
		return ptr;
	}


	void STATIC_SetReflexMode(enum class EUStreamlineReflexMode Mode);//Offset:Discovery.exe+0x21E82C0
	enum class EUStreamlineReflexSupport STATIC_QueryReflexSupport();//Offset:Discovery.exe+0x21E8350
	bool STATIC_IsReflexSupported();//Offset:Discovery.exe+0x21E8380
	float STATIC_GetRenderLatencyInMs();//Offset:Discovery.exe+0x21E8200
	enum class EUStreamlineReflexMode STATIC_GetReflexMode();//Offset:Discovery.exe+0x21E8290
	float STATIC_GetGameToRenderLatencyInMs();//Offset:Discovery.exe+0x21E8260
	float STATIC_GetGameLatencyInMs();//Offset:Discovery.exe+0x21E8230
	enum class EUStreamlineReflexMode STATIC_GetDefaultReflexMode();//Offset:Discovery.exe+0x1B14430
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
