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

// PowerUI.LinkTag
struct  LinkTag_t804993748  : public HtmlTagHandler_t2082879697
{
public:
	// System.Boolean PowerUI.LinkTag::IsCSS
	bool ___IsCSS_7;
	// System.String PowerUI.LinkTag::Href
	String_t* ___Href_8;
	// System.Int32 PowerUI.LinkTag::StyleIndex
	int32_t ___StyleIndex_9;

public:
	inline static int32_t get_offset_of_IsCSS_7() { return static_cast<int32_t>(offsetof(LinkTag_t804993748, ___IsCSS_7)); }
	inline bool get_IsCSS_7() const { return ___IsCSS_7; }
	inline bool* get_address_of_IsCSS_7() { return &___IsCSS_7; }
	inline void set_IsCSS_7(bool value)
	{
		___IsCSS_7 = value;
	}

	inline static int32_t get_offset_of_Href_8() { return static_cast<int32_t>(offsetof(LinkTag_t804993748, ___Href_8)); }
	inline String_t* get_Href_8() const { return ___Href_8; }
	inline String_t** get_address_of_Href_8() { return &___Href_8; }
	inline void set_Href_8(String_t* value)
	{
		___Href_8 = value;
		Il2CppCodeGenWriteBarrier(&___Href_8, value);
	}

	inline static int32_t get_offset_of_StyleIndex_9() { return static_cast<int32_t>(offsetof(LinkTag_t804993748, ___StyleIndex_9)); }
	inline int32_t get_StyleIndex_9() const { return ___StyleIndex_9; }
	inline int32_t* get_address_of_StyleIndex_9() { return &___StyleIndex_9; }
	inline void set_StyleIndex_9(int32_t value)
	{
		___StyleIndex_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
