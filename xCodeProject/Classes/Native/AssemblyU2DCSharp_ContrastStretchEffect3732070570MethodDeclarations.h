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

// ContrastStretchEffect
struct ContrastStretchEffect_t3732070570;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.RenderTexture
struct RenderTexture_t2666733923;
// UnityEngine.Texture
struct Texture_t2243626319;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RenderTexture2666733923.h"
#include "UnityEngine_UnityEngine_Texture2243626319.h"

// System.Void ContrastStretchEffect::.ctor()
extern "C"  void ContrastStretchEffect__ctor_m4285603277 (ContrastStretchEffect_t3732070570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material ContrastStretchEffect::get_materialLum()
extern "C"  Material_t193706927 * ContrastStretchEffect_get_materialLum_m1725235222 (ContrastStretchEffect_t3732070570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material ContrastStretchEffect::get_materialReduce()
extern "C"  Material_t193706927 * ContrastStretchEffect_get_materialReduce_m1415151204 (ContrastStretchEffect_t3732070570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material ContrastStretchEffect::get_materialAdapt()
extern "C"  Material_t193706927 * ContrastStretchEffect_get_materialAdapt_m490470468 (ContrastStretchEffect_t3732070570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material ContrastStretchEffect::get_materialApply()
extern "C"  Material_t193706927 * ContrastStretchEffect_get_materialApply_m2182561376 (ContrastStretchEffect_t3732070570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ContrastStretchEffect::Start()
extern "C"  void ContrastStretchEffect_Start_m1338962757 (ContrastStretchEffect_t3732070570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ContrastStretchEffect::OnEnable()
extern "C"  void ContrastStretchEffect_OnEnable_m77827141 (ContrastStretchEffect_t3732070570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ContrastStretchEffect::OnDisable()
extern "C"  void ContrastStretchEffect_OnDisable_m2731495806 (ContrastStretchEffect_t3732070570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ContrastStretchEffect::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void ContrastStretchEffect_OnRenderImage_m3375462205 (ContrastStretchEffect_t3732070570 * __this, RenderTexture_t2666733923 * ___source0, RenderTexture_t2666733923 * ___destination1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ContrastStretchEffect::CalculateAdaptation(UnityEngine.Texture)
extern "C"  void ContrastStretchEffect_CalculateAdaptation_m904993548 (ContrastStretchEffect_t3732070570 * __this, Texture_t2243626319 * ___curTexture0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
