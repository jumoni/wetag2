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
// System.String[]
struct StringU5BU5D_t1642385972;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.FilePath
struct  FilePath_t3025149829  : public Il2CppObject
{
public:
	// System.String PowerUI.FilePath::Url
	String_t* ___Url_0;
	// System.String PowerUI.FilePath::Base
	String_t* ___Base_1;
	// System.String PowerUI.FilePath::Target
	String_t* ___Target_2;
	// System.String PowerUI.FilePath::Protocol
	String_t* ___Protocol_3;
	// System.String[] PowerUI.FilePath::Segments
	StringU5BU5D_t1642385972* ___Segments_4;
	// System.String PowerUI.FilePath::RelativeTo
	String_t* ___RelativeTo_5;
	// System.Boolean PowerUI.FilePath::UsedResolution
	bool ___UsedResolution_6;
	// System.String PowerUI.FilePath::Hash
	String_t* ___Hash_7;

public:
	inline static int32_t get_offset_of_Url_0() { return static_cast<int32_t>(offsetof(FilePath_t3025149829, ___Url_0)); }
	inline String_t* get_Url_0() const { return ___Url_0; }
	inline String_t** get_address_of_Url_0() { return &___Url_0; }
	inline void set_Url_0(String_t* value)
	{
		___Url_0 = value;
		Il2CppCodeGenWriteBarrier(&___Url_0, value);
	}

	inline static int32_t get_offset_of_Base_1() { return static_cast<int32_t>(offsetof(FilePath_t3025149829, ___Base_1)); }
	inline String_t* get_Base_1() const { return ___Base_1; }
	inline String_t** get_address_of_Base_1() { return &___Base_1; }
	inline void set_Base_1(String_t* value)
	{
		___Base_1 = value;
		Il2CppCodeGenWriteBarrier(&___Base_1, value);
	}

	inline static int32_t get_offset_of_Target_2() { return static_cast<int32_t>(offsetof(FilePath_t3025149829, ___Target_2)); }
	inline String_t* get_Target_2() const { return ___Target_2; }
	inline String_t** get_address_of_Target_2() { return &___Target_2; }
	inline void set_Target_2(String_t* value)
	{
		___Target_2 = value;
		Il2CppCodeGenWriteBarrier(&___Target_2, value);
	}

	inline static int32_t get_offset_of_Protocol_3() { return static_cast<int32_t>(offsetof(FilePath_t3025149829, ___Protocol_3)); }
	inline String_t* get_Protocol_3() const { return ___Protocol_3; }
	inline String_t** get_address_of_Protocol_3() { return &___Protocol_3; }
	inline void set_Protocol_3(String_t* value)
	{
		___Protocol_3 = value;
		Il2CppCodeGenWriteBarrier(&___Protocol_3, value);
	}

	inline static int32_t get_offset_of_Segments_4() { return static_cast<int32_t>(offsetof(FilePath_t3025149829, ___Segments_4)); }
	inline StringU5BU5D_t1642385972* get_Segments_4() const { return ___Segments_4; }
	inline StringU5BU5D_t1642385972** get_address_of_Segments_4() { return &___Segments_4; }
	inline void set_Segments_4(StringU5BU5D_t1642385972* value)
	{
		___Segments_4 = value;
		Il2CppCodeGenWriteBarrier(&___Segments_4, value);
	}

	inline static int32_t get_offset_of_RelativeTo_5() { return static_cast<int32_t>(offsetof(FilePath_t3025149829, ___RelativeTo_5)); }
	inline String_t* get_RelativeTo_5() const { return ___RelativeTo_5; }
	inline String_t** get_address_of_RelativeTo_5() { return &___RelativeTo_5; }
	inline void set_RelativeTo_5(String_t* value)
	{
		___RelativeTo_5 = value;
		Il2CppCodeGenWriteBarrier(&___RelativeTo_5, value);
	}

	inline static int32_t get_offset_of_UsedResolution_6() { return static_cast<int32_t>(offsetof(FilePath_t3025149829, ___UsedResolution_6)); }
	inline bool get_UsedResolution_6() const { return ___UsedResolution_6; }
	inline bool* get_address_of_UsedResolution_6() { return &___UsedResolution_6; }
	inline void set_UsedResolution_6(bool value)
	{
		___UsedResolution_6 = value;
	}

	inline static int32_t get_offset_of_Hash_7() { return static_cast<int32_t>(offsetof(FilePath_t3025149829, ___Hash_7)); }
	inline String_t* get_Hash_7() const { return ___Hash_7; }
	inline String_t** get_address_of_Hash_7() { return &___Hash_7; }
	inline void set_Hash_7(String_t* value)
	{
		___Hash_7 = value;
		Il2CppCodeGenWriteBarrier(&___Hash_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
