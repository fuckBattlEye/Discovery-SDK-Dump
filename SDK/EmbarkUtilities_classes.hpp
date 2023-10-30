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

// Class EmbarkUtilities.TestRoot
// 0x0010 (0x0038 - 0x0028)
class UTestRoot : public UObject
{
public:
	bool                                               Boolean0;                                                 // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	class UTestItemBase*                               Item;                                                     // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUtilities.TestRoot"));
		return ptr;
	}

};


// Class EmbarkUtilities.TestItemBase
// 0x0000 (0x0028 - 0x0028)
class UTestItemBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUtilities.TestItemBase"));
		return ptr;
	}

};


// Class EmbarkUtilities.TestItemA
// 0x0008 (0x0030 - 0x0028)
class UTestItemA : public UTestItemBase
{
public:
	int                                                Integer0;                                                 // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Integer1;                                                 // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUtilities.TestItemA"));
		return ptr;
	}

};


// Class EmbarkUtilities.TestItemB
// 0x0018 (0x0040 - 0x0028)
class UTestItemB : public UTestItemBase
{
public:
	float                                              Float0;                                                   // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	TArray<int>                                        IntegerArray0;                                            // 0x0030(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUtilities.TestItemB"));
		return ptr;
	}

};


// Class EmbarkUtilities.EmbarkJsonLibrary
// 0x0000 (0x0028 - 0x0028)
class UEmbarkJsonLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkUtilities.EmbarkJsonLibrary"));
		return ptr;
	}


	bool STATIC_UClassToJsonSerialization(class UObject* Object, const struct FEncodeSettings& Settings, struct FString* Result);//Offset:Discovery.exe+0x1EEFF50
	bool STATIC_UClassToJsonObjectString(class UObject* Object, int CheckFlags, int SkipFlags, int Indent, bool bPrettyPrint, bool bEncodeSubclassWithTypeWrap, bool bNormalizeCase, struct FString* Result);//Offset:Discovery.exe+0x1EF00D0
	bool STATIC_JsonObjectStringToUClass(class UObject* OutObject, int CheckFlags, int SkipFlags, struct FString* JsonString);//Offset:Discovery.exe+0x1EEFDB0
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
