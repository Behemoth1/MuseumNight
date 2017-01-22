#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>


#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent2572128318.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types3648109718.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_Type1530480861.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_MotionEve4072706903.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_MotionEve1262104803.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_MotionEve1211758263.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_MotionEve2701542133.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_MotionEve3452538341.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_GyroscopeE182225200.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_GyroscopeEv33558588.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_Accelerom1893725728.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_Accelerom1480486140.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_DepthMapE1516604558.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_DepthMapE3483346914.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_Orientati2038376807.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_Orientati2561526853.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_KeyEvent639576718.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_KeyEvent_2056133158.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Builder2537253112.h"
#include "AssemblyU2DCSharp_GazeInputModule197612175.h"
#include "AssemblyU2DCSharp_GvrViewer2583885279.h"
#include "AssemblyU2DCSharp_GvrViewer_DistortionCorrectionMe1613770858.h"
#include "AssemblyU2DCSharp_GvrViewer_StereoScreenChangeDele1350813851.h"
#include "AssemblyU2DCSharp_GvrViewer_Eye1346324485.h"
#include "AssemblyU2DCSharp_GvrViewer_Distortion351632083.h"
#include "AssemblyU2DCSharp_Pose3D3872859958.h"
#include "AssemblyU2DCSharp_MutablePose3D1015643808.h"
#include "AssemblyU2DCSharp_GvrGaze2249568644.h"
#include "AssemblyU2DCSharp_GvrReticle1834592217.h"
#include "AssemblyU2DCSharp_GvrFPS750935016.h"
#include "AssemblyU2DCSharp_GvrIntent542233401.h"
#include "AssemblyU2DCSharp_RecordPlayer125887864.h"
#include "AssemblyU2DCSharp_ChangeWallColor557644039.h"
#include "AssemblyU2DCSharp_DeleteGameObject464512882.h"
#include "AssemblyU2DCSharp_FollowNpc3397450300.h"
#include "AssemblyU2DCSharp_GameLogic2306947540.h"
#include "AssemblyU2DCSharp_MoveFurniture1311050583.h"
#include "AssemblyU2DCSharp_toggleActiveState4051990683.h"
#include "AssemblyU2DCSharp_RandomMovement219910086.h"
#include "AssemblyU2DCSharp_RaycastMovement2953027142.h"
#include "AssemblyU2DCSharp_ToggleActiveState389198139.h"
#include "AssemblyU2DCSharp_Waypoint3498185729.h"
#include "AssemblyU2DCSharp_Waypoint_State2903570469.h"
#include "AssemblyU2DCSharp_WaypointMovement3812731254.h"
#include "AssemblyU2DCSharp_lightUp3218712425.h"
#include "AssemblyU2DCSharp_lightUp_U3ClightForU3Ec__Iterato2948263194.h"
#include "AssemblyU2DCSharp_iTween488923914.h"
#include "AssemblyU2DCSharp_iTween_EasingFunction3676968174.h"
#include "AssemblyU2DCSharp_iTween_ApplyTween747394300.h"
#include "AssemblyU2DCSharp_iTween_EaseType818674011.h"
#include "AssemblyU2DCSharp_iTween_LoopType1490651981.h"
#include "AssemblyU2DCSharp_iTween_NamedValueColor2874784184.h"
#include "AssemblyU2DCSharp_iTween_Defaults4204852305.h"
#include "AssemblyU2DCSharp_iTween_CRSpline4177960625.h"
#include "AssemblyU2DCSharp_iTween_U3CTweenDelayU3Ec__Iterat1889752800.h"
#include "AssemblyU2DCSharp_iTween_U3CTweenRestartU3Ec__Iter3903815285.h"
#include "AssemblyU2DCSharp_iTween_U3CStartU3Ec__Iterator21700299370.h"
#include "AssemblyU2DCSharp_MouseLook2643707144.h"
#include "AssemblyU2DCSharp_MouseLook_RotationAxes2150291266.h"
#include "AssemblyU2DCSharp_BlurEffect519166744.h"
#include "AssemblyU2DCSharp_ColorCorrectionEffect618837202.h"
#include "AssemblyU2DCSharp_ContrastStretchEffect3732070570.h"
#include "AssemblyU2DCSharp_GlowEffect1329942340.h"
#include "AssemblyU2DCSharp_GrayscaleEffect1203934418.h"
#include "AssemblyU2DCSharp_ImageEffectBase898523515.h"
#include "AssemblyU2DCSharp_ImageEffects2410519413.h"
#include "AssemblyU2DCSharp_MotionBlur1035271213.h"
#include "AssemblyU2DCSharp_NoiseEffect3733883223.h"
#include "AssemblyU2DCSharp_SSAOEffect1790065191.h"
#include "AssemblyU2DCSharp_SSAOEffect_SSAOSamples2315017899.h"
#include "AssemblyU2DCSharp_SepiaToneEffect2695985059.h"
#include "AssemblyU2DCSharp_TwirlEffect2412422509.h"
#include "AssemblyU2DCSharp_VortexEffect3754663651.h"
#include "AssemblyU2DCSharp_ActivateTrigger3138818731.h"
#include "AssemblyU2DCSharp_ActivateTrigger_Mode2987887219.h"
#include "AssemblyU2DCSharp_U3CPrivateImplementationDetailsU1486305137.h"
#include "AssemblyU2DCSharp_U3CPrivateImplementationDetailsU2731437132.h"
#include "AssemblyU2DCSharp_U3CPrivateImplementationDetailsU1568637717.h"
#include "AssemblyU2DCSharp_U3CPrivateImplementationDetailsU3894236545.h"
#include "AssemblyU2DCSharp_U3CPrivateImplementationDetailsU2375206772.h"
#include "AssemblyU2DUnityScript_U3CModuleU3E3783534214.h"
#include "AssemblyU2DUnityScript_CharacterMotorMovement944153967.h"
#include "AssemblyU2DUnityScript_MovementTransferOnJump3438008145.h"
#include "AssemblyU2DUnityScript_CharacterMotorJumping1708272304.h"
#include "AssemblyU2DUnityScript_CharacterMotorMovingPlatform365475463.h"
#include "AssemblyU2DUnityScript_CharacterMotorSliding3749388514.h"
#include "AssemblyU2DUnityScript_CharacterMotor262030084.h"
#include "AssemblyU2DUnityScript_CharacterMotor_U24SubtractNe433699697.h"
#include "AssemblyU2DUnityScript_CharacterMotor_U24SubtractN3795311220.h"
#include "AssemblyU2DUnityScript_FPSInputController4241249601.h"
#include "AssemblyU2DUnityScript_PlatformInputController4273899755.h"
#include "AssemblyU2DUnityScript_ThirdPersonCamera2751132817.h"
#include "AssemblyU2DUnityScript_CharacterState1314841520.h"
#include "AssemblyU2DUnityScript_ThirdPersonController1841729452.h"
#include "AssemblyU2DUnityScript_AmbientObscurance4277448813.h"
#include "AssemblyU2DUnityScript_AAMode3182714109.h"
#include "AssemblyU2DUnityScript_AntialiasingAsPostEffect2974095527.h"



#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1900 = { sizeof (PhoneEvent_t2572128318), -1, sizeof(PhoneEvent_t2572128318_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1900[25] = 
{
	PhoneEvent_t2572128318_StaticFields::get_offset_of_defaultInstance_0(),
	PhoneEvent_t2572128318_StaticFields::get_offset_of__phoneEventFieldNames_1(),
	PhoneEvent_t2572128318_StaticFields::get_offset_of__phoneEventFieldTags_2(),
	0,
	PhoneEvent_t2572128318::get_offset_of_hasType_4(),
	PhoneEvent_t2572128318::get_offset_of_type__5(),
	0,
	PhoneEvent_t2572128318::get_offset_of_hasMotionEvent_7(),
	PhoneEvent_t2572128318::get_offset_of_motionEvent__8(),
	0,
	PhoneEvent_t2572128318::get_offset_of_hasGyroscopeEvent_10(),
	PhoneEvent_t2572128318::get_offset_of_gyroscopeEvent__11(),
	0,
	PhoneEvent_t2572128318::get_offset_of_hasAccelerometerEvent_13(),
	PhoneEvent_t2572128318::get_offset_of_accelerometerEvent__14(),
	0,
	PhoneEvent_t2572128318::get_offset_of_hasDepthMapEvent_16(),
	PhoneEvent_t2572128318::get_offset_of_depthMapEvent__17(),
	0,
	PhoneEvent_t2572128318::get_offset_of_hasOrientationEvent_19(),
	PhoneEvent_t2572128318::get_offset_of_orientationEvent__20(),
	0,
	PhoneEvent_t2572128318::get_offset_of_hasKeyEvent_22(),
	PhoneEvent_t2572128318::get_offset_of_keyEvent__23(),
	PhoneEvent_t2572128318::get_offset_of_memoizedSerializedSize_24(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1901 = { sizeof (Types_t3648109718), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1902 = { sizeof (Type_t1530480861)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1902[7] = 
{
	Type_t1530480861::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1903 = { sizeof (MotionEvent_t4072706903), -1, sizeof(MotionEvent_t4072706903_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1903[12] = 
{
	MotionEvent_t4072706903_StaticFields::get_offset_of_defaultInstance_0(),
	MotionEvent_t4072706903_StaticFields::get_offset_of__motionEventFieldNames_1(),
	MotionEvent_t4072706903_StaticFields::get_offset_of__motionEventFieldTags_2(),
	0,
	MotionEvent_t4072706903::get_offset_of_hasTimestamp_4(),
	MotionEvent_t4072706903::get_offset_of_timestamp__5(),
	0,
	MotionEvent_t4072706903::get_offset_of_hasAction_7(),
	MotionEvent_t4072706903::get_offset_of_action__8(),
	0,
	MotionEvent_t4072706903::get_offset_of_pointers__10(),
	MotionEvent_t4072706903::get_offset_of_memoizedSerializedSize_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1904 = { sizeof (Types_t1262104803), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1905 = { sizeof (Pointer_t1211758263), -1, sizeof(Pointer_t1211758263_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1905[13] = 
{
	Pointer_t1211758263_StaticFields::get_offset_of_defaultInstance_0(),
	Pointer_t1211758263_StaticFields::get_offset_of__pointerFieldNames_1(),
	Pointer_t1211758263_StaticFields::get_offset_of__pointerFieldTags_2(),
	0,
	Pointer_t1211758263::get_offset_of_hasId_4(),
	Pointer_t1211758263::get_offset_of_id__5(),
	0,
	Pointer_t1211758263::get_offset_of_hasNormalizedX_7(),
	Pointer_t1211758263::get_offset_of_normalizedX__8(),
	0,
	Pointer_t1211758263::get_offset_of_hasNormalizedY_10(),
	Pointer_t1211758263::get_offset_of_normalizedY__11(),
	Pointer_t1211758263::get_offset_of_memoizedSerializedSize_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1906 = { sizeof (Builder_t2701542133), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1906[2] = 
{
	Builder_t2701542133::get_offset_of_resultIsReadOnly_0(),
	Builder_t2701542133::get_offset_of_result_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1907 = { sizeof (Builder_t3452538341), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1907[2] = 
{
	Builder_t3452538341::get_offset_of_resultIsReadOnly_0(),
	Builder_t3452538341::get_offset_of_result_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1908 = { sizeof (GyroscopeEvent_t182225200), -1, sizeof(GyroscopeEvent_t182225200_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1908[16] = 
{
	GyroscopeEvent_t182225200_StaticFields::get_offset_of_defaultInstance_0(),
	GyroscopeEvent_t182225200_StaticFields::get_offset_of__gyroscopeEventFieldNames_1(),
	GyroscopeEvent_t182225200_StaticFields::get_offset_of__gyroscopeEventFieldTags_2(),
	0,
	GyroscopeEvent_t182225200::get_offset_of_hasTimestamp_4(),
	GyroscopeEvent_t182225200::get_offset_of_timestamp__5(),
	0,
	GyroscopeEvent_t182225200::get_offset_of_hasX_7(),
	GyroscopeEvent_t182225200::get_offset_of_x__8(),
	0,
	GyroscopeEvent_t182225200::get_offset_of_hasY_10(),
	GyroscopeEvent_t182225200::get_offset_of_y__11(),
	0,
	GyroscopeEvent_t182225200::get_offset_of_hasZ_13(),
	GyroscopeEvent_t182225200::get_offset_of_z__14(),
	GyroscopeEvent_t182225200::get_offset_of_memoizedSerializedSize_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1909 = { sizeof (Builder_t33558588), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1909[2] = 
{
	Builder_t33558588::get_offset_of_resultIsReadOnly_0(),
	Builder_t33558588::get_offset_of_result_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1910 = { sizeof (AccelerometerEvent_t1893725728), -1, sizeof(AccelerometerEvent_t1893725728_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1910[16] = 
{
	AccelerometerEvent_t1893725728_StaticFields::get_offset_of_defaultInstance_0(),
	AccelerometerEvent_t1893725728_StaticFields::get_offset_of__accelerometerEventFieldNames_1(),
	AccelerometerEvent_t1893725728_StaticFields::get_offset_of__accelerometerEventFieldTags_2(),
	0,
	AccelerometerEvent_t1893725728::get_offset_of_hasTimestamp_4(),
	AccelerometerEvent_t1893725728::get_offset_of_timestamp__5(),
	0,
	AccelerometerEvent_t1893725728::get_offset_of_hasX_7(),
	AccelerometerEvent_t1893725728::get_offset_of_x__8(),
	0,
	AccelerometerEvent_t1893725728::get_offset_of_hasY_10(),
	AccelerometerEvent_t1893725728::get_offset_of_y__11(),
	0,
	AccelerometerEvent_t1893725728::get_offset_of_hasZ_13(),
	AccelerometerEvent_t1893725728::get_offset_of_z__14(),
	AccelerometerEvent_t1893725728::get_offset_of_memoizedSerializedSize_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1911 = { sizeof (Builder_t1480486140), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1911[2] = 
{
	Builder_t1480486140::get_offset_of_resultIsReadOnly_0(),
	Builder_t1480486140::get_offset_of_result_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1912 = { sizeof (DepthMapEvent_t1516604558), -1, sizeof(DepthMapEvent_t1516604558_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1912[16] = 
{
	DepthMapEvent_t1516604558_StaticFields::get_offset_of_defaultInstance_0(),
	DepthMapEvent_t1516604558_StaticFields::get_offset_of__depthMapEventFieldNames_1(),
	DepthMapEvent_t1516604558_StaticFields::get_offset_of__depthMapEventFieldTags_2(),
	0,
	DepthMapEvent_t1516604558::get_offset_of_hasTimestamp_4(),
	DepthMapEvent_t1516604558::get_offset_of_timestamp__5(),
	0,
	DepthMapEvent_t1516604558::get_offset_of_hasWidth_7(),
	DepthMapEvent_t1516604558::get_offset_of_width__8(),
	0,
	DepthMapEvent_t1516604558::get_offset_of_hasHeight_10(),
	DepthMapEvent_t1516604558::get_offset_of_height__11(),
	0,
	DepthMapEvent_t1516604558::get_offset_of_zDistancesMemoizedSerializedSize_13(),
	DepthMapEvent_t1516604558::get_offset_of_zDistances__14(),
	DepthMapEvent_t1516604558::get_offset_of_memoizedSerializedSize_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1913 = { sizeof (Builder_t3483346914), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1913[2] = 
{
	Builder_t3483346914::get_offset_of_resultIsReadOnly_0(),
	Builder_t3483346914::get_offset_of_result_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1914 = { sizeof (OrientationEvent_t2038376807), -1, sizeof(OrientationEvent_t2038376807_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1914[19] = 
{
	OrientationEvent_t2038376807_StaticFields::get_offset_of_defaultInstance_0(),
	OrientationEvent_t2038376807_StaticFields::get_offset_of__orientationEventFieldNames_1(),
	OrientationEvent_t2038376807_StaticFields::get_offset_of__orientationEventFieldTags_2(),
	0,
	OrientationEvent_t2038376807::get_offset_of_hasTimestamp_4(),
	OrientationEvent_t2038376807::get_offset_of_timestamp__5(),
	0,
	OrientationEvent_t2038376807::get_offset_of_hasX_7(),
	OrientationEvent_t2038376807::get_offset_of_x__8(),
	0,
	OrientationEvent_t2038376807::get_offset_of_hasY_10(),
	OrientationEvent_t2038376807::get_offset_of_y__11(),
	0,
	OrientationEvent_t2038376807::get_offset_of_hasZ_13(),
	OrientationEvent_t2038376807::get_offset_of_z__14(),
	0,
	OrientationEvent_t2038376807::get_offset_of_hasW_16(),
	OrientationEvent_t2038376807::get_offset_of_w__17(),
	OrientationEvent_t2038376807::get_offset_of_memoizedSerializedSize_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1915 = { sizeof (Builder_t2561526853), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1915[2] = 
{
	Builder_t2561526853::get_offset_of_resultIsReadOnly_0(),
	Builder_t2561526853::get_offset_of_result_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1916 = { sizeof (KeyEvent_t639576718), -1, sizeof(KeyEvent_t639576718_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1916[10] = 
{
	KeyEvent_t639576718_StaticFields::get_offset_of_defaultInstance_0(),
	KeyEvent_t639576718_StaticFields::get_offset_of__keyEventFieldNames_1(),
	KeyEvent_t639576718_StaticFields::get_offset_of__keyEventFieldTags_2(),
	0,
	KeyEvent_t639576718::get_offset_of_hasAction_4(),
	KeyEvent_t639576718::get_offset_of_action__5(),
	0,
	KeyEvent_t639576718::get_offset_of_hasCode_7(),
	KeyEvent_t639576718::get_offset_of_code__8(),
	KeyEvent_t639576718::get_offset_of_memoizedSerializedSize_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1917 = { sizeof (Builder_t2056133158), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1917[2] = 
{
	Builder_t2056133158::get_offset_of_resultIsReadOnly_0(),
	Builder_t2056133158::get_offset_of_result_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1918 = { sizeof (Builder_t2537253112), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1918[2] = 
{
	Builder_t2537253112::get_offset_of_resultIsReadOnly_0(),
	Builder_t2537253112::get_offset_of_result_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1919 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1920 = { sizeof (GazeInputModule_t197612175), -1, sizeof(GazeInputModule_t197612175_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1920[6] = 
{
	GazeInputModule_t197612175::get_offset_of_vrModeOnly_8(),
	GazeInputModule_t197612175_StaticFields::get_offset_of_gazePointer_9(),
	GazeInputModule_t197612175::get_offset_of_pointerData_10(),
	GazeInputModule_t197612175::get_offset_of_lastHeadPose_11(),
	GazeInputModule_t197612175::get_offset_of_isActive_12(),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1921 = { sizeof (GvrViewer_t2583885279), -1, sizeof(GvrViewer_t2583885279_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1921[20] = 
{
	0,
	GvrViewer_t2583885279_StaticFields::get_offset_of_instance_3(),
	GvrViewer_t2583885279_StaticFields::get_offset_of_currentMainCamera_4(),
	GvrViewer_t2583885279_StaticFields::get_offset_of_currentController_5(),
	GvrViewer_t2583885279::get_offset_of_vrModeEnabled_6(),
	GvrViewer_t2583885279::get_offset_of_distortionCorrection_7(),
	GvrViewer_t2583885279::get_offset_of_neckModelScale_8(),
	GvrViewer_t2583885279_StaticFields::get_offset_of_device_9(),
	GvrViewer_t2583885279::get_offset_of_U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_10(),
	GvrViewer_t2583885279::get_offset_of_U3CNativeUILayerSupportedU3Ek__BackingField_11(),
	GvrViewer_t2583885279::get_offset_of_stereoScreenScale_12(),
	GvrViewer_t2583885279_StaticFields::get_offset_of_stereoScreen_13(),
	GvrViewer_t2583885279::get_offset_of_OnStereoScreenChanged_14(),
	GvrViewer_t2583885279::get_offset_of_defaultComfortableViewingRange_15(),
	GvrViewer_t2583885279::get_offset_of_DefaultDeviceProfile_16(),
	GvrViewer_t2583885279::get_offset_of_U3CTriggeredU3Ek__BackingField_17(),
	GvrViewer_t2583885279::get_offset_of_U3CTiltedU3Ek__BackingField_18(),
	GvrViewer_t2583885279::get_offset_of_U3CProfileChangedU3Ek__BackingField_19(),
	GvrViewer_t2583885279::get_offset_of_U3CBackButtonPressedU3Ek__BackingField_20(),
	GvrViewer_t2583885279::get_offset_of_updatedToFrame_21(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1922 = { sizeof (DistortionCorrectionMethod_t1613770858)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1922[4] = 
{
	DistortionCorrectionMethod_t1613770858::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1923 = { sizeof (StereoScreenChangeDelegate_t1350813851), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1924 = { sizeof (Eye_t1346324485)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1924[4] = 
{
	Eye_t1346324485::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1925 = { sizeof (Distortion_t351632083)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1925[3] = 
{
	Distortion_t351632083::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1926 = { sizeof (Pose3D_t3872859958), -1, sizeof(Pose3D_t3872859958_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1926[4] = 
{
	Pose3D_t3872859958_StaticFields::get_offset_of_flipZ_0(),
	Pose3D_t3872859958::get_offset_of_U3CPositionU3Ek__BackingField_1(),
	Pose3D_t3872859958::get_offset_of_U3COrientationU3Ek__BackingField_2(),
	Pose3D_t3872859958::get_offset_of_U3CMatrixU3Ek__BackingField_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1927 = { sizeof (MutablePose3D_t1015643808), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1928 = { sizeof (GvrGaze_t2249568644), -1, sizeof(GvrGaze_t2249568644_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1928[10] = 
{
	GvrGaze_t2249568644::get_offset_of_pointerObject_2(),
	GvrGaze_t2249568644::get_offset_of_pointer_3(),
	GvrGaze_t2249568644::get_offset_of_U3CcamU3Ek__BackingField_4(),
	GvrGaze_t2249568644::get_offset_of_mask_5(),
	GvrGaze_t2249568644::get_offset_of_currentTarget_6(),
	GvrGaze_t2249568644::get_offset_of_currentGazeObject_7(),
	GvrGaze_t2249568644::get_offset_of_lastIntersectPosition_8(),
	GvrGaze_t2249568644::get_offset_of_isTriggered_9(),
	GvrGaze_t2249568644_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_10(),
	GvrGaze_t2249568644_StaticFields::get_offset_of_U3CU3Ef__amU24cache1_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1929 = { sizeof (GvrReticle_t1834592217), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1929[14] = 
{
	GvrReticle_t1834592217::get_offset_of_reticleSegments_2(),
	GvrReticle_t1834592217::get_offset_of_reticleGrowthSpeed_3(),
	GvrReticle_t1834592217::get_offset_of_materialComp_4(),
	GvrReticle_t1834592217::get_offset_of_targetObj_5(),
	GvrReticle_t1834592217::get_offset_of_reticleInnerAngle_6(),
	GvrReticle_t1834592217::get_offset_of_reticleOuterAngle_7(),
	GvrReticle_t1834592217::get_offset_of_reticleDistanceInMeters_8(),
	0,
	0,
	0,
	0,
	0,
	GvrReticle_t1834592217::get_offset_of_reticleInnerDiameter_14(),
	GvrReticle_t1834592217::get_offset_of_reticleOuterDiameter_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1930 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1931 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1932 = { sizeof (GvrFPS_t750935016), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1932[6] = 
{
	0,
	0,
	0,
	GvrFPS_t750935016::get_offset_of_textField_5(),
	GvrFPS_t750935016::get_offset_of_fps_6(),
	GvrFPS_t750935016::get_offset_of_cam_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1933 = { sizeof (GvrIntent_t542233401), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1934 = { sizeof (RecordPlayer_t125887864), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1934[7] = 
{
	RecordPlayer_t125887864::get_offset_of_recordPlayerActive_2(),
	RecordPlayer_t125887864::get_offset_of_disc_3(),
	RecordPlayer_t125887864::get_offset_of_arm_4(),
	RecordPlayer_t125887864::get_offset_of_mode_5(),
	RecordPlayer_t125887864::get_offset_of_armAngle_6(),
	RecordPlayer_t125887864::get_offset_of_discAngle_7(),
	RecordPlayer_t125887864::get_offset_of_discSpeed_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1935 = { sizeof (ChangeWallColor_t557644039), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1935[2] = 
{
	ChangeWallColor_t557644039::get_offset_of_wallsNumber_2(),
	ChangeWallColor_t557644039::get_offset_of_walls_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1936 = { sizeof (DeleteGameObject_t464512882), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1936[4] = 
{
	DeleteGameObject_t464512882::get_offset_of_objectToDelete_2(),
	DeleteGameObject_t464512882::get_offset_of_player_3(),
	DeleteGameObject_t464512882::get_offset_of_startExplorePoint_4(),
	DeleteGameObject_t464512882::get_offset_of_height_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1937 = { sizeof (FollowNpc_t3397450300), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1937[3] = 
{
	FollowNpc_t3397450300::get_offset_of_attractor_2(),
	FollowNpc_t3397450300::get_offset_of_speed_3(),
	FollowNpc_t3397450300::get_offset_of_attractionPoint_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1938 = { sizeof (GameLogic_t2306947540), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1938[16] = 
{
	GameLogic_t2306947540::get_offset_of_player_2(),
	GameLogic_t2306947540::get_offset_of_eventSystem_3(),
	GameLogic_t2306947540::get_offset_of_startUI_4(),
	GameLogic_t2306947540::get_offset_of_restartUI_5(),
	GameLogic_t2306947540::get_offset_of_startPoint_6(),
	GameLogic_t2306947540::get_offset_of_playPoint_7(),
	GameLogic_t2306947540::get_offset_of_restartPoint_8(),
	GameLogic_t2306947540::get_offset_of_puzzleSpheres_9(),
	GameLogic_t2306947540::get_offset_of_puzzleLength_10(),
	GameLogic_t2306947540::get_offset_of_puzzleSpeed_11(),
	GameLogic_t2306947540::get_offset_of_puzzleOrder_12(),
	GameLogic_t2306947540::get_offset_of_currentDisplayIndex_13(),
	GameLogic_t2306947540::get_offset_of_currentlyDisplayingPattern_14(),
	GameLogic_t2306947540::get_offset_of_playerWon_15(),
	GameLogic_t2306947540::get_offset_of_currentSolveIndex_16(),
	GameLogic_t2306947540::get_offset_of_failAudio_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1939 = { sizeof (MoveFurniture_t1311050583), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1939[3] = 
{
	MoveFurniture_t1311050583::get_offset_of_objects_2(),
	MoveFurniture_t1311050583::get_offset_of_transform_3(),
	MoveFurniture_t1311050583::get_offset_of_isFirstPositionActive_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1940 = { sizeof (toggleActiveState_t4051990683), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1940[3] = 
{
	toggleActiveState_t4051990683::get_offset_of_objects_2(),
	toggleActiveState_t4051990683::get_offset_of_activeByDefaut_3(),
	toggleActiveState_t4051990683::get_offset_of_currentState_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1941 = { sizeof (RandomMovement_t219910086), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1941[11] = 
{
	RandomMovement_t219910086::get_offset_of_attractor_2(),
	RandomMovement_t219910086::get_offset_of_speed_3(),
	RandomMovement_t219910086::get_offset_of_xMax_4(),
	RandomMovement_t219910086::get_offset_of_yMax_5(),
	RandomMovement_t219910086::get_offset_of_zMax_6(),
	RandomMovement_t219910086::get_offset_of_attractorX_7(),
	RandomMovement_t219910086::get_offset_of_attractorY_8(),
	RandomMovement_t219910086::get_offset_of_attractorZ_9(),
	RandomMovement_t219910086::get_offset_of_attractorPoint_10(),
	RandomMovement_t219910086::get_offset_of_counter_11(),
	RandomMovement_t219910086::get_offset_of_counterMax_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1942 = { sizeof (RaycastMovement_t2953027142), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1942[9] = 
{
	RaycastMovement_t2953027142::get_offset_of_raycastHolder_2(),
	RaycastMovement_t2953027142::get_offset_of_player_3(),
	RaycastMovement_t2953027142::get_offset_of_raycastIndicator_4(),
	RaycastMovement_t2953027142::get_offset_of_height_5(),
	RaycastMovement_t2953027142::get_offset_of_teleport_6(),
	RaycastMovement_t2953027142::get_offset_of_maxMoveDistance_7(),
	RaycastMovement_t2953027142::get_offset_of_moving_8(),
	RaycastMovement_t2953027142::get_offset_of_hit_9(),
	RaycastMovement_t2953027142::get_offset_of_theDistance_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1943 = { sizeof (ToggleActiveState_t389198139), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1943[3] = 
{
	ToggleActiveState_t389198139::get_offset_of_objects_2(),
	ToggleActiveState_t389198139::get_offset_of_activeByDefaut_3(),
	ToggleActiveState_t389198139::get_offset_of_currentState_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1944 = { sizeof (Waypoint_t3498185729), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1944[20] = 
{
	Waypoint_t3498185729::get_offset_of__state_2(),
	Waypoint_t3498185729::get_offset_of__color_origional_3(),
	Waypoint_t3498185729::get_offset_of__color_4(),
	Waypoint_t3498185729::get_offset_of__scale_5(),
	Waypoint_t3498185729::get_offset_of__animated_lerp_6(),
	Waypoint_t3498185729::get_offset_of__audio_source_7(),
	Waypoint_t3498185729::get_offset_of__material_8(),
	Waypoint_t3498185729::get_offset_of_material_9(),
	Waypoint_t3498185729::get_offset_of_color_hilight_10(),
	Waypoint_t3498185729::get_offset_of_lerp_idle_11(),
	Waypoint_t3498185729::get_offset_of_lerp_focus_12(),
	Waypoint_t3498185729::get_offset_of_lerp_hide_13(),
	Waypoint_t3498185729::get_offset_of_lerp_clicked_14(),
	Waypoint_t3498185729::get_offset_of_scale_clicked_max_15(),
	Waypoint_t3498185729::get_offset_of_scale_animation_16(),
	Waypoint_t3498185729::get_offset_of_scale_idle_min_17(),
	Waypoint_t3498185729::get_offset_of_scale_idle_max_18(),
	Waypoint_t3498185729::get_offset_of_scale_focus_min_19(),
	Waypoint_t3498185729::get_offset_of_scale_focus_max_20(),
	Waypoint_t3498185729::get_offset_of_threshold_21(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1945 = { sizeof (State_t2903570469)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1945[11] = 
{
	State_t2903570469::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1946 = { sizeof (WaypointMovement_t3812731254), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1946[4] = 
{
	WaypointMovement_t3812731254::get_offset_of_player_2(),
	WaypointMovement_t3812731254::get_offset_of_height_3(),
	WaypointMovement_t3812731254::get_offset_of_teleport_4(),
	WaypointMovement_t3812731254::get_offset_of_maxMoveDistance_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1947 = { sizeof (lightUp_t3218712425), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1947[3] = 
{
	lightUp_t3218712425::get_offset_of_lightUpMaterial_2(),
	lightUp_t3218712425::get_offset_of_gameLogic_3(),
	lightUp_t3218712425::get_offset_of_defaultMaterial_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1948 = { sizeof (U3ClightForU3Ec__Iterator0_t2948263194), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1948[5] = 
{
	U3ClightForU3Ec__Iterator0_t2948263194::get_offset_of_duration_0(),
	U3ClightForU3Ec__Iterator0_t2948263194::get_offset_of_U24this_1(),
	U3ClightForU3Ec__Iterator0_t2948263194::get_offset_of_U24current_2(),
	U3ClightForU3Ec__Iterator0_t2948263194::get_offset_of_U24disposing_3(),
	U3ClightForU3Ec__Iterator0_t2948263194::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1949 = { sizeof (iTween_t488923914), -1, sizeof(iTween_t488923914_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1949[39] = 
{
	iTween_t488923914_StaticFields::get_offset_of_tweens_2(),
	iTween_t488923914_StaticFields::get_offset_of_cameraFade_3(),
	iTween_t488923914::get_offset_of_id_4(),
	iTween_t488923914::get_offset_of_type_5(),
	iTween_t488923914::get_offset_of_method_6(),
	iTween_t488923914::get_offset_of_easeType_7(),
	iTween_t488923914::get_offset_of_time_8(),
	iTween_t488923914::get_offset_of_delay_9(),
	iTween_t488923914::get_offset_of_loopType_10(),
	iTween_t488923914::get_offset_of_isRunning_11(),
	iTween_t488923914::get_offset_of_isPaused_12(),
	iTween_t488923914::get_offset_of__name_13(),
	iTween_t488923914::get_offset_of_runningTime_14(),
	iTween_t488923914::get_offset_of_percentage_15(),
	iTween_t488923914::get_offset_of_delayStarted_16(),
	iTween_t488923914::get_offset_of_kinematic_17(),
	iTween_t488923914::get_offset_of_isLocal_18(),
	iTween_t488923914::get_offset_of_loop_19(),
	iTween_t488923914::get_offset_of_reverse_20(),
	iTween_t488923914::get_offset_of_wasPaused_21(),
	iTween_t488923914::get_offset_of_physics_22(),
	iTween_t488923914::get_offset_of_tweenArguments_23(),
	iTween_t488923914::get_offset_of_space_24(),
	iTween_t488923914::get_offset_of_ease_25(),
	iTween_t488923914::get_offset_of_apply_26(),
	iTween_t488923914::get_offset_of_audioSource_27(),
	iTween_t488923914::get_offset_of_vector3s_28(),
	iTween_t488923914::get_offset_of_vector2s_29(),
	iTween_t488923914::get_offset_of_colors_30(),
	iTween_t488923914::get_offset_of_floats_31(),
	iTween_t488923914::get_offset_of_rects_32(),
	iTween_t488923914::get_offset_of_path_33(),
	iTween_t488923914::get_offset_of_preUpdate_34(),
	iTween_t488923914::get_offset_of_postUpdate_35(),
	iTween_t488923914::get_offset_of_namedcolorvalue_36(),
	iTween_t488923914::get_offset_of_lastRealTime_37(),
	iTween_t488923914::get_offset_of_useRealTime_38(),
	iTween_t488923914::get_offset_of_thisTransform_39(),
	iTween_t488923914_StaticFields::get_offset_of_U3CU3Ef__switchU24map0_40(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1950 = { sizeof (EasingFunction_t3676968174), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1951 = { sizeof (ApplyTween_t747394300), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1952 = { sizeof (EaseType_t818674011)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1952[34] = 
{
	EaseType_t818674011::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1953 = { sizeof (LoopType_t1490651981)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1953[4] = 
{
	LoopType_t1490651981::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1954 = { sizeof (NamedValueColor_t2874784184)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1954[5] = 
{
	NamedValueColor_t2874784184::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1955 = { sizeof (Defaults_t4204852305), -1, sizeof(Defaults_t4204852305_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1955[16] = 
{
	Defaults_t4204852305_StaticFields::get_offset_of_time_0(),
	Defaults_t4204852305_StaticFields::get_offset_of_delay_1(),
	Defaults_t4204852305_StaticFields::get_offset_of_namedColorValue_2(),
	Defaults_t4204852305_StaticFields::get_offset_of_loopType_3(),
	Defaults_t4204852305_StaticFields::get_offset_of_easeType_4(),
	Defaults_t4204852305_StaticFields::get_offset_of_lookSpeed_5(),
	Defaults_t4204852305_StaticFields::get_offset_of_isLocal_6(),
	Defaults_t4204852305_StaticFields::get_offset_of_space_7(),
	Defaults_t4204852305_StaticFields::get_offset_of_orientToPath_8(),
	Defaults_t4204852305_StaticFields::get_offset_of_color_9(),
	Defaults_t4204852305_StaticFields::get_offset_of_updateTimePercentage_10(),
	Defaults_t4204852305_StaticFields::get_offset_of_updateTime_11(),
	Defaults_t4204852305_StaticFields::get_offset_of_cameraFadeDepth_12(),
	Defaults_t4204852305_StaticFields::get_offset_of_lookAhead_13(),
	Defaults_t4204852305_StaticFields::get_offset_of_useRealTime_14(),
	Defaults_t4204852305_StaticFields::get_offset_of_up_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1956 = { sizeof (CRSpline_t4177960625), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1956[1] = 
{
	CRSpline_t4177960625::get_offset_of_pts_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1957 = { sizeof (U3CTweenDelayU3Ec__Iterator0_t1889752800), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1957[4] = 
{
	U3CTweenDelayU3Ec__Iterator0_t1889752800::get_offset_of_U24this_0(),
	U3CTweenDelayU3Ec__Iterator0_t1889752800::get_offset_of_U24current_1(),
	U3CTweenDelayU3Ec__Iterator0_t1889752800::get_offset_of_U24disposing_2(),
	U3CTweenDelayU3Ec__Iterator0_t1889752800::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1958 = { sizeof (U3CTweenRestartU3Ec__Iterator1_t3903815285), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1958[4] = 
{
	U3CTweenRestartU3Ec__Iterator1_t3903815285::get_offset_of_U24this_0(),
	U3CTweenRestartU3Ec__Iterator1_t3903815285::get_offset_of_U24current_1(),
	U3CTweenRestartU3Ec__Iterator1_t3903815285::get_offset_of_U24disposing_2(),
	U3CTweenRestartU3Ec__Iterator1_t3903815285::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1959 = { sizeof (U3CStartU3Ec__Iterator2_t1700299370), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1959[4] = 
{
	U3CStartU3Ec__Iterator2_t1700299370::get_offset_of_U24this_0(),
	U3CStartU3Ec__Iterator2_t1700299370::get_offset_of_U24current_1(),
	U3CStartU3Ec__Iterator2_t1700299370::get_offset_of_U24disposing_2(),
	U3CStartU3Ec__Iterator2_t1700299370::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1960 = { sizeof (MouseLook_t2643707144), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1960[8] = 
{
	MouseLook_t2643707144::get_offset_of_axes_2(),
	MouseLook_t2643707144::get_offset_of_sensitivityX_3(),
	MouseLook_t2643707144::get_offset_of_sensitivityY_4(),
	MouseLook_t2643707144::get_offset_of_minimumX_5(),
	MouseLook_t2643707144::get_offset_of_maximumX_6(),
	MouseLook_t2643707144::get_offset_of_minimumY_7(),
	MouseLook_t2643707144::get_offset_of_maximumY_8(),
	MouseLook_t2643707144::get_offset_of_rotationY_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1961 = { sizeof (RotationAxes_t2150291266)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1961[4] = 
{
	RotationAxes_t2150291266::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1962 = { sizeof (BlurEffect_t519166744), -1, sizeof(BlurEffect_t519166744_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1962[4] = 
{
	BlurEffect_t519166744::get_offset_of_iterations_2(),
	BlurEffect_t519166744::get_offset_of_blurSpread_3(),
	BlurEffect_t519166744::get_offset_of_blurShader_4(),
	BlurEffect_t519166744_StaticFields::get_offset_of_m_Material_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1963 = { sizeof (ColorCorrectionEffect_t618837202), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1963[1] = 
{
	ColorCorrectionEffect_t618837202::get_offset_of_textureRamp_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1964 = { sizeof (ContrastStretchEffect_t3732070570), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1964[13] = 
{
	ContrastStretchEffect_t3732070570::get_offset_of_adaptationSpeed_2(),
	ContrastStretchEffect_t3732070570::get_offset_of_limitMinimum_3(),
	ContrastStretchEffect_t3732070570::get_offset_of_limitMaximum_4(),
	ContrastStretchEffect_t3732070570::get_offset_of_adaptRenderTex_5(),
	ContrastStretchEffect_t3732070570::get_offset_of_curAdaptIndex_6(),
	ContrastStretchEffect_t3732070570::get_offset_of_shaderLum_7(),
	ContrastStretchEffect_t3732070570::get_offset_of_m_materialLum_8(),
	ContrastStretchEffect_t3732070570::get_offset_of_shaderReduce_9(),
	ContrastStretchEffect_t3732070570::get_offset_of_m_materialReduce_10(),
	ContrastStretchEffect_t3732070570::get_offset_of_shaderAdapt_11(),
	ContrastStretchEffect_t3732070570::get_offset_of_m_materialAdapt_12(),
	ContrastStretchEffect_t3732070570::get_offset_of_shaderApply_13(),
	ContrastStretchEffect_t3732070570::get_offset_of_m_materialApply_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1965 = { sizeof (GlowEffect_t1329942340), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1965[10] = 
{
	GlowEffect_t1329942340::get_offset_of_glowIntensity_2(),
	GlowEffect_t1329942340::get_offset_of_blurIterations_3(),
	GlowEffect_t1329942340::get_offset_of_blurSpread_4(),
	GlowEffect_t1329942340::get_offset_of_glowTint_5(),
	GlowEffect_t1329942340::get_offset_of_compositeShader_6(),
	GlowEffect_t1329942340::get_offset_of_m_CompositeMaterial_7(),
	GlowEffect_t1329942340::get_offset_of_blurShader_8(),
	GlowEffect_t1329942340::get_offset_of_m_BlurMaterial_9(),
	GlowEffect_t1329942340::get_offset_of_downsampleShader_10(),
	GlowEffect_t1329942340::get_offset_of_m_DownsampleMaterial_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1966 = { sizeof (GrayscaleEffect_t1203934418), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1966[2] = 
{
	GrayscaleEffect_t1203934418::get_offset_of_textureRamp_4(),
	GrayscaleEffect_t1203934418::get_offset_of_rampOffset_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1967 = { sizeof (ImageEffectBase_t898523515), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1967[2] = 
{
	ImageEffectBase_t898523515::get_offset_of_shader_2(),
	ImageEffectBase_t898523515::get_offset_of_m_Material_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1968 = { sizeof (ImageEffects_t2410519413), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1969 = { sizeof (MotionBlur_t1035271213), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1969[3] = 
{
	MotionBlur_t1035271213::get_offset_of_blurAmount_4(),
	MotionBlur_t1035271213::get_offset_of_extraBlur_5(),
	MotionBlur_t1035271213::get_offset_of_accumTexture_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1970 = { sizeof (NoiseEffect_t3733883223), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1970[18] = 
{
	NoiseEffect_t3733883223::get_offset_of_monochrome_2(),
	NoiseEffect_t3733883223::get_offset_of_rgbFallback_3(),
	NoiseEffect_t3733883223::get_offset_of_grainIntensityMin_4(),
	NoiseEffect_t3733883223::get_offset_of_grainIntensityMax_5(),
	NoiseEffect_t3733883223::get_offset_of_grainSize_6(),
	NoiseEffect_t3733883223::get_offset_of_scratchIntensityMin_7(),
	NoiseEffect_t3733883223::get_offset_of_scratchIntensityMax_8(),
	NoiseEffect_t3733883223::get_offset_of_scratchFPS_9(),
	NoiseEffect_t3733883223::get_offset_of_scratchJitter_10(),
	NoiseEffect_t3733883223::get_offset_of_grainTexture_11(),
	NoiseEffect_t3733883223::get_offset_of_scratchTexture_12(),
	NoiseEffect_t3733883223::get_offset_of_shaderRGB_13(),
	NoiseEffect_t3733883223::get_offset_of_shaderYUV_14(),
	NoiseEffect_t3733883223::get_offset_of_m_MaterialRGB_15(),
	NoiseEffect_t3733883223::get_offset_of_m_MaterialYUV_16(),
	NoiseEffect_t3733883223::get_offset_of_scratchTimeLeft_17(),
	NoiseEffect_t3733883223::get_offset_of_scratchX_18(),
	NoiseEffect_t3733883223::get_offset_of_scratchY_19(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1971 = { sizeof (SSAOEffect_t1790065191), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1971[11] = 
{
	SSAOEffect_t1790065191::get_offset_of_m_Radius_2(),
	SSAOEffect_t1790065191::get_offset_of_m_SampleCount_3(),
	SSAOEffect_t1790065191::get_offset_of_m_OcclusionIntensity_4(),
	SSAOEffect_t1790065191::get_offset_of_m_Blur_5(),
	SSAOEffect_t1790065191::get_offset_of_m_Downsampling_6(),
	SSAOEffect_t1790065191::get_offset_of_m_OcclusionAttenuation_7(),
	SSAOEffect_t1790065191::get_offset_of_m_MinZ_8(),
	SSAOEffect_t1790065191::get_offset_of_m_SSAOShader_9(),
	SSAOEffect_t1790065191::get_offset_of_m_SSAOMaterial_10(),
	SSAOEffect_t1790065191::get_offset_of_m_RandomTexture_11(),
	SSAOEffect_t1790065191::get_offset_of_m_Supported_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1972 = { sizeof (SSAOSamples_t2315017899)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1972[4] = 
{
	SSAOSamples_t2315017899::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1973 = { sizeof (SepiaToneEffect_t2695985059), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1974 = { sizeof (TwirlEffect_t2412422509), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1974[3] = 
{
	TwirlEffect_t2412422509::get_offset_of_radius_4(),
	TwirlEffect_t2412422509::get_offset_of_angle_5(),
	TwirlEffect_t2412422509::get_offset_of_center_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1975 = { sizeof (VortexEffect_t3754663651), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1975[3] = 
{
	VortexEffect_t3754663651::get_offset_of_radius_4(),
	VortexEffect_t3754663651::get_offset_of_angle_5(),
	VortexEffect_t3754663651::get_offset_of_center_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1976 = { sizeof (ActivateTrigger_t3138818731), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1976[5] = 
{
	ActivateTrigger_t3138818731::get_offset_of_action_2(),
	ActivateTrigger_t3138818731::get_offset_of_target_3(),
	ActivateTrigger_t3138818731::get_offset_of_source_4(),
	ActivateTrigger_t3138818731::get_offset_of_triggerCount_5(),
	ActivateTrigger_t3138818731::get_offset_of_repeatTrigger_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1977 = { sizeof (Mode_t2987887219)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1977[7] = 
{
	Mode_t2987887219::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1978 = { sizeof (U3CPrivateImplementationDetailsU3E_t1486305142), -1, sizeof(U3CPrivateImplementationDetailsU3E_t1486305142_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1978[7] = 
{
	U3CPrivateImplementationDetailsU3E_t1486305142_StaticFields::get_offset_of_U24fieldU2D51B2AA051AFFF21EBC28102EA2F57BEF007038AE_0(),
	U3CPrivateImplementationDetailsU3E_t1486305142_StaticFields::get_offset_of_U24fieldU2D311441405B64B3EA9097AC8E07F3274962EC6BB4_1(),
	U3CPrivateImplementationDetailsU3E_t1486305142_StaticFields::get_offset_of_U24fieldU2D16E2B412E9C2B8E31B780DE46254349320CCAAA0_2(),
	U3CPrivateImplementationDetailsU3E_t1486305142_StaticFields::get_offset_of_U24fieldU2DD7F443D0D86C2C79F284C1CA7CCCF3C9D9B7B6D8_3(),
	U3CPrivateImplementationDetailsU3E_t1486305142_StaticFields::get_offset_of_U24fieldU2D25B4B83D2A43393F4E18624598DDA694217A6622_4(),
	U3CPrivateImplementationDetailsU3E_t1486305142_StaticFields::get_offset_of_U24fieldU2DFADC743710841EB901D5F6FBC97F555D4BD94310_5(),
	U3CPrivateImplementationDetailsU3E_t1486305142_StaticFields::get_offset_of_U24fieldU2DC34ABF0A6BE7F2D67E7997A058AA0AA6985FFE6F_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1979 = { sizeof (U24ArrayTypeU3D20_t2731437132)+ sizeof (Il2CppObject), sizeof(U24ArrayTypeU3D20_t2731437132 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1980 = { sizeof (U24ArrayTypeU3D12_t1568637718)+ sizeof (Il2CppObject), sizeof(U24ArrayTypeU3D12_t1568637718 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1981 = { sizeof (U24ArrayTypeU3D16_t3894236545)+ sizeof (Il2CppObject), sizeof(U24ArrayTypeU3D16_t3894236545 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1982 = { sizeof (U24ArrayTypeU3D28_t2375206772)+ sizeof (Il2CppObject), sizeof(U24ArrayTypeU3D28_t2375206772 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1983 = { sizeof (U3CModuleU3E_t3783534224), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1984 = { sizeof (CharacterMotorMovement_t944153967), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1984[13] = 
{
	CharacterMotorMovement_t944153967::get_offset_of_maxForwardSpeed_0(),
	CharacterMotorMovement_t944153967::get_offset_of_maxSidewaysSpeed_1(),
	CharacterMotorMovement_t944153967::get_offset_of_maxBackwardsSpeed_2(),
	CharacterMotorMovement_t944153967::get_offset_of_slopeSpeedMultiplier_3(),
	CharacterMotorMovement_t944153967::get_offset_of_maxGroundAcceleration_4(),
	CharacterMotorMovement_t944153967::get_offset_of_maxAirAcceleration_5(),
	CharacterMotorMovement_t944153967::get_offset_of_gravity_6(),
	CharacterMotorMovement_t944153967::get_offset_of_maxFallSpeed_7(),
	CharacterMotorMovement_t944153967::get_offset_of_collisionFlags_8(),
	CharacterMotorMovement_t944153967::get_offset_of_velocity_9(),
	CharacterMotorMovement_t944153967::get_offset_of_frameVelocity_10(),
	CharacterMotorMovement_t944153967::get_offset_of_hitPoint_11(),
	CharacterMotorMovement_t944153967::get_offset_of_lastHitPoint_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1985 = { sizeof (MovementTransferOnJump_t3438008145)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1985[5] = 
{
	MovementTransferOnJump_t3438008145::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1986 = { sizeof (CharacterMotorJumping_t1708272304), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1986[10] = 
{
	CharacterMotorJumping_t1708272304::get_offset_of_enabled_0(),
	CharacterMotorJumping_t1708272304::get_offset_of_baseHeight_1(),
	CharacterMotorJumping_t1708272304::get_offset_of_extraHeight_2(),
	CharacterMotorJumping_t1708272304::get_offset_of_perpAmount_3(),
	CharacterMotorJumping_t1708272304::get_offset_of_steepPerpAmount_4(),
	CharacterMotorJumping_t1708272304::get_offset_of_jumping_5(),
	CharacterMotorJumping_t1708272304::get_offset_of_holdingJumpButton_6(),
	CharacterMotorJumping_t1708272304::get_offset_of_lastStartTime_7(),
	CharacterMotorJumping_t1708272304::get_offset_of_lastButtonDownTime_8(),
	CharacterMotorJumping_t1708272304::get_offset_of_jumpDir_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1987 = { sizeof (CharacterMotorMovingPlatform_t365475463), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1987[11] = 
{
	CharacterMotorMovingPlatform_t365475463::get_offset_of_enabled_0(),
	CharacterMotorMovingPlatform_t365475463::get_offset_of_movementTransfer_1(),
	CharacterMotorMovingPlatform_t365475463::get_offset_of_hitPlatform_2(),
	CharacterMotorMovingPlatform_t365475463::get_offset_of_activePlatform_3(),
	CharacterMotorMovingPlatform_t365475463::get_offset_of_activeLocalPoint_4(),
	CharacterMotorMovingPlatform_t365475463::get_offset_of_activeGlobalPoint_5(),
	CharacterMotorMovingPlatform_t365475463::get_offset_of_activeLocalRotation_6(),
	CharacterMotorMovingPlatform_t365475463::get_offset_of_activeGlobalRotation_7(),
	CharacterMotorMovingPlatform_t365475463::get_offset_of_lastMatrix_8(),
	CharacterMotorMovingPlatform_t365475463::get_offset_of_platformVelocity_9(),
	CharacterMotorMovingPlatform_t365475463::get_offset_of_newPlatform_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1988 = { sizeof (CharacterMotorSliding_t3749388514), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1988[4] = 
{
	CharacterMotorSliding_t3749388514::get_offset_of_enabled_0(),
	CharacterMotorSliding_t3749388514::get_offset_of_slidingSpeed_1(),
	CharacterMotorSliding_t3749388514::get_offset_of_sidewaysControl_2(),
	CharacterMotorSliding_t3749388514::get_offset_of_speedControl_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1989 = { sizeof (CharacterMotor_t262030084), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1989[13] = 
{
	CharacterMotor_t262030084::get_offset_of_canControl_2(),
	CharacterMotor_t262030084::get_offset_of_useFixedUpdate_3(),
	CharacterMotor_t262030084::get_offset_of_inputMoveDirection_4(),
	CharacterMotor_t262030084::get_offset_of_inputJump_5(),
	CharacterMotor_t262030084::get_offset_of_movement_6(),
	CharacterMotor_t262030084::get_offset_of_jumping_7(),
	CharacterMotor_t262030084::get_offset_of_movingPlatform_8(),
	CharacterMotor_t262030084::get_offset_of_sliding_9(),
	CharacterMotor_t262030084::get_offset_of_grounded_10(),
	CharacterMotor_t262030084::get_offset_of_groundNormal_11(),
	CharacterMotor_t262030084::get_offset_of_lastGroundNormal_12(),
	CharacterMotor_t262030084::get_offset_of_tr_13(),
	CharacterMotor_t262030084::get_offset_of_controller_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1990 = { sizeof (U24SubtractNewPlatformVelocityU2460_t433699697), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1990[1] = 
{
	U24SubtractNewPlatformVelocityU2460_t433699697::get_offset_of_U24self_U2463_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1991 = { sizeof (U24_t3795311220), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1991[2] = 
{
	U24_t3795311220::get_offset_of_U24platformU2461_2(),
	U24_t3795311220::get_offset_of_U24self_U2462_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1992 = { sizeof (FPSInputController_t4241249601), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1992[1] = 
{
	FPSInputController_t4241249601::get_offset_of_motor_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1993 = { sizeof (PlatformInputController_t4273899755), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1993[3] = 
{
	PlatformInputController_t4273899755::get_offset_of_autoRotate_2(),
	PlatformInputController_t4273899755::get_offset_of_maxRotationSpeed_3(),
	PlatformInputController_t4273899755::get_offset_of_motor_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1994 = { sizeof (ThirdPersonCamera_t2751132817), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1994[18] = 
{
	ThirdPersonCamera_t2751132817::get_offset_of_cameraTransform_2(),
	ThirdPersonCamera_t2751132817::get_offset_of__target_3(),
	ThirdPersonCamera_t2751132817::get_offset_of_distance_4(),
	ThirdPersonCamera_t2751132817::get_offset_of_height_5(),
	ThirdPersonCamera_t2751132817::get_offset_of_angularSmoothLag_6(),
	ThirdPersonCamera_t2751132817::get_offset_of_angularMaxSpeed_7(),
	ThirdPersonCamera_t2751132817::get_offset_of_heightSmoothLag_8(),
	ThirdPersonCamera_t2751132817::get_offset_of_snapSmoothLag_9(),
	ThirdPersonCamera_t2751132817::get_offset_of_snapMaxSpeed_10(),
	ThirdPersonCamera_t2751132817::get_offset_of_clampHeadPositionScreenSpace_11(),
	ThirdPersonCamera_t2751132817::get_offset_of_lockCameraTimeout_12(),
	ThirdPersonCamera_t2751132817::get_offset_of_headOffset_13(),
	ThirdPersonCamera_t2751132817::get_offset_of_centerOffset_14(),
	ThirdPersonCamera_t2751132817::get_offset_of_heightVelocity_15(),
	ThirdPersonCamera_t2751132817::get_offset_of_angleVelocity_16(),
	ThirdPersonCamera_t2751132817::get_offset_of_snap_17(),
	ThirdPersonCamera_t2751132817::get_offset_of_controller_18(),
	ThirdPersonCamera_t2751132817::get_offset_of_targetHeight_19(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1995 = { sizeof (CharacterState_t1314841520)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1995[6] = 
{
	CharacterState_t1314841520::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1996 = { sizeof (ThirdPersonController_t1841729452), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1996[40] = 
{
	ThirdPersonController_t1841729452::get_offset_of_idleAnimation_2(),
	ThirdPersonController_t1841729452::get_offset_of_walkAnimation_3(),
	ThirdPersonController_t1841729452::get_offset_of_runAnimation_4(),
	ThirdPersonController_t1841729452::get_offset_of_jumpPoseAnimation_5(),
	ThirdPersonController_t1841729452::get_offset_of_walkMaxAnimationSpeed_6(),
	ThirdPersonController_t1841729452::get_offset_of_trotMaxAnimationSpeed_7(),
	ThirdPersonController_t1841729452::get_offset_of_runMaxAnimationSpeed_8(),
	ThirdPersonController_t1841729452::get_offset_of_jumpAnimationSpeed_9(),
	ThirdPersonController_t1841729452::get_offset_of_landAnimationSpeed_10(),
	ThirdPersonController_t1841729452::get_offset_of__animation_11(),
	ThirdPersonController_t1841729452::get_offset_of__characterState_12(),
	ThirdPersonController_t1841729452::get_offset_of_walkSpeed_13(),
	ThirdPersonController_t1841729452::get_offset_of_trotSpeed_14(),
	ThirdPersonController_t1841729452::get_offset_of_runSpeed_15(),
	ThirdPersonController_t1841729452::get_offset_of_inAirControlAcceleration_16(),
	ThirdPersonController_t1841729452::get_offset_of_jumpHeight_17(),
	ThirdPersonController_t1841729452::get_offset_of_gravity_18(),
	ThirdPersonController_t1841729452::get_offset_of_speedSmoothing_19(),
	ThirdPersonController_t1841729452::get_offset_of_rotateSpeed_20(),
	ThirdPersonController_t1841729452::get_offset_of_trotAfterSeconds_21(),
	ThirdPersonController_t1841729452::get_offset_of_canJump_22(),
	ThirdPersonController_t1841729452::get_offset_of_jumpRepeatTime_23(),
	ThirdPersonController_t1841729452::get_offset_of_jumpTimeout_24(),
	ThirdPersonController_t1841729452::get_offset_of_groundedTimeout_25(),
	ThirdPersonController_t1841729452::get_offset_of_lockCameraTimer_26(),
	ThirdPersonController_t1841729452::get_offset_of_moveDirection_27(),
	ThirdPersonController_t1841729452::get_offset_of_verticalSpeed_28(),
	ThirdPersonController_t1841729452::get_offset_of_moveSpeed_29(),
	ThirdPersonController_t1841729452::get_offset_of_collisionFlags_30(),
	ThirdPersonController_t1841729452::get_offset_of_jumping_31(),
	ThirdPersonController_t1841729452::get_offset_of_jumpingReachedApex_32(),
	ThirdPersonController_t1841729452::get_offset_of_movingBack_33(),
	ThirdPersonController_t1841729452::get_offset_of_isMoving_34(),
	ThirdPersonController_t1841729452::get_offset_of_walkTimeStart_35(),
	ThirdPersonController_t1841729452::get_offset_of_lastJumpButtonTime_36(),
	ThirdPersonController_t1841729452::get_offset_of_lastJumpTime_37(),
	ThirdPersonController_t1841729452::get_offset_of_lastJumpStartHeight_38(),
	ThirdPersonController_t1841729452::get_offset_of_inAirVelocity_39(),
	ThirdPersonController_t1841729452::get_offset_of_lastGroundedTime_40(),
	ThirdPersonController_t1841729452::get_offset_of_isControllable_41(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1997 = { sizeof (AmbientObscurance_t4277448813), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1997[8] = 
{
	AmbientObscurance_t4277448813::get_offset_of_intensity_5(),
	AmbientObscurance_t4277448813::get_offset_of_radius_6(),
	AmbientObscurance_t4277448813::get_offset_of_blurIterations_7(),
	AmbientObscurance_t4277448813::get_offset_of_blurFilterDistance_8(),
	AmbientObscurance_t4277448813::get_offset_of_downsample_9(),
	AmbientObscurance_t4277448813::get_offset_of_rand_10(),
	AmbientObscurance_t4277448813::get_offset_of_aoShader_11(),
	AmbientObscurance_t4277448813::get_offset_of_aoMaterial_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1998 = { sizeof (AAMode_t3182714109)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1998[8] = 
{
	AAMode_t3182714109::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1999 = { sizeof (AntialiasingAsPostEffect_t2974095527), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1999[22] = 
{
	AntialiasingAsPostEffect_t2974095527::get_offset_of_mode_5(),
	AntialiasingAsPostEffect_t2974095527::get_offset_of_showGeneratedNormals_6(),
	AntialiasingAsPostEffect_t2974095527::get_offset_of_offsetScale_7(),
	AntialiasingAsPostEffect_t2974095527::get_offset_of_blurRadius_8(),
	AntialiasingAsPostEffect_t2974095527::get_offset_of_edgeThresholdMin_9(),
	AntialiasingAsPostEffect_t2974095527::get_offset_of_edgeThreshold_10(),
	AntialiasingAsPostEffect_t2974095527::get_offset_of_edgeSharpness_11(),
	AntialiasingAsPostEffect_t2974095527::get_offset_of_dlaaSharp_12(),
	AntialiasingAsPostEffect_t2974095527::get_offset_of_ssaaShader_13(),
	AntialiasingAsPostEffect_t2974095527::get_offset_of_ssaa_14(),
	AntialiasingAsPostEffect_t2974095527::get_offset_of_dlaaShader_15(),
	AntialiasingAsPostEffect_t2974095527::get_offset_of_dlaa_16(),
	AntialiasingAsPostEffect_t2974095527::get_offset_of_nfaaShader_17(),
	AntialiasingAsPostEffect_t2974095527::get_offset_of_nfaa_18(),
	AntialiasingAsPostEffect_t2974095527::get_offset_of_shaderFXAAPreset2_19(),
	AntialiasingAsPostEffect_t2974095527::get_offset_of_materialFXAAPreset2_20(),
	AntialiasingAsPostEffect_t2974095527::get_offset_of_shaderFXAAPreset3_21(),
	AntialiasingAsPostEffect_t2974095527::get_offset_of_materialFXAAPreset3_22(),
	AntialiasingAsPostEffect_t2974095527::get_offset_of_shaderFXAAII_23(),
	AntialiasingAsPostEffect_t2974095527::get_offset_of_materialFXAAII_24(),
	AntialiasingAsPostEffect_t2974095527::get_offset_of_shaderFXAAIII_25(),
	AntialiasingAsPostEffect_t2974095527::get_offset_of_materialFXAAIII_26(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
