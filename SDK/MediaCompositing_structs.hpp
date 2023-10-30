#pragma once

//   SDK By:if

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace sdk
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MediaCompositing.MovieSceneMediaPlayerPropertySectionTemplate
// 0x0010 (0x0048 - 0x0038)
struct FMovieSceneMediaPlayerPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
	class UMediaSource*                                MediaSource;                                              // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FFrameNumber                                SectionStartFrame;                                        // 0x0040(0x0004)
	bool                                               bLoop;                                                    // 0x0044(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
};

// ScriptStruct MediaCompositing.MovieSceneMediaSectionParams
// 0x0030
struct FMovieSceneMediaSectionParams
{
	class UMediaSoundComponent*                        MediaSoundComponent;                                      // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMediaSource*                                MediaSource;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMediaTexture*                               MediaTexture;                                             // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMediaPlayer*                                MediaPlayer;                                              // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FFrameNumber                                SectionStartFrame;                                        // 0x0020(0x0004)
	struct FFrameNumber                                SectionEndFrame;                                          // 0x0024(0x0004)
	bool                                               bLooping;                                                 // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	struct FFrameNumber                                StartFrameOffset;                                         // 0x002C(0x0004)
};

// ScriptStruct MediaCompositing.MovieSceneMediaSectionTemplate
// 0x0030 (0x0050 - 0x0020)
struct FMovieSceneMediaSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieSceneMediaSectionParams               Params;                                                   // 0x0020(0x0030)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
