#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_PowerUI_Element3532621832.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.TextElement
struct  TextElement_t3339631791  : public Element_t3532621832
{
public:
	// System.String PowerUI.TextElement::Text
	String_t* ___Text_27;

public:
	inline static int32_t get_offset_of_Text_27() { return static_cast<int32_t>(offsetof(TextElement_t3339631791, ___Text_27)); }
	inline String_t* get_Text_27() const { return ___Text_27; }
	inline String_t** get_address_of_Text_27() { return &___Text_27; }
	inline void set_Text_27(String_t* value)
	{
		___Text_27 = value;
		Il2CppCodeGenWriteBarrier(&___Text_27, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
