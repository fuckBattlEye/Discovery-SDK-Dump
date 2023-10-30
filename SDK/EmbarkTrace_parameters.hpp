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

// Function EmbarkTrace.EmbarkTrace.QueryTraceHits
struct UEmbarkTrace_QueryTraceHits_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	uint64_t                                           InTraceHandle;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHitResult>                          OutHits;                                                  // (Parm, OutParm, ZeroConstructor)
	bool                                               bAppendHits;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkTrace.EmbarkTrace.CapsuleTraceSingle
struct UEmbarkTrace_CapsuleTraceSingle_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Start;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HalfHeight;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETraceTypeQuery>                       TraceChannel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm, IsPlainOldData)
	bool                                               bIgnoreSelf;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                TraceColor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                TraceHitColor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DrawTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Orientation;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkTrace.EmbarkTrace.BatchLineTraceSingleByProfile
struct UEmbarkTrace_BatchLineTraceSingleByProfile_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FEmbarkTraceLineSeg>                 LineSegs;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FName                                       ProfileName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bIgnoreSelf;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHitResult>                          OutHits;                                                  // (Parm, OutParm, ZeroConstructor)
	uint64_t                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkTrace.EmbarkTrace.AsyncSphereTraceSingle
struct UEmbarkTrace_AsyncSphereTraceSingle_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Start;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETraceTypeQuery>                       TraceChannel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bIgnoreSelf;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	uint64_t                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkTrace.EmbarkTrace.AsyncLineTraceSingle
struct UEmbarkTrace_AsyncLineTraceSingle_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Start;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETraceTypeQuery>                       TraceChannel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bIgnoreSelf;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	uint64_t                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkTrace.EmbarkTrace.AsyncCapsuleTraceSingle
struct UEmbarkTrace_AsyncCapsuleTraceSingle_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Start;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Orientation;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HalfHeight;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETraceTypeQuery>                       TraceChannel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bIgnoreSelf;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	uint64_t                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkTrace.EmbarkTrace.ActorLineTraceSingle
struct UEmbarkTrace_ActorLineTraceSingle_Params
{
	class AActor*                                      AgainstActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Start;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     TraceChannel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkTrace.EmbarkRayQueryBuffer.Tick
struct UEmbarkRayQueryBuffer_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkTrace.EmbarkRayQueryBuffer.SetNum
struct UEmbarkRayQueryBuffer_SetNum_Params
{
	int                                                Size;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkTrace.EmbarkRayQueryBuffer.HasCompleted
struct UEmbarkRayQueryBuffer_HasCompleted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkTrace.EmbarkRayQueryBuffer.Execute
struct UEmbarkRayQueryBuffer_Execute_Params
{
	int                                                FrameDelay;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkTrace.EmbarkGridQueryBuffer.Update
struct UEmbarkGridQueryBuffer_Update_Params
{
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Orientation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LinearVelocity;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function EmbarkTrace.EmbarkGridQueryBuffer.Tick
struct UEmbarkGridQueryBuffer_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkTrace.EmbarkGridQueryBuffer.SetSize
struct UEmbarkGridQueryBuffer_SetSize_Params
{
	int                                                SamplePointsX;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SamplePointsY;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InternalResolutionRatio;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Width;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RayLength;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CacheScale;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkTrace.EmbarkGridQueryBuffer.SampleToBuffer
struct UEmbarkGridQueryBuffer_SampleToBuffer_Params
{
};

// Function EmbarkTrace.EmbarkGridQueryBuffer.ProjectToSampledGrid
struct UEmbarkGridQueryBuffer_ProjectToSampledGrid_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FIntPoint                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkTrace.EmbarkGridQueryBuffer.GetSamplePointsY
struct UEmbarkGridQueryBuffer_GetSamplePointsY_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkTrace.EmbarkGridQueryBuffer.GetSamplePointsX
struct UEmbarkGridQueryBuffer_GetSamplePointsX_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkTrace.EmbarkGridQueryBuffer.GetSampleCellSize
struct UEmbarkGridQueryBuffer_GetSampleCellSize_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkTrace.EmbarkGridQueryBuffer.GetResults
struct UEmbarkGridQueryBuffer_GetResults_Params
{
	TArray<struct FRayHitSimple>                       ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function EmbarkTrace.EmbarkGridQueryBuffer.GetCurrentSamplingLocations
struct UEmbarkGridQueryBuffer_GetCurrentSamplingLocations_Params
{
	struct FVector                                     Origin;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StepSide;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StepRow;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkTrace.EmbarkGridQueryBuffer.GetCurrentOrientation
struct UEmbarkGridQueryBuffer_GetCurrentOrientation_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkTrace.EmbarkGridQueryBuffer.GetCurrentLocation
struct UEmbarkGridQueryBuffer_GetCurrentLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function EmbarkTrace.EmbarkGridQueryBuffer.GetCellSize
struct UEmbarkGridQueryBuffer_GetCellSize_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkTrace.EmbarkGridQueryBuffer.GetAverageHeightsAboveGrid
struct UEmbarkGridQueryBuffer_GetAverageHeightsAboveGrid_Params
{
	TArray<struct FVector>                             DesiredPoints;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      QueryRadii;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      OutHeights;                                               // (Parm, OutParm, ZeroConstructor)
	TArray<TEnumAsByte<EQueryResult>>                  Status;                                                   // (Parm, OutParm, ZeroConstructor)
	bool                                               bAverageNormals;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             OutNormals;                                               // (Parm, OutParm, ZeroConstructor)
	bool                                               bVisualize;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkTrace.EmbarkGridQueryBuffer.CustomSampleToBuffer
struct UEmbarkGridQueryBuffer_CustomSampleToBuffer_Params
{
	TArray<struct FVector>                             SamplePoints;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
