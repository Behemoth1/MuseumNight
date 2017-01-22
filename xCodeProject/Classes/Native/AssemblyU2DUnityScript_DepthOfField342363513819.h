#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Shader
struct Shader_t2430389951;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// UnityEngine.RenderTexture
struct RenderTexture_t2666733923;

#include "AssemblyU2DUnityScript_PostEffectsBase3757392499.h"
#include "AssemblyU2DUnityScript_Dof34QualitySetting2579674687.h"
#include "AssemblyU2DUnityScript_DofResolution2458755317.h"
#include "AssemblyU2DUnityScript_DofBlurriness3715737866.h"
#include "AssemblyU2DUnityScript_BokehDestination1465375165.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DepthOfField34
struct  DepthOfField34_t2363513819  : public PostEffectsBase_t3757392499
{
public:
	// Dof34QualitySetting DepthOfField34::quality
	int32_t ___quality_7;
	// DofResolution DepthOfField34::resolution
	int32_t ___resolution_8;
	// System.Boolean DepthOfField34::simpleTweakMode
	bool ___simpleTweakMode_9;
	// System.Single DepthOfField34::focalPoint
	float ___focalPoint_10;
	// System.Single DepthOfField34::smoothness
	float ___smoothness_11;
	// System.Single DepthOfField34::focalZDistance
	float ___focalZDistance_12;
	// System.Single DepthOfField34::focalZStartCurve
	float ___focalZStartCurve_13;
	// System.Single DepthOfField34::focalZEndCurve
	float ___focalZEndCurve_14;
	// System.Single DepthOfField34::focalStartCurve
	float ___focalStartCurve_15;
	// System.Single DepthOfField34::focalEndCurve
	float ___focalEndCurve_16;
	// System.Single DepthOfField34::focalDistance01
	float ___focalDistance01_17;
	// UnityEngine.Transform DepthOfField34::objectFocus
	Transform_t3275118058 * ___objectFocus_18;
	// System.Single DepthOfField34::focalSize
	float ___focalSize_19;
	// DofBlurriness DepthOfField34::bluriness
	int32_t ___bluriness_20;
	// System.Single DepthOfField34::maxBlurSpread
	float ___maxBlurSpread_21;
	// System.Single DepthOfField34::foregroundBlurExtrude
	float ___foregroundBlurExtrude_22;
	// UnityEngine.Shader DepthOfField34::dofBlurShader
	Shader_t2430389951 * ___dofBlurShader_23;
	// UnityEngine.Material DepthOfField34::dofBlurMaterial
	Material_t193706927 * ___dofBlurMaterial_24;
	// UnityEngine.Shader DepthOfField34::dofShader
	Shader_t2430389951 * ___dofShader_25;
	// UnityEngine.Material DepthOfField34::dofMaterial
	Material_t193706927 * ___dofMaterial_26;
	// System.Boolean DepthOfField34::visualize
	bool ___visualize_27;
	// BokehDestination DepthOfField34::bokehDestination
	int32_t ___bokehDestination_28;
	// System.Single DepthOfField34::widthOverHeight
	float ___widthOverHeight_29;
	// System.Single DepthOfField34::oneOverBaseSize
	float ___oneOverBaseSize_30;
	// System.Boolean DepthOfField34::bokeh
	bool ___bokeh_31;
	// System.Boolean DepthOfField34::bokehSupport
	bool ___bokehSupport_32;
	// UnityEngine.Shader DepthOfField34::bokehShader
	Shader_t2430389951 * ___bokehShader_33;
	// UnityEngine.Texture2D DepthOfField34::bokehTexture
	Texture2D_t3542995729 * ___bokehTexture_34;
	// System.Single DepthOfField34::bokehScale
	float ___bokehScale_35;
	// System.Single DepthOfField34::bokehIntensity
	float ___bokehIntensity_36;
	// System.Single DepthOfField34::bokehThreshholdContrast
	float ___bokehThreshholdContrast_37;
	// System.Single DepthOfField34::bokehThreshholdLuminance
	float ___bokehThreshholdLuminance_38;
	// System.Int32 DepthOfField34::bokehDownsample
	int32_t ___bokehDownsample_39;
	// UnityEngine.Material DepthOfField34::bokehMaterial
	Material_t193706927 * ___bokehMaterial_40;
	// UnityEngine.RenderTexture DepthOfField34::foregroundTexture
	RenderTexture_t2666733923 * ___foregroundTexture_41;
	// UnityEngine.RenderTexture DepthOfField34::mediumRezWorkTexture
	RenderTexture_t2666733923 * ___mediumRezWorkTexture_42;
	// UnityEngine.RenderTexture DepthOfField34::finalDefocus
	RenderTexture_t2666733923 * ___finalDefocus_43;
	// UnityEngine.RenderTexture DepthOfField34::lowRezWorkTexture
	RenderTexture_t2666733923 * ___lowRezWorkTexture_44;
	// UnityEngine.RenderTexture DepthOfField34::bokehSource
	RenderTexture_t2666733923 * ___bokehSource_45;
	// UnityEngine.RenderTexture DepthOfField34::bokehSource2
	RenderTexture_t2666733923 * ___bokehSource2_46;

public:
	inline static int32_t get_offset_of_quality_7() { return static_cast<int32_t>(offsetof(DepthOfField34_t2363513819, ___quality_7)); }
	inline int32_t get_quality_7() const { return ___quality_7; }
	inline int32_t* get_address_of_quality_7() { return &___quality_7; }
	inline void set_quality_7(int32_t value)
	{
		___quality_7 = value;
	}

	inline static int32_t get_offset_of_resolution_8() { return static_cast<int32_t>(offsetof(DepthOfField34_t2363513819, ___resolution_8)); }
	inline int32_t get_resolution_8() const { return ___resolution_8; }
	inline int32_t* get_address_of_resolution_8() { return &___resolution_8; }
	inline void set_resolution_8(int32_t value)
	{
		___resolution_8 = value;
	}

	inline static int32_t get_offset_of_simpleTweakMode_9() { return static_cast<int32_t>(offsetof(DepthOfField34_t2363513819, ___simpleTweakMode_9)); }
	inline bool get_simpleTweakMode_9() const { return ___simpleTweakMode_9; }
	inline bool* get_address_of_simpleTweakMode_9() { return &___simpleTweakMode_9; }
	inline void set_simpleTweakMode_9(bool value)
	{
		___simpleTweakMode_9 = value;
	}

	inline static int32_t get_offset_of_focalPoint_10() { return static_cast<int32_t>(offsetof(DepthOfField34_t2363513819, ___focalPoint_10)); }
	inline float get_focalPoint_10() const { return ___focalPoint_10; }
	inline float* get_address_of_focalPoint_10() { return &___focalPoint_10; }
	inline void set_focalPoint_10(float value)
	{
		___focalPoint_10 = value;
	}

	inline static int32_t get_offset_of_smoothness_11() { return static_cast<int32_t>(offsetof(DepthOfField34_t2363513819, ___smoothness_11)); }
	inline float get_smoothness_11() const { return ___smoothness_11; }
	inline float* get_address_of_smoothness_11() { return &___smoothness_11; }
	inline void set_smoothness_11(float value)
	{
		___smoothness_11 = value;
	}

	inline static int32_t get_offset_of_focalZDistance_12() { return static_cast<int32_t>(offsetof(DepthOfField34_t2363513819, ___focalZDistance_12)); }
	inline float get_focalZDistance_12() const { return ___focalZDistance_12; }
	inline float* get_address_of_focalZDistance_12() { return &___focalZDistance_12; }
	inline void set_focalZDistance_12(float value)
	{
		___focalZDistance_12 = value;
	}

	inline static int32_t get_offset_of_focalZStartCurve_13() { return static_cast<int32_t>(offsetof(DepthOfField34_t2363513819, ___focalZStartCurve_13)); }
	inline float get_focalZStartCurve_13() const { return ___focalZStartCurve_13; }
	inline float* get_address_of_focalZStartCurve_13() { return &___focalZStartCurve_13; }
	inline void set_focalZStartCurve_13(float value)
	{
		___focalZStartCurve_13 = value;
	}

	inline static int32_t get_offset_of_focalZEndCurve_14() { return static_cast<int32_t>(offsetof(DepthOfField34_t2363513819, ___focalZEndCurve_14)); }
	inline float get_focalZEndCurve_14() const { return ___focalZEndCurve_14; }
	inline float* get_address_of_focalZEndCurve_14() { return &___focalZEndCurve_14; }
	inline void set_focalZEndCurve_14(float value)
	{
		___focalZEndCurve_14 = value;
	}

	inline static int32_t get_offset_of_focalStartCurve_15() { return static_cast<int32_t>(offsetof(DepthOfField34_t2363513819, ___focalStartCurve_15)); }
	inline float get_focalStartCurve_15() const { return ___focalStartCurve_15; }
	inline float* get_address_of_focalStartCurve_15() { return &___focalStartCurve_15; }
	inline void set_focalStartCurve_15(float value)
	{
		___focalStartCurve_15 = value;
	}

	inline static int32_t get_offset_of_focalEndCurve_16() { return static_cast<int32_t>(offsetof(DepthOfField34_t2363513819, ___focalEndCurve_16)); }
	inline float get_focalEndCurve_16() const { return ___focalEndCurve_16; }
	inline float* get_address_of_focalEndCurve_16() { return &___focalEndCurve_16; }
	inline void set_focalEndCurve_16(float value)
	{
		___focalEndCurve_16 = value;
	}

	inline static int32_t get_offset_of_focalDistance01_17() { return static_cast<int32_t>(offsetof(DepthOfField34_t2363513819, ___focalDistance01_17)); }
	inline float get_focalDistance01_17() const { return ___focalDistance01_17; }
	inline float* get_address_of_focalDistance01_17() { return &___focalDistance01_17; }
	inline void set_focalDistance01_17(float value)
	{
		___focalDistance01_17 = value;
	}

	inline static int32_t get_offset_of_objectFocus_18() { return static_cast<int32_t>(offsetof(DepthOfField34_t2363513819, ___objectFocus_18)); }
	inline Transform_t3275118058 * get_objectFocus_18() const { return ___objectFocus_18; }
	inline Transform_t3275118058 ** get_address_of_objectFocus_18() { return &___objectFocus_18; }
	inline void set_objectFocus_18(Transform_t3275118058 * value)
	{
		___objectFocus_18 = value;
		Il2CppCodeGenWriteBarrier(&___objectFocus_18, value);
	}

	inline static int32_t get_offset_of_focalSize_19() { return static_cast<int32_t>(offsetof(DepthOfField34_t2363513819, ___focalSize_19)); }
	inline float get_focalSize_19() const { return ___focalSize_19; }
	inline float* get_address_of_focalSize_19() { return &___focalSize_19; }
	inline void set_focalSize_19(float value)
	{
		___focalSize_19 = value;
	}

	inline static int32_t get_offset_of_bluriness_20() { return static_cast<int32_t>(offsetof(DepthOfField34_t2363513819, ___bluriness_20)); }
	inline int32_t get_bluriness_20() const { return ___bluriness_20; }
	inline int32_t* get_address_of_bluriness_20() { return &___bluriness_20; }
	inline void set_bluriness_20(int32_t value)
	{
		___bluriness_20 = value;
	}

	inline static int32_t get_offset_of_maxBlurSpread_21() { return static_cast<int32_t>(offsetof(DepthOfField34_t2363513819, ___maxBlurSpread_21)); }
	inline float get_maxBlurSpread_21() const { return ___maxBlurSpread_21; }
	inline float* get_address_of_maxBlurSpread_21() { return &___maxBlurSpread_21; }
	inline void set_maxBlurSpread_21(float value)
	{
		___maxBlurSpread_21 = value;
	}

	inline static int32_t get_offset_of_foregroundBlurExtrude_22() { return static_cast<int32_t>(offsetof(DepthOfField34_t2363513819, ___foregroundBlurExtrude_22)); }
	inline float get_foregroundBlurExtrude_22() const { return ___foregroundBlurExtrude_22; }
	inline float* get_address_of_foregroundBlurExtrude_22() { return &___foregroundBlurExtrude_22; }
	inline void set_foregroundBlurExtrude_22(float value)
	{
		___foregroundBlurExtrude_22 = value;
	}

	inline static int32_t get_offset_of_dofBlurShader_23() { return static_cast<int32_t>(offsetof(DepthOfField34_t2363513819, ___dofBlurShader_23)); }
	inline Shader_t2430389951 * get_dofBlurShader_23() const { return ___dofBlurShader_23; }
	inline Shader_t2430389951 ** get_address_of_dofBlurShader_23() { return &___dofBlurShader_23; }
	inline void set_dofBlurShader_23(Shader_t2430389951 * value)
	{
		___dofBlurShader_23 = value;
		Il2CppCodeGenWriteBarrier(&___dofBlurShader_23, value);
	}

	inline static int32_t get_offset_of_dofBlurMaterial_24() { return static_cast<int32_t>(offsetof(DepthOfField34_t2363513819, ___dofBlurMaterial_24)); }
	inline Material_t193706927 * get_dofBlurMaterial_24() const { return ___dofBlurMaterial_24; }
	inline Material_t193706927 ** get_address_of_dofBlurMaterial_24() { return &___dofBlurMaterial_24; }
	inline void set_dofBlurMaterial_24(Material_t193706927 * value)
	{
		___dofBlurMaterial_24 = value;
		Il2CppCodeGenWriteBarrier(&___dofBlurMaterial_24, value);
	}

	inline static int32_t get_offset_of_dofShader_25() { return static_cast<int32_t>(offsetof(DepthOfField34_t2363513819, ___dofShader_25)); }
	inline Shader_t2430389951 * get_dofShader_25() const { return ___dofShader_25; }
	inline Shader_t2430389951 ** get_address_of_dofShader_25() { return &___dofShader_25; }
	inline void set_dofShader_25(Shader_t2430389951 * value)
	{
		___dofShader_25 = value;
		Il2CppCodeGenWriteBarrier(&___dofShader_25, value);
	}

	inline static int32_t get_offset_of_dofMaterial_26() { return static_cast<int32_t>(offsetof(DepthOfField34_t2363513819, ___dofMaterial_26)); }
	inline Material_t193706927 * get_dofMaterial_26() const { return ___dofMaterial_26; }
	inline Material_t193706927 ** get_address_of_dofMaterial_26() { return &___dofMaterial_26; }
	inline void set_dofMaterial_26(Material_t193706927 * value)
	{
		___dofMaterial_26 = value;
		Il2CppCodeGenWriteBarrier(&___dofMaterial_26, value);
	}

	inline static int32_t get_offset_of_visualize_27() { return static_cast<int32_t>(offsetof(DepthOfField34_t2363513819, ___visualize_27)); }
	inline bool get_visualize_27() const { return ___visualize_27; }
	inline bool* get_address_of_visualize_27() { return &___visualize_27; }
	inline void set_visualize_27(bool value)
	{
		___visualize_27 = value;
	}

	inline static int32_t get_offset_of_bokehDestination_28() { return static_cast<int32_t>(offsetof(DepthOfField34_t2363513819, ___bokehDestination_28)); }
	inline int32_t get_bokehDestination_28() const { return ___bokehDestination_28; }
	inline int32_t* get_address_of_bokehDestination_28() { return &___bokehDestination_28; }
	inline void set_bokehDestination_28(int32_t value)
	{
		___bokehDestination_28 = value;
	}

	inline static int32_t get_offset_of_widthOverHeight_29() { return static_cast<int32_t>(offsetof(DepthOfField34_t2363513819, ___widthOverHeight_29)); }
	inline float get_widthOverHeight_29() const { return ___widthOverHeight_29; }
	inline float* get_address_of_widthOverHeight_29() { return &___widthOverHeight_29; }
	inline void set_widthOverHeight_29(float value)
	{
		___widthOverHeight_29 = value;
	}

	inline static int32_t get_offset_of_oneOverBaseSize_30() { return static_cast<int32_t>(offsetof(DepthOfField34_t2363513819, ___oneOverBaseSize_30)); }
	inline float get_oneOverBaseSize_30() const { return ___oneOverBaseSize_30; }
	inline float* get_address_of_oneOverBaseSize_30() { return &___oneOverBaseSize_30; }
	inline void set_oneOverBaseSize_30(float value)
	{
		___oneOverBaseSize_30 = value;
	}

	inline static int32_t get_offset_of_bokeh_31() { return static_cast<int32_t>(offsetof(DepthOfField34_t2363513819, ___bokeh_31)); }
	inline bool get_bokeh_31() const { return ___bokeh_31; }
	inline bool* get_address_of_bokeh_31() { return &___bokeh_31; }
	inline void set_bokeh_31(bool value)
	{
		___bokeh_31 = value;
	}

	inline static int32_t get_offset_of_bokehSupport_32() { return static_cast<int32_t>(offsetof(DepthOfField34_t2363513819, ___bokehSupport_32)); }
	inline bool get_bokehSupport_32() const { return ___bokehSupport_32; }
	inline bool* get_address_of_bokehSupport_32() { return &___bokehSupport_32; }
	inline void set_bokehSupport_32(bool value)
	{
		___bokehSupport_32 = value;
	}

	inline static int32_t get_offset_of_bokehShader_33() { return static_cast<int32_t>(offsetof(DepthOfField34_t2363513819, ___bokehShader_33)); }
	inline Shader_t2430389951 * get_bokehShader_33() const { return ___bokehShader_33; }
	inline Shader_t2430389951 ** get_address_of_bokehShader_33() { return &___bokehShader_33; }
	inline void set_bokehShader_33(Shader_t2430389951 * value)
	{
		___bokehShader_33 = value;
		Il2CppCodeGenWriteBarrier(&___bokehShader_33, value);
	}

	inline static int32_t get_offset_of_bokehTexture_34() { return static_cast<int32_t>(offsetof(DepthOfField34_t2363513819, ___bokehTexture_34)); }
	inline Texture2D_t3542995729 * get_bokehTexture_34() const { return ___bokehTexture_34; }
	inline Texture2D_t3542995729 ** get_address_of_bokehTexture_34() { return &___bokehTexture_34; }
	inline void set_bokehTexture_34(Texture2D_t3542995729 * value)
	{
		___bokehTexture_34 = value;
		Il2CppCodeGenWriteBarrier(&___bokehTexture_34, value);
	}

	inline static int32_t get_offset_of_bokehScale_35() { return static_cast<int32_t>(offsetof(DepthOfField34_t2363513819, ___bokehScale_35)); }
	inline float get_bokehScale_35() const { return ___bokehScale_35; }
	inline float* get_address_of_bokehScale_35() { return &___bokehScale_35; }
	inline void set_bokehScale_35(float value)
	{
		___bokehScale_35 = value;
	}

	inline static int32_t get_offset_of_bokehIntensity_36() { return static_cast<int32_t>(offsetof(DepthOfField34_t2363513819, ___bokehIntensity_36)); }
	inline float get_bokehIntensity_36() const { return ___bokehIntensity_36; }
	inline float* get_address_of_bokehIntensity_36() { return &___bokehIntensity_36; }
	inline void set_bokehIntensity_36(float value)
	{
		___bokehIntensity_36 = value;
	}

	inline static int32_t get_offset_of_bokehThreshholdContrast_37() { return static_cast<int32_t>(offsetof(DepthOfField34_t2363513819, ___bokehThreshholdContrast_37)); }
	inline float get_bokehThreshholdContrast_37() const { return ___bokehThreshholdContrast_37; }
	inline float* get_address_of_bokehThreshholdContrast_37() { return &___bokehThreshholdContrast_37; }
	inline void set_bokehThreshholdContrast_37(float value)
	{
		___bokehThreshholdContrast_37 = value;
	}

	inline static int32_t get_offset_of_bokehThreshholdLuminance_38() { return static_cast<int32_t>(offsetof(DepthOfField34_t2363513819, ___bokehThreshholdLuminance_38)); }
	inline float get_bokehThreshholdLuminance_38() const { return ___bokehThreshholdLuminance_38; }
	inline float* get_address_of_bokehThreshholdLuminance_38() { return &___bokehThreshholdLuminance_38; }
	inline void set_bokehThreshholdLuminance_38(float value)
	{
		___bokehThreshholdLuminance_38 = value;
	}

	inline static int32_t get_offset_of_bokehDownsample_39() { return static_cast<int32_t>(offsetof(DepthOfField34_t2363513819, ___bokehDownsample_39)); }
	inline int32_t get_bokehDownsample_39() const { return ___bokehDownsample_39; }
	inline int32_t* get_address_of_bokehDownsample_39() { return &___bokehDownsample_39; }
	inline void set_bokehDownsample_39(int32_t value)
	{
		___bokehDownsample_39 = value;
	}

	inline static int32_t get_offset_of_bokehMaterial_40() { return static_cast<int32_t>(offsetof(DepthOfField34_t2363513819, ___bokehMaterial_40)); }
	inline Material_t193706927 * get_bokehMaterial_40() const { return ___bokehMaterial_40; }
	inline Material_t193706927 ** get_address_of_bokehMaterial_40() { return &___bokehMaterial_40; }
	inline void set_bokehMaterial_40(Material_t193706927 * value)
	{
		___bokehMaterial_40 = value;
		Il2CppCodeGenWriteBarrier(&___bokehMaterial_40, value);
	}

	inline static int32_t get_offset_of_foregroundTexture_41() { return static_cast<int32_t>(offsetof(DepthOfField34_t2363513819, ___foregroundTexture_41)); }
	inline RenderTexture_t2666733923 * get_foregroundTexture_41() const { return ___foregroundTexture_41; }
	inline RenderTexture_t2666733923 ** get_address_of_foregroundTexture_41() { return &___foregroundTexture_41; }
	inline void set_foregroundTexture_41(RenderTexture_t2666733923 * value)
	{
		___foregroundTexture_41 = value;
		Il2CppCodeGenWriteBarrier(&___foregroundTexture_41, value);
	}

	inline static int32_t get_offset_of_mediumRezWorkTexture_42() { return static_cast<int32_t>(offsetof(DepthOfField34_t2363513819, ___mediumRezWorkTexture_42)); }
	inline RenderTexture_t2666733923 * get_mediumRezWorkTexture_42() const { return ___mediumRezWorkTexture_42; }
	inline RenderTexture_t2666733923 ** get_address_of_mediumRezWorkTexture_42() { return &___mediumRezWorkTexture_42; }
	inline void set_mediumRezWorkTexture_42(RenderTexture_t2666733923 * value)
	{
		___mediumRezWorkTexture_42 = value;
		Il2CppCodeGenWriteBarrier(&___mediumRezWorkTexture_42, value);
	}

	inline static int32_t get_offset_of_finalDefocus_43() { return static_cast<int32_t>(offsetof(DepthOfField34_t2363513819, ___finalDefocus_43)); }
	inline RenderTexture_t2666733923 * get_finalDefocus_43() const { return ___finalDefocus_43; }
	inline RenderTexture_t2666733923 ** get_address_of_finalDefocus_43() { return &___finalDefocus_43; }
	inline void set_finalDefocus_43(RenderTexture_t2666733923 * value)
	{
		___finalDefocus_43 = value;
		Il2CppCodeGenWriteBarrier(&___finalDefocus_43, value);
	}

	inline static int32_t get_offset_of_lowRezWorkTexture_44() { return static_cast<int32_t>(offsetof(DepthOfField34_t2363513819, ___lowRezWorkTexture_44)); }
	inline RenderTexture_t2666733923 * get_lowRezWorkTexture_44() const { return ___lowRezWorkTexture_44; }
	inline RenderTexture_t2666733923 ** get_address_of_lowRezWorkTexture_44() { return &___lowRezWorkTexture_44; }
	inline void set_lowRezWorkTexture_44(RenderTexture_t2666733923 * value)
	{
		___lowRezWorkTexture_44 = value;
		Il2CppCodeGenWriteBarrier(&___lowRezWorkTexture_44, value);
	}

	inline static int32_t get_offset_of_bokehSource_45() { return static_cast<int32_t>(offsetof(DepthOfField34_t2363513819, ___bokehSource_45)); }
	inline RenderTexture_t2666733923 * get_bokehSource_45() const { return ___bokehSource_45; }
	inline RenderTexture_t2666733923 ** get_address_of_bokehSource_45() { return &___bokehSource_45; }
	inline void set_bokehSource_45(RenderTexture_t2666733923 * value)
	{
		___bokehSource_45 = value;
		Il2CppCodeGenWriteBarrier(&___bokehSource_45, value);
	}

	inline static int32_t get_offset_of_bokehSource2_46() { return static_cast<int32_t>(offsetof(DepthOfField34_t2363513819, ___bokehSource2_46)); }
	inline RenderTexture_t2666733923 * get_bokehSource2_46() const { return ___bokehSource2_46; }
	inline RenderTexture_t2666733923 ** get_address_of_bokehSource2_46() { return &___bokehSource2_46; }
	inline void set_bokehSource2_46(RenderTexture_t2666733923 * value)
	{
		___bokehSource2_46 = value;
		Il2CppCodeGenWriteBarrier(&___bokehSource2_46, value);
	}
};

struct DepthOfField34_t2363513819_StaticFields
{
public:
	// System.Int32 DepthOfField34::SMOOTH_DOWNSAMPLE_PASS
	int32_t ___SMOOTH_DOWNSAMPLE_PASS_5;
	// System.Single DepthOfField34::BOKEH_EXTRA_BLUR
	float ___BOKEH_EXTRA_BLUR_6;

public:
	inline static int32_t get_offset_of_SMOOTH_DOWNSAMPLE_PASS_5() { return static_cast<int32_t>(offsetof(DepthOfField34_t2363513819_StaticFields, ___SMOOTH_DOWNSAMPLE_PASS_5)); }
	inline int32_t get_SMOOTH_DOWNSAMPLE_PASS_5() const { return ___SMOOTH_DOWNSAMPLE_PASS_5; }
	inline int32_t* get_address_of_SMOOTH_DOWNSAMPLE_PASS_5() { return &___SMOOTH_DOWNSAMPLE_PASS_5; }
	inline void set_SMOOTH_DOWNSAMPLE_PASS_5(int32_t value)
	{
		___SMOOTH_DOWNSAMPLE_PASS_5 = value;
	}

	inline static int32_t get_offset_of_BOKEH_EXTRA_BLUR_6() { return static_cast<int32_t>(offsetof(DepthOfField34_t2363513819_StaticFields, ___BOKEH_EXTRA_BLUR_6)); }
	inline float get_BOKEH_EXTRA_BLUR_6() const { return ___BOKEH_EXTRA_BLUR_6; }
	inline float* get_address_of_BOKEH_EXTRA_BLUR_6() { return &___BOKEH_EXTRA_BLUR_6; }
	inline void set_BOKEH_EXTRA_BLUR_6(float value)
	{
		___BOKEH_EXTRA_BLUR_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
