#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Blaze_VectorPoint2643135013.h"

// Blaze.VectorPoint
struct VectorPoint_t2643135013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Blaze.MoveToPoint
struct  MoveToPoint_t685491956  : public VectorPoint_t2643135013
{
public:
	// Blaze.VectorPoint Blaze.MoveToPoint::ClosePoint
	VectorPoint_t2643135013 * ___ClosePoint_6;

public:
	inline static int32_t get_offset_of_ClosePoint_6() { return static_cast<int32_t>(offsetof(MoveToPoint_t685491956, ___ClosePoint_6)); }
	inline VectorPoint_t2643135013 * get_ClosePoint_6() const { return ___ClosePoint_6; }
	inline VectorPoint_t2643135013 ** get_address_of_ClosePoint_6() { return &___ClosePoint_6; }
	inline void set_ClosePoint_6(VectorPoint_t2643135013 * value)
	{
		___ClosePoint_6 = value;
		Il2CppCodeGenWriteBarrier(&___ClosePoint_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
