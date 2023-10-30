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

// Function LevelSequence.LevelSequence.RemoveMetaDataByClass
struct ULevelSequence_RemoveMetaDataByClass_Params
{
	class UClass*                                      InClass;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LevelSequence.LevelSequence.FindOrAddMetaDataByClass
struct ULevelSequence_FindOrAddMetaDataByClass_Params
{
	class UClass*                                      InClass;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LevelSequence.LevelSequence.FindMetaDataByClass
struct ULevelSequence_FindMetaDataByClass_Params
{
	class UClass*                                      InClass;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LevelSequence.LevelSequence.CopyMetaData
struct ULevelSequence_CopyMetaData_Params
{
	class UObject*                                     InMetaData;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LevelSequence.LevelSequenceBurnInOptions.SetBurnIn
struct ULevelSequenceBurnInOptions_SetBurnIn_Params
{
	struct FSoftClassPath                              InBurnInClass;                                            // (Parm, ZeroConstructor)
};

// Function LevelSequence.LevelSequenceActor.ShowBurnin
struct ALevelSequenceActor_ShowBurnin_Params
{
};

// Function LevelSequence.LevelSequenceActor.SetSequence
struct ALevelSequenceActor_SetSequence_Params
{
	class ULevelSequence*                              InSequence;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LevelSequence.LevelSequenceActor.SetReplicatePlayback
struct ALevelSequenceActor_SetReplicatePlayback_Params
{
	bool                                               ReplicatePlayback;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LevelSequence.LevelSequenceActor.SetBindingByTag
struct ALevelSequenceActor_SetBindingByTag_Params
{
	struct FName                                       BindingTag;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              Actors;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bAllowBindingsFromAsset;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LevelSequence.LevelSequenceActor.SetBinding
struct ALevelSequenceActor_SetBinding_Params
{
	struct FMovieSceneObjectBindingID                  Binding;                                                  // (Parm)
	TArray<class AActor*>                              Actors;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bAllowBindingsFromAsset;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LevelSequence.LevelSequenceActor.ResetBindings
struct ALevelSequenceActor_ResetBindings_Params
{
};

// Function LevelSequence.LevelSequenceActor.ResetBinding
struct ALevelSequenceActor_ResetBinding_Params
{
	struct FMovieSceneObjectBindingID                  Binding;                                                  // (Parm)
};

// Function LevelSequence.LevelSequenceActor.RemoveBindingByTag
struct ALevelSequenceActor_RemoveBindingByTag_Params
{
	struct FName                                       Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LevelSequence.LevelSequenceActor.RemoveBinding
struct ALevelSequenceActor_RemoveBinding_Params
{
	struct FMovieSceneObjectBindingID                  Binding;                                                  // (Parm)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction LevelSequence.LevelSequenceActor.OnLevelSequenceLoaded__DelegateSignature
struct ALevelSequenceActor_OnLevelSequenceLoaded__DelegateSignature_Params
{
};

// Function LevelSequence.LevelSequenceActor.LoadSequence
struct ALevelSequenceActor_LoadSequence_Params
{
	class ULevelSequence*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LevelSequence.LevelSequenceActor.HideBurnin
struct ALevelSequenceActor_HideBurnin_Params
{
};

// Function LevelSequence.LevelSequenceActor.GetSequencePlayer
struct ALevelSequenceActor_GetSequencePlayer_Params
{
	class ULevelSequencePlayer*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LevelSequence.LevelSequenceActor.GetSequence
struct ALevelSequenceActor_GetSequence_Params
{
	class ULevelSequence*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LevelSequence.LevelSequenceActor.FindNamedBindings
struct ALevelSequenceActor_FindNamedBindings_Params
{
	struct FName                                       Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMovieSceneObjectBindingID>          ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function LevelSequence.LevelSequenceActor.FindNamedBinding
struct ALevelSequenceActor_FindNamedBinding_Params
{
	struct FName                                       Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMovieSceneObjectBindingID                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function LevelSequence.LevelSequenceActor.AddBindingByTag
struct ALevelSequenceActor_AddBindingByTag_Params
{
	struct FName                                       BindingTag;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowBindingsFromAsset;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LevelSequence.LevelSequenceActor.AddBinding
struct ALevelSequenceActor_AddBinding_Params
{
	struct FMovieSceneObjectBindingID                  Binding;                                                  // (Parm)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowBindingsFromAsset;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LevelSequence.LevelSequenceBurnIn.SetSettings
struct ULevelSequenceBurnIn_SetSettings_Params
{
	class UObject*                                     InSettings;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass
struct ULevelSequenceBurnIn_GetSettingsClass_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LevelSequence.LevelSequenceDirector.OnCreated
struct ULevelSequenceDirector_OnCreated_Params
{
};

// Function LevelSequence.LevelSequenceDirector.GetSequence
struct ULevelSequenceDirector_GetSequence_Params
{
	class UMovieSceneSequence*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LevelSequence.LevelSequenceDirector.GetBoundObjects
struct ULevelSequenceDirector_GetBoundObjects_Params
{
	struct FMovieSceneObjectBindingID                  ObjectBinding;                                            // (Parm)
	TArray<class UObject*>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LevelSequence.LevelSequenceDirector.GetBoundObject
struct ULevelSequenceDirector_GetBoundObject_Params
{
	struct FMovieSceneObjectBindingID                  ObjectBinding;                                            // (Parm)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LevelSequence.LevelSequenceDirector.GetBoundActors
struct ULevelSequenceDirector_GetBoundActors_Params
{
	struct FMovieSceneObjectBindingID                  ObjectBinding;                                            // (Parm)
	TArray<class AActor*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LevelSequence.LevelSequenceDirector.GetBoundActor
struct ULevelSequenceDirector_GetBoundActor_Params
{
	struct FMovieSceneObjectBindingID                  ObjectBinding;                                            // (Parm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LevelSequence.LevelSequencePlayer.GetActiveCameraComponent
struct ULevelSequencePlayer_GetActiveCameraComponent_Params
{
	class UCameraComponent*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer
struct ULevelSequencePlayer_CreateLevelSequencePlayer_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class ULevelSequence*                              LevelSequence;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMovieSceneSequencePlaybackSettings         Settings;                                                 // (Parm)
	class ALevelSequenceActor*                         OutActor;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class ULevelSequencePlayer*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LevelSequence.LevelSequenceMediaController.SynchronizeToServer
struct ALevelSequenceMediaController_SynchronizeToServer_Params
{
	float                                              DesyncThresholdSeconds;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LevelSequence.LevelSequenceMediaController.Play
struct ALevelSequenceMediaController_Play_Params
{
};

// Function LevelSequence.LevelSequenceMediaController.OnRep_ServerStartTimeSeconds
struct ALevelSequenceMediaController_OnRep_ServerStartTimeSeconds_Params
{
};

// Function LevelSequence.LevelSequenceMediaController.GetSequence
struct ALevelSequenceMediaController_GetSequence_Params
{
	class ALevelSequenceActor*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LevelSequence.LevelSequenceMediaController.GetMediaComponent
struct ALevelSequenceMediaController_GetMediaComponent_Params
{
	class UMediaComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
