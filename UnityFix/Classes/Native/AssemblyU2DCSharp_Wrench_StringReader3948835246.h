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

// Wrench.StringReader
struct  StringReader_t3948835246  : public Il2CppObject
{
public:
	// System.String Wrench.StringReader::Input
	String_t* ___Input_1;
	// System.Int32 Wrench.StringReader::Position
	int32_t ___Position_2;
	// System.Int32 Wrench.StringReader::InputLength
	int32_t ___InputLength_3;

public:
	inline static int32_t get_offset_of_Input_1() { return static_cast<int32_t>(offsetof(StringReader_t3948835246, ___Input_1)); }
	inline String_t* get_Input_1() const { return ___Input_1; }
	inline String_t** get_address_of_Input_1() { return &___Input_1; }
	inline void set_Input_1(String_t* value)
	{
		___Input_1 = value;
		Il2CppCodeGenWriteBarrier(&___Input_1, value);
	}

	inline static int32_t get_offset_of_Position_2() { return static_cast<int32_t>(offsetof(StringReader_t3948835246, ___Position_2)); }
	inline int32_t get_Position_2() const { return ___Position_2; }
	inline int32_t* get_address_of_Position_2() { return &___Position_2; }
	inline void set_Position_2(int32_t value)
	{
		___Position_2 = value;
	}

	inline static int32_t get_offset_of_InputLength_3() { return static_cast<int32_t>(offsetof(StringReader_t3948835246, ___InputLength_3)); }
	inline int32_t get_InputLength_3() const { return ___InputLength_3; }
	inline int32_t* get_address_of_InputLength_3() { return &___InputLength_3; }
	inline void set_InputLength_3(int32_t value)
	{
		___InputLength_3 = value;
	}
};

struct StringReader_t3948835246_StaticFields
{
public:
	// System.Char Wrench.StringReader::NULL
	Il2CppChar ___NULL_0;

public:
	inline static int32_t get_offset_of_NULL_0() { return static_cast<int32_t>(offsetof(StringReader_t3948835246_StaticFields, ___NULL_0)); }
	inline Il2CppChar get_NULL_0() const { return ___NULL_0; }
	inline Il2CppChar* get_address_of_NULL_0() { return &___NULL_0; }
	inline void set_NULL_0(Il2CppChar value)
	{
		___NULL_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
