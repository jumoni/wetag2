#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// PowerUI.Element
struct Element_t3532621832;
// PowerUI.MeshBlock
struct MeshBlock_t2290159688;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.Css.DisplayableProperty
struct  DisplayableProperty_t2567878243  : public Il2CppObject
{
public:
	// System.Boolean PowerUI.Css.DisplayableProperty::Visible
	bool ___Visible_0;
	// System.Boolean PowerUI.Css.DisplayableProperty::Changed
	bool ___Changed_1;
	// System.Boolean PowerUI.Css.DisplayableProperty::Isolated
	bool ___Isolated_2;
	// System.Int32 PowerUI.Css.DisplayableProperty::BlockCount
	int32_t ___BlockCount_3;
	// PowerUI.Element PowerUI.Css.DisplayableProperty::Element
	Element_t3532621832 * ___Element_4;
	// PowerUI.MeshBlock PowerUI.Css.DisplayableProperty::FirstBlock
	MeshBlock_t2290159688 * ___FirstBlock_5;
	// System.Boolean PowerUI.Css.DisplayableProperty::GotBatchAlready
	bool ___GotBatchAlready_6;

public:
	inline static int32_t get_offset_of_Visible_0() { return static_cast<int32_t>(offsetof(DisplayableProperty_t2567878243, ___Visible_0)); }
	inline bool get_Visible_0() const { return ___Visible_0; }
	inline bool* get_address_of_Visible_0() { return &___Visible_0; }
	inline void set_Visible_0(bool value)
	{
		___Visible_0 = value;
	}

	inline static int32_t get_offset_of_Changed_1() { return static_cast<int32_t>(offsetof(DisplayableProperty_t2567878243, ___Changed_1)); }
	inline bool get_Changed_1() const { return ___Changed_1; }
	inline bool* get_address_of_Changed_1() { return &___Changed_1; }
	inline void set_Changed_1(bool value)
	{
		___Changed_1 = value;
	}

	inline static int32_t get_offset_of_Isolated_2() { return static_cast<int32_t>(offsetof(DisplayableProperty_t2567878243, ___Isolated_2)); }
	inline bool get_Isolated_2() const { return ___Isolated_2; }
	inline bool* get_address_of_Isolated_2() { return &___Isolated_2; }
	inline void set_Isolated_2(bool value)
	{
		___Isolated_2 = value;
	}

	inline static int32_t get_offset_of_BlockCount_3() { return static_cast<int32_t>(offsetof(DisplayableProperty_t2567878243, ___BlockCount_3)); }
	inline int32_t get_BlockCount_3() const { return ___BlockCount_3; }
	inline int32_t* get_address_of_BlockCount_3() { return &___BlockCount_3; }
	inline void set_BlockCount_3(int32_t value)
	{
		___BlockCount_3 = value;
	}

	inline static int32_t get_offset_of_Element_4() { return static_cast<int32_t>(offsetof(DisplayableProperty_t2567878243, ___Element_4)); }
	inline Element_t3532621832 * get_Element_4() const { return ___Element_4; }
	inline Element_t3532621832 ** get_address_of_Element_4() { return &___Element_4; }
	inline void set_Element_4(Element_t3532621832 * value)
	{
		___Element_4 = value;
		Il2CppCodeGenWriteBarrier(&___Element_4, value);
	}

	inline static int32_t get_offset_of_FirstBlock_5() { return static_cast<int32_t>(offsetof(DisplayableProperty_t2567878243, ___FirstBlock_5)); }
	inline MeshBlock_t2290159688 * get_FirstBlock_5() const { return ___FirstBlock_5; }
	inline MeshBlock_t2290159688 ** get_address_of_FirstBlock_5() { return &___FirstBlock_5; }
	inline void set_FirstBlock_5(MeshBlock_t2290159688 * value)
	{
		___FirstBlock_5 = value;
		Il2CppCodeGenWriteBarrier(&___FirstBlock_5, value);
	}

	inline static int32_t get_offset_of_GotBatchAlready_6() { return static_cast<int32_t>(offsetof(DisplayableProperty_t2567878243, ___GotBatchAlready_6)); }
	inline bool get_GotBatchAlready_6() const { return ___GotBatchAlready_6; }
	inline bool* get_address_of_GotBatchAlready_6() { return &___GotBatchAlready_6; }
	inline void set_GotBatchAlready_6(bool value)
	{
		___GotBatchAlready_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
