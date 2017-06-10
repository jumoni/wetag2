#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.Dictionary`2<System.Char,System.Int32>
struct Dictionary_2_t3672354737;
// System.Collections.Generic.Dictionary`2<System.String,Nitro.Operator>
struct Dictionary_2_t3685905592;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Nitro.Operator
struct  Operator_t1771126330  : public Il2CppObject
{
public:
	// System.Int32 Nitro.Operator::Priority
	int32_t ___Priority_2;
	// System.Boolean Nitro.Operator::LeftOnly
	bool ___LeftOnly_3;
	// System.Boolean Nitro.Operator::RightOnly
	bool ___RightOnly_4;
	// System.String Nitro.Operator::Pattern
	String_t* ___Pattern_5;
	// System.Boolean Nitro.Operator::LeftAndRight
	bool ___LeftAndRight_6;

public:
	inline static int32_t get_offset_of_Priority_2() { return static_cast<int32_t>(offsetof(Operator_t1771126330, ___Priority_2)); }
	inline int32_t get_Priority_2() const { return ___Priority_2; }
	inline int32_t* get_address_of_Priority_2() { return &___Priority_2; }
	inline void set_Priority_2(int32_t value)
	{
		___Priority_2 = value;
	}

	inline static int32_t get_offset_of_LeftOnly_3() { return static_cast<int32_t>(offsetof(Operator_t1771126330, ___LeftOnly_3)); }
	inline bool get_LeftOnly_3() const { return ___LeftOnly_3; }
	inline bool* get_address_of_LeftOnly_3() { return &___LeftOnly_3; }
	inline void set_LeftOnly_3(bool value)
	{
		___LeftOnly_3 = value;
	}

	inline static int32_t get_offset_of_RightOnly_4() { return static_cast<int32_t>(offsetof(Operator_t1771126330, ___RightOnly_4)); }
	inline bool get_RightOnly_4() const { return ___RightOnly_4; }
	inline bool* get_address_of_RightOnly_4() { return &___RightOnly_4; }
	inline void set_RightOnly_4(bool value)
	{
		___RightOnly_4 = value;
	}

	inline static int32_t get_offset_of_Pattern_5() { return static_cast<int32_t>(offsetof(Operator_t1771126330, ___Pattern_5)); }
	inline String_t* get_Pattern_5() const { return ___Pattern_5; }
	inline String_t** get_address_of_Pattern_5() { return &___Pattern_5; }
	inline void set_Pattern_5(String_t* value)
	{
		___Pattern_5 = value;
		Il2CppCodeGenWriteBarrier(&___Pattern_5, value);
	}

	inline static int32_t get_offset_of_LeftAndRight_6() { return static_cast<int32_t>(offsetof(Operator_t1771126330, ___LeftAndRight_6)); }
	inline bool get_LeftAndRight_6() const { return ___LeftAndRight_6; }
	inline bool* get_address_of_LeftAndRight_6() { return &___LeftAndRight_6; }
	inline void set_LeftAndRight_6(bool value)
	{
		___LeftAndRight_6 = value;
	}
};

struct Operator_t1771126330_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Char,System.Int32> Nitro.Operator::Starts
	Dictionary_2_t3672354737 * ___Starts_0;
	// System.Collections.Generic.Dictionary`2<System.String,Nitro.Operator> Nitro.Operator::FullOperators
	Dictionary_2_t3685905592 * ___FullOperators_1;

public:
	inline static int32_t get_offset_of_Starts_0() { return static_cast<int32_t>(offsetof(Operator_t1771126330_StaticFields, ___Starts_0)); }
	inline Dictionary_2_t3672354737 * get_Starts_0() const { return ___Starts_0; }
	inline Dictionary_2_t3672354737 ** get_address_of_Starts_0() { return &___Starts_0; }
	inline void set_Starts_0(Dictionary_2_t3672354737 * value)
	{
		___Starts_0 = value;
		Il2CppCodeGenWriteBarrier(&___Starts_0, value);
	}

	inline static int32_t get_offset_of_FullOperators_1() { return static_cast<int32_t>(offsetof(Operator_t1771126330_StaticFields, ___FullOperators_1)); }
	inline Dictionary_2_t3685905592 * get_FullOperators_1() const { return ___FullOperators_1; }
	inline Dictionary_2_t3685905592 ** get_address_of_FullOperators_1() { return &___FullOperators_1; }
	inline void set_FullOperators_1(Dictionary_2_t3685905592 * value)
	{
		___FullOperators_1 = value;
		Il2CppCodeGenWriteBarrier(&___FullOperators_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
