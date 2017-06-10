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
// System.Collections.Generic.List`1<PowerUI.CharacterProvider>
struct List_1_t787234490;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.CharacterProviders
struct  CharacterProviders_t4065276495  : public Il2CppObject
{
public:

public:
};

struct CharacterProviders_t4065276495_StaticFields
{
public:
	// System.Boolean PowerUI.CharacterProviders::Started
	bool ___Started_0;
	// System.Boolean PowerUI.CharacterProviders::FixHeight
	bool ___FixHeight_1;
	// System.String PowerUI.CharacterProviders::EmojiPath
	String_t* ___EmojiPath_2;
	// System.Collections.Generic.List`1<PowerUI.CharacterProvider> PowerUI.CharacterProviders::Providers
	List_1_t787234490 * ___Providers_3;

public:
	inline static int32_t get_offset_of_Started_0() { return static_cast<int32_t>(offsetof(CharacterProviders_t4065276495_StaticFields, ___Started_0)); }
	inline bool get_Started_0() const { return ___Started_0; }
	inline bool* get_address_of_Started_0() { return &___Started_0; }
	inline void set_Started_0(bool value)
	{
		___Started_0 = value;
	}

	inline static int32_t get_offset_of_FixHeight_1() { return static_cast<int32_t>(offsetof(CharacterProviders_t4065276495_StaticFields, ___FixHeight_1)); }
	inline bool get_FixHeight_1() const { return ___FixHeight_1; }
	inline bool* get_address_of_FixHeight_1() { return &___FixHeight_1; }
	inline void set_FixHeight_1(bool value)
	{
		___FixHeight_1 = value;
	}

	inline static int32_t get_offset_of_EmojiPath_2() { return static_cast<int32_t>(offsetof(CharacterProviders_t4065276495_StaticFields, ___EmojiPath_2)); }
	inline String_t* get_EmojiPath_2() const { return ___EmojiPath_2; }
	inline String_t** get_address_of_EmojiPath_2() { return &___EmojiPath_2; }
	inline void set_EmojiPath_2(String_t* value)
	{
		___EmojiPath_2 = value;
		Il2CppCodeGenWriteBarrier(&___EmojiPath_2, value);
	}

	inline static int32_t get_offset_of_Providers_3() { return static_cast<int32_t>(offsetof(CharacterProviders_t4065276495_StaticFields, ___Providers_3)); }
	inline List_1_t787234490 * get_Providers_3() const { return ___Providers_3; }
	inline List_1_t787234490 ** get_address_of_Providers_3() { return &___Providers_3; }
	inline void set_Providers_3(List_1_t787234490 * value)
	{
		___Providers_3 = value;
		Il2CppCodeGenWriteBarrier(&___Providers_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
