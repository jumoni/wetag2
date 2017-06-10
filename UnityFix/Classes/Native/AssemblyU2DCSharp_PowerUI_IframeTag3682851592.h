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
// PowerUI.Document
struct Document_t1565145681;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.IframeTag
struct  IframeTag_t3682851592  : public HtmlTagHandler_t2082879697
{
public:
	// System.String PowerUI.IframeTag::Src
	String_t* ___Src_7;
	// System.Boolean PowerUI.IframeTag::Loaded
	bool ___Loaded_8;
	// PowerUI.Document PowerUI.IframeTag::ContentDocument
	Document_t1565145681 * ___ContentDocument_9;

public:
	inline static int32_t get_offset_of_Src_7() { return static_cast<int32_t>(offsetof(IframeTag_t3682851592, ___Src_7)); }
	inline String_t* get_Src_7() const { return ___Src_7; }
	inline String_t** get_address_of_Src_7() { return &___Src_7; }
	inline void set_Src_7(String_t* value)
	{
		___Src_7 = value;
		Il2CppCodeGenWriteBarrier(&___Src_7, value);
	}

	inline static int32_t get_offset_of_Loaded_8() { return static_cast<int32_t>(offsetof(IframeTag_t3682851592, ___Loaded_8)); }
	inline bool get_Loaded_8() const { return ___Loaded_8; }
	inline bool* get_address_of_Loaded_8() { return &___Loaded_8; }
	inline void set_Loaded_8(bool value)
	{
		___Loaded_8 = value;
	}

	inline static int32_t get_offset_of_ContentDocument_9() { return static_cast<int32_t>(offsetof(IframeTag_t3682851592, ___ContentDocument_9)); }
	inline Document_t1565145681 * get_ContentDocument_9() const { return ___ContentDocument_9; }
	inline Document_t1565145681 ** get_address_of_ContentDocument_9() { return &___ContentDocument_9; }
	inline void set_ContentDocument_9(Document_t1565145681 * value)
	{
		___ContentDocument_9 = value;
		Il2CppCodeGenWriteBarrier(&___ContentDocument_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
