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

// Class WmfMediaFactory.WmfMediaSettings
// 0x0008 (0x0030 - 0x0028)
class UWmfMediaSettings : public UObject
{
public:
	bool                                               AllowNonStandardCodecs;                                   // 0x0028(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               LowLatency;                                               // 0x0029(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               NativeAudioOut;                                           // 0x002A(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               HardwareAcceleratedVideoDecoding;                         // 0x002B(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class WmfMediaFactory.WmfMediaSettings"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
