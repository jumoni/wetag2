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
#include "AssemblyU2DCSharp_PowerUI_Css_TextLineType368933807.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.Css.TextDecorationInfo
struct  TextDecorationInfo_t1386805745  : public Il2CppObject
{
public:
	// UnityEngine.Color PowerUI.Css.TextDecorationInfo::Colour
	Color_t2020392075  ___Colour_0;
	// UnityEngine.Color PowerUI.Css.TextDecorationInfo::BaseColour
	Color_t2020392075  ___BaseColour_1;
	// PowerUI.Css.TextLineType PowerUI.Css.TextDecorationInfo::Type
	int32_t ___Type_2;
	// System.Boolean PowerUI.Css.TextDecorationInfo::ColourOverride
	bool ___ColourOverride_3;

public:
	inline static int32_t get_offset_of_Colour_0() { return static_cast<int32_t>(offsetof(TextDecorationInfo_t1386805745, ___Colour_0)); }
	inline Color_t2020392075  get_Colour_0() const { return ___Colour_0; }
	inline Color_t2020392075 * get_address_of_Colour_0() { return &___Colour_0; }
	inline void set_Colour_0(Color_t2020392075  value)
	{
		___Colour_0 = value;
	}

	inline static int32_t get_offset_of_BaseColour_1() { return static_cast<int32_t>(offsetof(TextDecorationInfo_t1386805745, ___BaseColour_1)); }
	inline Color_t2020392075  get_BaseColour_1() const { return ___BaseColour_1; }
	inline Color_t2020392075 * get_address_of_BaseColour_1() { return &___BaseColour_1; }
	inline void set_BaseColour_1(Color_t2020392075  value)
	{
		___BaseColour_1 = value;
	}

	inline static int32_t get_offset_of_Type_2() { return static_cast<int32_t>(offsetof(TextDecorationInfo_t1386805745, ___Type_2)); }
	inline int32_t get_Type_2() const { return ___Type_2; }
	inline int32_t* get_address_of_Type_2() { return &___Type_2; }
	inline void set_Type_2(int32_t value)
	{
		___Type_2 = value;
	}

	inline static int32_t get_offset_of_ColourOverride_3() { return static_cast<int32_t>(offsetof(TextDecorationInfo_t1386805745, ___ColourOverride_3)); }
	inline bool get_ColourOverride_3() const { return ___ColourOverride_3; }
	inline bool* get_address_of_ColourOverride_3() { return &___ColourOverride_3; }
	inline void set_ColourOverride_3(bool value)
	{
		___ColourOverride_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
