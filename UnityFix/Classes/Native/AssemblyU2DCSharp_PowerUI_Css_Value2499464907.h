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
// PowerUI.Css.Value[]
struct ValueU5BU5D_t1336499626;
// PowerUI.Css.Calculation
struct Calculation_t2586308293;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.Css.Value
struct  Value_t2499464907  : public Il2CppObject
{
public:
	// System.Int32 PowerUI.Css.Value::PX
	int32_t ___PX_0;
	// System.String PowerUI.Css.Value::Text
	String_t* ___Text_1;
	// System.Single PowerUI.Css.Value::Single
	float ___Single_2;
	// System.Boolean PowerUI.Css.Value::Boolean
	bool ___Boolean_3;
	// System.Boolean PowerUI.Css.Value::Important
	bool ___Important_4;
	// PowerUI.Css.Value[] PowerUI.Css.Value::InnerValues
	ValueU5BU5D_t1336499626* ___InnerValues_5;
	// PowerUI.Css.Calculation PowerUI.Css.Value::Calculation
	Calculation_t2586308293 * ___Calculation_6;
	// PowerUI.Css.ValueType PowerUI.Css.Value::Type
	int32_t ___Type_7;

public:
	inline static int32_t get_offset_of_PX_0() { return static_cast<int32_t>(offsetof(Value_t2499464907, ___PX_0)); }
	inline int32_t get_PX_0() const { return ___PX_0; }
	inline int32_t* get_address_of_PX_0() { return &___PX_0; }
	inline void set_PX_0(int32_t value)
	{
		___PX_0 = value;
	}

	inline static int32_t get_offset_of_Text_1() { return static_cast<int32_t>(offsetof(Value_t2499464907, ___Text_1)); }
	inline String_t* get_Text_1() const { return ___Text_1; }
	inline String_t** get_address_of_Text_1() { return &___Text_1; }
	inline void set_Text_1(String_t* value)
	{
		___Text_1 = value;
		Il2CppCodeGenWriteBarrier(&___Text_1, value);
	}

	inline static int32_t get_offset_of_Single_2() { return static_cast<int32_t>(offsetof(Value_t2499464907, ___Single_2)); }
	inline float get_Single_2() const { return ___Single_2; }
	inline float* get_address_of_Single_2() { return &___Single_2; }
	inline void set_Single_2(float value)
	{
		___Single_2 = value;
	}

	inline static int32_t get_offset_of_Boolean_3() { return static_cast<int32_t>(offsetof(Value_t2499464907, ___Boolean_3)); }
	inline bool get_Boolean_3() const { return ___Boolean_3; }
	inline bool* get_address_of_Boolean_3() { return &___Boolean_3; }
	inline void set_Boolean_3(bool value)
	{
		___Boolean_3 = value;
	}

	inline static int32_t get_offset_of_Important_4() { return static_cast<int32_t>(offsetof(Value_t2499464907, ___Important_4)); }
	inline bool get_Important_4() const { return ___Important_4; }
	inline bool* get_address_of_Important_4() { return &___Important_4; }
	inline void set_Important_4(bool value)
	{
		___Important_4 = value;
	}

	inline static int32_t get_offset_of_InnerValues_5() { return static_cast<int32_t>(offsetof(Value_t2499464907, ___InnerValues_5)); }
	inline ValueU5BU5D_t1336499626* get_InnerValues_5() const { return ___InnerValues_5; }
	inline ValueU5BU5D_t1336499626** get_address_of_InnerValues_5() { return &___InnerValues_5; }
	inline void set_InnerValues_5(ValueU5BU5D_t1336499626* value)
	{
		___InnerValues_5 = value;
		Il2CppCodeGenWriteBarrier(&___InnerValues_5, value);
	}

	inline static int32_t get_offset_of_Calculation_6() { return static_cast<int32_t>(offsetof(Value_t2499464907, ___Calculation_6)); }
	inline Calculation_t2586308293 * get_Calculation_6() const { return ___Calculation_6; }
	inline Calculation_t2586308293 ** get_address_of_Calculation_6() { return &___Calculation_6; }
	inline void set_Calculation_6(Calculation_t2586308293 * value)
	{
		___Calculation_6 = value;
		Il2CppCodeGenWriteBarrier(&___Calculation_6, value);
	}

	inline static int32_t get_offset_of_Type_7() { return static_cast<int32_t>(offsetof(Value_t2499464907, ___Type_7)); }
	inline int32_t get_Type_7() const { return ___Type_7; }
	inline int32_t* get_address_of_Type_7() { return &___Type_7; }
	inline void set_Type_7(int32_t value)
	{
		___Type_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
