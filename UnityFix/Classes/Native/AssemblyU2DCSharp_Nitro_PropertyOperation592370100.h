#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Nitro_Operation2694499211.h"

// System.String
struct String_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// Nitro.CompiledFragment
struct CompiledFragment_t2613193543;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Type
struct Type_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Nitro.PropertyOperation
struct  PropertyOperation_t592370100  : public Operation_t2694499211
{
public:
	// System.String Nitro.PropertyOperation::Name
	String_t* ___Name_11;
	// System.Boolean Nitro.PropertyOperation::IsStatic
	bool ___IsStatic_12;
	// System.Reflection.FieldInfo Nitro.PropertyOperation::Field
	FieldInfo_t * ___Field_13;
	// Nitro.CompiledFragment Nitro.PropertyOperation::Of
	CompiledFragment_t2613193543 * ___Of_14;
	// System.Reflection.PropertyInfo Nitro.PropertyOperation::Property
	PropertyInfo_t * ___Property_15;
	// System.Type Nitro.PropertyOperation::MethodReturnType
	Type_t * ___MethodReturnType_16;

public:
	inline static int32_t get_offset_of_Name_11() { return static_cast<int32_t>(offsetof(PropertyOperation_t592370100, ___Name_11)); }
	inline String_t* get_Name_11() const { return ___Name_11; }
	inline String_t** get_address_of_Name_11() { return &___Name_11; }
	inline void set_Name_11(String_t* value)
	{
		___Name_11 = value;
		Il2CppCodeGenWriteBarrier(&___Name_11, value);
	}

	inline static int32_t get_offset_of_IsStatic_12() { return static_cast<int32_t>(offsetof(PropertyOperation_t592370100, ___IsStatic_12)); }
	inline bool get_IsStatic_12() const { return ___IsStatic_12; }
	inline bool* get_address_of_IsStatic_12() { return &___IsStatic_12; }
	inline void set_IsStatic_12(bool value)
	{
		___IsStatic_12 = value;
	}

	inline static int32_t get_offset_of_Field_13() { return static_cast<int32_t>(offsetof(PropertyOperation_t592370100, ___Field_13)); }
	inline FieldInfo_t * get_Field_13() const { return ___Field_13; }
	inline FieldInfo_t ** get_address_of_Field_13() { return &___Field_13; }
	inline void set_Field_13(FieldInfo_t * value)
	{
		___Field_13 = value;
		Il2CppCodeGenWriteBarrier(&___Field_13, value);
	}

	inline static int32_t get_offset_of_Of_14() { return static_cast<int32_t>(offsetof(PropertyOperation_t592370100, ___Of_14)); }
	inline CompiledFragment_t2613193543 * get_Of_14() const { return ___Of_14; }
	inline CompiledFragment_t2613193543 ** get_address_of_Of_14() { return &___Of_14; }
	inline void set_Of_14(CompiledFragment_t2613193543 * value)
	{
		___Of_14 = value;
		Il2CppCodeGenWriteBarrier(&___Of_14, value);
	}

	inline static int32_t get_offset_of_Property_15() { return static_cast<int32_t>(offsetof(PropertyOperation_t592370100, ___Property_15)); }
	inline PropertyInfo_t * get_Property_15() const { return ___Property_15; }
	inline PropertyInfo_t ** get_address_of_Property_15() { return &___Property_15; }
	inline void set_Property_15(PropertyInfo_t * value)
	{
		___Property_15 = value;
		Il2CppCodeGenWriteBarrier(&___Property_15, value);
	}

	inline static int32_t get_offset_of_MethodReturnType_16() { return static_cast<int32_t>(offsetof(PropertyOperation_t592370100, ___MethodReturnType_16)); }
	inline Type_t * get_MethodReturnType_16() const { return ___MethodReturnType_16; }
	inline Type_t ** get_address_of_MethodReturnType_16() { return &___MethodReturnType_16; }
	inline void set_MethodReturnType_16(Type_t * value)
	{
		___MethodReturnType_16 = value;
		Il2CppCodeGenWriteBarrier(&___MethodReturnType_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
