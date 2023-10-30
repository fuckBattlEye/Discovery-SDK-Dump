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

// Class TypedElementRuntime.TypedElementAssetDataInterface
// 0x0000 (0x0028 - 0x0028)
class UTypedElementAssetDataInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class TypedElementRuntime.TypedElementAssetDataInterface"));
		return ptr;
	}


	struct FAssetData GetAssetData(const struct FScriptTypedElementHandle& InElementHandle);//Offset:Discovery.exe+0x4B95A30
	TArray<struct FAssetData> GetAllReferencedAssetDatas(const struct FScriptTypedElementHandle& InElementHandle);//Offset:Discovery.exe+0x4B95C30
};


// Class TypedElementRuntime.TypedElementHierarchyInterface
// 0x0000 (0x0028 - 0x0028)
class UTypedElementHierarchyInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class TypedElementRuntime.TypedElementHierarchyInterface"));
		return ptr;
	}


	struct FScriptTypedElementHandle GetParentElement(const struct FScriptTypedElementHandle& InElementHandle, bool bAllowCreate);//Offset:Discovery.exe+0x4B96280
	void GetChildElements(const struct FScriptTypedElementHandle& InElementHandle, bool bAllowCreate, TArray<struct FScriptTypedElementHandle>* OutElementHandles);//Offset:Discovery.exe+0x4B960B0
};


// Class TypedElementRuntime.TypedElementObjectInterface
// 0x0000 (0x0028 - 0x0028)
class UTypedElementObjectInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class TypedElementRuntime.TypedElementObjectInterface"));
		return ptr;
	}


	class UClass* GetObjectClass(const struct FScriptTypedElementHandle& InElementHandle);//Offset:Discovery.exe+0x4B966A0
	class UObject* GetObject(const struct FScriptTypedElementHandle& InElementHandle);//Offset:Discovery.exe+0x4B96760
};


// Class TypedElementRuntime.TypedElementSelectionInterface
// 0x0000 (0x0028 - 0x0028)
class UTypedElementSelectionInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class TypedElementRuntime.TypedElementSelectionInterface"));
		return ptr;
	}


	bool SelectElement(const struct FScriptTypedElementHandle& InElementHandle, const struct FScriptTypedElementListProxy& InSelectionSet, const struct FTypedElementSelectionOptions& InSelectionOptions);//Offset:Discovery.exe+0x4B97250
	bool IsElementSelected(const struct FScriptTypedElementHandle& InElementHandle, const struct FScriptTypedElementListProxy& InSelectionSet, const struct FTypedElementIsSelectedOptions& InSelectionOptions);//Offset:Discovery.exe+0x4B97670
	struct FScriptTypedElementHandle GetSelectionElement(const struct FScriptTypedElementHandle& InElementHandle, const struct FScriptTypedElementListProxy& InCurrentSelection, enum class ETypedElementSelectionMethod InSelectionMethod);//Offset:Discovery.exe+0x4B96D70
	bool DeselectElement(const struct FScriptTypedElementHandle& InElementHandle, const struct FScriptTypedElementListProxy& InSelectionSet, const struct FTypedElementSelectionOptions& InSelectionOptions);//Offset:Discovery.exe+0x4B97090
	bool CanSelectElement(const struct FScriptTypedElementHandle& InElementHandle, const struct FTypedElementSelectionOptions& InSelectionOptions);//Offset:Discovery.exe+0x4B97540
	bool CanDeselectElement(const struct FScriptTypedElementHandle& InElementHandle, const struct FTypedElementSelectionOptions& InSelectionOptions);//Offset:Discovery.exe+0x4B97410
	bool AllowSelectionModifiers(const struct FScriptTypedElementHandle& InElementHandle, const struct FScriptTypedElementListProxy& InSelectionSet);//Offset:Discovery.exe+0x4B96F30
};


// Class TypedElementRuntime.TypedElementSelectionSet
// 0x0870 (0x0898 - 0x0028)
class UTypedElementSelectionSet : public UObject
{
public:
	unsigned char                                      UnknownData00[0x800];                                     // 0x0028(0x0800) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPreSelectionChange;                                     // 0x0828(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSelectionChange;                                        // 0x0838(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0848(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class TypedElementRuntime.TypedElementSelectionSet"));
		return ptr;
	}


	bool SetSelection(TArray<struct FScriptTypedElementHandle> InElementHandles, const struct FTypedElementSelectionOptions& InSelectionOptions);//Offset:Discovery.exe+0x4B982F0
	bool SelectElements(TArray<struct FScriptTypedElementHandle> InElementHandles, const struct FTypedElementSelectionOptions& InSelectionOptions);//Offset:Discovery.exe+0x4B98700
	bool SelectElement(const struct FScriptTypedElementHandle& InElementHandle, const struct FTypedElementSelectionOptions& InSelectionOptions);//Offset:Discovery.exe+0x4B98870
	void RestoreSelectionState(const struct FTypedElementSelectionSetState& InSelectionState);//Offset:Discovery.exe+0x4B98D10
	void OnPreChangeDynamic__DelegateSignature(class UTypedElementSelectionSet* SelectionSet);//Offset:Discovery.exe+0x327F8B0
	void OnChangeDynamic__DelegateSignature(class UTypedElementSelectionSet* SelectionSet);//Offset:Discovery.exe+0x327F8B0
	TArray<struct FScriptTypedElementHandle> K2_GetSelectedElementHandles(class UClass* InBaseInterfaceType);//Offset:Discovery.exe+0x4B97FA0
	bool IsElementSelected(const struct FScriptTypedElementHandle& InElementHandle, const struct FTypedElementIsSelectedOptions& InSelectionOptions);//Offset:Discovery.exe+0x4B98C00
	bool HasSelectedObjects(class UClass* InRequiredClass);//Offset:Discovery.exe+0x4B99600
	bool HasSelectedElements(class UClass* InBaseInterfaceType);//Offset:Discovery.exe+0x4B998B0
	class UObject* GetTopSelectedObject(class UClass* InRequiredClass);//Offset:Discovery.exe+0x4B990C0
	struct FScriptTypedElementHandle GetSelectionElement(const struct FScriptTypedElementHandle& InElementHandle, enum class ETypedElementSelectionMethod InSelectionMethod);//Offset:Discovery.exe+0x4B98110
	TArray<class UObject*> GetSelectedObjects(class UClass* InRequiredClass);//Offset:Discovery.exe+0x4B99270
	int GetNumSelectedElements();//Offset:Discovery.exe+0x4B999B0
	struct FTypedElementSelectionSetState GetCurrentSelectionState();//Offset:Discovery.exe+0x4B98E10
	class UObject* GetBottomSelectedObject(class UClass* InRequiredClass);//Offset:Discovery.exe+0x4B98F10
	bool DeselectElements(TArray<struct FScriptTypedElementHandle> InElementHandles, const struct FTypedElementSelectionOptions& InSelectionOptions);//Offset:Discovery.exe+0x4B98460
	bool DeselectElement(const struct FScriptTypedElementHandle& InElementHandle, const struct FTypedElementSelectionOptions& InSelectionOptions);//Offset:Discovery.exe+0x4B985D0
	int CountSelectedObjects(class UClass* InRequiredClass);//Offset:Discovery.exe+0x4B99450
	int CountSelectedElements(class UClass* InBaseInterfaceType);//Offset:Discovery.exe+0x4B997B0
	bool ClearSelection(const struct FTypedElementSelectionOptions& InSelectionOptions);//Offset:Discovery.exe+0x4B999E0
	bool CanSelectElement(const struct FScriptTypedElementHandle& InElementHandle, const struct FTypedElementSelectionOptions& InSelectionOptions);//Offset:Discovery.exe+0x4B98AD0
	bool CanDeselectElement(const struct FScriptTypedElementHandle& InElementHandle, const struct FTypedElementSelectionOptions& InSelectionOptions);//Offset:Discovery.exe+0x4B989A0
	bool AllowSelectionModifiers(const struct FScriptTypedElementHandle& InElementHandle);//Offset:Discovery.exe+0x4B98230
};


// Class TypedElementRuntime.TypedElementSelectionSetLibrary
// 0x0000 (0x0028 - 0x0028)
class UTypedElementSelectionSetLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class TypedElementRuntime.TypedElementSelectionSetLibrary"));
		return ptr;
	}


	bool STATIC_SetSelectionFromList(class UTypedElementSelectionSet* SelectionSet, const struct FScriptTypedElementListProxy& ElementList, const struct FTypedElementSelectionOptions& SelectionOptions);//Offset:Discovery.exe+0x4B9AEA0
	bool STATIC_SelectElementsFromList(class UTypedElementSelectionSet* SelectionSet, const struct FScriptTypedElementListProxy& ElementList, const struct FTypedElementSelectionOptions& SelectionOptions);//Offset:Discovery.exe+0x4B9B520
	struct FScriptTypedElementListProxy STATIC_GetNormalizedSelection(class UTypedElementSelectionSet* SelectionSet, const struct FTypedElementSelectionNormalizationOptions& NormalizationOptions);//Offset:Discovery.exe+0x4B9ABC0
	struct FScriptTypedElementListProxy STATIC_GetNormalizedElementList(class UTypedElementSelectionSet* SelectionSet, const struct FScriptTypedElementListProxy& ElementList, const struct FTypedElementSelectionNormalizationOptions& NormalizationOptions);//Offset:Discovery.exe+0x4B9A730
	bool STATIC_DeselectElementsFromList(class UTypedElementSelectionSet* SelectionSet, const struct FScriptTypedElementListProxy& ElementList, const struct FTypedElementSelectionOptions& SelectionOptions);//Offset:Discovery.exe+0x4B9B1E0
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
