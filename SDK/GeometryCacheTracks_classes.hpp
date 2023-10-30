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

// Class GeometryCacheTracks.MovieSceneGeometryCacheSection
// 0x0040 (0x0128 - 0x00E8)
class UMovieSceneGeometryCacheSection : public UMovieSceneSection
{
public:
	struct FMovieSceneGeometryCacheParams              Params;                                                   // 0x00E8(0x0040) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GeometryCacheTracks.MovieSceneGeometryCacheSection"));
		return ptr;
	}

};


// Class GeometryCacheTracks.MovieSceneGeometryCacheTrack
// 0x0018 (0x00A8 - 0x0090)
class UMovieSceneGeometryCacheTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0090(0x0008) MISSED OFFSET
	TArray<class UMovieSceneSection*>                  AnimationSections;                                        // 0x0098(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GeometryCacheTracks.MovieSceneGeometryCacheTrack"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
