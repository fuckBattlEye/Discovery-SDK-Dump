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

// Class Gauntlet.GauntletTestController
// 0x0008 (0x0030 - 0x0028)
class UGauntletTestController : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Gauntlet.GauntletTestController"));
		return ptr;
	}

};


// Class Gauntlet.GauntletTestControllerBootTest
// 0x0000 (0x0030 - 0x0030)
class UGauntletTestControllerBootTest : public UGauntletTestController
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Gauntlet.GauntletTestControllerBootTest"));
		return ptr;
	}

};


// Class Gauntlet.GauntletTestControllerErrorTest
// 0x0020 (0x0050 - 0x0030)
class UGauntletTestControllerErrorTest : public UGauntletTestController
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0030(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class Gauntlet.GauntletTestControllerErrorTest"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
