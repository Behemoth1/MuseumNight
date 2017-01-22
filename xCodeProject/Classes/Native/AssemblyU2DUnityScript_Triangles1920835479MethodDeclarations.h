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

// Triangles
struct Triangles_t1920835479;
// UnityEngine.Mesh[]
struct MeshU5BU5D_t894826206;
// UnityEngine.Mesh
struct Mesh_t1356156583;

#include "codegen/il2cpp-codegen.h"

// System.Void Triangles::.ctor()
extern "C"  void Triangles__ctor_m713961855 (Triangles_t1920835479 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Triangles::.cctor()
extern "C"  void Triangles__cctor_m3519176830 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Triangles::HasMeshes()
extern "C"  bool Triangles_HasMeshes_m2470217086 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Triangles::Cleanup()
extern "C"  void Triangles_Cleanup_m985451731 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh[] Triangles::GetMeshes(System.Int32,System.Int32)
extern "C"  MeshU5BU5D_t894826206* Triangles_GetMeshes_m2256298881 (Il2CppObject * __this /* static, unused */, int32_t ___totalWidth0, int32_t ___totalHeight1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh Triangles::GetMesh(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  Mesh_t1356156583 * Triangles_GetMesh_m3073282805 (Il2CppObject * __this /* static, unused */, int32_t ___triCount0, int32_t ___triOffset1, int32_t ___totalWidth2, int32_t ___totalHeight3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Triangles::Main()
extern "C"  void Triangles_Main_m3584719014 (Triangles_t1920835479 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
