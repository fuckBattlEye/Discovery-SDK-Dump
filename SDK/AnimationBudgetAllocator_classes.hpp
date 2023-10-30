#pragma once

//   SDK By:if

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace sdk
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class AnimationBudgetAllocator.SkeletalMeshComponentBudgeted
// 0x0030 (0x0F80 - 0x0F50)
class USkeletalMeshComponentBudgeted : public USkeletalMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0F50(0x0020) MISSED OFFSET
	unsigned char                                      bAutoRegisterWithBudgetAllocator : 1;                     // 0x0F70(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bAutoCalculateSignificance : 1;                           // 0x0F70(0x0001) (Edit)
	unsigned char                                      bShouldUseActorRenderedFlag : 1;                          // 0x0F70(0x0001) (Edit)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0F71(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AnimationBudgetAllocator.SkeletalMeshComponentBudgeted"));
		return ptr;
	}


	void SetAutoRegisterWithBudgetAllocator(bool bInAutoRegisterWithBudgetAllocator);//Offset:Discovery.exe+0x2487B50
};


// Class AnimationBudgetAllocator.AnimationBudgetAllocatorFactory
// 0x0000 (0x0028 - 0x0028)
class UAnimationBudgetAllocatorFactory : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AnimationBudgetAllocator.AnimationBudgetAllocatorFactory"));
		return ptr;
	}

};


// Class AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UAnimationBudgetBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary"));
		return ptr;
	}


	void STATIC_SetAnimationBudgetParameters(class UObject* WorldContextObject, const struct FAnimationBudgetAllocatorParameters& InParameters);//Offset:Discovery.exe+0x2486730
	void STATIC_EnableAnimationBudget(class UObject* WorldContextObject, bool bEnabled);//Offset:Discovery.exe+0x24868A0
};


// Class AnimationBudgetAllocator.EmbarkAnimationBudgetBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UEmbarkAnimationBudgetBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AnimationBudgetAllocator.EmbarkAnimationBudgetBlueprintLibrary"));
		return ptr;
	}


	void STATIC_UnregisterComponent(class UObject* WorldContextObject, class USkeletalMeshComponentBudgeted* InComponent);//Offset:Discovery.exe+0x2486C80
	void STATIC_SetParameters(class UObject* WorldContextObject, const struct FAnimationBudgetAllocatorParameters& InParameters);//Offset:Discovery.exe+0x2486F20
	void STATIC_SetComponentSignificance(class UObject* WorldContextObject, class USkeletalMeshComponentBudgeted* Component, float Significance, bool bNeverSkip, bool bTickEvenIfNotRendered, bool bAllowReducedWork, bool bForceInterpolate);//Offset:Discovery.exe+0x2487160
	void STATIC_RegisterComponent(class UObject* WorldContextObject, class USkeletalMeshComponentBudgeted* InComponent);//Offset:Discovery.exe+0x2486D60
	class USkeletalMeshComponentBudgeted* STATIC_RecalculatePrerequisite(class UObject* WorldContextObject, class USkeletalMeshComponentBudgeted* ForComp);//Offset:Discovery.exe+0x2486E40
	TArray<struct FEmbarkAnimBudgetAllocatorComponentData> STATIC_GetAllRegisteredComponents(class UObject* WorldContextObject);//Offset:Discovery.exe+0x2487090
};


// Class AnimationBudgetAllocator.EmbarkAnimationBudgetAllocatorFactory
// 0x0000 (0x0028 - 0x0028)
class UEmbarkAnimationBudgetAllocatorFactory : public UAnimationBudgetAllocatorFactory
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class AnimationBudgetAllocator.EmbarkAnimationBudgetAllocatorFactory"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
