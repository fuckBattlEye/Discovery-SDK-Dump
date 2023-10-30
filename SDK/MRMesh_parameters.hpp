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

// Function MRMesh.MeshReconstructorBase.StopReconstruction
struct UMeshReconstructorBase_StopReconstruction_Params
{
};

// Function MRMesh.MeshReconstructorBase.StartReconstruction
struct UMeshReconstructorBase_StartReconstruction_Params
{
};

// Function MRMesh.MeshReconstructorBase.PauseReconstruction
struct UMeshReconstructorBase_PauseReconstruction_Params
{
};

// Function MRMesh.MeshReconstructorBase.IsReconstructionStarted
struct UMeshReconstructorBase_IsReconstructionStarted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MRMesh.MeshReconstructorBase.IsReconstructionPaused
struct UMeshReconstructorBase_IsReconstructionPaused_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MRMesh.MeshReconstructorBase.DisconnectMRMesh
struct UMeshReconstructorBase_DisconnectMRMesh_Params
{
};

// Function MRMesh.MeshReconstructorBase.ConnectMRMesh
struct UMeshReconstructorBase_ConnectMRMesh_Params
{
	class UMRMeshComponent*                            Mesh;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// DelegateFunction MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature
struct UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             Vertices;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        Triangles;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FVector>                             Normals;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      Confidence;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh
struct UMockDataMeshTrackerComponent_DisconnectMRMesh_Params
{
	class UMRMeshComponent*                            InMRMeshPtr;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MRMesh.MockDataMeshTrackerComponent.ConnectMRMesh
struct UMockDataMeshTrackerComponent_ConnectMRMesh_Params
{
	class UMRMeshComponent*                            InMRMeshPtr;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MRMesh.MRMeshComponent.SetWireframeMaterial
struct UMRMeshComponent_SetWireframeMaterial_Params
{
	class UMaterialInterface*                          InMaterial;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MRMesh.MRMeshComponent.SetWireframeColor
struct UMRMeshComponent_SetWireframeColor_Params
{
	struct FLinearColor                                InColor;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function MRMesh.MRMeshComponent.SetUseWireframe
struct UMRMeshComponent_SetUseWireframe_Params
{
	bool                                               bUseWireframe;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MRMesh.MRMeshComponent.SetEnableMeshOcclusion
struct UMRMeshComponent_SetEnableMeshOcclusion_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MRMesh.MRMeshComponent.RequestNavMeshUpdate
struct UMRMeshComponent_RequestNavMeshUpdate_Params
{
};

// Function MRMesh.MRMeshComponent.IsConnected
struct UMRMeshComponent_IsConnected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MRMesh.MRMeshComponent.GetWireframeColor
struct UMRMeshComponent_GetWireframeColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function MRMesh.MRMeshComponent.GetUseWireframe
struct UMRMeshComponent_GetUseWireframe_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MRMesh.MRMeshComponent.GetEnableMeshOcclusion
struct UMRMeshComponent_GetEnableMeshOcclusion_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MRMesh.MRMeshComponent.ForceNavMeshUpdate
struct UMRMeshComponent_ForceNavMeshUpdate_Params
{
};

// Function MRMesh.MRMeshComponent.Clear
struct UMRMeshComponent_Clear_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
