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

// toggleActiveState
struct  toggleActiveState_t4051990683  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject[] toggleActiveState::objects
	GameObjectU5BU5D_t3057952154* ___objects_2;
	// System.Boolean toggleActiveState::activeByDefaut
	bool ___activeByDefaut_3;
	// System.Boolean toggleActiveState::currentState
	bool ___currentState_4;

public:
	inline static int32_t get_offset_of_objects_2() { return static_cast<int32_t>(offsetof(toggleActiveState_t4051990683, ___objects_2)); }
	inline GameObjectU5BU5D_t3057952154* get_objects_2() const { return ___objects_2; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_objects_2() { return &___objects_2; }
	inline void set_objects_2(GameObjectU5BU5D_t3057952154* value)
	{
		___objects_2 = value;
		Il2CppCodeGenWriteBarrier(&___objects_2, value);
	}

	inline static int32_t get_offset_of_activeByDefaut_3() { return static_cast<int32_t>(offsetof(toggleActiveState_t4051990683, ___activeByDefaut_3)); }
	inline bool get_activeByDefaut_3() const { return ___activeByDefaut_3; }
	inline bool* get_address_of_activeByDefaut_3() { return &___activeByDefaut_3; }
	inline void set_activeByDefaut_3(bool value)
	{
		___activeByDefaut_3 = value;
	}

	inline static int32_t get_offset_of_currentState_4() { return static_cast<int32_t>(offsetof(toggleActiveState_t4051990683, ___currentState_4)); }
	inline bool get_currentState_4() const { return ___currentState_4; }
	inline bool* get_address_of_currentState_4() { return &___currentState_4; }
	inline void set_currentState_4(bool value)
	{
		___currentState_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
