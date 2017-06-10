#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_PowerUI_DynamicTexture3994024308.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// System.Int32[]
struct Int32U5BU5D_t3030399641;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerBar
struct  PowerBar_t2056144246  : public DynamicTexture_t3994024308
{
public:
	// System.Single PowerBar::Power
	float ___Power_10;
	// System.Int32 PowerBar::PixelLines
	int32_t ___PixelLines_11;
	// UnityEngine.Color PowerBar::LitColour
	Color_t2020392075  ___LitColour_12;
	// UnityEngine.Color PowerBar::UnlitColour
	Color_t2020392075  ___UnlitColour_13;
	// System.Int32[] PowerBar::HalfCircleY
	Int32U5BU5D_t3030399641* ___HalfCircleY_14;

public:
	inline static int32_t get_offset_of_Power_10() { return static_cast<int32_t>(offsetof(PowerBar_t2056144246, ___Power_10)); }
	inline float get_Power_10() const { return ___Power_10; }
	inline float* get_address_of_Power_10() { return &___Power_10; }
	inline void set_Power_10(float value)
	{
		___Power_10 = value;
	}

	inline static int32_t get_offset_of_PixelLines_11() { return static_cast<int32_t>(offsetof(PowerBar_t2056144246, ___PixelLines_11)); }
	inline int32_t get_PixelLines_11() const { return ___PixelLines_11; }
	inline int32_t* get_address_of_PixelLines_11() { return &___PixelLines_11; }
	inline void set_PixelLines_11(int32_t value)
	{
		___PixelLines_11 = value;
	}

	inline static int32_t get_offset_of_LitColour_12() { return static_cast<int32_t>(offsetof(PowerBar_t2056144246, ___LitColour_12)); }
	inline Color_t2020392075  get_LitColour_12() const { return ___LitColour_12; }
	inline Color_t2020392075 * get_address_of_LitColour_12() { return &___LitColour_12; }
	inline void set_LitColour_12(Color_t2020392075  value)
	{
		___LitColour_12 = value;
	}

	inline static int32_t get_offset_of_UnlitColour_13() { return static_cast<int32_t>(offsetof(PowerBar_t2056144246, ___UnlitColour_13)); }
	inline Color_t2020392075  get_UnlitColour_13() const { return ___UnlitColour_13; }
	inline Color_t2020392075 * get_address_of_UnlitColour_13() { return &___UnlitColour_13; }
	inline void set_UnlitColour_13(Color_t2020392075  value)
	{
		___UnlitColour_13 = value;
	}

	inline static int32_t get_offset_of_HalfCircleY_14() { return static_cast<int32_t>(offsetof(PowerBar_t2056144246, ___HalfCircleY_14)); }
	inline Int32U5BU5D_t3030399641* get_HalfCircleY_14() const { return ___HalfCircleY_14; }
	inline Int32U5BU5D_t3030399641** get_address_of_HalfCircleY_14() { return &___HalfCircleY_14; }
	inline void set_HalfCircleY_14(Int32U5BU5D_t3030399641* value)
	{
		___HalfCircleY_14 = value;
		Il2CppCodeGenWriteBarrier(&___HalfCircleY_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
