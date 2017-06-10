#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_PowerUI_ErrorInfo133775252.h"

// UnityHttp.HttpRequest
struct HttpRequest_t2628413021;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.HttpErrorInfo
struct  HttpErrorInfo_t2385698500  : public ErrorInfo_t133775252
{
public:
	// UnityHttp.HttpRequest PowerUI.HttpErrorInfo::Request
	HttpRequest_t2628413021 * ___Request_2;

public:
	inline static int32_t get_offset_of_Request_2() { return static_cast<int32_t>(offsetof(HttpErrorInfo_t2385698500, ___Request_2)); }
	inline HttpRequest_t2628413021 * get_Request_2() const { return ___Request_2; }
	inline HttpRequest_t2628413021 ** get_address_of_Request_2() { return &___Request_2; }
	inline void set_Request_2(HttpRequest_t2628413021 * value)
	{
		___Request_2 = value;
		Il2CppCodeGenWriteBarrier(&___Request_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
