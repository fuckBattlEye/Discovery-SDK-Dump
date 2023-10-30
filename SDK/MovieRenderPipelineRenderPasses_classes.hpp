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

// Class MovieRenderPipelineRenderPasses.MoviePipelineImagePassBase
// 0x0080 (0x00C8 - 0x0048)
class UMoviePipelineImagePassBase : public UMoviePipelineRenderPass
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0048(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieRenderPipelineRenderPasses.MoviePipelineImagePassBase"));
		return ptr;
	}

};


// Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPassBase
// 0x00A8 (0x0170 - 0x00C8)
class UMoviePipelineDeferredPassBase : public UMoviePipelineImagePassBase
{
public:
	bool                                               bAccumulatorIncludesAlpha;                                // 0x00C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDisableMultisampleEffects;                               // 0x00C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUse32BitPostProcessMaterials;                            // 0x00CA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x00CB(0x0005) MISSED OFFSET
	TArray<struct FMoviePipelinePostProcessPass>       AdditionalPostProcessMaterials;                           // 0x00D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bAddDefaultLayer;                                         // 0x00E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00E1(0x0007) MISSED OFFSET
	TArray<struct FActorLayer>                         StencilLayers;                                            // 0x00E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UMaterialInterface*>                  ActivePostProcessMaterials;                               // 0x00F8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UMaterialInterface*                          StencilLayerMaterial;                                     // 0x0108(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<class UTextureRenderTarget2D*>              TileRenderTargets;                                        // 0x0110(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	unsigned char                                      UnknownData02[0x50];                                      // 0x0120(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPassBase"));
		return ptr;
	}

};


// Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_Unlit
// 0x0000 (0x0170 - 0x0170)
class UMoviePipelineDeferredPass_Unlit : public UMoviePipelineDeferredPassBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_Unlit"));
		return ptr;
	}

};


// Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_DetailLighting
// 0x0000 (0x0170 - 0x0170)
class UMoviePipelineDeferredPass_DetailLighting : public UMoviePipelineDeferredPassBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_DetailLighting"));
		return ptr;
	}

};


// Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_LightingOnly
// 0x0000 (0x0170 - 0x0170)
class UMoviePipelineDeferredPass_LightingOnly : public UMoviePipelineDeferredPassBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_LightingOnly"));
		return ptr;
	}

};


// Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_ReflectionsOnly
// 0x0000 (0x0170 - 0x0170)
class UMoviePipelineDeferredPass_ReflectionsOnly : public UMoviePipelineDeferredPassBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_ReflectionsOnly"));
		return ptr;
	}

};


// Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_PathTracer
// 0x0000 (0x0170 - 0x0170)
class UMoviePipelineDeferredPass_PathTracer : public UMoviePipelineDeferredPassBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_PathTracer"));
		return ptr;
	}

};


// Class MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutputBase
// 0x0020 (0x0068 - 0x0048)
class UMoviePipelineImageSequenceOutputBase : public UMoviePipelineOutputBase
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0048(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutputBase"));
		return ptr;
	}

};


// Class MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_EXR
// 0x0008 (0x0070 - 0x0068)
class UMoviePipelineImageSequenceOutput_EXR : public UMoviePipelineImageSequenceOutputBase
{
public:
	enum class EEXRCompressionFormat                   Compression;                                              // 0x0068(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bMultilayer;                                              // 0x0069(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x006A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_EXR"));
		return ptr;
	}

};


// Class MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_BMP
// 0x0000 (0x0068 - 0x0068)
class UMoviePipelineImageSequenceOutput_BMP : public UMoviePipelineImageSequenceOutputBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_BMP"));
		return ptr;
	}

};


// Class MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_PNG
// 0x0000 (0x0068 - 0x0068)
class UMoviePipelineImageSequenceOutput_PNG : public UMoviePipelineImageSequenceOutputBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_PNG"));
		return ptr;
	}

};


// Class MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_JPG
// 0x0000 (0x0068 - 0x0068)
class UMoviePipelineImageSequenceOutput_JPG : public UMoviePipelineImageSequenceOutputBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_JPG"));
		return ptr;
	}

};


// Class MovieRenderPipelineRenderPasses.MoviePipelineWaveOutput
// 0x0070 (0x00B8 - 0x0048)
class UMoviePipelineWaveOutput : public UMoviePipelineOutputBase
{
public:
	struct FString                                     FileNameFormatOverride;                                   // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x60];                                      // 0x0058(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieRenderPipelineRenderPasses.MoviePipelineWaveOutput"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
