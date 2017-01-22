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

// Quads
struct Quads_t1559374868;
// UnityEngine.Mesh[]
struct MeshU5BU5D_t894826206;
// UnityEngine.Mesh
struct Mesh_t1356156583;

#include "codegen/il2cpp-codegen.h"

// System.Void Quads::.ctor()
extern "C"  void Quads__ctor_m960697952 (Quads_t1559374868 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Quads::.cctor()
extern "C"  void Quads__cctor_m1594485487 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Quads::HasMeshes()
extern "C"  bool Quads_HasMeshes_m918813107 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Quads::Cleanup()
extern "C"  void Quads_Cleanup_m2156764908 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh[] Quads::GetMeshes(System.Int32,System.Int32)
extern "C"  MeshU5BU5D_t894826206* Quads_GetMeshes_m291030434 (Il2CppObject * __this /* static, unused */, int32_t ___totalWidth0, int32_t ___totalHeight1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh Quads::GetMesh(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  Mesh_t1356156583 * Quads_GetMesh_m4186225808 (Il2CppObject * __this /* static, unused */, int32_t ___triCount0, int32_t ___triOffset1, int32_t ___totalWidth2, int32_t ___totalHeight3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Quads::Main()
extern "C"  void Quads_Main_m1690985779 (Quads_t1559374868 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
