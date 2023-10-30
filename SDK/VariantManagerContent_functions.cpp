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

// Function VariantManagerContent.LevelVariantSets.GetVariantSetByName
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 VariantSetName                 (Parm, ZeroConstructor)
// class UVariantSet*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UVariantSet* ULevelVariantSets::GetVariantSetByName(const struct FString& VariantSetName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function VariantManagerContent.LevelVariantSets.GetVariantSetByName"));

	ULevelVariantSets_GetVariantSetByName_Params params;
	params.VariantSetName = VariantSetName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VariantManagerContent.LevelVariantSets.GetVariantSet
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            VariantSetIndex                (Parm, ZeroConstructor, IsPlainOldData)
// class UVariantSet*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UVariantSet* ULevelVariantSets::GetVariantSet(int VariantSetIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function VariantManagerContent.LevelVariantSets.GetVariantSet"));

	ULevelVariantSets_GetVariantSet_Params params;
	params.VariantSetIndex = VariantSetIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VariantManagerContent.LevelVariantSets.GetNumVariantSets
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ULevelVariantSets::GetNumVariantSets()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function VariantManagerContent.LevelVariantSets.GetNumVariantSets"));

	ULevelVariantSets_GetNumVariantSets_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 VariantSetName                 (Parm, ZeroConstructor)
// struct FString                 VariantName                    (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALevelVariantSetsActor::SwitchOnVariantByName(const struct FString& VariantSetName, const struct FString& VariantName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByName"));

	ALevelVariantSetsActor_SwitchOnVariantByName_Params params;
	params.VariantSetName = VariantSetName;
	params.VariantName = VariantName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            VariantSetIndex                (Parm, ZeroConstructor, IsPlainOldData)
// int                            VariantIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALevelVariantSetsActor::SwitchOnVariantByIndex(int VariantSetIndex, int VariantIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByIndex"));

	ALevelVariantSetsActor_SwitchOnVariantByIndex_Params params;
	params.VariantSetIndex = VariantSetIndex;
	params.VariantIndex = VariantIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VariantManagerContent.LevelVariantSetsActor.SetLevelVariantSets
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULevelVariantSets*       InVariantSets                  (Parm, ZeroConstructor, IsPlainOldData)

void ALevelVariantSetsActor::SetLevelVariantSets(class ULevelVariantSets* InVariantSets)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function VariantManagerContent.LevelVariantSetsActor.SetLevelVariantSets"));

	ALevelVariantSetsActor_SetLevelVariantSets_Params params;
	params.InVariantSets = InVariantSets;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VariantManagerContent.LevelVariantSetsActor.GetLevelVariantSets
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bLoad                          (Parm, ZeroConstructor, IsPlainOldData)
// class ULevelVariantSets*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ULevelVariantSets* ALevelVariantSetsActor::GetLevelVariantSets(bool bLoad)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function VariantManagerContent.LevelVariantSetsActor.GetLevelVariantSets"));

	ALevelVariantSetsActor_GetLevelVariantSets_Params params;
	params.bLoad = bLoad;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VariantManagerContent.PropertyValue.HasRecordedData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPropertyValue::HasRecordedData()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function VariantManagerContent.PropertyValue.HasRecordedData"));

	UPropertyValue_HasRecordedData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VariantManagerContent.PropertyValue.GetPropertyTooltip
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UPropertyValue::GetPropertyTooltip()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function VariantManagerContent.PropertyValue.GetPropertyTooltip"));

	UPropertyValue_GetPropertyTooltip_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VariantManagerContent.PropertyValue.GetFullDisplayString
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UPropertyValue::GetFullDisplayString()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function VariantManagerContent.PropertyValue.GetFullDisplayString"));

	UPropertyValue_GetFullDisplayString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VariantManagerContent.SwitchActor.SelectOption
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            OptionIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void ASwitchActor::SelectOption(int OptionIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function VariantManagerContent.SwitchActor.SelectOption"));

	ASwitchActor_SelectOption_Params params;
	params.OptionIndex = OptionIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VariantManagerContent.SwitchActor.GetSelectedOption
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ASwitchActor::GetSelectedOption()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function VariantManagerContent.SwitchActor.GetSelectedOption"));

	ASwitchActor_GetSelectedOption_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VariantManagerContent.SwitchActor.GetOptions
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class AActor*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AActor*> ASwitchActor::GetOptions()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function VariantManagerContent.SwitchActor.GetOptions"));

	ASwitchActor_GetOptions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VariantManagerContent.Variant.SwitchOn
// (Final, Native, Public, BlueprintCallable)

void UVariant::SwitchOn()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function VariantManagerContent.Variant.SwitchOn"));

	UVariant_SwitchOn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VariantManagerContent.Variant.SetThumbnailFromTexture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTexture2D*              NewThumbnail                   (Parm, ZeroConstructor, IsPlainOldData)

void UVariant::SetThumbnailFromTexture(class UTexture2D* NewThumbnail)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function VariantManagerContent.Variant.SetThumbnailFromTexture"));

	UVariant_SetThumbnailFromTexture_Params params;
	params.NewThumbnail = NewThumbnail;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VariantManagerContent.Variant.SetThumbnailFromFile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 FilePath                       (Parm, ZeroConstructor)

void UVariant::SetThumbnailFromFile(const struct FString& FilePath)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function VariantManagerContent.Variant.SetThumbnailFromFile"));

	UVariant_SetThumbnailFromFile_Params params;
	params.FilePath = FilePath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VariantManagerContent.Variant.SetThumbnailFromEditorViewport
// (Final, Native, Public, BlueprintCallable)

void UVariant::SetThumbnailFromEditorViewport()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function VariantManagerContent.Variant.SetThumbnailFromEditorViewport"));

	UVariant_SetThumbnailFromEditorViewport_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VariantManagerContent.Variant.SetThumbnailFromCamera
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              CameraTransform                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          FOVDegrees                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          MinZ                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Gamma                          (Parm, ZeroConstructor, IsPlainOldData)

void UVariant::SetThumbnailFromCamera(class UObject* WorldContextObject, const struct FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function VariantManagerContent.Variant.SetThumbnailFromCamera"));

	UVariant_SetThumbnailFromCamera_Params params;
	params.WorldContextObject = WorldContextObject;
	params.CameraTransform = CameraTransform;
	params.FOVDegrees = FOVDegrees;
	params.MinZ = MinZ;
	params.Gamma = Gamma;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VariantManagerContent.Variant.SetDisplayText
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FText                   NewDisplayText                 (ConstParm, Parm, OutParm, ReferenceParm)

void UVariant::SetDisplayText(const struct FText& NewDisplayText)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function VariantManagerContent.Variant.SetDisplayText"));

	UVariant_SetDisplayText_Params params;
	params.NewDisplayText = NewDisplayText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VariantManagerContent.Variant.SetDependency
// (Final, Native, Public, HasOutParms)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVariantDependency      Dependency                     (Parm, OutParm)

void UVariant::SetDependency(int Index, struct FVariantDependency* Dependency)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function VariantManagerContent.Variant.SetDependency"));

	UVariant_SetDependency_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Dependency != nullptr)
		*Dependency = params.Dependency;
}


// Function VariantManagerContent.Variant.IsActive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVariant::IsActive()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function VariantManagerContent.Variant.IsActive"));

	UVariant_IsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VariantManagerContent.Variant.GetThumbnail
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* UVariant::GetThumbnail()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function VariantManagerContent.Variant.GetThumbnail"));

	UVariant_GetThumbnail_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VariantManagerContent.Variant.GetParent
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UVariantSet*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UVariantSet* UVariant::GetParent()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function VariantManagerContent.Variant.GetParent"));

	UVariant_GetParent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VariantManagerContent.Variant.GetNumDependencies
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UVariant::GetNumDependencies()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function VariantManagerContent.Variant.GetNumDependencies"));

	UVariant_GetNumDependencies_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VariantManagerContent.Variant.GetNumActors
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UVariant::GetNumActors()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function VariantManagerContent.Variant.GetNumActors"));

	UVariant_GetNumActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VariantManagerContent.Variant.GetDisplayText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UVariant::GetDisplayText()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function VariantManagerContent.Variant.GetDisplayText"));

	UVariant_GetDisplayText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VariantManagerContent.Variant.GetDependents
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULevelVariantSets*       LevelVariantSets               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOnlyEnabledDependencies       (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UVariant*>        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UVariant*> UVariant::GetDependents(class ULevelVariantSets* LevelVariantSets, bool bOnlyEnabledDependencies)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function VariantManagerContent.Variant.GetDependents"));

	UVariant_GetDependents_Params params;
	params.LevelVariantSets = LevelVariantSets;
	params.bOnlyEnabledDependencies = bOnlyEnabledDependencies;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VariantManagerContent.Variant.GetDependency
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVariantDependency      ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVariantDependency UVariant::GetDependency(int Index)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function VariantManagerContent.Variant.GetDependency"));

	UVariant_GetDependency_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VariantManagerContent.Variant.GetActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ActorIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UVariant::GetActor(int ActorIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function VariantManagerContent.Variant.GetActor"));

	UVariant_GetActor_Params params;
	params.ActorIndex = ActorIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VariantManagerContent.Variant.DeleteDependency
// (Final, Native, Public)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UVariant::DeleteDependency(int Index)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function VariantManagerContent.Variant.DeleteDependency"));

	UVariant_DeleteDependency_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VariantManagerContent.Variant.AddDependency
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FVariantDependency      Dependency                     (Parm, OutParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UVariant::AddDependency(struct FVariantDependency* Dependency)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function VariantManagerContent.Variant.AddDependency"));

	UVariant_AddDependency_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Dependency != nullptr)
		*Dependency = params.Dependency;

	return params.ReturnValue;
}


// Function VariantManagerContent.VariantSet.SetThumbnailFromTexture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTexture2D*              NewThumbnail                   (Parm, ZeroConstructor, IsPlainOldData)

void UVariantSet::SetThumbnailFromTexture(class UTexture2D* NewThumbnail)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function VariantManagerContent.VariantSet.SetThumbnailFromTexture"));

	UVariantSet_SetThumbnailFromTexture_Params params;
	params.NewThumbnail = NewThumbnail;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VariantManagerContent.VariantSet.SetThumbnailFromFile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 FilePath                       (Parm, ZeroConstructor)

void UVariantSet::SetThumbnailFromFile(const struct FString& FilePath)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function VariantManagerContent.VariantSet.SetThumbnailFromFile"));

	UVariantSet_SetThumbnailFromFile_Params params;
	params.FilePath = FilePath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VariantManagerContent.VariantSet.SetThumbnailFromEditorViewport
// (Final, Native, Public, BlueprintCallable)

void UVariantSet::SetThumbnailFromEditorViewport()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function VariantManagerContent.VariantSet.SetThumbnailFromEditorViewport"));

	UVariantSet_SetThumbnailFromEditorViewport_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VariantManagerContent.VariantSet.SetThumbnailFromCamera
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              CameraTransform                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          FOVDegrees                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          MinZ                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Gamma                          (Parm, ZeroConstructor, IsPlainOldData)

void UVariantSet::SetThumbnailFromCamera(class UObject* WorldContextObject, const struct FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function VariantManagerContent.VariantSet.SetThumbnailFromCamera"));

	UVariantSet_SetThumbnailFromCamera_Params params;
	params.WorldContextObject = WorldContextObject;
	params.CameraTransform = CameraTransform;
	params.FOVDegrees = FOVDegrees;
	params.MinZ = MinZ;
	params.Gamma = Gamma;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VariantManagerContent.VariantSet.SetDisplayText
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FText                   NewDisplayText                 (ConstParm, Parm, OutParm, ReferenceParm)

void UVariantSet::SetDisplayText(const struct FText& NewDisplayText)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function VariantManagerContent.VariantSet.SetDisplayText"));

	UVariantSet_SetDisplayText_Params params;
	params.NewDisplayText = NewDisplayText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VariantManagerContent.VariantSet.GetVariantByName
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 VariantName                    (Parm, ZeroConstructor)
// class UVariant*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UVariant* UVariantSet::GetVariantByName(const struct FString& VariantName)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function VariantManagerContent.VariantSet.GetVariantByName"));

	UVariantSet_GetVariantByName_Params params;
	params.VariantName = VariantName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VariantManagerContent.VariantSet.GetVariant
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            VariantIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// class UVariant*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UVariant* UVariantSet::GetVariant(int VariantIndex)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function VariantManagerContent.VariantSet.GetVariant"));

	UVariantSet_GetVariant_Params params;
	params.VariantIndex = VariantIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VariantManagerContent.VariantSet.GetThumbnail
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* UVariantSet::GetThumbnail()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function VariantManagerContent.VariantSet.GetThumbnail"));

	UVariantSet_GetThumbnail_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VariantManagerContent.VariantSet.GetParent
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class ULevelVariantSets*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ULevelVariantSets* UVariantSet::GetParent()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function VariantManagerContent.VariantSet.GetParent"));

	UVariantSet_GetParent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VariantManagerContent.VariantSet.GetNumVariants
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UVariantSet::GetNumVariants()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function VariantManagerContent.VariantSet.GetNumVariants"));

	UVariantSet_GetNumVariants_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VariantManagerContent.VariantSet.GetDisplayText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UVariantSet::GetDisplayText()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function VariantManagerContent.VariantSet.GetDisplayText"));

	UVariantSet_GetDisplayText_Params params;

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
