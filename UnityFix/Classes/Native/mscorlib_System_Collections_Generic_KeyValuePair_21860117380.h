#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"

// PowerUI.Css.CssProperty
struct CssProperty_t3575850104;
// PowerUI.Css.Value
struct Value_t2499464907;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<PowerUI.Css.CssProperty,PowerUI.Css.Value>
struct  KeyValuePair_2_t1860117380 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	CssProperty_t3575850104 * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Value_t2499464907 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1860117380, ___key_0)); }
	inline CssProperty_t3575850104 * get_key_0() const { return ___key_0; }
	inline CssProperty_t3575850104 ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(CssProperty_t3575850104 * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier(&___key_0, value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1860117380, ___value_1)); }
	inline Value_t2499464907 * get_value_1() const { return ___value_1; }
	inline Value_t2499464907 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Value_t2499464907 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier(&___value_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
