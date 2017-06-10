#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_PowerUI_HtmlTagHandler2082879697.h"

// System.Collections.Generic.List`1<PowerUI.Css.ComputedStyle>
struct List_1_t334492894;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.TableTag
struct  TableTag_t2031289590  : public HtmlTagHandler_t2082879697
{
public:
	// System.Int32 PowerUI.TableTag::NoWidthPixels
	int32_t ___NoWidthPixels_7;
	// System.Collections.Generic.List`1<PowerUI.Css.ComputedStyle> PowerUI.TableTag::ColumnWidths
	List_1_t334492894 * ___ColumnWidths_8;

public:
	inline static int32_t get_offset_of_NoWidthPixels_7() { return static_cast<int32_t>(offsetof(TableTag_t2031289590, ___NoWidthPixels_7)); }
	inline int32_t get_NoWidthPixels_7() const { return ___NoWidthPixels_7; }
	inline int32_t* get_address_of_NoWidthPixels_7() { return &___NoWidthPixels_7; }
	inline void set_NoWidthPixels_7(int32_t value)
	{
		___NoWidthPixels_7 = value;
	}

	inline static int32_t get_offset_of_ColumnWidths_8() { return static_cast<int32_t>(offsetof(TableTag_t2031289590, ___ColumnWidths_8)); }
	inline List_1_t334492894 * get_ColumnWidths_8() const { return ___ColumnWidths_8; }
	inline List_1_t334492894 ** get_address_of_ColumnWidths_8() { return &___ColumnWidths_8; }
	inline void set_ColumnWidths_8(List_1_t334492894 * value)
	{
		___ColumnWidths_8 = value;
		Il2CppCodeGenWriteBarrier(&___ColumnWidths_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
