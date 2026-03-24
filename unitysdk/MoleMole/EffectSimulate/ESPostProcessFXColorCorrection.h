#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESPostProcessBehavior_1.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rendering/Universal/FXColorCorrection_FxScreenLightMode.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole::Config { class ConfigEntityFXColorCorrections; }
namespace MoleMole::Config { class ConfigEntityScreenEffectBase; }
namespace MoleMole::EffectSimulate { class BoolKeyframeCurve; }
namespace MoleMole::EffectSimulate { class ColorKeyframeCurve; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace MoleMole::EffectSimulate { class Vector2KeyframeCurve; }
namespace MoleMole::EffectSimulate { class Vector3KeyframeCurve; }
namespace MoleMole::EffectSimulate { class Vector4KeyframeCurve; }
namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class Gradient; }
namespace UnityEngine { class ScriptableObject; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class FXColorCorrection; }
namespace UnityEngine::Rendering::Universal { class WeatherConfigScriptableObject; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0xA378C00)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_1682247A40B81983_OFFSET UNITYSDK_OFFSET(0xF2F4CC0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_25CD86BF8626C8D9_OFFSET UNITYSDK_OFFSET(0xF2F2710)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xA378B70)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0xF2EB810)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_3622C2D1E940D3F4_OFFSET UNITYSDK_OFFSET(0xA378CF0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0xA378D60)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xA3747B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_429B9EF3AD5C70EB_OFFSET UNITYSDK_OFFSET(0xA3746B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_43069389B18F0936_OFFSET UNITYSDK_OFFSET(0xA374570)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_46737F85CDB5E497_1_OFFSET UNITYSDK_OFFSET(0xA36E0B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_46737F85CDB5E497_OFFSET UNITYSDK_OFFSET(0xA3698F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_4ED0F9748169EC7E_OFFSET UNITYSDK_OFFSET(0xA374A90)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_4FB5F56430673EA6_1_OFFSET UNITYSDK_OFFSET(0xA374980)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0xA374900)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_54BEE211D32F7DEF_OFFSET UNITYSDK_OFFSET(0xA378B60)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_55D8CF5F1FB0803A_OFFSET UNITYSDK_OFFSET(0xA378AE0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_581A5078A2F29034_OFFSET UNITYSDK_OFFSET(0xA378AF0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_63D56313608AFE32_OFFSET UNITYSDK_OFFSET(0xA372FE0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0xF2EADF0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_6BA7BB45F0BA72F4_OFFSET UNITYSDK_OFFSET(0xA375100)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_76ECC59BC7430042_1_OFFSET UNITYSDK_OFFSET(0xA376A70)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_76ECC59BC7430042_OFFSET UNITYSDK_OFFSET(0xA374AF0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0xA378C70)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_88B60F3B95FAA4F1_1_OFFSET UNITYSDK_OFFSET(0xA374810)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_88B60F3B95FAA4F1_2_OFFSET UNITYSDK_OFFSET(0xA374A00)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0xA374720)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_8D6879CAA76F6588_OFFSET UNITYSDK_OFFSET(0xA372870)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_A1D8CD775DEC3C21_1_OFFSET UNITYSDK_OFFSET(0xA378B00)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xA3748A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_A99467CE9479C990_1_OFFSET UNITYSDK_OFFSET(0xA378D10)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_A99467CE9479C990_OFFSET UNITYSDK_OFFSET(0xA378BF0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_B2C24AFA396A3C80_OFFSET UNITYSDK_OFFSET(0xA372ED0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_B4596DBEA209120C_OFFSET UNITYSDK_OFFSET(0xA378D00)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_BE3471DF7E3D4326_OFFSET UNITYSDK_OFFSET(0xA378D20)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_BEB6D3AE6B2F04A5_OFFSET UNITYSDK_OFFSET(0xA362330)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xA378C90)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xF2EB7B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_D2A9D107FA1E5A31_OFFSET UNITYSDK_OFFSET(0xA374640)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_D5F190FE5CE966B3_OFFSET UNITYSDK_OFFSET(0xA378BE0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0xA378C10)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_E7F1AECA7CFF8AAD_1_OFFSET UNITYSDK_OFFSET(0xA378DC0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0xA378C80)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_F53BAAE38A584428_OFFSET UNITYSDK_OFFSET(0xF2EC730)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION__CTOR_OFFSET UNITYSDK_OFFSET(0xA377080)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessFXColorCorrection_TypeDefinitionIndex = 76129;

	class ESPostProcessFXColorCorrection : public ::MoleMole::EffectSimulate::ESPostProcessBehavior_1<::UnityEngine::Rendering::Universal::FXColorCorrection*>
	{
	public:
		::MoleMole::Config::ConfigEntityFXColorCorrections* m_stAsset; // 0xB0
		::System::Single _DefaultWeatherConfigWeight; // 0xB8
		::System::Single _DefaultPostExposure; // 0xBC
		::System::Single _DefaultContrast; // 0xC0
		::System::Single _DefaultSaturation; // 0xC4
		::System::Single _DefaultGamma; // 0xC8
		::System::Boolean _DefaultLutInvert; // 0xCC
		::System::Boolean _DefaultLutToneColors; // 0xCD
		::UnityEngine::Color _DefaultLutToneA; // 0xD0
		::UnityEngine::Color _DefaultLutToneB; // 0xE0
		::System::Single _DefaultLutMiddlePoint; // 0xF0
		::System::Single _DefaultLutSoftness; // 0xF4
		::System::Single _DefaultDesaturate; // 0xF8
		::System::Boolean _DefaultInvert; // 0xFC
		::System::Boolean _DefaultToneColors; // 0xFD
		::UnityEngine::Color _DefaultToneA; // 0x100
		::UnityEngine::Color _DefaultToneB; // 0x110
		::System::Single _DefaultMiddlePoint; // 0x120
		::System::Single _DefaultSoftness; // 0x124
		::System::Boolean _DefaultFxFogMaskPassOn; // 0x128
		::System::Single _DefaultFxColorSaturation; // 0x12C
		::System::Boolean _VolDefault_enableCameraClip; // 0x130
		::System::Single _VolDefault_cameraClipDistance; // 0x134
		::UnityEngine::Vector3 _VolDefault_cameraClipExtension; // 0x138
		::System::Single _VolDefault_cameraClipAlpha; // 0x144
		::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject* _VolDefault_weatherConfig; // 0x148
		::System::Single _VolDefault_weatherConfigWeight; // 0x150
		::System::Boolean _VolDefault_fxLightShaftMaskOn; // 0x154
		::UnityEngine::Rendering::Universal::FXColorCorrection_FxScreenLightMode _VolDefault_fxFxScreenLightMode; // 0x158
		::UnityEngine::Color _VolDefault_fxScreenLightColor; // 0x15C
		::System::Boolean _VolDefault_fxScreenLightMaskOn; // 0x16C
		::System::Single _VolDefault_sceneSpecialPPSEffectIntensity; // 0x170
		::System::Boolean _VolDefault_sceneSpecialPPSOverrideWeatherGBufferSaturation; // 0x174
		::System::Single _VolDefault_sceneSpecialPPSGBufferSaturation; // 0x178
		::System::Boolean _VolDefault_sceneSpecialPPSUseSaturationLut; // 0x17C
		::UnityEngine::Texture* _VolDefault_sceneSpecialPPSSaturationLut; // 0x180
		::UnityEngine::Vector4 _VolDefault_sceneSpecialPPSSaturationRampGap; // 0x188
		::UnityEngine::Vector4 _VolDefault_sceneSpecialPPSSaturationRampValue; // 0x198
		::UnityEngine::Vector4 _VolDefault_sceneSpecialPPSSaturationRampGap2; // 0x1A8
		::UnityEngine::Vector4 _VolDefault_sceneSpecialPPSSaturationRampValue2; // 0x1B8
		::UnityEngine::Vector4 _VolDefault_sceneSpecialPPSSaturationRampGap3; // 0x1C8
		::UnityEngine::Vector4 _VolDefault_sceneSpecialPPSSaturationRampValue3; // 0x1D8
		::System::Boolean _VolDefault_applySaturationLutToUberPost; // 0x1E8
		::System::Single _VolDefault_sceneSpecialPPSIgnoreRidus; // 0x1EC
		::System::Single _VolDefault_sceneSpecialPPSRadiusAlphaPow; // 0x1F0
		::UnityEngine::Color _VolDefault_sceneSpecialPPSEmissionColor; // 0x1F4
		::System::Single _VolDefault_sceneSpecialSkySaturation; // 0x204
		::System::Boolean _VolDefault_ForceUseMsaa; // 0x208
		::System::Single _VolDefault_postExposure; // 0x20C
		::System::Single _VolDefault_contrast; // 0x210
		::System::Single _VolDefault_saturation; // 0x214
		::System::Single _VolDefault_gamma; // 0x218
		::System::Boolean _VolDefault_lutInvert; // 0x21C
		::System::Boolean _VolDefault_lutToneColors; // 0x21D
		::UnityEngine::Color _VolDefault_lutToneA; // 0x220
		::UnityEngine::Color _VolDefault_lutToneB; // 0x230
		::System::Single _VolDefault_lutMiddlePoint; // 0x240
		::System::Single _VolDefault_lutSoftness; // 0x244
		::System::Single _VolDefault_desaturate; // 0x248
		::System::Boolean _VolDefault_invert; // 0x24C
		::System::Boolean _VolDefault_toneColors; // 0x24D
		::UnityEngine::Color _VolDefault_toneA; // 0x250
		::UnityEngine::Color _VolDefault_toneB; // 0x260
		::System::Single _VolDefault_middlePoint; // 0x270
		::System::Single _VolDefault_softness; // 0x274
		::System::Boolean _VolDefault_fxFogMaskPassOn; // 0x278
		::System::Single _VolDefault_fxColorSaturation; // 0x27C
		::System::Boolean _VolDefault_justControlParticleLight; // 0x280
		::System::Single _VolDefault_localLightMultiplyIntensity; // 0x284
		::System::Single _VolDefault_localLightThreadHold; // 0x288
		::System::Single _VolDefault_indirectSpecularIntensity; // 0x28C
		::UnityEngine::Color _VolDefault_rainDropColor; // 0x290
		::UnityEngine::Vector2 _VolDefault_wetnessNoiseClamp; // 0x2A0
		::UnityEngine::Color _VolDefault_rainDropSplashColor; // 0x2A8
		::System::Int32 _VolDefault_rainDropSplashCount; // 0x2B8
		::System::Single _VolDefault_distanceFogStart; // 0x2BC
		::UnityEngine::Gradient* _VolDefault_fogHorizontalGradient; // 0x2C0
		::System::Single _VolDefault_heightFogHeight; // 0x2C8
		::System::Single _VolDefault_heightFogStart; // 0x2CC
		::UnityEngine::Color _VolDefault_volumetricFogColor; // 0x2D0
		::UnityEngine::Gradient* _VolDefault_skyVerticalGradient; // 0x2E0
		::UnityEngine::Gradient* _VolDefault_skyHorizontalGradient; // 0x2E8
		::System::Single _VolDefault_skyHorizontalHeight; // 0x2F0
		::System::Single _VolDefault_skyHorizontalOffset; // 0x2F4
		::UnityEngine::Gradient* _VolDefault_skyCloudHorizontalGradient; // 0x2F8
		::UnityEngine::Color _VolDefault_sunDiscColor; // 0x300
		::UnityEngine::Gradient* _VolDefault_layer1MiddleCloudGradient; // 0x310
		::UnityEngine::Color _VolDefault_layer1CloudAroundSunColor; // 0x318
		::UnityEngine::Gradient* _VolDefault_layer2MiddleCloudGradient; // 0x328
		::UnityEngine::Color _VolDefault_layer2CloudAroundSunColor; // 0x330
		::UnityEngine::Gradient* _VolDefault_layer3MiddleCloudGradient; // 0x340
		::UnityEngine::Color _VolDefault_layer3CloudAroundSunColor; // 0x348
		::System::Single _VolDefault_sceneLutContribution; // 0x358
		::System::Boolean _VolDefault_enableLightShaft; // 0x35C
		::System::Single _VolDefault_lightShaftThreshold; // 0x360
		::System::Single _VolDefault_lightShaftIntensity; // 0x364
		::System::Boolean _VolDefault_lightShaftColorClamp; // 0x368
		::UnityEngine::Color _VolDefault_lightShaftColor; // 0x36C
		::System::Single _VolDefault_lightShaftLength; // 0x37C
		::System::Single _VolDefault_lightShaftFadeLength; // 0x380
		::System::Boolean _VolDefault_lightShaftBlur; // 0x384
		::System::Boolean _VolDefault_lightShaftUseCustomCenter; // 0x385
		::UnityEngine::Vector2 _VolDefault_lightShaftCustomCenter; // 0x388
		::System::Boolean _VolPreVal_enableCameraClip_overrideState; // 0x390
		::System::Boolean _VolPreVal_enableCameraClip; // 0x391
		::System::Boolean _VolPreVal_cameraClipDistance_overrideState; // 0x392
		::System::Single _VolPreVal_cameraClipDistance; // 0x394
		::System::Boolean _VolPreVal_cameraClipExtension_overrideState; // 0x398
		::UnityEngine::Vector3 _VolPreVal_cameraClipExtension; // 0x39C
		::System::Boolean _VolPreVal_cameraClipAlpha_overrideState; // 0x3A8
		::System::Single _VolPreVal_cameraClipAlpha; // 0x3AC
		::System::Boolean _VolPreVal_weatherConfig_overrideState; // 0x3B0
		::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject* _VolPreVal_weatherConfig; // 0x3B8
		::System::Boolean _VolPreVal_weatherConfigWeight_overrideState; // 0x3C0
		::System::Single _VolPreVal_weatherConfigWeight; // 0x3C4
		::System::Boolean _VolPreVal_fxLightShaftMaskOn_overrideState; // 0x3C8
		::System::Boolean _VolPreVal_fxLightShaftMaskOn; // 0x3C9
		::System::Boolean _VolPreVal_fxFxScreenLightMode_overrideState; // 0x3CA
		::UnityEngine::Rendering::Universal::FXColorCorrection_FxScreenLightMode _VolPreVal_fxFxScreenLightMode; // 0x3CC
		::System::Boolean _VolPreVal_fxScreenLightColor_overrideState; // 0x3D0
		::UnityEngine::Color _VolPreVal_fxScreenLightColor; // 0x3D4
		::System::Boolean _VolPreVal_fxScreenLightMaskOn_overrideState; // 0x3E4
		::System::Boolean _VolPreVal_fxScreenLightMaskOn; // 0x3E5
		::System::Boolean _VolPreVal_sceneSpecialPPSEffectIntensity_overrideState; // 0x3E6
		::System::Single _VolPreVal_sceneSpecialPPSEffectIntensity; // 0x3E8
		::System::Boolean _VolPreVal_sceneSpecialPPSOverrideWeatherGBufferSaturation_overrideState; // 0x3EC
		::System::Boolean _VolPreVal_sceneSpecialPPSOverrideWeatherGBufferSaturation; // 0x3ED
		::System::Boolean _VolPreVal_sceneSpecialPPSGBufferSaturation_overrideState; // 0x3EE
		::System::Single _VolPreVal_sceneSpecialPPSGBufferSaturation; // 0x3F0
		::System::Boolean _VolPreVal_sceneSpecialPPSUseSaturationLut_overrideState; // 0x3F4
		::System::Boolean _VolPreVal_sceneSpecialPPSUseSaturationLut; // 0x3F5
		::System::Boolean _VolPreVal_sceneSpecialPPSSaturationLut_overrideState; // 0x3F6
		::UnityEngine::Texture* _VolPreVal_sceneSpecialPPSSaturationLut; // 0x3F8
		::System::Boolean _VolPreVal_sceneSpecialPPSSaturationRampGap_overrideState; // 0x400
		::UnityEngine::Vector4 _VolPreVal_sceneSpecialPPSSaturationRampGap; // 0x404
		::System::Boolean _VolPreVal_sceneSpecialPPSSaturationRampValue_overrideState; // 0x414
		::UnityEngine::Vector4 _VolPreVal_sceneSpecialPPSSaturationRampValue; // 0x418
		::System::Boolean _VolPreVal_sceneSpecialPPSSaturationRampGap2_overrideState; // 0x428
		::UnityEngine::Vector4 _VolPreVal_sceneSpecialPPSSaturationRampGap2; // 0x42C
		::System::Boolean _VolPreVal_sceneSpecialPPSSaturationRampValue2_overrideState; // 0x43C
		::UnityEngine::Vector4 _VolPreVal_sceneSpecialPPSSaturationRampValue2; // 0x440
		::System::Boolean _VolPreVal_sceneSpecialPPSSaturationRampGap3_overrideState; // 0x450
		::UnityEngine::Vector4 _VolPreVal_sceneSpecialPPSSaturationRampGap3; // 0x454
		::System::Boolean _VolPreVal_sceneSpecialPPSSaturationRampValue3_overrideState; // 0x464
		::UnityEngine::Vector4 _VolPreVal_sceneSpecialPPSSaturationRampValue3; // 0x468
		::System::Boolean _VolPreVal_applySaturationLutToUberPost_overrideState; // 0x478
		::System::Boolean _VolPreVal_applySaturationLutToUberPost; // 0x479
		::System::Boolean _VolPreVal_sceneSpecialPPSIgnoreRidus_overrideState; // 0x47A
		::System::Single _VolPreVal_sceneSpecialPPSIgnoreRidus; // 0x47C
		::System::Boolean _VolPreVal_sceneSpecialPPSRadiusAlphaPow_overrideState; // 0x480
		::System::Single _VolPreVal_sceneSpecialPPSRadiusAlphaPow; // 0x484
		::System::Boolean _VolPreVal_sceneSpecialPPSEmissionColor_overrideState; // 0x488
		::UnityEngine::Color _VolPreVal_sceneSpecialPPSEmissionColor; // 0x48C
		::System::Boolean _VolPreVal_sceneSpecialSkySaturation_overrideState; // 0x49C
		::System::Single _VolPreVal_sceneSpecialSkySaturation; // 0x4A0
		::System::Boolean _VolPreVal_ForceUseMsaa_overrideState; // 0x4A4
		::System::Boolean _VolPreVal_ForceUseMsaa; // 0x4A5
		::System::Boolean _VolPreVal_postExposure_overrideState; // 0x4A6
		::System::Single _VolPreVal_postExposure; // 0x4A8
		::System::Boolean _VolPreVal_contrast_overrideState; // 0x4AC
		::System::Single _VolPreVal_contrast; // 0x4B0
		::System::Boolean _VolPreVal_saturation_overrideState; // 0x4B4
		::System::Single _VolPreVal_saturation; // 0x4B8
		::System::Boolean _VolPreVal_gamma_overrideState; // 0x4BC
		::System::Single _VolPreVal_gamma; // 0x4C0
		::System::Boolean _VolPreVal_lutInvert_overrideState; // 0x4C4
		::System::Boolean _VolPreVal_lutInvert; // 0x4C5
		::System::Boolean _VolPreVal_lutToneColors_overrideState; // 0x4C6
		::System::Boolean _VolPreVal_lutToneColors; // 0x4C7
		::System::Boolean _VolPreVal_lutToneA_overrideState; // 0x4C8
		::UnityEngine::Color _VolPreVal_lutToneA; // 0x4CC
		::System::Boolean _VolPreVal_lutToneB_overrideState; // 0x4DC
		::UnityEngine::Color _VolPreVal_lutToneB; // 0x4E0
		::System::Boolean _VolPreVal_lutMiddlePoint_overrideState; // 0x4F0
		::System::Single _VolPreVal_lutMiddlePoint; // 0x4F4
		::System::Boolean _VolPreVal_lutSoftness_overrideState; // 0x4F8
		::System::Single _VolPreVal_lutSoftness; // 0x4FC
		::System::Boolean _VolPreVal_desaturate_overrideState; // 0x500
		::System::Single _VolPreVal_desaturate; // 0x504
		::System::Boolean _VolPreVal_invert_overrideState; // 0x508
		::System::Boolean _VolPreVal_invert; // 0x509
		::System::Boolean _VolPreVal_toneColors_overrideState; // 0x50A
		::System::Boolean _VolPreVal_toneColors; // 0x50B
		::System::Boolean _VolPreVal_toneA_overrideState; // 0x50C
		::UnityEngine::Color _VolPreVal_toneA; // 0x510
		::System::Boolean _VolPreVal_toneB_overrideState; // 0x520
		::UnityEngine::Color _VolPreVal_toneB; // 0x524
		::System::Boolean _VolPreVal_middlePoint_overrideState; // 0x534
		::System::Single _VolPreVal_middlePoint; // 0x538
		::System::Boolean _VolPreVal_softness_overrideState; // 0x53C
		::System::Single _VolPreVal_softness; // 0x540
		::System::Boolean _VolPreVal_fxFogMaskPassOn_overrideState; // 0x544
		::System::Boolean _VolPreVal_fxFogMaskPassOn; // 0x545
		::System::Boolean _VolPreVal_fxColorSaturation_overrideState; // 0x546
		::System::Single _VolPreVal_fxColorSaturation; // 0x548
		::System::Boolean _VolPreVal_justControlParticleLight_overrideState; // 0x54C
		::System::Boolean _VolPreVal_justControlParticleLight; // 0x54D
		::System::Boolean _VolPreVal_localLightMultiplyIntensity_overrideState; // 0x54E
		::System::Single _VolPreVal_localLightMultiplyIntensity; // 0x550
		::System::Boolean _VolPreVal_localLightThreadHold_overrideState; // 0x554
		::System::Single _VolPreVal_localLightThreadHold; // 0x558
		::System::Boolean _VolPreVal_indirectSpecularIntensity_overrideState; // 0x55C
		::System::Single _VolPreVal_indirectSpecularIntensity; // 0x560
		::System::Boolean _VolPreVal_rainDropColor_overrideState; // 0x564
		::UnityEngine::Color _VolPreVal_rainDropColor; // 0x568
		::System::Boolean _VolPreVal_wetnessNoiseClamp_overrideState; // 0x578
		::UnityEngine::Vector2 _VolPreVal_wetnessNoiseClamp; // 0x57C
		::System::Boolean _VolPreVal_rainDropSplashColor_overrideState; // 0x584
		::UnityEngine::Color _VolPreVal_rainDropSplashColor; // 0x588
		::System::Boolean _VolPreVal_rainDropSplashCount_overrideState; // 0x598
		::System::Int32 _VolPreVal_rainDropSplashCount; // 0x59C
		::System::Boolean _VolPreVal_distanceFogStart_overrideState; // 0x5A0
		::System::Single _VolPreVal_distanceFogStart; // 0x5A4
		::System::Boolean _VolPreVal_fogHorizontalGradient_overrideState; // 0x5A8
		::UnityEngine::Gradient* _VolPreVal_fogHorizontalGradient; // 0x5B0
		::System::Boolean _VolPreVal_heightFogHeight_overrideState; // 0x5B8
		::System::Single _VolPreVal_heightFogHeight; // 0x5BC
		::System::Boolean _VolPreVal_heightFogStart_overrideState; // 0x5C0
		::System::Single _VolPreVal_heightFogStart; // 0x5C4
		::System::Boolean _VolPreVal_volumetricFogColor_overrideState; // 0x5C8
		::UnityEngine::Color _VolPreVal_volumetricFogColor; // 0x5CC
		::System::Boolean _VolPreVal_skyVerticalGradient_overrideState; // 0x5DC
		::UnityEngine::Gradient* _VolPreVal_skyVerticalGradient; // 0x5E0
		::System::Boolean _VolPreVal_skyHorizontalGradient_overrideState; // 0x5E8
		::UnityEngine::Gradient* _VolPreVal_skyHorizontalGradient; // 0x5F0
		::System::Boolean _VolPreVal_skyHorizontalHeight_overrideState; // 0x5F8
		::System::Single _VolPreVal_skyHorizontalHeight; // 0x5FC
		::System::Boolean _VolPreVal_skyHorizontalOffset_overrideState; // 0x600
		::System::Single _VolPreVal_skyHorizontalOffset; // 0x604
		::System::Boolean _VolPreVal_skyCloudHorizontalGradient_overrideState; // 0x608
		::UnityEngine::Gradient* _VolPreVal_skyCloudHorizontalGradient; // 0x610
		::System::Boolean _VolPreVal_sunDiscColor_overrideState; // 0x618
		::UnityEngine::Color _VolPreVal_sunDiscColor; // 0x61C
		::System::Boolean _VolPreVal_layer1MiddleCloudGradient_overrideState; // 0x62C
		::UnityEngine::Gradient* _VolPreVal_layer1MiddleCloudGradient; // 0x630
		::System::Boolean _VolPreVal_layer1CloudAroundSunColor_overrideState; // 0x638
		::UnityEngine::Color _VolPreVal_layer1CloudAroundSunColor; // 0x63C
		::System::Boolean _VolPreVal_layer2MiddleCloudGradient_overrideState; // 0x64C
		::UnityEngine::Gradient* _VolPreVal_layer2MiddleCloudGradient; // 0x650
		::System::Boolean _VolPreVal_layer2CloudAroundSunColor_overrideState; // 0x658
		::UnityEngine::Color _VolPreVal_layer2CloudAroundSunColor; // 0x65C
		::System::Boolean _VolPreVal_layer3MiddleCloudGradient_overrideState; // 0x66C
		::UnityEngine::Gradient* _VolPreVal_layer3MiddleCloudGradient; // 0x670
		::System::Boolean _VolPreVal_layer3CloudAroundSunColor_overrideState; // 0x678
		::UnityEngine::Color _VolPreVal_layer3CloudAroundSunColor; // 0x67C
		::System::Boolean _VolPreVal_sceneLutContribution_overrideState; // 0x68C
		::System::Single _VolPreVal_sceneLutContribution; // 0x690
		::System::Boolean _VolPreVal_enableLightShaft_overrideState; // 0x694
		::System::Boolean _VolPreVal_enableLightShaft; // 0x695
		::System::Boolean _VolPreVal_lightShaftThreshold_overrideState; // 0x696
		::System::Single _VolPreVal_lightShaftThreshold; // 0x698
		::System::Boolean _VolPreVal_lightShaftIntensity_overrideState; // 0x69C
		::System::Single _VolPreVal_lightShaftIntensity; // 0x6A0
		::System::Boolean _VolPreVal_lightShaftColorClamp_overrideState; // 0x6A4
		::System::Boolean _VolPreVal_lightShaftColorClamp; // 0x6A5
		::System::Boolean _VolPreVal_lightShaftColor_overrideState; // 0x6A6
		::UnityEngine::Color _VolPreVal_lightShaftColor; // 0x6A8
		::System::Boolean _VolPreVal_lightShaftLength_overrideState; // 0x6B8
		::System::Single _VolPreVal_lightShaftLength; // 0x6BC
		::System::Boolean _VolPreVal_lightShaftFadeLength_overrideState; // 0x6C0
		::System::Single _VolPreVal_lightShaftFadeLength; // 0x6C4
		::System::Boolean _VolPreVal_lightShaftBlur_overrideState; // 0x6C8
		::System::Boolean _VolPreVal_lightShaftBlur; // 0x6C9
		::System::Boolean _VolPreVal_lightShaftUseCustomCenter_overrideState; // 0x6CA
		::System::Boolean _VolPreVal_lightShaftUseCustomCenter; // 0x6CB
		::System::Boolean _VolPreVal_lightShaftCustomCenter_overrideState; // 0x6CC
		::UnityEngine::Vector2 _VolPreVal_lightShaftCustomCenter; // 0x6D0
		::System::Single _TimelineCurveFirstVal_cameraClipDistance; // 0x6D8
		::System::Single _TimelineCurveLastVal_cameraClipDistance; // 0x6DC
		::UnityEngine::Vector3 _TimelineCurveFirstVal_cameraClipExtension; // 0x6E0
		::UnityEngine::Vector3 _TimelineCurveLastVal_cameraClipExtension; // 0x6EC
		::System::Single _TimelineCurveFirstVal_cameraClipAlpha; // 0x6F8
		::System::Single _TimelineCurveLastVal_cameraClipAlpha; // 0x6FC
		::System::Single _TimelineCurveFirstVal_weatherConfigWeight; // 0x700
		::System::Single _TimelineCurveLastVal_weatherConfigWeight; // 0x704
		::System::Boolean _TimelineCurveFirstVal_fxLightShaftMaskOn; // 0x708
		::System::Boolean _TimelineCurveLastVal_fxLightShaftMaskOn; // 0x709
		::UnityEngine::Color _TimelineCurveFirstVal_fxScreenLightColor; // 0x70C
		::UnityEngine::Color _TimelineCurveLastVal_fxScreenLightColor; // 0x71C
		::System::Boolean _TimelineCurveFirstVal_fxScreenLightMaskOn; // 0x72C
		::System::Boolean _TimelineCurveLastVal_fxScreenLightMaskOn; // 0x72D
		::System::Single _TimelineCurveFirstVal_sceneSpecialPPSEffectIntensity; // 0x730
		::System::Single _TimelineCurveLastVal_sceneSpecialPPSEffectIntensity; // 0x734
		::System::Boolean _TimelineCurveFirstVal_sceneSpecialPPSOverrideWeatherGBufferSaturation; // 0x738
		::System::Boolean _TimelineCurveLastVal_sceneSpecialPPSOverrideWeatherGBufferSaturation; // 0x739
		::System::Single _TimelineCurveFirstVal_sceneSpecialPPSGBufferSaturation; // 0x73C
		::System::Single _TimelineCurveLastVal_sceneSpecialPPSGBufferSaturation; // 0x740
		::System::Boolean _TimelineCurveFirstVal_sceneSpecialPPSUseSaturationLut; // 0x744
		::System::Boolean _TimelineCurveLastVal_sceneSpecialPPSUseSaturationLut; // 0x745
		::UnityEngine::Vector4 _TimelineCurveFirstVal_sceneSpecialPPSSaturationRampGap; // 0x748
		::UnityEngine::Vector4 _TimelineCurveLastVal_sceneSpecialPPSSaturationRampGap; // 0x758
		::UnityEngine::Vector4 _TimelineCurveFirstVal_sceneSpecialPPSSaturationRampValue; // 0x768
		::UnityEngine::Vector4 _TimelineCurveLastVal_sceneSpecialPPSSaturationRampValue; // 0x778
		::UnityEngine::Vector4 _TimelineCurveFirstVal_sceneSpecialPPSSaturationRampGap2; // 0x788
		::UnityEngine::Vector4 _TimelineCurveLastVal_sceneSpecialPPSSaturationRampGap2; // 0x798
		::UnityEngine::Vector4 _TimelineCurveFirstVal_sceneSpecialPPSSaturationRampValue2; // 0x7A8
		::UnityEngine::Vector4 _TimelineCurveLastVal_sceneSpecialPPSSaturationRampValue2; // 0x7B8
		::UnityEngine::Vector4 _TimelineCurveFirstVal_sceneSpecialPPSSaturationRampGap3; // 0x7C8
		::UnityEngine::Vector4 _TimelineCurveLastVal_sceneSpecialPPSSaturationRampGap3; // 0x7D8
		::UnityEngine::Vector4 _TimelineCurveFirstVal_sceneSpecialPPSSaturationRampValue3; // 0x7E8
		::UnityEngine::Vector4 _TimelineCurveLastVal_sceneSpecialPPSSaturationRampValue3; // 0x7F8
		::System::Boolean _TimelineCurveFirstVal_applySaturationLutToUberPost; // 0x808
		::System::Boolean _TimelineCurveLastVal_applySaturationLutToUberPost; // 0x809
		::UnityEngine::Color _TimelineCurveFirstVal_sceneSpecialPPSEmissionColor; // 0x80C
		::UnityEngine::Color _TimelineCurveLastVal_sceneSpecialPPSEmissionColor; // 0x81C
		::System::Boolean _TimelineCurveFirstVal_ForceUseMsaa; // 0x82C
		::System::Boolean _TimelineCurveLastVal_ForceUseMsaa; // 0x82D
		::System::Single _TimelineCurveFirstVal_postExposure; // 0x830
		::System::Single _TimelineCurveLastVal_postExposure; // 0x834
		::System::Single _TimelineCurveFirstVal_contrast; // 0x838
		::System::Single _TimelineCurveLastVal_contrast; // 0x83C
		::System::Single _TimelineCurveFirstVal_saturation; // 0x840
		::System::Single _TimelineCurveLastVal_saturation; // 0x844
		::System::Single _TimelineCurveFirstVal_gamma; // 0x848
		::System::Single _TimelineCurveLastVal_gamma; // 0x84C
		::System::Boolean _TimelineCurveFirstVal_lutInvert; // 0x850
		::System::Boolean _TimelineCurveLastVal_lutInvert; // 0x851
		::System::Boolean _TimelineCurveFirstVal_lutToneColors; // 0x852
		::System::Boolean _TimelineCurveLastVal_lutToneColors; // 0x853
		::System::Single _TimelineCurveFirstVal_lutMiddlePoint; // 0x854
		::System::Single _TimelineCurveLastVal_lutMiddlePoint; // 0x858
		::System::Single _TimelineCurveFirstVal_lutSoftness; // 0x85C
		::System::Single _TimelineCurveLastVal_lutSoftness; // 0x860
		::System::Single _TimelineCurveFirstVal_desaturate; // 0x864
		::System::Single _TimelineCurveLastVal_desaturate; // 0x868
		::System::Boolean _TimelineCurveFirstVal_invert; // 0x86C
		::System::Boolean _TimelineCurveLastVal_invert; // 0x86D
		::System::Boolean _TimelineCurveFirstVal_toneColors; // 0x86E
		::System::Boolean _TimelineCurveLastVal_toneColors; // 0x86F
		::System::Single _TimelineCurveFirstVal_middlePoint; // 0x870
		::System::Single _TimelineCurveLastVal_middlePoint; // 0x874
		::System::Single _TimelineCurveFirstVal_softness; // 0x878
		::System::Single _TimelineCurveLastVal_softness; // 0x87C
		::System::Boolean _TimelineCurveFirstVal_fxFogMaskPassOn; // 0x880
		::System::Boolean _TimelineCurveLastVal_fxFogMaskPassOn; // 0x881
		::System::Single _TimelineCurveFirstVal_fxColorSaturation; // 0x884
		::System::Single _TimelineCurveLastVal_fxColorSaturation; // 0x888
		::System::Boolean _TimelineCurveFirstVal_justControlParticleLight; // 0x88C
		::System::Boolean _TimelineCurveLastVal_justControlParticleLight; // 0x88D
		::System::Single _TimelineCurveFirstVal_localLightMultiplyIntensity; // 0x890
		::System::Single _TimelineCurveLastVal_localLightMultiplyIntensity; // 0x894
		::System::Single _TimelineCurveFirstVal_localLightThreadHold; // 0x898
		::System::Single _TimelineCurveLastVal_localLightThreadHold; // 0x89C
		::System::Single _TimelineCurveFirstVal_indirectSpecularIntensity; // 0x8A0
		::System::Single _TimelineCurveLastVal_indirectSpecularIntensity; // 0x8A4
		::System::Boolean _TimelineCurveFirstVal_enableLightShaft; // 0x8A8
		::System::Boolean _TimelineCurveLastVal_enableLightShaft; // 0x8A9
		::System::Single _TimelineCurveFirstVal_lightShaftThreshold; // 0x8AC
		::System::Single _TimelineCurveLastVal_lightShaftThreshold; // 0x8B0
		::System::Single _TimelineCurveFirstVal_lightShaftIntensity; // 0x8B4
		::System::Single _TimelineCurveLastVal_lightShaftIntensity; // 0x8B8
		::System::Boolean _TimelineCurveFirstVal_lightShaftColorClamp; // 0x8BC
		::System::Boolean _TimelineCurveLastVal_lightShaftColorClamp; // 0x8BD
		::UnityEngine::Color _TimelineCurveFirstVal_lightShaftColor; // 0x8C0
		::UnityEngine::Color _TimelineCurveLastVal_lightShaftColor; // 0x8D0
		::System::Single _TimelineCurveFirstVal_lightShaftLength; // 0x8E0
		::System::Single _TimelineCurveLastVal_lightShaftLength; // 0x8E4
		::System::Single _TimelineCurveFirstVal_lightShaftFadeLength; // 0x8E8
		::System::Single _TimelineCurveLastVal_lightShaftFadeLength; // 0x8EC
		::System::Boolean _TimelineCurveFirstVal_lightShaftBlur; // 0x8F0
		::System::Boolean _TimelineCurveLastVal_lightShaftBlur; // 0x8F1
		::System::Boolean _TimelineCurveFirstVal_lightShaftUseCustomCenter; // 0x8F2
		::System::Boolean _TimelineCurveLastVal_lightShaftUseCustomCenter; // 0x8F3
		::UnityEngine::Vector2 _TimelineCurveFirstVal_lightShaftCustomCenter; // 0x8F4
		::UnityEngine::Vector2 _TimelineCurveLastVal_lightShaftCustomCenter; // 0x8FC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_enableCameraClip_FieldHandleType; // 0x904
		::System::Boolean ESPP_enableCameraClip; // 0x908
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_cameraClipDistance_FieldHandleType; // 0x90C
		::System::Boolean ESPP_cameraClipDistance_UseIt; // 0x910
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_cameraClipDistance; // 0x918
		::System::Boolean ESPP_cameraClipDistance_EnableFade; // 0x920
		::System::Boolean ESPP_cameraClipDistance_EnableOverrideDefaultValue; // 0x921
		::System::Single ESPP_cameraClipDistance_OverrideDefaultValue; // 0x924
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_cameraClipExtension_FieldHandleType; // 0x928
		::System::Boolean ESPP_cameraClipExtension_UseIt; // 0x92C
		::MoleMole::EffectSimulate::Vector3KeyframeCurve* ESPP_cameraClipExtension; // 0x930
		::System::Boolean ESPP_cameraClipExtension_EnableFade; // 0x938
		::System::Boolean ESPP_cameraClipExtension_EnableOverrideDefaultValue; // 0x939
		::UnityEngine::Vector3 ESPP_cameraClipExtension_OverrideDefaultValue; // 0x93C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_cameraClipAlpha_FieldHandleType; // 0x948
		::System::Boolean ESPP_cameraClipAlpha_UseIt; // 0x94C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_cameraClipAlpha; // 0x950
		::System::Boolean ESPP_cameraClipAlpha_EnableFade; // 0x958
		::System::Boolean ESPP_cameraClipAlpha_EnableOverrideDefaultValue; // 0x959
		::System::Single ESPP_cameraClipAlpha_OverrideDefaultValue; // 0x95C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_weatherConfig_FieldHandleType; // 0x960
		::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject* ESPP_weatherConfig; // 0x968
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_weatherConfigWeight_FieldHandleType; // 0x970
		::System::Boolean ESPP_weatherConfigWeight_UseIt; // 0x974
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_weatherConfigWeight; // 0x978
		::System::Boolean ESPP_weatherConfigWeight_EnableFade; // 0x980
		::System::Boolean ESPP_weatherConfigWeight_EnableOverrideDefaultValue; // 0x981
		::System::Single ESPP_weatherConfigWeight_OverrideDefaultValue; // 0x984
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_fxLightShaftMaskOn_FieldHandleType; // 0x988
		::System::Boolean ESPP_fxLightShaftMaskOn_UseIt; // 0x98C
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_fxLightShaftMaskOn; // 0x990
		::System::Boolean ESPP_fxLightShaftMaskOn_EnableFade; // 0x998
		::System::Boolean ESPP_fxLightShaftMaskOn_EnableOverrideDefaultValue; // 0x999
		::System::Boolean ESPP_fxLightShaftMaskOn_OverrideDefaultValue; // 0x99A
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_fxFxScreenLightMode_FieldHandleType; // 0x99C
		::UnityEngine::Rendering::Universal::FXColorCorrection_FxScreenLightMode ESPP_fxFxScreenLightMode; // 0x9A0
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_fxScreenLightColor_FieldHandleType; // 0x9A4
		::System::Boolean ESPP_fxScreenLightColor_UseIt; // 0x9A8
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_fxScreenLightColor; // 0x9B0
		::System::Boolean ESPP_fxScreenLightColor_EnableFade; // 0x9B8
		::System::Boolean ESPP_fxScreenLightColor_EnableOverrideDefaultValue; // 0x9B9
		::UnityEngine::Color ESPP_fxScreenLightColor_OverrideDefaultValue; // 0x9BC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_fxScreenLightMaskOn_FieldHandleType; // 0x9CC
		::System::Boolean ESPP_fxScreenLightMaskOn_UseIt; // 0x9D0
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_fxScreenLightMaskOn; // 0x9D8
		::System::Boolean ESPP_fxScreenLightMaskOn_EnableFade; // 0x9E0
		::System::Boolean ESPP_fxScreenLightMaskOn_EnableOverrideDefaultValue; // 0x9E1
		::System::Boolean ESPP_fxScreenLightMaskOn_OverrideDefaultValue; // 0x9E2
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sceneSpecialPPSEffectIntensity_FieldHandleType; // 0x9E4
		::System::Boolean ESPP_sceneSpecialPPSEffectIntensity_UseIt; // 0x9E8
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_sceneSpecialPPSEffectIntensity; // 0x9F0
		::System::Boolean ESPP_sceneSpecialPPSEffectIntensity_EnableFade; // 0x9F8
		::System::Boolean ESPP_sceneSpecialPPSEffectIntensity_EnableOverrideDefaultValue; // 0x9F9
		::System::Single ESPP_sceneSpecialPPSEffectIntensity_OverrideDefaultValue; // 0x9FC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sceneSpecialPPSOverrideWeatherGBufferSaturation_FieldHandleType; // 0xA00
		::System::Boolean ESPP_sceneSpecialPPSOverrideWeatherGBufferSaturation_UseIt; // 0xA04
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_sceneSpecialPPSOverrideWeatherGBufferSaturation; // 0xA08
		::System::Boolean ESPP_sceneSpecialPPSOverrideWeatherGBufferSaturation_EnableFade; // 0xA10
		::System::Boolean ESPP_sceneSpecialPPSOverrideWeatherGBufferSaturation_EnableOverrideDefaultValue; // 0xA11
		::System::Boolean ESPP_sceneSpecialPPSOverrideWeatherGBufferSaturation_OverrideDefaultValue; // 0xA12
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sceneSpecialPPSGBufferSaturation_FieldHandleType; // 0xA14
		::System::Boolean ESPP_sceneSpecialPPSGBufferSaturation_UseIt; // 0xA18
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_sceneSpecialPPSGBufferSaturation; // 0xA20
		::System::Boolean ESPP_sceneSpecialPPSGBufferSaturation_EnableFade; // 0xA28
		::System::Boolean ESPP_sceneSpecialPPSGBufferSaturation_EnableOverrideDefaultValue; // 0xA29
		::System::Single ESPP_sceneSpecialPPSGBufferSaturation_OverrideDefaultValue; // 0xA2C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sceneSpecialPPSUseSaturationLut_FieldHandleType; // 0xA30
		::System::Boolean ESPP_sceneSpecialPPSUseSaturationLut_UseIt; // 0xA34
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_sceneSpecialPPSUseSaturationLut; // 0xA38
		::System::Boolean ESPP_sceneSpecialPPSUseSaturationLut_EnableFade; // 0xA40
		::System::Boolean ESPP_sceneSpecialPPSUseSaturationLut_EnableOverrideDefaultValue; // 0xA41
		::System::Boolean ESPP_sceneSpecialPPSUseSaturationLut_OverrideDefaultValue; // 0xA42
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sceneSpecialPPSSaturationLut_FieldHandleType; // 0xA44
		::UnityEngine::Texture* ESPP_sceneSpecialPPSSaturationLut; // 0xA48
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sceneSpecialPPSSaturationRampGap_FieldHandleType; // 0xA50
		::System::Boolean ESPP_sceneSpecialPPSSaturationRampGap_UseIt; // 0xA54
		::MoleMole::EffectSimulate::Vector4KeyframeCurve* ESPP_sceneSpecialPPSSaturationRampGap; // 0xA58
		::System::Boolean ESPP_sceneSpecialPPSSaturationRampGap_EnableFade; // 0xA60
		::System::Boolean ESPP_sceneSpecialPPSSaturationRampGap_EnableOverrideDefaultValue; // 0xA61
		::UnityEngine::Vector4 ESPP_sceneSpecialPPSSaturationRampGap_OverrideDefaultValue; // 0xA64
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sceneSpecialPPSSaturationRampValue_FieldHandleType; // 0xA74
		::System::Boolean ESPP_sceneSpecialPPSSaturationRampValue_UseIt; // 0xA78
		::MoleMole::EffectSimulate::Vector4KeyframeCurve* ESPP_sceneSpecialPPSSaturationRampValue; // 0xA80
		::System::Boolean ESPP_sceneSpecialPPSSaturationRampValue_EnableFade; // 0xA88
		::System::Boolean ESPP_sceneSpecialPPSSaturationRampValue_EnableOverrideDefaultValue; // 0xA89
		::UnityEngine::Vector4 ESPP_sceneSpecialPPSSaturationRampValue_OverrideDefaultValue; // 0xA8C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sceneSpecialPPSSaturationRampGap2_FieldHandleType; // 0xA9C
		::System::Boolean ESPP_sceneSpecialPPSSaturationRampGap2_UseIt; // 0xAA0
		::MoleMole::EffectSimulate::Vector4KeyframeCurve* ESPP_sceneSpecialPPSSaturationRampGap2; // 0xAA8
		::System::Boolean ESPP_sceneSpecialPPSSaturationRampGap2_EnableFade; // 0xAB0
		::System::Boolean ESPP_sceneSpecialPPSSaturationRampGap2_EnableOverrideDefaultValue; // 0xAB1
		::UnityEngine::Vector4 ESPP_sceneSpecialPPSSaturationRampGap2_OverrideDefaultValue; // 0xAB4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sceneSpecialPPSSaturationRampValue2_FieldHandleType; // 0xAC4
		::System::Boolean ESPP_sceneSpecialPPSSaturationRampValue2_UseIt; // 0xAC8
		::MoleMole::EffectSimulate::Vector4KeyframeCurve* ESPP_sceneSpecialPPSSaturationRampValue2; // 0xAD0
		::System::Boolean ESPP_sceneSpecialPPSSaturationRampValue2_EnableFade; // 0xAD8
		::System::Boolean ESPP_sceneSpecialPPSSaturationRampValue2_EnableOverrideDefaultValue; // 0xAD9
		::UnityEngine::Vector4 ESPP_sceneSpecialPPSSaturationRampValue2_OverrideDefaultValue; // 0xADC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sceneSpecialPPSSaturationRampGap3_FieldHandleType; // 0xAEC
		::System::Boolean ESPP_sceneSpecialPPSSaturationRampGap3_UseIt; // 0xAF0
		::MoleMole::EffectSimulate::Vector4KeyframeCurve* ESPP_sceneSpecialPPSSaturationRampGap3; // 0xAF8
		::System::Boolean ESPP_sceneSpecialPPSSaturationRampGap3_EnableFade; // 0xB00
		::System::Boolean ESPP_sceneSpecialPPSSaturationRampGap3_EnableOverrideDefaultValue; // 0xB01
		::UnityEngine::Vector4 ESPP_sceneSpecialPPSSaturationRampGap3_OverrideDefaultValue; // 0xB04
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sceneSpecialPPSSaturationRampValue3_FieldHandleType; // 0xB14
		::System::Boolean ESPP_sceneSpecialPPSSaturationRampValue3_UseIt; // 0xB18
		::MoleMole::EffectSimulate::Vector4KeyframeCurve* ESPP_sceneSpecialPPSSaturationRampValue3; // 0xB20
		::System::Boolean ESPP_sceneSpecialPPSSaturationRampValue3_EnableFade; // 0xB28
		::System::Boolean ESPP_sceneSpecialPPSSaturationRampValue3_EnableOverrideDefaultValue; // 0xB29
		::UnityEngine::Vector4 ESPP_sceneSpecialPPSSaturationRampValue3_OverrideDefaultValue; // 0xB2C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_applySaturationLutToUberPost_FieldHandleType; // 0xB3C
		::System::Boolean ESPP_applySaturationLutToUberPost_UseIt; // 0xB40
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_applySaturationLutToUberPost; // 0xB48
		::System::Boolean ESPP_applySaturationLutToUberPost_EnableFade; // 0xB50
		::System::Boolean ESPP_applySaturationLutToUberPost_EnableOverrideDefaultValue; // 0xB51
		::System::Boolean ESPP_applySaturationLutToUberPost_OverrideDefaultValue; // 0xB52
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sceneSpecialPPSIgnoreRidus_FieldHandleType; // 0xB54
		::System::Single ESPP_sceneSpecialPPSIgnoreRidus; // 0xB58
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sceneSpecialPPSRadiusAlphaPow_FieldHandleType; // 0xB5C
		::System::Single ESPP_sceneSpecialPPSRadiusAlphaPow; // 0xB60
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sceneSpecialPPSEmissionColor_FieldHandleType; // 0xB64
		::System::Boolean ESPP_sceneSpecialPPSEmissionColor_UseIt; // 0xB68
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_sceneSpecialPPSEmissionColor; // 0xB70
		::System::Boolean ESPP_sceneSpecialPPSEmissionColor_EnableFade; // 0xB78
		::System::Boolean ESPP_sceneSpecialPPSEmissionColor_EnableOverrideDefaultValue; // 0xB79
		::UnityEngine::Color ESPP_sceneSpecialPPSEmissionColor_OverrideDefaultValue; // 0xB7C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sceneSpecialSkySaturation_FieldHandleType; // 0xB8C
		::System::Single ESPP_sceneSpecialSkySaturation; // 0xB90
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_ForceUseMsaa_FieldHandleType; // 0xB94
		::System::Boolean ESPP_ForceUseMsaa_UseIt; // 0xB98
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_ForceUseMsaa; // 0xBA0
		::System::Boolean ESPP_ForceUseMsaa_EnableFade; // 0xBA8
		::System::Boolean ESPP_ForceUseMsaa_EnableOverrideDefaultValue; // 0xBA9
		::System::Boolean ESPP_ForceUseMsaa_OverrideDefaultValue; // 0xBAA
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_postExposure_FieldHandleType; // 0xBAC
		::System::Boolean ESPP_postExposure_UseIt; // 0xBB0
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_postExposure; // 0xBB8
		::System::Boolean ESPP_postExposure_EnableFade; // 0xBC0
		::System::Boolean ESPP_postExposure_EnableOverrideDefaultValue; // 0xBC1
		::System::Single ESPP_postExposure_OverrideDefaultValue; // 0xBC4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_contrast_FieldHandleType; // 0xBC8
		::System::Boolean ESPP_contrast_UseIt; // 0xBCC
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_contrast; // 0xBD0
		::System::Boolean ESPP_contrast_EnableFade; // 0xBD8
		::System::Boolean ESPP_contrast_EnableOverrideDefaultValue; // 0xBD9
		::System::Single ESPP_contrast_OverrideDefaultValue; // 0xBDC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_saturation_FieldHandleType; // 0xBE0
		::System::Boolean ESPP_saturation_UseIt; // 0xBE4
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_saturation; // 0xBE8
		::System::Boolean ESPP_saturation_EnableFade; // 0xBF0
		::System::Boolean ESPP_saturation_EnableOverrideDefaultValue; // 0xBF1
		::System::Single ESPP_saturation_OverrideDefaultValue; // 0xBF4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_gamma_FieldHandleType; // 0xBF8
		::System::Boolean ESPP_gamma_UseIt; // 0xBFC
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_gamma; // 0xC00
		::System::Boolean ESPP_gamma_EnableFade; // 0xC08
		::System::Boolean ESPP_gamma_EnableOverrideDefaultValue; // 0xC09
		::System::Single ESPP_gamma_OverrideDefaultValue; // 0xC0C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lutInvert_FieldHandleType; // 0xC10
		::System::Boolean ESPP_lutInvert_UseIt; // 0xC14
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_lutInvert; // 0xC18
		::System::Boolean ESPP_lutInvert_EnableFade; // 0xC20
		::System::Boolean ESPP_lutInvert_EnableOverrideDefaultValue; // 0xC21
		::System::Boolean ESPP_lutInvert_OverrideDefaultValue; // 0xC22
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lutToneColors_FieldHandleType; // 0xC24
		::System::Boolean ESPP_lutToneColors_UseIt; // 0xC28
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_lutToneColors; // 0xC30
		::System::Boolean ESPP_lutToneColors_EnableFade; // 0xC38
		::System::Boolean ESPP_lutToneColors_EnableOverrideDefaultValue; // 0xC39
		::System::Boolean ESPP_lutToneColors_OverrideDefaultValue; // 0xC3A
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lutToneA_FieldHandleType; // 0xC3C
		::UnityEngine::Color ESPP_lutToneA; // 0xC40
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lutToneB_FieldHandleType; // 0xC50
		::UnityEngine::Color ESPP_lutToneB; // 0xC54
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lutMiddlePoint_FieldHandleType; // 0xC64
		::System::Boolean ESPP_lutMiddlePoint_UseIt; // 0xC68
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_lutMiddlePoint; // 0xC70
		::System::Boolean ESPP_lutMiddlePoint_EnableFade; // 0xC78
		::System::Boolean ESPP_lutMiddlePoint_EnableOverrideDefaultValue; // 0xC79
		::System::Single ESPP_lutMiddlePoint_OverrideDefaultValue; // 0xC7C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lutSoftness_FieldHandleType; // 0xC80
		::System::Boolean ESPP_lutSoftness_UseIt; // 0xC84
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_lutSoftness; // 0xC88
		::System::Boolean ESPP_lutSoftness_EnableFade; // 0xC90
		::System::Boolean ESPP_lutSoftness_EnableOverrideDefaultValue; // 0xC91
		::System::Single ESPP_lutSoftness_OverrideDefaultValue; // 0xC94
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_desaturate_FieldHandleType; // 0xC98
		::System::Boolean ESPP_desaturate_UseIt; // 0xC9C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_desaturate; // 0xCA0
		::System::Boolean ESPP_desaturate_EnableFade; // 0xCA8
		::System::Boolean ESPP_desaturate_EnableOverrideDefaultValue; // 0xCA9
		::System::Single ESPP_desaturate_OverrideDefaultValue; // 0xCAC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_invert_FieldHandleType; // 0xCB0
		::System::Boolean ESPP_invert_UseIt; // 0xCB4
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_invert; // 0xCB8
		::System::Boolean ESPP_invert_EnableFade; // 0xCC0
		::System::Boolean ESPP_invert_EnableOverrideDefaultValue; // 0xCC1
		::System::Boolean ESPP_invert_OverrideDefaultValue; // 0xCC2
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_toneColors_FieldHandleType; // 0xCC4
		::System::Boolean ESPP_toneColors_UseIt; // 0xCC8
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_toneColors; // 0xCD0
		::System::Boolean ESPP_toneColors_EnableFade; // 0xCD8
		::System::Boolean ESPP_toneColors_EnableOverrideDefaultValue; // 0xCD9
		::System::Boolean ESPP_toneColors_OverrideDefaultValue; // 0xCDA
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_toneA_FieldHandleType; // 0xCDC
		::UnityEngine::Color ESPP_toneA; // 0xCE0
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_toneB_FieldHandleType; // 0xCF0
		::UnityEngine::Color ESPP_toneB; // 0xCF4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_middlePoint_FieldHandleType; // 0xD04
		::System::Boolean ESPP_middlePoint_UseIt; // 0xD08
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_middlePoint; // 0xD10
		::System::Boolean ESPP_middlePoint_EnableFade; // 0xD18
		::System::Boolean ESPP_middlePoint_EnableOverrideDefaultValue; // 0xD19
		::System::Single ESPP_middlePoint_OverrideDefaultValue; // 0xD1C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_softness_FieldHandleType; // 0xD20
		::System::Boolean ESPP_softness_UseIt; // 0xD24
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_softness; // 0xD28
		::System::Boolean ESPP_softness_EnableFade; // 0xD30
		::System::Boolean ESPP_softness_EnableOverrideDefaultValue; // 0xD31
		::System::Single ESPP_softness_OverrideDefaultValue; // 0xD34
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_fxFogMaskPassOn_FieldHandleType; // 0xD38
		::System::Boolean ESPP_fxFogMaskPassOn_UseIt; // 0xD3C
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_fxFogMaskPassOn; // 0xD40
		::System::Boolean ESPP_fxFogMaskPassOn_EnableFade; // 0xD48
		::System::Boolean ESPP_fxFogMaskPassOn_EnableOverrideDefaultValue; // 0xD49
		::System::Boolean ESPP_fxFogMaskPassOn_OverrideDefaultValue; // 0xD4A
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_fxColorSaturation_FieldHandleType; // 0xD4C
		::System::Boolean ESPP_fxColorSaturation_UseIt; // 0xD50
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_fxColorSaturation; // 0xD58
		::System::Boolean ESPP_fxColorSaturation_EnableFade; // 0xD60
		::System::Boolean ESPP_fxColorSaturation_EnableOverrideDefaultValue; // 0xD61
		::System::Single ESPP_fxColorSaturation_OverrideDefaultValue; // 0xD64
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_justControlParticleLight_FieldHandleType; // 0xD68
		::System::Boolean ESPP_justControlParticleLight_UseIt; // 0xD6C
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_justControlParticleLight; // 0xD70
		::System::Boolean ESPP_justControlParticleLight_EnableFade; // 0xD78
		::System::Boolean ESPP_justControlParticleLight_EnableOverrideDefaultValue; // 0xD79
		::System::Boolean ESPP_justControlParticleLight_OverrideDefaultValue; // 0xD7A
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_localLightMultiplyIntensity_FieldHandleType; // 0xD7C
		::System::Boolean ESPP_localLightMultiplyIntensity_UseIt; // 0xD80
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_localLightMultiplyIntensity; // 0xD88
		::System::Boolean ESPP_localLightMultiplyIntensity_EnableFade; // 0xD90
		::System::Boolean ESPP_localLightMultiplyIntensity_EnableOverrideDefaultValue; // 0xD91
		::System::Single ESPP_localLightMultiplyIntensity_OverrideDefaultValue; // 0xD94
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_localLightThreadHold_FieldHandleType; // 0xD98
		::System::Boolean ESPP_localLightThreadHold_UseIt; // 0xD9C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_localLightThreadHold; // 0xDA0
		::System::Boolean ESPP_localLightThreadHold_EnableFade; // 0xDA8
		::System::Boolean ESPP_localLightThreadHold_EnableOverrideDefaultValue; // 0xDA9
		::System::Single ESPP_localLightThreadHold_OverrideDefaultValue; // 0xDAC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_indirectSpecularIntensity_FieldHandleType; // 0xDB0
		::System::Boolean ESPP_indirectSpecularIntensity_UseIt; // 0xDB4
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_indirectSpecularIntensity; // 0xDB8
		::System::Boolean ESPP_indirectSpecularIntensity_EnableFade; // 0xDC0
		::System::Boolean ESPP_indirectSpecularIntensity_EnableOverrideDefaultValue; // 0xDC1
		::System::Single ESPP_indirectSpecularIntensity_OverrideDefaultValue; // 0xDC4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_rainDropColor_FieldHandleType; // 0xDC8
		::UnityEngine::Color ESPP_rainDropColor; // 0xDCC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_wetnessNoiseClamp_FieldHandleType; // 0xDDC
		::UnityEngine::Vector2 ESPP_wetnessNoiseClamp; // 0xDE0
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_rainDropSplashColor_FieldHandleType; // 0xDE8
		::UnityEngine::Color ESPP_rainDropSplashColor; // 0xDEC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_rainDropSplashCount_FieldHandleType; // 0xDFC
		::System::Int32 ESPP_rainDropSplashCount; // 0xE00
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_distanceFogStart_FieldHandleType; // 0xE04
		::System::Single ESPP_distanceFogStart; // 0xE08
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_fogHorizontalGradient_FieldHandleType; // 0xE0C
		::UnityEngine::Gradient* ESPP_fogHorizontalGradient; // 0xE10
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_heightFogHeight_FieldHandleType; // 0xE18
		::System::Single ESPP_heightFogHeight; // 0xE1C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_heightFogStart_FieldHandleType; // 0xE20
		::System::Single ESPP_heightFogStart; // 0xE24
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_volumetricFogColor_FieldHandleType; // 0xE28
		::UnityEngine::Color ESPP_volumetricFogColor; // 0xE2C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_skyVerticalGradient_FieldHandleType; // 0xE3C
		::UnityEngine::Gradient* ESPP_skyVerticalGradient; // 0xE40
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_skyHorizontalGradient_FieldHandleType; // 0xE48
		::UnityEngine::Gradient* ESPP_skyHorizontalGradient; // 0xE50
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_skyHorizontalHeight_FieldHandleType; // 0xE58
		::System::Single ESPP_skyHorizontalHeight; // 0xE5C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_skyHorizontalOffset_FieldHandleType; // 0xE60
		::System::Single ESPP_skyHorizontalOffset; // 0xE64
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_skyCloudHorizontalGradient_FieldHandleType; // 0xE68
		::UnityEngine::Gradient* ESPP_skyCloudHorizontalGradient; // 0xE70
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sunDiscColor_FieldHandleType; // 0xE78
		::UnityEngine::Color ESPP_sunDiscColor; // 0xE7C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_layer1MiddleCloudGradient_FieldHandleType; // 0xE8C
		::UnityEngine::Gradient* ESPP_layer1MiddleCloudGradient; // 0xE90
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_layer1CloudAroundSunColor_FieldHandleType; // 0xE98
		::UnityEngine::Color ESPP_layer1CloudAroundSunColor; // 0xE9C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_layer2MiddleCloudGradient_FieldHandleType; // 0xEAC
		::UnityEngine::Gradient* ESPP_layer2MiddleCloudGradient; // 0xEB0
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_layer2CloudAroundSunColor_FieldHandleType; // 0xEB8
		::UnityEngine::Color ESPP_layer2CloudAroundSunColor; // 0xEBC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_layer3MiddleCloudGradient_FieldHandleType; // 0xECC
		::UnityEngine::Gradient* ESPP_layer3MiddleCloudGradient; // 0xED0
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_layer3CloudAroundSunColor_FieldHandleType; // 0xED8
		::UnityEngine::Color ESPP_layer3CloudAroundSunColor; // 0xEDC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sceneLutContribution_FieldHandleType; // 0xEEC
		::System::Single ESPP_sceneLutContribution; // 0xEF0
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_enableLightShaft_FieldHandleType; // 0xEF4
		::System::Boolean ESPP_enableLightShaft_UseIt; // 0xEF8
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_enableLightShaft; // 0xF00
		::System::Boolean ESPP_enableLightShaft_EnableFade; // 0xF08
		::System::Boolean ESPP_enableLightShaft_EnableOverrideDefaultValue; // 0xF09
		::System::Boolean ESPP_enableLightShaft_OverrideDefaultValue; // 0xF0A
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lightShaftThreshold_FieldHandleType; // 0xF0C
		::System::Boolean ESPP_lightShaftThreshold_UseIt; // 0xF10
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_lightShaftThreshold; // 0xF18
		::System::Boolean ESPP_lightShaftThreshold_EnableFade; // 0xF20
		::System::Boolean ESPP_lightShaftThreshold_EnableOverrideDefaultValue; // 0xF21
		::System::Single ESPP_lightShaftThreshold_OverrideDefaultValue; // 0xF24
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lightShaftIntensity_FieldHandleType; // 0xF28
		::System::Boolean ESPP_lightShaftIntensity_UseIt; // 0xF2C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_lightShaftIntensity; // 0xF30
		::System::Boolean ESPP_lightShaftIntensity_EnableFade; // 0xF38
		::System::Boolean ESPP_lightShaftIntensity_EnableOverrideDefaultValue; // 0xF39
		::System::Single ESPP_lightShaftIntensity_OverrideDefaultValue; // 0xF3C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lightShaftColorClamp_FieldHandleType; // 0xF40
		::System::Boolean ESPP_lightShaftColorClamp_UseIt; // 0xF44
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_lightShaftColorClamp; // 0xF48
		::System::Boolean ESPP_lightShaftColorClamp_EnableFade; // 0xF50
		::System::Boolean ESPP_lightShaftColorClamp_EnableOverrideDefaultValue; // 0xF51
		::System::Boolean ESPP_lightShaftColorClamp_OverrideDefaultValue; // 0xF52
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lightShaftColor_FieldHandleType; // 0xF54
		::System::Boolean ESPP_lightShaftColor_UseIt; // 0xF58
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_lightShaftColor; // 0xF60
		::System::Boolean ESPP_lightShaftColor_EnableFade; // 0xF68
		::System::Boolean ESPP_lightShaftColor_EnableOverrideDefaultValue; // 0xF69
		::UnityEngine::Color ESPP_lightShaftColor_OverrideDefaultValue; // 0xF6C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lightShaftLength_FieldHandleType; // 0xF7C
		::System::Boolean ESPP_lightShaftLength_UseIt; // 0xF80
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_lightShaftLength; // 0xF88
		::System::Boolean ESPP_lightShaftLength_EnableFade; // 0xF90
		::System::Boolean ESPP_lightShaftLength_EnableOverrideDefaultValue; // 0xF91
		::System::Single ESPP_lightShaftLength_OverrideDefaultValue; // 0xF94
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lightShaftFadeLength_FieldHandleType; // 0xF98
		::System::Boolean ESPP_lightShaftFadeLength_UseIt; // 0xF9C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_lightShaftFadeLength; // 0xFA0
		::System::Boolean ESPP_lightShaftFadeLength_EnableFade; // 0xFA8
		::System::Boolean ESPP_lightShaftFadeLength_EnableOverrideDefaultValue; // 0xFA9
		::System::Single ESPP_lightShaftFadeLength_OverrideDefaultValue; // 0xFAC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lightShaftBlur_FieldHandleType; // 0xFB0
		::System::Boolean ESPP_lightShaftBlur_UseIt; // 0xFB4
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_lightShaftBlur; // 0xFB8
		::System::Boolean ESPP_lightShaftBlur_EnableFade; // 0xFC0
		::System::Boolean ESPP_lightShaftBlur_EnableOverrideDefaultValue; // 0xFC1
		::System::Boolean ESPP_lightShaftBlur_OverrideDefaultValue; // 0xFC2
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lightShaftUseCustomCenter_FieldHandleType; // 0xFC4
		::System::Boolean ESPP_lightShaftUseCustomCenter_UseIt; // 0xFC8
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_lightShaftUseCustomCenter; // 0xFD0
		::System::Boolean ESPP_lightShaftUseCustomCenter_EnableFade; // 0xFD8
		::System::Boolean ESPP_lightShaftUseCustomCenter_EnableOverrideDefaultValue; // 0xFD9
		::System::Boolean ESPP_lightShaftUseCustomCenter_OverrideDefaultValue; // 0xFDA
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lightShaftCustomCenter_FieldHandleType; // 0xFDC
		::System::Boolean ESPP_lightShaftCustomCenter_UseIt; // 0xFE0
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_lightShaftCustomCenter; // 0xFE8
		::System::Boolean ESPP_lightShaftCustomCenter_EnableFade; // 0xFF0
		::System::Boolean ESPP_lightShaftCustomCenter_EnableOverrideDefaultValue; // 0xFF1
		::UnityEngine::Vector2 ESPP_lightShaftCustomCenter_OverrideDefaultValue; // 0xFF4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_6B72D4EE8C6E907F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_6B72D4EE8C6E907F_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_5_28EB11670A8E5A86()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_28EB11670A8E5A86_OFFSET))(this);
		}

		::System::Void Method_5_F53BAAE38A584428()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_F53BAAE38A584428_OFFSET))(this);
		}

		::System::Void Method_5_25CD86BF8626C8D9(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_25CD86BF8626C8D9_OFFSET))(this, a1);
		}

		::System::Void Method_5_1682247A40B81983(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_1682247A40B81983_OFFSET))(this, a1);
		}

		::System::Void Method_5_BEB6D3AE6B2F04A5(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_BEB6D3AE6B2F04A5_OFFSET))(this, a1);
		}

		::System::Void Method_5_46737F85CDB5E497(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_46737F85CDB5E497_OFFSET))(this, a1);
		}

		::System::Void Method_5_46737F85CDB5E497_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_46737F85CDB5E497_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_8D6879CAA76F6588()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_8D6879CAA76F6588_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_B2C24AFA396A3C80(::System::String* a1, ::System::String* a2, ::System::Single a3, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a4, ::UnityEngine::ScriptableObject*& a5, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a6, ::UnityEngine::ScriptableObject*& a7, ::System::String*& a8)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_B2C24AFA396A3C80_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void Method_5_63D56313608AFE32(::MoleMole::Config::ConfigEntityScreenEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffectBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_63D56313608AFE32_OFFSET))(this, a1);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_5_43069389B18F0936()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_43069389B18F0936_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_D2A9D107FA1E5A31(::System::String* a1, ::System::String* a2)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_D2A9D107FA1E5A31_OFFSET))(this, a1, a2);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_429B9EF3AD5C70EB(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_429B9EF3AD5C70EB_OFFSET))(this, a1);
		}

		::System::String* Method_5_88B60F3B95FAA4F1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_88B60F3B95FAA4F1_OFFSET))(this);
		}

		::System::Boolean Method_5_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_391A84BCD9F51317_OFFSET))(this);
		}

		::System::String* Method_5_88B60F3B95FAA4F1_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_88B60F3B95FAA4F1_1_OFFSET))(this);
		}

		::System::Int32 Method_5_A1D8CD775DEC3C21()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_A1D8CD775DEC3C21_OFFSET))(this);
		}

		::System::Type* Method_5_4FB5F56430673EA6()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_4FB5F56430673EA6_OFFSET))(this);
		}

		::System::Type* Method_5_4FB5F56430673EA6_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_4FB5F56430673EA6_1_OFFSET))(this);
		}

		::System::String* Method_5_88B60F3B95FAA4F1_2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_88B60F3B95FAA4F1_2_OFFSET))(this);
		}

		::MoleMole::Config::ScreenEffectType Method_5_4ED0F9748169EC7E()
		{
			return ((::MoleMole::Config::ScreenEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_4ED0F9748169EC7E_OFFSET))(this);
		}

		::System::Void Method_5_76ECC59BC7430042(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_76ECC59BC7430042_OFFSET))(this, a1);
		}

		::System::Void Method_5_6BA7BB45F0BA72F4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_6BA7BB45F0BA72F4_OFFSET))(this);
		}

		::System::Void Method_5_76ECC59BC7430042_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_76ECC59BC7430042_1_OFFSET))(this, a1);
		}

		::MoleMole::Config::ScreenEffectType Method_5_55D8CF5F1FB0803A()
		{
			return ((::MoleMole::Config::ScreenEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_55D8CF5F1FB0803A_OFFSET))(this);
		}

		::System::String* Method_5_581A5078A2F29034()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_581A5078A2F29034_OFFSET))(this);
		}

		::System::Int32 Method_5_A1D8CD775DEC3C21_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_A1D8CD775DEC3C21_1_OFFSET))(this);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_5_54BEE211D32F7DEF()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_54BEE211D32F7DEF_OFFSET))(this);
		}

		::System::Void Method_5_2685B6183E614529(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_2685B6183E614529_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_D5F190FE5CE966B3(::System::String* a1, ::System::String* a2)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_D5F190FE5CE966B3_OFFSET))(this, a1, a2);
		}

		::System::Type* Method_5_A99467CE9479C990()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_A99467CE9479C990_OFFSET))(this);
		}

		::System::String* Method_5_126AB3935214AA22()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_126AB3935214AA22_OFFSET))(this);
		}

		::System::String* Method_5_DA1BF2C227DC3D86()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_DA1BF2C227DC3D86_OFFSET))(this);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
		}

		::System::Void Method_5_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_CA373AA1C7054598_1_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_3622C2D1E940D3F4(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_3622C2D1E940D3F4_OFFSET))(this, a1);
		}

		::System::Void Method_5_B4596DBEA209120C(::MoleMole::Config::ConfigEntityScreenEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffectBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_B4596DBEA209120C_OFFSET))(this, a1);
		}

		::System::Type* Method_5_A99467CE9479C990_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_A99467CE9479C990_1_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_BE3471DF7E3D4326(::System::String* a1, ::System::String* a2, ::System::Single a3, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a4, ::UnityEngine::ScriptableObject*& a5, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a6, ::UnityEngine::ScriptableObject*& a7, ::System::String*& a8)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_BE3471DF7E3D4326_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Boolean Method_5_391A84BCD9F51317_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_391A84BCD9F51317_1_OFFSET))(this);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_E7F1AECA7CFF8AAD_1_OFFSET))(this, a1);
		}
	};
}
