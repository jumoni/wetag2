#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_PowerUI_FileProtocol4042906266.h"

// System.Collections.Generic.Dictionary`2<System.String,PowerUI.ImagePackage>
struct Dictionary_2_t1117966973;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.HttpProtocol
struct  HttpProtocol_t3150057264  : public FileProtocol_t4042906266
{
public:

public:
};

struct HttpProtocol_t3150057264_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,PowerUI.ImagePackage> PowerUI.HttpProtocol::Cache
	Dictionary_2_t1117966973 * ___Cache_1;

public:
	inline static int32_t get_offset_of_Cache_1() { return static_cast<int32_t>(offsetof(HttpProtocol_t3150057264_StaticFields, ___Cache_1)); }
	inline Dictionary_2_t1117966973 * get_Cache_1() const { return ___Cache_1; }
	inline Dictionary_2_t1117966973 ** get_address_of_Cache_1() { return &___Cache_1; }
	inline void set_Cache_1(Dictionary_2_t1117966973 * value)
	{
		___Cache_1 = value;
		Il2CppCodeGenWriteBarrier(&___Cache_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
