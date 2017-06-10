#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_PowerUI_ErrorInfo133775252.h"

// PowerUI.TextPackage
struct TextPackage_t1046029955;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.FileErrorInfo
struct  FileErrorInfo_t663603106  : public ErrorInfo_t133775252
{
public:
	// PowerUI.TextPackage PowerUI.FileErrorInfo::Package
	TextPackage_t1046029955 * ___Package_2;

public:
	inline static int32_t get_offset_of_Package_2() { return static_cast<int32_t>(offsetof(FileErrorInfo_t663603106, ___Package_2)); }
	inline TextPackage_t1046029955 * get_Package_2() const { return ___Package_2; }
	inline TextPackage_t1046029955 ** get_address_of_Package_2() { return &___Package_2; }
	inline void set_Package_2(TextPackage_t1046029955 * value)
	{
		___Package_2 = value;
		Il2CppCodeGenWriteBarrier(&___Package_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
