#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Blaze.MoveToPoint
struct MoveToPoint_t685491956;
// Blaze.VectorPoint
struct VectorPoint_t2643135013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Blaze.VectorPath
struct  VectorPath_t4108957350  : public Il2CppObject
{
public:
	// System.Boolean Blaze.VectorPath::HoleSorted
	bool ___HoleSorted_0;
	// System.Single Blaze.VectorPath::MinX
	float ___MinX_1;
	// System.Single Blaze.VectorPath::MinY
	float ___MinY_2;
	// System.Single Blaze.VectorPath::Width
	float ___Width_3;
	// System.Single Blaze.VectorPath::Height
	float ___Height_4;
	// System.Int32 Blaze.VectorPath::PathNodeCount
	int32_t ___PathNodeCount_5;
	// Blaze.MoveToPoint Blaze.VectorPath::CloseNode
	MoveToPoint_t685491956 * ___CloseNode_6;
	// Blaze.VectorPoint Blaze.VectorPath::FirstPathNode
	VectorPoint_t2643135013 * ___FirstPathNode_7;
	// Blaze.VectorPoint Blaze.VectorPath::LatestPathNode
	VectorPoint_t2643135013 * ___LatestPathNode_8;

public:
	inline static int32_t get_offset_of_HoleSorted_0() { return static_cast<int32_t>(offsetof(VectorPath_t4108957350, ___HoleSorted_0)); }
	inline bool get_HoleSorted_0() const { return ___HoleSorted_0; }
	inline bool* get_address_of_HoleSorted_0() { return &___HoleSorted_0; }
	inline void set_HoleSorted_0(bool value)
	{
		___HoleSorted_0 = value;
	}

	inline static int32_t get_offset_of_MinX_1() { return static_cast<int32_t>(offsetof(VectorPath_t4108957350, ___MinX_1)); }
	inline float get_MinX_1() const { return ___MinX_1; }
	inline float* get_address_of_MinX_1() { return &___MinX_1; }
	inline void set_MinX_1(float value)
	{
		___MinX_1 = value;
	}

	inline static int32_t get_offset_of_MinY_2() { return static_cast<int32_t>(offsetof(VectorPath_t4108957350, ___MinY_2)); }
	inline float get_MinY_2() const { return ___MinY_2; }
	inline float* get_address_of_MinY_2() { return &___MinY_2; }
	inline void set_MinY_2(float value)
	{
		___MinY_2 = value;
	}

	inline static int32_t get_offset_of_Width_3() { return static_cast<int32_t>(offsetof(VectorPath_t4108957350, ___Width_3)); }
	inline float get_Width_3() const { return ___Width_3; }
	inline float* get_address_of_Width_3() { return &___Width_3; }
	inline void set_Width_3(float value)
	{
		___Width_3 = value;
	}

	inline static int32_t get_offset_of_Height_4() { return static_cast<int32_t>(offsetof(VectorPath_t4108957350, ___Height_4)); }
	inline float get_Height_4() const { return ___Height_4; }
	inline float* get_address_of_Height_4() { return &___Height_4; }
	inline void set_Height_4(float value)
	{
		___Height_4 = value;
	}

	inline static int32_t get_offset_of_PathNodeCount_5() { return static_cast<int32_t>(offsetof(VectorPath_t4108957350, ___PathNodeCount_5)); }
	inline int32_t get_PathNodeCount_5() const { return ___PathNodeCount_5; }
	inline int32_t* get_address_of_PathNodeCount_5() { return &___PathNodeCount_5; }
	inline void set_PathNodeCount_5(int32_t value)
	{
		___PathNodeCount_5 = value;
	}

	inline static int32_t get_offset_of_CloseNode_6() { return static_cast<int32_t>(offsetof(VectorPath_t4108957350, ___CloseNode_6)); }
	inline MoveToPoint_t685491956 * get_CloseNode_6() const { return ___CloseNode_6; }
	inline MoveToPoint_t685491956 ** get_address_of_CloseNode_6() { return &___CloseNode_6; }
	inline void set_CloseNode_6(MoveToPoint_t685491956 * value)
	{
		___CloseNode_6 = value;
		Il2CppCodeGenWriteBarrier(&___CloseNode_6, value);
	}

	inline static int32_t get_offset_of_FirstPathNode_7() { return static_cast<int32_t>(offsetof(VectorPath_t4108957350, ___FirstPathNode_7)); }
	inline VectorPoint_t2643135013 * get_FirstPathNode_7() const { return ___FirstPathNode_7; }
	inline VectorPoint_t2643135013 ** get_address_of_FirstPathNode_7() { return &___FirstPathNode_7; }
	inline void set_FirstPathNode_7(VectorPoint_t2643135013 * value)
	{
		___FirstPathNode_7 = value;
		Il2CppCodeGenWriteBarrier(&___FirstPathNode_7, value);
	}

	inline static int32_t get_offset_of_LatestPathNode_8() { return static_cast<int32_t>(offsetof(VectorPath_t4108957350, ___LatestPathNode_8)); }
	inline VectorPoint_t2643135013 * get_LatestPathNode_8() const { return ___LatestPathNode_8; }
	inline VectorPoint_t2643135013 ** get_address_of_LatestPathNode_8() { return &___LatestPathNode_8; }
	inline void set_LatestPathNode_8(VectorPoint_t2643135013 * value)
	{
		___LatestPathNode_8 = value;
		Il2CppCodeGenWriteBarrier(&___LatestPathNode_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
