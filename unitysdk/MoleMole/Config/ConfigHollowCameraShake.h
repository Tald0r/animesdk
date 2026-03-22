#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigHollowCameraShake_ParamType.h"
#include "unitysdk/MoleMole/Config/ConfigHollowCameraShake_ShakeAtom.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERASHAKE__CTOR_OFFSET UNITYSDK_OFFSET(0x970AB60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowCameraShake_TypeDefinitionIndex = 52660;

	class ConfigHollowCameraShake : public ::System::Object
	{
	public:
		::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom AmplitudeAtomY; // 0x10
		::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom AmplitudeAtomZ; // 0x30
		::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom AmplitudeAtomX; // 0x50
		::UnityEngine::AnimationCurve* shakeFadeCurve; // 0x70
		::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom AmplitudeAtomAngleY; // 0x78
		::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom AmplitudeAtomAngleZ; // 0x98
		::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom AmplitudeAtomAngleX; // 0xB8
		::System::Single shakeAmplituedePowerDirZ; // 0xD8
		::System::Single shakeAmplitudeOffsetXYZ; // 0xDC
		::System::Boolean isEnableShakeFade; // 0xE0
		::System::Single shakeDuration; // 0xE4
		::System::Single shakeAmplitudePowerDirX; // 0xE8
		::System::Int32 frequency; // 0xEC
		::System::Int32 AudioID; // 0xF0
		::System::Single shakeDirXY; // 0xF4
		::MoleMole::Config::ConfigHollowCameraShake_ParamType paramType; // 0xF8
		::System::Single shakeOffsetAngleDirXY; // 0xFC
		::System::Single shakeAmplitudePowerDirY; // 0x100
		::System::Single delayTime; // 0x104

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERASHAKE__CTOR_OFFSET))(this);
		}
	};
}
