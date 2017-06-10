#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// InfiniText.CffStack
struct CffStack_t1456674863;
// InfiniText.FontParser
struct FontParser_t2451351668;
// InfiniText.Glyph
struct Glyph_t1486063204;
// InfiniText.FontFace
struct FontFace_t285613274;
// InfiniText.CffSubPosition[]
struct CffSubPositionU5BU5D_t2530992393;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InfiniText.CffGlyphParser
struct  CffGlyphParser_t159697976  : public Il2CppObject
{
public:
	// System.Single InfiniText.CffGlyphParser::X
	float ___X_0;
	// System.Single InfiniText.CffGlyphParser::Y
	float ___Y_1;
	// System.Int32 InfiniText.CffGlyphParser::NStems
	int32_t ___NStems_2;
	// System.Single InfiniText.CffGlyphParser::Width
	float ___Width_3;
	// System.Boolean InfiniText.CffGlyphParser::HasWidth
	bool ___HasWidth_4;
	// System.Int32 InfiniText.CffGlyphParser::SubrsBias
	int32_t ___SubrsBias_5;
	// System.Int32 InfiniText.CffGlyphParser::GsubrsBias
	int32_t ___GsubrsBias_6;
	// InfiniText.CffStack InfiniText.CffGlyphParser::Stack
	CffStack_t1456674863 * ___Stack_7;
	// System.Single InfiniText.CffGlyphParser::NominalWidthX
	float ___NominalWidthX_8;
	// InfiniText.FontParser InfiniText.CffGlyphParser::Parser
	FontParser_t2451351668 * ___Parser_9;
	// InfiniText.Glyph InfiniText.CffGlyphParser::Glyph
	Glyph_t1486063204 * ___Glyph_10;
	// InfiniText.FontFace InfiniText.CffGlyphParser::Font
	FontFace_t285613274 * ___Font_11;
	// InfiniText.CffSubPosition[] InfiniText.CffGlyphParser::GSubrs
	CffSubPositionU5BU5D_t2530992393* ___GSubrs_12;
	// InfiniText.CffSubPosition[] InfiniText.CffGlyphParser::Subrs
	CffSubPositionU5BU5D_t2530992393* ___Subrs_13;
	// System.Single InfiniText.CffGlyphParser::DefaultWidthX
	float ___DefaultWidthX_14;
	// System.Single InfiniText.CffGlyphParser::ScaleRatio
	float ___ScaleRatio_15;
	// System.Boolean InfiniText.CffGlyphParser::FullLoad
	bool ___FullLoad_16;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(CffGlyphParser_t159697976, ___X_0)); }
	inline float get_X_0() const { return ___X_0; }
	inline float* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(float value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(CffGlyphParser_t159697976, ___Y_1)); }
	inline float get_Y_1() const { return ___Y_1; }
	inline float* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(float value)
	{
		___Y_1 = value;
	}

	inline static int32_t get_offset_of_NStems_2() { return static_cast<int32_t>(offsetof(CffGlyphParser_t159697976, ___NStems_2)); }
	inline int32_t get_NStems_2() const { return ___NStems_2; }
	inline int32_t* get_address_of_NStems_2() { return &___NStems_2; }
	inline void set_NStems_2(int32_t value)
	{
		___NStems_2 = value;
	}

	inline static int32_t get_offset_of_Width_3() { return static_cast<int32_t>(offsetof(CffGlyphParser_t159697976, ___Width_3)); }
	inline float get_Width_3() const { return ___Width_3; }
	inline float* get_address_of_Width_3() { return &___Width_3; }
	inline void set_Width_3(float value)
	{
		___Width_3 = value;
	}

	inline static int32_t get_offset_of_HasWidth_4() { return static_cast<int32_t>(offsetof(CffGlyphParser_t159697976, ___HasWidth_4)); }
	inline bool get_HasWidth_4() const { return ___HasWidth_4; }
	inline bool* get_address_of_HasWidth_4() { return &___HasWidth_4; }
	inline void set_HasWidth_4(bool value)
	{
		___HasWidth_4 = value;
	}

	inline static int32_t get_offset_of_SubrsBias_5() { return static_cast<int32_t>(offsetof(CffGlyphParser_t159697976, ___SubrsBias_5)); }
	inline int32_t get_SubrsBias_5() const { return ___SubrsBias_5; }
	inline int32_t* get_address_of_SubrsBias_5() { return &___SubrsBias_5; }
	inline void set_SubrsBias_5(int32_t value)
	{
		___SubrsBias_5 = value;
	}

	inline static int32_t get_offset_of_GsubrsBias_6() { return static_cast<int32_t>(offsetof(CffGlyphParser_t159697976, ___GsubrsBias_6)); }
	inline int32_t get_GsubrsBias_6() const { return ___GsubrsBias_6; }
	inline int32_t* get_address_of_GsubrsBias_6() { return &___GsubrsBias_6; }
	inline void set_GsubrsBias_6(int32_t value)
	{
		___GsubrsBias_6 = value;
	}

	inline static int32_t get_offset_of_Stack_7() { return static_cast<int32_t>(offsetof(CffGlyphParser_t159697976, ___Stack_7)); }
	inline CffStack_t1456674863 * get_Stack_7() const { return ___Stack_7; }
	inline CffStack_t1456674863 ** get_address_of_Stack_7() { return &___Stack_7; }
	inline void set_Stack_7(CffStack_t1456674863 * value)
	{
		___Stack_7 = value;
		Il2CppCodeGenWriteBarrier(&___Stack_7, value);
	}

	inline static int32_t get_offset_of_NominalWidthX_8() { return static_cast<int32_t>(offsetof(CffGlyphParser_t159697976, ___NominalWidthX_8)); }
	inline float get_NominalWidthX_8() const { return ___NominalWidthX_8; }
	inline float* get_address_of_NominalWidthX_8() { return &___NominalWidthX_8; }
	inline void set_NominalWidthX_8(float value)
	{
		___NominalWidthX_8 = value;
	}

	inline static int32_t get_offset_of_Parser_9() { return static_cast<int32_t>(offsetof(CffGlyphParser_t159697976, ___Parser_9)); }
	inline FontParser_t2451351668 * get_Parser_9() const { return ___Parser_9; }
	inline FontParser_t2451351668 ** get_address_of_Parser_9() { return &___Parser_9; }
	inline void set_Parser_9(FontParser_t2451351668 * value)
	{
		___Parser_9 = value;
		Il2CppCodeGenWriteBarrier(&___Parser_9, value);
	}

	inline static int32_t get_offset_of_Glyph_10() { return static_cast<int32_t>(offsetof(CffGlyphParser_t159697976, ___Glyph_10)); }
	inline Glyph_t1486063204 * get_Glyph_10() const { return ___Glyph_10; }
	inline Glyph_t1486063204 ** get_address_of_Glyph_10() { return &___Glyph_10; }
	inline void set_Glyph_10(Glyph_t1486063204 * value)
	{
		___Glyph_10 = value;
		Il2CppCodeGenWriteBarrier(&___Glyph_10, value);
	}

	inline static int32_t get_offset_of_Font_11() { return static_cast<int32_t>(offsetof(CffGlyphParser_t159697976, ___Font_11)); }
	inline FontFace_t285613274 * get_Font_11() const { return ___Font_11; }
	inline FontFace_t285613274 ** get_address_of_Font_11() { return &___Font_11; }
	inline void set_Font_11(FontFace_t285613274 * value)
	{
		___Font_11 = value;
		Il2CppCodeGenWriteBarrier(&___Font_11, value);
	}

	inline static int32_t get_offset_of_GSubrs_12() { return static_cast<int32_t>(offsetof(CffGlyphParser_t159697976, ___GSubrs_12)); }
	inline CffSubPositionU5BU5D_t2530992393* get_GSubrs_12() const { return ___GSubrs_12; }
	inline CffSubPositionU5BU5D_t2530992393** get_address_of_GSubrs_12() { return &___GSubrs_12; }
	inline void set_GSubrs_12(CffSubPositionU5BU5D_t2530992393* value)
	{
		___GSubrs_12 = value;
		Il2CppCodeGenWriteBarrier(&___GSubrs_12, value);
	}

	inline static int32_t get_offset_of_Subrs_13() { return static_cast<int32_t>(offsetof(CffGlyphParser_t159697976, ___Subrs_13)); }
	inline CffSubPositionU5BU5D_t2530992393* get_Subrs_13() const { return ___Subrs_13; }
	inline CffSubPositionU5BU5D_t2530992393** get_address_of_Subrs_13() { return &___Subrs_13; }
	inline void set_Subrs_13(CffSubPositionU5BU5D_t2530992393* value)
	{
		___Subrs_13 = value;
		Il2CppCodeGenWriteBarrier(&___Subrs_13, value);
	}

	inline static int32_t get_offset_of_DefaultWidthX_14() { return static_cast<int32_t>(offsetof(CffGlyphParser_t159697976, ___DefaultWidthX_14)); }
	inline float get_DefaultWidthX_14() const { return ___DefaultWidthX_14; }
	inline float* get_address_of_DefaultWidthX_14() { return &___DefaultWidthX_14; }
	inline void set_DefaultWidthX_14(float value)
	{
		___DefaultWidthX_14 = value;
	}

	inline static int32_t get_offset_of_ScaleRatio_15() { return static_cast<int32_t>(offsetof(CffGlyphParser_t159697976, ___ScaleRatio_15)); }
	inline float get_ScaleRatio_15() const { return ___ScaleRatio_15; }
	inline float* get_address_of_ScaleRatio_15() { return &___ScaleRatio_15; }
	inline void set_ScaleRatio_15(float value)
	{
		___ScaleRatio_15 = value;
	}

	inline static int32_t get_offset_of_FullLoad_16() { return static_cast<int32_t>(offsetof(CffGlyphParser_t159697976, ___FullLoad_16)); }
	inline bool get_FullLoad_16() const { return ___FullLoad_16; }
	inline bool* get_address_of_FullLoad_16() { return &___FullLoad_16; }
	inline void set_FullLoad_16(bool value)
	{
		___FullLoad_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
