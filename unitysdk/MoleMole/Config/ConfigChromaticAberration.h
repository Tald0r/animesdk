#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityScreenEffectBase.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Config { class ScreenEffectFloat; }
namespace MoleMole::Config { class ScreenEffectVector2; }

#define MOLEMOLE_CONFIG_CONFIGCHROMATICABERRATION_GETCENTER_OFFSET UNITYSDK_OFFSET(0x9706650)
#define MOLEMOLE_CONFIG_CONFIGCHROMATICABERRATION_GETINTENSITY_OFFSET UNITYSDK_OFFSET(0x97065B0)
#define MOLEMOLE_CONFIG_CONFIGCHROMATICABERRATION_GETPOWER_OFFSET UNITYSDK_OFFSET(0x97066F0)
#define MOLEMOLE_CONFIG_CONFIGCHROMATICABERRATION__CTOR_OFFSET UNITYSDK_OFFSET(0x9706790)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChromaticAberration_TypeDefinitionIndex = 51976;

	class ConfigChromaticAberration : public ::MoleMole::Config::ConfigEntityScreenEffectBase
	{
	public:
		::MoleMole::Config::ScreenEffectFloat* intensity; // 0x40
		::MoleMole::Config::ScreenEffectFloat* power; // 0x48
		::MoleMole::Config::ScreenEffectVector2* center; // 0x50
		::MoleMole::Config::ScreenEffectFieldHandleType centerHandleType; // 0x58
		::MoleMole::Config::ScreenEffectFieldHandleType intensityHandleType; // 0x5C
		::MoleMole::Config::ScreenEffectFieldHandleType powerHandleType; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHROMATICABERRATION__CTOR_OFFSET))(this);
		}

		::System::Single GetIntensity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHROMATICABERRATION_GETINTENSITY_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector2 GetCenter(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHROMATICABERRATION_GETCENTER_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetPower(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHROMATICABERRATION_GETPOWER_OFFSET))(this, curTime, realHoldTime);
		}
	};
}
