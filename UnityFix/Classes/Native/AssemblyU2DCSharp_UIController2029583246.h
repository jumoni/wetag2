#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_UIController_OnHideAction3078843476.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// UnityEngine.Events.UnityEvent
struct UnityEvent_t408735097;
// UnityEngine.Animator
struct Animator_t69676727;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIController
struct  UIController_t2029583246  : public MonoBehaviour_t1158329972
{
public:
	// UIController/OnHideAction UIController::onHideAction
	int32_t ___onHideAction_2;
	// UnityEngine.Events.UnityEvent UIController::m_OnShow
	UnityEvent_t408735097 * ___m_OnShow_3;
	// UnityEngine.Events.UnityEvent UIController::m_OnHide
	UnityEvent_t408735097 * ___m_OnHide_4;
	// UnityEngine.Events.UnityEvent UIController::m_DisposableOnShow
	UnityEvent_t408735097 * ___m_DisposableOnShow_5;
	// UnityEngine.Events.UnityEvent UIController::m_DisposableOnHide
	UnityEvent_t408735097 * ___m_DisposableOnHide_6;
	// UnityEngine.Animator UIController::m_Animator
	Animator_t69676727 * ___m_Animator_7;
	// UnityEngine.Vector3 UIController::m_TempSaveScale
	Vector3_t2243707580  ___m_TempSaveScale_8;

public:
	inline static int32_t get_offset_of_onHideAction_2() { return static_cast<int32_t>(offsetof(UIController_t2029583246, ___onHideAction_2)); }
	inline int32_t get_onHideAction_2() const { return ___onHideAction_2; }
	inline int32_t* get_address_of_onHideAction_2() { return &___onHideAction_2; }
	inline void set_onHideAction_2(int32_t value)
	{
		___onHideAction_2 = value;
	}

	inline static int32_t get_offset_of_m_OnShow_3() { return static_cast<int32_t>(offsetof(UIController_t2029583246, ___m_OnShow_3)); }
	inline UnityEvent_t408735097 * get_m_OnShow_3() const { return ___m_OnShow_3; }
	inline UnityEvent_t408735097 ** get_address_of_m_OnShow_3() { return &___m_OnShow_3; }
	inline void set_m_OnShow_3(UnityEvent_t408735097 * value)
	{
		___m_OnShow_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_OnShow_3, value);
	}

	inline static int32_t get_offset_of_m_OnHide_4() { return static_cast<int32_t>(offsetof(UIController_t2029583246, ___m_OnHide_4)); }
	inline UnityEvent_t408735097 * get_m_OnHide_4() const { return ___m_OnHide_4; }
	inline UnityEvent_t408735097 ** get_address_of_m_OnHide_4() { return &___m_OnHide_4; }
	inline void set_m_OnHide_4(UnityEvent_t408735097 * value)
	{
		___m_OnHide_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_OnHide_4, value);
	}

	inline static int32_t get_offset_of_m_DisposableOnShow_5() { return static_cast<int32_t>(offsetof(UIController_t2029583246, ___m_DisposableOnShow_5)); }
	inline UnityEvent_t408735097 * get_m_DisposableOnShow_5() const { return ___m_DisposableOnShow_5; }
	inline UnityEvent_t408735097 ** get_address_of_m_DisposableOnShow_5() { return &___m_DisposableOnShow_5; }
	inline void set_m_DisposableOnShow_5(UnityEvent_t408735097 * value)
	{
		___m_DisposableOnShow_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_DisposableOnShow_5, value);
	}

	inline static int32_t get_offset_of_m_DisposableOnHide_6() { return static_cast<int32_t>(offsetof(UIController_t2029583246, ___m_DisposableOnHide_6)); }
	inline UnityEvent_t408735097 * get_m_DisposableOnHide_6() const { return ___m_DisposableOnHide_6; }
	inline UnityEvent_t408735097 ** get_address_of_m_DisposableOnHide_6() { return &___m_DisposableOnHide_6; }
	inline void set_m_DisposableOnHide_6(UnityEvent_t408735097 * value)
	{
		___m_DisposableOnHide_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_DisposableOnHide_6, value);
	}

	inline static int32_t get_offset_of_m_Animator_7() { return static_cast<int32_t>(offsetof(UIController_t2029583246, ___m_Animator_7)); }
	inline Animator_t69676727 * get_m_Animator_7() const { return ___m_Animator_7; }
	inline Animator_t69676727 ** get_address_of_m_Animator_7() { return &___m_Animator_7; }
	inline void set_m_Animator_7(Animator_t69676727 * value)
	{
		___m_Animator_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_Animator_7, value);
	}

	inline static int32_t get_offset_of_m_TempSaveScale_8() { return static_cast<int32_t>(offsetof(UIController_t2029583246, ___m_TempSaveScale_8)); }
	inline Vector3_t2243707580  get_m_TempSaveScale_8() const { return ___m_TempSaveScale_8; }
	inline Vector3_t2243707580 * get_address_of_m_TempSaveScale_8() { return &___m_TempSaveScale_8; }
	inline void set_m_TempSaveScale_8(Vector3_t2243707580  value)
	{
		___m_TempSaveScale_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
