#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Exception1927440687.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Nitro.CompilationException
struct  CompilationException_t1357493542  : public Exception_t1927440687
{
public:
	// System.Int32 Nitro.CompilationException::LineNumber
	int32_t ___LineNumber_11;

public:
	inline static int32_t get_offset_of_LineNumber_11() { return static_cast<int32_t>(offsetof(CompilationException_t1357493542, ___LineNumber_11)); }
	inline int32_t get_LineNumber_11() const { return ___LineNumber_11; }
	inline int32_t* get_address_of_LineNumber_11() { return &___LineNumber_11; }
	inline void set_LineNumber_11(int32_t value)
	{
		___LineNumber_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
