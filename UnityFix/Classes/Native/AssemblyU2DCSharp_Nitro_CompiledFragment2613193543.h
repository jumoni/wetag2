#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Nitro_CodeFragment4001624203.h"

// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Nitro.CompiledFragment
struct  CompiledFragment_t2613193543  : public CodeFragment_t4001624203
{
public:
	// System.Object Nitro.CompiledFragment::Value
	Il2CppObject * ___Value_6;

public:
	inline static int32_t get_offset_of_Value_6() { return static_cast<int32_t>(offsetof(CompiledFragment_t2613193543, ___Value_6)); }
	inline Il2CppObject * get_Value_6() const { return ___Value_6; }
	inline Il2CppObject ** get_address_of_Value_6() { return &___Value_6; }
	inline void set_Value_6(Il2CppObject * value)
	{
		___Value_6 = value;
		Il2CppCodeGenWriteBarrier(&___Value_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
