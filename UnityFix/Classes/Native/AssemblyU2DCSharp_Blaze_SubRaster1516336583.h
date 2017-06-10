#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Blaze.SubScanPixel[][]
struct SubScanPixelU5BU5DU5BU5D_t2115008995;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Blaze.SubRaster
struct  SubRaster_t1516336583  : public Il2CppObject
{
public:
	// System.Int32 Blaze.SubRaster::Width
	int32_t ___Width_0;
	// Blaze.SubScanPixel[][] Blaze.SubRaster::Intersects
	SubScanPixelU5BU5DU5BU5D_t2115008995* ___Intersects_1;

public:
	inline static int32_t get_offset_of_Width_0() { return static_cast<int32_t>(offsetof(SubRaster_t1516336583, ___Width_0)); }
	inline int32_t get_Width_0() const { return ___Width_0; }
	inline int32_t* get_address_of_Width_0() { return &___Width_0; }
	inline void set_Width_0(int32_t value)
	{
		___Width_0 = value;
	}

	inline static int32_t get_offset_of_Intersects_1() { return static_cast<int32_t>(offsetof(SubRaster_t1516336583, ___Intersects_1)); }
	inline SubScanPixelU5BU5DU5BU5D_t2115008995* get_Intersects_1() const { return ___Intersects_1; }
	inline SubScanPixelU5BU5DU5BU5D_t2115008995** get_address_of_Intersects_1() { return &___Intersects_1; }
	inline void set_Intersects_1(SubScanPixelU5BU5DU5BU5D_t2115008995* value)
	{
		___Intersects_1 = value;
		Il2CppCodeGenWriteBarrier(&___Intersects_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
