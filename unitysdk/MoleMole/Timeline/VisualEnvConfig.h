#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class WeatherConfig;
namespace UnityEngine { class Gradient; }
namespace UnityEngine { class Texture; }

#define MOLEMOLE_TIMELINE_VISUALENVCONFIG_RECOVERVISUALENVCONFIG_OFFSET UNITYSDK_OFFSET(0xA4D6240)
#define MOLEMOLE_TIMELINE_VISUALENVCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xA4D5C90)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int VisualEnvConfig_TypeDefinitionIndex = 40331;

	class VisualEnvConfig : public ::System::Object
	{
	public:
		::WeatherConfig* weatherCfg; // 0x10
		::UnityEngine::Texture* cloudShadow; // 0x18
		::UnityEngine::Gradient* FogHorizontalGradient; // 0x20
		::System::Single volumetricFog_PunctualLightMultiplier; // 0x28
		::System::Single fogMieG; // 0x2C
		::System::Single rippleDensity; // 0x30
		::System::Single volumetricFog_IntensityTowardLight; // 0x34
		::UnityEngine::Vector4 cloudShadowTileAndOffset; // 0x38
		::System::Single cloudLightStrength; // 0x48
		::System::Int32 rainSplashCount; // 0x4C
		::UnityEngine::Color skyColor; // 0x50
		::System::Single rippleSpeed; // 0x60
		::System::Single cloudLightWidth; // 0x64
		::System::Single rainSplashRange; // 0x68
		::System::Single mainLightIntensityForChara; // 0x6C
		::UnityEngine::Color fogMieColor; // 0x70
		::System::Single mainLightIntensity; // 0x80
		::System::Single volumetricFog_Step; // 0x84
		::System::Int32 rainDropBatchCount; // 0x88
		::UnityEngine::Color fogRayColor; // 0x8C
		::UnityEngine::Color volumetricFog_Color; // 0x9C
		::System::Single expHeightfogDensity; // 0xAC
		::System::Single FallbackConstantExposureCompensation; // 0xB0
		::System::Single volumetricFog_Jittering; // 0xB4
		::System::Single skyIntensity; // 0xB8
		::System::Single lightFogMaxDensity; // 0xBC
		::System::Single EmissionIntensity; // 0xC0
		::System::Boolean EnableAutoExposure; // 0xC4
		::System::Boolean VolumetricFogBlitBeforeEffect; // 0xC5
		::System::Boolean mainLightShadowTint; // 0xC6
		::System::Boolean fogUseOldVersion; // 0xC7
		::System::Single cloudOffsetY; // 0xC8
		::System::Single GIIntensity; // 0xCC
		::UnityEngine::Color middleColor; // 0xD0
		::UnityEngine::Vector2 fogHeightRange; // 0xE0
		::UnityEngine::Color fogExtinctColor; // 0xE8
		::System::Single fogStartDistance; // 0xF8
		::System::Single AutoExposureCompensation; // 0xFC
		::System::Single volumetricFog_DustIntensity; // 0x100
		::System::Single dynamicObjectGIIntensity; // 0x104
		::UnityEngine::Vector2 cloudShadowMoveSpeed; // 0x108
		::UnityEngine::Vector3 cloudShadowRotation; // 0x110
		::System::Single volumetricFog_Dithering; // 0x11C
		::System::Single rippleFoamIntensity; // 0x120
		::System::Boolean hasGlobalVolumetricFog; // 0x124
		::System::Boolean cloudGodRay; // 0x125
		::System::Boolean hasLightFogProxy; // 0x126
		::System::Single IBLIntensity; // 0x128
		::System::Single lightFogSoftParticleFadeFactor; // 0x12C
		::System::Single fogScattering; // 0x130
		::System::Single cloudShadowIntensity; // 0x134
		::UnityEngine::Color groundColor; // 0x138
		::System::Single cloudBaseRot; // 0x148
		::UnityEngine::Vector3 moonDir; // 0x14C
		::System::Single volumetricFogSize; // 0x158
		::System::Single volumetricFog_MaxIntensity; // 0x15C
		::System::Single cloudLightMinIntervalTime; // 0x160
		::System::Single lightFogSoftParticleStartFadeDistance; // 0x164
		::System::Single cloudLightMaxIntervalTime; // 0x168
		::UnityEngine::Color GIColorOffset; // 0x16C
		::System::Single volumetricFog_ExtraBlurValue; // 0x17C
		::System::Single cloudLightDurationTime; // 0x180
		::System::Single volumetricFog_PunctualLightFadePower; // 0x184
		::System::Single FogDensity; // 0x188

		::System::Void _ctor(::WeatherConfig* weatherConfig)
		{
			return ((::System::Void(*)(::PVOID, ::WeatherConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCONFIG__CTOR_OFFSET))(this, weatherConfig);
		}

		::System::Void RecoverVisualEnvConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCONFIG_RECOVERVISUALENVCONFIG_OFFSET))(this);
		}
	};
}
