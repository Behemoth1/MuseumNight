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

// AntialiasingAsPostEffect
struct AntialiasingAsPostEffect_t2974095527;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.RenderTexture
struct RenderTexture_t2666733923;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RenderTexture2666733923.h"

// System.Void AntialiasingAsPostEffect::.ctor()
extern "C"  void AntialiasingAsPostEffect__ctor_m1458174695 (AntialiasingAsPostEffect_t2974095527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material AntialiasingAsPostEffect::CurrentAAMaterial()
extern "C"  Material_t193706927 * AntialiasingAsPostEffect_CurrentAAMaterial_m3635407440 (AntialiasingAsPostEffect_t2974095527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AntialiasingAsPostEffect::CheckResources()
extern "C"  bool AntialiasingAsPostEffect_CheckResources_m3909942042 (AntialiasingAsPostEffect_t2974095527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AntialiasingAsPostEffect::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void AntialiasingAsPostEffect_OnRenderImage_m628518971 (AntialiasingAsPostEffect_t2974095527 * __this, RenderTexture_t2666733923 * ___source0, RenderTexture_t2666733923 * ___destination1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AntialiasingAsPostEffect::Main()
extern "C"  void AntialiasingAsPostEffect_Main_m3076076826 (AntialiasingAsPostEffect_t2974095527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
