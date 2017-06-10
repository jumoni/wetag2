#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Object[]
struct ObjectU5BU5D_t3614634134;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.FixedSizeBuffer`1<System.Object>
struct  FixedSizeBuffer_1_t3513668796  : public Il2CppObject
{
public:
	// T[] PowerUI.FixedSizeBuffer`1::Buffer
	ObjectU5BU5D_t3614634134* ___Buffer_0;
	// System.Boolean PowerUI.FixedSizeBuffer`1::Clear
	bool ___Clear_1;
	// System.Int32 PowerUI.FixedSizeBuffer`1::BlockSize
	int32_t ___BlockSize_2;
	// System.Int32 PowerUI.FixedSizeBuffer`1::BlockCount
	int32_t ___BlockCount_3;

public:
	inline static int32_t get_offset_of_Buffer_0() { return static_cast<int32_t>(offsetof(FixedSizeBuffer_1_t3513668796, ___Buffer_0)); }
	inline ObjectU5BU5D_t3614634134* get_Buffer_0() const { return ___Buffer_0; }
	inline ObjectU5BU5D_t3614634134** get_address_of_Buffer_0() { return &___Buffer_0; }
	inline void set_Buffer_0(ObjectU5BU5D_t3614634134* value)
	{
		___Buffer_0 = value;
		Il2CppCodeGenWriteBarrier(&___Buffer_0, value);
	}

	inline static int32_t get_offset_of_Clear_1() { return static_cast<int32_t>(offsetof(FixedSizeBuffer_1_t3513668796, ___Clear_1)); }
	inline bool get_Clear_1() const { return ___Clear_1; }
	inline bool* get_address_of_Clear_1() { return &___Clear_1; }
	inline void set_Clear_1(bool value)
	{
		___Clear_1 = value;
	}

	inline static int32_t get_offset_of_BlockSize_2() { return static_cast<int32_t>(offsetof(FixedSizeBuffer_1_t3513668796, ___BlockSize_2)); }
	inline int32_t get_BlockSize_2() const { return ___BlockSize_2; }
	inline int32_t* get_address_of_BlockSize_2() { return &___BlockSize_2; }
	inline void set_BlockSize_2(int32_t value)
	{
		___BlockSize_2 = value;
	}

	inline static int32_t get_offset_of_BlockCount_3() { return static_cast<int32_t>(offsetof(FixedSizeBuffer_1_t3513668796, ___BlockCount_3)); }
	inline int32_t get_BlockCount_3() const { return ___BlockCount_3; }
	inline int32_t* get_address_of_BlockCount_3() { return &___BlockCount_3; }
	inline void set_BlockCount_3(int32_t value)
	{
		___BlockCount_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
