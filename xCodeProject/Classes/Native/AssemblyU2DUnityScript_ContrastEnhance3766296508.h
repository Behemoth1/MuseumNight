#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Shader
struct Shader_t2430389951;

#include "AssemblyU2DUnityScript_PostEffectsBase3757392499.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ContrastEnhance
struct  ContrastEnhance_t3766296508  : public PostEffectsBase_t3757392499
{
public:
	// System.Single ContrastEnhance::intensity
	float ___intensity_5;
	// System.Single ContrastEnhance::threshhold
	float ___threshhold_6;
	// UnityEngine.Material ContrastEnhance::separableBlurMaterial
	Material_t193706927 * ___separableBlurMaterial_7;
	// UnityEngine.Material ContrastEnhance::contrastCompositeMaterial
	Material_t193706927 * ___contrastCompositeMaterial_8;
	// System.Single ContrastEnhance::blurSpread
	float ___blurSpread_9;
	// UnityEngine.Shader ContrastEnhance::separableBlurShader
	Shader_t2430389951 * ___separableBlurShader_10;
	// UnityEngine.Shader ContrastEnhance::contrastCompositeShader
	Shader_t2430389951 * ___contrastCompositeShader_11;

public:
	inline static int32_t get_offset_of_intensity_5() { return static_cast<int32_t>(offsetof(ContrastEnhance_t3766296508, ___intensity_5)); }
	inline float get_intensity_5() const { return ___intensity_5; }
	inline float* get_address_of_intensity_5() { return &___intensity_5; }
	inline void set_intensity_5(float value)
	{
		___intensity_5 = value;
	}

	inline static int32_t get_offset_of_threshhold_6() { return static_cast<int32_t>(offsetof(ContrastEnhance_t3766296508, ___threshhold_6)); }
	inline float get_threshhold_6() const { return ___threshhold_6; }
	inline float* get_address_of_threshhold_6() { return &___threshhold_6; }
	inline void set_threshhold_6(float value)
	{
		___threshhold_6 = value;
	}

	inline static int32_t get_offset_of_separableBlurMaterial_7() { return static_cast<int32_t>(offsetof(ContrastEnhance_t3766296508, ___separableBlurMaterial_7)); }
	inline Material_t193706927 * get_separableBlurMaterial_7() const { return ___separableBlurMaterial_7; }
	inline Material_t193706927 ** get_address_of_separableBlurMaterial_7() { return &___separableBlurMaterial_7; }
	inline void set_separableBlurMaterial_7(Material_t193706927 * value)
	{
		___separableBlurMaterial_7 = value;
		Il2CppCodeGenWriteBarrier(&___separableBlurMaterial_7, value);
	}

	inline static int32_t get_offset_of_contrastCompositeMaterial_8() { return static_cast<int32_t>(offsetof(ContrastEnhance_t3766296508, ___contrastCompositeMaterial_8)); }
	inline Material_t193706927 * get_contrastCompositeMaterial_8() const { return ___contrastCompositeMaterial_8; }
	inline Material_t193706927 ** get_address_of_contrastCompositeMaterial_8() { return &___contrastCompositeMaterial_8; }
	inline void set_contrastCompositeMaterial_8(Material_t193706927 * value)
	{
		___contrastCompositeMaterial_8 = value;
		Il2CppCodeGenWriteBarrier(&___contrastCompositeMaterial_8, value);
	}

	inline static int32_t get_offset_of_blurSpread_9() { return static_cast<int32_t>(offsetof(ContrastEnhance_t3766296508, ___blurSpread_9)); }
	inline float get_blurSpread_9() const { return ___blurSpread_9; }
	inline float* get_address_of_blurSpread_9() { return &___blurSpread_9; }
	inline void set_blurSpread_9(float value)
	{
		___blurSpread_9 = value;
	}

	inline static int32_t get_offset_of_separableBlurShader_10() { return static_cast<int32_t>(offsetof(ContrastEnhance_t3766296508, ___separableBlurShader_10)); }
	inline Shader_t2430389951 * get_separableBlurShader_10() const { return ___separableBlurShader_10; }
	inline Shader_t2430389951 ** get_address_of_separableBlurShader_10() { return &___separableBlurShader_10; }
	inline void set_separableBlurShader_10(Shader_t2430389951 * value)
	{
		___separableBlurShader_10 = value;
		Il2CppCodeGenWriteBarrier(&___separableBlurShader_10, value);
	}

	inline static int32_t get_offset_of_contrastCompositeShader_11() { return static_cast<int32_t>(offsetof(ContrastEnhance_t3766296508, ___contrastCompositeShader_11)); }
	inline Shader_t2430389951 * get_contrastCompositeShader_11() const { return ___contrastCompositeShader_11; }
	inline Shader_t2430389951 ** get_address_of_contrastCompositeShader_11() { return &___contrastCompositeShader_11; }
	inline void set_contrastCompositeShader_11(Shader_t2430389951 * value)
	{
		___contrastCompositeShader_11 = value;
		Il2CppCodeGenWriteBarrier(&___contrastCompositeShader_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
