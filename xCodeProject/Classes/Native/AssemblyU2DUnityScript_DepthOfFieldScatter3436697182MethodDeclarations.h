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

// DepthOfFieldScatter
struct DepthOfFieldScatter_t3436697182;
// UnityEngine.RenderTexture
struct RenderTexture_t2666733923;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RenderTexture2666733923.h"

// System.Void DepthOfFieldScatter::.ctor()
extern "C"  void DepthOfFieldScatter__ctor_m1344753694 (DepthOfFieldScatter_t3436697182 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DepthOfFieldScatter::CheckResources()
extern "C"  bool DepthOfFieldScatter_CheckResources_m923421245 (DepthOfFieldScatter_t3436697182 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfFieldScatter::OnEnable()
extern "C"  void DepthOfFieldScatter_OnEnable_m1073536554 (DepthOfFieldScatter_t3436697182 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfFieldScatter::OnDisable()
extern "C"  void DepthOfFieldScatter_OnDisable_m3197364023 (DepthOfFieldScatter_t3436697182 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfFieldScatter::ReleaseComputeResources()
extern "C"  void DepthOfFieldScatter_ReleaseComputeResources_m1417504287 (DepthOfFieldScatter_t3436697182 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfFieldScatter::CreateComputeResources()
extern "C"  void DepthOfFieldScatter_CreateComputeResources_m2843566674 (DepthOfFieldScatter_t3436697182 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DepthOfFieldScatter::FocalDistance01(System.Single)
extern "C"  float DepthOfFieldScatter_FocalDistance01_m950013566 (DepthOfFieldScatter_t3436697182 * __this, float ___worldDist0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfFieldScatter::WriteCoc(UnityEngine.RenderTexture,System.Boolean)
extern "C"  void DepthOfFieldScatter_WriteCoc_m3191325693 (DepthOfFieldScatter_t3436697182 * __this, RenderTexture_t2666733923 * ___fromTo0, bool ___fgDilate1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfFieldScatter::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void DepthOfFieldScatter_OnRenderImage_m2432182802 (DepthOfFieldScatter_t3436697182 * __this, RenderTexture_t2666733923 * ___source0, RenderTexture_t2666733923 * ___destination1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfFieldScatter::Main()
extern "C"  void DepthOfFieldScatter_Main_m2213553217 (DepthOfFieldScatter_t3436697182 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
