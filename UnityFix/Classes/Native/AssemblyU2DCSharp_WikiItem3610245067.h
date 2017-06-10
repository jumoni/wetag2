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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WikiItem
struct  WikiItem_t3610245067  : public Il2CppObject
{
public:
	// System.String WikiItem::title
	String_t* ___title_0;
	// System.String WikiItem::extract
	String_t* ___extract_1;

public:
	inline static int32_t get_offset_of_title_0() { return static_cast<int32_t>(offsetof(WikiItem_t3610245067, ___title_0)); }
	inline String_t* get_title_0() const { return ___title_0; }
	inline String_t** get_address_of_title_0() { return &___title_0; }
	inline void set_title_0(String_t* value)
	{
		___title_0 = value;
		Il2CppCodeGenWriteBarrier(&___title_0, value);
	}

	inline static int32_t get_offset_of_extract_1() { return static_cast<int32_t>(offsetof(WikiItem_t3610245067, ___extract_1)); }
	inline String_t* get_extract_1() const { return ___extract_1; }
	inline String_t** get_address_of_extract_1() { return &___extract_1; }
	inline void set_extract_1(String_t* value)
	{
		___extract_1 = value;
		Il2CppCodeGenWriteBarrier(&___extract_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
