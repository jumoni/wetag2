#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrench.VariableSet
struct  VariableSet_t811186110  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Wrench.VariableSet::Map
	Dictionary_2_t3943999495 * ___Map_0;

public:
	inline static int32_t get_offset_of_Map_0() { return static_cast<int32_t>(offsetof(VariableSet_t811186110, ___Map_0)); }
	inline Dictionary_2_t3943999495 * get_Map_0() const { return ___Map_0; }
	inline Dictionary_2_t3943999495 ** get_address_of_Map_0() { return &___Map_0; }
	inline void set_Map_0(Dictionary_2_t3943999495 * value)
	{
		___Map_0 = value;
		Il2CppCodeGenWriteBarrier(&___Map_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
