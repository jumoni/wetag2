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
// System.Collections.Generic.Dictionary`2<System.String,PowerUI.FileProtocol>
struct Dictionary_2_t1662718232;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.FileProtocols
struct  FileProtocols_t2302887885  : public Il2CppObject
{
public:

public:
};

struct FileProtocols_t2302887885_StaticFields
{
public:
	// System.String PowerUI.FileProtocols::UnrecognisedProtocolHandler
	String_t* ___UnrecognisedProtocolHandler_0;
	// System.Collections.Generic.Dictionary`2<System.String,PowerUI.FileProtocol> PowerUI.FileProtocols::Protocols
	Dictionary_2_t1662718232 * ___Protocols_1;

public:
	inline static int32_t get_offset_of_UnrecognisedProtocolHandler_0() { return static_cast<int32_t>(offsetof(FileProtocols_t2302887885_StaticFields, ___UnrecognisedProtocolHandler_0)); }
	inline String_t* get_UnrecognisedProtocolHandler_0() const { return ___UnrecognisedProtocolHandler_0; }
	inline String_t** get_address_of_UnrecognisedProtocolHandler_0() { return &___UnrecognisedProtocolHandler_0; }
	inline void set_UnrecognisedProtocolHandler_0(String_t* value)
	{
		___UnrecognisedProtocolHandler_0 = value;
		Il2CppCodeGenWriteBarrier(&___UnrecognisedProtocolHandler_0, value);
	}

	inline static int32_t get_offset_of_Protocols_1() { return static_cast<int32_t>(offsetof(FileProtocols_t2302887885_StaticFields, ___Protocols_1)); }
	inline Dictionary_2_t1662718232 * get_Protocols_1() const { return ___Protocols_1; }
	inline Dictionary_2_t1662718232 ** get_address_of_Protocols_1() { return &___Protocols_1; }
	inline void set_Protocols_1(Dictionary_2_t1662718232 * value)
	{
		___Protocols_1 = value;
		Il2CppCodeGenWriteBarrier(&___Protocols_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
