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

#define MOLEMOLE_TIMELINE_VISUALENVCONFIG_RECOVERVISUALENVCONFIG_OFFSET UNITYSDK_OFFSET(0xA497450)
#define MOLEMOLE_TIMELINE_VISUALENVCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xA496E90)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int VisualEnvConfig_TypeDefinitionIndex = 51429;

	class VisualEnvConfig : public ::System::Object
	{
	public:
		::UnityEngine::Gradient* FogHorizontalGradient; // 0x10
		::WeatherConfig* weatherCfg; // 0x18
		::UnityEngine::Texture* cloudShadow; // 0x20
		::System::Single volumetricFog_Step; // 0x28
		::System::Single lightFogSoftParticleStartFadeDistance; // 0x2C
		::System::Single volumetricFog_ExtraBlurValue; // 0x30
		::System::Single cloudLightMinIntervalTime; // 0x34
		::UnityEngine::Vector3 moonDir; // 0x38
		::System::Single expHeightfogDensity; // 0x44
		::System::Single rippleDensity; // 0x48
		::System::Int32 rainSplashCount; // 0x4C
		::System::Single mainLightIntensity; // 0x50
		::System::Single volumetricFogSize; // 0x54
		::System::Single cloudBaseRot; // 0x58
		::System::Boolean hasLightFogProxy; // 0x5C
		::System::Boolean EnableAutoExposure; // 0x5D
		::System::Boolean cloudGodRay; // 0x5E
		::System::Single cloudLightStrength; // 0x60
		::UnityEngine::Color volumetricFog_Color; // 0x64
		::System::Single fogMieG; // 0x74
		::UnityEngine::Vector2 cloudShadowMoveSpeed; // 0x78
		::System::Single volumetricFog_PunctualLightFadePower; // 0x80
		::System::Single skyIntensity; // 0x84
		::UnityEngine::Color groundColor; // 0x88
		::System::Single volumetricFog_MaxIntensity; // 0x98
		::System::Single lightFogMaxDensity; // 0x9C
		::System::Single IBLIntensity; // 0xA0
		::System::Single cloudShadowIntensity; // 0xA4
		::UnityEngine::Color fogMieColor; // 0xA8
		::System::Single volumetricFog_Jittering; // 0xB8
		::System::Single mainLightIntensityForChara; // 0xBC
		::UnityEngine::Color middleColor; // 0xC0
		::System::Single lightFogSoftParticleFadeFactor; // 0xD0
		::System::Single rippleSpeed; // 0xD4
		::System::Single EmissionIntensity; // 0xD8
		::System::Single fogScattering; // 0xDC
		::System::Single cloudOffsetY; // 0xE0
		::UnityEngine::Color skyColor; // 0xE4
		::System::Single volumetricFog_IntensityTowardLight; // 0xF4
		::System::Single cloudLightMaxIntervalTime; // 0xF8
		::System::Single FallbackConstantExposureCompensation; // 0xFC
		::UnityEngine::Color GIColorOffset; // 0x100
		::UnityEngine::Color fogRayColor; // 0x110
		::System::Single volumetricFog_Dithering; // 0x120
		::UnityEngine::Vector3 cloudShadowRotation; // 0x124
		::System::Single FogDensity; // 0x130
		::UnityEngine::Color fogExtinctColor; // 0x134
		::System::Single volumetricFog_DustIntensity; // 0x144
		::System::Single fogStartDistance; // 0x148
		::System::Single GIIntensity; // 0x14C
		::System::Int32 rainDropBatchCount; // 0x150
		::System::Single cloudLightDurationTime; // 0x154
		::System::Single rippleFoamIntensity; // 0x158
		::System::Boolean fogUseOldVersion; // 0x15C
		::System::Boolean hasGlobalVolumetricFog; // 0x15D
		::System::Boolean mainLightShadowTint; // 0x15E
		::System::Boolean VolumetricFogBlitBeforeEffect; // 0x15F
		::System::Single rainSplashRange; // 0x160
		::System::Single cloudLightWidth; // 0x164
		::UnityEngine::Vector4 cloudShadowTileAndOffset; // 0x168
		::UnityEngine::Vector2 fogHeightRange; // 0x178
		::System::Single AutoExposureCompensation; // 0x180
		::System::Single volumetricFog_PunctualLightMultiplier; // 0x184
		::System::Single dynamicObjectGIIntensity; // 0x188

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
