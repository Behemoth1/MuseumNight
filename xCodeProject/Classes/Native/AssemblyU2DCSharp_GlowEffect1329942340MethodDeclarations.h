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

// GlowEffect
struct GlowEffect_t1329942340;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.RenderTexture
struct RenderTexture_t2666733923;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RenderTexture2666733923.h"

// System.Void GlowEffect::.ctor()
extern "C"  void GlowEffect__ctor_m98364647 (GlowEffect_t1329942340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material GlowEffect::get_compositeMaterial()
extern "C"  Material_t193706927 * GlowEffect_get_compositeMaterial_m3327428543 (GlowEffect_t1329942340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material GlowEffect::get_blurMaterial()
extern "C"  Material_t193706927 * GlowEffect_get_blurMaterial_m1690225611 (GlowEffect_t1329942340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material GlowEffect::get_downsampleMaterial()
extern "C"  Material_t193706927 * GlowEffect_get_downsampleMaterial_m908875232 (GlowEffect_t1329942340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GlowEffect::OnDisable()
extern "C"  void GlowEffect_OnDisable_m1531923896 (GlowEffect_t1329942340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GlowEffect::Start()
extern "C"  void GlowEffect_Start_m4279043267 (GlowEffect_t1329942340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GlowEffect::FourTapCone(UnityEngine.RenderTexture,UnityEngine.RenderTexture,System.Int32)
extern "C"  void GlowEffect_FourTapCone_m124010688 (GlowEffect_t1329942340 * __this, RenderTexture_t2666733923 * ___source0, RenderTexture_t2666733923 * ___dest1, int32_t ___iteration2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GlowEffect::DownSample4x(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void GlowEffect_DownSample4x_m3699745283 (GlowEffect_t1329942340 * __this, RenderTexture_t2666733923 * ___source0, RenderTexture_t2666733923 * ___dest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GlowEffect::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void GlowEffect_OnRenderImage_m3486518099 (GlowEffect_t1329942340 * __this, RenderTexture_t2666733923 * ___source0, RenderTexture_t2666733923 * ___destination1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GlowEffect::BlitGlow(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void GlowEffect_BlitGlow_m87627659 (GlowEffect_t1329942340 * __this, RenderTexture_t2666733923 * ___source0, RenderTexture_t2666733923 * ___dest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
