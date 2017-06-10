#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_AnimatorStateInfo2577870592.h"

// UIController
struct UIController_t2029583246;
// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIControllerStateMachine/<WaitForSendMessage>c__Iterator0
struct  U3CWaitForSendMessageU3Ec__Iterator0_t3093062903  : public Il2CppObject
{
public:
	// UnityEngine.AnimatorStateInfo UIControllerStateMachine/<WaitForSendMessage>c__Iterator0::stateInfo
	AnimatorStateInfo_t2577870592  ___stateInfo_0;
	// UIController UIControllerStateMachine/<WaitForSendMessage>c__Iterator0::uiController
	UIController_t2029583246 * ___uiController_1;
	// System.Object UIControllerStateMachine/<WaitForSendMessage>c__Iterator0::$current
	Il2CppObject * ___U24current_2;
	// System.Boolean UIControllerStateMachine/<WaitForSendMessage>c__Iterator0::$disposing
	bool ___U24disposing_3;
	// System.Int32 UIControllerStateMachine/<WaitForSendMessage>c__Iterator0::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_stateInfo_0() { return static_cast<int32_t>(offsetof(U3CWaitForSendMessageU3Ec__Iterator0_t3093062903, ___stateInfo_0)); }
	inline AnimatorStateInfo_t2577870592  get_stateInfo_0() const { return ___stateInfo_0; }
	inline AnimatorStateInfo_t2577870592 * get_address_of_stateInfo_0() { return &___stateInfo_0; }
	inline void set_stateInfo_0(AnimatorStateInfo_t2577870592  value)
	{
		___stateInfo_0 = value;
	}

	inline static int32_t get_offset_of_uiController_1() { return static_cast<int32_t>(offsetof(U3CWaitForSendMessageU3Ec__Iterator0_t3093062903, ___uiController_1)); }
	inline UIController_t2029583246 * get_uiController_1() const { return ___uiController_1; }
	inline UIController_t2029583246 ** get_address_of_uiController_1() { return &___uiController_1; }
	inline void set_uiController_1(UIController_t2029583246 * value)
	{
		___uiController_1 = value;
		Il2CppCodeGenWriteBarrier(&___uiController_1, value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CWaitForSendMessageU3Ec__Iterator0_t3093062903, ___U24current_2)); }
	inline Il2CppObject * get_U24current_2() const { return ___U24current_2; }
	inline Il2CppObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(Il2CppObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_2, value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CWaitForSendMessageU3Ec__Iterator0_t3093062903, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CWaitForSendMessageU3Ec__Iterator0_t3093062903, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
