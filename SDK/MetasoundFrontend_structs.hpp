#pragma once

//   SDK By:if

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace sdk
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum MetasoundFrontend.EMetasoundFrontendClassType
enum class EMetasoundFrontendClassType : uint8_t
{
	External                       = 0,
	Graph                          = 1,
	Input                          = 2,
	Output                         = 3,
	Literal                        = 4,
	Variable                       = 5,
	VariableDeferredAccessor       = 6,
	VariableAccessor               = 7,
	VariableMutator                = 8,
	Invalid                        = 9,
	EMetasoundFrontendClassType_MAX = 10
};


// Enum MetasoundFrontend.EMetasoundFrontendNodeStyleDisplayVisibility
enum class EMetasoundFrontendNodeStyleDisplayVisibility : uint8_t
{
	Visible                        = 0,
	Hidden                         = 1,
	EMetasoundFrontendNodeStyleDisplayVisibility_MAX = 2
};


// Enum MetasoundFrontend.EMetasoundFrontendStyleEdgeDisplay
enum class EMetasoundFrontendStyleEdgeDisplay : uint8_t
{
	Default                        = 0,
	Inherited                      = 1,
	Hidden                         = 2,
	EMetasoundFrontendStyleEdgeDisplay_MAX = 3
};


// Enum MetasoundFrontend.EMetasoundFrontendLiteralType
enum class EMetasoundFrontendLiteralType : uint8_t
{
	None                           = 0,
	Boolean                        = 1,
	Integer                        = 2,
	Float                          = 3,
	String                         = 4,
	UObject                        = 5,
	NoneArray                      = 6,
	BooleanArray                   = 7,
	IntegerArray                   = 8,
	FloatArray                     = 9,
	StringArray                    = 10,
	UObjectArray                   = 11,
	Invalid                        = 12,
	EMetasoundFrontendLiteralType_MAX = 13
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MetasoundFrontend.MetasoundFrontendVersionNumber
// 0x0008
struct FMetasoundFrontendVersionNumber
{
	int                                                Major;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                Minor;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendVersion
// 0x0010
struct FMetasoundFrontendVersion
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FMetasoundFrontendVersionNumber             Number;                                                   // 0x0008(0x0008) (Edit, EditConst)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendVertex
// 0x0028
struct FMetasoundFrontendVertex
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x0008(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FName                                       TypeName;                                                 // 0x0010(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FGuid                                       VertexID;                                                 // 0x0018(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendLiteral
// 0x0058
struct FMetasoundFrontendLiteral
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	int                                                AsNumDefault;                                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<bool>                                       AsBoolean;                                                // 0x0008(0x0010) (ZeroConstructor)
	TArray<int>                                        AsInteger;                                                // 0x0018(0x0010) (ZeroConstructor)
	TArray<float>                                      AsFloat;                                                  // 0x0028(0x0010) (ZeroConstructor)
	TArray<struct FString>                             AsString;                                                 // 0x0038(0x0010) (ZeroConstructor)
	TArray<class UObject*>                             AsUObject;                                                // 0x0048(0x0010) (ZeroConstructor)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendVertexLiteral
// 0x0068
struct FMetasoundFrontendVertexLiteral
{
	struct FGuid                                       VertexID;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FMetasoundFrontendLiteral                   Value;                                                    // 0x0010(0x0058) (Edit)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendVariable
// 0x00E8
struct FMetasoundFrontendVariable
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FText                                       DisplayName;                                              // 0x0008(0x0018)
	struct FText                                       Description;                                              // 0x0020(0x0018)
	struct FName                                       TypeName;                                                 // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FMetasoundFrontendLiteral                   Literal;                                                  // 0x0040(0x0058)
	struct FGuid                                       ID;                                                       // 0x0098(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       VariableNodeID;                                           // 0x00A8(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       MutatorNodeID;                                            // 0x00B8(0x0010) (ZeroConstructor, IsPlainOldData)
	TArray<struct FGuid>                               AccessorNodeIDs;                                          // 0x00C8(0x0010) (ZeroConstructor)
	TArray<struct FGuid>                               DeferredAccessorNodeIDs;                                  // 0x00D8(0x0010) (ZeroConstructor)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendNodeInterface
// 0x0030
struct FMetasoundFrontendNodeInterface
{
	TArray<struct FMetasoundFrontendVertex>            Inputs;                                                   // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FMetasoundFrontendVertex>            Outputs;                                                  // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FMetasoundFrontendVertex>            Environment;                                              // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendNodeStyleDisplay
// 0x0058
struct FMetasoundFrontendNodeStyleDisplay
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TMap<struct FGuid, struct FVector2D>               Locations;                                                // 0x0008(0x0050)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendNodeStyle
// 0x0060
struct FMetasoundFrontendNodeStyle
{
	struct FMetasoundFrontendNodeStyleDisplay          Display;                                                  // 0x0000(0x0058)
	bool                                               bMessageNodeUpdated;                                      // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrivate;                                               // 0x0059(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x005A(0x0006) MISSED OFFSET
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendNode
// 0x00C8
struct FMetasoundFrontendNode
{
	struct FGuid                                       ID;                                                       // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ClassID;                                                  // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Name;                                                     // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FMetasoundFrontendNodeInterface             Interface;                                                // 0x0028(0x0030)
	TArray<struct FMetasoundFrontendVertexLiteral>     InputLiterals;                                            // 0x0058(0x0010) (ZeroConstructor)
	struct FMetasoundFrontendNodeStyle                 Style;                                                    // 0x0068(0x0060)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendEdge
// 0x0040
struct FMetasoundFrontendEdge
{
	struct FGuid                                       FromNodeID;                                               // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       FromVertexID;                                             // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ToNodeID;                                                 // 0x0020(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ToVertexID;                                               // 0x0030(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendStyleEdge
// 0x0001
struct FMetasoundFrontendStyleEdge
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendStyleEdgeClass
// 0x000C
struct FMetasoundFrontendStyleEdgeClass
{
	struct FName                                       TypeName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FMetasoundFrontendStyleEdge                 Style;                                                    // 0x0008(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendGraphStyle
// 0x0018
struct FMetasoundFrontendGraphStyle
{
	bool                                               bIsGraphEditable;                                         // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FMetasoundFrontendStyleEdgeClass>    EdgeStyles;                                               // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendGraph
// 0x0048
struct FMetasoundFrontendGraph
{
	TArray<struct FMetasoundFrontendNode>              Nodes;                                                    // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FMetasoundFrontendEdge>              Edges;                                                    // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FMetasoundFrontendVariable>          Variables;                                                // 0x0020(0x0010) (ZeroConstructor)
	struct FMetasoundFrontendGraphStyle                Style;                                                    // 0x0030(0x0018)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendVertexMetadata
// 0x0001
struct FMetasoundFrontendVertexMetadata
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendClassVertex
// 0x0010 (0x0038 - 0x0028)
struct FMetasoundFrontendClassVertex : public FMetasoundFrontendVertex
{
	struct FGuid                                       NodeID;                                                   // 0x0028(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendClassStyleDisplay
// 0x000C
struct FMetasoundFrontendClassStyleDisplay
{
	struct FName                                       ImageName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bShowName;                                                // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bShowInputNames;                                          // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bShowOutputNames;                                         // 0x000A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x000B(0x0001) MISSED OFFSET
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendClassInput
// 0x0058 (0x0090 - 0x0038)
struct FMetasoundFrontendClassInput : public FMetasoundFrontendClassVertex
{
	struct FMetasoundFrontendLiteral                   DefaultLiteral;                                           // 0x0038(0x0058) (Edit)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendClassVariable
// 0x0058 (0x0090 - 0x0038)
struct FMetasoundFrontendClassVariable : public FMetasoundFrontendClassVertex
{
	struct FMetasoundFrontendLiteral                   DefaultLiteral;                                           // 0x0038(0x0058) (Edit)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendClassOutput
// 0x0000 (0x0038 - 0x0038)
struct FMetasoundFrontendClassOutput : public FMetasoundFrontendClassVertex
{

};

// ScriptStruct MetasoundFrontend.MetasoundFrontendClassEnvironmentVariable
// 0x0020
struct FMetasoundFrontendClassEnvironmentVariable
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       TypeName;                                                 // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsRequired;                                              // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendInterfaceStyle
// 0x0001
struct FMetasoundFrontendInterfaceStyle
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendClassInterface
// 0x0048
struct FMetasoundFrontendClassInterface
{
	struct FMetasoundFrontendInterfaceStyle            InputStyle;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FMetasoundFrontendInterfaceStyle            OutputStyle;                                              // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	TArray<struct FMetasoundFrontendClassInput>        Inputs;                                                   // 0x0008(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<struct FMetasoundFrontendClassOutput>       Outputs;                                                  // 0x0018(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<struct FMetasoundFrontendClassEnvironmentVariable> Environment;                                              // 0x0028(0x0010) (Edit, ZeroConstructor, EditConst)
	struct FGuid                                       ChangeID;                                                 // 0x0038(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendInterface
// 0x0010 (0x0058 - 0x0048)
struct FMetasoundFrontendInterface : public FMetasoundFrontendClassInterface
{
	struct FMetasoundFrontendVersion                   Version;                                                  // 0x0048(0x0010)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendClassName
// 0x0018
struct FMetasoundFrontendClassName
{
	struct FName                                       Namespace;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       Name;                                                     // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       Variant;                                                  // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendClassMetadata
// 0x0034
struct FMetasoundFrontendClassMetadata
{
	struct FMetasoundFrontendClassName                 ClassName;                                                // 0x0000(0x0018) (Edit, EditConst)
	struct FMetasoundFrontendVersionNumber             Version;                                                  // 0x0018(0x0008) (Edit, EditConst)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0020(0x0001) MISSED OFFSET
	bool                                               bIsDeprecated;                                            // 0x0021(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoUpdateManagesInterface;                              // 0x0022(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0023(0x0001) MISSED OFFSET
	struct FGuid                                       ChangeID;                                                 // 0x0024(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendClassStyle
// 0x000C
struct FMetasoundFrontendClassStyle
{
	struct FMetasoundFrontendClassStyleDisplay         Display;                                                  // 0x0000(0x000C)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendClass
// 0x00A8
struct FMetasoundFrontendClass
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FGuid                                       ID;                                                       // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FMetasoundFrontendClassMetadata             MetaData;                                                 // 0x0018(0x0034) (Edit)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	struct FMetasoundFrontendClassInterface            Interface;                                                // 0x0050(0x0048) (Edit)
	struct FMetasoundFrontendClassStyle                Style;                                                    // 0x0098(0x000C)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendGraphClassPresetOptions
// 0x0058
struct FMetasoundFrontendGraphClassPresetOptions
{
	bool                                               bIsPreset;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData01[0x50];                                      // 0x0001(0x0050) UNKNOWN PROPERTY: InputsInheritingDefault
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendGraphClass
// 0x00A0 (0x0148 - 0x00A8)
struct FMetasoundFrontendGraphClass : public FMetasoundFrontendClass
{
	struct FMetasoundFrontendGraph                     Graph;                                                    // 0x00A8(0x0048)
	struct FMetasoundFrontendGraphClassPresetOptions   PresetOptions;                                            // 0x00F0(0x0058)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendDocumentMetadata
// 0x0010
struct FMetasoundFrontendDocumentMetadata
{
	struct FMetasoundFrontendVersion                   Version;                                                  // 0x0000(0x0010)
};

// ScriptStruct MetasoundFrontend.MetasoundFrontendDocument
// 0x01F8
struct FMetasoundFrontendDocument
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
	struct FMetasoundFrontendDocumentMetadata          MetaData;                                                 // 0x0010(0x0010) (Edit)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0020(0x0050) UNKNOWN PROPERTY: Interfaces
	struct FMetasoundFrontendGraphClass                RootGraph;                                                // 0x0070(0x0148) (Edit)
	TArray<struct FMetasoundFrontendGraphClass>        Subgraphs;                                                // 0x01B8(0x0010) (ZeroConstructor)
	TArray<struct FMetasoundFrontendClass>             Dependencies;                                             // 0x01C8(0x0010) (ZeroConstructor)
	struct FMetasoundFrontendVersion                   ArchetypeVersion;                                         // 0x01D8(0x0010)
	TArray<struct FMetasoundFrontendVersion>           InterfaceVersions;                                        // 0x01E8(0x0010) (ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
