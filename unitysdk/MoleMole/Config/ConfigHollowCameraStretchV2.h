#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/HollowCameraTypeZ.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class AnimCurveParam; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERASTRETCHV2_DISTOTARGET_OFFSET UNITYSDK_OFFSET(0x9B61DF0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERASTRETCHV2__CTOR_OFFSET UNITYSDK_OFFSET(0x9B61E90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowCameraStretchV2_TypeDefinitionIndex = 50017;

	class ConfigHollowCameraStretchV2 : public ::System::Object
	{
	public:
		::MoleMole::Config::AnimCurveParam* ForwardPosCurveZ; // 0x10
		::MoleMole::Config::AnimCurveParam* BackwardRotCurveX; // 0x18
		::MoleMole::Config::AnimCurveParam* ForwardDistortionCurve; // 0x20
		::MoleMole::Config::AnimCurveParam* ForwardRotCurveY; // 0x28
		::MoleMole::Config::AnimCurveParam* ForwardPosCurveX; // 0x30
		::MoleMole::Config::AnimCurveParam* BackwardPosCurveZ; // 0x38
		::MoleMole::Config::AnimCurveParam* ForwardRotCurveZ; // 0x40
		::System::String* BackwardSoundActionKey; // 0x48
		::MoleMole::Config::AnimCurveParam* BackwardPosCurveY; // 0x50
		::MoleMole::Config::AnimCurveParam* BackwardPosCurveX; // 0x58
		::MoleMole::Config::AnimCurveParam* BackwardRotCurveZ; // 0x60
		::MoleMole::Config::AnimCurveParam* BackwardDistortionCurve; // 0x68
		::MoleMole::Config::AnimCurveParam* ForwardPosCurveY; // 0x70
		::System::String* ForwardSoundActionKey; // 0x78
		::MoleMole::Config::AnimCurveParam* ForwardRotCurveX; // 0x80
		::MoleMole::Config::AnimCurveParam* BackwardFovCurve; // 0x88
		::MoleMole::Config::AnimCurveParam* BackwardRotCurveY; // 0x90
		::MoleMole::Config::AnimCurveParam* ForwardFovCurve; // 0x98
		::System::Boolean IsForwardBackwardSameFovCurve; // 0xA0
		::System::Boolean IsForwardBackwardSameDistortionCurve; // 0xA1
		::System::Boolean IsBackwardRotCurveSameXYZ; // 0xA2
		::System::Boolean IsForwardRotCurveSameXYZ; // 0xA3
		::UnityEngine::Vector2 ScreenCenter; // 0xA4
		::System::Int32 ForwardSoundID; // 0xAC
		::MoleMole::Config::HollowCameraTypeZ ConfigHollowCameraTypeZ; // 0xB0
		::System::Single GroupFramingSize; // 0xB4
		::System::Single TargetFov; // 0xB8
		::UnityEngine::Vector2 PosOffsetXY; // 0xBC
		::System::Int32 BackwardSoundID; // 0xC4
		::System::Single TargetDistortionIntensity; // 0xC8
		::System::Boolean IsBackwardPosCurveSameXY; // 0xCC
		::System::Boolean IsForwardBackwardPosSameXY; // 0xCD
		::System::Single ConfigDisToTarget; // 0xD0
		::UnityEngine::Vector3 TargetRotDelta; // 0xD4
		::System::Boolean IsForwardBackwardRotSame; // 0xE0
		::System::Boolean IsForwardPosCurveSameXY; // 0xE1
		::System::Boolean IsForwardBackwardSameZ; // 0xE2

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERASTRETCHV2__CTOR_OFFSET))(this);
		}

		::System::Single DisToTarget(::System::Single baseZ, ::System::Single curBaseZ)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERASTRETCHV2_DISTOTARGET_OFFSET))(this, baseZ, curBaseZ);
		}
	};
}
