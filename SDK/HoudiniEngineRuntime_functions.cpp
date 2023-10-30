//   SDK By:if

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../pch.h"

namespace sdk
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function HoudiniEngineRuntime.HoudiniAssetBlueprintComponent.SetToggleValueAt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UHoudiniAssetBlueprintComponent::SetToggleValueAt(const struct FString& Name, bool Value, int Index)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function HoudiniEngineRuntime.HoudiniAssetBlueprintComponent.SetToggleValueAt"));

	UHoudiniAssetBlueprintComponent_SetToggleValueAt_Params params;
	params.Name = Name;
	params.Value = Value;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoudiniEngineRuntime.HoudiniAssetBlueprintComponent.SetFloatParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UHoudiniAssetBlueprintComponent::SetFloatParameter(const struct FString& Name, float Value, int Index)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function HoudiniEngineRuntime.HoudiniAssetBlueprintComponent.SetFloatParameter"));

	UHoudiniAssetBlueprintComponent_SetFloatParameter_Params params;
	params.Name = Name;
	params.Value = Value;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoudiniEngineRuntime.HoudiniAssetBlueprintComponent.HasParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniAssetBlueprintComponent::HasParameter(const struct FString& Name)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function HoudiniEngineRuntime.HoudiniAssetBlueprintComponent.HasParameter"));

	UHoudiniAssetBlueprintComponent_HasParameter_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetVertexPosition
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// uint32_t                       InVertexIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector3f               InPosition                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UHoudiniStaticMesh::SetVertexPosition(uint32_t InVertexIndex, const struct FVector3f& InPosition)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function HoudiniEngineRuntime.HoudiniStaticMesh.SetVertexPosition"));

	UHoudiniStaticMesh_SetVertexPosition_Params params;
	params.InVertexIndex = InVertexIndex;
	params.InPosition = InPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexVTangent
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// uint32_t                       InTriangleIndex                (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  InTriangleVertexIndex          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector3f               InVTangent                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UHoudiniStaticMesh::SetTriangleVertexVTangent(uint32_t InTriangleIndex, unsigned char InTriangleVertexIndex, const struct FVector3f& InVTangent)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexVTangent"));

	UHoudiniStaticMesh_SetTriangleVertexVTangent_Params params;
	params.InTriangleIndex = InTriangleIndex;
	params.InTriangleVertexIndex = InTriangleVertexIndex;
	params.InVTangent = InVTangent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexUV
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// uint32_t                       InTriangleIndex                (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  InTriangleVertexIndex          (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  InUVLayer                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               InUV                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UHoudiniStaticMesh::SetTriangleVertexUV(uint32_t InTriangleIndex, unsigned char InTriangleVertexIndex, unsigned char InUVLayer, const struct FVector2D& InUV)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexUV"));

	UHoudiniStaticMesh_SetTriangleVertexUV_Params params;
	params.InTriangleIndex = InTriangleIndex;
	params.InTriangleVertexIndex = InTriangleVertexIndex;
	params.InUVLayer = InUVLayer;
	params.InUV = InUV;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexUTangent
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// uint32_t                       InTriangleIndex                (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  InTriangleVertexIndex          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector3f               InUTangent                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UHoudiniStaticMesh::SetTriangleVertexUTangent(uint32_t InTriangleIndex, unsigned char InTriangleVertexIndex, const struct FVector3f& InUTangent)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexUTangent"));

	UHoudiniStaticMesh_SetTriangleVertexUTangent_Params params;
	params.InTriangleIndex = InTriangleIndex;
	params.InTriangleVertexIndex = InTriangleVertexIndex;
	params.InUTangent = InUTangent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexNormal
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// uint32_t                       InTriangleIndex                (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  InTriangleVertexIndex          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector3f               InNormal                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UHoudiniStaticMesh::SetTriangleVertexNormal(uint32_t InTriangleIndex, unsigned char InTriangleVertexIndex, const struct FVector3f& InNormal)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexNormal"));

	UHoudiniStaticMesh_SetTriangleVertexNormal_Params params;
	params.InTriangleIndex = InTriangleIndex;
	params.InTriangleVertexIndex = InTriangleVertexIndex;
	params.InNormal = InNormal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexIndices
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// uint32_t                       InTriangleIndex                (Parm, ZeroConstructor, IsPlainOldData)
// struct FIntVector              InTriangleVertexIndices        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UHoudiniStaticMesh::SetTriangleVertexIndices(uint32_t InTriangleIndex, const struct FIntVector& InTriangleVertexIndices)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexIndices"));

	UHoudiniStaticMesh_SetTriangleVertexIndices_Params params;
	params.InTriangleIndex = InTriangleIndex;
	params.InTriangleVertexIndices = InTriangleVertexIndices;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexColor
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// uint32_t                       InTriangleIndex                (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  InTriangleVertexIndex          (Parm, ZeroConstructor, IsPlainOldData)
// struct FColor                  InColor                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UHoudiniStaticMesh::SetTriangleVertexColor(uint32_t InTriangleIndex, unsigned char InTriangleVertexIndex, const struct FColor& InColor)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexColor"));

	UHoudiniStaticMesh_SetTriangleVertexColor_Params params;
	params.InTriangleIndex = InTriangleIndex;
	params.InTriangleVertexIndex = InTriangleVertexIndex;
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleMaterialID
// (Final, Native, Public)
// Parameters:
// uint32_t                       InTriangleIndex                (Parm, ZeroConstructor, IsPlainOldData)
// int                            InMaterialID                   (Parm, ZeroConstructor, IsPlainOldData)

void UHoudiniStaticMesh::SetTriangleMaterialID(uint32_t InTriangleIndex, int InMaterialID)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleMaterialID"));

	UHoudiniStaticMesh_SetTriangleMaterialID_Params params;
	params.InTriangleIndex = InTriangleIndex;
	params.InMaterialID = InMaterialID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetStaticMaterial
// (Final, Native, Public, HasOutParms)
// Parameters:
// uint32_t                       InMaterialIndex                (Parm, ZeroConstructor, IsPlainOldData)
// struct FStaticMaterial         InStaticMaterial               (ConstParm, Parm, OutParm, ReferenceParm)

void UHoudiniStaticMesh::SetStaticMaterial(uint32_t InMaterialIndex, const struct FStaticMaterial& InStaticMaterial)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function HoudiniEngineRuntime.HoudiniStaticMesh.SetStaticMaterial"));

	UHoudiniStaticMesh_SetStaticMaterial_Params params;
	params.InMaterialIndex = InMaterialIndex;
	params.InStaticMaterial = InStaticMaterial;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetNumUVLayers
// (Final, Native, Public)
// Parameters:
// uint32_t                       InNumUVLayers                  (Parm, ZeroConstructor, IsPlainOldData)

void UHoudiniStaticMesh::SetNumUVLayers(uint32_t InNumUVLayers)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function HoudiniEngineRuntime.HoudiniStaticMesh.SetNumUVLayers"));

	UHoudiniStaticMesh_SetNumUVLayers_Params params;
	params.InNumUVLayers = InNumUVLayers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetNumStaticMaterials
// (Final, Native, Public)
// Parameters:
// uint32_t                       InNumStaticMaterials           (Parm, ZeroConstructor, IsPlainOldData)

void UHoudiniStaticMesh::SetNumStaticMaterials(uint32_t InNumStaticMaterials)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function HoudiniEngineRuntime.HoudiniStaticMesh.SetNumStaticMaterials"));

	UHoudiniStaticMesh_SetNumStaticMaterials_Params params;
	params.InNumStaticMaterials = InNumStaticMaterials;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetHasTangents
// (Final, Native, Public)
// Parameters:
// bool                           bInHasTangents                 (Parm, ZeroConstructor, IsPlainOldData)

void UHoudiniStaticMesh::SetHasTangents(bool bInHasTangents)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function HoudiniEngineRuntime.HoudiniStaticMesh.SetHasTangents"));

	UHoudiniStaticMesh_SetHasTangents_Params params;
	params.bInHasTangents = bInHasTangents;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetHasPerFaceMaterials
// (Final, Native, Public)
// Parameters:
// bool                           bInHasPerFaceMaterials         (Parm, ZeroConstructor, IsPlainOldData)

void UHoudiniStaticMesh::SetHasPerFaceMaterials(bool bInHasPerFaceMaterials)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function HoudiniEngineRuntime.HoudiniStaticMesh.SetHasPerFaceMaterials"));

	UHoudiniStaticMesh_SetHasPerFaceMaterials_Params params;
	params.bInHasPerFaceMaterials = bInHasPerFaceMaterials;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetHasNormals
// (Final, Native, Public)
// Parameters:
// bool                           bInHasNormals                  (Parm, ZeroConstructor, IsPlainOldData)

void UHoudiniStaticMesh::SetHasNormals(bool bInHasNormals)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function HoudiniEngineRuntime.HoudiniStaticMesh.SetHasNormals"));

	UHoudiniStaticMesh_SetHasNormals_Params params;
	params.bInHasNormals = bInHasNormals;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetHasColors
// (Final, Native, Public)
// Parameters:
// bool                           bInHasColors                   (Parm, ZeroConstructor, IsPlainOldData)

void UHoudiniStaticMesh::SetHasColors(bool bInHasColors)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function HoudiniEngineRuntime.HoudiniStaticMesh.SetHasColors"));

	UHoudiniStaticMesh_SetHasColors_Params params;
	params.bInHasColors = bInHasColors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.Optimize
// (Final, Native, Public)

void UHoudiniStaticMesh::Optimize()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function HoudiniEngineRuntime.HoudiniStaticMesh.Optimize"));

	UHoudiniStaticMesh_Optimize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.IsValid
// (Final, Native, Public, Const)
// Parameters:
// bool                           bInSkipVertexIndicesCheck      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniStaticMesh::IsValid(bool bInSkipVertexIndicesCheck)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function HoudiniEngineRuntime.HoudiniStaticMesh.IsValid"));

	UHoudiniStaticMesh_IsValid_Params params;
	params.bInSkipVertexIndicesCheck = bInSkipVertexIndicesCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.Initialize
// (Final, Native, Public)
// Parameters:
// uint32_t                       InNumVertices                  (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       InNumTriangles                 (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       InNumUVLayers                  (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       InInitialNumStaticMaterials    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInHasNormals                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInHasTangents                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInHasColors                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInHasPerFaceMaterials         (Parm, ZeroConstructor, IsPlainOldData)

void UHoudiniStaticMesh::Initialize(uint32_t InNumVertices, uint32_t InNumTriangles, uint32_t InNumUVLayers, uint32_t InInitialNumStaticMaterials, bool bInHasNormals, bool bInHasTangents, bool bInHasColors, bool bInHasPerFaceMaterials)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function HoudiniEngineRuntime.HoudiniStaticMesh.Initialize"));

	UHoudiniStaticMesh_Initialize_Params params;
	params.InNumVertices = InNumVertices;
	params.InNumTriangles = InNumTriangles;
	params.InNumUVLayers = InNumUVLayers;
	params.InInitialNumStaticMaterials = InInitialNumStaticMaterials;
	params.bInHasNormals = bInHasNormals;
	params.bInHasTangents = bInHasTangents;
	params.bInHasColors = bInHasColors;
	params.bInHasPerFaceMaterials = bInHasPerFaceMaterials;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.HasTangents
// (Final, Native, Public, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniStaticMesh::HasTangents()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function HoudiniEngineRuntime.HoudiniStaticMesh.HasTangents"));

	UHoudiniStaticMesh_HasTangents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.HasPerFaceMaterials
// (Final, Native, Public, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniStaticMesh::HasPerFaceMaterials()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function HoudiniEngineRuntime.HoudiniStaticMesh.HasPerFaceMaterials"));

	UHoudiniStaticMesh_HasPerFaceMaterials_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.HasNormals
// (Final, Native, Public, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniStaticMesh::HasNormals()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function HoudiniEngineRuntime.HoudiniStaticMesh.HasNormals"));

	UHoudiniStaticMesh_HasNormals_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.HasColors
// (Final, Native, Public, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniStaticMesh::HasColors()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function HoudiniEngineRuntime.HoudiniStaticMesh.HasColors"));

	UHoudiniStaticMesh_HasColors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexPositions
// (Final, Native, Public, Const)
// Parameters:
// TArray<struct FVector3f>       ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<struct FVector3f> UHoudiniStaticMesh::GetVertexPositions()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexPositions"));

	UHoudiniStaticMesh_GetVertexPositions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceVTangents
// (Final, Native, Public, Const)
// Parameters:
// TArray<struct FVector3f>       ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<struct FVector3f> UHoudiniStaticMesh::GetVertexInstanceVTangents()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceVTangents"));

	UHoudiniStaticMesh_GetVertexInstanceVTangents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceUVs
// (Final, Native, Public, Const)
// Parameters:
// TArray<struct FVector2D>       ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<struct FVector2D> UHoudiniStaticMesh::GetVertexInstanceUVs()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceUVs"));

	UHoudiniStaticMesh_GetVertexInstanceUVs_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceUTangents
// (Final, Native, Public, Const)
// Parameters:
// TArray<struct FVector3f>       ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<struct FVector3f> UHoudiniStaticMesh::GetVertexInstanceUTangents()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceUTangents"));

	UHoudiniStaticMesh_GetVertexInstanceUTangents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceNormals
// (Final, Native, Public, Const)
// Parameters:
// TArray<struct FVector3f>       ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<struct FVector3f> UHoudiniStaticMesh::GetVertexInstanceNormals()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceNormals"));

	UHoudiniStaticMesh_GetVertexInstanceNormals_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceColors
// (Final, Native, Public, Const)
// Parameters:
// TArray<struct FColor>          ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<struct FColor> UHoudiniStaticMesh::GetVertexInstanceColors()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceColors"));

	UHoudiniStaticMesh_GetVertexInstanceColors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetTriangleIndices
// (Final, Native, Public, Const)
// Parameters:
// TArray<struct FIntVector>      ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<struct FIntVector> UHoudiniStaticMesh::GetTriangleIndices()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function HoudiniEngineRuntime.HoudiniStaticMesh.GetTriangleIndices"));

	UHoudiniStaticMesh_GetTriangleIndices_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetStaticMaterials
// (Final, Native, Public, Const)
// Parameters:
// TArray<struct FStaticMaterial> ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<struct FStaticMaterial> UHoudiniStaticMesh::GetStaticMaterials()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function HoudiniEngineRuntime.HoudiniStaticMesh.GetStaticMaterials"));

	UHoudiniStaticMesh_GetStaticMaterials_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetNumVertices
// (Final, Native, Public, Const)
// Parameters:
// uint32_t                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

uint32_t UHoudiniStaticMesh::GetNumVertices()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function HoudiniEngineRuntime.HoudiniStaticMesh.GetNumVertices"));

	UHoudiniStaticMesh_GetNumVertices_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetNumVertexInstances
// (Final, Native, Public, Const)
// Parameters:
// uint32_t                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

uint32_t UHoudiniStaticMesh::GetNumVertexInstances()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function HoudiniEngineRuntime.HoudiniStaticMesh.GetNumVertexInstances"));

	UHoudiniStaticMesh_GetNumVertexInstances_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetNumUVLayers
// (Final, Native, Public, Const)
// Parameters:
// uint32_t                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

uint32_t UHoudiniStaticMesh::GetNumUVLayers()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function HoudiniEngineRuntime.HoudiniStaticMesh.GetNumUVLayers"));

	UHoudiniStaticMesh_GetNumUVLayers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetNumTriangles
// (Final, Native, Public, Const)
// Parameters:
// uint32_t                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

uint32_t UHoudiniStaticMesh::GetNumTriangles()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function HoudiniEngineRuntime.HoudiniStaticMesh.GetNumTriangles"));

	UHoudiniStaticMesh_GetNumTriangles_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetNumStaticMaterials
// (Final, Native, Public, Const)
// Parameters:
// uint32_t                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

uint32_t UHoudiniStaticMesh::GetNumStaticMaterials()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function HoudiniEngineRuntime.HoudiniStaticMesh.GetNumStaticMaterials"));

	UHoudiniStaticMesh_GetNumStaticMaterials_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetMaterialIndex
// (Final, Native, Public, Const)
// Parameters:
// struct FName                   InMaterialSlotName             (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UHoudiniStaticMesh::GetMaterialIndex(const struct FName& InMaterialSlotName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function HoudiniEngineRuntime.HoudiniStaticMesh.GetMaterialIndex"));

	UHoudiniStaticMesh_GetMaterialIndex_Params params;
	params.InMaterialSlotName = InMaterialSlotName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetMaterialIDsPerTriangle
// (Final, Native, Public, Const)
// Parameters:
// TArray<int>                    ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<int> UHoudiniStaticMesh::GetMaterialIDsPerTriangle()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function HoudiniEngineRuntime.HoudiniStaticMesh.GetMaterialIDsPerTriangle"));

	UHoudiniStaticMesh_GetMaterialIDsPerTriangle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetMaterial
// (Final, Native, Public)
// Parameters:
// int                            InMaterialIndex                (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMaterialInterface* UHoudiniStaticMesh::GetMaterial(int InMaterialIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function HoudiniEngineRuntime.HoudiniStaticMesh.GetMaterial"));

	UHoudiniStaticMesh_GetMaterial_Params params;
	params.InMaterialIndex = InMaterialIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.CalculateTangents
// (Final, Native, Public)
// Parameters:
// bool                           bInComputeWeightedNormals      (Parm, ZeroConstructor, IsPlainOldData)

void UHoudiniStaticMesh::CalculateTangents(bool bInComputeWeightedNormals)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function HoudiniEngineRuntime.HoudiniStaticMesh.CalculateTangents"));

	UHoudiniStaticMesh_CalculateTangents_Params params;
	params.bInComputeWeightedNormals = bInComputeWeightedNormals;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.CalculateNormals
// (Final, Native, Public)
// Parameters:
// bool                           bInComputeWeightedNormals      (Parm, ZeroConstructor, IsPlainOldData)

void UHoudiniStaticMesh::CalculateNormals(bool bInComputeWeightedNormals)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function HoudiniEngineRuntime.HoudiniStaticMesh.CalculateNormals"));

	UHoudiniStaticMesh_CalculateNormals_Params params;
	params.bInComputeWeightedNormals = bInComputeWeightedNormals;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.CalcBounds
// (Final, Native, Public, HasDefaults, Const)
// Parameters:
// struct FBox                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FBox UHoudiniStaticMesh::CalcBounds()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function HoudiniEngineRuntime.HoudiniStaticMesh.CalcBounds"));

	UHoudiniStaticMesh_CalcBounds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.AddStaticMaterial
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FStaticMaterial         InStaticMaterial               (ConstParm, Parm, OutParm, ReferenceParm)
// uint32_t                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

uint32_t UHoudiniStaticMesh::AddStaticMaterial(const struct FStaticMaterial& InStaticMaterial)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function HoudiniEngineRuntime.HoudiniStaticMesh.AddStaticMaterial"));

	UHoudiniStaticMesh_AddStaticMaterial_Params params;
	params.InStaticMaterial = InStaticMaterial;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniStaticMeshComponent.SetMesh
// (Final, Native, Public)
// Parameters:
// class UHoudiniStaticMesh*      InMesh                         (Parm, ZeroConstructor, IsPlainOldData)

void UHoudiniStaticMeshComponent::SetMesh(class UHoudiniStaticMesh* InMesh)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function HoudiniEngineRuntime.HoudiniStaticMeshComponent.SetMesh"));

	UHoudiniStaticMeshComponent_SetMesh_Params params;
	params.InMesh = InMesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoudiniEngineRuntime.HoudiniStaticMeshComponent.SetHoudiniIconVisible
// (Final, Native, Public)
// Parameters:
// bool                           bInHoudiniIconVisible          (Parm, ZeroConstructor, IsPlainOldData)

void UHoudiniStaticMeshComponent::SetHoudiniIconVisible(bool bInHoudiniIconVisible)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function HoudiniEngineRuntime.HoudiniStaticMeshComponent.SetHoudiniIconVisible"));

	UHoudiniStaticMeshComponent_SetHoudiniIconVisible_Params params;
	params.bInHoudiniIconVisible = bInHoudiniIconVisible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoudiniEngineRuntime.HoudiniStaticMeshComponent.NotifyMeshUpdated
// (Final, Native, Public)

void UHoudiniStaticMeshComponent::NotifyMeshUpdated()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function HoudiniEngineRuntime.HoudiniStaticMeshComponent.NotifyMeshUpdated"));

	UHoudiniStaticMeshComponent_NotifyMeshUpdated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoudiniEngineRuntime.HoudiniStaticMeshComponent.IsHoudiniIconVisible
// (Final, Native, Public, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniStaticMeshComponent::IsHoudiniIconVisible()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function HoudiniEngineRuntime.HoudiniStaticMeshComponent.IsHoudiniIconVisible"));

	UHoudiniStaticMeshComponent_IsHoudiniIconVisible_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniStaticMeshComponent.GetMesh
// (Final, Native, Public)
// Parameters:
// class UHoudiniStaticMesh*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UHoudiniStaticMesh* UHoudiniStaticMeshComponent::GetMesh()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function HoudiniEngineRuntime.HoudiniStaticMeshComponent.GetMesh"));

	UHoudiniStaticMeshComponent_GetMesh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
