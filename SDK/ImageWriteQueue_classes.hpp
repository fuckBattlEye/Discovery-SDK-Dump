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

// Class ImageWriteQueue.ImageWriteBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UImageWriteBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ImageWriteQueue.ImageWriteBlueprintLibrary"));
		return ptr;
	}


	void STATIC_ExportToDisk(class UTexture* Texture, const struct FString& Filename, const struct FImageWriteOptions& Options);//Offset:Discovery.exe+0x3740160
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
