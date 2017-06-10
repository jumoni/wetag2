#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;
// UnityEngine.WWW
struct WWW_t2919945039;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;
// UnityHttp.HttpRequest
struct HttpRequest_t2628413021;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// UnityHttp.OnHttpEvent
struct OnHttpEvent_t1577021887;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityHttp.HttpRequest
struct  HttpRequest_t2628413021  : public Il2CppObject
{
public:
	// System.Boolean UnityHttp.HttpRequest::Ready
	bool ___Ready_0;
	// System.String UnityHttp.HttpRequest::Url
	String_t* ___Url_1;
	// System.Boolean UnityHttp.HttpRequest::Started
	bool ___Started_2;
	// UnityEngine.WWW UnityHttp.HttpRequest::WWWRequest
	WWW_t2919945039 * ___WWWRequest_3;
	// System.Byte[] UnityHttp.HttpRequest::PostData
	ByteU5BU5D_t3397334013* ___PostData_4;
	// System.Object UnityHttp.HttpRequest::ExtraData
	Il2CppObject * ___ExtraData_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityHttp.HttpRequest::Headers
	Dictionary_2_t3943999495 * ___Headers_6;
	// UnityHttp.HttpRequest UnityHttp.HttpRequest::RequestAfter
	HttpRequest_t2628413021 * ___RequestAfter_7;
	// UnityHttp.HttpRequest UnityHttp.HttpRequest::RequestBefore
	HttpRequest_t2628413021 * ___RequestBefore_8;
	// System.Collections.IEnumerator UnityHttp.HttpRequest::LoadingEnumerator
	Il2CppObject * ___LoadingEnumerator_9;
	// UnityHttp.OnHttpEvent UnityHttp.HttpRequest::OnRequestDone
	OnHttpEvent_t1577021887 * ___OnRequestDone_10;
	// UnityHttp.OnHttpEvent UnityHttp.HttpRequest::OnRequestReady
	OnHttpEvent_t1577021887 * ___OnRequestReady_11;

public:
	inline static int32_t get_offset_of_Ready_0() { return static_cast<int32_t>(offsetof(HttpRequest_t2628413021, ___Ready_0)); }
	inline bool get_Ready_0() const { return ___Ready_0; }
	inline bool* get_address_of_Ready_0() { return &___Ready_0; }
	inline void set_Ready_0(bool value)
	{
		___Ready_0 = value;
	}

	inline static int32_t get_offset_of_Url_1() { return static_cast<int32_t>(offsetof(HttpRequest_t2628413021, ___Url_1)); }
	inline String_t* get_Url_1() const { return ___Url_1; }
	inline String_t** get_address_of_Url_1() { return &___Url_1; }
	inline void set_Url_1(String_t* value)
	{
		___Url_1 = value;
		Il2CppCodeGenWriteBarrier(&___Url_1, value);
	}

	inline static int32_t get_offset_of_Started_2() { return static_cast<int32_t>(offsetof(HttpRequest_t2628413021, ___Started_2)); }
	inline bool get_Started_2() const { return ___Started_2; }
	inline bool* get_address_of_Started_2() { return &___Started_2; }
	inline void set_Started_2(bool value)
	{
		___Started_2 = value;
	}

	inline static int32_t get_offset_of_WWWRequest_3() { return static_cast<int32_t>(offsetof(HttpRequest_t2628413021, ___WWWRequest_3)); }
	inline WWW_t2919945039 * get_WWWRequest_3() const { return ___WWWRequest_3; }
	inline WWW_t2919945039 ** get_address_of_WWWRequest_3() { return &___WWWRequest_3; }
	inline void set_WWWRequest_3(WWW_t2919945039 * value)
	{
		___WWWRequest_3 = value;
		Il2CppCodeGenWriteBarrier(&___WWWRequest_3, value);
	}

	inline static int32_t get_offset_of_PostData_4() { return static_cast<int32_t>(offsetof(HttpRequest_t2628413021, ___PostData_4)); }
	inline ByteU5BU5D_t3397334013* get_PostData_4() const { return ___PostData_4; }
	inline ByteU5BU5D_t3397334013** get_address_of_PostData_4() { return &___PostData_4; }
	inline void set_PostData_4(ByteU5BU5D_t3397334013* value)
	{
		___PostData_4 = value;
		Il2CppCodeGenWriteBarrier(&___PostData_4, value);
	}

	inline static int32_t get_offset_of_ExtraData_5() { return static_cast<int32_t>(offsetof(HttpRequest_t2628413021, ___ExtraData_5)); }
	inline Il2CppObject * get_ExtraData_5() const { return ___ExtraData_5; }
	inline Il2CppObject ** get_address_of_ExtraData_5() { return &___ExtraData_5; }
	inline void set_ExtraData_5(Il2CppObject * value)
	{
		___ExtraData_5 = value;
		Il2CppCodeGenWriteBarrier(&___ExtraData_5, value);
	}

	inline static int32_t get_offset_of_Headers_6() { return static_cast<int32_t>(offsetof(HttpRequest_t2628413021, ___Headers_6)); }
	inline Dictionary_2_t3943999495 * get_Headers_6() const { return ___Headers_6; }
	inline Dictionary_2_t3943999495 ** get_address_of_Headers_6() { return &___Headers_6; }
	inline void set_Headers_6(Dictionary_2_t3943999495 * value)
	{
		___Headers_6 = value;
		Il2CppCodeGenWriteBarrier(&___Headers_6, value);
	}

	inline static int32_t get_offset_of_RequestAfter_7() { return static_cast<int32_t>(offsetof(HttpRequest_t2628413021, ___RequestAfter_7)); }
	inline HttpRequest_t2628413021 * get_RequestAfter_7() const { return ___RequestAfter_7; }
	inline HttpRequest_t2628413021 ** get_address_of_RequestAfter_7() { return &___RequestAfter_7; }
	inline void set_RequestAfter_7(HttpRequest_t2628413021 * value)
	{
		___RequestAfter_7 = value;
		Il2CppCodeGenWriteBarrier(&___RequestAfter_7, value);
	}

	inline static int32_t get_offset_of_RequestBefore_8() { return static_cast<int32_t>(offsetof(HttpRequest_t2628413021, ___RequestBefore_8)); }
	inline HttpRequest_t2628413021 * get_RequestBefore_8() const { return ___RequestBefore_8; }
	inline HttpRequest_t2628413021 ** get_address_of_RequestBefore_8() { return &___RequestBefore_8; }
	inline void set_RequestBefore_8(HttpRequest_t2628413021 * value)
	{
		___RequestBefore_8 = value;
		Il2CppCodeGenWriteBarrier(&___RequestBefore_8, value);
	}

	inline static int32_t get_offset_of_LoadingEnumerator_9() { return static_cast<int32_t>(offsetof(HttpRequest_t2628413021, ___LoadingEnumerator_9)); }
	inline Il2CppObject * get_LoadingEnumerator_9() const { return ___LoadingEnumerator_9; }
	inline Il2CppObject ** get_address_of_LoadingEnumerator_9() { return &___LoadingEnumerator_9; }
	inline void set_LoadingEnumerator_9(Il2CppObject * value)
	{
		___LoadingEnumerator_9 = value;
		Il2CppCodeGenWriteBarrier(&___LoadingEnumerator_9, value);
	}

	inline static int32_t get_offset_of_OnRequestDone_10() { return static_cast<int32_t>(offsetof(HttpRequest_t2628413021, ___OnRequestDone_10)); }
	inline OnHttpEvent_t1577021887 * get_OnRequestDone_10() const { return ___OnRequestDone_10; }
	inline OnHttpEvent_t1577021887 ** get_address_of_OnRequestDone_10() { return &___OnRequestDone_10; }
	inline void set_OnRequestDone_10(OnHttpEvent_t1577021887 * value)
	{
		___OnRequestDone_10 = value;
		Il2CppCodeGenWriteBarrier(&___OnRequestDone_10, value);
	}

	inline static int32_t get_offset_of_OnRequestReady_11() { return static_cast<int32_t>(offsetof(HttpRequest_t2628413021, ___OnRequestReady_11)); }
	inline OnHttpEvent_t1577021887 * get_OnRequestReady_11() const { return ___OnRequestReady_11; }
	inline OnHttpEvent_t1577021887 ** get_address_of_OnRequestReady_11() { return &___OnRequestReady_11; }
	inline void set_OnRequestReady_11(OnHttpEvent_t1577021887 * value)
	{
		___OnRequestReady_11 = value;
		Il2CppCodeGenWriteBarrier(&___OnRequestReady_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
