#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ChangeWallColor
struct  ChangeWallColor_t557644039  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 ChangeWallColor::wallsNumber
	int32_t ___wallsNumber_2;
	// UnityEngine.GameObject[] ChangeWallColor::walls
	GameObjectU5BU5D_t3057952154* ___walls_3;

public:
	inline static int32_t get_offset_of_wallsNumber_2() { return static_cast<int32_t>(offsetof(ChangeWallColor_t557644039, ___wallsNumber_2)); }
	inline int32_t get_wallsNumber_2() const { return ___wallsNumber_2; }
	inline int32_t* get_address_of_wallsNumber_2() { return &___wallsNumber_2; }
	inline void set_wallsNumber_2(int32_t value)
	{
		___wallsNumber_2 = value;
	}

	inline static int32_t get_offset_of_walls_3() { return static_cast<int32_t>(offsetof(ChangeWallColor_t557644039, ___walls_3)); }
	inline GameObjectU5BU5D_t3057952154* get_walls_3() const { return ___walls_3; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_walls_3() { return &___walls_3; }
	inline void set_walls_3(GameObjectU5BU5D_t3057952154* value)
	{
		___walls_3 = value;
		Il2CppCodeGenWriteBarrier(&___walls_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
