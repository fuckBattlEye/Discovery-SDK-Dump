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

// Class GameplayTags.BlueprintGameplayTagLibrary
// 0x0000 (0x0028 - 0x0028)
class UBlueprintGameplayTagLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayTags.BlueprintGameplayTagLibrary"));
		return ptr;
	}


	bool STATIC_RemoveGameplayTag(const struct FGameplayTag& Tag, struct FGameplayTagContainer* TagContainer);//Offset:Discovery.exe+0x4C84980
	bool STATIC_NotEqual_TagTag(const struct FGameplayTag& A, const struct FString& B);//Offset:Discovery.exe+0x4C83D00
	bool STATIC_NotEqual_TagContainerTagContainer(const struct FGameplayTagContainer& A, const struct FString& B);//Offset:Discovery.exe+0x4C83B70
	bool STATIC_NotEqual_GameplayTagContainer(const struct FGameplayTagContainer& A, const struct FGameplayTagContainer& B);//Offset:Discovery.exe+0x4C845A0
	bool STATIC_NotEqual_GameplayTag(const struct FGameplayTag& A, const struct FGameplayTag& B);//Offset:Discovery.exe+0x18E0350
	bool STATIC_MatchesTag(const struct FGameplayTag& TagOne, const struct FGameplayTag& TagTwo, bool bExactMatch);//Offset:Discovery.exe+0x4C855F0
	bool STATIC_MatchesAnyTags(const struct FGameplayTag& TagOne, const struct FGameplayTagContainer& OtherContainer, bool bExactMatch);//Offset:Discovery.exe+0x4C85480
	struct FGameplayTagContainer STATIC_MakeLiteralGameplayTagContainer(const struct FGameplayTagContainer& Value);//Offset:Discovery.exe+0x4C84490
	struct FGameplayTag STATIC_MakeLiteralGameplayTag(const struct FGameplayTag& Value);//Offset:Discovery.exe+0x4C85330
	struct FGameplayTagQuery STATIC_MakeGameplayTagQuery(const struct FGameplayTagQuery& TagQuery);//Offset:Discovery.exe+0x4C84050
	struct FGameplayTagContainer STATIC_MakeGameplayTagContainerFromTag(const struct FGameplayTag& SingleTag);//Offset:Discovery.exe+0x4C842E0
	struct FGameplayTagContainer STATIC_MakeGameplayTagContainerFromArray(TArray<struct FGameplayTag> GameplayTags);//Offset:Discovery.exe+0x4C843B0
	bool STATIC_IsTagQueryEmpty(const struct FGameplayTagQuery& TagQuery);//Offset:Discovery.exe+0x145BDE0
	bool STATIC_IsGameplayTagValid(const struct FGameplayTag& GameplayTag);//Offset:Discovery.exe+0x18E05E0
	bool STATIC_HasTag(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTag& Tag, bool bExactMatch);//Offset:Discovery.exe+0x4C850F0
	bool STATIC_HasAnyTags(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagContainer& OtherContainer, bool bExactMatch);//Offset:Discovery.exe+0x4C84F50
	bool STATIC_HasAllTags(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagContainer& OtherContainer, bool bExactMatch);//Offset:Discovery.exe+0x4C84DB0
	bool STATIC_HasAllMatchingGameplayTags(const TScriptInterface<class UGameplayTagAssetInterface>& TagContainerInterface, const struct FGameplayTagContainer& OtherContainer);//Offset:Discovery.exe+0x4C83F30
	struct FName STATIC_GetTagName(const struct FGameplayTag& GameplayTag);//Offset:Discovery.exe+0x4C853D0
	int STATIC_GetNumGameplayTagsInContainer(const struct FGameplayTagContainer& TagContainer);//Offset:Discovery.exe+0x4C85260
	struct FString STATIC_GetDebugStringFromGameplayTagContainer(const struct FGameplayTagContainer& TagContainer);//Offset:Discovery.exe+0x4C83A70
	struct FString STATIC_GetDebugStringFromGameplayTag(const struct FGameplayTag& GameplayTag);//Offset:Discovery.exe+0x18E0510
	void STATIC_GetAllActorsOfClassMatchingTagQuery(class UObject* WorldContextObject, class UClass* ActorClass, const struct FGameplayTagQuery& GameplayTagQuery, TArray<class AActor*>* OutActors);//Offset:Discovery.exe+0x4C84BB0
	bool STATIC_EqualEqual_GameplayTagContainer(const struct FGameplayTagContainer& A, const struct FGameplayTagContainer& B);//Offset:Discovery.exe+0x4C846F0
	bool STATIC_EqualEqual_GameplayTag(const struct FGameplayTag& A, const struct FGameplayTag& B);//Offset:Discovery.exe+0x18E0430
	bool STATIC_DoesTagAssetInterfaceHaveTag(const TScriptInterface<class UGameplayTagAssetInterface>& TagContainerInterface, const struct FGameplayTag& Tag);//Offset:Discovery.exe+0x4C83E40
	bool STATIC_DoesContainerMatchTagQuery(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagQuery& TagQuery);//Offset:Discovery.exe+0x14584D0
	void STATIC_BreakGameplayTagContainer(const struct FGameplayTagContainer& GameplayTagContainer, TArray<struct FGameplayTag>* GameplayTags);//Offset:Discovery.exe+0x4C841B0
	void STATIC_AppendGameplayTagContainers(const struct FGameplayTagContainer& InTagContainer, struct FGameplayTagContainer* InOutTagContainer);//Offset:Discovery.exe+0x4C84840
	void STATIC_AddGameplayTag(const struct FGameplayTag& Tag, struct FGameplayTagContainer* TagContainer);//Offset:Discovery.exe+0x4C84AA0
};


// Class GameplayTags.GameplayTagAssetInterface
// 0x0000 (0x0028 - 0x0028)
class UGameplayTagAssetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayTags.GameplayTagAssetInterface"));
		return ptr;
	}


	bool HasMatchingGameplayTag(const struct FGameplayTag& TagToCheck);//Offset:Discovery.exe+0x4C86BB0
	bool HasAnyMatchingGameplayTags(const struct FGameplayTagContainer& TagContainer);//Offset:Discovery.exe+0x4C86A10
	bool HasAllMatchingGameplayTags(const struct FGameplayTagContainer& TagContainer);//Offset:Discovery.exe+0x4C86AE0
	void GetOwnedGameplayTags(struct FGameplayTagContainer* TagContainer);//Offset:Discovery.exe+0x4C86C50
};


// Class GameplayTags.EditableGameplayTagQuery
// 0x0070 (0x0098 - 0x0028)
class UEditableGameplayTagQuery : public UObject
{
public:
	struct FString                                     UserDescription;                                          // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET
	class UEditableGameplayTagQueryExpression*         RootExpression;                                           // 0x0048(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FGameplayTagQuery                           TagQueryExportText_Helper;                                // 0x0050(0x0048)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayTags.EditableGameplayTagQuery"));
		return ptr;
	}

};


// Class GameplayTags.EditableGameplayTagQueryExpression
// 0x0000 (0x0028 - 0x0028)
class UEditableGameplayTagQueryExpression : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayTags.EditableGameplayTagQueryExpression"));
		return ptr;
	}

};


// Class GameplayTags.EditableGameplayTagQueryExpression_AnyTagsMatch
// 0x0020 (0x0048 - 0x0028)
class UEditableGameplayTagQueryExpression_AnyTagsMatch : public UEditableGameplayTagQueryExpression
{
public:
	struct FGameplayTagContainer                       Tags;                                                     // 0x0028(0x0020) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayTags.EditableGameplayTagQueryExpression_AnyTagsMatch"));
		return ptr;
	}

};


// Class GameplayTags.EditableGameplayTagQueryExpression_AllTagsMatch
// 0x0020 (0x0048 - 0x0028)
class UEditableGameplayTagQueryExpression_AllTagsMatch : public UEditableGameplayTagQueryExpression
{
public:
	struct FGameplayTagContainer                       Tags;                                                     // 0x0028(0x0020) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayTags.EditableGameplayTagQueryExpression_AllTagsMatch"));
		return ptr;
	}

};


// Class GameplayTags.EditableGameplayTagQueryExpression_NoTagsMatch
// 0x0020 (0x0048 - 0x0028)
class UEditableGameplayTagQueryExpression_NoTagsMatch : public UEditableGameplayTagQueryExpression
{
public:
	struct FGameplayTagContainer                       Tags;                                                     // 0x0028(0x0020) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayTags.EditableGameplayTagQueryExpression_NoTagsMatch"));
		return ptr;
	}

};


// Class GameplayTags.EditableGameplayTagQueryExpression_AnyExprMatch
// 0x0010 (0x0038 - 0x0028)
class UEditableGameplayTagQueryExpression_AnyExprMatch : public UEditableGameplayTagQueryExpression
{
public:
	TArray<class UEditableGameplayTagQueryExpression*> Expressions;                                              // 0x0028(0x0010) (Edit, ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayTags.EditableGameplayTagQueryExpression_AnyExprMatch"));
		return ptr;
	}

};


// Class GameplayTags.EditableGameplayTagQueryExpression_AllExprMatch
// 0x0010 (0x0038 - 0x0028)
class UEditableGameplayTagQueryExpression_AllExprMatch : public UEditableGameplayTagQueryExpression
{
public:
	TArray<class UEditableGameplayTagQueryExpression*> Expressions;                                              // 0x0028(0x0010) (Edit, ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayTags.EditableGameplayTagQueryExpression_AllExprMatch"));
		return ptr;
	}

};


// Class GameplayTags.EditableGameplayTagQueryExpression_NoExprMatch
// 0x0010 (0x0038 - 0x0028)
class UEditableGameplayTagQueryExpression_NoExprMatch : public UEditableGameplayTagQueryExpression
{
public:
	TArray<class UEditableGameplayTagQueryExpression*> Expressions;                                              // 0x0028(0x0010) (Edit, ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayTags.EditableGameplayTagQueryExpression_NoExprMatch"));
		return ptr;
	}

};


// Class GameplayTags.GameplayTagsManager
// 0x0218 (0x0240 - 0x0028)
class UGameplayTagsManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x138];                                     // 0x0028(0x0138) MISSED OFFSET
	TMap<struct FName, struct FGameplayTagSource>      TagSources;                                               // 0x0160(0x0050)
	unsigned char                                      UnknownData01[0x80];                                      // 0x01B0(0x0080) MISSED OFFSET
	TArray<class UDataTable*>                          GameplayTagTables;                                        // 0x0230(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayTags.GameplayTagsManager"));
		return ptr;
	}

};


// Class GameplayTags.GameplayTagsList
// 0x0020 (0x0048 - 0x0028)
class UGameplayTagsList : public UObject
{
public:
	struct FString                                     ConfigFileName;                                           // 0x0028(0x0010) (ZeroConstructor)
	TArray<struct FGameplayTagTableRow>                GameplayTagList;                                          // 0x0038(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayTags.GameplayTagsList"));
		return ptr;
	}

};


// Class GameplayTags.RestrictedGameplayTagsList
// 0x0020 (0x0048 - 0x0028)
class URestrictedGameplayTagsList : public UObject
{
public:
	struct FString                                     ConfigFileName;                                           // 0x0028(0x0010) (ZeroConstructor)
	TArray<struct FRestrictedGameplayTagTableRow>      RestrictedGameplayTagList;                                // 0x0038(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayTags.RestrictedGameplayTagsList"));
		return ptr;
	}

};


// Class GameplayTags.GameplayTagsSettings
// 0x0070 (0x00B8 - 0x0048)
class UGameplayTagsSettings : public UGameplayTagsList
{
public:
	bool                                               ImportTagsFromConfig;                                     // 0x0048(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               WarnOnInvalidTags;                                        // 0x0049(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               ClearInvalidTags;                                         // 0x004A(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               FastReplication;                                          // 0x004B(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	struct FString                                     InvalidTagCharacters;                                     // 0x0050(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FGameplayTagCategoryRemap>           CategoryRemapping;                                        // 0x0060(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FSoftObjectPath>                     GameplayTagTableList;                                     // 0x0070(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FGameplayTagRedirect>                GameplayTagRedirects;                                     // 0x0080(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FName>                               CommonlyReplicatedTags;                                   // 0x0090(0x0010) (Edit, ZeroConstructor, Config)
	int                                                NumBitsForContainerSize;                                  // 0x00A0(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                NetIndexFirstBitSegment;                                  // 0x00A4(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TArray<struct FRestrictedConfigInfo>               RestrictedConfigFiles;                                    // 0x00A8(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayTags.GameplayTagsSettings"));
		return ptr;
	}

};


// Class GameplayTags.GameplayTagsDeveloperSettings
// 0x0018 (0x0050 - 0x0038)
class UGameplayTagsDeveloperSettings : public UDeveloperSettings
{
public:
	struct FString                                     DeveloperConfigName;                                      // 0x0038(0x0010) (Edit, ZeroConstructor, Config)
	struct FName                                       FavoriteTagSource;                                        // 0x0048(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class GameplayTags.GameplayTagsDeveloperSettings"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
