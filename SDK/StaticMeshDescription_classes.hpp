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

// Class StaticMeshDescription.StaticMeshDescription
// 0x0000 (0x02F0 - 0x02F0)
class UStaticMeshDescription : public UMeshDescriptionBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class StaticMeshDescription.StaticMeshDescription"));
		return ptr;
	}


	void SetVertexInstanceUV(const struct FVertexInstanceID& VertexInstanceID, const struct FVector2D& UV, int UVIndex);//Offset:Discovery.exe+0x4CCDF80
	void SetPolygonGroupMaterialSlotName(const struct FPolygonGroupID& PolygonGroupID, const struct FName& SlotName);//Offset:Discovery.exe+0x4CCDA80
	struct FVector2D GetVertexInstanceUV(const struct FVertexInstanceID& VertexInstanceID, int UVIndex);//Offset:Discovery.exe+0x4CCE0B0
	void CreateCube(const struct FVector& Center, const struct FVector& HalfExtents, const struct FPolygonGroupID& PolygonGroup, struct FPolygonID* PolygonID_PlusX, struct FPolygonID* PolygonID_MinusX, struct FPolygonID* PolygonID_PlusY, struct FPolygonID* PolygonID_MinusY, struct FPolygonID* PolygonID_PlusZ, struct FPolygonID* PolygonID_MinusZ);//Offset:Discovery.exe+0x4CCDB70
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
