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

// Function ControlRig.ControlRig.SupportsEvent
struct UControlRig_SupportsEvent_Params
{
	struct FName                                       InEventName;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ControlRig.ControlRig.SetVariableFromString
struct UControlRig_SetVariableFromString_Params
{
	struct FName                                       InVariableName;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FString                                     InValue;                                                  // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ControlRig.ControlRig.SetInteractionRigClass
struct UControlRig_SetInteractionRigClass_Params
{
	class UClass*                                      InInteractionRigClass;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlRig.ControlRig.SetInteractionRig
struct UControlRig_SetInteractionRig_Params
{
	class UControlRig*                                 InInteractionRig;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlRig.ControlRig.SetFramesPerSecond
struct UControlRig_SetFramesPerSecond_Params
{
	float                                              InFramesPerSecond;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlRig.ControlRig.SetDeltaTime
struct UControlRig_SetDeltaTime_Params
{
	float                                              InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlRig.ControlRig.SetAbsoluteTime
struct UControlRig_SetAbsoluteTime_Params
{
	float                                              InAbsoluteTime;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InSetDeltaTimeZero;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlRig.ControlRig.SetAbsoluteAndDeltaTime
struct UControlRig_SetAbsoluteAndDeltaTime_Params
{
	float                                              InAbsoluteTime;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlRig.ControlRig.SelectControl
struct UControlRig_SelectControl_Params
{
	struct FName                                       InControlName;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bSelect;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlRig.ControlRig.RequestSetup
struct UControlRig_RequestSetup_Params
{
};

// Function ControlRig.ControlRig.RequestInit
struct UControlRig_RequestInit_Params
{
};

// Function ControlRig.ControlRig.IsControlSelected
struct UControlRig_IsControlSelected_Params
{
	struct FName                                       InControlName;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ControlRig.ControlRig.GetVM
struct UControlRig_GetVM_Params
{
	class URigVM*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ControlRig.ControlRig.GetVariableType
struct UControlRig_GetVariableType_Params
{
	struct FName                                       InVariableName;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ControlRig.ControlRig.GetVariableAsString
struct UControlRig_GetVariableAsString_Params
{
	struct FName                                       InVariableName;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ControlRig.ControlRig.GetSupportedEvents
struct UControlRig_GetSupportedEvents_Params
{
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ControlRig.ControlRig.GetScriptAccessibleVariables
struct UControlRig_GetScriptAccessibleVariables_Params
{
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ControlRig.ControlRig.GetInteractionRigClass
struct UControlRig_GetInteractionRigClass_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ControlRig.ControlRig.GetInteractionRig
struct UControlRig_GetInteractionRig_Params
{
	class UControlRig*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ControlRig.ControlRig.GetHierarchy
struct UControlRig_GetHierarchy_Params
{
	class URigHierarchy*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ControlRig.ControlRig.GetCurrentFramesPerSecond
struct UControlRig_GetCurrentFramesPerSecond_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ControlRig.ControlRig.GetAbsoluteTime
struct UControlRig_GetAbsoluteTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ControlRig.ControlRig.FindControlRigs
struct UControlRig_FindControlRigs_Params
{
	class UObject*                                     Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      OptionalClass;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UControlRig*>                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ControlRig.ControlRig.Execute
struct UControlRig_Execute_Params
{
	enum class EControlRigState                        State;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       InEventName;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function ControlRig.ControlRig.CurrentControlSelection
struct UControlRig_CurrentControlSelection_Params
{
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ControlRig.ControlRig.ClearControlSelection
struct UControlRig_ClearControlSelection_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ControlRig.ControlRig.CanExecute
struct UControlRig_CanExecute_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ControlRig.ControlRigComponent.Update
struct UControlRigComponent_Update_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlRig.ControlRigComponent.SetMappedElements
struct UControlRigComponent_SetMappedElements_Params
{
	TArray<struct FControlRigComponentMappedElement>   NewMappedElements;                                        // (Parm, ZeroConstructor)
};

// Function ControlRig.ControlRigComponent.SetInitialSpaceTransform
struct UControlRigComponent_SetInitialSpaceTransform_Params
{
	struct FName                                       SpaceName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  InitialTransform;                                         // (Parm, IsPlainOldData)
	enum class EControlRigComponentSpace               Space;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlRig.ControlRigComponent.SetInitialBoneTransform
struct UControlRigComponent_SetInitialBoneTransform_Params
{
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  InitialTransform;                                         // (Parm, IsPlainOldData)
	enum class EControlRigComponentSpace               Space;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPropagateToChildren;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlRig.ControlRigComponent.SetControlVector2D
struct UControlRigComponent_SetControlVector2D_Params
{
	struct FName                                       ControlName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlRig.ControlRigComponent.SetControlTransform
struct UControlRigComponent_SetControlTransform_Params
{
	struct FName                                       ControlName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Value;                                                    // (Parm, IsPlainOldData)
	enum class EControlRigComponentSpace               Space;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlRig.ControlRigComponent.SetControlScale
struct UControlRigComponent_SetControlScale_Params
{
	struct FName                                       ControlName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	enum class EControlRigComponentSpace               Space;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlRig.ControlRigComponent.SetControlRotator
struct UControlRigComponent_SetControlRotator_Params
{
	struct FName                                       ControlName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	enum class EControlRigComponentSpace               Space;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlRig.ControlRigComponent.SetControlPosition
struct UControlRigComponent_SetControlPosition_Params
{
	struct FName                                       ControlName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	enum class EControlRigComponentSpace               Space;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlRig.ControlRigComponent.SetControlOffset
struct UControlRigComponent_SetControlOffset_Params
{
	struct FName                                       ControlName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  OffsetTransform;                                          // (Parm, IsPlainOldData)
	enum class EControlRigComponentSpace               Space;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlRig.ControlRigComponent.SetControlInt
struct UControlRigComponent_SetControlInt_Params
{
	struct FName                                       ControlName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlRig.ControlRigComponent.SetControlFloat
struct UControlRigComponent_SetControlFloat_Params
{
	struct FName                                       ControlName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlRig.ControlRigComponent.SetControlBool
struct UControlRigComponent_SetControlBool_Params
{
	struct FName                                       ControlName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlRig.ControlRigComponent.SetBoneTransform
struct UControlRigComponent_SetBoneTransform_Params
{
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Transform;                                                // (Parm, IsPlainOldData)
	enum class EControlRigComponentSpace               Space;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPropagateToChildren;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlRig.ControlRigComponent.SetBoneInitialTransformsFromSkeletalMesh
struct UControlRigComponent_SetBoneInitialTransformsFromSkeletalMesh_Params
{
	class USkeletalMesh*                               InSkeletalMesh;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlRig.ControlRigComponent.OnPreSetup
struct UControlRigComponent_OnPreSetup_Params
{
	class UControlRigComponent*                        Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ControlRig.ControlRigComponent.OnPreInitialize
struct UControlRigComponent_OnPreInitialize_Params
{
	class UControlRigComponent*                        Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ControlRig.ControlRigComponent.OnPreForwardsSolve
struct UControlRigComponent_OnPreForwardsSolve_Params
{
	class UControlRigComponent*                        Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ControlRig.ControlRigComponent.OnPostSetup
struct UControlRigComponent_OnPostSetup_Params
{
	class UControlRigComponent*                        Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ControlRig.ControlRigComponent.OnPostInitialize
struct UControlRigComponent_OnPostInitialize_Params
{
	class UControlRigComponent*                        Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ControlRig.ControlRigComponent.OnPostForwardsSolve
struct UControlRigComponent_OnPostForwardsSolve_Params
{
	class UControlRigComponent*                        Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ControlRig.ControlRigComponent.Initialize
struct UControlRigComponent_Initialize_Params
{
};

// Function ControlRig.ControlRigComponent.GetSpaceTransform
struct UControlRigComponent_GetSpaceTransform_Params
{
	struct FName                                       SpaceName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	enum class EControlRigComponentSpace               Space;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function ControlRig.ControlRigComponent.GetInitialSpaceTransform
struct UControlRigComponent_GetInitialSpaceTransform_Params
{
	struct FName                                       SpaceName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	enum class EControlRigComponentSpace               Space;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function ControlRig.ControlRigComponent.GetInitialBoneTransform
struct UControlRigComponent_GetInitialBoneTransform_Params
{
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	enum class EControlRigComponentSpace               Space;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function ControlRig.ControlRigComponent.GetElementNames
struct UControlRigComponent_GetElementNames_Params
{
	enum class ERigElementType                         ElementType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ControlRig.ControlRigComponent.GetControlVector2D
struct UControlRigComponent_GetControlVector2D_Params
{
	struct FName                                       ControlName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ControlRig.ControlRigComponent.GetControlTransform
struct UControlRigComponent_GetControlTransform_Params
{
	struct FName                                       ControlName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	enum class EControlRigComponentSpace               Space;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function ControlRig.ControlRigComponent.GetControlScale
struct UControlRigComponent_GetControlScale_Params
{
	struct FName                                       ControlName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	enum class EControlRigComponentSpace               Space;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ControlRig.ControlRigComponent.GetControlRotator
struct UControlRigComponent_GetControlRotator_Params
{
	struct FName                                       ControlName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	enum class EControlRigComponentSpace               Space;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ControlRig.ControlRigComponent.GetControlRig
struct UControlRigComponent_GetControlRig_Params
{
	class UControlRig*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ControlRig.ControlRigComponent.GetControlPosition
struct UControlRigComponent_GetControlPosition_Params
{
	struct FName                                       ControlName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	enum class EControlRigComponentSpace               Space;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ControlRig.ControlRigComponent.GetControlOffset
struct UControlRigComponent_GetControlOffset_Params
{
	struct FName                                       ControlName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	enum class EControlRigComponentSpace               Space;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function ControlRig.ControlRigComponent.GetControlInt
struct UControlRigComponent_GetControlInt_Params
{
	struct FName                                       ControlName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ControlRig.ControlRigComponent.GetControlFloat
struct UControlRigComponent_GetControlFloat_Params
{
	struct FName                                       ControlName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ControlRig.ControlRigComponent.GetControlBool
struct UControlRigComponent_GetControlBool_Params
{
	struct FName                                       ControlName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ControlRig.ControlRigComponent.GetBoneTransform
struct UControlRigComponent_GetBoneTransform_Params
{
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	enum class EControlRigComponentSpace               Space;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function ControlRig.ControlRigComponent.GetAbsoluteTime
struct UControlRigComponent_GetAbsoluteTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ControlRig.ControlRigComponent.DoesElementExist
struct UControlRigComponent_DoesElementExist_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	enum class ERigElementType                         ElementType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ControlRig.ControlRigComponent.ClearMappedElements
struct UControlRigComponent_ClearMappedElements_Params
{
};

// Function ControlRig.ControlRigComponent.CanExecute
struct UControlRigComponent_CanExecute_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ControlRig.ControlRigComponent.AddMappedSkeletalMesh
struct UControlRigComponent_AddMappedSkeletalMesh_Params
{
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FControlRigComponentMappedBone>      Bones;                                                    // (Parm, ZeroConstructor)
	TArray<struct FControlRigComponentMappedCurve>     Curves;                                                   // (Parm, ZeroConstructor)
};

// Function ControlRig.ControlRigComponent.AddMappedElements
struct UControlRigComponent_AddMappedElements_Params
{
	TArray<struct FControlRigComponentMappedElement>   NewMappedElements;                                        // (Parm, ZeroConstructor)
};

// Function ControlRig.ControlRigComponent.AddMappedComponents
struct UControlRigComponent_AddMappedComponents_Params
{
	TArray<struct FControlRigComponentMappedComponent> Components;                                               // (Parm, ZeroConstructor)
};

// Function ControlRig.ControlRigComponent.AddMappedCompleteSkeletalMesh
struct UControlRigComponent_AddMappedCompleteSkeletalMesh_Params
{
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ControlRig.ControlRigControlActor.Refresh
struct AControlRigControlActor_Refresh_Params
{
};

// Function ControlRig.ControlRigControlActor.Clear
struct AControlRigControlActor_Clear_Params
{
};

// Function ControlRig.ControlRigShapeActor.SetSelected
struct AControlRigShapeActor_SetSelected_Params
{
	bool                                               bInSelected;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlRig.ControlRigShapeActor.SetSelectable
struct AControlRigShapeActor_SetSelectable_Params
{
	bool                                               bInSelectable;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlRig.ControlRigShapeActor.SetHovered
struct AControlRigShapeActor_SetHovered_Params
{
	bool                                               bInHovered;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlRig.ControlRigShapeActor.SetGlobalTransform
struct AControlRigShapeActor_SetGlobalTransform_Params
{
	struct FTransform                                  InTransform;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ControlRig.ControlRigShapeActor.SetEnabled
struct AControlRigShapeActor_SetEnabled_Params
{
	bool                                               bInEnabled;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlRig.ControlRigShapeActor.OnTransformChanged
struct AControlRigShapeActor_OnTransformChanged_Params
{
	struct FTransform                                  NewTransform;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ControlRig.ControlRigShapeActor.OnSelectionChanged
struct AControlRigShapeActor_OnSelectionChanged_Params
{
	bool                                               bIsSelected;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlRig.ControlRigShapeActor.OnManipulatingChanged
struct AControlRigShapeActor_OnManipulatingChanged_Params
{
	bool                                               bIsManipulating;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlRig.ControlRigShapeActor.OnHoveredChanged
struct AControlRigShapeActor_OnHoveredChanged_Params
{
	bool                                               bIsSelected;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlRig.ControlRigShapeActor.OnEnabledChanged
struct AControlRigShapeActor_OnEnabledChanged_Params
{
	bool                                               bIsEnabled;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlRig.ControlRigShapeActor.IsSelectedInEditor
struct AControlRigShapeActor_IsSelectedInEditor_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ControlRig.ControlRigShapeActor.IsHovered
struct AControlRigShapeActor_IsHovered_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ControlRig.ControlRigShapeActor.IsEnabled
struct AControlRigShapeActor_IsEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ControlRig.ControlRigShapeActor.GetGlobalTransform
struct AControlRigShapeActor_GetGlobalTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function ControlRig.ControlRigPoseAsset.SelectControls
struct UControlRigPoseAsset_SelectControls_Params
{
	class UControlRig*                                 InControlRig;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDoMirror;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlRig.ControlRigPoseAsset.SavePose
struct UControlRigPoseAsset_SavePose_Params
{
	class UControlRig*                                 InControlRig;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseAll;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlRig.ControlRigPoseAsset.ReplaceControlName
struct UControlRigPoseAsset_ReplaceControlName_Params
{
	struct FName                                       CurrentName;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       NewName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function ControlRig.ControlRigPoseAsset.PastePose
struct UControlRigPoseAsset_PastePose_Params
{
	class UControlRig*                                 InControlRig;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDoKey;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDoMirror;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlRig.ControlRigPoseAsset.GetCurrentPose
struct UControlRigPoseAsset_GetCurrentPose_Params
{
	class UControlRig*                                 InControlRig;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FControlRigControlPose                      OutPose;                                                  // (Parm, OutParm)
};

// Function ControlRig.ControlRigPoseAsset.GetControlNames
struct UControlRigPoseAsset_GetControlNames_Params
{
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ControlRig.ControlRigPoseAsset.DoesMirrorMatch
struct UControlRigPoseAsset_DoesMirrorMatch_Params
{
	class UControlRig*                                 ControlRig;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ControlName;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ControlRig.RigHierarchy.SwitchToWorldSpace
struct URigHierarchy_SwitchToWorldSpace_Params
{
	struct FRigElementKey                              InChild;                                                  // (Parm)
	bool                                               bInitial;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAffectChildren;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ControlRig.RigHierarchy.SwitchToParent
struct URigHierarchy_SwitchToParent_Params
{
	struct FRigElementKey                              InChild;                                                  // (Parm)
	struct FRigElementKey                              InParent;                                                 // (Parm)
	bool                                               bInitial;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAffectChildren;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ControlRig.RigHierarchy.SwitchToDefaultParent
struct URigHierarchy_SwitchToDefaultParent_Params
{
	struct FRigElementKey                              InChild;                                                  // (Parm)
	bool                                               bInitial;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAffectChildren;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ControlRig.RigHierarchy.SortKeys
struct URigHierarchy_SortKeys_Params
{
	TArray<struct FRigElementKey>                      InKeys;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FRigElementKey>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ControlRig.RigHierarchy.SetPose_ForBlueprint
struct URigHierarchy_SetPose_ForBlueprint_Params
{
	struct FRigPose                                    InPose;                                                   // (Parm)
};

// Function ControlRig.RigHierarchy.SetParentWeightArray
struct URigHierarchy_SetParentWeightArray_Params
{
	struct FRigElementKey                              InChild;                                                  // (Parm)
	TArray<struct FRigElementWeight>                   InWeights;                                                // (Parm, ZeroConstructor)
	bool                                               bInitial;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAffectChildren;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ControlRig.RigHierarchy.SetParentWeight
struct URigHierarchy_SetParentWeight_Params
{
	struct FRigElementKey                              InChild;                                                  // (Parm)
	struct FRigElementKey                              InParent;                                                 // (Parm)
	struct FRigElementWeight                           InWeight;                                                 // (Parm)
	bool                                               bInitial;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAffectChildren;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ControlRig.RigHierarchy.SetLocalTransformByIndex
struct URigHierarchy_SetLocalTransformByIndex_Params
{
	int                                                InElementIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  InTransform;                                              // (Parm, IsPlainOldData)
	bool                                               bInitial;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAffectChildren;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSetupUndo;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPrintPythonCommands;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlRig.RigHierarchy.SetLocalTransform
struct URigHierarchy_SetLocalTransform_Params
{
	struct FRigElementKey                              InKey;                                                    // (Parm)
	struct FTransform                                  InTransform;                                              // (Parm, IsPlainOldData)
	bool                                               bInitial;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAffectChildren;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSetupUndo;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPrintPythonCommands;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlRig.RigHierarchy.SetGlobalTransformByIndex
struct URigHierarchy_SetGlobalTransformByIndex_Params
{
	int                                                InElementIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  InTransform;                                              // (Parm, IsPlainOldData)
	bool                                               bInitial;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAffectChildren;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSetupUndo;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlRig.RigHierarchy.SetGlobalTransform
struct URigHierarchy_SetGlobalTransform_Params
{
	struct FRigElementKey                              InKey;                                                    // (Parm)
	struct FTransform                                  InTransform;                                              // (Parm, IsPlainOldData)
	bool                                               bInitial;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAffectChildren;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSetupUndo;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlRig.RigHierarchy.SetCurveValueByIndex
struct URigHierarchy_SetCurveValueByIndex_Params
{
	int                                                InElementIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSetupUndo;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlRig.RigHierarchy.SetCurveValue
struct URigHierarchy_SetCurveValue_Params
{
	struct FRigElementKey                              InKey;                                                    // (Parm)
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSetupUndo;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlRig.RigHierarchy.SetControlVisibilityByIndex
struct URigHierarchy_SetControlVisibilityByIndex_Params
{
	int                                                InElementIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bVisibility;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlRig.RigHierarchy.SetControlVisibility
struct URigHierarchy_SetControlVisibility_Params
{
	struct FRigElementKey                              InKey;                                                    // (Parm)
	bool                                               bVisibility;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlRig.RigHierarchy.SetControlValueByIndex
struct URigHierarchy_SetControlValueByIndex_Params
{
	int                                                InElementIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRigControlValue                            InValue;                                                  // (Parm)
	enum class ERigControlValueType                    InValueType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSetupUndo;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPrintPythonCommands;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlRig.RigHierarchy.SetControlValue
struct URigHierarchy_SetControlValue_Params
{
	struct FRigElementKey                              InKey;                                                    // (Parm)
	struct FRigControlValue                            InValue;                                                  // (Parm)
	enum class ERigControlValueType                    InValueType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSetupUndo;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPrintPythonCommands;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlRig.RigHierarchy.SetControlShapeTransformByIndex
struct URigHierarchy_SetControlShapeTransformByIndex_Params
{
	int                                                InElementIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  InTransform;                                              // (Parm, IsPlainOldData)
	bool                                               bInitial;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSetupUndo;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlRig.RigHierarchy.SetControlShapeTransform
struct URigHierarchy_SetControlShapeTransform_Params
{
	struct FRigElementKey                              InKey;                                                    // (Parm)
	struct FTransform                                  InTransform;                                              // (Parm, IsPlainOldData)
	bool                                               bInitial;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSetupUndo;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlRig.RigHierarchy.SetControlSettingsByIndex
struct URigHierarchy_SetControlSettingsByIndex_Params
{
	int                                                InElementIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRigControlSettings                         InSettings;                                               // (Parm)
	bool                                               bSetupUndo;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPrintPythonCommands;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlRig.RigHierarchy.SetControlSettings
struct URigHierarchy_SetControlSettings_Params
{
	struct FRigElementKey                              InKey;                                                    // (Parm)
	struct FRigControlSettings                         InSettings;                                               // (Parm)
	bool                                               bSetupUndo;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPrintPythonCommands;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlRig.RigHierarchy.SetControlOffsetTransformByIndex
struct URigHierarchy_SetControlOffsetTransformByIndex_Params
{
	int                                                InElementIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  InTransform;                                              // (Parm, IsPlainOldData)
	bool                                               bInitial;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAffectChildren;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSetupUndo;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPrintPythonCommands;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlRig.RigHierarchy.SetControlOffsetTransform
struct URigHierarchy_SetControlOffsetTransform_Params
{
	struct FRigElementKey                              InKey;                                                    // (Parm)
	struct FTransform                                  InTransform;                                              // (Parm, IsPlainOldData)
	bool                                               bInitial;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAffectChildren;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSetupUndo;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPrintPythonCommands;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlRig.RigHierarchy.SendAutoKeyEvent
struct URigHierarchy_SendAutoKeyEvent_Params
{
	struct FRigElementKey                              InElement;                                                // (Parm)
	float                                              InOffsetInSeconds;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAsynchronous;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlRig.RigHierarchy.ResetPoseToInitial
struct URigHierarchy_ResetPoseToInitial_Params
{
	enum class ERigElementType                         InTypeFilter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlRig.RigHierarchy.ResetCurveValues
struct URigHierarchy_ResetCurveValues_Params
{
};

// Function ControlRig.RigHierarchy.Reset
struct URigHierarchy_Reset_Params
{
};

// Function ControlRig.RigHierarchy.Num
struct URigHierarchy_Num_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ControlRig.RigHierarchy.MakeControlValueFromVector2D
struct URigHierarchy_MakeControlValueFromVector2D_Params
{
	struct FVector2D                                   InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRigControlValue                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ControlRig.RigHierarchy.MakeControlValueFromVector
struct URigHierarchy_MakeControlValueFromVector_Params
{
	struct FVector                                     InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRigControlValue                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ControlRig.RigHierarchy.MakeControlValueFromTransformNoScale
struct URigHierarchy_MakeControlValueFromTransformNoScale_Params
{
	struct FTransformNoScale                           InValue;                                                  // (Parm)
	struct FRigControlValue                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ControlRig.RigHierarchy.MakeControlValueFromTransform
struct URigHierarchy_MakeControlValueFromTransform_Params
{
	struct FTransform                                  InValue;                                                  // (Parm, IsPlainOldData)
	struct FRigControlValue                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ControlRig.RigHierarchy.MakeControlValueFromRotator
struct URigHierarchy_MakeControlValueFromRotator_Params
{
	struct FRotator                                    InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRigControlValue                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ControlRig.RigHierarchy.MakeControlValueFromInt
struct URigHierarchy_MakeControlValueFromInt_Params
{
	int                                                InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRigControlValue                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ControlRig.RigHierarchy.MakeControlValueFromFloat
struct URigHierarchy_MakeControlValueFromFloat_Params
{
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRigControlValue                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ControlRig.RigHierarchy.MakeControlValueFromEulerTransform
struct URigHierarchy_MakeControlValueFromEulerTransform_Params
{
	struct FEulerTransform                             InValue;                                                  // (Parm)
	struct FRigControlValue                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ControlRig.RigHierarchy.MakeControlValueFromBool
struct URigHierarchy_MakeControlValueFromBool_Params
{
	bool                                               InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRigControlValue                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ControlRig.RigHierarchy.IsValidIndex
struct URigHierarchy_IsValidIndex_Params
{
	int                                                InElementIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ControlRig.RigHierarchy.IsSelectedByIndex
struct URigHierarchy_IsSelectedByIndex_Params
{
	int                                                InIndex;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ControlRig.RigHierarchy.IsSelected
struct URigHierarchy_IsSelected_Params
{
	struct FRigElementKey                              InKey;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ControlRig.RigHierarchy.IsParentedTo
struct URigHierarchy_IsParentedTo_Params
{
	struct FRigElementKey                              InChild;                                                  // (Parm)
	struct FRigElementKey                              InParent;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ControlRig.RigHierarchy.GetVectorFromControlValue
struct URigHierarchy_GetVectorFromControlValue_Params
{
	struct FRigControlValue                            InValue;                                                  // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ControlRig.RigHierarchy.GetVector2DFromControlValue
struct URigHierarchy_GetVector2DFromControlValue_Params
{
	struct FRigControlValue                            InValue;                                                  // (Parm)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ControlRig.RigHierarchy.GetTransformNoScaleFromControlValue
struct URigHierarchy_GetTransformNoScaleFromControlValue_Params
{
	struct FRigControlValue                            InValue;                                                  // (Parm)
	struct FTransformNoScale                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ControlRig.RigHierarchy.GetTransformFromControlValue
struct URigHierarchy_GetTransformFromControlValue_Params
{
	struct FRigControlValue                            InValue;                                                  // (Parm)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function ControlRig.RigHierarchy.GetSelectedKeys
struct URigHierarchy_GetSelectedKeys_Params
{
	enum class ERigElementType                         InTypeFilter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FRigElementKey>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ControlRig.RigHierarchy.GetRotatorFromControlValue
struct URigHierarchy_GetRotatorFromControlValue_Params
{
	struct FRigControlValue                            InValue;                                                  // (Parm)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ControlRig.RigHierarchy.GetRigidBodyKeys
struct URigHierarchy_GetRigidBodyKeys_Params
{
	bool                                               bTraverse;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FRigElementKey>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ControlRig.RigHierarchy.GetReferenceKeys
struct URigHierarchy_GetReferenceKeys_Params
{
	bool                                               bTraverse;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FRigElementKey>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ControlRig.RigHierarchy.GetPreviousParent
struct URigHierarchy_GetPreviousParent_Params
{
	struct FRigElementKey                              InKey;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FRigElementKey                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ControlRig.RigHierarchy.GetPreviousName
struct URigHierarchy_GetPreviousName_Params
{
	struct FRigElementKey                              InKey;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ControlRig.RigHierarchy.GetPose
struct URigHierarchy_GetPose_Params
{
	bool                                               bInitial;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRigPose                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ControlRig.RigHierarchy.GetParentWeightArray
struct URigHierarchy_GetParentWeightArray_Params
{
	struct FRigElementKey                              InChild;                                                  // (Parm)
	bool                                               bInitial;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FRigElementWeight>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ControlRig.RigHierarchy.GetParentWeight
struct URigHierarchy_GetParentWeight_Params
{
	struct FRigElementKey                              InChild;                                                  // (Parm)
	struct FRigElementKey                              InParent;                                                 // (Parm)
	bool                                               bInitial;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRigElementWeight                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ControlRig.RigHierarchy.GetParentTransformByIndex
struct URigHierarchy_GetParentTransformByIndex_Params
{
	int                                                InElementIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInitial;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function ControlRig.RigHierarchy.GetParentTransform
struct URigHierarchy_GetParentTransform_Params
{
	struct FRigElementKey                              InKey;                                                    // (Parm)
	bool                                               bInitial;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function ControlRig.RigHierarchy.GetParents
struct URigHierarchy_GetParents_Params
{
	struct FRigElementKey                              InKey;                                                    // (Parm)
	bool                                               bRecursive;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FRigElementKey>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ControlRig.RigHierarchy.GetNumberOfParents
struct URigHierarchy_GetNumberOfParents_Params
{
	struct FRigElementKey                              InKey;                                                    // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ControlRig.RigHierarchy.GetNullKeys
struct URigHierarchy_GetNullKeys_Params
{
	bool                                               bTraverse;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FRigElementKey>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ControlRig.RigHierarchy.GetLocalTransformByIndex
struct URigHierarchy_GetLocalTransformByIndex_Params
{
	int                                                InElementIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInitial;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function ControlRig.RigHierarchy.GetLocalTransform
struct URigHierarchy_GetLocalTransform_Params
{
	struct FRigElementKey                              InKey;                                                    // (Parm)
	bool                                               bInitial;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function ControlRig.RigHierarchy.GetKey
struct URigHierarchy_GetKey_Params
{
	int                                                InElementIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRigElementKey                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ControlRig.RigHierarchy.GetIntFromControlValue
struct URigHierarchy_GetIntFromControlValue_Params
{
	struct FRigControlValue                            InValue;                                                  // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ControlRig.RigHierarchy.GetIndex_ForBlueprint
struct URigHierarchy_GetIndex_ForBlueprint_Params
{
	struct FRigElementKey                              InKey;                                                    // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ControlRig.RigHierarchy.GetGlobalTransformByIndex
struct URigHierarchy_GetGlobalTransformByIndex_Params
{
	int                                                InElementIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInitial;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function ControlRig.RigHierarchy.GetGlobalTransform
struct URigHierarchy_GetGlobalTransform_Params
{
	struct FRigElementKey                              InKey;                                                    // (Parm)
	bool                                               bInitial;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function ControlRig.RigHierarchy.GetGlobalControlShapeTransformByIndex
struct URigHierarchy_GetGlobalControlShapeTransformByIndex_Params
{
	int                                                InElementIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInitial;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function ControlRig.RigHierarchy.GetGlobalControlShapeTransform
struct URigHierarchy_GetGlobalControlShapeTransform_Params
{
	struct FRigElementKey                              InKey;                                                    // (Parm)
	bool                                               bInitial;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function ControlRig.RigHierarchy.GetGlobalControlOffsetTransformByIndex
struct URigHierarchy_GetGlobalControlOffsetTransformByIndex_Params
{
	int                                                InElementIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInitial;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function ControlRig.RigHierarchy.GetGlobalControlOffsetTransform
struct URigHierarchy_GetGlobalControlOffsetTransform_Params
{
	struct FRigElementKey                              InKey;                                                    // (Parm)
	bool                                               bInitial;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function ControlRig.RigHierarchy.GetFloatFromControlValue
struct URigHierarchy_GetFloatFromControlValue_Params
{
	struct FRigControlValue                            InValue;                                                  // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ControlRig.RigHierarchy.GetFirstParent
struct URigHierarchy_GetFirstParent_Params
{
	struct FRigElementKey                              InKey;                                                    // (Parm)
	struct FRigElementKey                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ControlRig.RigHierarchy.GetEulerTransformFromControlValue
struct URigHierarchy_GetEulerTransformFromControlValue_Params
{
	struct FRigControlValue                            InValue;                                                  // (Parm)
	struct FEulerTransform                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ControlRig.RigHierarchy.GetCurveValueByIndex
struct URigHierarchy_GetCurveValueByIndex_Params
{
	int                                                InElementIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ControlRig.RigHierarchy.GetCurveValue
struct URigHierarchy_GetCurveValue_Params
{
	struct FRigElementKey                              InKey;                                                    // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ControlRig.RigHierarchy.GetCurveKeys
struct URigHierarchy_GetCurveKeys_Params
{
	TArray<struct FRigElementKey>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ControlRig.RigHierarchy.GetControlValueByIndex
struct URigHierarchy_GetControlValueByIndex_Params
{
	int                                                InElementIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	enum class ERigControlValueType                    InValueType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRigControlValue                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ControlRig.RigHierarchy.GetControlValue
struct URigHierarchy_GetControlValue_Params
{
	struct FRigElementKey                              InKey;                                                    // (Parm)
	enum class ERigControlValueType                    InValueType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRigControlValue                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ControlRig.RigHierarchy.GetController
struct URigHierarchy_GetController_Params
{
	bool                                               bCreateIfNeeded;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class URigHierarchyController*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ControlRig.RigHierarchy.GetControlKeys
struct URigHierarchy_GetControlKeys_Params
{
	bool                                               bTraverse;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FRigElementKey>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ControlRig.RigHierarchy.GetChildren
struct URigHierarchy_GetChildren_Params
{
	struct FRigElementKey                              InKey;                                                    // (Parm)
	bool                                               bRecursive;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FRigElementKey>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ControlRig.RigHierarchy.GetBoneKeys
struct URigHierarchy_GetBoneKeys_Params
{
	bool                                               bTraverse;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FRigElementKey>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ControlRig.RigHierarchy.GetAllKeys_ForBlueprint
struct URigHierarchy_GetAllKeys_ForBlueprint_Params
{
	bool                                               bTraverse;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FRigElementKey>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ControlRig.RigHierarchy.FindNull_ForBlueprintOnly
struct URigHierarchy_FindNull_ForBlueprintOnly_Params
{
	struct FRigElementKey                              InKey;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FRigNullElement                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ControlRig.RigHierarchy.FindControl_ForBlueprintOnly
struct URigHierarchy_FindControl_ForBlueprintOnly_Params
{
	struct FRigElementKey                              InKey;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FRigControlElement                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ControlRig.RigHierarchy.FindBone_ForBlueprintOnly
struct URigHierarchy_FindBone_ForBlueprintOnly_Params
{
	struct FRigElementKey                              InKey;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FRigBoneElement                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ControlRig.RigHierarchy.CopyPose
struct URigHierarchy_CopyPose_Params
{
	class URigHierarchy*                               InHierarchy;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCurrent;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInitial;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlRig.RigHierarchy.CopyHierarchy
struct URigHierarchy_CopyHierarchy_Params
{
	class URigHierarchy*                               InHierarchy;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlRig.RigHierarchy.Contains_ForBlueprint
struct URigHierarchy_Contains_ForBlueprint_Params
{
	struct FRigElementKey                              InKey;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ControlRig.RigHierarchyController.SetSelection
struct URigHierarchyController_SetSelection_Params
{
	TArray<struct FRigElementKey>                      InKeys;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bPrintPythonCommand;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ControlRig.RigHierarchyController.SetParent
struct URigHierarchyController_SetParent_Params
{
	struct FRigElementKey                              InChild;                                                  // (Parm)
	struct FRigElementKey                              InParent;                                                 // (Parm)
	bool                                               bMaintainGlobalTransform;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSetupUndo;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPrintPythonCommand;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ControlRig.RigHierarchyController.SetHierarchy
struct URigHierarchyController_SetHierarchy_Params
{
	class URigHierarchy*                               InHierarchy;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlRig.RigHierarchyController.SetControlSettings
struct URigHierarchyController_SetControlSettings_Params
{
	struct FRigElementKey                              InKey;                                                    // (Parm)
	struct FRigControlSettings                         InSettings;                                               // (Parm)
	bool                                               bSetupUndo;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ControlRig.RigHierarchyController.SelectElement
struct URigHierarchyController_SelectElement_Params
{
	struct FRigElementKey                              InKey;                                                    // (Parm)
	bool                                               bSelect;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bClearSelection;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ControlRig.RigHierarchyController.RenameElement
struct URigHierarchyController_RenameElement_Params
{
	struct FRigElementKey                              InElement;                                                // (Parm)
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSetupUndo;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPrintPythonCommand;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bClearSelection;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRigElementKey                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ControlRig.RigHierarchyController.RemoveParent
struct URigHierarchyController_RemoveParent_Params
{
	struct FRigElementKey                              InChild;                                                  // (Parm)
	struct FRigElementKey                              InParent;                                                 // (Parm)
	bool                                               bMaintainGlobalTransform;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSetupUndo;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPrintPythonCommand;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ControlRig.RigHierarchyController.RemoveElement
struct URigHierarchyController_RemoveElement_Params
{
	struct FRigElementKey                              InElement;                                                // (Parm)
	bool                                               bSetupUndo;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPrintPythonCommand;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ControlRig.RigHierarchyController.RemoveAllParents
struct URigHierarchyController_RemoveAllParents_Params
{
	struct FRigElementKey                              InChild;                                                  // (Parm)
	bool                                               bMaintainGlobalTransform;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSetupUndo;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPrintPythonCommand;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ControlRig.RigHierarchyController.MirrorElements
struct URigHierarchyController_MirrorElements_Params
{
	TArray<struct FRigElementKey>                      InKeys;                                                   // (Parm, ZeroConstructor)
	struct FRigMirrorSettings                          InSettings;                                               // (Parm)
	bool                                               bSelectNewElements;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSetupUndo;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPrintPythonCommands;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FRigElementKey>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ControlRig.RigHierarchyController.ImportFromText
struct URigHierarchyController_ImportFromText_Params
{
	struct FString                                     InContent;                                                // (Parm, ZeroConstructor)
	bool                                               bReplaceExistingElements;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSelectNewElements;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSetupUndo;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPrintPythonCommands;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FRigElementKey>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ControlRig.RigHierarchyController.ImportCurves
struct URigHierarchyController_ImportCurves_Params
{
	class USkeleton*                                   InSkeleton;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       InNameSpace;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSelectCurves;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSetupUndo;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPrintPythonCommand;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FRigElementKey>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ControlRig.RigHierarchyController.ImportBones
struct URigHierarchyController_ImportBones_Params
{
	class USkeleton*                                   InSkeleton;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       InNameSpace;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bReplaceExistingBones;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRemoveObsoleteBones;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSelectBones;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSetupUndo;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPrintPythonCommand;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FRigElementKey>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ControlRig.RigHierarchyController.GetHierarchy
struct URigHierarchyController_GetHierarchy_Params
{
	class URigHierarchy*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ControlRig.RigHierarchyController.GetControlSettings
struct URigHierarchyController_GetControlSettings_Params
{
	struct FRigElementKey                              InKey;                                                    // (Parm)
	struct FRigControlSettings                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ControlRig.RigHierarchyController.ExportToText
struct URigHierarchyController_ExportToText_Params
{
	TArray<struct FRigElementKey>                      InKeys;                                                   // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ControlRig.RigHierarchyController.ExportSelectionToText
struct URigHierarchyController_ExportSelectionToText_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ControlRig.RigHierarchyController.DuplicateElements
struct URigHierarchyController_DuplicateElements_Params
{
	TArray<struct FRigElementKey>                      InKeys;                                                   // (Parm, ZeroConstructor)
	bool                                               bSelectNewElements;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSetupUndo;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPrintPythonCommands;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FRigElementKey>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ControlRig.RigHierarchyController.DeselectElement
struct URigHierarchyController_DeselectElement_Params
{
	struct FRigElementKey                              InKey;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ControlRig.RigHierarchyController.ClearSelection
struct URigHierarchyController_ClearSelection_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ControlRig.RigHierarchyController.AddRigidBody
struct URigHierarchyController_AddRigidBody_Params
{
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRigElementKey                              InParent;                                                 // (Parm)
	struct FRigRigidBodySettings                       InSettings;                                               // (Parm)
	struct FTransform                                  InLocalTransform;                                         // (Parm, IsPlainOldData)
	bool                                               bSetupUndo;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPrintPythonCommand;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRigElementKey                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ControlRig.RigHierarchyController.AddParent
struct URigHierarchyController_AddParent_Params
{
	struct FRigElementKey                              InChild;                                                  // (Parm)
	struct FRigElementKey                              InParent;                                                 // (Parm)
	float                                              InWeight;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bMaintainGlobalTransform;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSetupUndo;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ControlRig.RigHierarchyController.AddNull
struct URigHierarchyController_AddNull_Params
{
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRigElementKey                              InParent;                                                 // (Parm)
	struct FTransform                                  InTransform;                                              // (Parm, IsPlainOldData)
	bool                                               bTransformInGlobal;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSetupUndo;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPrintPythonCommand;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRigElementKey                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ControlRig.RigHierarchyController.AddCurve
struct URigHierarchyController_AddCurve_Params
{
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSetupUndo;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPrintPythonCommand;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRigElementKey                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ControlRig.RigHierarchyController.AddControl_ForBlueprint
struct URigHierarchyController_AddControl_ForBlueprint_Params
{
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRigElementKey                              InParent;                                                 // (Parm)
	struct FRigControlSettings                         InSettings;                                               // (Parm)
	struct FRigControlValue                            InValue;                                                  // (Parm)
	bool                                               bSetupUndo;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRigElementKey                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ControlRig.RigHierarchyController.AddBone
struct URigHierarchyController_AddBone_Params
{
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRigElementKey                              InParent;                                                 // (Parm)
	struct FTransform                                  InTransform;                                              // (Parm, IsPlainOldData)
	bool                                               bTransformInGlobal;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	enum class ERigBoneType                            InBoneType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSetupUndo;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPrintPythonCommand;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRigElementKey                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
