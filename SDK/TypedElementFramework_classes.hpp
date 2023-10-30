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

// Class TypedElementFramework.TypedElementCounterInterface
// 0x0000 (0x0028 - 0x0028)
class UTypedElementCounterInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class TypedElementFramework.TypedElementCounterInterface"));
		return ptr;
	}

};


// Class TypedElementFramework.TestTypedElementInterfaceA
// 0x0000 (0x0028 - 0x0028)
class UTestTypedElementInterfaceA : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class TypedElementFramework.TestTypedElementInterfaceA"));
		return ptr;
	}


	bool SetDisplayName(const struct FScriptTypedElementHandle& InElementHandle, const struct FText& InNewName, bool bNotify);//Offset:Discovery.exe+0x4772850
	struct FText GetDisplayName(const struct FScriptTypedElementHandle& InElementHandle);//Offset:Discovery.exe+0x4772A10
};


// Class TypedElementFramework.TestTypedElementInterfaceB
// 0x0000 (0x0028 - 0x0028)
class UTestTypedElementInterfaceB : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class TypedElementFramework.TestTypedElementInterfaceB"));
		return ptr;
	}


	bool MarkAsTested(const struct FScriptTypedElementHandle& InElementHandle);//Offset:Discovery.exe+0x4772E50
};


// Class TypedElementFramework.TestTypedElementInterfaceC
// 0x0000 (0x0028 - 0x0028)
class UTestTypedElementInterfaceC : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class TypedElementFramework.TestTypedElementInterfaceC"));
		return ptr;
	}


	bool GetIsTested(const struct FScriptTypedElementHandle& InElementHandle);//Offset:Discovery.exe+0x4772E50
};


// Class TypedElementFramework.TestTypedElementInterfaceA_ImplTyped
// 0x0008 (0x0030 - 0x0028)
class UTestTypedElementInterfaceA_ImplTyped : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class TypedElementFramework.TestTypedElementInterfaceA_ImplTyped"));
		return ptr;
	}

};


// Class TypedElementFramework.TestTypedElementInterfaceA_ImplUntyped
// 0x0008 (0x0030 - 0x0028)
class UTestTypedElementInterfaceA_ImplUntyped : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class TypedElementFramework.TestTypedElementInterfaceA_ImplUntyped"));
		return ptr;
	}

};


// Class TypedElementFramework.TestTypedElementInterfaceBAndC_Typed
// 0x0010 (0x0038 - 0x0028)
class UTestTypedElementInterfaceBAndC_Typed : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class TypedElementFramework.TestTypedElementInterfaceBAndC_Typed"));
		return ptr;
	}

};


// Class TypedElementFramework.TypedElementHandleLibrary
// 0x0000 (0x0028 - 0x0028)
class UTypedElementHandleLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class TypedElementFramework.TypedElementHandleLibrary"));
		return ptr;
	}


	void STATIC_Release(struct FScriptTypedElementHandle* ElementHandle);//Offset:Discovery.exe+0x4773A30
	bool STATIC_NotEqual(const struct FScriptTypedElementHandle& LHS, const struct FScriptTypedElementHandle& RHS);//Offset:Discovery.exe+0x47737C0
	bool STATIC_IsSet(const struct FScriptTypedElementHandle& ElementHandle);//Offset:Discovery.exe+0x4773B40
	bool STATIC_Equal(const struct FScriptTypedElementHandle& LHS, const struct FScriptTypedElementHandle& RHS);//Offset:Discovery.exe+0x4773900
};


// Class TypedElementFramework.TypedElementListLibrary
// 0x0000 (0x0028 - 0x0028)
class UTypedElementListLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class TypedElementFramework.TypedElementListLibrary"));
		return ptr;
	}


	void STATIC_Shrink(const struct FScriptTypedElementListProxy& ElementList);//Offset:Discovery.exe+0x47752A0
	void STATIC_Reset(const struct FScriptTypedElementListProxy& ElementList);//Offset:Discovery.exe+0x4774BA0
	void STATIC_Reserve(const struct FScriptTypedElementListProxy& ElementList, int Size);//Offset:Discovery.exe+0x4775070
	bool STATIC_Remove(const struct FScriptTypedElementListProxy& ElementList, const struct FScriptTypedElementHandle& ElementHandle);//Offset:Discovery.exe+0x4774030
	int STATIC_Num(const struct FScriptTypedElementListProxy& ElementList);//Offset:Discovery.exe+0x4775490
	bool STATIC_IsValidIndex(const struct FScriptTypedElementListProxy& ElementList, int Index);//Offset:Discovery.exe+0x4775650
	bool STATIC_HasElementsOfType(const struct FScriptTypedElementListProxy& ElementList, const struct FName& ElementTypeName);//Offset:Discovery.exe+0x4775D30
	bool STATIC_HasElements(const struct FScriptTypedElementListProxy& ElementList, class UClass* BaseInterfaceType);//Offset:Discovery.exe+0x4776190
	class UObject* STATIC_GetElementInterface(const struct FScriptTypedElementListProxy& ElementList, const struct FScriptTypedElementHandle& ElementHandle, class UClass* BaseInterfaceType);//Offset:Discovery.exe+0x47763E0
	TArray<struct FScriptTypedElementHandle> STATIC_GetElementHandles(const struct FScriptTypedElementListProxy& ElementList, class UClass* BaseInterfaceType);//Offset:Discovery.exe+0x4775860
	struct FScriptTypedElementHandle STATIC_GetElementHandleAt(const struct FScriptTypedElementListProxy& ElementList, int Index);//Offset:Discovery.exe+0x47766A0
	void STATIC_Empty(const struct FScriptTypedElementListProxy& ElementList, int Slack);//Offset:Discovery.exe+0x4774DC0
	struct FScriptTypedElementListProxy STATIC_CreateScriptElementList(class UTypedElementRegistry* Registry);//Offset:Discovery.exe+0x4776B40
	int STATIC_CountElementsOfType(const struct FScriptTypedElementListProxy& ElementList, const struct FName& ElementTypeName);//Offset:Discovery.exe+0x4775B20
	int STATIC_CountElements(const struct FScriptTypedElementListProxy& ElementList, class UClass* BaseInterfaceType);//Offset:Discovery.exe+0x4775F40
	bool STATIC_Contains(const struct FScriptTypedElementListProxy& ElementList, const struct FScriptTypedElementHandle& ElementHandle);//Offset:Discovery.exe+0x4774990
	struct FScriptTypedElementListProxy STATIC_Clone(const struct FScriptTypedElementListProxy& ElementList);//Offset:Discovery.exe+0x47768D0
	void STATIC_AppendList(const struct FScriptTypedElementListProxy& ElementList, const struct FScriptTypedElementListProxy& OtherElementList);//Offset:Discovery.exe+0x4774240
	void STATIC_Append(const struct FScriptTypedElementListProxy& ElementList, TArray<struct FScriptTypedElementHandle> ElementHandles);//Offset:Discovery.exe+0x4774520
	bool STATIC_Add(const struct FScriptTypedElementListProxy& ElementList, const struct FScriptTypedElementHandle& ElementHandle);//Offset:Discovery.exe+0x4774770
};


// Class TypedElementFramework.TypedElementRegistry
// 0x0920 (0x0948 - 0x0028)
class UTypedElementRegistry : public UObject
{
public:
	unsigned char                                      UnknownData00[0x920];                                     // 0x0028(0x0920) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class TypedElementFramework.TypedElementRegistry"));
		return ptr;
	}


	class UTypedElementRegistry* STATIC_GetInstance();//Offset:Discovery.exe+0x4777C30
	class UObject* GetElementInterface(const struct FScriptTypedElementHandle& InElementHandle, class UClass* InBaseInterfaceType);//Offset:Discovery.exe+0x4777A70
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
