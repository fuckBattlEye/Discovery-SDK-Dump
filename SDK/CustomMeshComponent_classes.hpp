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

// Class CustomMeshComponent.CustomMeshComponent
// 0x0010 (0x05D0 - 0x05C0)
class UCustomMeshComponent : public UMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x05C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class CustomMeshComponent.CustomMeshComponent"));
		return ptr;
	}


	bool SetCustomMeshTriangles(TArray<struct FCustomMeshTriangle> Triangles);//Offset:Discovery.exe+0x2ED4AF0
	void ClearCustomMeshTriangles();//Offset:Discovery.exe+0x2ED4A20
	void AddCustomMeshTriangles(TArray<struct FCustomMeshTriangle> Triangles);//Offset:Discovery.exe+0x2ED4A40
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
