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

// Function ImgMedia.ImgMediaSource.SetSequencePath
struct UImgMediaSource_SetSequencePath_Params
{
	struct FString                                     Path;                                                     // (Parm, ZeroConstructor)
};

// Function ImgMedia.ImgMediaSource.SetMipLevelDistance
struct UImgMediaSource_SetMipLevelDistance_Params
{
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ImgMedia.ImgMediaSource.RemoveTargetObject
struct UImgMediaSource_RemoveTargetObject_Params
{
	class AActor*                                      InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ImgMedia.ImgMediaSource.RemoveGlobalCamera
struct UImgMediaSource_RemoveGlobalCamera_Params
{
	class AActor*                                      InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ImgMedia.ImgMediaSource.GetSequencePath
struct UImgMediaSource_GetSequencePath_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ImgMedia.ImgMediaSource.GetProxies
struct UImgMediaSource_GetProxies_Params
{
	TArray<struct FString>                             OutProxies;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function ImgMedia.ImgMediaSource.AddTargetObject
struct UImgMediaSource_AddTargetObject_Params
{
	class AActor*                                      InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Width;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ImgMedia.ImgMediaSource.AddGlobalCamera
struct UImgMediaSource_AddGlobalCamera_Params
{
	class AActor*                                      InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
