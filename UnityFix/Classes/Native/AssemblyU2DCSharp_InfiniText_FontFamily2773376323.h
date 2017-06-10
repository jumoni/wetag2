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
// InfiniText.FontFace
struct FontFace_t285613274;
// System.Collections.Generic.List`1<InfiniText.FontFace>
struct List_1_t3949701702;
// System.Collections.Generic.Dictionary`2<InfiniText.FontFaceFlags,InfiniText.FontFace>
struct Dictionary_2_t3269257818;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InfiniText.FontFamily
struct  FontFamily_t2773376323  : public Il2CppObject
{
public:
	// System.String InfiniText.FontFamily::Name
	String_t* ___Name_0;
	// InfiniText.FontFace InfiniText.FontFamily::Regular
	FontFace_t285613274 * ___Regular_1;
	// System.Boolean InfiniText.FontFamily::DisableExtrude
	bool ___DisableExtrude_2;
	// System.Collections.Generic.List`1<InfiniText.FontFace> InfiniText.FontFamily::Bold
	List_1_t3949701702 * ___Bold_3;
	// System.Collections.Generic.List`1<InfiniText.FontFace> InfiniText.FontFamily::Italics
	List_1_t3949701702 * ___Italics_4;
	// System.Boolean InfiniText.FontFamily::InvertedNormals
	bool ___InvertedNormals_5;
	// System.Collections.Generic.Dictionary`2<InfiniText.FontFaceFlags,InfiniText.FontFace> InfiniText.FontFamily::FontFaces
	Dictionary_2_t3269257818 * ___FontFaces_6;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(FontFamily_t2773376323, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier(&___Name_0, value);
	}

	inline static int32_t get_offset_of_Regular_1() { return static_cast<int32_t>(offsetof(FontFamily_t2773376323, ___Regular_1)); }
	inline FontFace_t285613274 * get_Regular_1() const { return ___Regular_1; }
	inline FontFace_t285613274 ** get_address_of_Regular_1() { return &___Regular_1; }
	inline void set_Regular_1(FontFace_t285613274 * value)
	{
		___Regular_1 = value;
		Il2CppCodeGenWriteBarrier(&___Regular_1, value);
	}

	inline static int32_t get_offset_of_DisableExtrude_2() { return static_cast<int32_t>(offsetof(FontFamily_t2773376323, ___DisableExtrude_2)); }
	inline bool get_DisableExtrude_2() const { return ___DisableExtrude_2; }
	inline bool* get_address_of_DisableExtrude_2() { return &___DisableExtrude_2; }
	inline void set_DisableExtrude_2(bool value)
	{
		___DisableExtrude_2 = value;
	}

	inline static int32_t get_offset_of_Bold_3() { return static_cast<int32_t>(offsetof(FontFamily_t2773376323, ___Bold_3)); }
	inline List_1_t3949701702 * get_Bold_3() const { return ___Bold_3; }
	inline List_1_t3949701702 ** get_address_of_Bold_3() { return &___Bold_3; }
	inline void set_Bold_3(List_1_t3949701702 * value)
	{
		___Bold_3 = value;
		Il2CppCodeGenWriteBarrier(&___Bold_3, value);
	}

	inline static int32_t get_offset_of_Italics_4() { return static_cast<int32_t>(offsetof(FontFamily_t2773376323, ___Italics_4)); }
	inline List_1_t3949701702 * get_Italics_4() const { return ___Italics_4; }
	inline List_1_t3949701702 ** get_address_of_Italics_4() { return &___Italics_4; }
	inline void set_Italics_4(List_1_t3949701702 * value)
	{
		___Italics_4 = value;
		Il2CppCodeGenWriteBarrier(&___Italics_4, value);
	}

	inline static int32_t get_offset_of_InvertedNormals_5() { return static_cast<int32_t>(offsetof(FontFamily_t2773376323, ___InvertedNormals_5)); }
	inline bool get_InvertedNormals_5() const { return ___InvertedNormals_5; }
	inline bool* get_address_of_InvertedNormals_5() { return &___InvertedNormals_5; }
	inline void set_InvertedNormals_5(bool value)
	{
		___InvertedNormals_5 = value;
	}

	inline static int32_t get_offset_of_FontFaces_6() { return static_cast<int32_t>(offsetof(FontFamily_t2773376323, ___FontFaces_6)); }
	inline Dictionary_2_t3269257818 * get_FontFaces_6() const { return ___FontFaces_6; }
	inline Dictionary_2_t3269257818 ** get_address_of_FontFaces_6() { return &___FontFaces_6; }
	inline void set_FontFaces_6(Dictionary_2_t3269257818 * value)
	{
		___FontFaces_6 = value;
		Il2CppCodeGenWriteBarrier(&___FontFaces_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
