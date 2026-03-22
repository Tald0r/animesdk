#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigPageCameraBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class ConfigCameraNoise; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGPAGECAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x14191500)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPageCamera_TypeDefinitionIndex = 73016;

	class ConfigPageCamera : public ::MoleMole::Config::ConfigPageCameraBase
	{
	public:
		::System::String* stretchCameraKey; // 0x10
		::UnityEngine::AnimationCurve* initTranslationCurve; // 0x18
		::MoleMole::Config::ConfigCameraNoise* cameraNoiseProfile; // 0x20
		::UnityEngine::AnimationCurve* initToSpecialTranslationCurve; // 0x28
		::UnityEngine::AnimationCurve* initTranslationCurveSpecial; // 0x30
		::UnityEngine::AnimationCurve* initToSpecialCameraFovCurve; // 0x38
		::UnityEngine::AnimationCurve* noiseBlendSpeedCurve; // 0x40
		::UnityEngine::AnimationCurve* initCameraFovCurve; // 0x48
		::UnityEngine::AnimationCurve* initCameraFovCurveSpecial; // 0x50
		::System::Single bornCameraFov; // 0x58
		::UnityEngine::Vector3 initPosition; // 0x5C
		::System::Single initDurationSpecial; // 0x68
		::UnityEngine::Vector3 bornPositionSpecial; // 0x6C
		::System::Boolean applySpecialCameraAimPosition; // 0x78
		::System::Single bornCameraFovSpecial; // 0x7C
		::System::Single initCameraFov; // 0x80
		::UnityEngine::Vector3 initAimPositionSpecial; // 0x84
		::System::Single initCameraFovSpecial; // 0x90
		::UnityEngine::Vector3 initPositionSpecial; // 0x94
		::System::Boolean applySpecialCameraPosition; // 0xA0
		::System::Boolean applySpecialCameraTranslation; // 0xA1
		::System::Boolean applyAimPosition; // 0xA2
		::System::Boolean applySpecialCameraFov; // 0xA3
		::System::Single initDuration; // 0xA4
		::UnityEngine::Vector3 bornAimPosition; // 0xA8
		::UnityEngine::Vector3 bornAimPositionSpecial; // 0xB4
		::UnityEngine::Vector3 initAimPosition; // 0xC0
		::System::Single initToSpecialDuration; // 0xCC
		::UnityEngine::Vector3 bornPosition; // 0xD0
		::System::Single noiseBlendDuration; // 0xDC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPAGECAMERA__CTOR_OFFSET))(this);
		}
	};
}
