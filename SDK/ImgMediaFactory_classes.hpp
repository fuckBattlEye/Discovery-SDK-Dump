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

// Class ImgMediaFactory.ImgMediaSettings
// 0x0040 (0x0068 - 0x0028)
class UImgMediaSettings : public UObject
{
public:
	struct FFrameRate                                  DefaultFrameRate;                                         // 0x0028(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CacheBehindPercentage;                                    // 0x0030(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CacheSizeGB;                                              // 0x0034(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                CacheThreads;                                             // 0x0038(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                CacheThreadStackSizeKB;                                   // 0x003C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              GlobalCacheSizeGB;                                        // 0x0040(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               UseGlobalCache;                                           // 0x0044(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	uint32_t                                           ExrDecoderThreads;                                        // 0x0048(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	struct FString                                     DefaultProxy;                                             // 0x0050(0x0010) (Edit, ZeroConstructor, Config)
	bool                                               UseDefaultProxy;                                          // 0x0060(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0061(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ImgMediaFactory.ImgMediaSettings"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
