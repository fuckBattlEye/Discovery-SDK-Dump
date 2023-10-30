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

// WidgetBlueprintGeneratedClass WBP_FrontendStoreOfferAlternative.WBP_FrontendStoreOfferAlternative_C
// 0x0008 (0x02F0 - 0x02E8)
class UWBP_FrontendStoreOfferAlternative_C : public UDiscoveryStoreOfferAlternative
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("WidgetBlueprintGeneratedClass WBP_FrontendStoreOfferAlternative.WBP_FrontendStoreOfferAlternative_C"));
		return ptr;
	}


	void BP_OnEntryReleased();//Offset:Discovery.exe+0x327F8B0
	void BP_OnItemExpansionChanged(bool bIsExpanded);//Offset:Discovery.exe+0x327F8B0
	void BP_OnItemSelectionChanged(bool bIsSelected);//Offset:Discovery.exe+0x327F8B0
	void OnListItemObjectSet(class UObject* ListItemObject);//Offset:Discovery.exe+0x327F8B0
	void ExecuteUbergraph_WBP_FrontendStoreOfferAlternative(int EntryPoint);//Offset:Discovery.exe+0x327F8B0
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
