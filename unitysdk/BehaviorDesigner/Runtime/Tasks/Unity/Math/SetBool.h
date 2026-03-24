#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedBool; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_SETBOOL_ONRESET_OFFSET UNITYSDK_OFFSET(0x1B032810)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_SETBOOL_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1B032750)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_SETBOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0328C0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_SETBOOL___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1B032900)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_SETBOOL___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1B032990)

namespace BehaviorDesigner::Runtime::Tasks::Unity::Math
{
	inline static constexpr unsigned int SetBool_TypeDefinitionIndex = 31595;

	class SetBool : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedBool* boolValue; // 0x58
		::BehaviorDesigner::Runtime::SharedBool* storeResult; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_SETBOOL__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_SETBOOL_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_SETBOOL_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_SETBOOL___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_SETBOOL___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
