#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DeleteGameObject
struct  DeleteGameObject_t464512882  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject DeleteGameObject::objectToDelete
	GameObject_t1756533147 * ___objectToDelete_2;
	// UnityEngine.GameObject DeleteGameObject::player
	GameObject_t1756533147 * ___player_3;
	// UnityEngine.GameObject DeleteGameObject::startExplorePoint
	GameObject_t1756533147 * ___startExplorePoint_4;
	// System.Int32 DeleteGameObject::height
	int32_t ___height_5;

public:
	inline static int32_t get_offset_of_objectToDelete_2() { return static_cast<int32_t>(offsetof(DeleteGameObject_t464512882, ___objectToDelete_2)); }
	inline GameObject_t1756533147 * get_objectToDelete_2() const { return ___objectToDelete_2; }
	inline GameObject_t1756533147 ** get_address_of_objectToDelete_2() { return &___objectToDelete_2; }
	inline void set_objectToDelete_2(GameObject_t1756533147 * value)
	{
		___objectToDelete_2 = value;
		Il2CppCodeGenWriteBarrier(&___objectToDelete_2, value);
	}

	inline static int32_t get_offset_of_player_3() { return static_cast<int32_t>(offsetof(DeleteGameObject_t464512882, ___player_3)); }
	inline GameObject_t1756533147 * get_player_3() const { return ___player_3; }
	inline GameObject_t1756533147 ** get_address_of_player_3() { return &___player_3; }
	inline void set_player_3(GameObject_t1756533147 * value)
	{
		___player_3 = value;
		Il2CppCodeGenWriteBarrier(&___player_3, value);
	}

	inline static int32_t get_offset_of_startExplorePoint_4() { return static_cast<int32_t>(offsetof(DeleteGameObject_t464512882, ___startExplorePoint_4)); }
	inline GameObject_t1756533147 * get_startExplorePoint_4() const { return ___startExplorePoint_4; }
	inline GameObject_t1756533147 ** get_address_of_startExplorePoint_4() { return &___startExplorePoint_4; }
	inline void set_startExplorePoint_4(GameObject_t1756533147 * value)
	{
		___startExplorePoint_4 = value;
		Il2CppCodeGenWriteBarrier(&___startExplorePoint_4, value);
	}

	inline static int32_t get_offset_of_height_5() { return static_cast<int32_t>(offsetof(DeleteGameObject_t464512882, ___height_5)); }
	inline int32_t get_height_5() const { return ___height_5; }
	inline int32_t* get_address_of_height_5() { return &___height_5; }
	inline void set_height_5(int32_t value)
	{
		___height_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
