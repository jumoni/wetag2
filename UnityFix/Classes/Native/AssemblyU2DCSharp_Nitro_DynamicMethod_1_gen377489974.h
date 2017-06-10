#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Nitro_NitroBaseMethod705977222.h"

// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Reflection.MethodInfo
struct MethodInfo_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Nitro.DynamicMethod`1<Nitro.Void>
struct  DynamicMethod_1_t377489974  : public NitroBaseMethod_t705977222
{
public:
	// System.String Nitro.DynamicMethod`1::Name
	String_t* ___Name_0;
	// System.Object Nitro.DynamicMethod`1::Object
	Il2CppObject * ___Object_1;
	// System.Reflection.MethodInfo Nitro.DynamicMethod`1::Method
	MethodInfo_t * ___Method_2;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(DynamicMethod_1_t377489974, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier(&___Name_0, value);
	}

	inline static int32_t get_offset_of_Object_1() { return static_cast<int32_t>(offsetof(DynamicMethod_1_t377489974, ___Object_1)); }
	inline Il2CppObject * get_Object_1() const { return ___Object_1; }
	inline Il2CppObject ** get_address_of_Object_1() { return &___Object_1; }
	inline void set_Object_1(Il2CppObject * value)
	{
		___Object_1 = value;
		Il2CppCodeGenWriteBarrier(&___Object_1, value);
	}

	inline static int32_t get_offset_of_Method_2() { return static_cast<int32_t>(offsetof(DynamicMethod_1_t377489974, ___Method_2)); }
	inline MethodInfo_t * get_Method_2() const { return ___Method_2; }
	inline MethodInfo_t ** get_address_of_Method_2() { return &___Method_2; }
	inline void set_Method_2(MethodInfo_t * value)
	{
		___Method_2 = value;
		Il2CppCodeGenWriteBarrier(&___Method_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
