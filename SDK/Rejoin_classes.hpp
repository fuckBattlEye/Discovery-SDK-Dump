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

// Class Rejoin.RejoinCheck
// 0x0148 (0x0170 - 0x0028)
class URejoinCheck : public UObject
{
public:
	enum class ERejoinStatus                           LastKnownStatus;                                          // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bRejoinAfterCheck;                                        // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bAttemptingRejoin;                                        // 0x002A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x145];                                     // 0x002B(0x0145) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Rejoin.RejoinCheck"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
