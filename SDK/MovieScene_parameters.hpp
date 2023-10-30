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

// Function MovieScene.MovieSceneSection.SetRowIndex
struct UMovieSceneSection_SetRowIndex_Params
{
	int                                                NewRowIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieScene.MovieSceneSection.SetPreRollFrames
struct UMovieSceneSection_SetPreRollFrames_Params
{
	int                                                InPreRollFrames;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieScene.MovieSceneSection.SetPostRollFrames
struct UMovieSceneSection_SetPostRollFrames_Params
{
	int                                                InPostRollFrames;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieScene.MovieSceneSection.SetOverlapPriority
struct UMovieSceneSection_SetOverlapPriority_Params
{
	int                                                NewPriority;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieScene.MovieSceneSection.SetIsLocked
struct UMovieSceneSection_SetIsLocked_Params
{
	bool                                               bInIsLocked;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieScene.MovieSceneSection.SetIsActive
struct UMovieSceneSection_SetIsActive_Params
{
	bool                                               bInIsActive;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieScene.MovieSceneSection.SetCompletionMode
struct UMovieSceneSection_SetCompletionMode_Params
{
	enum class EMovieSceneCompletionMode               InCompletionMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieScene.MovieSceneSection.SetBlendType
struct UMovieSceneSection_SetBlendType_Params
{
	enum class EMovieSceneBlendType                    InBlendType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieScene.MovieSceneSection.IsLocked
struct UMovieSceneSection_IsLocked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieScene.MovieSceneSection.IsActive
struct UMovieSceneSection_IsActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieScene.MovieSceneSection.GetRowIndex
struct UMovieSceneSection_GetRowIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieScene.MovieSceneSection.GetPreRollFrames
struct UMovieSceneSection_GetPreRollFrames_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieScene.MovieSceneSection.GetPostRollFrames
struct UMovieSceneSection_GetPostRollFrames_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieScene.MovieSceneSection.GetOverlapPriority
struct UMovieSceneSection_GetOverlapPriority_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieScene.MovieSceneSection.GetCompletionMode
struct UMovieSceneSection_GetCompletionMode_Params
{
	enum class EMovieSceneCompletionMode               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieScene.MovieSceneSection.GetBlendType
struct UMovieSceneSection_GetBlendType_Params
{
	struct FOptionalMovieSceneBlendType                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MovieScene.MovieSceneSequence.GetEarliestTimecodeSource
struct UMovieSceneSequence_GetEarliestTimecodeSource_Params
{
	struct FMovieSceneTimecodeSource                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MovieScene.MovieSceneSequence.FindBindingsByTag
struct UMovieSceneSequence_FindBindingsByTag_Params
{
	struct FName                                       InBindingName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMovieSceneObjectBindingID>          ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function MovieScene.MovieSceneSequence.FindBindingByTag
struct UMovieSceneSequence_FindBindingByTag_Params
{
	struct FName                                       InBindingName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMovieSceneObjectBindingID                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MovieScene.MovieSceneSequencePlayer.StopAtCurrentTime
struct UMovieSceneSequencePlayer_StopAtCurrentTime_Params
{
};

// Function MovieScene.MovieSceneSequencePlayer.Stop
struct UMovieSceneSequencePlayer_Stop_Params
{
};

// Function MovieScene.MovieSceneSequencePlayer.SetTimeRange
struct UMovieSceneSequencePlayer_SetTimeRange_Params
{
	float                                              StartTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.SetPlayRate
struct UMovieSceneSequencePlayer_SetPlayRate_Params
{
	float                                              PlayRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.SetPlaybackPosition
struct UMovieSceneSequencePlayer_SetPlaybackPosition_Params
{
	struct FMovieSceneSequencePlaybackParams           PlaybackParams;                                           // (Parm)
};

// Function MovieScene.MovieSceneSequencePlayer.SetFrameRate
struct UMovieSceneSequencePlayer_SetFrameRate_Params
{
	struct FFrameRate                                  FrameRate;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.SetFrameRange
struct UMovieSceneSequencePlayer_SetFrameRange_Params
{
	int                                                StartFrame;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SubFrames;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.SetDisableCameraCuts
struct UMovieSceneSequencePlayer_SetDisableCameraCuts_Params
{
	bool                                               bInDisableCameraCuts;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.ScrubToSeconds
struct UMovieSceneSequencePlayer_ScrubToSeconds_Params
{
	float                                              TimeInSeconds;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.ScrubToMarkedFrame
struct UMovieSceneSequencePlayer_ScrubToMarkedFrame_Params
{
	struct FString                                     InLabel;                                                  // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.ScrubToFrame
struct UMovieSceneSequencePlayer_ScrubToFrame_Params
{
	struct FFrameTime                                  NewPosition;                                              // (Parm)
};

// Function MovieScene.MovieSceneSequencePlayer.Scrub
struct UMovieSceneSequencePlayer_Scrub_Params
{
};

// Function MovieScene.MovieSceneSequencePlayer.RPC_OnStopEvent
struct UMovieSceneSequencePlayer_RPC_OnStopEvent_Params
{
	struct FFrameTime                                  StoppedTime;                                              // (Parm)
};

// Function MovieScene.MovieSceneSequencePlayer.RPC_OnFinishPlaybackEvent
struct UMovieSceneSequencePlayer_RPC_OnFinishPlaybackEvent_Params
{
	struct FFrameTime                                  StoppedTime;                                              // (Parm)
};

// Function MovieScene.MovieSceneSequencePlayer.RPC_ExplicitServerUpdateEvent
struct UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent_Params
{
	enum class EUpdatePositionMethod                   Method;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFrameTime                                  RelevantTime;                                             // (Parm)
};

// Function MovieScene.MovieSceneSequencePlayer.RestoreState
struct UMovieSceneSequencePlayer_RestoreState_Params
{
};

// Function MovieScene.MovieSceneSequencePlayer.PlayToSeconds
struct UMovieSceneSequencePlayer_PlayToSeconds_Params
{
	float                                              TimeInSeconds;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.PlayToMarkedFrame
struct UMovieSceneSequencePlayer_PlayToMarkedFrame_Params
{
	struct FString                                     InLabel;                                                  // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.PlayToFrame
struct UMovieSceneSequencePlayer_PlayToFrame_Params
{
	struct FFrameTime                                  NewPosition;                                              // (Parm)
};

// Function MovieScene.MovieSceneSequencePlayer.PlayTo
struct UMovieSceneSequencePlayer_PlayTo_Params
{
	struct FMovieSceneSequencePlaybackParams           PlaybackParams;                                           // (Parm)
	struct FMovieSceneSequencePlayToParams             PlayToParams;                                             // (Parm)
};

// Function MovieScene.MovieSceneSequencePlayer.PlayReverse
struct UMovieSceneSequencePlayer_PlayReverse_Params
{
};

// Function MovieScene.MovieSceneSequencePlayer.PlayLooping
struct UMovieSceneSequencePlayer_PlayLooping_Params
{
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.Play
struct UMovieSceneSequencePlayer_Play_Params
{
};

// Function MovieScene.MovieSceneSequencePlayer.Pause
struct UMovieSceneSequencePlayer_Pause_Params
{
};

// Function MovieScene.MovieSceneSequencePlayer.JumpToSeconds
struct UMovieSceneSequencePlayer_JumpToSeconds_Params
{
	float                                              TimeInSeconds;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.JumpToMarkedFrame
struct UMovieSceneSequencePlayer_JumpToMarkedFrame_Params
{
	struct FString                                     InLabel;                                                  // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.JumpToFrame
struct UMovieSceneSequencePlayer_JumpToFrame_Params
{
	struct FFrameTime                                  NewPosition;                                              // (Parm)
};

// Function MovieScene.MovieSceneSequencePlayer.IsReversed
struct UMovieSceneSequencePlayer_IsReversed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.IsPlaying
struct UMovieSceneSequencePlayer_IsPlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.IsPaused
struct UMovieSceneSequencePlayer_IsPaused_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.GoToEndAndStop
struct UMovieSceneSequencePlayer_GoToEndAndStop_Params
{
};

// Function MovieScene.MovieSceneSequencePlayer.GetStartTime
struct UMovieSceneSequencePlayer_GetStartTime_Params
{
	struct FQualifiedFrameTime                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MovieScene.MovieSceneSequencePlayer.GetSequenceName
struct UMovieSceneSequencePlayer_GetSequenceName_Params
{
	bool                                               bAddClientInfo;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MovieScene.MovieSceneSequencePlayer.GetSequence
struct UMovieSceneSequencePlayer_GetSequence_Params
{
	class UMovieSceneSequence*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.GetPlayRate
struct UMovieSceneSequencePlayer_GetPlayRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.GetObjectBindings
struct UMovieSceneSequencePlayer_GetObjectBindings_Params
{
	class UObject*                                     InObject;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMovieSceneObjectBindingID>          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MovieScene.MovieSceneSequencePlayer.GetFrameRate
struct UMovieSceneSequencePlayer_GetFrameRate_Params
{
	struct FFrameRate                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.GetFrameDuration
struct UMovieSceneSequencePlayer_GetFrameDuration_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.GetEndTime
struct UMovieSceneSequencePlayer_GetEndTime_Params
{
	struct FQualifiedFrameTime                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MovieScene.MovieSceneSequencePlayer.GetDuration
struct UMovieSceneSequencePlayer_GetDuration_Params
{
	struct FQualifiedFrameTime                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MovieScene.MovieSceneSequencePlayer.GetDisableCameraCuts
struct UMovieSceneSequencePlayer_GetDisableCameraCuts_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.GetCurrentTime
struct UMovieSceneSequencePlayer_GetCurrentTime_Params
{
	struct FQualifiedFrameTime                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MovieScene.MovieSceneSequencePlayer.GetBoundObjects
struct UMovieSceneSequencePlayer_GetBoundObjects_Params
{
	struct FMovieSceneObjectBindingID                  ObjectBinding;                                            // (Parm)
	TArray<class UObject*>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MovieScene.MovieSceneSequencePlayer.ChangePlaybackDirection
struct UMovieSceneSequencePlayer_ChangePlaybackDirection_Params
{
};

// Function MovieScene.MovieSceneSubSection.SetSequence
struct UMovieSceneSubSection_SetSequence_Params
{
	class UMovieSceneSequence*                         Sequence;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieScene.MovieSceneSubSection.GetSequence
struct UMovieSceneSubSection_GetSequence_Params
{
	class UMovieSceneSequence*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieScene.MovieSceneCustomClockSource.OnTick
struct UMovieSceneCustomClockSource_OnTick_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InPlayRate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieScene.MovieSceneCustomClockSource.OnStopPlaying
struct UMovieSceneCustomClockSource_OnStopPlaying_Params
{
	struct FQualifiedFrameTime                         InStopTime;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function MovieScene.MovieSceneCustomClockSource.OnStartPlaying
struct UMovieSceneCustomClockSource_OnStartPlaying_Params
{
	struct FQualifiedFrameTime                         InStartTime;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function MovieScene.MovieSceneCustomClockSource.OnRequestCurrentTime
struct UMovieSceneCustomClockSource_OnRequestCurrentTime_Params
{
	struct FQualifiedFrameTime                         InCurrentTime;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              InPlayRate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFrameTime                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MovieScene.MovieSceneEasingFunction.OnEvaluate
struct UMovieSceneEasingFunction_OnEvaluate_Params
{
	float                                              Interp;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
