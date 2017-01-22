#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// UnityEngine.Shader
struct Shader_t2430389951;
// UnityEngine.Material
struct Material_t193706927;

#include "AssemblyU2DUnityScript_PostEffectsBase3757392499.h"
#include "AssemblyU2DUnityScript_Bloom_TweakMode2162868461.h"
#include "AssemblyU2DUnityScript_Bloom_BloomScreenBlendMode4287047507.h"
#include "AssemblyU2DUnityScript_Bloom_HDRBloomMode1124970370.h"
#include "AssemblyU2DUnityScript_Bloom_BloomQuality3407301380.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "AssemblyU2DUnityScript_Bloom_LensFlareStyle2485171085.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Bloom
struct  Bloom_t1048415213  : public PostEffectsBase_t3757392499
{
public:
	// Bloom/TweakMode Bloom::tweakMode
	int32_t ___tweakMode_5;
	// Bloom/BloomScreenBlendMode Bloom::screenBlendMode
	int32_t ___screenBlendMode_6;
	// Bloom/HDRBloomMode Bloom::hdr
	int32_t ___hdr_7;
	// System.Boolean Bloom::doHdr
	bool ___doHdr_8;
	// System.Single Bloom::sepBlurSpread
	float ___sepBlurSpread_9;
	// Bloom/BloomQuality Bloom::quality
	int32_t ___quality_10;
	// System.Single Bloom::bloomIntensity
	float ___bloomIntensity_11;
	// System.Single Bloom::bloomThreshhold
	float ___bloomThreshhold_12;
	// UnityEngine.Color Bloom::bloomThreshholdColor
	Color_t2020392075  ___bloomThreshholdColor_13;
	// System.Int32 Bloom::bloomBlurIterations
	int32_t ___bloomBlurIterations_14;
	// System.Int32 Bloom::hollywoodFlareBlurIterations
	int32_t ___hollywoodFlareBlurIterations_15;
	// System.Single Bloom::flareRotation
	float ___flareRotation_16;
	// Bloom/LensFlareStyle Bloom::lensflareMode
	int32_t ___lensflareMode_17;
	// System.Single Bloom::hollyStretchWidth
	float ___hollyStretchWidth_18;
	// System.Single Bloom::lensflareIntensity
	float ___lensflareIntensity_19;
	// System.Single Bloom::lensflareThreshhold
	float ___lensflareThreshhold_20;
	// System.Single Bloom::lensFlareSaturation
	float ___lensFlareSaturation_21;
	// UnityEngine.Color Bloom::flareColorA
	Color_t2020392075  ___flareColorA_22;
	// UnityEngine.Color Bloom::flareColorB
	Color_t2020392075  ___flareColorB_23;
	// UnityEngine.Color Bloom::flareColorC
	Color_t2020392075  ___flareColorC_24;
	// UnityEngine.Color Bloom::flareColorD
	Color_t2020392075  ___flareColorD_25;
	// System.Single Bloom::blurWidth
	float ___blurWidth_26;
	// UnityEngine.Texture2D Bloom::lensFlareVignetteMask
	Texture2D_t3542995729 * ___lensFlareVignetteMask_27;
	// UnityEngine.Shader Bloom::lensFlareShader
	Shader_t2430389951 * ___lensFlareShader_28;
	// UnityEngine.Material Bloom::lensFlareMaterial
	Material_t193706927 * ___lensFlareMaterial_29;
	// UnityEngine.Shader Bloom::screenBlendShader
	Shader_t2430389951 * ___screenBlendShader_30;
	// UnityEngine.Material Bloom::screenBlend
	Material_t193706927 * ___screenBlend_31;
	// UnityEngine.Shader Bloom::blurAndFlaresShader
	Shader_t2430389951 * ___blurAndFlaresShader_32;
	// UnityEngine.Material Bloom::blurAndFlaresMaterial
	Material_t193706927 * ___blurAndFlaresMaterial_33;
	// UnityEngine.Shader Bloom::brightPassFilterShader
	Shader_t2430389951 * ___brightPassFilterShader_34;
	// UnityEngine.Material Bloom::brightPassFilterMaterial
	Material_t193706927 * ___brightPassFilterMaterial_35;

public:
	inline static int32_t get_offset_of_tweakMode_5() { return static_cast<int32_t>(offsetof(Bloom_t1048415213, ___tweakMode_5)); }
	inline int32_t get_tweakMode_5() const { return ___tweakMode_5; }
	inline int32_t* get_address_of_tweakMode_5() { return &___tweakMode_5; }
	inline void set_tweakMode_5(int32_t value)
	{
		___tweakMode_5 = value;
	}

	inline static int32_t get_offset_of_screenBlendMode_6() { return static_cast<int32_t>(offsetof(Bloom_t1048415213, ___screenBlendMode_6)); }
	inline int32_t get_screenBlendMode_6() const { return ___screenBlendMode_6; }
	inline int32_t* get_address_of_screenBlendMode_6() { return &___screenBlendMode_6; }
	inline void set_screenBlendMode_6(int32_t value)
	{
		___screenBlendMode_6 = value;
	}

	inline static int32_t get_offset_of_hdr_7() { return static_cast<int32_t>(offsetof(Bloom_t1048415213, ___hdr_7)); }
	inline int32_t get_hdr_7() const { return ___hdr_7; }
	inline int32_t* get_address_of_hdr_7() { return &___hdr_7; }
	inline void set_hdr_7(int32_t value)
	{
		___hdr_7 = value;
	}

	inline static int32_t get_offset_of_doHdr_8() { return static_cast<int32_t>(offsetof(Bloom_t1048415213, ___doHdr_8)); }
	inline bool get_doHdr_8() const { return ___doHdr_8; }
	inline bool* get_address_of_doHdr_8() { return &___doHdr_8; }
	inline void set_doHdr_8(bool value)
	{
		___doHdr_8 = value;
	}

	inline static int32_t get_offset_of_sepBlurSpread_9() { return static_cast<int32_t>(offsetof(Bloom_t1048415213, ___sepBlurSpread_9)); }
	inline float get_sepBlurSpread_9() const { return ___sepBlurSpread_9; }
	inline float* get_address_of_sepBlurSpread_9() { return &___sepBlurSpread_9; }
	inline void set_sepBlurSpread_9(float value)
	{
		___sepBlurSpread_9 = value;
	}

	inline static int32_t get_offset_of_quality_10() { return static_cast<int32_t>(offsetof(Bloom_t1048415213, ___quality_10)); }
	inline int32_t get_quality_10() const { return ___quality_10; }
	inline int32_t* get_address_of_quality_10() { return &___quality_10; }
	inline void set_quality_10(int32_t value)
	{
		___quality_10 = value;
	}

	inline static int32_t get_offset_of_bloomIntensity_11() { return static_cast<int32_t>(offsetof(Bloom_t1048415213, ___bloomIntensity_11)); }
	inline float get_bloomIntensity_11() const { return ___bloomIntensity_11; }
	inline float* get_address_of_bloomIntensity_11() { return &___bloomIntensity_11; }
	inline void set_bloomIntensity_11(float value)
	{
		___bloomIntensity_11 = value;
	}

	inline static int32_t get_offset_of_bloomThreshhold_12() { return static_cast<int32_t>(offsetof(Bloom_t1048415213, ___bloomThreshhold_12)); }
	inline float get_bloomThreshhold_12() const { return ___bloomThreshhold_12; }
	inline float* get_address_of_bloomThreshhold_12() { return &___bloomThreshhold_12; }
	inline void set_bloomThreshhold_12(float value)
	{
		___bloomThreshhold_12 = value;
	}

	inline static int32_t get_offset_of_bloomThreshholdColor_13() { return static_cast<int32_t>(offsetof(Bloom_t1048415213, ___bloomThreshholdColor_13)); }
	inline Color_t2020392075  get_bloomThreshholdColor_13() const { return ___bloomThreshholdColor_13; }
	inline Color_t2020392075 * get_address_of_bloomThreshholdColor_13() { return &___bloomThreshholdColor_13; }
	inline void set_bloomThreshholdColor_13(Color_t2020392075  value)
	{
		___bloomThreshholdColor_13 = value;
	}

	inline static int32_t get_offset_of_bloomBlurIterations_14() { return static_cast<int32_t>(offsetof(Bloom_t1048415213, ___bloomBlurIterations_14)); }
	inline int32_t get_bloomBlurIterations_14() const { return ___bloomBlurIterations_14; }
	inline int32_t* get_address_of_bloomBlurIterations_14() { return &___bloomBlurIterations_14; }
	inline void set_bloomBlurIterations_14(int32_t value)
	{
		___bloomBlurIterations_14 = value;
	}

	inline static int32_t get_offset_of_hollywoodFlareBlurIterations_15() { return static_cast<int32_t>(offsetof(Bloom_t1048415213, ___hollywoodFlareBlurIterations_15)); }
	inline int32_t get_hollywoodFlareBlurIterations_15() const { return ___hollywoodFlareBlurIterations_15; }
	inline int32_t* get_address_of_hollywoodFlareBlurIterations_15() { return &___hollywoodFlareBlurIterations_15; }
	inline void set_hollywoodFlareBlurIterations_15(int32_t value)
	{
		___hollywoodFlareBlurIterations_15 = value;
	}

	inline static int32_t get_offset_of_flareRotation_16() { return static_cast<int32_t>(offsetof(Bloom_t1048415213, ___flareRotation_16)); }
	inline float get_flareRotation_16() const { return ___flareRotation_16; }
	inline float* get_address_of_flareRotation_16() { return &___flareRotation_16; }
	inline void set_flareRotation_16(float value)
	{
		___flareRotation_16 = value;
	}

	inline static int32_t get_offset_of_lensflareMode_17() { return static_cast<int32_t>(offsetof(Bloom_t1048415213, ___lensflareMode_17)); }
	inline int32_t get_lensflareMode_17() const { return ___lensflareMode_17; }
	inline int32_t* get_address_of_lensflareMode_17() { return &___lensflareMode_17; }
	inline void set_lensflareMode_17(int32_t value)
	{
		___lensflareMode_17 = value;
	}

	inline static int32_t get_offset_of_hollyStretchWidth_18() { return static_cast<int32_t>(offsetof(Bloom_t1048415213, ___hollyStretchWidth_18)); }
	inline float get_hollyStretchWidth_18() const { return ___hollyStretchWidth_18; }
	inline float* get_address_of_hollyStretchWidth_18() { return &___hollyStretchWidth_18; }
	inline void set_hollyStretchWidth_18(float value)
	{
		___hollyStretchWidth_18 = value;
	}

	inline static int32_t get_offset_of_lensflareIntensity_19() { return static_cast<int32_t>(offsetof(Bloom_t1048415213, ___lensflareIntensity_19)); }
	inline float get_lensflareIntensity_19() const { return ___lensflareIntensity_19; }
	inline float* get_address_of_lensflareIntensity_19() { return &___lensflareIntensity_19; }
	inline void set_lensflareIntensity_19(float value)
	{
		___lensflareIntensity_19 = value;
	}

	inline static int32_t get_offset_of_lensflareThreshhold_20() { return static_cast<int32_t>(offsetof(Bloom_t1048415213, ___lensflareThreshhold_20)); }
	inline float get_lensflareThreshhold_20() const { return ___lensflareThreshhold_20; }
	inline float* get_address_of_lensflareThreshhold_20() { return &___lensflareThreshhold_20; }
	inline void set_lensflareThreshhold_20(float value)
	{
		___lensflareThreshhold_20 = value;
	}

	inline static int32_t get_offset_of_lensFlareSaturation_21() { return static_cast<int32_t>(offsetof(Bloom_t1048415213, ___lensFlareSaturation_21)); }
	inline float get_lensFlareSaturation_21() const { return ___lensFlareSaturation_21; }
	inline float* get_address_of_lensFlareSaturation_21() { return &___lensFlareSaturation_21; }
	inline void set_lensFlareSaturation_21(float value)
	{
		___lensFlareSaturation_21 = value;
	}

	inline static int32_t get_offset_of_flareColorA_22() { return static_cast<int32_t>(offsetof(Bloom_t1048415213, ___flareColorA_22)); }
	inline Color_t2020392075  get_flareColorA_22() const { return ___flareColorA_22; }
	inline Color_t2020392075 * get_address_of_flareColorA_22() { return &___flareColorA_22; }
	inline void set_flareColorA_22(Color_t2020392075  value)
	{
		___flareColorA_22 = value;
	}

	inline static int32_t get_offset_of_flareColorB_23() { return static_cast<int32_t>(offsetof(Bloom_t1048415213, ___flareColorB_23)); }
	inline Color_t2020392075  get_flareColorB_23() const { return ___flareColorB_23; }
	inline Color_t2020392075 * get_address_of_flareColorB_23() { return &___flareColorB_23; }
	inline void set_flareColorB_23(Color_t2020392075  value)
	{
		___flareColorB_23 = value;
	}

	inline static int32_t get_offset_of_flareColorC_24() { return static_cast<int32_t>(offsetof(Bloom_t1048415213, ___flareColorC_24)); }
	inline Color_t2020392075  get_flareColorC_24() const { return ___flareColorC_24; }
	inline Color_t2020392075 * get_address_of_flareColorC_24() { return &___flareColorC_24; }
	inline void set_flareColorC_24(Color_t2020392075  value)
	{
		___flareColorC_24 = value;
	}

	inline static int32_t get_offset_of_flareColorD_25() { return static_cast<int32_t>(offsetof(Bloom_t1048415213, ___flareColorD_25)); }
	inline Color_t2020392075  get_flareColorD_25() const { return ___flareColorD_25; }
	inline Color_t2020392075 * get_address_of_flareColorD_25() { return &___flareColorD_25; }
	inline void set_flareColorD_25(Color_t2020392075  value)
	{
		___flareColorD_25 = value;
	}

	inline static int32_t get_offset_of_blurWidth_26() { return static_cast<int32_t>(offsetof(Bloom_t1048415213, ___blurWidth_26)); }
	inline float get_blurWidth_26() const { return ___blurWidth_26; }
	inline float* get_address_of_blurWidth_26() { return &___blurWidth_26; }
	inline void set_blurWidth_26(float value)
	{
		___blurWidth_26 = value;
	}

	inline static int32_t get_offset_of_lensFlareVignetteMask_27() { return static_cast<int32_t>(offsetof(Bloom_t1048415213, ___lensFlareVignetteMask_27)); }
	inline Texture2D_t3542995729 * get_lensFlareVignetteMask_27() const { return ___lensFlareVignetteMask_27; }
	inline Texture2D_t3542995729 ** get_address_of_lensFlareVignetteMask_27() { return &___lensFlareVignetteMask_27; }
	inline void set_lensFlareVignetteMask_27(Texture2D_t3542995729 * value)
	{
		___lensFlareVignetteMask_27 = value;
		Il2CppCodeGenWriteBarrier(&___lensFlareVignetteMask_27, value);
	}

	inline static int32_t get_offset_of_lensFlareShader_28() { return static_cast<int32_t>(offsetof(Bloom_t1048415213, ___lensFlareShader_28)); }
	inline Shader_t2430389951 * get_lensFlareShader_28() const { return ___lensFlareShader_28; }
	inline Shader_t2430389951 ** get_address_of_lensFlareShader_28() { return &___lensFlareShader_28; }
	inline void set_lensFlareShader_28(Shader_t2430389951 * value)
	{
		___lensFlareShader_28 = value;
		Il2CppCodeGenWriteBarrier(&___lensFlareShader_28, value);
	}

	inline static int32_t get_offset_of_lensFlareMaterial_29() { return static_cast<int32_t>(offsetof(Bloom_t1048415213, ___lensFlareMaterial_29)); }
	inline Material_t193706927 * get_lensFlareMaterial_29() const { return ___lensFlareMaterial_29; }
	inline Material_t193706927 ** get_address_of_lensFlareMaterial_29() { return &___lensFlareMaterial_29; }
	inline void set_lensFlareMaterial_29(Material_t193706927 * value)
	{
		___lensFlareMaterial_29 = value;
		Il2CppCodeGenWriteBarrier(&___lensFlareMaterial_29, value);
	}

	inline static int32_t get_offset_of_screenBlendShader_30() { return static_cast<int32_t>(offsetof(Bloom_t1048415213, ___screenBlendShader_30)); }
	inline Shader_t2430389951 * get_screenBlendShader_30() const { return ___screenBlendShader_30; }
	inline Shader_t2430389951 ** get_address_of_screenBlendShader_30() { return &___screenBlendShader_30; }
	inline void set_screenBlendShader_30(Shader_t2430389951 * value)
	{
		___screenBlendShader_30 = value;
		Il2CppCodeGenWriteBarrier(&___screenBlendShader_30, value);
	}

	inline static int32_t get_offset_of_screenBlend_31() { return static_cast<int32_t>(offsetof(Bloom_t1048415213, ___screenBlend_31)); }
	inline Material_t193706927 * get_screenBlend_31() const { return ___screenBlend_31; }
	inline Material_t193706927 ** get_address_of_screenBlend_31() { return &___screenBlend_31; }
	inline void set_screenBlend_31(Material_t193706927 * value)
	{
		___screenBlend_31 = value;
		Il2CppCodeGenWriteBarrier(&___screenBlend_31, value);
	}

	inline static int32_t get_offset_of_blurAndFlaresShader_32() { return static_cast<int32_t>(offsetof(Bloom_t1048415213, ___blurAndFlaresShader_32)); }
	inline Shader_t2430389951 * get_blurAndFlaresShader_32() const { return ___blurAndFlaresShader_32; }
	inline Shader_t2430389951 ** get_address_of_blurAndFlaresShader_32() { return &___blurAndFlaresShader_32; }
	inline void set_blurAndFlaresShader_32(Shader_t2430389951 * value)
	{
		___blurAndFlaresShader_32 = value;
		Il2CppCodeGenWriteBarrier(&___blurAndFlaresShader_32, value);
	}

	inline static int32_t get_offset_of_blurAndFlaresMaterial_33() { return static_cast<int32_t>(offsetof(Bloom_t1048415213, ___blurAndFlaresMaterial_33)); }
	inline Material_t193706927 * get_blurAndFlaresMaterial_33() const { return ___blurAndFlaresMaterial_33; }
	inline Material_t193706927 ** get_address_of_blurAndFlaresMaterial_33() { return &___blurAndFlaresMaterial_33; }
	inline void set_blurAndFlaresMaterial_33(Material_t193706927 * value)
	{
		___blurAndFlaresMaterial_33 = value;
		Il2CppCodeGenWriteBarrier(&___blurAndFlaresMaterial_33, value);
	}

	inline static int32_t get_offset_of_brightPassFilterShader_34() { return static_cast<int32_t>(offsetof(Bloom_t1048415213, ___brightPassFilterShader_34)); }
	inline Shader_t2430389951 * get_brightPassFilterShader_34() const { return ___brightPassFilterShader_34; }
	inline Shader_t2430389951 ** get_address_of_brightPassFilterShader_34() { return &___brightPassFilterShader_34; }
	inline void set_brightPassFilterShader_34(Shader_t2430389951 * value)
	{
		___brightPassFilterShader_34 = value;
		Il2CppCodeGenWriteBarrier(&___brightPassFilterShader_34, value);
	}

	inline static int32_t get_offset_of_brightPassFilterMaterial_35() { return static_cast<int32_t>(offsetof(Bloom_t1048415213, ___brightPassFilterMaterial_35)); }
	inline Material_t193706927 * get_brightPassFilterMaterial_35() const { return ___brightPassFilterMaterial_35; }
	inline Material_t193706927 ** get_address_of_brightPassFilterMaterial_35() { return &___brightPassFilterMaterial_35; }
	inline void set_brightPassFilterMaterial_35(Material_t193706927 * value)
	{
		___brightPassFilterMaterial_35 = value;
		Il2CppCodeGenWriteBarrier(&___brightPassFilterMaterial_35, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
