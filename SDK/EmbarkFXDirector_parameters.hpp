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

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.UpdateCue_GetRef
struct UEmbarkFXDirectorStatics_UpdateCue_GetRef_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm, ReferenceParm)
	struct FEmbarkFXHandle                             Handle;                                                   // (Parm)
	struct FEmbarkFXCue                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.StopFX
struct UEmbarkFXDirectorStatics_StopFX_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXHandle                             Handle;                                                   // (Parm, OutParm, ReferenceParm)
	float                                              FadeOutSeconds;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bImmediate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.SetInstanceTag
struct UEmbarkFXDirectorStatics_SetInstanceTag_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm, ReferenceParm)
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm, ReferenceParm)
	class UObject*                                     Instantiator;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Specifier;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MinCondition;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.SetForegroundFlags
struct UEmbarkFXDirectorStatics_SetForegroundFlags_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm, ReferenceParm)
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm, ReferenceParm)
	enum class EEmbarkFXForegroundFlags                Flags;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.SetFieldOfView
struct UEmbarkFXDirectorStatics_SetFieldOfView_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm, ReferenceParm)
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm, ReferenceParm)
	float                                              FieldOfView;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.SetBinding
struct UEmbarkFXDirectorStatics_SetBinding_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm, ReferenceParm)
	enum class EEmbarkFXBinding                        Binding;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.SetAutoRemove
struct UEmbarkFXDirectorStatics_SetAutoRemove_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm, ReferenceParm)
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm, ReferenceParm)
	bool                                               bAutoRemove;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.SetAutoPosition
struct UEmbarkFXDirectorStatics_SetAutoPosition_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm, ReferenceParm)
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm, ReferenceParm)
	enum class EEmbarkFXAutoPosition                   AutoPosition;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	enum class EEmbarkFXAutoPositionFunc               AutoPositionFunc;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.RemoveTickPrerequisiteComponent
struct UEmbarkFXDirectorStatics_RemoveTickPrerequisiteComponent_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             PrerequisiteComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.RemoveTickPrerequisiteActor
struct UEmbarkFXDirectorStatics_RemoveTickPrerequisiteActor_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      PrerequisiteActor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.RemoveCue
struct UEmbarkFXDirectorStatics_RemoveCue_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm, ReferenceParm)
	struct FEmbarkFXHandle                             Handle;                                                   // (Parm, OutParm, ReferenceParm)
	float                                              FadeOutSeconds;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bImmediate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.PoolDynamicMaterialInstance
struct UEmbarkFXDirectorStatics_PoolDynamicMaterialInstance_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DynamicMaterialInstance;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.NextOrCreateDynamicMaterialInstance
struct UEmbarkFXDirectorStatics_NextOrCreateDynamicMaterialInstance_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          Material;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.IsValidHandle
struct UEmbarkFXDirectorStatics_IsValidHandle_Params
{
	struct FEmbarkFXHandle                             Handle;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.IsEnabled
struct UEmbarkFXDirectorStatics_IsEnabled_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.IsCuePendingOrActive
struct UEmbarkFXDirectorStatics_IsCuePendingOrActive_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm)
	struct FEmbarkFXHandle                             Handle;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.IsAudible
struct UEmbarkFXDirectorStatics_IsAudible_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxDistance;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.InvalidateHandle
struct UEmbarkFXDirectorStatics_InvalidateHandle_Params
{
	struct FEmbarkFXHandle                             Handle;                                                   // (Parm, OutParm, ReferenceParm)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.GetComponent
struct UEmbarkFXDirectorStatics_GetComponent_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm, ReferenceParm)
	struct FEmbarkFXHandle                             Handle;                                                   // (Parm)
	class UClass*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.EqualHandles
struct UEmbarkFXDirectorStatics_EqualHandles_Params
{
	struct FEmbarkFXHandle                             Handle1;                                                  // (Parm)
	struct FEmbarkFXHandle                             Handle2;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.EndContext
struct UEmbarkFXDirectorStatics_EndContext_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm, ReferenceParm)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.DetachFX
struct UEmbarkFXDirectorStatics_DetachFX_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXHandle                             Handle;                                                   // (Parm)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.DetachCue
struct UEmbarkFXDirectorStatics_DetachCue_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm, ReferenceParm)
	struct FEmbarkFXHandle                             Handle;                                                   // (Parm)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.CueUISound
struct UEmbarkFXDirectorStatics_CueUISound_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              VolumeMultiplier;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FadeInSeconds;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXHandle                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.CueFXVector
struct UEmbarkFXDirectorStatics_CueFXVector_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXHandle                             Handle;                                                   // (Parm)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	enum class EEmbarkFXBinding                        Binding;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSetInstanceTag;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.CueFXTrigger
struct UEmbarkFXDirectorStatics_CueFXTrigger_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXHandle                             Handle;                                                   // (Parm)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	enum class EEmbarkFXBinding                        Binding;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSetInstanceTag;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.CueFXTransform
struct UEmbarkFXDirectorStatics_CueFXTransform_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXHandle                             Handle;                                                   // (Parm)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Value;                                                    // (Parm, IsPlainOldData)
	enum class EEmbarkFXBinding                        Binding;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSetInstanceTag;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.CueFXQuat
struct UEmbarkFXDirectorStatics_CueFXQuat_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXHandle                             Handle;                                                   // (Parm)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FQuat                                       Value;                                                    // (Parm, IsPlainOldData)
	enum class EEmbarkFXBinding                        Binding;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSetInstanceTag;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.CueFXPosition
struct UEmbarkFXDirectorStatics_CueFXPosition_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXHandle                             Handle;                                                   // (Parm)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	enum class EEmbarkFXBinding                        Binding;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSetInstanceTag;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.CueFXInt
struct UEmbarkFXDirectorStatics_CueFXInt_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXHandle                             Handle;                                                   // (Parm)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	enum class EEmbarkFXBinding                        Binding;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSetInstanceTag;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.CueFXFloat
struct UEmbarkFXDirectorStatics_CueFXFloat_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXHandle                             Handle;                                                   // (Parm)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	enum class EEmbarkFXBinding                        Binding;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSetInstanceTag;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.CueFXColor
struct UEmbarkFXDirectorStatics_CueFXColor_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXHandle                             Handle;                                                   // (Parm)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	enum class EEmbarkFXBinding                        Binding;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSetInstanceTag;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.CueFXCallbackAsync
struct UEmbarkFXDirectorStatics_CueFXCallbackAsync_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       FunctionName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DelaySeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            UserData;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXHandle                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.CueFXCallback
struct UEmbarkFXDirectorStatics_CueFXCallback_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       FunctionName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DelaySeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            UserData;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXHandle                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.CueFXBool
struct UEmbarkFXDirectorStatics_CueFXBool_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXHandle                             Handle;                                                   // (Parm)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	enum class EEmbarkFXBinding                        Binding;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSetInstanceTag;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.CueFXAutoPosition
struct UEmbarkFXDirectorStatics_CueFXAutoPosition_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXHandle                             Handle;                                                   // (Parm)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	enum class EEmbarkFXAutoPosition                   AutoPosition;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	enum class EEmbarkFXAutoPositionFunc               AutoPositionFunc;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSetInstanceTag;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.CueFXAttached
struct UEmbarkFXDirectorStatics_CueFXAttached_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UNiagaraSystem*                              System;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          DecalMaterial;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             AttachToComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       AttachToName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAttachLocation>                       AttachLocation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              VolumeMultiplier;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FadeInSeconds;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DecalSize;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DecalLifeTimeSeconds;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRandomDecalRotation;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSetInstanceTag;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXHandle                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.CueFXAtLocation
struct UEmbarkFXDirectorStatics_CueFXAtLocation_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UNiagaraSystem*                              System;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          DecalMaterial;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              VolumeMultiplier;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FadeInSeconds;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DecalSize;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DecalLifeTimeSeconds;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRandomDecalRotation;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSetInstanceTag;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXHandle                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.CheckCueInvariants
struct UEmbarkFXDirectorStatics_CheckCueInvariants_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm)
	struct FEmbarkFXHandle                             Handle;                                                   // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.BeginContext
struct UEmbarkFXDirectorStatics_BeginContext_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm, ReferenceParm)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddVectorArray_GetRef
struct UEmbarkFXDirectorStatics_AddVectorArray_GetRef_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm, ReferenceParm)
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm, ReferenceParm)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OutIndex;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddVectorArray
struct UEmbarkFXDirectorStatics_AddVectorArray_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm, ReferenceParm)
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm, ReferenceParm)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             Array;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddVector
struct UEmbarkFXDirectorStatics_AddVector_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm, ReferenceParm)
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm, ReferenceParm)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddTrigger
struct UEmbarkFXDirectorStatics_AddTrigger_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm, ReferenceParm)
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm, ReferenceParm)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddTransformArray_GetRef
struct UEmbarkFXDirectorStatics_AddTransformArray_GetRef_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm, ReferenceParm)
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm, ReferenceParm)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OutIndex;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FTransform>                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddTransformArray
struct UEmbarkFXDirectorStatics_AddTransformArray_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm, ReferenceParm)
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm, ReferenceParm)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FTransform>                          Array;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddTransform
struct UEmbarkFXDirectorStatics_AddTransform_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm, ReferenceParm)
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm, ReferenceParm)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Value;                                                    // (Parm, IsPlainOldData)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddTickPrerequisiteComponent
struct UEmbarkFXDirectorStatics_AddTickPrerequisiteComponent_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             PrerequisiteComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddTickPrerequisiteActor
struct UEmbarkFXDirectorStatics_AddTickPrerequisiteActor_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      PrerequisiteActor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddQuatArray_GetRef
struct UEmbarkFXDirectorStatics_AddQuatArray_GetRef_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm, ReferenceParm)
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm, ReferenceParm)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OutIndex;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FQuat>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddQuatArray
struct UEmbarkFXDirectorStatics_AddQuatArray_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm, ReferenceParm)
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm, ReferenceParm)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FQuat>                               Array;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddQuat
struct UEmbarkFXDirectorStatics_AddQuat_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm, ReferenceParm)
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm, ReferenceParm)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FQuat                                       Value;                                                    // (Parm, IsPlainOldData)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddPositionArray_GetRef
struct UEmbarkFXDirectorStatics_AddPositionArray_GetRef_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm, ReferenceParm)
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm, ReferenceParm)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OutIndex;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddPositionArray
struct UEmbarkFXDirectorStatics_AddPositionArray_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm, ReferenceParm)
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm, ReferenceParm)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             Array;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddPosition
struct UEmbarkFXDirectorStatics_AddPosition_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm, ReferenceParm)
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm, ReferenceParm)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddParticleParams_GetRef
struct UEmbarkFXDirectorStatics_AddParticleParams_GetRef_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm, ReferenceParm)
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm, ReferenceParm)
	class UNiagaraSystem*                              NiagaraSystem;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXParticleParams                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddParticleParams
struct UEmbarkFXDirectorStatics_AddParticleParams_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm, ReferenceParm)
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm, ReferenceParm)
	struct FEmbarkFXParticleParams                     ParticleParams;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddObjectArray_GetRef
struct UEmbarkFXDirectorStatics_AddObjectArray_GetRef_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm, ReferenceParm)
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm, ReferenceParm)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OutIndex;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UObject*>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddObjectArray
struct UEmbarkFXDirectorStatics_AddObjectArray_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm, ReferenceParm)
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm, ReferenceParm)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UObject*>                             Array;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddObject
struct UEmbarkFXDirectorStatics_AddObject_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm, ReferenceParm)
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm, ReferenceParm)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddIntArray_GetRef
struct UEmbarkFXDirectorStatics_AddIntArray_GetRef_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm, ReferenceParm)
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm, ReferenceParm)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OutIndex;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddIntArray
struct UEmbarkFXDirectorStatics_AddIntArray_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm, ReferenceParm)
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm, ReferenceParm)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        Array;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddInt
struct UEmbarkFXDirectorStatics_AddInt_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm, ReferenceParm)
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm, ReferenceParm)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddFloatArray_GetRef
struct UEmbarkFXDirectorStatics_AddFloatArray_GetRef_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm, ReferenceParm)
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm, ReferenceParm)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OutIndex;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddFloatArray
struct UEmbarkFXDirectorStatics_AddFloatArray_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm, ReferenceParm)
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm, ReferenceParm)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      Array;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddFloat
struct UEmbarkFXDirectorStatics_AddFloat_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm, ReferenceParm)
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm, ReferenceParm)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddExternalFXCost
struct UEmbarkFXDirectorStatics_AddExternalFXCost_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Cost;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddDecalParams_GetRef
struct UEmbarkFXDirectorStatics_AddDecalParams_GetRef_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm, ReferenceParm)
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm, ReferenceParm)
	class UMaterialInterface*                          Material;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDecalParams                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddDecalParams
struct UEmbarkFXDirectorStatics_AddDecalParams_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm, ReferenceParm)
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm, ReferenceParm)
	struct FEmbarkFXDecalParams                        DecalParams;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddCue_GetRef
struct UEmbarkFXDirectorStatics_AddCue_GetRef_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm, ReferenceParm)
	struct FEmbarkFXCue                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddColorArray_GetRef
struct UEmbarkFXDirectorStatics_AddColorArray_GetRef_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm, ReferenceParm)
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm, ReferenceParm)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OutIndex;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FLinearColor>                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddColorArray
struct UEmbarkFXDirectorStatics_AddColorArray_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm, ReferenceParm)
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm, ReferenceParm)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FLinearColor>                        Array;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddColor
struct UEmbarkFXDirectorStatics_AddColor_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm, ReferenceParm)
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm, ReferenceParm)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddCallbackParams_GetRef
struct UEmbarkFXDirectorStatics_AddCallbackParams_GetRef_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm, ReferenceParm)
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm, ReferenceParm)
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       FunctionName;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FEmbarkFXCallbackParams                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddCallbackParams
struct UEmbarkFXDirectorStatics_AddCallbackParams_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm, ReferenceParm)
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm, ReferenceParm)
	struct FEmbarkFXCallbackParams                     CallbackParams;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddBoolArray_GetRef
struct UEmbarkFXDirectorStatics_AddBoolArray_GetRef_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm, ReferenceParm)
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm, ReferenceParm)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OutIndex;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<bool>                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddBoolArray
struct UEmbarkFXDirectorStatics_AddBoolArray_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm, ReferenceParm)
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm, ReferenceParm)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<bool>                                       Array;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddBool
struct UEmbarkFXDirectorStatics_AddBool_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm, ReferenceParm)
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm, ReferenceParm)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddAudioParams_GetRef
struct UEmbarkFXDirectorStatics_AddAudioParams_GetRef_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm, ReferenceParm)
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm, ReferenceParm)
	class USoundBase*                                  Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXAudioParams                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddAudioParams
struct UEmbarkFXDirectorStatics_AddAudioParams_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm, ReferenceParm)
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm, ReferenceParm)
	struct FEmbarkFXAudioParams                        AudioParams;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddAttachmentParams_GetRef
struct UEmbarkFXDirectorStatics_AddAttachmentParams_GetRef_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm, ReferenceParm)
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm, ReferenceParm)
	class USceneComponent*                             AttachToComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FEmbarkFXAttachmentParams                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkFXDirector.EmbarkFXDirectorStatics.AddAttachmentParams
struct UEmbarkFXDirectorStatics_AddAttachmentParams_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm, ReferenceParm)
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm, ReferenceParm)
	struct FEmbarkFXAttachmentParams                   AttachmentParams;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkFXDirector.EmbarkFXDirectorContextMixins.UpdateCue_GetRef
struct UEmbarkFXDirectorContextMixins_UpdateCue_GetRef_Params
{
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm)
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXHandle                             Handle;                                                   // (Parm)
	struct FEmbarkFXCue                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkFXDirector.EmbarkFXDirectorContextMixins.SetBinding
struct UEmbarkFXDirectorContextMixins_SetBinding_Params
{
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm)
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	enum class EEmbarkFXBinding                        Binding;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkFXDirector.EmbarkFXDirectorContextMixins.AddCue_GetRef
struct UEmbarkFXDirectorContextMixins_AddCue_GetRef_Params
{
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm)
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXCue                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkFXDirector.EmbarkFXHandleMixins.Unpack
struct UEmbarkFXHandleMixins_Unpack_Params
{
	struct FEmbarkFXHandle                             Handle;                                                   // (Parm, OutParm)
	int64_t                                            Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkFXDirector.EmbarkFXHandleMixins.RemoveCue
struct UEmbarkFXHandleMixins_RemoveCue_Params
{
	struct FEmbarkFXHandle                             Handle;                                                   // (Parm, OutParm)
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm)
	float                                              FadeOutSeconds;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bImmediate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkFXDirector.EmbarkFXHandleMixins.Pack
struct UEmbarkFXHandleMixins_Pack_Params
{
	struct FEmbarkFXHandle                             Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	int64_t                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkFXDirector.EmbarkFXHandleMixins.IsValidHandle
struct UEmbarkFXHandleMixins_IsValidHandle_Params
{
	struct FEmbarkFXHandle                             Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkFXDirector.EmbarkFXHandleMixins.IsCuePendingOrActive
struct UEmbarkFXHandleMixins_IsCuePendingOrActive_Params
{
	struct FEmbarkFXHandle                             Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkFXDirector.EmbarkFXHandleMixins.InvalidateHandle
struct UEmbarkFXHandleMixins_InvalidateHandle_Params
{
	struct FEmbarkFXHandle                             Handle;                                                   // (Parm, OutParm)
};

// Function EmbarkFXDirector.EmbarkFXHandleMixins.DetachCue
struct UEmbarkFXHandleMixins_DetachCue_Params
{
	struct FEmbarkFXHandle                             Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm)
};

// Function EmbarkFXDirector.EmbarkFXHandleMixins.CheckCueInvariants
struct UEmbarkFXHandleMixins_CheckCueInvariants_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm)
	struct FEmbarkFXHandle                             Handle;                                                   // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkFXDirector.EmbarkFXCueMixins.SetInstanceTag
struct UEmbarkFXCueMixins_SetInstanceTag_Params
{
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm)
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm)
	class UObject*                                     Instantiator;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Specifier;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MinCondition;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkFXDirector.EmbarkFXCueMixins.SetForegroundFlags
struct UEmbarkFXCueMixins_SetForegroundFlags_Params
{
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm)
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm)
	enum class EEmbarkFXForegroundFlags                Flags;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkFXDirector.EmbarkFXCueMixins.SetFieldOfView
struct UEmbarkFXCueMixins_SetFieldOfView_Params
{
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm)
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm)
	float                                              FieldOfView;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkFXDirector.EmbarkFXCueMixins.SetAutoRemove
struct UEmbarkFXCueMixins_SetAutoRemove_Params
{
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm)
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm)
	bool                                               bAutoRemove;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkFXDirector.EmbarkFXCueMixins.SetAutoPosition
struct UEmbarkFXCueMixins_SetAutoPosition_Params
{
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm)
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm)
	enum class EEmbarkFXAutoPosition                   AutoPosition;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	enum class EEmbarkFXAutoPositionFunc               AutoPositionFunc;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkFXDirector.EmbarkFXCueMixins.AddVectorArray_GetRef
struct UEmbarkFXCueMixins_AddVectorArray_GetRef_Params
{
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm)
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OutIndex;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkFXDirector.EmbarkFXCueMixins.AddVectorArray
struct UEmbarkFXCueMixins_AddVectorArray_Params
{
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm)
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             Array;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function EmbarkFXDirector.EmbarkFXCueMixins.AddVector
struct UEmbarkFXCueMixins_AddVector_Params
{
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm)
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkFXDirector.EmbarkFXCueMixins.AddTrigger
struct UEmbarkFXCueMixins_AddTrigger_Params
{
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm)
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkFXDirector.EmbarkFXCueMixins.AddTransformArray_GetRef
struct UEmbarkFXCueMixins_AddTransformArray_GetRef_Params
{
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm)
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OutIndex;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FTransform>                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkFXDirector.EmbarkFXCueMixins.AddTransformArray
struct UEmbarkFXCueMixins_AddTransformArray_Params
{
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm)
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FTransform>                          Array;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function EmbarkFXDirector.EmbarkFXCueMixins.AddTransform
struct UEmbarkFXCueMixins_AddTransform_Params
{
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm)
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Value;                                                    // (Parm, IsPlainOldData)
};

// Function EmbarkFXDirector.EmbarkFXCueMixins.AddQuatArray_GetRef
struct UEmbarkFXCueMixins_AddQuatArray_GetRef_Params
{
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm)
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OutIndex;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FQuat>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkFXDirector.EmbarkFXCueMixins.AddQuatArray
struct UEmbarkFXCueMixins_AddQuatArray_Params
{
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm)
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FQuat>                               Array;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function EmbarkFXDirector.EmbarkFXCueMixins.AddQuat
struct UEmbarkFXCueMixins_AddQuat_Params
{
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm)
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FQuat                                       Value;                                                    // (Parm, IsPlainOldData)
};

// Function EmbarkFXDirector.EmbarkFXCueMixins.AddPositionArray_GetRef
struct UEmbarkFXCueMixins_AddPositionArray_GetRef_Params
{
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm)
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OutIndex;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkFXDirector.EmbarkFXCueMixins.AddPositionArray
struct UEmbarkFXCueMixins_AddPositionArray_Params
{
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm)
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             Array;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function EmbarkFXDirector.EmbarkFXCueMixins.AddPosition
struct UEmbarkFXCueMixins_AddPosition_Params
{
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm)
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkFXDirector.EmbarkFXCueMixins.AddParticleParams_GetRef
struct UEmbarkFXCueMixins_AddParticleParams_GetRef_Params
{
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm)
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm)
	class UNiagaraSystem*                              NiagaraSystem;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXParticleParams                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkFXDirector.EmbarkFXCueMixins.AddParticleParams
struct UEmbarkFXCueMixins_AddParticleParams_Params
{
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm)
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm)
	struct FEmbarkFXParticleParams                     ParticleParams;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkFXDirector.EmbarkFXCueMixins.AddObjectArray_GetRef
struct UEmbarkFXCueMixins_AddObjectArray_GetRef_Params
{
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm)
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OutIndex;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UObject*>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkFXDirector.EmbarkFXCueMixins.AddObjectArray
struct UEmbarkFXCueMixins_AddObjectArray_Params
{
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm)
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UObject*>                             Array;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function EmbarkFXDirector.EmbarkFXCueMixins.AddObject
struct UEmbarkFXCueMixins_AddObject_Params
{
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm)
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkFXDirector.EmbarkFXCueMixins.AddIntArray_GetRef
struct UEmbarkFXCueMixins_AddIntArray_GetRef_Params
{
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm)
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OutIndex;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkFXDirector.EmbarkFXCueMixins.AddIntArray
struct UEmbarkFXCueMixins_AddIntArray_Params
{
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm)
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        Array;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function EmbarkFXDirector.EmbarkFXCueMixins.AddInt
struct UEmbarkFXCueMixins_AddInt_Params
{
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm)
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkFXDirector.EmbarkFXCueMixins.AddFloatArray_GetRef
struct UEmbarkFXCueMixins_AddFloatArray_GetRef_Params
{
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm)
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OutIndex;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkFXDirector.EmbarkFXCueMixins.AddFloatArray
struct UEmbarkFXCueMixins_AddFloatArray_Params
{
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm)
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      Array;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function EmbarkFXDirector.EmbarkFXCueMixins.AddFloat
struct UEmbarkFXCueMixins_AddFloat_Params
{
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm)
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkFXDirector.EmbarkFXCueMixins.AddDecalParams_GetRef
struct UEmbarkFXCueMixins_AddDecalParams_GetRef_Params
{
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm)
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm)
	class UMaterialInterface*                          Material;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDecalParams                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkFXDirector.EmbarkFXCueMixins.AddDecalParams
struct UEmbarkFXCueMixins_AddDecalParams_Params
{
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm)
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm)
	struct FEmbarkFXDecalParams                        DecalParams;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkFXDirector.EmbarkFXCueMixins.AddColorArray_GetRef
struct UEmbarkFXCueMixins_AddColorArray_GetRef_Params
{
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm)
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OutIndex;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FLinearColor>                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkFXDirector.EmbarkFXCueMixins.AddColorArray
struct UEmbarkFXCueMixins_AddColorArray_Params
{
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm)
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FLinearColor>                        Array;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function EmbarkFXDirector.EmbarkFXCueMixins.AddColor
struct UEmbarkFXCueMixins_AddColor_Params
{
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm)
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkFXDirector.EmbarkFXCueMixins.AddCallbackParams_GetRef
struct UEmbarkFXCueMixins_AddCallbackParams_GetRef_Params
{
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm)
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm)
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       FunctionName;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FEmbarkFXCallbackParams                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkFXDirector.EmbarkFXCueMixins.AddCallbackParams
struct UEmbarkFXCueMixins_AddCallbackParams_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm)
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm)
	struct FEmbarkFXCallbackParams                     CallbackParams;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkFXDirector.EmbarkFXCueMixins.AddBoolArray_GetRef
struct UEmbarkFXCueMixins_AddBoolArray_GetRef_Params
{
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm)
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OutIndex;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<bool>                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkFXDirector.EmbarkFXCueMixins.AddBoolArray
struct UEmbarkFXCueMixins_AddBoolArray_Params
{
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm)
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<bool>                                       Array;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function EmbarkFXDirector.EmbarkFXCueMixins.AddBool
struct UEmbarkFXCueMixins_AddBool_Params
{
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm)
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkFXDirector.EmbarkFXCueMixins.AddAudioParams_GetRef
struct UEmbarkFXCueMixins_AddAudioParams_GetRef_Params
{
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm)
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm)
	class USoundBase*                                  Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXAudioParams                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkFXDirector.EmbarkFXCueMixins.AddAudioParams
struct UEmbarkFXCueMixins_AddAudioParams_Params
{
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm)
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm)
	struct FEmbarkFXAudioParams                        AudioParams;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkFXDirector.EmbarkFXCueMixins.AddAttachmentParams_GetRef
struct UEmbarkFXCueMixins_AddAttachmentParams_GetRef_Params
{
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm)
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm)
	class USceneComponent*                             AttachToComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FEmbarkFXAttachmentParams                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkFXDirector.EmbarkFXCueMixins.AddAttachmentParams
struct UEmbarkFXCueMixins_AddAttachmentParams_Params
{
	struct FEmbarkFXCue                                Cue;                                                      // (Parm, OutParm)
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkFXDirectorContext                    Context;                                                  // (Parm, OutParm)
	struct FEmbarkFXAttachmentParams                   AttachmentParams;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
