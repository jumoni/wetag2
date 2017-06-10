#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_PowerUI_Element3532621832.h"

// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1642385972;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.VariableElement
struct  VariableElement_t1565218558  : public Element_t3532621832
{
public:
	// System.String PowerUI.VariableElement::Name
	String_t* ___Name_27;
	// System.String[] PowerUI.VariableElement::Arguments
	StringU5BU5D_t1642385972* ___Arguments_28;

public:
	inline static int32_t get_offset_of_Name_27() { return static_cast<int32_t>(offsetof(VariableElement_t1565218558, ___Name_27)); }
	inline String_t* get_Name_27() const { return ___Name_27; }
	inline String_t** get_address_of_Name_27() { return &___Name_27; }
	inline void set_Name_27(String_t* value)
	{
		___Name_27 = value;
		Il2CppCodeGenWriteBarrier(&___Name_27, value);
	}

	inline static int32_t get_offset_of_Arguments_28() { return static_cast<int32_t>(offsetof(VariableElement_t1565218558, ___Arguments_28)); }
	inline StringU5BU5D_t1642385972* get_Arguments_28() const { return ___Arguments_28; }
	inline StringU5BU5D_t1642385972** get_address_of_Arguments_28() { return &___Arguments_28; }
	inline void set_Arguments_28(StringU5BU5D_t1642385972* value)
	{
		___Arguments_28 = value;
		Il2CppCodeGenWriteBarrier(&___Arguments_28, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
