#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Nitro_CodeFragment4001624203.h"

// System.String
struct String_t;
// Nitro.CodeFragment
struct CodeFragment_t4001624203;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Nitro.PropertyFragment
struct  PropertyFragment_t2848219597  : public CodeFragment_t4001624203
{
public:
	// System.String Nitro.PropertyFragment::Value
	String_t* ___Value_6;
	// Nitro.CodeFragment Nitro.PropertyFragment::of
	CodeFragment_t4001624203 * ___of_7;

public:
	inline static int32_t get_offset_of_Value_6() { return static_cast<int32_t>(offsetof(PropertyFragment_t2848219597, ___Value_6)); }
	inline String_t* get_Value_6() const { return ___Value_6; }
	inline String_t** get_address_of_Value_6() { return &___Value_6; }
	inline void set_Value_6(String_t* value)
	{
		___Value_6 = value;
		Il2CppCodeGenWriteBarrier(&___Value_6, value);
	}

	inline static int32_t get_offset_of_of_7() { return static_cast<int32_t>(offsetof(PropertyFragment_t2848219597, ___of_7)); }
	inline CodeFragment_t4001624203 * get_of_7() const { return ___of_7; }
	inline CodeFragment_t4001624203 ** get_address_of_of_7() { return &___of_7; }
	inline void set_of_7(CodeFragment_t4001624203 * value)
	{
		___of_7 = value;
		Il2CppCodeGenWriteBarrier(&___of_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
