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

// SSAOEffect
struct SSAOEffect_t1790065191;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Shader
struct Shader_t2430389951;
// UnityEngine.RenderTexture
struct RenderTexture_t2666733923;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Shader2430389951.h"
#include "UnityEngine_UnityEngine_Material193706927.h"
#include "UnityEngine_UnityEngine_RenderTexture2666733923.h"

// System.Void SSAOEffect::.ctor()
extern "C"  void SSAOEffect__ctor_m2989992982 (SSAOEffect_t1790065191 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material SSAOEffect::CreateMaterial(UnityEngine.Shader)
extern "C"  Material_t193706927 * SSAOEffect_CreateMaterial_m1485538074 (Il2CppObject * __this /* static, unused */, Shader_t2430389951 * ___shader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SSAOEffect::DestroyMaterial(UnityEngine.Material)
extern "C"  void SSAOEffect_DestroyMaterial_m3607422979 (Il2CppObject * __this /* static, unused */, Material_t193706927 * ___mat0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SSAOEffect::OnDisable()
extern "C"  void SSAOEffect_OnDisable_m691270543 (SSAOEffect_t1790065191 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SSAOEffect::Start()
extern "C"  void SSAOEffect_Start_m3646354258 (SSAOEffect_t1790065191 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SSAOEffect::OnEnable()
extern "C"  void SSAOEffect_OnEnable_m4025298706 (SSAOEffect_t1790065191 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SSAOEffect::CreateMaterials()
extern "C"  void SSAOEffect_CreateMaterials_m1735501068 (SSAOEffect_t1790065191 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SSAOEffect::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void SSAOEffect_OnRenderImage_m4278304858 (SSAOEffect_t1790065191 * __this, RenderTexture_t2666733923 * ___source0, RenderTexture_t2666733923 * ___destination1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
