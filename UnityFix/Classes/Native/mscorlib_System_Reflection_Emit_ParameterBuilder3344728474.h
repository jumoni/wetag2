#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Reflection_ParameterAttributes1266705348.h"

// System.Reflection.MethodBase
struct MethodBase_t904190842;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.ParameterBuilder
struct  ParameterBuilder_t3344728474  : public Il2CppObject
{
public:
	// System.Reflection.MethodBase System.Reflection.Emit.ParameterBuilder::methodb
	MethodBase_t904190842 * ___methodb_0;
	// System.String System.Reflection.Emit.ParameterBuilder::name
	String_t* ___name_1;
	// System.Reflection.ParameterAttributes System.Reflection.Emit.ParameterBuilder::attrs
	int32_t ___attrs_2;
	// System.Int32 System.Reflection.Emit.ParameterBuilder::position
	int32_t ___position_3;
	// System.Int32 System.Reflection.Emit.ParameterBuilder::table_idx
	int32_t ___table_idx_4;

public:
	inline static int32_t get_offset_of_methodb_0() { return static_cast<int32_t>(offsetof(ParameterBuilder_t3344728474, ___methodb_0)); }
	inline MethodBase_t904190842 * get_methodb_0() const { return ___methodb_0; }
	inline MethodBase_t904190842 ** get_address_of_methodb_0() { return &___methodb_0; }
	inline void set_methodb_0(MethodBase_t904190842 * value)
	{
		___methodb_0 = value;
		Il2CppCodeGenWriteBarrier(&___methodb_0, value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(ParameterBuilder_t3344728474, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier(&___name_1, value);
	}

	inline static int32_t get_offset_of_attrs_2() { return static_cast<int32_t>(offsetof(ParameterBuilder_t3344728474, ___attrs_2)); }
	inline int32_t get_attrs_2() const { return ___attrs_2; }
	inline int32_t* get_address_of_attrs_2() { return &___attrs_2; }
	inline void set_attrs_2(int32_t value)
	{
		___attrs_2 = value;
	}

	inline static int32_t get_offset_of_position_3() { return static_cast<int32_t>(offsetof(ParameterBuilder_t3344728474, ___position_3)); }
	inline int32_t get_position_3() const { return ___position_3; }
	inline int32_t* get_address_of_position_3() { return &___position_3; }
	inline void set_position_3(int32_t value)
	{
		___position_3 = value;
	}

	inline static int32_t get_offset_of_table_idx_4() { return static_cast<int32_t>(offsetof(ParameterBuilder_t3344728474, ___table_idx_4)); }
	inline int32_t get_table_idx_4() const { return ___table_idx_4; }
	inline int32_t* get_address_of_table_idx_4() { return &___table_idx_4; }
	inline void set_table_idx_4(int32_t value)
	{
		___table_idx_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
