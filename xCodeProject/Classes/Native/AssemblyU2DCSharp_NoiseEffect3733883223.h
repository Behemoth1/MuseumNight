#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture
struct Texture_t2243626319;
// UnityEngine.Shader
struct Shader_t2430389951;
// UnityEngine.Material
struct Material_t193706927;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NoiseEffect
struct  NoiseEffect_t3733883223  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean NoiseEffect::monochrome
	bool ___monochrome_2;
	// System.Boolean NoiseEffect::rgbFallback
	bool ___rgbFallback_3;
	// System.Single NoiseEffect::grainIntensityMin
	float ___grainIntensityMin_4;
	// System.Single NoiseEffect::grainIntensityMax
	float ___grainIntensityMax_5;
	// System.Single NoiseEffect::grainSize
	float ___grainSize_6;
	// System.Single NoiseEffect::scratchIntensityMin
	float ___scratchIntensityMin_7;
	// System.Single NoiseEffect::scratchIntensityMax
	float ___scratchIntensityMax_8;
	// System.Single NoiseEffect::scratchFPS
	float ___scratchFPS_9;
	// System.Single NoiseEffect::scratchJitter
	float ___scratchJitter_10;
	// UnityEngine.Texture NoiseEffect::grainTexture
	Texture_t2243626319 * ___grainTexture_11;
	// UnityEngine.Texture NoiseEffect::scratchTexture
	Texture_t2243626319 * ___scratchTexture_12;
	// UnityEngine.Shader NoiseEffect::shaderRGB
	Shader_t2430389951 * ___shaderRGB_13;
	// UnityEngine.Shader NoiseEffect::shaderYUV
	Shader_t2430389951 * ___shaderYUV_14;
	// UnityEngine.Material NoiseEffect::m_MaterialRGB
	Material_t193706927 * ___m_MaterialRGB_15;
	// UnityEngine.Material NoiseEffect::m_MaterialYUV
	Material_t193706927 * ___m_MaterialYUV_16;
	// System.Single NoiseEffect::scratchTimeLeft
	float ___scratchTimeLeft_17;
	// System.Single NoiseEffect::scratchX
	float ___scratchX_18;
	// System.Single NoiseEffect::scratchY
	float ___scratchY_19;

public:
	inline static int32_t get_offset_of_monochrome_2() { return static_cast<int32_t>(offsetof(NoiseEffect_t3733883223, ___monochrome_2)); }
	inline bool get_monochrome_2() const { return ___monochrome_2; }
	inline bool* get_address_of_monochrome_2() { return &___monochrome_2; }
	inline void set_monochrome_2(bool value)
	{
		___monochrome_2 = value;
	}

	inline static int32_t get_offset_of_rgbFallback_3() { return static_cast<int32_t>(offsetof(NoiseEffect_t3733883223, ___rgbFallback_3)); }
	inline bool get_rgbFallback_3() const { return ___rgbFallback_3; }
	inline bool* get_address_of_rgbFallback_3() { return &___rgbFallback_3; }
	inline void set_rgbFallback_3(bool value)
	{
		___rgbFallback_3 = value;
	}

	inline static int32_t get_offset_of_grainIntensityMin_4() { return static_cast<int32_t>(offsetof(NoiseEffect_t3733883223, ___grainIntensityMin_4)); }
	inline float get_grainIntensityMin_4() const { return ___grainIntensityMin_4; }
	inline float* get_address_of_grainIntensityMin_4() { return &___grainIntensityMin_4; }
	inline void set_grainIntensityMin_4(float value)
	{
		___grainIntensityMin_4 = value;
	}

	inline static int32_t get_offset_of_grainIntensityMax_5() { return static_cast<int32_t>(offsetof(NoiseEffect_t3733883223, ___grainIntensityMax_5)); }
	inline float get_grainIntensityMax_5() const { return ___grainIntensityMax_5; }
	inline float* get_address_of_grainIntensityMax_5() { return &___grainIntensityMax_5; }
	inline void set_grainIntensityMax_5(float value)
	{
		___grainIntensityMax_5 = value;
	}

	inline static int32_t get_offset_of_grainSize_6() { return static_cast<int32_t>(offsetof(NoiseEffect_t3733883223, ___grainSize_6)); }
	inline float get_grainSize_6() const { return ___grainSize_6; }
	inline float* get_address_of_grainSize_6() { return &___grainSize_6; }
	inline void set_grainSize_6(float value)
	{
		___grainSize_6 = value;
	}

	inline static int32_t get_offset_of_scratchIntensityMin_7() { return static_cast<int32_t>(offsetof(NoiseEffect_t3733883223, ___scratchIntensityMin_7)); }
	inline float get_scratchIntensityMin_7() const { return ___scratchIntensityMin_7; }
	inline float* get_address_of_scratchIntensityMin_7() { return &___scratchIntensityMin_7; }
	inline void set_scratchIntensityMin_7(float value)
	{
		___scratchIntensityMin_7 = value;
	}

	inline static int32_t get_offset_of_scratchIntensityMax_8() { return static_cast<int32_t>(offsetof(NoiseEffect_t3733883223, ___scratchIntensityMax_8)); }
	inline float get_scratchIntensityMax_8() const { return ___scratchIntensityMax_8; }
	inline float* get_address_of_scratchIntensityMax_8() { return &___scratchIntensityMax_8; }
	inline void set_scratchIntensityMax_8(float value)
	{
		___scratchIntensityMax_8 = value;
	}

	inline static int32_t get_offset_of_scratchFPS_9() { return static_cast<int32_t>(offsetof(NoiseEffect_t3733883223, ___scratchFPS_9)); }
	inline float get_scratchFPS_9() const { return ___scratchFPS_9; }
	inline float* get_address_of_scratchFPS_9() { return &___scratchFPS_9; }
	inline void set_scratchFPS_9(float value)
	{
		___scratchFPS_9 = value;
	}

	inline static int32_t get_offset_of_scratchJitter_10() { return static_cast<int32_t>(offsetof(NoiseEffect_t3733883223, ___scratchJitter_10)); }
	inline float get_scratchJitter_10() const { return ___scratchJitter_10; }
	inline float* get_address_of_scratchJitter_10() { return &___scratchJitter_10; }
	inline void set_scratchJitter_10(float value)
	{
		___scratchJitter_10 = value;
	}

	inline static int32_t get_offset_of_grainTexture_11() { return static_cast<int32_t>(offsetof(NoiseEffect_t3733883223, ___grainTexture_11)); }
	inline Texture_t2243626319 * get_grainTexture_11() const { return ___grainTexture_11; }
	inline Texture_t2243626319 ** get_address_of_grainTexture_11() { return &___grainTexture_11; }
	inline void set_grainTexture_11(Texture_t2243626319 * value)
	{
		___grainTexture_11 = value;
		Il2CppCodeGenWriteBarrier(&___grainTexture_11, value);
	}

	inline static int32_t get_offset_of_scratchTexture_12() { return static_cast<int32_t>(offsetof(NoiseEffect_t3733883223, ___scratchTexture_12)); }
	inline Texture_t2243626319 * get_scratchTexture_12() const { return ___scratchTexture_12; }
	inline Texture_t2243626319 ** get_address_of_scratchTexture_12() { return &___scratchTexture_12; }
	inline void set_scratchTexture_12(Texture_t2243626319 * value)
	{
		___scratchTexture_12 = value;
		Il2CppCodeGenWriteBarrier(&___scratchTexture_12, value);
	}

	inline static int32_t get_offset_of_shaderRGB_13() { return static_cast<int32_t>(offsetof(NoiseEffect_t3733883223, ___shaderRGB_13)); }
	inline Shader_t2430389951 * get_shaderRGB_13() const { return ___shaderRGB_13; }
	inline Shader_t2430389951 ** get_address_of_shaderRGB_13() { return &___shaderRGB_13; }
	inline void set_shaderRGB_13(Shader_t2430389951 * value)
	{
		___shaderRGB_13 = value;
		Il2CppCodeGenWriteBarrier(&___shaderRGB_13, value);
	}

	inline static int32_t get_offset_of_shaderYUV_14() { return static_cast<int32_t>(offsetof(NoiseEffect_t3733883223, ___shaderYUV_14)); }
	inline Shader_t2430389951 * get_shaderYUV_14() const { return ___shaderYUV_14; }
	inline Shader_t2430389951 ** get_address_of_shaderYUV_14() { return &___shaderYUV_14; }
	inline void set_shaderYUV_14(Shader_t2430389951 * value)
	{
		___shaderYUV_14 = value;
		Il2CppCodeGenWriteBarrier(&___shaderYUV_14, value);
	}

	inline static int32_t get_offset_of_m_MaterialRGB_15() { return static_cast<int32_t>(offsetof(NoiseEffect_t3733883223, ___m_MaterialRGB_15)); }
	inline Material_t193706927 * get_m_MaterialRGB_15() const { return ___m_MaterialRGB_15; }
	inline Material_t193706927 ** get_address_of_m_MaterialRGB_15() { return &___m_MaterialRGB_15; }
	inline void set_m_MaterialRGB_15(Material_t193706927 * value)
	{
		___m_MaterialRGB_15 = value;
		Il2CppCodeGenWriteBarrier(&___m_MaterialRGB_15, value);
	}

	inline static int32_t get_offset_of_m_MaterialYUV_16() { return static_cast<int32_t>(offsetof(NoiseEffect_t3733883223, ___m_MaterialYUV_16)); }
	inline Material_t193706927 * get_m_MaterialYUV_16() const { return ___m_MaterialYUV_16; }
	inline Material_t193706927 ** get_address_of_m_MaterialYUV_16() { return &___m_MaterialYUV_16; }
	inline void set_m_MaterialYUV_16(Material_t193706927 * value)
	{
		___m_MaterialYUV_16 = value;
		Il2CppCodeGenWriteBarrier(&___m_MaterialYUV_16, value);
	}

	inline static int32_t get_offset_of_scratchTimeLeft_17() { return static_cast<int32_t>(offsetof(NoiseEffect_t3733883223, ___scratchTimeLeft_17)); }
	inline float get_scratchTimeLeft_17() const { return ___scratchTimeLeft_17; }
	inline float* get_address_of_scratchTimeLeft_17() { return &___scratchTimeLeft_17; }
	inline void set_scratchTimeLeft_17(float value)
	{
		___scratchTimeLeft_17 = value;
	}

	inline static int32_t get_offset_of_scratchX_18() { return static_cast<int32_t>(offsetof(NoiseEffect_t3733883223, ___scratchX_18)); }
	inline float get_scratchX_18() const { return ___scratchX_18; }
	inline float* get_address_of_scratchX_18() { return &___scratchX_18; }
	inline void set_scratchX_18(float value)
	{
		___scratchX_18 = value;
	}

	inline static int32_t get_offset_of_scratchY_19() { return static_cast<int32_t>(offsetof(NoiseEffect_t3733883223, ___scratchY_19)); }
	inline float get_scratchY_19() const { return ___scratchY_19; }
	inline float* get_address_of_scratchY_19() { return &___scratchY_19; }
	inline void set_scratchY_19(float value)
	{
		___scratchY_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
