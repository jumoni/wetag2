#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_Blaze_AtlasingMode2220172332.h"

// Blaze.AtlasStack
struct AtlasStack_t1964081461;
// Blaze.TextureAtlas
struct TextureAtlas_t1022099648;
// UnityEngine.Color32[]
struct Color32U5BU5D_t30278651;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// Blaze.AtlasLocation
struct AtlasLocation_t2349679574;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Blaze.TextureAtlas
struct  TextureAtlas_t1022099648  : public Il2CppObject
{
public:
	// System.Int32 Blaze.TextureAtlas::RawSpacing
	int32_t ___RawSpacing_0;
	// Blaze.AtlasStack Blaze.TextureAtlas::Stack
	AtlasStack_t1964081461 * ___Stack_1;
	// Blaze.TextureAtlas Blaze.TextureAtlas::Next
	TextureAtlas_t1022099648 * ___Next_2;
	// Blaze.TextureAtlas Blaze.TextureAtlas::Previous
	TextureAtlas_t1022099648 * ___Previous_3;
	// System.Int32 Blaze.TextureAtlas::Dimension
	int32_t ___Dimension_4;
	// System.Single Blaze.TextureAtlas::DimensionF
	float ___DimensionF_5;
	// System.Single Blaze.TextureAtlas::InvertedSize
	float ___InvertedSize_6;
	// UnityEngine.Color32[] Blaze.TextureAtlas::Pixels
	Color32U5BU5D_t30278651* ___Pixels_7;
	// System.Boolean Blaze.TextureAtlas::PixelChange
	bool ___PixelChange_8;
	// System.Boolean Blaze.TextureAtlas::CanOptimize
	bool ___CanOptimize_9;
	// UnityEngine.Texture2D Blaze.TextureAtlas::Texture
	Texture2D_t3542995729 * ___Texture_10;
	// System.Int32 Blaze.TextureAtlas::ColumnProgress
	int32_t ___ColumnProgress_11;
	// System.Boolean Blaze.TextureAtlas::OptimizeRequested
	bool ___OptimizeRequested_12;
	// Blaze.AtlasLocation Blaze.TextureAtlas::LastEmpty
	AtlasLocation_t2349679574 * ___LastEmpty_13;
	// Blaze.AtlasLocation Blaze.TextureAtlas::FirstEmpty
	AtlasLocation_t2349679574 * ___FirstEmpty_14;
	// Blaze.AtlasingMode Blaze.TextureAtlas::Mode
	int32_t ___Mode_15;

public:
	inline static int32_t get_offset_of_RawSpacing_0() { return static_cast<int32_t>(offsetof(TextureAtlas_t1022099648, ___RawSpacing_0)); }
	inline int32_t get_RawSpacing_0() const { return ___RawSpacing_0; }
	inline int32_t* get_address_of_RawSpacing_0() { return &___RawSpacing_0; }
	inline void set_RawSpacing_0(int32_t value)
	{
		___RawSpacing_0 = value;
	}

	inline static int32_t get_offset_of_Stack_1() { return static_cast<int32_t>(offsetof(TextureAtlas_t1022099648, ___Stack_1)); }
	inline AtlasStack_t1964081461 * get_Stack_1() const { return ___Stack_1; }
	inline AtlasStack_t1964081461 ** get_address_of_Stack_1() { return &___Stack_1; }
	inline void set_Stack_1(AtlasStack_t1964081461 * value)
	{
		___Stack_1 = value;
		Il2CppCodeGenWriteBarrier(&___Stack_1, value);
	}

	inline static int32_t get_offset_of_Next_2() { return static_cast<int32_t>(offsetof(TextureAtlas_t1022099648, ___Next_2)); }
	inline TextureAtlas_t1022099648 * get_Next_2() const { return ___Next_2; }
	inline TextureAtlas_t1022099648 ** get_address_of_Next_2() { return &___Next_2; }
	inline void set_Next_2(TextureAtlas_t1022099648 * value)
	{
		___Next_2 = value;
		Il2CppCodeGenWriteBarrier(&___Next_2, value);
	}

	inline static int32_t get_offset_of_Previous_3() { return static_cast<int32_t>(offsetof(TextureAtlas_t1022099648, ___Previous_3)); }
	inline TextureAtlas_t1022099648 * get_Previous_3() const { return ___Previous_3; }
	inline TextureAtlas_t1022099648 ** get_address_of_Previous_3() { return &___Previous_3; }
	inline void set_Previous_3(TextureAtlas_t1022099648 * value)
	{
		___Previous_3 = value;
		Il2CppCodeGenWriteBarrier(&___Previous_3, value);
	}

	inline static int32_t get_offset_of_Dimension_4() { return static_cast<int32_t>(offsetof(TextureAtlas_t1022099648, ___Dimension_4)); }
	inline int32_t get_Dimension_4() const { return ___Dimension_4; }
	inline int32_t* get_address_of_Dimension_4() { return &___Dimension_4; }
	inline void set_Dimension_4(int32_t value)
	{
		___Dimension_4 = value;
	}

	inline static int32_t get_offset_of_DimensionF_5() { return static_cast<int32_t>(offsetof(TextureAtlas_t1022099648, ___DimensionF_5)); }
	inline float get_DimensionF_5() const { return ___DimensionF_5; }
	inline float* get_address_of_DimensionF_5() { return &___DimensionF_5; }
	inline void set_DimensionF_5(float value)
	{
		___DimensionF_5 = value;
	}

	inline static int32_t get_offset_of_InvertedSize_6() { return static_cast<int32_t>(offsetof(TextureAtlas_t1022099648, ___InvertedSize_6)); }
	inline float get_InvertedSize_6() const { return ___InvertedSize_6; }
	inline float* get_address_of_InvertedSize_6() { return &___InvertedSize_6; }
	inline void set_InvertedSize_6(float value)
	{
		___InvertedSize_6 = value;
	}

	inline static int32_t get_offset_of_Pixels_7() { return static_cast<int32_t>(offsetof(TextureAtlas_t1022099648, ___Pixels_7)); }
	inline Color32U5BU5D_t30278651* get_Pixels_7() const { return ___Pixels_7; }
	inline Color32U5BU5D_t30278651** get_address_of_Pixels_7() { return &___Pixels_7; }
	inline void set_Pixels_7(Color32U5BU5D_t30278651* value)
	{
		___Pixels_7 = value;
		Il2CppCodeGenWriteBarrier(&___Pixels_7, value);
	}

	inline static int32_t get_offset_of_PixelChange_8() { return static_cast<int32_t>(offsetof(TextureAtlas_t1022099648, ___PixelChange_8)); }
	inline bool get_PixelChange_8() const { return ___PixelChange_8; }
	inline bool* get_address_of_PixelChange_8() { return &___PixelChange_8; }
	inline void set_PixelChange_8(bool value)
	{
		___PixelChange_8 = value;
	}

	inline static int32_t get_offset_of_CanOptimize_9() { return static_cast<int32_t>(offsetof(TextureAtlas_t1022099648, ___CanOptimize_9)); }
	inline bool get_CanOptimize_9() const { return ___CanOptimize_9; }
	inline bool* get_address_of_CanOptimize_9() { return &___CanOptimize_9; }
	inline void set_CanOptimize_9(bool value)
	{
		___CanOptimize_9 = value;
	}

	inline static int32_t get_offset_of_Texture_10() { return static_cast<int32_t>(offsetof(TextureAtlas_t1022099648, ___Texture_10)); }
	inline Texture2D_t3542995729 * get_Texture_10() const { return ___Texture_10; }
	inline Texture2D_t3542995729 ** get_address_of_Texture_10() { return &___Texture_10; }
	inline void set_Texture_10(Texture2D_t3542995729 * value)
	{
		___Texture_10 = value;
		Il2CppCodeGenWriteBarrier(&___Texture_10, value);
	}

	inline static int32_t get_offset_of_ColumnProgress_11() { return static_cast<int32_t>(offsetof(TextureAtlas_t1022099648, ___ColumnProgress_11)); }
	inline int32_t get_ColumnProgress_11() const { return ___ColumnProgress_11; }
	inline int32_t* get_address_of_ColumnProgress_11() { return &___ColumnProgress_11; }
	inline void set_ColumnProgress_11(int32_t value)
	{
		___ColumnProgress_11 = value;
	}

	inline static int32_t get_offset_of_OptimizeRequested_12() { return static_cast<int32_t>(offsetof(TextureAtlas_t1022099648, ___OptimizeRequested_12)); }
	inline bool get_OptimizeRequested_12() const { return ___OptimizeRequested_12; }
	inline bool* get_address_of_OptimizeRequested_12() { return &___OptimizeRequested_12; }
	inline void set_OptimizeRequested_12(bool value)
	{
		___OptimizeRequested_12 = value;
	}

	inline static int32_t get_offset_of_LastEmpty_13() { return static_cast<int32_t>(offsetof(TextureAtlas_t1022099648, ___LastEmpty_13)); }
	inline AtlasLocation_t2349679574 * get_LastEmpty_13() const { return ___LastEmpty_13; }
	inline AtlasLocation_t2349679574 ** get_address_of_LastEmpty_13() { return &___LastEmpty_13; }
	inline void set_LastEmpty_13(AtlasLocation_t2349679574 * value)
	{
		___LastEmpty_13 = value;
		Il2CppCodeGenWriteBarrier(&___LastEmpty_13, value);
	}

	inline static int32_t get_offset_of_FirstEmpty_14() { return static_cast<int32_t>(offsetof(TextureAtlas_t1022099648, ___FirstEmpty_14)); }
	inline AtlasLocation_t2349679574 * get_FirstEmpty_14() const { return ___FirstEmpty_14; }
	inline AtlasLocation_t2349679574 ** get_address_of_FirstEmpty_14() { return &___FirstEmpty_14; }
	inline void set_FirstEmpty_14(AtlasLocation_t2349679574 * value)
	{
		___FirstEmpty_14 = value;
		Il2CppCodeGenWriteBarrier(&___FirstEmpty_14, value);
	}

	inline static int32_t get_offset_of_Mode_15() { return static_cast<int32_t>(offsetof(TextureAtlas_t1022099648, ___Mode_15)); }
	inline int32_t get_Mode_15() const { return ___Mode_15; }
	inline int32_t* get_address_of_Mode_15() { return &___Mode_15; }
	inline void set_Mode_15(int32_t value)
	{
		___Mode_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
