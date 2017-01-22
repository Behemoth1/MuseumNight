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
#include "AssemblyU2DUnityScript_TiltShiftHdr_TiltShiftMode2293276028.h"
#include "AssemblyU2DUnityScript_TiltShiftHdr_TiltShiftQualit305897960.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TiltShiftHdr
struct  TiltShiftHdr_t2199316477  : public PostEffectsBase_t3757392499
{
public:
	// TiltShiftHdr/TiltShiftMode TiltShiftHdr::mode
	int32_t ___mode_5;
	// TiltShiftHdr/TiltShiftQuality TiltShiftHdr::quality
	int32_t ___quality_6;
	// System.Single TiltShiftHdr::blurArea
	float ___blurArea_7;
	// System.Single TiltShiftHdr::maxBlurSize
	float ___maxBlurSize_8;
	// System.Int32 TiltShiftHdr::downsample
	int32_t ___downsample_9;
	// UnityEngine.Shader TiltShiftHdr::tiltShiftShader
	Shader_t2430389951 * ___tiltShiftShader_10;
	// UnityEngine.Material TiltShiftHdr::tiltShiftMaterial
	Material_t193706927 * ___tiltShiftMaterial_11;

public:
	inline static int32_t get_offset_of_mode_5() { return static_cast<int32_t>(offsetof(TiltShiftHdr_t2199316477, ___mode_5)); }
	inline int32_t get_mode_5() const { return ___mode_5; }
	inline int32_t* get_address_of_mode_5() { return &___mode_5; }
	inline void set_mode_5(int32_t value)
	{
		___mode_5 = value;
	}

	inline static int32_t get_offset_of_quality_6() { return static_cast<int32_t>(offsetof(TiltShiftHdr_t2199316477, ___quality_6)); }
	inline int32_t get_quality_6() const { return ___quality_6; }
	inline int32_t* get_address_of_quality_6() { return &___quality_6; }
	inline void set_quality_6(int32_t value)
	{
		___quality_6 = value;
	}

	inline static int32_t get_offset_of_blurArea_7() { return static_cast<int32_t>(offsetof(TiltShiftHdr_t2199316477, ___blurArea_7)); }
	inline float get_blurArea_7() const { return ___blurArea_7; }
	inline float* get_address_of_blurArea_7() { return &___blurArea_7; }
	inline void set_blurArea_7(float value)
	{
		___blurArea_7 = value;
	}

	inline static int32_t get_offset_of_maxBlurSize_8() { return static_cast<int32_t>(offsetof(TiltShiftHdr_t2199316477, ___maxBlurSize_8)); }
	inline float get_maxBlurSize_8() const { return ___maxBlurSize_8; }
	inline float* get_address_of_maxBlurSize_8() { return &___maxBlurSize_8; }
	inline void set_maxBlurSize_8(float value)
	{
		___maxBlurSize_8 = value;
	}

	inline static int32_t get_offset_of_downsample_9() { return static_cast<int32_t>(offsetof(TiltShiftHdr_t2199316477, ___downsample_9)); }
	inline int32_t get_downsample_9() const { return ___downsample_9; }
	inline int32_t* get_address_of_downsample_9() { return &___downsample_9; }
	inline void set_downsample_9(int32_t value)
	{
		___downsample_9 = value;
	}

	inline static int32_t get_offset_of_tiltShiftShader_10() { return static_cast<int32_t>(offsetof(TiltShiftHdr_t2199316477, ___tiltShiftShader_10)); }
	inline Shader_t2430389951 * get_tiltShiftShader_10() const { return ___tiltShiftShader_10; }
	inline Shader_t2430389951 ** get_address_of_tiltShiftShader_10() { return &___tiltShiftShader_10; }
	inline void set_tiltShiftShader_10(Shader_t2430389951 * value)
	{
		___tiltShiftShader_10 = value;
		Il2CppCodeGenWriteBarrier(&___tiltShiftShader_10, value);
	}

	inline static int32_t get_offset_of_tiltShiftMaterial_11() { return static_cast<int32_t>(offsetof(TiltShiftHdr_t2199316477, ___tiltShiftMaterial_11)); }
	inline Material_t193706927 * get_tiltShiftMaterial_11() const { return ___tiltShiftMaterial_11; }
	inline Material_t193706927 ** get_address_of_tiltShiftMaterial_11() { return &___tiltShiftMaterial_11; }
	inline void set_tiltShiftMaterial_11(Material_t193706927 * value)
	{
		___tiltShiftMaterial_11 = value;
		Il2CppCodeGenWriteBarrier(&___tiltShiftMaterial_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
