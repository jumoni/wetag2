#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// UnityEngine.Color[]
struct ColorU5BU5D_t672350442;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BitmapData
struct  BitmapData_t4159927297  : public Il2CppObject
{
public:
	// System.Int32 BitmapData::height
	int32_t ___height_0;
	// System.Int32 BitmapData::width
	int32_t ___width_1;
	// UnityEngine.Color[] BitmapData::pixels
	ColorU5BU5D_t672350442* ___pixels_2;

public:
	inline static int32_t get_offset_of_height_0() { return static_cast<int32_t>(offsetof(BitmapData_t4159927297, ___height_0)); }
	inline int32_t get_height_0() const { return ___height_0; }
	inline int32_t* get_address_of_height_0() { return &___height_0; }
	inline void set_height_0(int32_t value)
	{
		___height_0 = value;
	}

	inline static int32_t get_offset_of_width_1() { return static_cast<int32_t>(offsetof(BitmapData_t4159927297, ___width_1)); }
	inline int32_t get_width_1() const { return ___width_1; }
	inline int32_t* get_address_of_width_1() { return &___width_1; }
	inline void set_width_1(int32_t value)
	{
		___width_1 = value;
	}

	inline static int32_t get_offset_of_pixels_2() { return static_cast<int32_t>(offsetof(BitmapData_t4159927297, ___pixels_2)); }
	inline ColorU5BU5D_t672350442* get_pixels_2() const { return ___pixels_2; }
	inline ColorU5BU5D_t672350442** get_address_of_pixels_2() { return &___pixels_2; }
	inline void set_pixels_2(ColorU5BU5D_t672350442* value)
	{
		___pixels_2 = value;
		Il2CppCodeGenWriteBarrier(&___pixels_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
