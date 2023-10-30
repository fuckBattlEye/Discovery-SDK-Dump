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

// Class ProceduralMeshComponent.KismetProceduralMeshLibrary
// 0x0000 (0x0028 - 0x0028)
class UKismetProceduralMeshLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ProceduralMeshComponent.KismetProceduralMeshLibrary"));
		return ptr;
	}


	void STATIC_SliceProceduralMesh(class UProceduralMeshComponent* InProcMesh, const struct FVector& PlanePosition, const struct FVector& PlaneNormal, bool bCreateOtherHalf, enum class EProcMeshSliceCapOption CapOption, class UMaterialInterface* CapMaterial, class UProceduralMeshComponent** OutOtherHalfProcMesh);//Offset:Discovery.exe+0x2A3E6F0
	void STATIC_GetSectionFromStaticMesh(class UStaticMesh* InMesh, int LODIndex, int SectionIndex, TArray<struct FVector>* Vertices, TArray<int>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UVs, TArray<struct FProcMeshTangent>* Tangents);//Offset:Discovery.exe+0x2A3EEA0
	void STATIC_GetSectionFromProceduralMesh(class UProceduralMeshComponent* InProcMesh, int SectionIndex, TArray<struct FVector>* Vertices, TArray<int>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UVs, TArray<struct FProcMeshTangent>* Tangents);//Offset:Discovery.exe+0x2A3E9E0
	void STATIC_GenerateBoxMesh(const struct FVector& BoxRadius, TArray<struct FVector>* Vertices, TArray<int>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UVs, TArray<struct FProcMeshTangent>* Tangents);//Offset:Discovery.exe+0x2A3FDB0
	void STATIC_CreateGridMeshWelded(int NumX, int NumY, float GridSpacing, TArray<int>* Triangles, TArray<struct FVector>* Vertices, TArray<struct FVector2D>* UVs);//Offset:Discovery.exe+0x2A3F540
	void STATIC_CreateGridMeshTriangles(int NumX, int NumY, bool bWinding, TArray<int>* Triangles);//Offset:Discovery.exe+0x2A3F7C0
	void STATIC_CreateGridMeshSplit(int NumX, int NumY, float GridSpacing, TArray<int>* Triangles, TArray<struct FVector>* Vertices, TArray<struct FVector2D>* UVs, TArray<struct FVector2D>* UV1s);//Offset:Discovery.exe+0x2A3F230
	void STATIC_CopyProceduralMeshFromStaticMeshComponent(class UStaticMeshComponent* StaticMeshComponent, int LODIndex, class UProceduralMeshComponent* ProcMeshComponent, bool bCreateCollision);//Offset:Discovery.exe+0x2A3ED20
	void STATIC_ConvertQuadToTriangles(int Vert0, int Vert1, int Vert2, int Vert3, TArray<int>* Triangles);//Offset:Discovery.exe+0x2A3F950
	void STATIC_CalculateTangentsForMesh(TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector2D> UVs, TArray<struct FVector>* Normals, TArray<struct FProcMeshTangent>* Tangents);//Offset:Discovery.exe+0x2A3FB30
};


// Class ProceduralMeshComponent.ProceduralMeshComponent
// 0x0080 (0x0640 - 0x05C0)
class UProceduralMeshComponent : public UMeshComponent
{
public:
	bool                                               bUseComplexAsSimpleCollision;                             // 0x05C0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bUseAsyncCooking;                                         // 0x05C1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x05C2(0x0006) MISSED OFFSET
	class UBodySetup*                                  ProcMeshBodySetup;                                        // 0x05C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FProcMeshSection>                    ProcMeshSections;                                         // 0x05D0(0x0010) (ZeroConstructor)
	TArray<struct FKConvexElem>                        CollisionConvexElems;                                     // 0x05E0(0x0010) (ZeroConstructor)
	struct FBoxSphereBounds                            LocalBounds;                                              // 0x05F0(0x0038) (ZeroConstructor, IsPlainOldData)
	TArray<class UBodySetup*>                          AsyncBodySetupQueue;                                      // 0x0628(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0638(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ProceduralMeshComponent.ProceduralMeshComponent"));
		return ptr;
	}


	void UpdateMeshSection_LinearColor(int SectionIndex, TArray<struct FVector> Vertices, TArray<struct FVector> Normals, TArray<struct FVector2D> UV0, TArray<struct FVector2D> UV1, TArray<struct FVector2D> UV2, TArray<struct FVector2D> UV3, TArray<struct FLinearColor> VertexColors, TArray<struct FProcMeshTangent> Tangents);//Offset:Discovery.exe+0x2A40E00
	void UpdateMeshSection(int SectionIndex, TArray<struct FVector> Vertices, TArray<struct FVector> Normals, TArray<struct FVector2D> UV0, TArray<struct FColor> VertexColors, TArray<struct FProcMeshTangent> Tangents);//Offset:Discovery.exe+0x2A41280
	void SetMeshSectionVisible(int SectionIndex, bool bNewVisibility);//Offset:Discovery.exe+0x2A40C50
	bool IsMeshSectionVisible(int SectionIndex);//Offset:Discovery.exe+0x2A40BB0
	int GetNumSections();//Offset:Discovery.exe+0x2A40B80
	void CreateMeshSection_LinearColor(int SectionIndex, TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector> Normals, TArray<struct FVector2D> UV0, TArray<struct FVector2D> UV1, TArray<struct FVector2D> UV2, TArray<struct FVector2D> UV3, TArray<struct FLinearColor> VertexColors, TArray<struct FProcMeshTangent> Tangents, bool bCreateCollision);//Offset:Discovery.exe+0x2A41620
	void CreateMeshSection(int SectionIndex, TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector> Normals, TArray<struct FVector2D> UV0, TArray<struct FColor> VertexColors, TArray<struct FProcMeshTangent> Tangents, bool bCreateCollision);//Offset:Discovery.exe+0x2A41BA0
	void ClearMeshSection(int SectionIndex);//Offset:Discovery.exe+0x2A40D60
	void ClearCollisionConvexMeshes();//Offset:Discovery.exe+0x2A40A70
	void ClearAllMeshSections();//Offset:Discovery.exe+0x2A40D40
	void AddCollisionConvexMesh(TArray<struct FVector> ConvexVerts);//Offset:Discovery.exe+0x2A40A90
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
