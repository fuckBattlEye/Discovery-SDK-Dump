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

// Function Text3D.Text3DCharacterTransform.SetScaleRange
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Range                          (Parm, ZeroConstructor, IsPlainOldData)

void UText3DCharacterTransform::SetScaleRange(float Range)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Text3D.Text3DCharacterTransform.SetScaleRange"));

	UText3DCharacterTransform_SetScaleRange_Params params;
	params.Range = Range;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Text3D.Text3DCharacterTransform.SetScaleProgress
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Progress                       (Parm, ZeroConstructor, IsPlainOldData)

void UText3DCharacterTransform::SetScaleProgress(float Progress)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Text3D.Text3DCharacterTransform.SetScaleProgress"));

	UText3DCharacterTransform_SetScaleProgress_Params params;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Text3D.Text3DCharacterTransform.SetScaleOrder
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EText3DCharacterEffectOrder Order                          (Parm, ZeroConstructor, IsPlainOldData)

void UText3DCharacterTransform::SetScaleOrder(enum class EText3DCharacterEffectOrder Order)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Text3D.Text3DCharacterTransform.SetScaleOrder"));

	UText3DCharacterTransform_SetScaleOrder_Params params;
	params.Order = Order;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Text3D.Text3DCharacterTransform.SetScaleEnd
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UText3DCharacterTransform::SetScaleEnd(const struct FVector& Value)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Text3D.Text3DCharacterTransform.SetScaleEnd"));

	UText3DCharacterTransform_SetScaleEnd_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Text3D.Text3DCharacterTransform.SetScaleEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UText3DCharacterTransform::SetScaleEnabled(bool bEnabled)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Text3D.Text3DCharacterTransform.SetScaleEnabled"));

	UText3DCharacterTransform_SetScaleEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Text3D.Text3DCharacterTransform.SetScaleBegin
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UText3DCharacterTransform::SetScaleBegin(const struct FVector& Value)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Text3D.Text3DCharacterTransform.SetScaleBegin"));

	UText3DCharacterTransform_SetScaleBegin_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Text3D.Text3DCharacterTransform.SetRotateRange
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Range                          (Parm, ZeroConstructor, IsPlainOldData)

void UText3DCharacterTransform::SetRotateRange(float Range)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Text3D.Text3DCharacterTransform.SetRotateRange"));

	UText3DCharacterTransform_SetRotateRange_Params params;
	params.Range = Range;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Text3D.Text3DCharacterTransform.SetRotateProgress
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Progress                       (Parm, ZeroConstructor, IsPlainOldData)

void UText3DCharacterTransform::SetRotateProgress(float Progress)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Text3D.Text3DCharacterTransform.SetRotateProgress"));

	UText3DCharacterTransform_SetRotateProgress_Params params;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Text3D.Text3DCharacterTransform.SetRotateOrder
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EText3DCharacterEffectOrder Order                          (Parm, ZeroConstructor, IsPlainOldData)

void UText3DCharacterTransform::SetRotateOrder(enum class EText3DCharacterEffectOrder Order)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Text3D.Text3DCharacterTransform.SetRotateOrder"));

	UText3DCharacterTransform_SetRotateOrder_Params params;
	params.Order = Order;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Text3D.Text3DCharacterTransform.SetRotateEnd
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UText3DCharacterTransform::SetRotateEnd(const struct FRotator& Value)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Text3D.Text3DCharacterTransform.SetRotateEnd"));

	UText3DCharacterTransform_SetRotateEnd_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Text3D.Text3DCharacterTransform.SetRotateEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UText3DCharacterTransform::SetRotateEnabled(bool bEnabled)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Text3D.Text3DCharacterTransform.SetRotateEnabled"));

	UText3DCharacterTransform_SetRotateEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Text3D.Text3DCharacterTransform.SetRotateBegin
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UText3DCharacterTransform::SetRotateBegin(const struct FRotator& Value)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Text3D.Text3DCharacterTransform.SetRotateBegin"));

	UText3DCharacterTransform_SetRotateBegin_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Text3D.Text3DCharacterTransform.SetLocationRange
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Range                          (Parm, ZeroConstructor, IsPlainOldData)

void UText3DCharacterTransform::SetLocationRange(float Range)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Text3D.Text3DCharacterTransform.SetLocationRange"));

	UText3DCharacterTransform_SetLocationRange_Params params;
	params.Range = Range;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Text3D.Text3DCharacterTransform.SetLocationProgress
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Progress                       (Parm, ZeroConstructor, IsPlainOldData)

void UText3DCharacterTransform::SetLocationProgress(float Progress)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Text3D.Text3DCharacterTransform.SetLocationProgress"));

	UText3DCharacterTransform_SetLocationProgress_Params params;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Text3D.Text3DCharacterTransform.SetLocationOrder
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EText3DCharacterEffectOrder Order                          (Parm, ZeroConstructor, IsPlainOldData)

void UText3DCharacterTransform::SetLocationOrder(enum class EText3DCharacterEffectOrder Order)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Text3D.Text3DCharacterTransform.SetLocationOrder"));

	UText3DCharacterTransform_SetLocationOrder_Params params;
	params.Order = Order;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Text3D.Text3DCharacterTransform.SetLocationEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UText3DCharacterTransform::SetLocationEnabled(bool bEnabled)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Text3D.Text3DCharacterTransform.SetLocationEnabled"));

	UText3DCharacterTransform_SetLocationEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Text3D.Text3DCharacterTransform.SetLocationDistance
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Distance                       (Parm, ZeroConstructor, IsPlainOldData)

void UText3DCharacterTransform::SetLocationDistance(const struct FVector& Distance)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Text3D.Text3DCharacterTransform.SetLocationDistance"));

	UText3DCharacterTransform_SetLocationDistance_Params params;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction Text3D.Text3DComponent.TextGenerated__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UText3DComponent::TextGenerated__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("DelegateFunction Text3D.Text3DComponent.TextGenerated__DelegateSignature"));

	UText3DComponent_TextGenerated__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Text3D.Text3DComponent.SetWordSpacing
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UText3DComponent::SetWordSpacing(float Value)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Text3D.Text3DComponent.SetWordSpacing"));

	UText3DComponent_SetWordSpacing_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Text3D.Text3DComponent.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EText3DVerticalTextAlignment Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UText3DComponent::SetVerticalAlignment(enum class EText3DVerticalTextAlignment Value)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Text3D.Text3DComponent.SetVerticalAlignment"));

	UText3DComponent_SetVerticalAlignment_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Text3D.Text3DComponent.SetText
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FText                   Value                          (ConstParm, Parm, OutParm, ReferenceParm)

void UText3DComponent::SetText(const struct FText& Value)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Text3D.Text3DComponent.SetText"));

	UText3DComponent_SetText_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Text3D.Text3DComponent.SetScaleProportionally
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UText3DComponent::SetScaleProportionally(bool Value)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Text3D.Text3DComponent.SetScaleProportionally"));

	UText3DComponent_SetScaleProportionally_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Text3D.Text3DComponent.SetOutlineExpand
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UText3DComponent::SetOutlineExpand(float Value)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Text3D.Text3DComponent.SetOutlineExpand"));

	UText3DComponent_SetOutlineExpand_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Text3D.Text3DComponent.SetOutline
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bValue                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UText3DComponent::SetOutline(bool bValue)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Text3D.Text3DComponent.SetOutline"));

	UText3DComponent_SetOutline_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Text3D.Text3DComponent.SetMaxWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UText3DComponent::SetMaxWidth(float Value)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Text3D.Text3DComponent.SetMaxWidth"));

	UText3DComponent_SetMaxWidth_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Text3D.Text3DComponent.SetMaxHeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UText3DComponent::SetMaxHeight(float Value)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Text3D.Text3DComponent.SetMaxHeight"));

	UText3DComponent_SetMaxHeight_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Text3D.Text3DComponent.SetLineSpacing
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UText3DComponent::SetLineSpacing(float Value)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Text3D.Text3DComponent.SetLineSpacing"));

	UText3DComponent_SetLineSpacing_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Text3D.Text3DComponent.SetKerning
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UText3DComponent::SetKerning(float Value)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Text3D.Text3DComponent.SetKerning"));

	UText3DComponent_SetKerning_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Text3D.Text3DComponent.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EText3DHorizontalTextAlignment Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UText3DComponent::SetHorizontalAlignment(enum class EText3DHorizontalTextAlignment Value)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Text3D.Text3DComponent.SetHorizontalAlignment"));

	UText3DComponent_SetHorizontalAlignment_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Text3D.Text3DComponent.SetHasMaxWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UText3DComponent::SetHasMaxWidth(bool Value)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Text3D.Text3DComponent.SetHasMaxWidth"));

	UText3DComponent_SetHasMaxWidth_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Text3D.Text3DComponent.SetHasMaxHeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UText3DComponent::SetHasMaxHeight(bool Value)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Text3D.Text3DComponent.SetHasMaxHeight"));

	UText3DComponent_SetHasMaxHeight_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Text3D.Text3DComponent.SetFrontMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*      Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UText3DComponent::SetFrontMaterial(class UMaterialInterface* Value)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Text3D.Text3DComponent.SetFrontMaterial"));

	UText3DComponent_SetFrontMaterial_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Text3D.Text3DComponent.SetFreeze
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bFreeze                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UText3DComponent::SetFreeze(bool bFreeze)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Text3D.Text3DComponent.SetFreeze"));

	UText3DComponent_SetFreeze_Params params;
	params.bFreeze = bFreeze;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Text3D.Text3DComponent.SetFont
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFont*                   InFont                         (Parm, ZeroConstructor, IsPlainOldData)

void UText3DComponent::SetFont(class UFont* InFont)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Text3D.Text3DComponent.SetFont"));

	UText3DComponent_SetFont_Params params;
	params.InFont = InFont;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Text3D.Text3DComponent.SetExtrudeMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*      Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UText3DComponent::SetExtrudeMaterial(class UMaterialInterface* Value)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Text3D.Text3DComponent.SetExtrudeMaterial"));

	UText3DComponent_SetExtrudeMaterial_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Text3D.Text3DComponent.SetExtrude
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UText3DComponent::SetExtrude(float Value)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Text3D.Text3DComponent.SetExtrude"));

	UText3DComponent_SetExtrude_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Text3D.Text3DComponent.SetCastShadow
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           NewCastShadow                  (Parm, ZeroConstructor, IsPlainOldData)

void UText3DComponent::SetCastShadow(bool NewCastShadow)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Text3D.Text3DComponent.SetCastShadow"));

	UText3DComponent_SetCastShadow_Params params;
	params.NewCastShadow = NewCastShadow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Text3D.Text3DComponent.SetBevelType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EText3DBevelType    Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UText3DComponent::SetBevelType(enum class EText3DBevelType Value)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Text3D.Text3DComponent.SetBevelType"));

	UText3DComponent_SetBevelType_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Text3D.Text3DComponent.SetBevelSegments
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UText3DComponent::SetBevelSegments(int Value)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Text3D.Text3DComponent.SetBevelSegments"));

	UText3DComponent_SetBevelSegments_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Text3D.Text3DComponent.SetBevelMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*      Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UText3DComponent::SetBevelMaterial(class UMaterialInterface* Value)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Text3D.Text3DComponent.SetBevelMaterial"));

	UText3DComponent_SetBevelMaterial_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Text3D.Text3DComponent.SetBevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UText3DComponent::SetBevel(float Value)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Text3D.Text3DComponent.SetBevel"));

	UText3DComponent_SetBevel_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Text3D.Text3DComponent.SetBackMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*      Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UText3DComponent::SetBackMaterial(class UMaterialInterface* Value)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Text3D.Text3DComponent.SetBackMaterial"));

	UText3DComponent_SetBackMaterial_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Text3D.Text3DComponent.GetGlyphMeshComponents
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class UStaticMeshComponent*> ReturnValue                    (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<class UStaticMeshComponent*> UText3DComponent::GetGlyphMeshComponents()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Text3D.Text3DComponent.GetGlyphMeshComponents"));

	UText3DComponent_GetGlyphMeshComponents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Text3D.Text3DComponent.GetGlyphMeshComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class UStaticMeshComponent*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UStaticMeshComponent* UText3DComponent::GetGlyphMeshComponent(int Index)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Text3D.Text3DComponent.GetGlyphMeshComponent"));

	UText3DComponent_GetGlyphMeshComponent_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Text3D.Text3DComponent.GetGlyphKerningComponents
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class USceneComponent*> ReturnValue                    (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<class USceneComponent*> UText3DComponent::GetGlyphKerningComponents()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Text3D.Text3DComponent.GetGlyphKerningComponents"));

	UText3DComponent_GetGlyphKerningComponents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Text3D.Text3DComponent.GetGlyphKerningComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USceneComponent* UText3DComponent::GetGlyphKerningComponent(int Index)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Text3D.Text3DComponent.GetGlyphKerningComponent"));

	UText3DComponent_GetGlyphKerningComponent_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Text3D.Text3DComponent.GetGlyphCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UText3DComponent::GetGlyphCount()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Text3D.Text3DComponent.GetGlyphCount"));

	UText3DComponent_GetGlyphCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Text3D.Text3DComponent.GetBounds
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Origin                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 BoxExtent                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UText3DComponent::GetBounds(struct FVector* Origin, struct FVector* BoxExtent)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function Text3D.Text3DComponent.GetBounds"));

	UText3DComponent_GetBounds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Origin != nullptr)
		*Origin = params.Origin;
	if (BoxExtent != nullptr)
		*BoxExtent = params.BoxExtent;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
