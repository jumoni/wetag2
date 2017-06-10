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
// PowerUI.FilePath
struct FilePath_t3025149829;
// System.Object
struct Il2CppObject;
// PowerUI.OnTextReady
struct OnTextReady_t1128829819;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.TextPackage
struct  TextPackage_t1046029955  : public Il2CppObject
{
public:
	// System.String PowerUI.TextPackage::Text
	String_t* ___Text_0;
	// System.String PowerUI.TextPackage::Error
	String_t* ___Error_1;
	// PowerUI.FilePath PowerUI.TextPackage::File
	FilePath_t3025149829 * ___File_2;
	// System.String PowerUI.TextPackage::FileType
	String_t* ___FileType_3;
	// System.Object PowerUI.TextPackage::ExtraData
	Il2CppObject * ___ExtraData_4;
	// PowerUI.OnTextReady PowerUI.TextPackage::TextReady
	OnTextReady_t1128829819 * ___TextReady_5;

public:
	inline static int32_t get_offset_of_Text_0() { return static_cast<int32_t>(offsetof(TextPackage_t1046029955, ___Text_0)); }
	inline String_t* get_Text_0() const { return ___Text_0; }
	inline String_t** get_address_of_Text_0() { return &___Text_0; }
	inline void set_Text_0(String_t* value)
	{
		___Text_0 = value;
		Il2CppCodeGenWriteBarrier(&___Text_0, value);
	}

	inline static int32_t get_offset_of_Error_1() { return static_cast<int32_t>(offsetof(TextPackage_t1046029955, ___Error_1)); }
	inline String_t* get_Error_1() const { return ___Error_1; }
	inline String_t** get_address_of_Error_1() { return &___Error_1; }
	inline void set_Error_1(String_t* value)
	{
		___Error_1 = value;
		Il2CppCodeGenWriteBarrier(&___Error_1, value);
	}

	inline static int32_t get_offset_of_File_2() { return static_cast<int32_t>(offsetof(TextPackage_t1046029955, ___File_2)); }
	inline FilePath_t3025149829 * get_File_2() const { return ___File_2; }
	inline FilePath_t3025149829 ** get_address_of_File_2() { return &___File_2; }
	inline void set_File_2(FilePath_t3025149829 * value)
	{
		___File_2 = value;
		Il2CppCodeGenWriteBarrier(&___File_2, value);
	}

	inline static int32_t get_offset_of_FileType_3() { return static_cast<int32_t>(offsetof(TextPackage_t1046029955, ___FileType_3)); }
	inline String_t* get_FileType_3() const { return ___FileType_3; }
	inline String_t** get_address_of_FileType_3() { return &___FileType_3; }
	inline void set_FileType_3(String_t* value)
	{
		___FileType_3 = value;
		Il2CppCodeGenWriteBarrier(&___FileType_3, value);
	}

	inline static int32_t get_offset_of_ExtraData_4() { return static_cast<int32_t>(offsetof(TextPackage_t1046029955, ___ExtraData_4)); }
	inline Il2CppObject * get_ExtraData_4() const { return ___ExtraData_4; }
	inline Il2CppObject ** get_address_of_ExtraData_4() { return &___ExtraData_4; }
	inline void set_ExtraData_4(Il2CppObject * value)
	{
		___ExtraData_4 = value;
		Il2CppCodeGenWriteBarrier(&___ExtraData_4, value);
	}

	inline static int32_t get_offset_of_TextReady_5() { return static_cast<int32_t>(offsetof(TextPackage_t1046029955, ___TextReady_5)); }
	inline OnTextReady_t1128829819 * get_TextReady_5() const { return ___TextReady_5; }
	inline OnTextReady_t1128829819 ** get_address_of_TextReady_5() { return &___TextReady_5; }
	inline void set_TextReady_5(OnTextReady_t1128829819 * value)
	{
		___TextReady_5 = value;
		Il2CppCodeGenWriteBarrier(&___TextReady_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
