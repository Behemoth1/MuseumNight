#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Mesh[]
struct MeshU5BU5D_t894826206;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Triangles
struct  Triangles_t1920835479  : public MonoBehaviour_t1158329972
{
public:

public:
};

struct Triangles_t1920835479_StaticFields
{
public:
	// UnityEngine.Mesh[] Triangles::meshes
	MeshU5BU5D_t894826206* ___meshes_2;
	// System.Int32 Triangles::currentTris
	int32_t ___currentTris_3;

public:
	inline static int32_t get_offset_of_meshes_2() { return static_cast<int32_t>(offsetof(Triangles_t1920835479_StaticFields, ___meshes_2)); }
	inline MeshU5BU5D_t894826206* get_meshes_2() const { return ___meshes_2; }
	inline MeshU5BU5D_t894826206** get_address_of_meshes_2() { return &___meshes_2; }
	inline void set_meshes_2(MeshU5BU5D_t894826206* value)
	{
		___meshes_2 = value;
		Il2CppCodeGenWriteBarrier(&___meshes_2, value);
	}

	inline static int32_t get_offset_of_currentTris_3() { return static_cast<int32_t>(offsetof(Triangles_t1920835479_StaticFields, ___currentTris_3)); }
	inline int32_t get_currentTris_3() const { return ___currentTris_3; }
	inline int32_t* get_address_of_currentTris_3() { return &___currentTris_3; }
	inline void set_currentTris_3(int32_t value)
	{
		___currentTris_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
