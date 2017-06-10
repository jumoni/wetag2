#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Threading.Thread
struct Thread_t241561612;
// PowerUI.Callback
struct Callback_t3120320591;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.Callbacks
struct  Callbacks_t2634363580  : public Il2CppObject
{
public:

public:
};

struct Callbacks_t2634363580_StaticFields
{
public:
	// System.Threading.Thread PowerUI.Callbacks::MainThread
	Thread_t241561612 * ___MainThread_0;
	// PowerUI.Callback PowerUI.Callbacks::LastToRun
	Callback_t3120320591 * ___LastToRun_1;
	// PowerUI.Callback PowerUI.Callbacks::FirstToRun
	Callback_t3120320591 * ___FirstToRun_2;

public:
	inline static int32_t get_offset_of_MainThread_0() { return static_cast<int32_t>(offsetof(Callbacks_t2634363580_StaticFields, ___MainThread_0)); }
	inline Thread_t241561612 * get_MainThread_0() const { return ___MainThread_0; }
	inline Thread_t241561612 ** get_address_of_MainThread_0() { return &___MainThread_0; }
	inline void set_MainThread_0(Thread_t241561612 * value)
	{
		___MainThread_0 = value;
		Il2CppCodeGenWriteBarrier(&___MainThread_0, value);
	}

	inline static int32_t get_offset_of_LastToRun_1() { return static_cast<int32_t>(offsetof(Callbacks_t2634363580_StaticFields, ___LastToRun_1)); }
	inline Callback_t3120320591 * get_LastToRun_1() const { return ___LastToRun_1; }
	inline Callback_t3120320591 ** get_address_of_LastToRun_1() { return &___LastToRun_1; }
	inline void set_LastToRun_1(Callback_t3120320591 * value)
	{
		___LastToRun_1 = value;
		Il2CppCodeGenWriteBarrier(&___LastToRun_1, value);
	}

	inline static int32_t get_offset_of_FirstToRun_2() { return static_cast<int32_t>(offsetof(Callbacks_t2634363580_StaticFields, ___FirstToRun_2)); }
	inline Callback_t3120320591 * get_FirstToRun_2() const { return ___FirstToRun_2; }
	inline Callback_t3120320591 ** get_address_of_FirstToRun_2() { return &___FirstToRun_2; }
	inline void set_FirstToRun_2(Callback_t3120320591 * value)
	{
		___FirstToRun_2 = value;
		Il2CppCodeGenWriteBarrier(&___FirstToRun_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
