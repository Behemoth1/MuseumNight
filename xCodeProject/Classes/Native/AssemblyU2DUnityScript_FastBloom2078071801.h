#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Shader
struct Shader_t2430389951;
// UnityEngine.Material
struct Material_t193706927;

#include "AssemblyU2DUnityScript_PostEffectsBase3757392499.h"
#include "AssemblyU2DUnityScript_FastBloom_Resolution1213437956.h"
#include "AssemblyU2DUnityScript_FastBloom_BlurType1688240931.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FastBloom
struct  FastBloom_t2078071801  : public PostEffectsBase_t3757392499
{
public:
	// System.Single FastBloom::threshhold
	float ___threshhold_5;
	// System.Single FastBloom::intensity
	float ___intensity_6;
	// System.Single FastBloom::blurSize
	float ___blurSize_7;
	// FastBloom/Resolution FastBloom::resolution
	int32_t ___resolution_8;
	// System.Int32 FastBloom::blurIterations
	int32_t ___blurIterations_9;
	// FastBloom/BlurType FastBloom::blurType
	int32_t ___blurType_10;
	// UnityEngine.Shader FastBloom::fastBloomShader
	Shader_t2430389951 * ___fastBloomShader_11;
	// UnityEngine.Material FastBloom::fastBloomMaterial
	Material_t193706927 * ___fastBloomMaterial_12;

public:
	inline static int32_t get_offset_of_threshhold_5() { return static_cast<int32_t>(offsetof(FastBloom_t2078071801, ___threshhold_5)); }
	inline float get_threshhold_5() const { return ___threshhold_5; }
	inline float* get_address_of_threshhold_5() { return &___threshhold_5; }
	inline void set_threshhold_5(float value)
	{
		___threshhold_5 = value;
	}

	inline static int32_t get_offset_of_intensity_6() { return static_cast<int32_t>(offsetof(FastBloom_t2078071801, ___intensity_6)); }
	inline float get_intensity_6() const { return ___intensity_6; }
	inline float* get_address_of_intensity_6() { return &___intensity_6; }
	inline void set_intensity_6(float value)
	{
		___intensity_6 = value;
	}

	inline static int32_t get_offset_of_blurSize_7() { return static_cast<int32_t>(offsetof(FastBloom_t2078071801, ___blurSize_7)); }
	inline float get_blurSize_7() const { return ___blurSize_7; }
	inline float* get_address_of_blurSize_7() { return &___blurSize_7; }
	inline void set_blurSize_7(float value)
	{
		___blurSize_7 = value;
	}

	inline static int32_t get_offset_of_resolution_8() { return static_cast<int32_t>(offsetof(FastBloom_t2078071801, ___resolution_8)); }
	inline int32_t get_resolution_8() const { return ___resolution_8; }
	inline int32_t* get_address_of_resolution_8() { return &___resolution_8; }
	inline void set_resolution_8(int32_t value)
	{
		___resolution_8 = value;
	}

	inline static int32_t get_offset_of_blurIterations_9() { return static_cast<int32_t>(offsetof(FastBloom_t2078071801, ___blurIterations_9)); }
	inline int32_t get_blurIterations_9() const { return ___blurIterations_9; }
	inline int32_t* get_address_of_blurIterations_9() { return &___blurIterations_9; }
	inline void set_blurIterations_9(int32_t value)
	{
		___blurIterations_9 = value;
	}

	inline static int32_t get_offset_of_blurType_10() { return static_cast<int32_t>(offsetof(FastBloom_t2078071801, ___blurType_10)); }
	inline int32_t get_blurType_10() const { return ___blurType_10; }
	inline int32_t* get_address_of_blurType_10() { return &___blurType_10; }
	inline void set_blurType_10(int32_t value)
	{
		___blurType_10 = value;
	}

	inline static int32_t get_offset_of_fastBloomShader_11() { return static_cast<int32_t>(offsetof(FastBloom_t2078071801, ___fastBloomShader_11)); }
	inline Shader_t2430389951 * get_fastBloomShader_11() const { return ___fastBloomShader_11; }
	inline Shader_t2430389951 ** get_address_of_fastBloomShader_11() { return &___fastBloomShader_11; }
	inline void set_fastBloomShader_11(Shader_t2430389951 * value)
	{
		___fastBloomShader_11 = value;
		Il2CppCodeGenWriteBarrier(&___fastBloomShader_11, value);
	}

	inline static int32_t get_offset_of_fastBloomMaterial_12() { return static_cast<int32_t>(offsetof(FastBloom_t2078071801, ___fastBloomMaterial_12)); }
	inline Material_t193706927 * get_fastBloomMaterial_12() const { return ___fastBloomMaterial_12; }
	inline Material_t193706927 ** get_address_of_fastBloomMaterial_12() { return &___fastBloomMaterial_12; }
	inline void set_fastBloomMaterial_12(Material_t193706927 * value)
	{
		___fastBloomMaterial_12 = value;
		Il2CppCodeGenWriteBarrier(&___fastBloomMaterial_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
