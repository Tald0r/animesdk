#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityScreenEffectBase.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class ScreenEffectBool; }
namespace MoleMole::Config { class ScreenEffectFloat; }

#define MOLEMOLE_CONFIG_CONFIGENTITYDISTORTIONEFFECT_GETDOWNSCALEFACTOR_OFFSET UNITYSDK_OFFSET(0xC345B10)
#define MOLEMOLE_CONFIG_CONFIGENTITYDISTORTIONEFFECT_GETFORCEACTIVE_OFFSET UNITYSDK_OFFSET(0xC345D90)
#define MOLEMOLE_CONFIG_CONFIGENTITYDISTORTIONEFFECT_GETINTENSITY_OFFSET UNITYSDK_OFFSET(0xC345BA0)
#define MOLEMOLE_CONFIG_CONFIGENTITYDISTORTIONEFFECT_GETRGBSHIFT_OFFSET UNITYSDK_OFFSET(0xC345C40)
#define MOLEMOLE_CONFIG_CONFIGENTITYDISTORTIONEFFECT_GETSEPARATERGBINTENSITY_OFFSET UNITYSDK_OFFSET(0xC345CF0)
#define MOLEMOLE_CONFIG_CONFIGENTITYDISTORTIONEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0xC345E30)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityDistortionEffect_TypeDefinitionIndex = 58644;

	class ConfigEntityDistortionEffect : public ::MoleMole::Config::ConfigEntityScreenEffectBase
	{
	public:
		::MoleMole::Config::ScreenEffectFloat* intensity; // 0x40
		::MoleMole::Config::ScreenEffectBool* forceActive; // 0x48
		::MoleMole::Config::ScreenEffectFloat* separateRGBIntensity; // 0x50
		::UnityEngine::Vector3 rgbShift; // 0x58
		::System::Int32 downScaleFactor; // 0x64
		::MoleMole::Config::ScreenEffectFieldHandleType downScaleFactorHandleType; // 0x68
		::MoleMole::Config::ScreenEffectFieldHandleType rgbShiftHandleType; // 0x6C
		::MoleMole::Config::ScreenEffectFieldHandleType separateRGBIntensityHandleType; // 0x70
		::MoleMole::Config::ScreenEffectFieldHandleType intensityHandleType; // 0x74
		::MoleMole::Config::ScreenEffectFieldHandleType forceActiveHandleType; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYDISTORTIONEFFECT__CTOR_OFFSET))(this);
		}

		::System::Int32 GetDownScaleFactor(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYDISTORTIONEFFECT_GETDOWNSCALEFACTOR_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetIntensity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYDISTORTIONEFFECT_GETINTENSITY_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector3 GetRgbShift(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYDISTORTIONEFFECT_GETRGBSHIFT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetSeparateRGBIntensity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYDISTORTIONEFFECT_GETSEPARATERGBINTENSITY_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetForceActive(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYDISTORTIONEFFECT_GETFORCEACTIVE_OFFSET))(this, curTime, realHoldTime);
		}
	};
}
