#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t1779888572;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DefaultTrackableEventHandler
struct  DefaultTrackableEventHandler_t1082256726  : public MonoBehaviour_t1158329972
{
public:
	// Vuforia.TrackableBehaviour Vuforia.DefaultTrackableEventHandler::mTrackableBehaviour
	TrackableBehaviour_t1779888572 * ___mTrackableBehaviour_2;
	// UnityEngine.Vector3 Vuforia.DefaultTrackableEventHandler::lastPos
	Vector3_t2243707580  ___lastPos_3;
	// System.Boolean Vuforia.DefaultTrackableEventHandler::first
	bool ___first_4;

public:
	inline static int32_t get_offset_of_mTrackableBehaviour_2() { return static_cast<int32_t>(offsetof(DefaultTrackableEventHandler_t1082256726, ___mTrackableBehaviour_2)); }
	inline TrackableBehaviour_t1779888572 * get_mTrackableBehaviour_2() const { return ___mTrackableBehaviour_2; }
	inline TrackableBehaviour_t1779888572 ** get_address_of_mTrackableBehaviour_2() { return &___mTrackableBehaviour_2; }
	inline void set_mTrackableBehaviour_2(TrackableBehaviour_t1779888572 * value)
	{
		___mTrackableBehaviour_2 = value;
		Il2CppCodeGenWriteBarrier(&___mTrackableBehaviour_2, value);
	}

	inline static int32_t get_offset_of_lastPos_3() { return static_cast<int32_t>(offsetof(DefaultTrackableEventHandler_t1082256726, ___lastPos_3)); }
	inline Vector3_t2243707580  get_lastPos_3() const { return ___lastPos_3; }
	inline Vector3_t2243707580 * get_address_of_lastPos_3() { return &___lastPos_3; }
	inline void set_lastPos_3(Vector3_t2243707580  value)
	{
		___lastPos_3 = value;
	}

	inline static int32_t get_offset_of_first_4() { return static_cast<int32_t>(offsetof(DefaultTrackableEventHandler_t1082256726, ___first_4)); }
	inline bool get_first_4() const { return ___first_4; }
	inline bool* get_address_of_first_4() { return &___first_4; }
	inline void set_first_4(bool value)
	{
		___first_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
