#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/Constraint.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_CONSTRAINTROTATION_UPDATECONSTRAINT_OFFSET UNITYSDK_OFFSET(0x1A895000)
#define ROOTMOTION_FINALIK_CONSTRAINTROTATION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A895120)
#define ROOTMOTION_FINALIK_CONSTRAINTROTATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A895110)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int ConstraintRotation_TypeDefinitionIndex = 35009;

	class ConstraintRotation : public ::RootMotion::FinalIK::Constraint
	{
	public:
		::UnityEngine::Quaternion rotation; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_CONSTRAINTROTATION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::Transform* transform)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_CONSTRAINTROTATION__CTOR_1_OFFSET))(this, transform);
		}

		::System::Void UpdateConstraint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_CONSTRAINTROTATION_UPDATECONSTRAINT_OFFSET))(this);
		}
	};
}
