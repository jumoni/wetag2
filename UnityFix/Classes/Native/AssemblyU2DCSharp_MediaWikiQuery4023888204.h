#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// WikiItem[]
struct WikiItemU5BU5D_t2702536874;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MediaWikiQuery
struct  MediaWikiQuery_t4023888204  : public Il2CppObject
{
public:
	// WikiItem[] MediaWikiQuery::pages
	WikiItemU5BU5D_t2702536874* ___pages_0;

public:
	inline static int32_t get_offset_of_pages_0() { return static_cast<int32_t>(offsetof(MediaWikiQuery_t4023888204, ___pages_0)); }
	inline WikiItemU5BU5D_t2702536874* get_pages_0() const { return ___pages_0; }
	inline WikiItemU5BU5D_t2702536874** get_address_of_pages_0() { return &___pages_0; }
	inline void set_pages_0(WikiItemU5BU5D_t2702536874* value)
	{
		___pages_0 = value;
		Il2CppCodeGenWriteBarrier(&___pages_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
