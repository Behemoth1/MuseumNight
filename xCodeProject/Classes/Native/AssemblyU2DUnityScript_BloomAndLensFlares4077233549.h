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
#include "AssemblyU2DUnityScript_TweakMode341181002552.h"
#include "AssemblyU2DUnityScript_BloomScreenBlendMode3677155143.h"
#include "AssemblyU2DUnityScript_HDRBloomMode356052982.h"
#include "AssemblyU2DUnityScript_LensflareStyle343344173254.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BloomAndLensFlares
struct  BloomAndLensFlares_t4077233549  : public PostEffectsBase_t3757392499
{
public:
	// TweakMode34 BloomAndLensFlares::tweakMode
	int32_t ___tweakMode_5;
	// BloomScreenBlendMode BloomAndLensFlares::screenBlendMode
	int32_t ___screenBlendMode_6;
	// HDRBloomMode BloomAndLensFlares::hdr
	int32_t ___hdr_7;
	// System.Boolean BloomAndLensFlares::doHdr
	bool ___doHdr_8;
	// System.Single BloomAndLensFlares::sepBlurSpread
	float ___sepBlurSpread_9;
	// System.Single BloomAndLensFlares::useSrcAlphaAsMask
	float ___useSrcAlphaAsMask_10;
	// System.Single BloomAndLensFlares::bloomIntensity
	float ___bloomIntensity_11;
	// System.Single BloomAndLensFlares::bloomThreshhold
	float ___bloomThreshhold_12;
	// System.Int32 BloomAndLensFlares::bloomBlurIterations
	int32_t ___bloomBlurIterations_13;
	// System.Boolean BloomAndLensFlares::lensflares
	bool ___lensflares_14;
	// System.Int32 BloomAndLensFlares::hollywoodFlareBlurIterations
	int32_t ___hollywoodFlareBlurIterations_15;
	// LensflareStyle34 BloomAndLensFlares::lensflareMode
	int32_t ___lensflareMode_16;
	// System.Single BloomAndLensFlares::hollyStretchWidth
	float ___hollyStretchWidth_17;
	// System.Single BloomAndLensFlares::lensflareIntensity
	float ___lensflareIntensity_18;
	// System.Single BloomAndLensFlares::lensflareThreshhold
	float ___lensflareThreshhold_19;
	// UnityEngine.Color BloomAndLensFlares::flareColorA
	Color_t2020392075  ___flareColorA_20;
	// UnityEngine.Color BloomAndLensFlares::flareColorB
	Color_t2020392075  ___flareColorB_21;
	// UnityEngine.Color BloomAndLensFlares::flareColorC
	Color_t2020392075  ___flareColorC_22;
	// UnityEngine.Color BloomAndLensFlares::flareColorD
	Color_t2020392075  ___flareColorD_23;
	// System.Single BloomAndLensFlares::blurWidth
	float ___blurWidth_24;
	// UnityEngine.Texture2D BloomAndLensFlares::lensFlareVignetteMask
	Texture2D_t3542995729 * ___lensFlareVignetteMask_25;
	// UnityEngine.Shader BloomAndLensFlares::lensFlareShader
	Shader_t2430389951 * ___lensFlareShader_26;
	// UnityEngine.Material BloomAndLensFlares::lensFlareMaterial
	Material_t193706927 * ___lensFlareMaterial_27;
	// UnityEngine.Shader BloomAndLensFlares::vignetteShader
	Shader_t2430389951 * ___vignetteShader_28;
	// UnityEngine.Material BloomAndLensFlares::vignetteMaterial
	Material_t193706927 * ___vignetteMaterial_29;
	// UnityEngine.Shader BloomAndLensFlares::separableBlurShader
	Shader_t2430389951 * ___separableBlurShader_30;
	// UnityEngine.Material BloomAndLensFlares::separableBlurMaterial
	Material_t193706927 * ___separableBlurMaterial_31;
	// UnityEngine.Shader BloomAndLensFlares::addBrightStuffOneOneShader
	Shader_t2430389951 * ___addBrightStuffOneOneShader_32;
	// UnityEngine.Material BloomAndLensFlares::addBrightStuffBlendOneOneMaterial
	Material_t193706927 * ___addBrightStuffBlendOneOneMaterial_33;
	// UnityEngine.Shader BloomAndLensFlares::screenBlendShader
	Shader_t2430389951 * ___screenBlendShader_34;
	// UnityEngine.Material BloomAndLensFlares::screenBlend
	Material_t193706927 * ___screenBlend_35;
	// UnityEngine.Shader BloomAndLensFlares::hollywoodFlaresShader
	Shader_t2430389951 * ___hollywoodFlaresShader_36;
	// UnityEngine.Material BloomAndLensFlares::hollywoodFlaresMaterial
	Material_t193706927 * ___hollywoodFlaresMaterial_37;
	// UnityEngine.Shader BloomAndLensFlares::brightPassFilterShader
	Shader_t2430389951 * ___brightPassFilterShader_38;
	// UnityEngine.Material BloomAndLensFlares::brightPassFilterMaterial
	Material_t193706927 * ___brightPassFilterMaterial_39;

public:
	inline static int32_t get_offset_of_tweakMode_5() { return static_cast<int32_t>(offsetof(BloomAndLensFlares_t4077233549, ___tweakMode_5)); }
	inline int32_t get_tweakMode_5() const { return ___tweakMode_5; }
	inline int32_t* get_address_of_tweakMode_5() { return &___tweakMode_5; }
	inline void set_tweakMode_5(int32_t value)
	{
		___tweakMode_5 = value;
	}

	inline static int32_t get_offset_of_screenBlendMode_6() { return static_cast<int32_t>(offsetof(BloomAndLensFlares_t4077233549, ___screenBlendMode_6)); }
	inline int32_t get_screenBlendMode_6() const { return ___screenBlendMode_6; }
	inline int32_t* get_address_of_screenBlendMode_6() { return &___screenBlendMode_6; }
	inline void set_screenBlendMode_6(int32_t value)
	{
		___screenBlendMode_6 = value;
	}

	inline static int32_t get_offset_of_hdr_7() { return static_cast<int32_t>(offsetof(BloomAndLensFlares_t4077233549, ___hdr_7)); }
	inline int32_t get_hdr_7() const { return ___hdr_7; }
	inline int32_t* get_address_of_hdr_7() { return &___hdr_7; }
	inline void set_hdr_7(int32_t value)
	{
		___hdr_7 = value;
	}

	inline static int32_t get_offset_of_doHdr_8() { return static_cast<int32_t>(offsetof(BloomAndLensFlares_t4077233549, ___doHdr_8)); }
	inline bool get_doHdr_8() const { return ___doHdr_8; }
	inline bool* get_address_of_doHdr_8() { return &___doHdr_8; }
	inline void set_doHdr_8(bool value)
	{
		___doHdr_8 = value;
	}

	inline static int32_t get_offset_of_sepBlurSpread_9() { return static_cast<int32_t>(offsetof(BloomAndLensFlares_t4077233549, ___sepBlurSpread_9)); }
	inline float get_sepBlurSpread_9() const { return ___sepBlurSpread_9; }
	inline float* get_address_of_sepBlurSpread_9() { return &___sepBlurSpread_9; }
	inline void set_sepBlurSpread_9(float value)
	{
		___sepBlurSpread_9 = value;
	}

	inline static int32_t get_offset_of_useSrcAlphaAsMask_10() { return static_cast<int32_t>(offsetof(BloomAndLensFlares_t4077233549, ___useSrcAlphaAsMask_10)); }
	inline float get_useSrcAlphaAsMask_10() const { return ___useSrcAlphaAsMask_10; }
	inline float* get_address_of_useSrcAlphaAsMask_10() { return &___useSrcAlphaAsMask_10; }
	inline void set_useSrcAlphaAsMask_10(float value)
	{
		___useSrcAlphaAsMask_10 = value;
	}

	inline static int32_t get_offset_of_bloomIntensity_11() { return static_cast<int32_t>(offsetof(BloomAndLensFlares_t4077233549, ___bloomIntensity_11)); }
	inline float get_bloomIntensity_11() const { return ___bloomIntensity_11; }
	inline float* get_address_of_bloomIntensity_11() { return &___bloomIntensity_11; }
	inline void set_bloomIntensity_11(float value)
	{
		___bloomIntensity_11 = value;
	}

	inline static int32_t get_offset_of_bloomThreshhold_12() { return static_cast<int32_t>(offsetof(BloomAndLensFlares_t4077233549, ___bloomThreshhold_12)); }
	inline float get_bloomThreshhold_12() const { return ___bloomThreshhold_12; }
	inline float* get_address_of_bloomThreshhold_12() { return &___bloomThreshhold_12; }
	inline void set_bloomThreshhold_12(float value)
	{
		___bloomThreshhold_12 = value;
	}

	inline static int32_t get_offset_of_bloomBlurIterations_13() { return static_cast<int32_t>(offsetof(BloomAndLensFlares_t4077233549, ___bloomBlurIterations_13)); }
	inline int32_t get_bloomBlurIterations_13() const { return ___bloomBlurIterations_13; }
	inline int32_t* get_address_of_bloomBlurIterations_13() { return &___bloomBlurIterations_13; }
	inline void set_bloomBlurIterations_13(int32_t value)
	{
		___bloomBlurIterations_13 = value;
	}

	inline static int32_t get_offset_of_lensflares_14() { return static_cast<int32_t>(offsetof(BloomAndLensFlares_t4077233549, ___lensflares_14)); }
	inline bool get_lensflares_14() const { return ___lensflares_14; }
	inline bool* get_address_of_lensflares_14() { return &___lensflares_14; }
	inline void set_lensflares_14(bool value)
	{
		___lensflares_14 = value;
	}

	inline static int32_t get_offset_of_hollywoodFlareBlurIterations_15() { return static_cast<int32_t>(offsetof(BloomAndLensFlares_t4077233549, ___hollywoodFlareBlurIterations_15)); }
	inline int32_t get_hollywoodFlareBlurIterations_15() const { return ___hollywoodFlareBlurIterations_15; }
	inline int32_t* get_address_of_hollywoodFlareBlurIterations_15() { return &___hollywoodFlareBlurIterations_15; }
	inline void set_hollywoodFlareBlurIterations_15(int32_t value)
	{
		___hollywoodFlareBlurIterations_15 = value;
	}

	inline static int32_t get_offset_of_lensflareMode_16() { return static_cast<int32_t>(offsetof(BloomAndLensFlares_t4077233549, ___lensflareMode_16)); }
	inline int32_t get_lensflareMode_16() const { return ___lensflareMode_16; }
	inline int32_t* get_address_of_lensflareMode_16() { return &___lensflareMode_16; }
	inline void set_lensflareMode_16(int32_t value)
	{
		___lensflareMode_16 = value;
	}

	inline static int32_t get_offset_of_hollyStretchWidth_17() { return static_cast<int32_t>(offsetof(BloomAndLensFlares_t4077233549, ___hollyStretchWidth_17)); }
	inline float get_hollyStretchWidth_17() const { return ___hollyStretchWidth_17; }
	inline float* get_address_of_hollyStretchWidth_17() { return &___hollyStretchWidth_17; }
	inline void set_hollyStretchWidth_17(float value)
	{
		___hollyStretchWidth_17 = value;
	}

	inline static int32_t get_offset_of_lensflareIntensity_18() { return static_cast<int32_t>(offsetof(BloomAndLensFlares_t4077233549, ___lensflareIntensity_18)); }
	inline float get_lensflareIntensity_18() const { return ___lensflareIntensity_18; }
	inline float* get_address_of_lensflareIntensity_18() { return &___lensflareIntensity_18; }
	inline void set_lensflareIntensity_18(float value)
	{
		___lensflareIntensity_18 = value;
	}

	inline static int32_t get_offset_of_lensflareThreshhold_19() { return static_cast<int32_t>(offsetof(BloomAndLensFlares_t4077233549, ___lensflareThreshhold_19)); }
	inline float get_lensflareThreshhold_19() const { return ___lensflareThreshhold_19; }
	inline float* get_address_of_lensflareThreshhold_19() { return &___lensflareThreshhold_19; }
	inline void set_lensflareThreshhold_19(float value)
	{
		___lensflareThreshhold_19 = value;
	}

	inline static int32_t get_offset_of_flareColorA_20() { return static_cast<int32_t>(offsetof(BloomAndLensFlares_t4077233549, ___flareColorA_20)); }
	inline Color_t2020392075  get_flareColorA_20() const { return ___flareColorA_20; }
	inline Color_t2020392075 * get_address_of_flareColorA_20() { return &___flareColorA_20; }
	inline void set_flareColorA_20(Color_t2020392075  value)
	{
		___flareColorA_20 = value;
	}

	inline static int32_t get_offset_of_flareColorB_21() { return static_cast<int32_t>(offsetof(BloomAndLensFlares_t4077233549, ___flareColorB_21)); }
	inline Color_t2020392075  get_flareColorB_21() const { return ___flareColorB_21; }
	inline Color_t2020392075 * get_address_of_flareColorB_21() { return &___flareColorB_21; }
	inline void set_flareColorB_21(Color_t2020392075  value)
	{
		___flareColorB_21 = value;
	}

	inline static int32_t get_offset_of_flareColorC_22() { return static_cast<int32_t>(offsetof(BloomAndLensFlares_t4077233549, ___flareColorC_22)); }
	inline Color_t2020392075  get_flareColorC_22() const { return ___flareColorC_22; }
	inline Color_t2020392075 * get_address_of_flareColorC_22() { return &___flareColorC_22; }
	inline void set_flareColorC_22(Color_t2020392075  value)
	{
		___flareColorC_22 = value;
	}

	inline static int32_t get_offset_of_flareColorD_23() { return static_cast<int32_t>(offsetof(BloomAndLensFlares_t4077233549, ___flareColorD_23)); }
	inline Color_t2020392075  get_flareColorD_23() const { return ___flareColorD_23; }
	inline Color_t2020392075 * get_address_of_flareColorD_23() { return &___flareColorD_23; }
	inline void set_flareColorD_23(Color_t2020392075  value)
	{
		___flareColorD_23 = value;
	}

	inline static int32_t get_offset_of_blurWidth_24() { return static_cast<int32_t>(offsetof(BloomAndLensFlares_t4077233549, ___blurWidth_24)); }
	inline float get_blurWidth_24() const { return ___blurWidth_24; }
	inline float* get_address_of_blurWidth_24() { return &___blurWidth_24; }
	inline void set_blurWidth_24(float value)
	{
		___blurWidth_24 = value;
	}

	inline static int32_t get_offset_of_lensFlareVignetteMask_25() { return static_cast<int32_t>(offsetof(BloomAndLensFlares_t4077233549, ___lensFlareVignetteMask_25)); }
	inline Texture2D_t3542995729 * get_lensFlareVignetteMask_25() const { return ___lensFlareVignetteMask_25; }
	inline Texture2D_t3542995729 ** get_address_of_lensFlareVignetteMask_25() { return &___lensFlareVignetteMask_25; }
	inline void set_lensFlareVignetteMask_25(Texture2D_t3542995729 * value)
	{
		___lensFlareVignetteMask_25 = value;
		Il2CppCodeGenWriteBarrier(&___lensFlareVignetteMask_25, value);
	}

	inline static int32_t get_offset_of_lensFlareShader_26() { return static_cast<int32_t>(offsetof(BloomAndLensFlares_t4077233549, ___lensFlareShader_26)); }
	inline Shader_t2430389951 * get_lensFlareShader_26() const { return ___lensFlareShader_26; }
	inline Shader_t2430389951 ** get_address_of_lensFlareShader_26() { return &___lensFlareShader_26; }
	inline void set_lensFlareShader_26(Shader_t2430389951 * value)
	{
		___lensFlareShader_26 = value;
		Il2CppCodeGenWriteBarrier(&___lensFlareShader_26, value);
	}

	inline static int32_t get_offset_of_lensFlareMaterial_27() { return static_cast<int32_t>(offsetof(BloomAndLensFlares_t4077233549, ___lensFlareMaterial_27)); }
	inline Material_t193706927 * get_lensFlareMaterial_27() const { return ___lensFlareMaterial_27; }
	inline Material_t193706927 ** get_address_of_lensFlareMaterial_27() { return &___lensFlareMaterial_27; }
	inline void set_lensFlareMaterial_27(Material_t193706927 * value)
	{
		___lensFlareMaterial_27 = value;
		Il2CppCodeGenWriteBarrier(&___lensFlareMaterial_27, value);
	}

	inline static int32_t get_offset_of_vignetteShader_28() { return static_cast<int32_t>(offsetof(BloomAndLensFlares_t4077233549, ___vignetteShader_28)); }
	inline Shader_t2430389951 * get_vignetteShader_28() const { return ___vignetteShader_28; }
	inline Shader_t2430389951 ** get_address_of_vignetteShader_28() { return &___vignetteShader_28; }
	inline void set_vignetteShader_28(Shader_t2430389951 * value)
	{
		___vignetteShader_28 = value;
		Il2CppCodeGenWriteBarrier(&___vignetteShader_28, value);
	}

	inline static int32_t get_offset_of_vignetteMaterial_29() { return static_cast<int32_t>(offsetof(BloomAndLensFlares_t4077233549, ___vignetteMaterial_29)); }
	inline Material_t193706927 * get_vignetteMaterial_29() const { return ___vignetteMaterial_29; }
	inline Material_t193706927 ** get_address_of_vignetteMaterial_29() { return &___vignetteMaterial_29; }
	inline void set_vignetteMaterial_29(Material_t193706927 * value)
	{
		___vignetteMaterial_29 = value;
		Il2CppCodeGenWriteBarrier(&___vignetteMaterial_29, value);
	}

	inline static int32_t get_offset_of_separableBlurShader_30() { return static_cast<int32_t>(offsetof(BloomAndLensFlares_t4077233549, ___separableBlurShader_30)); }
	inline Shader_t2430389951 * get_separableBlurShader_30() const { return ___separableBlurShader_30; }
	inline Shader_t2430389951 ** get_address_of_separableBlurShader_30() { return &___separableBlurShader_30; }
	inline void set_separableBlurShader_30(Shader_t2430389951 * value)
	{
		___separableBlurShader_30 = value;
		Il2CppCodeGenWriteBarrier(&___separableBlurShader_30, value);
	}

	inline static int32_t get_offset_of_separableBlurMaterial_31() { return static_cast<int32_t>(offsetof(BloomAndLensFlares_t4077233549, ___separableBlurMaterial_31)); }
	inline Material_t193706927 * get_separableBlurMaterial_31() const { return ___separableBlurMaterial_31; }
	inline Material_t193706927 ** get_address_of_separableBlurMaterial_31() { return &___separableBlurMaterial_31; }
	inline void set_separableBlurMaterial_31(Material_t193706927 * value)
	{
		___separableBlurMaterial_31 = value;
		Il2CppCodeGenWriteBarrier(&___separableBlurMaterial_31, value);
	}

	inline static int32_t get_offset_of_addBrightStuffOneOneShader_32() { return static_cast<int32_t>(offsetof(BloomAndLensFlares_t4077233549, ___addBrightStuffOneOneShader_32)); }
	inline Shader_t2430389951 * get_addBrightStuffOneOneShader_32() const { return ___addBrightStuffOneOneShader_32; }
	inline Shader_t2430389951 ** get_address_of_addBrightStuffOneOneShader_32() { return &___addBrightStuffOneOneShader_32; }
	inline void set_addBrightStuffOneOneShader_32(Shader_t2430389951 * value)
	{
		___addBrightStuffOneOneShader_32 = value;
		Il2CppCodeGenWriteBarrier(&___addBrightStuffOneOneShader_32, value);
	}

	inline static int32_t get_offset_of_addBrightStuffBlendOneOneMaterial_33() { return static_cast<int32_t>(offsetof(BloomAndLensFlares_t4077233549, ___addBrightStuffBlendOneOneMaterial_33)); }
	inline Material_t193706927 * get_addBrightStuffBlendOneOneMaterial_33() const { return ___addBrightStuffBlendOneOneMaterial_33; }
	inline Material_t193706927 ** get_address_of_addBrightStuffBlendOneOneMaterial_33() { return &___addBrightStuffBlendOneOneMaterial_33; }
	inline void set_addBrightStuffBlendOneOneMaterial_33(Material_t193706927 * value)
	{
		___addBrightStuffBlendOneOneMaterial_33 = value;
		Il2CppCodeGenWriteBarrier(&___addBrightStuffBlendOneOneMaterial_33, value);
	}

	inline static int32_t get_offset_of_screenBlendShader_34() { return static_cast<int32_t>(offsetof(BloomAndLensFlares_t4077233549, ___screenBlendShader_34)); }
	inline Shader_t2430389951 * get_screenBlendShader_34() const { return ___screenBlendShader_34; }
	inline Shader_t2430389951 ** get_address_of_screenBlendShader_34() { return &___screenBlendShader_34; }
	inline void set_screenBlendShader_34(Shader_t2430389951 * value)
	{
		___screenBlendShader_34 = value;
		Il2CppCodeGenWriteBarrier(&___screenBlendShader_34, value);
	}

	inline static int32_t get_offset_of_screenBlend_35() { return static_cast<int32_t>(offsetof(BloomAndLensFlares_t4077233549, ___screenBlend_35)); }
	inline Material_t193706927 * get_screenBlend_35() const { return ___screenBlend_35; }
	inline Material_t193706927 ** get_address_of_screenBlend_35() { return &___screenBlend_35; }
	inline void set_screenBlend_35(Material_t193706927 * value)
	{
		___screenBlend_35 = value;
		Il2CppCodeGenWriteBarrier(&___screenBlend_35, value);
	}

	inline static int32_t get_offset_of_hollywoodFlaresShader_36() { return static_cast<int32_t>(offsetof(BloomAndLensFlares_t4077233549, ___hollywoodFlaresShader_36)); }
	inline Shader_t2430389951 * get_hollywoodFlaresShader_36() const { return ___hollywoodFlaresShader_36; }
	inline Shader_t2430389951 ** get_address_of_hollywoodFlaresShader_36() { return &___hollywoodFlaresShader_36; }
	inline void set_hollywoodFlaresShader_36(Shader_t2430389951 * value)
	{
		___hollywoodFlaresShader_36 = value;
		Il2CppCodeGenWriteBarrier(&___hollywoodFlaresShader_36, value);
	}

	inline static int32_t get_offset_of_hollywoodFlaresMaterial_37() { return static_cast<int32_t>(offsetof(BloomAndLensFlares_t4077233549, ___hollywoodFlaresMaterial_37)); }
	inline Material_t193706927 * get_hollywoodFlaresMaterial_37() const { return ___hollywoodFlaresMaterial_37; }
	inline Material_t193706927 ** get_address_of_hollywoodFlaresMaterial_37() { return &___hollywoodFlaresMaterial_37; }
	inline void set_hollywoodFlaresMaterial_37(Material_t193706927 * value)
	{
		___hollywoodFlaresMaterial_37 = value;
		Il2CppCodeGenWriteBarrier(&___hollywoodFlaresMaterial_37, value);
	}

	inline static int32_t get_offset_of_brightPassFilterShader_38() { return static_cast<int32_t>(offsetof(BloomAndLensFlares_t4077233549, ___brightPassFilterShader_38)); }
	inline Shader_t2430389951 * get_brightPassFilterShader_38() const { return ___brightPassFilterShader_38; }
	inline Shader_t2430389951 ** get_address_of_brightPassFilterShader_38() { return &___brightPassFilterShader_38; }
	inline void set_brightPassFilterShader_38(Shader_t2430389951 * value)
	{
		___brightPassFilterShader_38 = value;
		Il2CppCodeGenWriteBarrier(&___brightPassFilterShader_38, value);
	}

	inline static int32_t get_offset_of_brightPassFilterMaterial_39() { return static_cast<int32_t>(offsetof(BloomAndLensFlares_t4077233549, ___brightPassFilterMaterial_39)); }
	inline Material_t193706927 * get_brightPassFilterMaterial_39() const { return ___brightPassFilterMaterial_39; }
	inline Material_t193706927 ** get_address_of_brightPassFilterMaterial_39() { return &___brightPassFilterMaterial_39; }
	inline void set_brightPassFilterMaterial_39(Material_t193706927 * value)
	{
		___brightPassFilterMaterial_39 = value;
		Il2CppCodeGenWriteBarrier(&___brightPassFilterMaterial_39, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
