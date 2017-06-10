#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Nitro_Variable4053548118.h"

// System.Type
struct Type_t;
// System.Reflection.Emit.LocalBuilder
struct LocalBuilder_t2116499186;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Nitro.LocalVariable
struct  LocalVariable_t2179472625  : public Variable_t4053548118
{
public:
	// System.Type Nitro.LocalVariable::VariableType
	Type_t * ___VariableType_1;
	// System.Reflection.Emit.LocalBuilder Nitro.LocalVariable::Builder
	LocalBuilder_t2116499186 * ___Builder_2;

public:
	inline static int32_t get_offset_of_VariableType_1() { return static_cast<int32_t>(offsetof(LocalVariable_t2179472625, ___VariableType_1)); }
	inline Type_t * get_VariableType_1() const { return ___VariableType_1; }
	inline Type_t ** get_address_of_VariableType_1() { return &___VariableType_1; }
	inline void set_VariableType_1(Type_t * value)
	{
		___VariableType_1 = value;
		Il2CppCodeGenWriteBarrier(&___VariableType_1, value);
	}

	inline static int32_t get_offset_of_Builder_2() { return static_cast<int32_t>(offsetof(LocalVariable_t2179472625, ___Builder_2)); }
	inline LocalBuilder_t2116499186 * get_Builder_2() const { return ___Builder_2; }
	inline LocalBuilder_t2116499186 ** get_address_of_Builder_2() { return &___Builder_2; }
	inline void set_Builder_2(LocalBuilder_t2116499186 * value)
	{
		___Builder_2 = value;
		Il2CppCodeGenWriteBarrier(&___Builder_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
