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

// Function EmbarkCompositeMesh.CompositeMeshComponent.SetPartTransform
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// unsigned char                  PartIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              WorldTransform                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UCompositeMeshComponent::SetPartTransform(unsigned char PartIndex, const struct FTransform& WorldTransform)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkCompositeMesh.CompositeMeshComponent.SetPartTransform"));

	UCompositeMeshComponent_SetPartTransform_Params params;
	params.PartIndex = PartIndex;
	params.WorldTransform = WorldTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbarkCompositeMesh.CompositeMeshComponent.HidePart
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// unsigned char                  PartIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void UCompositeMeshComponent::HidePart(unsigned char PartIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function EmbarkCompositeMesh.CompositeMeshComponent.HidePart"));

	UCompositeMeshComponent_HidePart_Params params;
	params.PartIndex = PartIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
