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

// Class AngelscriptCode.AngelscriptAllScriptRootsCommandlet
// 0x0000 (0x0080 - 0x0080)
class UAngelscriptAllScriptRootsCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AngelscriptCode.AngelscriptAllScriptRootsCommandlet"));
		return ptr;
	}

};


// Class AngelscriptCode.AngelscriptSettings
// 0x0038 (0x0060 - 0x0028)
class UAngelscriptSettings : public UObject
{
public:
	TArray<struct FString>                             PreprocessorFlags;                                        // 0x0028(0x0010) (Edit, ZeroConstructor, Config, DisableEditOnInstance)
	TArray<struct FString>                             BannedPreprocessorFlags;                                  // 0x0038(0x0010) (Edit, ZeroConstructor, Config, DisableEditOnInstance)
	bool                                               bAllowScriptAssetReferences;                              // 0x0048(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAutomaticImports;                                        // 0x0049(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWarnOnManualImportStatements;                            // 0x004A(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	enum class EAngelscriptMathNamespace               MathNamespace;                                            // 0x004B(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	enum class EAngelscriptPropertyEditSpecifier       DefaultPropertyEditSpecifier;                             // 0x004C(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	enum class EAngelscriptPropertyEditSpecifier       DefaultPropertyEditSpecifierForStructs;                   // 0x004D(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	enum class EAngelscriptPropertyBlueprintSpecifier  DefaultPropertyBlueprintSpecifier;                        // 0x004E(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	bool                                               bMarkNonUpropertyPropertiesAsTransient;                   // 0x004F(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStripBlueprintLibraryNamespaceSuffix;                    // 0x0050(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	float                                              EditorMaximumScriptExecutionTime;                         // 0x0054(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	bool                                               bScriptFloatIsFloat64;                                    // 0x0058(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDeprecateDoubleType;                                     // 0x0059(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWarnOnFloatConstantsForDoubleValues;                     // 0x005A(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWarnIntegerDivision;                                     // 0x005B(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRuntimeModifiableEditProperties;                         // 0x005C(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x005D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AngelscriptCode.AngelscriptSettings"));
		return ptr;
	}

};


// Class AngelscriptCode.AngelscriptTestCommandlet
// 0x0000 (0x0080 - 0x0080)
class UAngelscriptTestCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AngelscriptCode.AngelscriptTestCommandlet"));
		return ptr;
	}

};


// Class AngelscriptCode.AngelscriptTestSettings
// 0x00B8 (0x00F0 - 0x0038)
class UAngelscriptTestSettings : public UDeveloperSettings
{
public:
	struct FString                                     IntegrationTestMapRoot;                                   // 0x0038(0x0010) (Edit, ZeroConstructor, Config)
	bool                                               bRunUnitTestsOnHotReload;                                 // 0x0048(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	int                                                LimitNModulesToTestOnHotReload;                           // 0x004C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                GarbageCollectEveryNTests;                                // 0x0050(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData02[0x28];                                      // 0x0054(0x0028) UNKNOWN PROPERTY: UnitTestGameInstanceClass
	bool                                               bEnableCodeCoverage;                                      // 0x0080(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
	TArray<struct FString>                             CoverageExcludePatterns;                                  // 0x0088(0x0010) (Edit, ZeroConstructor, Config)
	bool                                               bEnableDebugBreaksInTests;                                // 0x0098(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0099(0x0007) MISSED OFFSET
	struct FString                                     IntegrationTestNamingConvention;                          // 0x00A0(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     UnitTestNamingConvention;                                 // 0x00B0(0x0010) (Edit, ZeroConstructor, Config)
	unsigned char                                      UnknownData05[0x10];                                      // 0x00C0(0x0010) MISSED OFFSET
	bool                                               bEnableNetworkEmulation;                                  // 0x00D0(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x00D1(0x0003) MISSED OFFSET
	int                                                InPacketsMinLatency;                                      // 0x00D4(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                InPacketsMaxLatency;                                      // 0x00D8(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                InPacketsPacketLossPercentage;                            // 0x00DC(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                OutPacketsMinLatency;                                     // 0x00E0(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                OutPacketsMaxLatency;                                     // 0x00E4(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                OutPacketsPacketLossPercentage;                           // 0x00E8(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x00EC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AngelscriptCode.AngelscriptTestSettings"));
		return ptr;
	}

};


// Class AngelscriptCode.ASClass
// 0x0060 (0x02F0 - 0x0290)
class UASClass : public UClass
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0290(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AngelscriptCode.ASClass"));
		return ptr;
	}

};


// Class AngelscriptCode.ASFunction
// 0x0090 (0x0170 - 0x00E0)
class UASFunction : public UFunction
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x00E0(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AngelscriptCode.ASFunction"));
		return ptr;
	}

};


// Class AngelscriptCode.ASFunction_NotThreadSafe
// 0x0000 (0x0170 - 0x0170)
class UASFunction_NotThreadSafe : public UASFunction
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AngelscriptCode.ASFunction_NotThreadSafe"));
		return ptr;
	}

};


// Class AngelscriptCode.ASFunction_NoParams
// 0x0000 (0x0170 - 0x0170)
class UASFunction_NoParams : public UASFunction
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AngelscriptCode.ASFunction_NoParams"));
		return ptr;
	}

};


// Class AngelscriptCode.ASFunction_DWordArg
// 0x0000 (0x0170 - 0x0170)
class UASFunction_DWordArg : public UASFunction
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AngelscriptCode.ASFunction_DWordArg"));
		return ptr;
	}

};


// Class AngelscriptCode.ASFunction_QWordArg
// 0x0000 (0x0170 - 0x0170)
class UASFunction_QWordArg : public UASFunction
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AngelscriptCode.ASFunction_QWordArg"));
		return ptr;
	}

};


// Class AngelscriptCode.ASFunction_FloatArg
// 0x0000 (0x0170 - 0x0170)
class UASFunction_FloatArg : public UASFunction
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AngelscriptCode.ASFunction_FloatArg"));
		return ptr;
	}

};


// Class AngelscriptCode.ASFunction_FloatExtendedToDoubleArg
// 0x0000 (0x0170 - 0x0170)
class UASFunction_FloatExtendedToDoubleArg : public UASFunction
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AngelscriptCode.ASFunction_FloatExtendedToDoubleArg"));
		return ptr;
	}

};


// Class AngelscriptCode.ASFunction_FloatExtendedToDoubleReturn
// 0x0000 (0x0170 - 0x0170)
class UASFunction_FloatExtendedToDoubleReturn : public UASFunction
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AngelscriptCode.ASFunction_FloatExtendedToDoubleReturn"));
		return ptr;
	}

};


// Class AngelscriptCode.ASFunction_DoubleArg
// 0x0000 (0x0170 - 0x0170)
class UASFunction_DoubleArg : public UASFunction
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AngelscriptCode.ASFunction_DoubleArg"));
		return ptr;
	}

};


// Class AngelscriptCode.ASFunction_ByteArg
// 0x0000 (0x0170 - 0x0170)
class UASFunction_ByteArg : public UASFunction
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AngelscriptCode.ASFunction_ByteArg"));
		return ptr;
	}

};


// Class AngelscriptCode.ASFunction_ReferenceArg
// 0x0000 (0x0170 - 0x0170)
class UASFunction_ReferenceArg : public UASFunction
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AngelscriptCode.ASFunction_ReferenceArg"));
		return ptr;
	}

};


// Class AngelscriptCode.ASFunction_ObjectReturn
// 0x0000 (0x0170 - 0x0170)
class UASFunction_ObjectReturn : public UASFunction
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AngelscriptCode.ASFunction_ObjectReturn"));
		return ptr;
	}

};


// Class AngelscriptCode.ASFunction_DWordReturn
// 0x0000 (0x0170 - 0x0170)
class UASFunction_DWordReturn : public UASFunction
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AngelscriptCode.ASFunction_DWordReturn"));
		return ptr;
	}

};


// Class AngelscriptCode.ASFunction_FloatReturn
// 0x0000 (0x0170 - 0x0170)
class UASFunction_FloatReturn : public UASFunction
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AngelscriptCode.ASFunction_FloatReturn"));
		return ptr;
	}

};


// Class AngelscriptCode.ASFunction_ByteReturn
// 0x0000 (0x0170 - 0x0170)
class UASFunction_ByteReturn : public UASFunction
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AngelscriptCode.ASFunction_ByteReturn"));
		return ptr;
	}

};


// Class AngelscriptCode.ASStruct
// 0x0020 (0x00E0 - 0x00C0)
class UASStruct : public UScriptStruct
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00C0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AngelscriptCode.ASStruct"));
		return ptr;
	}

};


// Class AngelscriptCode.FakeNetDriver
// 0x0008 (0x0770 - 0x0768)
class UFakeNetDriver : public UNetDriver
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0768(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AngelscriptCode.FakeNetDriver"));
		return ptr;
	}

};


// Class AngelscriptCode.GameplayLibrary
// 0x0000 (0x0028 - 0x0028)
class UGameplayLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AngelscriptCode.GameplayLibrary"));
		return ptr;
	}


	void STATIC_AsyncSaveGameToSlot(class USaveGame* SaveGameObject, const struct FString& SlotName, int UserIndex, const struct FScriptDelegate& Delegate);//Offset:Discovery.exe+0x1457D40
	void STATIC_AsyncLoadGameFromSlot(const struct FString& SlotName, int UserIndex, const struct FScriptDelegate& Delegate);//Offset:Discovery.exe+0x1457B20
};


// Class AngelscriptCode.GameplayTagContainerMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UGameplayTagContainerMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AngelscriptCode.GameplayTagContainerMixinLibrary"));
		return ptr;
	}


	void STATIC_RemoveTags(const struct FGameplayTagContainer& TagsToRemove, struct FGameplayTagContainer* GameplayTagContainer);//Offset:Discovery.exe+0x1459930
	bool STATIC_RemoveTag(const struct FGameplayTag& TagToRemove, struct FGameplayTagContainer* GameplayTagContainer);//Offset:Discovery.exe+0x1459AB0
	int STATIC_Num(const struct FGameplayTagContainer& GameplayTagContainer);//Offset:Discovery.exe+0x1458C70
	bool STATIC_MatchesQuery(const struct FGameplayTagContainer& GameplayTagContainer, const struct FGameplayTagQuery& Query);//Offset:Discovery.exe+0x14584D0
	struct FGameplayTag STATIC_Last(const struct FGameplayTagContainer& GameplayTagContainer);//Offset:Discovery.exe+0x14583D0
	bool STATIC_IsValid(const struct FGameplayTagContainer& GameplayTagContainer);//Offset:Discovery.exe+0x1458BA0
	bool STATIC_IsEmpty(const struct FGameplayTagContainer& GameplayTagContainer);//Offset:Discovery.exe+0x1458AC0
	bool STATIC_HasTagExact(const struct FGameplayTagContainer& GameplayTagContainer, const struct FGameplayTag& TagToCheck);//Offset:Discovery.exe+0x14595E0
	bool STATIC_HasTag(const struct FGameplayTagContainer& GameplayTagContainer, const struct FGameplayTag& TagToCheck);//Offset:Discovery.exe+0x1459770
	bool STATIC_HasAnyExact(const struct FGameplayTagContainer& GameplayTagContainer, const struct FGameplayTagContainer& ContainerToCheck);//Offset:Discovery.exe+0x14591F0
	bool STATIC_HasAny(const struct FGameplayTagContainer& GameplayTagContainer, const struct FGameplayTagContainer& ContainerToCheck);//Offset:Discovery.exe+0x1459400
	bool STATIC_HasAllExact(const struct FGameplayTagContainer& GameplayTagContainer, const struct FGameplayTagContainer& ContainerToCheck);//Offset:Discovery.exe+0x1458D40
	bool STATIC_HasAll(const struct FGameplayTagContainer& GameplayTagContainer, const struct FGameplayTagContainer& ContainerToCheck);//Offset:Discovery.exe+0x1458F60
	struct FGameplayTagContainer STATIC_GetGameplayTagParents(const struct FGameplayTagContainer& GameplayTagContainer);//Offset:Discovery.exe+0x14589A0
	struct FGameplayTag STATIC_First(const struct FGameplayTagContainer& GameplayTagContainer);//Offset:Discovery.exe+0x14582D0
	struct FGameplayTagContainer STATIC_FilterExact(const struct FGameplayTagContainer& GameplayTagContainer, const struct FGameplayTagContainer& OtherContainer);//Offset:Discovery.exe+0x1458660
	struct FGameplayTagContainer STATIC_Filter(const struct FGameplayTagContainer& GameplayTagContainer, const struct FGameplayTagContainer& OtherContainer);//Offset:Discovery.exe+0x1458800
	void STATIC_AddTagFast(const struct FGameplayTag& TagToAdd, struct FGameplayTagContainer* GameplayTagContainer);//Offset:Discovery.exe+0x1459D20
	void STATIC_AddTag(const struct FGameplayTag& TagToAdd, struct FGameplayTagContainer* GameplayTagContainer);//Offset:Discovery.exe+0x1459E50
	void STATIC_AddLeafTag(const struct FGameplayTag& TagToAdd, struct FGameplayTagContainer* GameplayTagContainer);//Offset:Discovery.exe+0x1459BF0
};


// Class AngelscriptCode.GameplayTagMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UGameplayTagMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AngelscriptCode.GameplayTagMixinLibrary"));
		return ptr;
	}


	struct FGameplayTag STATIC_RequestDirectParent(const struct FGameplayTag& GameplayTag);//Offset:Discovery.exe+0x145ACC0
	bool STATIC_MatchesTagExact(const struct FGameplayTag& GameplayTag, const struct FGameplayTag& TagToCheck);//Offset:Discovery.exe+0x145B360
	int STATIC_MatchesTagDepth(const struct FGameplayTag& GameplayTag, const struct FGameplayTag& TagToCheck);//Offset:Discovery.exe+0x145B250
	bool STATIC_MatchesTag(const struct FGameplayTag& GameplayTag, const struct FGameplayTag& TagToCheck);//Offset:Discovery.exe+0x145B4C0
	bool STATIC_MatchesAnyExact(const struct FGameplayTag& GameplayTag, const struct FGameplayTagContainer& ContainerToCheck);//Offset:Discovery.exe+0x145AF70
	bool STATIC_MatchesAny(const struct FGameplayTag& GameplayTag, const struct FGameplayTagContainer& ContainerToCheck);//Offset:Discovery.exe+0x145B110
	bool STATIC_IsValid(const struct FGameplayTag& GameplayTag);//Offset:Discovery.exe+0x145AEB0
	struct FGameplayTagContainer STATIC_GetSingleTagContainer(const struct FGameplayTag& GameplayTag);//Offset:Discovery.exe+0x145AD90
	struct FGameplayTagContainer STATIC_GetGameplayTagParents(const struct FGameplayTag& GameplayTag);//Offset:Discovery.exe+0x145ABD0
};


// Class AngelscriptCode.GameplayTagQueryMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UGameplayTagQueryMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AngelscriptCode.GameplayTagQueryMixinLibrary"));
		return ptr;
	}


	bool STATIC_Matches(const struct FGameplayTagQuery& GameplayTagQuery, const struct FGameplayTagContainer& Tags);//Offset:Discovery.exe+0x145BEE0
	bool STATIC_IsEmpty(const struct FGameplayTagQuery& GameplayTagQuery);//Offset:Discovery.exe+0x145BDE0
	struct FString STATIC_GetDescription(const struct FGameplayTagQuery& GameplayTagQuery);//Offset:Discovery.exe+0x145BC60
};


// Class AngelscriptCode.InputComponentScriptMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UInputComponentScriptMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AngelscriptCode.InputComponentScriptMixinLibrary"));
		return ptr;
	}


	void STATIC_RemoveActionBindingForHandle(class UInputComponent* Component, int Handle);//Offset:Discovery.exe+0x145D980
	void STATIC_RemoveAction(class UInputComponent* Component, const struct FName& ActionName, TEnumAsByte<EInputEvent> KeyEvent);//Offset:Discovery.exe+0x145DA70
	void STATIC_BindVectorAxis(class UInputComponent* Component, const struct FKey& AxisKey, const struct FScriptDelegate& Delegate);//Offset:Discovery.exe+0x145C3E0
	void STATIC_BindKey(class UInputComponent* Component, const struct FKey& Key, TEnumAsByte<EInputEvent> KeyEvent, const struct FScriptDelegate& Delegate, bool bConsumeInput);//Offset:Discovery.exe+0x145D390
	void STATIC_BindChord(class UInputComponent* Component, const struct FInputChord& Chord, TEnumAsByte<EInputEvent> KeyEvent, const struct FScriptDelegate& Delegate);//Offset:Discovery.exe+0x145CE30
	void STATIC_BindAxisKey(class UInputComponent* Component, const struct FName& AxisKey, const struct FScriptDelegate& Delegate, bool bConsumeInput);//Offset:Discovery.exe+0x145C860
	void STATIC_BindAxis(class UInputComponent* Component, const struct FName& AxisName, const struct FScriptDelegate& Delegate, bool bConsumeInput);//Offset:Discovery.exe+0x145CC80
	int STATIC_BindAction(class UInputComponent* Component, const struct FName& ActionName, TEnumAsByte<EInputEvent> KeyEvent, const struct FScriptDelegate& Delegate, bool bConsumeInput);//Offset:Discovery.exe+0x145DBC0
};


// Class AngelscriptCode.PlayerControllerInputScriptMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UPlayerControllerInputScriptMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AngelscriptCode.PlayerControllerInputScriptMixinLibrary"));
		return ptr;
	}


	void STATIC_PushInputComponent(class APlayerController* PlayerController, class UInputComponent* Component);//Offset:Discovery.exe+0x145E940
	void STATIC_PopInputComponent(class APlayerController* PlayerController, class UInputComponent* Component);//Offset:Discovery.exe+0x145E850
	class UPlayerInput* STATIC_GetPlayerInput(class APlayerController* PlayerController);//Offset:Discovery.exe+0x145E7A0
};


// Class AngelscriptCode.PlayerInputScriptMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UPlayerInputScriptMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AngelscriptCode.PlayerInputScriptMixinLibrary"));
		return ptr;
	}


	void STATIC_SetMouseSensitivity(class UPlayerInput* PlayerInput, float Sensitivity);//Offset:Discovery.exe+0x145EF10
	void STATIC_RemoveAxisMapping(class UPlayerInput* PlayerInput, const struct FInputAxisKeyMapping& KeyMapping);//Offset:Discovery.exe+0x145F7A0
	void STATIC_RemoveActionMapping(class UPlayerInput* PlayerInput, const struct FInputActionKeyMapping& KeyMapping);//Offset:Discovery.exe+0x145FB00
	void STATIC_InvertAxis(class UPlayerInput* PlayerInput, const struct FName& AxisName);//Offset:Discovery.exe+0x145F000
	float STATIC_GetMouseSensitivityY(class UPlayerInput* PlayerInput);//Offset:Discovery.exe+0x145EDB0
	float STATIC_GetMouseSensitivityX(class UPlayerInput* PlayerInput);//Offset:Discovery.exe+0x145EE60
	TArray<struct FInputAxisKeyMapping> STATIC_GetKeysForAxis(class UPlayerInput* PlayerInput, const struct FName& AxisName);//Offset:Discovery.exe+0x145F4B0
	TArray<struct FInputActionKeyMapping> STATIC_GetKeysForAction(class UPlayerInput* PlayerInput, const struct FName& ActionName);//Offset:Discovery.exe+0x145F5B0
	TArray<struct FInputAxisKeyMapping> STATIC_GetEngineDefinedAxisMappings(class UPlayerInput* PlayerInput, const struct FName& AxisName);//Offset:Discovery.exe+0x145F0F0
	TArray<struct FInputActionKeyMapping> STATIC_GetEngineDefinedActionMappings(class UPlayerInput* PlayerInput, const struct FName& ActionName);//Offset:Discovery.exe+0x145F2D0
	void STATIC_ForceRebuildingKeyMaps(class UPlayerInput* PlayerInput, bool bRestoreDefaults);//Offset:Discovery.exe+0x145F6B0
	void STATIC_AddAxisMapping(class UPlayerInput* PlayerInput, const struct FInputAxisKeyMapping& KeyMapping);//Offset:Discovery.exe+0x145F950
	void STATIC_AddActionMapping(class UPlayerInput* PlayerInput, const struct FInputActionKeyMapping& KeyMapping);//Offset:Discovery.exe+0x145FCA0
};


// Class AngelscriptCode.TestTerminatorComponent
// 0x0008 (0x00C0 - 0x00B8)
class UTestTerminatorComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AngelscriptCode.TestTerminatorComponent"));
		return ptr;
	}


	void ServerTerminatorReplicated();//Offset:Discovery.exe+0x1461490
};


// Class AngelscriptCode.TestTerminator
// 0x0010 (0x02D8 - 0x02C8)
class ATestTerminator : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x02C8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AngelscriptCode.TestTerminator"));
		return ptr;
	}

};


// Class AngelscriptCode.LatentAutomationCommand
// 0x0020 (0x0048 - 0x0028)
class ULatentAutomationCommand : public UObject
{
public:
	class UWorld*                                      World;                                                    // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bAllowTimeout;                                            // 0x0030(0x0001) (Edit, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAlsoRunOnClient;                                         // 0x0031(0x0001) (Edit, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x16];                                      // 0x0032(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AngelscriptCode.LatentAutomationCommand"));
		return ptr;
	}


	bool UpdateOnClient();//Offset:Discovery.exe+0x1461900
	bool Update();//Offset:Discovery.exe+0x11BE930
	bool HasAuthority();//Offset:Discovery.exe+0x1461880
	struct FString DescribeOnClient();//Offset:Discovery.exe+0x327F8B0
	struct FString Describe();//Offset:Discovery.exe+0x327F8B0
	bool BeforeOnClient();//Offset:Discovery.exe+0x1461930
	void Before();//Offset:Discovery.exe+0x11BDAF0
	bool AfterOnClient();//Offset:Discovery.exe+0x14618B0
	void After();//Offset:Discovery.exe+0x14618E0
};


// Class AngelscriptCode.LatentAutomationCommandClientExecutor
// 0x0028 (0x02F0 - 0x02C8)
class ALatentAutomationCommandClientExecutor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x02C8(0x0018) MISSED OFFSET
	class ULatentAutomationCommand*                    LatentCommand;                                            // 0x02E0(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bCanStartBefore;                                          // 0x02E8(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bCanStartUpdate;                                          // 0x02E9(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bCanStartAfter;                                           // 0x02EA(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x02EB(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AngelscriptCode.LatentAutomationCommandClientExecutor"));
		return ptr;
	}


	void ServerLatentCommandDescribeOnClient(const struct FString& NewDescription);//Offset:Discovery.exe+0x14623C0
	void ServerLatentCommandClientReady();//Offset:Discovery.exe+0x14624B0
	void ServerLatentCommandClientDone();//Offset:Discovery.exe+0x1462470
	void ServerLatentCommandClientChecked();//Offset:Discovery.exe+0x1462490
	void ServerFail(const struct FString& Message);//Offset:Discovery.exe+0x1462B50
	void ServerAssertTrue(bool bExpression, const struct FString& Message);//Offset:Discovery.exe+0x14627D0
	void ServerAssertSame(class UObject* Expected, class UObject* Actual, const struct FString& Message);//Offset:Discovery.exe+0x1462A10
	void ServerAssertNull(class UObject* Object, const struct FString& Message);//Offset:Discovery.exe+0x14625D0
	void ServerAssertNotSame(class UObject* Expected, class UObject* Actual, const struct FString& Message);//Offset:Discovery.exe+0x14628D0
	void ServerAssertNotNull(class UObject* Object, const struct FString& Message);//Offset:Discovery.exe+0x14624D0
	void ServerAssertFalse(bool bExpression, const struct FString& Message);//Offset:Discovery.exe+0x14626D0
	void Fail(const struct FString& Message);//Offset:Discovery.exe+0x1463260
	void AssertTrue(bool bExpression, const struct FString& Message);//Offset:Discovery.exe+0x1462EE0
	void AssertSame(class UObject* Expected, class UObject* Actual, const struct FString& Message);//Offset:Discovery.exe+0x1463120
	void AssertNull(class UObject* Object, const struct FString& Message);//Offset:Discovery.exe+0x1462CF0
	void AssertNotSame(class UObject* Expected, class UObject* Actual, const struct FString& Message);//Offset:Discovery.exe+0x1462FE0
	void AssertNotNull(class UObject* Object, const struct FString& Message);//Offset:Discovery.exe+0x1462C00
	void AssertFalse(bool bExpression, const struct FString& Message);//Offset:Discovery.exe+0x1462DE0
};


// Class AngelscriptCode.RuntimeFloatCurveMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class URuntimeFloatCurveMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AngelscriptCode.RuntimeFloatCurveMixinLibrary"));
		return ptr;
	}


	void STATIC_GetValueRange_Double(const struct FRuntimeFloatCurve& Target, double* MinValue, double* MaxValue);//Offset:Discovery.exe+0x1464B10
	void STATIC_GetValueRange(const struct FRuntimeFloatCurve& Target, float* MinValue, float* MaxValue);//Offset:Discovery.exe+0x1464E90
	void STATIC_GetTimeRange_Double(const struct FRuntimeFloatCurve& Target, double* MinTime, double* MaxTime);//Offset:Discovery.exe+0x1464CD0
	void STATIC_GetTimeRange(const struct FRuntimeFloatCurve& Target, float* MinTime, float* MaxTime);//Offset:Discovery.exe+0x1465060
	int STATIC_GetNumKeys(const struct FRuntimeFloatCurve& Target);//Offset:Discovery.exe+0x1464A10
	float STATIC_GetFloatValue(const struct FRuntimeFloatCurve& Target, float InTime, float DefaultValue);//Offset:Discovery.exe+0x1465230
	bool STATIC_Equals(const struct FRuntimeFloatCurve& Target, const struct FRuntimeFloatCurve& Other);//Offset:Discovery.exe+0x1464830
	void STATIC_AddDefaultKey(float InTime, float InValue, struct FRuntimeFloatCurve* Target);//Offset:Discovery.exe+0x1464610
};


// Class AngelscriptCode.ScriptEngineSubsystem
// 0x0010 (0x0040 - 0x0030)
class UScriptEngineSubsystem : public UEngineSubsystem
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
	bool                                               bIsTickableWhenPaused;                                    // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsTickableInEditor;                                      // 0x0039(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x003A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AngelscriptCode.ScriptEngineSubsystem"));
		return ptr;
	}


	void BP_Tick(float DeltaTime);//Offset:Discovery.exe+0x327F8B0
	bool BP_ShouldCreateSubsystem(class UObject* Outer);//Offset:Discovery.exe+0x1465A30
	void BP_Initialize();//Offset:Discovery.exe+0x327F8B0
	void BP_Deinitialize();//Offset:Discovery.exe+0x327F8B0
};


// Class AngelscriptCode.ScriptGameInstanceSubsystem
// 0x0000 (0x0030 - 0x0030)
class UScriptGameInstanceSubsystem : public UGameInstanceSubsystem
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AngelscriptCode.ScriptGameInstanceSubsystem"));
		return ptr;
	}


	bool BP_ShouldCreateSubsystem(class UObject* Outer);//Offset:Discovery.exe+0x1465A30
	void BP_Initialize();//Offset:Discovery.exe+0x327F8B0
	class UGameInstance* BP_GetGameInstance();//Offset:Discovery.exe+0x1465E30
	void BP_Deinitialize();//Offset:Discovery.exe+0x327F8B0
};


// Class AngelscriptCode.ScriptLocalPlayerSubsystem
// 0x0000 (0x0030 - 0x0030)
class UScriptLocalPlayerSubsystem : public ULocalPlayerSubsystem
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AngelscriptCode.ScriptLocalPlayerSubsystem"));
		return ptr;
	}


	bool BP_ShouldCreateSubsystem(class UObject* Outer);//Offset:Discovery.exe+0x1465A30
	void BP_Initialize();//Offset:Discovery.exe+0x327F8B0
	class ULocalPlayer* BP_GetLocalPlayer();//Offset:Discovery.exe+0x1466270
	void BP_Deinitialize();//Offset:Discovery.exe+0x327F8B0
};


// Class AngelscriptCode.ScriptWorldSubsystem
// 0x0008 (0x0048 - 0x0040)
class UScriptWorldSubsystem : public UTickableWorldSubsystem
{
public:
	bool                                               bCreateForLevelEditorWorlds;                              // 0x0040(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCreateForGameWorlds;                                     // 0x0041(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0042(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AngelscriptCode.ScriptWorldSubsystem"));
		return ptr;
	}


	void BP_UpdateStreamingState();//Offset:Discovery.exe+0x327F8B0
	void BP_Tick(float DeltaTime);//Offset:Discovery.exe+0x327F8B0
	bool BP_ShouldCreateSubsystem(class UObject* Outer);//Offset:Discovery.exe+0x1465A30
	void BP_PostInitialize();//Offset:Discovery.exe+0x327F8B0
	void BP_OnWorldComponentsUpdated();//Offset:Discovery.exe+0x327F8B0
	void BP_OnWorldBeginPlay();//Offset:Discovery.exe+0x327F8B0
	void BP_Initialize();//Offset:Discovery.exe+0x327F8B0
	void BP_Deinitialize();//Offset:Discovery.exe+0x327F8B0
};


// Class AngelscriptCode.SoftReferenceStatics
// 0x0000 (0x0028 - 0x0028)
class USoftReferenceStatics : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AngelscriptCode.SoftReferenceStatics"));
		return ptr;
	}

};


// Class AngelscriptCode.SubsystemLibrary
// 0x0000 (0x0028 - 0x0028)
class USubsystemLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AngelscriptCode.SubsystemLibrary"));
		return ptr;
	}


	class UWorldSubsystem* STATIC_GetWorldSubsystem(class UObject* WorldContextObject, class UClass* Class);//Offset:Discovery.exe+0x1466E00
	class ULocalPlayerSubsystem* STATIC_GetLocalPlayerSubsystemFromPlayerController(class APlayerController* PlayerController, class UClass* Class);//Offset:Discovery.exe+0x1466D10
	class ULocalPlayerSubsystem* STATIC_GetLocalPlayerSubsystemFromLocalPlayer(class UObject* WorldContextObject, class ULocalPlayer* LocalPlayer, class UClass* Class);//Offset:Discovery.exe+0x1466BD0
	class ULocalPlayerSubsystem* STATIC_GetLocalPlayerSubsystem(class UObject* WorldContextObject, class UClass* Class);//Offset:Discovery.exe+0x1466EF0
	class UGameInstanceSubsystem* STATIC_GetGameInstanceSubsystem(class UObject* WorldContextObject, class UClass* Class);//Offset:Discovery.exe+0x1466FE0
	class UEngineSubsystem* STATIC_GetEngineSubsystem(class UClass* Class);//Offset:Discovery.exe+0x14670D0
};


// Class AngelscriptCode.TimelineComponentMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UTimelineComponentMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AngelscriptCode.TimelineComponentMixinLibrary"));
		return ptr;
	}


	void STATIC_SetTimelineFinishedFunc(class UTimelineComponent* Component, const struct FScriptDelegate& NewTimelineFinishedFunc);//Offset:Discovery.exe+0x1467EA0
	void STATIC_AddInterpVector(class UTimelineComponent* Component, class UCurveVector* VectorCurve, const struct FScriptDelegate& InterpFunc, const struct FName& PropertyName, const struct FName& TrackName);//Offset:Discovery.exe+0x1467AF0
	void STATIC_AddInterpLinearColor(class UTimelineComponent* Component, class UCurveLinearColor* LinearColorCurve, const struct FScriptDelegate& InterpFunc, const struct FName& PropertyName, const struct FName& TrackName);//Offset:Discovery.exe+0x1467690
	void STATIC_AddInterpFloat(class UTimelineComponent* Component, class UCurveFloat* FloatCurve, const struct FScriptDelegate& InterpFunc, const struct FName& PropertyName, const struct FName& TrackName);//Offset:Discovery.exe+0x14678C0
	void STATIC_AddEvent(class UTimelineComponent* Component, float Time, const struct FScriptDelegate& EventFunc);//Offset:Discovery.exe+0x1467D20
};


// Class AngelscriptCode.AssetManagerMixinLibrary
// 0x0000 (0x0028 - 0x0028)
class UAssetManagerMixinLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AngelscriptCode.AssetManagerMixinLibrary"));
		return ptr;
	}


	void STATIC_GetPrimaryAssetTypeInfoList(class UAssetManager* AssetManager, TArray<struct FPrimaryAssetTypeInfo>* AssetTypeInfoList);//Offset:Discovery.exe+0x1468460
	bool STATIC_GetPrimaryAssetTypeInfo(class UAssetManager* AssetManager, const struct FPrimaryAssetType& PrimaryAssetType, struct FPrimaryAssetTypeInfo* AssetTypeInfo);//Offset:Discovery.exe+0x1468590
	class UObject* STATIC_GetPrimaryAssetObject(class UAssetManager* AssetManager, const struct FPrimaryAssetId& PrimaryAssetId);//Offset:Discovery.exe+0x1468BB0
	bool STATIC_GetPrimaryAssetIdList(class UAssetManager* AssetManager, const struct FPrimaryAssetType& PrimaryAssetType, TArray<struct FPrimaryAssetId>* PrimaryAssetIdList);//Offset:Discovery.exe+0x1468940
	struct FPrimaryAssetId STATIC_GetPrimaryAssetIdForObject(class UAssetManager* AssetManager, class UObject* Object);//Offset:Discovery.exe+0x1468AA0
	bool STATIC_GetPrimaryAssetDataList(class UAssetManager* AssetManager, const struct FPrimaryAssetType& PrimaryAssetType, TArray<struct FAssetData>* AssetDataList);//Offset:Discovery.exe+0x1468CC0
	bool STATIC_GetPrimaryAssetData(class UAssetManager* AssetManager, const struct FPrimaryAssetId& PrimaryAssetId, struct FAssetData* AssetData);//Offset:Discovery.exe+0x1468E90
};


// Class AngelscriptCode.ObjectInWorld
// 0x0008 (0x0030 - 0x0028)
class UObjectInWorld : public UObject
{
public:
	class UWorld*                                      World;                                                    // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AngelscriptCode.ObjectInWorld"));
		return ptr;
	}


	void SetWorldContext(class UObject* WorldContext);//Offset:Discovery.exe+0x146B780
	void SetWorld(class UWorld* InWorld);//Offset:Discovery.exe+0x146B820
	void DestroyObject();//Offset:Discovery.exe+0x146B570
};


// Class AngelscriptCode.ObjectTickable
// 0x0018 (0x0040 - 0x0028)
class UObjectTickable : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UWorld*                                      World;                                                    // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bTickWhilePaused;                                         // 0x0038(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0039(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AngelscriptCode.ObjectTickable"));
		return ptr;
	}


	void SetWorldContext(class UObject* WorldContext);//Offset:Discovery.exe+0x146BC70
	void SetWorld(class UWorld* InWorld);//Offset:Discovery.exe+0x146BD10
	void DestroyObject();//Offset:Discovery.exe+0x146B570
	void BP_Tick(float DeltaTime);//Offset:Discovery.exe+0x327F8B0
};


// Class AngelscriptCode.WidgetBlueprintStatics
// 0x0000 (0x0028 - 0x0028)
class UWidgetBlueprintStatics : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AngelscriptCode.WidgetBlueprintStatics"));
		return ptr;
	}


	class UUserWidget* STATIC_CreateWidget(class UObject* WorldContextObject, class UClass* WidgetType, class APlayerController* OwningPlayer);//Offset:Discovery.exe+0x146C200
};


// Class AngelscriptCode.WorldCollisionStatics
// 0x0000 (0x0028 - 0x0028)
class UWorldCollisionStatics : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AngelscriptCode.WorldCollisionStatics"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
