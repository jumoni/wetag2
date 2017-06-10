#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Wrench_TagHandler3692634208.h"

// PowerUI.Element
struct Element_t3532621832;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.HtmlTagHandler
struct  HtmlTagHandler_t2082879697  : public TagHandler_t3692634208
{
public:
	// System.Boolean PowerUI.HtmlTagHandler::IsIsolated
	bool ___IsIsolated_2;
	// PowerUI.Element PowerUI.HtmlTagHandler::Element
	Element_t3532621832 * ___Element_3;
	// System.Boolean PowerUI.HtmlTagHandler::IgnoreClick
	bool ___IgnoreClick_4;
	// System.Boolean PowerUI.HtmlTagHandler::IsFocusable
	bool ___IsFocusable_5;
	// System.Boolean PowerUI.HtmlTagHandler::IgnoreSelfClick
	bool ___IgnoreSelfClick_6;

public:
	inline static int32_t get_offset_of_IsIsolated_2() { return static_cast<int32_t>(offsetof(HtmlTagHandler_t2082879697, ___IsIsolated_2)); }
	inline bool get_IsIsolated_2() const { return ___IsIsolated_2; }
	inline bool* get_address_of_IsIsolated_2() { return &___IsIsolated_2; }
	inline void set_IsIsolated_2(bool value)
	{
		___IsIsolated_2 = value;
	}

	inline static int32_t get_offset_of_Element_3() { return static_cast<int32_t>(offsetof(HtmlTagHandler_t2082879697, ___Element_3)); }
	inline Element_t3532621832 * get_Element_3() const { return ___Element_3; }
	inline Element_t3532621832 ** get_address_of_Element_3() { return &___Element_3; }
	inline void set_Element_3(Element_t3532621832 * value)
	{
		___Element_3 = value;
		Il2CppCodeGenWriteBarrier(&___Element_3, value);
	}

	inline static int32_t get_offset_of_IgnoreClick_4() { return static_cast<int32_t>(offsetof(HtmlTagHandler_t2082879697, ___IgnoreClick_4)); }
	inline bool get_IgnoreClick_4() const { return ___IgnoreClick_4; }
	inline bool* get_address_of_IgnoreClick_4() { return &___IgnoreClick_4; }
	inline void set_IgnoreClick_4(bool value)
	{
		___IgnoreClick_4 = value;
	}

	inline static int32_t get_offset_of_IsFocusable_5() { return static_cast<int32_t>(offsetof(HtmlTagHandler_t2082879697, ___IsFocusable_5)); }
	inline bool get_IsFocusable_5() const { return ___IsFocusable_5; }
	inline bool* get_address_of_IsFocusable_5() { return &___IsFocusable_5; }
	inline void set_IsFocusable_5(bool value)
	{
		___IsFocusable_5 = value;
	}

	inline static int32_t get_offset_of_IgnoreSelfClick_6() { return static_cast<int32_t>(offsetof(HtmlTagHandler_t2082879697, ___IgnoreSelfClick_6)); }
	inline bool get_IgnoreSelfClick_6() const { return ___IgnoreSelfClick_6; }
	inline bool* get_address_of_IgnoreSelfClick_6() { return &___IgnoreSelfClick_6; }
	inline void set_IgnoreSelfClick_6(bool value)
	{
		___IgnoreSelfClick_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
