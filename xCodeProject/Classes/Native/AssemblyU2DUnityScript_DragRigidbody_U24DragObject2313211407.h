﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// DragRigidbody
struct DragRigidbody_t836548095;

#include "Boo_Lang_Boo_Lang_GenericGenerator_1_gen3108987245.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DragRigidbody/$DragObject$64
struct  U24DragObjectU2464_t2313211407  : public GenericGenerator_1_t3108987245
{
public:
	// System.Single DragRigidbody/$DragObject$64::$distance$71
	float ___U24distanceU2471_0;
	// DragRigidbody DragRigidbody/$DragObject$64::$self_$72
	DragRigidbody_t836548095 * ___U24self_U2472_1;

public:
	inline static int32_t get_offset_of_U24distanceU2471_0() { return static_cast<int32_t>(offsetof(U24DragObjectU2464_t2313211407, ___U24distanceU2471_0)); }
	inline float get_U24distanceU2471_0() const { return ___U24distanceU2471_0; }
	inline float* get_address_of_U24distanceU2471_0() { return &___U24distanceU2471_0; }
	inline void set_U24distanceU2471_0(float value)
	{
		___U24distanceU2471_0 = value;
	}

	inline static int32_t get_offset_of_U24self_U2472_1() { return static_cast<int32_t>(offsetof(U24DragObjectU2464_t2313211407, ___U24self_U2472_1)); }
	inline DragRigidbody_t836548095 * get_U24self_U2472_1() const { return ___U24self_U2472_1; }
	inline DragRigidbody_t836548095 ** get_address_of_U24self_U2472_1() { return &___U24self_U2472_1; }
	inline void set_U24self_U2472_1(DragRigidbody_t836548095 * value)
	{
		___U24self_U2472_1 = value;
		Il2CppCodeGenWriteBarrier(&___U24self_U2472_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
