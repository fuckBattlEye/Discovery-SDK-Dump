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

// Function HoudiniEngineRuntime.HoudiniAssetBlueprintComponent.SetToggleValueAt
struct UHoudiniAssetBlueprintComponent_SetToggleValueAt_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniAssetBlueprintComponent.SetFloatParameter
struct UHoudiniAssetBlueprintComponent_SetFloatParameter_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniAssetBlueprintComponent.HasParameter
struct UHoudiniAssetBlueprintComponent_HasParameter_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetVertexPosition
struct UHoudiniStaticMesh_SetVertexPosition_Params
{
	uint32_t                                           InVertexIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector3f                                   InPosition;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexVTangent
struct UHoudiniStaticMesh_SetTriangleVertexVTangent_Params
{
	uint32_t                                           InTriangleIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      InTriangleVertexIndex;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector3f                                   InVTangent;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexUV
struct UHoudiniStaticMesh_SetTriangleVertexUV_Params
{
	uint32_t                                           InTriangleIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      InTriangleVertexIndex;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      InUVLayer;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   InUV;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexUTangent
struct UHoudiniStaticMesh_SetTriangleVertexUTangent_Params
{
	uint32_t                                           InTriangleIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      InTriangleVertexIndex;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector3f                                   InUTangent;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexNormal
struct UHoudiniStaticMesh_SetTriangleVertexNormal_Params
{
	uint32_t                                           InTriangleIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      InTriangleVertexIndex;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector3f                                   InNormal;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexIndices
struct UHoudiniStaticMesh_SetTriangleVertexIndices_Params
{
	uint32_t                                           InTriangleIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FIntVector                                  InTriangleVertexIndices;                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexColor
struct UHoudiniStaticMesh_SetTriangleVertexColor_Params
{
	uint32_t                                           InTriangleIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      InTriangleVertexIndex;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FColor                                      InColor;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleMaterialID
struct UHoudiniStaticMesh_SetTriangleMaterialID_Params
{
	uint32_t                                           InTriangleIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InMaterialID;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetStaticMaterial
struct UHoudiniStaticMesh_SetStaticMaterial_Params
{
	uint32_t                                           InMaterialIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FStaticMaterial                             InStaticMaterial;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetNumUVLayers
struct UHoudiniStaticMesh_SetNumUVLayers_Params
{
	uint32_t                                           InNumUVLayers;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetNumStaticMaterials
struct UHoudiniStaticMesh_SetNumStaticMaterials_Params
{
	uint32_t                                           InNumStaticMaterials;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetHasTangents
struct UHoudiniStaticMesh_SetHasTangents_Params
{
	bool                                               bInHasTangents;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetHasPerFaceMaterials
struct UHoudiniStaticMesh_SetHasPerFaceMaterials_Params
{
	bool                                               bInHasPerFaceMaterials;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetHasNormals
struct UHoudiniStaticMesh_SetHasNormals_Params
{
	bool                                               bInHasNormals;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetHasColors
struct UHoudiniStaticMesh_SetHasColors_Params
{
	bool                                               bInHasColors;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniStaticMesh.Optimize
struct UHoudiniStaticMesh_Optimize_Params
{
};

// Function HoudiniEngineRuntime.HoudiniStaticMesh.IsValid
struct UHoudiniStaticMesh_IsValid_Params
{
	bool                                               bInSkipVertexIndicesCheck;                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniStaticMesh.Initialize
struct UHoudiniStaticMesh_Initialize_Params
{
	uint32_t                                           InNumVertices;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           InNumTriangles;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           InNumUVLayers;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           InInitialNumStaticMaterials;                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInHasNormals;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInHasTangents;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInHasColors;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInHasPerFaceMaterials;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniStaticMesh.HasTangents
struct UHoudiniStaticMesh_HasTangents_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniStaticMesh.HasPerFaceMaterials
struct UHoudiniStaticMesh_HasPerFaceMaterials_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniStaticMesh.HasNormals
struct UHoudiniStaticMesh_HasNormals_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniStaticMesh.HasColors
struct UHoudiniStaticMesh_HasColors_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexPositions
struct UHoudiniStaticMesh_GetVertexPositions_Params
{
	TArray<struct FVector3f>                           ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceVTangents
struct UHoudiniStaticMesh_GetVertexInstanceVTangents_Params
{
	TArray<struct FVector3f>                           ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceUVs
struct UHoudiniStaticMesh_GetVertexInstanceUVs_Params
{
	TArray<struct FVector2D>                           ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceUTangents
struct UHoudiniStaticMesh_GetVertexInstanceUTangents_Params
{
	TArray<struct FVector3f>                           ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceNormals
struct UHoudiniStaticMesh_GetVertexInstanceNormals_Params
{
	TArray<struct FVector3f>                           ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceColors
struct UHoudiniStaticMesh_GetVertexInstanceColors_Params
{
	TArray<struct FColor>                              ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetTriangleIndices
struct UHoudiniStaticMesh_GetTriangleIndices_Params
{
	TArray<struct FIntVector>                          ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetStaticMaterials
struct UHoudiniStaticMesh_GetStaticMaterials_Params
{
	TArray<struct FStaticMaterial>                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetNumVertices
struct UHoudiniStaticMesh_GetNumVertices_Params
{
	uint32_t                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetNumVertexInstances
struct UHoudiniStaticMesh_GetNumVertexInstances_Params
{
	uint32_t                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetNumUVLayers
struct UHoudiniStaticMesh_GetNumUVLayers_Params
{
	uint32_t                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetNumTriangles
struct UHoudiniStaticMesh_GetNumTriangles_Params
{
	uint32_t                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetNumStaticMaterials
struct UHoudiniStaticMesh_GetNumStaticMaterials_Params
{
	uint32_t                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetMaterialIndex
struct UHoudiniStaticMesh_GetMaterialIndex_Params
{
	struct FName                                       InMaterialSlotName;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetMaterialIDsPerTriangle
struct UHoudiniStaticMesh_GetMaterialIDsPerTriangle_Params
{
	TArray<int>                                        ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetMaterial
struct UHoudiniStaticMesh_GetMaterial_Params
{
	int                                                InMaterialIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniStaticMesh.CalculateTangents
struct UHoudiniStaticMesh_CalculateTangents_Params
{
	bool                                               bInComputeWeightedNormals;                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniStaticMesh.CalculateNormals
struct UHoudiniStaticMesh_CalculateNormals_Params
{
	bool                                               bInComputeWeightedNormals;                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniStaticMesh.CalcBounds
struct UHoudiniStaticMesh_CalcBounds_Params
{
	struct FBox                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniStaticMesh.AddStaticMaterial
struct UHoudiniStaticMesh_AddStaticMaterial_Params
{
	struct FStaticMaterial                             InStaticMaterial;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
	uint32_t                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniStaticMeshComponent.SetMesh
struct UHoudiniStaticMeshComponent_SetMesh_Params
{
	class UHoudiniStaticMesh*                          InMesh;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniStaticMeshComponent.SetHoudiniIconVisible
struct UHoudiniStaticMeshComponent_SetHoudiniIconVisible_Params
{
	bool                                               bInHoudiniIconVisible;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniStaticMeshComponent.NotifyMeshUpdated
struct UHoudiniStaticMeshComponent_NotifyMeshUpdated_Params
{
};

// Function HoudiniEngineRuntime.HoudiniStaticMeshComponent.IsHoudiniIconVisible
struct UHoudiniStaticMeshComponent_IsHoudiniIconVisible_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniStaticMeshComponent.GetMesh
struct UHoudiniStaticMeshComponent_GetMesh_Params
{
	class UHoudiniStaticMesh*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
