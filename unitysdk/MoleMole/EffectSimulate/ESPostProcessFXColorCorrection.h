#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESPostProcessBehavior_1.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rendering/Universal/FXColorCorrection_FxScreenLightMode.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class ConfigEntityFXColorCorrections; }
namespace MoleMole::Config { class ConfigEntityScreenEffectBase; }
namespace MoleMole::EffectSimulate { class BoolKeyframeCurve; }
namespace MoleMole::EffectSimulate { class ColorKeyframeCurve; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace MoleMole::EffectSimulate { class Vector2KeyframeCurve; }
namespace MoleMole::EffectSimulate { class Vector3KeyframeCurve; }
namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class Gradient; }
namespace UnityEngine { class ScriptableObject; }
namespace UnityEngine::Rendering::Universal { class FXColorCorrection; }
namespace UnityEngine::Rendering::Universal { class WeatherConfigScriptableObject; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x82BED10)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_25CD86BF8626C8D9_OFFSET UNITYSDK_OFFSET(0x13FB77A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x82BEB50)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0x13FB1930)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_34658B0D57648CD1_OFFSET UNITYSDK_OFFSET(0x13FB93D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_3622C2D1E940D3F4_OFFSET UNITYSDK_OFFSET(0x82BEA80)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x82BEC50)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x82BB0F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_429B9EF3AD5C70EB_OFFSET UNITYSDK_OFFSET(0x82BAFF0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_43069389B18F0936_OFFSET UNITYSDK_OFFSET(0x82BAEB0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_46737F85CDB5E497_1_OFFSET UNITYSDK_OFFSET(0x13FD5AF0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_46737F85CDB5E497_OFFSET UNITYSDK_OFFSET(0x13FD22D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_4ED0F9748169EC7E_OFFSET UNITYSDK_OFFSET(0x82BB3D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_4FB5F56430673EA6_1_OFFSET UNITYSDK_OFFSET(0x82BB2C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0x82BB240)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_54BEE211D32F7DEF_OFFSET UNITYSDK_OFFSET(0x82BEBC0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_55D8CF5F1FB0803A_OFFSET UNITYSDK_OFFSET(0x82BEB40)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_581A5078A2F29034_OFFSET UNITYSDK_OFFSET(0x82BED30)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_63D56313608AFE32_OFFSET UNITYSDK_OFFSET(0x82B9D30)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x13FB1100)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_6BA7BB45F0BA72F4_OFFSET UNITYSDK_OFFSET(0x82BB900)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_76ECC59BC7430042_1_OFFSET UNITYSDK_OFFSET(0x82BCEF0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_76ECC59BC7430042_OFFSET UNITYSDK_OFFSET(0x82BB430)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x82BEA70)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_88B60F3B95FAA4F1_1_OFFSET UNITYSDK_OFFSET(0x82BB150)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_88B60F3B95FAA4F1_2_OFFSET UNITYSDK_OFFSET(0x82BB340)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x82BB060)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_8D6879CAA76F6588_OFFSET UNITYSDK_OFFSET(0x82B9700)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_A1D8CD775DEC3C21_1_OFFSET UNITYSDK_OFFSET(0x82BEA90)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x82BB1E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_A99467CE9479C990_1_OFFSET UNITYSDK_OFFSET(0x82BED20)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_A99467CE9479C990_OFFSET UNITYSDK_OFFSET(0x82BEC40)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_B2C24AFA396A3C80_OFFSET UNITYSDK_OFFSET(0x82B9C20)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_B4596DBEA209120C_OFFSET UNITYSDK_OFFSET(0x82BEC30)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_BE3471DF7E3D4326_OFFSET UNITYSDK_OFFSET(0x82BEAF0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_BEB6D3AE6B2F04A5_OFFSET UNITYSDK_OFFSET(0x13FCC0B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x82BEBD0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13FB18D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_D2A9D107FA1E5A31_OFFSET UNITYSDK_OFFSET(0x82BAF80)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_D5F190FE5CE966B3_OFFSET UNITYSDK_OFFSET(0x82BEA60)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x82BECB0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_E7F1AECA7CFF8AAD_1_OFFSET UNITYSDK_OFFSET(0x82BED40)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x82BEB30)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_F53BAAE38A584428_OFFSET UNITYSDK_OFFSET(0x13FB2660)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x82BD3C0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessFXColorCorrection_TypeDefinitionIndex = 69410;

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
		::System::Single _VolDefault_sceneSpecialSkySaturation; // 0x174
		::System::Single _VolDefault_sceneSpecialPPSIgnoreRidus; // 0x178
		::System::Single _VolDefault_sceneSpecialPPSRadiusAlphaPow; // 0x17C
		::UnityEngine::Color _VolDefault_sceneSpecialPPSEmissionColor; // 0x180
		::System::Single _VolDefault_postExposure; // 0x190
		::System::Single _VolDefault_contrast; // 0x194
		::System::Single _VolDefault_saturation; // 0x198
		::System::Single _VolDefault_gamma; // 0x19C
		::System::Boolean _VolDefault_lutInvert; // 0x1A0
		::System::Boolean _VolDefault_lutToneColors; // 0x1A1
		::UnityEngine::Color _VolDefault_lutToneA; // 0x1A4
		::UnityEngine::Color _VolDefault_lutToneB; // 0x1B4
		::System::Single _VolDefault_lutMiddlePoint; // 0x1C4
		::System::Single _VolDefault_lutSoftness; // 0x1C8
		::System::Single _VolDefault_desaturate; // 0x1CC
		::System::Boolean _VolDefault_invert; // 0x1D0
		::System::Boolean _VolDefault_toneColors; // 0x1D1
		::UnityEngine::Color _VolDefault_toneA; // 0x1D4
		::UnityEngine::Color _VolDefault_toneB; // 0x1E4
		::System::Single _VolDefault_middlePoint; // 0x1F4
		::System::Single _VolDefault_softness; // 0x1F8
		::System::Boolean _VolDefault_fxFogMaskPassOn; // 0x1FC
		::System::Single _VolDefault_fxColorSaturation; // 0x200
		::System::Boolean _VolDefault_justControlParticleLight; // 0x204
		::System::Single _VolDefault_localLightMultiplyIntensity; // 0x208
		::System::Single _VolDefault_localLightThreadHold; // 0x20C
		::System::Single _VolDefault_indirectSpecularIntensity; // 0x210
		::UnityEngine::Color _VolDefault_rainDropColor; // 0x214
		::UnityEngine::Vector2 _VolDefault_wetnessNoiseClamp; // 0x224
		::UnityEngine::Color _VolDefault_rainDropSplashColor; // 0x22C
		::System::Int32 _VolDefault_rainDropSplashCount; // 0x23C
		::System::Single _VolDefault_distanceFogStart; // 0x240
		::UnityEngine::Gradient* _VolDefault_fogHorizontalGradient; // 0x248
		::System::Single _VolDefault_heightFogHeight; // 0x250
		::System::Single _VolDefault_heightFogStart; // 0x254
		::UnityEngine::Color _VolDefault_volumetricFogColor; // 0x258
		::UnityEngine::Gradient* _VolDefault_skyVerticalGradient; // 0x268
		::UnityEngine::Gradient* _VolDefault_skyHorizontalGradient; // 0x270
		::System::Single _VolDefault_skyHorizontalHeight; // 0x278
		::System::Single _VolDefault_skyHorizontalOffset; // 0x27C
		::UnityEngine::Gradient* _VolDefault_skyCloudHorizontalGradient; // 0x280
		::UnityEngine::Color _VolDefault_sunDiscColor; // 0x288
		::UnityEngine::Gradient* _VolDefault_layer1MiddleCloudGradient; // 0x298
		::UnityEngine::Color _VolDefault_layer1CloudAroundSunColor; // 0x2A0
		::UnityEngine::Gradient* _VolDefault_layer2MiddleCloudGradient; // 0x2B0
		::UnityEngine::Color _VolDefault_layer2CloudAroundSunColor; // 0x2B8
		::UnityEngine::Gradient* _VolDefault_layer3MiddleCloudGradient; // 0x2C8
		::UnityEngine::Color _VolDefault_layer3CloudAroundSunColor; // 0x2D0
		::System::Single _VolDefault_sceneLutContribution; // 0x2E0
		::System::Boolean _VolDefault_enableLightShaft; // 0x2E4
		::System::Single _VolDefault_lightShaftThreshold; // 0x2E8
		::System::Single _VolDefault_lightShaftIntensity; // 0x2EC
		::System::Boolean _VolDefault_lightShaftColorClamp; // 0x2F0
		::UnityEngine::Color _VolDefault_lightShaftColor; // 0x2F4
		::System::Single _VolDefault_lightShaftLength; // 0x304
		::System::Single _VolDefault_lightShaftFadeLength; // 0x308
		::System::Boolean _VolDefault_lightShaftBlur; // 0x30C
		::System::Boolean _VolDefault_lightShaftUseCustomCenter; // 0x30D
		::UnityEngine::Vector2 _VolDefault_lightShaftCustomCenter; // 0x310
		::System::Boolean _VolPreVal_enableCameraClip_overrideState; // 0x318
		::System::Boolean _VolPreVal_enableCameraClip; // 0x319
		::System::Boolean _VolPreVal_cameraClipDistance_overrideState; // 0x31A
		::System::Single _VolPreVal_cameraClipDistance; // 0x31C
		::System::Boolean _VolPreVal_cameraClipExtension_overrideState; // 0x320
		::UnityEngine::Vector3 _VolPreVal_cameraClipExtension; // 0x324
		::System::Boolean _VolPreVal_cameraClipAlpha_overrideState; // 0x330
		::System::Single _VolPreVal_cameraClipAlpha; // 0x334
		::System::Boolean _VolPreVal_weatherConfig_overrideState; // 0x338
		::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject* _VolPreVal_weatherConfig; // 0x340
		::System::Boolean _VolPreVal_weatherConfigWeight_overrideState; // 0x348
		::System::Single _VolPreVal_weatherConfigWeight; // 0x34C
		::System::Boolean _VolPreVal_fxLightShaftMaskOn_overrideState; // 0x350
		::System::Boolean _VolPreVal_fxLightShaftMaskOn; // 0x351
		::System::Boolean _VolPreVal_fxFxScreenLightMode_overrideState; // 0x352
		::UnityEngine::Rendering::Universal::FXColorCorrection_FxScreenLightMode _VolPreVal_fxFxScreenLightMode; // 0x354
		::System::Boolean _VolPreVal_fxScreenLightColor_overrideState; // 0x358
		::UnityEngine::Color _VolPreVal_fxScreenLightColor; // 0x35C
		::System::Boolean _VolPreVal_fxScreenLightMaskOn_overrideState; // 0x36C
		::System::Boolean _VolPreVal_fxScreenLightMaskOn; // 0x36D
		::System::Boolean _VolPreVal_sceneSpecialPPSEffectIntensity_overrideState; // 0x36E
		::System::Single _VolPreVal_sceneSpecialPPSEffectIntensity; // 0x370
		::System::Boolean _VolPreVal_sceneSpecialSkySaturation_overrideState; // 0x374
		::System::Single _VolPreVal_sceneSpecialSkySaturation; // 0x378
		::System::Boolean _VolPreVal_sceneSpecialPPSIgnoreRidus_overrideState; // 0x37C
		::System::Single _VolPreVal_sceneSpecialPPSIgnoreRidus; // 0x380
		::System::Boolean _VolPreVal_sceneSpecialPPSRadiusAlphaPow_overrideState; // 0x384
		::System::Single _VolPreVal_sceneSpecialPPSRadiusAlphaPow; // 0x388
		::System::Boolean _VolPreVal_sceneSpecialPPSEmissionColor_overrideState; // 0x38C
		::UnityEngine::Color _VolPreVal_sceneSpecialPPSEmissionColor; // 0x390
		::System::Boolean _VolPreVal_postExposure_overrideState; // 0x3A0
		::System::Single _VolPreVal_postExposure; // 0x3A4
		::System::Boolean _VolPreVal_contrast_overrideState; // 0x3A8
		::System::Single _VolPreVal_contrast; // 0x3AC
		::System::Boolean _VolPreVal_saturation_overrideState; // 0x3B0
		::System::Single _VolPreVal_saturation; // 0x3B4
		::System::Boolean _VolPreVal_gamma_overrideState; // 0x3B8
		::System::Single _VolPreVal_gamma; // 0x3BC
		::System::Boolean _VolPreVal_lutInvert_overrideState; // 0x3C0
		::System::Boolean _VolPreVal_lutInvert; // 0x3C1
		::System::Boolean _VolPreVal_lutToneColors_overrideState; // 0x3C2
		::System::Boolean _VolPreVal_lutToneColors; // 0x3C3
		::System::Boolean _VolPreVal_lutToneA_overrideState; // 0x3C4
		::UnityEngine::Color _VolPreVal_lutToneA; // 0x3C8
		::System::Boolean _VolPreVal_lutToneB_overrideState; // 0x3D8
		::UnityEngine::Color _VolPreVal_lutToneB; // 0x3DC
		::System::Boolean _VolPreVal_lutMiddlePoint_overrideState; // 0x3EC
		::System::Single _VolPreVal_lutMiddlePoint; // 0x3F0
		::System::Boolean _VolPreVal_lutSoftness_overrideState; // 0x3F4
		::System::Single _VolPreVal_lutSoftness; // 0x3F8
		::System::Boolean _VolPreVal_desaturate_overrideState; // 0x3FC
		::System::Single _VolPreVal_desaturate; // 0x400
		::System::Boolean _VolPreVal_invert_overrideState; // 0x404
		::System::Boolean _VolPreVal_invert; // 0x405
		::System::Boolean _VolPreVal_toneColors_overrideState; // 0x406
		::System::Boolean _VolPreVal_toneColors; // 0x407
		::System::Boolean _VolPreVal_toneA_overrideState; // 0x408
		::UnityEngine::Color _VolPreVal_toneA; // 0x40C
		::System::Boolean _VolPreVal_toneB_overrideState; // 0x41C
		::UnityEngine::Color _VolPreVal_toneB; // 0x420
		::System::Boolean _VolPreVal_middlePoint_overrideState; // 0x430
		::System::Single _VolPreVal_middlePoint; // 0x434
		::System::Boolean _VolPreVal_softness_overrideState; // 0x438
		::System::Single _VolPreVal_softness; // 0x43C
		::System::Boolean _VolPreVal_fxFogMaskPassOn_overrideState; // 0x440
		::System::Boolean _VolPreVal_fxFogMaskPassOn; // 0x441
		::System::Boolean _VolPreVal_fxColorSaturation_overrideState; // 0x442
		::System::Single _VolPreVal_fxColorSaturation; // 0x444
		::System::Boolean _VolPreVal_justControlParticleLight_overrideState; // 0x448
		::System::Boolean _VolPreVal_justControlParticleLight; // 0x449
		::System::Boolean _VolPreVal_localLightMultiplyIntensity_overrideState; // 0x44A
		::System::Single _VolPreVal_localLightMultiplyIntensity; // 0x44C
		::System::Boolean _VolPreVal_localLightThreadHold_overrideState; // 0x450
		::System::Single _VolPreVal_localLightThreadHold; // 0x454
		::System::Boolean _VolPreVal_indirectSpecularIntensity_overrideState; // 0x458
		::System::Single _VolPreVal_indirectSpecularIntensity; // 0x45C
		::System::Boolean _VolPreVal_rainDropColor_overrideState; // 0x460
		::UnityEngine::Color _VolPreVal_rainDropColor; // 0x464
		::System::Boolean _VolPreVal_wetnessNoiseClamp_overrideState; // 0x474
		::UnityEngine::Vector2 _VolPreVal_wetnessNoiseClamp; // 0x478
		::System::Boolean _VolPreVal_rainDropSplashColor_overrideState; // 0x480
		::UnityEngine::Color _VolPreVal_rainDropSplashColor; // 0x484
		::System::Boolean _VolPreVal_rainDropSplashCount_overrideState; // 0x494
		::System::Int32 _VolPreVal_rainDropSplashCount; // 0x498
		::System::Boolean _VolPreVal_distanceFogStart_overrideState; // 0x49C
		::System::Single _VolPreVal_distanceFogStart; // 0x4A0
		::System::Boolean _VolPreVal_fogHorizontalGradient_overrideState; // 0x4A4
		::UnityEngine::Gradient* _VolPreVal_fogHorizontalGradient; // 0x4A8
		::System::Boolean _VolPreVal_heightFogHeight_overrideState; // 0x4B0
		::System::Single _VolPreVal_heightFogHeight; // 0x4B4
		::System::Boolean _VolPreVal_heightFogStart_overrideState; // 0x4B8
		::System::Single _VolPreVal_heightFogStart; // 0x4BC
		::System::Boolean _VolPreVal_volumetricFogColor_overrideState; // 0x4C0
		::UnityEngine::Color _VolPreVal_volumetricFogColor; // 0x4C4
		::System::Boolean _VolPreVal_skyVerticalGradient_overrideState; // 0x4D4
		::UnityEngine::Gradient* _VolPreVal_skyVerticalGradient; // 0x4D8
		::System::Boolean _VolPreVal_skyHorizontalGradient_overrideState; // 0x4E0
		::UnityEngine::Gradient* _VolPreVal_skyHorizontalGradient; // 0x4E8
		::System::Boolean _VolPreVal_skyHorizontalHeight_overrideState; // 0x4F0
		::System::Single _VolPreVal_skyHorizontalHeight; // 0x4F4
		::System::Boolean _VolPreVal_skyHorizontalOffset_overrideState; // 0x4F8
		::System::Single _VolPreVal_skyHorizontalOffset; // 0x4FC
		::System::Boolean _VolPreVal_skyCloudHorizontalGradient_overrideState; // 0x500
		::UnityEngine::Gradient* _VolPreVal_skyCloudHorizontalGradient; // 0x508
		::System::Boolean _VolPreVal_sunDiscColor_overrideState; // 0x510
		::UnityEngine::Color _VolPreVal_sunDiscColor; // 0x514
		::System::Boolean _VolPreVal_layer1MiddleCloudGradient_overrideState; // 0x524
		::UnityEngine::Gradient* _VolPreVal_layer1MiddleCloudGradient; // 0x528
		::System::Boolean _VolPreVal_layer1CloudAroundSunColor_overrideState; // 0x530
		::UnityEngine::Color _VolPreVal_layer1CloudAroundSunColor; // 0x534
		::System::Boolean _VolPreVal_layer2MiddleCloudGradient_overrideState; // 0x544
		::UnityEngine::Gradient* _VolPreVal_layer2MiddleCloudGradient; // 0x548
		::System::Boolean _VolPreVal_layer2CloudAroundSunColor_overrideState; // 0x550
		::UnityEngine::Color _VolPreVal_layer2CloudAroundSunColor; // 0x554
		::System::Boolean _VolPreVal_layer3MiddleCloudGradient_overrideState; // 0x564
		::UnityEngine::Gradient* _VolPreVal_layer3MiddleCloudGradient; // 0x568
		::System::Boolean _VolPreVal_layer3CloudAroundSunColor_overrideState; // 0x570
		::UnityEngine::Color _VolPreVal_layer3CloudAroundSunColor; // 0x574
		::System::Boolean _VolPreVal_sceneLutContribution_overrideState; // 0x584
		::System::Single _VolPreVal_sceneLutContribution; // 0x588
		::System::Boolean _VolPreVal_enableLightShaft_overrideState; // 0x58C
		::System::Boolean _VolPreVal_enableLightShaft; // 0x58D
		::System::Boolean _VolPreVal_lightShaftThreshold_overrideState; // 0x58E
		::System::Single _VolPreVal_lightShaftThreshold; // 0x590
		::System::Boolean _VolPreVal_lightShaftIntensity_overrideState; // 0x594
		::System::Single _VolPreVal_lightShaftIntensity; // 0x598
		::System::Boolean _VolPreVal_lightShaftColorClamp_overrideState; // 0x59C
		::System::Boolean _VolPreVal_lightShaftColorClamp; // 0x59D
		::System::Boolean _VolPreVal_lightShaftColor_overrideState; // 0x59E
		::UnityEngine::Color _VolPreVal_lightShaftColor; // 0x5A0
		::System::Boolean _VolPreVal_lightShaftLength_overrideState; // 0x5B0
		::System::Single _VolPreVal_lightShaftLength; // 0x5B4
		::System::Boolean _VolPreVal_lightShaftFadeLength_overrideState; // 0x5B8
		::System::Single _VolPreVal_lightShaftFadeLength; // 0x5BC
		::System::Boolean _VolPreVal_lightShaftBlur_overrideState; // 0x5C0
		::System::Boolean _VolPreVal_lightShaftBlur; // 0x5C1
		::System::Boolean _VolPreVal_lightShaftUseCustomCenter_overrideState; // 0x5C2
		::System::Boolean _VolPreVal_lightShaftUseCustomCenter; // 0x5C3
		::System::Boolean _VolPreVal_lightShaftCustomCenter_overrideState; // 0x5C4
		::UnityEngine::Vector2 _VolPreVal_lightShaftCustomCenter; // 0x5C8
		::System::Single _TimelineCurveFirstVal_cameraClipDistance; // 0x5D0
		::System::Single _TimelineCurveLastVal_cameraClipDistance; // 0x5D4
		::UnityEngine::Vector3 _TimelineCurveFirstVal_cameraClipExtension; // 0x5D8
		::UnityEngine::Vector3 _TimelineCurveLastVal_cameraClipExtension; // 0x5E4
		::System::Single _TimelineCurveFirstVal_cameraClipAlpha; // 0x5F0
		::System::Single _TimelineCurveLastVal_cameraClipAlpha; // 0x5F4
		::System::Single _TimelineCurveFirstVal_weatherConfigWeight; // 0x5F8
		::System::Single _TimelineCurveLastVal_weatherConfigWeight; // 0x5FC
		::System::Boolean _TimelineCurveFirstVal_fxLightShaftMaskOn; // 0x600
		::System::Boolean _TimelineCurveLastVal_fxLightShaftMaskOn; // 0x601
		::UnityEngine::Color _TimelineCurveFirstVal_fxScreenLightColor; // 0x604
		::UnityEngine::Color _TimelineCurveLastVal_fxScreenLightColor; // 0x614
		::System::Boolean _TimelineCurveFirstVal_fxScreenLightMaskOn; // 0x624
		::System::Boolean _TimelineCurveLastVal_fxScreenLightMaskOn; // 0x625
		::System::Single _TimelineCurveFirstVal_sceneSpecialPPSEffectIntensity; // 0x628
		::System::Single _TimelineCurveLastVal_sceneSpecialPPSEffectIntensity; // 0x62C
		::UnityEngine::Color _TimelineCurveFirstVal_sceneSpecialPPSEmissionColor; // 0x630
		::UnityEngine::Color _TimelineCurveLastVal_sceneSpecialPPSEmissionColor; // 0x640
		::System::Single _TimelineCurveFirstVal_postExposure; // 0x650
		::System::Single _TimelineCurveLastVal_postExposure; // 0x654
		::System::Single _TimelineCurveFirstVal_contrast; // 0x658
		::System::Single _TimelineCurveLastVal_contrast; // 0x65C
		::System::Single _TimelineCurveFirstVal_saturation; // 0x660
		::System::Single _TimelineCurveLastVal_saturation; // 0x664
		::System::Single _TimelineCurveFirstVal_gamma; // 0x668
		::System::Single _TimelineCurveLastVal_gamma; // 0x66C
		::System::Boolean _TimelineCurveFirstVal_lutInvert; // 0x670
		::System::Boolean _TimelineCurveLastVal_lutInvert; // 0x671
		::System::Boolean _TimelineCurveFirstVal_lutToneColors; // 0x672
		::System::Boolean _TimelineCurveLastVal_lutToneColors; // 0x673
		::System::Single _TimelineCurveFirstVal_lutMiddlePoint; // 0x674
		::System::Single _TimelineCurveLastVal_lutMiddlePoint; // 0x678
		::System::Single _TimelineCurveFirstVal_lutSoftness; // 0x67C
		::System::Single _TimelineCurveLastVal_lutSoftness; // 0x680
		::System::Single _TimelineCurveFirstVal_desaturate; // 0x684
		::System::Single _TimelineCurveLastVal_desaturate; // 0x688
		::System::Boolean _TimelineCurveFirstVal_invert; // 0x68C
		::System::Boolean _TimelineCurveLastVal_invert; // 0x68D
		::System::Boolean _TimelineCurveFirstVal_toneColors; // 0x68E
		::System::Boolean _TimelineCurveLastVal_toneColors; // 0x68F
		::System::Single _TimelineCurveFirstVal_middlePoint; // 0x690
		::System::Single _TimelineCurveLastVal_middlePoint; // 0x694
		::System::Single _TimelineCurveFirstVal_softness; // 0x698
		::System::Single _TimelineCurveLastVal_softness; // 0x69C
		::System::Boolean _TimelineCurveFirstVal_fxFogMaskPassOn; // 0x6A0
		::System::Boolean _TimelineCurveLastVal_fxFogMaskPassOn; // 0x6A1
		::System::Single _TimelineCurveFirstVal_fxColorSaturation; // 0x6A4
		::System::Single _TimelineCurveLastVal_fxColorSaturation; // 0x6A8
		::System::Boolean _TimelineCurveFirstVal_justControlParticleLight; // 0x6AC
		::System::Boolean _TimelineCurveLastVal_justControlParticleLight; // 0x6AD
		::System::Single _TimelineCurveFirstVal_localLightMultiplyIntensity; // 0x6B0
		::System::Single _TimelineCurveLastVal_localLightMultiplyIntensity; // 0x6B4
		::System::Single _TimelineCurveFirstVal_localLightThreadHold; // 0x6B8
		::System::Single _TimelineCurveLastVal_localLightThreadHold; // 0x6BC
		::System::Single _TimelineCurveFirstVal_indirectSpecularIntensity; // 0x6C0
		::System::Single _TimelineCurveLastVal_indirectSpecularIntensity; // 0x6C4
		::System::Boolean _TimelineCurveFirstVal_enableLightShaft; // 0x6C8
		::System::Boolean _TimelineCurveLastVal_enableLightShaft; // 0x6C9
		::System::Single _TimelineCurveFirstVal_lightShaftThreshold; // 0x6CC
		::System::Single _TimelineCurveLastVal_lightShaftThreshold; // 0x6D0
		::System::Single _TimelineCurveFirstVal_lightShaftIntensity; // 0x6D4
		::System::Single _TimelineCurveLastVal_lightShaftIntensity; // 0x6D8
		::System::Boolean _TimelineCurveFirstVal_lightShaftColorClamp; // 0x6DC
		::System::Boolean _TimelineCurveLastVal_lightShaftColorClamp; // 0x6DD
		::UnityEngine::Color _TimelineCurveFirstVal_lightShaftColor; // 0x6E0
		::UnityEngine::Color _TimelineCurveLastVal_lightShaftColor; // 0x6F0
		::System::Single _TimelineCurveFirstVal_lightShaftLength; // 0x700
		::System::Single _TimelineCurveLastVal_lightShaftLength; // 0x704
		::System::Single _TimelineCurveFirstVal_lightShaftFadeLength; // 0x708
		::System::Single _TimelineCurveLastVal_lightShaftFadeLength; // 0x70C
		::System::Boolean _TimelineCurveFirstVal_lightShaftBlur; // 0x710
		::System::Boolean _TimelineCurveLastVal_lightShaftBlur; // 0x711
		::System::Boolean _TimelineCurveFirstVal_lightShaftUseCustomCenter; // 0x712
		::System::Boolean _TimelineCurveLastVal_lightShaftUseCustomCenter; // 0x713
		::UnityEngine::Vector2 _TimelineCurveFirstVal_lightShaftCustomCenter; // 0x714
		::UnityEngine::Vector2 _TimelineCurveLastVal_lightShaftCustomCenter; // 0x71C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_enableCameraClip_FieldHandleType; // 0x724
		::System::Boolean ESPP_enableCameraClip; // 0x728
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_cameraClipDistance_FieldHandleType; // 0x72C
		::System::Boolean ESPP_cameraClipDistance_UseIt; // 0x730
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_cameraClipDistance; // 0x738
		::System::Boolean ESPP_cameraClipDistance_EnableFade; // 0x740
		::System::Boolean ESPP_cameraClipDistance_EnableOverrideDefaultValue; // 0x741
		::System::Single ESPP_cameraClipDistance_OverrideDefaultValue; // 0x744
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_cameraClipExtension_FieldHandleType; // 0x748
		::System::Boolean ESPP_cameraClipExtension_UseIt; // 0x74C
		::MoleMole::EffectSimulate::Vector3KeyframeCurve* ESPP_cameraClipExtension; // 0x750
		::System::Boolean ESPP_cameraClipExtension_EnableFade; // 0x758
		::System::Boolean ESPP_cameraClipExtension_EnableOverrideDefaultValue; // 0x759
		::UnityEngine::Vector3 ESPP_cameraClipExtension_OverrideDefaultValue; // 0x75C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_cameraClipAlpha_FieldHandleType; // 0x768
		::System::Boolean ESPP_cameraClipAlpha_UseIt; // 0x76C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_cameraClipAlpha; // 0x770
		::System::Boolean ESPP_cameraClipAlpha_EnableFade; // 0x778
		::System::Boolean ESPP_cameraClipAlpha_EnableOverrideDefaultValue; // 0x779
		::System::Single ESPP_cameraClipAlpha_OverrideDefaultValue; // 0x77C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_weatherConfig_FieldHandleType; // 0x780
		::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject* ESPP_weatherConfig; // 0x788
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_weatherConfigWeight_FieldHandleType; // 0x790
		::System::Boolean ESPP_weatherConfigWeight_UseIt; // 0x794
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_weatherConfigWeight; // 0x798
		::System::Boolean ESPP_weatherConfigWeight_EnableFade; // 0x7A0
		::System::Boolean ESPP_weatherConfigWeight_EnableOverrideDefaultValue; // 0x7A1
		::System::Single ESPP_weatherConfigWeight_OverrideDefaultValue; // 0x7A4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_fxLightShaftMaskOn_FieldHandleType; // 0x7A8
		::System::Boolean ESPP_fxLightShaftMaskOn_UseIt; // 0x7AC
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_fxLightShaftMaskOn; // 0x7B0
		::System::Boolean ESPP_fxLightShaftMaskOn_EnableFade; // 0x7B8
		::System::Boolean ESPP_fxLightShaftMaskOn_EnableOverrideDefaultValue; // 0x7B9
		::System::Boolean ESPP_fxLightShaftMaskOn_OverrideDefaultValue; // 0x7BA
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_fxFxScreenLightMode_FieldHandleType; // 0x7BC
		::UnityEngine::Rendering::Universal::FXColorCorrection_FxScreenLightMode ESPP_fxFxScreenLightMode; // 0x7C0
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_fxScreenLightColor_FieldHandleType; // 0x7C4
		::System::Boolean ESPP_fxScreenLightColor_UseIt; // 0x7C8
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_fxScreenLightColor; // 0x7D0
		::System::Boolean ESPP_fxScreenLightColor_EnableFade; // 0x7D8
		::System::Boolean ESPP_fxScreenLightColor_EnableOverrideDefaultValue; // 0x7D9
		::UnityEngine::Color ESPP_fxScreenLightColor_OverrideDefaultValue; // 0x7DC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_fxScreenLightMaskOn_FieldHandleType; // 0x7EC
		::System::Boolean ESPP_fxScreenLightMaskOn_UseIt; // 0x7F0
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_fxScreenLightMaskOn; // 0x7F8
		::System::Boolean ESPP_fxScreenLightMaskOn_EnableFade; // 0x800
		::System::Boolean ESPP_fxScreenLightMaskOn_EnableOverrideDefaultValue; // 0x801
		::System::Boolean ESPP_fxScreenLightMaskOn_OverrideDefaultValue; // 0x802
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sceneSpecialPPSEffectIntensity_FieldHandleType; // 0x804
		::System::Boolean ESPP_sceneSpecialPPSEffectIntensity_UseIt; // 0x808
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_sceneSpecialPPSEffectIntensity; // 0x810
		::System::Boolean ESPP_sceneSpecialPPSEffectIntensity_EnableFade; // 0x818
		::System::Boolean ESPP_sceneSpecialPPSEffectIntensity_EnableOverrideDefaultValue; // 0x819
		::System::Single ESPP_sceneSpecialPPSEffectIntensity_OverrideDefaultValue; // 0x81C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sceneSpecialSkySaturation_FieldHandleType; // 0x820
		::System::Single ESPP_sceneSpecialSkySaturation; // 0x824
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sceneSpecialPPSIgnoreRidus_FieldHandleType; // 0x828
		::System::Single ESPP_sceneSpecialPPSIgnoreRidus; // 0x82C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sceneSpecialPPSRadiusAlphaPow_FieldHandleType; // 0x830
		::System::Single ESPP_sceneSpecialPPSRadiusAlphaPow; // 0x834
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sceneSpecialPPSEmissionColor_FieldHandleType; // 0x838
		::System::Boolean ESPP_sceneSpecialPPSEmissionColor_UseIt; // 0x83C
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_sceneSpecialPPSEmissionColor; // 0x840
		::System::Boolean ESPP_sceneSpecialPPSEmissionColor_EnableFade; // 0x848
		::System::Boolean ESPP_sceneSpecialPPSEmissionColor_EnableOverrideDefaultValue; // 0x849
		::UnityEngine::Color ESPP_sceneSpecialPPSEmissionColor_OverrideDefaultValue; // 0x84C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_postExposure_FieldHandleType; // 0x85C
		::System::Boolean ESPP_postExposure_UseIt; // 0x860
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_postExposure; // 0x868
		::System::Boolean ESPP_postExposure_EnableFade; // 0x870
		::System::Boolean ESPP_postExposure_EnableOverrideDefaultValue; // 0x871
		::System::Single ESPP_postExposure_OverrideDefaultValue; // 0x874
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_contrast_FieldHandleType; // 0x878
		::System::Boolean ESPP_contrast_UseIt; // 0x87C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_contrast; // 0x880
		::System::Boolean ESPP_contrast_EnableFade; // 0x888
		::System::Boolean ESPP_contrast_EnableOverrideDefaultValue; // 0x889
		::System::Single ESPP_contrast_OverrideDefaultValue; // 0x88C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_saturation_FieldHandleType; // 0x890
		::System::Boolean ESPP_saturation_UseIt; // 0x894
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_saturation; // 0x898
		::System::Boolean ESPP_saturation_EnableFade; // 0x8A0
		::System::Boolean ESPP_saturation_EnableOverrideDefaultValue; // 0x8A1
		::System::Single ESPP_saturation_OverrideDefaultValue; // 0x8A4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_gamma_FieldHandleType; // 0x8A8
		::System::Boolean ESPP_gamma_UseIt; // 0x8AC
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_gamma; // 0x8B0
		::System::Boolean ESPP_gamma_EnableFade; // 0x8B8
		::System::Boolean ESPP_gamma_EnableOverrideDefaultValue; // 0x8B9
		::System::Single ESPP_gamma_OverrideDefaultValue; // 0x8BC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lutInvert_FieldHandleType; // 0x8C0
		::System::Boolean ESPP_lutInvert_UseIt; // 0x8C4
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_lutInvert; // 0x8C8
		::System::Boolean ESPP_lutInvert_EnableFade; // 0x8D0
		::System::Boolean ESPP_lutInvert_EnableOverrideDefaultValue; // 0x8D1
		::System::Boolean ESPP_lutInvert_OverrideDefaultValue; // 0x8D2
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lutToneColors_FieldHandleType; // 0x8D4
		::System::Boolean ESPP_lutToneColors_UseIt; // 0x8D8
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_lutToneColors; // 0x8E0
		::System::Boolean ESPP_lutToneColors_EnableFade; // 0x8E8
		::System::Boolean ESPP_lutToneColors_EnableOverrideDefaultValue; // 0x8E9
		::System::Boolean ESPP_lutToneColors_OverrideDefaultValue; // 0x8EA
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lutToneA_FieldHandleType; // 0x8EC
		::UnityEngine::Color ESPP_lutToneA; // 0x8F0
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lutToneB_FieldHandleType; // 0x900
		::UnityEngine::Color ESPP_lutToneB; // 0x904
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lutMiddlePoint_FieldHandleType; // 0x914
		::System::Boolean ESPP_lutMiddlePoint_UseIt; // 0x918
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_lutMiddlePoint; // 0x920
		::System::Boolean ESPP_lutMiddlePoint_EnableFade; // 0x928
		::System::Boolean ESPP_lutMiddlePoint_EnableOverrideDefaultValue; // 0x929
		::System::Single ESPP_lutMiddlePoint_OverrideDefaultValue; // 0x92C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lutSoftness_FieldHandleType; // 0x930
		::System::Boolean ESPP_lutSoftness_UseIt; // 0x934
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_lutSoftness; // 0x938
		::System::Boolean ESPP_lutSoftness_EnableFade; // 0x940
		::System::Boolean ESPP_lutSoftness_EnableOverrideDefaultValue; // 0x941
		::System::Single ESPP_lutSoftness_OverrideDefaultValue; // 0x944
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_desaturate_FieldHandleType; // 0x948
		::System::Boolean ESPP_desaturate_UseIt; // 0x94C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_desaturate; // 0x950
		::System::Boolean ESPP_desaturate_EnableFade; // 0x958
		::System::Boolean ESPP_desaturate_EnableOverrideDefaultValue; // 0x959
		::System::Single ESPP_desaturate_OverrideDefaultValue; // 0x95C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_invert_FieldHandleType; // 0x960
		::System::Boolean ESPP_invert_UseIt; // 0x964
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_invert; // 0x968
		::System::Boolean ESPP_invert_EnableFade; // 0x970
		::System::Boolean ESPP_invert_EnableOverrideDefaultValue; // 0x971
		::System::Boolean ESPP_invert_OverrideDefaultValue; // 0x972
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_toneColors_FieldHandleType; // 0x974
		::System::Boolean ESPP_toneColors_UseIt; // 0x978
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_toneColors; // 0x980
		::System::Boolean ESPP_toneColors_EnableFade; // 0x988
		::System::Boolean ESPP_toneColors_EnableOverrideDefaultValue; // 0x989
		::System::Boolean ESPP_toneColors_OverrideDefaultValue; // 0x98A
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_toneA_FieldHandleType; // 0x98C
		::UnityEngine::Color ESPP_toneA; // 0x990
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_toneB_FieldHandleType; // 0x9A0
		::UnityEngine::Color ESPP_toneB; // 0x9A4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_middlePoint_FieldHandleType; // 0x9B4
		::System::Boolean ESPP_middlePoint_UseIt; // 0x9B8
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_middlePoint; // 0x9C0
		::System::Boolean ESPP_middlePoint_EnableFade; // 0x9C8
		::System::Boolean ESPP_middlePoint_EnableOverrideDefaultValue; // 0x9C9
		::System::Single ESPP_middlePoint_OverrideDefaultValue; // 0x9CC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_softness_FieldHandleType; // 0x9D0
		::System::Boolean ESPP_softness_UseIt; // 0x9D4
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_softness; // 0x9D8
		::System::Boolean ESPP_softness_EnableFade; // 0x9E0
		::System::Boolean ESPP_softness_EnableOverrideDefaultValue; // 0x9E1
		::System::Single ESPP_softness_OverrideDefaultValue; // 0x9E4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_fxFogMaskPassOn_FieldHandleType; // 0x9E8
		::System::Boolean ESPP_fxFogMaskPassOn_UseIt; // 0x9EC
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_fxFogMaskPassOn; // 0x9F0
		::System::Boolean ESPP_fxFogMaskPassOn_EnableFade; // 0x9F8
		::System::Boolean ESPP_fxFogMaskPassOn_EnableOverrideDefaultValue; // 0x9F9
		::System::Boolean ESPP_fxFogMaskPassOn_OverrideDefaultValue; // 0x9FA
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_fxColorSaturation_FieldHandleType; // 0x9FC
		::System::Boolean ESPP_fxColorSaturation_UseIt; // 0xA00
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_fxColorSaturation; // 0xA08
		::System::Boolean ESPP_fxColorSaturation_EnableFade; // 0xA10
		::System::Boolean ESPP_fxColorSaturation_EnableOverrideDefaultValue; // 0xA11
		::System::Single ESPP_fxColorSaturation_OverrideDefaultValue; // 0xA14
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_justControlParticleLight_FieldHandleType; // 0xA18
		::System::Boolean ESPP_justControlParticleLight_UseIt; // 0xA1C
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_justControlParticleLight; // 0xA20
		::System::Boolean ESPP_justControlParticleLight_EnableFade; // 0xA28
		::System::Boolean ESPP_justControlParticleLight_EnableOverrideDefaultValue; // 0xA29
		::System::Boolean ESPP_justControlParticleLight_OverrideDefaultValue; // 0xA2A
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_localLightMultiplyIntensity_FieldHandleType; // 0xA2C
		::System::Boolean ESPP_localLightMultiplyIntensity_UseIt; // 0xA30
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_localLightMultiplyIntensity; // 0xA38
		::System::Boolean ESPP_localLightMultiplyIntensity_EnableFade; // 0xA40
		::System::Boolean ESPP_localLightMultiplyIntensity_EnableOverrideDefaultValue; // 0xA41
		::System::Single ESPP_localLightMultiplyIntensity_OverrideDefaultValue; // 0xA44
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_localLightThreadHold_FieldHandleType; // 0xA48
		::System::Boolean ESPP_localLightThreadHold_UseIt; // 0xA4C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_localLightThreadHold; // 0xA50
		::System::Boolean ESPP_localLightThreadHold_EnableFade; // 0xA58
		::System::Boolean ESPP_localLightThreadHold_EnableOverrideDefaultValue; // 0xA59
		::System::Single ESPP_localLightThreadHold_OverrideDefaultValue; // 0xA5C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_indirectSpecularIntensity_FieldHandleType; // 0xA60
		::System::Boolean ESPP_indirectSpecularIntensity_UseIt; // 0xA64
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_indirectSpecularIntensity; // 0xA68
		::System::Boolean ESPP_indirectSpecularIntensity_EnableFade; // 0xA70
		::System::Boolean ESPP_indirectSpecularIntensity_EnableOverrideDefaultValue; // 0xA71
		::System::Single ESPP_indirectSpecularIntensity_OverrideDefaultValue; // 0xA74
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_rainDropColor_FieldHandleType; // 0xA78
		::UnityEngine::Color ESPP_rainDropColor; // 0xA7C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_wetnessNoiseClamp_FieldHandleType; // 0xA8C
		::UnityEngine::Vector2 ESPP_wetnessNoiseClamp; // 0xA90
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_rainDropSplashColor_FieldHandleType; // 0xA98
		::UnityEngine::Color ESPP_rainDropSplashColor; // 0xA9C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_rainDropSplashCount_FieldHandleType; // 0xAAC
		::System::Int32 ESPP_rainDropSplashCount; // 0xAB0
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_distanceFogStart_FieldHandleType; // 0xAB4
		::System::Single ESPP_distanceFogStart; // 0xAB8
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_fogHorizontalGradient_FieldHandleType; // 0xABC
		::UnityEngine::Gradient* ESPP_fogHorizontalGradient; // 0xAC0
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_heightFogHeight_FieldHandleType; // 0xAC8
		::System::Single ESPP_heightFogHeight; // 0xACC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_heightFogStart_FieldHandleType; // 0xAD0
		::System::Single ESPP_heightFogStart; // 0xAD4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_volumetricFogColor_FieldHandleType; // 0xAD8
		::UnityEngine::Color ESPP_volumetricFogColor; // 0xADC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_skyVerticalGradient_FieldHandleType; // 0xAEC
		::UnityEngine::Gradient* ESPP_skyVerticalGradient; // 0xAF0
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_skyHorizontalGradient_FieldHandleType; // 0xAF8
		::UnityEngine::Gradient* ESPP_skyHorizontalGradient; // 0xB00
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_skyHorizontalHeight_FieldHandleType; // 0xB08
		::System::Single ESPP_skyHorizontalHeight; // 0xB0C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_skyHorizontalOffset_FieldHandleType; // 0xB10
		::System::Single ESPP_skyHorizontalOffset; // 0xB14
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_skyCloudHorizontalGradient_FieldHandleType; // 0xB18
		::UnityEngine::Gradient* ESPP_skyCloudHorizontalGradient; // 0xB20
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sunDiscColor_FieldHandleType; // 0xB28
		::UnityEngine::Color ESPP_sunDiscColor; // 0xB2C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_layer1MiddleCloudGradient_FieldHandleType; // 0xB3C
		::UnityEngine::Gradient* ESPP_layer1MiddleCloudGradient; // 0xB40
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_layer1CloudAroundSunColor_FieldHandleType; // 0xB48
		::UnityEngine::Color ESPP_layer1CloudAroundSunColor; // 0xB4C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_layer2MiddleCloudGradient_FieldHandleType; // 0xB5C
		::UnityEngine::Gradient* ESPP_layer2MiddleCloudGradient; // 0xB60
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_layer2CloudAroundSunColor_FieldHandleType; // 0xB68
		::UnityEngine::Color ESPP_layer2CloudAroundSunColor; // 0xB6C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_layer3MiddleCloudGradient_FieldHandleType; // 0xB7C
		::UnityEngine::Gradient* ESPP_layer3MiddleCloudGradient; // 0xB80
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_layer3CloudAroundSunColor_FieldHandleType; // 0xB88
		::UnityEngine::Color ESPP_layer3CloudAroundSunColor; // 0xB8C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sceneLutContribution_FieldHandleType; // 0xB9C
		::System::Single ESPP_sceneLutContribution; // 0xBA0
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_enableLightShaft_FieldHandleType; // 0xBA4
		::System::Boolean ESPP_enableLightShaft_UseIt; // 0xBA8
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_enableLightShaft; // 0xBB0
		::System::Boolean ESPP_enableLightShaft_EnableFade; // 0xBB8
		::System::Boolean ESPP_enableLightShaft_EnableOverrideDefaultValue; // 0xBB9
		::System::Boolean ESPP_enableLightShaft_OverrideDefaultValue; // 0xBBA
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lightShaftThreshold_FieldHandleType; // 0xBBC
		::System::Boolean ESPP_lightShaftThreshold_UseIt; // 0xBC0
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_lightShaftThreshold; // 0xBC8
		::System::Boolean ESPP_lightShaftThreshold_EnableFade; // 0xBD0
		::System::Boolean ESPP_lightShaftThreshold_EnableOverrideDefaultValue; // 0xBD1
		::System::Single ESPP_lightShaftThreshold_OverrideDefaultValue; // 0xBD4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lightShaftIntensity_FieldHandleType; // 0xBD8
		::System::Boolean ESPP_lightShaftIntensity_UseIt; // 0xBDC
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_lightShaftIntensity; // 0xBE0
		::System::Boolean ESPP_lightShaftIntensity_EnableFade; // 0xBE8
		::System::Boolean ESPP_lightShaftIntensity_EnableOverrideDefaultValue; // 0xBE9
		::System::Single ESPP_lightShaftIntensity_OverrideDefaultValue; // 0xBEC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lightShaftColorClamp_FieldHandleType; // 0xBF0
		::System::Boolean ESPP_lightShaftColorClamp_UseIt; // 0xBF4
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_lightShaftColorClamp; // 0xBF8
		::System::Boolean ESPP_lightShaftColorClamp_EnableFade; // 0xC00
		::System::Boolean ESPP_lightShaftColorClamp_EnableOverrideDefaultValue; // 0xC01
		::System::Boolean ESPP_lightShaftColorClamp_OverrideDefaultValue; // 0xC02
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lightShaftColor_FieldHandleType; // 0xC04
		::System::Boolean ESPP_lightShaftColor_UseIt; // 0xC08
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_lightShaftColor; // 0xC10
		::System::Boolean ESPP_lightShaftColor_EnableFade; // 0xC18
		::System::Boolean ESPP_lightShaftColor_EnableOverrideDefaultValue; // 0xC19
		::UnityEngine::Color ESPP_lightShaftColor_OverrideDefaultValue; // 0xC1C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lightShaftLength_FieldHandleType; // 0xC2C
		::System::Boolean ESPP_lightShaftLength_UseIt; // 0xC30
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_lightShaftLength; // 0xC38
		::System::Boolean ESPP_lightShaftLength_EnableFade; // 0xC40
		::System::Boolean ESPP_lightShaftLength_EnableOverrideDefaultValue; // 0xC41
		::System::Single ESPP_lightShaftLength_OverrideDefaultValue; // 0xC44
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lightShaftFadeLength_FieldHandleType; // 0xC48
		::System::Boolean ESPP_lightShaftFadeLength_UseIt; // 0xC4C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_lightShaftFadeLength; // 0xC50
		::System::Boolean ESPP_lightShaftFadeLength_EnableFade; // 0xC58
		::System::Boolean ESPP_lightShaftFadeLength_EnableOverrideDefaultValue; // 0xC59
		::System::Single ESPP_lightShaftFadeLength_OverrideDefaultValue; // 0xC5C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lightShaftBlur_FieldHandleType; // 0xC60
		::System::Boolean ESPP_lightShaftBlur_UseIt; // 0xC64
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_lightShaftBlur; // 0xC68
		::System::Boolean ESPP_lightShaftBlur_EnableFade; // 0xC70
		::System::Boolean ESPP_lightShaftBlur_EnableOverrideDefaultValue; // 0xC71
		::System::Boolean ESPP_lightShaftBlur_OverrideDefaultValue; // 0xC72
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lightShaftUseCustomCenter_FieldHandleType; // 0xC74
		::System::Boolean ESPP_lightShaftUseCustomCenter_UseIt; // 0xC78
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_lightShaftUseCustomCenter; // 0xC80
		::System::Boolean ESPP_lightShaftUseCustomCenter_EnableFade; // 0xC88
		::System::Boolean ESPP_lightShaftUseCustomCenter_EnableOverrideDefaultValue; // 0xC89
		::System::Boolean ESPP_lightShaftUseCustomCenter_OverrideDefaultValue; // 0xC8A
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lightShaftCustomCenter_FieldHandleType; // 0xC8C
		::System::Boolean ESPP_lightShaftCustomCenter_UseIt; // 0xC90
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_lightShaftCustomCenter; // 0xC98
		::System::Boolean ESPP_lightShaftCustomCenter_EnableFade; // 0xCA0
		::System::Boolean ESPP_lightShaftCustomCenter_EnableOverrideDefaultValue; // 0xCA1
		::UnityEngine::Vector2 ESPP_lightShaftCustomCenter_OverrideDefaultValue; // 0xCA4

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

		::System::Void Method_5_34658B0D57648CD1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_34658B0D57648CD1_OFFSET))(this, a1);
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

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_D5F190FE5CE966B3(::System::String* a1, ::System::String* a2)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_D5F190FE5CE966B3_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_3622C2D1E940D3F4(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_3622C2D1E940D3F4_OFFSET))(this, a1);
		}

		::System::Int32 Method_5_A1D8CD775DEC3C21_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_A1D8CD775DEC3C21_1_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_BE3471DF7E3D4326(::System::String* a1, ::System::String* a2, ::System::Single a3, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a4, ::UnityEngine::ScriptableObject*& a5, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a6, ::UnityEngine::ScriptableObject*& a7, ::System::String*& a8)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_BE3471DF7E3D4326_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
		}

		::MoleMole::Config::ScreenEffectType Method_5_55D8CF5F1FB0803A()
		{
			return ((::MoleMole::Config::ScreenEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_55D8CF5F1FB0803A_OFFSET))(this);
		}

		::System::Void Method_5_2685B6183E614529(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_2685B6183E614529_OFFSET))(this, a1);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_5_54BEE211D32F7DEF()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_54BEE211D32F7DEF_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void Method_5_B4596DBEA209120C(::MoleMole::Config::ConfigEntityScreenEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffectBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_B4596DBEA209120C_OFFSET))(this, a1);
		}

		::System::Type* Method_5_A99467CE9479C990()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_A99467CE9479C990_OFFSET))(this);
		}

		::System::Boolean Method_5_391A84BCD9F51317_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_391A84BCD9F51317_1_OFFSET))(this);
		}

		::System::String* Method_5_DA1BF2C227DC3D86()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_DA1BF2C227DC3D86_OFFSET))(this);
		}

		::System::String* Method_5_126AB3935214AA22()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_126AB3935214AA22_OFFSET))(this);
		}

		::System::Type* Method_5_A99467CE9479C990_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_A99467CE9479C990_1_OFFSET))(this);
		}

		::System::String* Method_5_581A5078A2F29034()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_581A5078A2F29034_OFFSET))(this);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_METHOD_5_E7F1AECA7CFF8AAD_1_OFFSET))(this, a1);
		}
	};
}
