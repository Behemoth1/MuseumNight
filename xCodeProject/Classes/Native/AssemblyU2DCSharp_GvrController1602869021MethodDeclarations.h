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

// GvrController
struct GvrController_t1602869021;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GvrConnectionState1596129842.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// System.Void GvrController::.ctor()
extern "C"  void GvrController__ctor_m2877647192 (GvrController_t1602869021 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GvrConnectionState GvrController::get_State()
extern "C"  int32_t GvrController_get_State_m1204800547 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion GvrController::get_Orientation()
extern "C"  Quaternion_t4030073918  GvrController_get_Orientation_m2978226007 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 GvrController::get_Gyro()
extern "C"  Vector3_t2243707580  GvrController_get_Gyro_m2554294574 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 GvrController::get_Accel()
extern "C"  Vector3_t2243707580  GvrController_get_Accel_m3462430859 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrController::get_IsTouching()
extern "C"  bool GvrController_get_IsTouching_m1958845944 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrController::get_TouchDown()
extern "C"  bool GvrController_get_TouchDown_m879432314 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrController::get_TouchUp()
extern "C"  bool GvrController_get_TouchUp_m2565686229 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 GvrController::get_TouchPos()
extern "C"  Vector2_t2243707579  GvrController_get_TouchPos_m946016215 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrController::get_Recentering()
extern "C"  bool GvrController_get_Recentering_m1551883477 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrController::get_Recentered()
extern "C"  bool GvrController_get_Recentered_m1331587292 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrController::get_ClickButton()
extern "C"  bool GvrController_get_ClickButton_m1209409773 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrController::get_ClickButtonDown()
extern "C"  bool GvrController_get_ClickButtonDown_m3925105167 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrController::get_ClickButtonUp()
extern "C"  bool GvrController_get_ClickButtonUp_m360756252 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrController::get_AppButton()
extern "C"  bool GvrController_get_AppButton_m833874090 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrController::get_AppButtonDown()
extern "C"  bool GvrController_get_AppButtonDown_m1105631050 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrController::get_AppButtonUp()
extern "C"  bool GvrController_get_AppButtonUp_m1309706011 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GvrController::get_ErrorDetails()
extern "C"  String_t* GvrController_get_ErrorDetails_m825653292 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrController::Awake()
extern "C"  void GvrController_Awake_m1279699129 (GvrController_t1602869021 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrController::OnDestroy()
extern "C"  void GvrController_OnDestroy_m2525621227 (GvrController_t1602869021 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrController::UpdateController()
extern "C"  void GvrController_UpdateController_m155956541 (GvrController_t1602869021 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrController::OnApplicationPause(System.Boolean)
extern "C"  void GvrController_OnApplicationPause_m484824978 (GvrController_t1602869021 * __this, bool ___paused0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrController::OnEnable()
extern "C"  void GvrController_OnEnable_m4069444600 (GvrController_t1602869021 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrController::OnDisable()
extern "C"  void GvrController_OnDisable_m508859089 (GvrController_t1602869021 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GvrController::EndOfFrame()
extern "C"  Il2CppObject * GvrController_EndOfFrame_m1557287837 (GvrController_t1602869021 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
