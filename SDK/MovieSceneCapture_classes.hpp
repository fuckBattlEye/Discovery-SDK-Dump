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

// Class MovieSceneCapture.MovieSceneCaptureProtocolBase
// 0x0030 (0x0058 - 0x0028)
class UMovieSceneCaptureProtocolBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET
	enum class EMovieSceneCaptureProtocolState         State;                                                    // 0x0050(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0051(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneCapture.MovieSceneCaptureProtocolBase"));
		return ptr;
	}


	bool IsCapturing();//Offset:Discovery.exe+0x4D4E500
	enum class EMovieSceneCaptureProtocolState GetState();//Offset:Discovery.exe+0x44D5EC0
};


// Class MovieSceneCapture.MovieSceneImageCaptureProtocolBase
// 0x0000 (0x0058 - 0x0058)
class UMovieSceneImageCaptureProtocolBase : public UMovieSceneCaptureProtocolBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneCapture.MovieSceneImageCaptureProtocolBase"));
		return ptr;
	}

};


// Class MovieSceneCapture.FrameGrabberProtocol
// 0x0010 (0x0068 - 0x0058)
class UFrameGrabberProtocol : public UMovieSceneImageCaptureProtocolBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0058(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneCapture.FrameGrabberProtocol"));
		return ptr;
	}

};


// Class MovieSceneCapture.MovieSceneAudioCaptureProtocolBase
// 0x0000 (0x0058 - 0x0058)
class UMovieSceneAudioCaptureProtocolBase : public UMovieSceneCaptureProtocolBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneCapture.MovieSceneAudioCaptureProtocolBase"));
		return ptr;
	}

};


// Class MovieSceneCapture.NullAudioCaptureProtocol
// 0x0000 (0x0058 - 0x0058)
class UNullAudioCaptureProtocol : public UMovieSceneAudioCaptureProtocolBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneCapture.NullAudioCaptureProtocol"));
		return ptr;
	}

};


// Class MovieSceneCapture.MasterAudioSubmixCaptureProtocol
// 0x0038 (0x0090 - 0x0058)
class UMasterAudioSubmixCaptureProtocol : public UMovieSceneAudioCaptureProtocolBase
{
public:
	struct FString                                     Filename;                                                 // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Config)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0068(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneCapture.MasterAudioSubmixCaptureProtocol"));
		return ptr;
	}

};


// Class MovieSceneCapture.CompositionGraphCaptureProtocol
// 0x0068 (0x00C0 - 0x0058)
class UCompositionGraphCaptureProtocol : public UMovieSceneImageCaptureProtocolBase
{
public:
	struct FCompositionGraphCapturePasses              IncludeRenderPasses;                                      // 0x0058(0x0010) (Edit, BlueprintVisible, Config)
	bool                                               bCaptureFramesInHDR;                                      // 0x0068(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0069(0x0003) MISSED OFFSET
	int                                                HDRCompressionQuality;                                    // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<EHDRCaptureGamut>                      CaptureGamut;                                             // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
	struct FSoftObjectPath                             PostProcessingMaterial;                                   // 0x0078(0x0018) (Edit, BlueprintVisible, ZeroConstructor, Config)
	bool                                               bDisableScreenPercentage;                                 // 0x0090(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0091(0x0007) MISSED OFFSET
	class UMaterialInterface*                          PostProcessingMaterialPtr;                                // 0x0098(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x20];                                      // 0x00A0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneCapture.CompositionGraphCaptureProtocol"));
		return ptr;
	}

};


// Class MovieSceneCapture.ImageSequenceProtocol
// 0x0070 (0x00D8 - 0x0068)
class UImageSequenceProtocol : public UFrameGrabberProtocol
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0068(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneCapture.ImageSequenceProtocol"));
		return ptr;
	}

};


// Class MovieSceneCapture.CompressedImageSequenceProtocol
// 0x0008 (0x00E0 - 0x00D8)
class UCompressedImageSequenceProtocol : public UImageSequenceProtocol
{
public:
	int                                                CompressionQuality;                                       // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneCapture.CompressedImageSequenceProtocol"));
		return ptr;
	}

};


// Class MovieSceneCapture.ImageSequenceProtocol_BMP
// 0x0000 (0x00D8 - 0x00D8)
class UImageSequenceProtocol_BMP : public UImageSequenceProtocol
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneCapture.ImageSequenceProtocol_BMP"));
		return ptr;
	}

};


// Class MovieSceneCapture.ImageSequenceProtocol_PNG
// 0x0000 (0x00E0 - 0x00E0)
class UImageSequenceProtocol_PNG : public UCompressedImageSequenceProtocol
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneCapture.ImageSequenceProtocol_PNG"));
		return ptr;
	}

};


// Class MovieSceneCapture.ImageSequenceProtocol_JPG
// 0x0000 (0x00E0 - 0x00E0)
class UImageSequenceProtocol_JPG : public UCompressedImageSequenceProtocol
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneCapture.ImageSequenceProtocol_JPG"));
		return ptr;
	}

};


// Class MovieSceneCapture.ImageSequenceProtocol_EXR
// 0x0010 (0x00E8 - 0x00D8)
class UImageSequenceProtocol_EXR : public UImageSequenceProtocol
{
public:
	bool                                               bCompressed;                                              // 0x00D8(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<EHDRCaptureGamut>                      CaptureGamut;                                             // 0x00D9(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0xE];                                       // 0x00DA(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneCapture.ImageSequenceProtocol_EXR"));
		return ptr;
	}

};


// Class MovieSceneCapture.MovieSceneCaptureInterface
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneCaptureInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneCapture.MovieSceneCaptureInterface"));
		return ptr;
	}

};


// Class MovieSceneCapture.MovieSceneCapture
// 0x0200 (0x0228 - 0x0028)
class UMovieSceneCapture : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	struct FSoftClassPath                              ImageCaptureProtocolType;                                 // 0x0038(0x0018) (Edit, ZeroConstructor, Config, NoClear)
	struct FSoftClassPath                              AudioCaptureProtocolType;                                 // 0x0050(0x0018) (Edit, ZeroConstructor, Config, NoClear)
	class UMovieSceneImageCaptureProtocolBase*         ImageCaptureProtocol;                                     // 0x0068(0x0008) (Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData)
	class UMovieSceneAudioCaptureProtocolBase*         AudioCaptureProtocol;                                     // 0x0070(0x0008) (Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData)
	struct FMovieSceneCaptureSettings                  Settings;                                                 // 0x0078(0x0070) (Edit, BlueprintVisible, Config)
	bool                                               bUseSeparateProcess;                                      // 0x00E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bCloseEditorWhenCaptureStarts;                            // 0x00E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x00EA(0x0006) MISSED OFFSET
	struct FString                                     AdditionalCommandLineArguments;                           // 0x00F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Config)
	struct FString                                     InheritedCommandLineArguments;                            // 0x0100(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0x118];                                     // 0x0110(0x0118) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneCapture.MovieSceneCapture"));
		return ptr;
	}


	void SetImageCaptureProtocolType(class UClass* ProtocolType);//Offset:Discovery.exe+0x4D4DA40
	void SetAudioCaptureProtocolType(class UClass* ProtocolType);//Offset:Discovery.exe+0x4D4D9A0
	class UMovieSceneCaptureProtocolBase* GetImageCaptureProtocol();//Offset:Discovery.exe+0x21C6030
	class UMovieSceneCaptureProtocolBase* GetAudioCaptureProtocol();//Offset:Discovery.exe+0x4D4DAE0
};


// Class MovieSceneCapture.LevelCapture
// 0x0020 (0x0248 - 0x0228)
class ULevelCapture : public UMovieSceneCapture
{
public:
	bool                                               bAutoStartCapture;                                        // 0x0228(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                                       // 0x0229(0x000B) MISSED OFFSET
	struct FGuid                                       PrerequisiteActorId;                                      // 0x0234(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0244(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneCapture.LevelCapture"));
		return ptr;
	}

};


// Class MovieSceneCapture.MovieSceneCaptureEnvironment
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneCaptureEnvironment : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneCapture.MovieSceneCaptureEnvironment"));
		return ptr;
	}


	bool STATIC_IsCaptureInProgress();//Offset:Discovery.exe+0x4D4DF70
	int STATIC_GetCaptureFrameNumber();//Offset:Discovery.exe+0x4D4DFD0
	float STATIC_GetCaptureElapsedTime();//Offset:Discovery.exe+0x4D4DFA0
	class UMovieSceneImageCaptureProtocolBase* STATIC_FindImageCaptureProtocol();//Offset:Discovery.exe+0x4D4DF40
	class UMovieSceneAudioCaptureProtocolBase* STATIC_FindAudioCaptureProtocol();//Offset:Discovery.exe+0x4D4DF10
};


// Class MovieSceneCapture.UserDefinedCaptureProtocol
// 0x0080 (0x00D8 - 0x0058)
class UUserDefinedCaptureProtocol : public UMovieSceneImageCaptureProtocolBase
{
public:
	class UWorld*                                      World;                                                    // 0x0058(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x78];                                      // 0x0060(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneCapture.UserDefinedCaptureProtocol"));
		return ptr;
	}


	void StopCapturingFinalPixels();//Offset:Discovery.exe+0x4D4EB30
	void StartCapturingFinalPixels(const struct FCapturedPixelsID& StreamID);//Offset:Discovery.exe+0x4D4EB50
	void ResolveBuffer(class UTexture* Buffer, const struct FCapturedPixelsID& BufferID);//Offset:Discovery.exe+0x4D4ECA0
	void OnWarmUp();//Offset:Discovery.exe+0x327F8B0
	void OnTick();//Offset:Discovery.exe+0x327F8B0
	void OnStartCapture();//Offset:Discovery.exe+0x327F8B0
	bool OnSetup();//Offset:Discovery.exe+0x4D4EE40
	void OnPreTick();//Offset:Discovery.exe+0x327F8B0
	void OnPixelsReceived(const struct FCapturedPixels& Pixels, const struct FCapturedPixelsID& ID, const struct FFrameMetrics& FrameMetrics);//Offset:Discovery.exe+0x327F8B0
	void OnPauseCapture();//Offset:Discovery.exe+0x327F8B0
	void OnFinalize();//Offset:Discovery.exe+0x327F8B0
	void OnCaptureFrame();//Offset:Discovery.exe+0x327F8B0
	bool OnCanFinalize();//Offset:Discovery.exe+0x1573C90
	void OnBeginFinalize();//Offset:Discovery.exe+0x327F8B0
	struct FFrameMetrics GetCurrentFrameMetrics();//Offset:Discovery.exe+0x4D4EA10
	struct FString GenerateFilename(const struct FFrameMetrics& InFrameMetrics);//Offset:Discovery.exe+0x4D4EA40
};


// Class MovieSceneCapture.UserDefinedImageCaptureProtocol
// 0x0008 (0x00E0 - 0x00D8)
class UUserDefinedImageCaptureProtocol : public UUserDefinedCaptureProtocol
{
public:
	enum class EDesiredImageFormat                     Format;                                                   // 0x00D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnableCompression;                                       // 0x00D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00DA(0x0002) MISSED OFFSET
	int                                                CompressionQuality;                                       // 0x00DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneCapture.UserDefinedImageCaptureProtocol"));
		return ptr;
	}


	void WriteImageToDisk(const struct FCapturedPixels& PixelData, const struct FCapturedPixelsID& StreamID, const struct FFrameMetrics& FrameMetrics, bool bCopyImageData);//Offset:Discovery.exe+0x4D4F910
	struct FString GenerateFilenameForCurrentFrame();//Offset:Discovery.exe+0x4D4FBC0
	struct FString GenerateFilenameForBuffer(class UTexture* Buffer, const struct FCapturedPixelsID& StreamID);//Offset:Discovery.exe+0x4D4FC40
};


// Class MovieSceneCapture.VideoCaptureProtocol
// 0x0018 (0x0080 - 0x0068)
class UVideoCaptureProtocol : public UFrameGrabberProtocol
{
public:
	bool                                               bUseCompression;                                          // 0x0068(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0069(0x0003) MISSED OFFSET
	float                                              CompressionQuality;                                       // 0x006C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0070(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieSceneCapture.VideoCaptureProtocol"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
