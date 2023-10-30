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

// Function TypedElementRuntime.TypedElementAssetDataInterface.GetAssetData
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle InElementHandle                (ConstParm, Parm, OutParm, ReferenceParm)
// struct FAssetData              ReturnValue                    (Parm, OutParm, ReturnParm)

struct FAssetData UTypedElementAssetDataInterface::GetAssetData(const struct FScriptTypedElementHandle& InElementHandle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TypedElementRuntime.TypedElementAssetDataInterface.GetAssetData"));

	UTypedElementAssetDataInterface_GetAssetData_Params params;
	params.InElementHandle = InElementHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TypedElementRuntime.TypedElementAssetDataInterface.GetAllReferencedAssetDatas
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle InElementHandle                (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<struct FAssetData>      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FAssetData> UTypedElementAssetDataInterface::GetAllReferencedAssetDatas(const struct FScriptTypedElementHandle& InElementHandle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TypedElementRuntime.TypedElementAssetDataInterface.GetAllReferencedAssetDatas"));

	UTypedElementAssetDataInterface_GetAllReferencedAssetDatas_Params params;
	params.InElementHandle = InElementHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TypedElementRuntime.TypedElementHierarchyInterface.GetParentElement
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle InElementHandle                (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bAllowCreate                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptTypedElementHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FScriptTypedElementHandle UTypedElementHierarchyInterface::GetParentElement(const struct FScriptTypedElementHandle& InElementHandle, bool bAllowCreate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TypedElementRuntime.TypedElementHierarchyInterface.GetParentElement"));

	UTypedElementHierarchyInterface_GetParentElement_Params params;
	params.InElementHandle = InElementHandle;
	params.bAllowCreate = bAllowCreate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TypedElementRuntime.TypedElementHierarchyInterface.GetChildElements
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle InElementHandle                (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<struct FScriptTypedElementHandle> OutElementHandles              (Parm, OutParm, ZeroConstructor)
// bool                           bAllowCreate                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UTypedElementHierarchyInterface::GetChildElements(const struct FScriptTypedElementHandle& InElementHandle, bool bAllowCreate, TArray<struct FScriptTypedElementHandle>* OutElementHandles)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TypedElementRuntime.TypedElementHierarchyInterface.GetChildElements"));

	UTypedElementHierarchyInterface_GetChildElements_Params params;
	params.InElementHandle = InElementHandle;
	params.bAllowCreate = bAllowCreate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutElementHandles != nullptr)
		*OutElementHandles = params.OutElementHandles;
}


// Function TypedElementRuntime.TypedElementObjectInterface.GetObjectClass
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle InElementHandle                (ConstParm, Parm, OutParm, ReferenceParm)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UTypedElementObjectInterface::GetObjectClass(const struct FScriptTypedElementHandle& InElementHandle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TypedElementRuntime.TypedElementObjectInterface.GetObjectClass"));

	UTypedElementObjectInterface_GetObjectClass_Params params;
	params.InElementHandle = InElementHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TypedElementRuntime.TypedElementObjectInterface.GetObject
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle InElementHandle                (ConstParm, Parm, OutParm, ReferenceParm)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UTypedElementObjectInterface::GetObject(const struct FScriptTypedElementHandle& InElementHandle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TypedElementRuntime.TypedElementObjectInterface.GetObject"));

	UTypedElementObjectInterface_GetObject_Params params;
	params.InElementHandle = InElementHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TypedElementRuntime.TypedElementSelectionInterface.SelectElement
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle InElementHandle                (ConstParm, Parm, OutParm, ReferenceParm)
// struct FScriptTypedElementListProxy InSelectionSet                 (Parm)
// struct FTypedElementSelectionOptions InSelectionOptions             (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTypedElementSelectionInterface::SelectElement(const struct FScriptTypedElementHandle& InElementHandle, const struct FScriptTypedElementListProxy& InSelectionSet, const struct FTypedElementSelectionOptions& InSelectionOptions)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TypedElementRuntime.TypedElementSelectionInterface.SelectElement"));

	UTypedElementSelectionInterface_SelectElement_Params params;
	params.InElementHandle = InElementHandle;
	params.InSelectionSet = InSelectionSet;
	params.InSelectionOptions = InSelectionOptions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TypedElementRuntime.TypedElementSelectionInterface.IsElementSelected
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle InElementHandle                (ConstParm, Parm, OutParm, ReferenceParm)
// struct FScriptTypedElementListProxy InSelectionSet                 (ConstParm, Parm)
// struct FTypedElementIsSelectedOptions InSelectionOptions             (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTypedElementSelectionInterface::IsElementSelected(const struct FScriptTypedElementHandle& InElementHandle, const struct FScriptTypedElementListProxy& InSelectionSet, const struct FTypedElementIsSelectedOptions& InSelectionOptions)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TypedElementRuntime.TypedElementSelectionInterface.IsElementSelected"));

	UTypedElementSelectionInterface_IsElementSelected_Params params;
	params.InElementHandle = InElementHandle;
	params.InSelectionSet = InSelectionSet;
	params.InSelectionOptions = InSelectionOptions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TypedElementRuntime.TypedElementSelectionInterface.GetSelectionElement
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle InElementHandle                (ConstParm, Parm, OutParm, ReferenceParm)
// struct FScriptTypedElementListProxy InCurrentSelection             (ConstParm, Parm)
// enum class ETypedElementSelectionMethod InSelectionMethod              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptTypedElementHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FScriptTypedElementHandle UTypedElementSelectionInterface::GetSelectionElement(const struct FScriptTypedElementHandle& InElementHandle, const struct FScriptTypedElementListProxy& InCurrentSelection, enum class ETypedElementSelectionMethod InSelectionMethod)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TypedElementRuntime.TypedElementSelectionInterface.GetSelectionElement"));

	UTypedElementSelectionInterface_GetSelectionElement_Params params;
	params.InElementHandle = InElementHandle;
	params.InCurrentSelection = InCurrentSelection;
	params.InSelectionMethod = InSelectionMethod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TypedElementRuntime.TypedElementSelectionInterface.DeselectElement
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle InElementHandle                (ConstParm, Parm, OutParm, ReferenceParm)
// struct FScriptTypedElementListProxy InSelectionSet                 (Parm)
// struct FTypedElementSelectionOptions InSelectionOptions             (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTypedElementSelectionInterface::DeselectElement(const struct FScriptTypedElementHandle& InElementHandle, const struct FScriptTypedElementListProxy& InSelectionSet, const struct FTypedElementSelectionOptions& InSelectionOptions)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TypedElementRuntime.TypedElementSelectionInterface.DeselectElement"));

	UTypedElementSelectionInterface_DeselectElement_Params params;
	params.InElementHandle = InElementHandle;
	params.InSelectionSet = InSelectionSet;
	params.InSelectionOptions = InSelectionOptions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TypedElementRuntime.TypedElementSelectionInterface.CanSelectElement
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle InElementHandle                (ConstParm, Parm, OutParm, ReferenceParm)
// struct FTypedElementSelectionOptions InSelectionOptions             (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTypedElementSelectionInterface::CanSelectElement(const struct FScriptTypedElementHandle& InElementHandle, const struct FTypedElementSelectionOptions& InSelectionOptions)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TypedElementRuntime.TypedElementSelectionInterface.CanSelectElement"));

	UTypedElementSelectionInterface_CanSelectElement_Params params;
	params.InElementHandle = InElementHandle;
	params.InSelectionOptions = InSelectionOptions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TypedElementRuntime.TypedElementSelectionInterface.CanDeselectElement
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle InElementHandle                (ConstParm, Parm, OutParm, ReferenceParm)
// struct FTypedElementSelectionOptions InSelectionOptions             (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTypedElementSelectionInterface::CanDeselectElement(const struct FScriptTypedElementHandle& InElementHandle, const struct FTypedElementSelectionOptions& InSelectionOptions)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TypedElementRuntime.TypedElementSelectionInterface.CanDeselectElement"));

	UTypedElementSelectionInterface_CanDeselectElement_Params params;
	params.InElementHandle = InElementHandle;
	params.InSelectionOptions = InSelectionOptions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TypedElementRuntime.TypedElementSelectionInterface.AllowSelectionModifiers
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle InElementHandle                (ConstParm, Parm, OutParm, ReferenceParm)
// struct FScriptTypedElementListProxy InSelectionSet                 (ConstParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTypedElementSelectionInterface::AllowSelectionModifiers(const struct FScriptTypedElementHandle& InElementHandle, const struct FScriptTypedElementListProxy& InSelectionSet)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TypedElementRuntime.TypedElementSelectionInterface.AllowSelectionModifiers"));

	UTypedElementSelectionInterface_AllowSelectionModifiers_Params params;
	params.InElementHandle = InElementHandle;
	params.InSelectionSet = InSelectionSet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TypedElementRuntime.TypedElementSelectionSet.SetSelection
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FScriptTypedElementHandle> InElementHandles               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FTypedElementSelectionOptions InSelectionOptions             (ConstParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTypedElementSelectionSet::SetSelection(TArray<struct FScriptTypedElementHandle> InElementHandles, const struct FTypedElementSelectionOptions& InSelectionOptions)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TypedElementRuntime.TypedElementSelectionSet.SetSelection"));

	UTypedElementSelectionSet_SetSelection_Params params;
	params.InElementHandles = InElementHandles;
	params.InSelectionOptions = InSelectionOptions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TypedElementRuntime.TypedElementSelectionSet.SelectElements
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FScriptTypedElementHandle> InElementHandles               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FTypedElementSelectionOptions InSelectionOptions             (ConstParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTypedElementSelectionSet::SelectElements(TArray<struct FScriptTypedElementHandle> InElementHandles, const struct FTypedElementSelectionOptions& InSelectionOptions)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TypedElementRuntime.TypedElementSelectionSet.SelectElements"));

	UTypedElementSelectionSet_SelectElements_Params params;
	params.InElementHandles = InElementHandles;
	params.InSelectionOptions = InSelectionOptions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TypedElementRuntime.TypedElementSelectionSet.SelectElement
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle InElementHandle                (ConstParm, Parm, OutParm, ReferenceParm)
// struct FTypedElementSelectionOptions InSelectionOptions             (ConstParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTypedElementSelectionSet::SelectElement(const struct FScriptTypedElementHandle& InElementHandle, const struct FTypedElementSelectionOptions& InSelectionOptions)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TypedElementRuntime.TypedElementSelectionSet.SelectElement"));

	UTypedElementSelectionSet_SelectElement_Params params;
	params.InElementHandle = InElementHandle;
	params.InSelectionOptions = InSelectionOptions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TypedElementRuntime.TypedElementSelectionSet.RestoreSelectionState
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FTypedElementSelectionSetState InSelectionState               (ConstParm, Parm, OutParm, ReferenceParm)

void UTypedElementSelectionSet::RestoreSelectionState(const struct FTypedElementSelectionSetState& InSelectionState)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TypedElementRuntime.TypedElementSelectionSet.RestoreSelectionState"));

	UTypedElementSelectionSet_RestoreSelectionState_Params params;
	params.InSelectionState = InSelectionState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction TypedElementRuntime.TypedElementSelectionSet.OnPreChangeDynamic__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UTypedElementSelectionSet* SelectionSet                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UTypedElementSelectionSet::OnPreChangeDynamic__DelegateSignature(class UTypedElementSelectionSet* SelectionSet)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("DelegateFunction TypedElementRuntime.TypedElementSelectionSet.OnPreChangeDynamic__DelegateSignature"));

	UTypedElementSelectionSet_OnPreChangeDynamic__DelegateSignature_Params params;
	params.SelectionSet = SelectionSet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction TypedElementRuntime.TypedElementSelectionSet.OnChangeDynamic__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UTypedElementSelectionSet* SelectionSet                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UTypedElementSelectionSet::OnChangeDynamic__DelegateSignature(class UTypedElementSelectionSet* SelectionSet)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("DelegateFunction TypedElementRuntime.TypedElementSelectionSet.OnChangeDynamic__DelegateSignature"));

	UTypedElementSelectionSet_OnChangeDynamic__DelegateSignature_Params params;
	params.SelectionSet = SelectionSet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TypedElementRuntime.TypedElementSelectionSet.K2_GetSelectedElementHandles
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UClass*                  InBaseInterfaceType            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FScriptTypedElementHandle> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FScriptTypedElementHandle> UTypedElementSelectionSet::K2_GetSelectedElementHandles(class UClass* InBaseInterfaceType)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TypedElementRuntime.TypedElementSelectionSet.K2_GetSelectedElementHandles"));

	UTypedElementSelectionSet_K2_GetSelectedElementHandles_Params params;
	params.InBaseInterfaceType = InBaseInterfaceType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TypedElementRuntime.TypedElementSelectionSet.IsElementSelected
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FScriptTypedElementHandle InElementHandle                (ConstParm, Parm, OutParm, ReferenceParm)
// struct FTypedElementIsSelectedOptions InSelectionOptions             (ConstParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTypedElementSelectionSet::IsElementSelected(const struct FScriptTypedElementHandle& InElementHandle, const struct FTypedElementIsSelectedOptions& InSelectionOptions)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TypedElementRuntime.TypedElementSelectionSet.IsElementSelected"));

	UTypedElementSelectionSet_IsElementSelected_Params params;
	params.InElementHandle = InElementHandle;
	params.InSelectionOptions = InSelectionOptions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TypedElementRuntime.TypedElementSelectionSet.HasSelectedObjects
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UClass*                  InRequiredClass                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTypedElementSelectionSet::HasSelectedObjects(class UClass* InRequiredClass)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TypedElementRuntime.TypedElementSelectionSet.HasSelectedObjects"));

	UTypedElementSelectionSet_HasSelectedObjects_Params params;
	params.InRequiredClass = InRequiredClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TypedElementRuntime.TypedElementSelectionSet.HasSelectedElements
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UClass*                  InBaseInterfaceType            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTypedElementSelectionSet::HasSelectedElements(class UClass* InBaseInterfaceType)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TypedElementRuntime.TypedElementSelectionSet.HasSelectedElements"));

	UTypedElementSelectionSet_HasSelectedElements_Params params;
	params.InBaseInterfaceType = InBaseInterfaceType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TypedElementRuntime.TypedElementSelectionSet.GetTopSelectedObject
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  InRequiredClass                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UTypedElementSelectionSet::GetTopSelectedObject(class UClass* InRequiredClass)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TypedElementRuntime.TypedElementSelectionSet.GetTopSelectedObject"));

	UTypedElementSelectionSet_GetTopSelectedObject_Params params;
	params.InRequiredClass = InRequiredClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TypedElementRuntime.TypedElementSelectionSet.GetSelectionElement
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FScriptTypedElementHandle InElementHandle                (ConstParm, Parm, OutParm, ReferenceParm)
// enum class ETypedElementSelectionMethod InSelectionMethod              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptTypedElementHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FScriptTypedElementHandle UTypedElementSelectionSet::GetSelectionElement(const struct FScriptTypedElementHandle& InElementHandle, enum class ETypedElementSelectionMethod InSelectionMethod)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TypedElementRuntime.TypedElementSelectionSet.GetSelectionElement"));

	UTypedElementSelectionSet_GetSelectionElement_Params params;
	params.InElementHandle = InElementHandle;
	params.InSelectionMethod = InSelectionMethod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TypedElementRuntime.TypedElementSelectionSet.GetSelectedObjects
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UClass*                  InRequiredClass                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UObject*>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UObject*> UTypedElementSelectionSet::GetSelectedObjects(class UClass* InRequiredClass)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TypedElementRuntime.TypedElementSelectionSet.GetSelectedObjects"));

	UTypedElementSelectionSet_GetSelectedObjects_Params params;
	params.InRequiredClass = InRequiredClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TypedElementRuntime.TypedElementSelectionSet.GetNumSelectedElements
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UTypedElementSelectionSet::GetNumSelectedElements()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TypedElementRuntime.TypedElementSelectionSet.GetNumSelectedElements"));

	UTypedElementSelectionSet_GetNumSelectedElements_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TypedElementRuntime.TypedElementSelectionSet.GetCurrentSelectionState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTypedElementSelectionSetState ReturnValue                    (Parm, OutParm, ReturnParm)

struct FTypedElementSelectionSetState UTypedElementSelectionSet::GetCurrentSelectionState()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TypedElementRuntime.TypedElementSelectionSet.GetCurrentSelectionState"));

	UTypedElementSelectionSet_GetCurrentSelectionState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TypedElementRuntime.TypedElementSelectionSet.GetBottomSelectedObject
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  InRequiredClass                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UTypedElementSelectionSet::GetBottomSelectedObject(class UClass* InRequiredClass)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TypedElementRuntime.TypedElementSelectionSet.GetBottomSelectedObject"));

	UTypedElementSelectionSet_GetBottomSelectedObject_Params params;
	params.InRequiredClass = InRequiredClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TypedElementRuntime.TypedElementSelectionSet.DeselectElements
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FScriptTypedElementHandle> InElementHandles               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FTypedElementSelectionOptions InSelectionOptions             (ConstParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTypedElementSelectionSet::DeselectElements(TArray<struct FScriptTypedElementHandle> InElementHandles, const struct FTypedElementSelectionOptions& InSelectionOptions)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TypedElementRuntime.TypedElementSelectionSet.DeselectElements"));

	UTypedElementSelectionSet_DeselectElements_Params params;
	params.InElementHandles = InElementHandles;
	params.InSelectionOptions = InSelectionOptions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TypedElementRuntime.TypedElementSelectionSet.DeselectElement
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle InElementHandle                (ConstParm, Parm, OutParm, ReferenceParm)
// struct FTypedElementSelectionOptions InSelectionOptions             (ConstParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTypedElementSelectionSet::DeselectElement(const struct FScriptTypedElementHandle& InElementHandle, const struct FTypedElementSelectionOptions& InSelectionOptions)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TypedElementRuntime.TypedElementSelectionSet.DeselectElement"));

	UTypedElementSelectionSet_DeselectElement_Params params;
	params.InElementHandle = InElementHandle;
	params.InSelectionOptions = InSelectionOptions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TypedElementRuntime.TypedElementSelectionSet.CountSelectedObjects
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UClass*                  InRequiredClass                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UTypedElementSelectionSet::CountSelectedObjects(class UClass* InRequiredClass)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TypedElementRuntime.TypedElementSelectionSet.CountSelectedObjects"));

	UTypedElementSelectionSet_CountSelectedObjects_Params params;
	params.InRequiredClass = InRequiredClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TypedElementRuntime.TypedElementSelectionSet.CountSelectedElements
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UClass*                  InBaseInterfaceType            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UTypedElementSelectionSet::CountSelectedElements(class UClass* InBaseInterfaceType)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TypedElementRuntime.TypedElementSelectionSet.CountSelectedElements"));

	UTypedElementSelectionSet_CountSelectedElements_Params params;
	params.InBaseInterfaceType = InBaseInterfaceType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TypedElementRuntime.TypedElementSelectionSet.ClearSelection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FTypedElementSelectionOptions InSelectionOptions             (ConstParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTypedElementSelectionSet::ClearSelection(const struct FTypedElementSelectionOptions& InSelectionOptions)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TypedElementRuntime.TypedElementSelectionSet.ClearSelection"));

	UTypedElementSelectionSet_ClearSelection_Params params;
	params.InSelectionOptions = InSelectionOptions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TypedElementRuntime.TypedElementSelectionSet.CanSelectElement
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FScriptTypedElementHandle InElementHandle                (ConstParm, Parm, OutParm, ReferenceParm)
// struct FTypedElementSelectionOptions InSelectionOptions             (ConstParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTypedElementSelectionSet::CanSelectElement(const struct FScriptTypedElementHandle& InElementHandle, const struct FTypedElementSelectionOptions& InSelectionOptions)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TypedElementRuntime.TypedElementSelectionSet.CanSelectElement"));

	UTypedElementSelectionSet_CanSelectElement_Params params;
	params.InElementHandle = InElementHandle;
	params.InSelectionOptions = InSelectionOptions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TypedElementRuntime.TypedElementSelectionSet.CanDeselectElement
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FScriptTypedElementHandle InElementHandle                (ConstParm, Parm, OutParm, ReferenceParm)
// struct FTypedElementSelectionOptions InSelectionOptions             (ConstParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTypedElementSelectionSet::CanDeselectElement(const struct FScriptTypedElementHandle& InElementHandle, const struct FTypedElementSelectionOptions& InSelectionOptions)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TypedElementRuntime.TypedElementSelectionSet.CanDeselectElement"));

	UTypedElementSelectionSet_CanDeselectElement_Params params;
	params.InElementHandle = InElementHandle;
	params.InSelectionOptions = InSelectionOptions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TypedElementRuntime.TypedElementSelectionSet.AllowSelectionModifiers
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FScriptTypedElementHandle InElementHandle                (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTypedElementSelectionSet::AllowSelectionModifiers(const struct FScriptTypedElementHandle& InElementHandle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TypedElementRuntime.TypedElementSelectionSet.AllowSelectionModifiers"));

	UTypedElementSelectionSet_AllowSelectionModifiers_Params params;
	params.InElementHandle = InElementHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TypedElementRuntime.TypedElementSelectionSetLibrary.SetSelectionFromList
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UTypedElementSelectionSet* SelectionSet                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptTypedElementListProxy ElementList                    (ConstParm, Parm)
// struct FTypedElementSelectionOptions SelectionOptions               (ConstParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTypedElementSelectionSetLibrary::STATIC_SetSelectionFromList(class UTypedElementSelectionSet* SelectionSet, const struct FScriptTypedElementListProxy& ElementList, const struct FTypedElementSelectionOptions& SelectionOptions)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TypedElementRuntime.TypedElementSelectionSetLibrary.SetSelectionFromList"));

	UTypedElementSelectionSetLibrary_SetSelectionFromList_Params params;
	params.SelectionSet = SelectionSet;
	params.ElementList = ElementList;
	params.SelectionOptions = SelectionOptions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TypedElementRuntime.TypedElementSelectionSetLibrary.SelectElementsFromList
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UTypedElementSelectionSet* SelectionSet                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptTypedElementListProxy ElementList                    (ConstParm, Parm)
// struct FTypedElementSelectionOptions SelectionOptions               (ConstParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTypedElementSelectionSetLibrary::STATIC_SelectElementsFromList(class UTypedElementSelectionSet* SelectionSet, const struct FScriptTypedElementListProxy& ElementList, const struct FTypedElementSelectionOptions& SelectionOptions)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TypedElementRuntime.TypedElementSelectionSetLibrary.SelectElementsFromList"));

	UTypedElementSelectionSetLibrary_SelectElementsFromList_Params params;
	params.SelectionSet = SelectionSet;
	params.ElementList = ElementList;
	params.SelectionOptions = SelectionOptions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TypedElementRuntime.TypedElementSelectionSetLibrary.GetNormalizedSelection
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UTypedElementSelectionSet* SelectionSet                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FTypedElementSelectionNormalizationOptions NormalizationOptions           (ConstParm, Parm)
// struct FScriptTypedElementListProxy ReturnValue                    (Parm, OutParm, ReturnParm)

struct FScriptTypedElementListProxy UTypedElementSelectionSetLibrary::STATIC_GetNormalizedSelection(class UTypedElementSelectionSet* SelectionSet, const struct FTypedElementSelectionNormalizationOptions& NormalizationOptions)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TypedElementRuntime.TypedElementSelectionSetLibrary.GetNormalizedSelection"));

	UTypedElementSelectionSetLibrary_GetNormalizedSelection_Params params;
	params.SelectionSet = SelectionSet;
	params.NormalizationOptions = NormalizationOptions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TypedElementRuntime.TypedElementSelectionSetLibrary.GetNormalizedElementList
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UTypedElementSelectionSet* SelectionSet                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptTypedElementListProxy ElementList                    (ConstParm, Parm)
// struct FTypedElementSelectionNormalizationOptions NormalizationOptions           (ConstParm, Parm)
// struct FScriptTypedElementListProxy ReturnValue                    (Parm, OutParm, ReturnParm)

struct FScriptTypedElementListProxy UTypedElementSelectionSetLibrary::STATIC_GetNormalizedElementList(class UTypedElementSelectionSet* SelectionSet, const struct FScriptTypedElementListProxy& ElementList, const struct FTypedElementSelectionNormalizationOptions& NormalizationOptions)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TypedElementRuntime.TypedElementSelectionSetLibrary.GetNormalizedElementList"));

	UTypedElementSelectionSetLibrary_GetNormalizedElementList_Params params;
	params.SelectionSet = SelectionSet;
	params.ElementList = ElementList;
	params.NormalizationOptions = NormalizationOptions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TypedElementRuntime.TypedElementSelectionSetLibrary.DeselectElementsFromList
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UTypedElementSelectionSet* SelectionSet                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptTypedElementListProxy ElementList                    (ConstParm, Parm)
// struct FTypedElementSelectionOptions SelectionOptions               (ConstParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTypedElementSelectionSetLibrary::STATIC_DeselectElementsFromList(class UTypedElementSelectionSet* SelectionSet, const struct FScriptTypedElementListProxy& ElementList, const struct FTypedElementSelectionOptions& SelectionOptions)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TypedElementRuntime.TypedElementSelectionSetLibrary.DeselectElementsFromList"));

	UTypedElementSelectionSetLibrary_DeselectElementsFromList_Params params;
	params.SelectionSet = SelectionSet;
	params.ElementList = ElementList;
	params.SelectionOptions = SelectionOptions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
