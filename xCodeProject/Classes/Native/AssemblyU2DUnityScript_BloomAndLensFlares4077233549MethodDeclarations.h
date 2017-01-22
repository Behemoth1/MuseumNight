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

// BloomAndLensFlares
struct BloomAndLensFlares_t4077233549;
// UnityEngine.RenderTexture
struct RenderTexture_t2666733923;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RenderTexture2666733923.h"

// System.Void BloomAndLensFlares::.ctor()
extern "C"  void BloomAndLensFlares__ctor_m348446577 (BloomAndLensFlares_t4077233549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BloomAndLensFlares::CheckResources()
extern "C"  bool BloomAndLensFlares_CheckResources_m2381398828 (BloomAndLensFlares_t4077233549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BloomAndLensFlares::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void BloomAndLensFlares_OnRenderImage_m1943593881 (BloomAndLensFlares_t4077233549 * __this, RenderTexture_t2666733923 * ___source0, RenderTexture_t2666733923 * ___destination1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BloomAndLensFlares::AddTo(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void BloomAndLensFlares_AddTo_m1823707128 (BloomAndLensFlares_t4077233549 * __this, float ___intensity_0, RenderTexture_t2666733923 * ___from1, RenderTexture_t2666733923 * ___to2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BloomAndLensFlares::BlendFlares(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void BloomAndLensFlares_BlendFlares_m2508605031 (BloomAndLensFlares_t4077233549 * __this, RenderTexture_t2666733923 * ___from0, RenderTexture_t2666733923 * ___to1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BloomAndLensFlares::BrightFilter(System.Single,System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void BloomAndLensFlares_BrightFilter_m784316663 (BloomAndLensFlares_t4077233549 * __this, float ___thresh0, float ___useAlphaAsMask1, RenderTexture_t2666733923 * ___from2, RenderTexture_t2666733923 * ___to3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BloomAndLensFlares::Vignette(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void BloomAndLensFlares_Vignette_m2887092596 (BloomAndLensFlares_t4077233549 * __this, float ___amount0, RenderTexture_t2666733923 * ___from1, RenderTexture_t2666733923 * ___to2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BloomAndLensFlares::Main()
extern "C"  void BloomAndLensFlares_Main_m2718633928 (BloomAndLensFlares_t4077233549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
