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

// Function TypedElementRuntime.TypedElementAssetDataInterface.GetAssetData
struct UTypedElementAssetDataInterface_GetAssetData_Params
{
	struct FScriptTypedElementHandle                   InElementHandle;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FAssetData                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TypedElementRuntime.TypedElementAssetDataInterface.GetAllReferencedAssetDatas
struct UTypedElementAssetDataInterface_GetAllReferencedAssetDatas_Params
{
	struct FScriptTypedElementHandle                   InElementHandle;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<struct FAssetData>                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TypedElementRuntime.TypedElementHierarchyInterface.GetParentElement
struct UTypedElementHierarchyInterface_GetParentElement_Params
{
	struct FScriptTypedElementHandle                   InElementHandle;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bAllowCreate;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptTypedElementHandle                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TypedElementRuntime.TypedElementHierarchyInterface.GetChildElements
struct UTypedElementHierarchyInterface_GetChildElements_Params
{
	struct FScriptTypedElementHandle                   InElementHandle;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<struct FScriptTypedElementHandle>           OutElementHandles;                                        // (Parm, OutParm, ZeroConstructor)
	bool                                               bAllowCreate;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TypedElementRuntime.TypedElementObjectInterface.GetObjectClass
struct UTypedElementObjectInterface_GetObjectClass_Params
{
	struct FScriptTypedElementHandle                   InElementHandle;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TypedElementRuntime.TypedElementObjectInterface.GetObject
struct UTypedElementObjectInterface_GetObject_Params
{
	struct FScriptTypedElementHandle                   InElementHandle;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TypedElementRuntime.TypedElementSelectionInterface.SelectElement
struct UTypedElementSelectionInterface_SelectElement_Params
{
	struct FScriptTypedElementHandle                   InElementHandle;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FScriptTypedElementListProxy                InSelectionSet;                                           // (Parm)
	struct FTypedElementSelectionOptions               InSelectionOptions;                                       // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TypedElementRuntime.TypedElementSelectionInterface.IsElementSelected
struct UTypedElementSelectionInterface_IsElementSelected_Params
{
	struct FScriptTypedElementHandle                   InElementHandle;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FScriptTypedElementListProxy                InSelectionSet;                                           // (ConstParm, Parm)
	struct FTypedElementIsSelectedOptions              InSelectionOptions;                                       // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TypedElementRuntime.TypedElementSelectionInterface.GetSelectionElement
struct UTypedElementSelectionInterface_GetSelectionElement_Params
{
	struct FScriptTypedElementHandle                   InElementHandle;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FScriptTypedElementListProxy                InCurrentSelection;                                       // (ConstParm, Parm)
	enum class ETypedElementSelectionMethod            InSelectionMethod;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptTypedElementHandle                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TypedElementRuntime.TypedElementSelectionInterface.DeselectElement
struct UTypedElementSelectionInterface_DeselectElement_Params
{
	struct FScriptTypedElementHandle                   InElementHandle;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FScriptTypedElementListProxy                InSelectionSet;                                           // (Parm)
	struct FTypedElementSelectionOptions               InSelectionOptions;                                       // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TypedElementRuntime.TypedElementSelectionInterface.CanSelectElement
struct UTypedElementSelectionInterface_CanSelectElement_Params
{
	struct FScriptTypedElementHandle                   InElementHandle;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FTypedElementSelectionOptions               InSelectionOptions;                                       // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TypedElementRuntime.TypedElementSelectionInterface.CanDeselectElement
struct UTypedElementSelectionInterface_CanDeselectElement_Params
{
	struct FScriptTypedElementHandle                   InElementHandle;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FTypedElementSelectionOptions               InSelectionOptions;                                       // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TypedElementRuntime.TypedElementSelectionInterface.AllowSelectionModifiers
struct UTypedElementSelectionInterface_AllowSelectionModifiers_Params
{
	struct FScriptTypedElementHandle                   InElementHandle;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FScriptTypedElementListProxy                InSelectionSet;                                           // (ConstParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TypedElementRuntime.TypedElementSelectionSet.SetSelection
struct UTypedElementSelectionSet_SetSelection_Params
{
	TArray<struct FScriptTypedElementHandle>           InElementHandles;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FTypedElementSelectionOptions               InSelectionOptions;                                       // (ConstParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TypedElementRuntime.TypedElementSelectionSet.SelectElements
struct UTypedElementSelectionSet_SelectElements_Params
{
	TArray<struct FScriptTypedElementHandle>           InElementHandles;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FTypedElementSelectionOptions               InSelectionOptions;                                       // (ConstParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TypedElementRuntime.TypedElementSelectionSet.SelectElement
struct UTypedElementSelectionSet_SelectElement_Params
{
	struct FScriptTypedElementHandle                   InElementHandle;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FTypedElementSelectionOptions               InSelectionOptions;                                       // (ConstParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TypedElementRuntime.TypedElementSelectionSet.RestoreSelectionState
struct UTypedElementSelectionSet_RestoreSelectionState_Params
{
	struct FTypedElementSelectionSetState              InSelectionState;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
};

// DelegateFunction TypedElementRuntime.TypedElementSelectionSet.OnPreChangeDynamic__DelegateSignature
struct UTypedElementSelectionSet_OnPreChangeDynamic__DelegateSignature_Params
{
	class UTypedElementSelectionSet*                   SelectionSet;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction TypedElementRuntime.TypedElementSelectionSet.OnChangeDynamic__DelegateSignature
struct UTypedElementSelectionSet_OnChangeDynamic__DelegateSignature_Params
{
	class UTypedElementSelectionSet*                   SelectionSet;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TypedElementRuntime.TypedElementSelectionSet.K2_GetSelectedElementHandles
struct UTypedElementSelectionSet_K2_GetSelectedElementHandles_Params
{
	class UClass*                                      InBaseInterfaceType;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FScriptTypedElementHandle>           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TypedElementRuntime.TypedElementSelectionSet.IsElementSelected
struct UTypedElementSelectionSet_IsElementSelected_Params
{
	struct FScriptTypedElementHandle                   InElementHandle;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FTypedElementIsSelectedOptions              InSelectionOptions;                                       // (ConstParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TypedElementRuntime.TypedElementSelectionSet.HasSelectedObjects
struct UTypedElementSelectionSet_HasSelectedObjects_Params
{
	class UClass*                                      InRequiredClass;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TypedElementRuntime.TypedElementSelectionSet.HasSelectedElements
struct UTypedElementSelectionSet_HasSelectedElements_Params
{
	class UClass*                                      InBaseInterfaceType;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TypedElementRuntime.TypedElementSelectionSet.GetTopSelectedObject
struct UTypedElementSelectionSet_GetTopSelectedObject_Params
{
	class UClass*                                      InRequiredClass;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TypedElementRuntime.TypedElementSelectionSet.GetSelectionElement
struct UTypedElementSelectionSet_GetSelectionElement_Params
{
	struct FScriptTypedElementHandle                   InElementHandle;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	enum class ETypedElementSelectionMethod            InSelectionMethod;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptTypedElementHandle                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TypedElementRuntime.TypedElementSelectionSet.GetSelectedObjects
struct UTypedElementSelectionSet_GetSelectedObjects_Params
{
	class UClass*                                      InRequiredClass;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UObject*>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TypedElementRuntime.TypedElementSelectionSet.GetNumSelectedElements
struct UTypedElementSelectionSet_GetNumSelectedElements_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TypedElementRuntime.TypedElementSelectionSet.GetCurrentSelectionState
struct UTypedElementSelectionSet_GetCurrentSelectionState_Params
{
	struct FTypedElementSelectionSetState              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TypedElementRuntime.TypedElementSelectionSet.GetBottomSelectedObject
struct UTypedElementSelectionSet_GetBottomSelectedObject_Params
{
	class UClass*                                      InRequiredClass;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TypedElementRuntime.TypedElementSelectionSet.DeselectElements
struct UTypedElementSelectionSet_DeselectElements_Params
{
	TArray<struct FScriptTypedElementHandle>           InElementHandles;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FTypedElementSelectionOptions               InSelectionOptions;                                       // (ConstParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TypedElementRuntime.TypedElementSelectionSet.DeselectElement
struct UTypedElementSelectionSet_DeselectElement_Params
{
	struct FScriptTypedElementHandle                   InElementHandle;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FTypedElementSelectionOptions               InSelectionOptions;                                       // (ConstParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TypedElementRuntime.TypedElementSelectionSet.CountSelectedObjects
struct UTypedElementSelectionSet_CountSelectedObjects_Params
{
	class UClass*                                      InRequiredClass;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TypedElementRuntime.TypedElementSelectionSet.CountSelectedElements
struct UTypedElementSelectionSet_CountSelectedElements_Params
{
	class UClass*                                      InBaseInterfaceType;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TypedElementRuntime.TypedElementSelectionSet.ClearSelection
struct UTypedElementSelectionSet_ClearSelection_Params
{
	struct FTypedElementSelectionOptions               InSelectionOptions;                                       // (ConstParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TypedElementRuntime.TypedElementSelectionSet.CanSelectElement
struct UTypedElementSelectionSet_CanSelectElement_Params
{
	struct FScriptTypedElementHandle                   InElementHandle;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FTypedElementSelectionOptions               InSelectionOptions;                                       // (ConstParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TypedElementRuntime.TypedElementSelectionSet.CanDeselectElement
struct UTypedElementSelectionSet_CanDeselectElement_Params
{
	struct FScriptTypedElementHandle                   InElementHandle;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FTypedElementSelectionOptions               InSelectionOptions;                                       // (ConstParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TypedElementRuntime.TypedElementSelectionSet.AllowSelectionModifiers
struct UTypedElementSelectionSet_AllowSelectionModifiers_Params
{
	struct FScriptTypedElementHandle                   InElementHandle;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TypedElementRuntime.TypedElementSelectionSetLibrary.SetSelectionFromList
struct UTypedElementSelectionSetLibrary_SetSelectionFromList_Params
{
	class UTypedElementSelectionSet*                   SelectionSet;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptTypedElementListProxy                ElementList;                                              // (ConstParm, Parm)
	struct FTypedElementSelectionOptions               SelectionOptions;                                         // (ConstParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TypedElementRuntime.TypedElementSelectionSetLibrary.SelectElementsFromList
struct UTypedElementSelectionSetLibrary_SelectElementsFromList_Params
{
	class UTypedElementSelectionSet*                   SelectionSet;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptTypedElementListProxy                ElementList;                                              // (ConstParm, Parm)
	struct FTypedElementSelectionOptions               SelectionOptions;                                         // (ConstParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TypedElementRuntime.TypedElementSelectionSetLibrary.GetNormalizedSelection
struct UTypedElementSelectionSetLibrary_GetNormalizedSelection_Params
{
	class UTypedElementSelectionSet*                   SelectionSet;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTypedElementSelectionNormalizationOptions  NormalizationOptions;                                     // (ConstParm, Parm)
	struct FScriptTypedElementListProxy                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TypedElementRuntime.TypedElementSelectionSetLibrary.GetNormalizedElementList
struct UTypedElementSelectionSetLibrary_GetNormalizedElementList_Params
{
	class UTypedElementSelectionSet*                   SelectionSet;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptTypedElementListProxy                ElementList;                                              // (ConstParm, Parm)
	struct FTypedElementSelectionNormalizationOptions  NormalizationOptions;                                     // (ConstParm, Parm)
	struct FScriptTypedElementListProxy                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TypedElementRuntime.TypedElementSelectionSetLibrary.DeselectElementsFromList
struct UTypedElementSelectionSetLibrary_DeselectElementsFromList_Params
{
	class UTypedElementSelectionSet*                   SelectionSet;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptTypedElementListProxy                ElementList;                                              // (ConstParm, Parm)
	struct FTypedElementSelectionOptions               SelectionOptions;                                         // (ConstParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
