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

// Class MetasoundEngine.MetasoundEditorGraphBase
// 0x0000 (0x0060 - 0x0060)
class UMetasoundEditorGraphBase : public UEdGraph
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MetasoundEngine.MetasoundEditorGraphBase"));
		return ptr;
	}

};


// Class MetasoundEngine.MetaSound
// 0x0300 (0x0328 - 0x0028)
class UMetaSound : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET
	struct FMetasoundFrontendDocument                  RootMetaSoundDocument;                                    // 0x0080(0x01F8) (Edit)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0278(0x0050) UNKNOWN PROPERTY: ReferencedAssetClassKeys
	unsigned char                                      UnknownData02[0x50];                                      // 0x02C8(0x0050) UNKNOWN PROPERTY: ReferenceAssetClassCache
	struct FGuid                                       AssetClassID;                                             // 0x0318(0x0010) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MetasoundEngine.MetaSound"));
		return ptr;
	}

};


// Class MetasoundEngine.MetaSoundAssetSubsystem
// 0x00B0 (0x00E0 - 0x0030)
class UMetaSoundAssetSubsystem : public UEngineSubsystem
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0030(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MetasoundEngine.MetaSoundAssetSubsystem"));
		return ptr;
	}


	void UnregisterAssetClassesInDirectories(TArray<struct FMetaSoundAssetDirectory> Directories);//Offset:Discovery.exe+0x2989600
	void RegisterAssetClassesInDirectories(TArray<struct FMetaSoundAssetDirectory> Directories);//Offset:Discovery.exe+0x29896F0
};


// Class MetasoundEngine.MetaSoundSettings
// 0x0048 (0x0080 - 0x0038)
class UMetaSoundSettings : public UDeveloperSettings
{
public:
	bool                                               bAutoUpdateEnabled;                                       // 0x0038(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	TArray<struct FMetasoundFrontendClassName>         AutoUpdateDenylist;                                       // 0x0040(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FDefaultMetaSoundAssetAutoUpdateSettings> AutoUpdateAssetDenylist;                                  // 0x0050(0x0010) (Edit, ZeroConstructor, Config)
	bool                                               bAutoUpdateLogWarningOnDroppedConnection;                 // 0x0060(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
	TArray<struct FDirectoryPath>                      DirectoriesToRegister;                                    // 0x0068(0x0010) (Edit, ZeroConstructor, Config)
	int                                                DenyListCacheChangeID;                                    // 0x0078(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x007C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MetasoundEngine.MetaSoundSettings"));
		return ptr;
	}

};


// Class MetasoundEngine.MetaSoundSource
// 0x0310 (0x06A0 - 0x0390)
class UMetaSoundSource : public USoundWaveProcedural
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0390(0x0058) MISSED OFFSET
	struct FMetasoundFrontendDocument                  RootMetaSoundDocument;                                    // 0x03E8(0x01F8) (Edit)
	unsigned char                                      UnknownData01[0x50];                                      // 0x05E0(0x0050) UNKNOWN PROPERTY: ReferencedAssetClassKeys
	unsigned char                                      UnknownData02[0x50];                                      // 0x0630(0x0050) UNKNOWN PROPERTY: ReferenceAssetClassCache
	enum class EMetasoundSourceAudioFormat             OutputFormat;                                             // 0x0680(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0681(0x0003) MISSED OFFSET
	struct FGuid                                       AssetClassID;                                             // 0x0684(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0xC];                                       // 0x0694(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MetasoundEngine.MetaSoundSource"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
