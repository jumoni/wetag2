#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// PowerUI.Element
struct Element_t3532621832;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DragScroller
struct  DragScroller_t1114648540  : public Il2CppObject
{
public:

public:
};

struct DragScroller_t1114648540_StaticFields
{
public:
	// System.Int32 DragScroller::StartY
	int32_t ___StartY_0;
	// PowerUI.Element DragScroller::Scrolling
	Element_t3532621832 * ___Scrolling_1;

public:
	inline static int32_t get_offset_of_StartY_0() { return static_cast<int32_t>(offsetof(DragScroller_t1114648540_StaticFields, ___StartY_0)); }
	inline int32_t get_StartY_0() const { return ___StartY_0; }
	inline int32_t* get_address_of_StartY_0() { return &___StartY_0; }
	inline void set_StartY_0(int32_t value)
	{
		___StartY_0 = value;
	}

	inline static int32_t get_offset_of_Scrolling_1() { return static_cast<int32_t>(offsetof(DragScroller_t1114648540_StaticFields, ___Scrolling_1)); }
	inline Element_t3532621832 * get_Scrolling_1() const { return ___Scrolling_1; }
	inline Element_t3532621832 ** get_address_of_Scrolling_1() { return &___Scrolling_1; }
	inline void set_Scrolling_1(Element_t3532621832 * value)
	{
		___Scrolling_1 = value;
		Il2CppCodeGenWriteBarrier(&___Scrolling_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
