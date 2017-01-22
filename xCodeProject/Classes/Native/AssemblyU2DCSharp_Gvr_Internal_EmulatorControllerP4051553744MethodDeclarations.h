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

// Gvr.Internal.EmulatorControllerProvider
struct EmulatorControllerProvider_t4051553744;
// Gvr.Internal.ControllerState
struct ControllerState_t1971591097;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GvrController_EmulatorConnection1823409010.h"
#include "AssemblyU2DCSharp_Gvr_Internal_ControllerState1971591097.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorTouchEvent1122923020.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorOrientation4153005117.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorButtonEvent156276569.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorGyroEvent1858389926.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorAccelEvent621139879.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Void Gvr.Internal.EmulatorControllerProvider::.ctor(GvrController/EmulatorConnectionMode,System.Boolean,System.Boolean)
extern "C"  void EmulatorControllerProvider__ctor_m406422851 (EmulatorControllerProvider_t4051553744 * __this, int32_t ___connectionMode0, bool ___enableGyro1, bool ___enableAccel2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorControllerProvider::ReadState(Gvr.Internal.ControllerState)
extern "C"  void EmulatorControllerProvider_ReadState_m1169339693 (EmulatorControllerProvider_t4051553744 * __this, ControllerState_t1971591097 * ___outState0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorControllerProvider::OnPause()
extern "C"  void EmulatorControllerProvider_OnPause_m3775595118 (EmulatorControllerProvider_t4051553744 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorControllerProvider::OnResume()
extern "C"  void EmulatorControllerProvider_OnResume_m1644350715 (EmulatorControllerProvider_t4051553744 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorControllerProvider::HandleTouchEvent(Gvr.Internal.EmulatorTouchEvent)
extern "C"  void EmulatorControllerProvider_HandleTouchEvent_m3700768950 (EmulatorControllerProvider_t4051553744 * __this, EmulatorTouchEvent_t1122923020  ___touchEvent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorControllerProvider::HandleOrientationEvent(Gvr.Internal.EmulatorOrientationEvent)
extern "C"  void EmulatorControllerProvider_HandleOrientationEvent_m1136347478 (EmulatorControllerProvider_t4051553744 * __this, EmulatorOrientationEvent_t4153005117  ___orientationEvent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorControllerProvider::HandleButtonEvent(Gvr.Internal.EmulatorButtonEvent)
extern "C"  void EmulatorControllerProvider_HandleButtonEvent_m3122489028 (EmulatorControllerProvider_t4051553744 * __this, EmulatorButtonEvent_t156276569  ___buttonEvent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorControllerProvider::HandleGyroEvent(Gvr.Internal.EmulatorGyroEvent)
extern "C"  void EmulatorControllerProvider_HandleGyroEvent_m1527865978 (EmulatorControllerProvider_t4051553744 * __this, EmulatorGyroEvent_t1858389926  ___gyroEvent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorControllerProvider::HandleAccelEvent(Gvr.Internal.EmulatorAccelEvent)
extern "C"  void EmulatorControllerProvider_HandleAccelEvent_m417618230 (EmulatorControllerProvider_t4051553744 * __this, EmulatorAccelEvent_t621139879  ___accelEvent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion Gvr.Internal.EmulatorControllerProvider::ConvertEmulatorQuaternion(UnityEngine.Quaternion)
extern "C"  Quaternion_t4030073918  EmulatorControllerProvider_ConvertEmulatorQuaternion_m2334297168 (Il2CppObject * __this /* static, unused */, Quaternion_t4030073918  ___emulatorQuat0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Gvr.Internal.EmulatorControllerProvider::ConvertEmulatorGyro(UnityEngine.Vector3)
extern "C"  Vector3_t2243707580  EmulatorControllerProvider_ConvertEmulatorGyro_m94911433 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___emulatorGyro0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Gvr.Internal.EmulatorControllerProvider::ConvertEmulatorAccel(UnityEngine.Vector3)
extern "C"  Vector3_t2243707580  EmulatorControllerProvider_ConvertEmulatorAccel_m3852365178 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___emulatorAccel0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorControllerProvider::Recenter()
extern "C"  void EmulatorControllerProvider_Recenter_m3158404899 (EmulatorControllerProvider_t4051553744 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
