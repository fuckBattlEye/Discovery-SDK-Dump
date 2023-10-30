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

// Function Text3D.Text3DCharacterTransform.SetScaleRange
struct UText3DCharacterTransform_SetScaleRange_Params
{
	float                                              Range;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Text3D.Text3DCharacterTransform.SetScaleProgress
struct UText3DCharacterTransform_SetScaleProgress_Params
{
	float                                              Progress;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Text3D.Text3DCharacterTransform.SetScaleOrder
struct UText3DCharacterTransform_SetScaleOrder_Params
{
	enum class EText3DCharacterEffectOrder             Order;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Text3D.Text3DCharacterTransform.SetScaleEnd
struct UText3DCharacterTransform_SetScaleEnd_Params
{
	struct FVector                                     Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Text3D.Text3DCharacterTransform.SetScaleEnabled
struct UText3DCharacterTransform_SetScaleEnabled_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Text3D.Text3DCharacterTransform.SetScaleBegin
struct UText3DCharacterTransform_SetScaleBegin_Params
{
	struct FVector                                     Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Text3D.Text3DCharacterTransform.SetRotateRange
struct UText3DCharacterTransform_SetRotateRange_Params
{
	float                                              Range;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Text3D.Text3DCharacterTransform.SetRotateProgress
struct UText3DCharacterTransform_SetRotateProgress_Params
{
	float                                              Progress;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Text3D.Text3DCharacterTransform.SetRotateOrder
struct UText3DCharacterTransform_SetRotateOrder_Params
{
	enum class EText3DCharacterEffectOrder             Order;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Text3D.Text3DCharacterTransform.SetRotateEnd
struct UText3DCharacterTransform_SetRotateEnd_Params
{
	struct FRotator                                    Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Text3D.Text3DCharacterTransform.SetRotateEnabled
struct UText3DCharacterTransform_SetRotateEnabled_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Text3D.Text3DCharacterTransform.SetRotateBegin
struct UText3DCharacterTransform_SetRotateBegin_Params
{
	struct FRotator                                    Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Text3D.Text3DCharacterTransform.SetLocationRange
struct UText3DCharacterTransform_SetLocationRange_Params
{
	float                                              Range;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Text3D.Text3DCharacterTransform.SetLocationProgress
struct UText3DCharacterTransform_SetLocationProgress_Params
{
	float                                              Progress;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Text3D.Text3DCharacterTransform.SetLocationOrder
struct UText3DCharacterTransform_SetLocationOrder_Params
{
	enum class EText3DCharacterEffectOrder             Order;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Text3D.Text3DCharacterTransform.SetLocationEnabled
struct UText3DCharacterTransform_SetLocationEnabled_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Text3D.Text3DCharacterTransform.SetLocationDistance
struct UText3DCharacterTransform_SetLocationDistance_Params
{
	struct FVector                                     Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Text3D.Text3DComponent.TextGenerated__DelegateSignature
struct UText3DComponent_TextGenerated__DelegateSignature_Params
{
};

// Function Text3D.Text3DComponent.SetWordSpacing
struct UText3DComponent_SetWordSpacing_Params
{
	float                                              Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Text3D.Text3DComponent.SetVerticalAlignment
struct UText3DComponent_SetVerticalAlignment_Params
{
	enum class EText3DVerticalTextAlignment            Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Text3D.Text3DComponent.SetText
struct UText3DComponent_SetText_Params
{
	struct FText                                       Value;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Text3D.Text3DComponent.SetScaleProportionally
struct UText3DComponent_SetScaleProportionally_Params
{
	bool                                               Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Text3D.Text3DComponent.SetOutlineExpand
struct UText3DComponent_SetOutlineExpand_Params
{
	float                                              Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Text3D.Text3DComponent.SetOutline
struct UText3DComponent_SetOutline_Params
{
	bool                                               bValue;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Text3D.Text3DComponent.SetMaxWidth
struct UText3DComponent_SetMaxWidth_Params
{
	float                                              Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Text3D.Text3DComponent.SetMaxHeight
struct UText3DComponent_SetMaxHeight_Params
{
	float                                              Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Text3D.Text3DComponent.SetLineSpacing
struct UText3DComponent_SetLineSpacing_Params
{
	float                                              Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Text3D.Text3DComponent.SetKerning
struct UText3DComponent_SetKerning_Params
{
	float                                              Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Text3D.Text3DComponent.SetHorizontalAlignment
struct UText3DComponent_SetHorizontalAlignment_Params
{
	enum class EText3DHorizontalTextAlignment          Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Text3D.Text3DComponent.SetHasMaxWidth
struct UText3DComponent_SetHasMaxWidth_Params
{
	bool                                               Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Text3D.Text3DComponent.SetHasMaxHeight
struct UText3DComponent_SetHasMaxHeight_Params
{
	bool                                               Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Text3D.Text3DComponent.SetFrontMaterial
struct UText3DComponent_SetFrontMaterial_Params
{
	class UMaterialInterface*                          Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Text3D.Text3DComponent.SetFreeze
struct UText3DComponent_SetFreeze_Params
{
	bool                                               bFreeze;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Text3D.Text3DComponent.SetFont
struct UText3DComponent_SetFont_Params
{
	class UFont*                                       InFont;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Text3D.Text3DComponent.SetExtrudeMaterial
struct UText3DComponent_SetExtrudeMaterial_Params
{
	class UMaterialInterface*                          Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Text3D.Text3DComponent.SetExtrude
struct UText3DComponent_SetExtrude_Params
{
	float                                              Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Text3D.Text3DComponent.SetCastShadow
struct UText3DComponent_SetCastShadow_Params
{
	bool                                               NewCastShadow;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Text3D.Text3DComponent.SetBevelType
struct UText3DComponent_SetBevelType_Params
{
	enum class EText3DBevelType                        Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Text3D.Text3DComponent.SetBevelSegments
struct UText3DComponent_SetBevelSegments_Params
{
	int                                                Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Text3D.Text3DComponent.SetBevelMaterial
struct UText3DComponent_SetBevelMaterial_Params
{
	class UMaterialInterface*                          Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Text3D.Text3DComponent.SetBevel
struct UText3DComponent_SetBevel_Params
{
	float                                              Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Text3D.Text3DComponent.SetBackMaterial
struct UText3DComponent_SetBackMaterial_Params
{
	class UMaterialInterface*                          Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Text3D.Text3DComponent.GetGlyphMeshComponents
struct UText3DComponent_GetGlyphMeshComponents_Params
{
	TArray<class UStaticMeshComponent*>                ReturnValue;                                              // (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Text3D.Text3DComponent.GetGlyphMeshComponent
struct UText3DComponent_GetGlyphMeshComponent_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Text3D.Text3DComponent.GetGlyphKerningComponents
struct UText3DComponent_GetGlyphKerningComponents_Params
{
	TArray<class USceneComponent*>                     ReturnValue;                                              // (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Text3D.Text3DComponent.GetGlyphKerningComponent
struct UText3DComponent_GetGlyphKerningComponent_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Text3D.Text3DComponent.GetGlyphCount
struct UText3DComponent_GetGlyphCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Text3D.Text3DComponent.GetBounds
struct UText3DComponent_GetBounds_Params
{
	struct FVector                                     Origin;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BoxExtent;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
