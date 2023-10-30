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

// WidgetBlueprintGeneratedClass WBP_Atom_Input.WBP_Atom_Input_C
// 0x0010 (0x0380 - 0x0370)
class UWBP_Atom_Input_C : public UAtomSystemInputIconWidget
{
public:
	struct FUIOpacity                                  LockedOpacity;                                            // 0x0370(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("WidgetBlueprintGeneratedClass WBP_Atom_Input.WBP_Atom_Input_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
