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

// Function BinkMediaPlayer.BinkFunctionLibrary.BinkLoadingMovie_GetTime
struct UBinkFunctionLibrary_BinkLoadingMovie_GetTime_Params
{
	struct FTimespan                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BinkMediaPlayer.BinkFunctionLibrary.BinkLoadingMovie_GetDuration
struct UBinkFunctionLibrary_BinkLoadingMovie_GetDuration_Params
{
	struct FTimespan                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BinkMediaPlayer.BinkFunctionLibrary.Bink_DrawOverlays
struct UBinkFunctionLibrary_Bink_DrawOverlays_Params
{
};

// Function BinkMediaPlayer.BinkMediaPlayer.SupportsSeeking
struct UBinkMediaPlayer_SupportsSeeking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BinkMediaPlayer.BinkMediaPlayer.SupportsScrubbing
struct UBinkMediaPlayer_SupportsScrubbing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BinkMediaPlayer.BinkMediaPlayer.SupportsRate
struct UBinkMediaPlayer_SupportsRate_Params
{
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Unthinned;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BinkMediaPlayer.BinkMediaPlayer.Stop
struct UBinkMediaPlayer_Stop_Params
{
};

// Function BinkMediaPlayer.BinkMediaPlayer.SetVolume
struct UBinkMediaPlayer_SetVolume_Params
{
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BinkMediaPlayer.BinkMediaPlayer.SetRate
struct UBinkMediaPlayer_SetRate_Params
{
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BinkMediaPlayer.BinkMediaPlayer.SetLooping
struct UBinkMediaPlayer_SetLooping_Params
{
	bool                                               InLooping;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BinkMediaPlayer.BinkMediaPlayer.Seek
struct UBinkMediaPlayer_Seek_Params
{
	struct FTimespan                                   InTime;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BinkMediaPlayer.BinkMediaPlayer.Rewind
struct UBinkMediaPlayer_Rewind_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BinkMediaPlayer.BinkMediaPlayer.Play
struct UBinkMediaPlayer_Play_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BinkMediaPlayer.BinkMediaPlayer.Pause
struct UBinkMediaPlayer_Pause_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BinkMediaPlayer.BinkMediaPlayer.OpenUrl
struct UBinkMediaPlayer_OpenUrl_Params
{
	struct FString                                     NewURL;                                                   // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BinkMediaPlayer.BinkMediaPlayer.IsStopped
struct UBinkMediaPlayer_IsStopped_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BinkMediaPlayer.BinkMediaPlayer.IsPlaying
struct UBinkMediaPlayer_IsPlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BinkMediaPlayer.BinkMediaPlayer.IsPaused
struct UBinkMediaPlayer_IsPaused_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BinkMediaPlayer.BinkMediaPlayer.IsLooping
struct UBinkMediaPlayer_IsLooping_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BinkMediaPlayer.BinkMediaPlayer.IsInitialized
struct UBinkMediaPlayer_IsInitialized_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BinkMediaPlayer.BinkMediaPlayer.GetURL
struct UBinkMediaPlayer_GetURL_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BinkMediaPlayer.BinkMediaPlayer.GetTime
struct UBinkMediaPlayer_GetTime_Params
{
	struct FTimespan                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BinkMediaPlayer.BinkMediaPlayer.GetRate
struct UBinkMediaPlayer_GetRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BinkMediaPlayer.BinkMediaPlayer.GetDuration
struct UBinkMediaPlayer_GetDuration_Params
{
	struct FTimespan                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BinkMediaPlayer.BinkMediaPlayer.Draw
struct UBinkMediaPlayer_Draw_Params
{
	class UTexture*                                    Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               tonemap;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                out_nits;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               srgb_decode;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               hdr;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BinkMediaPlayer.BinkMediaPlayer.CloseUrl
struct UBinkMediaPlayer_CloseUrl_Params
{
};

// Function BinkMediaPlayer.BinkMediaPlayer.CanPlay
struct UBinkMediaPlayer_CanPlay_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BinkMediaPlayer.BinkMediaPlayer.CanPause
struct UBinkMediaPlayer_CanPause_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BinkMediaPlayer.BinkMediaTexture.SetMediaPlayer
struct UBinkMediaTexture_SetMediaPlayer_Params
{
	class UBinkMediaPlayer*                            InMediaPlayer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BinkMediaPlayer.BinkMediaTexture.Clear
struct UBinkMediaTexture_Clear_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
