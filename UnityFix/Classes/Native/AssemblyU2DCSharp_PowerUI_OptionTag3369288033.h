#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_PowerUI_HtmlTagHandler2082879697.h"

// PowerUI.SelectTag
struct SelectTag_t2947259156;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.OptionTag
struct  OptionTag_t3369288033  : public HtmlTagHandler_t2082879697
{
public:
	// System.Boolean PowerUI.OptionTag::Selected
	bool ___Selected_7;
	// System.Boolean PowerUI.OptionTag::FullyLoaded
	bool ___FullyLoaded_8;
	// PowerUI.SelectTag PowerUI.OptionTag::Dropdown
	SelectTag_t2947259156 * ___Dropdown_9;

public:
	inline static int32_t get_offset_of_Selected_7() { return static_cast<int32_t>(offsetof(OptionTag_t3369288033, ___Selected_7)); }
	inline bool get_Selected_7() const { return ___Selected_7; }
	inline bool* get_address_of_Selected_7() { return &___Selected_7; }
	inline void set_Selected_7(bool value)
	{
		___Selected_7 = value;
	}

	inline static int32_t get_offset_of_FullyLoaded_8() { return static_cast<int32_t>(offsetof(OptionTag_t3369288033, ___FullyLoaded_8)); }
	inline bool get_FullyLoaded_8() const { return ___FullyLoaded_8; }
	inline bool* get_address_of_FullyLoaded_8() { return &___FullyLoaded_8; }
	inline void set_FullyLoaded_8(bool value)
	{
		___FullyLoaded_8 = value;
	}

	inline static int32_t get_offset_of_Dropdown_9() { return static_cast<int32_t>(offsetof(OptionTag_t3369288033, ___Dropdown_9)); }
	inline SelectTag_t2947259156 * get_Dropdown_9() const { return ___Dropdown_9; }
	inline SelectTag_t2947259156 ** get_address_of_Dropdown_9() { return &___Dropdown_9; }
	inline void set_Dropdown_9(SelectTag_t2947259156 * value)
	{
		___Dropdown_9 = value;
		Il2CppCodeGenWriteBarrier(&___Dropdown_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
