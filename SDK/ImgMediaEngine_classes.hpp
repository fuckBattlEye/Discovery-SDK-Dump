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

// Class ImgMediaEngine.ImgMediaPlaybackComponent
// 0x0028 (0x00E0 - 0x00B8)
class UImgMediaPlaybackComponent : public UActorComponent
{
public:
	float                                              Width;                                                    // 0x00B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LODBias;                                                  // 0x00BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x00C0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ImgMediaEngine.ImgMediaPlaybackComponent"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
