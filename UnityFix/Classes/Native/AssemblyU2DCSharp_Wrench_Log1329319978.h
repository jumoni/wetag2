#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Wrench.OnLogEvent
struct OnLogEvent_t3913109635;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrench.Log
struct  Log_t1329319978  : public Il2CppObject
{
public:

public:
};

struct Log_t1329319978_StaticFields
{
public:
	// System.Boolean Wrench.Log::Active
	bool ___Active_0;
	// Wrench.OnLogEvent Wrench.Log::OnLog
	OnLogEvent_t3913109635 * ___OnLog_1;

public:
	inline static int32_t get_offset_of_Active_0() { return static_cast<int32_t>(offsetof(Log_t1329319978_StaticFields, ___Active_0)); }
	inline bool get_Active_0() const { return ___Active_0; }
	inline bool* get_address_of_Active_0() { return &___Active_0; }
	inline void set_Active_0(bool value)
	{
		___Active_0 = value;
	}

	inline static int32_t get_offset_of_OnLog_1() { return static_cast<int32_t>(offsetof(Log_t1329319978_StaticFields, ___OnLog_1)); }
	inline OnLogEvent_t3913109635 * get_OnLog_1() const { return ___OnLog_1; }
	inline OnLogEvent_t3913109635 ** get_address_of_OnLog_1() { return &___OnLog_1; }
	inline void set_OnLog_1(OnLogEvent_t3913109635 * value)
	{
		___OnLog_1 = value;
		Il2CppCodeGenWriteBarrier(&___OnLog_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
