#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityScreenEffectBase.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"

namespace MoleMole::Config { class ScreenEffectFloat; }

#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETGLAREINTENSITY_OFFSET UNITYSDK_OFFSET(0x81F0B00)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETGLARESCALER_OFFSET UNITYSDK_OFFSET(0x81F09C0)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETGLARETHRESHOLD_OFFSET UNITYSDK_OFFSET(0x81F0A60)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETXBLURINTENSITY_OFFSET UNITYSDK_OFFSET(0x81F0BA0)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETYBLURINTENSITY_OFFSET UNITYSDK_OFFSET(0x81F0C40)
#define MOLEMOLE_CONFIG_CONFIGNAPBLOOM__CTOR_OFFSET UNITYSDK_OFFSET(0x81F0CE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigNapBloom_TypeDefinitionIndex = 40581;

	class ConfigNapBloom : public ::MoleMole::Config::ConfigEntityScreenEffectBase
	{
	public:
		::MoleMole::Config::ScreenEffectFloat* glareIntensity; // 0x40
		::MoleMole::Config::ScreenEffectFloat* yBlurIntensity; // 0x48
		::MoleMole::Config::ScreenEffectFloat* glareScaler; // 0x50
		::MoleMole::Config::ScreenEffectFloat* glareThreshold; // 0x58
		::MoleMole::Config::ScreenEffectFloat* xBlurIntensity; // 0x60
		::MoleMole::Config::ScreenEffectFieldHandleType glareScalerHandleType; // 0x68
		::MoleMole::Config::ScreenEffectFieldHandleType yBlurIntensityHandleType; // 0x6C
		::MoleMole::Config::ScreenEffectFieldHandleType glareIntensityHandleType; // 0x70
		::MoleMole::Config::ScreenEffectFieldHandleType xBlurIntensityHandleType; // 0x74
		::MoleMole::Config::ScreenEffectFieldHandleType glareThresholdHandleType; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM__CTOR_OFFSET))(this);
		}

		::System::Single GetGlareScaler(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETGLARESCALER_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetGlareThreshold(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETGLARETHRESHOLD_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetGlareIntensity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETGLAREINTENSITY_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetXBlurIntensity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETXBLURINTENSITY_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetYBlurIntensity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNAPBLOOM_GETYBLURINTENSITY_OFFSET))(this, curTime, realHoldTime);
		}
	};
}
