#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_PowerUI_ImageFormat2004029426.h"

// PowerUI.SPA
struct SPA_t2053324408;
// PowerUI.SPAInstance
struct SPAInstance_t4182545695;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.SpaFormat
struct  SpaFormat_t1394601931  : public ImageFormat_t2004029426
{
public:
	// PowerUI.SPA PowerUI.SpaFormat::SPAFile
	SPA_t2053324408 * ___SPAFile_0;
	// PowerUI.SPAInstance PowerUI.SpaFormat::Animation
	SPAInstance_t4182545695 * ___Animation_1;

public:
	inline static int32_t get_offset_of_SPAFile_0() { return static_cast<int32_t>(offsetof(SpaFormat_t1394601931, ___SPAFile_0)); }
	inline SPA_t2053324408 * get_SPAFile_0() const { return ___SPAFile_0; }
	inline SPA_t2053324408 ** get_address_of_SPAFile_0() { return &___SPAFile_0; }
	inline void set_SPAFile_0(SPA_t2053324408 * value)
	{
		___SPAFile_0 = value;
		Il2CppCodeGenWriteBarrier(&___SPAFile_0, value);
	}

	inline static int32_t get_offset_of_Animation_1() { return static_cast<int32_t>(offsetof(SpaFormat_t1394601931, ___Animation_1)); }
	inline SPAInstance_t4182545695 * get_Animation_1() const { return ___Animation_1; }
	inline SPAInstance_t4182545695 ** get_address_of_Animation_1() { return &___Animation_1; }
	inline void set_Animation_1(SPAInstance_t4182545695 * value)
	{
		___Animation_1 = value;
		Il2CppCodeGenWriteBarrier(&___Animation_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
