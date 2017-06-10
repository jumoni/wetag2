#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Single[]
struct SingleU5BU5D_t577127397;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InfiniText.GlyphPoint
struct  GlyphPoint_t1911136326  : public Il2CppObject
{
public:
	// System.Single InfiniText.GlyphPoint::X
	float ___X_0;
	// System.Single InfiniText.GlyphPoint::Y
	float ___Y_1;
	// System.Boolean InfiniText.GlyphPoint::Active
	bool ___Active_2;
	// System.Boolean InfiniText.GlyphPoint::OnCurve
	bool ___OnCurve_3;
	// System.Byte[] InfiniText.GlyphPoint::Flags
	ByteU5BU5D_t3397334013* ___Flags_4;
	// System.Single[] InfiniText.GlyphPoint::Coords
	SingleU5BU5D_t577127397* ___Coords_5;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(GlyphPoint_t1911136326, ___X_0)); }
	inline float get_X_0() const { return ___X_0; }
	inline float* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(float value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(GlyphPoint_t1911136326, ___Y_1)); }
	inline float get_Y_1() const { return ___Y_1; }
	inline float* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(float value)
	{
		___Y_1 = value;
	}

	inline static int32_t get_offset_of_Active_2() { return static_cast<int32_t>(offsetof(GlyphPoint_t1911136326, ___Active_2)); }
	inline bool get_Active_2() const { return ___Active_2; }
	inline bool* get_address_of_Active_2() { return &___Active_2; }
	inline void set_Active_2(bool value)
	{
		___Active_2 = value;
	}

	inline static int32_t get_offset_of_OnCurve_3() { return static_cast<int32_t>(offsetof(GlyphPoint_t1911136326, ___OnCurve_3)); }
	inline bool get_OnCurve_3() const { return ___OnCurve_3; }
	inline bool* get_address_of_OnCurve_3() { return &___OnCurve_3; }
	inline void set_OnCurve_3(bool value)
	{
		___OnCurve_3 = value;
	}

	inline static int32_t get_offset_of_Flags_4() { return static_cast<int32_t>(offsetof(GlyphPoint_t1911136326, ___Flags_4)); }
	inline ByteU5BU5D_t3397334013* get_Flags_4() const { return ___Flags_4; }
	inline ByteU5BU5D_t3397334013** get_address_of_Flags_4() { return &___Flags_4; }
	inline void set_Flags_4(ByteU5BU5D_t3397334013* value)
	{
		___Flags_4 = value;
		Il2CppCodeGenWriteBarrier(&___Flags_4, value);
	}

	inline static int32_t get_offset_of_Coords_5() { return static_cast<int32_t>(offsetof(GlyphPoint_t1911136326, ___Coords_5)); }
	inline SingleU5BU5D_t577127397* get_Coords_5() const { return ___Coords_5; }
	inline SingleU5BU5D_t577127397** get_address_of_Coords_5() { return &___Coords_5; }
	inline void set_Coords_5(SingleU5BU5D_t577127397* value)
	{
		___Coords_5 = value;
		Il2CppCodeGenWriteBarrier(&___Coords_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
