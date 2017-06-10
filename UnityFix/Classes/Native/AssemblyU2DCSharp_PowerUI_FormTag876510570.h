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

// PowerUI.FormTag
struct  FormTag_t876510570  : public HtmlTagHandler_t2082879697
{
public:
	// System.String PowerUI.FormTag::Action
	String_t* ___Action_7;

public:
	inline static int32_t get_offset_of_Action_7() { return static_cast<int32_t>(offsetof(FormTag_t876510570, ___Action_7)); }
	inline String_t* get_Action_7() const { return ___Action_7; }
	inline String_t** get_address_of_Action_7() { return &___Action_7; }
	inline void set_Action_7(String_t* value)
	{
		___Action_7 = value;
		Il2CppCodeGenWriteBarrier(&___Action_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
