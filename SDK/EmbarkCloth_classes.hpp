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

// Class EmbarkCloth.EmbarkClothConfig
// 0x0018 (0x0040 - 0x0028)
class UEmbarkClothConfig : public UClothConfigCommon
{
public:
	struct FEmbarkClothWeightedValue                   Frequency;                                                // 0x0028(0x0008) (Edit)
	struct FEmbarkClothWeightedValue                   Damping;                                                  // 0x0030(0x0008) (Edit)
	struct FEmbarkClothWeightedValue                   Response;                                                 // 0x0038(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkCloth.EmbarkClothConfig"));
		return ptr;
	}

};


// Class EmbarkCloth.EmbarkClothingSimulationFactory
// 0x0000 (0x0028 - 0x0028)
class UEmbarkClothingSimulationFactory : public UClothingSimulationFactory
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkCloth.EmbarkClothingSimulationFactory"));
		return ptr;
	}

};


// Class EmbarkCloth.EmbarkClothingInteractor
// 0x0000 (0x0030 - 0x0030)
class UEmbarkClothingInteractor : public UClothingInteractor
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkCloth.EmbarkClothingInteractor"));
		return ptr;
	}

};


// Class EmbarkCloth.EmbarkClothingSimulationInteractor
// 0x0010 (0x00A0 - 0x0090)
class UEmbarkClothingSimulationInteractor : public UClothingSimulationInteractor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0090(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkCloth.EmbarkClothingSimulationInteractor"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
