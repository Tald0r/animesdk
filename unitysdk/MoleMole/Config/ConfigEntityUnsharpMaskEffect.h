#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityScreenEffectBase.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"

namespace MoleMole::Config { class ScreenEffectFloat; }

#define MOLEMOLE_CONFIG_CONFIGENTITYUNSHARPMASKEFFECT_GETAMOUNT_OFFSET UNITYSDK_OFFSET(0xEC2A2C0)
#define MOLEMOLE_CONFIG_CONFIGENTITYUNSHARPMASKEFFECT_GETENABLE_OFFSET UNITYSDK_OFFSET(0xEC2A190)
#define MOLEMOLE_CONFIG_CONFIGENTITYUNSHARPMASKEFFECT_GETRADIUS_OFFSET UNITYSDK_OFFSET(0xEC2A220)
#define MOLEMOLE_CONFIG_CONFIGENTITYUNSHARPMASKEFFECT_GETSAMPLECOUNT_OFFSET UNITYSDK_OFFSET(0xEC2A360)
#define MOLEMOLE_CONFIG_CONFIGENTITYUNSHARPMASKEFFECT_GETTHRESHOLD_OFFSET UNITYSDK_OFFSET(0xEC2A400)
#define MOLEMOLE_CONFIG_CONFIGENTITYUNSHARPMASKEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0xEC2A4A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityUnsharpMaskEffect_TypeDefinitionIndex = 78079;

	class ConfigEntityUnsharpMaskEffect : public ::MoleMole::Config::ConfigEntityScreenEffectBase
	{
	public:
		::MoleMole::Config::ScreenEffectFloat* sampleCount; // 0x40
		::MoleMole::Config::ScreenEffectFloat* threshold; // 0x48
		::MoleMole::Config::ScreenEffectFloat* amount; // 0x50
		::MoleMole::Config::ScreenEffectFloat* radius; // 0x58
		::MoleMole::Config::ScreenEffectFieldHandleType enableHandleType; // 0x60
		::MoleMole::Config::ScreenEffectFieldHandleType thresholdHandleType; // 0x64
		::MoleMole::Config::ScreenEffectFieldHandleType radiusHandleType; // 0x68
		::MoleMole::Config::ScreenEffectFieldHandleType amountHandleType; // 0x6C
		::System::Boolean enable; // 0x70
		::MoleMole::Config::ScreenEffectFieldHandleType sampleCountHandleType; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYUNSHARPMASKEFFECT__CTOR_OFFSET))(this);
		}

		::System::Boolean GetEnable(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYUNSHARPMASKEFFECT_GETENABLE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetRadius(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYUNSHARPMASKEFFECT_GETRADIUS_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetAmount(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYUNSHARPMASKEFFECT_GETAMOUNT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Int32 GetSampleCount(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYUNSHARPMASKEFFECT_GETSAMPLECOUNT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetThreshold(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYUNSHARPMASKEFFECT_GETTHRESHOLD_OFFSET))(this, curTime, realHoldTime);
		}
	};
}
