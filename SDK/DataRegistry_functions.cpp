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

// Function DataRegistry.DataRegistrySubsystem.NotEqual_DataRegistryType
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDataRegistryType       A                              (Parm, ZeroConstructor)
// struct FDataRegistryType       B                              (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDataRegistrySubsystem::STATIC_NotEqual_DataRegistryType(const struct FDataRegistryType& A, const struct FDataRegistryType& B)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DataRegistry.DataRegistrySubsystem.NotEqual_DataRegistryType"));

	UDataRegistrySubsystem_NotEqual_DataRegistryType_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DataRegistry.DataRegistrySubsystem.NotEqual_DataRegistryId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDataRegistryId         A                              (Parm, ZeroConstructor)
// struct FDataRegistryId         B                              (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDataRegistrySubsystem::STATIC_NotEqual_DataRegistryId(const struct FDataRegistryId& A, const struct FDataRegistryId& B)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DataRegistry.DataRegistrySubsystem.NotEqual_DataRegistryId"));

	UDataRegistrySubsystem_NotEqual_DataRegistryId_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DataRegistry.DataRegistrySubsystem.IsValidDataRegistryType
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDataRegistryType       DataRegistryType               (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDataRegistrySubsystem::STATIC_IsValidDataRegistryType(const struct FDataRegistryType& DataRegistryType)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DataRegistry.DataRegistrySubsystem.IsValidDataRegistryType"));

	UDataRegistrySubsystem_IsValidDataRegistryType_Params params;
	params.DataRegistryType = DataRegistryType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DataRegistry.DataRegistrySubsystem.IsValidDataRegistryId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDataRegistryId         DataRegistryId                 (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDataRegistrySubsystem::STATIC_IsValidDataRegistryId(const struct FDataRegistryId& DataRegistryId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DataRegistry.DataRegistrySubsystem.IsValidDataRegistryId"));

	UDataRegistrySubsystem_IsValidDataRegistryId_Params params;
	params.DataRegistryId = DataRegistryId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DataRegistry.DataRegistrySubsystem.GetCachedItemFromLookupBP
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FDataRegistryId         ItemId                         (Parm, ZeroConstructor)
// struct FDataRegistryLookup     ResolvedLookup                 (ConstParm, Parm, OutParm, ReferenceParm)
// struct FTableRowBase           OutItem                        (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDataRegistrySubsystem::STATIC_GetCachedItemFromLookupBP(const struct FDataRegistryId& ItemId, const struct FDataRegistryLookup& ResolvedLookup, struct FTableRowBase* OutItem)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DataRegistry.DataRegistrySubsystem.GetCachedItemFromLookupBP"));

	UDataRegistrySubsystem_GetCachedItemFromLookupBP_Params params;
	params.ItemId = ItemId;
	params.ResolvedLookup = ResolvedLookup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutItem != nullptr)
		*OutItem = params.OutItem;

	return params.ReturnValue;
}


// Function DataRegistry.DataRegistrySubsystem.GetCachedItemBP
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FDataRegistryId         ItemId                         (Parm, ZeroConstructor)
// struct FTableRowBase           OutItem                        (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDataRegistrySubsystem::STATIC_GetCachedItemBP(const struct FDataRegistryId& ItemId, struct FTableRowBase* OutItem)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DataRegistry.DataRegistrySubsystem.GetCachedItemBP"));

	UDataRegistrySubsystem_GetCachedItemBP_Params params;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutItem != nullptr)
		*OutItem = params.OutItem;

	return params.ReturnValue;
}


// Function DataRegistry.DataRegistrySubsystem.FindCachedItemBP
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FDataRegistryId         ItemId                         (Parm, ZeroConstructor)
// enum class EDataRegistrySubsystemGetItemResult OutResult                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FTableRowBase           OutItem                        (Parm, OutParm)

void UDataRegistrySubsystem::STATIC_FindCachedItemBP(const struct FDataRegistryId& ItemId, enum class EDataRegistrySubsystemGetItemResult* OutResult, struct FTableRowBase* OutItem)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DataRegistry.DataRegistrySubsystem.FindCachedItemBP"));

	UDataRegistrySubsystem_FindCachedItemBP_Params params;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutResult != nullptr)
		*OutResult = params.OutResult;
	if (OutItem != nullptr)
		*OutItem = params.OutItem;
}


// Function DataRegistry.DataRegistrySubsystem.EvaluateDataRegistryCurve
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FDataRegistryId         ItemId                         (Parm, ZeroConstructor)
// float                          InputValue                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          DefaultValue                   (Parm, ZeroConstructor, IsPlainOldData)
// enum class EDataRegistrySubsystemGetItemResult OutResult                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutValue                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDataRegistrySubsystem::STATIC_EvaluateDataRegistryCurve(const struct FDataRegistryId& ItemId, float InputValue, float DefaultValue, enum class EDataRegistrySubsystemGetItemResult* OutResult, float* OutValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DataRegistry.DataRegistrySubsystem.EvaluateDataRegistryCurve"));

	UDataRegistrySubsystem_EvaluateDataRegistryCurve_Params params;
	params.ItemId = ItemId;
	params.InputValue = InputValue;
	params.DefaultValue = DefaultValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutResult != nullptr)
		*OutResult = params.OutResult;
	if (OutValue != nullptr)
		*OutValue = params.OutValue;
}


// Function DataRegistry.DataRegistrySubsystem.EqualEqual_DataRegistryType
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDataRegistryType       A                              (Parm, ZeroConstructor)
// struct FDataRegistryType       B                              (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDataRegistrySubsystem::STATIC_EqualEqual_DataRegistryType(const struct FDataRegistryType& A, const struct FDataRegistryType& B)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DataRegistry.DataRegistrySubsystem.EqualEqual_DataRegistryType"));

	UDataRegistrySubsystem_EqualEqual_DataRegistryType_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DataRegistry.DataRegistrySubsystem.EqualEqual_DataRegistryId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDataRegistryId         A                              (Parm, ZeroConstructor)
// struct FDataRegistryId         B                              (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDataRegistrySubsystem::STATIC_EqualEqual_DataRegistryId(const struct FDataRegistryId& A, const struct FDataRegistryId& B)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DataRegistry.DataRegistrySubsystem.EqualEqual_DataRegistryId"));

	UDataRegistrySubsystem_EqualEqual_DataRegistryId_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DataRegistry.DataRegistrySubsystem.Conv_DataRegistryTypeToString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDataRegistryType       DataRegistryType               (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UDataRegistrySubsystem::STATIC_Conv_DataRegistryTypeToString(const struct FDataRegistryType& DataRegistryType)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DataRegistry.DataRegistrySubsystem.Conv_DataRegistryTypeToString"));

	UDataRegistrySubsystem_Conv_DataRegistryTypeToString_Params params;
	params.DataRegistryType = DataRegistryType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DataRegistry.DataRegistrySubsystem.Conv_DataRegistryIdToString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDataRegistryId         DataRegistryId                 (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UDataRegistrySubsystem::STATIC_Conv_DataRegistryIdToString(const struct FDataRegistryId& DataRegistryId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DataRegistry.DataRegistrySubsystem.Conv_DataRegistryIdToString"));

	UDataRegistrySubsystem_Conv_DataRegistryIdToString_Params params;
	params.DataRegistryId = DataRegistryId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DataRegistry.DataRegistrySubsystem.AcquireItemBP
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FDataRegistryId         ItemId                         (Parm, ZeroConstructor)
// struct FScriptDelegate         AcquireCallback                (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDataRegistrySubsystem::STATIC_AcquireItemBP(const struct FDataRegistryId& ItemId, const struct FScriptDelegate& AcquireCallback)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function DataRegistry.DataRegistrySubsystem.AcquireItemBP"));

	UDataRegistrySubsystem_AcquireItemBP_Params params;
	params.ItemId = ItemId;
	params.AcquireCallback = AcquireCallback;

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
