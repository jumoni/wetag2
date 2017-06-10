#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_PowerUI_HtmlTagHandler2082879697.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.ScriptTag
struct  ScriptTag_t1178945483  : public HtmlTagHandler_t2082879697
{
public:
	// System.Boolean PowerUI.ScriptTag::Dump
	bool ___Dump_7;
	// System.String PowerUI.ScriptTag::Src
	String_t* ___Src_8;
	// System.Boolean PowerUI.ScriptTag::Loaded
	bool ___Loaded_9;
	// System.Int32 PowerUI.ScriptTag::CodeIndex
	int32_t ___CodeIndex_10;

public:
	inline static int32_t get_offset_of_Dump_7() { return static_cast<int32_t>(offsetof(ScriptTag_t1178945483, ___Dump_7)); }
	inline bool get_Dump_7() const { return ___Dump_7; }
	inline bool* get_address_of_Dump_7() { return &___Dump_7; }
	inline void set_Dump_7(bool value)
	{
		___Dump_7 = value;
	}

	inline static int32_t get_offset_of_Src_8() { return static_cast<int32_t>(offsetof(ScriptTag_t1178945483, ___Src_8)); }
	inline String_t* get_Src_8() const { return ___Src_8; }
	inline String_t** get_address_of_Src_8() { return &___Src_8; }
	inline void set_Src_8(String_t* value)
	{
		___Src_8 = value;
		Il2CppCodeGenWriteBarrier(&___Src_8, value);
	}

	inline static int32_t get_offset_of_Loaded_9() { return static_cast<int32_t>(offsetof(ScriptTag_t1178945483, ___Loaded_9)); }
	inline bool get_Loaded_9() const { return ___Loaded_9; }
	inline bool* get_address_of_Loaded_9() { return &___Loaded_9; }
	inline void set_Loaded_9(bool value)
	{
		___Loaded_9 = value;
	}

	inline static int32_t get_offset_of_CodeIndex_10() { return static_cast<int32_t>(offsetof(ScriptTag_t1178945483, ___CodeIndex_10)); }
	inline int32_t get_CodeIndex_10() const { return ___CodeIndex_10; }
	inline int32_t* get_address_of_CodeIndex_10() { return &___CodeIndex_10; }
	inline void set_CodeIndex_10(int32_t value)
	{
		___CodeIndex_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
