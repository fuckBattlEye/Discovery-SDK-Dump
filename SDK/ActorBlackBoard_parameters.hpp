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

// Function ActorBlackBoard.ActorBlackBoardTestOnReps.OnRep_TriggeredExplosions
struct UActorBlackBoardTestOnReps_OnRep_TriggeredExplosions_Params
{
};

// Function ActorBlackBoard.ActorBlackBoardTestOnReps.OnRep_TriggeredA
struct UActorBlackBoardTestOnReps_OnRep_TriggeredA_Params
{
};

// Function ActorBlackBoard.ActorBlackBoardTestInitialization.InitForActor
struct UActorBlackBoardTestInitialization_InitForActor_Params
{
	class UObject*                                     Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActorBlackBoard.BlackBoardTesterAS.SetOwnerActor
struct UBlackBoardTesterAS_SetOwnerActor_Params
{
	class AActor*                                      Obj;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActorBlackBoard.BlackBoardTesterAS.RegisterClassToServerBlackBoard
struct UBlackBoardTesterAS_RegisterClassToServerBlackBoard_Params
{
	class UClass*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActorBlackBoard.BlackBoardTesterAS.Init
struct UBlackBoardTesterAS_Init_Params
{
};

// Function ActorBlackBoard.BlackBoardTesterAS.GetFirstStateOfTypeFromServerBlackBoard
struct UBlackBoardTesterAS_GetFirstStateOfTypeFromServerBlackBoard_Params
{
	class UClass*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActorBlackBoard.BlackBoardTesterAS.GetFirstStateOfTypeFromClientBlackBoard
struct UBlackBoardTesterAS_GetFirstStateOfTypeFromClientBlackBoard_Params
{
	class UClass*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ActorBlackBoard.BlackBoardTesterAS.FakeTransmit
struct UBlackBoardTesterAS_FakeTransmit_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
