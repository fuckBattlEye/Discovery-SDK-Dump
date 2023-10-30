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

// Class AndroidFileServer.AndroidFileServerBPLibrary
// 0x0000 (0x0028 - 0x0028)
class UAndroidFileServerBPLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AndroidFileServer.AndroidFileServerBPLibrary"));
		return ptr;
	}


	bool STATIC_StopFileServer(bool bUSB, bool bNetwork);//Offset:Discovery.exe+0x2E54D60
	bool STATIC_StartFileServer(bool bUSB, bool bNetwork, int Port);//Offset:Discovery.exe+0x2E54E50
	TEnumAsByte<EAFSActiveType> STATIC_IsFileServerRunning();//Offset:Discovery.exe+0x2E54D10
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
