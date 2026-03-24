#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigPageCameraBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class ConfigCameraNoise; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGPAGECAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0xBAFEC10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPageCamera_TypeDefinitionIndex = 39476;

	class ConfigPageCamera : public ::MoleMole::Config::ConfigPageCameraBase
	{
	public:
		::System::String* stretchCameraKey; // 0x10
		::UnityEngine::AnimationCurve* initTranslationCurve; // 0x18
		::UnityEngine::AnimationCurve* initToSpecialCameraFovCurve; // 0x20
		::UnityEngine::AnimationCurve* initCameraFovCurveSpecial; // 0x28
		::UnityEngine::AnimationCurve* initCameraFovCurve; // 0x30
		::UnityEngine::AnimationCurve* initToSpecialTranslationCurve; // 0x38
		::MoleMole::Config::ConfigCameraNoise* cameraNoiseProfile; // 0x40
		::UnityEngine::AnimationCurve* noiseBlendSpeedCurve; // 0x48
		::UnityEngine::AnimationCurve* initTranslationCurveSpecial; // 0x50
		::UnityEngine::Vector3 bornAimPosition; // 0x58
		::System::Boolean applySpecialCameraPosition; // 0x64
		::System::Boolean applySpecialCameraFov; // 0x65
		::System::Boolean applySpecialCameraTranslation; // 0x66
		::System::Boolean applyAimPosition; // 0x67
		::System::Boolean applySpecialCameraAimPosition; // 0x68
		::UnityEngine::Vector3 initPosition; // 0x6C
		::UnityEngine::Vector3 bornAimPositionSpecial; // 0x78
		::UnityEngine::Vector3 bornPositionSpecial; // 0x84
		::System::Single initCameraFovSpecial; // 0x90
		::UnityEngine::Vector3 initPositionSpecial; // 0x94
		::System::Single initDurationSpecial; // 0xA0
		::System::Single initDuration; // 0xA4
		::UnityEngine::Vector3 initAimPositionSpecial; // 0xA8
		::System::Single bornCameraFovSpecial; // 0xB4
		::System::Single initToSpecialDuration; // 0xB8
		::UnityEngine::Vector3 bornPosition; // 0xBC
		::System::Single noiseBlendDuration; // 0xC8
		::System::Single initCameraFov; // 0xCC
		::UnityEngine::Vector3 initAimPosition; // 0xD0
		::System::Single bornCameraFov; // 0xDC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPAGECAMERA__CTOR_OFFSET))(this);
		}
	};
}
