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
// System.Byte[]
struct ByteU5BU5D_t3397334013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceWriter/TypeByNameObject
struct  TypeByNameObject_t1525113425  : public Il2CppObject
{
public:
	// System.String System.Resources.ResourceWriter/TypeByNameObject::TypeName
	String_t* ___TypeName_0;
	// System.Byte[] System.Resources.ResourceWriter/TypeByNameObject::Value
	ByteU5BU5D_t3397334013* ___Value_1;

public:
	inline static int32_t get_offset_of_TypeName_0() { return static_cast<int32_t>(offsetof(TypeByNameObject_t1525113425, ___TypeName_0)); }
	inline String_t* get_TypeName_0() const { return ___TypeName_0; }
	inline String_t** get_address_of_TypeName_0() { return &___TypeName_0; }
	inline void set_TypeName_0(String_t* value)
	{
		___TypeName_0 = value;
		Il2CppCodeGenWriteBarrier(&___TypeName_0, value);
	}

	inline static int32_t get_offset_of_Value_1() { return static_cast<int32_t>(offsetof(TypeByNameObject_t1525113425, ___Value_1)); }
	inline ByteU5BU5D_t3397334013* get_Value_1() const { return ___Value_1; }
	inline ByteU5BU5D_t3397334013** get_address_of_Value_1() { return &___Value_1; }
	inline void set_Value_1(ByteU5BU5D_t3397334013* value)
	{
		___Value_1 = value;
		Il2CppCodeGenWriteBarrier(&___Value_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
