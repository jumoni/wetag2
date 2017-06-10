#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,PowerUI.ImageFormat>
struct Dictionary_2_t3918808688;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.ImageFormats
struct  ImageFormats_t1696856339  : public Il2CppObject
{
public:

public:
};

struct ImageFormats_t1696856339_StaticFields
{
public:
	// System.String PowerUI.ImageFormats::UnrecognisedImageHandler
	String_t* ___UnrecognisedImageHandler_0;
	// System.Collections.Generic.Dictionary`2<System.String,PowerUI.ImageFormat> PowerUI.ImageFormats::Formats
	Dictionary_2_t3918808688 * ___Formats_1;

public:
	inline static int32_t get_offset_of_UnrecognisedImageHandler_0() { return static_cast<int32_t>(offsetof(ImageFormats_t1696856339_StaticFields, ___UnrecognisedImageHandler_0)); }
	inline String_t* get_UnrecognisedImageHandler_0() const { return ___UnrecognisedImageHandler_0; }
	inline String_t** get_address_of_UnrecognisedImageHandler_0() { return &___UnrecognisedImageHandler_0; }
	inline void set_UnrecognisedImageHandler_0(String_t* value)
	{
		___UnrecognisedImageHandler_0 = value;
		Il2CppCodeGenWriteBarrier(&___UnrecognisedImageHandler_0, value);
	}

	inline static int32_t get_offset_of_Formats_1() { return static_cast<int32_t>(offsetof(ImageFormats_t1696856339_StaticFields, ___Formats_1)); }
	inline Dictionary_2_t3918808688 * get_Formats_1() const { return ___Formats_1; }
	inline Dictionary_2_t3918808688 ** get_address_of_Formats_1() { return &___Formats_1; }
	inline void set_Formats_1(Dictionary_2_t3918808688 * value)
	{
		___Formats_1 = value;
		Il2CppCodeGenWriteBarrier(&___Formats_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
