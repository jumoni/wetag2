#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Reflection.Assembly
struct Assembly_t4268412390;
// System.Collections.Generic.Dictionary`2<System.String,Nitro.CodeAssembly>
struct Dictionary_2_t2728680407;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Nitro.CodeReference
struct  CodeReference_t3262748424  : public Il2CppObject
{
public:
	// System.String Nitro.CodeReference::Reference
	String_t* ___Reference_2;
	// System.Reflection.Assembly Nitro.CodeReference::InAssembly
	Assembly_t4268412390 * ___InAssembly_3;

public:
	inline static int32_t get_offset_of_Reference_2() { return static_cast<int32_t>(offsetof(CodeReference_t3262748424, ___Reference_2)); }
	inline String_t* get_Reference_2() const { return ___Reference_2; }
	inline String_t** get_address_of_Reference_2() { return &___Reference_2; }
	inline void set_Reference_2(String_t* value)
	{
		___Reference_2 = value;
		Il2CppCodeGenWriteBarrier(&___Reference_2, value);
	}

	inline static int32_t get_offset_of_InAssembly_3() { return static_cast<int32_t>(offsetof(CodeReference_t3262748424, ___InAssembly_3)); }
	inline Assembly_t4268412390 * get_InAssembly_3() const { return ___InAssembly_3; }
	inline Assembly_t4268412390 ** get_address_of_InAssembly_3() { return &___InAssembly_3; }
	inline void set_InAssembly_3(Assembly_t4268412390 * value)
	{
		___InAssembly_3 = value;
		Il2CppCodeGenWriteBarrier(&___InAssembly_3, value);
	}
};

struct CodeReference_t3262748424_StaticFields
{
public:
	// System.Reflection.Assembly Nitro.CodeReference::CurrentAssembly
	Assembly_t4268412390 * ___CurrentAssembly_0;
	// System.Collections.Generic.Dictionary`2<System.String,Nitro.CodeAssembly> Nitro.CodeReference::Assemblies
	Dictionary_2_t2728680407 * ___Assemblies_1;

public:
	inline static int32_t get_offset_of_CurrentAssembly_0() { return static_cast<int32_t>(offsetof(CodeReference_t3262748424_StaticFields, ___CurrentAssembly_0)); }
	inline Assembly_t4268412390 * get_CurrentAssembly_0() const { return ___CurrentAssembly_0; }
	inline Assembly_t4268412390 ** get_address_of_CurrentAssembly_0() { return &___CurrentAssembly_0; }
	inline void set_CurrentAssembly_0(Assembly_t4268412390 * value)
	{
		___CurrentAssembly_0 = value;
		Il2CppCodeGenWriteBarrier(&___CurrentAssembly_0, value);
	}

	inline static int32_t get_offset_of_Assemblies_1() { return static_cast<int32_t>(offsetof(CodeReference_t3262748424_StaticFields, ___Assemblies_1)); }
	inline Dictionary_2_t2728680407 * get_Assemblies_1() const { return ___Assemblies_1; }
	inline Dictionary_2_t2728680407 ** get_address_of_Assemblies_1() { return &___Assemblies_1; }
	inline void set_Assemblies_1(Dictionary_2_t2728680407 * value)
	{
		___Assemblies_1 = value;
		Il2CppCodeGenWriteBarrier(&___Assemblies_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
