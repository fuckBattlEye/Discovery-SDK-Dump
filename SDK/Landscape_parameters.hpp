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

// Function Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue
struct ALandscapeProxy_SetLandscapeMaterialVectorParameterValue_Params
{
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue
struct ALandscapeProxy_SetLandscapeMaterialTextureParameterValue_Params
{
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue
struct ALandscapeProxy_SetLandscapeMaterialScalarParameterValue_Params
{
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Landscape.LandscapeProxy.LandscapeExportHeightmapToRenderTarget
struct ALandscapeProxy_LandscapeExportHeightmapToRenderTarget_Params
{
	class UTextureRenderTarget2D*                      InRenderTarget;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InExportHeightIntoRGChannel;                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InExportLandscapeProxies;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Landscape.LandscapeProxy.EditorSetLandscapeMaterial
struct ALandscapeProxy_EditorSetLandscapeMaterial_Params
{
	class UMaterialInterface*                          NewLandscapeMaterial;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Landscape.LandscapeProxy.EditorApplySpline
struct ALandscapeProxy_EditorApplySpline_Params
{
	class USplineComponent*                            InSplineComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              StartWidth;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndWidth;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartSideFalloff;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndSideFalloff;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartRoll;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndRoll;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumSubdivisions;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRaiseHeights;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLowerHeights;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class ULandscapeLayerInfoObject*                   PaintLayer;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       EditLayerName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Landscape.LandscapeProxy.ChangeLODDistanceFactor
struct ALandscapeProxy_ChangeLODDistanceFactor_Params
{
	float                                              InLODDistanceFactor;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections
struct ALandscapeProxy_ChangeComponentScreenSizeToUseSubSections_Params
{
	float                                              InComponentScreenSizeToUseSubSections;                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Landscape.LandscapeBlueprintBrushBase.RequestLandscapeUpdate
struct ALandscapeBlueprintBrushBase_RequestLandscapeUpdate_Params
{
};

// Function Landscape.LandscapeBlueprintBrushBase.Render
struct ALandscapeBlueprintBrushBase_Render_Params
{
	bool                                               InIsHeightmap;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTextureRenderTarget2D*                      InCombinedResult;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       InWeightmapLayerName;                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UTextureRenderTarget2D*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Landscape.LandscapeBlueprintBrushBase.Initialize
struct ALandscapeBlueprintBrushBase_Initialize_Params
{
	struct FTransform                                  InLandscapeTransform;                                     // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FIntPoint                                   InLandscapeSize;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FIntPoint                                   InLandscapeRenderTargetSize;                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Landscape.LandscapeBlueprintBrushBase.GetBlueprintRenderDependencies
struct ALandscapeBlueprintBrushBase_GetBlueprintRenderDependencies_Params
{
	TArray<class UObject*>                             OutStreamableAssets;                                      // (Parm, OutParm, ZeroConstructor)
};

// Function Landscape.LandscapeComponent.GetMaterialInstanceDynamic
struct ULandscapeComponent_GetMaterialInstanceDynamic_Params
{
	int                                                InIndex;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightByNameAtLocation
struct ULandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation_Params
{
	struct FVector                                     InLocation;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       InPaintLayerName;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightAtLocation
struct ULandscapeComponent_EditorGetPaintLayerWeightAtLocation_Params
{
	struct FVector                                     InLocation;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class ULandscapeLayerInfoObject*                   PaintLayer;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Landscape.LandscapeHeightfieldCollisionComponent.GetRenderComponent
struct ULandscapeHeightfieldCollisionComponent_GetRenderComponent_Params
{
	class ULandscapeComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Landscape.LandscapeSplinesComponent.GetSplineMeshComponents
struct ULandscapeSplinesComponent_GetSplineMeshComponents_Params
{
	TArray<class USplineMeshComponent*>                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
