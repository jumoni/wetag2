#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_PowerUI_Css_Style3877578303.h"

// PowerUI.Css.StyleSheet
struct StyleSheet_t3603472974;
// System.String
struct String_t;
// PowerUI.Document
struct Document_t1565145681;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.Css.SelectorStyle
struct  SelectorStyle_t4203407244  : public Style_t3877578303
{
public:
	// PowerUI.Css.StyleSheet PowerUI.Css.SelectorStyle::Sheet
	StyleSheet_t3603472974 * ___Sheet_3;
	// System.String PowerUI.Css.SelectorStyle::Modifier
	String_t* ___Modifier_4;
	// System.String PowerUI.Css.SelectorStyle::Selector
	String_t* ___Selector_5;
	// PowerUI.Document PowerUI.Css.SelectorStyle::Document
	Document_t1565145681 * ___Document_6;
	// System.String PowerUI.Css.SelectorStyle::BaseSelector
	String_t* ___BaseSelector_7;

public:
	inline static int32_t get_offset_of_Sheet_3() { return static_cast<int32_t>(offsetof(SelectorStyle_t4203407244, ___Sheet_3)); }
	inline StyleSheet_t3603472974 * get_Sheet_3() const { return ___Sheet_3; }
	inline StyleSheet_t3603472974 ** get_address_of_Sheet_3() { return &___Sheet_3; }
	inline void set_Sheet_3(StyleSheet_t3603472974 * value)
	{
		___Sheet_3 = value;
		Il2CppCodeGenWriteBarrier(&___Sheet_3, value);
	}

	inline static int32_t get_offset_of_Modifier_4() { return static_cast<int32_t>(offsetof(SelectorStyle_t4203407244, ___Modifier_4)); }
	inline String_t* get_Modifier_4() const { return ___Modifier_4; }
	inline String_t** get_address_of_Modifier_4() { return &___Modifier_4; }
	inline void set_Modifier_4(String_t* value)
	{
		___Modifier_4 = value;
		Il2CppCodeGenWriteBarrier(&___Modifier_4, value);
	}

	inline static int32_t get_offset_of_Selector_5() { return static_cast<int32_t>(offsetof(SelectorStyle_t4203407244, ___Selector_5)); }
	inline String_t* get_Selector_5() const { return ___Selector_5; }
	inline String_t** get_address_of_Selector_5() { return &___Selector_5; }
	inline void set_Selector_5(String_t* value)
	{
		___Selector_5 = value;
		Il2CppCodeGenWriteBarrier(&___Selector_5, value);
	}

	inline static int32_t get_offset_of_Document_6() { return static_cast<int32_t>(offsetof(SelectorStyle_t4203407244, ___Document_6)); }
	inline Document_t1565145681 * get_Document_6() const { return ___Document_6; }
	inline Document_t1565145681 ** get_address_of_Document_6() { return &___Document_6; }
	inline void set_Document_6(Document_t1565145681 * value)
	{
		___Document_6 = value;
		Il2CppCodeGenWriteBarrier(&___Document_6, value);
	}

	inline static int32_t get_offset_of_BaseSelector_7() { return static_cast<int32_t>(offsetof(SelectorStyle_t4203407244, ___BaseSelector_7)); }
	inline String_t* get_BaseSelector_7() const { return ___BaseSelector_7; }
	inline String_t** get_address_of_BaseSelector_7() { return &___BaseSelector_7; }
	inline void set_BaseSelector_7(String_t* value)
	{
		___BaseSelector_7 = value;
		Il2CppCodeGenWriteBarrier(&___BaseSelector_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
