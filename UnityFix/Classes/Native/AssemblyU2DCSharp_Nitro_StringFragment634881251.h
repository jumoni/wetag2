#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Nitro_CodeFragment4001624203.h"

// System.Char[]
struct CharU5BU5D_t1328083999;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Nitro.StringFragment
struct  StringFragment_t634881251  : public CodeFragment_t4001624203
{
public:
	// System.String Nitro.StringFragment::Value
	String_t* ___Value_8;

public:
	inline static int32_t get_offset_of_Value_8() { return static_cast<int32_t>(offsetof(StringFragment_t634881251, ___Value_8)); }
	inline String_t* get_Value_8() const { return ___Value_8; }
	inline String_t** get_address_of_Value_8() { return &___Value_8; }
	inline void set_Value_8(String_t* value)
	{
		___Value_8 = value;
		Il2CppCodeGenWriteBarrier(&___Value_8, value);
	}
};

struct StringFragment_t634881251_StaticFields
{
public:
	// System.Char Nitro.StringFragment::Delimiter
	Il2CppChar ___Delimiter_6;
	// System.Char[] Nitro.StringFragment::Quotes
	CharU5BU5D_t1328083999* ___Quotes_7;

public:
	inline static int32_t get_offset_of_Delimiter_6() { return static_cast<int32_t>(offsetof(StringFragment_t634881251_StaticFields, ___Delimiter_6)); }
	inline Il2CppChar get_Delimiter_6() const { return ___Delimiter_6; }
	inline Il2CppChar* get_address_of_Delimiter_6() { return &___Delimiter_6; }
	inline void set_Delimiter_6(Il2CppChar value)
	{
		___Delimiter_6 = value;
	}

	inline static int32_t get_offset_of_Quotes_7() { return static_cast<int32_t>(offsetof(StringFragment_t634881251_StaticFields, ___Quotes_7)); }
	inline CharU5BU5D_t1328083999* get_Quotes_7() const { return ___Quotes_7; }
	inline CharU5BU5D_t1328083999** get_address_of_Quotes_7() { return &___Quotes_7; }
	inline void set_Quotes_7(CharU5BU5D_t1328083999* value)
	{
		___Quotes_7 = value;
		Il2CppCodeGenWriteBarrier(&___Quotes_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
