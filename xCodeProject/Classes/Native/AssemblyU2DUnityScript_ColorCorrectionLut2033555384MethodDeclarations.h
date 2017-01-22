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

// ColorCorrectionLut
struct ColorCorrectionLut_t2033555384;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// System.String
struct String_t;
// UnityEngine.RenderTexture
struct RenderTexture_t2666733923;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Texture2D3542995729.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_RenderTexture2666733923.h"

// System.Void ColorCorrectionLut::.ctor()
extern "C"  void ColorCorrectionLut__ctor_m419549142 (ColorCorrectionLut_t2033555384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ColorCorrectionLut::CheckResources()
extern "C"  bool ColorCorrectionLut_CheckResources_m1795425967 (ColorCorrectionLut_t2033555384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ColorCorrectionLut::OnDisable()
extern "C"  void ColorCorrectionLut_OnDisable_m3754071909 (ColorCorrectionLut_t2033555384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ColorCorrectionLut::OnDestroy()
extern "C"  void ColorCorrectionLut_OnDestroy_m4291775151 (ColorCorrectionLut_t2033555384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ColorCorrectionLut::SetIdentityLut()
extern "C"  void ColorCorrectionLut_SetIdentityLut_m3455030461 (ColorCorrectionLut_t2033555384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ColorCorrectionLut::ValidDimensions(UnityEngine.Texture2D)
extern "C"  bool ColorCorrectionLut_ValidDimensions_m2632451475 (ColorCorrectionLut_t2033555384 * __this, Texture2D_t3542995729 * ___tex2d0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ColorCorrectionLut::Convert(UnityEngine.Texture2D,System.String)
extern "C"  void ColorCorrectionLut_Convert_m1182419375 (ColorCorrectionLut_t2033555384 * __this, Texture2D_t3542995729 * ___temp2DTex0, String_t* ___path1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ColorCorrectionLut::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void ColorCorrectionLut_OnRenderImage_m2192345782 (ColorCorrectionLut_t2033555384 * __this, RenderTexture_t2666733923 * ___source0, RenderTexture_t2666733923 * ___destination1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ColorCorrectionLut::Main()
extern "C"  void ColorCorrectionLut_Main_m1762727967 (ColorCorrectionLut_t2033555384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
