#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;
// PowerUI.Css.SelectorStyle
struct SelectorStyle_t4203407244;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.Css.Selector
struct  Selector_t2246520521  : public Il2CppObject
{
public:
	// System.String PowerUI.Css.Selector::Modifier
	String_t* ___Modifier_0;
	// PowerUI.Css.SelectorStyle PowerUI.Css.Selector::Style
	SelectorStyle_t4203407244 * ___Style_1;
	// System.String PowerUI.Css.Selector::SelectorText
	String_t* ___SelectorText_2;

public:
	inline static int32_t get_offset_of_Modifier_0() { return static_cast<int32_t>(offsetof(Selector_t2246520521, ___Modifier_0)); }
	inline String_t* get_Modifier_0() const { return ___Modifier_0; }
	inline String_t** get_address_of_Modifier_0() { return &___Modifier_0; }
	inline void set_Modifier_0(String_t* value)
	{
		___Modifier_0 = value;
		Il2CppCodeGenWriteBarrier(&___Modifier_0, value);
	}

	inline static int32_t get_offset_of_Style_1() { return static_cast<int32_t>(offsetof(Selector_t2246520521, ___Style_1)); }
	inline SelectorStyle_t4203407244 * get_Style_1() const { return ___Style_1; }
	inline SelectorStyle_t4203407244 ** get_address_of_Style_1() { return &___Style_1; }
	inline void set_Style_1(SelectorStyle_t4203407244 * value)
	{
		___Style_1 = value;
		Il2CppCodeGenWriteBarrier(&___Style_1, value);
	}

	inline static int32_t get_offset_of_SelectorText_2() { return static_cast<int32_t>(offsetof(Selector_t2246520521, ___SelectorText_2)); }
	inline String_t* get_SelectorText_2() const { return ___SelectorText_2; }
	inline String_t** get_address_of_SelectorText_2() { return &___SelectorText_2; }
	inline void set_SelectorText_2(String_t* value)
	{
		___SelectorText_2 = value;
		Il2CppCodeGenWriteBarrier(&___SelectorText_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
