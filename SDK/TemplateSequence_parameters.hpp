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

// Function TemplateSequence.SequenceCameraShakeTestUtil.GetPostProcessBlendCache
struct USequenceCameraShakeTestUtil_GetPostProcessBlendCache_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PPIndex;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPostProcessSettings                        OutPPSettings;                                            // (Parm, OutParm)
	float                                              OutPPBlendWeight;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TemplateSequence.SequenceCameraShakeTestUtil.GetLastFrameCameraCachePOV
struct USequenceCameraShakeTestUtil_GetLastFrameCameraCachePOV_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMinimalViewInfo                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TemplateSequence.SequenceCameraShakeTestUtil.GetCameraCachePOV
struct USequenceCameraShakeTestUtil_GetCameraCachePOV_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMinimalViewInfo                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TemplateSequence.TemplateSequenceActor.SetSequence
struct ATemplateSequenceActor_SetSequence_Params
{
	class UTemplateSequence*                           InSequence;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TemplateSequence.TemplateSequenceActor.SetBinding
struct ATemplateSequenceActor_SetBinding_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOverridesDefault;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TemplateSequence.TemplateSequenceActor.LoadSequence
struct ATemplateSequenceActor_LoadSequence_Params
{
	class UTemplateSequence*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TemplateSequence.TemplateSequenceActor.GetSequencePlayer
struct ATemplateSequenceActor_GetSequencePlayer_Params
{
	class UTemplateSequencePlayer*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TemplateSequence.TemplateSequenceActor.GetSequence
struct ATemplateSequenceActor_GetSequence_Params
{
	class UTemplateSequence*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TemplateSequence.TemplateSequencePlayer.CreateTemplateSequencePlayer
struct UTemplateSequencePlayer_CreateTemplateSequencePlayer_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UTemplateSequence*                           TemplateSequence;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMovieSceneSequencePlaybackSettings         Settings;                                                 // (Parm)
	class ATemplateSequenceActor*                      OutActor;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTemplateSequencePlayer*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
