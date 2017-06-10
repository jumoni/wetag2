#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// Blaze.AtlasLocation[]
struct AtlasLocationU5BU5D_t3678565395;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.Css.StrokeData
struct  StrokeData_t3248062314  : public Il2CppObject
{
public:
	// System.Int32 PowerUI.Css.StrokeData::Blur
	int32_t ___Blur_0;
	// UnityEngine.Color PowerUI.Css.StrokeData::Colour
	Color_t2020392075  ___Colour_1;
	// System.Int32 PowerUI.Css.StrokeData::Thickness
	int32_t ___Thickness_2;
	// Blaze.AtlasLocation[] PowerUI.Css.StrokeData::Location
	AtlasLocationU5BU5D_t3678565395* ___Location_3;

public:
	inline static int32_t get_offset_of_Blur_0() { return static_cast<int32_t>(offsetof(StrokeData_t3248062314, ___Blur_0)); }
	inline int32_t get_Blur_0() const { return ___Blur_0; }
	inline int32_t* get_address_of_Blur_0() { return &___Blur_0; }
	inline void set_Blur_0(int32_t value)
	{
		___Blur_0 = value;
	}

	inline static int32_t get_offset_of_Colour_1() { return static_cast<int32_t>(offsetof(StrokeData_t3248062314, ___Colour_1)); }
	inline Color_t2020392075  get_Colour_1() const { return ___Colour_1; }
	inline Color_t2020392075 * get_address_of_Colour_1() { return &___Colour_1; }
	inline void set_Colour_1(Color_t2020392075  value)
	{
		___Colour_1 = value;
	}

	inline static int32_t get_offset_of_Thickness_2() { return static_cast<int32_t>(offsetof(StrokeData_t3248062314, ___Thickness_2)); }
	inline int32_t get_Thickness_2() const { return ___Thickness_2; }
	inline int32_t* get_address_of_Thickness_2() { return &___Thickness_2; }
	inline void set_Thickness_2(int32_t value)
	{
		___Thickness_2 = value;
	}

	inline static int32_t get_offset_of_Location_3() { return static_cast<int32_t>(offsetof(StrokeData_t3248062314, ___Location_3)); }
	inline AtlasLocationU5BU5D_t3678565395* get_Location_3() const { return ___Location_3; }
	inline AtlasLocationU5BU5D_t3678565395** get_address_of_Location_3() { return &___Location_3; }
	inline void set_Location_3(AtlasLocationU5BU5D_t3678565395* value)
	{
		___Location_3 = value;
		Il2CppCodeGenWriteBarrier(&___Location_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
