#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.Dictionary`2<System.String,PowerUI.Css.CssProperty>
struct Dictionary_2_t1195662070;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.Css.CssProperties
struct  CssProperties_t2373589644  : public Il2CppObject
{
public:

public:
};

struct CssProperties_t2373589644_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,PowerUI.Css.CssProperty> PowerUI.Css.CssProperties::Properties
	Dictionary_2_t1195662070 * ___Properties_0;
	// System.Collections.Generic.Dictionary`2<System.String,PowerUI.Css.CssProperty> PowerUI.Css.CssProperties::TextProperties
	Dictionary_2_t1195662070 * ___TextProperties_1;

public:
	inline static int32_t get_offset_of_Properties_0() { return static_cast<int32_t>(offsetof(CssProperties_t2373589644_StaticFields, ___Properties_0)); }
	inline Dictionary_2_t1195662070 * get_Properties_0() const { return ___Properties_0; }
	inline Dictionary_2_t1195662070 ** get_address_of_Properties_0() { return &___Properties_0; }
	inline void set_Properties_0(Dictionary_2_t1195662070 * value)
	{
		___Properties_0 = value;
		Il2CppCodeGenWriteBarrier(&___Properties_0, value);
	}

	inline static int32_t get_offset_of_TextProperties_1() { return static_cast<int32_t>(offsetof(CssProperties_t2373589644_StaticFields, ___TextProperties_1)); }
	inline Dictionary_2_t1195662070 * get_TextProperties_1() const { return ___TextProperties_1; }
	inline Dictionary_2_t1195662070 ** get_address_of_TextProperties_1() { return &___TextProperties_1; }
	inline void set_TextProperties_1(Dictionary_2_t1195662070 * value)
	{
		___TextProperties_1 = value;
		Il2CppCodeGenWriteBarrier(&___TextProperties_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
