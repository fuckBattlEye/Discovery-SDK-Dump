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

// Function MovieRenderPipelineCore.MoviePipelineSetting.BuildNewProcessCommandLineArgs
struct UMoviePipelineSetting_BuildNewProcessCommandLineArgs_Params
{
	TArray<struct FString>                             InOutUnrealURLParams;                                     // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FString>                             InOutCommandLineArgs;                                     // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FString>                             InOutDeviceProfileCvars;                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FString>                             InOutExecCmds;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MovieRenderPipelineCore.MoviePipelineSetting.BuildNewProcessCommandLine
struct UMoviePipelineSetting_BuildNewProcessCommandLine_Params
{
	struct FString                                     InOutUnrealURLParams;                                     // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     InOutCommandLineArgs;                                     // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MovieRenderPipelineCore.MoviePipeline.Shutdown
struct UMoviePipeline_Shutdown_Params
{
	bool                                               bError;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieRenderPipelineCore.MoviePipeline.SetInitializationTime
struct UMoviePipeline_SetInitializationTime_Params
{
	struct FDateTime                                   InDateTime;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MovieRenderPipelineCore.MoviePipeline.RequestShutdown
struct UMoviePipeline_RequestShutdown_Params
{
	bool                                               bIsError;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieRenderPipelineCore.MoviePipeline.OnMoviePipelineFinishedImpl
struct UMoviePipeline_OnMoviePipelineFinishedImpl_Params
{
};

// Function MovieRenderPipelineCore.MoviePipeline.IsShutdownRequested
struct UMoviePipeline_IsShutdownRequested_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieRenderPipelineCore.MoviePipeline.Initialize
struct UMoviePipeline_Initialize_Params
{
	class UMoviePipelineExecutorJob*                   InJob;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieRenderPipelineCore.MoviePipeline.GetPreviewTexture
struct UMoviePipeline_GetPreviewTexture_Params
{
	class UTexture*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieRenderPipelineCore.MoviePipeline.GetPipelineMasterConfig
struct UMoviePipeline_GetPipelineMasterConfig_Params
{
	class UMoviePipelineMasterConfig*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieRenderPipelineCore.MoviePipeline.GetInitializationTime
struct UMoviePipeline_GetInitializationTime_Params
{
	struct FDateTime                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MovieRenderPipelineCore.MoviePipeline.GetCurrentJob
struct UMoviePipeline_GetCurrentJob_Params
{
	class UMoviePipelineExecutorJob*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.UpdateJobShotListFromSequence
struct UMoviePipelineBlueprintLibrary_UpdateJobShotListFromSequence_Params
{
	class ULevelSequence*                              InSequence;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UMoviePipelineExecutorJob*                   InJob;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShotsChanged;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.ResolveVersionNumber
struct UMoviePipelineBlueprintLibrary_ResolveVersionNumber_Params
{
	struct FMoviePipelineFilenameResolveParams         InParams;                                                 // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.ResolveFilenameFormatArguments
struct UMoviePipelineBlueprintLibrary_ResolveFilenameFormatArguments_Params
{
	struct FString                                     InFormatString;                                           // (Parm, ZeroConstructor)
	struct FMoviePipelineFilenameResolveParams         InParams;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     OutFinalPath;                                             // (Parm, OutParm, ZeroConstructor)
	struct FMoviePipelineFormatArgs                    OutMergedFormatArgs;                                      // (Parm, OutParm)
};

// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.LoadManifestFileFromString
struct UMoviePipelineBlueprintLibrary_LoadManifestFileFromString_Params
{
	struct FString                                     InManifestFilePath;                                       // (Parm, ZeroConstructor)
	class UMoviePipelineQueue*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetPipelineState
struct UMoviePipelineBlueprintLibrary_GetPipelineState_Params
{
	class UMoviePipeline*                              InPipeline;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	enum class EMovieRenderPipelineState               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetOverallSegmentCounts
struct UMoviePipelineBlueprintLibrary_GetOverallSegmentCounts_Params
{
	class UMoviePipeline*                              InMoviePipeline;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OutCurrentIndex;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                OutTotalCount;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetOverallOutputFrames
struct UMoviePipelineBlueprintLibrary_GetOverallOutputFrames_Params
{
	class UMoviePipeline*                              InMoviePipeline;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OutCurrentIndex;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                OutTotalCount;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetMoviePipelineEngineChangelistLabel
struct UMoviePipelineBlueprintLibrary_GetMoviePipelineEngineChangelistLabel_Params
{
	class UMoviePipeline*                              InMoviePipeline;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetMasterTimecode
struct UMoviePipelineBlueprintLibrary_GetMasterTimecode_Params
{
	class UMoviePipeline*                              InMoviePipeline;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FTimecode                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetMasterFrameNumber
struct UMoviePipelineBlueprintLibrary_GetMasterFrameNumber_Params
{
	class UMoviePipeline*                              InMoviePipeline;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FFrameNumber                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetMapPackageName
struct UMoviePipelineBlueprintLibrary_GetMapPackageName_Params
{
	class UMoviePipelineExecutorJob*                   InJob;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetJobName
struct UMoviePipelineBlueprintLibrary_GetJobName_Params
{
	class UMoviePipeline*                              InMoviePipeline;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetJobInitializationTime
struct UMoviePipelineBlueprintLibrary_GetJobInitializationTime_Params
{
	class UMoviePipeline*                              InMoviePipeline;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FDateTime                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetJobAuthor
struct UMoviePipelineBlueprintLibrary_GetJobAuthor_Params
{
	class UMoviePipeline*                              InMoviePipeline;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetEstimatedTimeRemaining
struct UMoviePipelineBlueprintLibrary_GetEstimatedTimeRemaining_Params
{
	class UMoviePipeline*                              InPipeline;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FTimespan                                   OutEstimate;                                              // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetEffectiveOutputResolution
struct UMoviePipelineBlueprintLibrary_GetEffectiveOutputResolution_Params
{
	class UMoviePipelineMasterConfig*                  InMasterConfig;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UMoviePipelineExecutorShot*                  InPipelineExecutorShot;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FIntPoint                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentShotTimecode
struct UMoviePipelineBlueprintLibrary_GetCurrentShotTimecode_Params
{
	class UMoviePipeline*                              InMoviePipeline;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FTimecode                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentShotFrameNumber
struct UMoviePipelineBlueprintLibrary_GetCurrentShotFrameNumber_Params
{
	class UMoviePipeline*                              InMoviePipeline;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FFrameNumber                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentSequence
struct UMoviePipelineBlueprintLibrary_GetCurrentSequence_Params
{
	class UMoviePipeline*                              InMoviePipeline;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ULevelSequence*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentSegmentWorkMetrics
struct UMoviePipelineBlueprintLibrary_GetCurrentSegmentWorkMetrics_Params
{
	class UMoviePipeline*                              InMoviePipeline;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FMoviePipelineSegmentWorkMetrics            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentSegmentState
struct UMoviePipelineBlueprintLibrary_GetCurrentSegmentState_Params
{
	class UMoviePipeline*                              InMoviePipeline;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	enum class EMovieRenderShotState                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentSegmentName
struct UMoviePipelineBlueprintLibrary_GetCurrentSegmentName_Params
{
	class UMoviePipeline*                              InMoviePipeline;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       OutOuterName;                                             // (Parm, OutParm)
	struct FText                                       OutInnerName;                                             // (Parm, OutParm)
};

// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentFocusDistance
struct UMoviePipelineBlueprintLibrary_GetCurrentFocusDistance_Params
{
	class UMoviePipeline*                              InMoviePipeline;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentFocalLength
struct UMoviePipelineBlueprintLibrary_GetCurrentFocalLength_Params
{
	class UMoviePipeline*                              InMoviePipeline;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentExecutorShot
struct UMoviePipelineBlueprintLibrary_GetCurrentExecutorShot_Params
{
	class UMoviePipeline*                              InMoviePipeline;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UMoviePipelineExecutorShot*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentAperture
struct UMoviePipelineBlueprintLibrary_GetCurrentAperture_Params
{
	class UMoviePipeline*                              InMoviePipeline;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCompletionPercentage
struct UMoviePipelineBlueprintLibrary_GetCompletionPercentage_Params
{
	class UMoviePipeline*                              InPipeline;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.FindOrGetDefaultSettingForShot
struct UMoviePipelineBlueprintLibrary_FindOrGetDefaultSettingForShot_Params
{
	class UClass*                                      InSettingType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UMoviePipelineMasterConfig*                  InMasterConfig;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UMoviePipelineExecutorShot*                  InShot;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UMoviePipelineSetting*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.DuplicateSequence
struct UMoviePipelineBlueprintLibrary_DuplicateSequence_Params
{
	class UObject*                                     Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UMovieSceneSequence*                         InSequence;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UMovieSceneSequence*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieRenderPipelineCore.MoviePipelineConfigBase.RemoveSetting
struct UMoviePipelineConfigBase_RemoveSetting_Params
{
	class UMoviePipelineSetting*                       InSetting;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieRenderPipelineCore.MoviePipelineConfigBase.GetUserSettings
struct UMoviePipelineConfigBase_GetUserSettings_Params
{
	TArray<class UMoviePipelineSetting*>               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MovieRenderPipelineCore.MoviePipelineConfigBase.FindSettingsByClass
struct UMoviePipelineConfigBase_FindSettingsByClass_Params
{
	class UClass*                                      InClass;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeDisabledSettings;                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UMoviePipelineSetting*>               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MovieRenderPipelineCore.MoviePipelineConfigBase.FindSettingByClass
struct UMoviePipelineConfigBase_FindSettingByClass_Params
{
	class UClass*                                      InClass;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeDisabledSettings;                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UMoviePipelineSetting*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieRenderPipelineCore.MoviePipelineConfigBase.FindOrAddSettingByClass
struct UMoviePipelineConfigBase_FindOrAddSettingByClass_Params
{
	class UClass*                                      InClass;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeDisabledSettings;                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UMoviePipelineSetting*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieRenderPipelineCore.MoviePipelineConfigBase.CopyFrom
struct UMoviePipelineConfigBase_CopyFrom_Params
{
	class UMoviePipelineConfigBase*                    InConfig;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.SetStatusProgress
struct UMoviePipelineExecutorBase_SetStatusProgress_Params
{
	float                                              InProgress;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.SetStatusMessage
struct UMoviePipelineExecutorBase_SetStatusMessage_Params
{
	struct FString                                     InStatus;                                                 // (Parm, ZeroConstructor)
};

// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.SetMoviePipelineClass
struct UMoviePipelineExecutorBase_SetMoviePipelineClass_Params
{
	class UClass*                                      InPipelineClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.SendSocketMessage
struct UMoviePipelineExecutorBase_SendSocketMessage_Params
{
	struct FString                                     InMessage;                                                // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.SendHTTPRequest
struct UMoviePipelineExecutorBase_SendHTTPRequest_Params
{
	struct FString                                     InURL;                                                    // (Parm, ZeroConstructor)
	struct FString                                     InVerb;                                                   // (Parm, ZeroConstructor)
	struct FString                                     InMessage;                                                // (Parm, ZeroConstructor)
	TMap<struct FString, struct FString>               InHeaders;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.OnExecutorFinishedImpl
struct UMoviePipelineExecutorBase_OnExecutorFinishedImpl_Params
{
};

// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.OnExecutorErroredImpl
struct UMoviePipelineExecutorBase_OnExecutorErroredImpl_Params
{
	class UMoviePipeline*                              ErroredPipeline;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFatal;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ErrorReason;                                              // (Parm)
};

// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.OnBeginFrame
struct UMoviePipelineExecutorBase_OnBeginFrame_Params
{
};

// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.IsSocketConnected
struct UMoviePipelineExecutorBase_IsSocketConnected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.IsRendering
struct UMoviePipelineExecutorBase_IsRendering_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.GetStatusProgress
struct UMoviePipelineExecutorBase_GetStatusProgress_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.GetStatusMessage
struct UMoviePipelineExecutorBase_GetStatusMessage_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.Execute
struct UMoviePipelineExecutorBase_Execute_Params
{
	class UMoviePipelineQueue*                         InPipelineQueue;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.DisconnectSocket
struct UMoviePipelineExecutorBase_DisconnectSocket_Params
{
};

// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.ConnectSocket
struct UMoviePipelineExecutorBase_ConnectSocket_Params
{
	struct FString                                     InHostName;                                               // (Parm, ZeroConstructor)
	int                                                InPort;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.CancelCurrentJob
struct UMoviePipelineExecutorBase_CancelCurrentJob_Params
{
};

// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.CancelAllJobs
struct UMoviePipelineExecutorBase_CancelAllJobs_Params
{
};

// Function MovieRenderPipelineCore.MoviePipelineMasterConfig.InitializeTransientSettings
struct UMoviePipelineMasterConfig_InitializeTransientSettings_Params
{
};

// Function MovieRenderPipelineCore.MoviePipelineMasterConfig.GetTransientSettings
struct UMoviePipelineMasterConfig_GetTransientSettings_Params
{
	TArray<class UMoviePipelineSetting*>               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MovieRenderPipelineCore.MoviePipelineMasterConfig.GetEffectiveFrameRate
struct UMoviePipelineMasterConfig_GetEffectiveFrameRate_Params
{
	class ULevelSequence*                              InSequence;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FFrameRate                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieRenderPipelineCore.MoviePipelineMasterConfig.GetAllSettings
struct UMoviePipelineMasterConfig_GetAllSettings_Params
{
	bool                                               bIncludeDisabledSettings;                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeTransientSettings;                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UMoviePipelineSetting*>               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MovieRenderPipelineCore.MoviePipelinePythonHostExecutor.OnMapLoad
struct UMoviePipelinePythonHostExecutor_OnMapLoad_Params
{
	class UWorld*                                      InWorld;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieRenderPipelineCore.MoviePipelinePythonHostExecutor.GetLastLoadedWorld
struct UMoviePipelinePythonHostExecutor_GetLastLoadedWorld_Params
{
	class UWorld*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieRenderPipelineCore.MoviePipelinePythonHostExecutor.ExecuteDelayed
struct UMoviePipelinePythonHostExecutor_ExecuteDelayed_Params
{
	class UMoviePipelineQueue*                         InPipelineQueue;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.ShouldRender
struct UMoviePipelineExecutorShot_ShouldRender_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.SetStatusProgress
struct UMoviePipelineExecutorShot_SetStatusProgress_Params
{
	float                                              InProgress;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.SetStatusMessage
struct UMoviePipelineExecutorShot_SetStatusMessage_Params
{
	struct FString                                     InStatus;                                                 // (Parm, ZeroConstructor)
};

// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.SetShotOverridePresetOrigin
struct UMoviePipelineExecutorShot_SetShotOverridePresetOrigin_Params
{
	class UMoviePipelineShotConfig*                    InPreset;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.SetShotOverrideConfiguration
struct UMoviePipelineExecutorShot_SetShotOverrideConfiguration_Params
{
	class UMoviePipelineShotConfig*                    InPreset;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.GetStatusProgress
struct UMoviePipelineExecutorShot_GetStatusProgress_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.GetStatusMessage
struct UMoviePipelineExecutorShot_GetStatusMessage_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.GetShotOverridePresetOrigin
struct UMoviePipelineExecutorShot_GetShotOverridePresetOrigin_Params
{
	class UMoviePipelineShotConfig*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.GetShotOverrideConfiguration
struct UMoviePipelineExecutorShot_GetShotOverrideConfiguration_Params
{
	class UMoviePipelineShotConfig*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.AllocateNewShotOverrideConfig
struct UMoviePipelineExecutorShot_AllocateNewShotOverrideConfig_Params
{
	class UClass*                                      InConfigType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UMoviePipelineShotConfig*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetStatusProgress
struct UMoviePipelineExecutorJob_SetStatusProgress_Params
{
	float                                              InProgress;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetStatusMessage
struct UMoviePipelineExecutorJob_SetStatusMessage_Params
{
	struct FString                                     InStatus;                                                 // (Parm, ZeroConstructor)
};

// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetSequence
struct UMoviePipelineExecutorJob_SetSequence_Params
{
	struct FSoftObjectPath                             InSequence;                                               // (Parm, ZeroConstructor)
};

// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetPresetOrigin
struct UMoviePipelineExecutorJob_SetPresetOrigin_Params
{
	class UMoviePipelineMasterConfig*                  InPreset;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetConsumed
struct UMoviePipelineExecutorJob_SetConsumed_Params
{
	bool                                               bInConsumed;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetConfiguration
struct UMoviePipelineExecutorJob_SetConfiguration_Params
{
	class UMoviePipelineMasterConfig*                  InPreset;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.OnDuplicated
struct UMoviePipelineExecutorJob_OnDuplicated_Params
{
};

// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.IsConsumed
struct UMoviePipelineExecutorJob_IsConsumed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.GetStatusProgress
struct UMoviePipelineExecutorJob_GetStatusProgress_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.GetStatusMessage
struct UMoviePipelineExecutorJob_GetStatusMessage_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.GetPresetOrigin
struct UMoviePipelineExecutorJob_GetPresetOrigin_Params
{
	class UMoviePipelineMasterConfig*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.GetConfiguration
struct UMoviePipelineExecutorJob_GetConfiguration_Params
{
	class UMoviePipelineMasterConfig*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieRenderPipelineCore.MoviePipelineQueue.SetJobIndex
struct UMoviePipelineQueue_SetJobIndex_Params
{
	class UMoviePipelineExecutorJob*                   InJob;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieRenderPipelineCore.MoviePipelineQueue.GetJobs
struct UMoviePipelineQueue_GetJobs_Params
{
	TArray<class UMoviePipelineExecutorJob*>           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MovieRenderPipelineCore.MoviePipelineQueue.DuplicateJob
struct UMoviePipelineQueue_DuplicateJob_Params
{
	class UMoviePipelineExecutorJob*                   InJob;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UMoviePipelineExecutorJob*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieRenderPipelineCore.MoviePipelineQueue.DeleteJob
struct UMoviePipelineQueue_DeleteJob_Params
{
	class UMoviePipelineExecutorJob*                   InJob;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieRenderPipelineCore.MoviePipelineQueue.DeleteAllJobs
struct UMoviePipelineQueue_DeleteAllJobs_Params
{
};

// Function MovieRenderPipelineCore.MoviePipelineQueue.CopyFrom
struct UMoviePipelineQueue_CopyFrom_Params
{
	class UMoviePipelineQueue*                         InQueue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieRenderPipelineCore.MoviePipelineQueue.AllocateNewJob
struct UMoviePipelineQueue_AllocateNewJob_Params
{
	class UClass*                                      InJobType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UMoviePipelineExecutorJob*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.RenderQueueWithExecutorInstance
struct UMoviePipelineQueueEngineSubsystem_RenderQueueWithExecutorInstance_Params
{
	class UMoviePipelineExecutorBase*                  InExecutor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.RenderQueueWithExecutor
struct UMoviePipelineQueueEngineSubsystem_RenderQueueWithExecutor_Params
{
	class UClass*                                      InExecutorType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UMoviePipelineExecutorBase*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.IsRendering
struct UMoviePipelineQueueEngineSubsystem_IsRendering_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.GetQueue
struct UMoviePipelineQueueEngineSubsystem_GetQueue_Params
{
	class UMoviePipelineQueue*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.GetActiveExecutor
struct UMoviePipelineQueueEngineSubsystem_GetActiveExecutor_Params
{
	class UMoviePipelineExecutorBase*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieRenderPipelineCore.MoviePipelineSetting_BlueprintBase.ReceiveTeardownForPipelineImpl
struct UMoviePipelineSetting_BlueprintBase_ReceiveTeardownForPipelineImpl_Params
{
	class UMoviePipeline*                              InPipeline;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieRenderPipelineCore.MoviePipelineSetting_BlueprintBase.ReceiveSetupForPipelineImpl
struct UMoviePipelineSetting_BlueprintBase_ReceiveSetupForPipelineImpl_Params
{
	class UMoviePipeline*                              InPipeline;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieRenderPipelineCore.MoviePipelineSetting_BlueprintBase.ReceiveGetFormatArguments
struct UMoviePipelineSetting_BlueprintBase_ReceiveGetFormatArguments_Params
{
	struct FMoviePipelineFormatArgs                    InOutFormatArgs;                                          // (Parm, OutParm, ReferenceParm)
	struct FMoviePipelineFormatArgs                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MovieRenderPipelineCore.MoviePipelineSetting_BlueprintBase.OnEngineTickBeginFrame
struct UMoviePipelineSetting_BlueprintBase_OnEngineTickBeginFrame_Params
{
};

// Function MovieRenderPipelineCore.MovieRenderDebugWidget.OnInitializedForPipeline
struct UMovieRenderDebugWidget_OnInitializedForPipeline_Params
{
	class UMoviePipeline*                              ForPipeline;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
