//   SDK By:if

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../pch.h"

namespace sdk
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function WBP_FrontendStoreOfferAlternative.WBP_FrontendStoreOfferAlternative_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)

void UWBP_FrontendStoreOfferAlternative_C::BP_OnEntryReleased()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function WBP_FrontendStoreOfferAlternative.WBP_FrontendStoreOfferAlternative_C.BP_OnEntryReleased"));

	UWBP_FrontendStoreOfferAlternative_C_BP_OnEntryReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_FrontendStoreOfferAlternative.WBP_FrontendStoreOfferAlternative_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsExpanded                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_FrontendStoreOfferAlternative_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function WBP_FrontendStoreOfferAlternative.WBP_FrontendStoreOfferAlternative_C.BP_OnItemExpansionChanged"));

	UWBP_FrontendStoreOfferAlternative_C_BP_OnItemExpansionChanged_Params params;
	params.bIsExpanded = bIsExpanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_FrontendStoreOfferAlternative.WBP_FrontendStoreOfferAlternative_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsSelected                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_FrontendStoreOfferAlternative_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function WBP_FrontendStoreOfferAlternative.WBP_FrontendStoreOfferAlternative_C.BP_OnItemSelectionChanged"));

	UWBP_FrontendStoreOfferAlternative_C_BP_OnItemSelectionChanged_Params params;
	params.bIsSelected = bIsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_FrontendStoreOfferAlternative.WBP_FrontendStoreOfferAlternative_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                 ListItemObject                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_FrontendStoreOfferAlternative_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function WBP_FrontendStoreOfferAlternative.WBP_FrontendStoreOfferAlternative_C.OnListItemObjectSet"));

	UWBP_FrontendStoreOfferAlternative_C_OnListItemObjectSet_Params params;
	params.ListItemObject = ListItemObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_FrontendStoreOfferAlternative.WBP_FrontendStoreOfferAlternative_C.ExecuteUbergraph_WBP_FrontendStoreOfferAlternative
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_FrontendStoreOfferAlternative_C::ExecuteUbergraph_WBP_FrontendStoreOfferAlternative(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function WBP_FrontendStoreOfferAlternative.WBP_FrontendStoreOfferAlternative_C.ExecuteUbergraph_WBP_FrontendStoreOfferAlternative"));

	UWBP_FrontendStoreOfferAlternative_C_ExecuteUbergraph_WBP_FrontendStoreOfferAlternative_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
