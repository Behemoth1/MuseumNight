#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// NoiseEffect
struct NoiseEffect_t3733883223;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.RenderTexture
struct RenderTexture_t2666733923;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RenderTexture2666733923.h"

// System.Void NoiseEffect::.ctor()
extern "C"  void NoiseEffect__ctor_m904850174 (NoiseEffect_t3733883223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NoiseEffect::Start()
extern "C"  void NoiseEffect_Start_m257222578 (NoiseEffect_t3733883223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material NoiseEffect::get_material()
extern "C"  Material_t193706927 * NoiseEffect_get_material_m1155074067 (NoiseEffect_t3733883223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NoiseEffect::OnDisable()
extern "C"  void NoiseEffect_OnDisable_m1737690667 (NoiseEffect_t3733883223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NoiseEffect::SanitizeParameters()
extern "C"  void NoiseEffect_SanitizeParameters_m4207401635 (NoiseEffect_t3733883223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NoiseEffect::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void NoiseEffect_OnRenderImage_m3519139274 (NoiseEffect_t3733883223 * __this, RenderTexture_t2666733923 * ___source0, RenderTexture_t2666733923 * ___destination1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
