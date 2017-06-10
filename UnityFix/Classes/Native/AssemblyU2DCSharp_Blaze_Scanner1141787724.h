#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Blaze.DistanceCacheSquare[]
struct DistanceCacheSquareU5BU5D_t3386515343;
// Blaze.ScannerPixel
struct ScannerPixel_t2126523564;
// Blaze.ScannerScanLine[]
struct ScannerScanLineU5BU5D_t701857754;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Blaze.Scanner
struct  Scanner_t1141787724  : public Il2CppObject
{
public:
	// System.Int32 Blaze.Scanner::BlurSpread
	int32_t ___BlurSpread_0;
	// System.Single Blaze.Scanner::ScalarX
	float ___ScalarX_1;
	// System.Single Blaze.Scanner::ScalarY
	float ___ScalarY_2;
	// System.Single Blaze.Scanner::RawSampleDistance
	float ___RawSampleDistance_3;
	// System.Int32 Blaze.Scanner::PooledPixels
	int32_t ___PooledPixels_5;
	// Blaze.DistanceCacheSquare[] Blaze.Scanner::DistanceCache
	DistanceCacheSquareU5BU5D_t3386515343* ___DistanceCache_6;
	// System.Int32 Blaze.Scanner::DistanceCacheWidth
	int32_t ___DistanceCacheWidth_7;
	// System.Int32 Blaze.Scanner::DistanceCacheHeight
	int32_t ___DistanceCacheHeight_8;
	// System.Boolean Blaze.Scanner::Blurred
	bool ___Blurred_9;
	// System.Int32 Blaze.Scanner::DoubleBlurSpread
	int32_t ___DoubleBlurSpread_10;
	// System.Single Blaze.Scanner::HalfBlurSpreadF
	float ___HalfBlurSpreadF_11;
	// System.Int32 Blaze.Scanner::HalfBlurSpread
	int32_t ___HalfBlurSpread_12;
	// System.Single Blaze.Scanner::VerticalOffset
	float ___VerticalOffset_13;
	// System.Single Blaze.Scanner::HorizontalOffset
	float ___HorizontalOffset_14;
	// Blaze.ScannerPixel Blaze.Scanner::FirstPooled
	ScannerPixel_t2126523564 * ___FirstPooled_15;
	// Blaze.ScannerScanLine[] Blaze.Scanner::ScanLineBuffer
	ScannerScanLineU5BU5D_t701857754* ___ScanLineBuffer_16;
	// System.Boolean Blaze.Scanner::RequiresStart
	bool ___RequiresStart_17;
	// System.Single Blaze.Scanner::MaxDistance
	float ___MaxDistance_18;
	// System.Single Blaze.Scanner::MaxDistanceSquared
	float ___MaxDistanceSquared_19;
	// System.Single Blaze.Scanner::DistanceAdjuster
	float ___DistanceAdjuster_20;
	// System.Int32 Blaze.Scanner::RawSDFSize
	int32_t ___RawSDFSize_21;
	// System.Boolean Blaze.Scanner::WentUp
	bool ___WentUp_22;
	// System.Int32 Blaze.Scanner::MoveToY
	int32_t ___MoveToY_23;
	// System.Int32 Blaze.Scanner::PreviousY
	int32_t ___PreviousY_24;
	// System.Int32 Blaze.Scanner::LineChangeY
	int32_t ___LineChangeY_25;
	// System.Single Blaze.Scanner::LineChangeX
	float ___LineChangeX_26;
	// System.Boolean Blaze.Scanner::LineChangeWentUp
	bool ___LineChangeWentUp_27;
	// System.Single Blaze.Scanner::SDFExtrudeBy
	float ___SDFExtrudeBy_28;

public:
	inline static int32_t get_offset_of_BlurSpread_0() { return static_cast<int32_t>(offsetof(Scanner_t1141787724, ___BlurSpread_0)); }
	inline int32_t get_BlurSpread_0() const { return ___BlurSpread_0; }
	inline int32_t* get_address_of_BlurSpread_0() { return &___BlurSpread_0; }
	inline void set_BlurSpread_0(int32_t value)
	{
		___BlurSpread_0 = value;
	}

	inline static int32_t get_offset_of_ScalarX_1() { return static_cast<int32_t>(offsetof(Scanner_t1141787724, ___ScalarX_1)); }
	inline float get_ScalarX_1() const { return ___ScalarX_1; }
	inline float* get_address_of_ScalarX_1() { return &___ScalarX_1; }
	inline void set_ScalarX_1(float value)
	{
		___ScalarX_1 = value;
	}

	inline static int32_t get_offset_of_ScalarY_2() { return static_cast<int32_t>(offsetof(Scanner_t1141787724, ___ScalarY_2)); }
	inline float get_ScalarY_2() const { return ___ScalarY_2; }
	inline float* get_address_of_ScalarY_2() { return &___ScalarY_2; }
	inline void set_ScalarY_2(float value)
	{
		___ScalarY_2 = value;
	}

	inline static int32_t get_offset_of_RawSampleDistance_3() { return static_cast<int32_t>(offsetof(Scanner_t1141787724, ___RawSampleDistance_3)); }
	inline float get_RawSampleDistance_3() const { return ___RawSampleDistance_3; }
	inline float* get_address_of_RawSampleDistance_3() { return &___RawSampleDistance_3; }
	inline void set_RawSampleDistance_3(float value)
	{
		___RawSampleDistance_3 = value;
	}

	inline static int32_t get_offset_of_PooledPixels_5() { return static_cast<int32_t>(offsetof(Scanner_t1141787724, ___PooledPixels_5)); }
	inline int32_t get_PooledPixels_5() const { return ___PooledPixels_5; }
	inline int32_t* get_address_of_PooledPixels_5() { return &___PooledPixels_5; }
	inline void set_PooledPixels_5(int32_t value)
	{
		___PooledPixels_5 = value;
	}

	inline static int32_t get_offset_of_DistanceCache_6() { return static_cast<int32_t>(offsetof(Scanner_t1141787724, ___DistanceCache_6)); }
	inline DistanceCacheSquareU5BU5D_t3386515343* get_DistanceCache_6() const { return ___DistanceCache_6; }
	inline DistanceCacheSquareU5BU5D_t3386515343** get_address_of_DistanceCache_6() { return &___DistanceCache_6; }
	inline void set_DistanceCache_6(DistanceCacheSquareU5BU5D_t3386515343* value)
	{
		___DistanceCache_6 = value;
		Il2CppCodeGenWriteBarrier(&___DistanceCache_6, value);
	}

	inline static int32_t get_offset_of_DistanceCacheWidth_7() { return static_cast<int32_t>(offsetof(Scanner_t1141787724, ___DistanceCacheWidth_7)); }
	inline int32_t get_DistanceCacheWidth_7() const { return ___DistanceCacheWidth_7; }
	inline int32_t* get_address_of_DistanceCacheWidth_7() { return &___DistanceCacheWidth_7; }
	inline void set_DistanceCacheWidth_7(int32_t value)
	{
		___DistanceCacheWidth_7 = value;
	}

	inline static int32_t get_offset_of_DistanceCacheHeight_8() { return static_cast<int32_t>(offsetof(Scanner_t1141787724, ___DistanceCacheHeight_8)); }
	inline int32_t get_DistanceCacheHeight_8() const { return ___DistanceCacheHeight_8; }
	inline int32_t* get_address_of_DistanceCacheHeight_8() { return &___DistanceCacheHeight_8; }
	inline void set_DistanceCacheHeight_8(int32_t value)
	{
		___DistanceCacheHeight_8 = value;
	}

	inline static int32_t get_offset_of_Blurred_9() { return static_cast<int32_t>(offsetof(Scanner_t1141787724, ___Blurred_9)); }
	inline bool get_Blurred_9() const { return ___Blurred_9; }
	inline bool* get_address_of_Blurred_9() { return &___Blurred_9; }
	inline void set_Blurred_9(bool value)
	{
		___Blurred_9 = value;
	}

	inline static int32_t get_offset_of_DoubleBlurSpread_10() { return static_cast<int32_t>(offsetof(Scanner_t1141787724, ___DoubleBlurSpread_10)); }
	inline int32_t get_DoubleBlurSpread_10() const { return ___DoubleBlurSpread_10; }
	inline int32_t* get_address_of_DoubleBlurSpread_10() { return &___DoubleBlurSpread_10; }
	inline void set_DoubleBlurSpread_10(int32_t value)
	{
		___DoubleBlurSpread_10 = value;
	}

	inline static int32_t get_offset_of_HalfBlurSpreadF_11() { return static_cast<int32_t>(offsetof(Scanner_t1141787724, ___HalfBlurSpreadF_11)); }
	inline float get_HalfBlurSpreadF_11() const { return ___HalfBlurSpreadF_11; }
	inline float* get_address_of_HalfBlurSpreadF_11() { return &___HalfBlurSpreadF_11; }
	inline void set_HalfBlurSpreadF_11(float value)
	{
		___HalfBlurSpreadF_11 = value;
	}

	inline static int32_t get_offset_of_HalfBlurSpread_12() { return static_cast<int32_t>(offsetof(Scanner_t1141787724, ___HalfBlurSpread_12)); }
	inline int32_t get_HalfBlurSpread_12() const { return ___HalfBlurSpread_12; }
	inline int32_t* get_address_of_HalfBlurSpread_12() { return &___HalfBlurSpread_12; }
	inline void set_HalfBlurSpread_12(int32_t value)
	{
		___HalfBlurSpread_12 = value;
	}

	inline static int32_t get_offset_of_VerticalOffset_13() { return static_cast<int32_t>(offsetof(Scanner_t1141787724, ___VerticalOffset_13)); }
	inline float get_VerticalOffset_13() const { return ___VerticalOffset_13; }
	inline float* get_address_of_VerticalOffset_13() { return &___VerticalOffset_13; }
	inline void set_VerticalOffset_13(float value)
	{
		___VerticalOffset_13 = value;
	}

	inline static int32_t get_offset_of_HorizontalOffset_14() { return static_cast<int32_t>(offsetof(Scanner_t1141787724, ___HorizontalOffset_14)); }
	inline float get_HorizontalOffset_14() const { return ___HorizontalOffset_14; }
	inline float* get_address_of_HorizontalOffset_14() { return &___HorizontalOffset_14; }
	inline void set_HorizontalOffset_14(float value)
	{
		___HorizontalOffset_14 = value;
	}

	inline static int32_t get_offset_of_FirstPooled_15() { return static_cast<int32_t>(offsetof(Scanner_t1141787724, ___FirstPooled_15)); }
	inline ScannerPixel_t2126523564 * get_FirstPooled_15() const { return ___FirstPooled_15; }
	inline ScannerPixel_t2126523564 ** get_address_of_FirstPooled_15() { return &___FirstPooled_15; }
	inline void set_FirstPooled_15(ScannerPixel_t2126523564 * value)
	{
		___FirstPooled_15 = value;
		Il2CppCodeGenWriteBarrier(&___FirstPooled_15, value);
	}

	inline static int32_t get_offset_of_ScanLineBuffer_16() { return static_cast<int32_t>(offsetof(Scanner_t1141787724, ___ScanLineBuffer_16)); }
	inline ScannerScanLineU5BU5D_t701857754* get_ScanLineBuffer_16() const { return ___ScanLineBuffer_16; }
	inline ScannerScanLineU5BU5D_t701857754** get_address_of_ScanLineBuffer_16() { return &___ScanLineBuffer_16; }
	inline void set_ScanLineBuffer_16(ScannerScanLineU5BU5D_t701857754* value)
	{
		___ScanLineBuffer_16 = value;
		Il2CppCodeGenWriteBarrier(&___ScanLineBuffer_16, value);
	}

	inline static int32_t get_offset_of_RequiresStart_17() { return static_cast<int32_t>(offsetof(Scanner_t1141787724, ___RequiresStart_17)); }
	inline bool get_RequiresStart_17() const { return ___RequiresStart_17; }
	inline bool* get_address_of_RequiresStart_17() { return &___RequiresStart_17; }
	inline void set_RequiresStart_17(bool value)
	{
		___RequiresStart_17 = value;
	}

	inline static int32_t get_offset_of_MaxDistance_18() { return static_cast<int32_t>(offsetof(Scanner_t1141787724, ___MaxDistance_18)); }
	inline float get_MaxDistance_18() const { return ___MaxDistance_18; }
	inline float* get_address_of_MaxDistance_18() { return &___MaxDistance_18; }
	inline void set_MaxDistance_18(float value)
	{
		___MaxDistance_18 = value;
	}

	inline static int32_t get_offset_of_MaxDistanceSquared_19() { return static_cast<int32_t>(offsetof(Scanner_t1141787724, ___MaxDistanceSquared_19)); }
	inline float get_MaxDistanceSquared_19() const { return ___MaxDistanceSquared_19; }
	inline float* get_address_of_MaxDistanceSquared_19() { return &___MaxDistanceSquared_19; }
	inline void set_MaxDistanceSquared_19(float value)
	{
		___MaxDistanceSquared_19 = value;
	}

	inline static int32_t get_offset_of_DistanceAdjuster_20() { return static_cast<int32_t>(offsetof(Scanner_t1141787724, ___DistanceAdjuster_20)); }
	inline float get_DistanceAdjuster_20() const { return ___DistanceAdjuster_20; }
	inline float* get_address_of_DistanceAdjuster_20() { return &___DistanceAdjuster_20; }
	inline void set_DistanceAdjuster_20(float value)
	{
		___DistanceAdjuster_20 = value;
	}

	inline static int32_t get_offset_of_RawSDFSize_21() { return static_cast<int32_t>(offsetof(Scanner_t1141787724, ___RawSDFSize_21)); }
	inline int32_t get_RawSDFSize_21() const { return ___RawSDFSize_21; }
	inline int32_t* get_address_of_RawSDFSize_21() { return &___RawSDFSize_21; }
	inline void set_RawSDFSize_21(int32_t value)
	{
		___RawSDFSize_21 = value;
	}

	inline static int32_t get_offset_of_WentUp_22() { return static_cast<int32_t>(offsetof(Scanner_t1141787724, ___WentUp_22)); }
	inline bool get_WentUp_22() const { return ___WentUp_22; }
	inline bool* get_address_of_WentUp_22() { return &___WentUp_22; }
	inline void set_WentUp_22(bool value)
	{
		___WentUp_22 = value;
	}

	inline static int32_t get_offset_of_MoveToY_23() { return static_cast<int32_t>(offsetof(Scanner_t1141787724, ___MoveToY_23)); }
	inline int32_t get_MoveToY_23() const { return ___MoveToY_23; }
	inline int32_t* get_address_of_MoveToY_23() { return &___MoveToY_23; }
	inline void set_MoveToY_23(int32_t value)
	{
		___MoveToY_23 = value;
	}

	inline static int32_t get_offset_of_PreviousY_24() { return static_cast<int32_t>(offsetof(Scanner_t1141787724, ___PreviousY_24)); }
	inline int32_t get_PreviousY_24() const { return ___PreviousY_24; }
	inline int32_t* get_address_of_PreviousY_24() { return &___PreviousY_24; }
	inline void set_PreviousY_24(int32_t value)
	{
		___PreviousY_24 = value;
	}

	inline static int32_t get_offset_of_LineChangeY_25() { return static_cast<int32_t>(offsetof(Scanner_t1141787724, ___LineChangeY_25)); }
	inline int32_t get_LineChangeY_25() const { return ___LineChangeY_25; }
	inline int32_t* get_address_of_LineChangeY_25() { return &___LineChangeY_25; }
	inline void set_LineChangeY_25(int32_t value)
	{
		___LineChangeY_25 = value;
	}

	inline static int32_t get_offset_of_LineChangeX_26() { return static_cast<int32_t>(offsetof(Scanner_t1141787724, ___LineChangeX_26)); }
	inline float get_LineChangeX_26() const { return ___LineChangeX_26; }
	inline float* get_address_of_LineChangeX_26() { return &___LineChangeX_26; }
	inline void set_LineChangeX_26(float value)
	{
		___LineChangeX_26 = value;
	}

	inline static int32_t get_offset_of_LineChangeWentUp_27() { return static_cast<int32_t>(offsetof(Scanner_t1141787724, ___LineChangeWentUp_27)); }
	inline bool get_LineChangeWentUp_27() const { return ___LineChangeWentUp_27; }
	inline bool* get_address_of_LineChangeWentUp_27() { return &___LineChangeWentUp_27; }
	inline void set_LineChangeWentUp_27(bool value)
	{
		___LineChangeWentUp_27 = value;
	}

	inline static int32_t get_offset_of_SDFExtrudeBy_28() { return static_cast<int32_t>(offsetof(Scanner_t1141787724, ___SDFExtrudeBy_28)); }
	inline float get_SDFExtrudeBy_28() const { return ___SDFExtrudeBy_28; }
	inline float* get_address_of_SDFExtrudeBy_28() { return &___SDFExtrudeBy_28; }
	inline void set_SDFExtrudeBy_28(float value)
	{
		___SDFExtrudeBy_28 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
