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

// Function SequencerScripting.MovieSceneBindingExtensions.SetParent
struct UMovieSceneBindingExtensions_SetParent_Params
{
	struct FSequencerBindingProxy                      InBinding;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FSequencerBindingProxy                      InParentBinding;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function SequencerScripting.MovieSceneBindingExtensions.SetName
struct UMovieSceneBindingExtensions_SetName_Params
{
	struct FSequencerBindingProxy                      InBinding;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     InName;                                                   // (Parm, ZeroConstructor)
};

// Function SequencerScripting.MovieSceneBindingExtensions.SetDisplayName
struct UMovieSceneBindingExtensions_SetDisplayName_Params
{
	struct FSequencerBindingProxy                      InBinding;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText                                       InDisplayName;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function SequencerScripting.MovieSceneBindingExtensions.RemoveTrack
struct UMovieSceneBindingExtensions_RemoveTrack_Params
{
	struct FSequencerBindingProxy                      InBinding;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	class UMovieSceneTrack*                            TrackToRemove;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneBindingExtensions.Remove
struct UMovieSceneBindingExtensions_Remove_Params
{
	struct FSequencerBindingProxy                      InBinding;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function SequencerScripting.MovieSceneBindingExtensions.MoveBindingContents
struct UMovieSceneBindingExtensions_MoveBindingContents_Params
{
	struct FSequencerBindingProxy                      SourceBindingId;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FSequencerBindingProxy                      DestinationBindingId;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function SequencerScripting.MovieSceneBindingExtensions.IsValid
struct UMovieSceneBindingExtensions_IsValid_Params
{
	struct FSequencerBindingProxy                      InBinding;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneBindingExtensions.GetTracks
struct UMovieSceneBindingExtensions_GetTracks_Params
{
	struct FSequencerBindingProxy                      InBinding;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<class UMovieSceneTrack*>                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SequencerScripting.MovieSceneBindingExtensions.GetPossessedObjectClass
struct UMovieSceneBindingExtensions_GetPossessedObjectClass_Params
{
	struct FSequencerBindingProxy                      InBinding;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneBindingExtensions.GetParent
struct UMovieSceneBindingExtensions_GetParent_Params
{
	struct FSequencerBindingProxy                      InBinding;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FSequencerBindingProxy                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SequencerScripting.MovieSceneBindingExtensions.GetObjectTemplate
struct UMovieSceneBindingExtensions_GetObjectTemplate_Params
{
	struct FSequencerBindingProxy                      InBinding;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneBindingExtensions.GetName
struct UMovieSceneBindingExtensions_GetName_Params
{
	struct FSequencerBindingProxy                      InBinding;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SequencerScripting.MovieSceneBindingExtensions.GetId
struct UMovieSceneBindingExtensions_GetId_Params
{
	struct FSequencerBindingProxy                      InBinding;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGuid                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneBindingExtensions.GetDisplayName
struct UMovieSceneBindingExtensions_GetDisplayName_Params
{
	struct FSequencerBindingProxy                      InBinding;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SequencerScripting.MovieSceneBindingExtensions.GetChildPossessables
struct UMovieSceneBindingExtensions_GetChildPossessables_Params
{
	struct FSequencerBindingProxy                      InBinding;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<struct FSequencerBindingProxy>              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SequencerScripting.MovieSceneBindingExtensions.FindTracksByType
struct UMovieSceneBindingExtensions_FindTracksByType_Params
{
	struct FSequencerBindingProxy                      InBinding;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	class UClass*                                      TrackType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UMovieSceneTrack*>                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SequencerScripting.MovieSceneBindingExtensions.FindTracksByExactType
struct UMovieSceneBindingExtensions_FindTracksByExactType_Params
{
	struct FSequencerBindingProxy                      InBinding;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	class UClass*                                      TrackType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UMovieSceneTrack*>                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SequencerScripting.MovieSceneBindingExtensions.AddTrack
struct UMovieSceneBindingExtensions_AddTrack_Params
{
	struct FSequencerBindingProxy                      InBinding;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	class UClass*                                      TrackType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UMovieSceneTrack*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneEventTrackExtensions.GetBoundObjectPropertyClass
struct UMovieSceneEventTrackExtensions_GetBoundObjectPropertyClass_Params
{
	struct FMovieSceneEvent                            EventKey;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneEventTrackExtensions.AddEventTriggerSection
struct UMovieSceneEventTrackExtensions_AddEventTriggerSection_Params
{
	class UMovieSceneEventTrack*                       InTrack;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMovieSceneEventTriggerSection*              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneEventTrackExtensions.AddEventRepeaterSection
struct UMovieSceneEventTrackExtensions_AddEventRepeaterSection_Params
{
	class UMovieSceneEventTrack*                       InTrack;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMovieSceneEventRepeaterSection*             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneFolderExtensions.SetFolderName
struct UMovieSceneFolderExtensions_SetFolderName_Params
{
	class UMovieSceneFolder*                           Folder;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       InFolderName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneFolderExtensions.SetFolderColor
struct UMovieSceneFolderExtensions_SetFolderColor_Params
{
	class UMovieSceneFolder*                           Folder;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FColor                                      InFolderColor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneFolderExtensions.RemoveChildObjectBinding
struct UMovieSceneFolderExtensions_RemoveChildObjectBinding_Params
{
	class UMovieSceneFolder*                           Folder;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FSequencerBindingProxy                      InObjectBinding;                                          // (ConstParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneFolderExtensions.RemoveChildMasterTrack
struct UMovieSceneFolderExtensions_RemoveChildMasterTrack_Params
{
	class UMovieSceneFolder*                           Folder;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMovieSceneTrack*                            InMasterTrack;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneFolderExtensions.RemoveChildFolder
struct UMovieSceneFolderExtensions_RemoveChildFolder_Params
{
	class UMovieSceneFolder*                           TargetFolder;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMovieSceneFolder*                           FolderToRemove;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneFolderExtensions.GetFolderName
struct UMovieSceneFolderExtensions_GetFolderName_Params
{
	class UMovieSceneFolder*                           Folder;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneFolderExtensions.GetFolderColor
struct UMovieSceneFolderExtensions_GetFolderColor_Params
{
	class UMovieSceneFolder*                           Folder;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FColor                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneFolderExtensions.GetChildObjectBindings
struct UMovieSceneFolderExtensions_GetChildObjectBindings_Params
{
	class UMovieSceneFolder*                           Folder;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FSequencerBindingProxy>              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SequencerScripting.MovieSceneFolderExtensions.GetChildMasterTracks
struct UMovieSceneFolderExtensions_GetChildMasterTracks_Params
{
	class UMovieSceneFolder*                           Folder;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UMovieSceneTrack*>                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SequencerScripting.MovieSceneFolderExtensions.GetChildFolders
struct UMovieSceneFolderExtensions_GetChildFolders_Params
{
	class UMovieSceneFolder*                           Folder;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UMovieSceneFolder*>                   ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SequencerScripting.MovieSceneFolderExtensions.AddChildObjectBinding
struct UMovieSceneFolderExtensions_AddChildObjectBinding_Params
{
	class UMovieSceneFolder*                           Folder;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FSequencerBindingProxy                      InObjectBinding;                                          // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneFolderExtensions.AddChildMasterTrack
struct UMovieSceneFolderExtensions_AddChildMasterTrack_Params
{
	class UMovieSceneFolder*                           Folder;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMovieSceneTrack*                            InMasterTrack;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneFolderExtensions.AddChildFolder
struct UMovieSceneFolderExtensions_AddChildFolder_Params
{
	class UMovieSceneFolder*                           TargetFolder;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMovieSceneFolder*                           FolderToAdd;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieScenePropertyTrackExtensions.SetPropertyNameAndPath
struct UMovieScenePropertyTrackExtensions_SetPropertyNameAndPath_Params
{
	class UMovieScenePropertyTrack*                    Track;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       InPropertyName;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FString                                     InPropertyPath;                                           // (Parm, ZeroConstructor)
};

// Function SequencerScripting.MovieScenePropertyTrackExtensions.SetObjectPropertyClass
struct UMovieScenePropertyTrackExtensions_SetObjectPropertyClass_Params
{
	class UMovieSceneObjectPropertyTrack*              Track;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      PropertyClass;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieScenePropertyTrackExtensions.GetUniqueTrackName
struct UMovieScenePropertyTrackExtensions_GetUniqueTrackName_Params
{
	class UMovieScenePropertyTrack*                    Track;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieScenePropertyTrackExtensions.GetPropertyPath
struct UMovieScenePropertyTrackExtensions_GetPropertyPath_Params
{
	class UMovieScenePropertyTrack*                    Track;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SequencerScripting.MovieScenePropertyTrackExtensions.GetPropertyName
struct UMovieScenePropertyTrackExtensions_GetPropertyName_Params
{
	class UMovieScenePropertyTrack*                    Track;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieScenePropertyTrackExtensions.GetObjectPropertyClass
struct UMovieScenePropertyTrackExtensions_GetObjectPropertyClass_Params
{
	class UMovieSceneObjectPropertyTrack*              Track;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingActorReferenceKey.SetValue
struct UMovieSceneScriptingActorReferenceKey_SetValue_Params
{
	struct FMovieSceneObjectBindingID                  InNewValue;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function SequencerScripting.MovieSceneScriptingActorReferenceKey.SetTime
struct UMovieSceneScriptingActorReferenceKey_SetTime_Params
{
	struct FFrameNumber                                NewFrameNumber;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              SubFrame;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	enum class ESequenceTimeUnit                       TimeUnit;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingActorReferenceKey.GetValue
struct UMovieSceneScriptingActorReferenceKey_GetValue_Params
{
	struct FMovieSceneObjectBindingID                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SequencerScripting.MovieSceneScriptingActorReferenceKey.GetTime
struct UMovieSceneScriptingActorReferenceKey_GetTime_Params
{
	enum class ESequenceTimeUnit                       TimeUnit;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFrameTime                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.SetDefault
struct UMovieSceneScriptingActorReferenceChannel_SetDefault_Params
{
	struct FMovieSceneObjectBindingID                  InDefaultValue;                                           // (Parm)
};

// Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.RemoveKey
struct UMovieSceneScriptingActorReferenceChannel_RemoveKey_Params
{
	class UMovieSceneScriptingKey*                     Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.RemoveDefault
struct UMovieSceneScriptingActorReferenceChannel_RemoveDefault_Params
{
};

// Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.HasDefault
struct UMovieSceneScriptingActorReferenceChannel_HasDefault_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.GetKeys
struct UMovieSceneScriptingActorReferenceChannel_GetKeys_Params
{
	TArray<class UMovieSceneScriptingKey*>             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.GetDefault
struct UMovieSceneScriptingActorReferenceChannel_GetDefault_Params
{
	struct FMovieSceneObjectBindingID                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.AddKey
struct UMovieSceneScriptingActorReferenceChannel_AddKey_Params
{
	struct FFrameNumber                                InTime;                                                   // (ConstParm, Parm)
	struct FMovieSceneObjectBindingID                  NewValue;                                                 // (Parm)
	float                                              SubFrame;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	enum class ESequenceTimeUnit                       TimeUnit;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UMovieSceneScriptingActorReferenceKey*       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingBoolKey.SetValue
struct UMovieSceneScriptingBoolKey_SetValue_Params
{
	bool                                               InNewValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingBoolKey.SetTime
struct UMovieSceneScriptingBoolKey_SetTime_Params
{
	struct FFrameNumber                                NewFrameNumber;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              SubFrame;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	enum class ESequenceTimeUnit                       TimeUnit;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingBoolKey.GetValue
struct UMovieSceneScriptingBoolKey_GetValue_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingBoolKey.GetTime
struct UMovieSceneScriptingBoolKey_GetTime_Params
{
	enum class ESequenceTimeUnit                       TimeUnit;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFrameTime                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SequencerScripting.MovieSceneScriptingBoolChannel.SetDefault
struct UMovieSceneScriptingBoolChannel_SetDefault_Params
{
	bool                                               InDefaultValue;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingBoolChannel.RemoveKey
struct UMovieSceneScriptingBoolChannel_RemoveKey_Params
{
	class UMovieSceneScriptingKey*                     Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingBoolChannel.RemoveDefault
struct UMovieSceneScriptingBoolChannel_RemoveDefault_Params
{
};

// Function SequencerScripting.MovieSceneScriptingBoolChannel.HasDefault
struct UMovieSceneScriptingBoolChannel_HasDefault_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingBoolChannel.GetNumKeys
struct UMovieSceneScriptingBoolChannel_GetNumKeys_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingBoolChannel.GetKeys
struct UMovieSceneScriptingBoolChannel_GetKeys_Params
{
	TArray<class UMovieSceneScriptingKey*>             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SequencerScripting.MovieSceneScriptingBoolChannel.GetDefault
struct UMovieSceneScriptingBoolChannel_GetDefault_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingBoolChannel.EvaluateKeys
struct UMovieSceneScriptingBoolChannel_EvaluateKeys_Params
{
	struct FSequencerScriptingRange                    Range;                                                    // (Parm)
	struct FFrameRate                                  FrameRate;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<bool>                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SequencerScripting.MovieSceneScriptingBoolChannel.ComputeEffectiveRange
struct UMovieSceneScriptingBoolChannel_ComputeEffectiveRange_Params
{
	struct FSequencerScriptingRange                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SequencerScripting.MovieSceneScriptingBoolChannel.AddKey
struct UMovieSceneScriptingBoolChannel_AddKey_Params
{
	struct FFrameNumber                                InTime;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SubFrame;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	enum class ESequenceTimeUnit                       TimeUnit;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UMovieSceneScriptingBoolKey*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingByteKey.SetValue
struct UMovieSceneScriptingByteKey_SetValue_Params
{
	unsigned char                                      InNewValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingByteKey.SetTime
struct UMovieSceneScriptingByteKey_SetTime_Params
{
	struct FFrameNumber                                NewFrameNumber;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              SubFrame;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	enum class ESequenceTimeUnit                       TimeUnit;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingByteKey.GetValue
struct UMovieSceneScriptingByteKey_GetValue_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingByteKey.GetTime
struct UMovieSceneScriptingByteKey_GetTime_Params
{
	enum class ESequenceTimeUnit                       TimeUnit;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFrameTime                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SequencerScripting.MovieSceneScriptingByteChannel.SetDefault
struct UMovieSceneScriptingByteChannel_SetDefault_Params
{
	unsigned char                                      InDefaultValue;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingByteChannel.RemoveKey
struct UMovieSceneScriptingByteChannel_RemoveKey_Params
{
	class UMovieSceneScriptingKey*                     Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingByteChannel.RemoveDefault
struct UMovieSceneScriptingByteChannel_RemoveDefault_Params
{
};

// Function SequencerScripting.MovieSceneScriptingByteChannel.HasDefault
struct UMovieSceneScriptingByteChannel_HasDefault_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingByteChannel.GetKeys
struct UMovieSceneScriptingByteChannel_GetKeys_Params
{
	TArray<class UMovieSceneScriptingKey*>             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SequencerScripting.MovieSceneScriptingByteChannel.GetDefault
struct UMovieSceneScriptingByteChannel_GetDefault_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingByteChannel.AddKey
struct UMovieSceneScriptingByteChannel_AddKey_Params
{
	struct FFrameNumber                                InTime;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	unsigned char                                      NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SubFrame;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	enum class ESequenceTimeUnit                       TimeUnit;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	enum class EMovieSceneKeyInterpolation             InInterpolation;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UMovieSceneScriptingByteKey*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingDoubleKey.SetValue
struct UMovieSceneScriptingDoubleKey_SetValue_Params
{
	double                                             InNewValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingDoubleKey.SetTime
struct UMovieSceneScriptingDoubleKey_SetTime_Params
{
	struct FFrameNumber                                NewFrameNumber;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              SubFrame;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	enum class ESequenceTimeUnit                       TimeUnit;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingDoubleKey.SetTangentWeightMode
struct UMovieSceneScriptingDoubleKey_SetTangentWeightMode_Params
{
	TEnumAsByte<ERichCurveTangentWeightMode>           InNewValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingDoubleKey.SetTangentMode
struct UMovieSceneScriptingDoubleKey_SetTangentMode_Params
{
	TEnumAsByte<ERichCurveTangentMode>                 InNewValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingDoubleKey.SetLeaveTangentWeight
struct UMovieSceneScriptingDoubleKey_SetLeaveTangentWeight_Params
{
	float                                              InNewValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingDoubleKey.SetLeaveTangent
struct UMovieSceneScriptingDoubleKey_SetLeaveTangent_Params
{
	float                                              InNewValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingDoubleKey.SetInterpolationMode
struct UMovieSceneScriptingDoubleKey_SetInterpolationMode_Params
{
	TEnumAsByte<ERichCurveInterpMode>                  InNewValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingDoubleKey.SetArriveTangentWeight
struct UMovieSceneScriptingDoubleKey_SetArriveTangentWeight_Params
{
	float                                              InNewValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingDoubleKey.SetArriveTangent
struct UMovieSceneScriptingDoubleKey_SetArriveTangent_Params
{
	float                                              InNewValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingDoubleKey.GetValue
struct UMovieSceneScriptingDoubleKey_GetValue_Params
{
	double                                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingDoubleKey.GetTime
struct UMovieSceneScriptingDoubleKey_GetTime_Params
{
	enum class ESequenceTimeUnit                       TimeUnit;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFrameTime                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SequencerScripting.MovieSceneScriptingDoubleKey.GetTangentWeightMode
struct UMovieSceneScriptingDoubleKey_GetTangentWeightMode_Params
{
	TEnumAsByte<ERichCurveTangentWeightMode>           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingDoubleKey.GetTangentMode
struct UMovieSceneScriptingDoubleKey_GetTangentMode_Params
{
	TEnumAsByte<ERichCurveTangentMode>                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingDoubleKey.GetLeaveTangentWeight
struct UMovieSceneScriptingDoubleKey_GetLeaveTangentWeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingDoubleKey.GetLeaveTangent
struct UMovieSceneScriptingDoubleKey_GetLeaveTangent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingDoubleKey.GetInterpolationMode
struct UMovieSceneScriptingDoubleKey_GetInterpolationMode_Params
{
	TEnumAsByte<ERichCurveInterpMode>                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingDoubleKey.GetArriveTangentWeight
struct UMovieSceneScriptingDoubleKey_GetArriveTangentWeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingDoubleKey.GetArriveTangent
struct UMovieSceneScriptingDoubleKey_GetArriveTangent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingDoubleChannel.SetPreInfinityExtrapolation
struct UMovieSceneScriptingDoubleChannel_SetPreInfinityExtrapolation_Params
{
	TEnumAsByte<ERichCurveExtrapolation>               InExtrapolation;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingDoubleChannel.SetPostInfinityExtrapolation
struct UMovieSceneScriptingDoubleChannel_SetPostInfinityExtrapolation_Params
{
	TEnumAsByte<ERichCurveExtrapolation>               InExtrapolation;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingDoubleChannel.SetDefault
struct UMovieSceneScriptingDoubleChannel_SetDefault_Params
{
	double                                             InDefaultValue;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingDoubleChannel.RemoveKey
struct UMovieSceneScriptingDoubleChannel_RemoveKey_Params
{
	class UMovieSceneScriptingKey*                     Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingDoubleChannel.RemoveDefault
struct UMovieSceneScriptingDoubleChannel_RemoveDefault_Params
{
};

// Function SequencerScripting.MovieSceneScriptingDoubleChannel.HasDefault
struct UMovieSceneScriptingDoubleChannel_HasDefault_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingDoubleChannel.GetPreInfinityExtrapolation
struct UMovieSceneScriptingDoubleChannel_GetPreInfinityExtrapolation_Params
{
	TEnumAsByte<ERichCurveExtrapolation>               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingDoubleChannel.GetPostInfinityExtrapolation
struct UMovieSceneScriptingDoubleChannel_GetPostInfinityExtrapolation_Params
{
	TEnumAsByte<ERichCurveExtrapolation>               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingDoubleChannel.GetNumKeys
struct UMovieSceneScriptingDoubleChannel_GetNumKeys_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingDoubleChannel.GetKeys
struct UMovieSceneScriptingDoubleChannel_GetKeys_Params
{
	TArray<class UMovieSceneScriptingKey*>             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SequencerScripting.MovieSceneScriptingDoubleChannel.GetDefault
struct UMovieSceneScriptingDoubleChannel_GetDefault_Params
{
	double                                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingDoubleChannel.EvaluateKeys
struct UMovieSceneScriptingDoubleChannel_EvaluateKeys_Params
{
	struct FSequencerScriptingRange                    Range;                                                    // (Parm)
	struct FFrameRate                                  FrameRate;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<double>                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SequencerScripting.MovieSceneScriptingDoubleChannel.ComputeEffectiveRange
struct UMovieSceneScriptingDoubleChannel_ComputeEffectiveRange_Params
{
	struct FSequencerScriptingRange                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SequencerScripting.MovieSceneScriptingDoubleChannel.AddKey
struct UMovieSceneScriptingDoubleChannel_AddKey_Params
{
	struct FFrameNumber                                InTime;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	double                                             NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SubFrame;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	enum class ESequenceTimeUnit                       TimeUnit;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	enum class EMovieSceneKeyInterpolation             InInterpolation;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UMovieSceneScriptingDoubleKey*               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingEventKey.SetValue
struct UMovieSceneScriptingEventKey_SetValue_Params
{
	struct FMovieSceneEvent                            InNewValue;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function SequencerScripting.MovieSceneScriptingEventKey.SetTime
struct UMovieSceneScriptingEventKey_SetTime_Params
{
	struct FFrameNumber                                NewFrameNumber;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              SubFrame;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	enum class ESequenceTimeUnit                       TimeUnit;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingEventKey.GetValue
struct UMovieSceneScriptingEventKey_GetValue_Params
{
	struct FMovieSceneEvent                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SequencerScripting.MovieSceneScriptingEventKey.GetTime
struct UMovieSceneScriptingEventKey_GetTime_Params
{
	enum class ESequenceTimeUnit                       TimeUnit;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFrameTime                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SequencerScripting.MovieSceneScriptingEventChannel.RemoveKey
struct UMovieSceneScriptingEventChannel_RemoveKey_Params
{
	class UMovieSceneScriptingKey*                     Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingEventChannel.GetKeys
struct UMovieSceneScriptingEventChannel_GetKeys_Params
{
	TArray<class UMovieSceneScriptingKey*>             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SequencerScripting.MovieSceneScriptingEventChannel.AddKey
struct UMovieSceneScriptingEventChannel_AddKey_Params
{
	struct FFrameNumber                                InTime;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FMovieSceneEvent                            NewValue;                                                 // (Parm)
	float                                              SubFrame;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	enum class ESequenceTimeUnit                       TimeUnit;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UMovieSceneScriptingEventKey*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingFloatKey.SetValue
struct UMovieSceneScriptingFloatKey_SetValue_Params
{
	float                                              InNewValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingFloatKey.SetTime
struct UMovieSceneScriptingFloatKey_SetTime_Params
{
	struct FFrameNumber                                NewFrameNumber;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              SubFrame;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	enum class ESequenceTimeUnit                       TimeUnit;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingFloatKey.SetTangentWeightMode
struct UMovieSceneScriptingFloatKey_SetTangentWeightMode_Params
{
	TEnumAsByte<ERichCurveTangentWeightMode>           InNewValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingFloatKey.SetTangentMode
struct UMovieSceneScriptingFloatKey_SetTangentMode_Params
{
	TEnumAsByte<ERichCurveTangentMode>                 InNewValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingFloatKey.SetLeaveTangentWeight
struct UMovieSceneScriptingFloatKey_SetLeaveTangentWeight_Params
{
	float                                              InNewValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingFloatKey.SetLeaveTangent
struct UMovieSceneScriptingFloatKey_SetLeaveTangent_Params
{
	float                                              InNewValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingFloatKey.SetInterpolationMode
struct UMovieSceneScriptingFloatKey_SetInterpolationMode_Params
{
	TEnumAsByte<ERichCurveInterpMode>                  InNewValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingFloatKey.SetArriveTangentWeight
struct UMovieSceneScriptingFloatKey_SetArriveTangentWeight_Params
{
	float                                              InNewValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingFloatKey.SetArriveTangent
struct UMovieSceneScriptingFloatKey_SetArriveTangent_Params
{
	float                                              InNewValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingFloatKey.GetValue
struct UMovieSceneScriptingFloatKey_GetValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingFloatKey.GetTime
struct UMovieSceneScriptingFloatKey_GetTime_Params
{
	enum class ESequenceTimeUnit                       TimeUnit;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFrameTime                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SequencerScripting.MovieSceneScriptingFloatKey.GetTangentWeightMode
struct UMovieSceneScriptingFloatKey_GetTangentWeightMode_Params
{
	TEnumAsByte<ERichCurveTangentWeightMode>           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingFloatKey.GetTangentMode
struct UMovieSceneScriptingFloatKey_GetTangentMode_Params
{
	TEnumAsByte<ERichCurveTangentMode>                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingFloatKey.GetLeaveTangentWeight
struct UMovieSceneScriptingFloatKey_GetLeaveTangentWeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingFloatKey.GetLeaveTangent
struct UMovieSceneScriptingFloatKey_GetLeaveTangent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingFloatKey.GetInterpolationMode
struct UMovieSceneScriptingFloatKey_GetInterpolationMode_Params
{
	TEnumAsByte<ERichCurveInterpMode>                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingFloatKey.GetArriveTangentWeight
struct UMovieSceneScriptingFloatKey_GetArriveTangentWeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingFloatKey.GetArriveTangent
struct UMovieSceneScriptingFloatKey_GetArriveTangent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingFloatChannel.SetPreInfinityExtrapolation
struct UMovieSceneScriptingFloatChannel_SetPreInfinityExtrapolation_Params
{
	TEnumAsByte<ERichCurveExtrapolation>               InExtrapolation;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingFloatChannel.SetPostInfinityExtrapolation
struct UMovieSceneScriptingFloatChannel_SetPostInfinityExtrapolation_Params
{
	TEnumAsByte<ERichCurveExtrapolation>               InExtrapolation;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingFloatChannel.SetDefault
struct UMovieSceneScriptingFloatChannel_SetDefault_Params
{
	float                                              InDefaultValue;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingFloatChannel.RemoveKey
struct UMovieSceneScriptingFloatChannel_RemoveKey_Params
{
	class UMovieSceneScriptingKey*                     Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingFloatChannel.RemoveDefault
struct UMovieSceneScriptingFloatChannel_RemoveDefault_Params
{
};

// Function SequencerScripting.MovieSceneScriptingFloatChannel.HasDefault
struct UMovieSceneScriptingFloatChannel_HasDefault_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingFloatChannel.GetPreInfinityExtrapolation
struct UMovieSceneScriptingFloatChannel_GetPreInfinityExtrapolation_Params
{
	TEnumAsByte<ERichCurveExtrapolation>               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingFloatChannel.GetPostInfinityExtrapolation
struct UMovieSceneScriptingFloatChannel_GetPostInfinityExtrapolation_Params
{
	TEnumAsByte<ERichCurveExtrapolation>               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingFloatChannel.GetNumKeys
struct UMovieSceneScriptingFloatChannel_GetNumKeys_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingFloatChannel.GetKeys
struct UMovieSceneScriptingFloatChannel_GetKeys_Params
{
	TArray<class UMovieSceneScriptingKey*>             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SequencerScripting.MovieSceneScriptingFloatChannel.GetDefault
struct UMovieSceneScriptingFloatChannel_GetDefault_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingFloatChannel.EvaluateKeys
struct UMovieSceneScriptingFloatChannel_EvaluateKeys_Params
{
	struct FSequencerScriptingRange                    Range;                                                    // (Parm)
	struct FFrameRate                                  FrameRate;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SequencerScripting.MovieSceneScriptingFloatChannel.ComputeEffectiveRange
struct UMovieSceneScriptingFloatChannel_ComputeEffectiveRange_Params
{
	struct FSequencerScriptingRange                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SequencerScripting.MovieSceneScriptingFloatChannel.AddKey
struct UMovieSceneScriptingFloatChannel_AddKey_Params
{
	struct FFrameNumber                                InTime;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SubFrame;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	enum class ESequenceTimeUnit                       TimeUnit;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	enum class EMovieSceneKeyInterpolation             InInterpolation;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UMovieSceneScriptingFloatKey*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingIntegerKey.SetValue
struct UMovieSceneScriptingIntegerKey_SetValue_Params
{
	int                                                InNewValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingIntegerKey.SetTime
struct UMovieSceneScriptingIntegerKey_SetTime_Params
{
	struct FFrameNumber                                NewFrameNumber;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              SubFrame;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	enum class ESequenceTimeUnit                       TimeUnit;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingIntegerKey.GetValue
struct UMovieSceneScriptingIntegerKey_GetValue_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingIntegerKey.GetTime
struct UMovieSceneScriptingIntegerKey_GetTime_Params
{
	enum class ESequenceTimeUnit                       TimeUnit;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFrameTime                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SequencerScripting.MovieSceneScriptingIntegerChannel.SetDefault
struct UMovieSceneScriptingIntegerChannel_SetDefault_Params
{
	int                                                InDefaultValue;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingIntegerChannel.RemoveKey
struct UMovieSceneScriptingIntegerChannel_RemoveKey_Params
{
	class UMovieSceneScriptingKey*                     Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingIntegerChannel.RemoveDefault
struct UMovieSceneScriptingIntegerChannel_RemoveDefault_Params
{
};

// Function SequencerScripting.MovieSceneScriptingIntegerChannel.HasDefault
struct UMovieSceneScriptingIntegerChannel_HasDefault_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingIntegerChannel.GetKeys
struct UMovieSceneScriptingIntegerChannel_GetKeys_Params
{
	TArray<class UMovieSceneScriptingKey*>             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SequencerScripting.MovieSceneScriptingIntegerChannel.GetDefault
struct UMovieSceneScriptingIntegerChannel_GetDefault_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingIntegerChannel.AddKey
struct UMovieSceneScriptingIntegerChannel_AddKey_Params
{
	struct FFrameNumber                                InTime;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SubFrame;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	enum class ESequenceTimeUnit                       TimeUnit;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UMovieSceneScriptingIntegerKey*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingObjectPathKey.SetValue
struct UMovieSceneScriptingObjectPathKey_SetValue_Params
{
	class UObject*                                     InNewValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingObjectPathKey.SetTime
struct UMovieSceneScriptingObjectPathKey_SetTime_Params
{
	struct FFrameNumber                                NewFrameNumber;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              SubFrame;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	enum class ESequenceTimeUnit                       TimeUnit;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingObjectPathKey.GetValue
struct UMovieSceneScriptingObjectPathKey_GetValue_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingObjectPathKey.GetTime
struct UMovieSceneScriptingObjectPathKey_GetTime_Params
{
	enum class ESequenceTimeUnit                       TimeUnit;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFrameTime                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SequencerScripting.MovieSceneScriptingObjectPathChannel.SetDefault
struct UMovieSceneScriptingObjectPathChannel_SetDefault_Params
{
	class UObject*                                     InDefaultValue;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingObjectPathChannel.RemoveKey
struct UMovieSceneScriptingObjectPathChannel_RemoveKey_Params
{
	class UMovieSceneScriptingKey*                     Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingObjectPathChannel.RemoveDefault
struct UMovieSceneScriptingObjectPathChannel_RemoveDefault_Params
{
};

// Function SequencerScripting.MovieSceneScriptingObjectPathChannel.HasDefault
struct UMovieSceneScriptingObjectPathChannel_HasDefault_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingObjectPathChannel.GetKeys
struct UMovieSceneScriptingObjectPathChannel_GetKeys_Params
{
	TArray<class UMovieSceneScriptingKey*>             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SequencerScripting.MovieSceneScriptingObjectPathChannel.GetDefault
struct UMovieSceneScriptingObjectPathChannel_GetDefault_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingObjectPathChannel.AddKey
struct UMovieSceneScriptingObjectPathChannel_AddKey_Params
{
	struct FFrameNumber                                InTime;                                                   // (ConstParm, Parm)
	class UObject*                                     NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SubFrame;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	enum class ESequenceTimeUnit                       TimeUnit;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UMovieSceneScriptingObjectPathKey*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingStringKey.SetValue
struct UMovieSceneScriptingStringKey_SetValue_Params
{
	struct FString                                     InNewValue;                                               // (Parm, ZeroConstructor)
};

// Function SequencerScripting.MovieSceneScriptingStringKey.SetTime
struct UMovieSceneScriptingStringKey_SetTime_Params
{
	struct FFrameNumber                                NewFrameNumber;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              SubFrame;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	enum class ESequenceTimeUnit                       TimeUnit;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingStringKey.GetValue
struct UMovieSceneScriptingStringKey_GetValue_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SequencerScripting.MovieSceneScriptingStringKey.GetTime
struct UMovieSceneScriptingStringKey_GetTime_Params
{
	enum class ESequenceTimeUnit                       TimeUnit;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFrameTime                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SequencerScripting.MovieSceneScriptingStringChannel.SetDefault
struct UMovieSceneScriptingStringChannel_SetDefault_Params
{
	struct FString                                     InDefaultValue;                                           // (Parm, ZeroConstructor)
};

// Function SequencerScripting.MovieSceneScriptingStringChannel.RemoveKey
struct UMovieSceneScriptingStringChannel_RemoveKey_Params
{
	class UMovieSceneScriptingKey*                     Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingStringChannel.RemoveDefault
struct UMovieSceneScriptingStringChannel_RemoveDefault_Params
{
};

// Function SequencerScripting.MovieSceneScriptingStringChannel.HasDefault
struct UMovieSceneScriptingStringChannel_HasDefault_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneScriptingStringChannel.GetKeys
struct UMovieSceneScriptingStringChannel_GetKeys_Params
{
	TArray<class UMovieSceneScriptingKey*>             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SequencerScripting.MovieSceneScriptingStringChannel.GetDefault
struct UMovieSceneScriptingStringChannel_GetDefault_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SequencerScripting.MovieSceneScriptingStringChannel.AddKey
struct UMovieSceneScriptingStringChannel_AddKey_Params
{
	struct FFrameNumber                                InTime;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     NewValue;                                                 // (Parm, ZeroConstructor)
	float                                              SubFrame;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	enum class ESequenceTimeUnit                       TimeUnit;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UMovieSceneScriptingStringKey*               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneSectionExtensions.SetStartFrameSeconds
struct UMovieSceneSectionExtensions_SetStartFrameSeconds_Params
{
	class UMovieSceneSection*                          Section;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              StartTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneSectionExtensions.SetStartFrameBounded
struct UMovieSceneSectionExtensions_SetStartFrameBounded_Params
{
	class UMovieSceneSection*                          Section;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsBounded;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneSectionExtensions.SetStartFrame
struct UMovieSceneSectionExtensions_SetStartFrame_Params
{
	class UMovieSceneSection*                          Section;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                StartFrame;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneSectionExtensions.SetRangeSeconds
struct UMovieSceneSectionExtensions_SetRangeSeconds_Params
{
	class UMovieSceneSection*                          Section;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              StartTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndTime;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneSectionExtensions.SetRange
struct UMovieSceneSectionExtensions_SetRange_Params
{
	class UMovieSceneSection*                          Section;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                StartFrame;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                EndFrame;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneSectionExtensions.SetEndFrameSeconds
struct UMovieSceneSectionExtensions_SetEndFrameSeconds_Params
{
	class UMovieSceneSection*                          Section;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              EndTime;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneSectionExtensions.SetEndFrameBounded
struct UMovieSceneSectionExtensions_SetEndFrameBounded_Params
{
	class UMovieSceneSection*                          Section;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsBounded;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneSectionExtensions.SetEndFrame
struct UMovieSceneSectionExtensions_SetEndFrame_Params
{
	class UMovieSceneSection*                          Section;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                EndFrame;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneSectionExtensions.HasStartFrame
struct UMovieSceneSectionExtensions_HasStartFrame_Params
{
	class UMovieSceneSection*                          Section;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneSectionExtensions.HasEndFrame
struct UMovieSceneSectionExtensions_HasEndFrame_Params
{
	class UMovieSceneSection*                          Section;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneSectionExtensions.GetStartFrameSeconds
struct UMovieSceneSectionExtensions_GetStartFrameSeconds_Params
{
	class UMovieSceneSection*                          Section;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneSectionExtensions.GetStartFrame
struct UMovieSceneSectionExtensions_GetStartFrame_Params
{
	class UMovieSceneSection*                          Section;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneSectionExtensions.GetParentSequenceFrame
struct UMovieSceneSectionExtensions_GetParentSequenceFrame_Params
{
	class UMovieSceneSubSection*                       Section;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InFrame;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UMovieSceneSequence*                         ParentSequence;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneSectionExtensions.GetEndFrameSeconds
struct UMovieSceneSectionExtensions_GetEndFrameSeconds_Params
{
	class UMovieSceneSection*                          Section;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneSectionExtensions.GetEndFrame
struct UMovieSceneSectionExtensions_GetEndFrame_Params
{
	class UMovieSceneSection*                          Section;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneSectionExtensions.GetChannelsByType
struct UMovieSceneSectionExtensions_GetChannelsByType_Params
{
	class UMovieSceneSection*                          Section;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      ChannelType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UMovieSceneScriptingChannel*>         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SequencerScripting.MovieSceneSectionExtensions.GetChannels
struct UMovieSceneSectionExtensions_GetChannels_Params
{
	class UMovieSceneSection*                          Section;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UMovieSceneScriptingChannel*>         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SequencerScripting.MovieSceneSectionExtensions.GetAllChannels
struct UMovieSceneSectionExtensions_GetAllChannels_Params
{
	class UMovieSceneSection*                          Section;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UMovieSceneScriptingChannel*>         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SequencerScripting.MovieSceneSectionExtensions.FindChannelsByType
struct UMovieSceneSectionExtensions_FindChannelsByType_Params
{
	class UMovieSceneSection*                          Section;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      ChannelType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UMovieSceneScriptingChannel*>         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SequencerScripting.MovieSceneSequenceExtensions.SortMarkedFrames
struct UMovieSceneSequenceExtensions_SortMarkedFrames_Params
{
	class UMovieSceneSequence*                         Sequence;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneSequenceExtensions.SetWorkRangeStart
struct UMovieSceneSequenceExtensions_SetWorkRangeStart_Params
{
	class UMovieSceneSequence*                         InSequence;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartTimeInSeconds;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneSequenceExtensions.SetWorkRangeEnd
struct UMovieSceneSequenceExtensions_SetWorkRangeEnd_Params
{
	class UMovieSceneSequence*                         InSequence;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndTimeInSeconds;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneSequenceExtensions.SetViewRangeStart
struct UMovieSceneSequenceExtensions_SetViewRangeStart_Params
{
	class UMovieSceneSequence*                         InSequence;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartTimeInSeconds;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneSequenceExtensions.SetViewRangeEnd
struct UMovieSceneSequenceExtensions_SetViewRangeEnd_Params
{
	class UMovieSceneSequence*                         InSequence;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndTimeInSeconds;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneSequenceExtensions.SetTickResolutionDirectly
struct UMovieSceneSequenceExtensions_SetTickResolutionDirectly_Params
{
	class UMovieSceneSequence*                         Sequence;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFrameRate                                  TickResolution;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneSequenceExtensions.SetTickResolution
struct UMovieSceneSequenceExtensions_SetTickResolution_Params
{
	class UMovieSceneSequence*                         Sequence;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFrameRate                                  TickResolution;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneSequenceExtensions.SetReadOnly
struct UMovieSceneSequenceExtensions_SetReadOnly_Params
{
	class UMovieSceneSequence*                         Sequence;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInReadOnly;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackStartSeconds
struct UMovieSceneSequenceExtensions_SetPlaybackStartSeconds_Params
{
	class UMovieSceneSequence*                         Sequence;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackStart
struct UMovieSceneSequenceExtensions_SetPlaybackStart_Params
{
	class UMovieSceneSequence*                         Sequence;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                StartFrame;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackEndSeconds
struct UMovieSceneSequenceExtensions_SetPlaybackEndSeconds_Params
{
	class UMovieSceneSequence*                         Sequence;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndTime;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackEnd
struct UMovieSceneSequenceExtensions_SetPlaybackEnd_Params
{
	class UMovieSceneSequence*                         Sequence;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                EndFrame;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneSequenceExtensions.SetMarkedFrame
struct UMovieSceneSequenceExtensions_SetMarkedFrame_Params
{
	class UMovieSceneSequence*                         Sequence;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InMarkIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFrameNumber                                InFrameNumber;                                            // (Parm)
};

// Function SequencerScripting.MovieSceneSequenceExtensions.SetEvaluationType
struct UMovieSceneSequenceExtensions_SetEvaluationType_Params
{
	class UMovieSceneSequence*                         InSequence;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	enum class EMovieSceneEvaluationType               InEvaluationType;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneSequenceExtensions.SetDisplayRate
struct UMovieSceneSequenceExtensions_SetDisplayRate_Params
{
	class UMovieSceneSequence*                         Sequence;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFrameRate                                  DisplayRate;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneSequenceExtensions.SetClockSource
struct UMovieSceneSequenceExtensions_SetClockSource_Params
{
	class UMovieSceneSequence*                         InSequence;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	enum class EUpdateClockSource                      InClockSource;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneSequenceExtensions.ResolveBindingID
struct UMovieSceneSequenceExtensions_ResolveBindingID_Params
{
	class UMovieSceneSequence*                         MasterSequence;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMovieSceneObjectBindingID                  InObjectBindingID;                                        // (Parm)
	struct FSequencerBindingProxy                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SequencerScripting.MovieSceneSequenceExtensions.RemoveMasterTrack
struct UMovieSceneSequenceExtensions_RemoveMasterTrack_Params
{
	class UMovieSceneSequence*                         Sequence;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UMovieSceneTrack*                            MasterTrack;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneSequenceExtensions.MakeRangeSeconds
struct UMovieSceneSequenceExtensions_MakeRangeSeconds_Params
{
	class UMovieSceneSequence*                         Sequence;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSequencerScriptingRange                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SequencerScripting.MovieSceneSequenceExtensions.MakeRange
struct UMovieSceneSequenceExtensions_MakeRange_Params
{
	class UMovieSceneSequence*                         Sequence;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                StartFrame;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSequencerScriptingRange                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SequencerScripting.MovieSceneSequenceExtensions.MakeBindingID
struct UMovieSceneSequenceExtensions_MakeBindingID_Params
{
	class UMovieSceneSequence*                         MasterSequence;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSequencerBindingProxy                      InBinding;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	enum class EMovieSceneObjectBindingSpace           Space;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMovieSceneObjectBindingID                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SequencerScripting.MovieSceneSequenceExtensions.LocateBoundObjects
struct UMovieSceneSequenceExtensions_LocateBoundObjects_Params
{
	class UMovieSceneSequence*                         Sequence;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSequencerBindingProxy                      InBinding;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	class UObject*                                     Context;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UObject*>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SequencerScripting.MovieSceneSequenceExtensions.IsReadOnly
struct UMovieSceneSequenceExtensions_IsReadOnly_Params
{
	class UMovieSceneSequence*                         Sequence;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneSequenceExtensions.GetWorkRangeStart
struct UMovieSceneSequenceExtensions_GetWorkRangeStart_Params
{
	class UMovieSceneSequence*                         InSequence;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneSequenceExtensions.GetWorkRangeEnd
struct UMovieSceneSequenceExtensions_GetWorkRangeEnd_Params
{
	class UMovieSceneSequence*                         InSequence;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneSequenceExtensions.GetViewRangeStart
struct UMovieSceneSequenceExtensions_GetViewRangeStart_Params
{
	class UMovieSceneSequence*                         InSequence;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneSequenceExtensions.GetViewRangeEnd
struct UMovieSceneSequenceExtensions_GetViewRangeEnd_Params
{
	class UMovieSceneSequence*                         InSequence;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneSequenceExtensions.GetTimecodeSource
struct UMovieSceneSequenceExtensions_GetTimecodeSource_Params
{
	class UMovieSceneSequence*                         Sequence;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTimecode                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneSequenceExtensions.GetTickResolution
struct UMovieSceneSequenceExtensions_GetTickResolution_Params
{
	class UMovieSceneSequence*                         Sequence;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFrameRate                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneSequenceExtensions.GetSpawnables
struct UMovieSceneSequenceExtensions_GetSpawnables_Params
{
	class UMovieSceneSequence*                         Sequence;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FSequencerBindingProxy>              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SequencerScripting.MovieSceneSequenceExtensions.GetRootFoldersInSequence
struct UMovieSceneSequenceExtensions_GetRootFoldersInSequence_Params
{
	class UMovieSceneSequence*                         Sequence;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UMovieSceneFolder*>                   ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SequencerScripting.MovieSceneSequenceExtensions.GetPossessables
struct UMovieSceneSequenceExtensions_GetPossessables_Params
{
	class UMovieSceneSequence*                         Sequence;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FSequencerBindingProxy>              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SequencerScripting.MovieSceneSequenceExtensions.GetPortableBindingID
struct UMovieSceneSequenceExtensions_GetPortableBindingID_Params
{
	class UMovieSceneSequence*                         MasterSequence;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UMovieSceneSequence*                         DestinationSequence;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSequencerBindingProxy                      InBinding;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FMovieSceneObjectBindingID                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackStartSeconds
struct UMovieSceneSequenceExtensions_GetPlaybackStartSeconds_Params
{
	class UMovieSceneSequence*                         Sequence;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackStart
struct UMovieSceneSequenceExtensions_GetPlaybackStart_Params
{
	class UMovieSceneSequence*                         Sequence;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackRange
struct UMovieSceneSequenceExtensions_GetPlaybackRange_Params
{
	class UMovieSceneSequence*                         Sequence;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSequencerScriptingRange                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackEndSeconds
struct UMovieSceneSequenceExtensions_GetPlaybackEndSeconds_Params
{
	class UMovieSceneSequence*                         Sequence;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackEnd
struct UMovieSceneSequenceExtensions_GetPlaybackEnd_Params
{
	class UMovieSceneSequence*                         Sequence;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneSequenceExtensions.GetMovieScene
struct UMovieSceneSequenceExtensions_GetMovieScene_Params
{
	class UMovieSceneSequence*                         Sequence;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UMovieScene*                                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneSequenceExtensions.GetMasterTracks
struct UMovieSceneSequenceExtensions_GetMasterTracks_Params
{
	class UMovieSceneSequence*                         Sequence;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UMovieSceneTrack*>                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SequencerScripting.MovieSceneSequenceExtensions.GetMarkedFrames
struct UMovieSceneSequenceExtensions_GetMarkedFrames_Params
{
	class UMovieSceneSequence*                         Sequence;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMovieSceneMarkedFrame>              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SequencerScripting.MovieSceneSequenceExtensions.GetEvaluationType
struct UMovieSceneSequenceExtensions_GetEvaluationType_Params
{
	class UMovieSceneSequence*                         InSequence;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	enum class EMovieSceneEvaluationType               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneSequenceExtensions.GetDisplayRate
struct UMovieSceneSequenceExtensions_GetDisplayRate_Params
{
	class UMovieSceneSequence*                         Sequence;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFrameRate                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneSequenceExtensions.GetClockSource
struct UMovieSceneSequenceExtensions_GetClockSource_Params
{
	class UMovieSceneSequence*                         InSequence;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	enum class EUpdateClockSource                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneSequenceExtensions.GetBindings
struct UMovieSceneSequenceExtensions_GetBindings_Params
{
	class UMovieSceneSequence*                         Sequence;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FSequencerBindingProxy>              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SequencerScripting.MovieSceneSequenceExtensions.GetBindingID
struct UMovieSceneSequenceExtensions_GetBindingID_Params
{
	struct FSequencerBindingProxy                      InBinding;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FMovieSceneObjectBindingID                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SequencerScripting.MovieSceneSequenceExtensions.FindNextMarkedFrame
struct UMovieSceneSequenceExtensions_FindNextMarkedFrame_Params
{
	class UMovieSceneSequence*                         Sequence;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFrameNumber                                InFrameNumber;                                            // (Parm)
	bool                                               bForward;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneSequenceExtensions.FindMasterTracksByType
struct UMovieSceneSequenceExtensions_FindMasterTracksByType_Params
{
	class UMovieSceneSequence*                         Sequence;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      TrackType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UMovieSceneTrack*>                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SequencerScripting.MovieSceneSequenceExtensions.FindMasterTracksByExactType
struct UMovieSceneSequenceExtensions_FindMasterTracksByExactType_Params
{
	class UMovieSceneSequence*                         Sequence;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      TrackType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UMovieSceneTrack*>                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SequencerScripting.MovieSceneSequenceExtensions.FindMarkedFrameByLabel
struct UMovieSceneSequenceExtensions_FindMarkedFrameByLabel_Params
{
	class UMovieSceneSequence*                         Sequence;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InLabel;                                                  // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneSequenceExtensions.FindMarkedFrameByFrameNumber
struct UMovieSceneSequenceExtensions_FindMarkedFrameByFrameNumber_Params
{
	class UMovieSceneSequence*                         Sequence;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFrameNumber                                InFrameNumber;                                            // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneSequenceExtensions.FindBindingByName
struct UMovieSceneSequenceExtensions_FindBindingByName_Params
{
	class UMovieSceneSequence*                         Sequence;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	struct FSequencerBindingProxy                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SequencerScripting.MovieSceneSequenceExtensions.FindBindingById
struct UMovieSceneSequenceExtensions_FindBindingById_Params
{
	class UMovieSceneSequence*                         Sequence;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       BindingID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSequencerBindingProxy                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SequencerScripting.MovieSceneSequenceExtensions.DeleteMarkedFrames
struct UMovieSceneSequenceExtensions_DeleteMarkedFrames_Params
{
	class UMovieSceneSequence*                         Sequence;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneSequenceExtensions.DeleteMarkedFrame
struct UMovieSceneSequenceExtensions_DeleteMarkedFrame_Params
{
	class UMovieSceneSequence*                         Sequence;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                DeleteIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneSequenceExtensions.AddSpawnableFromInstance
struct UMovieSceneSequenceExtensions_AddSpawnableFromInstance_Params
{
	class UMovieSceneSequence*                         Sequence;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ObjectToSpawn;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSequencerBindingProxy                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SequencerScripting.MovieSceneSequenceExtensions.AddSpawnableFromClass
struct UMovieSceneSequenceExtensions_AddSpawnableFromClass_Params
{
	class UMovieSceneSequence*                         Sequence;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ClassToSpawn;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSequencerBindingProxy                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SequencerScripting.MovieSceneSequenceExtensions.AddRootFolderToSequence
struct UMovieSceneSequenceExtensions_AddRootFolderToSequence_Params
{
	class UMovieSceneSequence*                         Sequence;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     NewFolderName;                                            // (Parm, ZeroConstructor)
	class UMovieSceneFolder*                           ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneSequenceExtensions.AddPossessable
struct UMovieSceneSequenceExtensions_AddPossessable_Params
{
	class UMovieSceneSequence*                         Sequence;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ObjectToPossess;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSequencerBindingProxy                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SequencerScripting.MovieSceneSequenceExtensions.AddMasterTrack
struct UMovieSceneSequenceExtensions_AddMasterTrack_Params
{
	class UMovieSceneSequence*                         Sequence;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      TrackType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UMovieSceneTrack*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneSequenceExtensions.AddMarkedFrame
struct UMovieSceneSequenceExtensions_AddMarkedFrame_Params
{
	class UMovieSceneSequence*                         Sequence;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMovieSceneMarkedFrame                      InMarkedFrame;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneTrackExtensions.SetTrackRowDisplayName
struct UMovieSceneTrackExtensions_SetTrackRowDisplayName_Params
{
	class UMovieSceneTrack*                            Track;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FText                                       InName;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                RowIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneTrackExtensions.SetSortingOrder
struct UMovieSceneTrackExtensions_SetSortingOrder_Params
{
	class UMovieSceneTrack*                            Track;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                SortingOrder;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneTrackExtensions.SetSectionToKey
struct UMovieSceneTrackExtensions_SetSectionToKey_Params
{
	class UMovieSceneTrack*                            Track;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMovieSceneSection*                          Section;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneTrackExtensions.SetDisplayName
struct UMovieSceneTrackExtensions_SetDisplayName_Params
{
	class UMovieSceneTrack*                            Track;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FText                                       InName;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function SequencerScripting.MovieSceneTrackExtensions.SetColorTint
struct UMovieSceneTrackExtensions_SetColorTint_Params
{
	class UMovieSceneTrack*                            Track;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FColor                                      ColorTint;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneTrackExtensions.RemoveSection
struct UMovieSceneTrackExtensions_RemoveSection_Params
{
	class UMovieSceneTrack*                            Track;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMovieSceneSection*                          Section;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneTrackExtensions.GetTrackRowDisplayName
struct UMovieSceneTrackExtensions_GetTrackRowDisplayName_Params
{
	class UMovieSceneTrack*                            Track;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                RowIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SequencerScripting.MovieSceneTrackExtensions.GetSortingOrder
struct UMovieSceneTrackExtensions_GetSortingOrder_Params
{
	class UMovieSceneTrack*                            Track;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneTrackExtensions.GetSectionToKey
struct UMovieSceneTrackExtensions_GetSectionToKey_Params
{
	class UMovieSceneTrack*                            Track;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMovieSceneSection*                          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneTrackExtensions.GetSections
struct UMovieSceneTrackExtensions_GetSections_Params
{
	class UMovieSceneTrack*                            Track;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UMovieSceneSection*>                  ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SequencerScripting.MovieSceneTrackExtensions.GetDisplayName
struct UMovieSceneTrackExtensions_GetDisplayName_Params
{
	class UMovieSceneTrack*                            Track;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SequencerScripting.MovieSceneTrackExtensions.GetColorTint
struct UMovieSceneTrackExtensions_GetColorTint_Params
{
	class UMovieSceneTrack*                            Track;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FColor                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneTrackExtensions.AddSection
struct UMovieSceneTrackExtensions_AddSection_Params
{
	class UMovieSceneTrack*                            Track;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMovieSceneSection*                          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneFloatVectorTrackExtensions.SetNumChannelsUsed
struct UMovieSceneFloatVectorTrackExtensions_SetNumChannelsUsed_Params
{
	class UMovieSceneFloatVectorTrack*                 Track;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InNumChannelsUsed;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneFloatVectorTrackExtensions.GetNumChannelsUsed
struct UMovieSceneFloatVectorTrackExtensions_GetNumChannelsUsed_Params
{
	class UMovieSceneFloatVectorTrack*                 Track;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneDoubleVectorTrackExtensions.SetNumChannelsUsed
struct UMovieSceneDoubleVectorTrackExtensions_SetNumChannelsUsed_Params
{
	class UMovieSceneDoubleVectorTrack*                Track;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InNumChannelsUsed;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.MovieSceneDoubleVectorTrackExtensions.GetNumChannelsUsed
struct UMovieSceneDoubleVectorTrackExtensions_GetNumChannelsUsed_Params
{
	class UMovieSceneDoubleVectorTrack*                Track;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.SequencerScriptingRangeExtensions.SetStartSeconds
struct USequencerScriptingRangeExtensions_SetStartSeconds_Params
{
	struct FSequencerScriptingRange                    Range;                                                    // (Parm, OutParm, ReferenceParm)
	float                                              Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.SequencerScriptingRangeExtensions.SetStartFrame
struct USequencerScriptingRangeExtensions_SetStartFrame_Params
{
	struct FSequencerScriptingRange                    Range;                                                    // (Parm, OutParm, ReferenceParm)
	int                                                Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.SequencerScriptingRangeExtensions.SetEndSeconds
struct USequencerScriptingRangeExtensions_SetEndSeconds_Params
{
	struct FSequencerScriptingRange                    Range;                                                    // (Parm, OutParm, ReferenceParm)
	float                                              End;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.SequencerScriptingRangeExtensions.SetEndFrame
struct USequencerScriptingRangeExtensions_SetEndFrame_Params
{
	struct FSequencerScriptingRange                    Range;                                                    // (Parm, OutParm, ReferenceParm)
	int                                                End;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SequencerScripting.SequencerScriptingRangeExtensions.RemoveStart
struct USequencerScriptingRangeExtensions_RemoveStart_Params
{
	struct FSequencerScriptingRange                    Range;                                                    // (Parm, OutParm, ReferenceParm)
};

// Function SequencerScripting.SequencerScriptingRangeExtensions.RemoveEnd
struct USequencerScriptingRangeExtensions_RemoveEnd_Params
{
	struct FSequencerScriptingRange                    Range;                                                    // (Parm, OutParm, ReferenceParm)
};

// Function SequencerScripting.SequencerScriptingRangeExtensions.HasStart
struct USequencerScriptingRangeExtensions_HasStart_Params
{
	struct FSequencerScriptingRange                    Range;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.SequencerScriptingRangeExtensions.HasEnd
struct USequencerScriptingRangeExtensions_HasEnd_Params
{
	struct FSequencerScriptingRange                    Range;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.SequencerScriptingRangeExtensions.GetStartSeconds
struct USequencerScriptingRangeExtensions_GetStartSeconds_Params
{
	struct FSequencerScriptingRange                    Range;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.SequencerScriptingRangeExtensions.GetStartFrame
struct USequencerScriptingRangeExtensions_GetStartFrame_Params
{
	struct FSequencerScriptingRange                    Range;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.SequencerScriptingRangeExtensions.GetEndSeconds
struct USequencerScriptingRangeExtensions_GetEndSeconds_Params
{
	struct FSequencerScriptingRange                    Range;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SequencerScripting.SequencerScriptingRangeExtensions.GetEndFrame
struct USequencerScriptingRangeExtensions_GetEndFrame_Params
{
	struct FSequencerScriptingRange                    Range;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
