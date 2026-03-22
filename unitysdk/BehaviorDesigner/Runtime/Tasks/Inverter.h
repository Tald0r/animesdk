#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Decorator.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

#define BEHAVIORDESIGNER_RUNTIME_TASKS_INVERTER_CANEXECUTE_OFFSET UNITYSDK_OFFSET(0x1A6DFF60)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_INVERTER_DECORATE_OFFSET UNITYSDK_OFFSET(0x1A6E0000)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_INVERTER_ONCHILDEXECUTED_OFFSET UNITYSDK_OFFSET(0x1A6DFFB0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_INVERTER_ONEND_OFFSET UNITYSDK_OFFSET(0x1A6E0060)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_INVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6E00B0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_INVERTER___BASE_CANEXECUTE_OFFSET UNITYSDK_OFFSET(0x1A6E00F0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_INVERTER___BASE_DECORATE_OFFSET UNITYSDK_OFFSET(0x1A6E0180)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_INVERTER___BASE_ONCHILDEXECUTED_OFFSET UNITYSDK_OFFSET(0x1A6E0210)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_INVERTER___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0x1A6E02A0)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int Inverter_TypeDefinitionIndex = 30337;

	class Inverter : public ::BehaviorDesigner::Runtime::Tasks::Decorator
	{
	public:
		::BehaviorDesigner::Runtime::Tasks::TaskStatus executionStatus; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_INVERTER__CTOR_OFFSET))(this);
		}

		::System::Boolean CanExecute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_INVERTER_CANEXECUTE_OFFSET))(this);
		}

		::System::Void OnChildExecuted(::BehaviorDesigner::Runtime::Tasks::TaskStatus childStatus)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_INVERTER_ONCHILDEXECUTED_OFFSET))(this, childStatus);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus Decorate(::BehaviorDesigner::Runtime::Tasks::TaskStatus status)
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_INVERTER_DECORATE_OFFSET))(this, status);
		}

		::System::Void OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_INVERTER_ONEND_OFFSET))(this);
		}

		::System::Boolean __base_CanExecute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_INVERTER___BASE_CANEXECUTE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_Decorate(::BehaviorDesigner::Runtime::Tasks::TaskStatus P0)
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_INVERTER___BASE_DECORATE_OFFSET))(this, P0);
		}

		::System::Void __base_OnChildExecuted(::BehaviorDesigner::Runtime::Tasks::TaskStatus P0)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_INVERTER___BASE_ONCHILDEXECUTED_OFFSET))(this, P0);
		}

		::System::Void __base_OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_INVERTER___BASE_ONEND_OFFSET))(this);
		}
	};
}
