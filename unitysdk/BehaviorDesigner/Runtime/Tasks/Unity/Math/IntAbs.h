#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedInt; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_INTABS_ONRESET_OFFSET UNITYSDK_OFFSET(0x1A4A2150)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_INTABS_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1A4A20B0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_INTABS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4A2200)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_INTABS___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1A4A2240)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_INTABS___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1A4A22D0)

namespace BehaviorDesigner::Runtime::Tasks::Unity::Math
{
	inline static constexpr unsigned int IntAbs_TypeDefinitionIndex = 31581;

	class IntAbs : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedInt* intVariable; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_INTABS__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_INTABS_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_INTABS_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_INTABS___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_INTABS___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
