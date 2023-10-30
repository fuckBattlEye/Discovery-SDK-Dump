#pragma once

//   SDK By:if

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace sdk
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EmbarkReplicatedTransform.ReplicatedTransform
// 0x0068
struct FReplicatedTransform
{
	struct FVector                                     Location;                                                 // 0x0000(0x0018) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0018(0x0018) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     LinearVelocity;                                           // 0x0030(0x0018) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     AngularVelocity;                                          // 0x0048(0x0018) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0060(0x0004) MISSED OFFSET
	unsigned char                                      bReplicateLocation : 1;                                   // 0x0064(0x0001) (Edit, DisableEditOnInstance, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      bReplicateRotation : 1;                                   // 0x0064(0x0001) (Edit, DisableEditOnInstance, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      bReplicateLinearVelocity : 1;                             // 0x0064(0x0001) (Edit, DisableEditOnInstance, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      bReplicateAngularVelocity : 1;                            // 0x0064(0x0001) (Edit, DisableEditOnInstance, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      bTeleported : 1;                                          // 0x0064(0x0001) (BlueprintVisible, Transient)
	unsigned char                                      bDormantLinearVelocity : 1;                               // 0x0064(0x0001) (Transient)
	unsigned char                                      bDormantAngularVelocity : 1;                              // 0x0064(0x0001) (Transient)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0065(0x0003) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
