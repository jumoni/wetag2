#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// PowerUI.Element
struct Element_t3532621832;
// System.Char[]
struct CharU5BU5D_t1328083999;
// System.Collections.Generic.Dictionary`2<PowerUI.Css.CssProperty,PowerUI.Css.Value>
struct Dictionary_2_t4102772158;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.Css.Style
struct  Style_t3877578303  : public Il2CppObject
{
public:
	// PowerUI.Element PowerUI.Css.Style::Element
	Element_t3532621832 * ___Element_0;
	// System.Collections.Generic.Dictionary`2<PowerUI.Css.CssProperty,PowerUI.Css.Value> PowerUI.Css.Style::Properties
	Dictionary_2_t4102772158 * ___Properties_2;

public:
	inline static int32_t get_offset_of_Element_0() { return static_cast<int32_t>(offsetof(Style_t3877578303, ___Element_0)); }
	inline Element_t3532621832 * get_Element_0() const { return ___Element_0; }
	inline Element_t3532621832 ** get_address_of_Element_0() { return &___Element_0; }
	inline void set_Element_0(Element_t3532621832 * value)
	{
		___Element_0 = value;
		Il2CppCodeGenWriteBarrier(&___Element_0, value);
	}

	inline static int32_t get_offset_of_Properties_2() { return static_cast<int32_t>(offsetof(Style_t3877578303, ___Properties_2)); }
	inline Dictionary_2_t4102772158 * get_Properties_2() const { return ___Properties_2; }
	inline Dictionary_2_t4102772158 ** get_address_of_Properties_2() { return &___Properties_2; }
	inline void set_Properties_2(Dictionary_2_t4102772158 * value)
	{
		___Properties_2 = value;
		Il2CppCodeGenWriteBarrier(&___Properties_2, value);
	}
};

struct Style_t3877578303_StaticFields
{
public:
	// System.Char[] PowerUI.Css.Style::Delimiter
	CharU5BU5D_t1328083999* ___Delimiter_1;

public:
	inline static int32_t get_offset_of_Delimiter_1() { return static_cast<int32_t>(offsetof(Style_t3877578303_StaticFields, ___Delimiter_1)); }
	inline CharU5BU5D_t1328083999* get_Delimiter_1() const { return ___Delimiter_1; }
	inline CharU5BU5D_t1328083999** get_address_of_Delimiter_1() { return &___Delimiter_1; }
	inline void set_Delimiter_1(CharU5BU5D_t1328083999* value)
	{
		___Delimiter_1 = value;
		Il2CppCodeGenWriteBarrier(&___Delimiter_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
