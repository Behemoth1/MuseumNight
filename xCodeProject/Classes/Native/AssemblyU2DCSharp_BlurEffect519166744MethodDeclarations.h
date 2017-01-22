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

// BlurEffect
struct BlurEffect_t519166744;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.RenderTexture
struct RenderTexture_t2666733923;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RenderTexture2666733923.h"

// System.Void BlurEffect::.ctor()
extern "C"  void BlurEffect__ctor_m3596582257 (BlurEffect_t519166744 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material BlurEffect::get_material()
extern "C"  Material_t193706927 * BlurEffect_get_material_m3025067050 (BlurEffect_t519166744 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BlurEffect::OnDisable()
extern "C"  void BlurEffect_OnDisable_m3097648372 (BlurEffect_t519166744 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BlurEffect::Start()
extern "C"  void BlurEffect_Start_m2521992377 (BlurEffect_t519166744 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BlurEffect::FourTapCone(UnityEngine.RenderTexture,UnityEngine.RenderTexture,System.Int32)
extern "C"  void BlurEffect_FourTapCone_m3125829004 (BlurEffect_t519166744 * __this, RenderTexture_t2666733923 * ___source0, RenderTexture_t2666733923 * ___dest1, int32_t ___iteration2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BlurEffect::DownSample4x(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void BlurEffect_DownSample4x_m304689445 (BlurEffect_t519166744 * __this, RenderTexture_t2666733923 * ___source0, RenderTexture_t2666733923 * ___dest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BlurEffect::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void BlurEffect_OnRenderImage_m2156293673 (BlurEffect_t519166744 * __this, RenderTexture_t2666733923 * ___source0, RenderTexture_t2666733923 * ___destination1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BlurEffect::.cctor()
extern "C"  void BlurEffect__cctor_m3526871634 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
