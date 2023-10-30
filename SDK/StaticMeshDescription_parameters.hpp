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

// Function StaticMeshDescription.StaticMeshDescription.SetVertexInstanceUV
struct UStaticMeshDescription_SetVertexInstanceUV_Params
{
	struct FVertexInstanceID                           VertexInstanceID;                                         // (Parm)
	struct FVector2D                                   UV;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                UVIndex;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StaticMeshDescription.StaticMeshDescription.SetPolygonGroupMaterialSlotName
struct UStaticMeshDescription_SetPolygonGroupMaterialSlotName_Params
{
	struct FPolygonGroupID                             PolygonGroupID;                                           // (Parm)
	struct FName                                       SlotName;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function StaticMeshDescription.StaticMeshDescription.GetVertexInstanceUV
struct UStaticMeshDescription_GetVertexInstanceUV_Params
{
	struct FVertexInstanceID                           VertexInstanceID;                                         // (Parm)
	int                                                UVIndex;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StaticMeshDescription.StaticMeshDescription.CreateCube
struct UStaticMeshDescription_CreateCube_Params
{
	struct FVector                                     Center;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HalfExtents;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPolygonGroupID                             PolygonGroup;                                             // (Parm)
	struct FPolygonID                                  PolygonID_PlusX;                                          // (Parm, OutParm)
	struct FPolygonID                                  PolygonID_MinusX;                                         // (Parm, OutParm)
	struct FPolygonID                                  PolygonID_PlusY;                                          // (Parm, OutParm)
	struct FPolygonID                                  PolygonID_MinusY;                                         // (Parm, OutParm)
	struct FPolygonID                                  PolygonID_PlusZ;                                          // (Parm, OutParm)
	struct FPolygonID                                  PolygonID_MinusZ;                                         // (Parm, OutParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
