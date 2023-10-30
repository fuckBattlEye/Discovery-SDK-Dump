//   SDK By:if

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../pch.h"

namespace sdk
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function MovieRenderPipelineSettings.MoviePipelineBurnInWidget.OnOutputFrameStarted
// (Event, Public, BlueprintEvent)
// Parameters:
// class UMoviePipeline*          ForPipeline                    (Parm, ZeroConstructor, IsPlainOldData)

void UMoviePipelineBurnInWidget::OnOutputFrameStarted(class UMoviePipeline* ForPipeline)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function MovieRenderPipelineSettings.MoviePipelineBurnInWidget.OnOutputFrameStarted"));

	UMoviePipelineBurnInWidget_OnOutputFrameStarted_Params params;
	params.ForPipeline = ForPipeline;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
