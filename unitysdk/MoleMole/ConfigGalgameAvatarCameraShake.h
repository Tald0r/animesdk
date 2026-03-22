#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigHollowCameraShake_ShakeAtom.h"
#include "unitysdk/MoleMole/ConfigGalgameAvatarCameraShake_ParamType.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIGGALGAMEAVATARCAMERASHAKE__CTOR_OFFSET UNITYSDK_OFFSET(0xE0C4A80)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigGalgameAvatarCameraShake_TypeDefinitionIndex = 55335;

	class ConfigGalgameAvatarCameraShake : public ::System::Object
	{
	public:
		::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom AmplitudeAtomAngleY; // 0x10
		::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom AmplitudeAtomAngleX; // 0x30
		::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom AmplitudeAtomAngleZ; // 0x50
		::UnityEngine::AnimationCurve* shakeFadeCurve; // 0x70
		::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom AmplitudeAtomZ; // 0x78
		::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom AmplitudeAtomY; // 0x98
		::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom AmplitudeAtomX; // 0xB8
		::System::Single delayTime; // 0xD8
		::System::Int32 frequency; // 0xDC
		::System::Boolean isEnableShakeFade; // 0xE0
		::System::Single shakeDuration; // 0xE4
		::System::Single shakeAmplituedePowerDirZ; // 0xE8
		::MoleMole::ConfigGalgameAvatarCameraShake_ParamType paramType; // 0xEC
		::System::Single shakeAmplitudePowerDirX; // 0xF0
		::System::Single shakeOffsetAngleDirXY; // 0xF4
		::System::Single shakeDirXY; // 0xF8
		::System::Single shakeAmplitudeOffsetXYZ; // 0xFC
		::System::Single shakeAmplitudePowerDirY; // 0x100

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGGALGAMEAVATARCAMERASHAKE__CTOR_OFFSET))(this);
		}
	};
}
