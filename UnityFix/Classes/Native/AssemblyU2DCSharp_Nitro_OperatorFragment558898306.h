#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Nitro_CodeFragment4001624203.h"

// Nitro.Operator
struct Operator_t1771126330;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Nitro.OperatorFragment
struct  OperatorFragment_t558898306  : public CodeFragment_t4001624203
{
public:
	// Nitro.Operator Nitro.OperatorFragment::Value
	Operator_t1771126330 * ___Value_6;

public:
	inline static int32_t get_offset_of_Value_6() { return static_cast<int32_t>(offsetof(OperatorFragment_t558898306, ___Value_6)); }
	inline Operator_t1771126330 * get_Value_6() const { return ___Value_6; }
	inline Operator_t1771126330 ** get_address_of_Value_6() { return &___Value_6; }
	inline void set_Value_6(Operator_t1771126330 * value)
	{
		___Value_6 = value;
		Il2CppCodeGenWriteBarrier(&___Value_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
