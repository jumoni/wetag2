#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Reflection.ConstructorInfo
struct ConstructorInfo_t2851816542;
// System.Byte[]
struct ByteU5BU5D_t3397334013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.CustomAttributeBuilder
struct  CustomAttributeBuilder_t2970303184  : public Il2CppObject
{
public:
	// System.Reflection.ConstructorInfo System.Reflection.Emit.CustomAttributeBuilder::ctor
	ConstructorInfo_t2851816542 * ___ctor_0;
	// System.Byte[] System.Reflection.Emit.CustomAttributeBuilder::data
	ByteU5BU5D_t3397334013* ___data_1;

public:
	inline static int32_t get_offset_of_ctor_0() { return static_cast<int32_t>(offsetof(CustomAttributeBuilder_t2970303184, ___ctor_0)); }
	inline ConstructorInfo_t2851816542 * get_ctor_0() const { return ___ctor_0; }
	inline ConstructorInfo_t2851816542 ** get_address_of_ctor_0() { return &___ctor_0; }
	inline void set_ctor_0(ConstructorInfo_t2851816542 * value)
	{
		___ctor_0 = value;
		Il2CppCodeGenWriteBarrier(&___ctor_0, value);
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(CustomAttributeBuilder_t2970303184, ___data_1)); }
	inline ByteU5BU5D_t3397334013* get_data_1() const { return ___data_1; }
	inline ByteU5BU5D_t3397334013** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(ByteU5BU5D_t3397334013* value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier(&___data_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
