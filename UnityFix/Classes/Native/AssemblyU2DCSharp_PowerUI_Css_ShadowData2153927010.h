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

// PowerUI.Css.ShadowData
struct  ShadowData_t2153927010  : public Il2CppObject
{
public:
	// System.Int32 PowerUI.Css.ShadowData::Blur
	int32_t ___Blur_0;
	// System.Int32 PowerUI.Css.ShadowData::HOffset
	int32_t ___HOffset_1;
	// System.Int32 PowerUI.Css.ShadowData::VOffset
	int32_t ___VOffset_2;
	// UnityEngine.Color PowerUI.Css.ShadowData::Colour
	Color_t2020392075  ___Colour_3;
	// Blaze.AtlasLocation[] PowerUI.Css.ShadowData::Location
	AtlasLocationU5BU5D_t3678565395* ___Location_4;

public:
	inline static int32_t get_offset_of_Blur_0() { return static_cast<int32_t>(offsetof(ShadowData_t2153927010, ___Blur_0)); }
	inline int32_t get_Blur_0() const { return ___Blur_0; }
	inline int32_t* get_address_of_Blur_0() { return &___Blur_0; }
	inline void set_Blur_0(int32_t value)
	{
		___Blur_0 = value;
	}

	inline static int32_t get_offset_of_HOffset_1() { return static_cast<int32_t>(offsetof(ShadowData_t2153927010, ___HOffset_1)); }
	inline int32_t get_HOffset_1() const { return ___HOffset_1; }
	inline int32_t* get_address_of_HOffset_1() { return &___HOffset_1; }
	inline void set_HOffset_1(int32_t value)
	{
		___HOffset_1 = value;
	}

	inline static int32_t get_offset_of_VOffset_2() { return static_cast<int32_t>(offsetof(ShadowData_t2153927010, ___VOffset_2)); }
	inline int32_t get_VOffset_2() const { return ___VOffset_2; }
	inline int32_t* get_address_of_VOffset_2() { return &___VOffset_2; }
	inline void set_VOffset_2(int32_t value)
	{
		___VOffset_2 = value;
	}

	inline static int32_t get_offset_of_Colour_3() { return static_cast<int32_t>(offsetof(ShadowData_t2153927010, ___Colour_3)); }
	inline Color_t2020392075  get_Colour_3() const { return ___Colour_3; }
	inline Color_t2020392075 * get_address_of_Colour_3() { return &___Colour_3; }
	inline void set_Colour_3(Color_t2020392075  value)
	{
		___Colour_3 = value;
	}

	inline static int32_t get_offset_of_Location_4() { return static_cast<int32_t>(offsetof(ShadowData_t2153927010, ___Location_4)); }
	inline AtlasLocationU5BU5D_t3678565395* get_Location_4() const { return ___Location_4; }
	inline AtlasLocationU5BU5D_t3678565395** get_address_of_Location_4() { return &___Location_4; }
	inline void set_Location_4(AtlasLocationU5BU5D_t3678565395* value)
	{
		___Location_4 = value;
		Il2CppCodeGenWriteBarrier(&___Location_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
