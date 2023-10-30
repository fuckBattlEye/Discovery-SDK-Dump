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

// Function VariantManagerContent.LevelVariantSets.GetVariantSetByName
struct ULevelVariantSets_GetVariantSetByName_Params
{
	struct FString                                     VariantSetName;                                           // (Parm, ZeroConstructor)
	class UVariantSet*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VariantManagerContent.LevelVariantSets.GetVariantSet
struct ULevelVariantSets_GetVariantSet_Params
{
	int                                                VariantSetIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UVariantSet*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VariantManagerContent.LevelVariantSets.GetNumVariantSets
struct ULevelVariantSets_GetNumVariantSets_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByName
struct ALevelVariantSetsActor_SwitchOnVariantByName_Params
{
	struct FString                                     VariantSetName;                                           // (Parm, ZeroConstructor)
	struct FString                                     VariantName;                                              // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByIndex
struct ALevelVariantSetsActor_SwitchOnVariantByIndex_Params
{
	int                                                VariantSetIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                VariantIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VariantManagerContent.LevelVariantSetsActor.SetLevelVariantSets
struct ALevelVariantSetsActor_SetLevelVariantSets_Params
{
	class ULevelVariantSets*                           InVariantSets;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VariantManagerContent.LevelVariantSetsActor.GetLevelVariantSets
struct ALevelVariantSetsActor_GetLevelVariantSets_Params
{
	bool                                               bLoad;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class ULevelVariantSets*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VariantManagerContent.PropertyValue.HasRecordedData
struct UPropertyValue_HasRecordedData_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VariantManagerContent.PropertyValue.GetPropertyTooltip
struct UPropertyValue_GetPropertyTooltip_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function VariantManagerContent.PropertyValue.GetFullDisplayString
struct UPropertyValue_GetFullDisplayString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function VariantManagerContent.SwitchActor.SelectOption
struct ASwitchActor_SelectOption_Params
{
	int                                                OptionIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VariantManagerContent.SwitchActor.GetSelectedOption
struct ASwitchActor_GetSelectedOption_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VariantManagerContent.SwitchActor.GetOptions
struct ASwitchActor_GetOptions_Params
{
	TArray<class AActor*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function VariantManagerContent.Variant.SwitchOn
struct UVariant_SwitchOn_Params
{
};

// Function VariantManagerContent.Variant.SetThumbnailFromTexture
struct UVariant_SetThumbnailFromTexture_Params
{
	class UTexture2D*                                  NewThumbnail;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VariantManagerContent.Variant.SetThumbnailFromFile
struct UVariant_SetThumbnailFromFile_Params
{
	struct FString                                     FilePath;                                                 // (Parm, ZeroConstructor)
};

// Function VariantManagerContent.Variant.SetThumbnailFromEditorViewport
struct UVariant_SetThumbnailFromEditorViewport_Params
{
};

// Function VariantManagerContent.Variant.SetThumbnailFromCamera
struct UVariant_SetThumbnailFromCamera_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  CameraTransform;                                          // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              FOVDegrees;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinZ;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Gamma;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VariantManagerContent.Variant.SetDisplayText
struct UVariant_SetDisplayText_Params
{
	struct FText                                       NewDisplayText;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VariantManagerContent.Variant.SetDependency
struct UVariant_SetDependency_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVariantDependency                          Dependency;                                               // (Parm, OutParm)
};

// Function VariantManagerContent.Variant.IsActive
struct UVariant_IsActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VariantManagerContent.Variant.GetThumbnail
struct UVariant_GetThumbnail_Params
{
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VariantManagerContent.Variant.GetParent
struct UVariant_GetParent_Params
{
	class UVariantSet*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VariantManagerContent.Variant.GetNumDependencies
struct UVariant_GetNumDependencies_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VariantManagerContent.Variant.GetNumActors
struct UVariant_GetNumActors_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VariantManagerContent.Variant.GetDisplayText
struct UVariant_GetDisplayText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function VariantManagerContent.Variant.GetDependents
struct UVariant_GetDependents_Params
{
	class ULevelVariantSets*                           LevelVariantSets;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyEnabledDependencies;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UVariant*>                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function VariantManagerContent.Variant.GetDependency
struct UVariant_GetDependency_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVariantDependency                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function VariantManagerContent.Variant.GetActor
struct UVariant_GetActor_Params
{
	int                                                ActorIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VariantManagerContent.Variant.DeleteDependency
struct UVariant_DeleteDependency_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VariantManagerContent.Variant.AddDependency
struct UVariant_AddDependency_Params
{
	struct FVariantDependency                          Dependency;                                               // (Parm, OutParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VariantManagerContent.VariantSet.SetThumbnailFromTexture
struct UVariantSet_SetThumbnailFromTexture_Params
{
	class UTexture2D*                                  NewThumbnail;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VariantManagerContent.VariantSet.SetThumbnailFromFile
struct UVariantSet_SetThumbnailFromFile_Params
{
	struct FString                                     FilePath;                                                 // (Parm, ZeroConstructor)
};

// Function VariantManagerContent.VariantSet.SetThumbnailFromEditorViewport
struct UVariantSet_SetThumbnailFromEditorViewport_Params
{
};

// Function VariantManagerContent.VariantSet.SetThumbnailFromCamera
struct UVariantSet_SetThumbnailFromCamera_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  CameraTransform;                                          // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              FOVDegrees;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinZ;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Gamma;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VariantManagerContent.VariantSet.SetDisplayText
struct UVariantSet_SetDisplayText_Params
{
	struct FText                                       NewDisplayText;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VariantManagerContent.VariantSet.GetVariantByName
struct UVariantSet_GetVariantByName_Params
{
	struct FString                                     VariantName;                                              // (Parm, ZeroConstructor)
	class UVariant*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VariantManagerContent.VariantSet.GetVariant
struct UVariantSet_GetVariant_Params
{
	int                                                VariantIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UVariant*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VariantManagerContent.VariantSet.GetThumbnail
struct UVariantSet_GetThumbnail_Params
{
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VariantManagerContent.VariantSet.GetParent
struct UVariantSet_GetParent_Params
{
	class ULevelVariantSets*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VariantManagerContent.VariantSet.GetNumVariants
struct UVariantSet_GetNumVariants_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VariantManagerContent.VariantSet.GetDisplayText
struct UVariantSet_GetDisplayText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
