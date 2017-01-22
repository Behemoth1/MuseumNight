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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GlowEffect
struct  GlowEffect_t1329942340  : public MonoBehaviour_t1158329972
{
public:
	// System.Single GlowEffect::glowIntensity
	float ___glowIntensity_2;
	// System.Int32 GlowEffect::blurIterations
	int32_t ___blurIterations_3;
	// System.Single GlowEffect::blurSpread
	float ___blurSpread_4;
	// UnityEngine.Color GlowEffect::glowTint
	Color_t2020392075  ___glowTint_5;
	// UnityEngine.Shader GlowEffect::compositeShader
	Shader_t2430389951 * ___compositeShader_6;
	// UnityEngine.Material GlowEffect::m_CompositeMaterial
	Material_t193706927 * ___m_CompositeMaterial_7;
	// UnityEngine.Shader GlowEffect::blurShader
	Shader_t2430389951 * ___blurShader_8;
	// UnityEngine.Material GlowEffect::m_BlurMaterial
	Material_t193706927 * ___m_BlurMaterial_9;
	// UnityEngine.Shader GlowEffect::downsampleShader
	Shader_t2430389951 * ___downsampleShader_10;
	// UnityEngine.Material GlowEffect::m_DownsampleMaterial
	Material_t193706927 * ___m_DownsampleMaterial_11;

public:
	inline static int32_t get_offset_of_glowIntensity_2() { return static_cast<int32_t>(offsetof(GlowEffect_t1329942340, ___glowIntensity_2)); }
	inline float get_glowIntensity_2() const { return ___glowIntensity_2; }
	inline float* get_address_of_glowIntensity_2() { return &___glowIntensity_2; }
	inline void set_glowIntensity_2(float value)
	{
		___glowIntensity_2 = value;
	}

	inline static int32_t get_offset_of_blurIterations_3() { return static_cast<int32_t>(offsetof(GlowEffect_t1329942340, ___blurIterations_3)); }
	inline int32_t get_blurIterations_3() const { return ___blurIterations_3; }
	inline int32_t* get_address_of_blurIterations_3() { return &___blurIterations_3; }
	inline void set_blurIterations_3(int32_t value)
	{
		___blurIterations_3 = value;
	}

	inline static int32_t get_offset_of_blurSpread_4() { return static_cast<int32_t>(offsetof(GlowEffect_t1329942340, ___blurSpread_4)); }
	inline float get_blurSpread_4() const { return ___blurSpread_4; }
	inline float* get_address_of_blurSpread_4() { return &___blurSpread_4; }
	inline void set_blurSpread_4(float value)
	{
		___blurSpread_4 = value;
	}

	inline static int32_t get_offset_of_glowTint_5() { return static_cast<int32_t>(offsetof(GlowEffect_t1329942340, ___glowTint_5)); }
	inline Color_t2020392075  get_glowTint_5() const { return ___glowTint_5; }
	inline Color_t2020392075 * get_address_of_glowTint_5() { return &___glowTint_5; }
	inline void set_glowTint_5(Color_t2020392075  value)
	{
		___glowTint_5 = value;
	}

	inline static int32_t get_offset_of_compositeShader_6() { return static_cast<int32_t>(offsetof(GlowEffect_t1329942340, ___compositeShader_6)); }
	inline Shader_t2430389951 * get_compositeShader_6() const { return ___compositeShader_6; }
	inline Shader_t2430389951 ** get_address_of_compositeShader_6() { return &___compositeShader_6; }
	inline void set_compositeShader_6(Shader_t2430389951 * value)
	{
		___compositeShader_6 = value;
		Il2CppCodeGenWriteBarrier(&___compositeShader_6, value);
	}

	inline static int32_t get_offset_of_m_CompositeMaterial_7() { return static_cast<int32_t>(offsetof(GlowEffect_t1329942340, ___m_CompositeMaterial_7)); }
	inline Material_t193706927 * get_m_CompositeMaterial_7() const { return ___m_CompositeMaterial_7; }
	inline Material_t193706927 ** get_address_of_m_CompositeMaterial_7() { return &___m_CompositeMaterial_7; }
	inline void set_m_CompositeMaterial_7(Material_t193706927 * value)
	{
		___m_CompositeMaterial_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_CompositeMaterial_7, value);
	}

	inline static int32_t get_offset_of_blurShader_8() { return static_cast<int32_t>(offsetof(GlowEffect_t1329942340, ___blurShader_8)); }
	inline Shader_t2430389951 * get_blurShader_8() const { return ___blurShader_8; }
	inline Shader_t2430389951 ** get_address_of_blurShader_8() { return &___blurShader_8; }
	inline void set_blurShader_8(Shader_t2430389951 * value)
	{
		___blurShader_8 = value;
		Il2CppCodeGenWriteBarrier(&___blurShader_8, value);
	}

	inline static int32_t get_offset_of_m_BlurMaterial_9() { return static_cast<int32_t>(offsetof(GlowEffect_t1329942340, ___m_BlurMaterial_9)); }
	inline Material_t193706927 * get_m_BlurMaterial_9() const { return ___m_BlurMaterial_9; }
	inline Material_t193706927 ** get_address_of_m_BlurMaterial_9() { return &___m_BlurMaterial_9; }
	inline void set_m_BlurMaterial_9(Material_t193706927 * value)
	{
		___m_BlurMaterial_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_BlurMaterial_9, value);
	}

	inline static int32_t get_offset_of_downsampleShader_10() { return static_cast<int32_t>(offsetof(GlowEffect_t1329942340, ___downsampleShader_10)); }
	inline Shader_t2430389951 * get_downsampleShader_10() const { return ___downsampleShader_10; }
	inline Shader_t2430389951 ** get_address_of_downsampleShader_10() { return &___downsampleShader_10; }
	inline void set_downsampleShader_10(Shader_t2430389951 * value)
	{
		___downsampleShader_10 = value;
		Il2CppCodeGenWriteBarrier(&___downsampleShader_10, value);
	}

	inline static int32_t get_offset_of_m_DownsampleMaterial_11() { return static_cast<int32_t>(offsetof(GlowEffect_t1329942340, ___m_DownsampleMaterial_11)); }
	inline Material_t193706927 * get_m_DownsampleMaterial_11() const { return ___m_DownsampleMaterial_11; }
	inline Material_t193706927 ** get_address_of_m_DownsampleMaterial_11() { return &___m_DownsampleMaterial_11; }
	inline void set_m_DownsampleMaterial_11(Material_t193706927 * value)
	{
		___m_DownsampleMaterial_11 = value;
		Il2CppCodeGenWriteBarrier(&___m_DownsampleMaterial_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
