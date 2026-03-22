#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityScreenEffectBase.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"

namespace MoleMole::Config { class ScreenEffectFloat; }

#define MOLEMOLE_CONFIG_CONFIGENTITYMOTIONBLUREFFECT_GETINTENSITY_OFFSET UNITYSDK_OFFSET(0x6248000)
#define MOLEMOLE_CONFIG_CONFIGENTITYMOTIONBLUREFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x62480A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityMotionBlurEffect_TypeDefinitionIndex = 68401;

	class ConfigEntityMotionBlurEffect : public ::MoleMole::Config::ConfigEntityScreenEffectBase
	{
	public:
		::MoleMole::Config::ScreenEffectFloat* intensity; // 0x40
		::MoleMole::Config::ScreenEffectFieldHandleType intensityHandleType; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMOTIONBLUREFFECT__CTOR_OFFSET))(this);
		}

		::System::Single GetIntensity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMOTIONBLUREFFECT_GETINTENSITY_OFFSET))(this, curTime, realHoldTime);
		}
	};
}
