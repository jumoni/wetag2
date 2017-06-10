#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Nitro.TypeFragment
struct TypeFragment_t3643441850;
// Nitro.CodeFragment
struct CodeFragment_t4001624203;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Nitro.CodeFragment
struct  CodeFragment_t4001624203  : public Il2CppObject
{
public:
	// Nitro.TypeFragment Nitro.CodeFragment::GivenType
	TypeFragment_t3643441850 * ___GivenType_0;
	// Nitro.CodeFragment Nitro.CodeFragment::NextChild
	CodeFragment_t4001624203 * ___NextChild_1;
	// Nitro.CodeFragment Nitro.CodeFragment::LastChild
	CodeFragment_t4001624203 * ___LastChild_2;
	// Nitro.CodeFragment Nitro.CodeFragment::FirstChild
	CodeFragment_t4001624203 * ___FirstChild_3;
	// Nitro.CodeFragment Nitro.CodeFragment::PreviousChild
	CodeFragment_t4001624203 * ___PreviousChild_4;
	// Nitro.CodeFragment Nitro.CodeFragment::ParentFragment
	CodeFragment_t4001624203 * ___ParentFragment_5;

public:
	inline static int32_t get_offset_of_GivenType_0() { return static_cast<int32_t>(offsetof(CodeFragment_t4001624203, ___GivenType_0)); }
	inline TypeFragment_t3643441850 * get_GivenType_0() const { return ___GivenType_0; }
	inline TypeFragment_t3643441850 ** get_address_of_GivenType_0() { return &___GivenType_0; }
	inline void set_GivenType_0(TypeFragment_t3643441850 * value)
	{
		___GivenType_0 = value;
		Il2CppCodeGenWriteBarrier(&___GivenType_0, value);
	}

	inline static int32_t get_offset_of_NextChild_1() { return static_cast<int32_t>(offsetof(CodeFragment_t4001624203, ___NextChild_1)); }
	inline CodeFragment_t4001624203 * get_NextChild_1() const { return ___NextChild_1; }
	inline CodeFragment_t4001624203 ** get_address_of_NextChild_1() { return &___NextChild_1; }
	inline void set_NextChild_1(CodeFragment_t4001624203 * value)
	{
		___NextChild_1 = value;
		Il2CppCodeGenWriteBarrier(&___NextChild_1, value);
	}

	inline static int32_t get_offset_of_LastChild_2() { return static_cast<int32_t>(offsetof(CodeFragment_t4001624203, ___LastChild_2)); }
	inline CodeFragment_t4001624203 * get_LastChild_2() const { return ___LastChild_2; }
	inline CodeFragment_t4001624203 ** get_address_of_LastChild_2() { return &___LastChild_2; }
	inline void set_LastChild_2(CodeFragment_t4001624203 * value)
	{
		___LastChild_2 = value;
		Il2CppCodeGenWriteBarrier(&___LastChild_2, value);
	}

	inline static int32_t get_offset_of_FirstChild_3() { return static_cast<int32_t>(offsetof(CodeFragment_t4001624203, ___FirstChild_3)); }
	inline CodeFragment_t4001624203 * get_FirstChild_3() const { return ___FirstChild_3; }
	inline CodeFragment_t4001624203 ** get_address_of_FirstChild_3() { return &___FirstChild_3; }
	inline void set_FirstChild_3(CodeFragment_t4001624203 * value)
	{
		___FirstChild_3 = value;
		Il2CppCodeGenWriteBarrier(&___FirstChild_3, value);
	}

	inline static int32_t get_offset_of_PreviousChild_4() { return static_cast<int32_t>(offsetof(CodeFragment_t4001624203, ___PreviousChild_4)); }
	inline CodeFragment_t4001624203 * get_PreviousChild_4() const { return ___PreviousChild_4; }
	inline CodeFragment_t4001624203 ** get_address_of_PreviousChild_4() { return &___PreviousChild_4; }
	inline void set_PreviousChild_4(CodeFragment_t4001624203 * value)
	{
		___PreviousChild_4 = value;
		Il2CppCodeGenWriteBarrier(&___PreviousChild_4, value);
	}

	inline static int32_t get_offset_of_ParentFragment_5() { return static_cast<int32_t>(offsetof(CodeFragment_t4001624203, ___ParentFragment_5)); }
	inline CodeFragment_t4001624203 * get_ParentFragment_5() const { return ___ParentFragment_5; }
	inline CodeFragment_t4001624203 ** get_address_of_ParentFragment_5() { return &___ParentFragment_5; }
	inline void set_ParentFragment_5(CodeFragment_t4001624203 * value)
	{
		___ParentFragment_5 = value;
		Il2CppCodeGenWriteBarrier(&___ParentFragment_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
