#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Reflection_Emit_Label4243202660.h"

// System.String
struct String_t;
// Nitro.NitroCode
struct NitroCode_t2482140973;
// Nitro.NitroIL
struct NitroIL_t2546925525;
// Nitro.CompiledClass
struct CompiledClass_t2566710525;
// System.Reflection.Emit.MethodBuilder
struct MethodBuilder_t644187984;
// System.Type[]
struct TypeU5BU5D_t1664964607;
// System.Reflection.Emit.LocalBuilder
struct LocalBuilder_t2116499186;
// Nitro.BracketFragment
struct BracketFragment_t1567982410;
// Nitro.CompiledFragment[]
struct CompiledFragmentU5BU5D_t634647486;
// System.Collections.Generic.List`1<Nitro.BreakPoint>
struct List_1_t3857397553;
// System.Collections.Generic.Dictionary`2<System.String,Nitro.LocalVariable>
struct Dictionary_2_t4094251887;
// System.Collections.Generic.Dictionary`2<System.String,Nitro.ParameterVariable>
struct Dictionary_2_t3218623667;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Nitro.CompiledMethod
struct  CompiledMethod_t1616556204  : public Il2CppObject
{
public:
	// System.String Nitro.CompiledMethod::Name
	String_t* ___Name_0;
	// System.Int32 Nitro.CompiledMethod::CurrentLine
	int32_t ___CurrentLine_1;
	// Nitro.NitroCode Nitro.CompiledMethod::Script
	NitroCode_t2482140973 * ___Script_2;
	// Nitro.NitroIL Nitro.CompiledMethod::ILStream
	NitroIL_t2546925525 * ___ILStream_3;
	// System.Reflection.Emit.Label Nitro.CompiledMethod::EndOfMethod
	Label_t4243202660  ___EndOfMethod_4;
	// System.Boolean Nitro.CompiledMethod::GloballyScoped
	bool ___GloballyScoped_5;
	// Nitro.CompiledClass Nitro.CompiledMethod::Parent
	CompiledClass_t2566710525 * ___Parent_6;
	// System.Boolean Nitro.CompiledMethod::ParametersLoaded
	bool ___ParametersLoaded_7;
	// System.Reflection.Emit.MethodBuilder Nitro.CompiledMethod::Builder
	MethodBuilder_t644187984 * ___Builder_8;
	// System.Type[] Nitro.CompiledMethod::ParameterTypes
	TypeU5BU5D_t1664964607* ___ParameterTypes_9;
	// System.Reflection.Emit.LocalBuilder Nitro.CompiledMethod::ReturnBay
	LocalBuilder_t2116499186 * ___ReturnBay_10;
	// Nitro.BracketFragment Nitro.CompiledMethod::CodeBlock
	BracketFragment_t1567982410 * ___CodeBlock_11;
	// Nitro.BracketFragment Nitro.CompiledMethod::ParameterBlock
	BracketFragment_t1567982410 * ___ParameterBlock_12;
	// Nitro.CompiledFragment[] Nitro.CompiledMethod::DefaultParameterValues
	CompiledFragmentU5BU5D_t634647486* ___DefaultParameterValues_13;
	// System.Collections.Generic.List`1<Nitro.BreakPoint> Nitro.CompiledMethod::BreakPoints
	List_1_t3857397553 * ___BreakPoints_14;
	// System.Collections.Generic.Dictionary`2<System.String,Nitro.LocalVariable> Nitro.CompiledMethod::LocalSet
	Dictionary_2_t4094251887 * ___LocalSet_15;
	// System.Collections.Generic.Dictionary`2<System.String,Nitro.ParameterVariable> Nitro.CompiledMethod::ParameterSet
	Dictionary_2_t3218623667 * ___ParameterSet_16;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(CompiledMethod_t1616556204, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier(&___Name_0, value);
	}

	inline static int32_t get_offset_of_CurrentLine_1() { return static_cast<int32_t>(offsetof(CompiledMethod_t1616556204, ___CurrentLine_1)); }
	inline int32_t get_CurrentLine_1() const { return ___CurrentLine_1; }
	inline int32_t* get_address_of_CurrentLine_1() { return &___CurrentLine_1; }
	inline void set_CurrentLine_1(int32_t value)
	{
		___CurrentLine_1 = value;
	}

	inline static int32_t get_offset_of_Script_2() { return static_cast<int32_t>(offsetof(CompiledMethod_t1616556204, ___Script_2)); }
	inline NitroCode_t2482140973 * get_Script_2() const { return ___Script_2; }
	inline NitroCode_t2482140973 ** get_address_of_Script_2() { return &___Script_2; }
	inline void set_Script_2(NitroCode_t2482140973 * value)
	{
		___Script_2 = value;
		Il2CppCodeGenWriteBarrier(&___Script_2, value);
	}

	inline static int32_t get_offset_of_ILStream_3() { return static_cast<int32_t>(offsetof(CompiledMethod_t1616556204, ___ILStream_3)); }
	inline NitroIL_t2546925525 * get_ILStream_3() const { return ___ILStream_3; }
	inline NitroIL_t2546925525 ** get_address_of_ILStream_3() { return &___ILStream_3; }
	inline void set_ILStream_3(NitroIL_t2546925525 * value)
	{
		___ILStream_3 = value;
		Il2CppCodeGenWriteBarrier(&___ILStream_3, value);
	}

	inline static int32_t get_offset_of_EndOfMethod_4() { return static_cast<int32_t>(offsetof(CompiledMethod_t1616556204, ___EndOfMethod_4)); }
	inline Label_t4243202660  get_EndOfMethod_4() const { return ___EndOfMethod_4; }
	inline Label_t4243202660 * get_address_of_EndOfMethod_4() { return &___EndOfMethod_4; }
	inline void set_EndOfMethod_4(Label_t4243202660  value)
	{
		___EndOfMethod_4 = value;
	}

	inline static int32_t get_offset_of_GloballyScoped_5() { return static_cast<int32_t>(offsetof(CompiledMethod_t1616556204, ___GloballyScoped_5)); }
	inline bool get_GloballyScoped_5() const { return ___GloballyScoped_5; }
	inline bool* get_address_of_GloballyScoped_5() { return &___GloballyScoped_5; }
	inline void set_GloballyScoped_5(bool value)
	{
		___GloballyScoped_5 = value;
	}

	inline static int32_t get_offset_of_Parent_6() { return static_cast<int32_t>(offsetof(CompiledMethod_t1616556204, ___Parent_6)); }
	inline CompiledClass_t2566710525 * get_Parent_6() const { return ___Parent_6; }
	inline CompiledClass_t2566710525 ** get_address_of_Parent_6() { return &___Parent_6; }
	inline void set_Parent_6(CompiledClass_t2566710525 * value)
	{
		___Parent_6 = value;
		Il2CppCodeGenWriteBarrier(&___Parent_6, value);
	}

	inline static int32_t get_offset_of_ParametersLoaded_7() { return static_cast<int32_t>(offsetof(CompiledMethod_t1616556204, ___ParametersLoaded_7)); }
	inline bool get_ParametersLoaded_7() const { return ___ParametersLoaded_7; }
	inline bool* get_address_of_ParametersLoaded_7() { return &___ParametersLoaded_7; }
	inline void set_ParametersLoaded_7(bool value)
	{
		___ParametersLoaded_7 = value;
	}

	inline static int32_t get_offset_of_Builder_8() { return static_cast<int32_t>(offsetof(CompiledMethod_t1616556204, ___Builder_8)); }
	inline MethodBuilder_t644187984 * get_Builder_8() const { return ___Builder_8; }
	inline MethodBuilder_t644187984 ** get_address_of_Builder_8() { return &___Builder_8; }
	inline void set_Builder_8(MethodBuilder_t644187984 * value)
	{
		___Builder_8 = value;
		Il2CppCodeGenWriteBarrier(&___Builder_8, value);
	}

	inline static int32_t get_offset_of_ParameterTypes_9() { return static_cast<int32_t>(offsetof(CompiledMethod_t1616556204, ___ParameterTypes_9)); }
	inline TypeU5BU5D_t1664964607* get_ParameterTypes_9() const { return ___ParameterTypes_9; }
	inline TypeU5BU5D_t1664964607** get_address_of_ParameterTypes_9() { return &___ParameterTypes_9; }
	inline void set_ParameterTypes_9(TypeU5BU5D_t1664964607* value)
	{
		___ParameterTypes_9 = value;
		Il2CppCodeGenWriteBarrier(&___ParameterTypes_9, value);
	}

	inline static int32_t get_offset_of_ReturnBay_10() { return static_cast<int32_t>(offsetof(CompiledMethod_t1616556204, ___ReturnBay_10)); }
	inline LocalBuilder_t2116499186 * get_ReturnBay_10() const { return ___ReturnBay_10; }
	inline LocalBuilder_t2116499186 ** get_address_of_ReturnBay_10() { return &___ReturnBay_10; }
	inline void set_ReturnBay_10(LocalBuilder_t2116499186 * value)
	{
		___ReturnBay_10 = value;
		Il2CppCodeGenWriteBarrier(&___ReturnBay_10, value);
	}

	inline static int32_t get_offset_of_CodeBlock_11() { return static_cast<int32_t>(offsetof(CompiledMethod_t1616556204, ___CodeBlock_11)); }
	inline BracketFragment_t1567982410 * get_CodeBlock_11() const { return ___CodeBlock_11; }
	inline BracketFragment_t1567982410 ** get_address_of_CodeBlock_11() { return &___CodeBlock_11; }
	inline void set_CodeBlock_11(BracketFragment_t1567982410 * value)
	{
		___CodeBlock_11 = value;
		Il2CppCodeGenWriteBarrier(&___CodeBlock_11, value);
	}

	inline static int32_t get_offset_of_ParameterBlock_12() { return static_cast<int32_t>(offsetof(CompiledMethod_t1616556204, ___ParameterBlock_12)); }
	inline BracketFragment_t1567982410 * get_ParameterBlock_12() const { return ___ParameterBlock_12; }
	inline BracketFragment_t1567982410 ** get_address_of_ParameterBlock_12() { return &___ParameterBlock_12; }
	inline void set_ParameterBlock_12(BracketFragment_t1567982410 * value)
	{
		___ParameterBlock_12 = value;
		Il2CppCodeGenWriteBarrier(&___ParameterBlock_12, value);
	}

	inline static int32_t get_offset_of_DefaultParameterValues_13() { return static_cast<int32_t>(offsetof(CompiledMethod_t1616556204, ___DefaultParameterValues_13)); }
	inline CompiledFragmentU5BU5D_t634647486* get_DefaultParameterValues_13() const { return ___DefaultParameterValues_13; }
	inline CompiledFragmentU5BU5D_t634647486** get_address_of_DefaultParameterValues_13() { return &___DefaultParameterValues_13; }
	inline void set_DefaultParameterValues_13(CompiledFragmentU5BU5D_t634647486* value)
	{
		___DefaultParameterValues_13 = value;
		Il2CppCodeGenWriteBarrier(&___DefaultParameterValues_13, value);
	}

	inline static int32_t get_offset_of_BreakPoints_14() { return static_cast<int32_t>(offsetof(CompiledMethod_t1616556204, ___BreakPoints_14)); }
	inline List_1_t3857397553 * get_BreakPoints_14() const { return ___BreakPoints_14; }
	inline List_1_t3857397553 ** get_address_of_BreakPoints_14() { return &___BreakPoints_14; }
	inline void set_BreakPoints_14(List_1_t3857397553 * value)
	{
		___BreakPoints_14 = value;
		Il2CppCodeGenWriteBarrier(&___BreakPoints_14, value);
	}

	inline static int32_t get_offset_of_LocalSet_15() { return static_cast<int32_t>(offsetof(CompiledMethod_t1616556204, ___LocalSet_15)); }
	inline Dictionary_2_t4094251887 * get_LocalSet_15() const { return ___LocalSet_15; }
	inline Dictionary_2_t4094251887 ** get_address_of_LocalSet_15() { return &___LocalSet_15; }
	inline void set_LocalSet_15(Dictionary_2_t4094251887 * value)
	{
		___LocalSet_15 = value;
		Il2CppCodeGenWriteBarrier(&___LocalSet_15, value);
	}

	inline static int32_t get_offset_of_ParameterSet_16() { return static_cast<int32_t>(offsetof(CompiledMethod_t1616556204, ___ParameterSet_16)); }
	inline Dictionary_2_t3218623667 * get_ParameterSet_16() const { return ___ParameterSet_16; }
	inline Dictionary_2_t3218623667 ** get_address_of_ParameterSet_16() { return &___ParameterSet_16; }
	inline void set_ParameterSet_16(Dictionary_2_t3218623667 * value)
	{
		___ParameterSet_16 = value;
		Il2CppCodeGenWriteBarrier(&___ParameterSet_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
