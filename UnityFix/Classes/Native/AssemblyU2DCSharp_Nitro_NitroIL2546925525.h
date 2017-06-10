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
// System.Reflection.Emit.ILGenerator
struct ILGenerator_t99948092;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Nitro.NitroIL
struct  NitroIL_t2546925525  : public Il2CppObject
{
public:
	// System.Int32 Nitro.NitroIL::ILLine
	int32_t ___ILLine_0;
	// System.String Nitro.NitroIL::DebugOutput
	String_t* ___DebugOutput_1;
	// System.Reflection.Emit.ILGenerator Nitro.NitroIL::Generator
	ILGenerator_t99948092 * ___Generator_2;

public:
	inline static int32_t get_offset_of_ILLine_0() { return static_cast<int32_t>(offsetof(NitroIL_t2546925525, ___ILLine_0)); }
	inline int32_t get_ILLine_0() const { return ___ILLine_0; }
	inline int32_t* get_address_of_ILLine_0() { return &___ILLine_0; }
	inline void set_ILLine_0(int32_t value)
	{
		___ILLine_0 = value;
	}

	inline static int32_t get_offset_of_DebugOutput_1() { return static_cast<int32_t>(offsetof(NitroIL_t2546925525, ___DebugOutput_1)); }
	inline String_t* get_DebugOutput_1() const { return ___DebugOutput_1; }
	inline String_t** get_address_of_DebugOutput_1() { return &___DebugOutput_1; }
	inline void set_DebugOutput_1(String_t* value)
	{
		___DebugOutput_1 = value;
		Il2CppCodeGenWriteBarrier(&___DebugOutput_1, value);
	}

	inline static int32_t get_offset_of_Generator_2() { return static_cast<int32_t>(offsetof(NitroIL_t2546925525, ___Generator_2)); }
	inline ILGenerator_t99948092 * get_Generator_2() const { return ___Generator_2; }
	inline ILGenerator_t99948092 ** get_address_of_Generator_2() { return &___Generator_2; }
	inline void set_Generator_2(ILGenerator_t99948092 * value)
	{
		___Generator_2 = value;
		Il2CppCodeGenWriteBarrier(&___Generator_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
