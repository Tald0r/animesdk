#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedFloat; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_SETFLOAT_ONRESET_OFFSET UNITYSDK_OFFSET(0x1B21EDB0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_SETFLOAT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1B21ED00)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_SETFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B21EE10)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_SETFLOAT___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1B21EE50)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_SETFLOAT___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1B21EEE0)

namespace BehaviorDesigner::Runtime::Tasks::Unity::Math
{
	inline static constexpr unsigned int SetFloat_TypeDefinitionIndex = 31596;

	class SetFloat : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedFloat* floatValue; // 0x58
		::BehaviorDesigner::Runtime::SharedFloat* storeResult; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_SETFLOAT__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_SETFLOAT_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_SETFLOAT_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_SETFLOAT___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_SETFLOAT___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
