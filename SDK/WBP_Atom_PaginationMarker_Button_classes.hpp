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

// WidgetBlueprintGeneratedClass WBP_Atom_PaginationMarker_Button.WBP_Atom_PaginationMarker_Button_C
// 0x0008 (0x1120 - 0x1118)
class UWBP_Atom_PaginationMarker_Button_C : public UAtomSystemPaginationMarkerButtonWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1118(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("WidgetBlueprintGeneratedClass WBP_Atom_PaginationMarker_Button.WBP_Atom_PaginationMarker_Button_C"));
		return ptr;
	}


	void BP_OnEntryReleased();//Offset:Discovery.exe+0x327F8B0
	void BP_OnItemExpansionChanged(bool bIsExpanded);//Offset:Discovery.exe+0x327F8B0
	void BP_OnItemSelectionChanged(bool bIsSelected);//Offset:Discovery.exe+0x327F8B0
	void OnListItemObjectSet(class UObject* ListItemObject);//Offset:Discovery.exe+0x327F8B0
	void ExecuteUbergraph_WBP_Atom_PaginationMarker_Button(int EntryPoint);//Offset:Discovery.exe+0x327F8B0
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
