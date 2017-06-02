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

// Metadata
struct  Metadata_t1180408955  : public Il2CppObject
{
public:
	// System.Int32 Metadata::width
	int32_t ___width_0;
	// System.Int32 Metadata::height
	int32_t ___height_1;
	// System.String Metadata::format
	String_t* ___format_2;

public:
	inline static int32_t get_offset_of_width_0() { return static_cast<int32_t>(offsetof(Metadata_t1180408955, ___width_0)); }
	inline int32_t get_width_0() const { return ___width_0; }
	inline int32_t* get_address_of_width_0() { return &___width_0; }
	inline void set_width_0(int32_t value)
	{
		___width_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(Metadata_t1180408955, ___height_1)); }
	inline int32_t get_height_1() const { return ___height_1; }
	inline int32_t* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(int32_t value)
	{
		___height_1 = value;
	}

	inline static int32_t get_offset_of_format_2() { return static_cast<int32_t>(offsetof(Metadata_t1180408955, ___format_2)); }
	inline String_t* get_format_2() const { return ___format_2; }
	inline String_t** get_address_of_format_2() { return &___format_2; }
	inline void set_format_2(String_t* value)
	{
		___format_2 = value;
		Il2CppCodeGenWriteBarrier(&___format_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
