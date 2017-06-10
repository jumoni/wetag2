#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// UnityHttp.HttpRequest
struct HttpRequest_t2628413021;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityHttp.Http
struct  Http_t1384063462  : public Il2CppObject
{
public:

public:
};

struct Http_t1384063462_StaticFields
{
public:
	// System.Single UnityHttp.Http::UpdateTimer
	float ___UpdateTimer_0;
	// System.Single UnityHttp.Http::TimerLimit
	float ___TimerLimit_1;
	// UnityHttp.HttpRequest UnityHttp.Http::LastRequest
	HttpRequest_t2628413021 * ___LastRequest_2;
	// UnityHttp.HttpRequest UnityHttp.Http::FirstRequest
	HttpRequest_t2628413021 * ___FirstRequest_3;
	// System.Int32 UnityHttp.Http::CurrentActiveRequests
	int32_t ___CurrentActiveRequests_4;
	// UnityHttp.HttpRequest UnityHttp.Http::LastWaitingRequest
	HttpRequest_t2628413021 * ___LastWaitingRequest_5;
	// UnityHttp.HttpRequest UnityHttp.Http::FirstWaitingRequest
	HttpRequest_t2628413021 * ___FirstWaitingRequest_6;
	// System.Int32 UnityHttp.Http::MaxSimultaneousRequests
	int32_t ___MaxSimultaneousRequests_7;

public:
	inline static int32_t get_offset_of_UpdateTimer_0() { return static_cast<int32_t>(offsetof(Http_t1384063462_StaticFields, ___UpdateTimer_0)); }
	inline float get_UpdateTimer_0() const { return ___UpdateTimer_0; }
	inline float* get_address_of_UpdateTimer_0() { return &___UpdateTimer_0; }
	inline void set_UpdateTimer_0(float value)
	{
		___UpdateTimer_0 = value;
	}

	inline static int32_t get_offset_of_TimerLimit_1() { return static_cast<int32_t>(offsetof(Http_t1384063462_StaticFields, ___TimerLimit_1)); }
	inline float get_TimerLimit_1() const { return ___TimerLimit_1; }
	inline float* get_address_of_TimerLimit_1() { return &___TimerLimit_1; }
	inline void set_TimerLimit_1(float value)
	{
		___TimerLimit_1 = value;
	}

	inline static int32_t get_offset_of_LastRequest_2() { return static_cast<int32_t>(offsetof(Http_t1384063462_StaticFields, ___LastRequest_2)); }
	inline HttpRequest_t2628413021 * get_LastRequest_2() const { return ___LastRequest_2; }
	inline HttpRequest_t2628413021 ** get_address_of_LastRequest_2() { return &___LastRequest_2; }
	inline void set_LastRequest_2(HttpRequest_t2628413021 * value)
	{
		___LastRequest_2 = value;
		Il2CppCodeGenWriteBarrier(&___LastRequest_2, value);
	}

	inline static int32_t get_offset_of_FirstRequest_3() { return static_cast<int32_t>(offsetof(Http_t1384063462_StaticFields, ___FirstRequest_3)); }
	inline HttpRequest_t2628413021 * get_FirstRequest_3() const { return ___FirstRequest_3; }
	inline HttpRequest_t2628413021 ** get_address_of_FirstRequest_3() { return &___FirstRequest_3; }
	inline void set_FirstRequest_3(HttpRequest_t2628413021 * value)
	{
		___FirstRequest_3 = value;
		Il2CppCodeGenWriteBarrier(&___FirstRequest_3, value);
	}

	inline static int32_t get_offset_of_CurrentActiveRequests_4() { return static_cast<int32_t>(offsetof(Http_t1384063462_StaticFields, ___CurrentActiveRequests_4)); }
	inline int32_t get_CurrentActiveRequests_4() const { return ___CurrentActiveRequests_4; }
	inline int32_t* get_address_of_CurrentActiveRequests_4() { return &___CurrentActiveRequests_4; }
	inline void set_CurrentActiveRequests_4(int32_t value)
	{
		___CurrentActiveRequests_4 = value;
	}

	inline static int32_t get_offset_of_LastWaitingRequest_5() { return static_cast<int32_t>(offsetof(Http_t1384063462_StaticFields, ___LastWaitingRequest_5)); }
	inline HttpRequest_t2628413021 * get_LastWaitingRequest_5() const { return ___LastWaitingRequest_5; }
	inline HttpRequest_t2628413021 ** get_address_of_LastWaitingRequest_5() { return &___LastWaitingRequest_5; }
	inline void set_LastWaitingRequest_5(HttpRequest_t2628413021 * value)
	{
		___LastWaitingRequest_5 = value;
		Il2CppCodeGenWriteBarrier(&___LastWaitingRequest_5, value);
	}

	inline static int32_t get_offset_of_FirstWaitingRequest_6() { return static_cast<int32_t>(offsetof(Http_t1384063462_StaticFields, ___FirstWaitingRequest_6)); }
	inline HttpRequest_t2628413021 * get_FirstWaitingRequest_6() const { return ___FirstWaitingRequest_6; }
	inline HttpRequest_t2628413021 ** get_address_of_FirstWaitingRequest_6() { return &___FirstWaitingRequest_6; }
	inline void set_FirstWaitingRequest_6(HttpRequest_t2628413021 * value)
	{
		___FirstWaitingRequest_6 = value;
		Il2CppCodeGenWriteBarrier(&___FirstWaitingRequest_6, value);
	}

	inline static int32_t get_offset_of_MaxSimultaneousRequests_7() { return static_cast<int32_t>(offsetof(Http_t1384063462_StaticFields, ___MaxSimultaneousRequests_7)); }
	inline int32_t get_MaxSimultaneousRequests_7() const { return ___MaxSimultaneousRequests_7; }
	inline int32_t* get_address_of_MaxSimultaneousRequests_7() { return &___MaxSimultaneousRequests_7; }
	inline void set_MaxSimultaneousRequests_7(int32_t value)
	{
		___MaxSimultaneousRequests_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
