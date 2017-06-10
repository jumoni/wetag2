#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_PowerUI_HtmlTagHandler2082879697.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.ButtonTag
struct  ButtonTag_t3451751022  : public HtmlTagHandler_t2082879697
{
public:
	// System.String PowerUI.ButtonTag::Value
	String_t* ___Value_7;

public:
	inline static int32_t get_offset_of_Value_7() { return static_cast<int32_t>(offsetof(ButtonTag_t3451751022, ___Value_7)); }
	inline String_t* get_Value_7() const { return ___Value_7; }
	inline String_t** get_address_of_Value_7() { return &___Value_7; }
	inline void set_Value_7(String_t* value)
	{
		___Value_7 = value;
		Il2CppCodeGenWriteBarrier(&___Value_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
