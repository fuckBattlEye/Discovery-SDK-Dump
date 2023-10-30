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

// Class ClothingSystemRuntimeCommon.ClothConfigCommon
// 0x0000 (0x0028 - 0x0028)
class UClothConfigCommon : public UClothConfigBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ClothingSystemRuntimeCommon.ClothConfigCommon"));
		return ptr;
	}

};


// Class ClothingSystemRuntimeCommon.ClothSharedConfigCommon
// 0x0000 (0x0028 - 0x0028)
class UClothSharedConfigCommon : public UClothConfigCommon
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ClothingSystemRuntimeCommon.ClothSharedConfigCommon"));
		return ptr;
	}

};


// Class ClothingSystemRuntimeCommon.ClothingAssetCustomData
// 0x0000 (0x0028 - 0x0028)
class UClothingAssetCustomData : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ClothingSystemRuntimeCommon.ClothingAssetCustomData"));
		return ptr;
	}

};


// Class ClothingSystemRuntimeCommon.ClothingAssetCommon
// 0x00B0 (0x0108 - 0x0058)
class UClothingAssetCommon : public UClothingAssetBase
{
public:
	class UPhysicsAsset*                               PhysicsAsset;                                             // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TMap<struct FName, class UClothConfigBase*>        ClothConfigs;                                             // 0x0060(0x0050) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, EditConst)
	TArray<struct FClothLODDataCommon>                 LODData;                                                  // 0x00B0(0x0010) (ZeroConstructor)
	TArray<int>                                        LodMap;                                                   // 0x00C0(0x0010) (ZeroConstructor)
	TArray<struct FName>                               UsedBoneNames;                                            // 0x00D0(0x0010) (ZeroConstructor)
	TArray<int>                                        UsedBoneIndices;                                          // 0x00E0(0x0010) (ZeroConstructor)
	int                                                ReferenceBoneIndex;                                       // 0x00F0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00F4(0x0004) MISSED OFFSET
	class UClothingAssetCustomData*                    CustomData;                                               // 0x00F8(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsCopiedFromDifferentSkeletalMesh;                       // 0x0100(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0101(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ClothingSystemRuntimeCommon.ClothingAssetCommon"));
		return ptr;
	}

};


// Class ClothingSystemRuntimeCommon.ClothLODDataCommon_Legacy
// 0x0150 (0x0178 - 0x0028)
class UClothLODDataCommon_Legacy : public UObject
{
public:
	class UClothPhysicalMeshDataBase_Legacy*           PhysicalMeshData;                                         // 0x0028(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FClothPhysicalMeshData                      ClothPhysicalMeshData;                                    // 0x0030(0x00E8)
	struct FClothCollisionData                         CollisionData;                                            // 0x0118(0x0040)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0158(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ClothingSystemRuntimeCommon.ClothLODDataCommon_Legacy"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
