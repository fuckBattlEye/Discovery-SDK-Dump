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

// Function EmbarkDynamics.EmbarkDynamicsDebugDraw.DrawSpringGraph
struct UEmbarkDynamicsDebugDraw_DrawSpringGraph_Params
{
	class UWorld*                                      World;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FSpringPlot                                 LastPlot;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     GraphOrigin;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FLinearColor                                FirstColor;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FLinearColor                                LastColor;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              FirstLineThickness;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LastLineThickness;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GraphSize;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkDynamics.EmbarkDynamicsDebugDraw.DrawOverlappingCones
struct UEmbarkDynamicsDebugDraw_DrawOverlappingCones_Params
{
	class UWorld*                                      World;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Origin;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	TArray<struct FConeParameters>                     ConeConstraints;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumSegments;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkDynamics.EmbarkPendulumMixinLibrary.Update
struct UEmbarkPendulumMixinLibrary_Update_Params
{
	struct FEmbarkPendulum                             Pend;                                                     // (Parm, OutParm)
	struct FTransform                                  Origin;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ExternalForces;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function EmbarkDynamics.EmbarkPendulumMixinLibrary.SetVelocity
struct UEmbarkPendulumMixinLibrary_SetVelocity_Params
{
	struct FEmbarkPendulum                             Pend;                                                     // (Parm, OutParm)
	struct FVector                                     InVelocity;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function EmbarkDynamics.EmbarkPendulumMixinLibrary.Reset
struct UEmbarkPendulumMixinLibrary_Reset_Params
{
	struct FEmbarkPendulum                             Pend;                                                     // (Parm, OutParm)
	struct FTransform                                  Origin;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function EmbarkDynamics.EmbarkPendulumMixinLibrary.PushParticle
struct UEmbarkPendulumMixinLibrary_PushParticle_Params
{
	struct FEmbarkPendulum                             Pend;                                                     // (Parm, OutParm)
	struct FVector                                     PushVector;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function EmbarkDynamics.EmbarkPendulumMixinLibrary.GetVelocity
struct UEmbarkPendulumMixinLibrary_GetVelocity_Params
{
	struct FEmbarkPendulum                             Pend;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkDynamics.EmbarkPendulumMixinLibrary.GetResult
struct UEmbarkPendulumMixinLibrary_GetResult_Params
{
	struct FEmbarkPendulum                             Pend;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function EmbarkDynamics.EmbarkPendulumMixinLibrary.DebugDraw
struct UEmbarkPendulumMixinLibrary_DebugDraw_Params
{
	struct FEmbarkPendulum                             Pend;                                                     // (Parm, OutParm)
	class UWorld*                                      World;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Origin;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FTransform                                  WorldOffset;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function EmbarkDynamics.SimpleExactDamperMixinLibrary.UpdateWithTarget
struct USimpleExactDamperMixinLibrary_UpdateWithTarget_Params
{
	struct FSimpleExactDamper                          SED;                                                      // (Parm, OutParm)
	float                                              NewTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkDynamics.SimpleExactDamperMixinLibrary.Update
struct USimpleExactDamperMixinLibrary_Update_Params
{
	struct FSimpleExactDamper                          SED;                                                      // (Parm, OutParm)
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkDynamics.SimpleExactDamperMixinLibrary.SetVelocity
struct USimpleExactDamperMixinLibrary_SetVelocity_Params
{
	struct FSimpleExactDamper                          SED;                                                      // (Parm, OutParm)
	float                                              InVelocity;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkDynamics.SimpleExactDamperMixinLibrary.SetValue
struct USimpleExactDamperMixinLibrary_SetValue_Params
{
	struct FSimpleExactDamper                          SED;                                                      // (Parm, OutParm)
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkDynamics.SimpleExactDamperMixinLibrary.SetHalfLife
struct USimpleExactDamperMixinLibrary_SetHalfLife_Params
{
	struct FSimpleExactDamper                          SED;                                                      // (Parm, OutParm)
	float                                              InHalfLife;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkDynamics.SimpleExactDamperMixinLibrary.Reset
struct USimpleExactDamperMixinLibrary_Reset_Params
{
	struct FSimpleExactDamper                          SED;                                                      // (Parm, OutParm)
};

// Function EmbarkDynamics.SimpleExactDamperMixinLibrary.Init
struct USimpleExactDamperMixinLibrary_Init_Params
{
	struct FSimpleExactDamper                          SED;                                                      // (Parm, OutParm)
	float                                              InitValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InitVelocity;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkDynamics.SimpleExactDamperMixinLibrary.GetVelocity
struct USimpleExactDamperMixinLibrary_GetVelocity_Params
{
	struct FSimpleExactDamper                          SED;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkDynamics.SimpleExactDamperMixinLibrary.GetValue
struct USimpleExactDamperMixinLibrary_GetValue_Params
{
	struct FSimpleExactDamper                          SED;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkDynamics.SimpleExactDamperMixinLibrary.GetHalfLife
struct USimpleExactDamperMixinLibrary_GetHalfLife_Params
{
	struct FSimpleExactDamper                          SED;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkDynamics.DoubleExactDamperMixinLibrary.UpdateWithTarget
struct UDoubleExactDamperMixinLibrary_UpdateWithTarget_Params
{
	struct FDoubleExactDamper                          DED;                                                      // (Parm, OutParm)
	float                                              NewTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkDynamics.DoubleExactDamperMixinLibrary.Update
struct UDoubleExactDamperMixinLibrary_Update_Params
{
	struct FDoubleExactDamper                          DED;                                                      // (Parm, OutParm)
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkDynamics.DoubleExactDamperMixinLibrary.Teleport
struct UDoubleExactDamperMixinLibrary_Teleport_Params
{
	struct FDoubleExactDamper                          DED;                                                      // (Parm, OutParm)
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkDynamics.DoubleExactDamperMixinLibrary.SetTarget
struct UDoubleExactDamperMixinLibrary_SetTarget_Params
{
	struct FDoubleExactDamper                          DED;                                                      // (Parm, OutParm)
	float                                              Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkDynamics.DoubleExactDamperMixinLibrary.SetSmoothness
struct UDoubleExactDamperMixinLibrary_SetSmoothness_Params
{
	struct FDoubleExactDamper                          DED;                                                      // (Parm, OutParm)
	float                                              InSmoothness;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkDynamics.DoubleExactDamperMixinLibrary.Reset
struct UDoubleExactDamperMixinLibrary_Reset_Params
{
	struct FDoubleExactDamper                          DED;                                                      // (Parm, OutParm)
};

// Function EmbarkDynamics.DoubleExactDamperMixinLibrary.Init
struct UDoubleExactDamperMixinLibrary_Init_Params
{
	struct FDoubleExactDamper                          DED;                                                      // (Parm, OutParm)
	float                                              InitValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InitVelocity;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkDynamics.DoubleExactDamperMixinLibrary.GetVelocity
struct UDoubleExactDamperMixinLibrary_GetVelocity_Params
{
	struct FDoubleExactDamper                          DED;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkDynamics.DoubleExactDamperMixinLibrary.GetValue
struct UDoubleExactDamperMixinLibrary_GetValue_Params
{
	struct FDoubleExactDamper                          DED;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkDynamics.DoubleExactDamperMixinLibrary.GetTarget
struct UDoubleExactDamperMixinLibrary_GetTarget_Params
{
	struct FDoubleExactDamper                          DED;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkDynamics.DoubleExactDamperMixinLibrary.GetSmoothness
struct UDoubleExactDamperMixinLibrary_GetSmoothness_Params
{
	struct FDoubleExactDamper                          DED;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkDynamics.DoubleExactDamperVecMixinLibrary.UpdateWithTarget
struct UDoubleExactDamperVecMixinLibrary_UpdateWithTarget_Params
{
	struct FDoubleExactDamperVec                       DED;                                                      // (Parm, OutParm)
	struct FVector                                     NewTarget;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkDynamics.DoubleExactDamperVecMixinLibrary.Update
struct UDoubleExactDamperVecMixinLibrary_Update_Params
{
	struct FDoubleExactDamperVec                       DED;                                                      // (Parm, OutParm)
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkDynamics.DoubleExactDamperVecMixinLibrary.SetTarget
struct UDoubleExactDamperVecMixinLibrary_SetTarget_Params
{
	struct FDoubleExactDamperVec                       DED;                                                      // (Parm, OutParm)
	struct FVector                                     Target;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function EmbarkDynamics.DoubleExactDamperVecMixinLibrary.SetSmoothness
struct UDoubleExactDamperVecMixinLibrary_SetSmoothness_Params
{
	struct FDoubleExactDamperVec                       DED;                                                      // (Parm, OutParm)
	struct FVector                                     InSmoothness;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function EmbarkDynamics.DoubleExactDamperVecMixinLibrary.Reset
struct UDoubleExactDamperVecMixinLibrary_Reset_Params
{
	struct FDoubleExactDamperVec                       DED;                                                      // (Parm, OutParm)
};

// Function EmbarkDynamics.DoubleExactDamperVecMixinLibrary.Init
struct UDoubleExactDamperVecMixinLibrary_Init_Params
{
	struct FDoubleExactDamperVec                       DED;                                                      // (Parm, OutParm)
	struct FVector                                     InitValue;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     InitVelocity;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function EmbarkDynamics.DoubleExactDamperVecMixinLibrary.GetVelocity
struct UDoubleExactDamperVecMixinLibrary_GetVelocity_Params
{
	struct FDoubleExactDamperVec                       DED;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkDynamics.DoubleExactDamperVecMixinLibrary.GetValue
struct UDoubleExactDamperVecMixinLibrary_GetValue_Params
{
	struct FDoubleExactDamperVec                       DED;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkDynamics.DoubleExactDamperVecMixinLibrary.GetTarget
struct UDoubleExactDamperVecMixinLibrary_GetTarget_Params
{
	struct FDoubleExactDamperVec                       DED;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkDynamics.DoubleExactDamperVecMixinLibrary.GetSmoothness
struct UDoubleExactDamperVecMixinLibrary_GetSmoothness_Params
{
	struct FDoubleExactDamperVec                       DED;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkDynamics.SODSpringFloatMixinLibrary.Update
struct USODSpringFloatMixinLibrary_Update_Params
{
	struct FSODSpringFloat                             SOD;                                                      // (Parm, OutParm)
	float                                              NewTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkDynamics.SODSpringFloatMixinLibrary.TeleportTo
struct USODSpringFloatMixinLibrary_TeleportTo_Params
{
	struct FSODSpringFloat                             SOD;                                                      // (Parm, OutParm)
	float                                              NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkDynamics.SODSpringFloatMixinLibrary.SetVelocity
struct USODSpringFloatMixinLibrary_SetVelocity_Params
{
	struct FSODSpringFloat                             SOD;                                                      // (Parm, OutParm)
	float                                              InVelocity;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkDynamics.SODSpringFloatMixinLibrary.SetValue
struct USODSpringFloatMixinLibrary_SetValue_Params
{
	struct FSODSpringFloat                             SOD;                                                      // (Parm, OutParm)
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkDynamics.SODSpringFloatMixinLibrary.Reset
struct USODSpringFloatMixinLibrary_Reset_Params
{
	struct FSODSpringFloat                             SOD;                                                      // (Parm, OutParm)
};

// Function EmbarkDynamics.SODSpringFloatMixinLibrary.GetVelocity
struct USODSpringFloatMixinLibrary_GetVelocity_Params
{
	struct FSODSpringFloat                             SOD;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkDynamics.SODSpringFloatMixinLibrary.GetValue
struct USODSpringFloatMixinLibrary_GetValue_Params
{
	struct FSODSpringFloat                             SOD;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkDynamics.SODSpringFloatMixinLibrary.GetAcceleration
struct USODSpringFloatMixinLibrary_GetAcceleration_Params
{
	struct FSODSpringFloat                             SOD;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkDynamics.SODSpringFloatMixinLibrary.Compute
struct USODSpringFloatMixinLibrary_Compute_Params
{
	struct FSODSpringFloat                             SOD;                                                      // (Parm, OutParm)
	float                                              Frequency;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damping;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Response;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkDynamics.SODSpringVectorMixinLibrary.Update
struct USODSpringVectorMixinLibrary_Update_Params
{
	struct FSODSpringVector                            SOD;                                                      // (Parm, OutParm)
	struct FVector                                     NewTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkDynamics.SODSpringVectorMixinLibrary.TeleportTo
struct USODSpringVectorMixinLibrary_TeleportTo_Params
{
	struct FSODSpringVector                            SOD;                                                      // (Parm, OutParm)
	struct FVector                                     NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkDynamics.SODSpringVectorMixinLibrary.SetVelocity
struct USODSpringVectorMixinLibrary_SetVelocity_Params
{
	struct FSODSpringVector                            SOD;                                                      // (Parm, OutParm)
	struct FVector                                     InVelocity;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkDynamics.SODSpringVectorMixinLibrary.SetValue
struct USODSpringVectorMixinLibrary_SetValue_Params
{
	struct FSODSpringVector                            SOD;                                                      // (Parm, OutParm)
	struct FVector                                     InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkDynamics.SODSpringVectorMixinLibrary.Reset
struct USODSpringVectorMixinLibrary_Reset_Params
{
	struct FSODSpringVector                            SOD;                                                      // (Parm, OutParm)
};

// Function EmbarkDynamics.SODSpringVectorMixinLibrary.GetVelocity
struct USODSpringVectorMixinLibrary_GetVelocity_Params
{
	struct FSODSpringVector                            SOD;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkDynamics.SODSpringVectorMixinLibrary.GetValue
struct USODSpringVectorMixinLibrary_GetValue_Params
{
	struct FSODSpringVector                            SOD;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkDynamics.SODSpringVectorMixinLibrary.GetAcceleration
struct USODSpringVectorMixinLibrary_GetAcceleration_Params
{
	struct FSODSpringVector                            SOD;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkDynamics.SODSpringVectorMixinLibrary.Compute
struct USODSpringVectorMixinLibrary_Compute_Params
{
	struct FSODSpringVector                            SOD;                                                      // (Parm, OutParm)
	float                                              Frequency;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damping;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Response;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkDynamics.MinJerkMixinLibrary.Update
struct UMinJerkMixinLibrary_Update_Params
{
	struct FMinJerk                                    MinJerk;                                                  // (Parm, OutParm)
	double                                             Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             TimeHorizon;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkDynamics.MinJerkMixinLibrary.Reset
struct UMinJerkMixinLibrary_Reset_Params
{
	struct FMinJerk                                    MinJerk;                                                  // (Parm, OutParm)
};

// Function EmbarkDynamics.MinJerkMixinLibrary.IsSleeping
struct UMinJerkMixinLibrary_IsSleeping_Params
{
	struct FMinJerk                                    MinJerk;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkDynamics.MinJerkMixinLibrary.Init
struct UMinJerkMixinLibrary_Init_Params
{
	struct FMinJerk                                    MinJerk;                                                  // (Parm, OutParm)
	double                                             ResetValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             ResetSpeed;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             ResetAccel;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmbarkDynamics.MinJerkVecMixinLibrary.Update
struct UMinJerkVecMixinLibrary_Update_Params
{
	struct FMinJerkVec                                 MinJerkVec;                                               // (Parm, OutParm)
	struct FVector                                     TargetVec;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              TimeHorizon;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkDynamics.MinJerkVecMixinLibrary.SetTarget
struct UMinJerkVecMixinLibrary_SetTarget_Params
{
	struct FMinJerkVec                                 MinJerkVec;                                               // (Parm, OutParm)
	struct FVector                                     Target;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function EmbarkDynamics.MinJerkVecMixinLibrary.Reset
struct UMinJerkVecMixinLibrary_Reset_Params
{
	struct FMinJerkVec                                 MinJerkVec;                                               // (Parm, OutParm)
};

// Function EmbarkDynamics.MinJerkVecMixinLibrary.IsSleeping
struct UMinJerkVecMixinLibrary_IsSleeping_Params
{
	struct FMinJerkVec                                 MinJerkVec;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkDynamics.MinJerkVecMixinLibrary.InitFromRotator
struct UMinJerkVecMixinLibrary_InitFromRotator_Params
{
	struct FMinJerkVec                                 MinJerkVec;                                               // (Parm, OutParm)
	struct FRotator                                    Rotation;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    Velocity;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    Acceleration;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function EmbarkDynamics.MinJerkVecMixinLibrary.Init
struct UMinJerkVecMixinLibrary_Init_Params
{
	struct FMinJerkVec                                 MinJerkVec;                                               // (Parm, OutParm)
	struct FVector                                     CurrentVector;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Acceleration;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function EmbarkDynamics.MinJerkVecMixinLibrary.GetVelocityAsVector
struct UMinJerkVecMixinLibrary_GetVelocityAsVector_Params
{
	struct FMinJerkVec                                 MinJerkVec;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkDynamics.MinJerkVecMixinLibrary.GetAsVector
struct UMinJerkVecMixinLibrary_GetAsVector_Params
{
	struct FMinJerkVec                                 MinJerkVec;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkDynamics.MinJerkVecMixinLibrary.GetAsRotator
struct UMinJerkVecMixinLibrary_GetAsRotator_Params
{
	struct FMinJerkVec                                 MinJerkVec;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkDynamics.MinJerkVecMixinLibrary.GetAccelerationAsVector
struct UMinJerkVecMixinLibrary_GetAccelerationAsVector_Params
{
	struct FMinJerkVec                                 MinJerkVec;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkDynamics.MinJerkVec2DMixinLibrary.Update
struct UMinJerkVec2DMixinLibrary_Update_Params
{
	struct FMinJerkVec2D                               MinJerkVec;                                               // (Parm, OutParm)
	struct FVector2D                                   TargetVec;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              TimeHorizon;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkDynamics.MinJerkVec2DMixinLibrary.Reset
struct UMinJerkVec2DMixinLibrary_Reset_Params
{
	struct FMinJerkVec2D                               MinJerkVec;                                               // (Parm, OutParm)
};

// Function EmbarkDynamics.MinJerkVec2DMixinLibrary.IsSleeping
struct UMinJerkVec2DMixinLibrary_IsSleeping_Params
{
	struct FMinJerkVec2D                               MinJerkVec;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkDynamics.MinJerkVec2DMixinLibrary.InitFromRotator
struct UMinJerkVec2DMixinLibrary_InitFromRotator_Params
{
	struct FMinJerkVec2D                               MinJerkVec;                                               // (Parm, OutParm)
	struct FRotator                                    Rotation;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    Velocity;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    Acceleration;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function EmbarkDynamics.MinJerkVec2DMixinLibrary.Init
struct UMinJerkVec2DMixinLibrary_Init_Params
{
	struct FMinJerkVec2D                               MinJerkVec;                                               // (Parm, OutParm)
	struct FVector2D                                   CurrentVector;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   Velocity;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   Acceleration;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function EmbarkDynamics.MinJerkVec2DMixinLibrary.GetVelocityAsVector
struct UMinJerkVec2DMixinLibrary_GetVelocityAsVector_Params
{
	struct FMinJerkVec2D                               MinJerkVec;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkDynamics.MinJerkVec2DMixinLibrary.GetAsVector2D
struct UMinJerkVec2DMixinLibrary_GetAsVector2D_Params
{
	struct FMinJerkVec2D                               MinJerkVec;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkDynamics.MinJerkVec2DMixinLibrary.GetAsRotator
struct UMinJerkVec2DMixinLibrary_GetAsRotator_Params
{
	struct FMinJerkVec2D                               MinJerkVec;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EmbarkDynamics.MinJerkVec2DMixinLibrary.GetAccelerationAsVector
struct UMinJerkVec2DMixinLibrary_GetAccelerationAsVector_Params
{
	struct FMinJerkVec2D                               MinJerkVec;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
