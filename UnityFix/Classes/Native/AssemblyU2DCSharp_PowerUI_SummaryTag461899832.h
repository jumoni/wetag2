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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.SummaryTag
struct  SummaryTag_t461899832  : public HtmlTagHandler_t2082879697
{
public:
	// PowerUI.Element PowerUI.SummaryTag::Details
	Element_t3532621832 * ___Details_7;

public:
	inline static int32_t get_offset_of_Details_7() { return static_cast<int32_t>(offsetof(SummaryTag_t461899832, ___Details_7)); }
	inline Element_t3532621832 * get_Details_7() const { return ___Details_7; }
	inline Element_t3532621832 ** get_address_of_Details_7() { return &___Details_7; }
	inline void set_Details_7(Element_t3532621832 * value)
	{
		___Details_7 = value;
		Il2CppCodeGenWriteBarrier(&___Details_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
