#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Blaze.Scanner
struct Scanner_t1141787724;
// Blaze.ScannerPixel
struct ScannerPixel_t2126523564;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Blaze.ScannerScanLine
struct  ScannerScanLine_t3254096987  : public Il2CppObject
{
public:
	// System.Int32 Blaze.ScannerScanLine::Count
	int32_t ___Count_0;
	// Blaze.Scanner Blaze.ScannerScanLine::Scanner
	Scanner_t1141787724 * ___Scanner_1;
	// Blaze.ScannerPixel Blaze.ScannerScanLine::Last
	ScannerPixel_t2126523564 * ___Last_2;
	// Blaze.ScannerPixel Blaze.ScannerScanLine::First
	ScannerPixel_t2126523564 * ___First_3;

public:
	inline static int32_t get_offset_of_Count_0() { return static_cast<int32_t>(offsetof(ScannerScanLine_t3254096987, ___Count_0)); }
	inline int32_t get_Count_0() const { return ___Count_0; }
	inline int32_t* get_address_of_Count_0() { return &___Count_0; }
	inline void set_Count_0(int32_t value)
	{
		___Count_0 = value;
	}

	inline static int32_t get_offset_of_Scanner_1() { return static_cast<int32_t>(offsetof(ScannerScanLine_t3254096987, ___Scanner_1)); }
	inline Scanner_t1141787724 * get_Scanner_1() const { return ___Scanner_1; }
	inline Scanner_t1141787724 ** get_address_of_Scanner_1() { return &___Scanner_1; }
	inline void set_Scanner_1(Scanner_t1141787724 * value)
	{
		___Scanner_1 = value;
		Il2CppCodeGenWriteBarrier(&___Scanner_1, value);
	}

	inline static int32_t get_offset_of_Last_2() { return static_cast<int32_t>(offsetof(ScannerScanLine_t3254096987, ___Last_2)); }
	inline ScannerPixel_t2126523564 * get_Last_2() const { return ___Last_2; }
	inline ScannerPixel_t2126523564 ** get_address_of_Last_2() { return &___Last_2; }
	inline void set_Last_2(ScannerPixel_t2126523564 * value)
	{
		___Last_2 = value;
		Il2CppCodeGenWriteBarrier(&___Last_2, value);
	}

	inline static int32_t get_offset_of_First_3() { return static_cast<int32_t>(offsetof(ScannerScanLine_t3254096987, ___First_3)); }
	inline ScannerPixel_t2126523564 * get_First_3() const { return ___First_3; }
	inline ScannerPixel_t2126523564 ** get_address_of_First_3() { return &___First_3; }
	inline void set_First_3(ScannerPixel_t2126523564 * value)
	{
		___First_3 = value;
		Il2CppCodeGenWriteBarrier(&___First_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
