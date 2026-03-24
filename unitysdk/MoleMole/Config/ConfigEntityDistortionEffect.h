#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityScreenEffectBase.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class ScreenEffectBool; }
namespace MoleMole::Config { class ScreenEffectFloat; }

#define MOLEMOLE_CONFIG_CONFIGENTITYDISTORTIONEFFECT_GETDOWNSCALEFACTOR_OFFSET UNITYSDK_OFFSET(0xEC3F2A0)
#define MOLEMOLE_CONFIG_CONFIGENTITYDISTORTIONEFFECT_GETFORCEACTIVE_OFFSET UNITYSDK_OFFSET(0xEC3F520)
#define MOLEMOLE_CONFIG_CONFIGENTITYDISTORTIONEFFECT_GETINTENSITY_OFFSET UNITYSDK_OFFSET(0xEC3F330)
#define MOLEMOLE_CONFIG_CONFIGENTITYDISTORTIONEFFECT_GETRGBSHIFT_OFFSET UNITYSDK_OFFSET(0xEC3F3D0)
#define MOLEMOLE_CONFIG_CONFIGENTITYDISTORTIONEFFECT_GETSEPARATERGBINTENSITY_OFFSET UNITYSDK_OFFSET(0xEC3F480)
#define MOLEMOLE_CONFIG_CONFIGENTITYDISTORTIONEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0xEC3F5C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityDistortionEffect_TypeDefinitionIndex = 51218;

	class ConfigEntityDistortionEffect : public ::MoleMole::Config::ConfigEntityScreenEffectBase
	{
	public:
		::MoleMole::Config::ScreenEffectFloat* separateRGBIntensity; // 0x40
		::MoleMole::Config::ScreenEffectFloat* intensity; // 0x48
		::MoleMole::Config::ScreenEffectBool* forceActive; // 0x50
		::MoleMole::Config::ScreenEffectFieldHandleType forceActiveHandleType; // 0x58
		::MoleMole::Config::ScreenEffectFieldHandleType intensityHandleType; // 0x5C
		::UnityEngine::Vector3 rgbShift; // 0x60
		::MoleMole::Config::ScreenEffectFieldHandleType rgbShiftHandleType; // 0x6C
		::System::Int32 downScaleFactor; // 0x70
		::MoleMole::Config::ScreenEffectFieldHandleType downScaleFactorHandleType; // 0x74
		::MoleMole::Config::ScreenEffectFieldHandleType separateRGBIntensityHandleType; // 0x78

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
