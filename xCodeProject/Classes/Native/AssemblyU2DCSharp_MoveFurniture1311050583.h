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
// UnityEngine.Transform[]
struct TransformU5BU5D_t3764228911;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoveFurniture
struct  MoveFurniture_t1311050583  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject[] MoveFurniture::objects
	GameObjectU5BU5D_t3057952154* ___objects_2;
	// UnityEngine.Transform[] MoveFurniture::transform
	TransformU5BU5D_t3764228911* ___transform_3;
	// System.Boolean MoveFurniture::isFirstPositionActive
	bool ___isFirstPositionActive_4;

public:
	inline static int32_t get_offset_of_objects_2() { return static_cast<int32_t>(offsetof(MoveFurniture_t1311050583, ___objects_2)); }
	inline GameObjectU5BU5D_t3057952154* get_objects_2() const { return ___objects_2; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_objects_2() { return &___objects_2; }
	inline void set_objects_2(GameObjectU5BU5D_t3057952154* value)
	{
		___objects_2 = value;
		Il2CppCodeGenWriteBarrier(&___objects_2, value);
	}

	inline static int32_t get_offset_of_transform_3() { return static_cast<int32_t>(offsetof(MoveFurniture_t1311050583, ___transform_3)); }
	inline TransformU5BU5D_t3764228911* get_transform_3() const { return ___transform_3; }
	inline TransformU5BU5D_t3764228911** get_address_of_transform_3() { return &___transform_3; }
	inline void set_transform_3(TransformU5BU5D_t3764228911* value)
	{
		___transform_3 = value;
		Il2CppCodeGenWriteBarrier(&___transform_3, value);
	}

	inline static int32_t get_offset_of_isFirstPositionActive_4() { return static_cast<int32_t>(offsetof(MoveFurniture_t1311050583, ___isFirstPositionActive_4)); }
	inline bool get_isFirstPositionActive_4() const { return ___isFirstPositionActive_4; }
	inline bool* get_address_of_isFirstPositionActive_4() { return &___isFirstPositionActive_4; }
	inline void set_isFirstPositionActive_4(bool value)
	{
		___isFirstPositionActive_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
