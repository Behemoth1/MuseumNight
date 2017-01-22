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

// Tonemapping
struct Tonemapping_t2870642726;
// UnityEngine.RenderTexture
struct RenderTexture_t2666733923;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RenderTexture2666733923.h"

// System.Void Tonemapping::.ctor()
extern "C"  void Tonemapping__ctor_m1584563762 (Tonemapping_t2870642726 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Tonemapping::CheckResources()
extern "C"  bool Tonemapping_CheckResources_m2933031837 (Tonemapping_t2870642726 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Tonemapping::UpdateCurve()
extern "C"  float Tonemapping_UpdateCurve_m3518421380 (Tonemapping_t2870642726 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Tonemapping::OnDisable()
extern "C"  void Tonemapping_OnDisable_m2203391027 (Tonemapping_t2870642726 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Tonemapping::CreateInternalRenderTexture()
extern "C"  bool Tonemapping_CreateInternalRenderTexture_m4144944534 (Tonemapping_t2870642726 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Tonemapping::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void Tonemapping_OnRenderImage_m1662393414 (Tonemapping_t2870642726 * __this, RenderTexture_t2666733923 * ___source0, RenderTexture_t2666733923 * ___destination1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Tonemapping::Main()
extern "C"  void Tonemapping_Main_m1985896081 (Tonemapping_t2870642726 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
