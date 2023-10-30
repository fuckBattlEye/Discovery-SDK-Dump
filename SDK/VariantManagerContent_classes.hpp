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

// Class VariantManagerContent.LevelVariantSets
// 0x0068 (0x0090 - 0x0028)
class ULevelVariantSets : public UObject
{
public:
	class UBlueprintGeneratedClass*                    DirectorClass;                                            // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UVariantSet*>                         VariantSets;                                              // 0x0030(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0040(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class VariantManagerContent.LevelVariantSets"));
		return ptr;
	}


	class UVariantSet* GetVariantSetByName(const struct FString& VariantSetName);//Offset:Discovery.exe+0x2CFD180
	class UVariantSet* GetVariantSet(int VariantSetIndex);//Offset:Discovery.exe+0x2CFD280
	int GetNumVariantSets();//Offset:Discovery.exe+0x2CFD320
};


// Class VariantManagerContent.LevelVariantSetsActor
// 0x0068 (0x0330 - 0x02C8)
class ALevelVariantSetsActor : public AActor
{
public:
	struct FSoftObjectPath                             LevelVariantSets;                                         // 0x02C8(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<class UBlueprintGeneratedClass*, class ULevelVariantSetsFunctionDirector*> DirectorInstances;                                        // 0x02E0(0x0050) (Transient)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class VariantManagerContent.LevelVariantSetsActor"));
		return ptr;
	}


	bool SwitchOnVariantByName(const struct FString& VariantSetName, const struct FString& VariantName);//Offset:Discovery.exe+0x2CFD880
	bool SwitchOnVariantByIndex(int VariantSetIndex, int VariantIndex);//Offset:Discovery.exe+0x2CFD790
	void SetLevelVariantSets(class ULevelVariantSets* InVariantSets);//Offset:Discovery.exe+0x2CFDA20
	class ULevelVariantSets* GetLevelVariantSets(bool bLoad);//Offset:Discovery.exe+0x2CFDAC0
};


// Class VariantManagerContent.LevelVariantSetsFunctionDirector
// 0x0018 (0x0040 - 0x0028)
class ULevelVariantSetsFunctionDirector : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class VariantManagerContent.LevelVariantSetsFunctionDirector"));
		return ptr;
	}

};


// Class VariantManagerContent.PropertyValue
// 0x0190 (0x01B8 - 0x0028)
class UPropertyValue : public UObject
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0028(0x0060) MISSED OFFSET
	unsigned char                                      UnknownData01[0x10];                                      // 0x0028(0x0010) UNKNOWN PROPERTY: Properties
	TArray<int>                                        PropertyIndices;                                          // 0x0098(0x0010) (ZeroConstructor, Deprecated)
	TArray<struct FCapturedPropSegment>                CapturedPropSegments;                                     // 0x00A8(0x0010) (ZeroConstructor)
	struct FString                                     FullDisplayString;                                        // 0x00B8(0x0010) (ZeroConstructor)
	struct FName                                       PropertySetterName;                                       // 0x00C8(0x0008) (ZeroConstructor, IsPlainOldData)
	TMap<struct FString, struct FString>               PropertySetterParameterDefaults;                          // 0x00D0(0x0050)
	bool                                               bHasRecordedData;                                         // 0x0120(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0121(0x0007) MISSED OFFSET
	class UClass*                                      LeafPropertyClass;                                        // 0x0128(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0130(0x0008) MISSED OFFSET
	TArray<unsigned char>                              ValueBytes;                                               // 0x0138(0x0010) (ZeroConstructor)
	enum class EPropertyValueCategory                  PropCategory;                                             // 0x0148(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6F];                                      // 0x0149(0x006F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class VariantManagerContent.PropertyValue"));
		return ptr;
	}


	bool HasRecordedData();//Offset:Discovery.exe+0x2CFE1B0
	struct FText GetPropertyTooltip();//Offset:Discovery.exe+0x2CFE250
	struct FString GetFullDisplayString();//Offset:Discovery.exe+0x2CFE1E0
};


// Class VariantManagerContent.PropertyValueTransform
// 0x0000 (0x01B8 - 0x01B8)
class UPropertyValueTransform : public UPropertyValue
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class VariantManagerContent.PropertyValueTransform"));
		return ptr;
	}

};


// Class VariantManagerContent.PropertyValueVisibility
// 0x0000 (0x01B8 - 0x01B8)
class UPropertyValueVisibility : public UPropertyValue
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class VariantManagerContent.PropertyValueVisibility"));
		return ptr;
	}

};


// Class VariantManagerContent.PropertyValueColor
// 0x0000 (0x01B8 - 0x01B8)
class UPropertyValueColor : public UPropertyValue
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class VariantManagerContent.PropertyValueColor"));
		return ptr;
	}

};


// Class VariantManagerContent.PropertyValueMaterial
// 0x0000 (0x01B8 - 0x01B8)
class UPropertyValueMaterial : public UPropertyValue
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class VariantManagerContent.PropertyValueMaterial"));
		return ptr;
	}

};


// Class VariantManagerContent.PropertyValueOption
// 0x0000 (0x01B8 - 0x01B8)
class UPropertyValueOption : public UPropertyValue
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class VariantManagerContent.PropertyValueOption"));
		return ptr;
	}

};


// Class VariantManagerContent.PropertyValueSoftObject
// 0x0000 (0x01B8 - 0x01B8)
class UPropertyValueSoftObject : public UPropertyValue
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class VariantManagerContent.PropertyValueSoftObject"));
		return ptr;
	}

};


// Class VariantManagerContent.SwitchActor
// 0x0028 (0x02F0 - 0x02C8)
class ASwitchActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x02C8(0x0018) MISSED OFFSET
	class USceneComponent*                             SceneComponent;                                           // 0x02E0(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	int                                                LastSelectedOption;                                       // 0x02E8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02EC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class VariantManagerContent.SwitchActor"));
		return ptr;
	}


	void SelectOption(int OptionIndex);//Offset:Discovery.exe+0x2CFEC40
	int GetSelectedOption();//Offset:Discovery.exe+0x2CFECE0
	TArray<class AActor*> GetOptions();//Offset:Discovery.exe+0x2CFED10
};


// Class VariantManagerContent.Variant
// 0x0058 (0x0080 - 0x0028)
class UVariant : public UObject
{
public:
	TArray<struct FVariantDependency>                  Dependencies;                                             // 0x0028(0x0010) (ZeroConstructor)
	struct FText                                       DisplayText;                                              // 0x0038(0x0018) (Deprecated)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0050(0x0018) MISSED OFFSET
	TArray<class UVariantObjectBinding*>               ObjectBindings;                                           // 0x0068(0x0010) (ExportObject, ZeroConstructor)
	class UTexture2D*                                  Thumbnail;                                                // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class VariantManagerContent.Variant"));
		return ptr;
	}


	void SwitchOn();//Offset:Discovery.exe+0x2CFFCC0
	void SetThumbnailFromTexture(class UTexture2D* NewThumbnail);//Offset:Discovery.exe+0x2CFFBF0
	void SetThumbnailFromFile(const struct FString& FilePath);//Offset:Discovery.exe+0x2CFFB00
	void SetThumbnailFromEditorViewport();//Offset:Discovery.exe+0x155C060
	void SetThumbnailFromCamera(class UObject* WorldContextObject, const struct FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma);//Offset:Discovery.exe+0x2CFF8D0
	void SetDisplayText(const struct FText& NewDisplayText);//Offset:Discovery.exe+0x2CFFE40
	void SetDependency(int Index, struct FVariantDependency* Dependency);//Offset:Discovery.exe+0x2CFF340
	bool IsActive();//Offset:Discovery.exe+0x2CFFC90
	class UTexture2D* GetThumbnail();//Offset:Discovery.exe+0x2CFF8A0
	class UVariantSet* GetParent();//Offset:Discovery.exe+0x2CFFF20
	int GetNumDependencies();//Offset:Discovery.exe+0x2CFF270
	int GetNumActors();//Offset:Discovery.exe+0x2CFFD80
	struct FText GetDisplayText();//Offset:Discovery.exe+0x2CFFDB0
	TArray<class UVariant*> GetDependents(class ULevelVariantSets* LevelVariantSets, bool bOnlyEnabledDependencies);//Offset:Discovery.exe+0x2CFF770
	struct FVariantDependency GetDependency(int Index);//Offset:Discovery.exe+0x2CFF4D0
	class AActor* GetActor(int ActorIndex);//Offset:Discovery.exe+0x2CFFCE0
	void DeleteDependency(int Index);//Offset:Discovery.exe+0x2CFF2A0
	int AddDependency(struct FVariantDependency* Dependency);//Offset:Discovery.exe+0x2CFF630
};


// Class VariantManagerContent.VariantObjectBinding
// 0x0068 (0x0090 - 0x0028)
class UVariantObjectBinding : public UObject
{
public:
	struct FString                                     CachedActorLabel;                                         // 0x0028(0x0010) (ZeroConstructor)
	struct FSoftObjectPath                             ObjectPtr;                                                // 0x0038(0x0018) (ZeroConstructor)
	TLazyObjectPtr<class UObject>                      LazyObjectPtr;                                            // 0x0050(0x001C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	TArray<class UPropertyValue*>                      CapturedProperties;                                       // 0x0070(0x0010) (ZeroConstructor)
	TArray<struct FFunctionCaller>                     FunctionCallers;                                          // 0x0080(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class VariantManagerContent.VariantObjectBinding"));
		return ptr;
	}

};


// Class VariantManagerContent.VariantSet
// 0x0050 (0x0078 - 0x0028)
class UVariantSet : public UObject
{
public:
	struct FText                                       DisplayText;                                              // 0x0028(0x0018) (Deprecated)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0040(0x0018) MISSED OFFSET
	bool                                               bExpanded;                                                // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
	TArray<class UVariant*>                            Variants;                                                 // 0x0060(0x0010) (ZeroConstructor)
	class UTexture2D*                                  Thumbnail;                                                // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class VariantManagerContent.VariantSet"));
		return ptr;
	}


	void SetThumbnailFromTexture(class UTexture2D* NewThumbnail);//Offset:Discovery.exe+0x2D00E40
	void SetThumbnailFromFile(const struct FString& FilePath);//Offset:Discovery.exe+0x2D00D50
	void SetThumbnailFromEditorViewport();//Offset:Discovery.exe+0x155C060
	void SetThumbnailFromCamera(class UObject* WorldContextObject, const struct FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma);//Offset:Discovery.exe+0x2D00B20
	void SetDisplayText(const struct FText& NewDisplayText);//Offset:Discovery.exe+0x2D01140
	class UVariant* GetVariantByName(const struct FString& VariantName);//Offset:Discovery.exe+0x2D00EE0
	class UVariant* GetVariant(int VariantIndex);//Offset:Discovery.exe+0x2D00FE0
	class UTexture2D* GetThumbnail();//Offset:Discovery.exe+0x147F810
	class ULevelVariantSets* GetParent();//Offset:Discovery.exe+0x2D01220
	int GetNumVariants();//Offset:Discovery.exe+0x2D01080
	struct FText GetDisplayText();//Offset:Discovery.exe+0x2D010B0
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
