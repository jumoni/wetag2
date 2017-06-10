#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Nitro_CodeFragment4001624203.h"

// System.String
struct String_t;
// Nitro.TypeFragment[]
struct TypeFragmentU5BU5D_t2948303135;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Nitro.TypeFragment
struct  TypeFragment_t3643441850  : public CodeFragment_t4001624203
{
public:
	// System.Boolean Nitro.TypeFragment::IsArray
	bool ___IsArray_6;
	// System.Boolean Nitro.TypeFragment::HasColon
	bool ___HasColon_7;
	// System.String Nitro.TypeFragment::Value
	String_t* ___Value_8;
	// System.Int32 Nitro.TypeFragment::Dimensions
	int32_t ___Dimensions_9;
	// Nitro.TypeFragment[] Nitro.TypeFragment::GenericSet
	TypeFragmentU5BU5D_t2948303135* ___GenericSet_10;

public:
	inline static int32_t get_offset_of_IsArray_6() { return static_cast<int32_t>(offsetof(TypeFragment_t3643441850, ___IsArray_6)); }
	inline bool get_IsArray_6() const { return ___IsArray_6; }
	inline bool* get_address_of_IsArray_6() { return &___IsArray_6; }
	inline void set_IsArray_6(bool value)
	{
		___IsArray_6 = value;
	}

	inline static int32_t get_offset_of_HasColon_7() { return static_cast<int32_t>(offsetof(TypeFragment_t3643441850, ___HasColon_7)); }
	inline bool get_HasColon_7() const { return ___HasColon_7; }
	inline bool* get_address_of_HasColon_7() { return &___HasColon_7; }
	inline void set_HasColon_7(bool value)
	{
		___HasColon_7 = value;
	}

	inline static int32_t get_offset_of_Value_8() { return static_cast<int32_t>(offsetof(TypeFragment_t3643441850, ___Value_8)); }
	inline String_t* get_Value_8() const { return ___Value_8; }
	inline String_t** get_address_of_Value_8() { return &___Value_8; }
	inline void set_Value_8(String_t* value)
	{
		___Value_8 = value;
		Il2CppCodeGenWriteBarrier(&___Value_8, value);
	}

	inline static int32_t get_offset_of_Dimensions_9() { return static_cast<int32_t>(offsetof(TypeFragment_t3643441850, ___Dimensions_9)); }
	inline int32_t get_Dimensions_9() const { return ___Dimensions_9; }
	inline int32_t* get_address_of_Dimensions_9() { return &___Dimensions_9; }
	inline void set_Dimensions_9(int32_t value)
	{
		___Dimensions_9 = value;
	}

	inline static int32_t get_offset_of_GenericSet_10() { return static_cast<int32_t>(offsetof(TypeFragment_t3643441850, ___GenericSet_10)); }
	inline TypeFragmentU5BU5D_t2948303135* get_GenericSet_10() const { return ___GenericSet_10; }
	inline TypeFragmentU5BU5D_t2948303135** get_address_of_GenericSet_10() { return &___GenericSet_10; }
	inline void set_GenericSet_10(TypeFragmentU5BU5D_t2948303135* value)
	{
		___GenericSet_10 = value;
		Il2CppCodeGenWriteBarrier(&___GenericSet_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
