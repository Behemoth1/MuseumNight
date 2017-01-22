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

// CameraMotionBlur
struct CameraMotionBlur_t32230768;
// UnityEngine.RenderTexture
struct RenderTexture_t2666733923;
// UnityEngine.Camera
struct Camera_t189460977;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RenderTexture2666733923.h"

// System.Void CameraMotionBlur::.ctor()
extern "C"  void CameraMotionBlur__ctor_m3034412038 (CameraMotionBlur_t32230768 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraMotionBlur::.cctor()
extern "C"  void CameraMotionBlur__cctor_m439646955 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraMotionBlur::CalculateViewProjection()
extern "C"  void CameraMotionBlur_CalculateViewProjection_m2374528638 (CameraMotionBlur_t32230768 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraMotionBlur::Start()
extern "C"  void CameraMotionBlur_Start_m3178601854 (CameraMotionBlur_t32230768 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraMotionBlur::OnEnable()
extern "C"  void CameraMotionBlur_OnEnable_m3551011998 (CameraMotionBlur_t32230768 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraMotionBlur::OnDisable()
extern "C"  void CameraMotionBlur_OnDisable_m3024965349 (CameraMotionBlur_t32230768 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CameraMotionBlur::CheckResources()
extern "C"  bool CameraMotionBlur_CheckResources_m3833624063 (CameraMotionBlur_t32230768 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraMotionBlur::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void CameraMotionBlur_OnRenderImage_m2721972654 (CameraMotionBlur_t32230768 * __this, RenderTexture_t2666733923 * ___source0, RenderTexture_t2666733923 * ___destination1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraMotionBlur::Remember()
extern "C"  void CameraMotionBlur_Remember_m4251811639 (CameraMotionBlur_t32230768 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera CameraMotionBlur::GetTmpCam()
extern "C"  Camera_t189460977 * CameraMotionBlur_GetTmpCam_m2521198201 (CameraMotionBlur_t32230768 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraMotionBlur::StartFrame()
extern "C"  void CameraMotionBlur_StartFrame_m2921006509 (CameraMotionBlur_t32230768 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CameraMotionBlur::divRoundUp(System.Int32,System.Int32)
extern "C"  int32_t CameraMotionBlur_divRoundUp_m3225047720 (CameraMotionBlur_t32230768 * __this, int32_t ___x0, int32_t ___d1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraMotionBlur::Main()
extern "C"  void CameraMotionBlur_Main_m358857463 (CameraMotionBlur_t32230768 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
