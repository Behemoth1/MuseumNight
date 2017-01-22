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
#include "AssemblyU2DUnityScript_GlobalFog_FogMode3458294069.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GlobalFog
struct  GlobalFog_t3266414943  : public PostEffectsBase_t3757392499
{
public:
	// GlobalFog/FogMode GlobalFog::fogMode
	int32_t ___fogMode_5;
	// System.Single GlobalFog::CAMERA_NEAR
	float ___CAMERA_NEAR_6;
	// System.Single GlobalFog::CAMERA_FAR
	float ___CAMERA_FAR_7;
	// System.Single GlobalFog::CAMERA_FOV
	float ___CAMERA_FOV_8;
	// System.Single GlobalFog::CAMERA_ASPECT_RATIO
	float ___CAMERA_ASPECT_RATIO_9;
	// System.Single GlobalFog::startDistance
	float ___startDistance_10;
	// System.Single GlobalFog::globalDensity
	float ___globalDensity_11;
	// System.Single GlobalFog::heightScale
	float ___heightScale_12;
	// System.Single GlobalFog::height
	float ___height_13;
	// UnityEngine.Color GlobalFog::globalFogColor
	Color_t2020392075  ___globalFogColor_14;
	// UnityEngine.Shader GlobalFog::fogShader
	Shader_t2430389951 * ___fogShader_15;
	// UnityEngine.Material GlobalFog::fogMaterial
	Material_t193706927 * ___fogMaterial_16;

public:
	inline static int32_t get_offset_of_fogMode_5() { return static_cast<int32_t>(offsetof(GlobalFog_t3266414943, ___fogMode_5)); }
	inline int32_t get_fogMode_5() const { return ___fogMode_5; }
	inline int32_t* get_address_of_fogMode_5() { return &___fogMode_5; }
	inline void set_fogMode_5(int32_t value)
	{
		___fogMode_5 = value;
	}

	inline static int32_t get_offset_of_CAMERA_NEAR_6() { return static_cast<int32_t>(offsetof(GlobalFog_t3266414943, ___CAMERA_NEAR_6)); }
	inline float get_CAMERA_NEAR_6() const { return ___CAMERA_NEAR_6; }
	inline float* get_address_of_CAMERA_NEAR_6() { return &___CAMERA_NEAR_6; }
	inline void set_CAMERA_NEAR_6(float value)
	{
		___CAMERA_NEAR_6 = value;
	}

	inline static int32_t get_offset_of_CAMERA_FAR_7() { return static_cast<int32_t>(offsetof(GlobalFog_t3266414943, ___CAMERA_FAR_7)); }
	inline float get_CAMERA_FAR_7() const { return ___CAMERA_FAR_7; }
	inline float* get_address_of_CAMERA_FAR_7() { return &___CAMERA_FAR_7; }
	inline void set_CAMERA_FAR_7(float value)
	{
		___CAMERA_FAR_7 = value;
	}

	inline static int32_t get_offset_of_CAMERA_FOV_8() { return static_cast<int32_t>(offsetof(GlobalFog_t3266414943, ___CAMERA_FOV_8)); }
	inline float get_CAMERA_FOV_8() const { return ___CAMERA_FOV_8; }
	inline float* get_address_of_CAMERA_FOV_8() { return &___CAMERA_FOV_8; }
	inline void set_CAMERA_FOV_8(float value)
	{
		___CAMERA_FOV_8 = value;
	}

	inline static int32_t get_offset_of_CAMERA_ASPECT_RATIO_9() { return static_cast<int32_t>(offsetof(GlobalFog_t3266414943, ___CAMERA_ASPECT_RATIO_9)); }
	inline float get_CAMERA_ASPECT_RATIO_9() const { return ___CAMERA_ASPECT_RATIO_9; }
	inline float* get_address_of_CAMERA_ASPECT_RATIO_9() { return &___CAMERA_ASPECT_RATIO_9; }
	inline void set_CAMERA_ASPECT_RATIO_9(float value)
	{
		___CAMERA_ASPECT_RATIO_9 = value;
	}

	inline static int32_t get_offset_of_startDistance_10() { return static_cast<int32_t>(offsetof(GlobalFog_t3266414943, ___startDistance_10)); }
	inline float get_startDistance_10() const { return ___startDistance_10; }
	inline float* get_address_of_startDistance_10() { return &___startDistance_10; }
	inline void set_startDistance_10(float value)
	{
		___startDistance_10 = value;
	}

	inline static int32_t get_offset_of_globalDensity_11() { return static_cast<int32_t>(offsetof(GlobalFog_t3266414943, ___globalDensity_11)); }
	inline float get_globalDensity_11() const { return ___globalDensity_11; }
	inline float* get_address_of_globalDensity_11() { return &___globalDensity_11; }
	inline void set_globalDensity_11(float value)
	{
		___globalDensity_11 = value;
	}

	inline static int32_t get_offset_of_heightScale_12() { return static_cast<int32_t>(offsetof(GlobalFog_t3266414943, ___heightScale_12)); }
	inline float get_heightScale_12() const { return ___heightScale_12; }
	inline float* get_address_of_heightScale_12() { return &___heightScale_12; }
	inline void set_heightScale_12(float value)
	{
		___heightScale_12 = value;
	}

	inline static int32_t get_offset_of_height_13() { return static_cast<int32_t>(offsetof(GlobalFog_t3266414943, ___height_13)); }
	inline float get_height_13() const { return ___height_13; }
	inline float* get_address_of_height_13() { return &___height_13; }
	inline void set_height_13(float value)
	{
		___height_13 = value;
	}

	inline static int32_t get_offset_of_globalFogColor_14() { return static_cast<int32_t>(offsetof(GlobalFog_t3266414943, ___globalFogColor_14)); }
	inline Color_t2020392075  get_globalFogColor_14() const { return ___globalFogColor_14; }
	inline Color_t2020392075 * get_address_of_globalFogColor_14() { return &___globalFogColor_14; }
	inline void set_globalFogColor_14(Color_t2020392075  value)
	{
		___globalFogColor_14 = value;
	}

	inline static int32_t get_offset_of_fogShader_15() { return static_cast<int32_t>(offsetof(GlobalFog_t3266414943, ___fogShader_15)); }
	inline Shader_t2430389951 * get_fogShader_15() const { return ___fogShader_15; }
	inline Shader_t2430389951 ** get_address_of_fogShader_15() { return &___fogShader_15; }
	inline void set_fogShader_15(Shader_t2430389951 * value)
	{
		___fogShader_15 = value;
		Il2CppCodeGenWriteBarrier(&___fogShader_15, value);
	}

	inline static int32_t get_offset_of_fogMaterial_16() { return static_cast<int32_t>(offsetof(GlobalFog_t3266414943, ___fogMaterial_16)); }
	inline Material_t193706927 * get_fogMaterial_16() const { return ___fogMaterial_16; }
	inline Material_t193706927 ** get_address_of_fogMaterial_16() { return &___fogMaterial_16; }
	inline void set_fogMaterial_16(Material_t193706927 * value)
	{
		___fogMaterial_16 = value;
		Il2CppCodeGenWriteBarrier(&___fogMaterial_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
