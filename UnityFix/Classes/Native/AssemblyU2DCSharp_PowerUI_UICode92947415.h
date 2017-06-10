#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Nitro_Script3910856297.h"

// PowerUI.Element
struct Element_t3532621832;
// PowerUI.Window
struct Window_t3494270094;
// PowerUI.Document
struct Document_t1565145681;
// Nitro.NitroCode
struct NitroCode_t2482140973;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.UICode
struct  UICode_t92947415  : public Script_t3910856297
{
public:
	// PowerUI.Element PowerUI.UICode::This
	Element_t3532621832 * ___This_0;
	// PowerUI.Window PowerUI.UICode::window
	Window_t3494270094 * ___window_1;
	// PowerUI.Document PowerUI.UICode::document
	Document_t1565145681 * ___document_2;
	// Nitro.NitroCode PowerUI.UICode::BaseScript
	NitroCode_t2482140973 * ___BaseScript_3;

public:
	inline static int32_t get_offset_of_This_0() { return static_cast<int32_t>(offsetof(UICode_t92947415, ___This_0)); }
	inline Element_t3532621832 * get_This_0() const { return ___This_0; }
	inline Element_t3532621832 ** get_address_of_This_0() { return &___This_0; }
	inline void set_This_0(Element_t3532621832 * value)
	{
		___This_0 = value;
		Il2CppCodeGenWriteBarrier(&___This_0, value);
	}

	inline static int32_t get_offset_of_window_1() { return static_cast<int32_t>(offsetof(UICode_t92947415, ___window_1)); }
	inline Window_t3494270094 * get_window_1() const { return ___window_1; }
	inline Window_t3494270094 ** get_address_of_window_1() { return &___window_1; }
	inline void set_window_1(Window_t3494270094 * value)
	{
		___window_1 = value;
		Il2CppCodeGenWriteBarrier(&___window_1, value);
	}

	inline static int32_t get_offset_of_document_2() { return static_cast<int32_t>(offsetof(UICode_t92947415, ___document_2)); }
	inline Document_t1565145681 * get_document_2() const { return ___document_2; }
	inline Document_t1565145681 ** get_address_of_document_2() { return &___document_2; }
	inline void set_document_2(Document_t1565145681 * value)
	{
		___document_2 = value;
		Il2CppCodeGenWriteBarrier(&___document_2, value);
	}

	inline static int32_t get_offset_of_BaseScript_3() { return static_cast<int32_t>(offsetof(UICode_t92947415, ___BaseScript_3)); }
	inline NitroCode_t2482140973 * get_BaseScript_3() const { return ___BaseScript_3; }
	inline NitroCode_t2482140973 ** get_address_of_BaseScript_3() { return &___BaseScript_3; }
	inline void set_BaseScript_3(NitroCode_t2482140973 * value)
	{
		___BaseScript_3 = value;
		Il2CppCodeGenWriteBarrier(&___BaseScript_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
