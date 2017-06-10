#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_PowerUI_Css_ValueType2503905323.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.Css.CssProperty
struct  CssProperty_t3575850104  : public Il2CppObject
{
public:
	// System.String PowerUI.Css.CssProperty::Name
	String_t* ___Name_0;
	// System.Boolean PowerUI.Css.CssProperty::IsTextual
	bool ___IsTextual_1;
	// System.Boolean PowerUI.Css.CssProperty::IsXProperty
	bool ___IsXProperty_2;
	// System.Boolean PowerUI.Css.CssProperty::IsWidthOrHeight
	bool ___IsWidthOrHeight_3;
	// PowerUI.Css.ValueType PowerUI.Css.CssProperty::Type
	int32_t ___Type_4;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(CssProperty_t3575850104, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier(&___Name_0, value);
	}

	inline static int32_t get_offset_of_IsTextual_1() { return static_cast<int32_t>(offsetof(CssProperty_t3575850104, ___IsTextual_1)); }
	inline bool get_IsTextual_1() const { return ___IsTextual_1; }
	inline bool* get_address_of_IsTextual_1() { return &___IsTextual_1; }
	inline void set_IsTextual_1(bool value)
	{
		___IsTextual_1 = value;
	}

	inline static int32_t get_offset_of_IsXProperty_2() { return static_cast<int32_t>(offsetof(CssProperty_t3575850104, ___IsXProperty_2)); }
	inline bool get_IsXProperty_2() const { return ___IsXProperty_2; }
	inline bool* get_address_of_IsXProperty_2() { return &___IsXProperty_2; }
	inline void set_IsXProperty_2(bool value)
	{
		___IsXProperty_2 = value;
	}

	inline static int32_t get_offset_of_IsWidthOrHeight_3() { return static_cast<int32_t>(offsetof(CssProperty_t3575850104, ___IsWidthOrHeight_3)); }
	inline bool get_IsWidthOrHeight_3() const { return ___IsWidthOrHeight_3; }
	inline bool* get_address_of_IsWidthOrHeight_3() { return &___IsWidthOrHeight_3; }
	inline void set_IsWidthOrHeight_3(bool value)
	{
		___IsWidthOrHeight_3 = value;
	}

	inline static int32_t get_offset_of_Type_4() { return static_cast<int32_t>(offsetof(CssProperty_t3575850104, ___Type_4)); }
	inline int32_t get_Type_4() const { return ___Type_4; }
	inline int32_t* get_address_of_Type_4() { return &___Type_4; }
	inline void set_Type_4(int32_t value)
	{
		___Type_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
