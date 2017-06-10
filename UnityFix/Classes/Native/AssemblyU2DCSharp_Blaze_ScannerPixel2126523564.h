#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Blaze.ScannerPixel
struct ScannerPixel_t2126523564;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Blaze.ScannerPixel
struct  ScannerPixel_t2126523564  : public Il2CppObject
{
public:
	// System.Single Blaze.ScannerPixel::X
	float ___X_0;
	// System.Byte Blaze.ScannerPixel::Fill
	uint8_t ___Fill_1;
	// Blaze.ScannerPixel Blaze.ScannerPixel::Next
	ScannerPixel_t2126523564 * ___Next_2;
	// Blaze.ScannerPixel Blaze.ScannerPixel::Previous
	ScannerPixel_t2126523564 * ___Previous_3;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(ScannerPixel_t2126523564, ___X_0)); }
	inline float get_X_0() const { return ___X_0; }
	inline float* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(float value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Fill_1() { return static_cast<int32_t>(offsetof(ScannerPixel_t2126523564, ___Fill_1)); }
	inline uint8_t get_Fill_1() const { return ___Fill_1; }
	inline uint8_t* get_address_of_Fill_1() { return &___Fill_1; }
	inline void set_Fill_1(uint8_t value)
	{
		___Fill_1 = value;
	}

	inline static int32_t get_offset_of_Next_2() { return static_cast<int32_t>(offsetof(ScannerPixel_t2126523564, ___Next_2)); }
	inline ScannerPixel_t2126523564 * get_Next_2() const { return ___Next_2; }
	inline ScannerPixel_t2126523564 ** get_address_of_Next_2() { return &___Next_2; }
	inline void set_Next_2(ScannerPixel_t2126523564 * value)
	{
		___Next_2 = value;
		Il2CppCodeGenWriteBarrier(&___Next_2, value);
	}

	inline static int32_t get_offset_of_Previous_3() { return static_cast<int32_t>(offsetof(ScannerPixel_t2126523564, ___Previous_3)); }
	inline ScannerPixel_t2126523564 * get_Previous_3() const { return ___Previous_3; }
	inline ScannerPixel_t2126523564 ** get_address_of_Previous_3() { return &___Previous_3; }
	inline void set_Previous_3(ScannerPixel_t2126523564 * value)
	{
		___Previous_3 = value;
		Il2CppCodeGenWriteBarrier(&___Previous_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
