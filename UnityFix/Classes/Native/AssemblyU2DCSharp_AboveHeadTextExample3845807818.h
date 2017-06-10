#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AboveHeadTextExample
struct  AboveHeadTextExample_t3845807818  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject AboveHeadTextExample::WhiteCubesMessageNode
	GameObject_t1756533147 * ___WhiteCubesMessageNode_2;
	// UnityEngine.GameObject AboveHeadTextExample::BlackCubesMessageNode
	GameObject_t1756533147 * ___BlackCubesMessageNode_3;

public:
	inline static int32_t get_offset_of_WhiteCubesMessageNode_2() { return static_cast<int32_t>(offsetof(AboveHeadTextExample_t3845807818, ___WhiteCubesMessageNode_2)); }
	inline GameObject_t1756533147 * get_WhiteCubesMessageNode_2() const { return ___WhiteCubesMessageNode_2; }
	inline GameObject_t1756533147 ** get_address_of_WhiteCubesMessageNode_2() { return &___WhiteCubesMessageNode_2; }
	inline void set_WhiteCubesMessageNode_2(GameObject_t1756533147 * value)
	{
		___WhiteCubesMessageNode_2 = value;
		Il2CppCodeGenWriteBarrier(&___WhiteCubesMessageNode_2, value);
	}

	inline static int32_t get_offset_of_BlackCubesMessageNode_3() { return static_cast<int32_t>(offsetof(AboveHeadTextExample_t3845807818, ___BlackCubesMessageNode_3)); }
	inline GameObject_t1756533147 * get_BlackCubesMessageNode_3() const { return ___BlackCubesMessageNode_3; }
	inline GameObject_t1756533147 ** get_address_of_BlackCubesMessageNode_3() { return &___BlackCubesMessageNode_3; }
	inline void set_BlackCubesMessageNode_3(GameObject_t1756533147 * value)
	{
		___BlackCubesMessageNode_3 = value;
		Il2CppCodeGenWriteBarrier(&___BlackCubesMessageNode_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
