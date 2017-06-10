#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Reflection_LocalVariableInfo1749284021.h"

// System.String
struct String_t;
// System.Reflection.Emit.ILGenerator
struct ILGenerator_t99948092;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.LocalBuilder
struct  LocalBuilder_t2116499186  : public LocalVariableInfo_t1749284021
{
public:
	// System.String System.Reflection.Emit.LocalBuilder::name
	String_t* ___name_3;
	// System.Reflection.Emit.ILGenerator System.Reflection.Emit.LocalBuilder::ilgen
	ILGenerator_t99948092 * ___ilgen_4;
	// System.Int32 System.Reflection.Emit.LocalBuilder::startOffset
	int32_t ___startOffset_5;
	// System.Int32 System.Reflection.Emit.LocalBuilder::endOffset
	int32_t ___endOffset_6;

public:
	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(LocalBuilder_t2116499186, ___name_3)); }
	inline String_t* get_name_3() const { return ___name_3; }
	inline String_t** get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(String_t* value)
	{
		___name_3 = value;
		Il2CppCodeGenWriteBarrier(&___name_3, value);
	}

	inline static int32_t get_offset_of_ilgen_4() { return static_cast<int32_t>(offsetof(LocalBuilder_t2116499186, ___ilgen_4)); }
	inline ILGenerator_t99948092 * get_ilgen_4() const { return ___ilgen_4; }
	inline ILGenerator_t99948092 ** get_address_of_ilgen_4() { return &___ilgen_4; }
	inline void set_ilgen_4(ILGenerator_t99948092 * value)
	{
		___ilgen_4 = value;
		Il2CppCodeGenWriteBarrier(&___ilgen_4, value);
	}

	inline static int32_t get_offset_of_startOffset_5() { return static_cast<int32_t>(offsetof(LocalBuilder_t2116499186, ___startOffset_5)); }
	inline int32_t get_startOffset_5() const { return ___startOffset_5; }
	inline int32_t* get_address_of_startOffset_5() { return &___startOffset_5; }
	inline void set_startOffset_5(int32_t value)
	{
		___startOffset_5 = value;
	}

	inline static int32_t get_offset_of_endOffset_6() { return static_cast<int32_t>(offsetof(LocalBuilder_t2116499186, ___endOffset_6)); }
	inline int32_t get_endOffset_6() const { return ___endOffset_6; }
	inline int32_t* get_address_of_endOffset_6() { return &___endOffset_6; }
	inline void set_endOffset_6(int32_t value)
	{
		___endOffset_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
