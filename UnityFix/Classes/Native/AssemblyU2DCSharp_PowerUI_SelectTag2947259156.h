#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_PowerUI_HtmlTagHandler2082879697.h"

// PowerUI.Element
struct Element_t3532621832;
// System.Collections.Generic.List`1<PowerUI.Element>
struct List_1_t2901742964;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.SelectTag
struct  SelectTag_t2947259156  : public HtmlTagHandler_t2082879697
{
public:
	// System.Boolean PowerUI.SelectTag::Dropped
	bool ___Dropped_7;
	// System.Int32 PowerUI.SelectTag::SelectedIndex
	int32_t ___SelectedIndex_8;
	// PowerUI.Element PowerUI.SelectTag::DisplayText
	Element_t3532621832 * ___DisplayText_9;
	// System.Collections.Generic.List`1<PowerUI.Element> PowerUI.SelectTag::Options
	List_1_t2901742964 * ___Options_10;

public:
	inline static int32_t get_offset_of_Dropped_7() { return static_cast<int32_t>(offsetof(SelectTag_t2947259156, ___Dropped_7)); }
	inline bool get_Dropped_7() const { return ___Dropped_7; }
	inline bool* get_address_of_Dropped_7() { return &___Dropped_7; }
	inline void set_Dropped_7(bool value)
	{
		___Dropped_7 = value;
	}

	inline static int32_t get_offset_of_SelectedIndex_8() { return static_cast<int32_t>(offsetof(SelectTag_t2947259156, ___SelectedIndex_8)); }
	inline int32_t get_SelectedIndex_8() const { return ___SelectedIndex_8; }
	inline int32_t* get_address_of_SelectedIndex_8() { return &___SelectedIndex_8; }
	inline void set_SelectedIndex_8(int32_t value)
	{
		___SelectedIndex_8 = value;
	}

	inline static int32_t get_offset_of_DisplayText_9() { return static_cast<int32_t>(offsetof(SelectTag_t2947259156, ___DisplayText_9)); }
	inline Element_t3532621832 * get_DisplayText_9() const { return ___DisplayText_9; }
	inline Element_t3532621832 ** get_address_of_DisplayText_9() { return &___DisplayText_9; }
	inline void set_DisplayText_9(Element_t3532621832 * value)
	{
		___DisplayText_9 = value;
		Il2CppCodeGenWriteBarrier(&___DisplayText_9, value);
	}

	inline static int32_t get_offset_of_Options_10() { return static_cast<int32_t>(offsetof(SelectTag_t2947259156, ___Options_10)); }
	inline List_1_t2901742964 * get_Options_10() const { return ___Options_10; }
	inline List_1_t2901742964 ** get_address_of_Options_10() { return &___Options_10; }
	inline void set_Options_10(List_1_t2901742964 * value)
	{
		___Options_10 = value;
		Il2CppCodeGenWriteBarrier(&___Options_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
