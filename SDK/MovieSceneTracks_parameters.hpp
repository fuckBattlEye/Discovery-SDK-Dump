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

// Function MovieSceneTracks.MovieSceneParameterSection.RemoveVectorParameter
struct UMovieSceneParameterSection_RemoveVectorParameter_Params
{
	struct FName                                       InParameterName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieSceneTracks.MovieSceneParameterSection.RemoveVector2DParameter
struct UMovieSceneParameterSection_RemoveVector2DParameter_Params
{
	struct FName                                       InParameterName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieSceneTracks.MovieSceneParameterSection.RemoveTransformParameter
struct UMovieSceneParameterSection_RemoveTransformParameter_Params
{
	struct FName                                       InParameterName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieSceneTracks.MovieSceneParameterSection.RemoveScalarParameter
struct UMovieSceneParameterSection_RemoveScalarParameter_Params
{
	struct FName                                       InParameterName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieSceneTracks.MovieSceneParameterSection.RemoveColorParameter
struct UMovieSceneParameterSection_RemoveColorParameter_Params
{
	struct FName                                       InParameterName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieSceneTracks.MovieSceneParameterSection.RemoveBoolParameter
struct UMovieSceneParameterSection_RemoveBoolParameter_Params
{
	struct FName                                       InParameterName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieSceneTracks.MovieSceneParameterSection.GetParameterNames
struct UMovieSceneParameterSection_GetParameterNames_Params
{
};

// Function MovieSceneTracks.MovieSceneParameterSection.AddVectorParameterKey
struct UMovieSceneParameterSection_AddVectorParameterKey_Params
{
	struct FName                                       InParameterName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFrameNumber                                InTime;                                                   // (Parm)
	struct FVector                                     InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieSceneTracks.MovieSceneParameterSection.AddVector2DParameterKey
struct UMovieSceneParameterSection_AddVector2DParameterKey_Params
{
	struct FName                                       InParameterName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFrameNumber                                InTime;                                                   // (Parm)
	struct FVector2D                                   InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieSceneTracks.MovieSceneParameterSection.AddTransformParameterKey
struct UMovieSceneParameterSection_AddTransformParameterKey_Params
{
	struct FName                                       InParameterName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFrameNumber                                InTime;                                                   // (Parm)
	struct FTransform                                  InValue;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function MovieSceneTracks.MovieSceneParameterSection.AddScalarParameterKey
struct UMovieSceneParameterSection_AddScalarParameterKey_Params
{
	struct FName                                       InParameterName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFrameNumber                                InTime;                                                   // (Parm)
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieSceneTracks.MovieSceneParameterSection.AddColorParameterKey
struct UMovieSceneParameterSection_AddColorParameterKey_Params
{
	struct FName                                       InParameterName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFrameNumber                                InTime;                                                   // (Parm)
	struct FLinearColor                                InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieSceneTracks.MovieSceneParameterSection.AddBoolParameterKey
struct UMovieSceneParameterSection_AddBoolParameterKey_Params
{
	struct FName                                       InParameterName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFrameNumber                                InTime;                                                   // (Parm)
	bool                                               InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieSceneTracks.MovieSceneTransformOrigin.BP_GetTransformOrigin
struct UMovieSceneTransformOrigin_BP_GetTransformOrigin_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function MovieSceneTracks.MovieScene3DConstraintSection.SetConstraintBindingID
struct UMovieScene3DConstraintSection_SetConstraintBindingID_Params
{
	struct FMovieSceneObjectBindingID                  InConstraintBindingID;                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function MovieSceneTracks.MovieScene3DConstraintSection.GetConstraintBindingID
struct UMovieScene3DConstraintSection_GetConstraintBindingID_Params
{
	struct FMovieSceneObjectBindingID                  ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function MovieSceneTracks.MovieSceneAudioSection.SetStartOffset
struct UMovieSceneAudioSection_SetStartOffset_Params
{
	struct FFrameNumber                                InStartOffset;                                            // (Parm)
};

// Function MovieSceneTracks.MovieSceneAudioSection.SetSound
struct UMovieSceneAudioSection_SetSound_Params
{
	class USoundBase*                                  InSound;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieSceneTracks.MovieSceneAudioSection.GetStartOffset
struct UMovieSceneAudioSection_GetStartOffset_Params
{
	struct FFrameNumber                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MovieSceneTracks.MovieSceneAudioSection.GetSound
struct UMovieSceneAudioSection_GetSound_Params
{
	class USoundBase*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieSceneTracks.MovieSceneCameraCutSection.SetCameraBindingID
struct UMovieSceneCameraCutSection_SetCameraBindingID_Params
{
	struct FMovieSceneObjectBindingID                  InCameraBindingID;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function MovieSceneTracks.MovieSceneCameraCutSection.GetCameraBindingID
struct UMovieSceneCameraCutSection_GetCameraBindingID_Params
{
	struct FMovieSceneObjectBindingID                  ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function MovieSceneTracks.MovieSceneCinematicShotSection.SetShotDisplayName
struct UMovieSceneCinematicShotSection_SetShotDisplayName_Params
{
	struct FString                                     InShotDisplayName;                                        // (Parm, ZeroConstructor)
};

// Function MovieSceneTracks.MovieSceneCinematicShotSection.GetShotDisplayName
struct UMovieSceneCinematicShotSection_GetShotDisplayName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MovieSceneTracks.MovieSceneCVarSection.SetFromString
struct UMovieSceneCVarSection_SetFromString_Params
{
	struct FString                                     InString;                                                 // (Parm, ZeroConstructor)
};

// Function MovieSceneTracks.MovieSceneCVarSection.GetString
struct UMovieSceneCVarSection_GetString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MovieSceneTracks.MovieSceneDataLayerSection.SetPrerollState
struct UMovieSceneDataLayerSection_SetPrerollState_Params
{
	enum class EDataLayerRuntimeState                  InPrerollState;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieSceneTracks.MovieSceneDataLayerSection.SetFlushOnUnload
struct UMovieSceneDataLayerSection_SetFlushOnUnload_Params
{
	bool                                               bFlushOnUnload;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieSceneTracks.MovieSceneDataLayerSection.SetDesiredState
struct UMovieSceneDataLayerSection_SetDesiredState_Params
{
	enum class EDataLayerRuntimeState                  InDesiredState;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieSceneTracks.MovieSceneDataLayerSection.SetDataLayers
struct UMovieSceneDataLayerSection_SetDataLayers_Params
{
	TArray<struct FActorDataLayer>                     InDataLayers;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MovieSceneTracks.MovieSceneDataLayerSection.GetPrerollState
struct UMovieSceneDataLayerSection_GetPrerollState_Params
{
	enum class EDataLayerRuntimeState                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieSceneTracks.MovieSceneDataLayerSection.GetFlushOnUnload
struct UMovieSceneDataLayerSection_GetFlushOnUnload_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieSceneTracks.MovieSceneDataLayerSection.GetDesiredState
struct UMovieSceneDataLayerSection_GetDesiredState_Params
{
	enum class EDataLayerRuntimeState                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieSceneTracks.MovieSceneDataLayerSection.GetDataLayers
struct UMovieSceneDataLayerSection_GetDataLayers_Params
{
	TArray<struct FActorDataLayer>                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetVisibility
struct UMovieSceneLevelVisibilitySection_SetVisibility_Params
{
	enum class ELevelVisibility                        InVisibility;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetLevelNames
struct UMovieSceneLevelVisibilitySection_SetLevelNames_Params
{
	TArray<struct FName>                               InLevelNames;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetVisibility
struct UMovieSceneLevelVisibilitySection_GetVisibility_Params
{
	enum class ELevelVisibility                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetLevelNames
struct UMovieSceneLevelVisibilitySection_GetLevelNames_Params
{
	TArray<struct FName>                               ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction.PredictWorldTransformAtTime
struct UMovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtTime_Params
{
	class UMovieSceneSequencePlayer*                   Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             TargetComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TimeInSeconds;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UMovieSceneAsyncAction_SequencePrediction*   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction.PredictWorldTransformAtFrame
struct UMovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtFrame_Params
{
	class UMovieSceneSequencePlayer*                   Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             TargetComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FFrameTime                                  FrameTime;                                                // (Parm)
	class UMovieSceneAsyncAction_SequencePrediction*   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction.PredictLocalTransformAtTime
struct UMovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtTime_Params
{
	class UMovieSceneSequencePlayer*                   Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             TargetComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TimeInSeconds;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UMovieSceneAsyncAction_SequencePrediction*   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction.PredictLocalTransformAtFrame
struct UMovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtFrame_Params
{
	class UMovieSceneSequencePlayer*                   Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             TargetComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FFrameTime                                  FrameTime;                                                // (Parm)
	class UMovieSceneAsyncAction_SequencePrediction*   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
