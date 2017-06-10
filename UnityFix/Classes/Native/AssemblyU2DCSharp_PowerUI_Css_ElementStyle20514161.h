#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_PowerUI_Css_Style3877578303.h"

// PowerUI.Css.ElementStyle
struct ElementStyle_t20514161;
// PowerUI.Css.ComputedStyle
struct ComputedStyle_t965371762;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.Css.ElementStyle
struct  ElementStyle_t20514161  : public Style_t3877578303
{
public:
	// System.Boolean PowerUI.Css.ElementStyle::IsPainting
	bool ___IsPainting_3;
	// PowerUI.Css.ElementStyle PowerUI.Css.ElementStyle::Next
	ElementStyle_t20514161 * ___Next_4;
	// PowerUI.Css.ComputedStyle PowerUI.Css.ElementStyle::Computed
	ComputedStyle_t965371762 * ___Computed_5;

public:
	inline static int32_t get_offset_of_IsPainting_3() { return static_cast<int32_t>(offsetof(ElementStyle_t20514161, ___IsPainting_3)); }
	inline bool get_IsPainting_3() const { return ___IsPainting_3; }
	inline bool* get_address_of_IsPainting_3() { return &___IsPainting_3; }
	inline void set_IsPainting_3(bool value)
	{
		___IsPainting_3 = value;
	}

	inline static int32_t get_offset_of_Next_4() { return static_cast<int32_t>(offsetof(ElementStyle_t20514161, ___Next_4)); }
	inline ElementStyle_t20514161 * get_Next_4() const { return ___Next_4; }
	inline ElementStyle_t20514161 ** get_address_of_Next_4() { return &___Next_4; }
	inline void set_Next_4(ElementStyle_t20514161 * value)
	{
		___Next_4 = value;
		Il2CppCodeGenWriteBarrier(&___Next_4, value);
	}

	inline static int32_t get_offset_of_Computed_5() { return static_cast<int32_t>(offsetof(ElementStyle_t20514161, ___Computed_5)); }
	inline ComputedStyle_t965371762 * get_Computed_5() const { return ___Computed_5; }
	inline ComputedStyle_t965371762 ** get_address_of_Computed_5() { return &___Computed_5; }
	inline void set_Computed_5(ComputedStyle_t965371762 * value)
	{
		___Computed_5 = value;
		Il2CppCodeGenWriteBarrier(&___Computed_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
