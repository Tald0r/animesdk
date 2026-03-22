#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/RotationLimit.h"
#include "unitysdk/UnityEngine/Quaternion.h"

#define ROOTMOTION_FINALIK_ROTATIONLIMITHINGE_ASTHREAD_OFFSET UNITYSDK_OFFSET(0x1AB7DD90)
#define ROOTMOTION_FINALIK_ROTATIONLIMITHINGE_LIMITHINGE_OFFSET UNITYSDK_OFFSET(0x1AB7DE20)
#define ROOTMOTION_FINALIK_ROTATIONLIMITHINGE_LIMITROTATION_OFFSET UNITYSDK_OFFSET(0x1AB7DDE0)
#define ROOTMOTION_FINALIK_ROTATIONLIMITHINGE_OPENSCRIPTREFERENCE_OFFSET UNITYSDK_OFFSET(0x1AB7DCF0)
#define ROOTMOTION_FINALIK_ROTATIONLIMITHINGE_OPENUSERMANUAL_OFFSET UNITYSDK_OFFSET(0x1AB7DCA0)
#define ROOTMOTION_FINALIK_ROTATIONLIMITHINGE_SUPPORTGROUP_OFFSET UNITYSDK_OFFSET(0x1AB7DD40)
#define ROOTMOTION_FINALIK_ROTATIONLIMITHINGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB7E220)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int RotationLimitHinge_TypeDefinitionIndex = 35133;

	class RotationLimitHinge : public ::RootMotion::FinalIK::RotationLimit
	{
	public:
		::System::Boolean useLimits; // 0x38
		::System::Single min; // 0x3C
		::System::Single max; // 0x40
		::System::Single zeroAxisDisplayOffset; // 0x44
		::System::Single lastAngle; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMITHINGE__CTOR_OFFSET))(this);
		}

		::System::Void OpenUserManual()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMITHINGE_OPENUSERMANUAL_OFFSET))(this);
		}

		::System::Void OpenScriptReference()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMITHINGE_OPENSCRIPTREFERENCE_OFFSET))(this);
		}

		::System::Void SupportGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMITHINGE_SUPPORTGROUP_OFFSET))(this);
		}

		::System::Void ASThread()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMITHINGE_ASTHREAD_OFFSET))(this);
		}

		::UnityEngine::Quaternion LimitRotation(::UnityEngine::Quaternion rotation)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMITHINGE_LIMITROTATION_OFFSET))(this, rotation);
		}

		::UnityEngine::Quaternion LimitHinge(::UnityEngine::Quaternion rotation)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMITHINGE_LIMITHINGE_OFFSET))(this, rotation);
		}
	};
}
