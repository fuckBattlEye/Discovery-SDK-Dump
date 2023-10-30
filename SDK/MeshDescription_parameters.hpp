#pragma once

//   SDK By:if

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../pch.h"

namespace sdk
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function MeshDescription.MeshDescriptionBase.SetVertexPosition
struct UMeshDescriptionBase_SetVertexPosition_Params
{
	struct FVertexID                                   VertexID;                                                 // (Parm)
	struct FVector                                     Position;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function MeshDescription.MeshDescriptionBase.SetPolygonVertexInstances
struct UMeshDescriptionBase_SetPolygonVertexInstances_Params
{
	struct FPolygonID                                  PolygonID;                                                // (Parm)
	TArray<struct FVertexInstanceID>                   VertexInstanceIDs;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MeshDescription.MeshDescriptionBase.SetPolygonPolygonGroup
struct UMeshDescriptionBase_SetPolygonPolygonGroup_Params
{
	struct FPolygonID                                  PolygonID;                                                // (Parm)
	struct FPolygonGroupID                             PolygonGroupID;                                           // (Parm)
};

// Function MeshDescription.MeshDescriptionBase.ReversePolygonFacing
struct UMeshDescriptionBase_ReversePolygonFacing_Params
{
	struct FPolygonID                                  PolygonID;                                                // (Parm)
};

// Function MeshDescription.MeshDescriptionBase.ReserveNewVertices
struct UMeshDescriptionBase_ReserveNewVertices_Params
{
	int                                                NumberOfNewVertices;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MeshDescription.MeshDescriptionBase.ReserveNewVertexInstances
struct UMeshDescriptionBase_ReserveNewVertexInstances_Params
{
	int                                                NumberOfNewVertexInstances;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MeshDescription.MeshDescriptionBase.ReserveNewTriangles
struct UMeshDescriptionBase_ReserveNewTriangles_Params
{
	int                                                NumberOfNewTriangles;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MeshDescription.MeshDescriptionBase.ReserveNewPolygons
struct UMeshDescriptionBase_ReserveNewPolygons_Params
{
	int                                                NumberOfNewPolygons;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MeshDescription.MeshDescriptionBase.ReserveNewPolygonGroups
struct UMeshDescriptionBase_ReserveNewPolygonGroups_Params
{
	int                                                NumberOfNewPolygonGroups;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MeshDescription.MeshDescriptionBase.ReserveNewEdges
struct UMeshDescriptionBase_ReserveNewEdges_Params
{
	int                                                NumberOfNewEdges;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MeshDescription.MeshDescriptionBase.IsVertexValid
struct UMeshDescriptionBase_IsVertexValid_Params
{
	struct FVertexID                                   VertexID;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MeshDescription.MeshDescriptionBase.IsVertexOrphaned
struct UMeshDescriptionBase_IsVertexOrphaned_Params
{
	struct FVertexID                                   VertexID;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MeshDescription.MeshDescriptionBase.IsVertexInstanceValid
struct UMeshDescriptionBase_IsVertexInstanceValid_Params
{
	struct FVertexInstanceID                           VertexInstanceID;                                         // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MeshDescription.MeshDescriptionBase.IsTriangleValid
struct UMeshDescriptionBase_IsTriangleValid_Params
{
	struct FTriangleID                                 TriangleID;                                               // (ConstParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MeshDescription.MeshDescriptionBase.IsTrianglePartOfNgon
struct UMeshDescriptionBase_IsTrianglePartOfNgon_Params
{
	struct FTriangleID                                 TriangleID;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MeshDescription.MeshDescriptionBase.IsPolygonValid
struct UMeshDescriptionBase_IsPolygonValid_Params
{
	struct FPolygonID                                  PolygonID;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MeshDescription.MeshDescriptionBase.IsPolygonGroupValid
struct UMeshDescriptionBase_IsPolygonGroupValid_Params
{
	struct FPolygonGroupID                             PolygonGroupID;                                           // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MeshDescription.MeshDescriptionBase.IsEmpty
struct UMeshDescriptionBase_IsEmpty_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MeshDescription.MeshDescriptionBase.IsEdgeValid
struct UMeshDescriptionBase_IsEdgeValid_Params
{
	struct FEdgeID                                     EdgeID;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MeshDescription.MeshDescriptionBase.IsEdgeInternalToPolygon
struct UMeshDescriptionBase_IsEdgeInternalToPolygon_Params
{
	struct FEdgeID                                     EdgeID;                                                   // (Parm)
	struct FPolygonID                                  PolygonID;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MeshDescription.MeshDescriptionBase.IsEdgeInternal
struct UMeshDescriptionBase_IsEdgeInternal_Params
{
	struct FEdgeID                                     EdgeID;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MeshDescription.MeshDescriptionBase.GetVertexVertexInstances
struct UMeshDescriptionBase_GetVertexVertexInstances_Params
{
	struct FVertexID                                   VertexID;                                                 // (Parm)
	TArray<struct FVertexInstanceID>                   OutVertexInstanceIDs;                                     // (Parm, OutParm, ZeroConstructor)
};

// Function MeshDescription.MeshDescriptionBase.GetVertexPosition
struct UMeshDescriptionBase_GetVertexPosition_Params
{
	struct FVertexID                                   VertexID;                                                 // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MeshDescription.MeshDescriptionBase.GetVertexPairEdge
struct UMeshDescriptionBase_GetVertexPairEdge_Params
{
	struct FVertexID                                   VertexID0;                                                // (Parm)
	struct FVertexID                                   VertexID1;                                                // (Parm)
	struct FEdgeID                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceVertex
struct UMeshDescriptionBase_GetVertexInstanceVertex_Params
{
	struct FVertexInstanceID                           VertexInstanceID;                                         // (Parm)
	struct FVertexID                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MeshDescription.MeshDescriptionBase.GetVertexInstancePairEdge
struct UMeshDescriptionBase_GetVertexInstancePairEdge_Params
{
	struct FVertexInstanceID                           VertexInstanceID0;                                        // (Parm)
	struct FVertexInstanceID                           VertexInstanceID1;                                        // (Parm)
	struct FEdgeID                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceForTriangleVertex
struct UMeshDescriptionBase_GetVertexInstanceForTriangleVertex_Params
{
	struct FTriangleID                                 TriangleID;                                               // (Parm)
	struct FVertexID                                   VertexID;                                                 // (Parm)
	struct FVertexInstanceID                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceForPolygonVertex
struct UMeshDescriptionBase_GetVertexInstanceForPolygonVertex_Params
{
	struct FPolygonID                                  PolygonID;                                                // (Parm)
	struct FVertexID                                   VertexID;                                                 // (Parm)
	struct FVertexInstanceID                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceCount
struct UMeshDescriptionBase_GetVertexInstanceCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedTriangles
struct UMeshDescriptionBase_GetVertexInstanceConnectedTriangles_Params
{
	struct FVertexInstanceID                           VertexInstanceID;                                         // (Parm)
	TArray<struct FTriangleID>                         OutConnectedTriangleIDs;                                  // (Parm, OutParm, ZeroConstructor)
};

// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedPolygons
struct UMeshDescriptionBase_GetVertexInstanceConnectedPolygons_Params
{
	struct FVertexInstanceID                           VertexInstanceID;                                         // (Parm)
	TArray<struct FPolygonID>                          OutConnectedPolygonIDs;                                   // (Parm, OutParm, ZeroConstructor)
};

// Function MeshDescription.MeshDescriptionBase.GetVertexCount
struct UMeshDescriptionBase_GetVertexCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MeshDescription.MeshDescriptionBase.GetVertexConnectedTriangles
struct UMeshDescriptionBase_GetVertexConnectedTriangles_Params
{
	struct FVertexID                                   VertexID;                                                 // (Parm)
	TArray<struct FTriangleID>                         OutConnectedTriangleIDs;                                  // (Parm, OutParm, ZeroConstructor)
};

// Function MeshDescription.MeshDescriptionBase.GetVertexConnectedPolygons
struct UMeshDescriptionBase_GetVertexConnectedPolygons_Params
{
	struct FVertexID                                   VertexID;                                                 // (Parm)
	TArray<struct FPolygonID>                          OutConnectedPolygonIDs;                                   // (Parm, OutParm, ZeroConstructor)
};

// Function MeshDescription.MeshDescriptionBase.GetVertexConnectedEdges
struct UMeshDescriptionBase_GetVertexConnectedEdges_Params
{
	struct FVertexID                                   VertexID;                                                 // (Parm)
	TArray<struct FEdgeID>                             OutEdgeIDs;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function MeshDescription.MeshDescriptionBase.GetVertexAdjacentVertices
struct UMeshDescriptionBase_GetVertexAdjacentVertices_Params
{
	struct FVertexID                                   VertexID;                                                 // (Parm)
	TArray<struct FVertexID>                           OutAdjacentVertexIDs;                                     // (Parm, OutParm, ZeroConstructor)
};

// Function MeshDescription.MeshDescriptionBase.GetTriangleVertices
struct UMeshDescriptionBase_GetTriangleVertices_Params
{
	struct FTriangleID                                 TriangleID;                                               // (Parm)
	TArray<struct FVertexID>                           OutVertexIDs;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function MeshDescription.MeshDescriptionBase.GetTriangleVertexInstances
struct UMeshDescriptionBase_GetTriangleVertexInstances_Params
{
	struct FTriangleID                                 TriangleID;                                               // (Parm)
	TArray<struct FVertexInstanceID>                   OutVertexInstanceIDs;                                     // (Parm, OutParm, ZeroConstructor)
};

// Function MeshDescription.MeshDescriptionBase.GetTriangleVertexInstance
struct UMeshDescriptionBase_GetTriangleVertexInstance_Params
{
	struct FTriangleID                                 TriangleID;                                               // (Parm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVertexInstanceID                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MeshDescription.MeshDescriptionBase.GetTrianglePolygonGroup
struct UMeshDescriptionBase_GetTrianglePolygonGroup_Params
{
	struct FTriangleID                                 TriangleID;                                               // (Parm)
	struct FPolygonGroupID                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MeshDescription.MeshDescriptionBase.GetTrianglePolygon
struct UMeshDescriptionBase_GetTrianglePolygon_Params
{
	struct FTriangleID                                 TriangleID;                                               // (Parm)
	struct FPolygonID                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MeshDescription.MeshDescriptionBase.GetTriangleEdges
struct UMeshDescriptionBase_GetTriangleEdges_Params
{
	struct FTriangleID                                 TriangleID;                                               // (Parm)
	TArray<struct FEdgeID>                             OutEdgeIDs;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function MeshDescription.MeshDescriptionBase.GetTriangleCount
struct UMeshDescriptionBase_GetTriangleCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MeshDescription.MeshDescriptionBase.GetTriangleAdjacentTriangles
struct UMeshDescriptionBase_GetTriangleAdjacentTriangles_Params
{
	struct FTriangleID                                 TriangleID;                                               // (Parm)
	TArray<struct FTriangleID>                         OutTriangleIDs;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function MeshDescription.MeshDescriptionBase.GetPolygonVertices
struct UMeshDescriptionBase_GetPolygonVertices_Params
{
	struct FPolygonID                                  PolygonID;                                                // (Parm)
	TArray<struct FVertexID>                           OutVertexIDs;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function MeshDescription.MeshDescriptionBase.GetPolygonVertexInstances
struct UMeshDescriptionBase_GetPolygonVertexInstances_Params
{
	struct FPolygonID                                  PolygonID;                                                // (Parm)
	TArray<struct FVertexInstanceID>                   OutVertexInstanceIDs;                                     // (Parm, OutParm, ZeroConstructor)
};

// Function MeshDescription.MeshDescriptionBase.GetPolygonTriangles
struct UMeshDescriptionBase_GetPolygonTriangles_Params
{
	struct FPolygonID                                  PolygonID;                                                // (Parm)
	TArray<struct FTriangleID>                         OutTriangleIDs;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function MeshDescription.MeshDescriptionBase.GetPolygonPolygonGroup
struct UMeshDescriptionBase_GetPolygonPolygonGroup_Params
{
	struct FPolygonID                                  PolygonID;                                                // (Parm)
	struct FPolygonGroupID                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MeshDescription.MeshDescriptionBase.GetPolygonPerimeterEdges
struct UMeshDescriptionBase_GetPolygonPerimeterEdges_Params
{
	struct FPolygonID                                  PolygonID;                                                // (Parm)
	TArray<struct FEdgeID>                             OutEdgeIDs;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function MeshDescription.MeshDescriptionBase.GetPolygonInternalEdges
struct UMeshDescriptionBase_GetPolygonInternalEdges_Params
{
	struct FPolygonID                                  PolygonID;                                                // (Parm)
	TArray<struct FEdgeID>                             OutEdgeIDs;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function MeshDescription.MeshDescriptionBase.GetPolygonGroupPolygons
struct UMeshDescriptionBase_GetPolygonGroupPolygons_Params
{
	struct FPolygonGroupID                             PolygonGroupID;                                           // (Parm)
	TArray<struct FPolygonID>                          OutPolygonIDs;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function MeshDescription.MeshDescriptionBase.GetPolygonGroupCount
struct UMeshDescriptionBase_GetPolygonGroupCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MeshDescription.MeshDescriptionBase.GetPolygonCount
struct UMeshDescriptionBase_GetPolygonCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MeshDescription.MeshDescriptionBase.GetPolygonAdjacentPolygons
struct UMeshDescriptionBase_GetPolygonAdjacentPolygons_Params
{
	struct FPolygonID                                  PolygonID;                                                // (Parm)
	TArray<struct FPolygonID>                          OutPolygonIDs;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function MeshDescription.MeshDescriptionBase.GetNumVertexVertexInstances
struct UMeshDescriptionBase_GetNumVertexVertexInstances_Params
{
	struct FVertexID                                   VertexID;                                                 // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedTriangles
struct UMeshDescriptionBase_GetNumVertexInstanceConnectedTriangles_Params
{
	struct FVertexInstanceID                           VertexInstanceID;                                         // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedPolygons
struct UMeshDescriptionBase_GetNumVertexInstanceConnectedPolygons_Params
{
	struct FVertexInstanceID                           VertexInstanceID;                                         // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedTriangles
struct UMeshDescriptionBase_GetNumVertexConnectedTriangles_Params
{
	struct FVertexID                                   VertexID;                                                 // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedPolygons
struct UMeshDescriptionBase_GetNumVertexConnectedPolygons_Params
{
	struct FVertexID                                   VertexID;                                                 // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedEdges
struct UMeshDescriptionBase_GetNumVertexConnectedEdges_Params
{
	struct FVertexID                                   VertexID;                                                 // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MeshDescription.MeshDescriptionBase.GetNumPolygonVertices
struct UMeshDescriptionBase_GetNumPolygonVertices_Params
{
	struct FPolygonID                                  PolygonID;                                                // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MeshDescription.MeshDescriptionBase.GetNumPolygonTriangles
struct UMeshDescriptionBase_GetNumPolygonTriangles_Params
{
	struct FPolygonID                                  PolygonID;                                                // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MeshDescription.MeshDescriptionBase.GetNumPolygonInternalEdges
struct UMeshDescriptionBase_GetNumPolygonInternalEdges_Params
{
	struct FPolygonID                                  PolygonID;                                                // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MeshDescription.MeshDescriptionBase.GetNumPolygonGroupPolygons
struct UMeshDescriptionBase_GetNumPolygonGroupPolygons_Params
{
	struct FPolygonGroupID                             PolygonGroupID;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedTriangles
struct UMeshDescriptionBase_GetNumEdgeConnectedTriangles_Params
{
	struct FEdgeID                                     EdgeID;                                                   // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedPolygons
struct UMeshDescriptionBase_GetNumEdgeConnectedPolygons_Params
{
	struct FEdgeID                                     EdgeID;                                                   // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MeshDescription.MeshDescriptionBase.GetEdgeVertices
struct UMeshDescriptionBase_GetEdgeVertices_Params
{
	struct FEdgeID                                     EdgeID;                                                   // (ConstParm, Parm)
	TArray<struct FVertexID>                           OutVertexIDs;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function MeshDescription.MeshDescriptionBase.GetEdgeVertex
struct UMeshDescriptionBase_GetEdgeVertex_Params
{
	struct FEdgeID                                     EdgeID;                                                   // (Parm)
	int                                                VertexNumber;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVertexID                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MeshDescription.MeshDescriptionBase.GetEdgeCount
struct UMeshDescriptionBase_GetEdgeCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MeshDescription.MeshDescriptionBase.GetEdgeConnectedTriangles
struct UMeshDescriptionBase_GetEdgeConnectedTriangles_Params
{
	struct FEdgeID                                     EdgeID;                                                   // (Parm)
	TArray<struct FTriangleID>                         OutConnectedTriangleIDs;                                  // (Parm, OutParm, ZeroConstructor)
};

// Function MeshDescription.MeshDescriptionBase.GetEdgeConnectedPolygons
struct UMeshDescriptionBase_GetEdgeConnectedPolygons_Params
{
	struct FEdgeID                                     EdgeID;                                                   // (Parm)
	TArray<struct FPolygonID>                          OutConnectedPolygonIDs;                                   // (Parm, OutParm, ZeroConstructor)
};

// Function MeshDescription.MeshDescriptionBase.Empty
struct UMeshDescriptionBase_Empty_Params
{
};

// Function MeshDescription.MeshDescriptionBase.DeleteVertexInstance
struct UMeshDescriptionBase_DeleteVertexInstance_Params
{
	struct FVertexInstanceID                           VertexInstanceID;                                         // (Parm)
	TArray<struct FVertexID>                           OrphanedVertices;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function MeshDescription.MeshDescriptionBase.DeleteVertex
struct UMeshDescriptionBase_DeleteVertex_Params
{
	struct FVertexID                                   VertexID;                                                 // (Parm)
};

// Function MeshDescription.MeshDescriptionBase.DeleteTriangle
struct UMeshDescriptionBase_DeleteTriangle_Params
{
	struct FTriangleID                                 TriangleID;                                               // (Parm)
	TArray<struct FEdgeID>                             OrphanedEdges;                                            // (Parm, OutParm, ZeroConstructor)
	TArray<struct FVertexInstanceID>                   OrphanedVertexInstances;                                  // (Parm, OutParm, ZeroConstructor)
	TArray<struct FPolygonGroupID>                     OrphanedPolygonGroupsPtr;                                 // (Parm, OutParm, ZeroConstructor)
};

// Function MeshDescription.MeshDescriptionBase.DeletePolygonGroup
struct UMeshDescriptionBase_DeletePolygonGroup_Params
{
	struct FPolygonGroupID                             PolygonGroupID;                                           // (Parm)
};

// Function MeshDescription.MeshDescriptionBase.DeletePolygon
struct UMeshDescriptionBase_DeletePolygon_Params
{
	struct FPolygonID                                  PolygonID;                                                // (Parm)
	TArray<struct FEdgeID>                             OrphanedEdges;                                            // (Parm, OutParm, ZeroConstructor)
	TArray<struct FVertexInstanceID>                   OrphanedVertexInstances;                                  // (Parm, OutParm, ZeroConstructor)
	TArray<struct FPolygonGroupID>                     OrphanedPolygonGroups;                                    // (Parm, OutParm, ZeroConstructor)
};

// Function MeshDescription.MeshDescriptionBase.DeleteEdge
struct UMeshDescriptionBase_DeleteEdge_Params
{
	struct FEdgeID                                     EdgeID;                                                   // (Parm)
	TArray<struct FVertexID>                           OrphanedVertices;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function MeshDescription.MeshDescriptionBase.CreateVertexWithID
struct UMeshDescriptionBase_CreateVertexWithID_Params
{
	struct FVertexID                                   VertexID;                                                 // (Parm)
};

// Function MeshDescription.MeshDescriptionBase.CreateVertexInstanceWithID
struct UMeshDescriptionBase_CreateVertexInstanceWithID_Params
{
	struct FVertexInstanceID                           VertexInstanceID;                                         // (Parm)
	struct FVertexID                                   VertexID;                                                 // (Parm)
};

// Function MeshDescription.MeshDescriptionBase.CreateVertexInstance
struct UMeshDescriptionBase_CreateVertexInstance_Params
{
	struct FVertexID                                   VertexID;                                                 // (Parm)
	struct FVertexInstanceID                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MeshDescription.MeshDescriptionBase.CreateVertex
struct UMeshDescriptionBase_CreateVertex_Params
{
	struct FVertexID                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MeshDescription.MeshDescriptionBase.CreateTriangleWithID
struct UMeshDescriptionBase_CreateTriangleWithID_Params
{
	struct FTriangleID                                 TriangleID;                                               // (Parm)
	struct FPolygonGroupID                             PolygonGroupID;                                           // (Parm)
	TArray<struct FVertexInstanceID>                   VertexInstanceIDs;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FEdgeID>                             NewEdgeIDs;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function MeshDescription.MeshDescriptionBase.CreateTriangle
struct UMeshDescriptionBase_CreateTriangle_Params
{
	struct FPolygonGroupID                             PolygonGroupID;                                           // (Parm)
	TArray<struct FVertexInstanceID>                   VertexInstanceIDs;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FEdgeID>                             NewEdgeIDs;                                               // (Parm, OutParm, ZeroConstructor)
	struct FTriangleID                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MeshDescription.MeshDescriptionBase.CreatePolygonWithID
struct UMeshDescriptionBase_CreatePolygonWithID_Params
{
	struct FPolygonID                                  PolygonID;                                                // (Parm)
	struct FPolygonGroupID                             PolygonGroupID;                                           // (Parm)
	TArray<struct FVertexInstanceID>                   VertexInstanceIDs;                                        // (Parm, OutParm, ZeroConstructor)
	TArray<struct FEdgeID>                             NewEdgeIDs;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function MeshDescription.MeshDescriptionBase.CreatePolygonGroupWithID
struct UMeshDescriptionBase_CreatePolygonGroupWithID_Params
{
	struct FPolygonGroupID                             PolygonGroupID;                                           // (Parm)
};

// Function MeshDescription.MeshDescriptionBase.CreatePolygonGroup
struct UMeshDescriptionBase_CreatePolygonGroup_Params
{
	struct FPolygonGroupID                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MeshDescription.MeshDescriptionBase.CreatePolygon
struct UMeshDescriptionBase_CreatePolygon_Params
{
	struct FPolygonGroupID                             PolygonGroupID;                                           // (Parm)
	TArray<struct FVertexInstanceID>                   VertexInstanceIDs;                                        // (Parm, OutParm, ZeroConstructor)
	TArray<struct FEdgeID>                             NewEdgeIDs;                                               // (Parm, OutParm, ZeroConstructor)
	struct FPolygonID                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MeshDescription.MeshDescriptionBase.CreateEdgeWithID
struct UMeshDescriptionBase_CreateEdgeWithID_Params
{
	struct FEdgeID                                     EdgeID;                                                   // (Parm)
	struct FVertexID                                   VertexID0;                                                // (Parm)
	struct FVertexID                                   VertexID1;                                                // (Parm)
};

// Function MeshDescription.MeshDescriptionBase.CreateEdge
struct UMeshDescriptionBase_CreateEdge_Params
{
	struct FVertexID                                   VertexID0;                                                // (Parm)
	struct FVertexID                                   VertexID1;                                                // (Parm)
	struct FEdgeID                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MeshDescription.MeshDescriptionBase.ComputePolygonTriangulation
struct UMeshDescriptionBase_ComputePolygonTriangulation_Params
{
	struct FPolygonID                                  PolygonID;                                                // (Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
