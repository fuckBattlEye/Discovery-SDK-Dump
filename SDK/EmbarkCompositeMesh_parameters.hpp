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

// Function EmbarkCompositeMesh.CompositeMeshComponent.SetPartTransform
struct UCompositeMeshComponent_SetPartTransform_Params
{
	unsigned char                                      PartIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  WorldTransform;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function EmbarkCompositeMesh.CompositeMeshComponent.HidePart
struct UCompositeMeshComponent_HidePart_Params
{
	unsigned char                                      PartIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
