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

// Class EmbarkScatter.MergedScatterActor
// 0x0000 (0x02C8 - 0x02C8)
class AMergedScatterActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkScatter.MergedScatterActor"));
		return ptr;
	}

};


// Class EmbarkScatter.ScatterBlockingComponent
// 0x0000 (0x05D0 - 0x05D0)
class UScatterBlockingComponent : public UBoxComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkScatter.ScatterBlockingComponent"));
		return ptr;
	}

};


// Class EmbarkScatter.ScatterComponent
// 0x0010 (0x02E0 - 0x02D0)
class UScatterComponent : public USceneComponent
{
public:
	float                                              ScatterSize;                                              // 0x02D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x02D4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkScatter.ScatterComponent"));
		return ptr;
	}

};


// Class EmbarkScatter.ScatterDataAsset
// 0x0000 (0x0030 - 0x0030)
class UScatterDataAsset : public UDataAsset
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkScatter.ScatterDataAsset"));
		return ptr;
	}

};


// Class EmbarkScatter.ScatterMeshComponent
// 0x0000 (0x08F0 - 0x08F0)
class UScatterMeshComponent : public UHierarchicalInstancedStaticMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkScatter.ScatterMeshComponent"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
