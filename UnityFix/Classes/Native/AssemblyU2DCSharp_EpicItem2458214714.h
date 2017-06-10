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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EpicItem
struct  EpicItem_t2458214714  : public Il2CppObject
{
public:
	// System.String EpicItem::ID
	String_t* ___ID_0;
	// System.Int32 EpicItem::_Quantity
	int32_t ____Quantity_1;

public:
	inline static int32_t get_offset_of_ID_0() { return static_cast<int32_t>(offsetof(EpicItem_t2458214714, ___ID_0)); }
	inline String_t* get_ID_0() const { return ___ID_0; }
	inline String_t** get_address_of_ID_0() { return &___ID_0; }
	inline void set_ID_0(String_t* value)
	{
		___ID_0 = value;
		Il2CppCodeGenWriteBarrier(&___ID_0, value);
	}

	inline static int32_t get_offset_of__Quantity_1() { return static_cast<int32_t>(offsetof(EpicItem_t2458214714, ____Quantity_1)); }
	inline int32_t get__Quantity_1() const { return ____Quantity_1; }
	inline int32_t* get_address_of__Quantity_1() { return &____Quantity_1; }
	inline void set__Quantity_1(int32_t value)
	{
		____Quantity_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
