#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_InfiniText_MaxpTables1840749635.h"
#include "AssemblyU2DCSharp_InfiniText_NameTables371767804.h"
#include "AssemblyU2DCSharp_InfiniText_OS2Tables173296241.h"
#include "AssemblyU2DCSharp_InfiniText_PostTables1162731139.h"
#include "AssemblyU2DCSharp_InfiniText_GposTables3815445870.h"
#include "AssemblyU2DCSharp_InfiniText_GsubTables2789697790.h"
#include "AssemblyU2DCSharp_GetSecurityDomain3814748782.h"
#include "AssemblyU2DCSharp_UIScriptDomainManager3203568980.h"
#include "AssemblyU2DCSharp_Wrench_UnityLanguageLoader3673306454.h"
#include "AssemblyU2DCSharp_Wrench_OnLogEvent3913109635.h"
#include "AssemblyU2DCSharp_Wrench_Log1329319978.h"
#include "AssemblyU2DCSharp_Wrench_MLElement1615846541.h"
#include "AssemblyU2DCSharp_Wrench_MLLexer1512204523.h"
#include "AssemblyU2DCSharp_Nitro_Assemblies2368217022.h"
#include "AssemblyU2DCSharp_Nitro_CodeAssembly813901145.h"
#include "AssemblyU2DCSharp_Nitro_CodeLexer802521045.h"
#include "AssemblyU2DCSharp_Nitro_CodeReference3262748424.h"
#include "AssemblyU2DCSharp_Nitro_AddResult4038988336.h"
#include "AssemblyU2DCSharp_Nitro_BreakPoint193309125.h"
#include "AssemblyU2DCSharp_Nitro_CodeFragment4001624203.h"
#include "AssemblyU2DCSharp_Nitro_ArrayFragment2252634339.h"
#include "AssemblyU2DCSharp_Nitro_BaseFragment684661655.h"
#include "AssemblyU2DCSharp_Nitro_BracketFragment1567982410.h"
#include "AssemblyU2DCSharp_Nitro_ConstructorFragment3925404206.h"
#include "AssemblyU2DCSharp_Nitro_ForFragment177920425.h"
#include "AssemblyU2DCSharp_Nitro_IfFragment2714099289.h"
#include "AssemblyU2DCSharp_Nitro_IndexFragment4151693758.h"
#include "AssemblyU2DCSharp_Nitro_MethodFragment1573725141.h"
#include "AssemblyU2DCSharp_Nitro_NumberFragment3556924425.h"
#include "AssemblyU2DCSharp_Nitro_OperationFragment3952971771.h"
#include "AssemblyU2DCSharp_Nitro_OperatorFragment558898306.h"
#include "AssemblyU2DCSharp_Nitro_PropertyFragment2848219597.h"
#include "AssemblyU2DCSharp_Nitro_StringFragment634881251.h"
#include "AssemblyU2DCSharp_Nitro_SwitchFragment168543882.h"
#include "AssemblyU2DCSharp_Nitro_TypeFragment3643441850.h"
#include "AssemblyU2DCSharp_Nitro_VariableFragment2232769190.h"
#include "AssemblyU2DCSharp_Nitro_CompilationException1357493542.h"
#include "AssemblyU2DCSharp_Nitro_CompilationServices3912241725.h"
#include "AssemblyU2DCSharp_Nitro_CompiledClass2566710525.h"
#include "AssemblyU2DCSharp_Nitro_CompiledFragment2613193543.h"
#include "AssemblyU2DCSharp_Nitro_CompiledMethod1616556204.h"
#include "AssemblyU2DCSharp_Nitro_DynamicMethodCompiler2421262727.h"
#include "AssemblyU2DCSharp_Nitro_Handler4129802106.h"
#include "AssemblyU2DCSharp_Nitro_Handlers1961663993.h"
#include "AssemblyU2DCSharp_Nitro_KeyWords2560564154.h"
#include "AssemblyU2DCSharp_Nitro_MethodOverloads319229794.h"
#include "AssemblyU2DCSharp_Nitro_Modifiers1036351212.h"
#include "AssemblyU2DCSharp_Nitro_AotFileEvent2146669432.h"
#include "AssemblyU2DCSharp_Nitro_NitroCode2482140973.h"
#include "AssemblyU2DCSharp_Nitro_NitroIL2546925525.h"
#include "AssemblyU2DCSharp_Nitro_Operation2694499211.h"
#include "AssemblyU2DCSharp_Nitro_AddOperation46454918.h"
#include "AssemblyU2DCSharp_Nitro_AndOperation459744744.h"
#include "AssemblyU2DCSharp_Nitro_ArrayOperation1919211888.h"
#include "AssemblyU2DCSharp_Nitro_BaseOperation299434544.h"
#include "AssemblyU2DCSharp_Nitro_BitwiseXOrOperation1151515825.h"
#include "AssemblyU2DCSharp_Nitro_BoxOperation2518437844.h"
#include "AssemblyU2DCSharp_Nitro_BreakOperation1202640658.h"
#include "AssemblyU2DCSharp_Nitro_CastOperation2354503386.h"
#include "AssemblyU2DCSharp_Nitro_ConstructOperation3459772872.h"
#include "AssemblyU2DCSharp_Nitro_ContinueOperation2321553644.h"
#include "AssemblyU2DCSharp_Nitro_DivideOperation2204147944.h"
#include "AssemblyU2DCSharp_Nitro_EqualsOperation2268308148.h"
#include "AssemblyU2DCSharp_Nitro_ForOperation2667720030.h"
#include "AssemblyU2DCSharp_Nitro_GreaterThanOperation673095272.h"
#include "AssemblyU2DCSharp_Nitro_GreaterThanOrEqualOperation465423483.h"
#include "AssemblyU2DCSharp_Nitro_IfOperation3407909282.h"
#include "AssemblyU2DCSharp_Nitro_IndexOperation2782383089.h"
#include "AssemblyU2DCSharp_Nitro_LessThanOperation3341014197.h"
#include "AssemblyU2DCSharp_Nitro_LessThanOrEqualOperation2870297880.h"
#include "AssemblyU2DCSharp_Nitro_MethodOperation2287948876.h"
#include "AssemblyU2DCSharp_Nitro_ModuloOperation1614191591.h"
#include "AssemblyU2DCSharp_Nitro_MultiplyOperation4150397983.h"
#include "AssemblyU2DCSharp_Nitro_NotEqualOperation2129280474.h"
#include "AssemblyU2DCSharp_Nitro_OrOperation524264860.h"
#include "AssemblyU2DCSharp_Nitro_PropertyOperation592370100.h"
#include "AssemblyU2DCSharp_Nitro_ReturnOperation458083517.h"
#include "AssemblyU2DCSharp_Nitro_SetOperation2714369357.h"
#include "AssemblyU2DCSharp_Nitro_ShiftLeftOperation1155207248.h"
#include "AssemblyU2DCSharp_Nitro_ShiftRightOperation2805096851.h"
#include "AssemblyU2DCSharp_Nitro_SubtractOperation2377567407.h"
#include "AssemblyU2DCSharp_Nitro_SwitchOperation1463531025.h"
#include "AssemblyU2DCSharp_Nitro_ThisOperation2445889149.h"
#include "AssemblyU2DCSharp_Nitro_TypeOperation1032897923.h"
#include "AssemblyU2DCSharp_Nitro_TypeofOperation1839329816.h"
#include "AssemblyU2DCSharp_Nitro_Operator1771126330.h"
#include "AssemblyU2DCSharp_Nitro_OperatorAdd4119143811.h"
#include "AssemblyU2DCSharp_Nitro_OperatorAddTo2711424468.h"
#include "AssemblyU2DCSharp_Nitro_OperatorBitwiseAnd2167324782.h"
#include "AssemblyU2DCSharp_Nitro_OperatorBitwiseOr1619465996.h"
#include "AssemblyU2DCSharp_Nitro_OperatorBitwiseXOr3706299170.h"
#include "AssemblyU2DCSharp_Nitro_OperatorDecrement3410836617.h"
#include "AssemblyU2DCSharp_Nitro_OperatorDivide2928316409.h"
#include "AssemblyU2DCSharp_Nitro_OperatorDivideInTo165896465.h"
#include "AssemblyU2DCSharp_Nitro_OperatorGreaterThan3911860619.h"
#include "AssemblyU2DCSharp_Nitro_OperatorGreaterThanOrEql601595020.h"
#include "AssemblyU2DCSharp_Nitro_OperatorIncrement1467937411.h"
#include "AssemblyU2DCSharp_Nitro_OperatorLShift2870284218.h"







#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2600 = { sizeof (MaxpTables_t1840749635), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2601 = { sizeof (NameTables_t371767804), -1, sizeof(NameTables_t371767804_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2601[1] = 
{
	NameTables_t371767804_StaticFields::get_offset_of_PropertyMap_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2602 = { sizeof (OS2Tables_t173296241), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2603 = { sizeof (PostTables_t1162731139), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2604 = { sizeof (GposTables_t3815445870), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2605 = { sizeof (GsubTables_t2789697790), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2606 = { sizeof (GetSecurityDomain_t3814748782), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2607 = { sizeof (UIScriptDomainManager_t3203568980), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2608 = { sizeof (UnityLanguageLoader_t3673306454), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2608[1] = 
{
	UnityLanguageLoader_t3673306454::get_offset_of_Languages_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2609 = { sizeof (OnLogEvent_t3913109635), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2610 = { sizeof (Log_t1329319978), -1, sizeof(Log_t1329319978_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2610[2] = 
{
	Log_t1329319978_StaticFields::get_offset_of_Active_0(),
	Log_t1329319978_StaticFields::get_offset_of_OnLog_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2611 = { sizeof (MLElement_t1615846541), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2611[3] = 
{
	MLElement_t1615846541::get_offset_of_Tag_0(),
	MLElement_t1615846541::get_offset_of_SelfClosing_1(),
	MLElement_t1615846541::get_offset_of_Properties_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2612 = { sizeof (MLLexer_t1512204523), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2612[3] = 
{
	MLLexer_t1512204523::get_offset_of_Literal_4(),
	MLLexer_t1512204523::get_offset_of_LineNumber_5(),
	MLLexer_t1512204523::get_offset_of_DidReadJunk_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2613 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2614 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2615 = { sizeof (Assemblies_t2368217022), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2616 = { sizeof (CodeAssembly_t813901145), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2616[4] = 
{
	CodeAssembly_t813901145::get_offset_of_Name_0(),
	CodeAssembly_t813901145::get_offset_of_Current_1(),
	CodeAssembly_t813901145::get_offset_of_NitroAOT_2(),
	CodeAssembly_t813901145::get_offset_of_Assembly_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2617 = { sizeof (CodeLexer_t802521045), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2617[3] = 
{
	CodeLexer_t802521045::get_offset_of_Literal_4(),
	CodeLexer_t802521045::get_offset_of_LineNumber_5(),
	CodeLexer_t802521045::get_offset_of_DidReadJunk_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2618 = { sizeof (CodeReference_t3262748424), -1, sizeof(CodeReference_t3262748424_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2618[4] = 
{
	CodeReference_t3262748424_StaticFields::get_offset_of_CurrentAssembly_0(),
	CodeReference_t3262748424_StaticFields::get_offset_of_Assemblies_1(),
	CodeReference_t3262748424::get_offset_of_Reference_2(),
	CodeReference_t3262748424::get_offset_of_InAssembly_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2619 = { sizeof (AddResult_t4038988336)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2619[4] = 
{
	AddResult_t4038988336::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2620 = { sizeof (BreakPoint_t193309125), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2620[2] = 
{
	BreakPoint_t193309125::get_offset_of_End_0(),
	BreakPoint_t193309125::get_offset_of_ContinuePoint_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2621 = { sizeof (CodeFragment_t4001624203), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2621[6] = 
{
	CodeFragment_t4001624203::get_offset_of_GivenType_0(),
	CodeFragment_t4001624203::get_offset_of_NextChild_1(),
	CodeFragment_t4001624203::get_offset_of_LastChild_2(),
	CodeFragment_t4001624203::get_offset_of_FirstChild_3(),
	CodeFragment_t4001624203::get_offset_of_PreviousChild_4(),
	CodeFragment_t4001624203::get_offset_of_ParentFragment_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2622 = { sizeof (ArrayFragment_t2252634339), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2622[2] = 
{
	ArrayFragment_t2252634339::get_offset_of_ArrayType_6(),
	ArrayFragment_t2252634339::get_offset_of_Defaults_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2623 = { sizeof (BaseFragment_t684661655), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2624 = { sizeof (BracketFragment_t1567982410), -1, sizeof(BracketFragment_t1567982410_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2624[4] = 
{
	BracketFragment_t1567982410_StaticFields::get_offset_of_Brackets_6(),
	BracketFragment_t1567982410_StaticFields::get_offset_of_EndBrackets_7(),
	BracketFragment_t1567982410::get_offset_of_Bracket_8(),
	BracketFragment_t1567982410::get_offset_of_CloseBracket_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2625 = { sizeof (ConstructorFragment_t3925404206), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2625[2] = 
{
	ConstructorFragment_t3925404206::get_offset_of_NewType_6(),
	ConstructorFragment_t3925404206::get_offset_of_Brackets_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2626 = { sizeof (ForFragment_t177920425), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2626[3] = 
{
	ForFragment_t177920425::get_offset_of_Value_6(),
	ForFragment_t177920425::get_offset_of_Body_7(),
	ForFragment_t177920425::get_offset_of_Parameters_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2627 = { sizeof (IfFragment_t2714099289), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2627[4] = 
{
	IfFragment_t2714099289::get_offset_of_ApplyElseTo_6(),
	IfFragment_t2714099289::get_offset_of_IfTrue_7(),
	IfFragment_t2714099289::get_offset_of_IfFalse_8(),
	IfFragment_t2714099289::get_offset_of_Condition_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2628 = { sizeof (IndexFragment_t4151693758), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2628[2] = 
{
	IndexFragment_t4151693758::get_offset_of_Brackets_6(),
	IndexFragment_t4151693758::get_offset_of_Variable_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2629 = { sizeof (MethodFragment_t1573725141), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2629[2] = 
{
	MethodFragment_t1573725141::get_offset_of_MethodName_6(),
	MethodFragment_t1573725141::get_offset_of_Brackets_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2630 = { sizeof (NumberFragment_t3556924425), -1, sizeof(NumberFragment_t3556924425_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2630[3] = 
{
	NumberFragment_t3556924425_StaticFields::get_offset_of_Number_6(),
	NumberFragment_t3556924425::get_offset_of_Float_7(),
	NumberFragment_t3556924425::get_offset_of_Value_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2631 = { sizeof (OperationFragment_t3952971771), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2631[1] = 
{
	OperationFragment_t3952971771::get_offset_of_LineNumber_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2632 = { sizeof (OperatorFragment_t558898306), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2632[1] = 
{
	OperatorFragment_t558898306::get_offset_of_Value_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2633 = { sizeof (PropertyFragment_t2848219597), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2633[2] = 
{
	PropertyFragment_t2848219597::get_offset_of_Value_6(),
	PropertyFragment_t2848219597::get_offset_of_of_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2634 = { sizeof (StringFragment_t634881251), -1, sizeof(StringFragment_t634881251_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2634[3] = 
{
	StringFragment_t634881251_StaticFields::get_offset_of_Delimiter_6(),
	StringFragment_t634881251_StaticFields::get_offset_of_Quotes_7(),
	StringFragment_t634881251::get_offset_of_Value_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2635 = { sizeof (SwitchFragment_t168543882), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2635[2] = 
{
	SwitchFragment_t168543882::get_offset_of_Body_6(),
	SwitchFragment_t168543882::get_offset_of_Parameters_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2636 = { sizeof (TypeFragment_t3643441850), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2636[5] = 
{
	TypeFragment_t3643441850::get_offset_of_IsArray_6(),
	TypeFragment_t3643441850::get_offset_of_HasColon_7(),
	TypeFragment_t3643441850::get_offset_of_Value_8(),
	TypeFragment_t3643441850::get_offset_of_Dimensions_9(),
	TypeFragment_t3643441850::get_offset_of_GenericSet_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2637 = { sizeof (VariableFragment_t2232769190), -1, sizeof(VariableFragment_t2232769190_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2637[3] = 
{
	VariableFragment_t2232769190_StaticFields::get_offset_of_Keywords_6(),
	VariableFragment_t2232769190::get_offset_of_AfterVar_7(),
	VariableFragment_t2232769190::get_offset_of_Value_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2638 = { sizeof (CompilationException_t1357493542), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2638[1] = 
{
	CompilationException_t1357493542::get_offset_of_LineNumber_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2639 = { sizeof (CompilationServices_t3912241725), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2640 = { sizeof (CompiledClass_t2566710525), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2640[9] = 
{
	CompiledClass_t2566710525::get_offset_of_BaseType_0(),
	CompiledClass_t2566710525::get_offset_of_compiledType_1(),
	CompiledClass_t2566710525::get_offset_of_Script_2(),
	CompiledClass_t2566710525::get_offset_of_IsPublic_3(),
	CompiledClass_t2566710525::get_offset_of_AnonymousCount_4(),
	CompiledClass_t2566710525::get_offset_of_Builder_5(),
	CompiledClass_t2566710525::get_offset_of_ClassFragment_6(),
	CompiledClass_t2566710525::get_offset_of_Fields_7(),
	CompiledClass_t2566710525::get_offset_of_Methods_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2641 = { sizeof (CompiledFragment_t2613193543), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2641[1] = 
{
	CompiledFragment_t2613193543::get_offset_of_Value_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2642 = { sizeof (CompiledMethod_t1616556204), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2642[17] = 
{
	CompiledMethod_t1616556204::get_offset_of_Name_0(),
	CompiledMethod_t1616556204::get_offset_of_CurrentLine_1(),
	CompiledMethod_t1616556204::get_offset_of_Script_2(),
	CompiledMethod_t1616556204::get_offset_of_ILStream_3(),
	CompiledMethod_t1616556204::get_offset_of_EndOfMethod_4(),
	CompiledMethod_t1616556204::get_offset_of_GloballyScoped_5(),
	CompiledMethod_t1616556204::get_offset_of_Parent_6(),
	CompiledMethod_t1616556204::get_offset_of_ParametersLoaded_7(),
	CompiledMethod_t1616556204::get_offset_of_Builder_8(),
	CompiledMethod_t1616556204::get_offset_of_ParameterTypes_9(),
	CompiledMethod_t1616556204::get_offset_of_ReturnBay_10(),
	CompiledMethod_t1616556204::get_offset_of_CodeBlock_11(),
	CompiledMethod_t1616556204::get_offset_of_ParameterBlock_12(),
	CompiledMethod_t1616556204::get_offset_of_DefaultParameterValues_13(),
	CompiledMethod_t1616556204::get_offset_of_BreakPoints_14(),
	CompiledMethod_t1616556204::get_offset_of_LocalSet_15(),
	CompiledMethod_t1616556204::get_offset_of_ParameterSet_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2643 = { sizeof (DynamicMethodCompiler_t2421262727), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2644 = { sizeof (Handler_t4129802106)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2644[9] = 
{
	Handler_t4129802106::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2645 = { sizeof (Handlers_t1961663993), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2646 = { sizeof (KeyWords_t2560564154), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2647 = { sizeof (MethodOverloads_t319229794), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2647[2] = 
{
	MethodOverloads_t319229794::get_offset_of_ReturnType_0(),
	MethodOverloads_t319229794::get_offset_of_Methods_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2648 = { sizeof (Modifiers_t1036351212), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2649 = { sizeof (AotFileEvent_t2146669432), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2650 = { sizeof (NitroCode_t2482140973), -1, sizeof(NitroCode_t2482140973_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2650[10] = 
{
	NitroCode_t2482140973_StaticFields::get_offset_of_Started_0(),
	NitroCode_t2482140973_StaticFields::get_offset_of_ModuleCounter_1(),
	NitroCode_t2482140973_StaticFields::get_offset_of_OnAotFileExists_2(),
	NitroCode_t2482140973::get_offset_of_Code_3(),
	NitroCode_t2482140973::get_offset_of_CompiledType_4(),
	NitroCode_t2482140973::get_offset_of_Builder_5(),
	NitroCode_t2482140973::get_offset_of_BaseClass_6(),
	NitroCode_t2482140973::get_offset_of_References_7(),
	NitroCode_t2482140973::get_offset_of_ScriptDomainManager_8(),
	NitroCode_t2482140973::get_offset_of_Types_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2651 = { sizeof (NitroIL_t2546925525), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2651[3] = 
{
	NitroIL_t2546925525::get_offset_of_ILLine_0(),
	NitroIL_t2546925525::get_offset_of_DebugOutput_1(),
	NitroIL_t2546925525::get_offset_of_Generator_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2652 = { sizeof (Operation_t2694499211), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2652[4] = 
{
	Operation_t2694499211::get_offset_of_LineNumber_7(),
	Operation_t2694499211::get_offset_of_Method_8(),
	Operation_t2694499211::get_offset_of_Input0_9(),
	Operation_t2694499211::get_offset_of_Input1_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2653 = { sizeof (AddOperation_t46454918), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2654 = { sizeof (AndOperation_t459744744), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2655 = { sizeof (ArrayOperation_t1919211888), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2655[4] = 
{
	ArrayOperation_t1919211888::get_offset_of_ArrayType_11(),
	ArrayOperation_t1919211888::get_offset_of_DirectSize_12(),
	ArrayOperation_t1919211888::get_offset_of_Size_13(),
	ArrayOperation_t1919211888::get_offset_of_DefaultValues_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2656 = { sizeof (BaseOperation_t299434544), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2657 = { sizeof (BitwiseXOrOperation_t1151515825), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2658 = { sizeof (BoxOperation_t2518437844), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2658[2] = 
{
	BoxOperation_t2518437844::get_offset_of_FromType_11(),
	BoxOperation_t2518437844::get_offset_of_ToBox_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2659 = { sizeof (BreakOperation_t1202640658), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2659[1] = 
{
	BreakOperation_t1202640658::get_offset_of_Depth_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2660 = { sizeof (CastOperation_t2354503386), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2660[2] = 
{
	CastOperation_t2354503386::get_offset_of_ToType_11(),
	CastOperation_t2354503386::get_offset_of_ToCast_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2661 = { sizeof (ConstructOperation_t3459772872), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2661[3] = 
{
	ConstructOperation_t3459772872::get_offset_of_ObjectType_11(),
	ConstructOperation_t3459772872::get_offset_of_Constructor_12(),
	ConstructOperation_t3459772872::get_offset_of_Parameters_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2662 = { sizeof (ContinueOperation_t2321553644), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2662[1] = 
{
	ContinueOperation_t2321553644::get_offset_of_Depth_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2663 = { sizeof (DivideOperation_t2204147944), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2664 = { sizeof (EqualsOperation_t2268308148), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2665 = { sizeof (ForOperation_t2667720030), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2665[2] = 
{
	ForOperation_t2667720030::get_offset_of_Body_11(),
	ForOperation_t2667720030::get_offset_of_Parameters_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2666 = { sizeof (GreaterThanOperation_t673095272), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2667 = { sizeof (GreaterThanOrEqualOperation_t465423483), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2668 = { sizeof (IfOperation_t3407909282), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2668[4] = 
{
	IfOperation_t3407909282::get_offset_of_AllRoutesReturn_11(),
	IfOperation_t3407909282::get_offset_of_IfTrue_12(),
	IfOperation_t3407909282::get_offset_of_IfFalse_13(),
	IfOperation_t3407909282::get_offset_of_Conditions_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2669 = { sizeof (IndexOperation_t2782383089), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2669[3] = 
{
	IndexOperation_t2782383089::get_offset_of_ElementType_11(),
	IndexOperation_t2782383089::get_offset_of_Index_12(),
	IndexOperation_t2782383089::get_offset_of_AppliedTo_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2670 = { sizeof (LessThanOperation_t3341014197), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2671 = { sizeof (LessThanOrEqualOperation_t2870297880), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2672 = { sizeof (MethodOperation_t2287948876), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2672[3] = 
{
	MethodOperation_t2287948876::get_offset_of_MethodToCall_11(),
	MethodOperation_t2287948876::get_offset_of_CalledOn_12(),
	MethodOperation_t2287948876::get_offset_of_Arguments_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2673 = { sizeof (ModuloOperation_t1614191591), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2674 = { sizeof (MultiplyOperation_t4150397983), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2675 = { sizeof (NotEqualOperation_t2129280474), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2676 = { sizeof (OrOperation_t524264860), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2677 = { sizeof (PropertyOperation_t592370100), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2677[6] = 
{
	PropertyOperation_t592370100::get_offset_of_Name_11(),
	PropertyOperation_t592370100::get_offset_of_IsStatic_12(),
	PropertyOperation_t592370100::get_offset_of_Field_13(),
	PropertyOperation_t592370100::get_offset_of_Of_14(),
	PropertyOperation_t592370100::get_offset_of_Property_15(),
	PropertyOperation_t592370100::get_offset_of_MethodReturnType_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2678 = { sizeof (ReturnOperation_t458083517), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2679 = { sizeof (SetOperation_t2714369357), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2679[1] = 
{
	SetOperation_t2714369357::get_offset_of_Output_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2680 = { sizeof (ShiftLeftOperation_t1155207248), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2681 = { sizeof (ShiftRightOperation_t2805096851), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2682 = { sizeof (SubtractOperation_t2377567407), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2683 = { sizeof (SwitchOperation_t1463531025), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2683[2] = 
{
	SwitchOperation_t1463531025::get_offset_of_Switching_11(),
	SwitchOperation_t1463531025::get_offset_of_Body_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2684 = { sizeof (ThisOperation_t2445889149), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2685 = { sizeof (TypeOperation_t1032897923), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2685[1] = 
{
	TypeOperation_t1032897923::get_offset_of_TypeObject_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2686 = { sizeof (TypeofOperation_t1839329816), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2687 = { sizeof (Operator_t1771126330), -1, sizeof(Operator_t1771126330_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2687[7] = 
{
	Operator_t1771126330_StaticFields::get_offset_of_Starts_0(),
	Operator_t1771126330_StaticFields::get_offset_of_FullOperators_1(),
	Operator_t1771126330::get_offset_of_Priority_2(),
	Operator_t1771126330::get_offset_of_LeftOnly_3(),
	Operator_t1771126330::get_offset_of_RightOnly_4(),
	Operator_t1771126330::get_offset_of_Pattern_5(),
	Operator_t1771126330::get_offset_of_LeftAndRight_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2688 = { sizeof (OperatorAdd_t4119143811), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2689 = { sizeof (OperatorAddTo_t2711424468), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2690 = { sizeof (OperatorBitwiseAnd_t2167324782), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2691 = { sizeof (OperatorBitwiseOr_t1619465996), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2692 = { sizeof (OperatorBitwiseXOr_t3706299170), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2693 = { sizeof (OperatorDecrement_t3410836617), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2694 = { sizeof (OperatorDivide_t2928316409), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2695 = { sizeof (OperatorDivideInTo_t165896465), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2696 = { sizeof (OperatorGreaterThan_t3911860619), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2697 = { sizeof (OperatorGreaterThanOrEql_t601595020), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2698 = { sizeof (OperatorIncrement_t1467937411), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2699 = { sizeof (OperatorLShift_t2870284218), -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
