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

// Class EmbarkGlobalSubsystemAngelscript.SubsystemFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class USubsystemFunctionLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkGlobalSubsystemAngelscript.SubsystemFunctionLibrary"));
		return ptr;
	}


	class UEmbarkGlobalSubsystem* STATIC_GetGlobalSubsystem(class UClass* SubsystemClass);//Offset:Discovery.exe+0x1C43520
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
