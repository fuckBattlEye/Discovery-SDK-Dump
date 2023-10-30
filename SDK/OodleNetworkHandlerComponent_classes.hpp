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

// Class OodleNetworkHandlerComponent.OodleNetworkTrainerCommandlet
// 0x0020 (0x00A0 - 0x0080)
class UOodleNetworkTrainerCommandlet : public UCommandlet
{
public:
	bool                                               bCompressionTest;                                         // 0x0080(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bWriteV5Dictionaries;                                     // 0x0081(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0082(0x0002) MISSED OFFSET
	int                                                HashTableSize;                                            // 0x0084(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                DictionarySize;                                           // 0x0088(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                DictionaryTrials;                                         // 0x008C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                TrialRandomness;                                          // 0x0090(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                TrialGenerations;                                         // 0x0094(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bNoTrials;                                                // 0x0098(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0099(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OodleNetworkHandlerComponent.OodleNetworkTrainerCommandlet"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
