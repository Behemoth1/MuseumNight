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

// DepthOfField34
struct DepthOfField34_t2363513819;
// UnityEngine.RenderTexture
struct RenderTexture_t2666733923;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RenderTexture2666733923.h"
#include "AssemblyU2DUnityScript_DofBlurriness3715737866.h"

// System.Void DepthOfField34::.ctor()
extern "C"  void DepthOfField34__ctor_m3290535095 (DepthOfField34_t2363513819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfField34::.cctor()
extern "C"  void DepthOfField34__cctor_m3812556278 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfField34::CreateMaterials()
extern "C"  void DepthOfField34_CreateMaterials_m2875873275 (DepthOfField34_t2363513819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DepthOfField34::CheckResources()
extern "C"  bool DepthOfField34_CheckResources_m248574014 (DepthOfField34_t2363513819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfField34::OnDisable()
extern "C"  void DepthOfField34_OnDisable_m2404774020 (DepthOfField34_t2363513819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfField34::OnEnable()
extern "C"  void DepthOfField34_OnEnable_m2324023867 (DepthOfField34_t2363513819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DepthOfField34::FocalDistance01(System.Single)
extern "C"  float DepthOfField34_FocalDistance01_m3722941929 (DepthOfField34_t2363513819 * __this, float ___worldDist0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 DepthOfField34::GetDividerBasedOnQuality()
extern "C"  int32_t DepthOfField34_GetDividerBasedOnQuality_m1458823603 (DepthOfField34_t2363513819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 DepthOfField34::GetLowResolutionDividerBasedOnQuality(System.Int32)
extern "C"  int32_t DepthOfField34_GetLowResolutionDividerBasedOnQuality_m3266029932 (DepthOfField34_t2363513819 * __this, int32_t ___baseDivider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfField34::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void DepthOfField34_OnRenderImage_m2898716499 (DepthOfField34_t2363513819 * __this, RenderTexture_t2666733923 * ___source0, RenderTexture_t2666733923 * ___destination1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfField34::Blur(UnityEngine.RenderTexture,UnityEngine.RenderTexture,DofBlurriness,System.Int32,System.Single)
extern "C"  void DepthOfField34_Blur_m3627907902 (DepthOfField34_t2363513819 * __this, RenderTexture_t2666733923 * ___from0, RenderTexture_t2666733923 * ___to1, int32_t ___iterations2, int32_t ___blurPass3, float ___spread4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfField34::BlurFg(UnityEngine.RenderTexture,UnityEngine.RenderTexture,DofBlurriness,System.Int32,System.Single)
extern "C"  void DepthOfField34_BlurFg_m1554525511 (DepthOfField34_t2363513819 * __this, RenderTexture_t2666733923 * ___from0, RenderTexture_t2666733923 * ___to1, int32_t ___iterations2, int32_t ___blurPass3, float ___spread4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfField34::BlurHex(UnityEngine.RenderTexture,UnityEngine.RenderTexture,System.Int32,System.Single,UnityEngine.RenderTexture)
extern "C"  void DepthOfField34_BlurHex_m3035603917 (DepthOfField34_t2363513819 * __this, RenderTexture_t2666733923 * ___from0, RenderTexture_t2666733923 * ___to1, int32_t ___blurPass2, float ___spread3, RenderTexture_t2666733923 * ___tmp4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfField34::Downsample(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void DepthOfField34_Downsample_m176858079 (DepthOfField34_t2363513819 * __this, RenderTexture_t2666733923 * ___from0, RenderTexture_t2666733923 * ___to1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfField34::AddBokeh(UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void DepthOfField34_AddBokeh_m1489835791 (DepthOfField34_t2363513819 * __this, RenderTexture_t2666733923 * ___bokehInfo0, RenderTexture_t2666733923 * ___tempTex1, RenderTexture_t2666733923 * ___finalTarget2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfField34::ReleaseTextures()
extern "C"  void DepthOfField34_ReleaseTextures_m3786224446 (DepthOfField34_t2363513819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfField34::AllocateTextures(System.Boolean,UnityEngine.RenderTexture,System.Int32,System.Int32)
extern "C"  void DepthOfField34_AllocateTextures_m3823037891 (DepthOfField34_t2363513819 * __this, bool ___blurForeground0, RenderTexture_t2666733923 * ___source1, int32_t ___divider2, int32_t ___lowTexDivider3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfField34::Main()
extern "C"  void DepthOfField34_Main_m2566506702 (DepthOfField34_t2363513819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
