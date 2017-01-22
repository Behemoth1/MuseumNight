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

// ImageEffects
struct ImageEffects_t2410519413;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.RenderTexture
struct RenderTexture_t2666733923;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Material193706927.h"
#include "UnityEngine_UnityEngine_RenderTexture2666733923.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// System.Void ImageEffects::.ctor()
extern "C"  void ImageEffects__ctor_m1608680852 (ImageEffects_t2410519413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ImageEffects::RenderDistortion(UnityEngine.Material,UnityEngine.RenderTexture,UnityEngine.RenderTexture,System.Single,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  void ImageEffects_RenderDistortion_m3104371924 (Il2CppObject * __this /* static, unused */, Material_t193706927 * ___material0, RenderTexture_t2666733923 * ___source1, RenderTexture_t2666733923 * ___destination2, float ___angle3, Vector2_t2243707579  ___center4, Vector2_t2243707579  ___radius5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ImageEffects::Blit(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void ImageEffects_Blit_m887457631 (Il2CppObject * __this /* static, unused */, RenderTexture_t2666733923 * ___source0, RenderTexture_t2666733923 * ___dest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ImageEffects::BlitWithMaterial(UnityEngine.Material,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void ImageEffects_BlitWithMaterial_m4243071390 (Il2CppObject * __this /* static, unused */, Material_t193706927 * ___material0, RenderTexture_t2666733923 * ___source1, RenderTexture_t2666733923 * ___dest2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
