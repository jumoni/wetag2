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

// Wrench.TagHandler
struct  TagHandler_t3692634208  : public Il2CppObject
{
public:
	// System.Int32 Wrench.TagHandler::Priority
	int32_t ___Priority_0;
	// System.String Wrench.TagHandler::TagExtension
	String_t* ___TagExtension_1;

public:
	inline static int32_t get_offset_of_Priority_0() { return static_cast<int32_t>(offsetof(TagHandler_t3692634208, ___Priority_0)); }
	inline int32_t get_Priority_0() const { return ___Priority_0; }
	inline int32_t* get_address_of_Priority_0() { return &___Priority_0; }
	inline void set_Priority_0(int32_t value)
	{
		___Priority_0 = value;
	}

	inline static int32_t get_offset_of_TagExtension_1() { return static_cast<int32_t>(offsetof(TagHandler_t3692634208, ___TagExtension_1)); }
	inline String_t* get_TagExtension_1() const { return ___TagExtension_1; }
	inline String_t** get_address_of_TagExtension_1() { return &___TagExtension_1; }
	inline void set_TagExtension_1(String_t* value)
	{
		___TagExtension_1 = value;
		Il2CppCodeGenWriteBarrier(&___TagExtension_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
