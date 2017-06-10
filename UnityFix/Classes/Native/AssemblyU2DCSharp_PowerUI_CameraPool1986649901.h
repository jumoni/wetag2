#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// PowerUI.UICamera
struct UICamera_t701229601;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUI.CameraPool
struct  CameraPool_t1986649901  : public Il2CppObject
{
public:
	// System.Boolean PowerUI.CameraPool::DidLayout
	bool ___DidLayout_0;
	// System.Int32 PowerUI.CameraPool::CameraDepth
	int32_t ___CameraDepth_1;
	// PowerUI.UICamera PowerUI.CameraPool::LastCamera
	UICamera_t701229601 * ___LastCamera_2;
	// PowerUI.UICamera PowerUI.CameraPool::FirstCamera
	UICamera_t701229601 * ___FirstCamera_3;
	// System.Boolean PowerUI.CameraPool::CameraRequested
	bool ___CameraRequested_4;
	// PowerUI.UICamera PowerUI.CameraPool::LastPoolCamera
	UICamera_t701229601 * ___LastPoolCamera_5;
	// PowerUI.UICamera PowerUI.CameraPool::FirstPoolCamera
	UICamera_t701229601 * ___FirstPoolCamera_6;

public:
	inline static int32_t get_offset_of_DidLayout_0() { return static_cast<int32_t>(offsetof(CameraPool_t1986649901, ___DidLayout_0)); }
	inline bool get_DidLayout_0() const { return ___DidLayout_0; }
	inline bool* get_address_of_DidLayout_0() { return &___DidLayout_0; }
	inline void set_DidLayout_0(bool value)
	{
		___DidLayout_0 = value;
	}

	inline static int32_t get_offset_of_CameraDepth_1() { return static_cast<int32_t>(offsetof(CameraPool_t1986649901, ___CameraDepth_1)); }
	inline int32_t get_CameraDepth_1() const { return ___CameraDepth_1; }
	inline int32_t* get_address_of_CameraDepth_1() { return &___CameraDepth_1; }
	inline void set_CameraDepth_1(int32_t value)
	{
		___CameraDepth_1 = value;
	}

	inline static int32_t get_offset_of_LastCamera_2() { return static_cast<int32_t>(offsetof(CameraPool_t1986649901, ___LastCamera_2)); }
	inline UICamera_t701229601 * get_LastCamera_2() const { return ___LastCamera_2; }
	inline UICamera_t701229601 ** get_address_of_LastCamera_2() { return &___LastCamera_2; }
	inline void set_LastCamera_2(UICamera_t701229601 * value)
	{
		___LastCamera_2 = value;
		Il2CppCodeGenWriteBarrier(&___LastCamera_2, value);
	}

	inline static int32_t get_offset_of_FirstCamera_3() { return static_cast<int32_t>(offsetof(CameraPool_t1986649901, ___FirstCamera_3)); }
	inline UICamera_t701229601 * get_FirstCamera_3() const { return ___FirstCamera_3; }
	inline UICamera_t701229601 ** get_address_of_FirstCamera_3() { return &___FirstCamera_3; }
	inline void set_FirstCamera_3(UICamera_t701229601 * value)
	{
		___FirstCamera_3 = value;
		Il2CppCodeGenWriteBarrier(&___FirstCamera_3, value);
	}

	inline static int32_t get_offset_of_CameraRequested_4() { return static_cast<int32_t>(offsetof(CameraPool_t1986649901, ___CameraRequested_4)); }
	inline bool get_CameraRequested_4() const { return ___CameraRequested_4; }
	inline bool* get_address_of_CameraRequested_4() { return &___CameraRequested_4; }
	inline void set_CameraRequested_4(bool value)
	{
		___CameraRequested_4 = value;
	}

	inline static int32_t get_offset_of_LastPoolCamera_5() { return static_cast<int32_t>(offsetof(CameraPool_t1986649901, ___LastPoolCamera_5)); }
	inline UICamera_t701229601 * get_LastPoolCamera_5() const { return ___LastPoolCamera_5; }
	inline UICamera_t701229601 ** get_address_of_LastPoolCamera_5() { return &___LastPoolCamera_5; }
	inline void set_LastPoolCamera_5(UICamera_t701229601 * value)
	{
		___LastPoolCamera_5 = value;
		Il2CppCodeGenWriteBarrier(&___LastPoolCamera_5, value);
	}

	inline static int32_t get_offset_of_FirstPoolCamera_6() { return static_cast<int32_t>(offsetof(CameraPool_t1986649901, ___FirstPoolCamera_6)); }
	inline UICamera_t701229601 * get_FirstPoolCamera_6() const { return ___FirstPoolCamera_6; }
	inline UICamera_t701229601 ** get_address_of_FirstPoolCamera_6() { return &___FirstPoolCamera_6; }
	inline void set_FirstPoolCamera_6(UICamera_t701229601 * value)
	{
		___FirstPoolCamera_6 = value;
		Il2CppCodeGenWriteBarrier(&___FirstPoolCamera_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
