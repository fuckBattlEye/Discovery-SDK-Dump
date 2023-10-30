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

// Function TypedElementFramework.TestTypedElementInterfaceA.SetDisplayName
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle InElementHandle                (ConstParm, Parm, OutParm, ReferenceParm)
// struct FText                   InNewName                      (Parm)
// bool                           bNotify                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTestTypedElementInterfaceA::SetDisplayName(const struct FScriptTypedElementHandle& InElementHandle, const struct FText& InNewName, bool bNotify)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TypedElementFramework.TestTypedElementInterfaceA.SetDisplayName"));

	UTestTypedElementInterfaceA_SetDisplayName_Params params;
	params.InElementHandle = InElementHandle;
	params.InNewName = InNewName;
	params.bNotify = bNotify;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TypedElementFramework.TestTypedElementInterfaceA.GetDisplayName
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle InElementHandle                (ConstParm, Parm, OutParm, ReferenceParm)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UTestTypedElementInterfaceA::GetDisplayName(const struct FScriptTypedElementHandle& InElementHandle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TypedElementFramework.TestTypedElementInterfaceA.GetDisplayName"));

	UTestTypedElementInterfaceA_GetDisplayName_Params params;
	params.InElementHandle = InElementHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TypedElementFramework.TestTypedElementInterfaceB.MarkAsTested
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle InElementHandle                (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTestTypedElementInterfaceB::MarkAsTested(const struct FScriptTypedElementHandle& InElementHandle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TypedElementFramework.TestTypedElementInterfaceB.MarkAsTested"));

	UTestTypedElementInterfaceB_MarkAsTested_Params params;
	params.InElementHandle = InElementHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TypedElementFramework.TestTypedElementInterfaceC.GetIsTested
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FScriptTypedElementHandle InElementHandle                (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTestTypedElementInterfaceC::GetIsTested(const struct FScriptTypedElementHandle& InElementHandle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TypedElementFramework.TestTypedElementInterfaceC.GetIsTested"));

	UTestTypedElementInterfaceC_GetIsTested_Params params;
	params.InElementHandle = InElementHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TypedElementFramework.TypedElementHandleLibrary.Release
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle ElementHandle                  (Parm, OutParm, ReferenceParm)

void UTypedElementHandleLibrary::STATIC_Release(struct FScriptTypedElementHandle* ElementHandle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TypedElementFramework.TypedElementHandleLibrary.Release"));

	UTypedElementHandleLibrary_Release_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ElementHandle != nullptr)
		*ElementHandle = params.ElementHandle;
}


// Function TypedElementFramework.TypedElementHandleLibrary.NotEqual
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FScriptTypedElementHandle LHS                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FScriptTypedElementHandle RHS                            (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTypedElementHandleLibrary::STATIC_NotEqual(const struct FScriptTypedElementHandle& LHS, const struct FScriptTypedElementHandle& RHS)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TypedElementFramework.TypedElementHandleLibrary.NotEqual"));

	UTypedElementHandleLibrary_NotEqual_Params params;
	params.LHS = LHS;
	params.RHS = RHS;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TypedElementFramework.TypedElementHandleLibrary.IsSet
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FScriptTypedElementHandle ElementHandle                  (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTypedElementHandleLibrary::STATIC_IsSet(const struct FScriptTypedElementHandle& ElementHandle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TypedElementFramework.TypedElementHandleLibrary.IsSet"));

	UTypedElementHandleLibrary_IsSet_Params params;
	params.ElementHandle = ElementHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TypedElementFramework.TypedElementHandleLibrary.Equal
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FScriptTypedElementHandle LHS                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FScriptTypedElementHandle RHS                            (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTypedElementHandleLibrary::STATIC_Equal(const struct FScriptTypedElementHandle& LHS, const struct FScriptTypedElementHandle& RHS)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TypedElementFramework.TypedElementHandleLibrary.Equal"));

	UTypedElementHandleLibrary_Equal_Params params;
	params.LHS = LHS;
	params.RHS = RHS;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TypedElementFramework.TypedElementListLibrary.Shrink
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementListProxy ElementList                    (Parm)

void UTypedElementListLibrary::STATIC_Shrink(const struct FScriptTypedElementListProxy& ElementList)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TypedElementFramework.TypedElementListLibrary.Shrink"));

	UTypedElementListLibrary_Shrink_Params params;
	params.ElementList = ElementList;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TypedElementFramework.TypedElementListLibrary.Reset
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementListProxy ElementList                    (Parm)

void UTypedElementListLibrary::STATIC_Reset(const struct FScriptTypedElementListProxy& ElementList)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TypedElementFramework.TypedElementListLibrary.Reset"));

	UTypedElementListLibrary_Reset_Params params;
	params.ElementList = ElementList;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TypedElementFramework.TypedElementListLibrary.Reserve
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementListProxy ElementList                    (Parm)
// int                            Size                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UTypedElementListLibrary::STATIC_Reserve(const struct FScriptTypedElementListProxy& ElementList, int Size)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TypedElementFramework.TypedElementListLibrary.Reserve"));

	UTypedElementListLibrary_Reserve_Params params;
	params.ElementList = ElementList;
	params.Size = Size;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TypedElementFramework.TypedElementListLibrary.Remove
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementListProxy ElementList                    (Parm)
// struct FScriptTypedElementHandle ElementHandle                  (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTypedElementListLibrary::STATIC_Remove(const struct FScriptTypedElementListProxy& ElementList, const struct FScriptTypedElementHandle& ElementHandle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TypedElementFramework.TypedElementListLibrary.Remove"));

	UTypedElementListLibrary_Remove_Params params;
	params.ElementList = ElementList;
	params.ElementHandle = ElementHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TypedElementFramework.TypedElementListLibrary.Num
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FScriptTypedElementListProxy ElementList                    (ConstParm, Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UTypedElementListLibrary::STATIC_Num(const struct FScriptTypedElementListProxy& ElementList)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TypedElementFramework.TypedElementListLibrary.Num"));

	UTypedElementListLibrary_Num_Params params;
	params.ElementList = ElementList;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TypedElementFramework.TypedElementListLibrary.IsValidIndex
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FScriptTypedElementListProxy ElementList                    (ConstParm, Parm)
// int                            Index                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTypedElementListLibrary::STATIC_IsValidIndex(const struct FScriptTypedElementListProxy& ElementList, int Index)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TypedElementFramework.TypedElementListLibrary.IsValidIndex"));

	UTypedElementListLibrary_IsValidIndex_Params params;
	params.ElementList = ElementList;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TypedElementFramework.TypedElementListLibrary.HasElementsOfType
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementListProxy ElementList                    (ConstParm, Parm)
// struct FName                   ElementTypeName                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTypedElementListLibrary::STATIC_HasElementsOfType(const struct FScriptTypedElementListProxy& ElementList, const struct FName& ElementTypeName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TypedElementFramework.TypedElementListLibrary.HasElementsOfType"));

	UTypedElementListLibrary_HasElementsOfType_Params params;
	params.ElementList = ElementList;
	params.ElementTypeName = ElementTypeName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TypedElementFramework.TypedElementListLibrary.HasElements
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementListProxy ElementList                    (ConstParm, Parm)
// class UClass*                  BaseInterfaceType              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTypedElementListLibrary::STATIC_HasElements(const struct FScriptTypedElementListProxy& ElementList, class UClass* BaseInterfaceType)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TypedElementFramework.TypedElementListLibrary.HasElements"));

	UTypedElementListLibrary_HasElements_Params params;
	params.ElementList = ElementList;
	params.BaseInterfaceType = BaseInterfaceType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TypedElementFramework.TypedElementListLibrary.GetElementInterface
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FScriptTypedElementListProxy ElementList                    (ConstParm, Parm)
// struct FScriptTypedElementHandle ElementHandle                  (ConstParm, Parm, OutParm, ReferenceParm)
// class UClass*                  BaseInterfaceType              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UTypedElementListLibrary::STATIC_GetElementInterface(const struct FScriptTypedElementListProxy& ElementList, const struct FScriptTypedElementHandle& ElementHandle, class UClass* BaseInterfaceType)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TypedElementFramework.TypedElementListLibrary.GetElementInterface"));

	UTypedElementListLibrary_GetElementInterface_Params params;
	params.ElementList = ElementList;
	params.ElementHandle = ElementHandle;
	params.BaseInterfaceType = BaseInterfaceType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TypedElementFramework.TypedElementListLibrary.GetElementHandles
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementListProxy ElementList                    (ConstParm, Parm)
// class UClass*                  BaseInterfaceType              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FScriptTypedElementHandle> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FScriptTypedElementHandle> UTypedElementListLibrary::STATIC_GetElementHandles(const struct FScriptTypedElementListProxy& ElementList, class UClass* BaseInterfaceType)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TypedElementFramework.TypedElementListLibrary.GetElementHandles"));

	UTypedElementListLibrary_GetElementHandles_Params params;
	params.ElementList = ElementList;
	params.BaseInterfaceType = BaseInterfaceType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TypedElementFramework.TypedElementListLibrary.GetElementHandleAt
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FScriptTypedElementListProxy ElementList                    (ConstParm, Parm)
// int                            Index                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptTypedElementHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FScriptTypedElementHandle UTypedElementListLibrary::STATIC_GetElementHandleAt(const struct FScriptTypedElementListProxy& ElementList, int Index)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TypedElementFramework.TypedElementListLibrary.GetElementHandleAt"));

	UTypedElementListLibrary_GetElementHandleAt_Params params;
	params.ElementList = ElementList;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TypedElementFramework.TypedElementListLibrary.Empty
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementListProxy ElementList                    (Parm)
// int                            Slack                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UTypedElementListLibrary::STATIC_Empty(const struct FScriptTypedElementListProxy& ElementList, int Slack)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TypedElementFramework.TypedElementListLibrary.Empty"));

	UTypedElementListLibrary_Empty_Params params;
	params.ElementList = ElementList;
	params.Slack = Slack;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TypedElementFramework.TypedElementListLibrary.CreateScriptElementList
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UTypedElementRegistry*   Registry                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptTypedElementListProxy ReturnValue                    (Parm, OutParm, ReturnParm)

struct FScriptTypedElementListProxy UTypedElementListLibrary::STATIC_CreateScriptElementList(class UTypedElementRegistry* Registry)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TypedElementFramework.TypedElementListLibrary.CreateScriptElementList"));

	UTypedElementListLibrary_CreateScriptElementList_Params params;
	params.Registry = Registry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TypedElementFramework.TypedElementListLibrary.CountElementsOfType
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementListProxy ElementList                    (ConstParm, Parm)
// struct FName                   ElementTypeName                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UTypedElementListLibrary::STATIC_CountElementsOfType(const struct FScriptTypedElementListProxy& ElementList, const struct FName& ElementTypeName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TypedElementFramework.TypedElementListLibrary.CountElementsOfType"));

	UTypedElementListLibrary_CountElementsOfType_Params params;
	params.ElementList = ElementList;
	params.ElementTypeName = ElementTypeName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TypedElementFramework.TypedElementListLibrary.CountElements
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementListProxy ElementList                    (ConstParm, Parm)
// class UClass*                  BaseInterfaceType              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UTypedElementListLibrary::STATIC_CountElements(const struct FScriptTypedElementListProxy& ElementList, class UClass* BaseInterfaceType)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TypedElementFramework.TypedElementListLibrary.CountElements"));

	UTypedElementListLibrary_CountElements_Params params;
	params.ElementList = ElementList;
	params.BaseInterfaceType = BaseInterfaceType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TypedElementFramework.TypedElementListLibrary.Contains
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FScriptTypedElementListProxy ElementList                    (ConstParm, Parm)
// struct FScriptTypedElementHandle ElementHandle                  (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTypedElementListLibrary::STATIC_Contains(const struct FScriptTypedElementListProxy& ElementList, const struct FScriptTypedElementHandle& ElementHandle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TypedElementFramework.TypedElementListLibrary.Contains"));

	UTypedElementListLibrary_Contains_Params params;
	params.ElementList = ElementList;
	params.ElementHandle = ElementHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TypedElementFramework.TypedElementListLibrary.Clone
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementListProxy ElementList                    (ConstParm, Parm)
// struct FScriptTypedElementListProxy ReturnValue                    (Parm, OutParm, ReturnParm)

struct FScriptTypedElementListProxy UTypedElementListLibrary::STATIC_Clone(const struct FScriptTypedElementListProxy& ElementList)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TypedElementFramework.TypedElementListLibrary.Clone"));

	UTypedElementListLibrary_Clone_Params params;
	params.ElementList = ElementList;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TypedElementFramework.TypedElementListLibrary.AppendList
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementListProxy ElementList                    (Parm)
// struct FScriptTypedElementListProxy OtherElementList               (ConstParm, Parm)

void UTypedElementListLibrary::STATIC_AppendList(const struct FScriptTypedElementListProxy& ElementList, const struct FScriptTypedElementListProxy& OtherElementList)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TypedElementFramework.TypedElementListLibrary.AppendList"));

	UTypedElementListLibrary_AppendList_Params params;
	params.ElementList = ElementList;
	params.OtherElementList = OtherElementList;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TypedElementFramework.TypedElementListLibrary.Append
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementListProxy ElementList                    (Parm)
// TArray<struct FScriptTypedElementHandle> ElementHandles                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTypedElementListLibrary::STATIC_Append(const struct FScriptTypedElementListProxy& ElementList, TArray<struct FScriptTypedElementHandle> ElementHandles)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TypedElementFramework.TypedElementListLibrary.Append"));

	UTypedElementListLibrary_Append_Params params;
	params.ElementList = ElementList;
	params.ElementHandles = ElementHandles;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TypedElementFramework.TypedElementListLibrary.Add
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementListProxy ElementList                    (Parm)
// struct FScriptTypedElementHandle ElementHandle                  (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTypedElementListLibrary::STATIC_Add(const struct FScriptTypedElementListProxy& ElementList, const struct FScriptTypedElementHandle& ElementHandle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TypedElementFramework.TypedElementListLibrary.Add"));

	UTypedElementListLibrary_Add_Params params;
	params.ElementList = ElementList;
	params.ElementHandle = ElementHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TypedElementFramework.TypedElementRegistry.GetInstance
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UTypedElementRegistry*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTypedElementRegistry* UTypedElementRegistry::STATIC_GetInstance()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TypedElementFramework.TypedElementRegistry.GetInstance"));

	UTypedElementRegistry_GetInstance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TypedElementFramework.TypedElementRegistry.GetElementInterface
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FScriptTypedElementHandle InElementHandle                (ConstParm, Parm, OutParm, ReferenceParm)
// class UClass*                  InBaseInterfaceType            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UTypedElementRegistry::GetElementInterface(const struct FScriptTypedElementHandle& InElementHandle, class UClass* InBaseInterfaceType)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function TypedElementFramework.TypedElementRegistry.GetElementInterface"));

	UTypedElementRegistry_GetElementInterface_Params params;
	params.InElementHandle = InElementHandle;
	params.InBaseInterfaceType = InBaseInterfaceType;

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
