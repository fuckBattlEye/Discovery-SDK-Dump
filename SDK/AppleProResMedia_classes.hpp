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

// Class AppleProResMedia.AppleProResEncoderProtocol
// 0x0088 (0x00F0 - 0x0068)
class UAppleProResEncoderProtocol : public UFrameGrabberProtocol
{
public:
	enum class EAppleProResEncoderFormats              EncodingFormat;                                           // 0x0068(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	enum class EAppleProResEncoderColorDescription     ColorDescription;                                         // 0x0069(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	enum class EAppleProResEncoderScanType             ScanType;                                                 // 0x006A(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x006B(0x0001) MISSED OFFSET
	int                                                NumberOfEncodingThreads;                                  // 0x006C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEmbedTimecodeTrack;                                      // 0x0070(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bDropFrameTimecode;                                       // 0x0071(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7E];                                      // 0x0072(0x007E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AppleProResMedia.AppleProResEncoderProtocol"));
		return ptr;
	}

};


// Class AppleProResMedia.AppleProResMediaSettings
// 0x0008 (0x0030 - 0x0028)
class UAppleProResMediaSettings : public UObject
{
public:
	int                                                NumberOfCPUDecodingThreads;                               // 0x0028(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AppleProResMedia.AppleProResMediaSettings"));
		return ptr;
	}

};


// Class AppleProResMedia.MoviePipelineAppleProResOutput
// 0x0008 (0x0090 - 0x0088)
class UMoviePipelineAppleProResOutput : public UMoviePipelineVideoOutputBase
{
public:
	enum class EAppleProResEncoderCodec                Codec;                                                    // 0x0088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDropFrameTimecode;                                       // 0x0089(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideMaximumEncodingThreads;                          // 0x008A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x008B(0x0001) MISSED OFFSET
	int                                                MaxNumberOfEncodingThreads;                               // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AppleProResMedia.MoviePipelineAppleProResOutput"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
