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

// Function TypedElementFramework.TestTypedElementInterfaceA.SetDisplayName
struct UTestTypedElementInterfaceA_SetDisplayName_Params
{
	struct FScriptTypedElementHandle                   InElementHandle;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText                                       InNewName;                                                // (Parm)
	bool                                               bNotify;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TypedElementFramework.TestTypedElementInterfaceA.GetDisplayName
struct UTestTypedElementInterfaceA_GetDisplayName_Params
{
	struct FScriptTypedElementHandle                   InElementHandle;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TypedElementFramework.TestTypedElementInterfaceB.MarkAsTested
struct UTestTypedElementInterfaceB_MarkAsTested_Params
{
	struct FScriptTypedElementHandle                   InElementHandle;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TypedElementFramework.TestTypedElementInterfaceC.GetIsTested
struct UTestTypedElementInterfaceC_GetIsTested_Params
{
	struct FScriptTypedElementHandle                   InElementHandle;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TypedElementFramework.TypedElementHandleLibrary.Release
struct UTypedElementHandleLibrary_Release_Params
{
	struct FScriptTypedElementHandle                   ElementHandle;                                            // (Parm, OutParm, ReferenceParm)
};

// Function TypedElementFramework.TypedElementHandleLibrary.NotEqual
struct UTypedElementHandleLibrary_NotEqual_Params
{
	struct FScriptTypedElementHandle                   LHS;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FScriptTypedElementHandle                   RHS;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TypedElementFramework.TypedElementHandleLibrary.IsSet
struct UTypedElementHandleLibrary_IsSet_Params
{
	struct FScriptTypedElementHandle                   ElementHandle;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TypedElementFramework.TypedElementHandleLibrary.Equal
struct UTypedElementHandleLibrary_Equal_Params
{
	struct FScriptTypedElementHandle                   LHS;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FScriptTypedElementHandle                   RHS;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TypedElementFramework.TypedElementListLibrary.Shrink
struct UTypedElementListLibrary_Shrink_Params
{
	struct FScriptTypedElementListProxy                ElementList;                                              // (Parm)
};

// Function TypedElementFramework.TypedElementListLibrary.Reset
struct UTypedElementListLibrary_Reset_Params
{
	struct FScriptTypedElementListProxy                ElementList;                                              // (Parm)
};

// Function TypedElementFramework.TypedElementListLibrary.Reserve
struct UTypedElementListLibrary_Reserve_Params
{
	struct FScriptTypedElementListProxy                ElementList;                                              // (Parm)
	int                                                Size;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TypedElementFramework.TypedElementListLibrary.Remove
struct UTypedElementListLibrary_Remove_Params
{
	struct FScriptTypedElementListProxy                ElementList;                                              // (Parm)
	struct FScriptTypedElementHandle                   ElementHandle;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TypedElementFramework.TypedElementListLibrary.Num
struct UTypedElementListLibrary_Num_Params
{
	struct FScriptTypedElementListProxy                ElementList;                                              // (ConstParm, Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TypedElementFramework.TypedElementListLibrary.IsValidIndex
struct UTypedElementListLibrary_IsValidIndex_Params
{
	struct FScriptTypedElementListProxy                ElementList;                                              // (ConstParm, Parm)
	int                                                Index;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TypedElementFramework.TypedElementListLibrary.HasElementsOfType
struct UTypedElementListLibrary_HasElementsOfType_Params
{
	struct FScriptTypedElementListProxy                ElementList;                                              // (ConstParm, Parm)
	struct FName                                       ElementTypeName;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TypedElementFramework.TypedElementListLibrary.HasElements
struct UTypedElementListLibrary_HasElements_Params
{
	struct FScriptTypedElementListProxy                ElementList;                                              // (ConstParm, Parm)
	class UClass*                                      BaseInterfaceType;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TypedElementFramework.TypedElementListLibrary.GetElementInterface
struct UTypedElementListLibrary_GetElementInterface_Params
{
	struct FScriptTypedElementListProxy                ElementList;                                              // (ConstParm, Parm)
	struct FScriptTypedElementHandle                   ElementHandle;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	class UClass*                                      BaseInterfaceType;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TypedElementFramework.TypedElementListLibrary.GetElementHandles
struct UTypedElementListLibrary_GetElementHandles_Params
{
	struct FScriptTypedElementListProxy                ElementList;                                              // (ConstParm, Parm)
	class UClass*                                      BaseInterfaceType;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FScriptTypedElementHandle>           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TypedElementFramework.TypedElementListLibrary.GetElementHandleAt
struct UTypedElementListLibrary_GetElementHandleAt_Params
{
	struct FScriptTypedElementListProxy                ElementList;                                              // (ConstParm, Parm)
	int                                                Index;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptTypedElementHandle                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TypedElementFramework.TypedElementListLibrary.Empty
struct UTypedElementListLibrary_Empty_Params
{
	struct FScriptTypedElementListProxy                ElementList;                                              // (Parm)
	int                                                Slack;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TypedElementFramework.TypedElementListLibrary.CreateScriptElementList
struct UTypedElementListLibrary_CreateScriptElementList_Params
{
	class UTypedElementRegistry*                       Registry;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptTypedElementListProxy                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TypedElementFramework.TypedElementListLibrary.CountElementsOfType
struct UTypedElementListLibrary_CountElementsOfType_Params
{
	struct FScriptTypedElementListProxy                ElementList;                                              // (ConstParm, Parm)
	struct FName                                       ElementTypeName;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TypedElementFramework.TypedElementListLibrary.CountElements
struct UTypedElementListLibrary_CountElements_Params
{
	struct FScriptTypedElementListProxy                ElementList;                                              // (ConstParm, Parm)
	class UClass*                                      BaseInterfaceType;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TypedElementFramework.TypedElementListLibrary.Contains
struct UTypedElementListLibrary_Contains_Params
{
	struct FScriptTypedElementListProxy                ElementList;                                              // (ConstParm, Parm)
	struct FScriptTypedElementHandle                   ElementHandle;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TypedElementFramework.TypedElementListLibrary.Clone
struct UTypedElementListLibrary_Clone_Params
{
	struct FScriptTypedElementListProxy                ElementList;                                              // (ConstParm, Parm)
	struct FScriptTypedElementListProxy                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TypedElementFramework.TypedElementListLibrary.AppendList
struct UTypedElementListLibrary_AppendList_Params
{
	struct FScriptTypedElementListProxy                ElementList;                                              // (Parm)
	struct FScriptTypedElementListProxy                OtherElementList;                                         // (ConstParm, Parm)
};

// Function TypedElementFramework.TypedElementListLibrary.Append
struct UTypedElementListLibrary_Append_Params
{
	struct FScriptTypedElementListProxy                ElementList;                                              // (Parm)
	TArray<struct FScriptTypedElementHandle>           ElementHandles;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TypedElementFramework.TypedElementListLibrary.Add
struct UTypedElementListLibrary_Add_Params
{
	struct FScriptTypedElementListProxy                ElementList;                                              // (Parm)
	struct FScriptTypedElementHandle                   ElementHandle;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TypedElementFramework.TypedElementRegistry.GetInstance
struct UTypedElementRegistry_GetInstance_Params
{
	class UTypedElementRegistry*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TypedElementFramework.TypedElementRegistry.GetElementInterface
struct UTypedElementRegistry_GetElementInterface_Params
{
	struct FScriptTypedElementHandle                   InElementHandle;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	class UClass*                                      InBaseInterfaceType;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
