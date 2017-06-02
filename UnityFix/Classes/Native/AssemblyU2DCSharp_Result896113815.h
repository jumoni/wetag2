#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Celebrity[]
struct CelebrityU5BU5D_t3782865004;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Result
struct  Result_t896113815  : public Il2CppObject
{
public:
	// Celebrity[] Result::celebrities
	CelebrityU5BU5D_t3782865004* ___celebrities_0;

public:
	inline static int32_t get_offset_of_celebrities_0() { return static_cast<int32_t>(offsetof(Result_t896113815, ___celebrities_0)); }
	inline CelebrityU5BU5D_t3782865004* get_celebrities_0() const { return ___celebrities_0; }
	inline CelebrityU5BU5D_t3782865004** get_address_of_celebrities_0() { return &___celebrities_0; }
	inline void set_celebrities_0(CelebrityU5BU5D_t3782865004* value)
	{
		___celebrities_0 = value;
		Il2CppCodeGenWriteBarrier(&___celebrities_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
