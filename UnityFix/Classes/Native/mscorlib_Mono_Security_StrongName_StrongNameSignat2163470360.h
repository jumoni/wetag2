#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Byte[]
struct ByteU5BU5D_t3397334013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.StrongName/StrongNameSignature
struct  StrongNameSignature_t2163470360  : public Il2CppObject
{
public:
	// System.Byte[] Mono.Security.StrongName/StrongNameSignature::hash
	ByteU5BU5D_t3397334013* ___hash_0;
	// System.Byte[] Mono.Security.StrongName/StrongNameSignature::signature
	ByteU5BU5D_t3397334013* ___signature_1;
	// System.UInt32 Mono.Security.StrongName/StrongNameSignature::signaturePosition
	uint32_t ___signaturePosition_2;
	// System.UInt32 Mono.Security.StrongName/StrongNameSignature::signatureLength
	uint32_t ___signatureLength_3;
	// System.UInt32 Mono.Security.StrongName/StrongNameSignature::metadataPosition
	uint32_t ___metadataPosition_4;
	// System.UInt32 Mono.Security.StrongName/StrongNameSignature::metadataLength
	uint32_t ___metadataLength_5;

public:
	inline static int32_t get_offset_of_hash_0() { return static_cast<int32_t>(offsetof(StrongNameSignature_t2163470360, ___hash_0)); }
	inline ByteU5BU5D_t3397334013* get_hash_0() const { return ___hash_0; }
	inline ByteU5BU5D_t3397334013** get_address_of_hash_0() { return &___hash_0; }
	inline void set_hash_0(ByteU5BU5D_t3397334013* value)
	{
		___hash_0 = value;
		Il2CppCodeGenWriteBarrier(&___hash_0, value);
	}

	inline static int32_t get_offset_of_signature_1() { return static_cast<int32_t>(offsetof(StrongNameSignature_t2163470360, ___signature_1)); }
	inline ByteU5BU5D_t3397334013* get_signature_1() const { return ___signature_1; }
	inline ByteU5BU5D_t3397334013** get_address_of_signature_1() { return &___signature_1; }
	inline void set_signature_1(ByteU5BU5D_t3397334013* value)
	{
		___signature_1 = value;
		Il2CppCodeGenWriteBarrier(&___signature_1, value);
	}

	inline static int32_t get_offset_of_signaturePosition_2() { return static_cast<int32_t>(offsetof(StrongNameSignature_t2163470360, ___signaturePosition_2)); }
	inline uint32_t get_signaturePosition_2() const { return ___signaturePosition_2; }
	inline uint32_t* get_address_of_signaturePosition_2() { return &___signaturePosition_2; }
	inline void set_signaturePosition_2(uint32_t value)
	{
		___signaturePosition_2 = value;
	}

	inline static int32_t get_offset_of_signatureLength_3() { return static_cast<int32_t>(offsetof(StrongNameSignature_t2163470360, ___signatureLength_3)); }
	inline uint32_t get_signatureLength_3() const { return ___signatureLength_3; }
	inline uint32_t* get_address_of_signatureLength_3() { return &___signatureLength_3; }
	inline void set_signatureLength_3(uint32_t value)
	{
		___signatureLength_3 = value;
	}

	inline static int32_t get_offset_of_metadataPosition_4() { return static_cast<int32_t>(offsetof(StrongNameSignature_t2163470360, ___metadataPosition_4)); }
	inline uint32_t get_metadataPosition_4() const { return ___metadataPosition_4; }
	inline uint32_t* get_address_of_metadataPosition_4() { return &___metadataPosition_4; }
	inline void set_metadataPosition_4(uint32_t value)
	{
		___metadataPosition_4 = value;
	}

	inline static int32_t get_offset_of_metadataLength_5() { return static_cast<int32_t>(offsetof(StrongNameSignature_t2163470360, ___metadataLength_5)); }
	inline uint32_t get_metadataLength_5() const { return ___metadataLength_5; }
	inline uint32_t* get_address_of_metadataLength_5() { return &___metadataLength_5; }
	inline void set_metadataLength_5(uint32_t value)
	{
		___metadataLength_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
