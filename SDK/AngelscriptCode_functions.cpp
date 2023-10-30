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

// Function AngelscriptCode.GameplayLibrary.AsyncSaveGameToSlot
// (Final, Native, Static, Public)
// Parameters:
// class USaveGame*               SaveGameObject                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 SlotName                       (Parm, ZeroConstructor)
// int                            UserIndex                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         Delegate                       (Parm, ZeroConstructor)

void UGameplayLibrary::STATIC_AsyncSaveGameToSlot(class USaveGame* SaveGameObject, const struct FString& SlotName, int UserIndex, const struct FScriptDelegate& Delegate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.GameplayLibrary.AsyncSaveGameToSlot"));

	UGameplayLibrary_AsyncSaveGameToSlot_Params params;
	params.SaveGameObject = SaveGameObject;
	params.SlotName = SlotName;
	params.UserIndex = UserIndex;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptCode.GameplayLibrary.AsyncLoadGameFromSlot
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 SlotName                       (Parm, ZeroConstructor)
// int                            UserIndex                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         Delegate                       (Parm, ZeroConstructor)

void UGameplayLibrary::STATIC_AsyncLoadGameFromSlot(const struct FString& SlotName, int UserIndex, const struct FScriptDelegate& Delegate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.GameplayLibrary.AsyncLoadGameFromSlot"));

	UGameplayLibrary_AsyncLoadGameFromSlot_Params params;
	params.SlotName = SlotName;
	params.UserIndex = UserIndex;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptCode.GameplayTagContainerMixinLibrary.RemoveTags
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayTagContainer   GameplayTagContainer           (Parm, OutParm)
// struct FGameplayTagContainer   TagsToRemove                   (Parm)

void UGameplayTagContainerMixinLibrary::STATIC_RemoveTags(const struct FGameplayTagContainer& TagsToRemove, struct FGameplayTagContainer* GameplayTagContainer)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.GameplayTagContainerMixinLibrary.RemoveTags"));

	UGameplayTagContainerMixinLibrary_RemoveTags_Params params;
	params.TagsToRemove = TagsToRemove;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GameplayTagContainer != nullptr)
		*GameplayTagContainer = params.GameplayTagContainer;
}


// Function AngelscriptCode.GameplayTagContainerMixinLibrary.RemoveTag
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayTagContainer   GameplayTagContainer           (Parm, OutParm)
// struct FGameplayTag            TagToRemove                    (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayTagContainerMixinLibrary::STATIC_RemoveTag(const struct FGameplayTag& TagToRemove, struct FGameplayTagContainer* GameplayTagContainer)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.GameplayTagContainerMixinLibrary.RemoveTag"));

	UGameplayTagContainerMixinLibrary_RemoveTag_Params params;
	params.TagToRemove = TagToRemove;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GameplayTagContainer != nullptr)
		*GameplayTagContainer = params.GameplayTagContainer;

	return params.ReturnValue;
}


// Function AngelscriptCode.GameplayTagContainerMixinLibrary.Num
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayTagContainer   GameplayTagContainer           (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGameplayTagContainerMixinLibrary::STATIC_Num(const struct FGameplayTagContainer& GameplayTagContainer)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.GameplayTagContainerMixinLibrary.Num"));

	UGameplayTagContainerMixinLibrary_Num_Params params;
	params.GameplayTagContainer = GameplayTagContainer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptCode.GameplayTagContainerMixinLibrary.MatchesQuery
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayTagContainer   GameplayTagContainer           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagQuery       Query                          (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayTagContainerMixinLibrary::STATIC_MatchesQuery(const struct FGameplayTagContainer& GameplayTagContainer, const struct FGameplayTagQuery& Query)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.GameplayTagContainerMixinLibrary.MatchesQuery"));

	UGameplayTagContainerMixinLibrary_MatchesQuery_Params params;
	params.GameplayTagContainer = GameplayTagContainer;
	params.Query = Query;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptCode.GameplayTagContainerMixinLibrary.Last
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayTagContainer   GameplayTagContainer           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayTag UGameplayTagContainerMixinLibrary::STATIC_Last(const struct FGameplayTagContainer& GameplayTagContainer)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.GameplayTagContainerMixinLibrary.Last"));

	UGameplayTagContainerMixinLibrary_Last_Params params;
	params.GameplayTagContainer = GameplayTagContainer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptCode.GameplayTagContainerMixinLibrary.IsValid
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayTagContainer   GameplayTagContainer           (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayTagContainerMixinLibrary::STATIC_IsValid(const struct FGameplayTagContainer& GameplayTagContainer)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.GameplayTagContainerMixinLibrary.IsValid"));

	UGameplayTagContainerMixinLibrary_IsValid_Params params;
	params.GameplayTagContainer = GameplayTagContainer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptCode.GameplayTagContainerMixinLibrary.IsEmpty
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayTagContainer   GameplayTagContainer           (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayTagContainerMixinLibrary::STATIC_IsEmpty(const struct FGameplayTagContainer& GameplayTagContainer)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.GameplayTagContainerMixinLibrary.IsEmpty"));

	UGameplayTagContainerMixinLibrary_IsEmpty_Params params;
	params.GameplayTagContainer = GameplayTagContainer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptCode.GameplayTagContainerMixinLibrary.HasTagExact
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayTagContainer   GameplayTagContainer           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            TagToCheck                     (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayTagContainerMixinLibrary::STATIC_HasTagExact(const struct FGameplayTagContainer& GameplayTagContainer, const struct FGameplayTag& TagToCheck)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.GameplayTagContainerMixinLibrary.HasTagExact"));

	UGameplayTagContainerMixinLibrary_HasTagExact_Params params;
	params.GameplayTagContainer = GameplayTagContainer;
	params.TagToCheck = TagToCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptCode.GameplayTagContainerMixinLibrary.HasTag
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayTagContainer   GameplayTagContainer           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            TagToCheck                     (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayTagContainerMixinLibrary::STATIC_HasTag(const struct FGameplayTagContainer& GameplayTagContainer, const struct FGameplayTag& TagToCheck)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.GameplayTagContainerMixinLibrary.HasTag"));

	UGameplayTagContainerMixinLibrary_HasTag_Params params;
	params.GameplayTagContainer = GameplayTagContainer;
	params.TagToCheck = TagToCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptCode.GameplayTagContainerMixinLibrary.HasAnyExact
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayTagContainer   GameplayTagContainer           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   ContainerToCheck               (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayTagContainerMixinLibrary::STATIC_HasAnyExact(const struct FGameplayTagContainer& GameplayTagContainer, const struct FGameplayTagContainer& ContainerToCheck)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.GameplayTagContainerMixinLibrary.HasAnyExact"));

	UGameplayTagContainerMixinLibrary_HasAnyExact_Params params;
	params.GameplayTagContainer = GameplayTagContainer;
	params.ContainerToCheck = ContainerToCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptCode.GameplayTagContainerMixinLibrary.HasAny
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayTagContainer   GameplayTagContainer           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   ContainerToCheck               (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayTagContainerMixinLibrary::STATIC_HasAny(const struct FGameplayTagContainer& GameplayTagContainer, const struct FGameplayTagContainer& ContainerToCheck)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.GameplayTagContainerMixinLibrary.HasAny"));

	UGameplayTagContainerMixinLibrary_HasAny_Params params;
	params.GameplayTagContainer = GameplayTagContainer;
	params.ContainerToCheck = ContainerToCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptCode.GameplayTagContainerMixinLibrary.HasAllExact
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayTagContainer   GameplayTagContainer           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   ContainerToCheck               (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayTagContainerMixinLibrary::STATIC_HasAllExact(const struct FGameplayTagContainer& GameplayTagContainer, const struct FGameplayTagContainer& ContainerToCheck)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.GameplayTagContainerMixinLibrary.HasAllExact"));

	UGameplayTagContainerMixinLibrary_HasAllExact_Params params;
	params.GameplayTagContainer = GameplayTagContainer;
	params.ContainerToCheck = ContainerToCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptCode.GameplayTagContainerMixinLibrary.HasAll
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayTagContainer   GameplayTagContainer           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   ContainerToCheck               (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayTagContainerMixinLibrary::STATIC_HasAll(const struct FGameplayTagContainer& GameplayTagContainer, const struct FGameplayTagContainer& ContainerToCheck)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.GameplayTagContainerMixinLibrary.HasAll"));

	UGameplayTagContainerMixinLibrary_HasAll_Params params;
	params.GameplayTagContainer = GameplayTagContainer;
	params.ContainerToCheck = ContainerToCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptCode.GameplayTagContainerMixinLibrary.GetGameplayTagParents
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayTagContainer   GameplayTagContainer           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayTagContainer UGameplayTagContainerMixinLibrary::STATIC_GetGameplayTagParents(const struct FGameplayTagContainer& GameplayTagContainer)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.GameplayTagContainerMixinLibrary.GetGameplayTagParents"));

	UGameplayTagContainerMixinLibrary_GetGameplayTagParents_Params params;
	params.GameplayTagContainer = GameplayTagContainer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptCode.GameplayTagContainerMixinLibrary.First
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayTagContainer   GameplayTagContainer           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayTag UGameplayTagContainerMixinLibrary::STATIC_First(const struct FGameplayTagContainer& GameplayTagContainer)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.GameplayTagContainerMixinLibrary.First"));

	UGameplayTagContainerMixinLibrary_First_Params params;
	params.GameplayTagContainer = GameplayTagContainer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptCode.GameplayTagContainerMixinLibrary.FilterExact
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayTagContainer   GameplayTagContainer           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   OtherContainer                 (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayTagContainer UGameplayTagContainerMixinLibrary::STATIC_FilterExact(const struct FGameplayTagContainer& GameplayTagContainer, const struct FGameplayTagContainer& OtherContainer)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.GameplayTagContainerMixinLibrary.FilterExact"));

	UGameplayTagContainerMixinLibrary_FilterExact_Params params;
	params.GameplayTagContainer = GameplayTagContainer;
	params.OtherContainer = OtherContainer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptCode.GameplayTagContainerMixinLibrary.Filter
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayTagContainer   GameplayTagContainer           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   OtherContainer                 (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayTagContainer UGameplayTagContainerMixinLibrary::STATIC_Filter(const struct FGameplayTagContainer& GameplayTagContainer, const struct FGameplayTagContainer& OtherContainer)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.GameplayTagContainerMixinLibrary.Filter"));

	UGameplayTagContainerMixinLibrary_Filter_Params params;
	params.GameplayTagContainer = GameplayTagContainer;
	params.OtherContainer = OtherContainer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptCode.GameplayTagContainerMixinLibrary.AddTagFast
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayTagContainer   GameplayTagContainer           (Parm, OutParm)
// struct FGameplayTag            TagToAdd                       (ConstParm, Parm, OutParm, ReferenceParm)

void UGameplayTagContainerMixinLibrary::STATIC_AddTagFast(const struct FGameplayTag& TagToAdd, struct FGameplayTagContainer* GameplayTagContainer)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.GameplayTagContainerMixinLibrary.AddTagFast"));

	UGameplayTagContainerMixinLibrary_AddTagFast_Params params;
	params.TagToAdd = TagToAdd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GameplayTagContainer != nullptr)
		*GameplayTagContainer = params.GameplayTagContainer;
}


// Function AngelscriptCode.GameplayTagContainerMixinLibrary.AddTag
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayTagContainer   GameplayTagContainer           (Parm, OutParm)
// struct FGameplayTag            TagToAdd                       (ConstParm, Parm, OutParm, ReferenceParm)

void UGameplayTagContainerMixinLibrary::STATIC_AddTag(const struct FGameplayTag& TagToAdd, struct FGameplayTagContainer* GameplayTagContainer)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.GameplayTagContainerMixinLibrary.AddTag"));

	UGameplayTagContainerMixinLibrary_AddTag_Params params;
	params.TagToAdd = TagToAdd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GameplayTagContainer != nullptr)
		*GameplayTagContainer = params.GameplayTagContainer;
}


// Function AngelscriptCode.GameplayTagContainerMixinLibrary.AddLeafTag
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayTagContainer   GameplayTagContainer           (Parm, OutParm)
// struct FGameplayTag            TagToAdd                       (ConstParm, Parm, OutParm, ReferenceParm)

void UGameplayTagContainerMixinLibrary::STATIC_AddLeafTag(const struct FGameplayTag& TagToAdd, struct FGameplayTagContainer* GameplayTagContainer)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.GameplayTagContainerMixinLibrary.AddLeafTag"));

	UGameplayTagContainerMixinLibrary_AddLeafTag_Params params;
	params.TagToAdd = TagToAdd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GameplayTagContainer != nullptr)
		*GameplayTagContainer = params.GameplayTagContainer;
}


// Function AngelscriptCode.GameplayTagMixinLibrary.RequestDirectParent
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayTag            GameplayTag                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayTag UGameplayTagMixinLibrary::STATIC_RequestDirectParent(const struct FGameplayTag& GameplayTag)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.GameplayTagMixinLibrary.RequestDirectParent"));

	UGameplayTagMixinLibrary_RequestDirectParent_Params params;
	params.GameplayTag = GameplayTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptCode.GameplayTagMixinLibrary.MatchesTagExact
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayTag            GameplayTag                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            TagToCheck                     (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayTagMixinLibrary::STATIC_MatchesTagExact(const struct FGameplayTag& GameplayTag, const struct FGameplayTag& TagToCheck)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.GameplayTagMixinLibrary.MatchesTagExact"));

	UGameplayTagMixinLibrary_MatchesTagExact_Params params;
	params.GameplayTag = GameplayTag;
	params.TagToCheck = TagToCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptCode.GameplayTagMixinLibrary.MatchesTagDepth
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayTag            GameplayTag                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            TagToCheck                     (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGameplayTagMixinLibrary::STATIC_MatchesTagDepth(const struct FGameplayTag& GameplayTag, const struct FGameplayTag& TagToCheck)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.GameplayTagMixinLibrary.MatchesTagDepth"));

	UGameplayTagMixinLibrary_MatchesTagDepth_Params params;
	params.GameplayTag = GameplayTag;
	params.TagToCheck = TagToCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptCode.GameplayTagMixinLibrary.MatchesTag
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayTag            GameplayTag                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            TagToCheck                     (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayTagMixinLibrary::STATIC_MatchesTag(const struct FGameplayTag& GameplayTag, const struct FGameplayTag& TagToCheck)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.GameplayTagMixinLibrary.MatchesTag"));

	UGameplayTagMixinLibrary_MatchesTag_Params params;
	params.GameplayTag = GameplayTag;
	params.TagToCheck = TagToCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptCode.GameplayTagMixinLibrary.MatchesAnyExact
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayTag            GameplayTag                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   ContainerToCheck               (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayTagMixinLibrary::STATIC_MatchesAnyExact(const struct FGameplayTag& GameplayTag, const struct FGameplayTagContainer& ContainerToCheck)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.GameplayTagMixinLibrary.MatchesAnyExact"));

	UGameplayTagMixinLibrary_MatchesAnyExact_Params params;
	params.GameplayTag = GameplayTag;
	params.ContainerToCheck = ContainerToCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptCode.GameplayTagMixinLibrary.MatchesAny
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayTag            GameplayTag                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   ContainerToCheck               (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayTagMixinLibrary::STATIC_MatchesAny(const struct FGameplayTag& GameplayTag, const struct FGameplayTagContainer& ContainerToCheck)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.GameplayTagMixinLibrary.MatchesAny"));

	UGameplayTagMixinLibrary_MatchesAny_Params params;
	params.GameplayTag = GameplayTag;
	params.ContainerToCheck = ContainerToCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptCode.GameplayTagMixinLibrary.IsValid
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayTag            GameplayTag                    (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayTagMixinLibrary::STATIC_IsValid(const struct FGameplayTag& GameplayTag)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.GameplayTagMixinLibrary.IsValid"));

	UGameplayTagMixinLibrary_IsValid_Params params;
	params.GameplayTag = GameplayTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptCode.GameplayTagMixinLibrary.GetSingleTagContainer
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayTag            GameplayTag                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayTagContainer UGameplayTagMixinLibrary::STATIC_GetSingleTagContainer(const struct FGameplayTag& GameplayTag)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.GameplayTagMixinLibrary.GetSingleTagContainer"));

	UGameplayTagMixinLibrary_GetSingleTagContainer_Params params;
	params.GameplayTag = GameplayTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptCode.GameplayTagMixinLibrary.GetGameplayTagParents
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayTag            GameplayTag                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayTagContainer UGameplayTagMixinLibrary::STATIC_GetGameplayTagParents(const struct FGameplayTag& GameplayTag)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.GameplayTagMixinLibrary.GetGameplayTagParents"));

	UGameplayTagMixinLibrary_GetGameplayTagParents_Params params;
	params.GameplayTag = GameplayTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptCode.GameplayTagQueryMixinLibrary.Matches
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayTagQuery       GameplayTagQuery               (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   Tags                           (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayTagQueryMixinLibrary::STATIC_Matches(const struct FGameplayTagQuery& GameplayTagQuery, const struct FGameplayTagContainer& Tags)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.GameplayTagQueryMixinLibrary.Matches"));

	UGameplayTagQueryMixinLibrary_Matches_Params params;
	params.GameplayTagQuery = GameplayTagQuery;
	params.Tags = Tags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptCode.GameplayTagQueryMixinLibrary.IsEmpty
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayTagQuery       GameplayTagQuery               (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayTagQueryMixinLibrary::STATIC_IsEmpty(const struct FGameplayTagQuery& GameplayTagQuery)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.GameplayTagQueryMixinLibrary.IsEmpty"));

	UGameplayTagQueryMixinLibrary_IsEmpty_Params params;
	params.GameplayTagQuery = GameplayTagQuery;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptCode.GameplayTagQueryMixinLibrary.GetDescription
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameplayTagQuery       GameplayTagQuery               (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UGameplayTagQueryMixinLibrary::STATIC_GetDescription(const struct FGameplayTagQuery& GameplayTagQuery)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.GameplayTagQueryMixinLibrary.GetDescription"));

	UGameplayTagQueryMixinLibrary_GetDescription_Params params;
	params.GameplayTagQuery = GameplayTagQuery;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptCode.InputComponentScriptMixinLibrary.RemoveActionBindingForHandle
// (Final, Native, Static, Public)
// Parameters:
// class UInputComponent*         Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            Handle                         (Parm, ZeroConstructor, IsPlainOldData)

void UInputComponentScriptMixinLibrary::STATIC_RemoveActionBindingForHandle(class UInputComponent* Component, int Handle)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.InputComponentScriptMixinLibrary.RemoveActionBindingForHandle"));

	UInputComponentScriptMixinLibrary_RemoveActionBindingForHandle_Params params;
	params.Component = Component;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptCode.InputComponentScriptMixinLibrary.RemoveAction
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UInputComponent*         Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   ActionName                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TEnumAsByte<EInputEvent>       KeyEvent                       (Parm, ZeroConstructor, IsPlainOldData)

void UInputComponentScriptMixinLibrary::STATIC_RemoveAction(class UInputComponent* Component, const struct FName& ActionName, TEnumAsByte<EInputEvent> KeyEvent)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.InputComponentScriptMixinLibrary.RemoveAction"));

	UInputComponentScriptMixinLibrary_RemoveAction_Params params;
	params.Component = Component;
	params.ActionName = ActionName;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptCode.InputComponentScriptMixinLibrary.BindVectorAxis
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UInputComponent*         Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FKey                    AxisKey                        (ConstParm, Parm, OutParm, ReferenceParm)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UInputComponentScriptMixinLibrary::STATIC_BindVectorAxis(class UInputComponent* Component, const struct FKey& AxisKey, const struct FScriptDelegate& Delegate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.InputComponentScriptMixinLibrary.BindVectorAxis"));

	UInputComponentScriptMixinLibrary_BindVectorAxis_Params params;
	params.Component = Component;
	params.AxisKey = AxisKey;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptCode.InputComponentScriptMixinLibrary.BindKey
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UInputComponent*         Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FKey                    Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// TEnumAsByte<EInputEvent>       KeyEvent                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bConsumeInput                  (Parm, ZeroConstructor, IsPlainOldData)

void UInputComponentScriptMixinLibrary::STATIC_BindKey(class UInputComponent* Component, const struct FKey& Key, TEnumAsByte<EInputEvent> KeyEvent, const struct FScriptDelegate& Delegate, bool bConsumeInput)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.InputComponentScriptMixinLibrary.BindKey"));

	UInputComponentScriptMixinLibrary_BindKey_Params params;
	params.Component = Component;
	params.Key = Key;
	params.KeyEvent = KeyEvent;
	params.Delegate = Delegate;
	params.bConsumeInput = bConsumeInput;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptCode.InputComponentScriptMixinLibrary.BindChord
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UInputComponent*         Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FInputChord             Chord                          (ConstParm, Parm, OutParm, ReferenceParm)
// TEnumAsByte<EInputEvent>       KeyEvent                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UInputComponentScriptMixinLibrary::STATIC_BindChord(class UInputComponent* Component, const struct FInputChord& Chord, TEnumAsByte<EInputEvent> KeyEvent, const struct FScriptDelegate& Delegate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.InputComponentScriptMixinLibrary.BindChord"));

	UInputComponentScriptMixinLibrary_BindChord_Params params;
	params.Component = Component;
	params.Chord = Chord;
	params.KeyEvent = KeyEvent;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptCode.InputComponentScriptMixinLibrary.BindAxisKey
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UInputComponent*         Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   AxisKey                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bConsumeInput                  (Parm, ZeroConstructor, IsPlainOldData)

void UInputComponentScriptMixinLibrary::STATIC_BindAxisKey(class UInputComponent* Component, const struct FName& AxisKey, const struct FScriptDelegate& Delegate, bool bConsumeInput)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.InputComponentScriptMixinLibrary.BindAxisKey"));

	UInputComponentScriptMixinLibrary_BindAxisKey_Params params;
	params.Component = Component;
	params.AxisKey = AxisKey;
	params.Delegate = Delegate;
	params.bConsumeInput = bConsumeInput;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptCode.InputComponentScriptMixinLibrary.BindAxis
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UInputComponent*         Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   AxisName                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bConsumeInput                  (Parm, ZeroConstructor, IsPlainOldData)

void UInputComponentScriptMixinLibrary::STATIC_BindAxis(class UInputComponent* Component, const struct FName& AxisName, const struct FScriptDelegate& Delegate, bool bConsumeInput)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.InputComponentScriptMixinLibrary.BindAxis"));

	UInputComponentScriptMixinLibrary_BindAxis_Params params;
	params.Component = Component;
	params.AxisName = AxisName;
	params.Delegate = Delegate;
	params.bConsumeInput = bConsumeInput;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptCode.InputComponentScriptMixinLibrary.BindAction
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UInputComponent*         Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   ActionName                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TEnumAsByte<EInputEvent>       KeyEvent                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bConsumeInput                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UInputComponentScriptMixinLibrary::STATIC_BindAction(class UInputComponent* Component, const struct FName& ActionName, TEnumAsByte<EInputEvent> KeyEvent, const struct FScriptDelegate& Delegate, bool bConsumeInput)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.InputComponentScriptMixinLibrary.BindAction"));

	UInputComponentScriptMixinLibrary_BindAction_Params params;
	params.Component = Component;
	params.ActionName = ActionName;
	params.KeyEvent = KeyEvent;
	params.Delegate = Delegate;
	params.bConsumeInput = bConsumeInput;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptCode.PlayerControllerInputScriptMixinLibrary.PushInputComponent
// (Final, Native, Static, Public)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// class UInputComponent*         Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPlayerControllerInputScriptMixinLibrary::STATIC_PushInputComponent(class APlayerController* PlayerController, class UInputComponent* Component)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.PlayerControllerInputScriptMixinLibrary.PushInputComponent"));

	UPlayerControllerInputScriptMixinLibrary_PushInputComponent_Params params;
	params.PlayerController = PlayerController;
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptCode.PlayerControllerInputScriptMixinLibrary.PopInputComponent
// (Final, Native, Static, Public)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// class UInputComponent*         Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPlayerControllerInputScriptMixinLibrary::STATIC_PopInputComponent(class APlayerController* PlayerController, class UInputComponent* Component)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.PlayerControllerInputScriptMixinLibrary.PopInputComponent"));

	UPlayerControllerInputScriptMixinLibrary_PopInputComponent_Params params;
	params.PlayerController = PlayerController;
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptCode.PlayerControllerInputScriptMixinLibrary.GetPlayerInput
// (Final, Native, Static, Public)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// class UPlayerInput*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPlayerInput* UPlayerControllerInputScriptMixinLibrary::STATIC_GetPlayerInput(class APlayerController* PlayerController)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.PlayerControllerInputScriptMixinLibrary.GetPlayerInput"));

	UPlayerControllerInputScriptMixinLibrary_GetPlayerInput_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptCode.PlayerInputScriptMixinLibrary.SetMouseSensitivity
// (Final, Native, Static, Public)
// Parameters:
// class UPlayerInput*            PlayerInput                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          Sensitivity                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerInputScriptMixinLibrary::STATIC_SetMouseSensitivity(class UPlayerInput* PlayerInput, float Sensitivity)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.PlayerInputScriptMixinLibrary.SetMouseSensitivity"));

	UPlayerInputScriptMixinLibrary_SetMouseSensitivity_Params params;
	params.PlayerInput = PlayerInput;
	params.Sensitivity = Sensitivity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptCode.PlayerInputScriptMixinLibrary.RemoveAxisMapping
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UPlayerInput*            PlayerInput                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FInputAxisKeyMapping    KeyMapping                     (ConstParm, Parm, OutParm, ReferenceParm)

void UPlayerInputScriptMixinLibrary::STATIC_RemoveAxisMapping(class UPlayerInput* PlayerInput, const struct FInputAxisKeyMapping& KeyMapping)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.PlayerInputScriptMixinLibrary.RemoveAxisMapping"));

	UPlayerInputScriptMixinLibrary_RemoveAxisMapping_Params params;
	params.PlayerInput = PlayerInput;
	params.KeyMapping = KeyMapping;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptCode.PlayerInputScriptMixinLibrary.RemoveActionMapping
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UPlayerInput*            PlayerInput                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FInputActionKeyMapping  KeyMapping                     (ConstParm, Parm, OutParm, ReferenceParm)

void UPlayerInputScriptMixinLibrary::STATIC_RemoveActionMapping(class UPlayerInput* PlayerInput, const struct FInputActionKeyMapping& KeyMapping)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.PlayerInputScriptMixinLibrary.RemoveActionMapping"));

	UPlayerInputScriptMixinLibrary_RemoveActionMapping_Params params;
	params.PlayerInput = PlayerInput;
	params.KeyMapping = KeyMapping;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptCode.PlayerInputScriptMixinLibrary.InvertAxis
// (Final, Native, Static, Public)
// Parameters:
// class UPlayerInput*            PlayerInput                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   AxisName                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerInputScriptMixinLibrary::STATIC_InvertAxis(class UPlayerInput* PlayerInput, const struct FName& AxisName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.PlayerInputScriptMixinLibrary.InvertAxis"));

	UPlayerInputScriptMixinLibrary_InvertAxis_Params params;
	params.PlayerInput = PlayerInput;
	params.AxisName = AxisName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptCode.PlayerInputScriptMixinLibrary.GetMouseSensitivityY
// (Final, Native, Static, Public)
// Parameters:
// class UPlayerInput*            PlayerInput                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPlayerInputScriptMixinLibrary::STATIC_GetMouseSensitivityY(class UPlayerInput* PlayerInput)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.PlayerInputScriptMixinLibrary.GetMouseSensitivityY"));

	UPlayerInputScriptMixinLibrary_GetMouseSensitivityY_Params params;
	params.PlayerInput = PlayerInput;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptCode.PlayerInputScriptMixinLibrary.GetMouseSensitivityX
// (Final, Native, Static, Public)
// Parameters:
// class UPlayerInput*            PlayerInput                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPlayerInputScriptMixinLibrary::STATIC_GetMouseSensitivityX(class UPlayerInput* PlayerInput)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.PlayerInputScriptMixinLibrary.GetMouseSensitivityX"));

	UPlayerInputScriptMixinLibrary_GetMouseSensitivityX_Params params;
	params.PlayerInput = PlayerInput;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptCode.PlayerInputScriptMixinLibrary.GetKeysForAxis
// (Final, Native, Static, Public)
// Parameters:
// class UPlayerInput*            PlayerInput                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   AxisName                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FInputAxisKeyMapping> ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<struct FInputAxisKeyMapping> UPlayerInputScriptMixinLibrary::STATIC_GetKeysForAxis(class UPlayerInput* PlayerInput, const struct FName& AxisName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.PlayerInputScriptMixinLibrary.GetKeysForAxis"));

	UPlayerInputScriptMixinLibrary_GetKeysForAxis_Params params;
	params.PlayerInput = PlayerInput;
	params.AxisName = AxisName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptCode.PlayerInputScriptMixinLibrary.GetKeysForAction
// (Final, Native, Static, Public)
// Parameters:
// class UPlayerInput*            PlayerInput                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ActionName                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FInputActionKeyMapping> ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<struct FInputActionKeyMapping> UPlayerInputScriptMixinLibrary::STATIC_GetKeysForAction(class UPlayerInput* PlayerInput, const struct FName& ActionName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.PlayerInputScriptMixinLibrary.GetKeysForAction"));

	UPlayerInputScriptMixinLibrary_GetKeysForAction_Params params;
	params.PlayerInput = PlayerInput;
	params.ActionName = ActionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptCode.PlayerInputScriptMixinLibrary.GetEngineDefinedAxisMappings
// (Final, Native, Static, Public)
// Parameters:
// class UPlayerInput*            PlayerInput                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   AxisName                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FInputAxisKeyMapping> ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<struct FInputAxisKeyMapping> UPlayerInputScriptMixinLibrary::STATIC_GetEngineDefinedAxisMappings(class UPlayerInput* PlayerInput, const struct FName& AxisName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.PlayerInputScriptMixinLibrary.GetEngineDefinedAxisMappings"));

	UPlayerInputScriptMixinLibrary_GetEngineDefinedAxisMappings_Params params;
	params.PlayerInput = PlayerInput;
	params.AxisName = AxisName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptCode.PlayerInputScriptMixinLibrary.GetEngineDefinedActionMappings
// (Final, Native, Static, Public)
// Parameters:
// class UPlayerInput*            PlayerInput                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ActionName                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FInputActionKeyMapping> ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<struct FInputActionKeyMapping> UPlayerInputScriptMixinLibrary::STATIC_GetEngineDefinedActionMappings(class UPlayerInput* PlayerInput, const struct FName& ActionName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.PlayerInputScriptMixinLibrary.GetEngineDefinedActionMappings"));

	UPlayerInputScriptMixinLibrary_GetEngineDefinedActionMappings_Params params;
	params.PlayerInput = PlayerInput;
	params.ActionName = ActionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptCode.PlayerInputScriptMixinLibrary.ForceRebuildingKeyMaps
// (Final, Native, Static, Public)
// Parameters:
// class UPlayerInput*            PlayerInput                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRestoreDefaults               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerInputScriptMixinLibrary::STATIC_ForceRebuildingKeyMaps(class UPlayerInput* PlayerInput, bool bRestoreDefaults)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.PlayerInputScriptMixinLibrary.ForceRebuildingKeyMaps"));

	UPlayerInputScriptMixinLibrary_ForceRebuildingKeyMaps_Params params;
	params.PlayerInput = PlayerInput;
	params.bRestoreDefaults = bRestoreDefaults;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptCode.PlayerInputScriptMixinLibrary.AddAxisMapping
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UPlayerInput*            PlayerInput                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FInputAxisKeyMapping    KeyMapping                     (ConstParm, Parm, OutParm, ReferenceParm)

void UPlayerInputScriptMixinLibrary::STATIC_AddAxisMapping(class UPlayerInput* PlayerInput, const struct FInputAxisKeyMapping& KeyMapping)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.PlayerInputScriptMixinLibrary.AddAxisMapping"));

	UPlayerInputScriptMixinLibrary_AddAxisMapping_Params params;
	params.PlayerInput = PlayerInput;
	params.KeyMapping = KeyMapping;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptCode.PlayerInputScriptMixinLibrary.AddActionMapping
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UPlayerInput*            PlayerInput                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FInputActionKeyMapping  KeyMapping                     (ConstParm, Parm, OutParm, ReferenceParm)

void UPlayerInputScriptMixinLibrary::STATIC_AddActionMapping(class UPlayerInput* PlayerInput, const struct FInputActionKeyMapping& KeyMapping)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.PlayerInputScriptMixinLibrary.AddActionMapping"));

	UPlayerInputScriptMixinLibrary_AddActionMapping_Params params;
	params.PlayerInput = PlayerInput;
	params.KeyMapping = KeyMapping;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptCode.TestTerminatorComponent.ServerTerminatorReplicated
// (Net, NetReliable, Native, Event, Public, NetServer)

void UTestTerminatorComponent::ServerTerminatorReplicated()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.TestTerminatorComponent.ServerTerminatorReplicated"));

	UTestTerminatorComponent_ServerTerminatorReplicated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptCode.LatentAutomationCommand.UpdateOnClient
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULatentAutomationCommand::UpdateOnClient()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.LatentAutomationCommand.UpdateOnClient"));

	ULatentAutomationCommand_UpdateOnClient_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptCode.LatentAutomationCommand.Update
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULatentAutomationCommand::Update()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.LatentAutomationCommand.Update"));

	ULatentAutomationCommand_Update_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptCode.LatentAutomationCommand.HasAuthority
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULatentAutomationCommand::HasAuthority()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.LatentAutomationCommand.HasAuthority"));

	ULatentAutomationCommand_HasAuthority_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptCode.LatentAutomationCommand.DescribeOnClient
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString ULatentAutomationCommand::DescribeOnClient()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.LatentAutomationCommand.DescribeOnClient"));

	ULatentAutomationCommand_DescribeOnClient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptCode.LatentAutomationCommand.Describe
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString ULatentAutomationCommand::Describe()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.LatentAutomationCommand.Describe"));

	ULatentAutomationCommand_Describe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptCode.LatentAutomationCommand.BeforeOnClient
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULatentAutomationCommand::BeforeOnClient()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.LatentAutomationCommand.BeforeOnClient"));

	ULatentAutomationCommand_BeforeOnClient_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptCode.LatentAutomationCommand.Before
// (Native, Event, Public, BlueprintEvent)

void ULatentAutomationCommand::Before()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.LatentAutomationCommand.Before"));

	ULatentAutomationCommand_Before_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptCode.LatentAutomationCommand.AfterOnClient
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULatentAutomationCommand::AfterOnClient()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.LatentAutomationCommand.AfterOnClient"));

	ULatentAutomationCommand_AfterOnClient_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptCode.LatentAutomationCommand.After
// (Native, Event, Public, BlueprintEvent)

void ULatentAutomationCommand::After()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.LatentAutomationCommand.After"));

	ULatentAutomationCommand_After_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptCode.LatentAutomationCommandClientExecutor.ServerLatentCommandDescribeOnClient
// (Final, Net, NetReliable, Native, Event, Private, NetServer)
// Parameters:
// struct FString                 NewDescription                 (Parm, ZeroConstructor)

void ALatentAutomationCommandClientExecutor::ServerLatentCommandDescribeOnClient(const struct FString& NewDescription)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.LatentAutomationCommandClientExecutor.ServerLatentCommandDescribeOnClient"));

	ALatentAutomationCommandClientExecutor_ServerLatentCommandDescribeOnClient_Params params;
	params.NewDescription = NewDescription;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptCode.LatentAutomationCommandClientExecutor.ServerLatentCommandClientReady
// (Final, Net, NetReliable, Native, Event, Private, NetServer)

void ALatentAutomationCommandClientExecutor::ServerLatentCommandClientReady()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.LatentAutomationCommandClientExecutor.ServerLatentCommandClientReady"));

	ALatentAutomationCommandClientExecutor_ServerLatentCommandClientReady_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptCode.LatentAutomationCommandClientExecutor.ServerLatentCommandClientDone
// (Final, Net, NetReliable, Native, Event, Private, NetServer)

void ALatentAutomationCommandClientExecutor::ServerLatentCommandClientDone()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.LatentAutomationCommandClientExecutor.ServerLatentCommandClientDone"));

	ALatentAutomationCommandClientExecutor_ServerLatentCommandClientDone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptCode.LatentAutomationCommandClientExecutor.ServerLatentCommandClientChecked
// (Final, Net, NetReliable, Native, Event, Private, NetServer)

void ALatentAutomationCommandClientExecutor::ServerLatentCommandClientChecked()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.LatentAutomationCommandClientExecutor.ServerLatentCommandClientChecked"));

	ALatentAutomationCommandClientExecutor_ServerLatentCommandClientChecked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptCode.LatentAutomationCommandClientExecutor.ServerFail
// (Final, Net, NetReliable, Native, Event, Private, NetServer)
// Parameters:
// struct FString                 Message                        (Parm, ZeroConstructor)

void ALatentAutomationCommandClientExecutor::ServerFail(const struct FString& Message)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.LatentAutomationCommandClientExecutor.ServerFail"));

	ALatentAutomationCommandClientExecutor_ServerFail_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptCode.LatentAutomationCommandClientExecutor.ServerAssertTrue
// (Final, Net, NetReliable, Native, Event, Private, NetServer)
// Parameters:
// bool                           bExpression                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Message                        (Parm, ZeroConstructor)

void ALatentAutomationCommandClientExecutor::ServerAssertTrue(bool bExpression, const struct FString& Message)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.LatentAutomationCommandClientExecutor.ServerAssertTrue"));

	ALatentAutomationCommandClientExecutor_ServerAssertTrue_Params params;
	params.bExpression = bExpression;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptCode.LatentAutomationCommandClientExecutor.ServerAssertSame
// (Final, Net, NetReliable, Native, Event, Private, NetServer)
// Parameters:
// class UObject*                 Expected                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Actual                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Message                        (Parm, ZeroConstructor)

void ALatentAutomationCommandClientExecutor::ServerAssertSame(class UObject* Expected, class UObject* Actual, const struct FString& Message)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.LatentAutomationCommandClientExecutor.ServerAssertSame"));

	ALatentAutomationCommandClientExecutor_ServerAssertSame_Params params;
	params.Expected = Expected;
	params.Actual = Actual;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptCode.LatentAutomationCommandClientExecutor.ServerAssertNull
// (Final, Net, NetReliable, Native, Event, Private, NetServer)
// Parameters:
// class UObject*                 Object                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Message                        (Parm, ZeroConstructor)

void ALatentAutomationCommandClientExecutor::ServerAssertNull(class UObject* Object, const struct FString& Message)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.LatentAutomationCommandClientExecutor.ServerAssertNull"));

	ALatentAutomationCommandClientExecutor_ServerAssertNull_Params params;
	params.Object = Object;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptCode.LatentAutomationCommandClientExecutor.ServerAssertNotSame
// (Final, Net, NetReliable, Native, Event, Private, NetServer)
// Parameters:
// class UObject*                 Expected                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Actual                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Message                        (Parm, ZeroConstructor)

void ALatentAutomationCommandClientExecutor::ServerAssertNotSame(class UObject* Expected, class UObject* Actual, const struct FString& Message)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.LatentAutomationCommandClientExecutor.ServerAssertNotSame"));

	ALatentAutomationCommandClientExecutor_ServerAssertNotSame_Params params;
	params.Expected = Expected;
	params.Actual = Actual;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptCode.LatentAutomationCommandClientExecutor.ServerAssertNotNull
// (Final, Net, NetReliable, Native, Event, Private, NetServer)
// Parameters:
// class UObject*                 Object                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Message                        (Parm, ZeroConstructor)

void ALatentAutomationCommandClientExecutor::ServerAssertNotNull(class UObject* Object, const struct FString& Message)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.LatentAutomationCommandClientExecutor.ServerAssertNotNull"));

	ALatentAutomationCommandClientExecutor_ServerAssertNotNull_Params params;
	params.Object = Object;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptCode.LatentAutomationCommandClientExecutor.ServerAssertFalse
// (Final, Net, NetReliable, Native, Event, Private, NetServer)
// Parameters:
// bool                           bExpression                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Message                        (Parm, ZeroConstructor)

void ALatentAutomationCommandClientExecutor::ServerAssertFalse(bool bExpression, const struct FString& Message)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.LatentAutomationCommandClientExecutor.ServerAssertFalse"));

	ALatentAutomationCommandClientExecutor_ServerAssertFalse_Params params;
	params.bExpression = bExpression;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptCode.LatentAutomationCommandClientExecutor.Fail
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Message                        (Parm, ZeroConstructor)

void ALatentAutomationCommandClientExecutor::Fail(const struct FString& Message)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.LatentAutomationCommandClientExecutor.Fail"));

	ALatentAutomationCommandClientExecutor_Fail_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptCode.LatentAutomationCommandClientExecutor.AssertTrue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bExpression                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Message                        (Parm, ZeroConstructor)

void ALatentAutomationCommandClientExecutor::AssertTrue(bool bExpression, const struct FString& Message)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.LatentAutomationCommandClientExecutor.AssertTrue"));

	ALatentAutomationCommandClientExecutor_AssertTrue_Params params;
	params.bExpression = bExpression;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptCode.LatentAutomationCommandClientExecutor.AssertSame
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Expected                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Actual                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Message                        (Parm, ZeroConstructor)

void ALatentAutomationCommandClientExecutor::AssertSame(class UObject* Expected, class UObject* Actual, const struct FString& Message)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.LatentAutomationCommandClientExecutor.AssertSame"));

	ALatentAutomationCommandClientExecutor_AssertSame_Params params;
	params.Expected = Expected;
	params.Actual = Actual;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptCode.LatentAutomationCommandClientExecutor.AssertNull
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Object                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Message                        (Parm, ZeroConstructor)

void ALatentAutomationCommandClientExecutor::AssertNull(class UObject* Object, const struct FString& Message)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.LatentAutomationCommandClientExecutor.AssertNull"));

	ALatentAutomationCommandClientExecutor_AssertNull_Params params;
	params.Object = Object;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptCode.LatentAutomationCommandClientExecutor.AssertNotSame
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Expected                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Actual                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Message                        (Parm, ZeroConstructor)

void ALatentAutomationCommandClientExecutor::AssertNotSame(class UObject* Expected, class UObject* Actual, const struct FString& Message)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.LatentAutomationCommandClientExecutor.AssertNotSame"));

	ALatentAutomationCommandClientExecutor_AssertNotSame_Params params;
	params.Expected = Expected;
	params.Actual = Actual;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptCode.LatentAutomationCommandClientExecutor.AssertNotNull
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Object                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Message                        (Parm, ZeroConstructor)

void ALatentAutomationCommandClientExecutor::AssertNotNull(class UObject* Object, const struct FString& Message)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.LatentAutomationCommandClientExecutor.AssertNotNull"));

	ALatentAutomationCommandClientExecutor_AssertNotNull_Params params;
	params.Object = Object;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptCode.LatentAutomationCommandClientExecutor.AssertFalse
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bExpression                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Message                        (Parm, ZeroConstructor)

void ALatentAutomationCommandClientExecutor::AssertFalse(bool bExpression, const struct FString& Message)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.LatentAutomationCommandClientExecutor.AssertFalse"));

	ALatentAutomationCommandClientExecutor_AssertFalse_Params params;
	params.bExpression = bExpression;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptCode.RuntimeFloatCurveMixinLibrary.GetValueRange_Double
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FRuntimeFloatCurve      Target                         (ConstParm, Parm, OutParm, ReferenceParm)
// double                         MinValue                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// double                         MaxValue                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void URuntimeFloatCurveMixinLibrary::STATIC_GetValueRange_Double(const struct FRuntimeFloatCurve& Target, double* MinValue, double* MaxValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.RuntimeFloatCurveMixinLibrary.GetValueRange_Double"));

	URuntimeFloatCurveMixinLibrary_GetValueRange_Double_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MinValue != nullptr)
		*MinValue = params.MinValue;
	if (MaxValue != nullptr)
		*MaxValue = params.MaxValue;
}


// Function AngelscriptCode.RuntimeFloatCurveMixinLibrary.GetValueRange
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FRuntimeFloatCurve      Target                         (ConstParm, Parm, OutParm, ReferenceParm)
// float                          MinValue                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          MaxValue                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void URuntimeFloatCurveMixinLibrary::STATIC_GetValueRange(const struct FRuntimeFloatCurve& Target, float* MinValue, float* MaxValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.RuntimeFloatCurveMixinLibrary.GetValueRange"));

	URuntimeFloatCurveMixinLibrary_GetValueRange_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MinValue != nullptr)
		*MinValue = params.MinValue;
	if (MaxValue != nullptr)
		*MaxValue = params.MaxValue;
}


// Function AngelscriptCode.RuntimeFloatCurveMixinLibrary.GetTimeRange_Double
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FRuntimeFloatCurve      Target                         (ConstParm, Parm, OutParm, ReferenceParm)
// double                         MinTime                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// double                         MaxTime                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void URuntimeFloatCurveMixinLibrary::STATIC_GetTimeRange_Double(const struct FRuntimeFloatCurve& Target, double* MinTime, double* MaxTime)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.RuntimeFloatCurveMixinLibrary.GetTimeRange_Double"));

	URuntimeFloatCurveMixinLibrary_GetTimeRange_Double_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MinTime != nullptr)
		*MinTime = params.MinTime;
	if (MaxTime != nullptr)
		*MaxTime = params.MaxTime;
}


// Function AngelscriptCode.RuntimeFloatCurveMixinLibrary.GetTimeRange
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FRuntimeFloatCurve      Target                         (ConstParm, Parm, OutParm, ReferenceParm)
// float                          MinTime                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          MaxTime                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void URuntimeFloatCurveMixinLibrary::STATIC_GetTimeRange(const struct FRuntimeFloatCurve& Target, float* MinTime, float* MaxTime)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.RuntimeFloatCurveMixinLibrary.GetTimeRange"));

	URuntimeFloatCurveMixinLibrary_GetTimeRange_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MinTime != nullptr)
		*MinTime = params.MinTime;
	if (MaxTime != nullptr)
		*MaxTime = params.MaxTime;
}


// Function AngelscriptCode.RuntimeFloatCurveMixinLibrary.GetNumKeys
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FRuntimeFloatCurve      Target                         (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int URuntimeFloatCurveMixinLibrary::STATIC_GetNumKeys(const struct FRuntimeFloatCurve& Target)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.RuntimeFloatCurveMixinLibrary.GetNumKeys"));

	URuntimeFloatCurveMixinLibrary_GetNumKeys_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptCode.RuntimeFloatCurveMixinLibrary.GetFloatValue
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FRuntimeFloatCurve      Target                         (ConstParm, Parm, OutParm, ReferenceParm)
// float                          InTime                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          DefaultValue                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float URuntimeFloatCurveMixinLibrary::STATIC_GetFloatValue(const struct FRuntimeFloatCurve& Target, float InTime, float DefaultValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.RuntimeFloatCurveMixinLibrary.GetFloatValue"));

	URuntimeFloatCurveMixinLibrary_GetFloatValue_Params params;
	params.Target = Target;
	params.InTime = InTime;
	params.DefaultValue = DefaultValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptCode.RuntimeFloatCurveMixinLibrary.Equals
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FRuntimeFloatCurve      Target                         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FRuntimeFloatCurve      Other                          (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool URuntimeFloatCurveMixinLibrary::STATIC_Equals(const struct FRuntimeFloatCurve& Target, const struct FRuntimeFloatCurve& Other)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.RuntimeFloatCurveMixinLibrary.Equals"));

	URuntimeFloatCurveMixinLibrary_Equals_Params params;
	params.Target = Target;
	params.Other = Other;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptCode.RuntimeFloatCurveMixinLibrary.AddDefaultKey
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FRuntimeFloatCurve      Target                         (Parm, OutParm)
// float                          InTime                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void URuntimeFloatCurveMixinLibrary::STATIC_AddDefaultKey(float InTime, float InValue, struct FRuntimeFloatCurve* Target)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.RuntimeFloatCurveMixinLibrary.AddDefaultKey"));

	URuntimeFloatCurveMixinLibrary_AddDefaultKey_Params params;
	params.InTime = InTime;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Target != nullptr)
		*Target = params.Target;
}


// Function AngelscriptCode.ScriptEngineSubsystem.BP_Tick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UScriptEngineSubsystem::BP_Tick(float DeltaTime)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.ScriptEngineSubsystem.BP_Tick"));

	UScriptEngineSubsystem_BP_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptCode.ScriptEngineSubsystem.BP_ShouldCreateSubsystem
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UObject*                 Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UScriptEngineSubsystem::BP_ShouldCreateSubsystem(class UObject* Outer)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.ScriptEngineSubsystem.BP_ShouldCreateSubsystem"));

	UScriptEngineSubsystem_BP_ShouldCreateSubsystem_Params params;
	params.Outer = Outer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptCode.ScriptEngineSubsystem.BP_Initialize
// (Event, Public, BlueprintEvent)

void UScriptEngineSubsystem::BP_Initialize()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.ScriptEngineSubsystem.BP_Initialize"));

	UScriptEngineSubsystem_BP_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptCode.ScriptEngineSubsystem.BP_Deinitialize
// (Event, Public, BlueprintEvent)

void UScriptEngineSubsystem::BP_Deinitialize()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.ScriptEngineSubsystem.BP_Deinitialize"));

	UScriptEngineSubsystem_BP_Deinitialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptCode.ScriptGameInstanceSubsystem.BP_ShouldCreateSubsystem
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UObject*                 Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UScriptGameInstanceSubsystem::BP_ShouldCreateSubsystem(class UObject* Outer)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.ScriptGameInstanceSubsystem.BP_ShouldCreateSubsystem"));

	UScriptGameInstanceSubsystem_BP_ShouldCreateSubsystem_Params params;
	params.Outer = Outer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptCode.ScriptGameInstanceSubsystem.BP_Initialize
// (Event, Public, BlueprintEvent)

void UScriptGameInstanceSubsystem::BP_Initialize()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.ScriptGameInstanceSubsystem.BP_Initialize"));

	UScriptGameInstanceSubsystem_BP_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptCode.ScriptGameInstanceSubsystem.BP_GetGameInstance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UGameInstance*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGameInstance* UScriptGameInstanceSubsystem::BP_GetGameInstance()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.ScriptGameInstanceSubsystem.BP_GetGameInstance"));

	UScriptGameInstanceSubsystem_BP_GetGameInstance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptCode.ScriptGameInstanceSubsystem.BP_Deinitialize
// (Event, Public, BlueprintEvent)

void UScriptGameInstanceSubsystem::BP_Deinitialize()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.ScriptGameInstanceSubsystem.BP_Deinitialize"));

	UScriptGameInstanceSubsystem_BP_Deinitialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptCode.ScriptLocalPlayerSubsystem.BP_ShouldCreateSubsystem
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UObject*                 Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UScriptLocalPlayerSubsystem::BP_ShouldCreateSubsystem(class UObject* Outer)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.ScriptLocalPlayerSubsystem.BP_ShouldCreateSubsystem"));

	UScriptLocalPlayerSubsystem_BP_ShouldCreateSubsystem_Params params;
	params.Outer = Outer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptCode.ScriptLocalPlayerSubsystem.BP_Initialize
// (Event, Public, BlueprintEvent)

void UScriptLocalPlayerSubsystem::BP_Initialize()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.ScriptLocalPlayerSubsystem.BP_Initialize"));

	UScriptLocalPlayerSubsystem_BP_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptCode.ScriptLocalPlayerSubsystem.BP_GetLocalPlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULocalPlayer*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ULocalPlayer* UScriptLocalPlayerSubsystem::BP_GetLocalPlayer()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.ScriptLocalPlayerSubsystem.BP_GetLocalPlayer"));

	UScriptLocalPlayerSubsystem_BP_GetLocalPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptCode.ScriptLocalPlayerSubsystem.BP_Deinitialize
// (Event, Public, BlueprintEvent)

void UScriptLocalPlayerSubsystem::BP_Deinitialize()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.ScriptLocalPlayerSubsystem.BP_Deinitialize"));

	UScriptLocalPlayerSubsystem_BP_Deinitialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptCode.ScriptWorldSubsystem.BP_UpdateStreamingState
// (Event, Public, BlueprintEvent)

void UScriptWorldSubsystem::BP_UpdateStreamingState()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.ScriptWorldSubsystem.BP_UpdateStreamingState"));

	UScriptWorldSubsystem_BP_UpdateStreamingState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptCode.ScriptWorldSubsystem.BP_Tick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UScriptWorldSubsystem::BP_Tick(float DeltaTime)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.ScriptWorldSubsystem.BP_Tick"));

	UScriptWorldSubsystem_BP_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptCode.ScriptWorldSubsystem.BP_ShouldCreateSubsystem
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UObject*                 Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UScriptWorldSubsystem::BP_ShouldCreateSubsystem(class UObject* Outer)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.ScriptWorldSubsystem.BP_ShouldCreateSubsystem"));

	UScriptWorldSubsystem_BP_ShouldCreateSubsystem_Params params;
	params.Outer = Outer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptCode.ScriptWorldSubsystem.BP_PostInitialize
// (Event, Public, BlueprintEvent)

void UScriptWorldSubsystem::BP_PostInitialize()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.ScriptWorldSubsystem.BP_PostInitialize"));

	UScriptWorldSubsystem_BP_PostInitialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptCode.ScriptWorldSubsystem.BP_OnWorldComponentsUpdated
// (Event, Public, BlueprintEvent)

void UScriptWorldSubsystem::BP_OnWorldComponentsUpdated()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.ScriptWorldSubsystem.BP_OnWorldComponentsUpdated"));

	UScriptWorldSubsystem_BP_OnWorldComponentsUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptCode.ScriptWorldSubsystem.BP_OnWorldBeginPlay
// (Event, Public, BlueprintEvent)

void UScriptWorldSubsystem::BP_OnWorldBeginPlay()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.ScriptWorldSubsystem.BP_OnWorldBeginPlay"));

	UScriptWorldSubsystem_BP_OnWorldBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptCode.ScriptWorldSubsystem.BP_Initialize
// (Event, Public, BlueprintEvent)

void UScriptWorldSubsystem::BP_Initialize()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.ScriptWorldSubsystem.BP_Initialize"));

	UScriptWorldSubsystem_BP_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptCode.ScriptWorldSubsystem.BP_Deinitialize
// (Event, Public, BlueprintEvent)

void UScriptWorldSubsystem::BP_Deinitialize()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.ScriptWorldSubsystem.BP_Deinitialize"));

	UScriptWorldSubsystem_BP_Deinitialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptCode.SubsystemLibrary.GetWorldSubsystem
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData)
// class UWorldSubsystem*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWorldSubsystem* USubsystemLibrary::STATIC_GetWorldSubsystem(class UObject* WorldContextObject, class UClass* Class)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.SubsystemLibrary.GetWorldSubsystem"));

	USubsystemLibrary_GetWorldSubsystem_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptCode.SubsystemLibrary.GetLocalPlayerSubsystemFromPlayerController
// (Final, Native, Static, Public)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData)
// class ULocalPlayerSubsystem*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ULocalPlayerSubsystem* USubsystemLibrary::STATIC_GetLocalPlayerSubsystemFromPlayerController(class APlayerController* PlayerController, class UClass* Class)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.SubsystemLibrary.GetLocalPlayerSubsystemFromPlayerController"));

	USubsystemLibrary_GetLocalPlayerSubsystemFromPlayerController_Params params;
	params.PlayerController = PlayerController;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptCode.SubsystemLibrary.GetLocalPlayerSubsystemFromLocalPlayer
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class ULocalPlayer*            LocalPlayer                    (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData)
// class ULocalPlayerSubsystem*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ULocalPlayerSubsystem* USubsystemLibrary::STATIC_GetLocalPlayerSubsystemFromLocalPlayer(class UObject* WorldContextObject, class ULocalPlayer* LocalPlayer, class UClass* Class)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.SubsystemLibrary.GetLocalPlayerSubsystemFromLocalPlayer"));

	USubsystemLibrary_GetLocalPlayerSubsystemFromLocalPlayer_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LocalPlayer = LocalPlayer;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptCode.SubsystemLibrary.GetLocalPlayerSubsystem
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData)
// class ULocalPlayerSubsystem*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ULocalPlayerSubsystem* USubsystemLibrary::STATIC_GetLocalPlayerSubsystem(class UObject* WorldContextObject, class UClass* Class)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.SubsystemLibrary.GetLocalPlayerSubsystem"));

	USubsystemLibrary_GetLocalPlayerSubsystem_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptCode.SubsystemLibrary.GetGameInstanceSubsystem
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData)
// class UGameInstanceSubsystem*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGameInstanceSubsystem* USubsystemLibrary::STATIC_GetGameInstanceSubsystem(class UObject* WorldContextObject, class UClass* Class)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.SubsystemLibrary.GetGameInstanceSubsystem"));

	USubsystemLibrary_GetGameInstanceSubsystem_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptCode.SubsystemLibrary.GetEngineSubsystem
// (Final, Native, Static, Public)
// Parameters:
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData)
// class UEngineSubsystem*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UEngineSubsystem* USubsystemLibrary::STATIC_GetEngineSubsystem(class UClass* Class)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.SubsystemLibrary.GetEngineSubsystem"));

	USubsystemLibrary_GetEngineSubsystem_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptCode.TimelineComponentMixinLibrary.SetTimelineFinishedFunc
// (Final, Native, Static, Public)
// Parameters:
// class UTimelineComponent*      Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FScriptDelegate         NewTimelineFinishedFunc        (Parm, ZeroConstructor)

void UTimelineComponentMixinLibrary::STATIC_SetTimelineFinishedFunc(class UTimelineComponent* Component, const struct FScriptDelegate& NewTimelineFinishedFunc)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.TimelineComponentMixinLibrary.SetTimelineFinishedFunc"));

	UTimelineComponentMixinLibrary_SetTimelineFinishedFunc_Params params;
	params.Component = Component;
	params.NewTimelineFinishedFunc = NewTimelineFinishedFunc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptCode.TimelineComponentMixinLibrary.AddInterpVector
// (Final, Native, Static, Public)
// Parameters:
// class UTimelineComponent*      Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UCurveVector*            VectorCurve                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         InterpFunc                     (Parm, ZeroConstructor)
// struct FName                   PropertyName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   TrackName                      (Parm, ZeroConstructor, IsPlainOldData)

void UTimelineComponentMixinLibrary::STATIC_AddInterpVector(class UTimelineComponent* Component, class UCurveVector* VectorCurve, const struct FScriptDelegate& InterpFunc, const struct FName& PropertyName, const struct FName& TrackName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.TimelineComponentMixinLibrary.AddInterpVector"));

	UTimelineComponentMixinLibrary_AddInterpVector_Params params;
	params.Component = Component;
	params.VectorCurve = VectorCurve;
	params.InterpFunc = InterpFunc;
	params.PropertyName = PropertyName;
	params.TrackName = TrackName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptCode.TimelineComponentMixinLibrary.AddInterpLinearColor
// (Final, Native, Static, Public)
// Parameters:
// class UTimelineComponent*      Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UCurveLinearColor*       LinearColorCurve               (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         InterpFunc                     (Parm, ZeroConstructor)
// struct FName                   PropertyName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   TrackName                      (Parm, ZeroConstructor, IsPlainOldData)

void UTimelineComponentMixinLibrary::STATIC_AddInterpLinearColor(class UTimelineComponent* Component, class UCurveLinearColor* LinearColorCurve, const struct FScriptDelegate& InterpFunc, const struct FName& PropertyName, const struct FName& TrackName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.TimelineComponentMixinLibrary.AddInterpLinearColor"));

	UTimelineComponentMixinLibrary_AddInterpLinearColor_Params params;
	params.Component = Component;
	params.LinearColorCurve = LinearColorCurve;
	params.InterpFunc = InterpFunc;
	params.PropertyName = PropertyName;
	params.TrackName = TrackName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptCode.TimelineComponentMixinLibrary.AddInterpFloat
// (Final, Native, Static, Public)
// Parameters:
// class UTimelineComponent*      Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UCurveFloat*             FloatCurve                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         InterpFunc                     (Parm, ZeroConstructor)
// struct FName                   PropertyName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   TrackName                      (Parm, ZeroConstructor, IsPlainOldData)

void UTimelineComponentMixinLibrary::STATIC_AddInterpFloat(class UTimelineComponent* Component, class UCurveFloat* FloatCurve, const struct FScriptDelegate& InterpFunc, const struct FName& PropertyName, const struct FName& TrackName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.TimelineComponentMixinLibrary.AddInterpFloat"));

	UTimelineComponentMixinLibrary_AddInterpFloat_Params params;
	params.Component = Component;
	params.FloatCurve = FloatCurve;
	params.InterpFunc = InterpFunc;
	params.PropertyName = PropertyName;
	params.TrackName = TrackName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptCode.TimelineComponentMixinLibrary.AddEvent
// (Final, Native, Static, Public)
// Parameters:
// class UTimelineComponent*      Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         EventFunc                      (Parm, ZeroConstructor)

void UTimelineComponentMixinLibrary::STATIC_AddEvent(class UTimelineComponent* Component, float Time, const struct FScriptDelegate& EventFunc)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.TimelineComponentMixinLibrary.AddEvent"));

	UTimelineComponentMixinLibrary_AddEvent_Params params;
	params.Component = Component;
	params.Time = Time;
	params.EventFunc = EventFunc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptCode.AssetManagerMixinLibrary.GetPrimaryAssetTypeInfoList
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UAssetManager*           AssetManager                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FPrimaryAssetTypeInfo> AssetTypeInfoList              (Parm, OutParm, ZeroConstructor)

void UAssetManagerMixinLibrary::STATIC_GetPrimaryAssetTypeInfoList(class UAssetManager* AssetManager, TArray<struct FPrimaryAssetTypeInfo>* AssetTypeInfoList)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.AssetManagerMixinLibrary.GetPrimaryAssetTypeInfoList"));

	UAssetManagerMixinLibrary_GetPrimaryAssetTypeInfoList_Params params;
	params.AssetManager = AssetManager;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AssetTypeInfoList != nullptr)
		*AssetTypeInfoList = params.AssetTypeInfoList;
}


// Function AngelscriptCode.AssetManagerMixinLibrary.GetPrimaryAssetTypeInfo
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UAssetManager*           AssetManager                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FPrimaryAssetType       PrimaryAssetType               (Parm, ZeroConstructor)
// struct FPrimaryAssetTypeInfo   AssetTypeInfo                  (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAssetManagerMixinLibrary::STATIC_GetPrimaryAssetTypeInfo(class UAssetManager* AssetManager, const struct FPrimaryAssetType& PrimaryAssetType, struct FPrimaryAssetTypeInfo* AssetTypeInfo)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.AssetManagerMixinLibrary.GetPrimaryAssetTypeInfo"));

	UAssetManagerMixinLibrary_GetPrimaryAssetTypeInfo_Params params;
	params.AssetManager = AssetManager;
	params.PrimaryAssetType = PrimaryAssetType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AssetTypeInfo != nullptr)
		*AssetTypeInfo = params.AssetTypeInfo;

	return params.ReturnValue;
}


// Function AngelscriptCode.AssetManagerMixinLibrary.GetPrimaryAssetObject
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UAssetManager*           AssetManager                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FPrimaryAssetId         PrimaryAssetId                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UAssetManagerMixinLibrary::STATIC_GetPrimaryAssetObject(class UAssetManager* AssetManager, const struct FPrimaryAssetId& PrimaryAssetId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.AssetManagerMixinLibrary.GetPrimaryAssetObject"));

	UAssetManagerMixinLibrary_GetPrimaryAssetObject_Params params;
	params.AssetManager = AssetManager;
	params.PrimaryAssetId = PrimaryAssetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptCode.AssetManagerMixinLibrary.GetPrimaryAssetIdList
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UAssetManager*           AssetManager                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FPrimaryAssetType       PrimaryAssetType               (Parm, ZeroConstructor)
// TArray<struct FPrimaryAssetId> PrimaryAssetIdList             (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAssetManagerMixinLibrary::STATIC_GetPrimaryAssetIdList(class UAssetManager* AssetManager, const struct FPrimaryAssetType& PrimaryAssetType, TArray<struct FPrimaryAssetId>* PrimaryAssetIdList)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.AssetManagerMixinLibrary.GetPrimaryAssetIdList"));

	UAssetManagerMixinLibrary_GetPrimaryAssetIdList_Params params;
	params.AssetManager = AssetManager;
	params.PrimaryAssetType = PrimaryAssetType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PrimaryAssetIdList != nullptr)
		*PrimaryAssetIdList = params.PrimaryAssetIdList;

	return params.ReturnValue;
}


// Function AngelscriptCode.AssetManagerMixinLibrary.GetPrimaryAssetIdForObject
// (Final, Native, Static, Public, HasDefaults)
// Parameters:
// class UAssetManager*           AssetManager                   (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FPrimaryAssetId         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FPrimaryAssetId UAssetManagerMixinLibrary::STATIC_GetPrimaryAssetIdForObject(class UAssetManager* AssetManager, class UObject* Object)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.AssetManagerMixinLibrary.GetPrimaryAssetIdForObject"));

	UAssetManagerMixinLibrary_GetPrimaryAssetIdForObject_Params params;
	params.AssetManager = AssetManager;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AngelscriptCode.AssetManagerMixinLibrary.GetPrimaryAssetDataList
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UAssetManager*           AssetManager                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FPrimaryAssetType       PrimaryAssetType               (Parm, ZeroConstructor)
// TArray<struct FAssetData>      AssetDataList                  (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAssetManagerMixinLibrary::STATIC_GetPrimaryAssetDataList(class UAssetManager* AssetManager, const struct FPrimaryAssetType& PrimaryAssetType, TArray<struct FAssetData>* AssetDataList)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.AssetManagerMixinLibrary.GetPrimaryAssetDataList"));

	UAssetManagerMixinLibrary_GetPrimaryAssetDataList_Params params;
	params.AssetManager = AssetManager;
	params.PrimaryAssetType = PrimaryAssetType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AssetDataList != nullptr)
		*AssetDataList = params.AssetDataList;

	return params.ReturnValue;
}


// Function AngelscriptCode.AssetManagerMixinLibrary.GetPrimaryAssetData
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UAssetManager*           AssetManager                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FPrimaryAssetId         PrimaryAssetId                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FAssetData              AssetData                      (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAssetManagerMixinLibrary::STATIC_GetPrimaryAssetData(class UAssetManager* AssetManager, const struct FPrimaryAssetId& PrimaryAssetId, struct FAssetData* AssetData)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.AssetManagerMixinLibrary.GetPrimaryAssetData"));

	UAssetManagerMixinLibrary_GetPrimaryAssetData_Params params;
	params.AssetManager = AssetManager;
	params.PrimaryAssetId = PrimaryAssetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AssetData != nullptr)
		*AssetData = params.AssetData;

	return params.ReturnValue;
}


// Function AngelscriptCode.ObjectInWorld.SetWorldContext
// (Final, Native, Public)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)

void UObjectInWorld::SetWorldContext(class UObject* WorldContext)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.ObjectInWorld.SetWorldContext"));

	UObjectInWorld_SetWorldContext_Params params;
	params.WorldContext = WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptCode.ObjectInWorld.SetWorld
// (Final, Native, Public)
// Parameters:
// class UWorld*                  InWorld                        (Parm, ZeroConstructor, IsPlainOldData)

void UObjectInWorld::SetWorld(class UWorld* InWorld)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.ObjectInWorld.SetWorld"));

	UObjectInWorld_SetWorld_Params params;
	params.InWorld = InWorld;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptCode.ObjectInWorld.DestroyObject
// (Final, Native, Public)

void UObjectInWorld::DestroyObject()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.ObjectInWorld.DestroyObject"));

	UObjectInWorld_DestroyObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptCode.ObjectTickable.SetWorldContext
// (Final, Native, Public)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)

void UObjectTickable::SetWorldContext(class UObject* WorldContext)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.ObjectTickable.SetWorldContext"));

	UObjectTickable_SetWorldContext_Params params;
	params.WorldContext = WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptCode.ObjectTickable.SetWorld
// (Final, Native, Public)
// Parameters:
// class UWorld*                  InWorld                        (Parm, ZeroConstructor, IsPlainOldData)

void UObjectTickable::SetWorld(class UWorld* InWorld)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.ObjectTickable.SetWorld"));

	UObjectTickable_SetWorld_Params params;
	params.InWorld = InWorld;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptCode.ObjectTickable.DestroyObject
// (Final, Native, Public)

void UObjectTickable::DestroyObject()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.ObjectTickable.DestroyObject"));

	UObjectTickable_DestroyObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptCode.ObjectTickable.BP_Tick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UObjectTickable::BP_Tick(float DeltaTime)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.ObjectTickable.BP_Tick"));

	UObjectTickable_BP_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngelscriptCode.WidgetBlueprintStatics.CreateWidget
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  WidgetType                     (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       OwningPlayer                   (Parm, ZeroConstructor, IsPlainOldData)
// class UUserWidget*             ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUserWidget* UWidgetBlueprintStatics::STATIC_CreateWidget(class UObject* WorldContextObject, class UClass* WidgetType, class APlayerController* OwningPlayer)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function AngelscriptCode.WidgetBlueprintStatics.CreateWidget"));

	UWidgetBlueprintStatics_CreateWidget_Params params;
	params.WorldContextObject = WorldContextObject;
	params.WidgetType = WidgetType;
	params.OwningPlayer = OwningPlayer;

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
