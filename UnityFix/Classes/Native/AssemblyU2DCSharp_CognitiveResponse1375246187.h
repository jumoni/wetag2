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
// Metadata
struct Metadata_t1180408955;
// Result
struct Result_t896113815;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CognitiveResponse
struct  CognitiveResponse_t1375246187  : public Il2CppObject
{
public:
	// System.String CognitiveResponse::requestId
	String_t* ___requestId_0;
	// Metadata CognitiveResponse::metadata
	Metadata_t1180408955 * ___metadata_1;
	// Result CognitiveResponse::result
	Result_t896113815 * ___result_2;

public:
	inline static int32_t get_offset_of_requestId_0() { return static_cast<int32_t>(offsetof(CognitiveResponse_t1375246187, ___requestId_0)); }
	inline String_t* get_requestId_0() const { return ___requestId_0; }
	inline String_t** get_address_of_requestId_0() { return &___requestId_0; }
	inline void set_requestId_0(String_t* value)
	{
		___requestId_0 = value;
		Il2CppCodeGenWriteBarrier(&___requestId_0, value);
	}

	inline static int32_t get_offset_of_metadata_1() { return static_cast<int32_t>(offsetof(CognitiveResponse_t1375246187, ___metadata_1)); }
	inline Metadata_t1180408955 * get_metadata_1() const { return ___metadata_1; }
	inline Metadata_t1180408955 ** get_address_of_metadata_1() { return &___metadata_1; }
	inline void set_metadata_1(Metadata_t1180408955 * value)
	{
		___metadata_1 = value;
		Il2CppCodeGenWriteBarrier(&___metadata_1, value);
	}

	inline static int32_t get_offset_of_result_2() { return static_cast<int32_t>(offsetof(CognitiveResponse_t1375246187, ___result_2)); }
	inline Result_t896113815 * get_result_2() const { return ___result_2; }
	inline Result_t896113815 ** get_address_of_result_2() { return &___result_2; }
	inline void set_result_2(Result_t896113815 * value)
	{
		___result_2 = value;
		Il2CppCodeGenWriteBarrier(&___result_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
