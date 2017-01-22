#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// GvrViewer
struct GvrViewer_t2583885279;
// UnityEngine.Camera
struct Camera_t189460977;
// StereoController
struct StereoController_t3144380552;
// Gvr.Internal.BaseVRDevice
struct BaseVRDevice_t4004462063;
// UnityEngine.RenderTexture
struct RenderTexture_t2666733923;
// GvrViewer/StereoScreenChangeDelegate
struct StereoScreenChangeDelegate_t1350813851;
// System.Uri
struct Uri_t19570940;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_GvrViewer_DistortionCorrectionMe1613770858.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrViewer
struct  GvrViewer_t2583885279  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean GvrViewer::vrModeEnabled
	bool ___vrModeEnabled_6;
	// GvrViewer/DistortionCorrectionMethod GvrViewer::distortionCorrection
	int32_t ___distortionCorrection_7;
	// System.Single GvrViewer::neckModelScale
	float ___neckModelScale_8;
	// System.Boolean GvrViewer::<NativeDistortionCorrectionSupported>k__BackingField
	bool ___U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_10;
	// System.Boolean GvrViewer::<NativeUILayerSupported>k__BackingField
	bool ___U3CNativeUILayerSupportedU3Ek__BackingField_11;
	// System.Single GvrViewer::stereoScreenScale
	float ___stereoScreenScale_12;
	// GvrViewer/StereoScreenChangeDelegate GvrViewer::OnStereoScreenChanged
	StereoScreenChangeDelegate_t1350813851 * ___OnStereoScreenChanged_14;
	// UnityEngine.Vector2 GvrViewer::defaultComfortableViewingRange
	Vector2_t2243707579  ___defaultComfortableViewingRange_15;
	// System.Uri GvrViewer::DefaultDeviceProfile
	Uri_t19570940 * ___DefaultDeviceProfile_16;
	// System.Boolean GvrViewer::<Triggered>k__BackingField
	bool ___U3CTriggeredU3Ek__BackingField_17;
	// System.Boolean GvrViewer::<Tilted>k__BackingField
	bool ___U3CTiltedU3Ek__BackingField_18;
	// System.Boolean GvrViewer::<ProfileChanged>k__BackingField
	bool ___U3CProfileChangedU3Ek__BackingField_19;
	// System.Boolean GvrViewer::<BackButtonPressed>k__BackingField
	bool ___U3CBackButtonPressedU3Ek__BackingField_20;
	// System.Int32 GvrViewer::updatedToFrame
	int32_t ___updatedToFrame_21;

public:
	inline static int32_t get_offset_of_vrModeEnabled_6() { return static_cast<int32_t>(offsetof(GvrViewer_t2583885279, ___vrModeEnabled_6)); }
	inline bool get_vrModeEnabled_6() const { return ___vrModeEnabled_6; }
	inline bool* get_address_of_vrModeEnabled_6() { return &___vrModeEnabled_6; }
	inline void set_vrModeEnabled_6(bool value)
	{
		___vrModeEnabled_6 = value;
	}

	inline static int32_t get_offset_of_distortionCorrection_7() { return static_cast<int32_t>(offsetof(GvrViewer_t2583885279, ___distortionCorrection_7)); }
	inline int32_t get_distortionCorrection_7() const { return ___distortionCorrection_7; }
	inline int32_t* get_address_of_distortionCorrection_7() { return &___distortionCorrection_7; }
	inline void set_distortionCorrection_7(int32_t value)
	{
		___distortionCorrection_7 = value;
	}

	inline static int32_t get_offset_of_neckModelScale_8() { return static_cast<int32_t>(offsetof(GvrViewer_t2583885279, ___neckModelScale_8)); }
	inline float get_neckModelScale_8() const { return ___neckModelScale_8; }
	inline float* get_address_of_neckModelScale_8() { return &___neckModelScale_8; }
	inline void set_neckModelScale_8(float value)
	{
		___neckModelScale_8 = value;
	}

	inline static int32_t get_offset_of_U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(GvrViewer_t2583885279, ___U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_10)); }
	inline bool get_U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_10() const { return ___U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_10() { return &___U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_10; }
	inline void set_U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_10(bool value)
	{
		___U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CNativeUILayerSupportedU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(GvrViewer_t2583885279, ___U3CNativeUILayerSupportedU3Ek__BackingField_11)); }
	inline bool get_U3CNativeUILayerSupportedU3Ek__BackingField_11() const { return ___U3CNativeUILayerSupportedU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CNativeUILayerSupportedU3Ek__BackingField_11() { return &___U3CNativeUILayerSupportedU3Ek__BackingField_11; }
	inline void set_U3CNativeUILayerSupportedU3Ek__BackingField_11(bool value)
	{
		___U3CNativeUILayerSupportedU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_stereoScreenScale_12() { return static_cast<int32_t>(offsetof(GvrViewer_t2583885279, ___stereoScreenScale_12)); }
	inline float get_stereoScreenScale_12() const { return ___stereoScreenScale_12; }
	inline float* get_address_of_stereoScreenScale_12() { return &___stereoScreenScale_12; }
	inline void set_stereoScreenScale_12(float value)
	{
		___stereoScreenScale_12 = value;
	}

	inline static int32_t get_offset_of_OnStereoScreenChanged_14() { return static_cast<int32_t>(offsetof(GvrViewer_t2583885279, ___OnStereoScreenChanged_14)); }
	inline StereoScreenChangeDelegate_t1350813851 * get_OnStereoScreenChanged_14() const { return ___OnStereoScreenChanged_14; }
	inline StereoScreenChangeDelegate_t1350813851 ** get_address_of_OnStereoScreenChanged_14() { return &___OnStereoScreenChanged_14; }
	inline void set_OnStereoScreenChanged_14(StereoScreenChangeDelegate_t1350813851 * value)
	{
		___OnStereoScreenChanged_14 = value;
		Il2CppCodeGenWriteBarrier(&___OnStereoScreenChanged_14, value);
	}

	inline static int32_t get_offset_of_defaultComfortableViewingRange_15() { return static_cast<int32_t>(offsetof(GvrViewer_t2583885279, ___defaultComfortableViewingRange_15)); }
	inline Vector2_t2243707579  get_defaultComfortableViewingRange_15() const { return ___defaultComfortableViewingRange_15; }
	inline Vector2_t2243707579 * get_address_of_defaultComfortableViewingRange_15() { return &___defaultComfortableViewingRange_15; }
	inline void set_defaultComfortableViewingRange_15(Vector2_t2243707579  value)
	{
		___defaultComfortableViewingRange_15 = value;
	}

	inline static int32_t get_offset_of_DefaultDeviceProfile_16() { return static_cast<int32_t>(offsetof(GvrViewer_t2583885279, ___DefaultDeviceProfile_16)); }
	inline Uri_t19570940 * get_DefaultDeviceProfile_16() const { return ___DefaultDeviceProfile_16; }
	inline Uri_t19570940 ** get_address_of_DefaultDeviceProfile_16() { return &___DefaultDeviceProfile_16; }
	inline void set_DefaultDeviceProfile_16(Uri_t19570940 * value)
	{
		___DefaultDeviceProfile_16 = value;
		Il2CppCodeGenWriteBarrier(&___DefaultDeviceProfile_16, value);
	}

	inline static int32_t get_offset_of_U3CTriggeredU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(GvrViewer_t2583885279, ___U3CTriggeredU3Ek__BackingField_17)); }
	inline bool get_U3CTriggeredU3Ek__BackingField_17() const { return ___U3CTriggeredU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CTriggeredU3Ek__BackingField_17() { return &___U3CTriggeredU3Ek__BackingField_17; }
	inline void set_U3CTriggeredU3Ek__BackingField_17(bool value)
	{
		___U3CTriggeredU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CTiltedU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(GvrViewer_t2583885279, ___U3CTiltedU3Ek__BackingField_18)); }
	inline bool get_U3CTiltedU3Ek__BackingField_18() const { return ___U3CTiltedU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CTiltedU3Ek__BackingField_18() { return &___U3CTiltedU3Ek__BackingField_18; }
	inline void set_U3CTiltedU3Ek__BackingField_18(bool value)
	{
		___U3CTiltedU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CProfileChangedU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(GvrViewer_t2583885279, ___U3CProfileChangedU3Ek__BackingField_19)); }
	inline bool get_U3CProfileChangedU3Ek__BackingField_19() const { return ___U3CProfileChangedU3Ek__BackingField_19; }
	inline bool* get_address_of_U3CProfileChangedU3Ek__BackingField_19() { return &___U3CProfileChangedU3Ek__BackingField_19; }
	inline void set_U3CProfileChangedU3Ek__BackingField_19(bool value)
	{
		___U3CProfileChangedU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CBackButtonPressedU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(GvrViewer_t2583885279, ___U3CBackButtonPressedU3Ek__BackingField_20)); }
	inline bool get_U3CBackButtonPressedU3Ek__BackingField_20() const { return ___U3CBackButtonPressedU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CBackButtonPressedU3Ek__BackingField_20() { return &___U3CBackButtonPressedU3Ek__BackingField_20; }
	inline void set_U3CBackButtonPressedU3Ek__BackingField_20(bool value)
	{
		___U3CBackButtonPressedU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_updatedToFrame_21() { return static_cast<int32_t>(offsetof(GvrViewer_t2583885279, ___updatedToFrame_21)); }
	inline int32_t get_updatedToFrame_21() const { return ___updatedToFrame_21; }
	inline int32_t* get_address_of_updatedToFrame_21() { return &___updatedToFrame_21; }
	inline void set_updatedToFrame_21(int32_t value)
	{
		___updatedToFrame_21 = value;
	}
};

struct GvrViewer_t2583885279_StaticFields
{
public:
	// GvrViewer GvrViewer::instance
	GvrViewer_t2583885279 * ___instance_3;
	// UnityEngine.Camera GvrViewer::currentMainCamera
	Camera_t189460977 * ___currentMainCamera_4;
	// StereoController GvrViewer::currentController
	StereoController_t3144380552 * ___currentController_5;
	// Gvr.Internal.BaseVRDevice GvrViewer::device
	BaseVRDevice_t4004462063 * ___device_9;
	// UnityEngine.RenderTexture GvrViewer::stereoScreen
	RenderTexture_t2666733923 * ___stereoScreen_13;

public:
	inline static int32_t get_offset_of_instance_3() { return static_cast<int32_t>(offsetof(GvrViewer_t2583885279_StaticFields, ___instance_3)); }
	inline GvrViewer_t2583885279 * get_instance_3() const { return ___instance_3; }
	inline GvrViewer_t2583885279 ** get_address_of_instance_3() { return &___instance_3; }
	inline void set_instance_3(GvrViewer_t2583885279 * value)
	{
		___instance_3 = value;
		Il2CppCodeGenWriteBarrier(&___instance_3, value);
	}

	inline static int32_t get_offset_of_currentMainCamera_4() { return static_cast<int32_t>(offsetof(GvrViewer_t2583885279_StaticFields, ___currentMainCamera_4)); }
	inline Camera_t189460977 * get_currentMainCamera_4() const { return ___currentMainCamera_4; }
	inline Camera_t189460977 ** get_address_of_currentMainCamera_4() { return &___currentMainCamera_4; }
	inline void set_currentMainCamera_4(Camera_t189460977 * value)
	{
		___currentMainCamera_4 = value;
		Il2CppCodeGenWriteBarrier(&___currentMainCamera_4, value);
	}

	inline static int32_t get_offset_of_currentController_5() { return static_cast<int32_t>(offsetof(GvrViewer_t2583885279_StaticFields, ___currentController_5)); }
	inline StereoController_t3144380552 * get_currentController_5() const { return ___currentController_5; }
	inline StereoController_t3144380552 ** get_address_of_currentController_5() { return &___currentController_5; }
	inline void set_currentController_5(StereoController_t3144380552 * value)
	{
		___currentController_5 = value;
		Il2CppCodeGenWriteBarrier(&___currentController_5, value);
	}

	inline static int32_t get_offset_of_device_9() { return static_cast<int32_t>(offsetof(GvrViewer_t2583885279_StaticFields, ___device_9)); }
	inline BaseVRDevice_t4004462063 * get_device_9() const { return ___device_9; }
	inline BaseVRDevice_t4004462063 ** get_address_of_device_9() { return &___device_9; }
	inline void set_device_9(BaseVRDevice_t4004462063 * value)
	{
		___device_9 = value;
		Il2CppCodeGenWriteBarrier(&___device_9, value);
	}

	inline static int32_t get_offset_of_stereoScreen_13() { return static_cast<int32_t>(offsetof(GvrViewer_t2583885279_StaticFields, ___stereoScreen_13)); }
	inline RenderTexture_t2666733923 * get_stereoScreen_13() const { return ___stereoScreen_13; }
	inline RenderTexture_t2666733923 ** get_address_of_stereoScreen_13() { return &___stereoScreen_13; }
	inline void set_stereoScreen_13(RenderTexture_t2666733923 * value)
	{
		___stereoScreen_13 = value;
		Il2CppCodeGenWriteBarrier(&___stereoScreen_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
