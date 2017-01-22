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
#include "AssemblyU2DUnityScript_Blur_BlurType2760015345.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Blur
struct  Blur_t3683821091  : public PostEffectsBase_t3757392499
{
public:
	// System.Int32 Blur::downsample
	int32_t ___downsample_5;
	// System.Single Blur::blurSize
	float ___blurSize_6;
	// System.Int32 Blur::blurIterations
	int32_t ___blurIterations_7;
	// Blur/BlurType Blur::blurType
	int32_t ___blurType_8;
	// UnityEngine.Shader Blur::blurShader
	Shader_t2430389951 * ___blurShader_9;
	// UnityEngine.Material Blur::blurMaterial
	Material_t193706927 * ___blurMaterial_10;

public:
	inline static int32_t get_offset_of_downsample_5() { return static_cast<int32_t>(offsetof(Blur_t3683821091, ___downsample_5)); }
	inline int32_t get_downsample_5() const { return ___downsample_5; }
	inline int32_t* get_address_of_downsample_5() { return &___downsample_5; }
	inline void set_downsample_5(int32_t value)
	{
		___downsample_5 = value;
	}

	inline static int32_t get_offset_of_blurSize_6() { return static_cast<int32_t>(offsetof(Blur_t3683821091, ___blurSize_6)); }
	inline float get_blurSize_6() const { return ___blurSize_6; }
	inline float* get_address_of_blurSize_6() { return &___blurSize_6; }
	inline void set_blurSize_6(float value)
	{
		___blurSize_6 = value;
	}

	inline static int32_t get_offset_of_blurIterations_7() { return static_cast<int32_t>(offsetof(Blur_t3683821091, ___blurIterations_7)); }
	inline int32_t get_blurIterations_7() const { return ___blurIterations_7; }
	inline int32_t* get_address_of_blurIterations_7() { return &___blurIterations_7; }
	inline void set_blurIterations_7(int32_t value)
	{
		___blurIterations_7 = value;
	}

	inline static int32_t get_offset_of_blurType_8() { return static_cast<int32_t>(offsetof(Blur_t3683821091, ___blurType_8)); }
	inline int32_t get_blurType_8() const { return ___blurType_8; }
	inline int32_t* get_address_of_blurType_8() { return &___blurType_8; }
	inline void set_blurType_8(int32_t value)
	{
		___blurType_8 = value;
	}

	inline static int32_t get_offset_of_blurShader_9() { return static_cast<int32_t>(offsetof(Blur_t3683821091, ___blurShader_9)); }
	inline Shader_t2430389951 * get_blurShader_9() const { return ___blurShader_9; }
	inline Shader_t2430389951 ** get_address_of_blurShader_9() { return &___blurShader_9; }
	inline void set_blurShader_9(Shader_t2430389951 * value)
	{
		___blurShader_9 = value;
		Il2CppCodeGenWriteBarrier(&___blurShader_9, value);
	}

	inline static int32_t get_offset_of_blurMaterial_10() { return static_cast<int32_t>(offsetof(Blur_t3683821091, ___blurMaterial_10)); }
	inline Material_t193706927 * get_blurMaterial_10() const { return ___blurMaterial_10; }
	inline Material_t193706927 ** get_address_of_blurMaterial_10() { return &___blurMaterial_10; }
	inline void set_blurMaterial_10(Material_t193706927 * value)
	{
		___blurMaterial_10 = value;
		Il2CppCodeGenWriteBarrier(&___blurMaterial_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
