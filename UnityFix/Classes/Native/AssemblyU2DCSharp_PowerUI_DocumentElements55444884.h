#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// PowerUI.Document
struct Document_t1565145681;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.DocumentElements
struct  DocumentElements_t55444884  : public Il2CppObject
{
public:
	// PowerUI.Document PowerUI.DocumentElements::Document
	Document_t1565145681 * ___Document_0;
	// System.Boolean PowerUI.DocumentElements::SkipChildren
	bool ___SkipChildren_1;

public:
	inline static int32_t get_offset_of_Document_0() { return static_cast<int32_t>(offsetof(DocumentElements_t55444884, ___Document_0)); }
	inline Document_t1565145681 * get_Document_0() const { return ___Document_0; }
	inline Document_t1565145681 ** get_address_of_Document_0() { return &___Document_0; }
	inline void set_Document_0(Document_t1565145681 * value)
	{
		___Document_0 = value;
		Il2CppCodeGenWriteBarrier(&___Document_0, value);
	}

	inline static int32_t get_offset_of_SkipChildren_1() { return static_cast<int32_t>(offsetof(DocumentElements_t55444884, ___SkipChildren_1)); }
	inline bool get_SkipChildren_1() const { return ___SkipChildren_1; }
	inline bool* get_address_of_SkipChildren_1() { return &___SkipChildren_1; }
	inline void set_SkipChildren_1(bool value)
	{
		___SkipChildren_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
