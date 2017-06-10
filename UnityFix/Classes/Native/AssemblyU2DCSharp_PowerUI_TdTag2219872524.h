#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_PowerUI_HtmlTagHandler2082879697.h"

// PowerUI.TableTag
struct TableTag_t2031289590;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.TdTag
struct  TdTag_t2219872524  : public HtmlTagHandler_t2082879697
{
public:
	// System.Int32 PowerUI.TdTag::Column
	int32_t ___Column_7;
	// PowerUI.TableTag PowerUI.TdTag::Table
	TableTag_t2031289590 * ___Table_8;

public:
	inline static int32_t get_offset_of_Column_7() { return static_cast<int32_t>(offsetof(TdTag_t2219872524, ___Column_7)); }
	inline int32_t get_Column_7() const { return ___Column_7; }
	inline int32_t* get_address_of_Column_7() { return &___Column_7; }
	inline void set_Column_7(int32_t value)
	{
		___Column_7 = value;
	}

	inline static int32_t get_offset_of_Table_8() { return static_cast<int32_t>(offsetof(TdTag_t2219872524, ___Table_8)); }
	inline TableTag_t2031289590 * get_Table_8() const { return ___Table_8; }
	inline TableTag_t2031289590 ** get_address_of_Table_8() { return &___Table_8; }
	inline void set_Table_8(TableTag_t2031289590 * value)
	{
		___Table_8 = value;
		Il2CppCodeGenWriteBarrier(&___Table_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
