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

// Class OpenColorIO.OpenColorIOBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UOpenColorIOBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OpenColorIO.OpenColorIOBlueprintLibrary"));
		return ptr;
	}


	bool STATIC_ApplyColorSpaceTransform(class UObject* WorldContextObject, const struct FOpenColorIOColorConversionSettings& ConversionSettings, class UTexture* InputTexture, class UTextureRenderTarget2D* OutputRenderTarget);//Offset:Discovery.exe+0x2E031C0
};


// Class OpenColorIO.OpenColorIOColorTransform
// 0x0078 (0x00A0 - 0x0028)
class UOpenColorIOColorTransform : public UObject
{
public:
	class UOpenColorIOConfiguration*                   ConfigurationOwner;                                       // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     SourceColorSpace;                                         // 0x0030(0x0010) (Edit, ZeroConstructor, EditConst)
	struct FString                                     DestinationColorSpace;                                    // 0x0040(0x0010) (Edit, ZeroConstructor, EditConst)
	class UVolumeTexture*                              Lut3dTexture;                                             // 0x0050(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0058(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OpenColorIO.OpenColorIOColorTransform"));
		return ptr;
	}

};


// Class OpenColorIO.OpenColorIOConfiguration
// 0x0058 (0x0080 - 0x0028)
class UOpenColorIOConfiguration : public UObject
{
public:
	struct FFilePath                                   ConfigurationFile;                                        // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FOpenColorIOColorSpace>              DesiredColorSpaces;                                       // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UOpenColorIOColorTransform*>          ColorTransforms;                                          // 0x0048(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0058(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OpenColorIO.OpenColorIOConfiguration"));
		return ptr;
	}

};


// Class OpenColorIO.OpenColorIODisplayExtensionWrapper
// 0x0010 (0x0038 - 0x0028)
class UOpenColorIODisplayExtensionWrapper : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class OpenColorIO.OpenColorIODisplayExtensionWrapper"));
		return ptr;
	}


	void SetSceneExtensionIsActiveFunctions(TArray<struct FSceneViewExtensionIsActiveFunctor> IsActiveFunctions);//Offset:Discovery.exe+0x2E03D20
	void SetSceneExtensionIsActiveFunction(const struct FSceneViewExtensionIsActiveFunctor& IsActiveFunction);//Offset:Discovery.exe+0x2E03E10
	void SetOpenColorIOConfiguration(const struct FOpenColorIODisplayConfiguration& InDisplayConfiguration);//Offset:Discovery.exe+0x2E03EF0
	void RemoveSceneExtension();//Offset:Discovery.exe+0x2E03D00
	class UOpenColorIODisplayExtensionWrapper* STATIC_CreateOpenColorIODisplayExtension(const struct FOpenColorIODisplayConfiguration& InDisplayConfiguration, const struct FSceneViewExtensionIsActiveFunctor& IsActiveFunction);//Offset:Discovery.exe+0x2E039F0
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
