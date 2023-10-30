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

// Class MovieRenderPipelineSettings.MoviePipelineBurnInSetting
// 0x0058 (0x00A0 - 0x0048)
class UMoviePipelineBurnInSetting : public UMoviePipelineRenderPass
{
public:
	struct FSoftClassPath                              BurnInClass;                                              // 0x0048(0x0018) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bCompositeOntoFinalImage;                                 // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2F];                                      // 0x0061(0x002F) MISSED OFFSET
	class UTextureRenderTarget2D*                      RenderTarget;                                             // 0x0090(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMoviePipelineBurnInWidget*                  BurnInWidgetInstance;                                     // 0x0098(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieRenderPipelineSettings.MoviePipelineBurnInSetting"));
		return ptr;
	}

};


// Class MovieRenderPipelineSettings.MoviePipelineBurnInWidget
// 0x0000 (0x0290 - 0x0290)
class UMoviePipelineBurnInWidget : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieRenderPipelineSettings.MoviePipelineBurnInWidget"));
		return ptr;
	}


	void OnOutputFrameStarted(class UMoviePipeline* ForPipeline);//Offset:Discovery.exe+0x327F8B0
};


// Class MovieRenderPipelineSettings.MoviePipelineConsoleVariableSetting
// 0x0080 (0x00C8 - 0x0048)
class UMoviePipelineConsoleVariableSetting : public UMoviePipelineSetting
{
public:
	TMap<struct FString, float>                        ConsoleVariables;                                         // 0x0048(0x0050) (Edit, BlueprintVisible)
	TArray<struct FString>                             StartConsoleCommands;                                     // 0x0098(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             EndConsoleCommands;                                       // 0x00A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x00B8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieRenderPipelineSettings.MoviePipelineConsoleVariableSetting"));
		return ptr;
	}

};


// Class MovieRenderPipelineSettings.MoviePipelineWidgetRenderer
// 0x0020 (0x0068 - 0x0048)
class UMoviePipelineWidgetRenderer : public UMoviePipelineRenderPass
{
public:
	bool                                               bCompositeOntoFinalImage;                                 // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0049(0x0017) MISSED OFFSET
	class UTextureRenderTarget2D*                      RenderTarget;                                             // 0x0060(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MovieRenderPipelineSettings.MoviePipelineWidgetRenderer"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
