#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/FXColorCorrectionBehaviour_Struct_2_52AD02145F5FCE3A_22.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Rendering/Universal/FXColorCorrection_FxScreenLightMode.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Gradient; }
namespace UnityEngine::Rendering::Universal { class FXColorCorrection; }
namespace UnityEngine::Rendering::Universal { class WeatherConfigScriptableObject; }

#define MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x9ACF9E0)
#define MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x9ADB790)
#define MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET UNITYSDK_OFFSET(0x9ADB7B0)
#define MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET UNITYSDK_OFFSET(0x9ADB7A0)
#define MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET UNITYSDK_OFFSET(0x9ADB780)
#define MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_METHOD_4_D2435584F0C6BA4D_OFFSET UNITYSDK_OFFSET(0x9AD0B20)
#define MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_METHOD_4_F53BAAE38A584428_OFFSET UNITYSDK_OFFSET(0x9AD17A0)
#define MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x9AD0EE0)
#define MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x9AD7E60)
#define MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x9AD8790)
#define MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x9ADB3F0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int FXColorCorrectionBehaviour_TypeDefinitionIndex = 66491;

	class FXColorCorrectionBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::FXColorCorrectionBehaviour_Struct_2_52AD02145F5FCE3A_22 _methodParm; // 0x18
		::System::Boolean enabled; // 0x368
		::System::Boolean active_postExposure; // 0x369
		::System::Boolean use_postExposure; // 0x36A
		::System::Single postExposure; // 0x36C
		::System::Boolean active_contrast; // 0x370
		::System::Boolean use_contrast; // 0x371
		::System::Single contrast; // 0x374
		::System::Boolean active_saturation; // 0x378
		::System::Boolean use_saturation; // 0x379
		::System::Single saturation; // 0x37C
		::System::Boolean active_gamma; // 0x380
		::System::Boolean use_gamma; // 0x381
		::System::Single gamma; // 0x384
		::System::Boolean active_lutInvert; // 0x388
		::System::Boolean use_lutInvert; // 0x389
		::System::Boolean lutInvert; // 0x38A
		::System::Boolean active_lutToneColors; // 0x38B
		::System::Boolean use_lutToneColors; // 0x38C
		::System::Boolean lutToneColors; // 0x38D
		::System::Boolean active_lutToneA; // 0x38E
		::System::Boolean use_lutToneA; // 0x38F
		::UnityEngine::Color lutToneA; // 0x390
		::System::Boolean active_lutToneB; // 0x3A0
		::System::Boolean use_lutToneB; // 0x3A1
		::UnityEngine::Color lutToneB; // 0x3A4
		::System::Boolean active_lutMiddlePoint; // 0x3B4
		::System::Boolean use_lutMiddlePoint; // 0x3B5
		::System::Single lutMiddlePoint; // 0x3B8
		::System::Boolean active_lutSoftness; // 0x3BC
		::System::Boolean use_lutSoftness; // 0x3BD
		::System::Single lutSoftness; // 0x3C0
		::System::Boolean active_desaturate; // 0x3C4
		::System::Boolean use_desaturate; // 0x3C5
		::System::Single desaturate; // 0x3C8
		::System::Boolean active_invert; // 0x3CC
		::System::Boolean use_invert; // 0x3CD
		::System::Boolean invert; // 0x3CE
		::System::Boolean active_toneColors; // 0x3CF
		::System::Boolean use_toneColors; // 0x3D0
		::System::Boolean toneColors; // 0x3D1
		::System::Boolean active_toneA; // 0x3D2
		::System::Boolean use_toneA; // 0x3D3
		::UnityEngine::Color toneA; // 0x3D4
		::System::Boolean active_toneB; // 0x3E4
		::System::Boolean use_toneB; // 0x3E5
		::UnityEngine::Color toneB; // 0x3E8
		::System::Boolean active_middlePoint; // 0x3F8
		::System::Boolean use_middlePoint; // 0x3F9
		::System::Single middlePoint; // 0x3FC
		::System::Boolean active_softness; // 0x400
		::System::Boolean use_softness; // 0x401
		::System::Single softness; // 0x404
		::System::Boolean active_fxFogMaskPassOn; // 0x408
		::System::Boolean use_fxFogMaskPassOn; // 0x409
		::System::Boolean fxFogMaskPassOn; // 0x40A
		::System::Boolean active_justControlParticleLight; // 0x40B
		::System::Boolean use_justControlParticleLight; // 0x40C
		::System::Boolean justControlParticleLight; // 0x40D
		::System::Boolean active_localLightMultiplyIntensity; // 0x40E
		::System::Boolean use_localLightMultiplyIntensity; // 0x40F
		::System::Single localLightMultiplyIntensity; // 0x410
		::System::Boolean active_localLightThreadHold; // 0x414
		::System::Boolean use_localLightThreadHold; // 0x415
		::System::Single localLightThreadHold; // 0x418
		::System::Boolean active_skyVerticalGradient; // 0x41C
		::System::Boolean use_skyVerticalGradient; // 0x41D
		::UnityEngine::Gradient* skyVerticalGradient; // 0x420
		::System::Boolean active_enableLightShaft; // 0x428
		::System::Boolean use_enableLightShaft; // 0x429
		::System::Boolean enableLightShaft; // 0x42A
		::System::Boolean active_lightShaftThreshold; // 0x42B
		::System::Boolean use_lightShaftThreshold; // 0x42C
		::System::Single lightShaftThreshold; // 0x430
		::System::Boolean active_lightShaftIntensity; // 0x434
		::System::Boolean use_lightShaftIntensity; // 0x435
		::System::Single lightShaftIntensity; // 0x438
		::System::Boolean active_lightShaftColorClamp; // 0x43C
		::System::Boolean use_lightShaftColorClamp; // 0x43D
		::System::Boolean lightShaftColorClamp; // 0x43E
		::System::Boolean active_lightShaftColor; // 0x43F
		::System::Boolean use_lightShaftColor; // 0x440
		::UnityEngine::Color lightShaftColor; // 0x444
		::System::Boolean active_lightShaftLength; // 0x454
		::System::Boolean use_lightShaftLength; // 0x455
		::System::Single lightShaftLength; // 0x458
		::System::Boolean active_lightShaftFadeLength; // 0x45C
		::System::Boolean use_lightShaftFadeLength; // 0x45D
		::System::Single lightShaftFadeLength; // 0x460
		::System::Boolean active_lightShaftBlur; // 0x464
		::System::Boolean use_lightShaftBlur; // 0x465
		::System::Boolean lightShaftBlur; // 0x466
		::System::Boolean active_fxScreenLightMaskOn; // 0x467
		::System::Boolean use_fxScreenLightMaskOn; // 0x468
		::System::Boolean fxScreenLightMaskOn; // 0x469
		::System::Boolean active_fxFxScreenLightMode; // 0x46A
		::System::Boolean use_fxFxScreenLightMode; // 0x46B
		::UnityEngine::Rendering::Universal::FXColorCorrection_FxScreenLightMode fxFxScreenLightMode; // 0x46C
		::System::Boolean active_fxLightShaftMaskOn; // 0x470
		::System::Boolean use_fxLightShaftMaskOn; // 0x471
		::System::Boolean fxLightShaftMaskOn; // 0x472
		::System::Boolean active_enableCameraClip; // 0x473
		::System::Boolean use_enableCameraClip; // 0x474
		::System::Boolean enableCameraClip; // 0x475
		::System::Boolean active_cameraClipDistance; // 0x476
		::System::Boolean use_cameraClipDistance; // 0x477
		::System::Single cameraClipDistance; // 0x478
		::System::Boolean active_sceneSpecialPPSEffectIntensity; // 0x47C
		::System::Boolean use_sceneSpecialPPSEffectIntensity; // 0x47D
		::System::Single sceneSpecialPPSEffectIntensity; // 0x480
		::System::Boolean active_sceneSpecialSkySaturation; // 0x484
		::System::Boolean use_sceneSpecialSkySaturation; // 0x485
		::System::Single sceneSpecialSkySaturation; // 0x488
		::System::Boolean active_sceneSpecialPPSIgnoreRidus; // 0x48C
		::System::Boolean use_sceneSpecialPPSIgnoreRidus; // 0x48D
		::System::Single sceneSpecialPPSIgnoreRidus; // 0x490
		::System::Boolean active_sceneSpecialPPSRadiusAlphaPow; // 0x494
		::System::Boolean use_sceneSpecialPPSRadiusAlphaPow; // 0x495
		::System::Single sceneSpecialPPSRadiusAlphaPow; // 0x498
		::System::Boolean active_sceneSpecialPPSEmissionColor; // 0x49C
		::System::Boolean use_sceneSpecialPPSEmissionColor; // 0x49D
		::UnityEngine::Color sceneSpecialPPSEmissionColor; // 0x4A0
		::System::Boolean active_cameraClipExtension; // 0x4B0
		::System::Boolean use_cameraClipExtension; // 0x4B1
		::UnityEngine::Vector3 cameraClipExtension; // 0x4B4
		::System::Boolean active_cameraClipAlpha; // 0x4C0
		::System::Boolean use_cameraClipAlpha; // 0x4C1
		::System::Single cameraClipAlpha; // 0x4C4
		::System::Boolean active_weatherConfig; // 0x4C8
		::System::Boolean use_weatherConfig; // 0x4C9
		::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject* weatherConfig; // 0x4D0
		::System::Boolean active_weatherConfigWeight; // 0x4D8
		::System::Boolean use_weatherConfigWeight; // 0x4D9
		::System::Single weatherConfigWeight; // 0x4DC
		::System::Boolean active_fxScreenLightColor; // 0x4E0
		::System::Boolean use_fxScreenLightColor; // 0x4E1
		::UnityEngine::Color fxScreenLightColor; // 0x4E4
		::System::Boolean active_overrideWeatherConfig; // 0x4F4
		::System::Boolean use_overrideWeatherConfig; // 0x4F5
		::System::Boolean overrideWeatherConfig; // 0x4F6
		::System::Boolean active_rainDropColor; // 0x4F7
		::System::Boolean use_rainDropColor; // 0x4F8
		::UnityEngine::Color rainDropColor; // 0x4FC
		::System::Boolean active_wetnessNoiseClamp; // 0x50C
		::System::Boolean use_wetnessNoiseClamp; // 0x50D
		::UnityEngine::Vector2 wetnessNoiseClamp; // 0x510
		::System::Boolean active_rainDropSplashColor; // 0x518
		::System::Boolean use_rainDropSplashColor; // 0x519
		::UnityEngine::Color rainDropSplashColor; // 0x51C
		::System::Boolean active_rainDropSplashCount; // 0x52C
		::System::Boolean use_rainDropSplashCount; // 0x52D
		::System::Int32 rainDropSplashCount; // 0x530
		::System::Boolean active_distanceFogStart; // 0x534
		::System::Boolean use_distanceFogStart; // 0x535
		::System::Single distanceFogStart; // 0x538
		::System::Boolean active_fogHorizontalGradient; // 0x53C
		::System::Boolean use_fogHorizontalGradient; // 0x53D
		::UnityEngine::Gradient* fogHorizontalGradient; // 0x540
		::System::Boolean active_heightFogHeight; // 0x548
		::System::Boolean use_heightFogHeight; // 0x549
		::System::Single heightFogHeight; // 0x54C
		::System::Boolean active_heightFogStart; // 0x550
		::System::Boolean use_heightFogStart; // 0x551
		::System::Single heightFogStart; // 0x554
		::System::Boolean active_volumetricFogColor; // 0x558
		::System::Boolean use_volumetricFogColor; // 0x559
		::UnityEngine::Color volumetricFogColor; // 0x55C
		::System::Boolean active_skyHorizontalGradient; // 0x56C
		::System::Boolean use_skyHorizontalGradient; // 0x56D
		::UnityEngine::Gradient* skyHorizontalGradient; // 0x570
		::System::Boolean active_skyHorizontalHeight; // 0x578
		::System::Boolean use_skyHorizontalHeight; // 0x579
		::System::Single skyHorizontalHeight; // 0x57C
		::System::Boolean active_skyHorizontalOffset; // 0x580
		::System::Boolean use_skyHorizontalOffset; // 0x581
		::System::Single skyHorizontalOffset; // 0x584
		::System::Boolean active_skyCloudHorizontalGradient; // 0x588
		::System::Boolean use_skyCloudHorizontalGradient; // 0x589
		::UnityEngine::Gradient* skyCloudHorizontalGradient; // 0x590
		::System::Boolean active_sunDiscColor; // 0x598
		::System::Boolean use_sunDiscColor; // 0x599
		::UnityEngine::Color sunDiscColor; // 0x59C
		::System::Boolean active_layer1MiddleCloudGradient; // 0x5AC
		::System::Boolean use_layer1MiddleCloudGradient; // 0x5AD
		::UnityEngine::Gradient* layer1MiddleCloudGradient; // 0x5B0
		::System::Boolean active_layer1CloudAroundSunColor; // 0x5B8
		::System::Boolean use_layer1CloudAroundSunColor; // 0x5B9
		::UnityEngine::Color layer1CloudAroundSunColor; // 0x5BC
		::System::Boolean active_layer2MiddleCloudGradient; // 0x5CC
		::System::Boolean use_layer2MiddleCloudGradient; // 0x5CD
		::UnityEngine::Gradient* layer2MiddleCloudGradient; // 0x5D0
		::System::Boolean active_layer2CloudAroundSunColor; // 0x5D8
		::System::Boolean use_layer2CloudAroundSunColor; // 0x5D9
		::UnityEngine::Color layer2CloudAroundSunColor; // 0x5DC
		::System::Boolean active_layer3MiddleCloudGradient; // 0x5EC
		::System::Boolean use_layer3MiddleCloudGradient; // 0x5ED
		::UnityEngine::Gradient* layer3MiddleCloudGradient; // 0x5F0
		::System::Boolean active_layer3CloudAroundSunColor; // 0x5F8
		::System::Boolean use_layer3CloudAroundSunColor; // 0x5F9
		::UnityEngine::Color layer3CloudAroundSunColor; // 0x5FC
		::System::Boolean active_sceneLutContribution; // 0x60C
		::System::Boolean use_sceneLutContribution; // 0x60D
		::System::Single sceneLutContribution; // 0x610
		::System::Boolean active_ambientSkyColor; // 0x614
		::System::Boolean use_ambientSkyColor; // 0x615
		::UnityEngine::Color ambientSkyColor; // 0x618
		::System::Boolean active_ambientEquatorColor; // 0x628
		::System::Boolean use_ambientEquatorColor; // 0x629
		::UnityEngine::Color ambientEquatorColor; // 0x62C
		::System::Boolean active_ambientGroundColor; // 0x63C
		::System::Boolean use_ambientGroundColor; // 0x63D
		::UnityEngine::Color ambientGroundColor; // 0x640
		::System::Boolean active_overrideWeatherGIConfig; // 0x650
		::System::Boolean use_overrideWeatherGIConfig; // 0x651
		::System::Boolean overrideWeatherGIConfig; // 0x652
		::System::Boolean active_skyColor; // 0x653
		::System::Boolean use_skyColor; // 0x654
		::UnityEngine::Color skyColor; // 0x658
		::System::Boolean active_middleColor; // 0x668
		::System::Boolean use_middleColor; // 0x669
		::UnityEngine::Color middleColor; // 0x66C
		::System::Boolean active_groundColor; // 0x67C
		::System::Boolean use_groundColor; // 0x67D
		::UnityEngine::Color groundColor; // 0x680
		::System::Boolean active_indirectSpecularIntensity; // 0x690
		::System::Boolean use_indirectSpecularIntensity; // 0x691
		::System::Single indirectSpecularIntensity; // 0x694
		::System::Boolean active_fxColorSaturation; // 0x698
		::System::Boolean use_fxColorSaturation; // 0x699
		::System::Single fxColorSaturation; // 0x69C
		::System::Boolean active_lightShaftUseCustomCenter; // 0x6A0
		::System::Boolean use_lightShaftUseCustomCenter; // 0x6A1
		::System::Boolean lightShaftUseCustomCenter; // 0x6A2
		::System::Boolean active_lightShaftCustomCenter; // 0x6A3
		::System::Boolean use_lightShaftCustomCenter; // 0x6A4
		::UnityEngine::Vector2 lightShaftCustomCenter; // 0x6A8
		::UnityEngine::Rendering::Universal::FXColorCorrection* _FXColorCorrection; // 0x6B0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1);
		}

		::System::Void SetValue(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_SETVALUE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Rendering::Universal::FXColorCorrection* Method_4_D2435584F0C6BA4D(::System::Object* a1)
		{
			return ((::UnityEngine::Rendering::Universal::FXColorCorrection*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_METHOD_4_D2435584F0C6BA4D_OFFSET))(this, a1);
		}

		::System::Void Method_4_B072873681D4192B(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET))(this, a1);
		}

		::System::Void Method_4_F53BAAE38A584428()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_METHOD_4_F53BAAE38A584428_OFFSET))(this);
		}

		::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
		}

		::System::Void Method_4_B072873681D4192B_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET))(this, a1);
		}

		::System::Void Method_4_63F7844DC2D57F6C(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET))(this, a1, a2);
		}
	};
}
