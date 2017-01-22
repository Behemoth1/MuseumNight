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

// RecordPlayer
struct  RecordPlayer_t125887864  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean RecordPlayer::recordPlayerActive
	bool ___recordPlayerActive_2;
	// UnityEngine.GameObject RecordPlayer::disc
	GameObject_t1756533147 * ___disc_3;
	// UnityEngine.GameObject RecordPlayer::arm
	GameObject_t1756533147 * ___arm_4;
	// System.Int32 RecordPlayer::mode
	int32_t ___mode_5;
	// System.Single RecordPlayer::armAngle
	float ___armAngle_6;
	// System.Single RecordPlayer::discAngle
	float ___discAngle_7;
	// System.Single RecordPlayer::discSpeed
	float ___discSpeed_8;

public:
	inline static int32_t get_offset_of_recordPlayerActive_2() { return static_cast<int32_t>(offsetof(RecordPlayer_t125887864, ___recordPlayerActive_2)); }
	inline bool get_recordPlayerActive_2() const { return ___recordPlayerActive_2; }
	inline bool* get_address_of_recordPlayerActive_2() { return &___recordPlayerActive_2; }
	inline void set_recordPlayerActive_2(bool value)
	{
		___recordPlayerActive_2 = value;
	}

	inline static int32_t get_offset_of_disc_3() { return static_cast<int32_t>(offsetof(RecordPlayer_t125887864, ___disc_3)); }
	inline GameObject_t1756533147 * get_disc_3() const { return ___disc_3; }
	inline GameObject_t1756533147 ** get_address_of_disc_3() { return &___disc_3; }
	inline void set_disc_3(GameObject_t1756533147 * value)
	{
		___disc_3 = value;
		Il2CppCodeGenWriteBarrier(&___disc_3, value);
	}

	inline static int32_t get_offset_of_arm_4() { return static_cast<int32_t>(offsetof(RecordPlayer_t125887864, ___arm_4)); }
	inline GameObject_t1756533147 * get_arm_4() const { return ___arm_4; }
	inline GameObject_t1756533147 ** get_address_of_arm_4() { return &___arm_4; }
	inline void set_arm_4(GameObject_t1756533147 * value)
	{
		___arm_4 = value;
		Il2CppCodeGenWriteBarrier(&___arm_4, value);
	}

	inline static int32_t get_offset_of_mode_5() { return static_cast<int32_t>(offsetof(RecordPlayer_t125887864, ___mode_5)); }
	inline int32_t get_mode_5() const { return ___mode_5; }
	inline int32_t* get_address_of_mode_5() { return &___mode_5; }
	inline void set_mode_5(int32_t value)
	{
		___mode_5 = value;
	}

	inline static int32_t get_offset_of_armAngle_6() { return static_cast<int32_t>(offsetof(RecordPlayer_t125887864, ___armAngle_6)); }
	inline float get_armAngle_6() const { return ___armAngle_6; }
	inline float* get_address_of_armAngle_6() { return &___armAngle_6; }
	inline void set_armAngle_6(float value)
	{
		___armAngle_6 = value;
	}

	inline static int32_t get_offset_of_discAngle_7() { return static_cast<int32_t>(offsetof(RecordPlayer_t125887864, ___discAngle_7)); }
	inline float get_discAngle_7() const { return ___discAngle_7; }
	inline float* get_address_of_discAngle_7() { return &___discAngle_7; }
	inline void set_discAngle_7(float value)
	{
		___discAngle_7 = value;
	}

	inline static int32_t get_offset_of_discSpeed_8() { return static_cast<int32_t>(offsetof(RecordPlayer_t125887864, ___discSpeed_8)); }
	inline float get_discSpeed_8() const { return ___discSpeed_8; }
	inline float* get_address_of_discSpeed_8() { return &___discSpeed_8; }
	inline void set_discSpeed_8(float value)
	{
		___discSpeed_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
