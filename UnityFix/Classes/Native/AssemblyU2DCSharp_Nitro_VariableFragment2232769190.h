#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Nitro_CodeFragment4001624203.h"

// System.String[]
struct StringU5BU5D_t1642385972;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Nitro.VariableFragment
struct  VariableFragment_t2232769190  : public CodeFragment_t4001624203
{
public:
	// System.Boolean Nitro.VariableFragment::AfterVar
	bool ___AfterVar_7;
	// System.String Nitro.VariableFragment::Value
	String_t* ___Value_8;

public:
	inline static int32_t get_offset_of_AfterVar_7() { return static_cast<int32_t>(offsetof(VariableFragment_t2232769190, ___AfterVar_7)); }
	inline bool get_AfterVar_7() const { return ___AfterVar_7; }
	inline bool* get_address_of_AfterVar_7() { return &___AfterVar_7; }
	inline void set_AfterVar_7(bool value)
	{
		___AfterVar_7 = value;
	}

	inline static int32_t get_offset_of_Value_8() { return static_cast<int32_t>(offsetof(VariableFragment_t2232769190, ___Value_8)); }
	inline String_t* get_Value_8() const { return ___Value_8; }
	inline String_t** get_address_of_Value_8() { return &___Value_8; }
	inline void set_Value_8(String_t* value)
	{
		___Value_8 = value;
		Il2CppCodeGenWriteBarrier(&___Value_8, value);
	}
};

struct VariableFragment_t2232769190_StaticFields
{
public:
	// System.String[] Nitro.VariableFragment::Keywords
	StringU5BU5D_t1642385972* ___Keywords_6;

public:
	inline static int32_t get_offset_of_Keywords_6() { return static_cast<int32_t>(offsetof(VariableFragment_t2232769190_StaticFields, ___Keywords_6)); }
	inline StringU5BU5D_t1642385972* get_Keywords_6() const { return ___Keywords_6; }
	inline StringU5BU5D_t1642385972** get_address_of_Keywords_6() { return &___Keywords_6; }
	inline void set_Keywords_6(StringU5BU5D_t1642385972* value)
	{
		___Keywords_6 = value;
		Il2CppCodeGenWriteBarrier(&___Keywords_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
