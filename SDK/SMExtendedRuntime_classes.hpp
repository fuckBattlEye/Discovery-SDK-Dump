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

// Class SMExtendedRuntime.SMExtendedGraphPropertyHelpers
// 0x0000 (0x0028 - 0x0028)
class USMExtendedGraphPropertyHelpers : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class SMExtendedRuntime.SMExtendedGraphPropertyHelpers"));
		return ptr;
	}


	struct FText STATIC_ObjectToText(class UObject* InObject, const struct FName& InFunctionName);//Offset:Discovery.exe+0x21D9670
	void STATIC_BreakTextGraphProperty(const struct FSMTextGraphProperty& GraphProperty, struct FText* Result);//Offset:Discovery.exe+0x21D97A0
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
