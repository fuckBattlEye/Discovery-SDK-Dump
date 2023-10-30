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

// Function SequencerScripting.MovieSceneBindingExtensions.SetParent
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSequencerBindingProxy  InBinding                      (ConstParm, Parm, OutParm, ReferenceParm)
// struct FSequencerBindingProxy  InParentBinding                (ConstParm, Parm, OutParm, ReferenceParm)

void UMovieSceneBindingExtensions::STATIC_SetParent(const struct FSequencerBindingProxy& InBinding, const struct FSequencerBindingProxy& InParentBinding)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneBindingExtensions.SetParent"));

	UMovieSceneBindingExtensions_SetParent_Params params;
	params.InBinding = InBinding;
	params.InParentBinding = InParentBinding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneBindingExtensions.SetName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSequencerBindingProxy  InBinding                      (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 InName                         (Parm, ZeroConstructor)

void UMovieSceneBindingExtensions::STATIC_SetName(const struct FSequencerBindingProxy& InBinding, const struct FString& InName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneBindingExtensions.SetName"));

	UMovieSceneBindingExtensions_SetName_Params params;
	params.InBinding = InBinding;
	params.InName = InName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneBindingExtensions.SetDisplayName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSequencerBindingProxy  InBinding                      (ConstParm, Parm, OutParm, ReferenceParm)
// struct FText                   InDisplayName                  (ConstParm, Parm, OutParm, ReferenceParm)

void UMovieSceneBindingExtensions::STATIC_SetDisplayName(const struct FSequencerBindingProxy& InBinding, const struct FText& InDisplayName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneBindingExtensions.SetDisplayName"));

	UMovieSceneBindingExtensions_SetDisplayName_Params params;
	params.InBinding = InBinding;
	params.InDisplayName = InDisplayName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneBindingExtensions.RemoveTrack
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSequencerBindingProxy  InBinding                      (ConstParm, Parm, OutParm, ReferenceParm)
// class UMovieSceneTrack*        TrackToRemove                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMovieSceneBindingExtensions::STATIC_RemoveTrack(const struct FSequencerBindingProxy& InBinding, class UMovieSceneTrack* TrackToRemove)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneBindingExtensions.RemoveTrack"));

	UMovieSceneBindingExtensions_RemoveTrack_Params params;
	params.InBinding = InBinding;
	params.TrackToRemove = TrackToRemove;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneBindingExtensions.Remove
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSequencerBindingProxy  InBinding                      (ConstParm, Parm, OutParm, ReferenceParm)

void UMovieSceneBindingExtensions::STATIC_Remove(const struct FSequencerBindingProxy& InBinding)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneBindingExtensions.Remove"));

	UMovieSceneBindingExtensions_Remove_Params params;
	params.InBinding = InBinding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneBindingExtensions.MoveBindingContents
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSequencerBindingProxy  SourceBindingId                (ConstParm, Parm, OutParm, ReferenceParm)
// struct FSequencerBindingProxy  DestinationBindingId           (ConstParm, Parm, OutParm, ReferenceParm)

void UMovieSceneBindingExtensions::STATIC_MoveBindingContents(const struct FSequencerBindingProxy& SourceBindingId, const struct FSequencerBindingProxy& DestinationBindingId)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneBindingExtensions.MoveBindingContents"));

	UMovieSceneBindingExtensions_MoveBindingContents_Params params;
	params.SourceBindingId = SourceBindingId;
	params.DestinationBindingId = DestinationBindingId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneBindingExtensions.IsValid
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSequencerBindingProxy  InBinding                      (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMovieSceneBindingExtensions::STATIC_IsValid(const struct FSequencerBindingProxy& InBinding)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneBindingExtensions.IsValid"));

	UMovieSceneBindingExtensions_IsValid_Params params;
	params.InBinding = InBinding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneBindingExtensions.GetTracks
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSequencerBindingProxy  InBinding                      (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<class UMovieSceneTrack*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UMovieSceneTrack*> UMovieSceneBindingExtensions::STATIC_GetTracks(const struct FSequencerBindingProxy& InBinding)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneBindingExtensions.GetTracks"));

	UMovieSceneBindingExtensions_GetTracks_Params params;
	params.InBinding = InBinding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneBindingExtensions.GetPossessedObjectClass
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSequencerBindingProxy  InBinding                      (ConstParm, Parm, OutParm, ReferenceParm)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UMovieSceneBindingExtensions::STATIC_GetPossessedObjectClass(const struct FSequencerBindingProxy& InBinding)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneBindingExtensions.GetPossessedObjectClass"));

	UMovieSceneBindingExtensions_GetPossessedObjectClass_Params params;
	params.InBinding = InBinding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneBindingExtensions.GetParent
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSequencerBindingProxy  InBinding                      (ConstParm, Parm, OutParm, ReferenceParm)
// struct FSequencerBindingProxy  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSequencerBindingProxy UMovieSceneBindingExtensions::STATIC_GetParent(const struct FSequencerBindingProxy& InBinding)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneBindingExtensions.GetParent"));

	UMovieSceneBindingExtensions_GetParent_Params params;
	params.InBinding = InBinding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneBindingExtensions.GetObjectTemplate
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSequencerBindingProxy  InBinding                      (ConstParm, Parm, OutParm, ReferenceParm)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UMovieSceneBindingExtensions::STATIC_GetObjectTemplate(const struct FSequencerBindingProxy& InBinding)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneBindingExtensions.GetObjectTemplate"));

	UMovieSceneBindingExtensions_GetObjectTemplate_Params params;
	params.InBinding = InBinding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneBindingExtensions.GetName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSequencerBindingProxy  InBinding                      (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UMovieSceneBindingExtensions::STATIC_GetName(const struct FSequencerBindingProxy& InBinding)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneBindingExtensions.GetName"));

	UMovieSceneBindingExtensions_GetName_Params params;
	params.InBinding = InBinding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneBindingExtensions.GetId
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FSequencerBindingProxy  InBinding                      (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGuid                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FGuid UMovieSceneBindingExtensions::STATIC_GetId(const struct FSequencerBindingProxy& InBinding)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneBindingExtensions.GetId"));

	UMovieSceneBindingExtensions_GetId_Params params;
	params.InBinding = InBinding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneBindingExtensions.GetDisplayName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSequencerBindingProxy  InBinding                      (ConstParm, Parm, OutParm, ReferenceParm)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UMovieSceneBindingExtensions::STATIC_GetDisplayName(const struct FSequencerBindingProxy& InBinding)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneBindingExtensions.GetDisplayName"));

	UMovieSceneBindingExtensions_GetDisplayName_Params params;
	params.InBinding = InBinding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneBindingExtensions.GetChildPossessables
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSequencerBindingProxy  InBinding                      (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<struct FSequencerBindingProxy> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FSequencerBindingProxy> UMovieSceneBindingExtensions::STATIC_GetChildPossessables(const struct FSequencerBindingProxy& InBinding)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneBindingExtensions.GetChildPossessables"));

	UMovieSceneBindingExtensions_GetChildPossessables_Params params;
	params.InBinding = InBinding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneBindingExtensions.FindTracksByType
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSequencerBindingProxy  InBinding                      (ConstParm, Parm, OutParm, ReferenceParm)
// class UClass*                  TrackType                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UMovieSceneTrack*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UMovieSceneTrack*> UMovieSceneBindingExtensions::STATIC_FindTracksByType(const struct FSequencerBindingProxy& InBinding, class UClass* TrackType)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneBindingExtensions.FindTracksByType"));

	UMovieSceneBindingExtensions_FindTracksByType_Params params;
	params.InBinding = InBinding;
	params.TrackType = TrackType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneBindingExtensions.FindTracksByExactType
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSequencerBindingProxy  InBinding                      (ConstParm, Parm, OutParm, ReferenceParm)
// class UClass*                  TrackType                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UMovieSceneTrack*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UMovieSceneTrack*> UMovieSceneBindingExtensions::STATIC_FindTracksByExactType(const struct FSequencerBindingProxy& InBinding, class UClass* TrackType)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneBindingExtensions.FindTracksByExactType"));

	UMovieSceneBindingExtensions_FindTracksByExactType_Params params;
	params.InBinding = InBinding;
	params.TrackType = TrackType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneBindingExtensions.AddTrack
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSequencerBindingProxy  InBinding                      (ConstParm, Parm, OutParm, ReferenceParm)
// class UClass*                  TrackType                      (Parm, ZeroConstructor, IsPlainOldData)
// class UMovieSceneTrack*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UMovieSceneTrack* UMovieSceneBindingExtensions::STATIC_AddTrack(const struct FSequencerBindingProxy& InBinding, class UClass* TrackType)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneBindingExtensions.AddTrack"));

	UMovieSceneBindingExtensions_AddTrack_Params params;
	params.InBinding = InBinding;
	params.TrackType = TrackType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneEventTrackExtensions.GetBoundObjectPropertyClass
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FMovieSceneEvent        EventKey                       (ConstParm, Parm, OutParm, ReferenceParm)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UMovieSceneEventTrackExtensions::STATIC_GetBoundObjectPropertyClass(const struct FMovieSceneEvent& EventKey)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneEventTrackExtensions.GetBoundObjectPropertyClass"));

	UMovieSceneEventTrackExtensions_GetBoundObjectPropertyClass_Params params;
	params.EventKey = EventKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneEventTrackExtensions.AddEventTriggerSection
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneEventTrack*   InTrack                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UMovieSceneEventTriggerSection* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UMovieSceneEventTriggerSection* UMovieSceneEventTrackExtensions::STATIC_AddEventTriggerSection(class UMovieSceneEventTrack* InTrack)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneEventTrackExtensions.AddEventTriggerSection"));

	UMovieSceneEventTrackExtensions_AddEventTriggerSection_Params params;
	params.InTrack = InTrack;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneEventTrackExtensions.AddEventRepeaterSection
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneEventTrack*   InTrack                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UMovieSceneEventRepeaterSection* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UMovieSceneEventRepeaterSection* UMovieSceneEventTrackExtensions::STATIC_AddEventRepeaterSection(class UMovieSceneEventTrack* InTrack)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneEventTrackExtensions.AddEventRepeaterSection"));

	UMovieSceneEventTrackExtensions_AddEventRepeaterSection_Params params;
	params.InTrack = InTrack;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneFolderExtensions.SetFolderName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneFolder*       Folder                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   InFolderName                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMovieSceneFolderExtensions::STATIC_SetFolderName(class UMovieSceneFolder* Folder, const struct FName& InFolderName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneFolderExtensions.SetFolderName"));

	UMovieSceneFolderExtensions_SetFolderName_Params params;
	params.Folder = Folder;
	params.InFolderName = InFolderName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneFolderExtensions.SetFolderColor
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UMovieSceneFolder*       Folder                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FColor                  InFolderColor                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMovieSceneFolderExtensions::STATIC_SetFolderColor(class UMovieSceneFolder* Folder, const struct FColor& InFolderColor)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneFolderExtensions.SetFolderColor"));

	UMovieSceneFolderExtensions_SetFolderColor_Params params;
	params.Folder = Folder;
	params.InFolderColor = InFolderColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneFolderExtensions.RemoveChildObjectBinding
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneFolder*       Folder                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FSequencerBindingProxy  InObjectBinding                (ConstParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMovieSceneFolderExtensions::STATIC_RemoveChildObjectBinding(class UMovieSceneFolder* Folder, const struct FSequencerBindingProxy& InObjectBinding)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneFolderExtensions.RemoveChildObjectBinding"));

	UMovieSceneFolderExtensions_RemoveChildObjectBinding_Params params;
	params.Folder = Folder;
	params.InObjectBinding = InObjectBinding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneFolderExtensions.RemoveChildMasterTrack
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneFolder*       Folder                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UMovieSceneTrack*        InMasterTrack                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMovieSceneFolderExtensions::STATIC_RemoveChildMasterTrack(class UMovieSceneFolder* Folder, class UMovieSceneTrack* InMasterTrack)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneFolderExtensions.RemoveChildMasterTrack"));

	UMovieSceneFolderExtensions_RemoveChildMasterTrack_Params params;
	params.Folder = Folder;
	params.InMasterTrack = InMasterTrack;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneFolderExtensions.RemoveChildFolder
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneFolder*       TargetFolder                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UMovieSceneFolder*       FolderToRemove                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMovieSceneFolderExtensions::STATIC_RemoveChildFolder(class UMovieSceneFolder* TargetFolder, class UMovieSceneFolder* FolderToRemove)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneFolderExtensions.RemoveChildFolder"));

	UMovieSceneFolderExtensions_RemoveChildFolder_Params params;
	params.TargetFolder = TargetFolder;
	params.FolderToRemove = FolderToRemove;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneFolderExtensions.GetFolderName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMovieSceneFolder*       Folder                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UMovieSceneFolderExtensions::STATIC_GetFolderName(class UMovieSceneFolder* Folder)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneFolderExtensions.GetFolderName"));

	UMovieSceneFolderExtensions_GetFolderName_Params params;
	params.Folder = Folder;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneFolderExtensions.GetFolderColor
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMovieSceneFolder*       Folder                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FColor                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FColor UMovieSceneFolderExtensions::STATIC_GetFolderColor(class UMovieSceneFolder* Folder)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneFolderExtensions.GetFolderColor"));

	UMovieSceneFolderExtensions_GetFolderColor_Params params;
	params.Folder = Folder;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneFolderExtensions.GetChildObjectBindings
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMovieSceneFolder*       Folder                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TArray<struct FSequencerBindingProxy> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FSequencerBindingProxy> UMovieSceneFolderExtensions::STATIC_GetChildObjectBindings(class UMovieSceneFolder* Folder)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneFolderExtensions.GetChildObjectBindings"));

	UMovieSceneFolderExtensions_GetChildObjectBindings_Params params;
	params.Folder = Folder;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneFolderExtensions.GetChildMasterTracks
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMovieSceneFolder*       Folder                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TArray<class UMovieSceneTrack*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UMovieSceneTrack*> UMovieSceneFolderExtensions::STATIC_GetChildMasterTracks(class UMovieSceneFolder* Folder)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneFolderExtensions.GetChildMasterTracks"));

	UMovieSceneFolderExtensions_GetChildMasterTracks_Params params;
	params.Folder = Folder;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneFolderExtensions.GetChildFolders
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMovieSceneFolder*       Folder                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TArray<class UMovieSceneFolder*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UMovieSceneFolder*> UMovieSceneFolderExtensions::STATIC_GetChildFolders(class UMovieSceneFolder* Folder)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneFolderExtensions.GetChildFolders"));

	UMovieSceneFolderExtensions_GetChildFolders_Params params;
	params.Folder = Folder;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneFolderExtensions.AddChildObjectBinding
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneFolder*       Folder                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FSequencerBindingProxy  InObjectBinding                (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMovieSceneFolderExtensions::STATIC_AddChildObjectBinding(class UMovieSceneFolder* Folder, const struct FSequencerBindingProxy& InObjectBinding)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneFolderExtensions.AddChildObjectBinding"));

	UMovieSceneFolderExtensions_AddChildObjectBinding_Params params;
	params.Folder = Folder;
	params.InObjectBinding = InObjectBinding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneFolderExtensions.AddChildMasterTrack
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneFolder*       Folder                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UMovieSceneTrack*        InMasterTrack                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMovieSceneFolderExtensions::STATIC_AddChildMasterTrack(class UMovieSceneFolder* Folder, class UMovieSceneTrack* InMasterTrack)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneFolderExtensions.AddChildMasterTrack"));

	UMovieSceneFolderExtensions_AddChildMasterTrack_Params params;
	params.Folder = Folder;
	params.InMasterTrack = InMasterTrack;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneFolderExtensions.AddChildFolder
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneFolder*       TargetFolder                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UMovieSceneFolder*       FolderToAdd                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMovieSceneFolderExtensions::STATIC_AddChildFolder(class UMovieSceneFolder* TargetFolder, class UMovieSceneFolder* FolderToAdd)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneFolderExtensions.AddChildFolder"));

	UMovieSceneFolderExtensions_AddChildFolder_Params params;
	params.TargetFolder = TargetFolder;
	params.FolderToAdd = FolderToAdd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieScenePropertyTrackExtensions.SetPropertyNameAndPath
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UMovieScenePropertyTrack* Track                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   InPropertyName                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 InPropertyPath                 (Parm, ZeroConstructor)

void UMovieScenePropertyTrackExtensions::STATIC_SetPropertyNameAndPath(class UMovieScenePropertyTrack* Track, const struct FName& InPropertyName, const struct FString& InPropertyPath)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieScenePropertyTrackExtensions.SetPropertyNameAndPath"));

	UMovieScenePropertyTrackExtensions_SetPropertyNameAndPath_Params params;
	params.Track = Track;
	params.InPropertyName = InPropertyName;
	params.InPropertyPath = InPropertyPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieScenePropertyTrackExtensions.SetObjectPropertyClass
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneObjectPropertyTrack* Track                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UClass*                  PropertyClass                  (Parm, ZeroConstructor, IsPlainOldData)

void UMovieScenePropertyTrackExtensions::STATIC_SetObjectPropertyClass(class UMovieSceneObjectPropertyTrack* Track, class UClass* PropertyClass)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieScenePropertyTrackExtensions.SetObjectPropertyClass"));

	UMovieScenePropertyTrackExtensions_SetObjectPropertyClass_Params params;
	params.Track = Track;
	params.PropertyClass = PropertyClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieScenePropertyTrackExtensions.GetUniqueTrackName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieScenePropertyTrack* Track                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UMovieScenePropertyTrackExtensions::STATIC_GetUniqueTrackName(class UMovieScenePropertyTrack* Track)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieScenePropertyTrackExtensions.GetUniqueTrackName"));

	UMovieScenePropertyTrackExtensions_GetUniqueTrackName_Params params;
	params.Track = Track;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieScenePropertyTrackExtensions.GetPropertyPath
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieScenePropertyTrack* Track                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UMovieScenePropertyTrackExtensions::STATIC_GetPropertyPath(class UMovieScenePropertyTrack* Track)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieScenePropertyTrackExtensions.GetPropertyPath"));

	UMovieScenePropertyTrackExtensions_GetPropertyPath_Params params;
	params.Track = Track;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieScenePropertyTrackExtensions.GetPropertyName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieScenePropertyTrack* Track                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UMovieScenePropertyTrackExtensions::STATIC_GetPropertyName(class UMovieScenePropertyTrack* Track)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieScenePropertyTrackExtensions.GetPropertyName"));

	UMovieScenePropertyTrackExtensions_GetPropertyName_Params params;
	params.Track = Track;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieScenePropertyTrackExtensions.GetObjectPropertyClass
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneObjectPropertyTrack* Track                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UMovieScenePropertyTrackExtensions::STATIC_GetObjectPropertyClass(class UMovieSceneObjectPropertyTrack* Track)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieScenePropertyTrackExtensions.GetObjectPropertyClass"));

	UMovieScenePropertyTrackExtensions_GetObjectPropertyClass_Params params;
	params.Track = Track;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingActorReferenceKey.SetValue
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingID InNewValue                     (ConstParm, Parm, OutParm, ReferenceParm)

void UMovieSceneScriptingActorReferenceKey::SetValue(const struct FMovieSceneObjectBindingID& InNewValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingActorReferenceKey.SetValue"));

	UMovieSceneScriptingActorReferenceKey_SetValue_Params params;
	params.InNewValue = InNewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneScriptingActorReferenceKey.SetTime
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FFrameNumber            NewFrameNumber                 (ConstParm, Parm, OutParm, ReferenceParm)
// float                          SubFrame                       (Parm, ZeroConstructor, IsPlainOldData)
// enum class ESequenceTimeUnit   TimeUnit                       (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneScriptingActorReferenceKey::SetTime(const struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingActorReferenceKey.SetTime"));

	UMovieSceneScriptingActorReferenceKey_SetTime_Params params;
	params.NewFrameNumber = NewFrameNumber;
	params.SubFrame = SubFrame;
	params.TimeUnit = TimeUnit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneScriptingActorReferenceKey.GetValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMovieSceneObjectBindingID ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMovieSceneObjectBindingID UMovieSceneScriptingActorReferenceKey::GetValue()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingActorReferenceKey.GetValue"));

	UMovieSceneScriptingActorReferenceKey_GetValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingActorReferenceKey.GetTime
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ESequenceTimeUnit   TimeUnit                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FFrameTime              ReturnValue                    (Parm, OutParm, ReturnParm)

struct FFrameTime UMovieSceneScriptingActorReferenceKey::GetTime(enum class ESequenceTimeUnit TimeUnit)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingActorReferenceKey.GetTime"));

	UMovieSceneScriptingActorReferenceKey_GetTime_Params params;
	params.TimeUnit = TimeUnit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.SetDefault
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingID InDefaultValue                 (Parm)

void UMovieSceneScriptingActorReferenceChannel::SetDefault(const struct FMovieSceneObjectBindingID& InDefaultValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.SetDefault"));

	UMovieSceneScriptingActorReferenceChannel_SetDefault_Params params;
	params.InDefaultValue = InDefaultValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.RemoveKey
// (Native, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneScriptingKey* Key                            (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneScriptingActorReferenceChannel::RemoveKey(class UMovieSceneScriptingKey* Key)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.RemoveKey"));

	UMovieSceneScriptingActorReferenceChannel_RemoveKey_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.RemoveDefault
// (Final, Native, Public, BlueprintCallable)

void UMovieSceneScriptingActorReferenceChannel::RemoveDefault()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.RemoveDefault"));

	UMovieSceneScriptingActorReferenceChannel_RemoveDefault_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.HasDefault
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMovieSceneScriptingActorReferenceChannel::HasDefault()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.HasDefault"));

	UMovieSceneScriptingActorReferenceChannel_HasDefault_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.GetKeys
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UMovieSceneScriptingKey*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UMovieSceneScriptingKey*> UMovieSceneScriptingActorReferenceChannel::GetKeys()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.GetKeys"));

	UMovieSceneScriptingActorReferenceChannel_GetKeys_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.GetDefault
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMovieSceneObjectBindingID ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMovieSceneObjectBindingID UMovieSceneScriptingActorReferenceChannel::GetDefault()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.GetDefault"));

	UMovieSceneScriptingActorReferenceChannel_GetDefault_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.AddKey
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FFrameNumber            InTime                         (ConstParm, Parm)
// struct FMovieSceneObjectBindingID NewValue                       (Parm)
// float                          SubFrame                       (Parm, ZeroConstructor, IsPlainOldData)
// enum class ESequenceTimeUnit   TimeUnit                       (Parm, ZeroConstructor, IsPlainOldData)
// class UMovieSceneScriptingActorReferenceKey* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMovieSceneScriptingActorReferenceKey* UMovieSceneScriptingActorReferenceChannel::AddKey(const struct FFrameNumber& InTime, const struct FMovieSceneObjectBindingID& NewValue, float SubFrame, enum class ESequenceTimeUnit TimeUnit)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.AddKey"));

	UMovieSceneScriptingActorReferenceChannel_AddKey_Params params;
	params.InTime = InTime;
	params.NewValue = NewValue;
	params.SubFrame = SubFrame;
	params.TimeUnit = TimeUnit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingBoolKey.SetValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InNewValue                     (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneScriptingBoolKey::SetValue(bool InNewValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingBoolKey.SetValue"));

	UMovieSceneScriptingBoolKey_SetValue_Params params;
	params.InNewValue = InNewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneScriptingBoolKey.SetTime
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FFrameNumber            NewFrameNumber                 (ConstParm, Parm, OutParm, ReferenceParm)
// float                          SubFrame                       (Parm, ZeroConstructor, IsPlainOldData)
// enum class ESequenceTimeUnit   TimeUnit                       (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneScriptingBoolKey::SetTime(const struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingBoolKey.SetTime"));

	UMovieSceneScriptingBoolKey_SetTime_Params params;
	params.NewFrameNumber = NewFrameNumber;
	params.SubFrame = SubFrame;
	params.TimeUnit = TimeUnit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneScriptingBoolKey.GetValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMovieSceneScriptingBoolKey::GetValue()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingBoolKey.GetValue"));

	UMovieSceneScriptingBoolKey_GetValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingBoolKey.GetTime
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ESequenceTimeUnit   TimeUnit                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FFrameTime              ReturnValue                    (Parm, OutParm, ReturnParm)

struct FFrameTime UMovieSceneScriptingBoolKey::GetTime(enum class ESequenceTimeUnit TimeUnit)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingBoolKey.GetTime"));

	UMovieSceneScriptingBoolKey_GetTime_Params params;
	params.TimeUnit = TimeUnit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingBoolChannel.SetDefault
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InDefaultValue                 (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneScriptingBoolChannel::SetDefault(bool InDefaultValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingBoolChannel.SetDefault"));

	UMovieSceneScriptingBoolChannel_SetDefault_Params params;
	params.InDefaultValue = InDefaultValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneScriptingBoolChannel.RemoveKey
// (Native, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneScriptingKey* Key                            (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneScriptingBoolChannel::RemoveKey(class UMovieSceneScriptingKey* Key)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingBoolChannel.RemoveKey"));

	UMovieSceneScriptingBoolChannel_RemoveKey_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneScriptingBoolChannel.RemoveDefault
// (Final, Native, Public, BlueprintCallable)

void UMovieSceneScriptingBoolChannel::RemoveDefault()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingBoolChannel.RemoveDefault"));

	UMovieSceneScriptingBoolChannel_RemoveDefault_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneScriptingBoolChannel.HasDefault
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMovieSceneScriptingBoolChannel::HasDefault()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingBoolChannel.HasDefault"));

	UMovieSceneScriptingBoolChannel_HasDefault_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingBoolChannel.GetNumKeys
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMovieSceneScriptingBoolChannel::GetNumKeys()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingBoolChannel.GetNumKeys"));

	UMovieSceneScriptingBoolChannel_GetNumKeys_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingBoolChannel.GetKeys
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UMovieSceneScriptingKey*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UMovieSceneScriptingKey*> UMovieSceneScriptingBoolChannel::GetKeys()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingBoolChannel.GetKeys"));

	UMovieSceneScriptingBoolChannel_GetKeys_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingBoolChannel.GetDefault
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMovieSceneScriptingBoolChannel::GetDefault()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingBoolChannel.GetDefault"));

	UMovieSceneScriptingBoolChannel_GetDefault_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingBoolChannel.EvaluateKeys
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSequencerScriptingRange Range                          (Parm)
// struct FFrameRate              FrameRate                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<bool>                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<bool> UMovieSceneScriptingBoolChannel::EvaluateKeys(const struct FSequencerScriptingRange& Range, const struct FFrameRate& FrameRate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingBoolChannel.EvaluateKeys"));

	UMovieSceneScriptingBoolChannel_EvaluateKeys_Params params;
	params.Range = Range;
	params.FrameRate = FrameRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingBoolChannel.ComputeEffectiveRange
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSequencerScriptingRange ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSequencerScriptingRange UMovieSceneScriptingBoolChannel::ComputeEffectiveRange()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingBoolChannel.ComputeEffectiveRange"));

	UMovieSceneScriptingBoolChannel_ComputeEffectiveRange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingBoolChannel.AddKey
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FFrameNumber            InTime                         (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           NewValue                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          SubFrame                       (Parm, ZeroConstructor, IsPlainOldData)
// enum class ESequenceTimeUnit   TimeUnit                       (Parm, ZeroConstructor, IsPlainOldData)
// class UMovieSceneScriptingBoolKey* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMovieSceneScriptingBoolKey* UMovieSceneScriptingBoolChannel::AddKey(const struct FFrameNumber& InTime, bool NewValue, float SubFrame, enum class ESequenceTimeUnit TimeUnit)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingBoolChannel.AddKey"));

	UMovieSceneScriptingBoolChannel_AddKey_Params params;
	params.InTime = InTime;
	params.NewValue = NewValue;
	params.SubFrame = SubFrame;
	params.TimeUnit = TimeUnit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingByteKey.SetValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// unsigned char                  InNewValue                     (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneScriptingByteKey::SetValue(unsigned char InNewValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingByteKey.SetValue"));

	UMovieSceneScriptingByteKey_SetValue_Params params;
	params.InNewValue = InNewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneScriptingByteKey.SetTime
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FFrameNumber            NewFrameNumber                 (ConstParm, Parm, OutParm, ReferenceParm)
// float                          SubFrame                       (Parm, ZeroConstructor, IsPlainOldData)
// enum class ESequenceTimeUnit   TimeUnit                       (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneScriptingByteKey::SetTime(const struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingByteKey.SetTime"));

	UMovieSceneScriptingByteKey_SetTime_Params params;
	params.NewFrameNumber = NewFrameNumber;
	params.SubFrame = SubFrame;
	params.TimeUnit = TimeUnit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneScriptingByteKey.GetValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char UMovieSceneScriptingByteKey::GetValue()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingByteKey.GetValue"));

	UMovieSceneScriptingByteKey_GetValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingByteKey.GetTime
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ESequenceTimeUnit   TimeUnit                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FFrameTime              ReturnValue                    (Parm, OutParm, ReturnParm)

struct FFrameTime UMovieSceneScriptingByteKey::GetTime(enum class ESequenceTimeUnit TimeUnit)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingByteKey.GetTime"));

	UMovieSceneScriptingByteKey_GetTime_Params params;
	params.TimeUnit = TimeUnit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingByteChannel.SetDefault
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// unsigned char                  InDefaultValue                 (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneScriptingByteChannel::SetDefault(unsigned char InDefaultValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingByteChannel.SetDefault"));

	UMovieSceneScriptingByteChannel_SetDefault_Params params;
	params.InDefaultValue = InDefaultValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneScriptingByteChannel.RemoveKey
// (Native, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneScriptingKey* Key                            (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneScriptingByteChannel::RemoveKey(class UMovieSceneScriptingKey* Key)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingByteChannel.RemoveKey"));

	UMovieSceneScriptingByteChannel_RemoveKey_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneScriptingByteChannel.RemoveDefault
// (Final, Native, Public, BlueprintCallable)

void UMovieSceneScriptingByteChannel::RemoveDefault()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingByteChannel.RemoveDefault"));

	UMovieSceneScriptingByteChannel_RemoveDefault_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneScriptingByteChannel.HasDefault
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMovieSceneScriptingByteChannel::HasDefault()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingByteChannel.HasDefault"));

	UMovieSceneScriptingByteChannel_HasDefault_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingByteChannel.GetKeys
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UMovieSceneScriptingKey*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UMovieSceneScriptingKey*> UMovieSceneScriptingByteChannel::GetKeys()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingByteChannel.GetKeys"));

	UMovieSceneScriptingByteChannel_GetKeys_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingByteChannel.GetDefault
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char UMovieSceneScriptingByteChannel::GetDefault()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingByteChannel.GetDefault"));

	UMovieSceneScriptingByteChannel_GetDefault_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingByteChannel.AddKey
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FFrameNumber            InTime                         (ConstParm, Parm, OutParm, ReferenceParm)
// unsigned char                  NewValue                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          SubFrame                       (Parm, ZeroConstructor, IsPlainOldData)
// enum class ESequenceTimeUnit   TimeUnit                       (Parm, ZeroConstructor, IsPlainOldData)
// enum class EMovieSceneKeyInterpolation InInterpolation                (Parm, ZeroConstructor, IsPlainOldData)
// class UMovieSceneScriptingByteKey* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMovieSceneScriptingByteKey* UMovieSceneScriptingByteChannel::AddKey(const struct FFrameNumber& InTime, unsigned char NewValue, float SubFrame, enum class ESequenceTimeUnit TimeUnit, enum class EMovieSceneKeyInterpolation InInterpolation)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingByteChannel.AddKey"));

	UMovieSceneScriptingByteChannel_AddKey_Params params;
	params.InTime = InTime;
	params.NewValue = NewValue;
	params.SubFrame = SubFrame;
	params.TimeUnit = TimeUnit;
	params.InInterpolation = InInterpolation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingDoubleKey.SetValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// double                         InNewValue                     (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneScriptingDoubleKey::SetValue(double InNewValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingDoubleKey.SetValue"));

	UMovieSceneScriptingDoubleKey_SetValue_Params params;
	params.InNewValue = InNewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneScriptingDoubleKey.SetTime
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FFrameNumber            NewFrameNumber                 (ConstParm, Parm, OutParm, ReferenceParm)
// float                          SubFrame                       (Parm, ZeroConstructor, IsPlainOldData)
// enum class ESequenceTimeUnit   TimeUnit                       (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneScriptingDoubleKey::SetTime(const struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingDoubleKey.SetTime"));

	UMovieSceneScriptingDoubleKey_SetTime_Params params;
	params.NewFrameNumber = NewFrameNumber;
	params.SubFrame = SubFrame;
	params.TimeUnit = TimeUnit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneScriptingDoubleKey.SetTangentWeightMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ERichCurveTangentWeightMode> InNewValue                     (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneScriptingDoubleKey::SetTangentWeightMode(TEnumAsByte<ERichCurveTangentWeightMode> InNewValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingDoubleKey.SetTangentWeightMode"));

	UMovieSceneScriptingDoubleKey_SetTangentWeightMode_Params params;
	params.InNewValue = InNewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneScriptingDoubleKey.SetTangentMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ERichCurveTangentMode> InNewValue                     (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneScriptingDoubleKey::SetTangentMode(TEnumAsByte<ERichCurveTangentMode> InNewValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingDoubleKey.SetTangentMode"));

	UMovieSceneScriptingDoubleKey_SetTangentMode_Params params;
	params.InNewValue = InNewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneScriptingDoubleKey.SetLeaveTangentWeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InNewValue                     (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneScriptingDoubleKey::SetLeaveTangentWeight(float InNewValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingDoubleKey.SetLeaveTangentWeight"));

	UMovieSceneScriptingDoubleKey_SetLeaveTangentWeight_Params params;
	params.InNewValue = InNewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneScriptingDoubleKey.SetLeaveTangent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InNewValue                     (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneScriptingDoubleKey::SetLeaveTangent(float InNewValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingDoubleKey.SetLeaveTangent"));

	UMovieSceneScriptingDoubleKey_SetLeaveTangent_Params params;
	params.InNewValue = InNewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneScriptingDoubleKey.SetInterpolationMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ERichCurveInterpMode> InNewValue                     (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneScriptingDoubleKey::SetInterpolationMode(TEnumAsByte<ERichCurveInterpMode> InNewValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingDoubleKey.SetInterpolationMode"));

	UMovieSceneScriptingDoubleKey_SetInterpolationMode_Params params;
	params.InNewValue = InNewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneScriptingDoubleKey.SetArriveTangentWeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InNewValue                     (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneScriptingDoubleKey::SetArriveTangentWeight(float InNewValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingDoubleKey.SetArriveTangentWeight"));

	UMovieSceneScriptingDoubleKey_SetArriveTangentWeight_Params params;
	params.InNewValue = InNewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneScriptingDoubleKey.SetArriveTangent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InNewValue                     (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneScriptingDoubleKey::SetArriveTangent(float InNewValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingDoubleKey.SetArriveTangent"));

	UMovieSceneScriptingDoubleKey_SetArriveTangent_Params params;
	params.InNewValue = InNewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneScriptingDoubleKey.GetValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// double                         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

double UMovieSceneScriptingDoubleKey::GetValue()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingDoubleKey.GetValue"));

	UMovieSceneScriptingDoubleKey_GetValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingDoubleKey.GetTime
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ESequenceTimeUnit   TimeUnit                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FFrameTime              ReturnValue                    (Parm, OutParm, ReturnParm)

struct FFrameTime UMovieSceneScriptingDoubleKey::GetTime(enum class ESequenceTimeUnit TimeUnit)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingDoubleKey.GetTime"));

	UMovieSceneScriptingDoubleKey_GetTime_Params params;
	params.TimeUnit = TimeUnit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingDoubleKey.GetTangentWeightMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<ERichCurveTangentWeightMode> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ERichCurveTangentWeightMode> UMovieSceneScriptingDoubleKey::GetTangentWeightMode()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingDoubleKey.GetTangentWeightMode"));

	UMovieSceneScriptingDoubleKey_GetTangentWeightMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingDoubleKey.GetTangentMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<ERichCurveTangentMode> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ERichCurveTangentMode> UMovieSceneScriptingDoubleKey::GetTangentMode()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingDoubleKey.GetTangentMode"));

	UMovieSceneScriptingDoubleKey_GetTangentMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingDoubleKey.GetLeaveTangentWeight
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMovieSceneScriptingDoubleKey::GetLeaveTangentWeight()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingDoubleKey.GetLeaveTangentWeight"));

	UMovieSceneScriptingDoubleKey_GetLeaveTangentWeight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingDoubleKey.GetLeaveTangent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMovieSceneScriptingDoubleKey::GetLeaveTangent()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingDoubleKey.GetLeaveTangent"));

	UMovieSceneScriptingDoubleKey_GetLeaveTangent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingDoubleKey.GetInterpolationMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<ERichCurveInterpMode> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ERichCurveInterpMode> UMovieSceneScriptingDoubleKey::GetInterpolationMode()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingDoubleKey.GetInterpolationMode"));

	UMovieSceneScriptingDoubleKey_GetInterpolationMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingDoubleKey.GetArriveTangentWeight
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMovieSceneScriptingDoubleKey::GetArriveTangentWeight()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingDoubleKey.GetArriveTangentWeight"));

	UMovieSceneScriptingDoubleKey_GetArriveTangentWeight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingDoubleKey.GetArriveTangent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMovieSceneScriptingDoubleKey::GetArriveTangent()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingDoubleKey.GetArriveTangent"));

	UMovieSceneScriptingDoubleKey_GetArriveTangent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingDoubleChannel.SetPreInfinityExtrapolation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ERichCurveExtrapolation> InExtrapolation                (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneScriptingDoubleChannel::SetPreInfinityExtrapolation(TEnumAsByte<ERichCurveExtrapolation> InExtrapolation)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingDoubleChannel.SetPreInfinityExtrapolation"));

	UMovieSceneScriptingDoubleChannel_SetPreInfinityExtrapolation_Params params;
	params.InExtrapolation = InExtrapolation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneScriptingDoubleChannel.SetPostInfinityExtrapolation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ERichCurveExtrapolation> InExtrapolation                (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneScriptingDoubleChannel::SetPostInfinityExtrapolation(TEnumAsByte<ERichCurveExtrapolation> InExtrapolation)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingDoubleChannel.SetPostInfinityExtrapolation"));

	UMovieSceneScriptingDoubleChannel_SetPostInfinityExtrapolation_Params params;
	params.InExtrapolation = InExtrapolation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneScriptingDoubleChannel.SetDefault
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// double                         InDefaultValue                 (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneScriptingDoubleChannel::SetDefault(double InDefaultValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingDoubleChannel.SetDefault"));

	UMovieSceneScriptingDoubleChannel_SetDefault_Params params;
	params.InDefaultValue = InDefaultValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneScriptingDoubleChannel.RemoveKey
// (Native, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneScriptingKey* Key                            (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneScriptingDoubleChannel::RemoveKey(class UMovieSceneScriptingKey* Key)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingDoubleChannel.RemoveKey"));

	UMovieSceneScriptingDoubleChannel_RemoveKey_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneScriptingDoubleChannel.RemoveDefault
// (Final, Native, Public, BlueprintCallable)

void UMovieSceneScriptingDoubleChannel::RemoveDefault()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingDoubleChannel.RemoveDefault"));

	UMovieSceneScriptingDoubleChannel_RemoveDefault_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneScriptingDoubleChannel.HasDefault
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMovieSceneScriptingDoubleChannel::HasDefault()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingDoubleChannel.HasDefault"));

	UMovieSceneScriptingDoubleChannel_HasDefault_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingDoubleChannel.GetPreInfinityExtrapolation
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<ERichCurveExtrapolation> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ERichCurveExtrapolation> UMovieSceneScriptingDoubleChannel::GetPreInfinityExtrapolation()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingDoubleChannel.GetPreInfinityExtrapolation"));

	UMovieSceneScriptingDoubleChannel_GetPreInfinityExtrapolation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingDoubleChannel.GetPostInfinityExtrapolation
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<ERichCurveExtrapolation> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ERichCurveExtrapolation> UMovieSceneScriptingDoubleChannel::GetPostInfinityExtrapolation()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingDoubleChannel.GetPostInfinityExtrapolation"));

	UMovieSceneScriptingDoubleChannel_GetPostInfinityExtrapolation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingDoubleChannel.GetNumKeys
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMovieSceneScriptingDoubleChannel::GetNumKeys()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingDoubleChannel.GetNumKeys"));

	UMovieSceneScriptingDoubleChannel_GetNumKeys_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingDoubleChannel.GetKeys
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UMovieSceneScriptingKey*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UMovieSceneScriptingKey*> UMovieSceneScriptingDoubleChannel::GetKeys()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingDoubleChannel.GetKeys"));

	UMovieSceneScriptingDoubleChannel_GetKeys_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingDoubleChannel.GetDefault
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// double                         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

double UMovieSceneScriptingDoubleChannel::GetDefault()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingDoubleChannel.GetDefault"));

	UMovieSceneScriptingDoubleChannel_GetDefault_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingDoubleChannel.EvaluateKeys
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSequencerScriptingRange Range                          (Parm)
// struct FFrameRate              FrameRate                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<double>                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<double> UMovieSceneScriptingDoubleChannel::EvaluateKeys(const struct FSequencerScriptingRange& Range, const struct FFrameRate& FrameRate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingDoubleChannel.EvaluateKeys"));

	UMovieSceneScriptingDoubleChannel_EvaluateKeys_Params params;
	params.Range = Range;
	params.FrameRate = FrameRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingDoubleChannel.ComputeEffectiveRange
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSequencerScriptingRange ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSequencerScriptingRange UMovieSceneScriptingDoubleChannel::ComputeEffectiveRange()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingDoubleChannel.ComputeEffectiveRange"));

	UMovieSceneScriptingDoubleChannel_ComputeEffectiveRange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingDoubleChannel.AddKey
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FFrameNumber            InTime                         (ConstParm, Parm, OutParm, ReferenceParm)
// double                         NewValue                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          SubFrame                       (Parm, ZeroConstructor, IsPlainOldData)
// enum class ESequenceTimeUnit   TimeUnit                       (Parm, ZeroConstructor, IsPlainOldData)
// enum class EMovieSceneKeyInterpolation InInterpolation                (Parm, ZeroConstructor, IsPlainOldData)
// class UMovieSceneScriptingDoubleKey* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMovieSceneScriptingDoubleKey* UMovieSceneScriptingDoubleChannel::AddKey(const struct FFrameNumber& InTime, double NewValue, float SubFrame, enum class ESequenceTimeUnit TimeUnit, enum class EMovieSceneKeyInterpolation InInterpolation)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingDoubleChannel.AddKey"));

	UMovieSceneScriptingDoubleChannel_AddKey_Params params;
	params.InTime = InTime;
	params.NewValue = NewValue;
	params.SubFrame = SubFrame;
	params.TimeUnit = TimeUnit;
	params.InInterpolation = InInterpolation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingEventKey.SetValue
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FMovieSceneEvent        InNewValue                     (ConstParm, Parm, OutParm, ReferenceParm)

void UMovieSceneScriptingEventKey::SetValue(const struct FMovieSceneEvent& InNewValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingEventKey.SetValue"));

	UMovieSceneScriptingEventKey_SetValue_Params params;
	params.InNewValue = InNewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneScriptingEventKey.SetTime
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FFrameNumber            NewFrameNumber                 (ConstParm, Parm, OutParm, ReferenceParm)
// float                          SubFrame                       (Parm, ZeroConstructor, IsPlainOldData)
// enum class ESequenceTimeUnit   TimeUnit                       (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneScriptingEventKey::SetTime(const struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingEventKey.SetTime"));

	UMovieSceneScriptingEventKey_SetTime_Params params;
	params.NewFrameNumber = NewFrameNumber;
	params.SubFrame = SubFrame;
	params.TimeUnit = TimeUnit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneScriptingEventKey.GetValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMovieSceneEvent        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMovieSceneEvent UMovieSceneScriptingEventKey::GetValue()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingEventKey.GetValue"));

	UMovieSceneScriptingEventKey_GetValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingEventKey.GetTime
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ESequenceTimeUnit   TimeUnit                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FFrameTime              ReturnValue                    (Parm, OutParm, ReturnParm)

struct FFrameTime UMovieSceneScriptingEventKey::GetTime(enum class ESequenceTimeUnit TimeUnit)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingEventKey.GetTime"));

	UMovieSceneScriptingEventKey_GetTime_Params params;
	params.TimeUnit = TimeUnit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingEventChannel.RemoveKey
// (Native, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneScriptingKey* Key                            (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneScriptingEventChannel::RemoveKey(class UMovieSceneScriptingKey* Key)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingEventChannel.RemoveKey"));

	UMovieSceneScriptingEventChannel_RemoveKey_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneScriptingEventChannel.GetKeys
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UMovieSceneScriptingKey*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UMovieSceneScriptingKey*> UMovieSceneScriptingEventChannel::GetKeys()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingEventChannel.GetKeys"));

	UMovieSceneScriptingEventChannel_GetKeys_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingEventChannel.AddKey
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FFrameNumber            InTime                         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FMovieSceneEvent        NewValue                       (Parm)
// float                          SubFrame                       (Parm, ZeroConstructor, IsPlainOldData)
// enum class ESequenceTimeUnit   TimeUnit                       (Parm, ZeroConstructor, IsPlainOldData)
// class UMovieSceneScriptingEventKey* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMovieSceneScriptingEventKey* UMovieSceneScriptingEventChannel::AddKey(const struct FFrameNumber& InTime, const struct FMovieSceneEvent& NewValue, float SubFrame, enum class ESequenceTimeUnit TimeUnit)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingEventChannel.AddKey"));

	UMovieSceneScriptingEventChannel_AddKey_Params params;
	params.InTime = InTime;
	params.NewValue = NewValue;
	params.SubFrame = SubFrame;
	params.TimeUnit = TimeUnit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingFloatKey.SetValue
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          InNewValue                     (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneScriptingFloatKey::SetValue(float InNewValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingFloatKey.SetValue"));

	UMovieSceneScriptingFloatKey_SetValue_Params params;
	params.InNewValue = InNewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneScriptingFloatKey.SetTime
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FFrameNumber            NewFrameNumber                 (ConstParm, Parm, OutParm, ReferenceParm)
// float                          SubFrame                       (Parm, ZeroConstructor, IsPlainOldData)
// enum class ESequenceTimeUnit   TimeUnit                       (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneScriptingFloatKey::SetTime(const struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingFloatKey.SetTime"));

	UMovieSceneScriptingFloatKey_SetTime_Params params;
	params.NewFrameNumber = NewFrameNumber;
	params.SubFrame = SubFrame;
	params.TimeUnit = TimeUnit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneScriptingFloatKey.SetTangentWeightMode
// (Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ERichCurveTangentWeightMode> InNewValue                     (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneScriptingFloatKey::SetTangentWeightMode(TEnumAsByte<ERichCurveTangentWeightMode> InNewValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingFloatKey.SetTangentWeightMode"));

	UMovieSceneScriptingFloatKey_SetTangentWeightMode_Params params;
	params.InNewValue = InNewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneScriptingFloatKey.SetTangentMode
// (Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ERichCurveTangentMode> InNewValue                     (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneScriptingFloatKey::SetTangentMode(TEnumAsByte<ERichCurveTangentMode> InNewValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingFloatKey.SetTangentMode"));

	UMovieSceneScriptingFloatKey_SetTangentMode_Params params;
	params.InNewValue = InNewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneScriptingFloatKey.SetLeaveTangentWeight
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          InNewValue                     (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneScriptingFloatKey::SetLeaveTangentWeight(float InNewValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingFloatKey.SetLeaveTangentWeight"));

	UMovieSceneScriptingFloatKey_SetLeaveTangentWeight_Params params;
	params.InNewValue = InNewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneScriptingFloatKey.SetLeaveTangent
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          InNewValue                     (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneScriptingFloatKey::SetLeaveTangent(float InNewValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingFloatKey.SetLeaveTangent"));

	UMovieSceneScriptingFloatKey_SetLeaveTangent_Params params;
	params.InNewValue = InNewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneScriptingFloatKey.SetInterpolationMode
// (Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ERichCurveInterpMode> InNewValue                     (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneScriptingFloatKey::SetInterpolationMode(TEnumAsByte<ERichCurveInterpMode> InNewValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingFloatKey.SetInterpolationMode"));

	UMovieSceneScriptingFloatKey_SetInterpolationMode_Params params;
	params.InNewValue = InNewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneScriptingFloatKey.SetArriveTangentWeight
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          InNewValue                     (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneScriptingFloatKey::SetArriveTangentWeight(float InNewValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingFloatKey.SetArriveTangentWeight"));

	UMovieSceneScriptingFloatKey_SetArriveTangentWeight_Params params;
	params.InNewValue = InNewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneScriptingFloatKey.SetArriveTangent
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          InNewValue                     (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneScriptingFloatKey::SetArriveTangent(float InNewValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingFloatKey.SetArriveTangent"));

	UMovieSceneScriptingFloatKey_SetArriveTangent_Params params;
	params.InNewValue = InNewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneScriptingFloatKey.GetValue
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMovieSceneScriptingFloatKey::GetValue()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingFloatKey.GetValue"));

	UMovieSceneScriptingFloatKey_GetValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingFloatKey.GetTime
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ESequenceTimeUnit   TimeUnit                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FFrameTime              ReturnValue                    (Parm, OutParm, ReturnParm)

struct FFrameTime UMovieSceneScriptingFloatKey::GetTime(enum class ESequenceTimeUnit TimeUnit)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingFloatKey.GetTime"));

	UMovieSceneScriptingFloatKey_GetTime_Params params;
	params.TimeUnit = TimeUnit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingFloatKey.GetTangentWeightMode
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<ERichCurveTangentWeightMode> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ERichCurveTangentWeightMode> UMovieSceneScriptingFloatKey::GetTangentWeightMode()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingFloatKey.GetTangentWeightMode"));

	UMovieSceneScriptingFloatKey_GetTangentWeightMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingFloatKey.GetTangentMode
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<ERichCurveTangentMode> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ERichCurveTangentMode> UMovieSceneScriptingFloatKey::GetTangentMode()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingFloatKey.GetTangentMode"));

	UMovieSceneScriptingFloatKey_GetTangentMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingFloatKey.GetLeaveTangentWeight
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMovieSceneScriptingFloatKey::GetLeaveTangentWeight()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingFloatKey.GetLeaveTangentWeight"));

	UMovieSceneScriptingFloatKey_GetLeaveTangentWeight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingFloatKey.GetLeaveTangent
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMovieSceneScriptingFloatKey::GetLeaveTangent()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingFloatKey.GetLeaveTangent"));

	UMovieSceneScriptingFloatKey_GetLeaveTangent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingFloatKey.GetInterpolationMode
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<ERichCurveInterpMode> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ERichCurveInterpMode> UMovieSceneScriptingFloatKey::GetInterpolationMode()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingFloatKey.GetInterpolationMode"));

	UMovieSceneScriptingFloatKey_GetInterpolationMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingFloatKey.GetArriveTangentWeight
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMovieSceneScriptingFloatKey::GetArriveTangentWeight()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingFloatKey.GetArriveTangentWeight"));

	UMovieSceneScriptingFloatKey_GetArriveTangentWeight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingFloatKey.GetArriveTangent
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMovieSceneScriptingFloatKey::GetArriveTangent()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingFloatKey.GetArriveTangent"));

	UMovieSceneScriptingFloatKey_GetArriveTangent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingFloatChannel.SetPreInfinityExtrapolation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ERichCurveExtrapolation> InExtrapolation                (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneScriptingFloatChannel::SetPreInfinityExtrapolation(TEnumAsByte<ERichCurveExtrapolation> InExtrapolation)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingFloatChannel.SetPreInfinityExtrapolation"));

	UMovieSceneScriptingFloatChannel_SetPreInfinityExtrapolation_Params params;
	params.InExtrapolation = InExtrapolation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneScriptingFloatChannel.SetPostInfinityExtrapolation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ERichCurveExtrapolation> InExtrapolation                (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneScriptingFloatChannel::SetPostInfinityExtrapolation(TEnumAsByte<ERichCurveExtrapolation> InExtrapolation)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingFloatChannel.SetPostInfinityExtrapolation"));

	UMovieSceneScriptingFloatChannel_SetPostInfinityExtrapolation_Params params;
	params.InExtrapolation = InExtrapolation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneScriptingFloatChannel.SetDefault
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InDefaultValue                 (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneScriptingFloatChannel::SetDefault(float InDefaultValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingFloatChannel.SetDefault"));

	UMovieSceneScriptingFloatChannel_SetDefault_Params params;
	params.InDefaultValue = InDefaultValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneScriptingFloatChannel.RemoveKey
// (Native, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneScriptingKey* Key                            (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneScriptingFloatChannel::RemoveKey(class UMovieSceneScriptingKey* Key)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingFloatChannel.RemoveKey"));

	UMovieSceneScriptingFloatChannel_RemoveKey_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneScriptingFloatChannel.RemoveDefault
// (Final, Native, Public, BlueprintCallable)

void UMovieSceneScriptingFloatChannel::RemoveDefault()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingFloatChannel.RemoveDefault"));

	UMovieSceneScriptingFloatChannel_RemoveDefault_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneScriptingFloatChannel.HasDefault
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMovieSceneScriptingFloatChannel::HasDefault()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingFloatChannel.HasDefault"));

	UMovieSceneScriptingFloatChannel_HasDefault_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingFloatChannel.GetPreInfinityExtrapolation
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<ERichCurveExtrapolation> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ERichCurveExtrapolation> UMovieSceneScriptingFloatChannel::GetPreInfinityExtrapolation()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingFloatChannel.GetPreInfinityExtrapolation"));

	UMovieSceneScriptingFloatChannel_GetPreInfinityExtrapolation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingFloatChannel.GetPostInfinityExtrapolation
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<ERichCurveExtrapolation> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ERichCurveExtrapolation> UMovieSceneScriptingFloatChannel::GetPostInfinityExtrapolation()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingFloatChannel.GetPostInfinityExtrapolation"));

	UMovieSceneScriptingFloatChannel_GetPostInfinityExtrapolation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingFloatChannel.GetNumKeys
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMovieSceneScriptingFloatChannel::GetNumKeys()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingFloatChannel.GetNumKeys"));

	UMovieSceneScriptingFloatChannel_GetNumKeys_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingFloatChannel.GetKeys
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UMovieSceneScriptingKey*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UMovieSceneScriptingKey*> UMovieSceneScriptingFloatChannel::GetKeys()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingFloatChannel.GetKeys"));

	UMovieSceneScriptingFloatChannel_GetKeys_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingFloatChannel.GetDefault
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMovieSceneScriptingFloatChannel::GetDefault()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingFloatChannel.GetDefault"));

	UMovieSceneScriptingFloatChannel_GetDefault_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingFloatChannel.EvaluateKeys
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSequencerScriptingRange Range                          (Parm)
// struct FFrameRate              FrameRate                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<float>                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<float> UMovieSceneScriptingFloatChannel::EvaluateKeys(const struct FSequencerScriptingRange& Range, const struct FFrameRate& FrameRate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingFloatChannel.EvaluateKeys"));

	UMovieSceneScriptingFloatChannel_EvaluateKeys_Params params;
	params.Range = Range;
	params.FrameRate = FrameRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingFloatChannel.ComputeEffectiveRange
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSequencerScriptingRange ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSequencerScriptingRange UMovieSceneScriptingFloatChannel::ComputeEffectiveRange()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingFloatChannel.ComputeEffectiveRange"));

	UMovieSceneScriptingFloatChannel_ComputeEffectiveRange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingFloatChannel.AddKey
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FFrameNumber            InTime                         (ConstParm, Parm, OutParm, ReferenceParm)
// float                          NewValue                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          SubFrame                       (Parm, ZeroConstructor, IsPlainOldData)
// enum class ESequenceTimeUnit   TimeUnit                       (Parm, ZeroConstructor, IsPlainOldData)
// enum class EMovieSceneKeyInterpolation InInterpolation                (Parm, ZeroConstructor, IsPlainOldData)
// class UMovieSceneScriptingFloatKey* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMovieSceneScriptingFloatKey* UMovieSceneScriptingFloatChannel::AddKey(const struct FFrameNumber& InTime, float NewValue, float SubFrame, enum class ESequenceTimeUnit TimeUnit, enum class EMovieSceneKeyInterpolation InInterpolation)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingFloatChannel.AddKey"));

	UMovieSceneScriptingFloatChannel_AddKey_Params params;
	params.InTime = InTime;
	params.NewValue = NewValue;
	params.SubFrame = SubFrame;
	params.TimeUnit = TimeUnit;
	params.InInterpolation = InInterpolation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingIntegerKey.SetValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InNewValue                     (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneScriptingIntegerKey::SetValue(int InNewValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingIntegerKey.SetValue"));

	UMovieSceneScriptingIntegerKey_SetValue_Params params;
	params.InNewValue = InNewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneScriptingIntegerKey.SetTime
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FFrameNumber            NewFrameNumber                 (ConstParm, Parm, OutParm, ReferenceParm)
// float                          SubFrame                       (Parm, ZeroConstructor, IsPlainOldData)
// enum class ESequenceTimeUnit   TimeUnit                       (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneScriptingIntegerKey::SetTime(const struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingIntegerKey.SetTime"));

	UMovieSceneScriptingIntegerKey_SetTime_Params params;
	params.NewFrameNumber = NewFrameNumber;
	params.SubFrame = SubFrame;
	params.TimeUnit = TimeUnit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneScriptingIntegerKey.GetValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMovieSceneScriptingIntegerKey::GetValue()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingIntegerKey.GetValue"));

	UMovieSceneScriptingIntegerKey_GetValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingIntegerKey.GetTime
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ESequenceTimeUnit   TimeUnit                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FFrameTime              ReturnValue                    (Parm, OutParm, ReturnParm)

struct FFrameTime UMovieSceneScriptingIntegerKey::GetTime(enum class ESequenceTimeUnit TimeUnit)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingIntegerKey.GetTime"));

	UMovieSceneScriptingIntegerKey_GetTime_Params params;
	params.TimeUnit = TimeUnit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingIntegerChannel.SetDefault
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InDefaultValue                 (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneScriptingIntegerChannel::SetDefault(int InDefaultValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingIntegerChannel.SetDefault"));

	UMovieSceneScriptingIntegerChannel_SetDefault_Params params;
	params.InDefaultValue = InDefaultValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneScriptingIntegerChannel.RemoveKey
// (Native, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneScriptingKey* Key                            (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneScriptingIntegerChannel::RemoveKey(class UMovieSceneScriptingKey* Key)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingIntegerChannel.RemoveKey"));

	UMovieSceneScriptingIntegerChannel_RemoveKey_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneScriptingIntegerChannel.RemoveDefault
// (Final, Native, Public, BlueprintCallable)

void UMovieSceneScriptingIntegerChannel::RemoveDefault()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingIntegerChannel.RemoveDefault"));

	UMovieSceneScriptingIntegerChannel_RemoveDefault_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneScriptingIntegerChannel.HasDefault
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMovieSceneScriptingIntegerChannel::HasDefault()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingIntegerChannel.HasDefault"));

	UMovieSceneScriptingIntegerChannel_HasDefault_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingIntegerChannel.GetKeys
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UMovieSceneScriptingKey*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UMovieSceneScriptingKey*> UMovieSceneScriptingIntegerChannel::GetKeys()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingIntegerChannel.GetKeys"));

	UMovieSceneScriptingIntegerChannel_GetKeys_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingIntegerChannel.GetDefault
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMovieSceneScriptingIntegerChannel::GetDefault()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingIntegerChannel.GetDefault"));

	UMovieSceneScriptingIntegerChannel_GetDefault_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingIntegerChannel.AddKey
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FFrameNumber            InTime                         (ConstParm, Parm, OutParm, ReferenceParm)
// int                            NewValue                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          SubFrame                       (Parm, ZeroConstructor, IsPlainOldData)
// enum class ESequenceTimeUnit   TimeUnit                       (Parm, ZeroConstructor, IsPlainOldData)
// class UMovieSceneScriptingIntegerKey* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMovieSceneScriptingIntegerKey* UMovieSceneScriptingIntegerChannel::AddKey(const struct FFrameNumber& InTime, int NewValue, float SubFrame, enum class ESequenceTimeUnit TimeUnit)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingIntegerChannel.AddKey"));

	UMovieSceneScriptingIntegerChannel_AddKey_Params params;
	params.InTime = InTime;
	params.NewValue = NewValue;
	params.SubFrame = SubFrame;
	params.TimeUnit = TimeUnit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingObjectPathKey.SetValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 InNewValue                     (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneScriptingObjectPathKey::SetValue(class UObject* InNewValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingObjectPathKey.SetValue"));

	UMovieSceneScriptingObjectPathKey_SetValue_Params params;
	params.InNewValue = InNewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneScriptingObjectPathKey.SetTime
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FFrameNumber            NewFrameNumber                 (ConstParm, Parm, OutParm, ReferenceParm)
// float                          SubFrame                       (Parm, ZeroConstructor, IsPlainOldData)
// enum class ESequenceTimeUnit   TimeUnit                       (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneScriptingObjectPathKey::SetTime(const struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingObjectPathKey.SetTime"));

	UMovieSceneScriptingObjectPathKey_SetTime_Params params;
	params.NewFrameNumber = NewFrameNumber;
	params.SubFrame = SubFrame;
	params.TimeUnit = TimeUnit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneScriptingObjectPathKey.GetValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UMovieSceneScriptingObjectPathKey::GetValue()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingObjectPathKey.GetValue"));

	UMovieSceneScriptingObjectPathKey_GetValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingObjectPathKey.GetTime
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ESequenceTimeUnit   TimeUnit                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FFrameTime              ReturnValue                    (Parm, OutParm, ReturnParm)

struct FFrameTime UMovieSceneScriptingObjectPathKey::GetTime(enum class ESequenceTimeUnit TimeUnit)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingObjectPathKey.GetTime"));

	UMovieSceneScriptingObjectPathKey_GetTime_Params params;
	params.TimeUnit = TimeUnit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingObjectPathChannel.SetDefault
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 InDefaultValue                 (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneScriptingObjectPathChannel::SetDefault(class UObject* InDefaultValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingObjectPathChannel.SetDefault"));

	UMovieSceneScriptingObjectPathChannel_SetDefault_Params params;
	params.InDefaultValue = InDefaultValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneScriptingObjectPathChannel.RemoveKey
// (Native, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneScriptingKey* Key                            (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneScriptingObjectPathChannel::RemoveKey(class UMovieSceneScriptingKey* Key)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingObjectPathChannel.RemoveKey"));

	UMovieSceneScriptingObjectPathChannel_RemoveKey_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneScriptingObjectPathChannel.RemoveDefault
// (Final, Native, Public, BlueprintCallable)

void UMovieSceneScriptingObjectPathChannel::RemoveDefault()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingObjectPathChannel.RemoveDefault"));

	UMovieSceneScriptingObjectPathChannel_RemoveDefault_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneScriptingObjectPathChannel.HasDefault
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMovieSceneScriptingObjectPathChannel::HasDefault()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingObjectPathChannel.HasDefault"));

	UMovieSceneScriptingObjectPathChannel_HasDefault_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingObjectPathChannel.GetKeys
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UMovieSceneScriptingKey*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UMovieSceneScriptingKey*> UMovieSceneScriptingObjectPathChannel::GetKeys()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingObjectPathChannel.GetKeys"));

	UMovieSceneScriptingObjectPathChannel_GetKeys_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingObjectPathChannel.GetDefault
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UMovieSceneScriptingObjectPathChannel::GetDefault()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingObjectPathChannel.GetDefault"));

	UMovieSceneScriptingObjectPathChannel_GetDefault_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingObjectPathChannel.AddKey
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FFrameNumber            InTime                         (ConstParm, Parm)
// class UObject*                 NewValue                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          SubFrame                       (Parm, ZeroConstructor, IsPlainOldData)
// enum class ESequenceTimeUnit   TimeUnit                       (Parm, ZeroConstructor, IsPlainOldData)
// class UMovieSceneScriptingObjectPathKey* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMovieSceneScriptingObjectPathKey* UMovieSceneScriptingObjectPathChannel::AddKey(const struct FFrameNumber& InTime, class UObject* NewValue, float SubFrame, enum class ESequenceTimeUnit TimeUnit)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingObjectPathChannel.AddKey"));

	UMovieSceneScriptingObjectPathChannel_AddKey_Params params;
	params.InTime = InTime;
	params.NewValue = NewValue;
	params.SubFrame = SubFrame;
	params.TimeUnit = TimeUnit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingStringKey.SetValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InNewValue                     (Parm, ZeroConstructor)

void UMovieSceneScriptingStringKey::SetValue(const struct FString& InNewValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingStringKey.SetValue"));

	UMovieSceneScriptingStringKey_SetValue_Params params;
	params.InNewValue = InNewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneScriptingStringKey.SetTime
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FFrameNumber            NewFrameNumber                 (ConstParm, Parm, OutParm, ReferenceParm)
// float                          SubFrame                       (Parm, ZeroConstructor, IsPlainOldData)
// enum class ESequenceTimeUnit   TimeUnit                       (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneScriptingStringKey::SetTime(const struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingStringKey.SetTime"));

	UMovieSceneScriptingStringKey_SetTime_Params params;
	params.NewFrameNumber = NewFrameNumber;
	params.SubFrame = SubFrame;
	params.TimeUnit = TimeUnit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneScriptingStringKey.GetValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UMovieSceneScriptingStringKey::GetValue()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingStringKey.GetValue"));

	UMovieSceneScriptingStringKey_GetValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingStringKey.GetTime
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ESequenceTimeUnit   TimeUnit                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FFrameTime              ReturnValue                    (Parm, OutParm, ReturnParm)

struct FFrameTime UMovieSceneScriptingStringKey::GetTime(enum class ESequenceTimeUnit TimeUnit)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingStringKey.GetTime"));

	UMovieSceneScriptingStringKey_GetTime_Params params;
	params.TimeUnit = TimeUnit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingStringChannel.SetDefault
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InDefaultValue                 (Parm, ZeroConstructor)

void UMovieSceneScriptingStringChannel::SetDefault(const struct FString& InDefaultValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingStringChannel.SetDefault"));

	UMovieSceneScriptingStringChannel_SetDefault_Params params;
	params.InDefaultValue = InDefaultValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneScriptingStringChannel.RemoveKey
// (Native, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneScriptingKey* Key                            (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneScriptingStringChannel::RemoveKey(class UMovieSceneScriptingKey* Key)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingStringChannel.RemoveKey"));

	UMovieSceneScriptingStringChannel_RemoveKey_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneScriptingStringChannel.RemoveDefault
// (Final, Native, Public, BlueprintCallable)

void UMovieSceneScriptingStringChannel::RemoveDefault()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingStringChannel.RemoveDefault"));

	UMovieSceneScriptingStringChannel_RemoveDefault_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneScriptingStringChannel.HasDefault
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMovieSceneScriptingStringChannel::HasDefault()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingStringChannel.HasDefault"));

	UMovieSceneScriptingStringChannel_HasDefault_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingStringChannel.GetKeys
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UMovieSceneScriptingKey*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UMovieSceneScriptingKey*> UMovieSceneScriptingStringChannel::GetKeys()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingStringChannel.GetKeys"));

	UMovieSceneScriptingStringChannel_GetKeys_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingStringChannel.GetDefault
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UMovieSceneScriptingStringChannel::GetDefault()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingStringChannel.GetDefault"));

	UMovieSceneScriptingStringChannel_GetDefault_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneScriptingStringChannel.AddKey
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FFrameNumber            InTime                         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 NewValue                       (Parm, ZeroConstructor)
// float                          SubFrame                       (Parm, ZeroConstructor, IsPlainOldData)
// enum class ESequenceTimeUnit   TimeUnit                       (Parm, ZeroConstructor, IsPlainOldData)
// class UMovieSceneScriptingStringKey* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMovieSceneScriptingStringKey* UMovieSceneScriptingStringChannel::AddKey(const struct FFrameNumber& InTime, const struct FString& NewValue, float SubFrame, enum class ESequenceTimeUnit TimeUnit)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneScriptingStringChannel.AddKey"));

	UMovieSceneScriptingStringChannel_AddKey_Params params;
	params.InTime = InTime;
	params.NewValue = NewValue;
	params.SubFrame = SubFrame;
	params.TimeUnit = TimeUnit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneSectionExtensions.SetStartFrameSeconds
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSection*      Section                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          StartTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneSectionExtensions::STATIC_SetStartFrameSeconds(class UMovieSceneSection* Section, float StartTime)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSectionExtensions.SetStartFrameSeconds"));

	UMovieSceneSectionExtensions_SetStartFrameSeconds_Params params;
	params.Section = Section;
	params.StartTime = StartTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneSectionExtensions.SetStartFrameBounded
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSection*      Section                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bIsBounded                     (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneSectionExtensions::STATIC_SetStartFrameBounded(class UMovieSceneSection* Section, bool bIsBounded)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSectionExtensions.SetStartFrameBounded"));

	UMovieSceneSectionExtensions_SetStartFrameBounded_Params params;
	params.Section = Section;
	params.bIsBounded = bIsBounded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneSectionExtensions.SetStartFrame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSection*      Section                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            StartFrame                     (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneSectionExtensions::STATIC_SetStartFrame(class UMovieSceneSection* Section, int StartFrame)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSectionExtensions.SetStartFrame"));

	UMovieSceneSectionExtensions_SetStartFrame_Params params;
	params.Section = Section;
	params.StartFrame = StartFrame;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneSectionExtensions.SetRangeSeconds
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSection*      Section                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          StartTime                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          EndTime                        (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneSectionExtensions::STATIC_SetRangeSeconds(class UMovieSceneSection* Section, float StartTime, float EndTime)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSectionExtensions.SetRangeSeconds"));

	UMovieSceneSectionExtensions_SetRangeSeconds_Params params;
	params.Section = Section;
	params.StartTime = StartTime;
	params.EndTime = EndTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneSectionExtensions.SetRange
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSection*      Section                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            StartFrame                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            EndFrame                       (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneSectionExtensions::STATIC_SetRange(class UMovieSceneSection* Section, int StartFrame, int EndFrame)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSectionExtensions.SetRange"));

	UMovieSceneSectionExtensions_SetRange_Params params;
	params.Section = Section;
	params.StartFrame = StartFrame;
	params.EndFrame = EndFrame;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneSectionExtensions.SetEndFrameSeconds
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSection*      Section                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          EndTime                        (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneSectionExtensions::STATIC_SetEndFrameSeconds(class UMovieSceneSection* Section, float EndTime)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSectionExtensions.SetEndFrameSeconds"));

	UMovieSceneSectionExtensions_SetEndFrameSeconds_Params params;
	params.Section = Section;
	params.EndTime = EndTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneSectionExtensions.SetEndFrameBounded
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSection*      Section                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bIsBounded                     (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneSectionExtensions::STATIC_SetEndFrameBounded(class UMovieSceneSection* Section, bool bIsBounded)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSectionExtensions.SetEndFrameBounded"));

	UMovieSceneSectionExtensions_SetEndFrameBounded_Params params;
	params.Section = Section;
	params.bIsBounded = bIsBounded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneSectionExtensions.SetEndFrame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSection*      Section                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            EndFrame                       (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneSectionExtensions::STATIC_SetEndFrame(class UMovieSceneSection* Section, int EndFrame)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSectionExtensions.SetEndFrame"));

	UMovieSceneSectionExtensions_SetEndFrame_Params params;
	params.Section = Section;
	params.EndFrame = EndFrame;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneSectionExtensions.HasStartFrame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSection*      Section                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMovieSceneSectionExtensions::STATIC_HasStartFrame(class UMovieSceneSection* Section)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSectionExtensions.HasStartFrame"));

	UMovieSceneSectionExtensions_HasStartFrame_Params params;
	params.Section = Section;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneSectionExtensions.HasEndFrame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSection*      Section                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMovieSceneSectionExtensions::STATIC_HasEndFrame(class UMovieSceneSection* Section)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSectionExtensions.HasEndFrame"));

	UMovieSceneSectionExtensions_HasEndFrame_Params params;
	params.Section = Section;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneSectionExtensions.GetStartFrameSeconds
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSection*      Section                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMovieSceneSectionExtensions::STATIC_GetStartFrameSeconds(class UMovieSceneSection* Section)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSectionExtensions.GetStartFrameSeconds"));

	UMovieSceneSectionExtensions_GetStartFrameSeconds_Params params;
	params.Section = Section;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneSectionExtensions.GetStartFrame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSection*      Section                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMovieSceneSectionExtensions::STATIC_GetStartFrame(class UMovieSceneSection* Section)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSectionExtensions.GetStartFrame"));

	UMovieSceneSectionExtensions_GetStartFrame_Params params;
	params.Section = Section;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneSectionExtensions.GetParentSequenceFrame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSubSection*   Section                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InFrame                        (Parm, ZeroConstructor, IsPlainOldData)
// class UMovieSceneSequence*     ParentSequence                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMovieSceneSectionExtensions::STATIC_GetParentSequenceFrame(class UMovieSceneSubSection* Section, int InFrame, class UMovieSceneSequence* ParentSequence)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSectionExtensions.GetParentSequenceFrame"));

	UMovieSceneSectionExtensions_GetParentSequenceFrame_Params params;
	params.Section = Section;
	params.InFrame = InFrame;
	params.ParentSequence = ParentSequence;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneSectionExtensions.GetEndFrameSeconds
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSection*      Section                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMovieSceneSectionExtensions::STATIC_GetEndFrameSeconds(class UMovieSceneSection* Section)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSectionExtensions.GetEndFrameSeconds"));

	UMovieSceneSectionExtensions_GetEndFrameSeconds_Params params;
	params.Section = Section;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneSectionExtensions.GetEndFrame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSection*      Section                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMovieSceneSectionExtensions::STATIC_GetEndFrame(class UMovieSceneSection* Section)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSectionExtensions.GetEndFrame"));

	UMovieSceneSectionExtensions_GetEndFrame_Params params;
	params.Section = Section;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneSectionExtensions.GetChannelsByType
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSection*      Section                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UClass*                  ChannelType                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UMovieSceneScriptingChannel*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UMovieSceneScriptingChannel*> UMovieSceneSectionExtensions::STATIC_GetChannelsByType(class UMovieSceneSection* Section, class UClass* ChannelType)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSectionExtensions.GetChannelsByType"));

	UMovieSceneSectionExtensions_GetChannelsByType_Params params;
	params.Section = Section;
	params.ChannelType = ChannelType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneSectionExtensions.GetChannels
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSection*      Section                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TArray<class UMovieSceneScriptingChannel*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UMovieSceneScriptingChannel*> UMovieSceneSectionExtensions::STATIC_GetChannels(class UMovieSceneSection* Section)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSectionExtensions.GetChannels"));

	UMovieSceneSectionExtensions_GetChannels_Params params;
	params.Section = Section;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneSectionExtensions.GetAllChannels
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSection*      Section                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TArray<class UMovieSceneScriptingChannel*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UMovieSceneScriptingChannel*> UMovieSceneSectionExtensions::STATIC_GetAllChannels(class UMovieSceneSection* Section)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSectionExtensions.GetAllChannels"));

	UMovieSceneSectionExtensions_GetAllChannels_Params params;
	params.Section = Section;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneSectionExtensions.FindChannelsByType
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSection*      Section                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UClass*                  ChannelType                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UMovieSceneScriptingChannel*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UMovieSceneScriptingChannel*> UMovieSceneSectionExtensions::STATIC_FindChannelsByType(class UMovieSceneSection* Section, class UClass* ChannelType)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSectionExtensions.FindChannelsByType"));

	UMovieSceneSectionExtensions_FindChannelsByType_Params params;
	params.Section = Section;
	params.ChannelType = ChannelType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneSequenceExtensions.SortMarkedFrames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*     Sequence                       (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneSequenceExtensions::STATIC_SortMarkedFrames(class UMovieSceneSequence* Sequence)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSequenceExtensions.SortMarkedFrames"));

	UMovieSceneSequenceExtensions_SortMarkedFrames_Params params;
	params.Sequence = Sequence;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneSequenceExtensions.SetWorkRangeStart
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*     InSequence                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          StartTimeInSeconds             (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneSequenceExtensions::STATIC_SetWorkRangeStart(class UMovieSceneSequence* InSequence, float StartTimeInSeconds)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSequenceExtensions.SetWorkRangeStart"));

	UMovieSceneSequenceExtensions_SetWorkRangeStart_Params params;
	params.InSequence = InSequence;
	params.StartTimeInSeconds = StartTimeInSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneSequenceExtensions.SetWorkRangeEnd
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*     InSequence                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          EndTimeInSeconds               (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneSequenceExtensions::STATIC_SetWorkRangeEnd(class UMovieSceneSequence* InSequence, float EndTimeInSeconds)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSequenceExtensions.SetWorkRangeEnd"));

	UMovieSceneSequenceExtensions_SetWorkRangeEnd_Params params;
	params.InSequence = InSequence;
	params.EndTimeInSeconds = EndTimeInSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneSequenceExtensions.SetViewRangeStart
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*     InSequence                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          StartTimeInSeconds             (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneSequenceExtensions::STATIC_SetViewRangeStart(class UMovieSceneSequence* InSequence, float StartTimeInSeconds)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSequenceExtensions.SetViewRangeStart"));

	UMovieSceneSequenceExtensions_SetViewRangeStart_Params params;
	params.InSequence = InSequence;
	params.StartTimeInSeconds = StartTimeInSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneSequenceExtensions.SetViewRangeEnd
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*     InSequence                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          EndTimeInSeconds               (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneSequenceExtensions::STATIC_SetViewRangeEnd(class UMovieSceneSequence* InSequence, float EndTimeInSeconds)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSequenceExtensions.SetViewRangeEnd"));

	UMovieSceneSequenceExtensions_SetViewRangeEnd_Params params;
	params.InSequence = InSequence;
	params.EndTimeInSeconds = EndTimeInSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneSequenceExtensions.SetTickResolutionDirectly
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*     Sequence                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FFrameRate              TickResolution                 (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneSequenceExtensions::STATIC_SetTickResolutionDirectly(class UMovieSceneSequence* Sequence, const struct FFrameRate& TickResolution)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSequenceExtensions.SetTickResolutionDirectly"));

	UMovieSceneSequenceExtensions_SetTickResolutionDirectly_Params params;
	params.Sequence = Sequence;
	params.TickResolution = TickResolution;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneSequenceExtensions.SetTickResolution
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*     Sequence                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FFrameRate              TickResolution                 (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneSequenceExtensions::STATIC_SetTickResolution(class UMovieSceneSequence* Sequence, const struct FFrameRate& TickResolution)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSequenceExtensions.SetTickResolution"));

	UMovieSceneSequenceExtensions_SetTickResolution_Params params;
	params.Sequence = Sequence;
	params.TickResolution = TickResolution;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneSequenceExtensions.SetReadOnly
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*     Sequence                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInReadOnly                    (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneSequenceExtensions::STATIC_SetReadOnly(class UMovieSceneSequence* Sequence, bool bInReadOnly)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSequenceExtensions.SetReadOnly"));

	UMovieSceneSequenceExtensions_SetReadOnly_Params params;
	params.Sequence = Sequence;
	params.bInReadOnly = bInReadOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackStartSeconds
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*     Sequence                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          StartTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneSequenceExtensions::STATIC_SetPlaybackStartSeconds(class UMovieSceneSequence* Sequence, float StartTime)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackStartSeconds"));

	UMovieSceneSequenceExtensions_SetPlaybackStartSeconds_Params params;
	params.Sequence = Sequence;
	params.StartTime = StartTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackStart
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*     Sequence                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            StartFrame                     (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneSequenceExtensions::STATIC_SetPlaybackStart(class UMovieSceneSequence* Sequence, int StartFrame)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackStart"));

	UMovieSceneSequenceExtensions_SetPlaybackStart_Params params;
	params.Sequence = Sequence;
	params.StartFrame = StartFrame;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackEndSeconds
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*     Sequence                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          EndTime                        (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneSequenceExtensions::STATIC_SetPlaybackEndSeconds(class UMovieSceneSequence* Sequence, float EndTime)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackEndSeconds"));

	UMovieSceneSequenceExtensions_SetPlaybackEndSeconds_Params params;
	params.Sequence = Sequence;
	params.EndTime = EndTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackEnd
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*     Sequence                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            EndFrame                       (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneSequenceExtensions::STATIC_SetPlaybackEnd(class UMovieSceneSequence* Sequence, int EndFrame)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackEnd"));

	UMovieSceneSequenceExtensions_SetPlaybackEnd_Params params;
	params.Sequence = Sequence;
	params.EndFrame = EndFrame;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneSequenceExtensions.SetMarkedFrame
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*     Sequence                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            InMarkIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FFrameNumber            InFrameNumber                  (Parm)

void UMovieSceneSequenceExtensions::STATIC_SetMarkedFrame(class UMovieSceneSequence* Sequence, int InMarkIndex, const struct FFrameNumber& InFrameNumber)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSequenceExtensions.SetMarkedFrame"));

	UMovieSceneSequenceExtensions_SetMarkedFrame_Params params;
	params.Sequence = Sequence;
	params.InMarkIndex = InMarkIndex;
	params.InFrameNumber = InFrameNumber;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneSequenceExtensions.SetEvaluationType
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*     InSequence                     (Parm, ZeroConstructor, IsPlainOldData)
// enum class EMovieSceneEvaluationType InEvaluationType               (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneSequenceExtensions::STATIC_SetEvaluationType(class UMovieSceneSequence* InSequence, enum class EMovieSceneEvaluationType InEvaluationType)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSequenceExtensions.SetEvaluationType"));

	UMovieSceneSequenceExtensions_SetEvaluationType_Params params;
	params.InSequence = InSequence;
	params.InEvaluationType = InEvaluationType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneSequenceExtensions.SetDisplayRate
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*     Sequence                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FFrameRate              DisplayRate                    (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneSequenceExtensions::STATIC_SetDisplayRate(class UMovieSceneSequence* Sequence, const struct FFrameRate& DisplayRate)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSequenceExtensions.SetDisplayRate"));

	UMovieSceneSequenceExtensions_SetDisplayRate_Params params;
	params.Sequence = Sequence;
	params.DisplayRate = DisplayRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneSequenceExtensions.SetClockSource
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*     InSequence                     (Parm, ZeroConstructor, IsPlainOldData)
// enum class EUpdateClockSource  InClockSource                  (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneSequenceExtensions::STATIC_SetClockSource(class UMovieSceneSequence* InSequence, enum class EUpdateClockSource InClockSource)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSequenceExtensions.SetClockSource"));

	UMovieSceneSequenceExtensions_SetClockSource_Params params;
	params.InSequence = InSequence;
	params.InClockSource = InClockSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneSequenceExtensions.ResolveBindingID
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*     MasterSequence                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FMovieSceneObjectBindingID InObjectBindingID              (Parm)
// struct FSequencerBindingProxy  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSequencerBindingProxy UMovieSceneSequenceExtensions::STATIC_ResolveBindingID(class UMovieSceneSequence* MasterSequence, const struct FMovieSceneObjectBindingID& InObjectBindingID)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSequenceExtensions.ResolveBindingID"));

	UMovieSceneSequenceExtensions_ResolveBindingID_Params params;
	params.MasterSequence = MasterSequence;
	params.InObjectBindingID = InObjectBindingID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneSequenceExtensions.RemoveMasterTrack
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*     Sequence                       (Parm, ZeroConstructor, IsPlainOldData)
// class UMovieSceneTrack*        MasterTrack                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMovieSceneSequenceExtensions::STATIC_RemoveMasterTrack(class UMovieSceneSequence* Sequence, class UMovieSceneTrack* MasterTrack)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSequenceExtensions.RemoveMasterTrack"));

	UMovieSceneSequenceExtensions_RemoveMasterTrack_Params params;
	params.Sequence = Sequence;
	params.MasterTrack = MasterTrack;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneSequenceExtensions.MakeRangeSeconds
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*     Sequence                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          StartTime                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FSequencerScriptingRange ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSequencerScriptingRange UMovieSceneSequenceExtensions::STATIC_MakeRangeSeconds(class UMovieSceneSequence* Sequence, float StartTime, float Duration)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSequenceExtensions.MakeRangeSeconds"));

	UMovieSceneSequenceExtensions_MakeRangeSeconds_Params params;
	params.Sequence = Sequence;
	params.StartTime = StartTime;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneSequenceExtensions.MakeRange
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*     Sequence                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            StartFrame                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FSequencerScriptingRange ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSequencerScriptingRange UMovieSceneSequenceExtensions::STATIC_MakeRange(class UMovieSceneSequence* Sequence, int StartFrame, int Duration)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSequenceExtensions.MakeRange"));

	UMovieSceneSequenceExtensions_MakeRange_Params params;
	params.Sequence = Sequence;
	params.StartFrame = StartFrame;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneSequenceExtensions.MakeBindingID
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*     MasterSequence                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FSequencerBindingProxy  InBinding                      (ConstParm, Parm, OutParm, ReferenceParm)
// enum class EMovieSceneObjectBindingSpace Space                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FMovieSceneObjectBindingID ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMovieSceneObjectBindingID UMovieSceneSequenceExtensions::STATIC_MakeBindingID(class UMovieSceneSequence* MasterSequence, const struct FSequencerBindingProxy& InBinding, enum class EMovieSceneObjectBindingSpace Space)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSequenceExtensions.MakeBindingID"));

	UMovieSceneSequenceExtensions_MakeBindingID_Params params;
	params.MasterSequence = MasterSequence;
	params.InBinding = InBinding;
	params.Space = Space;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneSequenceExtensions.LocateBoundObjects
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*     Sequence                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FSequencerBindingProxy  InBinding                      (ConstParm, Parm, OutParm, ReferenceParm)
// class UObject*                 Context                        (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UObject*>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UObject*> UMovieSceneSequenceExtensions::STATIC_LocateBoundObjects(class UMovieSceneSequence* Sequence, const struct FSequencerBindingProxy& InBinding, class UObject* Context)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSequenceExtensions.LocateBoundObjects"));

	UMovieSceneSequenceExtensions_LocateBoundObjects_Params params;
	params.Sequence = Sequence;
	params.InBinding = InBinding;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneSequenceExtensions.IsReadOnly
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*     Sequence                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMovieSceneSequenceExtensions::STATIC_IsReadOnly(class UMovieSceneSequence* Sequence)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSequenceExtensions.IsReadOnly"));

	UMovieSceneSequenceExtensions_IsReadOnly_Params params;
	params.Sequence = Sequence;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneSequenceExtensions.GetWorkRangeStart
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMovieSceneSequence*     InSequence                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMovieSceneSequenceExtensions::STATIC_GetWorkRangeStart(class UMovieSceneSequence* InSequence)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSequenceExtensions.GetWorkRangeStart"));

	UMovieSceneSequenceExtensions_GetWorkRangeStart_Params params;
	params.InSequence = InSequence;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneSequenceExtensions.GetWorkRangeEnd
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMovieSceneSequence*     InSequence                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMovieSceneSequenceExtensions::STATIC_GetWorkRangeEnd(class UMovieSceneSequence* InSequence)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSequenceExtensions.GetWorkRangeEnd"));

	UMovieSceneSequenceExtensions_GetWorkRangeEnd_Params params;
	params.InSequence = InSequence;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneSequenceExtensions.GetViewRangeStart
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMovieSceneSequence*     InSequence                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMovieSceneSequenceExtensions::STATIC_GetViewRangeStart(class UMovieSceneSequence* InSequence)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSequenceExtensions.GetViewRangeStart"));

	UMovieSceneSequenceExtensions_GetViewRangeStart_Params params;
	params.InSequence = InSequence;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneSequenceExtensions.GetViewRangeEnd
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMovieSceneSequence*     InSequence                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMovieSceneSequenceExtensions::STATIC_GetViewRangeEnd(class UMovieSceneSequence* InSequence)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSequenceExtensions.GetViewRangeEnd"));

	UMovieSceneSequenceExtensions_GetViewRangeEnd_Params params;
	params.InSequence = InSequence;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneSequenceExtensions.GetTimecodeSource
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*     Sequence                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FTimecode               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FTimecode UMovieSceneSequenceExtensions::STATIC_GetTimecodeSource(class UMovieSceneSequence* Sequence)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSequenceExtensions.GetTimecodeSource"));

	UMovieSceneSequenceExtensions_GetTimecodeSource_Params params;
	params.Sequence = Sequence;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneSequenceExtensions.GetTickResolution
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*     Sequence                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FFrameRate              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FFrameRate UMovieSceneSequenceExtensions::STATIC_GetTickResolution(class UMovieSceneSequence* Sequence)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSequenceExtensions.GetTickResolution"));

	UMovieSceneSequenceExtensions_GetTickResolution_Params params;
	params.Sequence = Sequence;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneSequenceExtensions.GetSpawnables
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*     Sequence                       (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FSequencerBindingProxy> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FSequencerBindingProxy> UMovieSceneSequenceExtensions::STATIC_GetSpawnables(class UMovieSceneSequence* Sequence)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSequenceExtensions.GetSpawnables"));

	UMovieSceneSequenceExtensions_GetSpawnables_Params params;
	params.Sequence = Sequence;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneSequenceExtensions.GetRootFoldersInSequence
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMovieSceneSequence*     Sequence                       (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UMovieSceneFolder*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UMovieSceneFolder*> UMovieSceneSequenceExtensions::STATIC_GetRootFoldersInSequence(class UMovieSceneSequence* Sequence)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSequenceExtensions.GetRootFoldersInSequence"));

	UMovieSceneSequenceExtensions_GetRootFoldersInSequence_Params params;
	params.Sequence = Sequence;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneSequenceExtensions.GetPossessables
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*     Sequence                       (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FSequencerBindingProxy> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FSequencerBindingProxy> UMovieSceneSequenceExtensions::STATIC_GetPossessables(class UMovieSceneSequence* Sequence)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSequenceExtensions.GetPossessables"));

	UMovieSceneSequenceExtensions_GetPossessables_Params params;
	params.Sequence = Sequence;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneSequenceExtensions.GetPortableBindingID
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*     MasterSequence                 (Parm, ZeroConstructor, IsPlainOldData)
// class UMovieSceneSequence*     DestinationSequence            (Parm, ZeroConstructor, IsPlainOldData)
// struct FSequencerBindingProxy  InBinding                      (ConstParm, Parm, OutParm, ReferenceParm)
// struct FMovieSceneObjectBindingID ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMovieSceneObjectBindingID UMovieSceneSequenceExtensions::STATIC_GetPortableBindingID(class UMovieSceneSequence* MasterSequence, class UMovieSceneSequence* DestinationSequence, const struct FSequencerBindingProxy& InBinding)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSequenceExtensions.GetPortableBindingID"));

	UMovieSceneSequenceExtensions_GetPortableBindingID_Params params;
	params.MasterSequence = MasterSequence;
	params.DestinationSequence = DestinationSequence;
	params.InBinding = InBinding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackStartSeconds
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*     Sequence                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMovieSceneSequenceExtensions::STATIC_GetPlaybackStartSeconds(class UMovieSceneSequence* Sequence)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackStartSeconds"));

	UMovieSceneSequenceExtensions_GetPlaybackStartSeconds_Params params;
	params.Sequence = Sequence;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackStart
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*     Sequence                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMovieSceneSequenceExtensions::STATIC_GetPlaybackStart(class UMovieSceneSequence* Sequence)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackStart"));

	UMovieSceneSequenceExtensions_GetPlaybackStart_Params params;
	params.Sequence = Sequence;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackRange
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*     Sequence                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FSequencerScriptingRange ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSequencerScriptingRange UMovieSceneSequenceExtensions::STATIC_GetPlaybackRange(class UMovieSceneSequence* Sequence)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackRange"));

	UMovieSceneSequenceExtensions_GetPlaybackRange_Params params;
	params.Sequence = Sequence;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackEndSeconds
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*     Sequence                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMovieSceneSequenceExtensions::STATIC_GetPlaybackEndSeconds(class UMovieSceneSequence* Sequence)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackEndSeconds"));

	UMovieSceneSequenceExtensions_GetPlaybackEndSeconds_Params params;
	params.Sequence = Sequence;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackEnd
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*     Sequence                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMovieSceneSequenceExtensions::STATIC_GetPlaybackEnd(class UMovieSceneSequence* Sequence)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackEnd"));

	UMovieSceneSequenceExtensions_GetPlaybackEnd_Params params;
	params.Sequence = Sequence;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneSequenceExtensions.GetMovieScene
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*     Sequence                       (Parm, ZeroConstructor, IsPlainOldData)
// class UMovieScene*             ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UMovieScene* UMovieSceneSequenceExtensions::STATIC_GetMovieScene(class UMovieSceneSequence* Sequence)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSequenceExtensions.GetMovieScene"));

	UMovieSceneSequenceExtensions_GetMovieScene_Params params;
	params.Sequence = Sequence;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneSequenceExtensions.GetMasterTracks
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*     Sequence                       (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UMovieSceneTrack*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UMovieSceneTrack*> UMovieSceneSequenceExtensions::STATIC_GetMasterTracks(class UMovieSceneSequence* Sequence)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSequenceExtensions.GetMasterTracks"));

	UMovieSceneSequenceExtensions_GetMasterTracks_Params params;
	params.Sequence = Sequence;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneSequenceExtensions.GetMarkedFrames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*     Sequence                       (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMovieSceneMarkedFrame> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMovieSceneMarkedFrame> UMovieSceneSequenceExtensions::STATIC_GetMarkedFrames(class UMovieSceneSequence* Sequence)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSequenceExtensions.GetMarkedFrames"));

	UMovieSceneSequenceExtensions_GetMarkedFrames_Params params;
	params.Sequence = Sequence;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneSequenceExtensions.GetEvaluationType
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMovieSceneSequence*     InSequence                     (Parm, ZeroConstructor, IsPlainOldData)
// enum class EMovieSceneEvaluationType ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

enum class EMovieSceneEvaluationType UMovieSceneSequenceExtensions::STATIC_GetEvaluationType(class UMovieSceneSequence* InSequence)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSequenceExtensions.GetEvaluationType"));

	UMovieSceneSequenceExtensions_GetEvaluationType_Params params;
	params.InSequence = InSequence;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneSequenceExtensions.GetDisplayRate
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*     Sequence                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FFrameRate              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FFrameRate UMovieSceneSequenceExtensions::STATIC_GetDisplayRate(class UMovieSceneSequence* Sequence)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSequenceExtensions.GetDisplayRate"));

	UMovieSceneSequenceExtensions_GetDisplayRate_Params params;
	params.Sequence = Sequence;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneSequenceExtensions.GetClockSource
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMovieSceneSequence*     InSequence                     (Parm, ZeroConstructor, IsPlainOldData)
// enum class EUpdateClockSource  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

enum class EUpdateClockSource UMovieSceneSequenceExtensions::STATIC_GetClockSource(class UMovieSceneSequence* InSequence)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSequenceExtensions.GetClockSource"));

	UMovieSceneSequenceExtensions_GetClockSource_Params params;
	params.InSequence = InSequence;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneSequenceExtensions.GetBindings
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*     Sequence                       (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FSequencerBindingProxy> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FSequencerBindingProxy> UMovieSceneSequenceExtensions::STATIC_GetBindings(class UMovieSceneSequence* Sequence)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSequenceExtensions.GetBindings"));

	UMovieSceneSequenceExtensions_GetBindings_Params params;
	params.Sequence = Sequence;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneSequenceExtensions.GetBindingID
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSequencerBindingProxy  InBinding                      (ConstParm, Parm, OutParm, ReferenceParm)
// struct FMovieSceneObjectBindingID ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMovieSceneObjectBindingID UMovieSceneSequenceExtensions::STATIC_GetBindingID(const struct FSequencerBindingProxy& InBinding)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSequenceExtensions.GetBindingID"));

	UMovieSceneSequenceExtensions_GetBindingID_Params params;
	params.InBinding = InBinding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneSequenceExtensions.FindNextMarkedFrame
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*     Sequence                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FFrameNumber            InFrameNumber                  (Parm)
// bool                           bForward                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMovieSceneSequenceExtensions::STATIC_FindNextMarkedFrame(class UMovieSceneSequence* Sequence, const struct FFrameNumber& InFrameNumber, bool bForward)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSequenceExtensions.FindNextMarkedFrame"));

	UMovieSceneSequenceExtensions_FindNextMarkedFrame_Params params;
	params.Sequence = Sequence;
	params.InFrameNumber = InFrameNumber;
	params.bForward = bForward;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneSequenceExtensions.FindMasterTracksByType
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*     Sequence                       (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  TrackType                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UMovieSceneTrack*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UMovieSceneTrack*> UMovieSceneSequenceExtensions::STATIC_FindMasterTracksByType(class UMovieSceneSequence* Sequence, class UClass* TrackType)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSequenceExtensions.FindMasterTracksByType"));

	UMovieSceneSequenceExtensions_FindMasterTracksByType_Params params;
	params.Sequence = Sequence;
	params.TrackType = TrackType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneSequenceExtensions.FindMasterTracksByExactType
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*     Sequence                       (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  TrackType                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UMovieSceneTrack*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UMovieSceneTrack*> UMovieSceneSequenceExtensions::STATIC_FindMasterTracksByExactType(class UMovieSceneSequence* Sequence, class UClass* TrackType)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSequenceExtensions.FindMasterTracksByExactType"));

	UMovieSceneSequenceExtensions_FindMasterTracksByExactType_Params params;
	params.Sequence = Sequence;
	params.TrackType = TrackType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneSequenceExtensions.FindMarkedFrameByLabel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*     Sequence                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InLabel                        (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMovieSceneSequenceExtensions::STATIC_FindMarkedFrameByLabel(class UMovieSceneSequence* Sequence, const struct FString& InLabel)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSequenceExtensions.FindMarkedFrameByLabel"));

	UMovieSceneSequenceExtensions_FindMarkedFrameByLabel_Params params;
	params.Sequence = Sequence;
	params.InLabel = InLabel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneSequenceExtensions.FindMarkedFrameByFrameNumber
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*     Sequence                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FFrameNumber            InFrameNumber                  (Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMovieSceneSequenceExtensions::STATIC_FindMarkedFrameByFrameNumber(class UMovieSceneSequence* Sequence, const struct FFrameNumber& InFrameNumber)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSequenceExtensions.FindMarkedFrameByFrameNumber"));

	UMovieSceneSequenceExtensions_FindMarkedFrameByFrameNumber_Params params;
	params.Sequence = Sequence;
	params.InFrameNumber = InFrameNumber;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneSequenceExtensions.FindBindingByName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*     Sequence                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (Parm, ZeroConstructor)
// struct FSequencerBindingProxy  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSequencerBindingProxy UMovieSceneSequenceExtensions::STATIC_FindBindingByName(class UMovieSceneSequence* Sequence, const struct FString& Name)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSequenceExtensions.FindBindingByName"));

	UMovieSceneSequenceExtensions_FindBindingByName_Params params;
	params.Sequence = Sequence;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneSequenceExtensions.FindBindingById
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*     Sequence                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FGuid                   BindingID                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FSequencerBindingProxy  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSequencerBindingProxy UMovieSceneSequenceExtensions::STATIC_FindBindingById(class UMovieSceneSequence* Sequence, const struct FGuid& BindingID)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSequenceExtensions.FindBindingById"));

	UMovieSceneSequenceExtensions_FindBindingById_Params params;
	params.Sequence = Sequence;
	params.BindingID = BindingID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneSequenceExtensions.DeleteMarkedFrames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*     Sequence                       (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneSequenceExtensions::STATIC_DeleteMarkedFrames(class UMovieSceneSequence* Sequence)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSequenceExtensions.DeleteMarkedFrames"));

	UMovieSceneSequenceExtensions_DeleteMarkedFrames_Params params;
	params.Sequence = Sequence;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneSequenceExtensions.DeleteMarkedFrame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*     Sequence                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            DeleteIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneSequenceExtensions::STATIC_DeleteMarkedFrame(class UMovieSceneSequence* Sequence, int DeleteIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSequenceExtensions.DeleteMarkedFrame"));

	UMovieSceneSequenceExtensions_DeleteMarkedFrame_Params params;
	params.Sequence = Sequence;
	params.DeleteIndex = DeleteIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneSequenceExtensions.AddSpawnableFromInstance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*     Sequence                       (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ObjectToSpawn                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FSequencerBindingProxy  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSequencerBindingProxy UMovieSceneSequenceExtensions::STATIC_AddSpawnableFromInstance(class UMovieSceneSequence* Sequence, class UObject* ObjectToSpawn)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSequenceExtensions.AddSpawnableFromInstance"));

	UMovieSceneSequenceExtensions_AddSpawnableFromInstance_Params params;
	params.Sequence = Sequence;
	params.ObjectToSpawn = ObjectToSpawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneSequenceExtensions.AddSpawnableFromClass
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*     Sequence                       (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ClassToSpawn                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FSequencerBindingProxy  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSequencerBindingProxy UMovieSceneSequenceExtensions::STATIC_AddSpawnableFromClass(class UMovieSceneSequence* Sequence, class UClass* ClassToSpawn)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSequenceExtensions.AddSpawnableFromClass"));

	UMovieSceneSequenceExtensions_AddSpawnableFromClass_Params params;
	params.Sequence = Sequence;
	params.ClassToSpawn = ClassToSpawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneSequenceExtensions.AddRootFolderToSequence
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*     Sequence                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 NewFolderName                  (Parm, ZeroConstructor)
// class UMovieSceneFolder*       ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UMovieSceneFolder* UMovieSceneSequenceExtensions::STATIC_AddRootFolderToSequence(class UMovieSceneSequence* Sequence, const struct FString& NewFolderName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSequenceExtensions.AddRootFolderToSequence"));

	UMovieSceneSequenceExtensions_AddRootFolderToSequence_Params params;
	params.Sequence = Sequence;
	params.NewFolderName = NewFolderName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneSequenceExtensions.AddPossessable
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*     Sequence                       (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ObjectToPossess                (Parm, ZeroConstructor, IsPlainOldData)
// struct FSequencerBindingProxy  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSequencerBindingProxy UMovieSceneSequenceExtensions::STATIC_AddPossessable(class UMovieSceneSequence* Sequence, class UObject* ObjectToPossess)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSequenceExtensions.AddPossessable"));

	UMovieSceneSequenceExtensions_AddPossessable_Params params;
	params.Sequence = Sequence;
	params.ObjectToPossess = ObjectToPossess;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneSequenceExtensions.AddMasterTrack
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*     Sequence                       (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  TrackType                      (Parm, ZeroConstructor, IsPlainOldData)
// class UMovieSceneTrack*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UMovieSceneTrack* UMovieSceneSequenceExtensions::STATIC_AddMasterTrack(class UMovieSceneSequence* Sequence, class UClass* TrackType)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSequenceExtensions.AddMasterTrack"));

	UMovieSceneSequenceExtensions_AddMasterTrack_Params params;
	params.Sequence = Sequence;
	params.TrackType = TrackType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneSequenceExtensions.AddMarkedFrame
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*     Sequence                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FMovieSceneMarkedFrame  InMarkedFrame                  (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMovieSceneSequenceExtensions::STATIC_AddMarkedFrame(class UMovieSceneSequence* Sequence, const struct FMovieSceneMarkedFrame& InMarkedFrame)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneSequenceExtensions.AddMarkedFrame"));

	UMovieSceneSequenceExtensions_AddMarkedFrame_Params params;
	params.Sequence = Sequence;
	params.InMarkedFrame = InMarkedFrame;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneTrackExtensions.SetTrackRowDisplayName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UMovieSceneTrack*        Track                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FText                   InName                         (ConstParm, Parm, OutParm, ReferenceParm)
// int                            RowIndex                       (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneTrackExtensions::STATIC_SetTrackRowDisplayName(class UMovieSceneTrack* Track, const struct FText& InName, int RowIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneTrackExtensions.SetTrackRowDisplayName"));

	UMovieSceneTrackExtensions_SetTrackRowDisplayName_Params params;
	params.Track = Track;
	params.InName = InName;
	params.RowIndex = RowIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneTrackExtensions.SetSortingOrder
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneTrack*        Track                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            SortingOrder                   (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneTrackExtensions::STATIC_SetSortingOrder(class UMovieSceneTrack* Track, int SortingOrder)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneTrackExtensions.SetSortingOrder"));

	UMovieSceneTrackExtensions_SetSortingOrder_Params params;
	params.Track = Track;
	params.SortingOrder = SortingOrder;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneTrackExtensions.SetSectionToKey
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneTrack*        Track                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UMovieSceneSection*      Section                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMovieSceneTrackExtensions::STATIC_SetSectionToKey(class UMovieSceneTrack* Track, class UMovieSceneSection* Section)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneTrackExtensions.SetSectionToKey"));

	UMovieSceneTrackExtensions_SetSectionToKey_Params params;
	params.Track = Track;
	params.Section = Section;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneTrackExtensions.SetDisplayName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UMovieSceneTrack*        Track                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FText                   InName                         (ConstParm, Parm, OutParm, ReferenceParm)

void UMovieSceneTrackExtensions::STATIC_SetDisplayName(class UMovieSceneTrack* Track, const struct FText& InName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneTrackExtensions.SetDisplayName"));

	UMovieSceneTrackExtensions_SetDisplayName_Params params;
	params.Track = Track;
	params.InName = InName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneTrackExtensions.SetColorTint
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UMovieSceneTrack*        Track                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FColor                  ColorTint                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UMovieSceneTrackExtensions::STATIC_SetColorTint(class UMovieSceneTrack* Track, const struct FColor& ColorTint)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneTrackExtensions.SetColorTint"));

	UMovieSceneTrackExtensions_SetColorTint_Params params;
	params.Track = Track;
	params.ColorTint = ColorTint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneTrackExtensions.RemoveSection
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneTrack*        Track                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UMovieSceneSection*      Section                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMovieSceneTrackExtensions::STATIC_RemoveSection(class UMovieSceneTrack* Track, class UMovieSceneSection* Section)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneTrackExtensions.RemoveSection"));

	UMovieSceneTrackExtensions_RemoveSection_Params params;
	params.Track = Track;
	params.Section = Section;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneTrackExtensions.GetTrackRowDisplayName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneTrack*        Track                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            RowIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UMovieSceneTrackExtensions::STATIC_GetTrackRowDisplayName(class UMovieSceneTrack* Track, int RowIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneTrackExtensions.GetTrackRowDisplayName"));

	UMovieSceneTrackExtensions_GetTrackRowDisplayName_Params params;
	params.Track = Track;
	params.RowIndex = RowIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneTrackExtensions.GetSortingOrder
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneTrack*        Track                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMovieSceneTrackExtensions::STATIC_GetSortingOrder(class UMovieSceneTrack* Track)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneTrackExtensions.GetSortingOrder"));

	UMovieSceneTrackExtensions_GetSortingOrder_Params params;
	params.Track = Track;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneTrackExtensions.GetSectionToKey
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneTrack*        Track                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UMovieSceneSection*      ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UMovieSceneSection* UMovieSceneTrackExtensions::STATIC_GetSectionToKey(class UMovieSceneTrack* Track)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneTrackExtensions.GetSectionToKey"));

	UMovieSceneTrackExtensions_GetSectionToKey_Params params;
	params.Track = Track;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneTrackExtensions.GetSections
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneTrack*        Track                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TArray<class UMovieSceneSection*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UMovieSceneSection*> UMovieSceneTrackExtensions::STATIC_GetSections(class UMovieSceneTrack* Track)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneTrackExtensions.GetSections"));

	UMovieSceneTrackExtensions_GetSections_Params params;
	params.Track = Track;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneTrackExtensions.GetDisplayName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneTrack*        Track                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UMovieSceneTrackExtensions::STATIC_GetDisplayName(class UMovieSceneTrack* Track)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneTrackExtensions.GetDisplayName"));

	UMovieSceneTrackExtensions_GetDisplayName_Params params;
	params.Track = Track;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneTrackExtensions.GetColorTint
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UMovieSceneTrack*        Track                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FColor                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FColor UMovieSceneTrackExtensions::STATIC_GetColorTint(class UMovieSceneTrack* Track)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneTrackExtensions.GetColorTint"));

	UMovieSceneTrackExtensions_GetColorTint_Params params;
	params.Track = Track;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneTrackExtensions.AddSection
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneTrack*        Track                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UMovieSceneSection*      ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UMovieSceneSection* UMovieSceneTrackExtensions::STATIC_AddSection(class UMovieSceneTrack* Track)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneTrackExtensions.AddSection"));

	UMovieSceneTrackExtensions_AddSection_Params params;
	params.Track = Track;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneFloatVectorTrackExtensions.SetNumChannelsUsed
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneFloatVectorTrack* Track                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InNumChannelsUsed              (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneFloatVectorTrackExtensions::STATIC_SetNumChannelsUsed(class UMovieSceneFloatVectorTrack* Track, int InNumChannelsUsed)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneFloatVectorTrackExtensions.SetNumChannelsUsed"));

	UMovieSceneFloatVectorTrackExtensions_SetNumChannelsUsed_Params params;
	params.Track = Track;
	params.InNumChannelsUsed = InNumChannelsUsed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneFloatVectorTrackExtensions.GetNumChannelsUsed
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneFloatVectorTrack* Track                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMovieSceneFloatVectorTrackExtensions::STATIC_GetNumChannelsUsed(class UMovieSceneFloatVectorTrack* Track)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneFloatVectorTrackExtensions.GetNumChannelsUsed"));

	UMovieSceneFloatVectorTrackExtensions_GetNumChannelsUsed_Params params;
	params.Track = Track;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.MovieSceneDoubleVectorTrackExtensions.SetNumChannelsUsed
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneDoubleVectorTrack* Track                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InNumChannelsUsed              (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneDoubleVectorTrackExtensions::STATIC_SetNumChannelsUsed(class UMovieSceneDoubleVectorTrack* Track, int InNumChannelsUsed)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneDoubleVectorTrackExtensions.SetNumChannelsUsed"));

	UMovieSceneDoubleVectorTrackExtensions_SetNumChannelsUsed_Params params;
	params.Track = Track;
	params.InNumChannelsUsed = InNumChannelsUsed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SequencerScripting.MovieSceneDoubleVectorTrackExtensions.GetNumChannelsUsed
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneDoubleVectorTrack* Track                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMovieSceneDoubleVectorTrackExtensions::STATIC_GetNumChannelsUsed(class UMovieSceneDoubleVectorTrack* Track)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.MovieSceneDoubleVectorTrackExtensions.GetNumChannelsUsed"));

	UMovieSceneDoubleVectorTrackExtensions_GetNumChannelsUsed_Params params;
	params.Track = Track;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.SequencerScriptingRangeExtensions.SetStartSeconds
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSequencerScriptingRange Range                          (Parm, OutParm, ReferenceParm)
// float                          Start                          (Parm, ZeroConstructor, IsPlainOldData)

void USequencerScriptingRangeExtensions::STATIC_SetStartSeconds(float Start, struct FSequencerScriptingRange* Range)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.SequencerScriptingRangeExtensions.SetStartSeconds"));

	USequencerScriptingRangeExtensions_SetStartSeconds_Params params;
	params.Start = Start;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Range != nullptr)
		*Range = params.Range;
}


// Function SequencerScripting.SequencerScriptingRangeExtensions.SetStartFrame
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSequencerScriptingRange Range                          (Parm, OutParm, ReferenceParm)
// int                            Start                          (Parm, ZeroConstructor, IsPlainOldData)

void USequencerScriptingRangeExtensions::STATIC_SetStartFrame(int Start, struct FSequencerScriptingRange* Range)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.SequencerScriptingRangeExtensions.SetStartFrame"));

	USequencerScriptingRangeExtensions_SetStartFrame_Params params;
	params.Start = Start;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Range != nullptr)
		*Range = params.Range;
}


// Function SequencerScripting.SequencerScriptingRangeExtensions.SetEndSeconds
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSequencerScriptingRange Range                          (Parm, OutParm, ReferenceParm)
// float                          End                            (Parm, ZeroConstructor, IsPlainOldData)

void USequencerScriptingRangeExtensions::STATIC_SetEndSeconds(float End, struct FSequencerScriptingRange* Range)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.SequencerScriptingRangeExtensions.SetEndSeconds"));

	USequencerScriptingRangeExtensions_SetEndSeconds_Params params;
	params.End = End;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Range != nullptr)
		*Range = params.Range;
}


// Function SequencerScripting.SequencerScriptingRangeExtensions.SetEndFrame
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSequencerScriptingRange Range                          (Parm, OutParm, ReferenceParm)
// int                            End                            (Parm, ZeroConstructor, IsPlainOldData)

void USequencerScriptingRangeExtensions::STATIC_SetEndFrame(int End, struct FSequencerScriptingRange* Range)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.SequencerScriptingRangeExtensions.SetEndFrame"));

	USequencerScriptingRangeExtensions_SetEndFrame_Params params;
	params.End = End;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Range != nullptr)
		*Range = params.Range;
}


// Function SequencerScripting.SequencerScriptingRangeExtensions.RemoveStart
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSequencerScriptingRange Range                          (Parm, OutParm, ReferenceParm)

void USequencerScriptingRangeExtensions::STATIC_RemoveStart(struct FSequencerScriptingRange* Range)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.SequencerScriptingRangeExtensions.RemoveStart"));

	USequencerScriptingRangeExtensions_RemoveStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Range != nullptr)
		*Range = params.Range;
}


// Function SequencerScripting.SequencerScriptingRangeExtensions.RemoveEnd
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSequencerScriptingRange Range                          (Parm, OutParm, ReferenceParm)

void USequencerScriptingRangeExtensions::STATIC_RemoveEnd(struct FSequencerScriptingRange* Range)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.SequencerScriptingRangeExtensions.RemoveEnd"));

	USequencerScriptingRangeExtensions_RemoveEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Range != nullptr)
		*Range = params.Range;
}


// Function SequencerScripting.SequencerScriptingRangeExtensions.HasStart
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSequencerScriptingRange Range                          (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USequencerScriptingRangeExtensions::STATIC_HasStart(const struct FSequencerScriptingRange& Range)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.SequencerScriptingRangeExtensions.HasStart"));

	USequencerScriptingRangeExtensions_HasStart_Params params;
	params.Range = Range;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.SequencerScriptingRangeExtensions.HasEnd
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSequencerScriptingRange Range                          (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USequencerScriptingRangeExtensions::STATIC_HasEnd(const struct FSequencerScriptingRange& Range)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.SequencerScriptingRangeExtensions.HasEnd"));

	USequencerScriptingRangeExtensions_HasEnd_Params params;
	params.Range = Range;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.SequencerScriptingRangeExtensions.GetStartSeconds
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSequencerScriptingRange Range                          (ConstParm, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USequencerScriptingRangeExtensions::STATIC_GetStartSeconds(const struct FSequencerScriptingRange& Range)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.SequencerScriptingRangeExtensions.GetStartSeconds"));

	USequencerScriptingRangeExtensions_GetStartSeconds_Params params;
	params.Range = Range;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.SequencerScriptingRangeExtensions.GetStartFrame
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSequencerScriptingRange Range                          (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USequencerScriptingRangeExtensions::STATIC_GetStartFrame(const struct FSequencerScriptingRange& Range)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.SequencerScriptingRangeExtensions.GetStartFrame"));

	USequencerScriptingRangeExtensions_GetStartFrame_Params params;
	params.Range = Range;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.SequencerScriptingRangeExtensions.GetEndSeconds
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSequencerScriptingRange Range                          (ConstParm, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USequencerScriptingRangeExtensions::STATIC_GetEndSeconds(const struct FSequencerScriptingRange& Range)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.SequencerScriptingRangeExtensions.GetEndSeconds"));

	USequencerScriptingRangeExtensions_GetEndSeconds_Params params;
	params.Range = Range;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SequencerScripting.SequencerScriptingRangeExtensions.GetEndFrame
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSequencerScriptingRange Range                          (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USequencerScriptingRangeExtensions::STATIC_GetEndFrame(const struct FSequencerScriptingRange& Range)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function SequencerScripting.SequencerScriptingRangeExtensions.GetEndFrame"));

	USequencerScriptingRangeExtensions_GetEndFrame_Params params;
	params.Range = Range;

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
