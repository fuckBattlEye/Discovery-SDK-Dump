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

// Class MediaCompositing.MovieSceneMediaPlayerPropertySection
// 0x0010 (0x00F8 - 0x00E8)
class UMovieSceneMediaPlayerPropertySection : public UMovieSceneSection
{
public:
	class UMediaSource*                                MediaSource;                                              // 0x00E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLoop;                                                    // 0x00F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00F1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MediaCompositing.MovieSceneMediaPlayerPropertySection"));
		return ptr;
	}

};


// Class MediaCompositing.MovieSceneMediaPlayerPropertyTrack
// 0x0008 (0x00C8 - 0x00C0)
class UMovieSceneMediaPlayerPropertyTrack : public UMovieScenePropertyTrack
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MediaCompositing.MovieSceneMediaPlayerPropertyTrack"));
		return ptr;
	}

};


// Class MediaCompositing.MovieSceneMediaSection
// 0x0030 (0x0118 - 0x00E8)
class UMovieSceneMediaSection : public UMovieSceneSection
{
public:
	class UMediaSource*                                MediaSource;                                              // 0x00E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLooping;                                                 // 0x00F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00F1(0x0003) MISSED OFFSET
	struct FFrameNumber                                StartFrameOffset;                                         // 0x00F4(0x0004) (Edit, BlueprintVisible)
	class UMediaTexture*                               MediaTexture;                                             // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMediaSoundComponent*                        MediaSoundComponent;                                      // 0x0100(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bUseExternalMediaPlayer;                                  // 0x0108(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0109(0x0007) MISSED OFFSET
	class UMediaPlayer*                                ExternalMediaPlayer;                                      // 0x0110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MediaCompositing.MovieSceneMediaSection"));
		return ptr;
	}

};


// Class MediaCompositing.MovieSceneMediaTrack
// 0x0018 (0x00A8 - 0x0090)
class UMovieSceneMediaTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0090(0x0008) MISSED OFFSET
	TArray<class UMovieSceneSection*>                  MediaSections;                                            // 0x0098(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MediaCompositing.MovieSceneMediaTrack"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
