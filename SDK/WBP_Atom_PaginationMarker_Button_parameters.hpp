#pragma once

//   SDK By:if

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../pch.h"

namespace sdk
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function WBP_Atom_PaginationMarker_Button.WBP_Atom_PaginationMarker_Button_C.BP_OnEntryReleased
struct UWBP_Atom_PaginationMarker_Button_C_BP_OnEntryReleased_Params
{
};

// Function WBP_Atom_PaginationMarker_Button.WBP_Atom_PaginationMarker_Button_C.BP_OnItemExpansionChanged
struct UWBP_Atom_PaginationMarker_Button_C_BP_OnItemExpansionChanged_Params
{
	bool                                               bIsExpanded;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Atom_PaginationMarker_Button.WBP_Atom_PaginationMarker_Button_C.BP_OnItemSelectionChanged
struct UWBP_Atom_PaginationMarker_Button_C_BP_OnItemSelectionChanged_Params
{
	bool                                               bIsSelected;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Atom_PaginationMarker_Button.WBP_Atom_PaginationMarker_Button_C.OnListItemObjectSet
struct UWBP_Atom_PaginationMarker_Button_C_OnListItemObjectSet_Params
{
	class UObject*                                     ListItemObject;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Atom_PaginationMarker_Button.WBP_Atom_PaginationMarker_Button_C.ExecuteUbergraph_WBP_Atom_PaginationMarker_Button
struct UWBP_Atom_PaginationMarker_Button_C_ExecuteUbergraph_WBP_Atom_PaginationMarker_Button_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
