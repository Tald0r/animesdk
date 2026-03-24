#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigHollowCameraShake_ShakeAtom.h"
#include "unitysdk/MoleMole/ConfigGalgameAvatarCameraShake_ParamType.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIGGALGAMEAVATARCAMERASHAKE__CTOR_OFFSET UNITYSDK_OFFSET(0x10AAB9F0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigGalgameAvatarCameraShake_TypeDefinitionIndex = 63520;

	class ConfigGalgameAvatarCameraShake : public ::System::Object
	{
	public:
		::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom AmplitudeAtomAngleZ; // 0x10
		::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom AmplitudeAtomAngleY; // 0x30
		::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom AmplitudeAtomX; // 0x50
		::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom AmplitudeAtomAngleX; // 0x70
		::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom AmplitudeAtomY; // 0x90
		::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom AmplitudeAtomZ; // 0xB0
		::UnityEngine::AnimationCurve* shakeFadeCurve; // 0xD0
		::System::Single shakeDirXY; // 0xD8
		::System::Boolean isEnableShakeFade; // 0xDC
		::System::Single shakeOffsetAngleDirXY; // 0xE0
		::System::Single shakeAmplitudePowerDirX; // 0xE4
		::System::Single delayTime; // 0xE8
		::System::Single shakeAmplitudeOffsetXYZ; // 0xEC
		::System::Single shakeDuration; // 0xF0
		::System::Single shakeAmplituedePowerDirZ; // 0xF4
		::MoleMole::ConfigGalgameAvatarCameraShake_ParamType paramType; // 0xF8
		::System::Int32 frequency; // 0xFC
		::System::Single shakeAmplitudePowerDirY; // 0x100

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGGALGAMEAVATARCAMERASHAKE__CTOR_OFFSET))(this);
		}
	};
}
