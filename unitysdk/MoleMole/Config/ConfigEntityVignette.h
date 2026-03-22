#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityScreenEffectBase.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Config { class ScreenEffectBool; }
namespace MoleMole::Config { class ScreenEffectFloat; }
namespace MoleMole::Config { class ScreenEffectVector2; }

#define MOLEMOLE_CONFIG_CONFIGENTITYVIGNETTE_GETCENTER_OFFSET UNITYSDK_OFFSET(0x9709A90)
#define MOLEMOLE_CONFIG_CONFIGENTITYVIGNETTE_GETCOLOR_OFFSET UNITYSDK_OFFSET(0x97099F0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVIGNETTE_GETINTENSITY_OFFSET UNITYSDK_OFFSET(0x9709B30)
#define MOLEMOLE_CONFIG_CONFIGENTITYVIGNETTE_GETROUNDED_OFFSET UNITYSDK_OFFSET(0x9709C70)
#define MOLEMOLE_CONFIG_CONFIGENTITYVIGNETTE_GETSMOOTHNESS_OFFSET UNITYSDK_OFFSET(0x9709BD0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVIGNETTE__CTOR_OFFSET UNITYSDK_OFFSET(0x9709D10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityVignette_TypeDefinitionIndex = 45873;

	class ConfigEntityVignette : public ::MoleMole::Config::ConfigEntityScreenEffectBase
	{
	public:
		::MoleMole::Config::ScreenEffectVector2* center; // 0x40
		::MoleMole::Config::ScreenEffectFloat* smoothness; // 0x48
		::MoleMole::Config::ScreenEffectBool* rounded; // 0x50
		::MoleMole::Config::ScreenEffectFloat* intensity; // 0x58
		::MoleMole::Config::ScreenEffectFieldHandleType colorHandleType; // 0x60
		::UnityEngine::Color color; // 0x64
		::MoleMole::Config::ScreenEffectFieldHandleType roundedHandleType; // 0x74
		::MoleMole::Config::ScreenEffectFieldHandleType centerHandleType; // 0x78
		::MoleMole::Config::ScreenEffectFieldHandleType smoothnessHandleType; // 0x7C
		::MoleMole::Config::ScreenEffectFieldHandleType intensityHandleType; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVIGNETTE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Color GetColor(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVIGNETTE_GETCOLOR_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector2 GetCenter(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVIGNETTE_GETCENTER_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetIntensity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVIGNETTE_GETINTENSITY_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetSmoothness(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVIGNETTE_GETSMOOTHNESS_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetRounded(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVIGNETTE_GETROUNDED_OFFSET))(this, curTime, realHoldTime);
		}
	};
}
