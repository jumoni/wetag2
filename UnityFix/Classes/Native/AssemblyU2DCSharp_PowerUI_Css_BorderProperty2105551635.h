#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_PowerUI_Css_DisplayableProperty2567878243.h"
#include "AssemblyU2DCSharp_PowerUI_Css_BorderStyle2639734463.h"

// UnityEngine.Color[]
struct ColorU5BU5D_t672350442;
// PowerUI.Css.Value
struct Value_t2499464907;
// PowerUI.Css.RoundedCorners
struct RoundedCorners_t1777809075;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.Css.BorderProperty
struct  BorderProperty_t2105551635  : public DisplayableProperty_t2567878243
{
public:
	// System.Int32 PowerUI.Css.BorderProperty::WidthTop
	int32_t ___WidthTop_7;
	// System.Int32 PowerUI.Css.BorderProperty::WidthLeft
	int32_t ___WidthLeft_8;
	// System.Int32 PowerUI.Css.BorderProperty::WidthRight
	int32_t ___WidthRight_9;
	// System.Int32 PowerUI.Css.BorderProperty::WidthBottom
	int32_t ___WidthBottom_10;
	// UnityEngine.Color[] PowerUI.Css.BorderProperty::Colour
	ColorU5BU5D_t672350442* ___Colour_11;
	// PowerUI.Css.Value PowerUI.Css.BorderProperty::BaseColour
	Value_t2499464907 * ___BaseColour_12;
	// PowerUI.Css.RoundedCorners PowerUI.Css.BorderProperty::Corners
	RoundedCorners_t1777809075 * ___Corners_13;
	// PowerUI.Css.BorderStyle PowerUI.Css.BorderProperty::Style
	int32_t ___Style_14;

public:
	inline static int32_t get_offset_of_WidthTop_7() { return static_cast<int32_t>(offsetof(BorderProperty_t2105551635, ___WidthTop_7)); }
	inline int32_t get_WidthTop_7() const { return ___WidthTop_7; }
	inline int32_t* get_address_of_WidthTop_7() { return &___WidthTop_7; }
	inline void set_WidthTop_7(int32_t value)
	{
		___WidthTop_7 = value;
	}

	inline static int32_t get_offset_of_WidthLeft_8() { return static_cast<int32_t>(offsetof(BorderProperty_t2105551635, ___WidthLeft_8)); }
	inline int32_t get_WidthLeft_8() const { return ___WidthLeft_8; }
	inline int32_t* get_address_of_WidthLeft_8() { return &___WidthLeft_8; }
	inline void set_WidthLeft_8(int32_t value)
	{
		___WidthLeft_8 = value;
	}

	inline static int32_t get_offset_of_WidthRight_9() { return static_cast<int32_t>(offsetof(BorderProperty_t2105551635, ___WidthRight_9)); }
	inline int32_t get_WidthRight_9() const { return ___WidthRight_9; }
	inline int32_t* get_address_of_WidthRight_9() { return &___WidthRight_9; }
	inline void set_WidthRight_9(int32_t value)
	{
		___WidthRight_9 = value;
	}

	inline static int32_t get_offset_of_WidthBottom_10() { return static_cast<int32_t>(offsetof(BorderProperty_t2105551635, ___WidthBottom_10)); }
	inline int32_t get_WidthBottom_10() const { return ___WidthBottom_10; }
	inline int32_t* get_address_of_WidthBottom_10() { return &___WidthBottom_10; }
	inline void set_WidthBottom_10(int32_t value)
	{
		___WidthBottom_10 = value;
	}

	inline static int32_t get_offset_of_Colour_11() { return static_cast<int32_t>(offsetof(BorderProperty_t2105551635, ___Colour_11)); }
	inline ColorU5BU5D_t672350442* get_Colour_11() const { return ___Colour_11; }
	inline ColorU5BU5D_t672350442** get_address_of_Colour_11() { return &___Colour_11; }
	inline void set_Colour_11(ColorU5BU5D_t672350442* value)
	{
		___Colour_11 = value;
		Il2CppCodeGenWriteBarrier(&___Colour_11, value);
	}

	inline static int32_t get_offset_of_BaseColour_12() { return static_cast<int32_t>(offsetof(BorderProperty_t2105551635, ___BaseColour_12)); }
	inline Value_t2499464907 * get_BaseColour_12() const { return ___BaseColour_12; }
	inline Value_t2499464907 ** get_address_of_BaseColour_12() { return &___BaseColour_12; }
	inline void set_BaseColour_12(Value_t2499464907 * value)
	{
		___BaseColour_12 = value;
		Il2CppCodeGenWriteBarrier(&___BaseColour_12, value);
	}

	inline static int32_t get_offset_of_Corners_13() { return static_cast<int32_t>(offsetof(BorderProperty_t2105551635, ___Corners_13)); }
	inline RoundedCorners_t1777809075 * get_Corners_13() const { return ___Corners_13; }
	inline RoundedCorners_t1777809075 ** get_address_of_Corners_13() { return &___Corners_13; }
	inline void set_Corners_13(RoundedCorners_t1777809075 * value)
	{
		___Corners_13 = value;
		Il2CppCodeGenWriteBarrier(&___Corners_13, value);
	}

	inline static int32_t get_offset_of_Style_14() { return static_cast<int32_t>(offsetof(BorderProperty_t2105551635, ___Style_14)); }
	inline int32_t get_Style_14() const { return ___Style_14; }
	inline int32_t* get_address_of_Style_14() { return &___Style_14; }
	inline void set_Style_14(int32_t value)
	{
		___Style_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
