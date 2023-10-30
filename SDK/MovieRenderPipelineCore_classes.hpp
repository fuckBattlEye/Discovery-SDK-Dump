#pragma once

//   SDK By:if

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace sdk
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class MovieRenderPipelineCore.MoviePipelineSetting
// 0x0020 (0x0048 - 0x0028)
class UMoviePipelineSetting : public UObject
{
public:
	TWeakObjectPtr<class UMoviePipeline>               CachedPipeline;                                           // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0031(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieRenderPipelineCore.MoviePipelineSetting"));
		return ptr;
	}


	void BuildNewProcessCommandLineArgs(TArray<struct FString>* InOutUnrealURLParams, TArray<struct FString>* InOutCommandLineArgs, TArray<struct FString>* InOutDeviceProfileCvars, TArray<struct FString>* InOutExecCmds);//Offset:Discovery.exe+0x2DCE4D0
	void BuildNewProcessCommandLine(struct FString* InOutUnrealURLParams, struct FString* InOutCommandLineArgs);//Offset:Discovery.exe+0x2DCE7F0
};


// Class MovieRenderPipelineCore.MoviePipelineOutputBase
// 0x0000 (0x0048 - 0x0048)
class UMoviePipelineOutputBase : public UMoviePipelineSetting
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieRenderPipelineCore.MoviePipelineOutputBase"));
		return ptr;
	}

};


// Class MovieRenderPipelineCore.MoviePipelineVideoOutputBase
// 0x0040 (0x0088 - 0x0048)
class UMoviePipelineVideoOutputBase : public UMoviePipelineOutputBase
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0048(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieRenderPipelineCore.MoviePipelineVideoOutputBase"));
		return ptr;
	}

};


// Class MovieRenderPipelineCore.MoviePipeline
// 0x02E8 (0x0310 - 0x0028)
class UMoviePipeline : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnMoviePipelineFinishedDelegate;                          // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMoviePipelineWorkFinishedDelegate;                      // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMoviePipelineShotWorkFinishedDelegate;                  // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UMoviePipelineCustomTimeStep*                CustomTimeStep;                                           // 0x0058(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0060(0x0010) MISSED OFFSET
	class UEngineCustomTimeStep*                       CachedPrevCustomTimeStep;                                 // 0x0070(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class ULevelSequence*                              TargetSequence;                                           // 0x0078(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class ALevelSequenceActor*                         LevelSequenceActor;                                       // 0x0080(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMovieRenderDebugWidget*                     DebugWidget;                                              // 0x0088(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UTexture*                                    PreviewTexture;                                           // 0x0090(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x238];                                     // 0x0098(0x0238) MISSED OFFSET
	class UClass*                                      DebugWidgetClass;                                         // 0x02D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMoviePipelineExecutorJob*                   CurrentJob;                                               // 0x02D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x30];                                      // 0x02E0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieRenderPipelineCore.MoviePipeline"));
		return ptr;
	}


	void Shutdown(bool bError);//Offset:Discovery.exe+0x2DC3100
	void SetInitializationTime(const struct FDateTime& InDateTime);//Offset:Discovery.exe+0x2DC2FC0
	void RequestShutdown(bool bIsError);//Offset:Discovery.exe+0x2DC31A0
	void OnMoviePipelineFinishedImpl();//Offset:Discovery.exe+0x191D9E0
	bool IsShutdownRequested();//Offset:Discovery.exe+0x2DC30B0
	void Initialize(class UMoviePipelineExecutorJob* InJob);//Offset:Discovery.exe+0x2DC3240
	class UTexture* GetPreviewTexture();//Offset:Discovery.exe+0x2DC2F70
	class UMoviePipelineMasterConfig* GetPipelineMasterConfig();//Offset:Discovery.exe+0x2DC2F90
	struct FDateTime GetInitializationTime();//Offset:Discovery.exe+0x2DC3080
	class UMoviePipelineExecutorJob* GetCurrentJob();//Offset:Discovery.exe+0x2DC2F40
};


// Class MovieRenderPipelineCore.MoviePipelineCustomTimeStep
// 0x0008 (0x0030 - 0x0028)
class UMoviePipelineCustomTimeStep : public UEngineCustomTimeStep
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieRenderPipelineCore.MoviePipelineCustomTimeStep"));
		return ptr;
	}

};


// Class MovieRenderPipelineCore.MoviePipelineAntiAliasingSetting
// 0x0020 (0x0068 - 0x0048)
class UMoviePipelineAntiAliasingSetting : public UMoviePipelineSetting
{
public:
	int                                                SpatialSampleCount;                                       // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TemporalSampleCount;                                      // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideAntiAliasing;                                    // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAntiAliasingMethod>                   AntiAliasingMethod;                                       // 0x0051(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0052(0x0002) MISSED OFFSET
	int                                                RenderWarmUpCount;                                        // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseCameraCutForWarmUp;                                   // 0x0058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0059(0x0003) MISSED OFFSET
	int                                                EngineWarmUpCount;                                        // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRenderWarmUpFrames;                                      // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0061(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieRenderPipelineCore.MoviePipelineAntiAliasingSetting"));
		return ptr;
	}

};


// Class MovieRenderPipelineCore.MoviePipelineBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UMoviePipelineBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieRenderPipelineCore.MoviePipelineBlueprintLibrary"));
		return ptr;
	}


	void STATIC_UpdateJobShotListFromSequence(class ULevelSequence* InSequence, class UMoviePipelineExecutorJob* InJob, bool* bShotsChanged);//Offset:Discovery.exe+0x2DC41A0
	int STATIC_ResolveVersionNumber(const struct FMoviePipelineFilenameResolveParams& InParams);//Offset:Discovery.exe+0x2DC4020
	void STATIC_ResolveFilenameFormatArguments(const struct FString& InFormatString, const struct FMoviePipelineFilenameResolveParams& InParams, struct FString* OutFinalPath, struct FMoviePipelineFormatArgs* OutMergedFormatArgs);//Offset:Discovery.exe+0x2DC5310
	class UMoviePipelineQueue* STATIC_LoadManifestFileFromString(const struct FString& InManifestFilePath);//Offset:Discovery.exe+0x2DC42D0
	enum class EMovieRenderPipelineState STATIC_GetPipelineState(class UMoviePipeline* InPipeline);//Offset:Discovery.exe+0x2DC50E0
	void STATIC_GetOverallSegmentCounts(class UMoviePipeline* InMoviePipeline, int* OutCurrentIndex, int* OutTotalCount);//Offset:Discovery.exe+0x2DC4A60
	void STATIC_GetOverallOutputFrames(class UMoviePipeline* InMoviePipeline, int* OutCurrentIndex, int* OutTotalCount);//Offset:Discovery.exe+0x2DC4D40
	struct FText STATIC_GetMoviePipelineEngineChangelistLabel(class UMoviePipeline* InMoviePipeline);//Offset:Discovery.exe+0x2DC3BE0
	struct FTimecode STATIC_GetMasterTimecode(class UMoviePipeline* InMoviePipeline);//Offset:Discovery.exe+0x2DC4820
	struct FFrameNumber STATIC_GetMasterFrameNumber(class UMoviePipeline* InMoviePipeline);//Offset:Discovery.exe+0x2DC4780
	struct FString STATIC_GetMapPackageName(class UMoviePipelineExecutorJob* InJob);//Offset:Discovery.exe+0x2DC4380
	struct FText STATIC_GetJobName(class UMoviePipeline* InMoviePipeline);//Offset:Discovery.exe+0x2DC4F60
	struct FDateTime STATIC_GetJobInitializationTime(class UMoviePipeline* InMoviePipeline);//Offset:Discovery.exe+0x2DC5180
	struct FText STATIC_GetJobAuthor(class UMoviePipeline* InMoviePipeline);//Offset:Discovery.exe+0x2DC4E80
	bool STATIC_GetEstimatedTimeRemaining(class UMoviePipeline* InPipeline, struct FTimespan* OutEstimate);//Offset:Discovery.exe+0x2DC5220
	struct FIntPoint STATIC_GetEffectiveOutputResolution(class UMoviePipelineMasterConfig* InMasterConfig, class UMoviePipelineExecutorShot* InPipelineExecutorShot);//Offset:Discovery.exe+0x2DC3F30
	struct FTimecode STATIC_GetCurrentShotTimecode(class UMoviePipeline* InMoviePipeline);//Offset:Discovery.exe+0x2DC46D0
	struct FFrameNumber STATIC_GetCurrentShotFrameNumber(class UMoviePipeline* InMoviePipeline);//Offset:Discovery.exe+0x2DC4630
	class ULevelSequence* STATIC_GetCurrentSequence(class UMoviePipeline* InMoviePipeline);//Offset:Discovery.exe+0x2DC3D60
	struct FMoviePipelineSegmentWorkMetrics STATIC_GetCurrentSegmentWorkMetrics(class UMoviePipeline* InMoviePipeline);//Offset:Discovery.exe+0x2DC4970
	enum class EMovieRenderShotState STATIC_GetCurrentSegmentState(class UMoviePipeline* InMoviePipeline);//Offset:Discovery.exe+0x2DC5040
	void STATIC_GetCurrentSegmentName(class UMoviePipeline* InMoviePipeline, struct FText* OutOuterName, struct FText* OutInnerName);//Offset:Discovery.exe+0x2DC4BA0
	float STATIC_GetCurrentFocusDistance(class UMoviePipeline* InMoviePipeline);//Offset:Discovery.exe+0x2DC4590
	float STATIC_GetCurrentFocalLength(class UMoviePipeline* InMoviePipeline);//Offset:Discovery.exe+0x2DC44F0
	class UMoviePipelineExecutorShot* STATIC_GetCurrentExecutorShot(class UMoviePipeline* InMoviePipeline);//Offset:Discovery.exe+0x2DC3CC0
	float STATIC_GetCurrentAperture(class UMoviePipeline* InMoviePipeline);//Offset:Discovery.exe+0x2DC4450
	float STATIC_GetCompletionPercentage(class UMoviePipeline* InPipeline);//Offset:Discovery.exe+0x2DC48D0
	class UMoviePipelineSetting* STATIC_FindOrGetDefaultSettingForShot(class UClass* InSettingType, class UMoviePipelineMasterConfig* InMasterConfig, class UMoviePipelineExecutorShot* InShot);//Offset:Discovery.exe+0x2DC3E00
	class UMovieSceneSequence* STATIC_DuplicateSequence(class UObject* Outer, class UMovieSceneSequence* InSequence);//Offset:Discovery.exe+0x2DC5630
};


// Class MovieRenderPipelineCore.MoviePipelineCameraSetting
// 0x0008 (0x0050 - 0x0048)
class UMoviePipelineCameraSetting : public UMoviePipelineSetting
{
public:
	enum class EMoviePipelineShutterTiming             ShutterTiming;                                            // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	float                                              OverscanPercentage;                                       // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieRenderPipelineCore.MoviePipelineCameraSetting"));
		return ptr;
	}

};


// Class MovieRenderPipelineCore.MoviePipelineColorSetting
// 0x0068 (0x00B0 - 0x0048)
class UMoviePipelineColorSetting : public UMoviePipelineSetting
{
public:
	struct FOpenColorIODisplayConfiguration            OCIOConfiguration;                                        // 0x0048(0x0060) (Edit, BlueprintVisible)
	bool                                               bDisableToneCurve;                                        // 0x00A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieRenderPipelineCore.MoviePipelineColorSetting"));
		return ptr;
	}

};


// Class MovieRenderPipelineCore.MoviePipelineCommandLineEncoder
// 0x0040 (0x0088 - 0x0048)
class UMoviePipelineCommandLineEncoder : public UMoviePipelineSetting
{
public:
	struct FString                                     FileNameFormatOverride;                                   // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	enum class EMoviePipelineEncodeQuality             Quality;                                                  // 0x0058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
	struct FString                                     AdditionalCommandLineArgs;                                // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bDeleteSourceFiles;                                       // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSkipEncodeOnRenderCanceled;                              // 0x0071(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x16];                                      // 0x0072(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieRenderPipelineCore.MoviePipelineCommandLineEncoder"));
		return ptr;
	}

};


// Class MovieRenderPipelineCore.MoviePipelineCommandLineEncoderSettings
// 0x00C8 (0x0100 - 0x0038)
class UMoviePipelineCommandLineEncoderSettings : public UDeveloperSettings
{
public:
	struct FString                                     ExecutablePath;                                           // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Config)
	struct FText                                       CodecHelpText;                                            // 0x0048(0x0018) (Edit)
	struct FString                                     VideoCodec;                                               // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Config)
	struct FString                                     AudioCodec;                                               // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Config)
	struct FString                                     OutputFileExtension;                                      // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Config)
	struct FString                                     CommandLineFormat;                                        // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Config)
	struct FString                                     VideoInputStringFormat;                                   // 0x00A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Config)
	struct FString                                     AudioInputStringFormat;                                   // 0x00B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Config)
	struct FString                                     EncodeSettings_Low;                                       // 0x00C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Config)
	struct FString                                     EncodeSettings_Med;                                       // 0x00D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Config)
	struct FString                                     EncodeSettings_High;                                      // 0x00E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Config)
	struct FString                                     EncodeSettings_Epic;                                      // 0x00F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieRenderPipelineCore.MoviePipelineCommandLineEncoderSettings"));
		return ptr;
	}

};


// Class MovieRenderPipelineCore.MoviePipelineConfigBase
// 0x0028 (0x0050 - 0x0028)
class UMoviePipelineConfigBase : public UObject
{
public:
	struct FString                                     DisplayName;                                              // 0x0028(0x0010) (ZeroConstructor)
	TArray<class UMoviePipelineSetting*>               Settings;                                                 // 0x0038(0x0010) (Edit, ExportObject, ZeroConstructor, EditConst)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieRenderPipelineCore.MoviePipelineConfigBase"));
		return ptr;
	}


	void RemoveSetting(class UMoviePipelineSetting* InSetting);//Offset:Discovery.exe+0x2A1BC70
	TArray<class UMoviePipelineSetting*> GetUserSettings();//Offset:Discovery.exe+0x1DC8A90
	TArray<class UMoviePipelineSetting*> FindSettingsByClass(class UClass* InClass, bool bIncludeDisabledSettings);//Offset:Discovery.exe+0x2DC7120
	class UMoviePipelineSetting* FindSettingByClass(class UClass* InClass, bool bIncludeDisabledSettings);//Offset:Discovery.exe+0x2DC6FA0
	class UMoviePipelineSetting* FindOrAddSettingByClass(class UClass* InClass, bool bIncludeDisabledSettings);//Offset:Discovery.exe+0x2DC6C70
	void CopyFrom(class UMoviePipelineConfigBase* InConfig);//Offset:Discovery.exe+0x2423F30
};


// Class MovieRenderPipelineCore.MoviePipelineDebugSettings
// 0x0010 (0x0058 - 0x0048)
class UMoviePipelineDebugSettings : public UMoviePipelineSetting
{
public:
	bool                                               bWriteAllSamples;                                         // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCaptureFramesWithRenderDoc;                              // 0x0049(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x004A(0x0002) MISSED OFFSET
	int                                                CaptureFrame;                                             // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0050(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieRenderPipelineCore.MoviePipelineDebugSettings"));
		return ptr;
	}

};


// Class MovieRenderPipelineCore.MoviePipelineExecutorBase
// 0x00E0 (0x0108 - 0x0028)
class UMoviePipelineExecutorBase : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnExecutorFinishedDelegate;                               // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnExecutorErroredDelegate;                                // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0060(0x0020) MISSED OFFSET
	struct FScriptMulticastDelegate                    SocketMessageRecievedDelegate;                            // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    HTTPResponseRecievedDelegate;                             // 0x0090(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UClass*                                      DebugWidgetClass;                                         // 0x00A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     UserData;                                                 // 0x00A8(0x0010) (BlueprintVisible, ZeroConstructor)
	class UClass*                                      TargetPipelineClass;                                      // 0x00B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x48];                                      // 0x00C0(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieRenderPipelineCore.MoviePipelineExecutorBase"));
		return ptr;
	}


	void SetStatusProgress(float InProgress);//Offset:Discovery.exe+0x2DC8010
	void SetStatusMessage(const struct FString& InStatus);//Offset:Discovery.exe+0x1B06190
	void SetMoviePipelineClass(class UClass* InPipelineClass);//Offset:Discovery.exe+0x1B33BB0
	bool SendSocketMessage(const struct FString& InMessage);//Offset:Discovery.exe+0x2DC7C90
	int SendHTTPRequest(const struct FString& InURL, const struct FString& InVerb, const struct FString& InMessage, TMap<struct FString, struct FString> InHeaders);//Offset:Discovery.exe+0x2DC7A10
	void OnExecutorFinishedImpl();//Offset:Discovery.exe+0x191D9E0
	void OnExecutorErroredImpl(class UMoviePipeline* ErroredPipeline, bool bFatal, const struct FText& ErrorReason);//Offset:Discovery.exe+0x2DC7E60
	void OnBeginFrame();//Offset:Discovery.exe+0x11B97D0
	bool IsSocketConnected();//Offset:Discovery.exe+0x2DC7C60
	bool IsRendering();//Offset:Discovery.exe+0x11BE930
	float GetStatusProgress();//Offset:Discovery.exe+0x242E320
	struct FString GetStatusMessage();//Offset:Discovery.exe+0x1DCA4C0
	void Execute(class UMoviePipelineQueue* InPipelineQueue);//Offset:Discovery.exe+0x2DC80B0
	void DisconnectSocket();//Offset:Discovery.exe+0x2DC7D40
	bool ConnectSocket(const struct FString& InHostName, int InPort);//Offset:Discovery.exe+0x2DC7D60
	void CancelCurrentJob();//Offset:Discovery.exe+0x155C080
	void CancelAllJobs();//Offset:Discovery.exe+0x2DC7FF0
};


// Class MovieRenderPipelineCore.MoviePipelineFCPXMLExporter
// 0x0038 (0x0080 - 0x0048)
class UMoviePipelineFCPXMLExporter : public UMoviePipelineOutputBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
	struct FString                                     FileNameFormatOverride;                                   // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	enum class EFCPXMLExportDataSource                 DataSource;                                               // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1F];                                      // 0x0061(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieRenderPipelineCore.MoviePipelineFCPXMLExporter"));
		return ptr;
	}

};


// Class MovieRenderPipelineCore.MoviePipelineGameMode
// 0x0000 (0x0368 - 0x0368)
class AMoviePipelineGameMode : public AGameModeBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieRenderPipelineCore.MoviePipelineGameMode"));
		return ptr;
	}

};


// Class MovieRenderPipelineCore.MoviePipelineGameOverrideSetting
// 0x00C8 (0x0110 - 0x0048)
class UMoviePipelineGameOverrideSetting : public UMoviePipelineSetting
{
public:
	class UClass*                                      GameModeOverride;                                         // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCinematicQualitySettings;                                // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	enum class EMoviePipelineTextureStreamingMethod    TextureStreaming;                                         // 0x0051(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseLODZero;                                              // 0x0052(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDisableHLODs;                                            // 0x0053(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseHighQualityShadows;                                   // 0x0054(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
	int                                                ShadowDistanceScale;                                      // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ShadowRadiusThreshold;                                    // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideViewDistanceScale;                               // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	int                                                ViewDistanceScale;                                        // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFlushGrassStreaming;                                     // 0x0068(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xA7];                                      // 0x0069(0x00A7) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieRenderPipelineCore.MoviePipelineGameOverrideSetting"));
		return ptr;
	}

};


// Class MovieRenderPipelineCore.MoviePipelineHighResSetting
// 0x0018 (0x0060 - 0x0048)
class UMoviePipelineHighResSetting : public UMoviePipelineSetting
{
public:
	int                                                TileCount;                                                // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TextureSharpnessBias;                                     // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OverlapRatio;                                             // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideSubSurfaceScattering;                            // 0x0054(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
	int                                                BurleySampleCount;                                        // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x005C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieRenderPipelineCore.MoviePipelineHighResSetting"));
		return ptr;
	}

};


// Class MovieRenderPipelineCore.MoviePipelineLinearExecutorBase
// 0x0028 (0x0130 - 0x0108)
class UMoviePipelineLinearExecutorBase : public UMoviePipelineExecutorBase
{
public:
	class UMoviePipelineQueue*                         Queue;                                                    // 0x0108(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMoviePipeline*                              ActiveMoviePipeline;                                      // 0x0110(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0118(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieRenderPipelineCore.MoviePipelineLinearExecutorBase"));
		return ptr;
	}

};


// Class MovieRenderPipelineCore.MoviePipelineInProcessExecutor
// 0x0038 (0x0168 - 0x0130)
class UMoviePipelineInProcessExecutor : public UMoviePipelineLinearExecutorBase
{
public:
	bool                                               bUseCurrentLevel;                                         // 0x0130(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x37];                                      // 0x0131(0x0037) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieRenderPipelineCore.MoviePipelineInProcessExecutor"));
		return ptr;
	}

};


// Class MovieRenderPipelineCore.MoviePipelineInProcessExecutorSettings
// 0x0030 (0x0068 - 0x0038)
class UMoviePipelineInProcessExecutorSettings : public UDeveloperSettings
{
public:
	bool                                               bCloseEditor;                                             // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	struct FString                                     AdditionalCommandLineArguments;                           // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Config)
	struct FString                                     InheritedCommandLineArguments;                            // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, Config, EditConst)
	int                                                InitialDelayFrameCount;                                   // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0064(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieRenderPipelineCore.MoviePipelineInProcessExecutorSettings"));
		return ptr;
	}

};


// Class MovieRenderPipelineCore.MoviePipelineMasterConfig
// 0x0068 (0x00B8 - 0x0050)
class UMoviePipelineMasterConfig : public UMoviePipelineConfigBase
{
public:
	TMap<struct FString, class UMoviePipelineShotConfig*> PerShotConfigMapping;                                     // 0x0050(0x0050) (ExportObject)
	class UMoviePipelineOutputSetting*                 OutputSetting;                                            // 0x00A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UMoviePipelineSetting*>               TransientSettings;                                        // 0x00A8(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieRenderPipelineCore.MoviePipelineMasterConfig"));
		return ptr;
	}


	void InitializeTransientSettings();//Offset:Discovery.exe+0x2DCAF70
	TArray<class UMoviePipelineSetting*> GetTransientSettings();//Offset:Discovery.exe+0x2DCAE40
	struct FFrameRate GetEffectiveFrameRate(class ULevelSequence* InSequence);//Offset:Discovery.exe+0x2DCAC60
	TArray<class UMoviePipelineSetting*> GetAllSettings(bool bIncludeDisabledSettings, bool bIncludeTransientSettings);//Offset:Discovery.exe+0x2DCAD10
};


// Class MovieRenderPipelineCore.MoviePipelineOutputSetting
// 0x0068 (0x00B0 - 0x0048)
class UMoviePipelineOutputSetting : public UMoviePipelineSetting
{
public:
	struct FDirectoryPath                              OutputDirectory;                                          // 0x0048(0x0010) (Edit, BlueprintVisible)
	struct FString                                     FileNameFormat;                                           // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FIntPoint                                   OutputResolution;                                         // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseCustomFrameRate;                                      // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0071(0x0003) MISSED OFFSET
	struct FFrameRate                                  OutputFrameRate;                                          // 0x0074(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	bool                                               bOverrideExistingOutput;                                  // 0x0080(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0081(0x0003) MISSED OFFSET
	int                                                HandleFrameCount;                                         // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                OutputFrameStep;                                          // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseCustomPlaybackRange;                                  // 0x008C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x008D(0x0003) MISSED OFFSET
	int                                                CustomStartFrame;                                         // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CustomEndFrame;                                           // 0x0094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                VersionNumber;                                            // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoVersion;                                             // 0x009C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x009D(0x0003) MISSED OFFSET
	int                                                ZeroPadFrameNumbers;                                      // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FrameNumberOffset;                                        // 0x00A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFlushDiskWritesPerShot;                                  // 0x00A8(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieRenderPipelineCore.MoviePipelineOutputSetting"));
		return ptr;
	}

};


// Class MovieRenderPipelineCore.MoviePipelinePythonHostExecutor
// 0x0018 (0x0120 - 0x0108)
class UMoviePipelinePythonHostExecutor : public UMoviePipelineExecutorBase
{
public:
	class UClass*                                      ExecutorClass;                                            // 0x0108(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMoviePipelineQueue*                         PipelineQueue;                                            // 0x0110(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UWorld*                                      LastLoadedWorld;                                          // 0x0118(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieRenderPipelineCore.MoviePipelinePythonHostExecutor"));
		return ptr;
	}


	void OnMapLoad(class UWorld* InWorld);//Offset:Discovery.exe+0x2DCB5B0
	class UWorld* GetLastLoadedWorld();//Offset:Discovery.exe+0x2DCB580
	void ExecuteDelayed(class UMoviePipelineQueue* InPipelineQueue);//Offset:Discovery.exe+0x2DCB650
};


// Class MovieRenderPipelineCore.MoviePipelineExecutorShot
// 0x0110 (0x0138 - 0x0028)
class UMoviePipelineExecutorShot : public UObject
{
public:
	bool                                               bEnabled;                                                 // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FString                                     OuterName;                                                // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     InnerName;                                                // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData01[0xA0];                                      // 0x0050(0x00A0) MISSED OFFSET
	float                                              Progress;                                                 // 0x00F0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00F4(0x0004) MISSED OFFSET
	struct FString                                     StatusMessage;                                            // 0x00F8(0x0010) (ZeroConstructor, Transient)
	class UMoviePipelineShotConfig*                    ShotOverrideConfig;                                       // 0x0108(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x28];                                      // 0x0110(0x0028) UNKNOWN PROPERTY: ShotOverridePresetOrigin

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieRenderPipelineCore.MoviePipelineExecutorShot"));
		return ptr;
	}


	bool ShouldRender();//Offset:Discovery.exe+0x2DCBB60
	void SetStatusProgress(float InProgress);//Offset:Discovery.exe+0x2DCBDE0
	void SetStatusMessage(const struct FString& InStatus);//Offset:Discovery.exe+0x2DCBE80
	void SetShotOverridePresetOrigin(class UMoviePipelineShotConfig* InPreset);//Offset:Discovery.exe+0x2DCBBD0
	void SetShotOverrideConfiguration(class UMoviePipelineShotConfig* InPreset);//Offset:Discovery.exe+0x2DCBC70
	float GetStatusProgress();//Offset:Discovery.exe+0x2DCBDB0
	struct FString GetStatusMessage();//Offset:Discovery.exe+0x1DC8A90
	class UMoviePipelineShotConfig* GetShotOverridePresetOrigin();//Offset:Discovery.exe+0x2DCBB80
	class UMoviePipelineShotConfig* GetShotOverrideConfiguration();//Offset:Discovery.exe+0x2DCBBB0
	class UMoviePipelineShotConfig* AllocateNewShotOverrideConfig(class UClass* InConfigType);//Offset:Discovery.exe+0x2DCBD10
};


// Class MovieRenderPipelineCore.MoviePipelineExecutorJob
// 0x00B8 (0x00E0 - 0x0028)
class UMoviePipelineExecutorJob : public UObject
{
public:
	struct FString                                     JobName;                                                  // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FSoftObjectPath                             Sequence;                                                 // 0x0038(0x0018) (Edit, BlueprintVisible, ZeroConstructor)
	struct FSoftObjectPath                             Map;                                                      // 0x0050(0x0018) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Author;                                                   // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UMoviePipelineExecutorShot*>          ShotInfo;                                                 // 0x0078(0x0010) (BlueprintVisible, ExportObject, ZeroConstructor)
	struct FString                                     UserData;                                                 // 0x0088(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     StatusMessage;                                            // 0x0098(0x0010) (ZeroConstructor, Transient)
	float                                              StatusProgress;                                           // 0x00A8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsConsumed;                                              // 0x00AC(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00AD(0x0003) MISSED OFFSET
	class UMoviePipelineMasterConfig*                  Configuration;                                            // 0x00B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x00B8(0x0028) UNKNOWN PROPERTY: PresetOrigin

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieRenderPipelineCore.MoviePipelineExecutorJob"));
		return ptr;
	}


	void SetStatusProgress(float InProgress);//Offset:Discovery.exe+0x2DCBDE0
	void SetStatusMessage(const struct FString& InStatus);//Offset:Discovery.exe+0x2DCBE80
	void SetSequence(const struct FSoftObjectPath& InSequence);//Offset:Discovery.exe+0x2DCC780
	void SetPresetOrigin(class UMoviePipelineMasterConfig* InPreset);//Offset:Discovery.exe+0x2DCC950
	void SetConsumed(bool bInConsumed);//Offset:Discovery.exe+0x1DB8590
	void SetConfiguration(class UMoviePipelineMasterConfig* InPreset);//Offset:Discovery.exe+0x2DCC880
	void OnDuplicated();//Offset:Discovery.exe+0x1DC09C0
	bool IsConsumed();//Offset:Discovery.exe+0x1DC1420
	float GetStatusProgress();//Offset:Discovery.exe+0x2DCC9F0
	struct FString GetStatusMessage();//Offset:Discovery.exe+0x2DCCA20
	class UMoviePipelineMasterConfig* GetPresetOrigin();//Offset:Discovery.exe+0x2DCC920
	class UMoviePipelineMasterConfig* GetConfiguration();//Offset:Discovery.exe+0x2DC3080
};


// Class MovieRenderPipelineCore.MoviePipelineQueue
// 0x0018 (0x0040 - 0x0028)
class UMoviePipelineQueue : public UObject
{
public:
	TArray<class UMoviePipelineExecutorJob*>           Jobs;                                                     // 0x0028(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieRenderPipelineCore.MoviePipelineQueue"));
		return ptr;
	}


	void SetJobIndex(class UMoviePipelineExecutorJob* InJob, int Index);//Offset:Discovery.exe+0x2DCD3C0
	TArray<class UMoviePipelineExecutorJob*> GetJobs();//Offset:Discovery.exe+0x2DCD540
	class UMoviePipelineExecutorJob* DuplicateJob(class UMoviePipelineExecutorJob* InJob);//Offset:Discovery.exe+0x2DCD660
	void DeleteJob(class UMoviePipelineExecutorJob* InJob);//Offset:Discovery.exe+0x2DCD720
	void DeleteAllJobs();//Offset:Discovery.exe+0x2DCD700
	void CopyFrom(class UMoviePipelineQueue* InQueue);//Offset:Discovery.exe+0x2DCD4A0
	class UMoviePipelineExecutorJob* AllocateNewJob(class UClass* InJobType);//Offset:Discovery.exe+0x2DCD7C0
};


// Class MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem
// 0x0010 (0x0040 - 0x0030)
class UMoviePipelineQueueEngineSubsystem : public UEngineSubsystem
{
public:
	class UMoviePipelineExecutorBase*                  ActiveExecutor;                                           // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMoviePipelineQueue*                         CurrentQueue;                                             // 0x0038(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem"));
		return ptr;
	}


	void RenderQueueWithExecutorInstance(class UMoviePipelineExecutorBase* InExecutor);//Offset:Discovery.exe+0x2DCDDF0
	class UMoviePipelineExecutorBase* RenderQueueWithExecutor(class UClass* InExecutorType);//Offset:Discovery.exe+0x2DCDE90
	bool IsRendering();//Offset:Discovery.exe+0x2DCDD90
	class UMoviePipelineQueue* GetQueue();//Offset:Discovery.exe+0x1C38FE0
	class UMoviePipelineExecutorBase* GetActiveExecutor();//Offset:Discovery.exe+0x1A83670
};


// Class MovieRenderPipelineCore.MoviePipelineRenderPass
// 0x0000 (0x0048 - 0x0048)
class UMoviePipelineRenderPass : public UMoviePipelineSetting
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieRenderPipelineCore.MoviePipelineRenderPass"));
		return ptr;
	}

};


// Class MovieRenderPipelineCore.MoviePipelineSetting_BlueprintBase
// 0x0020 (0x0068 - 0x0048)
class UMoviePipelineSetting_BlueprintBase : public UMoviePipelineSetting
{
public:
	struct FText                                       CategoryText;                                             // 0x0048(0x0018) (Edit, DisableEditOnInstance)
	bool                                               bIsValidOnMaster;                                         // 0x0060(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsValidOnShots;                                          // 0x0061(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCanBeDisabled;                                           // 0x0062(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0063(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieRenderPipelineCore.MoviePipelineSetting_BlueprintBase"));
		return ptr;
	}


	void ReceiveTeardownForPipelineImpl(class UMoviePipeline* InPipeline);//Offset:Discovery.exe+0x327F8B0
	void ReceiveSetupForPipelineImpl(class UMoviePipeline* InPipeline);//Offset:Discovery.exe+0x327F8B0
	struct FMoviePipelineFormatArgs ReceiveGetFormatArguments(struct FMoviePipelineFormatArgs* InOutFormatArgs);//Offset:Discovery.exe+0x2DD0320
	void OnEngineTickBeginFrame();//Offset:Discovery.exe+0x327F8B0
};


// Class MovieRenderPipelineCore.MoviePipelineShotConfig
// 0x0000 (0x0050 - 0x0050)
class UMoviePipelineShotConfig : public UMoviePipelineConfigBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieRenderPipelineCore.MoviePipelineShotConfig"));
		return ptr;
	}

};


// Class MovieRenderPipelineCore.MoviePipelineViewFamilySetting
// 0x0000 (0x0048 - 0x0048)
class UMoviePipelineViewFamilySetting : public UMoviePipelineSetting
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieRenderPipelineCore.MoviePipelineViewFamilySetting"));
		return ptr;
	}

};


// Class MovieRenderPipelineCore.MovieRenderDebugWidget
// 0x0000 (0x0290 - 0x0290)
class UMovieRenderDebugWidget : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieRenderPipelineCore.MovieRenderDebugWidget"));
		return ptr;
	}


	void OnInitializedForPipeline(class UMoviePipeline* ForPipeline);//Offset:Discovery.exe+0x327F8B0
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
