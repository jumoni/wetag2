#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// PowerUI.DynamicFont
struct DynamicFont_t2669411424;
// System.String
struct String_t;
// InfiniText.FontFamily
struct FontFamily_t2773376323;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.DynamicFont
struct  DynamicFont_t2669411424  : public Il2CppObject
{
public:
	// System.String PowerUI.DynamicFont::Name
	String_t* ___Name_2;
	// InfiniText.FontFamily PowerUI.DynamicFont::Family
	FontFamily_t2773376323 * ___Family_3;
	// System.Single PowerUI.DynamicFont::Ascender
	float ___Ascender_4;
	// System.Single PowerUI.DynamicFont::Descender
	float ___Descender_5;
	// System.Single PowerUI.DynamicFont::LineSize
	float ___LineSize_6;
	// System.Single PowerUI.DynamicFont::StrikeSize
	float ___StrikeSize_7;
	// System.Single PowerUI.DynamicFont::StrikeOffset
	float ___StrikeOffset_8;
	// PowerUI.DynamicFont PowerUI.DynamicFont::Fallback
	DynamicFont_t2669411424 * ___Fallback_9;
	// System.Single PowerUI.DynamicFont::SpaceSize
	float ___SpaceSize_10;

public:
	inline static int32_t get_offset_of_Name_2() { return static_cast<int32_t>(offsetof(DynamicFont_t2669411424, ___Name_2)); }
	inline String_t* get_Name_2() const { return ___Name_2; }
	inline String_t** get_address_of_Name_2() { return &___Name_2; }
	inline void set_Name_2(String_t* value)
	{
		___Name_2 = value;
		Il2CppCodeGenWriteBarrier(&___Name_2, value);
	}

	inline static int32_t get_offset_of_Family_3() { return static_cast<int32_t>(offsetof(DynamicFont_t2669411424, ___Family_3)); }
	inline FontFamily_t2773376323 * get_Family_3() const { return ___Family_3; }
	inline FontFamily_t2773376323 ** get_address_of_Family_3() { return &___Family_3; }
	inline void set_Family_3(FontFamily_t2773376323 * value)
	{
		___Family_3 = value;
		Il2CppCodeGenWriteBarrier(&___Family_3, value);
	}

	inline static int32_t get_offset_of_Ascender_4() { return static_cast<int32_t>(offsetof(DynamicFont_t2669411424, ___Ascender_4)); }
	inline float get_Ascender_4() const { return ___Ascender_4; }
	inline float* get_address_of_Ascender_4() { return &___Ascender_4; }
	inline void set_Ascender_4(float value)
	{
		___Ascender_4 = value;
	}

	inline static int32_t get_offset_of_Descender_5() { return static_cast<int32_t>(offsetof(DynamicFont_t2669411424, ___Descender_5)); }
	inline float get_Descender_5() const { return ___Descender_5; }
	inline float* get_address_of_Descender_5() { return &___Descender_5; }
	inline void set_Descender_5(float value)
	{
		___Descender_5 = value;
	}

	inline static int32_t get_offset_of_LineSize_6() { return static_cast<int32_t>(offsetof(DynamicFont_t2669411424, ___LineSize_6)); }
	inline float get_LineSize_6() const { return ___LineSize_6; }
	inline float* get_address_of_LineSize_6() { return &___LineSize_6; }
	inline void set_LineSize_6(float value)
	{
		___LineSize_6 = value;
	}

	inline static int32_t get_offset_of_StrikeSize_7() { return static_cast<int32_t>(offsetof(DynamicFont_t2669411424, ___StrikeSize_7)); }
	inline float get_StrikeSize_7() const { return ___StrikeSize_7; }
	inline float* get_address_of_StrikeSize_7() { return &___StrikeSize_7; }
	inline void set_StrikeSize_7(float value)
	{
		___StrikeSize_7 = value;
	}

	inline static int32_t get_offset_of_StrikeOffset_8() { return static_cast<int32_t>(offsetof(DynamicFont_t2669411424, ___StrikeOffset_8)); }
	inline float get_StrikeOffset_8() const { return ___StrikeOffset_8; }
	inline float* get_address_of_StrikeOffset_8() { return &___StrikeOffset_8; }
	inline void set_StrikeOffset_8(float value)
	{
		___StrikeOffset_8 = value;
	}

	inline static int32_t get_offset_of_Fallback_9() { return static_cast<int32_t>(offsetof(DynamicFont_t2669411424, ___Fallback_9)); }
	inline DynamicFont_t2669411424 * get_Fallback_9() const { return ___Fallback_9; }
	inline DynamicFont_t2669411424 ** get_address_of_Fallback_9() { return &___Fallback_9; }
	inline void set_Fallback_9(DynamicFont_t2669411424 * value)
	{
		___Fallback_9 = value;
		Il2CppCodeGenWriteBarrier(&___Fallback_9, value);
	}

	inline static int32_t get_offset_of_SpaceSize_10() { return static_cast<int32_t>(offsetof(DynamicFont_t2669411424, ___SpaceSize_10)); }
	inline float get_SpaceSize_10() const { return ___SpaceSize_10; }
	inline float* get_address_of_SpaceSize_10() { return &___SpaceSize_10; }
	inline void set_SpaceSize_10(float value)
	{
		___SpaceSize_10 = value;
	}
};

struct DynamicFont_t2669411424_StaticFields
{
public:
	// PowerUI.DynamicFont PowerUI.DynamicFont::DefaultFamily
	DynamicFont_t2669411424 * ___DefaultFamily_0;
	// System.String PowerUI.DynamicFont::InternalFont
	String_t* ___InternalFont_1;

public:
	inline static int32_t get_offset_of_DefaultFamily_0() { return static_cast<int32_t>(offsetof(DynamicFont_t2669411424_StaticFields, ___DefaultFamily_0)); }
	inline DynamicFont_t2669411424 * get_DefaultFamily_0() const { return ___DefaultFamily_0; }
	inline DynamicFont_t2669411424 ** get_address_of_DefaultFamily_0() { return &___DefaultFamily_0; }
	inline void set_DefaultFamily_0(DynamicFont_t2669411424 * value)
	{
		___DefaultFamily_0 = value;
		Il2CppCodeGenWriteBarrier(&___DefaultFamily_0, value);
	}

	inline static int32_t get_offset_of_InternalFont_1() { return static_cast<int32_t>(offsetof(DynamicFont_t2669411424_StaticFields, ___InternalFont_1)); }
	inline String_t* get_InternalFont_1() const { return ___InternalFont_1; }
	inline String_t** get_address_of_InternalFont_1() { return &___InternalFont_1; }
	inline void set_InternalFont_1(String_t* value)
	{
		___InternalFont_1 = value;
		Il2CppCodeGenWriteBarrier(&___InternalFont_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
