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

// PostEffectsBase
struct PostEffectsBase_t3757392499;
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

// System.Void PostEffectsBase::.ctor()
extern "C"  void PostEffectsBase__ctor_m2120635923 (PostEffectsBase_t3757392499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material PostEffectsBase::CheckShaderAndCreateMaterial(UnityEngine.Shader,UnityEngine.Material)
extern "C"  Material_t193706927 * PostEffectsBase_CheckShaderAndCreateMaterial_m2456645921 (PostEffectsBase_t3757392499 * __this, Shader_t2430389951 * ___s0, Material_t193706927 * ___m2Create1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material PostEffectsBase::CreateMaterial(UnityEngine.Shader,UnityEngine.Material)
extern "C"  Material_t193706927 * PostEffectsBase_CreateMaterial_m348707553 (PostEffectsBase_t3757392499 * __this, Shader_t2430389951 * ___s0, Material_t193706927 * ___m2Create1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PostEffectsBase::OnEnable()
extern "C"  void PostEffectsBase_OnEnable_m2349458711 (PostEffectsBase_t3757392499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PostEffectsBase::CheckSupport()
extern "C"  bool PostEffectsBase_CheckSupport_m1267633864 (PostEffectsBase_t3757392499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PostEffectsBase::CheckResources()
extern "C"  bool PostEffectsBase_CheckResources_m1681322266 (PostEffectsBase_t3757392499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PostEffectsBase::Start()
extern "C"  void PostEffectsBase_Start_m1092525143 (PostEffectsBase_t3757392499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PostEffectsBase::CheckSupport(System.Boolean)
extern "C"  bool PostEffectsBase_CheckSupport_m212261921 (PostEffectsBase_t3757392499 * __this, bool ___needDepth0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PostEffectsBase::CheckSupport(System.Boolean,System.Boolean)
extern "C"  bool PostEffectsBase_CheckSupport_m2505793668 (PostEffectsBase_t3757392499 * __this, bool ___needDepth0, bool ___needHdr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PostEffectsBase::Dx11Support()
extern "C"  bool PostEffectsBase_Dx11Support_m2453213454 (PostEffectsBase_t3757392499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PostEffectsBase::ReportAutoDisable()
extern "C"  void PostEffectsBase_ReportAutoDisable_m2549621268 (PostEffectsBase_t3757392499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PostEffectsBase::CheckShader(UnityEngine.Shader)
extern "C"  bool PostEffectsBase_CheckShader_m3665332584 (PostEffectsBase_t3757392499 * __this, Shader_t2430389951 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PostEffectsBase::NotSupported()
extern "C"  void PostEffectsBase_NotSupported_m4292070202 (PostEffectsBase_t3757392499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PostEffectsBase::DrawBorder(UnityEngine.RenderTexture,UnityEngine.Material)
extern "C"  void PostEffectsBase_DrawBorder_m2494189269 (PostEffectsBase_t3757392499 * __this, RenderTexture_t2666733923 * ___dest0, Material_t193706927 * ___material1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PostEffectsBase::Main()
extern "C"  void PostEffectsBase_Main_m1185070402 (PostEffectsBase_t3757392499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
