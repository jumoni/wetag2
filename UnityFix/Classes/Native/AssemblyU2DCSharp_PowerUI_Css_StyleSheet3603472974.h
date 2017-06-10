#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// PowerUI.Document
struct Document_t1565145681;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<PowerUI.Css.SelectorStyle>>
struct Dictionary_2_t1192340342;
// System.Collections.Generic.Dictionary`2<System.String,PowerUI.Css.SelectorStyle>
struct Dictionary_2_t1823219210;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.Css.StyleSheet
struct  StyleSheet_t3603472974  : public Il2CppObject
{
public:
	// PowerUI.Document PowerUI.Css.StyleSheet::Document
	Document_t1565145681 * ___Document_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<PowerUI.Css.SelectorStyle>> PowerUI.Css.StyleSheet::ModifiedSelectors
	Dictionary_2_t1192340342 * ___ModifiedSelectors_1;
	// System.Collections.Generic.Dictionary`2<System.String,PowerUI.Css.SelectorStyle> PowerUI.Css.StyleSheet::Selectors
	Dictionary_2_t1823219210 * ___Selectors_2;

public:
	inline static int32_t get_offset_of_Document_0() { return static_cast<int32_t>(offsetof(StyleSheet_t3603472974, ___Document_0)); }
	inline Document_t1565145681 * get_Document_0() const { return ___Document_0; }
	inline Document_t1565145681 ** get_address_of_Document_0() { return &___Document_0; }
	inline void set_Document_0(Document_t1565145681 * value)
	{
		___Document_0 = value;
		Il2CppCodeGenWriteBarrier(&___Document_0, value);
	}

	inline static int32_t get_offset_of_ModifiedSelectors_1() { return static_cast<int32_t>(offsetof(StyleSheet_t3603472974, ___ModifiedSelectors_1)); }
	inline Dictionary_2_t1192340342 * get_ModifiedSelectors_1() const { return ___ModifiedSelectors_1; }
	inline Dictionary_2_t1192340342 ** get_address_of_ModifiedSelectors_1() { return &___ModifiedSelectors_1; }
	inline void set_ModifiedSelectors_1(Dictionary_2_t1192340342 * value)
	{
		___ModifiedSelectors_1 = value;
		Il2CppCodeGenWriteBarrier(&___ModifiedSelectors_1, value);
	}

	inline static int32_t get_offset_of_Selectors_2() { return static_cast<int32_t>(offsetof(StyleSheet_t3603472974, ___Selectors_2)); }
	inline Dictionary_2_t1823219210 * get_Selectors_2() const { return ___Selectors_2; }
	inline Dictionary_2_t1823219210 ** get_address_of_Selectors_2() { return &___Selectors_2; }
	inline void set_Selectors_2(Dictionary_2_t1823219210 * value)
	{
		___Selectors_2 = value;
		Il2CppCodeGenWriteBarrier(&___Selectors_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
