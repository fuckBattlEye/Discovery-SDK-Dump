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

// Class MRMesh.MeshReconstructorBase
// 0x0000 (0x0028 - 0x0028)
class UMeshReconstructorBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MRMesh.MeshReconstructorBase"));
		return ptr;
	}


	void StopReconstruction();//Offset:Discovery.exe+0x14618E0
	void StartReconstruction();//Offset:Discovery.exe+0x191D9E0
	void PauseReconstruction();//Offset:Discovery.exe+0x1DB5730
	bool IsReconstructionStarted();//Offset:Discovery.exe+0x11BE930
	bool IsReconstructionPaused();//Offset:Discovery.exe+0x1461930
	void DisconnectMRMesh();//Offset:Discovery.exe+0x1DC09C0
	void ConnectMRMesh(class UMRMeshComponent* Mesh);//Offset:Discovery.exe+0x25094E0
};


// Class MRMesh.MockDataMeshTrackerComponent
// 0x0070 (0x0340 - 0x02D0)
class UMockDataMeshTrackerComponent : public USceneComponent
{
public:
	struct FScriptMulticastDelegate                    OnMeshTrackerUpdated;                                     // 0x02D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               ScanWorld;                                                // 0x02E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               RequestNormals;                                           // 0x02E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               RequestVertexConfidence;                                  // 0x02E2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	enum class EMeshTrackerVertexColorMode             VertexColorMode;                                          // 0x02E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02E4(0x0004) MISSED OFFSET
	TArray<struct FColor>                              BlockVertexColors;                                        // 0x02E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FLinearColor                                VertexColorFromConfidenceZero;                            // 0x02F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                VertexColorFromConfidenceOne;                             // 0x0308(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UpdateInterval;                                           // 0x0318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x031C(0x0004) MISSED OFFSET
	class UMRMeshComponent*                            MRMesh;                                                   // 0x0320(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0328(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MRMesh.MockDataMeshTrackerComponent"));
		return ptr;
	}


	void OnMockDataMeshTrackerUpdated__DelegateSignature(int Index, TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector> Normals, TArray<float> Confidence);//Offset:Discovery.exe+0x327F8B0
	void DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr);//Offset:Discovery.exe+0x44A12A0
	void ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr);//Offset:Discovery.exe+0x44A1340
};


// Class MRMesh.MRMeshBodyHolder
// 0x0208 (0x0230 - 0x0028)
class UMRMeshBodyHolder : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UBodySetup*                                  BodySetup;                                                // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FBodyInstance                               BodyInstance;                                             // 0x0038(0x0190) (Transient)
	unsigned char                                      UnknownData01[0x68];                                      // 0x01C8(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MRMesh.MRMeshBodyHolder"));
		return ptr;
	}

};


// Class MRMesh.MRMeshComponent
// 0x0080 (0x0610 - 0x0590)
class UMRMeshComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0590(0x0008) MISSED OFFSET
	class UMaterialInterface*                          Material;                                                 // 0x0598(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          WireframeMaterial;                                        // 0x05A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCreateMeshProxySections;                                 // 0x05A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUpdateNavMeshOnMeshUpdate;                               // 0x05A9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x05AA(0x0001) MISSED OFFSET
	bool                                               bNeverCreateCollisionMesh;                                // 0x05AB(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x44];                                      // 0x05AC(0x0044) MISSED OFFSET
	TArray<class UMRMeshBodyHolder*>                   BodyHolders;                                              // 0x05F0(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0600(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MRMesh.MRMeshComponent"));
		return ptr;
	}


	void SetWireframeMaterial(class UMaterialInterface* InMaterial);//Offset:Discovery.exe+0x2348E60
	void SetWireframeColor(const struct FLinearColor& InColor);//Offset:Discovery.exe+0x44A1870
	void SetUseWireframe(bool bUseWireframe);//Offset:Discovery.exe+0x44A1940
	void SetEnableMeshOcclusion(bool bEnable);//Offset:Discovery.exe+0x44A1A10
	void RequestNavMeshUpdate();//Offset:Discovery.exe+0x44A1AE0
	bool IsConnected();//Offset:Discovery.exe+0x44A1B20
	struct FLinearColor GetWireframeColor();//Offset:Discovery.exe+0x44A1840
	bool GetUseWireframe();//Offset:Discovery.exe+0x44A1910
	bool GetEnableMeshOcclusion();//Offset:Discovery.exe+0x44A19E0
	void ForceNavMeshUpdate();//Offset:Discovery.exe+0x44A1B00
	void Clear();//Offset:Discovery.exe+0x44A1AB0
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
