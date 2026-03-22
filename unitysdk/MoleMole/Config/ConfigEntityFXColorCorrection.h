#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityScreenEffectBase.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rendering/Universal/FXColorCorrection_FxScreenLightMode.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class ScreenEffectBool; }
namespace MoleMole::Config { class ScreenEffectColor; }
namespace MoleMole::Config { class ScreenEffectFloat; }
namespace MoleMole::Config { class ScreenEffectVector2; }
namespace MoleMole::Config { class ScreenEffectVector3; }
namespace UnityEngine { class Gradient; }
namespace UnityEngine::Rendering::Universal { class WeatherConfigScriptableObject; }

#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETCAMERACLIPALPHA_OFFSET UNITYSDK_OFFSET(0x14189D20)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETCAMERACLIPDISTANCE_OFFSET UNITYSDK_OFFSET(0x14189BC0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETCAMERACLIPEXTENSION_OFFSET UNITYSDK_OFFSET(0x14189C60)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETCONTRAST_OFFSET UNITYSDK_OFFSET(0x1418A530)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETDESATURATE_OFFSET UNITYSDK_OFFSET(0x1418AAD0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETDISTANCEFOGSTART_OFFSET UNITYSDK_OFFSET(0x1418B550)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETENABLECAMERACLIP_OFFSET UNITYSDK_OFFSET(0x14189B30)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETENABLELIGHTSHAFT_OFFSET UNITYSDK_OFFSET(0x1418BFC0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETFOGHORIZONTALGRADIENT_OFFSET UNITYSDK_OFFSET(0x1418B5E0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETFXCOLORSATURATION_OFFSET UNITYSDK_OFFSET(0x1418AFD0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETFXFOGMASKPASSON_OFFSET UNITYSDK_OFFSET(0x1418AF30)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETFXFXSCREENLIGHTMODE_OFFSET UNITYSDK_OFFSET(0x14189F90)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETFXLIGHTSHAFTMASKON_OFFSET UNITYSDK_OFFSET(0x14189EF0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETFXSCREENLIGHTCOLOR_OFFSET UNITYSDK_OFFSET(0x1418A020)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETFXSCREENLIGHTMASKON_OFFSET UNITYSDK_OFFSET(0x1418A0E0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETGAMMA_OFFSET UNITYSDK_OFFSET(0x1418A670)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETHEIGHTFOGHEIGHT_OFFSET UNITYSDK_OFFSET(0x1418B670)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETHEIGHTFOGSTART_OFFSET UNITYSDK_OFFSET(0x1418B700)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETINDIRECTSPECULARINTENSITY_OFFSET UNITYSDK_OFFSET(0x1418B250)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETINVERT_OFFSET UNITYSDK_OFFSET(0x1418AB70)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETJUSTCONTROLPARTICLELIGHT_OFFSET UNITYSDK_OFFSET(0x1418B070)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLAYER1CLOUDAROUNDSUNCOLOR_OFFSET UNITYSDK_OFFSET(0x1418BC30)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLAYER1MIDDLECLOUDGRADIENT_OFFSET UNITYSDK_OFFSET(0x1418BBA0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLAYER2CLOUDAROUNDSUNCOLOR_OFFSET UNITYSDK_OFFSET(0x1418BD60)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLAYER2MIDDLECLOUDGRADIENT_OFFSET UNITYSDK_OFFSET(0x1418BCD0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLAYER3CLOUDAROUNDSUNCOLOR_OFFSET UNITYSDK_OFFSET(0x1418BE90)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLAYER3MIDDLECLOUDGRADIENT_OFFSET UNITYSDK_OFFSET(0x1418BE00)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLIGHTSHAFTBLUR_OFFSET UNITYSDK_OFFSET(0x1418C440)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLIGHTSHAFTCOLORCLAMP_OFFSET UNITYSDK_OFFSET(0x1418C1A0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLIGHTSHAFTCOLOR_OFFSET UNITYSDK_OFFSET(0x1418C240)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLIGHTSHAFTCUSTOMCENTER_OFFSET UNITYSDK_OFFSET(0x1418C580)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLIGHTSHAFTFADELENGTH_OFFSET UNITYSDK_OFFSET(0x1418C3A0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLIGHTSHAFTINTENSITY_OFFSET UNITYSDK_OFFSET(0x1418C100)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLIGHTSHAFTLENGTH_OFFSET UNITYSDK_OFFSET(0x1418C300)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLIGHTSHAFTTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1418C060)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLIGHTSHAFTUSECUSTOMCENTER_OFFSET UNITYSDK_OFFSET(0x1418C4E0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLOCALLIGHTMULTIPLYINTENSITY_OFFSET UNITYSDK_OFFSET(0x1418B110)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLOCALLIGHTTHREADHOLD_OFFSET UNITYSDK_OFFSET(0x1418B1B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLUTINVERT_OFFSET UNITYSDK_OFFSET(0x1418A710)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLUTMIDDLEPOINT_OFFSET UNITYSDK_OFFSET(0x1418A990)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLUTSOFTNESS_OFFSET UNITYSDK_OFFSET(0x1418AA30)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLUTTONEA_OFFSET UNITYSDK_OFFSET(0x1418A850)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLUTTONEB_OFFSET UNITYSDK_OFFSET(0x1418A8F0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLUTTONECOLORS_OFFSET UNITYSDK_OFFSET(0x1418A7B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETMIDDLEPOINT_OFFSET UNITYSDK_OFFSET(0x1418ADF0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETPOSTEXPOSURE_OFFSET UNITYSDK_OFFSET(0x1418A490)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETRAINDROPCOLOR_OFFSET UNITYSDK_OFFSET(0x1418B2F0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETRAINDROPSPLASHCOLOR_OFFSET UNITYSDK_OFFSET(0x1418B420)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETRAINDROPSPLASHCOUNT_OFFSET UNITYSDK_OFFSET(0x1418B4C0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSATURATION_OFFSET UNITYSDK_OFFSET(0x1418A5D0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENELUTCONTRIBUTION_OFFSET UNITYSDK_OFFSET(0x1418BF30)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSEFFECTINTENSITY_OFFSET UNITYSDK_OFFSET(0x1418A180)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSEMISSIONCOLOR_OFFSET UNITYSDK_OFFSET(0x1418A3D0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSIGNORERIDUS_OFFSET UNITYSDK_OFFSET(0x1418A2B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSRADIUSALPHAPOW_OFFSET UNITYSDK_OFFSET(0x1418A340)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALSKYSATURATION_OFFSET UNITYSDK_OFFSET(0x1418A220)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSKYCLOUDHORIZONTALGRADIENT_OFFSET UNITYSDK_OFFSET(0x1418BA70)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSKYHORIZONTALGRADIENT_OFFSET UNITYSDK_OFFSET(0x1418B8C0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSKYHORIZONTALHEIGHT_OFFSET UNITYSDK_OFFSET(0x1418B950)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSKYHORIZONTALOFFSET_OFFSET UNITYSDK_OFFSET(0x1418B9E0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSKYVERTICALGRADIENT_OFFSET UNITYSDK_OFFSET(0x1418B830)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSOFTNESS_OFFSET UNITYSDK_OFFSET(0x1418AE90)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSUNDISCCOLOR_OFFSET UNITYSDK_OFFSET(0x1418BB00)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETTONEA_OFFSET UNITYSDK_OFFSET(0x1418ACB0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETTONEB_OFFSET UNITYSDK_OFFSET(0x1418AD50)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETTONECOLORS_OFFSET UNITYSDK_OFFSET(0x1418AC10)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETVOLUMETRICFOGCOLOR_OFFSET UNITYSDK_OFFSET(0x1418B790)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETWEATHERCONFIGWEIGHT_OFFSET UNITYSDK_OFFSET(0x14189E50)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETWEATHERCONFIG_OFFSET UNITYSDK_OFFSET(0x14189DC0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETWETNESSNOISECLAMP_OFFSET UNITYSDK_OFFSET(0x1418B390)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1418C620)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityFXColorCorrection_TypeDefinitionIndex = 62717;

	class ConfigEntityFXColorCorrection : public ::MoleMole::Config::ConfigEntityScreenEffectBase
	{
	public:
		::UnityEngine::Gradient* skyHorizontalGradient; // 0x40
		::MoleMole::Config::ScreenEffectBool* toneColors; // 0x48
		::MoleMole::Config::ScreenEffectBool* justControlParticleLight; // 0x50
		::MoleMole::Config::ScreenEffectFloat* lightShaftFadeLength; // 0x58
		::UnityEngine::Gradient* skyVerticalGradient; // 0x60
		::UnityEngine::Gradient* skyCloudHorizontalGradient; // 0x68
		::MoleMole::Config::ScreenEffectFloat* localLightMultiplyIntensity; // 0x70
		::MoleMole::Config::ScreenEffectFloat* cameraClipDistance; // 0x78
		::MoleMole::Config::ScreenEffectFloat* softness; // 0x80
		::MoleMole::Config::ScreenEffectBool* lightShaftUseCustomCenter; // 0x88
		::UnityEngine::Gradient* layer1MiddleCloudGradient; // 0x90
		::MoleMole::Config::ScreenEffectFloat* contrast; // 0x98
		::UnityEngine::Gradient* layer3MiddleCloudGradient; // 0xA0
		::MoleMole::Config::ScreenEffectFloat* indirectSpecularIntensity; // 0xA8
		::MoleMole::Config::ScreenEffectBool* fxScreenLightMaskOn; // 0xB0
		::MoleMole::Config::ScreenEffectBool* lightShaftBlur; // 0xB8
		::MoleMole::Config::ScreenEffectFloat* lightShaftLength; // 0xC0
		::MoleMole::Config::ScreenEffectVector3* cameraClipExtension; // 0xC8
		::MoleMole::Config::ScreenEffectBool* fxFogMaskPassOn; // 0xD0
		::MoleMole::Config::ScreenEffectFloat* lightShaftIntensity; // 0xD8
		::MoleMole::Config::ScreenEffectFloat* weatherConfigWeight; // 0xE0
		::MoleMole::Config::ScreenEffectFloat* lutMiddlePoint; // 0xE8
		::MoleMole::Config::ScreenEffectFloat* gamma; // 0xF0
		::MoleMole::Config::ScreenEffectBool* lightShaftColorClamp; // 0xF8
		::MoleMole::Config::ScreenEffectFloat* lutSoftness; // 0x100
		::MoleMole::Config::ScreenEffectBool* invert; // 0x108
		::UnityEngine::Gradient* fogHorizontalGradient; // 0x110
		::MoleMole::Config::ScreenEffectFloat* localLightThreadHold; // 0x118
		::MoleMole::Config::ScreenEffectBool* lutToneColors; // 0x120
		::MoleMole::Config::ScreenEffectBool* fxLightShaftMaskOn; // 0x128
		::MoleMole::Config::ScreenEffectFloat* desaturate; // 0x130
		::UnityEngine::Gradient* layer2MiddleCloudGradient; // 0x138
		::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject* weatherConfig; // 0x140
		::MoleMole::Config::ScreenEffectFloat* postExposure; // 0x148
		::MoleMole::Config::ScreenEffectFloat* middlePoint; // 0x150
		::MoleMole::Config::ScreenEffectColor* lightShaftColor; // 0x158
		::MoleMole::Config::ScreenEffectBool* enableLightShaft; // 0x160
		::MoleMole::Config::ScreenEffectFloat* cameraClipAlpha; // 0x168
		::MoleMole::Config::ScreenEffectBool* lutInvert; // 0x170
		::MoleMole::Config::ScreenEffectFloat* lightShaftThreshold; // 0x178
		::MoleMole::Config::ScreenEffectColor* fxScreenLightColor; // 0x180
		::MoleMole::Config::ScreenEffectFloat* sceneSpecialPPSEffectIntensity; // 0x188
		::MoleMole::Config::ScreenEffectColor* sceneSpecialPPSEmissionColor; // 0x190
		::MoleMole::Config::ScreenEffectVector2* lightShaftCustomCenter; // 0x198
		::MoleMole::Config::ScreenEffectFloat* fxColorSaturation; // 0x1A0
		::MoleMole::Config::ScreenEffectFloat* saturation; // 0x1A8
		::MoleMole::Config::ScreenEffectFieldHandleType toneBHandleType; // 0x1B0
		::UnityEngine::Color toneA; // 0x1B4
		::MoleMole::Config::ScreenEffectFieldHandleType skyVerticalGradientHandleType; // 0x1C4
		::MoleMole::Config::ScreenEffectFieldHandleType enableLightShaftHandleType; // 0x1C8
		::MoleMole::Config::ScreenEffectFieldHandleType lightShaftBlurHandleType; // 0x1CC
		::MoleMole::Config::ScreenEffectFieldHandleType lightShaftColorHandleType; // 0x1D0
		::System::Single sceneSpecialPPSRadiusAlphaPow; // 0x1D4
		::MoleMole::Config::ScreenEffectFieldHandleType postExposureHandleType; // 0x1D8
		::MoleMole::Config::ScreenEffectFieldHandleType sceneSpecialPPSRadiusAlphaPowHandleType; // 0x1DC
		::System::Int32 rainDropSplashCount; // 0x1E0
		::UnityEngine::Color volumetricFogColor; // 0x1E4
		::UnityEngine::Color toneB; // 0x1F4
		::MoleMole::Config::ScreenEffectFieldHandleType fxLightShaftMaskOnHandleType; // 0x204
		::UnityEngine::Rendering::Universal::FXColorCorrection_FxScreenLightMode fxFxScreenLightMode; // 0x208
		::UnityEngine::Color lutToneB; // 0x20C
		::UnityEngine::Color layer3CloudAroundSunColor; // 0x21C
		::UnityEngine::Color rainDropColor; // 0x22C
		::MoleMole::Config::ScreenEffectFieldHandleType lutInvertHandleType; // 0x23C
		::MoleMole::Config::ScreenEffectFieldHandleType localLightThreadHoldHandleType; // 0x240
		::UnityEngine::Color sunDiscColor; // 0x244
		::MoleMole::Config::ScreenEffectFieldHandleType invertHandleType; // 0x254
		::MoleMole::Config::ScreenEffectFieldHandleType sceneLutContributionHandleType; // 0x258
		::MoleMole::Config::ScreenEffectFieldHandleType volumetricFogColorHandleType; // 0x25C
		::UnityEngine::Color layer1CloudAroundSunColor; // 0x260
		::MoleMole::Config::ScreenEffectFieldHandleType indirectSpecularIntensityHandleType; // 0x270
		::MoleMole::Config::ScreenEffectFieldHandleType lutMiddlePointHandleType; // 0x274
		::MoleMole::Config::ScreenEffectFieldHandleType lightShaftIntensityHandleType; // 0x278
		::MoleMole::Config::ScreenEffectFieldHandleType toneColorsHandleType; // 0x27C
		::MoleMole::Config::ScreenEffectFieldHandleType sceneSpecialPPSEmissionColorHandleType; // 0x280
		::MoleMole::Config::ScreenEffectFieldHandleType justControlParticleLightHandleType; // 0x284
		::MoleMole::Config::ScreenEffectFieldHandleType rainDropSplashCountHandleType; // 0x288
		::MoleMole::Config::ScreenEffectFieldHandleType fxFogMaskPassOnHandleType; // 0x28C
		::MoleMole::Config::ScreenEffectFieldHandleType weatherConfigWeightHandleType; // 0x290
		::System::Single skyHorizontalHeight; // 0x294
		::UnityEngine::Color lutToneA; // 0x298
		::MoleMole::Config::ScreenEffectFieldHandleType layer1MiddleCloudGradientHandleType; // 0x2A8
		::MoleMole::Config::ScreenEffectFieldHandleType cameraClipDistanceHandleType; // 0x2AC
		::MoleMole::Config::ScreenEffectFieldHandleType layer3MiddleCloudGradientHandleType; // 0x2B0
		::MoleMole::Config::ScreenEffectFieldHandleType layer2CloudAroundSunColorHandleType; // 0x2B4
		::MoleMole::Config::ScreenEffectFieldHandleType wetnessNoiseClampHandleType; // 0x2B8
		::MoleMole::Config::ScreenEffectFieldHandleType skyHorizontalGradientHandleType; // 0x2BC
		::MoleMole::Config::ScreenEffectFieldHandleType fxColorSaturationHandleType; // 0x2C0
		::MoleMole::Config::ScreenEffectFieldHandleType gammaHandleType; // 0x2C4
		::MoleMole::Config::ScreenEffectFieldHandleType lutToneColorsHandleType; // 0x2C8
		::MoleMole::Config::ScreenEffectFieldHandleType lightShaftCustomCenterHandleType; // 0x2CC
		::MoleMole::Config::ScreenEffectFieldHandleType lightShaftFadeLengthHandleType; // 0x2D0
		::MoleMole::Config::ScreenEffectFieldHandleType sceneSpecialPPSEffectIntensityHandleType; // 0x2D4
		::MoleMole::Config::ScreenEffectFieldHandleType weatherConfigHandleType; // 0x2D8
		::MoleMole::Config::ScreenEffectFieldHandleType lightShaftUseCustomCenterHandleType; // 0x2DC
		::MoleMole::Config::ScreenEffectFieldHandleType lightShaftLengthHandleType; // 0x2E0
		::MoleMole::Config::ScreenEffectFieldHandleType layer1CloudAroundSunColorHandleType; // 0x2E4
		::MoleMole::Config::ScreenEffectFieldHandleType cameraClipAlphaHandleType; // 0x2E8
		::MoleMole::Config::ScreenEffectFieldHandleType softnessHandleType; // 0x2EC
		::System::Single heightFogStart; // 0x2F0
		::System::Single sceneLutContribution; // 0x2F4
		::UnityEngine::Vector2 wetnessNoiseClamp; // 0x2F8
		::MoleMole::Config::ScreenEffectFieldHandleType middlePointHandleType; // 0x300
		::System::Single distanceFogStart; // 0x304
		::MoleMole::Config::ScreenEffectFieldHandleType skyCloudHorizontalGradientHandleType; // 0x308
		::MoleMole::Config::ScreenEffectFieldHandleType fogHorizontalGradientHandleType; // 0x30C
		::System::Single skyHorizontalOffset; // 0x310
		::MoleMole::Config::ScreenEffectFieldHandleType fxFxScreenLightModeHandleType; // 0x314
		::MoleMole::Config::ScreenEffectFieldHandleType saturationHandleType; // 0x318
		::MoleMole::Config::ScreenEffectFieldHandleType heightFogHeightHandleType; // 0x31C
		::MoleMole::Config::ScreenEffectFieldHandleType sceneSpecialPPSIgnoreRidusHandleType; // 0x320
		::MoleMole::Config::ScreenEffectFieldHandleType toneAHandleType; // 0x324
		::MoleMole::Config::ScreenEffectFieldHandleType fxScreenLightColorHandleType; // 0x328
		::MoleMole::Config::ScreenEffectFieldHandleType fxScreenLightMaskOnHandleType; // 0x32C
		::System::Single sceneSpecialPPSIgnoreRidus; // 0x330
		::MoleMole::Config::ScreenEffectFieldHandleType lightShaftThresholdHandleType; // 0x334
		::MoleMole::Config::ScreenEffectFieldHandleType lutSoftnessHandleType; // 0x338
		::MoleMole::Config::ScreenEffectFieldHandleType enableCameraClipHandleType; // 0x33C
		::MoleMole::Config::ScreenEffectFieldHandleType rainDropColorHandleType; // 0x340
		::MoleMole::Config::ScreenEffectFieldHandleType sceneSpecialSkySaturationHandleType; // 0x344
		::MoleMole::Config::ScreenEffectFieldHandleType sunDiscColorHandleType; // 0x348
		::MoleMole::Config::ScreenEffectFieldHandleType lutToneAHandleType; // 0x34C
		::MoleMole::Config::ScreenEffectFieldHandleType localLightMultiplyIntensityHandleType; // 0x350
		::System::Single heightFogHeight; // 0x354
		::MoleMole::Config::ScreenEffectFieldHandleType layer2MiddleCloudGradientHandleType; // 0x358
		::System::Boolean enableCameraClip; // 0x35C
		::System::Single sceneSpecialSkySaturation; // 0x360
		::MoleMole::Config::ScreenEffectFieldHandleType heightFogStartHandleType; // 0x364
		::UnityEngine::Color rainDropSplashColor; // 0x368
		::MoleMole::Config::ScreenEffectFieldHandleType skyHorizontalHeightHandleType; // 0x378
		::UnityEngine::Color layer2CloudAroundSunColor; // 0x37C
		::MoleMole::Config::ScreenEffectFieldHandleType layer3CloudAroundSunColorHandleType; // 0x38C
		::MoleMole::Config::ScreenEffectFieldHandleType skyHorizontalOffsetHandleType; // 0x390
		::MoleMole::Config::ScreenEffectFieldHandleType contrastHandleType; // 0x394
		::MoleMole::Config::ScreenEffectFieldHandleType lightShaftColorClampHandleType; // 0x398
		::MoleMole::Config::ScreenEffectFieldHandleType distanceFogStartHandleType; // 0x39C
		::MoleMole::Config::ScreenEffectFieldHandleType cameraClipExtensionHandleType; // 0x3A0
		::MoleMole::Config::ScreenEffectFieldHandleType desaturateHandleType; // 0x3A4
		::MoleMole::Config::ScreenEffectFieldHandleType lutToneBHandleType; // 0x3A8
		::MoleMole::Config::ScreenEffectFieldHandleType rainDropSplashColorHandleType; // 0x3AC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION__CTOR_OFFSET))(this);
		}

		::System::Boolean GetEnableCameraClip(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETENABLECAMERACLIP_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetCameraClipDistance(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETCAMERACLIPDISTANCE_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector3 GetCameraClipExtension(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETCAMERACLIPEXTENSION_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetCameraClipAlpha(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETCAMERACLIPALPHA_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject* GetWeatherConfig(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETWEATHERCONFIG_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetWeatherConfigWeight(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETWEATHERCONFIGWEIGHT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetFxLightShaftMaskOn(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETFXLIGHTSHAFTMASKON_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Rendering::Universal::FXColorCorrection_FxScreenLightMode GetFxFxScreenLightMode(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Rendering::Universal::FXColorCorrection_FxScreenLightMode(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETFXFXSCREENLIGHTMODE_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetFxScreenLightColor(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETFXSCREENLIGHTCOLOR_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetFxScreenLightMaskOn(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETFXSCREENLIGHTMASKON_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetSceneSpecialPPSEffectIntensity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSEFFECTINTENSITY_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetSceneSpecialSkySaturation(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALSKYSATURATION_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetSceneSpecialPPSIgnoreRidus(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSIGNORERIDUS_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetSceneSpecialPPSRadiusAlphaPow(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSRADIUSALPHAPOW_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetSceneSpecialPPSEmissionColor(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSEMISSIONCOLOR_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetPostExposure(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETPOSTEXPOSURE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetContrast(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETCONTRAST_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetSaturation(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSATURATION_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetGamma(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETGAMMA_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetLutInvert(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLUTINVERT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetLutToneColors(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLUTTONECOLORS_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetLutToneA(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLUTTONEA_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetLutToneB(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLUTTONEB_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetLutMiddlePoint(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLUTMIDDLEPOINT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetLutSoftness(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLUTSOFTNESS_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetDesaturate(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETDESATURATE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetInvert(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETINVERT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetToneColors(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETTONECOLORS_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetToneA(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETTONEA_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetToneB(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETTONEB_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetMiddlePoint(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETMIDDLEPOINT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetSoftness(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSOFTNESS_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetFxFogMaskPassOn(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETFXFOGMASKPASSON_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetFxColorSaturation(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETFXCOLORSATURATION_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetJustControlParticleLight(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETJUSTCONTROLPARTICLELIGHT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetLocalLightMultiplyIntensity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLOCALLIGHTMULTIPLYINTENSITY_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetLocalLightThreadHold(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLOCALLIGHTTHREADHOLD_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetIndirectSpecularIntensity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETINDIRECTSPECULARINTENSITY_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetRainDropColor(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETRAINDROPCOLOR_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector2 GetWetnessNoiseClamp(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETWETNESSNOISECLAMP_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetRainDropSplashColor(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETRAINDROPSPLASHCOLOR_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Int32 GetRainDropSplashCount(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETRAINDROPSPLASHCOUNT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetDistanceFogStart(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETDISTANCEFOGSTART_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Gradient* GetFogHorizontalGradient(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Gradient*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETFOGHORIZONTALGRADIENT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetHeightFogHeight(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETHEIGHTFOGHEIGHT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetHeightFogStart(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETHEIGHTFOGSTART_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetVolumetricFogColor(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETVOLUMETRICFOGCOLOR_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Gradient* GetSkyVerticalGradient(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Gradient*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSKYVERTICALGRADIENT_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Gradient* GetSkyHorizontalGradient(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Gradient*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSKYHORIZONTALGRADIENT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetSkyHorizontalHeight(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSKYHORIZONTALHEIGHT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetSkyHorizontalOffset(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSKYHORIZONTALOFFSET_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Gradient* GetSkyCloudHorizontalGradient(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Gradient*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSKYCLOUDHORIZONTALGRADIENT_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetSunDiscColor(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSUNDISCCOLOR_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Gradient* GetLayer1MiddleCloudGradient(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Gradient*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLAYER1MIDDLECLOUDGRADIENT_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetLayer1CloudAroundSunColor(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLAYER1CLOUDAROUNDSUNCOLOR_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Gradient* GetLayer2MiddleCloudGradient(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Gradient*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLAYER2MIDDLECLOUDGRADIENT_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetLayer2CloudAroundSunColor(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLAYER2CLOUDAROUNDSUNCOLOR_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Gradient* GetLayer3MiddleCloudGradient(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Gradient*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLAYER3MIDDLECLOUDGRADIENT_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetLayer3CloudAroundSunColor(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLAYER3CLOUDAROUNDSUNCOLOR_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetSceneLutContribution(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENELUTCONTRIBUTION_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetEnableLightShaft(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETENABLELIGHTSHAFT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetLightShaftThreshold(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLIGHTSHAFTTHRESHOLD_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetLightShaftIntensity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLIGHTSHAFTINTENSITY_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetLightShaftColorClamp(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLIGHTSHAFTCOLORCLAMP_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetLightShaftColor(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLIGHTSHAFTCOLOR_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetLightShaftLength(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLIGHTSHAFTLENGTH_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetLightShaftFadeLength(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLIGHTSHAFTFADELENGTH_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetLightShaftBlur(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLIGHTSHAFTBLUR_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetLightShaftUseCustomCenter(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLIGHTSHAFTUSECUSTOMCENTER_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector2 GetLightShaftCustomCenter(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLIGHTSHAFTCUSTOMCENTER_OFFSET))(this, curTime, realHoldTime);
		}
	};
}
