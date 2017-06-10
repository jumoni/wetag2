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
// System.Reflection.Emit.ParameterBuilder
struct ParameterBuilder_t3344728474;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Nitro.ParameterVariable
struct  ParameterVariable_t1303844405  : public Variable_t4053548118
{
public:
	// System.Type Nitro.ParameterVariable::ParameterType
	Type_t * ___ParameterType_1;
	// System.Reflection.Emit.ParameterBuilder Nitro.ParameterVariable::Builder
	ParameterBuilder_t3344728474 * ___Builder_2;

public:
	inline static int32_t get_offset_of_ParameterType_1() { return static_cast<int32_t>(offsetof(ParameterVariable_t1303844405, ___ParameterType_1)); }
	inline Type_t * get_ParameterType_1() const { return ___ParameterType_1; }
	inline Type_t ** get_address_of_ParameterType_1() { return &___ParameterType_1; }
	inline void set_ParameterType_1(Type_t * value)
	{
		___ParameterType_1 = value;
		Il2CppCodeGenWriteBarrier(&___ParameterType_1, value);
	}

	inline static int32_t get_offset_of_Builder_2() { return static_cast<int32_t>(offsetof(ParameterVariable_t1303844405, ___Builder_2)); }
	inline ParameterBuilder_t3344728474 * get_Builder_2() const { return ___Builder_2; }
	inline ParameterBuilder_t3344728474 ** get_address_of_Builder_2() { return &___Builder_2; }
	inline void set_Builder_2(ParameterBuilder_t3344728474 * value)
	{
		___Builder_2 = value;
		Il2CppCodeGenWriteBarrier(&___Builder_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
