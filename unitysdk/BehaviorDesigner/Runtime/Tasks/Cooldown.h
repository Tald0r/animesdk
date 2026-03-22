#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Decorator.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedFloat; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_COOLDOWN_CANEXECUTE_OFFSET UNITYSDK_OFFSET(0x1AC08640)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_COOLDOWN_CURRENTCHILDINDEX_OFFSET UNITYSDK_OFFSET(0x1AC08710)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_COOLDOWN_ONCHILDEXECUTED_OFFSET UNITYSDK_OFFSET(0x1AC08760)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_COOLDOWN_ONEND_OFFSET UNITYSDK_OFFSET(0x1AC08940)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_COOLDOWN_OVERRIDESTATUS_1_OFFSET UNITYSDK_OFFSET(0x1AC088E0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_COOLDOWN_OVERRIDESTATUS_OFFSET UNITYSDK_OFFSET(0x1AC087C0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_COOLDOWN__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC08990)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_COOLDOWN___BASE_CANEXECUTE_OFFSET UNITYSDK_OFFSET(0x1AC089F0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_COOLDOWN___BASE_CURRENTCHILDINDEX_OFFSET UNITYSDK_OFFSET(0x1AC08A80)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_COOLDOWN___BASE_ONCHILDEXECUTED_OFFSET UNITYSDK_OFFSET(0x1AC08B10)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_COOLDOWN___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0x1AC08BA0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_COOLDOWN___BASE_OVERRIDESTATUS_1_OFFSET UNITYSDK_OFFSET(0x1AC08CC0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_COOLDOWN___BASE_OVERRIDESTATUS_OFFSET UNITYSDK_OFFSET(0x1AC08C30)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int Cooldown_TypeDefinitionIndex = 30334;

	class Cooldown : public ::BehaviorDesigner::Runtime::Tasks::Decorator
	{
	public:
		::BehaviorDesigner::Runtime::SharedFloat* duration; // 0x58
		::System::Single cooldownTime; // 0x60
		::BehaviorDesigner::Runtime::Tasks::TaskStatus executionStatus; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_COOLDOWN__CTOR_OFFSET))(this);
		}

		::System::Boolean CanExecute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_COOLDOWN_CANEXECUTE_OFFSET))(this);
		}

		::System::Int32 CurrentChildIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_COOLDOWN_CURRENTCHILDINDEX_OFFSET))(this);
		}

		::System::Void OnChildExecuted(::BehaviorDesigner::Runtime::Tasks::TaskStatus childStatus)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_COOLDOWN_ONCHILDEXECUTED_OFFSET))(this, childStatus);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OverrideStatus()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_COOLDOWN_OVERRIDESTATUS_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OverrideStatus_1(::BehaviorDesigner::Runtime::Tasks::TaskStatus status)
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_COOLDOWN_OVERRIDESTATUS_1_OFFSET))(this, status);
		}

		::System::Void OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_COOLDOWN_ONEND_OFFSET))(this);
		}

		::System::Boolean __base_CanExecute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_COOLDOWN___BASE_CANEXECUTE_OFFSET))(this);
		}

		::System::Int32 __base_CurrentChildIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_COOLDOWN___BASE_CURRENTCHILDINDEX_OFFSET))(this);
		}

		::System::Void __base_OnChildExecuted(::BehaviorDesigner::Runtime::Tasks::TaskStatus P0)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_COOLDOWN___BASE_ONCHILDEXECUTED_OFFSET))(this, P0);
		}

		::System::Void __base_OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_COOLDOWN___BASE_ONEND_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OverrideStatus()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_COOLDOWN___BASE_OVERRIDESTATUS_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OverrideStatus_1(::BehaviorDesigner::Runtime::Tasks::TaskStatus P0)
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_COOLDOWN___BASE_OVERRIDESTATUS_1_OFFSET))(this, P0);
		}
	};
}
