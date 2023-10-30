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

// Function EmbarkUtils.EmbarkClassUtilsFunctionLibrary.GetSubclassesOf
struct UEmbarkClassUtilsFunctionLibrary_GetSubclassesOf_Params
{
	class UClass*                                      ParentClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkUtils.EmbarkConsoleCommandMacroFunctionLibrary.StopRecordingMacro
struct UEmbarkConsoleCommandMacroFunctionLibrary_StopRecordingMacro_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkUtils.EmbarkConsoleCommandMacroFunctionLibrary.StartRecordingMacro
struct UEmbarkConsoleCommandMacroFunctionLibrary_StartRecordingMacro_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkConsoleCommandMacroFunctionLibrary.PlayMacro
struct UEmbarkConsoleCommandMacroFunctionLibrary_PlayMacro_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             Commands;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class APlayerController*                           SpecificPlayer;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkDebugUtilsFunctionLibrary.DrawDebugLine
struct UEmbarkDebugUtilsFunctionLibrary_DrawDebugLine_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LineStart;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LineEnd;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DrawTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkDebugUtilsFunctionLibrary.DrawDebugArrow
struct UEmbarkDebugUtilsFunctionLibrary_DrawDebugArrow_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LineStart;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LineEnd;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DrawTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkOctreeDataHandleMixinLibrary.IsValid
struct UEmbarkOctreeDataHandleMixinLibrary_IsValid_Params
{
	struct FEmbarkOctreeDataHandle                     Handle;                                                   // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkGenericOctreeMixinLibrary.UpdateNode
struct UEmbarkGenericOctreeMixinLibrary_UpdateNode_Params
{
	struct FEmbarkGenericOctree                        Octree;                                                   // (Parm, OutParm)
	struct FEmbarkOctreeDataHandle                     ID;                                                       // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FBoxSphereBounds                            NewBounds;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkGenericOctreeMixinLibrary.RemoveNode
struct UEmbarkGenericOctreeMixinLibrary_RemoveNode_Params
{
	struct FEmbarkGenericOctree                        Octree;                                                   // (Parm, OutParm)
	struct FEmbarkOctreeDataHandle                     ID;                                                       // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkUtils.EmbarkGenericOctreeMixinLibrary.IsInitialized
struct UEmbarkGenericOctreeMixinLibrary_IsInitialized_Params
{
	struct FEmbarkGenericOctree                        Octree;                                                   // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkGenericOctreeMixinLibrary.Initialize
struct UEmbarkGenericOctreeMixinLibrary_Initialize_Params
{
	struct FEmbarkGenericOctree                        Octree;                                                   // (Parm, OutParm)
	struct FBox                                        Bounds;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkGenericOctreeMixinLibrary.FindNearbyElements
struct UEmbarkGenericOctreeMixinLibrary_FindNearbyElements_Params
{
	struct FEmbarkGenericOctree                        Octree;                                                   // (Parm, OutParm)
	struct FVector                                     Position;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FScriptDelegate                             IterateBoundsFunc;                                        // (Parm, ZeroConstructor)
};

// Function EmbarkUtils.EmbarkGenericOctreeMixinLibrary.FindFirstElementWithBoundsTest
struct UEmbarkGenericOctreeMixinLibrary_FindFirstElementWithBoundsTest_Params
{
	struct FEmbarkGenericOctree                        Octree;                                                   // (Parm, OutParm)
	struct FBox                                        BoxBounds;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FScriptDelegate                             IterateBoundsFunc;                                        // (Parm, ZeroConstructor)
};

// Function EmbarkUtils.EmbarkGenericOctreeMixinLibrary.FindElementsWithBoundsTest
struct UEmbarkGenericOctreeMixinLibrary_FindElementsWithBoundsTest_Params
{
	struct FEmbarkGenericOctree                        Octree;                                                   // (Parm, OutParm)
	struct FBox                                        BoxBounds;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FScriptDelegate                             IterateBoundsFunc;                                        // (Parm, ZeroConstructor)
};

// Function EmbarkUtils.EmbarkGenericOctreeMixinLibrary.FindElements
struct UEmbarkGenericOctreeMixinLibrary_FindElements_Params
{
	struct FEmbarkGenericOctree                        Octree;                                                   // (Parm, OutParm)
	struct FBox                                        BoxBounds;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TArray<struct FEmbarkOctreeDataHandle>             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkUtils.EmbarkGenericOctreeMixinLibrary.DebugDrawOctree
struct UEmbarkGenericOctreeMixinLibrary_DebugDrawOctree_Params
{
	struct FEmbarkGenericOctree                        Octree;                                                   // (Parm, OutParm)
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUtils.FMathUtilsFunctionLibrary.TraceBallisticPath
struct UFMathUtilsFunctionLibrary_TraceBallisticPath_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEmbarkBallisticTraceInput                  InputData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<struct FVector>                             OutTracedPath;                                            // (Parm, OutParm, ZeroConstructor)
	struct FHitResult                                  OutHitResult;                                             // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.FMathUtilsFunctionLibrary.SampleProbabilityDensityFunction
struct UFMathUtilsFunctionLibrary_SampleProbabilityDensityFunction_Params
{
	class UCurveFloat*                                 ProbabilityDensityFunction;                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumberOfSamples;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.FMathUtilsFunctionLibrary.ProjectVectorOnPlane
struct UFMathUtilsFunctionLibrary_ProjectVectorOnPlane_Params
{
	struct FVector                                     Vec;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     GroundNormal;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     UpVector;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.FMathUtilsFunctionLibrary.ProjectOrientedBox
struct UFMathUtilsFunctionLibrary_ProjectOrientedBox_Params
{
	struct FOrientedBox                                Box;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ProjectionAxis;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Min;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUtils.FMathUtilsFunctionLibrary.PredictBallistics_SpeedToDirection_Simple
struct UFMathUtilsFunctionLibrary_PredictBallistics_SpeedToDirection_Simple_Params
{
	struct FEmbarkBallisticPredictionInput             InputData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEmbarkBallisticPredictionOutput            OutputData;                                               // (Parm, OutParm)
};

// Function EmbarkUtils.FMathUtilsFunctionLibrary.PredictBallistics_SpeedToDirection_Complex
struct UFMathUtilsFunctionLibrary_PredictBallistics_SpeedToDirection_Complex_Params
{
	struct FEmbarkBallisticPredictionInput             InputData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<struct FEmbarkBallisticPredictionOutput>    Results;                                                  // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.FMathUtilsFunctionLibrary.PredictBallistics_SpeedToDirection_Basic
struct UFMathUtilsFunctionLibrary_PredictBallistics_SpeedToDirection_Basic_Params
{
	struct FEmbarkBallisticPredictionInput             InputData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<struct FEmbarkBallisticPredictionOutput>    Results;                                                  // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.FMathUtilsFunctionLibrary.MinimumJerkTrajectory
struct UFMathUtilsFunctionLibrary_MinimumJerkTrajectory_Params
{
	double                                             CurrentValue;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	double                                             CurrentSpeed;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	double                                             CurrentAcc;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	double                                             TargetValue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             TargetSpeed;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             TargetAcc;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             TimeLeft;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.FMathUtilsFunctionLibrary.LineLineIntersect
struct UFMathUtilsFunctionLibrary_LineLineIntersect_Params
{
	struct FVector2D                                   L1Start;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   L1End;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   L2Start;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   L2End;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   OutIntersect;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	double                                             Tolerance;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.FMathUtilsFunctionLibrary.GetLinearVelocityAtPoint
struct UFMathUtilsFunctionLibrary_GetLinearVelocityAtPoint_Params
{
	struct FVector                                     SpaceLoc;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     SpaceLinVel;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     SpaceAngVel;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.FMathUtilsFunctionLibrary.GetClosestPointsBetweenSegmentedLines
struct UFMathUtilsFunctionLibrary_GetClosestPointsBetweenSegmentedLines_Params
{
	struct FVector                                     Start1;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     End1;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Start2;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     End2;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     OutPoint1;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutPoint2;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUtils.FMathUtilsFunctionLibrary.GetClosestPointInList
struct UFMathUtilsFunctionLibrary_GetClosestPointInList_Params
{
	TArray<struct FVector>                             PointList;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector                                     Point;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.FMathUtilsFunctionLibrary.FastSin3
struct UFMathUtilsFunctionLibrary_FastSin3_Params
{
	float                                              X;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.FMathUtilsFunctionLibrary.FastSin2
struct UFMathUtilsFunctionLibrary_FastSin2_Params
{
	float                                              X;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.FMathUtilsFunctionLibrary.FastSin
struct UFMathUtilsFunctionLibrary_FastSin_Params
{
	float                                              X;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.FMathUtilsFunctionLibrary.CalculateWindingNumber2D
struct UFMathUtilsFunctionLibrary_CalculateWindingNumber2D_Params
{
	TArray<struct FVector>                             Polygon;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector                                     Point;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.FMathUtilsFunctionLibrary.AlphaToBlendOption
struct UFMathUtilsFunctionLibrary_AlphaToBlendOption_Params
{
	float                                              InAlpha;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	enum class EAlphaBlendOption                       InBlendOption;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 InCustomCurve;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkMeshMergeFunctionLibrary.MergeMeshes
struct UEmbarkMeshMergeFunctionLibrary_MergeMeshes_Params
{
	class USkeleton*                                   Skeleton;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               RootMesh;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class USkeletalMesh*>                       MeshesToMerge;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FEmbarkAttachedStaticMeshDesc>       AttachedStaticMeshes;                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FName>                               MorphTargetsToMerge;                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                MaxNumLODsToMerge;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWaitUntilComplete;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     CallbackObject;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CallbackFunction;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CallbackUserData;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkMeshMergeFunctionLibrary.MergeAttachedStaticMeshes
struct UEmbarkMeshMergeFunctionLibrary_MergeAttachedStaticMeshes_Params
{
	class USkeletalMesh*                               RootMesh;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FEmbarkAttachedStaticMeshDesc>       AttachedStaticMeshes;                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FName>                               MorphTargetsToMerge;                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                MaxNumLODsToMerge;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWaitUntilComplete;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     CallbackObject;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CallbackFunction;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CallbackUserData;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkPawnComponent.ReceiveOnUnpossessedBy
struct UEmbarkPawnComponent_ReceiveOnUnpossessedBy_Params
{
	class AController*                                 UnpossessedBy;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkPawnComponent.ReceiveOnPossessedBy
struct UEmbarkPawnComponent_ReceiveOnPossessedBy_Params
{
	class AController*                                 PossessedBy;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkPerformanceRecorderComponent.StopRecording
struct UEmbarkPerformanceRecorderComponent_StopRecording_Params
{
};

// Function EmbarkUtils.EmbarkPerformanceRecorderComponent.StartRecording
struct UEmbarkPerformanceRecorderComponent_StartRecording_Params
{
};

// Function EmbarkUtils.EmbarkPerformanceRecorderComponent.SendServerPerformanceTelemetryEvent
struct UEmbarkPerformanceRecorderComponent_SendServerPerformanceTelemetryEvent_Params
{
};

// Function EmbarkUtils.EmbarkPhysicsUtil.SetBodyTransform
struct UEmbarkPhysicsUtil_SetBodyTransform_Params
{
	struct FBodyInstance                               Instance;                                                 // (Parm, OutParm)
	struct FTransform                                  NewTransform;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	enum class ETeleportType                           Teleport;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoWake;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkPhysicsUtil.IsInstanceSimulating
struct UEmbarkPhysicsUtil_IsInstanceSimulating_Params
{
	class UPrimitiveComponent*                         Component;                                                // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkPhysicsUtil.IsInScene
struct UEmbarkPhysicsUtil_IsInScene_Params
{
	struct FBodyInstance                               Body;                                                     // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkPhysicsUtil.GetSimulatingParent
struct UEmbarkPhysicsUtil_GetSimulatingParent_Params
{
	class USceneComponent*                             SceneComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkPhysicsUtil.GetKinematicTarget
struct UEmbarkPhysicsUtil_GetKinematicTarget_Params
{
	struct FBodyInstance                               Body;                                                     // (Parm, OutParm)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkPhysicsUtil.GetBodyInstanceMass
struct UEmbarkPhysicsUtil_GetBodyInstanceMass_Params
{
	class UPrimitiveComponent*                         PrimitiveComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkPhysicsUtil.EnhancedSphereOverlap
struct UEmbarkPhysicsUtil_EnhancedSphereOverlap_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SpherePos;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              SphereRadius;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UClass*                                      ComponentClassFilter;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FOverlapResult>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkUtils.EmbarkPhysicsUtil.EnhancedBoxOverlap
struct UEmbarkPhysicsUtil_EnhancedBoxOverlap_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BoxPos;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    BoxRotation;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BoxExtent;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UClass*                                      ComponentClassFilter;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FOverlapResult>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkUtils.RootMotionAnimMatchingUtils.GetTimeAtClosestPoint
struct URootMotionAnimMatchingUtils_GetTimeAtClosestPoint_Params
{
	TArray<struct FRootMotionAnimMatching_PointAtTime> PointAtTimes;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector3f                                   Point;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              MaxTimeToQuery;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkRootMotionUtils.GetWarpCurvesFromSeqAtTime
struct UEmbarkRootMotionUtils_GetWarpCurvesFromSeqAtTime_Params
{
	class UAnimSequence*                               Sequence;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FWarpCurvesDefinition                       WarpCurveDefinitions;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FWarpCurvesValue                            ValuesIfCurvesDoNotExists;                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FWarpCurvesValue                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkUtils.EmbarkRootMotionUtils.GetInterpolatedWarpWorldTransform
struct UEmbarkRootMotionUtils_GetInterpolatedWarpWorldTransform_Params
{
	struct FTransform                                  AuxRootTransform;                                         // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FWarpCurvesValue                            WarpCurves;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FTransform                                  WarpTargetWorldTransform;                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FTransform                                  WarpStartTransform;                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              CapsuleHeight;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkRootMotionUtils.AdjustWarpCurvesForPhasedEntry
struct UEmbarkRootMotionUtils_AdjustWarpCurvesForPhasedEntry_Params
{
	float                                              CurrentClipTime;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartTimeOffset;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RateScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FWarpCurvesValue                            OutWarpCurves;                                            // (Parm, OutParm)
};

// Function EmbarkUtils.EmbarkUtils.UnbindOnReceiveEmbarkPlayerController
struct UEmbarkUtils_UnbindOnReceiveEmbarkPlayerController_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       FunctionName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.TeleportActor
struct UEmbarkUtils_TeleportActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DestLocation;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    DestRotation;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bIsATest;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNoCheck;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.StringToEnumIdx
struct UEmbarkUtils_StringToEnumIdx_Params
{
	struct FString                                     EnumName;                                                 // (Parm, ZeroConstructor)
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.StopPerfTimer
struct UEmbarkUtils_StopPerfTimer_Params
{
	struct FPerfTimerData                              Data;                                                     // (Parm, OutParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.StartPerfTimer
struct UEmbarkUtils_StartPerfTimer_Params
{
	struct FPerfTimerData                              Data;                                                     // (Parm, OutParm)
};

// Function EmbarkUtils.EmbarkUtils.SphereOverlapByChannel
struct UEmbarkUtils_SphereOverlapByChannel_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SpherePos;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              SphereRadius;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     CollisionChannel;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FOverlapResult>                      OutOverlaps;                                              // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.SortLocationsByDistance2D
struct UEmbarkUtils_SortLocationsByDistance2D_Params
{
	struct FVector                                     Origin;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             Locations;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        OutIndices;                                               // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function EmbarkUtils.EmbarkUtils.SortLocationsByDistance
struct UEmbarkUtils_SortLocationsByDistance_Params
{
	struct FVector                                     Origin;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             Locations;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        OutIndices;                                               // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function EmbarkUtils.EmbarkUtils.SortActorsByDistance
struct UEmbarkUtils_SortActorsByDistance_Params
{
	struct FVector                                     Location;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              Actors;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function EmbarkUtils.EmbarkUtils.SimulateTicksOnActorComponent
struct UEmbarkUtils_SimulateTicksOnActorComponent_Params
{
	class UActorComponent*                             ActorComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TotalTime;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeStepTarget;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.SimulateTicksOnActor
struct UEmbarkUtils_SimulateTicksOnActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TotalTime;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeStepTarget;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.SimulateMouseRMBUp
struct UEmbarkUtils_SimulateMouseRMBUp_Params
{
};

// Function EmbarkUtils.EmbarkUtils.SimulateMouseRMBDown
struct UEmbarkUtils_SimulateMouseRMBDown_Params
{
};

// Function EmbarkUtils.EmbarkUtils.SimulateMouseMoved
struct UEmbarkUtils_SimulateMouseMoved_Params
{
	int                                                X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bActuallyMoveCursor;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.SimulateMouseLMBUp
struct UEmbarkUtils_SimulateMouseLMBUp_Params
{
};

// Function EmbarkUtils.EmbarkUtils.SimulateMouseLMBDown
struct UEmbarkUtils_SimulateMouseLMBDown_Params
{
};

// Function EmbarkUtils.EmbarkUtils.SimulateMouseClick
struct UEmbarkUtils_SimulateMouseClick_Params
{
	struct FKey                                        MouseButton;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<EInputEvent>                           InputEvent;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.SimulateKeyInput
struct UEmbarkUtils_SimulateKeyInput_Params
{
	struct FKey                                        Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<EInputEvent>                           InputEvent;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.SetVectorPropertyByName
struct UEmbarkUtils_SetVectorPropertyByName_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PropertyName;                                             // (Parm, ZeroConstructor)
	struct FVector                                     Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.SetTransformPropertyByName
struct UEmbarkUtils_SetTransformPropertyByName_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PropertyName;                                             // (Parm, ZeroConstructor)
	struct FTransform                                  Value;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.SetTimerDelegateForNextTickByFunctionName
struct UEmbarkUtils_SetTimerDelegateForNextTickByFunctionName_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       FunctionName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTimerHandle                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkUtils.EmbarkUtils.SetTimerDelegateForNextTick
struct UEmbarkUtils_SetTimerDelegateForNextTick_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FTimerHandle                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkUtils.EmbarkUtils.SetTimer
struct UEmbarkUtils_SetTimer_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       FunctionName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLooping;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InitialStartDelay;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InitialStartDelayVariance;                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTimerHandle                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkUtils.EmbarkUtils.SetTickOrderForComponent
struct UEmbarkUtils_SetTickOrderForComponent_Params
{
	class UActorComponent*                             ActorComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	uint64_t                                           TickOrder;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.SetTextPropertyByName
struct UEmbarkUtils_SetTextPropertyByName_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PropertyName;                                             // (Parm, ZeroConstructor)
	struct FText                                       Value;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkUtils.EmbarkUtils.SetStringPropertyByName
struct UEmbarkUtils_SetStringPropertyByName_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PropertyName;                                             // (Parm, ZeroConstructor)
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
};

// Function EmbarkUtils.EmbarkUtils.SetSoftObjectPropertyByName
struct UEmbarkUtils_SetSoftObjectPropertyByName_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PropertyName;                                             // (Parm, ZeroConstructor)
};

// Function EmbarkUtils.EmbarkUtils.SetSoftClassPropertyByName
struct UEmbarkUtils_SetSoftClassPropertyByName_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PropertyName;                                             // (Parm, ZeroConstructor)
};

// Function EmbarkUtils.EmbarkUtils.SetRotatorPropertyByName
struct UEmbarkUtils_SetRotatorPropertyByName_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PropertyName;                                             // (Parm, ZeroConstructor)
	struct FRotator                                    Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.SetObjectPropertyByName
struct UEmbarkUtils_SetObjectPropertyByName_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PropertyName;                                             // (Parm, ZeroConstructor)
	class UObject*                                     Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.SetNamePropertyByName
struct UEmbarkUtils_SetNamePropertyByName_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PropertyName;                                             // (Parm, ZeroConstructor)
	struct FName                                       Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.SetLinearColorPropertyByName
struct UEmbarkUtils_SetLinearColorPropertyByName_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PropertyName;                                             // (Parm, ZeroConstructor)
	struct FLinearColor                                Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.SetIntPropertyByName
struct UEmbarkUtils_SetIntPropertyByName_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PropertyName;                                             // (Parm, ZeroConstructor)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.SetInt64PropertyByName
struct UEmbarkUtils_SetInt64PropertyByName_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PropertyName;                                             // (Parm, ZeroConstructor)
	int64_t                                            Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.SetHighTickPrioForComponent
struct UEmbarkUtils_SetHighTickPrioForComponent_Params
{
	class UActorComponent*                             ActorComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.SetGameplayTagPropertyByName
struct UEmbarkUtils_SetGameplayTagPropertyByName_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PropertyName;                                             // (Parm, ZeroConstructor)
	struct FGameplayTag                                Value;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function EmbarkUtils.EmbarkUtils.SetFloatPropertyByName
struct UEmbarkUtils_SetFloatPropertyByName_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PropertyName;                                             // (Parm, ZeroConstructor)
	double                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.SetColorPropertyByName
struct UEmbarkUtils_SetColorPropertyByName_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PropertyName;                                             // (Parm, ZeroConstructor)
	struct FColor                                      Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.SetClassPropertyByName
struct UEmbarkUtils_SetClassPropertyByName_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PropertyName;                                             // (Parm, ZeroConstructor)
	class UClass*                                      Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.SetBytePropertyByName
struct UEmbarkUtils_SetBytePropertyByName_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PropertyName;                                             // (Parm, ZeroConstructor)
	unsigned char                                      Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.SetBoolPropertyByName
struct UEmbarkUtils_SetBoolPropertyByName_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PropertyName;                                             // (Parm, ZeroConstructor)
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.SegmentCapsuleOverlapActors
struct UEmbarkUtils_SegmentCapsuleOverlapActors_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CapsuleStart;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CapsuleEnd;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     CollisionChannel;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class AActor*>                              OutActors;                                                // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.SaveDeveloperStringSetting
struct UEmbarkUtils_SaveDeveloperStringSetting_Params
{
	struct FString                                     SectionName;                                              // (Parm, ZeroConstructor)
	struct FString                                     SettingsKey;                                              // (Parm, ZeroConstructor)
	struct FString                                     Setting;                                                  // (Parm, ZeroConstructor)
};

// Function EmbarkUtils.EmbarkUtils.SaveDeveloperIntSetting
struct UEmbarkUtils_SaveDeveloperIntSetting_Params
{
	struct FString                                     SectionName;                                              // (Parm, ZeroConstructor)
	struct FString                                     SettingsKey;                                              // (Parm, ZeroConstructor)
	int                                                Setting;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.SaveDeveloperFloatSetting
struct UEmbarkUtils_SaveDeveloperFloatSetting_Params
{
	struct FString                                     SectionName;                                              // (Parm, ZeroConstructor)
	struct FString                                     SettingsKey;                                              // (Parm, ZeroConstructor)
	float                                              Setting;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.SaveAutoExec
struct UEmbarkUtils_SaveAutoExec_Params
{
	struct FString                                     NewAutoExec;                                              // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.ResolveClassFromString
struct UEmbarkUtils_ResolveClassFromString_Params
{
	struct FString                                     ClassPath;                                                // (Parm, ZeroConstructor)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.ResetObjectPropertyToCDO
struct UEmbarkUtils_ResetObjectPropertyToCDO_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PropertyName;                                             // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.ResetObjectPropertiesToCDO
struct UEmbarkUtils_ResetObjectPropertiesToCDO_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.RemoveWorldPIEPrefix
struct UEmbarkUtils_RemoveWorldPIEPrefix_Params
{
	struct FString                                     WorldPackagePath;                                         // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkUtils.EmbarkUtils.RemoveSCSNodeFromBlueprint
struct UEmbarkUtils_RemoveSCSNodeFromBlueprint_Params
{
	class UClass*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             RemoveNodeMatchingThisComponentTemplate;                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.ReinitSkeletalMeshComponentAnim
struct UEmbarkUtils_ReinitSkeletalMeshComponentAnim_Params
{
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.ReinitializeProperties
struct UEmbarkUtils_ReinitializeProperties_Params
{
	class UObject*                                     Source;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.RegisterComponent
struct UEmbarkUtils_RegisterComponent_Params
{
	class UActorComponent*                             ComponentToRegister;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.OverrideClientRate
struct UEmbarkUtils_OverrideClientRate_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxClientRate;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxInternetClientRate;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.MakeUniqueObjectName
struct UEmbarkUtils_MakeUniqueObjectName_Params
{
	class UObject*                                     Parent;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Class;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       InBaseName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.LoadFloatConsoleVariable
struct UEmbarkUtils_LoadFloatConsoleVariable_Params
{
	struct FString                                     ConsoleVariableName;                                      // (Parm, ZeroConstructor)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.LoadEngineStringSetting
struct UEmbarkUtils_LoadEngineStringSetting_Params
{
	struct FString                                     SectionName;                                              // (Parm, ZeroConstructor)
	struct FString                                     SettingsKey;                                              // (Parm, ZeroConstructor)
	struct FString                                     OutSetting;                                               // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.LoadDeveloperStringSetting
struct UEmbarkUtils_LoadDeveloperStringSetting_Params
{
	struct FString                                     SectionName;                                              // (Parm, ZeroConstructor)
	struct FString                                     SettingsKey;                                              // (Parm, ZeroConstructor)
	struct FString                                     OutSetting;                                               // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.LoadDeveloperSection
struct UEmbarkUtils_LoadDeveloperSection_Params
{
	struct FString                                     SectionName;                                              // (Parm, ZeroConstructor)
	TArray<struct FString>                             OutSectionContents;                                       // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.LoadDeveloperIntSetting
struct UEmbarkUtils_LoadDeveloperIntSetting_Params
{
	struct FString                                     SectionName;                                              // (Parm, ZeroConstructor)
	struct FString                                     SettingsKey;                                              // (Parm, ZeroConstructor)
	int                                                OutSetting;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.LoadDeveloperFloatSetting
struct UEmbarkUtils_LoadDeveloperFloatSetting_Params
{
	struct FString                                     SectionName;                                              // (Parm, ZeroConstructor)
	struct FString                                     SettingsKey;                                              // (Parm, ZeroConstructor)
	float                                              OutSetting;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.LoadClassFromString
struct UEmbarkUtils_LoadClassFromString_Params
{
	struct FString                                     ClassPath;                                                // (Parm, ZeroConstructor)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.LoadAutoExec
struct UEmbarkUtils_LoadAutoExec_Params
{
	TArray<struct FString>                             Commands;                                                 // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.LoadAssetsAsync
struct UEmbarkUtils_LoadAssetsAsync_Params
{
	TArray<struct FSoftObjectPath>                     ObjectPaths;                                              // (Parm, ZeroConstructor)
	class UObject*                                     CallbackObject;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CallbackMethodName;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.LoadAssetAsync
struct UEmbarkUtils_LoadAssetAsync_Params
{
	struct FSoftObjectPath                             ObjectPath;                                               // (Parm, ZeroConstructor)
	class UObject*                                     CallbackObject;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CallbackMethodName;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.LineTraceSingleBatched
struct UEmbarkUtils_LineTraceSingleBatched_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             Start;                                                    // (ConstParm, Parm, ZeroConstructor)
	TArray<struct FVector>                             End;                                                      // (ConstParm, Parm, ZeroConstructor)
	TEnumAsByte<ETraceTypeQuery>                       TraceChannel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHitResult>                          OutHits;                                                  // (Parm, OutParm, ZeroConstructor)
	bool                                               bIgnoreSelf;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                TraceColor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                TraceHitColor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DrawTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.IsWorldDistanceDependentSubLevel
struct UEmbarkUtils_IsWorldDistanceDependentSubLevel_Params
{
	class UWorld*                                      PersistentWorld;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SubLevelPackageName;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.IsUnattended
struct UEmbarkUtils_IsUnattended_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.IsStreamingLevelPending
struct UEmbarkUtils_IsStreamingLevelPending_Params
{
	class ULevelStreaming*                             LevelStreaming;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.IsStaticJITTranspiledCodeLoaded
struct UEmbarkUtils_IsStaticJITTranspiledCodeLoaded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.IsRepGraphNetRelevant
struct UEmbarkUtils_IsRepGraphNetRelevant_Params
{
	class APawn*                                       Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ActorToCheck;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeDormant;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.IsPropertyIdentical
struct UEmbarkUtils_IsPropertyIdentical_Params
{
	class UObject*                                     ObjA;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PropertyNameA;                                            // (Parm, ZeroConstructor)
	class UObject*                                     ObjB;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PropertyNameB;                                            // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.IsLevelInstanceLoaded
struct UEmbarkUtils_IsLevelInstanceLoaded_Params
{
	class ALevelInstance*                              LevelInstance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.IsAutoplay
struct UEmbarkUtils_IsAutoplay_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.IsAnonymousUser
struct UEmbarkUtils_IsAnonymousUser_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.GetVertexColorData
struct UEmbarkUtils_GetVertexColorData_Params
{
	class USkeletalMesh*                               SkeletalMesh;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           PaintingMeshLODIndex;                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TMap<struct FVector, struct FColor>                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkUtils.EmbarkUtils.GetUniqueId
struct UEmbarkUtils_GetUniqueId_Params
{
	class UObject*                                     QueryObject;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.GetTextPropertyByName
struct UEmbarkUtils_GetTextPropertyByName_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PropertyName;                                             // (Parm, ZeroConstructor)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EmbarkUtils.EmbarkUtils.GetSocketRelativeTransform
struct UEmbarkUtils_GetSocketRelativeTransform_Params
{
	class UStaticMeshComponent*                        StaticMeshComponent;                                      // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       InSocketName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  OutRelativeTransform;                                     // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.GetSkeletalMeshRefPoseTransform
struct UEmbarkUtils_GetSkeletalMeshRefPoseTransform_Params
{
	class USkeletalMesh*                               SkeletalMesh;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.GetServerTimestampAccurate
struct UEmbarkUtils_GetServerTimestampAccurate_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.GetServerTimestamp
struct UEmbarkUtils_GetServerTimestamp_Params
{
	float                                              OutServerTime;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.GetSCSNodeFromCDOComponent
struct UEmbarkUtils_GetSCSNodeFromCDOComponent_Params
{
	class UClass*                                      BPClass;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             CDOComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USCS_Node*                                   ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.GetSanitizedComponentTemplateNameByObject
struct UEmbarkUtils_GetSanitizedComponentTemplateNameByObject_Params
{
	class UObject*                                     ComponentTemplateObject;                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkUtils.EmbarkUtils.GetSanitizedComponentTemplateName
struct UEmbarkUtils_GetSanitizedComponentTemplateName_Params
{
	struct FString                                     ComponentTemplateName;                                    // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkUtils.EmbarkUtils.GetPropertyValueAsString
struct UEmbarkUtils_GetPropertyValueAsString_Params
{
	class UObject*                                     Obj;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PropertyName;                                             // (Parm, ZeroConstructor)
	struct FString                                     OutPropertyValue;                                         // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.GetPropertyTypeNameAsString
struct UEmbarkUtils_GetPropertyTypeNameAsString_Params
{
	class UObject*                                     Obj;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PropertyName;                                             // (Parm, ZeroConstructor)
	struct FString                                     OutPropertyTypeName;                                      // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.GetPropertyType
struct UEmbarkUtils_GetPropertyType_Params
{
	class UObject*                                     Obj;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PropertyName;                                             // (Parm, ZeroConstructor)
	enum class EEmbarkPropertyTypes                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.GetPlayerControllerInWorld
struct UEmbarkUtils_GetPlayerControllerInWorld_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	uint64_t                                           PlayerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.GetPlatformUserName
struct UEmbarkUtils_GetPlatformUserName_Params
{
	bool                                               bOnlyAlphaNumeric;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkUtils.EmbarkUtils.GetPlatformTimeMSTwoDecimals
struct UEmbarkUtils_GetPlatformTimeMSTwoDecimals_Params
{
	int64_t                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.GetPhysicalSurfaceFromName
struct UEmbarkUtils_GetPhysicalSurfaceFromName_Params
{
	struct FName                                       SurfaceName;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.GetParentForCDOComponent
struct UEmbarkUtils_GetParentForCDOComponent_Params
{
	class UClass*                                      BPClass;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             CDOComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.GetOutgoingPacketLossAverage
struct UEmbarkUtils_GetOutgoingPacketLossAverage_Params
{
	class APawn*                                       Pawn;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.GetObjectFromNetGUID
struct UEmbarkUtils_GetObjectFromNetGUID_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NetGUID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.GetNotifyStateStartAndEndTimes
struct UEmbarkUtils_GetNotifyStateStartAndEndTimes_Params
{
	class UAnimSequence*                               Seq;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Type;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TArray<struct FVector2D>                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkUtils.EmbarkUtils.GetNotifyStartAndEndTimeFromName
struct UEmbarkUtils_GetNotifyStartAndEndTimeFromName_Params
{
	class UAnimSequence*                               Seq;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Name;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector2D>                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkUtils.EmbarkUtils.GetNetGUIDForObject
struct UEmbarkUtils_GetNetGUIDForObject_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.GetNameOfPhysicalSurface
struct UEmbarkUtils_GetNameOfPhysicalSurface_Params
{
	TEnumAsByte<EPhysicalSurface>                      SurfaceType;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.GetLookAtInfo
struct UEmbarkUtils_GetLookAtInfo_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxDistance;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OutLookAtInfo;                                            // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.GetLookAt
struct UEmbarkUtils_GetLookAt_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutLocation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutDirection;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.GetLogTimestampFormat
struct UEmbarkUtils_GetLogTimestampFormat_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkUtils.EmbarkUtils.GetInvalidId
struct UEmbarkUtils_GetInvalidId_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.GetInheritenceList
struct UEmbarkUtils_GetInheritenceList_Params
{
	class UClass*                                      StartingType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      TerminationType;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              ClassInheritenceList;                                     // (Parm, OutParm, ZeroConstructor)
};

// Function EmbarkUtils.EmbarkUtils.GetIncomingPacketLossAverage
struct UEmbarkUtils_GetIncomingPacketLossAverage_Params
{
	class APawn*                                       Pawn;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.GetEnumValueByIndex
struct UEmbarkUtils_GetEnumValueByIndex_Params
{
	struct FString                                     EnumName;                                                 // (Parm, ZeroConstructor)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.GetEnumCount
struct UEmbarkUtils_GetEnumCount_Params
{
	struct FString                                     EnumName;                                                 // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.GetConnectionJitter
struct UEmbarkUtils_GetConnectionJitter_Params
{
	class APawn*                                       Pawn;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.GetComponentsByClassFromCDO
struct UEmbarkUtils_GetComponentsByClassFromCDO_Params
{
	class UClass*                                      ActorClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ComponentClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UActorComponent*>                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkUtils.EmbarkUtils.GetClosestBoxActorsToWorldLocation
struct UEmbarkUtils_GetClosestBoxActorsToWorldLocation_Params
{
	int                                                ResultCount;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxDistanceToCenter;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WorldLocation;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              InBoxes;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class AActor*>                              OutBoxes;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function EmbarkUtils.EmbarkUtils.GetClientRate
struct UEmbarkUtils_GetClientRate_Params
{
	class UWorld*                                      World;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxClientRate;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                MaxInternetClientRate;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.GetClassPath
struct UEmbarkUtils_GetClassPath_Params
{
	class UClass*                                      ClassToGetPathFrom;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkUtils.EmbarkUtils.GetCDOComponentsForClass
struct UEmbarkUtils_GetCDOComponentsForClass_Params
{
	class UClass*                                      ActorClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UActorComponent*>                     OutCDOComponents;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function EmbarkUtils.EmbarkUtils.GetCDOComponentFromClass
struct UEmbarkUtils_GetCDOComponentFromClass_Params
{
	class UClass*                                      ActorClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ComponentCDOClass;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.GetBuildCL
struct UEmbarkUtils_GetBuildCL_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.GetBlueprintInheritanceList
struct UEmbarkUtils_GetBlueprintInheritanceList_Params
{
	class UClass*                                      StartingType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              ClassInheritanceList;                                     // (Parm, OutParm, ZeroConstructor)
};

// Function EmbarkUtils.EmbarkUtils.GetBlueprintGeneratedClass
struct UEmbarkUtils_GetBlueprintGeneratedClass_Params
{
	class UBlueprint*                                  Blueprint;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.GetAverageFrameTime
struct UEmbarkUtils_GetAverageFrameTime_Params
{
	class APawn*                                       Pawn;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.GetAnimSequenceModelSpaceBoneTransformFromNameAtTime
struct UEmbarkUtils_GetAnimSequenceModelSpaceBoneTransformFromNameAtTime_Params
{
	class UAnimSequence*                               Seq;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Out;                                                      // (Parm, OutParm, IsPlainOldData)
	bool                                               bApplyAdditiveAnimation;                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.GetAnimSequenceModelSpaceBoneTransformFromIndexAtTime
struct UEmbarkUtils_GetAnimSequenceModelSpaceBoneTransformFromIndexAtTime_Params
{
	class UAnimSequence*                               Seq;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                BoneIndex;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Out;                                                      // (Parm, OutParm, IsPlainOldData)
	bool                                               bApplyAdditiveAnimation;                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.GetAnimSequenceBoneTransformFromNameAtTime
struct UEmbarkUtils_GetAnimSequenceBoneTransformFromNameAtTime_Params
{
	class UAnimSequence*                               Seq;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Out;                                                      // (Parm, OutParm, IsPlainOldData)
	bool                                               bApplyAdditiveAnimation;                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.GetAnimSequenceBoneTransformFromIndexAtTime
struct UEmbarkUtils_GetAnimSequenceBoneTransformFromIndexAtTime_Params
{
	class UAnimSequence*                               Seq;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                BoneIndex;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Out;                                                      // (Parm, OutParm, IsPlainOldData)
	bool                                               bApplyAdditiveAnimation;                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.GetAnimSequenceBoneTransform
struct UEmbarkUtils_GetAnimSequenceBoneTransform_Params
{
	class UAnimSequence*                               Seq;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TrackIndex;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Out;                                                      // (Parm, OutParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.GetAnimationSequenceCurveValueFromUIDAtTime
struct UEmbarkUtils_GetAnimationSequenceCurveValueFromUIDAtTime_Params
{
	class UAnimSequence*                               Seq;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	uint16_t                                           CurveUID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.GetAnimationSequenceCurveValueFromNameAtTime
struct UEmbarkUtils_GetAnimationSequenceCurveValueFromNameAtTime_Params
{
	class UAnimSequence*                               Seq;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CurveName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.GetAnimationSequenceCurveUIDFromName
struct UEmbarkUtils_GetAnimationSequenceCurveUIDFromName_Params
{
	class UAnimSequence*                               Seq;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CurveName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	uint16_t                                           OutUID;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.GetAllSublevelsToLoadOnClient
struct UEmbarkUtils_GetAllSublevelsToLoadOnClient_Params
{
	class UWorld*                                      PersistentWorld;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class ULevelStreaming*>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkUtils.EmbarkUtils.GetAllStreamingLevelsAssetPackageNames
struct UEmbarkUtils_GetAllStreamingLevelsAssetPackageNames_Params
{
	class UWorld*                                      PersistentWorld;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkUtils.EmbarkUtils.GetAllStreamingLevels
struct UEmbarkUtils_GetAllStreamingLevels_Params
{
	class UWorld*                                      PersistentWorld;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class ULevelStreaming*>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkUtils.EmbarkUtils.GetAllSoftObjectPaths
struct UEmbarkUtils_GetAllSoftObjectPaths_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FSoftObjectPath>                     OutPaths;                                                 // (Parm, OutParm, ZeroConstructor)
	bool                                               bRecursivelySearchSubObjects;                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              IgnoreSubObjectsOfClass;                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function EmbarkUtils.EmbarkUtils.GetAllPropertyNames
struct UEmbarkUtils_GetAllPropertyNames_Params
{
	class UObject*                                     Obj;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             OutNames;                                                 // (Parm, OutParm, ZeroConstructor)
	bool                                               bRecursivelyFindProperties;                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyBlueprintVisible;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDotSyntaxForNestedProperties;                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeEditorProperties;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.GetAllLevelInstancesToLoadOnClient
struct UEmbarkUtils_GetAllLevelInstancesToLoadOnClient_Params
{
	class UWorld*                                      PersistentWorld;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class ALevelInstance*>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkUtils.EmbarkUtils.GetAllAttachedActors
struct UEmbarkUtils_GetAllAttachedActors_Params
{
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              OutAttachedActors;                                        // (Parm, OutParm, ZeroConstructor)
};

// Function EmbarkUtils.EmbarkUtils.GetActorRelativeTransform
struct UEmbarkUtils_GetActorRelativeTransform_Params
{
	class USceneComponent*                             SceneComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FTransform                                  OutTransform;                                             // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.ForceUpdateOverlaps
struct UEmbarkUtils_ForceUpdateOverlaps_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNotify;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.EnumValueToString
struct UEmbarkUtils_EnumValueToString_Params
{
	struct FString                                     EnumName;                                                 // (Parm, ZeroConstructor)
	int64_t                                            Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkUtils.EmbarkUtils.EnumToString
struct UEmbarkUtils_EnumToString_Params
{
	struct FString                                     EnumName;                                                 // (Parm, ZeroConstructor)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkUtils.EmbarkUtils.EnumIndexToString
struct UEmbarkUtils_EnumIndexToString_Params
{
	struct FString                                     EnumName;                                                 // (Parm, ZeroConstructor)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkUtils.EmbarkUtils.DoesPropertyExist
struct UEmbarkUtils_DoesPropertyExist_Params
{
	class UObject*                                     Obj;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PropertyName;                                             // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.DoesFunctionExist
struct UEmbarkUtils_DoesFunctionExist_Params
{
	class UObject*                                     Obj;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       FunctionName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.DestroyController
struct UEmbarkUtils_DestroyController_Params
{
	class AController*                                 Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.DeleteDeveloperSetting
struct UEmbarkUtils_DeleteDeveloperSetting_Params
{
	struct FString                                     SectionName;                                              // (Parm, ZeroConstructor)
	struct FString                                     SettingsKey;                                              // (Parm, ZeroConstructor)
};

// Function EmbarkUtils.EmbarkUtils.DebugGetAllObjectsOfClass
struct UEmbarkUtils_DebugGetAllObjectsOfClass_Params
{
	class UClass*                                      Class;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeDerivedClasses;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UObject*>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkUtils.EmbarkUtils.CreateComponentOfType
struct UEmbarkUtils_CreateComponentOfType_Params
{
	class AActor*                                      Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ComponentType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceDisableReplication;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EComponentMobility>                    Opt_SceneComponentMobility;                               // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Opt_SceneComponentParent;                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       Opt_SceneComponentAttachSocket;                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCallRegisterComponent;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSetNetAddressable;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.CopyProperty
struct UEmbarkUtils_CopyProperty_Params
{
	class UObject*                                     FromObj;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     FromPropertyName;                                         // (Parm, ZeroConstructor)
	class UObject*                                     ToObj;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ToPropertyName;                                           // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.CopyPropertiesBetweenObjects
struct UEmbarkUtils_CopyPropertiesBetweenObjects_Params
{
	class UObject*                                     FromObj;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ToObj;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.CopyCollisionResponses
struct UEmbarkUtils_CopyCollisionResponses_Params
{
	class UPrimitiveComponent*                         From;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         To;                                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.Conv_StringToVector
struct UEmbarkUtils_Conv_StringToVector_Params
{
	struct FString                                     InString;                                                 // (Parm, ZeroConstructor)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.ClearAllTimersForObject
struct UEmbarkUtils_ClearAllTimersForObject_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Object;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.CapsuleOverlapByChannel
struct UEmbarkUtils_CapsuleOverlapByChannel_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CapsulePos;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HalfHeight;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FQuat                                       Rotation;                                                 // (ConstParm, Parm, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     CollisionChannel;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FOverlapResult>                      OutOverlaps;                                              // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.CalculateFullCDOExtent
struct UEmbarkUtils_CalculateFullCDOExtent_Params
{
	class UClass*                                      ActorClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBox                                        OutExtent;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Opt_DebugActor;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.BindOnReceiveEmbarkPlayerController
struct UEmbarkUtils_BindOnReceiveEmbarkPlayerController_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       FunctionName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.AutoplayGameMode
struct UEmbarkUtils_AutoplayGameMode_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EmbarkUtils.EmbarkUtils.AreObjectPropertiesIdenticalWithProperties
struct UEmbarkUtils_AreObjectPropertiesIdenticalWithProperties_Params
{
	class UObject*                                     ObjectA;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ObjectB;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               OutDifferingProperties;                                   // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.AreObjectPropertiesIdentical
struct UEmbarkUtils_AreObjectPropertiesIdentical_Params
{
	class UObject*                                     ObjectA;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ObjectB;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.AnimSequenceGetTrackIndex
struct UEmbarkUtils_AnimSequenceGetTrackIndex_Params
{
	class UAnimSequence*                               Seq;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                BoneIndex;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TrackIndex;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkUtils.EmbarkUtils.AnimSequenceGetBoneIndex
struct UEmbarkUtils_AnimSequenceGetBoneIndex_Params
{
	class UAnimSequence*                               Seq;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                BoneIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
