#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// MediaWikiQuery
struct MediaWikiQuery_t4023888204;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MediaWikiResult
struct  MediaWikiResult_t2952060107  : public Il2CppObject
{
public:
	// MediaWikiQuery MediaWikiResult::query
	MediaWikiQuery_t4023888204 * ___query_0;

public:
	inline static int32_t get_offset_of_query_0() { return static_cast<int32_t>(offsetof(MediaWikiResult_t2952060107, ___query_0)); }
	inline MediaWikiQuery_t4023888204 * get_query_0() const { return ___query_0; }
	inline MediaWikiQuery_t4023888204 ** get_address_of_query_0() { return &___query_0; }
	inline void set_query_0(MediaWikiQuery_t4023888204 * value)
	{
		___query_0 = value;
		Il2CppCodeGenWriteBarrier(&___query_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
