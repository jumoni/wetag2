#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.SortedList
struct SortedList_t3004938869;
// System.IO.Stream
struct Stream_t3255436806;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceWriter
struct  ResourceWriter_t3147478269  : public Il2CppObject
{
public:
	// System.Collections.SortedList System.Resources.ResourceWriter::resources
	SortedList_t3004938869 * ___resources_0;
	// System.IO.Stream System.Resources.ResourceWriter::stream
	Stream_t3255436806 * ___stream_1;

public:
	inline static int32_t get_offset_of_resources_0() { return static_cast<int32_t>(offsetof(ResourceWriter_t3147478269, ___resources_0)); }
	inline SortedList_t3004938869 * get_resources_0() const { return ___resources_0; }
	inline SortedList_t3004938869 ** get_address_of_resources_0() { return &___resources_0; }
	inline void set_resources_0(SortedList_t3004938869 * value)
	{
		___resources_0 = value;
		Il2CppCodeGenWriteBarrier(&___resources_0, value);
	}

	inline static int32_t get_offset_of_stream_1() { return static_cast<int32_t>(offsetof(ResourceWriter_t3147478269, ___stream_1)); }
	inline Stream_t3255436806 * get_stream_1() const { return ___stream_1; }
	inline Stream_t3255436806 ** get_address_of_stream_1() { return &___stream_1; }
	inline void set_stream_1(Stream_t3255436806 * value)
	{
		___stream_1 = value;
		Il2CppCodeGenWriteBarrier(&___stream_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
