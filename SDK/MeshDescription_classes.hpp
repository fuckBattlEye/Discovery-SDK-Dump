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

// Class MeshDescription.MeshDescriptionBase
// 0x02C8 (0x02F0 - 0x0028)
class UMeshDescriptionBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x2C8];                                     // 0x0028(0x02C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MeshDescription.MeshDescriptionBase"));
		return ptr;
	}


	void SetVertexPosition(const struct FVertexID& VertexID, const struct FVector& Position);//Offset:Discovery.exe+0x4CBFD90
	void SetPolygonVertexInstances(const struct FPolygonID& PolygonID, TArray<struct FVertexInstanceID> VertexInstanceIDs);//Offset:Discovery.exe+0x4CBDF90
	void SetPolygonPolygonGroup(const struct FPolygonID& PolygonID, const struct FPolygonGroupID& PolygonGroupID);//Offset:Discovery.exe+0x4CBDEB0
	void ReversePolygonFacing(const struct FPolygonID& PolygonID);//Offset:Discovery.exe+0x4CBDE10
	void ReserveNewVertices(int NumberOfNewVertices);//Offset:Discovery.exe+0x4CC2370
	void ReserveNewVertexInstances(int NumberOfNewVertexInstances);//Offset:Discovery.exe+0x4CC1CD0
	void ReserveNewTriangles(int NumberOfNewTriangles);//Offset:Discovery.exe+0x4CC1820
	void ReserveNewPolygons(int NumberOfNewPolygons);//Offset:Discovery.exe+0x4CC1170
	void ReserveNewPolygonGroups(int NumberOfNewPolygonGroups);//Offset:Discovery.exe+0x4CC0AC0
	void ReserveNewEdges(int NumberOfNewEdges);//Offset:Discovery.exe+0x4CC1CD0
	bool IsVertexValid(const struct FVertexID& VertexID);//Offset:Discovery.exe+0x4CC2140
	bool IsVertexOrphaned(const struct FVertexID& VertexID);//Offset:Discovery.exe+0x4CC07A0
	bool IsVertexInstanceValid(const struct FVertexInstanceID& VertexInstanceID);//Offset:Discovery.exe+0x4CC1DC0
	bool IsTriangleValid(const struct FTriangleID& TriangleID);//Offset:Discovery.exe+0x4CC1260
	bool IsTrianglePartOfNgon(const struct FTriangleID& TriangleID);//Offset:Discovery.exe+0x4CBEFF0
	bool IsPolygonValid(const struct FPolygonID& PolygonID);//Offset:Discovery.exe+0x4CC0BB0
	bool IsPolygonGroupValid(const struct FPolygonGroupID& PolygonGroupID);//Offset:Discovery.exe+0x4CC0890
	bool IsEmpty();//Offset:Discovery.exe+0x4CC2410
	bool IsEdgeValid(const struct FEdgeID& EdgeID);//Offset:Discovery.exe+0x4CC1910
	bool IsEdgeInternalToPolygon(const struct FEdgeID& EdgeID, const struct FPolygonID& PolygonID);//Offset:Discovery.exe+0x4CBF720
	bool IsEdgeInternal(const struct FEdgeID& EdgeID);//Offset:Discovery.exe+0x4CBF810
	void GetVertexVertexInstances(const struct FVertexID& VertexID, TArray<struct FVertexInstanceID>* OutVertexInstanceIDs);//Offset:Discovery.exe+0x4CC0410
	struct FVector GetVertexPosition(const struct FVertexID& VertexID);//Offset:Discovery.exe+0x4CBFE80
	struct FEdgeID GetVertexPairEdge(const struct FVertexID& VertexID0, const struct FVertexID& VertexID1);//Offset:Discovery.exe+0x4CC06B0
	struct FVertexID GetVertexInstanceVertex(const struct FVertexInstanceID& VertexInstanceID);//Offset:Discovery.exe+0x4CBFCE0
	struct FEdgeID GetVertexInstancePairEdge(const struct FVertexInstanceID& VertexInstanceID0, const struct FVertexInstanceID& VertexInstanceID1);//Offset:Discovery.exe+0x4CBFBF0
	struct FVertexInstanceID GetVertexInstanceForTriangleVertex(const struct FTriangleID& TriangleID, const struct FVertexID& VertexID);//Offset:Discovery.exe+0x4CBEA10
	struct FVertexInstanceID GetVertexInstanceForPolygonVertex(const struct FPolygonID& PolygonID, const struct FVertexID& VertexID);//Offset:Discovery.exe+0x4CBE090
	int GetVertexInstanceCount();//Offset:Discovery.exe+0x4CC1D70
	void GetVertexInstanceConnectedTriangles(const struct FVertexInstanceID& VertexInstanceID, TArray<struct FTriangleID>* OutConnectedTriangleIDs);//Offset:Discovery.exe+0x4CBFAF0
	void GetVertexInstanceConnectedPolygons(const struct FVertexInstanceID& VertexInstanceID, TArray<struct FPolygonID>* OutConnectedPolygonIDs);//Offset:Discovery.exe+0x4CBF950
	int GetVertexCount();//Offset:Discovery.exe+0x4CC20F0
	void GetVertexConnectedTriangles(const struct FVertexID& VertexID, TArray<struct FTriangleID>* OutConnectedTriangleIDs);//Offset:Discovery.exe+0x4CC0270
	void GetVertexConnectedPolygons(const struct FVertexID& VertexID, TArray<struct FPolygonID>* OutConnectedPolygonIDs);//Offset:Discovery.exe+0x4CC00D0
	void GetVertexConnectedEdges(const struct FVertexID& VertexID, TArray<struct FEdgeID>* OutEdgeIDs);//Offset:Discovery.exe+0x4CC05B0
	void GetVertexAdjacentVertices(const struct FVertexID& VertexID, TArray<struct FVertexID>* OutAdjacentVertexIDs);//Offset:Discovery.exe+0x4CBFF30
	void GetTriangleVertices(const struct FTriangleID& TriangleID, TArray<struct FVertexID>* OutVertexIDs);//Offset:Discovery.exe+0x4CBED00
	void GetTriangleVertexInstances(const struct FTriangleID& TriangleID, TArray<struct FVertexInstanceID>* OutVertexInstanceIDs);//Offset:Discovery.exe+0x4CBEEF0
	struct FVertexInstanceID GetTriangleVertexInstance(const struct FTriangleID& TriangleID, int Index);//Offset:Discovery.exe+0x4CBEE00
	struct FPolygonGroupID GetTrianglePolygonGroup(const struct FTriangleID& TriangleID);//Offset:Discovery.exe+0x4CBF090
	struct FPolygonID GetTrianglePolygon(const struct FTriangleID& TriangleID);//Offset:Discovery.exe+0x4CBF140
	void GetTriangleEdges(const struct FTriangleID& TriangleID, TArray<struct FEdgeID>* OutEdgeIDs);//Offset:Discovery.exe+0x4CBEC00
	int GetTriangleCount();//Offset:Discovery.exe+0x4CC1210
	void GetTriangleAdjacentTriangles(const struct FTriangleID& TriangleID, TArray<struct FTriangleID>* OutTriangleIDs);//Offset:Discovery.exe+0x4CBEB00
	void GetPolygonVertices(const struct FPolygonID& PolygonID, TArray<struct FVertexID>* OutVertexIDs);//Offset:Discovery.exe+0x4CBE5D0
	void GetPolygonVertexInstances(const struct FPolygonID& PolygonID, TArray<struct FVertexInstanceID>* OutVertexInstanceIDs);//Offset:Discovery.exe+0x4CBE770
	void GetPolygonTriangles(const struct FPolygonID& PolygonID, TArray<struct FTriangleID>* OutTriangleIDs);//Offset:Discovery.exe+0x4CBE910
	struct FPolygonGroupID GetPolygonPolygonGroup(const struct FPolygonID& PolygonID);//Offset:Discovery.exe+0x4CBE180
	void GetPolygonPerimeterEdges(const struct FPolygonID& PolygonID, TArray<struct FEdgeID>* OutEdgeIDs);//Offset:Discovery.exe+0x4CBE4D0
	void GetPolygonInternalEdges(const struct FPolygonID& PolygonID, TArray<struct FEdgeID>* OutEdgeIDs);//Offset:Discovery.exe+0x4CBE3D0
	void GetPolygonGroupPolygons(const struct FPolygonGroupID& PolygonGroupID, TArray<struct FPolygonID>* OutPolygonIDs);//Offset:Discovery.exe+0x4CBDC70
	int GetPolygonGroupCount();//Offset:Discovery.exe+0x4CC0840
	int GetPolygonCount();//Offset:Discovery.exe+0x4CC0B60
	void GetPolygonAdjacentPolygons(const struct FPolygonID& PolygonID, TArray<struct FPolygonID>* OutPolygonIDs);//Offset:Discovery.exe+0x4CBE230
	int GetNumVertexVertexInstances(const struct FVertexID& VertexID);//Offset:Discovery.exe+0x4CC0370
	int GetNumVertexInstanceConnectedTriangles(const struct FVertexInstanceID& VertexInstanceID);//Offset:Discovery.exe+0x4CBFA50
	int GetNumVertexInstanceConnectedPolygons(const struct FVertexInstanceID& VertexInstanceID);//Offset:Discovery.exe+0x4CBF8B0
	int GetNumVertexConnectedTriangles(const struct FVertexID& VertexID);//Offset:Discovery.exe+0x4CC01D0
	int GetNumVertexConnectedPolygons(const struct FVertexID& VertexID);//Offset:Discovery.exe+0x4CC0030
	int GetNumVertexConnectedEdges(const struct FVertexID& VertexID);//Offset:Discovery.exe+0x4CC0510
	int GetNumPolygonVertices(const struct FPolygonID& PolygonID);//Offset:Discovery.exe+0x4CBE6D0
	int GetNumPolygonTriangles(const struct FPolygonID& PolygonID);//Offset:Discovery.exe+0x4CBE870
	int GetNumPolygonInternalEdges(const struct FPolygonID& PolygonID);//Offset:Discovery.exe+0x4CBE330
	int GetNumPolygonGroupPolygons(const struct FPolygonGroupID& PolygonGroupID);//Offset:Discovery.exe+0x4CBDBD0
	int GetNumEdgeConnectedTriangles(const struct FEdgeID& EdgeID);//Offset:Discovery.exe+0x4CBF580
	int GetNumEdgeConnectedPolygons(const struct FEdgeID& EdgeID);//Offset:Discovery.exe+0x4CBF3E0
	void GetEdgeVertices(const struct FEdgeID& EdgeID, TArray<struct FVertexID>* OutVertexIDs);//Offset:Discovery.exe+0x4CBF1F0
	struct FVertexID GetEdgeVertex(const struct FEdgeID& EdgeID, int VertexNumber);//Offset:Discovery.exe+0x4CBF2F0
	int GetEdgeCount();//Offset:Discovery.exe+0x4CC18C0
	void GetEdgeConnectedTriangles(const struct FEdgeID& EdgeID, TArray<struct FTriangleID>* OutConnectedTriangleIDs);//Offset:Discovery.exe+0x4CBF620
	void GetEdgeConnectedPolygons(const struct FEdgeID& EdgeID, TArray<struct FPolygonID>* OutConnectedPolygonIDs);//Offset:Discovery.exe+0x4CBF480
	void Empty();//Offset:Discovery.exe+0x4CC2440
	void DeleteVertexInstance(const struct FVertexInstanceID& VertexInstanceID, TArray<struct FVertexID>* OrphanedVertices);//Offset:Discovery.exe+0x4CC1E60
	void DeleteVertex(const struct FVertexID& VertexID);//Offset:Discovery.exe+0x4CC21E0
	void DeleteTriangle(const struct FTriangleID& TriangleID, TArray<struct FEdgeID>* OrphanedEdges, TArray<struct FVertexInstanceID>* OrphanedVertexInstances, TArray<struct FPolygonGroupID>* OrphanedPolygonGroupsPtr);//Offset:Discovery.exe+0x4CC1300
	void DeletePolygonGroup(const struct FPolygonGroupID& PolygonGroupID);//Offset:Discovery.exe+0x4CC0930
	void DeletePolygon(const struct FPolygonID& PolygonID, TArray<struct FEdgeID>* OrphanedEdges, TArray<struct FVertexInstanceID>* OrphanedVertexInstances, TArray<struct FPolygonGroupID>* OrphanedPolygonGroups);//Offset:Discovery.exe+0x4CC0C50
	void DeleteEdge(const struct FEdgeID& EdgeID, TArray<struct FVertexID>* OrphanedVertices);//Offset:Discovery.exe+0x4CC19B0
	void CreateVertexWithID(const struct FVertexID& VertexID);//Offset:Discovery.exe+0x4CC2280
	void CreateVertexInstanceWithID(const struct FVertexInstanceID& VertexInstanceID, const struct FVertexID& VertexID);//Offset:Discovery.exe+0x4CC1F60
	struct FVertexInstanceID CreateVertexInstance(const struct FVertexID& VertexID);//Offset:Discovery.exe+0x4CC2040
	struct FVertexID CreateVertex();//Offset:Discovery.exe+0x4CC2320
	void CreateTriangleWithID(const struct FTriangleID& TriangleID, const struct FPolygonGroupID& PolygonGroupID, TArray<struct FVertexInstanceID> VertexInstanceIDs, TArray<struct FEdgeID>* NewEdgeIDs);//Offset:Discovery.exe+0x4CC14E0
	struct FTriangleID CreateTriangle(const struct FPolygonGroupID& PolygonGroupID, TArray<struct FVertexInstanceID> VertexInstanceIDs, TArray<struct FEdgeID>* NewEdgeIDs);//Offset:Discovery.exe+0x4CC16A0
	void CreatePolygonWithID(const struct FPolygonID& PolygonID, const struct FPolygonGroupID& PolygonGroupID, TArray<struct FVertexInstanceID>* VertexInstanceIDs, TArray<struct FEdgeID>* NewEdgeIDs);//Offset:Discovery.exe+0x4CC0E30
	void CreatePolygonGroupWithID(const struct FPolygonGroupID& PolygonGroupID);//Offset:Discovery.exe+0x4CC09D0
	struct FPolygonGroupID CreatePolygonGroup();//Offset:Discovery.exe+0x4CC0A70
	struct FPolygonID CreatePolygon(const struct FPolygonGroupID& PolygonGroupID, TArray<struct FVertexInstanceID>* VertexInstanceIDs, TArray<struct FEdgeID>* NewEdgeIDs);//Offset:Discovery.exe+0x4CC0FF0
	void CreateEdgeWithID(const struct FEdgeID& EdgeID, const struct FVertexID& VertexID0, const struct FVertexID& VertexID1);//Offset:Discovery.exe+0x4CC1AB0
	struct FEdgeID CreateEdge(const struct FVertexID& VertexID0, const struct FVertexID& VertexID1);//Offset:Discovery.exe+0x4CC1BE0
	void ComputePolygonTriangulation(const struct FPolygonID& PolygonID);//Offset:Discovery.exe+0x4CBDD70
};


// Class MeshDescription.MeshDescriptionBaseBulkData
// 0x0000 (0x0028 - 0x0028)
class UMeshDescriptionBaseBulkData : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class MeshDescription.MeshDescriptionBaseBulkData"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
