#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// PowerUI.FilePath
struct FilePath_t3025149829;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.ErrorInfo
struct  ErrorInfo_t133775252  : public Il2CppObject
{
public:
	// PowerUI.FilePath PowerUI.ErrorInfo::Url
	FilePath_t3025149829 * ___Url_0;
	// System.String PowerUI.ErrorInfo::Message
	String_t* ___Message_1;

public:
	inline static int32_t get_offset_of_Url_0() { return static_cast<int32_t>(offsetof(ErrorInfo_t133775252, ___Url_0)); }
	inline FilePath_t3025149829 * get_Url_0() const { return ___Url_0; }
	inline FilePath_t3025149829 ** get_address_of_Url_0() { return &___Url_0; }
	inline void set_Url_0(FilePath_t3025149829 * value)
	{
		___Url_0 = value;
		Il2CppCodeGenWriteBarrier(&___Url_0, value);
	}

	inline static int32_t get_offset_of_Message_1() { return static_cast<int32_t>(offsetof(ErrorInfo_t133775252, ___Message_1)); }
	inline String_t* get_Message_1() const { return ___Message_1; }
	inline String_t** get_address_of_Message_1() { return &___Message_1; }
	inline void set_Message_1(String_t* value)
	{
		___Message_1 = value;
		Il2CppCodeGenWriteBarrier(&___Message_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
