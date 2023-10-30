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

// Function EmbarkEngine.EmbarkGlobalSubsystem.OnInitialized
struct UEmbarkGlobalSubsystem_OnInitialized_Params
{
};

// Function EmbarkEngine.EmbarkGlobalSubsystem.OnDeinitialized
struct UEmbarkGlobalSubsystem_OnDeinitialized_Params
{
};

// Function EmbarkEngine.SimulatedSkinnedMeshComponent.TermBodiesBelow
struct USimulatedSkinnedMeshComponent_TermBodiesBelow_Params
{
	struct FName                                       ParentBoneName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkEngine.SimulatedSkinnedMeshComponent.SetBoneCollisionProfileName
struct USimulatedSkinnedMeshComponent_SetBoneCollisionProfileName_Params
{
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       InCollisionProfileName;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkEngine.SimulatedSkinnedMeshComponent.SetBodyTransform
struct USimulatedSkinnedMeshComponent_SetBodyTransform_Params
{
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Transform;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function EmbarkEngine.SimulatedSkinnedMeshComponent.SetBodySimulatePhysics
struct USimulatedSkinnedMeshComponent_SetBodySimulatePhysics_Params
{
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInSimulate;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkEngine.SimulatedSkinnedMeshComponent.SetAllBodiesBelowSimulatePhysics
struct USimulatedSkinnedMeshComponent_SetAllBodiesBelowSimulatePhysics_Params
{
	struct FName                                       InBoneName;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bNewSimulate;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeSelf;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkEngine.SimulatedSkinnedMeshComponent.OnPhysicsBodySleep
struct USimulatedSkinnedMeshComponent_OnPhysicsBodySleep_Params
{
	class UPrimitiveComponent*                         SleepingComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkEngine.SimulatedSkinnedMeshComponent.OnPhysicsBodyAwake
struct USimulatedSkinnedMeshComponent_OnPhysicsBodyAwake_Params
{
	class UPrimitiveComponent*                         WakingComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkEngine.SimulatedSkinnedMeshComponent.K2_GetClosestPointOnPhysicsAsset
struct USimulatedSkinnedMeshComponent_K2_GetClosestPointOnPhysicsAsset_Params
{
	struct FVector                                     WorldPosition;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     ClosestWorldPosition;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkEngine.SimulatedSkinnedMeshComponent.GetBoneTransform
struct USimulatedSkinnedMeshComponent_GetBoneTransform_Params
{
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function EmbarkEngine.SimulatedSkinnedMeshComponent.FindConstraintBoneName
struct USimulatedSkinnedMeshComponent_FindConstraintBoneName_Params
{
	int                                                ConstraintIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkEngine.ActorWithEditorTick.EditorTick
struct AActorWithEditorTick_EditorTick_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkEngine.CurveTranslateRotate.UpdateOrAddKeys
struct UCurveTranslateRotate_UpdateOrAddKeys_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Transform;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bUnwindRotation;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkEngine.CurveTranslateRotate.UpdateOrAddKey
struct UCurveTranslateRotate_UpdateOrAddKey_Params
{
	enum class ECurveTRTrack                           Track;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUnwindRotation;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              KeyTimeTolerance;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkEngine.CurveTranslateRotate.GetTrackValue
struct UCurveTranslateRotate_GetTrackValue_Params
{
	float                                              InTime;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutTranslation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutRotation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkEngine.DDGICascadesComponent.UpdateVolumes
struct UDDGICascadesComponent_UpdateVolumes_Params
{
};

// Function EmbarkEngine.EmbarkDataAsset.ReceivePreSave
struct UEmbarkDataAsset_ReceivePreSave_Params
{
};

// Function EmbarkEngine.EmbarkEngineBlueprintLibrary.GetNumPrecompilingPSOsRemaining
struct UEmbarkEngineBlueprintLibrary_GetNumPrecompilingPSOsRemaining_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkEngine.EmbarkSDFVolumeTextureLibrary.WriteSDFSphereToVolumeTexture
struct UEmbarkSDFVolumeTextureLibrary_WriteSDFSphereToVolumeTexture_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UEmbarkSDFVolumeTexture*                     Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Origin;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	double                                             Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkEngine.EmbarkSDFVolumeTextureLibrary.WriteBoxToVolumeTexture
struct UEmbarkSDFVolumeTextureLibrary_WriteBoxToVolumeTexture_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UEmbarkSDFVolumeTexture*                     Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Origin;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	double                                             Extent;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             Intensity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkEngine.EmbarkSDFVolumeTextureLibrary.ReleaseSDFVolumeTexture
struct UEmbarkSDFVolumeTextureLibrary_ReleaseSDFVolumeTexture_Params
{
	class UEmbarkSDFVolumeTexture*                     Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkEngine.EmbarkSDFVolumeTextureLibrary.CreateSDFVolumeTexture
struct UEmbarkSDFVolumeTextureLibrary_CreateSDFVolumeTexture_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FIntVector                                  Size;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FBox                                        Bounds;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UEmbarkSDFVolumeTexture*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkEngine.EmbarkSDFVolumeTextureLibrary.ClearSDFVolumeTexture
struct UEmbarkSDFVolumeTextureLibrary_ClearSDFVolumeTexture_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UEmbarkSDFVolumeTexture*                     Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxDistance;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkEngine.EmbarkHttpRequestContainer.SetVerb
struct UEmbarkHttpRequestContainer_SetVerb_Params
{
	struct FString                                     NewVerb;                                                  // (Parm, ZeroConstructor)
};

// Function EmbarkEngine.EmbarkHttpRequestContainer.SetURL
struct UEmbarkHttpRequestContainer_SetURL_Params
{
	struct FString                                     NewURL;                                                   // (Parm, ZeroConstructor)
};

// Function EmbarkEngine.EmbarkHttpRequestContainer.SetPayload
struct UEmbarkHttpRequestContainer_SetPayload_Params
{
	struct FString                                     Payload;                                                  // (Parm, ZeroConstructor)
};

// Function EmbarkEngine.EmbarkHttpRequestContainer.SetHeader
struct UEmbarkHttpRequestContainer_SetHeader_Params
{
	struct FString                                     HeaderName;                                               // (Parm, ZeroConstructor)
	struct FString                                     HeaderValue;                                              // (Parm, ZeroConstructor)
};

// Function EmbarkEngine.EmbarkHttpRequestContainer.ProcessRequest
struct UEmbarkHttpRequestContainer_ProcessRequest_Params
{
};

// Function EmbarkEngine.EmbarkHttpRequestContainer.GetVerb
struct UEmbarkHttpRequestContainer_GetVerb_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkEngine.EmbarkHttpRequestContainer.GetURL
struct UEmbarkHttpRequestContainer_GetURL_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkEngine.EmbarkHttpRequestContainer.GetHeaders
struct UEmbarkHttpRequestContainer_GetHeaders_Params
{
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkEngine.EmbarkHttpRequestContainer.GetHeader
struct UEmbarkHttpRequestContainer_GetHeader_Params
{
	struct FString                                     HeaderName;                                               // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkEngine.EmbarkHttpRequestContainer.GetElapsedTime
struct UEmbarkHttpRequestContainer_GetElapsedTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkEngine.HttpFunctionLibrary.MakeHttpParameter
struct UHttpFunctionLibrary_MakeHttpParameter_Params
{
	struct FString                                     InParameterKey;                                           // (Parm, ZeroConstructor)
	struct FString                                     InParameterValue;                                         // (Parm, ZeroConstructor)
	struct FEmbarkHttpParameter                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkEngine.HttpFunctionLibrary.CreateSimpleHttpRequest
struct UHttpFunctionLibrary_CreateSimpleHttpRequest_Params
{
	struct FString                                     Verb;                                                     // (Parm, ZeroConstructor)
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
	TArray<struct FEmbarkHttpParameter>                Parameters;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UEmbarkHttpRequestContainer*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkEngine.HttpFunctionLibrary.CreateHttpRequest
struct UHttpFunctionLibrary_CreateHttpRequest_Params
{
	struct FString                                     AuthorizationToken;                                       // (Parm, ZeroConstructor)
	struct FString                                     Verb;                                                     // (Parm, ZeroConstructor)
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
	TArray<struct FEmbarkHttpParameter>                Parameters;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UEmbarkHttpRequestContainer*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
