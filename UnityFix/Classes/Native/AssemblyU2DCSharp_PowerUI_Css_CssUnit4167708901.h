#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_PowerUI_Css_CssFunction2185013753.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.Css.CssUnit
struct  CssUnit_t4167708901  : public CssFunction_t2185013753
{
public:
	// System.String PowerUI.Css.CssUnit::Suffix
	String_t* ___Suffix_1;
	// System.String PowerUI.Css.CssUnit::Prefix
	String_t* ___Prefix_2;

public:
	inline static int32_t get_offset_of_Suffix_1() { return static_cast<int32_t>(offsetof(CssUnit_t4167708901, ___Suffix_1)); }
	inline String_t* get_Suffix_1() const { return ___Suffix_1; }
	inline String_t** get_address_of_Suffix_1() { return &___Suffix_1; }
	inline void set_Suffix_1(String_t* value)
	{
		___Suffix_1 = value;
		Il2CppCodeGenWriteBarrier(&___Suffix_1, value);
	}

	inline static int32_t get_offset_of_Prefix_2() { return static_cast<int32_t>(offsetof(CssUnit_t4167708901, ___Prefix_2)); }
	inline String_t* get_Prefix_2() const { return ___Prefix_2; }
	inline String_t** get_address_of_Prefix_2() { return &___Prefix_2; }
	inline void set_Prefix_2(String_t* value)
	{
		___Prefix_2 = value;
		Il2CppCodeGenWriteBarrier(&___Prefix_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
