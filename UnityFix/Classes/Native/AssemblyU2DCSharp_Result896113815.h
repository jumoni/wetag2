#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// RecogItem[]
struct RecogItemU5BU5D_t3245901170;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Result
struct  Result_t896113815  : public Il2CppObject
{
public:
	// RecogItem[] Result::celebrities
	RecogItemU5BU5D_t3245901170* ___celebrities_0;
	// RecogItem[] Result::landmarks
	RecogItemU5BU5D_t3245901170* ___landmarks_1;

public:
	inline static int32_t get_offset_of_celebrities_0() { return static_cast<int32_t>(offsetof(Result_t896113815, ___celebrities_0)); }
	inline RecogItemU5BU5D_t3245901170* get_celebrities_0() const { return ___celebrities_0; }
	inline RecogItemU5BU5D_t3245901170** get_address_of_celebrities_0() { return &___celebrities_0; }
	inline void set_celebrities_0(RecogItemU5BU5D_t3245901170* value)
	{
		___celebrities_0 = value;
		Il2CppCodeGenWriteBarrier(&___celebrities_0, value);
	}

	inline static int32_t get_offset_of_landmarks_1() { return static_cast<int32_t>(offsetof(Result_t896113815, ___landmarks_1)); }
	inline RecogItemU5BU5D_t3245901170* get_landmarks_1() const { return ___landmarks_1; }
	inline RecogItemU5BU5D_t3245901170** get_address_of_landmarks_1() { return &___landmarks_1; }
	inline void set_landmarks_1(RecogItemU5BU5D_t3245901170* value)
	{
		___landmarks_1 = value;
		Il2CppCodeGenWriteBarrier(&___landmarks_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
