#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigGachaPerformanceLight_GachaPerformanceLightType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/LightShadows.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCELIGHT_ISSHOWSHADOWPARAMS_OFFSET UNITYSDK_OFFSET(0x94FF660)
#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCELIGHT_ISSPOTLIGHT_OFFSET UNITYSDK_OFFSET(0x94FF5F0)
#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCELIGHT__CTOR_OFFSET UNITYSDK_OFFSET(0x94FF6D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigGachaPerformanceLight_TypeDefinitionIndex = 60230;

	class ConfigGachaPerformanceLight : public ::System::Object
	{
	public:
		::MoleMole::Config::ConfigGachaPerformanceLight_GachaPerformanceLightType Type; // 0x10
		::System::Single AvatarLightMultiplier; // 0x14
		::System::Single FogZOffset; // 0x18
		::UnityEngine::Vector2 InnerOuterSpotAngle; // 0x1C
		::System::Single FogRange; // 0x24
		::System::Single FogIntensity; // 0x28
		::System::Single ShadowStrength; // 0x2C
		::UnityEngine::Vector3 LocalRot; // 0x30
		::System::Single ShadowNearPlane; // 0x3C
		::System::Single Range; // 0x40
		::System::Single Intensity; // 0x44
		::System::Boolean HasVolumetricFog; // 0x48
		::UnityEngine::Color AvatarLightColor; // 0x4C
		::UnityEngine::Vector3 LocalPos; // 0x5C
		::UnityEngine::LightShadows ShadowType; // 0x68
		::UnityEngine::Color LightColor; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCELIGHT__CTOR_OFFSET))(this);
		}

		::System::Boolean IsSpotLight()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCELIGHT_ISSPOTLIGHT_OFFSET))(this);
		}

		::System::Boolean IsShowShadowParams()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCELIGHT_ISSHOWSHADOWPARAMS_OFFSET))(this);
		}
	};
}
