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

// ScriptStruct FieldSystemEngine.FieldObjectCommands
// 0x0030
struct FFieldObjectCommands
{
	TArray<struct FName>                               TargetNames;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UFieldNodeBase*>                      RootNodes;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
	TArray<class UFieldSystemMetaData*>                MetaDatas;                                                // 0x0020(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
