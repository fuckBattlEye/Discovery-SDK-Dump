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

// Function AngelscriptCode.GameplayLibrary.AsyncSaveGameToSlot
struct UGameplayLibrary_AsyncSaveGameToSlot_Params
{
	class USaveGame*                                   SaveGameObject;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     SlotName;                                                 // (Parm, ZeroConstructor)
	int                                                UserIndex;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             Delegate;                                                 // (Parm, ZeroConstructor)
};

// Function AngelscriptCode.GameplayLibrary.AsyncLoadGameFromSlot
struct UGameplayLibrary_AsyncLoadGameFromSlot_Params
{
	struct FString                                     SlotName;                                                 // (Parm, ZeroConstructor)
	int                                                UserIndex;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             Delegate;                                                 // (Parm, ZeroConstructor)
};

// Function AngelscriptCode.GameplayTagContainerMixinLibrary.RemoveTags
struct UGameplayTagContainerMixinLibrary_RemoveTags_Params
{
	struct FGameplayTagContainer                       GameplayTagContainer;                                     // (Parm, OutParm)
	struct FGameplayTagContainer                       TagsToRemove;                                             // (Parm)
};

// Function AngelscriptCode.GameplayTagContainerMixinLibrary.RemoveTag
struct UGameplayTagContainerMixinLibrary_RemoveTag_Params
{
	struct FGameplayTagContainer                       GameplayTagContainer;                                     // (Parm, OutParm)
	struct FGameplayTag                                TagToRemove;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptCode.GameplayTagContainerMixinLibrary.Num
struct UGameplayTagContainerMixinLibrary_Num_Params
{
	struct FGameplayTagContainer                       GameplayTagContainer;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptCode.GameplayTagContainerMixinLibrary.MatchesQuery
struct UGameplayTagContainerMixinLibrary_MatchesQuery_Params
{
	struct FGameplayTagContainer                       GameplayTagContainer;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagQuery                           Query;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptCode.GameplayTagContainerMixinLibrary.Last
struct UGameplayTagContainerMixinLibrary_Last_Params
{
	struct FGameplayTagContainer                       GameplayTagContainer;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AngelscriptCode.GameplayTagContainerMixinLibrary.IsValid
struct UGameplayTagContainerMixinLibrary_IsValid_Params
{
	struct FGameplayTagContainer                       GameplayTagContainer;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptCode.GameplayTagContainerMixinLibrary.IsEmpty
struct UGameplayTagContainerMixinLibrary_IsEmpty_Params
{
	struct FGameplayTagContainer                       GameplayTagContainer;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptCode.GameplayTagContainerMixinLibrary.HasTagExact
struct UGameplayTagContainerMixinLibrary_HasTagExact_Params
{
	struct FGameplayTagContainer                       GameplayTagContainer;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                TagToCheck;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptCode.GameplayTagContainerMixinLibrary.HasTag
struct UGameplayTagContainerMixinLibrary_HasTag_Params
{
	struct FGameplayTagContainer                       GameplayTagContainer;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                TagToCheck;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptCode.GameplayTagContainerMixinLibrary.HasAnyExact
struct UGameplayTagContainerMixinLibrary_HasAnyExact_Params
{
	struct FGameplayTagContainer                       GameplayTagContainer;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       ContainerToCheck;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptCode.GameplayTagContainerMixinLibrary.HasAny
struct UGameplayTagContainerMixinLibrary_HasAny_Params
{
	struct FGameplayTagContainer                       GameplayTagContainer;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       ContainerToCheck;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptCode.GameplayTagContainerMixinLibrary.HasAllExact
struct UGameplayTagContainerMixinLibrary_HasAllExact_Params
{
	struct FGameplayTagContainer                       GameplayTagContainer;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       ContainerToCheck;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptCode.GameplayTagContainerMixinLibrary.HasAll
struct UGameplayTagContainerMixinLibrary_HasAll_Params
{
	struct FGameplayTagContainer                       GameplayTagContainer;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       ContainerToCheck;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptCode.GameplayTagContainerMixinLibrary.GetGameplayTagParents
struct UGameplayTagContainerMixinLibrary_GetGameplayTagParents_Params
{
	struct FGameplayTagContainer                       GameplayTagContainer;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AngelscriptCode.GameplayTagContainerMixinLibrary.First
struct UGameplayTagContainerMixinLibrary_First_Params
{
	struct FGameplayTagContainer                       GameplayTagContainer;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AngelscriptCode.GameplayTagContainerMixinLibrary.FilterExact
struct UGameplayTagContainerMixinLibrary_FilterExact_Params
{
	struct FGameplayTagContainer                       GameplayTagContainer;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       OtherContainer;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AngelscriptCode.GameplayTagContainerMixinLibrary.Filter
struct UGameplayTagContainerMixinLibrary_Filter_Params
{
	struct FGameplayTagContainer                       GameplayTagContainer;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       OtherContainer;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AngelscriptCode.GameplayTagContainerMixinLibrary.AddTagFast
struct UGameplayTagContainerMixinLibrary_AddTagFast_Params
{
	struct FGameplayTagContainer                       GameplayTagContainer;                                     // (Parm, OutParm)
	struct FGameplayTag                                TagToAdd;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AngelscriptCode.GameplayTagContainerMixinLibrary.AddTag
struct UGameplayTagContainerMixinLibrary_AddTag_Params
{
	struct FGameplayTagContainer                       GameplayTagContainer;                                     // (Parm, OutParm)
	struct FGameplayTag                                TagToAdd;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AngelscriptCode.GameplayTagContainerMixinLibrary.AddLeafTag
struct UGameplayTagContainerMixinLibrary_AddLeafTag_Params
{
	struct FGameplayTagContainer                       GameplayTagContainer;                                     // (Parm, OutParm)
	struct FGameplayTag                                TagToAdd;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AngelscriptCode.GameplayTagMixinLibrary.RequestDirectParent
struct UGameplayTagMixinLibrary_RequestDirectParent_Params
{
	struct FGameplayTag                                GameplayTag;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AngelscriptCode.GameplayTagMixinLibrary.MatchesTagExact
struct UGameplayTagMixinLibrary_MatchesTagExact_Params
{
	struct FGameplayTag                                GameplayTag;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                TagToCheck;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptCode.GameplayTagMixinLibrary.MatchesTagDepth
struct UGameplayTagMixinLibrary_MatchesTagDepth_Params
{
	struct FGameplayTag                                GameplayTag;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                TagToCheck;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptCode.GameplayTagMixinLibrary.MatchesTag
struct UGameplayTagMixinLibrary_MatchesTag_Params
{
	struct FGameplayTag                                GameplayTag;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                TagToCheck;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptCode.GameplayTagMixinLibrary.MatchesAnyExact
struct UGameplayTagMixinLibrary_MatchesAnyExact_Params
{
	struct FGameplayTag                                GameplayTag;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       ContainerToCheck;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptCode.GameplayTagMixinLibrary.MatchesAny
struct UGameplayTagMixinLibrary_MatchesAny_Params
{
	struct FGameplayTag                                GameplayTag;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       ContainerToCheck;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptCode.GameplayTagMixinLibrary.IsValid
struct UGameplayTagMixinLibrary_IsValid_Params
{
	struct FGameplayTag                                GameplayTag;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptCode.GameplayTagMixinLibrary.GetSingleTagContainer
struct UGameplayTagMixinLibrary_GetSingleTagContainer_Params
{
	struct FGameplayTag                                GameplayTag;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AngelscriptCode.GameplayTagMixinLibrary.GetGameplayTagParents
struct UGameplayTagMixinLibrary_GetGameplayTagParents_Params
{
	struct FGameplayTag                                GameplayTag;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AngelscriptCode.GameplayTagQueryMixinLibrary.Matches
struct UGameplayTagQueryMixinLibrary_Matches_Params
{
	struct FGameplayTagQuery                           GameplayTagQuery;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       Tags;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptCode.GameplayTagQueryMixinLibrary.IsEmpty
struct UGameplayTagQueryMixinLibrary_IsEmpty_Params
{
	struct FGameplayTagQuery                           GameplayTagQuery;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptCode.GameplayTagQueryMixinLibrary.GetDescription
struct UGameplayTagQueryMixinLibrary_GetDescription_Params
{
	struct FGameplayTagQuery                           GameplayTagQuery;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AngelscriptCode.InputComponentScriptMixinLibrary.RemoveActionBindingForHandle
struct UInputComponentScriptMixinLibrary_RemoveActionBindingForHandle_Params
{
	class UInputComponent*                             Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                Handle;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AngelscriptCode.InputComponentScriptMixinLibrary.RemoveAction
struct UInputComponentScriptMixinLibrary_RemoveAction_Params
{
	class UInputComponent*                             Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       ActionName;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TEnumAsByte<EInputEvent>                           KeyEvent;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AngelscriptCode.InputComponentScriptMixinLibrary.BindVectorAxis
struct UInputComponentScriptMixinLibrary_BindVectorAxis_Params
{
	class UInputComponent*                             Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FKey                                        AxisKey;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FScriptDelegate                             Delegate;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AngelscriptCode.InputComponentScriptMixinLibrary.BindKey
struct UInputComponentScriptMixinLibrary_BindKey_Params
{
	class UInputComponent*                             Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FKey                                        Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<EInputEvent>                           KeyEvent;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             Delegate;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bConsumeInput;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AngelscriptCode.InputComponentScriptMixinLibrary.BindChord
struct UInputComponentScriptMixinLibrary_BindChord_Params
{
	class UInputComponent*                             Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FInputChord                                 Chord;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<EInputEvent>                           KeyEvent;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             Delegate;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AngelscriptCode.InputComponentScriptMixinLibrary.BindAxisKey
struct UInputComponentScriptMixinLibrary_BindAxisKey_Params
{
	class UInputComponent*                             Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       AxisKey;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FScriptDelegate                             Delegate;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bConsumeInput;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AngelscriptCode.InputComponentScriptMixinLibrary.BindAxis
struct UInputComponentScriptMixinLibrary_BindAxis_Params
{
	class UInputComponent*                             Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       AxisName;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FScriptDelegate                             Delegate;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bConsumeInput;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AngelscriptCode.InputComponentScriptMixinLibrary.BindAction
struct UInputComponentScriptMixinLibrary_BindAction_Params
{
	class UInputComponent*                             Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       ActionName;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TEnumAsByte<EInputEvent>                           KeyEvent;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             Delegate;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bConsumeInput;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptCode.PlayerControllerInputScriptMixinLibrary.PushInputComponent
struct UPlayerControllerInputScriptMixinLibrary_PushInputComponent_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UInputComponent*                             Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AngelscriptCode.PlayerControllerInputScriptMixinLibrary.PopInputComponent
struct UPlayerControllerInputScriptMixinLibrary_PopInputComponent_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UInputComponent*                             Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AngelscriptCode.PlayerControllerInputScriptMixinLibrary.GetPlayerInput
struct UPlayerControllerInputScriptMixinLibrary_GetPlayerInput_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UPlayerInput*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptCode.PlayerInputScriptMixinLibrary.SetMouseSensitivity
struct UPlayerInputScriptMixinLibrary_SetMouseSensitivity_Params
{
	class UPlayerInput*                                PlayerInput;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Sensitivity;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AngelscriptCode.PlayerInputScriptMixinLibrary.RemoveAxisMapping
struct UPlayerInputScriptMixinLibrary_RemoveAxisMapping_Params
{
	class UPlayerInput*                                PlayerInput;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FInputAxisKeyMapping                        KeyMapping;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AngelscriptCode.PlayerInputScriptMixinLibrary.RemoveActionMapping
struct UPlayerInputScriptMixinLibrary_RemoveActionMapping_Params
{
	class UPlayerInput*                                PlayerInput;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FInputActionKeyMapping                      KeyMapping;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AngelscriptCode.PlayerInputScriptMixinLibrary.InvertAxis
struct UPlayerInputScriptMixinLibrary_InvertAxis_Params
{
	class UPlayerInput*                                PlayerInput;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       AxisName;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AngelscriptCode.PlayerInputScriptMixinLibrary.GetMouseSensitivityY
struct UPlayerInputScriptMixinLibrary_GetMouseSensitivityY_Params
{
	class UPlayerInput*                                PlayerInput;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptCode.PlayerInputScriptMixinLibrary.GetMouseSensitivityX
struct UPlayerInputScriptMixinLibrary_GetMouseSensitivityX_Params
{
	class UPlayerInput*                                PlayerInput;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptCode.PlayerInputScriptMixinLibrary.GetKeysForAxis
struct UPlayerInputScriptMixinLibrary_GetKeysForAxis_Params
{
	class UPlayerInput*                                PlayerInput;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       AxisName;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FInputAxisKeyMapping>                ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function AngelscriptCode.PlayerInputScriptMixinLibrary.GetKeysForAction
struct UPlayerInputScriptMixinLibrary_GetKeysForAction_Params
{
	class UPlayerInput*                                PlayerInput;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ActionName;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FInputActionKeyMapping>              ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function AngelscriptCode.PlayerInputScriptMixinLibrary.GetEngineDefinedAxisMappings
struct UPlayerInputScriptMixinLibrary_GetEngineDefinedAxisMappings_Params
{
	class UPlayerInput*                                PlayerInput;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       AxisName;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FInputAxisKeyMapping>                ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function AngelscriptCode.PlayerInputScriptMixinLibrary.GetEngineDefinedActionMappings
struct UPlayerInputScriptMixinLibrary_GetEngineDefinedActionMappings_Params
{
	class UPlayerInput*                                PlayerInput;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ActionName;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FInputActionKeyMapping>              ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function AngelscriptCode.PlayerInputScriptMixinLibrary.ForceRebuildingKeyMaps
struct UPlayerInputScriptMixinLibrary_ForceRebuildingKeyMaps_Params
{
	class UPlayerInput*                                PlayerInput;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRestoreDefaults;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AngelscriptCode.PlayerInputScriptMixinLibrary.AddAxisMapping
struct UPlayerInputScriptMixinLibrary_AddAxisMapping_Params
{
	class UPlayerInput*                                PlayerInput;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FInputAxisKeyMapping                        KeyMapping;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AngelscriptCode.PlayerInputScriptMixinLibrary.AddActionMapping
struct UPlayerInputScriptMixinLibrary_AddActionMapping_Params
{
	class UPlayerInput*                                PlayerInput;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FInputActionKeyMapping                      KeyMapping;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AngelscriptCode.TestTerminatorComponent.ServerTerminatorReplicated
struct UTestTerminatorComponent_ServerTerminatorReplicated_Params
{
};

// Function AngelscriptCode.LatentAutomationCommand.UpdateOnClient
struct ULatentAutomationCommand_UpdateOnClient_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptCode.LatentAutomationCommand.Update
struct ULatentAutomationCommand_Update_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptCode.LatentAutomationCommand.HasAuthority
struct ULatentAutomationCommand_HasAuthority_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptCode.LatentAutomationCommand.DescribeOnClient
struct ULatentAutomationCommand_DescribeOnClient_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AngelscriptCode.LatentAutomationCommand.Describe
struct ULatentAutomationCommand_Describe_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AngelscriptCode.LatentAutomationCommand.BeforeOnClient
struct ULatentAutomationCommand_BeforeOnClient_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptCode.LatentAutomationCommand.Before
struct ULatentAutomationCommand_Before_Params
{
};

// Function AngelscriptCode.LatentAutomationCommand.AfterOnClient
struct ULatentAutomationCommand_AfterOnClient_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptCode.LatentAutomationCommand.After
struct ULatentAutomationCommand_After_Params
{
};

// Function AngelscriptCode.LatentAutomationCommandClientExecutor.ServerLatentCommandDescribeOnClient
struct ALatentAutomationCommandClientExecutor_ServerLatentCommandDescribeOnClient_Params
{
	struct FString                                     NewDescription;                                           // (Parm, ZeroConstructor)
};

// Function AngelscriptCode.LatentAutomationCommandClientExecutor.ServerLatentCommandClientReady
struct ALatentAutomationCommandClientExecutor_ServerLatentCommandClientReady_Params
{
};

// Function AngelscriptCode.LatentAutomationCommandClientExecutor.ServerLatentCommandClientDone
struct ALatentAutomationCommandClientExecutor_ServerLatentCommandClientDone_Params
{
};

// Function AngelscriptCode.LatentAutomationCommandClientExecutor.ServerLatentCommandClientChecked
struct ALatentAutomationCommandClientExecutor_ServerLatentCommandClientChecked_Params
{
};

// Function AngelscriptCode.LatentAutomationCommandClientExecutor.ServerFail
struct ALatentAutomationCommandClientExecutor_ServerFail_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function AngelscriptCode.LatentAutomationCommandClientExecutor.ServerAssertTrue
struct ALatentAutomationCommandClientExecutor_ServerAssertTrue_Params
{
	bool                                               bExpression;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function AngelscriptCode.LatentAutomationCommandClientExecutor.ServerAssertSame
struct ALatentAutomationCommandClientExecutor_ServerAssertSame_Params
{
	class UObject*                                     Expected;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Actual;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function AngelscriptCode.LatentAutomationCommandClientExecutor.ServerAssertNull
struct ALatentAutomationCommandClientExecutor_ServerAssertNull_Params
{
	class UObject*                                     Object;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function AngelscriptCode.LatentAutomationCommandClientExecutor.ServerAssertNotSame
struct ALatentAutomationCommandClientExecutor_ServerAssertNotSame_Params
{
	class UObject*                                     Expected;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Actual;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function AngelscriptCode.LatentAutomationCommandClientExecutor.ServerAssertNotNull
struct ALatentAutomationCommandClientExecutor_ServerAssertNotNull_Params
{
	class UObject*                                     Object;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function AngelscriptCode.LatentAutomationCommandClientExecutor.ServerAssertFalse
struct ALatentAutomationCommandClientExecutor_ServerAssertFalse_Params
{
	bool                                               bExpression;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function AngelscriptCode.LatentAutomationCommandClientExecutor.Fail
struct ALatentAutomationCommandClientExecutor_Fail_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function AngelscriptCode.LatentAutomationCommandClientExecutor.AssertTrue
struct ALatentAutomationCommandClientExecutor_AssertTrue_Params
{
	bool                                               bExpression;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function AngelscriptCode.LatentAutomationCommandClientExecutor.AssertSame
struct ALatentAutomationCommandClientExecutor_AssertSame_Params
{
	class UObject*                                     Expected;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Actual;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function AngelscriptCode.LatentAutomationCommandClientExecutor.AssertNull
struct ALatentAutomationCommandClientExecutor_AssertNull_Params
{
	class UObject*                                     Object;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function AngelscriptCode.LatentAutomationCommandClientExecutor.AssertNotSame
struct ALatentAutomationCommandClientExecutor_AssertNotSame_Params
{
	class UObject*                                     Expected;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Actual;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function AngelscriptCode.LatentAutomationCommandClientExecutor.AssertNotNull
struct ALatentAutomationCommandClientExecutor_AssertNotNull_Params
{
	class UObject*                                     Object;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function AngelscriptCode.LatentAutomationCommandClientExecutor.AssertFalse
struct ALatentAutomationCommandClientExecutor_AssertFalse_Params
{
	bool                                               bExpression;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function AngelscriptCode.RuntimeFloatCurveMixinLibrary.GetValueRange_Double
struct URuntimeFloatCurveMixinLibrary_GetValueRange_Double_Params
{
	struct FRuntimeFloatCurve                          Target;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	double                                             MinValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	double                                             MaxValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AngelscriptCode.RuntimeFloatCurveMixinLibrary.GetValueRange
struct URuntimeFloatCurveMixinLibrary_GetValueRange_Params
{
	struct FRuntimeFloatCurve                          Target;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              MinValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AngelscriptCode.RuntimeFloatCurveMixinLibrary.GetTimeRange_Double
struct URuntimeFloatCurveMixinLibrary_GetTimeRange_Double_Params
{
	struct FRuntimeFloatCurve                          Target;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	double                                             MinTime;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	double                                             MaxTime;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AngelscriptCode.RuntimeFloatCurveMixinLibrary.GetTimeRange
struct URuntimeFloatCurveMixinLibrary_GetTimeRange_Params
{
	struct FRuntimeFloatCurve                          Target;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              MinTime;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              MaxTime;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AngelscriptCode.RuntimeFloatCurveMixinLibrary.GetNumKeys
struct URuntimeFloatCurveMixinLibrary_GetNumKeys_Params
{
	struct FRuntimeFloatCurve                          Target;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptCode.RuntimeFloatCurveMixinLibrary.GetFloatValue
struct URuntimeFloatCurveMixinLibrary_GetFloatValue_Params
{
	struct FRuntimeFloatCurve                          Target;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              InTime;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DefaultValue;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptCode.RuntimeFloatCurveMixinLibrary.Equals
struct URuntimeFloatCurveMixinLibrary_Equals_Params
{
	struct FRuntimeFloatCurve                          Target;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FRuntimeFloatCurve                          Other;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptCode.RuntimeFloatCurveMixinLibrary.AddDefaultKey
struct URuntimeFloatCurveMixinLibrary_AddDefaultKey_Params
{
	struct FRuntimeFloatCurve                          Target;                                                   // (Parm, OutParm)
	float                                              InTime;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AngelscriptCode.ScriptEngineSubsystem.BP_Tick
struct UScriptEngineSubsystem_BP_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AngelscriptCode.ScriptEngineSubsystem.BP_ShouldCreateSubsystem
struct UScriptEngineSubsystem_BP_ShouldCreateSubsystem_Params
{
	class UObject*                                     Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptCode.ScriptEngineSubsystem.BP_Initialize
struct UScriptEngineSubsystem_BP_Initialize_Params
{
};

// Function AngelscriptCode.ScriptEngineSubsystem.BP_Deinitialize
struct UScriptEngineSubsystem_BP_Deinitialize_Params
{
};

// Function AngelscriptCode.ScriptGameInstanceSubsystem.BP_ShouldCreateSubsystem
struct UScriptGameInstanceSubsystem_BP_ShouldCreateSubsystem_Params
{
	class UObject*                                     Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptCode.ScriptGameInstanceSubsystem.BP_Initialize
struct UScriptGameInstanceSubsystem_BP_Initialize_Params
{
};

// Function AngelscriptCode.ScriptGameInstanceSubsystem.BP_GetGameInstance
struct UScriptGameInstanceSubsystem_BP_GetGameInstance_Params
{
	class UGameInstance*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptCode.ScriptGameInstanceSubsystem.BP_Deinitialize
struct UScriptGameInstanceSubsystem_BP_Deinitialize_Params
{
};

// Function AngelscriptCode.ScriptLocalPlayerSubsystem.BP_ShouldCreateSubsystem
struct UScriptLocalPlayerSubsystem_BP_ShouldCreateSubsystem_Params
{
	class UObject*                                     Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptCode.ScriptLocalPlayerSubsystem.BP_Initialize
struct UScriptLocalPlayerSubsystem_BP_Initialize_Params
{
};

// Function AngelscriptCode.ScriptLocalPlayerSubsystem.BP_GetLocalPlayer
struct UScriptLocalPlayerSubsystem_BP_GetLocalPlayer_Params
{
	class ULocalPlayer*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptCode.ScriptLocalPlayerSubsystem.BP_Deinitialize
struct UScriptLocalPlayerSubsystem_BP_Deinitialize_Params
{
};

// Function AngelscriptCode.ScriptWorldSubsystem.BP_UpdateStreamingState
struct UScriptWorldSubsystem_BP_UpdateStreamingState_Params
{
};

// Function AngelscriptCode.ScriptWorldSubsystem.BP_Tick
struct UScriptWorldSubsystem_BP_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AngelscriptCode.ScriptWorldSubsystem.BP_ShouldCreateSubsystem
struct UScriptWorldSubsystem_BP_ShouldCreateSubsystem_Params
{
	class UObject*                                     Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptCode.ScriptWorldSubsystem.BP_PostInitialize
struct UScriptWorldSubsystem_BP_PostInitialize_Params
{
};

// Function AngelscriptCode.ScriptWorldSubsystem.BP_OnWorldComponentsUpdated
struct UScriptWorldSubsystem_BP_OnWorldComponentsUpdated_Params
{
};

// Function AngelscriptCode.ScriptWorldSubsystem.BP_OnWorldBeginPlay
struct UScriptWorldSubsystem_BP_OnWorldBeginPlay_Params
{
};

// Function AngelscriptCode.ScriptWorldSubsystem.BP_Initialize
struct UScriptWorldSubsystem_BP_Initialize_Params
{
};

// Function AngelscriptCode.ScriptWorldSubsystem.BP_Deinitialize
struct UScriptWorldSubsystem_BP_Deinitialize_Params
{
};

// Function AngelscriptCode.SubsystemLibrary.GetWorldSubsystem
struct USubsystemLibrary_GetWorldSubsystem_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UWorldSubsystem*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptCode.SubsystemLibrary.GetLocalPlayerSubsystemFromPlayerController
struct USubsystemLibrary_GetLocalPlayerSubsystemFromPlayerController_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class ULocalPlayerSubsystem*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptCode.SubsystemLibrary.GetLocalPlayerSubsystemFromLocalPlayer
struct USubsystemLibrary_GetLocalPlayerSubsystemFromLocalPlayer_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class ULocalPlayer*                                LocalPlayer;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class ULocalPlayerSubsystem*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptCode.SubsystemLibrary.GetLocalPlayerSubsystem
struct USubsystemLibrary_GetLocalPlayerSubsystem_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class ULocalPlayerSubsystem*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptCode.SubsystemLibrary.GetGameInstanceSubsystem
struct USubsystemLibrary_GetGameInstanceSubsystem_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UGameInstanceSubsystem*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptCode.SubsystemLibrary.GetEngineSubsystem
struct USubsystemLibrary_GetEngineSubsystem_Params
{
	class UClass*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UEngineSubsystem*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptCode.TimelineComponentMixinLibrary.SetTimelineFinishedFunc
struct UTimelineComponentMixinLibrary_SetTimelineFinishedFunc_Params
{
	class UTimelineComponent*                          Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptDelegate                             NewTimelineFinishedFunc;                                  // (Parm, ZeroConstructor)
};

// Function AngelscriptCode.TimelineComponentMixinLibrary.AddInterpVector
struct UTimelineComponentMixinLibrary_AddInterpVector_Params
{
	class UTimelineComponent*                          Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCurveVector*                                VectorCurve;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             InterpFunc;                                               // (Parm, ZeroConstructor)
	struct FName                                       PropertyName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TrackName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AngelscriptCode.TimelineComponentMixinLibrary.AddInterpLinearColor
struct UTimelineComponentMixinLibrary_AddInterpLinearColor_Params
{
	class UTimelineComponent*                          Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCurveLinearColor*                           LinearColorCurve;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             InterpFunc;                                               // (Parm, ZeroConstructor)
	struct FName                                       PropertyName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TrackName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AngelscriptCode.TimelineComponentMixinLibrary.AddInterpFloat
struct UTimelineComponentMixinLibrary_AddInterpFloat_Params
{
	class UTimelineComponent*                          Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCurveFloat*                                 FloatCurve;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             InterpFunc;                                               // (Parm, ZeroConstructor)
	struct FName                                       PropertyName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TrackName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AngelscriptCode.TimelineComponentMixinLibrary.AddEvent
struct UTimelineComponentMixinLibrary_AddEvent_Params
{
	class UTimelineComponent*                          Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             EventFunc;                                                // (Parm, ZeroConstructor)
};

// Function AngelscriptCode.AssetManagerMixinLibrary.GetPrimaryAssetTypeInfoList
struct UAssetManagerMixinLibrary_GetPrimaryAssetTypeInfoList_Params
{
	class UAssetManager*                               AssetManager;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FPrimaryAssetTypeInfo>               AssetTypeInfoList;                                        // (Parm, OutParm, ZeroConstructor)
};

// Function AngelscriptCode.AssetManagerMixinLibrary.GetPrimaryAssetTypeInfo
struct UAssetManagerMixinLibrary_GetPrimaryAssetTypeInfo_Params
{
	class UAssetManager*                               AssetManager;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPrimaryAssetType                           PrimaryAssetType;                                         // (Parm, ZeroConstructor)
	struct FPrimaryAssetTypeInfo                       AssetTypeInfo;                                            // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptCode.AssetManagerMixinLibrary.GetPrimaryAssetObject
struct UAssetManagerMixinLibrary_GetPrimaryAssetObject_Params
{
	class UAssetManager*                               AssetManager;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPrimaryAssetId                             PrimaryAssetId;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptCode.AssetManagerMixinLibrary.GetPrimaryAssetIdList
struct UAssetManagerMixinLibrary_GetPrimaryAssetIdList_Params
{
	class UAssetManager*                               AssetManager;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPrimaryAssetType                           PrimaryAssetType;                                         // (Parm, ZeroConstructor)
	TArray<struct FPrimaryAssetId>                     PrimaryAssetIdList;                                       // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptCode.AssetManagerMixinLibrary.GetPrimaryAssetIdForObject
struct UAssetManagerMixinLibrary_GetPrimaryAssetIdForObject_Params
{
	class UAssetManager*                               AssetManager;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPrimaryAssetId                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AngelscriptCode.AssetManagerMixinLibrary.GetPrimaryAssetDataList
struct UAssetManagerMixinLibrary_GetPrimaryAssetDataList_Params
{
	class UAssetManager*                               AssetManager;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPrimaryAssetType                           PrimaryAssetType;                                         // (Parm, ZeroConstructor)
	TArray<struct FAssetData>                          AssetDataList;                                            // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptCode.AssetManagerMixinLibrary.GetPrimaryAssetData
struct UAssetManagerMixinLibrary_GetPrimaryAssetData_Params
{
	class UAssetManager*                               AssetManager;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPrimaryAssetId                             PrimaryAssetId;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FAssetData                                  AssetData;                                                // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AngelscriptCode.ObjectInWorld.SetWorldContext
struct UObjectInWorld_SetWorldContext_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AngelscriptCode.ObjectInWorld.SetWorld
struct UObjectInWorld_SetWorld_Params
{
	class UWorld*                                      InWorld;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AngelscriptCode.ObjectInWorld.DestroyObject
struct UObjectInWorld_DestroyObject_Params
{
};

// Function AngelscriptCode.ObjectTickable.SetWorldContext
struct UObjectTickable_SetWorldContext_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AngelscriptCode.ObjectTickable.SetWorld
struct UObjectTickable_SetWorld_Params
{
	class UWorld*                                      InWorld;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AngelscriptCode.ObjectTickable.DestroyObject
struct UObjectTickable_DestroyObject_Params
{
};

// Function AngelscriptCode.ObjectTickable.BP_Tick
struct UObjectTickable_BP_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AngelscriptCode.WidgetBlueprintStatics.CreateWidget
struct UWidgetBlueprintStatics_CreateWidget_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      WidgetType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           OwningPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
