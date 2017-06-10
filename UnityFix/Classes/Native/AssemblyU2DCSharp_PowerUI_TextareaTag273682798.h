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
// PowerUI.Element
struct Element_t3532621832;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.TextareaTag
struct  TextareaTag_t273682798  : public HtmlTagHandler_t2082879697
{
public:
	// System.String PowerUI.TextareaTag::Value
	String_t* ___Value_7;
	// PowerUI.Element PowerUI.TextareaTag::Cursor
	Element_t3532621832 * ___Cursor_8;
	// System.Int32 PowerUI.TextareaTag::CursorIndex
	int32_t ___CursorIndex_9;
	// System.Boolean PowerUI.TextareaTag::LocateCursor
	bool ___LocateCursor_10;
	// System.Int32 PowerUI.TextareaTag::MaxLength
	int32_t ___MaxLength_11;

public:
	inline static int32_t get_offset_of_Value_7() { return static_cast<int32_t>(offsetof(TextareaTag_t273682798, ___Value_7)); }
	inline String_t* get_Value_7() const { return ___Value_7; }
	inline String_t** get_address_of_Value_7() { return &___Value_7; }
	inline void set_Value_7(String_t* value)
	{
		___Value_7 = value;
		Il2CppCodeGenWriteBarrier(&___Value_7, value);
	}

	inline static int32_t get_offset_of_Cursor_8() { return static_cast<int32_t>(offsetof(TextareaTag_t273682798, ___Cursor_8)); }
	inline Element_t3532621832 * get_Cursor_8() const { return ___Cursor_8; }
	inline Element_t3532621832 ** get_address_of_Cursor_8() { return &___Cursor_8; }
	inline void set_Cursor_8(Element_t3532621832 * value)
	{
		___Cursor_8 = value;
		Il2CppCodeGenWriteBarrier(&___Cursor_8, value);
	}

	inline static int32_t get_offset_of_CursorIndex_9() { return static_cast<int32_t>(offsetof(TextareaTag_t273682798, ___CursorIndex_9)); }
	inline int32_t get_CursorIndex_9() const { return ___CursorIndex_9; }
	inline int32_t* get_address_of_CursorIndex_9() { return &___CursorIndex_9; }
	inline void set_CursorIndex_9(int32_t value)
	{
		___CursorIndex_9 = value;
	}

	inline static int32_t get_offset_of_LocateCursor_10() { return static_cast<int32_t>(offsetof(TextareaTag_t273682798, ___LocateCursor_10)); }
	inline bool get_LocateCursor_10() const { return ___LocateCursor_10; }
	inline bool* get_address_of_LocateCursor_10() { return &___LocateCursor_10; }
	inline void set_LocateCursor_10(bool value)
	{
		___LocateCursor_10 = value;
	}

	inline static int32_t get_offset_of_MaxLength_11() { return static_cast<int32_t>(offsetof(TextareaTag_t273682798, ___MaxLength_11)); }
	inline int32_t get_MaxLength_11() const { return ___MaxLength_11; }
	inline int32_t* get_address_of_MaxLength_11() { return &___MaxLength_11; }
	inline void set_MaxLength_11(int32_t value)
	{
		___MaxLength_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
