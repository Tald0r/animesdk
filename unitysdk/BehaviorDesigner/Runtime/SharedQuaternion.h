#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/SharedVariable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"

#define BEHAVIORDESIGNER_RUNTIME_SHAREDQUATERNION_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x19E7B6C0)
#define BEHAVIORDESIGNER_RUNTIME_SHAREDQUATERNION__CTOR_OFFSET UNITYSDK_OFFSET(0x19E7B770)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int SharedQuaternion_TypeDefinitionIndex = 30259;

	class SharedQuaternion : public ::BehaviorDesigner::Runtime::SharedVariable_1<::UnityEngine::Quaternion>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDQUATERNION__CTOR_OFFSET))(this);
		}

		static ::BehaviorDesigner::Runtime::SharedQuaternion* op_Implicit(::UnityEngine::Quaternion value)
		{
			return ((::BehaviorDesigner::Runtime::SharedQuaternion*(*)(::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDQUATERNION_OP_IMPLICIT_OFFSET))(value);
		}
	};
}
