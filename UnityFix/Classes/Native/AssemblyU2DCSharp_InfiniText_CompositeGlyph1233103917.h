#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_InfiniText_Glyph1486063204.h"

// Blaze.VectorTransform
struct VectorTransform_t425043297;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InfiniText.CompositeGlyph
struct  CompositeGlyph_t1233103917  : public Glyph_t1486063204
{
public:
	// Blaze.VectorTransform InfiniText.CompositeGlyph::LastComponent
	VectorTransform_t425043297 * ___LastComponent_18;
	// Blaze.VectorTransform InfiniText.CompositeGlyph::FirstComponent
	VectorTransform_t425043297 * ___FirstComponent_19;

public:
	inline static int32_t get_offset_of_LastComponent_18() { return static_cast<int32_t>(offsetof(CompositeGlyph_t1233103917, ___LastComponent_18)); }
	inline VectorTransform_t425043297 * get_LastComponent_18() const { return ___LastComponent_18; }
	inline VectorTransform_t425043297 ** get_address_of_LastComponent_18() { return &___LastComponent_18; }
	inline void set_LastComponent_18(VectorTransform_t425043297 * value)
	{
		___LastComponent_18 = value;
		Il2CppCodeGenWriteBarrier(&___LastComponent_18, value);
	}

	inline static int32_t get_offset_of_FirstComponent_19() { return static_cast<int32_t>(offsetof(CompositeGlyph_t1233103917, ___FirstComponent_19)); }
	inline VectorTransform_t425043297 * get_FirstComponent_19() const { return ___FirstComponent_19; }
	inline VectorTransform_t425043297 ** get_address_of_FirstComponent_19() { return &___FirstComponent_19; }
	inline void set_FirstComponent_19(VectorTransform_t425043297 * value)
	{
		___FirstComponent_19 = value;
		Il2CppCodeGenWriteBarrier(&___FirstComponent_19, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
