//   SDK By:if

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../pch.h"

namespace sdk
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function WBP_CTAButton.WBP_CTAButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_CTAButton_C::Construct()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function WBP_CTAButton.WBP_CTAButton_C.Construct"));

	UWBP_CTAButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CTAButton.WBP_CTAButton_C.ButtonHovered
// (BlueprintCallable, BlueprintEvent)

void UWBP_CTAButton_C::ButtonHovered()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function WBP_CTAButton.WBP_CTAButton_C.ButtonHovered"));

	UWBP_CTAButton_C_ButtonHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CTAButton.WBP_CTAButton_C.ButtonUnHovered
// (BlueprintCallable, BlueprintEvent)

void UWBP_CTAButton_C::ButtonUnHovered()
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function WBP_CTAButton.WBP_CTAButton_C.ButtonUnHovered"));

	UWBP_CTAButton_C_ButtonUnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CTAButton.WBP_CTAButton_C.ExecuteUbergraph_WBP_CTAButton
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CTAButton_C::ExecuteUbergraph_WBP_CTAButton(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn)
		fn = UObject::FindObject<UFunction>(XorStr("Function WBP_CTAButton.WBP_CTAButton_C.ExecuteUbergraph_WBP_CTAButton"));

	UWBP_CTAButton_C_ExecuteUbergraph_WBP_CTAButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
