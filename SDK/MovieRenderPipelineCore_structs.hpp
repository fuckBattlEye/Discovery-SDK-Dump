#pragma once

//   SDK By:if

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace sdk
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum MovieRenderPipelineCore.EMoviePipelineEncodeQuality
enum class EMoviePipelineEncodeQuality : uint8_t
{
	Low                            = 0,
	Medium                         = 1,
	High                           = 2,
	Epic                           = 3,
	EMoviePipelineEncodeQuality_MAX = 4
};


// Enum MovieRenderPipelineCore.FCPXMLExportDataSource
enum class EFCPXMLExportDataSource : uint8_t
{
	OutputMetadata                 = 0,
	SequenceData                   = 1,
	FCPXMLExportDataSource_MAX     = 2
};


// Enum MovieRenderPipelineCore.EMoviePipelineTextureStreamingMethod
enum class EMoviePipelineTextureStreamingMethod : uint8_t
{
	None                           = 0,
	Disabled                       = 1,
	FullyLoad                      = 2,
	EMoviePipelineTextureStreamingMethod_MAX = 3
};


// Enum MovieRenderPipelineCore.EMovieRenderPipelineState
enum class EMovieRenderPipelineState : uint8_t
{
	Uninitialized                  = 0,
	ProducingFrames                = 1,
	Finalize                       = 2,
	Export                         = 3,
	Finished                       = 4,
	EMovieRenderPipelineState_MAX  = 5
};


// Enum MovieRenderPipelineCore.EMovieRenderShotState
enum class EMovieRenderShotState : uint8_t
{
	Uninitialized                  = 0,
	WarmingUp                      = 1,
	MotionBlur                     = 2,
	Rendering                      = 3,
	Finished                       = 4,
	EMovieRenderShotState_MAX      = 5
};


// Enum MovieRenderPipelineCore.EMoviePipelineShutterTiming
enum class EMoviePipelineShutterTiming : uint8_t
{
	FrameOpen                      = 0,
	FrameCenter                    = 1,
	FrameClose                     = 2,
	EMoviePipelineShutterTiming_MAX = 3
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MovieRenderPipelineCore.MoviePipelineFilenameResolveParams
// 0x0100
struct FMoviePipelineFilenameResolveParams
{
	int                                                FrameNumber;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FrameNumberShot;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FrameNumberRel;                                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FrameNumberShotRel;                                       // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     CameraNameOverride;                                       // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     ShotNameOverride;                                         // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                ZeroPadFrameNumberCount;                                  // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForceRelativeFrameNumbers;                               // 0x0034(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	TMap<struct FString, struct FString>               FileNameFormatOverrides;                                  // 0x0038(0x0050) (Edit, BlueprintVisible)
	TMap<struct FString, struct FString>               FileMetadata;                                             // 0x0088(0x0050) (Edit, BlueprintVisible)
	struct FDateTime                                   InitializationTime;                                       // 0x00D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                InitializationVersion;                                    // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET
	class UMoviePipelineExecutorJob*                   Job;                                                      // 0x00E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMoviePipelineExecutorShot*                  ShotOverride;                                             // 0x00F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AdditionalFrameNumberOffset;                              // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET
};

// ScriptStruct MovieRenderPipelineCore.MoviePipelineFormatArgs
// 0x00A8
struct FMoviePipelineFormatArgs
{
	TMap<struct FString, struct FString>               FilenameArguments;                                        // 0x0000(0x0050) (Edit, BlueprintVisible)
	TMap<struct FString, struct FString>               FileMetadata;                                             // 0x0050(0x0050) (Edit, BlueprintVisible)
	class UMoviePipelineExecutorJob*                   InJob;                                                    // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieRenderPipelineCore.MoviePipelinePassIdentifier
// 0x0010
struct FMoviePipelinePassIdentifier
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct MovieRenderPipelineCore.MoviePipelineRenderPassOutputData
// 0x0010
struct FMoviePipelineRenderPassOutputData
{
	TArray<struct FString>                             FilePaths;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct MovieRenderPipelineCore.MoviePipelineShotOutputData
// 0x0058
struct FMoviePipelineShotOutputData
{
	TWeakObjectPtr<class UMoviePipelineExecutorShot>   Shot;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	TMap<struct FMoviePipelinePassIdentifier, struct FMoviePipelineRenderPassOutputData> RenderPassData;                                           // 0x0008(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
};

// ScriptStruct MovieRenderPipelineCore.MoviePipelineOutputData
// 0x0028
struct FMoviePipelineOutputData
{
	class UMoviePipeline*                              Pipeline;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	class UMoviePipelineExecutorJob*                   Job;                                                      // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bSuccess;                                                 // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	TArray<struct FMoviePipelineShotOutputData>        ShotData;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct MovieRenderPipelineCore.MoviePipelineSegmentWorkMetrics
// 0x0028
struct FMoviePipelineSegmentWorkMetrics
{
	struct FString                                     SegmentName;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	int                                                OutputFrameIndex;                                         // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                TotalOutputFrameCount;                                    // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                OutputSubSampleIndex;                                     // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                TotalSubSampleCount;                                      // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                EngineWarmUpFrameIndex;                                   // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                TotalEngineWarmUpFrameCount;                              // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct MovieRenderPipelineCore.MoviePipelineCameraCutInfo
// 0x00A0
struct FMoviePipelineCameraCutInfo
{
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0000(0x00A0) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
