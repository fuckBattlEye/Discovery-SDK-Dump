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

// Function StaticMeshDescription.StaticMeshDescription.SetVertexInstanceUV
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVertexInstanceID       VertexInstanceID               (Parm)
// struct FVector2D               UV                             (Parm, ZeroConstructor, IsPlainOldData)
// int                            UVIndex                        (Parm, ZeroConstructor, IsPlainOldData)

void UStaticMeshDescription::SetVertexInstanceUV(const struct FVertexInstanceID& VertexInstanceID, const struct FVector2D& UV, int UVIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function StaticMeshDescription.StaticMeshDescription.SetVertexInstanceUV"));

	UStaticMeshDescription_SetVertexInstanceUV_Params params;
	params.VertexInstanceID = VertexInstanceID;
	params.UV = UV;
	params.UVIndex = UVIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StaticMeshDescription.StaticMeshDescription.SetPolygonGroupMaterialSlotName
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FPolygonGroupID         PolygonGroupID                 (Parm)
// struct FName                   SlotName                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UStaticMeshDescription::SetPolygonGroupMaterialSlotName(const struct FPolygonGroupID& PolygonGroupID, const struct FName& SlotName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function StaticMeshDescription.StaticMeshDescription.SetPolygonGroupMaterialSlotName"));

	UStaticMeshDescription_SetPolygonGroupMaterialSlotName_Params params;
	params.PolygonGroupID = PolygonGroupID;
	params.SlotName = SlotName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StaticMeshDescription.StaticMeshDescription.GetVertexInstanceUV
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexInstanceID       VertexInstanceID               (Parm)
// int                            UVIndex                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D UStaticMeshDescription::GetVertexInstanceUV(const struct FVertexInstanceID& VertexInstanceID, int UVIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function StaticMeshDescription.StaticMeshDescription.GetVertexInstanceUV"));

	UStaticMeshDescription_GetVertexInstanceUV_Params params;
	params.VertexInstanceID = VertexInstanceID;
	params.UVIndex = UVIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StaticMeshDescription.StaticMeshDescription.CreateCube
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Center                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HalfExtents                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FPolygonGroupID         PolygonGroup                   (Parm)
// struct FPolygonID              PolygonID_PlusX                (Parm, OutParm)
// struct FPolygonID              PolygonID_MinusX               (Parm, OutParm)
// struct FPolygonID              PolygonID_PlusY                (Parm, OutParm)
// struct FPolygonID              PolygonID_MinusY               (Parm, OutParm)
// struct FPolygonID              PolygonID_PlusZ                (Parm, OutParm)
// struct FPolygonID              PolygonID_MinusZ               (Parm, OutParm)

void UStaticMeshDescription::CreateCube(const struct FVector& Center, const struct FVector& HalfExtents, const struct FPolygonGroupID& PolygonGroup, struct FPolygonID* PolygonID_PlusX, struct FPolygonID* PolygonID_MinusX, struct FPolygonID* PolygonID_PlusY, struct FPolygonID* PolygonID_MinusY, struct FPolygonID* PolygonID_PlusZ, struct FPolygonID* PolygonID_MinusZ)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function StaticMeshDescription.StaticMeshDescription.CreateCube"));

	UStaticMeshDescription_CreateCube_Params params;
	params.Center = Center;
	params.HalfExtents = HalfExtents;
	params.PolygonGroup = PolygonGroup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PolygonID_PlusX != nullptr)
		*PolygonID_PlusX = params.PolygonID_PlusX;
	if (PolygonID_MinusX != nullptr)
		*PolygonID_MinusX = params.PolygonID_MinusX;
	if (PolygonID_PlusY != nullptr)
		*PolygonID_PlusY = params.PolygonID_PlusY;
	if (PolygonID_MinusY != nullptr)
		*PolygonID_MinusY = params.PolygonID_MinusY;
	if (PolygonID_PlusZ != nullptr)
		*PolygonID_PlusZ = params.PolygonID_PlusZ;
	if (PolygonID_MinusZ != nullptr)
		*PolygonID_MinusZ = params.PolygonID_MinusZ;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
