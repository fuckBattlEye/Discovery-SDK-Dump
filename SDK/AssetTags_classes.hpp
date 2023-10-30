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

// Class AssetTags.AssetTagsSubsystem
// 0x0000 (0x0030 - 0x0030)
class UAssetTagsSubsystem : public UEngineSubsystem
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AssetTags.AssetTagsSubsystem"));
		return ptr;
	}


	TArray<struct FName> GetCollectionsContainingAssetPtr(class UObject* AssetPtr);//Offset:Discovery.exe+0x2E5C000
	TArray<struct FName> GetCollectionsContainingAssetData(const struct FAssetData& AssetData);//Offset:Discovery.exe+0x2E5C0E0
	TArray<struct FName> GetCollectionsContainingAsset(const struct FName& AssetPathName);//Offset:Discovery.exe+0x2E5C240
	TArray<struct FName> GetCollections();//Offset:Discovery.exe+0x2E5C510
	TArray<struct FAssetData> GetAssetsInCollection(const struct FName& Name);//Offset:Discovery.exe+0x2E5C320
	bool CollectionExists(const struct FName& Name);//Offset:Discovery.exe+0x2E5C590
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
