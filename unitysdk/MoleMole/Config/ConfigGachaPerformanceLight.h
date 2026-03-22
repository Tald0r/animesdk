#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigGachaPerformanceLight_GachaPerformanceLightType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/LightShadows.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCELIGHT_ISSHOWSHADOWPARAMS_OFFSET UNITYSDK_OFFSET(0x84A7830)
#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCELIGHT_ISSPOTLIGHT_OFFSET UNITYSDK_OFFSET(0x84A77C0)
#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCELIGHT__CTOR_OFFSET UNITYSDK_OFFSET(0x84A78A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigGachaPerformanceLight_TypeDefinitionIndex = 77793;

	class ConfigGachaPerformanceLight : public ::System::Object
	{
	public:
		::System::Single Range; // 0x10
		::UnityEngine::Color AvatarLightColor; // 0x14
		::System::Single Intensity; // 0x24
		::MoleMole::Config::ConfigGachaPerformanceLight_GachaPerformanceLightType Type; // 0x28
		::UnityEngine::LightShadows ShadowType; // 0x2C
		::System::Single ShadowStrength; // 0x30
		::System::Single FogRange; // 0x34
		::System::Single ShadowNearPlane; // 0x38
		::UnityEngine::Color LightColor; // 0x3C
		::UnityEngine::Vector3 LocalRot; // 0x4C
		::System::Single AvatarLightMultiplier; // 0x58
		::System::Boolean HasVolumetricFog; // 0x5C
		::System::Single FogIntensity; // 0x60
		::UnityEngine::Vector3 LocalPos; // 0x64
		::UnityEngine::Vector2 InnerOuterSpotAngle; // 0x70
		::System::Single FogZOffset; // 0x78

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
