#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<InfiniText.LigatureSubstitution>>
struct Dictionary_2_t55056817;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InfiniText.LigatureLookupTable
struct  LigatureLookupTable_t227655983  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<InfiniText.LigatureSubstitution>> InfiniText.LigatureLookupTable::Substitutions
	Dictionary_2_t55056817 * ___Substitutions_0;

public:
	inline static int32_t get_offset_of_Substitutions_0() { return static_cast<int32_t>(offsetof(LigatureLookupTable_t227655983, ___Substitutions_0)); }
	inline Dictionary_2_t55056817 * get_Substitutions_0() const { return ___Substitutions_0; }
	inline Dictionary_2_t55056817 ** get_address_of_Substitutions_0() { return &___Substitutions_0; }
	inline void set_Substitutions_0(Dictionary_2_t55056817 * value)
	{
		___Substitutions_0 = value;
		Il2CppCodeGenWriteBarrier(&___Substitutions_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
