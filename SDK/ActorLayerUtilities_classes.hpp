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

// Class ActorLayerUtilities.LayersBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class ULayersBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr)
			ptr = UObject::FindClass(XorStr("Class ActorLayerUtilities.LayersBlueprintLibrary"));
		return ptr;
	}


	void STATIC_RemoveActorFromLayer(class AActor* InActor, const struct FActorLayer& Layer);//Offset:Discovery.exe+0x2DF7500
	TArray<class AActor*> STATIC_GetActors(class UObject* WorldContextObject, const struct FActorLayer& ActorLayer);//Offset:Discovery.exe+0x2DF76E0
	void STATIC_AddActorToLayer(class AActor* InActor, const struct FActorLayer& Layer);//Offset:Discovery.exe+0x2DF75F0
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
