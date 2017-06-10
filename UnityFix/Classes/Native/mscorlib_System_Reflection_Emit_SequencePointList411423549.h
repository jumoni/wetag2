#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Diagnostics.SymbolStore.ISymbolDocumentWriter
struct ISymbolDocumentWriter_t1638791443;
// System.Reflection.Emit.SequencePoint[]
struct SequencePointU5BU5D_t1811962144;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.SequencePointList
struct  SequencePointList_t411423549  : public Il2CppObject
{
public:
	// System.Diagnostics.SymbolStore.ISymbolDocumentWriter System.Reflection.Emit.SequencePointList::doc
	Il2CppObject * ___doc_0;
	// System.Reflection.Emit.SequencePoint[] System.Reflection.Emit.SequencePointList::points
	SequencePointU5BU5D_t1811962144* ___points_1;
	// System.Int32 System.Reflection.Emit.SequencePointList::count
	int32_t ___count_2;

public:
	inline static int32_t get_offset_of_doc_0() { return static_cast<int32_t>(offsetof(SequencePointList_t411423549, ___doc_0)); }
	inline Il2CppObject * get_doc_0() const { return ___doc_0; }
	inline Il2CppObject ** get_address_of_doc_0() { return &___doc_0; }
	inline void set_doc_0(Il2CppObject * value)
	{
		___doc_0 = value;
		Il2CppCodeGenWriteBarrier(&___doc_0, value);
	}

	inline static int32_t get_offset_of_points_1() { return static_cast<int32_t>(offsetof(SequencePointList_t411423549, ___points_1)); }
	inline SequencePointU5BU5D_t1811962144* get_points_1() const { return ___points_1; }
	inline SequencePointU5BU5D_t1811962144** get_address_of_points_1() { return &___points_1; }
	inline void set_points_1(SequencePointU5BU5D_t1811962144* value)
	{
		___points_1 = value;
		Il2CppCodeGenWriteBarrier(&___points_1, value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(SequencePointList_t411423549, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
