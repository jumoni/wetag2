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
// FaceRectangle
struct FaceRectangle_t2122599446;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RecogItem
struct  RecogItem_t3422469283  : public Il2CppObject
{
public:
	// System.String RecogItem::name
	String_t* ___name_0;
	// FaceRectangle RecogItem::faceRectangle
	FaceRectangle_t2122599446 * ___faceRectangle_1;
	// System.Double RecogItem::confidence
	double ___confidence_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(RecogItem_t3422469283, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_faceRectangle_1() { return static_cast<int32_t>(offsetof(RecogItem_t3422469283, ___faceRectangle_1)); }
	inline FaceRectangle_t2122599446 * get_faceRectangle_1() const { return ___faceRectangle_1; }
	inline FaceRectangle_t2122599446 ** get_address_of_faceRectangle_1() { return &___faceRectangle_1; }
	inline void set_faceRectangle_1(FaceRectangle_t2122599446 * value)
	{
		___faceRectangle_1 = value;
		Il2CppCodeGenWriteBarrier(&___faceRectangle_1, value);
	}

	inline static int32_t get_offset_of_confidence_2() { return static_cast<int32_t>(offsetof(RecogItem_t3422469283, ___confidence_2)); }
	inline double get_confidence_2() const { return ___confidence_2; }
	inline double* get_address_of_confidence_2() { return &___confidence_2; }
	inline void set_confidence_2(double value)
	{
		___confidence_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
