#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Type
struct Type_t;
// Nitro.NitroCode
struct NitroCode_t2482140973;
// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t3308873219;
// Nitro.CodeFragment
struct CodeFragment_t4001624203;
// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.FieldInfo>
struct Dictionary_2_t2169819412;
// System.Collections.Generic.Dictionary`2<System.String,Nitro.MethodOverloads>
struct Dictionary_2_t2234009056;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Nitro.CompiledClass
struct  CompiledClass_t2566710525  : public Il2CppObject
{
public:
	// System.Type Nitro.CompiledClass::BaseType
	Type_t * ___BaseType_0;
	// System.Type Nitro.CompiledClass::compiledType
	Type_t * ___compiledType_1;
	// Nitro.NitroCode Nitro.CompiledClass::Script
	NitroCode_t2482140973 * ___Script_2;
	// System.Boolean Nitro.CompiledClass::IsPublic
	bool ___IsPublic_3;
	// System.Int32 Nitro.CompiledClass::AnonymousCount
	int32_t ___AnonymousCount_4;
	// System.Reflection.Emit.TypeBuilder Nitro.CompiledClass::Builder
	TypeBuilder_t3308873219 * ___Builder_5;
	// Nitro.CodeFragment Nitro.CompiledClass::ClassFragment
	CodeFragment_t4001624203 * ___ClassFragment_6;
	// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.FieldInfo> Nitro.CompiledClass::Fields
	Dictionary_2_t2169819412 * ___Fields_7;
	// System.Collections.Generic.Dictionary`2<System.String,Nitro.MethodOverloads> Nitro.CompiledClass::Methods
	Dictionary_2_t2234009056 * ___Methods_8;

public:
	inline static int32_t get_offset_of_BaseType_0() { return static_cast<int32_t>(offsetof(CompiledClass_t2566710525, ___BaseType_0)); }
	inline Type_t * get_BaseType_0() const { return ___BaseType_0; }
	inline Type_t ** get_address_of_BaseType_0() { return &___BaseType_0; }
	inline void set_BaseType_0(Type_t * value)
	{
		___BaseType_0 = value;
		Il2CppCodeGenWriteBarrier(&___BaseType_0, value);
	}

	inline static int32_t get_offset_of_compiledType_1() { return static_cast<int32_t>(offsetof(CompiledClass_t2566710525, ___compiledType_1)); }
	inline Type_t * get_compiledType_1() const { return ___compiledType_1; }
	inline Type_t ** get_address_of_compiledType_1() { return &___compiledType_1; }
	inline void set_compiledType_1(Type_t * value)
	{
		___compiledType_1 = value;
		Il2CppCodeGenWriteBarrier(&___compiledType_1, value);
	}

	inline static int32_t get_offset_of_Script_2() { return static_cast<int32_t>(offsetof(CompiledClass_t2566710525, ___Script_2)); }
	inline NitroCode_t2482140973 * get_Script_2() const { return ___Script_2; }
	inline NitroCode_t2482140973 ** get_address_of_Script_2() { return &___Script_2; }
	inline void set_Script_2(NitroCode_t2482140973 * value)
	{
		___Script_2 = value;
		Il2CppCodeGenWriteBarrier(&___Script_2, value);
	}

	inline static int32_t get_offset_of_IsPublic_3() { return static_cast<int32_t>(offsetof(CompiledClass_t2566710525, ___IsPublic_3)); }
	inline bool get_IsPublic_3() const { return ___IsPublic_3; }
	inline bool* get_address_of_IsPublic_3() { return &___IsPublic_3; }
	inline void set_IsPublic_3(bool value)
	{
		___IsPublic_3 = value;
	}

	inline static int32_t get_offset_of_AnonymousCount_4() { return static_cast<int32_t>(offsetof(CompiledClass_t2566710525, ___AnonymousCount_4)); }
	inline int32_t get_AnonymousCount_4() const { return ___AnonymousCount_4; }
	inline int32_t* get_address_of_AnonymousCount_4() { return &___AnonymousCount_4; }
	inline void set_AnonymousCount_4(int32_t value)
	{
		___AnonymousCount_4 = value;
	}

	inline static int32_t get_offset_of_Builder_5() { return static_cast<int32_t>(offsetof(CompiledClass_t2566710525, ___Builder_5)); }
	inline TypeBuilder_t3308873219 * get_Builder_5() const { return ___Builder_5; }
	inline TypeBuilder_t3308873219 ** get_address_of_Builder_5() { return &___Builder_5; }
	inline void set_Builder_5(TypeBuilder_t3308873219 * value)
	{
		___Builder_5 = value;
		Il2CppCodeGenWriteBarrier(&___Builder_5, value);
	}

	inline static int32_t get_offset_of_ClassFragment_6() { return static_cast<int32_t>(offsetof(CompiledClass_t2566710525, ___ClassFragment_6)); }
	inline CodeFragment_t4001624203 * get_ClassFragment_6() const { return ___ClassFragment_6; }
	inline CodeFragment_t4001624203 ** get_address_of_ClassFragment_6() { return &___ClassFragment_6; }
	inline void set_ClassFragment_6(CodeFragment_t4001624203 * value)
	{
		___ClassFragment_6 = value;
		Il2CppCodeGenWriteBarrier(&___ClassFragment_6, value);
	}

	inline static int32_t get_offset_of_Fields_7() { return static_cast<int32_t>(offsetof(CompiledClass_t2566710525, ___Fields_7)); }
	inline Dictionary_2_t2169819412 * get_Fields_7() const { return ___Fields_7; }
	inline Dictionary_2_t2169819412 ** get_address_of_Fields_7() { return &___Fields_7; }
	inline void set_Fields_7(Dictionary_2_t2169819412 * value)
	{
		___Fields_7 = value;
		Il2CppCodeGenWriteBarrier(&___Fields_7, value);
	}

	inline static int32_t get_offset_of_Methods_8() { return static_cast<int32_t>(offsetof(CompiledClass_t2566710525, ___Methods_8)); }
	inline Dictionary_2_t2234009056 * get_Methods_8() const { return ___Methods_8; }
	inline Dictionary_2_t2234009056 ** get_address_of_Methods_8() { return &___Methods_8; }
	inline void set_Methods_8(Dictionary_2_t2234009056 * value)
	{
		___Methods_8 = value;
		Il2CppCodeGenWriteBarrier(&___Methods_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
