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

// Nitro.NumberFragment
struct  NumberFragment_t3556924425  : public CodeFragment_t4001624203
{
public:
	// System.Boolean Nitro.NumberFragment::Float
	bool ___Float_7;
	// System.String Nitro.NumberFragment::Value
	String_t* ___Value_8;

public:
	inline static int32_t get_offset_of_Float_7() { return static_cast<int32_t>(offsetof(NumberFragment_t3556924425, ___Float_7)); }
	inline bool get_Float_7() const { return ___Float_7; }
	inline bool* get_address_of_Float_7() { return &___Float_7; }
	inline void set_Float_7(bool value)
	{
		___Float_7 = value;
	}

	inline static int32_t get_offset_of_Value_8() { return static_cast<int32_t>(offsetof(NumberFragment_t3556924425, ___Value_8)); }
	inline String_t* get_Value_8() const { return ___Value_8; }
	inline String_t** get_address_of_Value_8() { return &___Value_8; }
	inline void set_Value_8(String_t* value)
	{
		___Value_8 = value;
		Il2CppCodeGenWriteBarrier(&___Value_8, value);
	}
};

struct NumberFragment_t3556924425_StaticFields
{
public:
	// System.Char[] Nitro.NumberFragment::Number
	CharU5BU5D_t1328083999* ___Number_6;

public:
	inline static int32_t get_offset_of_Number_6() { return static_cast<int32_t>(offsetof(NumberFragment_t3556924425_StaticFields, ___Number_6)); }
	inline CharU5BU5D_t1328083999* get_Number_6() const { return ___Number_6; }
	inline CharU5BU5D_t1328083999** get_address_of_Number_6() { return &___Number_6; }
	inline void set_Number_6(CharU5BU5D_t1328083999* value)
	{
		___Number_6 = value;
		Il2CppCodeGenWriteBarrier(&___Number_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
