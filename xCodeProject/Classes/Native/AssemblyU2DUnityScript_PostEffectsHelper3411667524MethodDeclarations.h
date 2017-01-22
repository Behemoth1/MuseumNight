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

// PostEffectsHelper
struct PostEffectsHelper_t3411667524;
// UnityEngine.RenderTexture
struct RenderTexture_t2666733923;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Camera
struct Camera_t189460977;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RenderTexture2666733923.h"
#include "UnityEngine_UnityEngine_Material193706927.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"

// System.Void PostEffectsHelper::.ctor()
extern "C"  void PostEffectsHelper__ctor_m2954419240 (PostEffectsHelper_t3411667524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PostEffectsHelper::Start()
extern "C"  void PostEffectsHelper_Start_m1289016408 (PostEffectsHelper_t3411667524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PostEffectsHelper::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void PostEffectsHelper_OnRenderImage_m803250192 (PostEffectsHelper_t3411667524 * __this, RenderTexture_t2666733923 * ___source0, RenderTexture_t2666733923 * ___destination1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PostEffectsHelper::DrawLowLevelPlaneAlignedWithCamera(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.Material,UnityEngine.Camera)
extern "C"  void PostEffectsHelper_DrawLowLevelPlaneAlignedWithCamera_m3722569380 (Il2CppObject * __this /* static, unused */, float ___dist0, RenderTexture_t2666733923 * ___source1, RenderTexture_t2666733923 * ___dest2, Material_t193706927 * ___material3, Camera_t189460977 * ___cameraForProjectionMatrix4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PostEffectsHelper::DrawBorder(UnityEngine.RenderTexture,UnityEngine.Material)
extern "C"  void PostEffectsHelper_DrawBorder_m832274390 (Il2CppObject * __this /* static, unused */, RenderTexture_t2666733923 * ___dest0, Material_t193706927 * ___material1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PostEffectsHelper::DrawLowLevelQuad(System.Single,System.Single,System.Single,System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.Material)
extern "C"  void PostEffectsHelper_DrawLowLevelQuad_m528028523 (Il2CppObject * __this /* static, unused */, float ___x10, float ___x21, float ___y12, float ___y23, RenderTexture_t2666733923 * ___source4, RenderTexture_t2666733923 * ___dest5, Material_t193706927 * ___material6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PostEffectsHelper::Main()
extern "C"  void PostEffectsHelper_Main_m1609915011 (PostEffectsHelper_t3411667524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
