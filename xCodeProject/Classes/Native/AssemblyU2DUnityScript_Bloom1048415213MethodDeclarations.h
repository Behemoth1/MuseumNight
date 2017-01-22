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

// Bloom
struct Bloom_t1048415213;
// UnityEngine.RenderTexture
struct RenderTexture_t2666733923;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RenderTexture2666733923.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// System.Void Bloom::.ctor()
extern "C"  void Bloom__ctor_m185038153 (Bloom_t1048415213 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Bloom::CheckResources()
extern "C"  bool Bloom_CheckResources_m3923328028 (Bloom_t1048415213 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bloom::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void Bloom_OnRenderImage_m535087985 (Bloom_t1048415213 * __this, RenderTexture_t2666733923 * ___source0, RenderTexture_t2666733923 * ___destination1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bloom::AddTo(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void Bloom_AddTo_m2559258160 (Bloom_t1048415213 * __this, float ___intensity_0, RenderTexture_t2666733923 * ___from1, RenderTexture_t2666733923 * ___to2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bloom::BlendFlares(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void Bloom_BlendFlares_m1386245883 (Bloom_t1048415213 * __this, RenderTexture_t2666733923 * ___from0, RenderTexture_t2666733923 * ___to1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bloom::BrightFilter(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void Bloom_BrightFilter_m1204016440 (Bloom_t1048415213 * __this, float ___thresh0, RenderTexture_t2666733923 * ___from1, RenderTexture_t2666733923 * ___to2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bloom::BrightFilter(UnityEngine.Color,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void Bloom_BrightFilter_m3228747949 (Bloom_t1048415213 * __this, Color_t2020392075  ___threshColor0, RenderTexture_t2666733923 * ___from1, RenderTexture_t2666733923 * ___to2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bloom::Vignette(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void Bloom_Vignette_m1398734292 (Bloom_t1048415213 * __this, float ___amount0, RenderTexture_t2666733923 * ___from1, RenderTexture_t2666733923 * ___to2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bloom::Main()
extern "C"  void Bloom_Main_m2428248496 (Bloom_t1048415213 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
