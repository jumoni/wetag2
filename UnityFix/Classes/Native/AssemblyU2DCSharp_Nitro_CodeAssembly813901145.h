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
// System.Reflection.Assembly
struct Assembly_t4268412390;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Nitro.CodeAssembly
struct  CodeAssembly_t813901145  : public Il2CppObject
{
public:
	// System.String Nitro.CodeAssembly::Name
	String_t* ___Name_0;
	// System.Boolean Nitro.CodeAssembly::Current
	bool ___Current_1;
	// System.Boolean Nitro.CodeAssembly::NitroAOT
	bool ___NitroAOT_2;
	// System.Reflection.Assembly Nitro.CodeAssembly::Assembly
	Assembly_t4268412390 * ___Assembly_3;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(CodeAssembly_t813901145, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier(&___Name_0, value);
	}

	inline static int32_t get_offset_of_Current_1() { return static_cast<int32_t>(offsetof(CodeAssembly_t813901145, ___Current_1)); }
	inline bool get_Current_1() const { return ___Current_1; }
	inline bool* get_address_of_Current_1() { return &___Current_1; }
	inline void set_Current_1(bool value)
	{
		___Current_1 = value;
	}

	inline static int32_t get_offset_of_NitroAOT_2() { return static_cast<int32_t>(offsetof(CodeAssembly_t813901145, ___NitroAOT_2)); }
	inline bool get_NitroAOT_2() const { return ___NitroAOT_2; }
	inline bool* get_address_of_NitroAOT_2() { return &___NitroAOT_2; }
	inline void set_NitroAOT_2(bool value)
	{
		___NitroAOT_2 = value;
	}

	inline static int32_t get_offset_of_Assembly_3() { return static_cast<int32_t>(offsetof(CodeAssembly_t813901145, ___Assembly_3)); }
	inline Assembly_t4268412390 * get_Assembly_3() const { return ___Assembly_3; }
	inline Assembly_t4268412390 ** get_address_of_Assembly_3() { return &___Assembly_3; }
	inline void set_Assembly_3(Assembly_t4268412390 * value)
	{
		___Assembly_3 = value;
		Il2CppCodeGenWriteBarrier(&___Assembly_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
