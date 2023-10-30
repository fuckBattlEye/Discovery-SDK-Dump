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

// Class EmbarkCompositeMesh.CompositeMeshComponent
// 0x0030 (0x0650 - 0x0620)
class UCompositeMeshComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      NumParts;                                                 // 0x0620(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bOverrideMaxLOD : 1;                                      // 0x0621(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0622(0x0002) MISSED OFFSET
	int                                                MaxLOD;                                                   // 0x0624(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInterface*>                  DisabledMaterialsWithOriginalPartTransforms;              // 0x0628(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0638(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkCompositeMesh.CompositeMeshComponent"));
		return ptr;
	}


	void SetPartTransform(unsigned char PartIndex, const struct FTransform& WorldTransform);//Offset:Discovery.exe+0x1D439E0
	void HidePart(unsigned char PartIndex);//Offset:Discovery.exe+0x1D43950
};


// Class EmbarkCompositeMesh.CompositeMeshActor
// 0x0008 (0x02D0 - 0x02C8)
class ACompositeMeshActor : public AActor
{
public:
	class UCompositeMeshComponent*                     CompositeMeshComponent;                                   // 0x02C8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkCompositeMesh.CompositeMeshActor"));
		return ptr;
	}

};


// Class EmbarkCompositeMesh.CompositeMeshSubsystem
// 0x00C8 (0x00F8 - 0x0030)
class UCompositeMeshSubsystem : public UEngineSubsystem
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0030(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class EmbarkCompositeMesh.CompositeMeshSubsystem"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
