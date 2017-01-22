#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t189460977;
// DragRigidbody
struct DragRigidbody_t836548095;

#include "Boo_Lang_Boo_Lang_GenericGeneratorEnumerator_1_gen3445420457.h"
#include "UnityEngine_UnityEngine_Ray2469606224.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DragRigidbody/$DragObject$64/$
struct  U24_t4244531148  : public GenericGeneratorEnumerator_1_t3445420457
{
public:
	// System.Single DragRigidbody/$DragObject$64/$::$oldDrag$65
	float ___U24oldDragU2465_2;
	// System.Single DragRigidbody/$DragObject$64/$::$oldAngularDrag$66
	float ___U24oldAngularDragU2466_3;
	// UnityEngine.Camera DragRigidbody/$DragObject$64/$::$mainCamera$67
	Camera_t189460977 * ___U24mainCameraU2467_4;
	// UnityEngine.Ray DragRigidbody/$DragObject$64/$::$ray$68
	Ray_t2469606224  ___U24rayU2468_5;
	// System.Single DragRigidbody/$DragObject$64/$::$distance$69
	float ___U24distanceU2469_6;
	// DragRigidbody DragRigidbody/$DragObject$64/$::$self_$70
	DragRigidbody_t836548095 * ___U24self_U2470_7;

public:
	inline static int32_t get_offset_of_U24oldDragU2465_2() { return static_cast<int32_t>(offsetof(U24_t4244531148, ___U24oldDragU2465_2)); }
	inline float get_U24oldDragU2465_2() const { return ___U24oldDragU2465_2; }
	inline float* get_address_of_U24oldDragU2465_2() { return &___U24oldDragU2465_2; }
	inline void set_U24oldDragU2465_2(float value)
	{
		___U24oldDragU2465_2 = value;
	}

	inline static int32_t get_offset_of_U24oldAngularDragU2466_3() { return static_cast<int32_t>(offsetof(U24_t4244531148, ___U24oldAngularDragU2466_3)); }
	inline float get_U24oldAngularDragU2466_3() const { return ___U24oldAngularDragU2466_3; }
	inline float* get_address_of_U24oldAngularDragU2466_3() { return &___U24oldAngularDragU2466_3; }
	inline void set_U24oldAngularDragU2466_3(float value)
	{
		___U24oldAngularDragU2466_3 = value;
	}

	inline static int32_t get_offset_of_U24mainCameraU2467_4() { return static_cast<int32_t>(offsetof(U24_t4244531148, ___U24mainCameraU2467_4)); }
	inline Camera_t189460977 * get_U24mainCameraU2467_4() const { return ___U24mainCameraU2467_4; }
	inline Camera_t189460977 ** get_address_of_U24mainCameraU2467_4() { return &___U24mainCameraU2467_4; }
	inline void set_U24mainCameraU2467_4(Camera_t189460977 * value)
	{
		___U24mainCameraU2467_4 = value;
		Il2CppCodeGenWriteBarrier(&___U24mainCameraU2467_4, value);
	}

	inline static int32_t get_offset_of_U24rayU2468_5() { return static_cast<int32_t>(offsetof(U24_t4244531148, ___U24rayU2468_5)); }
	inline Ray_t2469606224  get_U24rayU2468_5() const { return ___U24rayU2468_5; }
	inline Ray_t2469606224 * get_address_of_U24rayU2468_5() { return &___U24rayU2468_5; }
	inline void set_U24rayU2468_5(Ray_t2469606224  value)
	{
		___U24rayU2468_5 = value;
	}

	inline static int32_t get_offset_of_U24distanceU2469_6() { return static_cast<int32_t>(offsetof(U24_t4244531148, ___U24distanceU2469_6)); }
	inline float get_U24distanceU2469_6() const { return ___U24distanceU2469_6; }
	inline float* get_address_of_U24distanceU2469_6() { return &___U24distanceU2469_6; }
	inline void set_U24distanceU2469_6(float value)
	{
		___U24distanceU2469_6 = value;
	}

	inline static int32_t get_offset_of_U24self_U2470_7() { return static_cast<int32_t>(offsetof(U24_t4244531148, ___U24self_U2470_7)); }
	inline DragRigidbody_t836548095 * get_U24self_U2470_7() const { return ___U24self_U2470_7; }
	inline DragRigidbody_t836548095 ** get_address_of_U24self_U2470_7() { return &___U24self_U2470_7; }
	inline void set_U24self_U2470_7(DragRigidbody_t836548095 * value)
	{
		___U24self_U2470_7 = value;
		Il2CppCodeGenWriteBarrier(&___U24self_U2470_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
