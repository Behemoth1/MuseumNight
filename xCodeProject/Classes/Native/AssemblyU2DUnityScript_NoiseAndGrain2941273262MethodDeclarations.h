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

// NoiseAndGrain
struct NoiseAndGrain_t2941273262;
// UnityEngine.RenderTexture
struct RenderTexture_t2666733923;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RenderTexture2666733923.h"
#include "UnityEngine_UnityEngine_Material193706927.h"
#include "UnityEngine_UnityEngine_Texture2D3542995729.h"

// System.Void NoiseAndGrain::.ctor()
extern "C"  void NoiseAndGrain__ctor_m1952218422 (NoiseAndGrain_t2941273262 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NoiseAndGrain::.cctor()
extern "C"  void NoiseAndGrain__cctor_m2456016935 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NoiseAndGrain::CheckResources()
extern "C"  bool NoiseAndGrain_CheckResources_m533429171 (NoiseAndGrain_t2941273262 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NoiseAndGrain::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void NoiseAndGrain_OnRenderImage_m2358246886 (NoiseAndGrain_t2941273262 * __this, RenderTexture_t2666733923 * ___source0, RenderTexture_t2666733923 * ___destination1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NoiseAndGrain::DrawNoiseQuadGrid(UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.Material,UnityEngine.Texture2D,System.Int32)
extern "C"  void NoiseAndGrain_DrawNoiseQuadGrid_m710922250 (Il2CppObject * __this /* static, unused */, RenderTexture_t2666733923 * ___source0, RenderTexture_t2666733923 * ___dest1, Material_t193706927 * ___fxMaterial2, Texture2D_t3542995729 * ___noise3, int32_t ___passNr4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NoiseAndGrain::Main()
extern "C"  void NoiseAndGrain_Main_m950157371 (NoiseAndGrain_t2941273262 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
