#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_TouchScreenKeyboardType875112366.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.KeyboardMode
struct  KeyboardMode_t3062012260  : public Il2CppObject
{
public:
	// System.Boolean PowerUI.KeyboardMode::Secret
	bool ___Secret_0;
	// System.Boolean PowerUI.KeyboardMode::Multiline
	bool ___Multiline_1;
	// System.String PowerUI.KeyboardMode::StartText
	String_t* ___StartText_2;
	// UnityEngine.TouchScreenKeyboardType PowerUI.KeyboardMode::Type
	int32_t ___Type_3;

public:
	inline static int32_t get_offset_of_Secret_0() { return static_cast<int32_t>(offsetof(KeyboardMode_t3062012260, ___Secret_0)); }
	inline bool get_Secret_0() const { return ___Secret_0; }
	inline bool* get_address_of_Secret_0() { return &___Secret_0; }
	inline void set_Secret_0(bool value)
	{
		___Secret_0 = value;
	}

	inline static int32_t get_offset_of_Multiline_1() { return static_cast<int32_t>(offsetof(KeyboardMode_t3062012260, ___Multiline_1)); }
	inline bool get_Multiline_1() const { return ___Multiline_1; }
	inline bool* get_address_of_Multiline_1() { return &___Multiline_1; }
	inline void set_Multiline_1(bool value)
	{
		___Multiline_1 = value;
	}

	inline static int32_t get_offset_of_StartText_2() { return static_cast<int32_t>(offsetof(KeyboardMode_t3062012260, ___StartText_2)); }
	inline String_t* get_StartText_2() const { return ___StartText_2; }
	inline String_t** get_address_of_StartText_2() { return &___StartText_2; }
	inline void set_StartText_2(String_t* value)
	{
		___StartText_2 = value;
		Il2CppCodeGenWriteBarrier(&___StartText_2, value);
	}

	inline static int32_t get_offset_of_Type_3() { return static_cast<int32_t>(offsetof(KeyboardMode_t3062012260, ___Type_3)); }
	inline int32_t get_Type_3() const { return ___Type_3; }
	inline int32_t* get_address_of_Type_3() { return &___Type_3; }
	inline void set_Type_3(int32_t value)
	{
		___Type_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
