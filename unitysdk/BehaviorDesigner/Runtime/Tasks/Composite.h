#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/AbortType.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/ParentTask.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

#define BEHAVIORDESIGNER_RUNTIME_TASKS_COMPOSITE_GET_ABORTTYPE_OFFSET UNITYSDK_OFFSET(0x1A100F80)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_COMPOSITE_GET_PROXYABORTTYPE_OFFSET UNITYSDK_OFFSET(0x1A100F60)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_COMPOSITE_ONREEVALUATIONENDED_OFFSET UNITYSDK_OFFSET(0x1A100FD0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_COMPOSITE_ONREEVALUATIONSTARTED_OFFSET UNITYSDK_OFFSET(0x1A100F90)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_COMPOSITE_SET_PROXYABORTTYPE_OFFSET UNITYSDK_OFFSET(0x1A100F70)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_COMPOSITE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A101020)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int Composite_TypeDefinitionIndex = 31225;

	class Composite : public ::BehaviorDesigner::Runtime::Tasks::ParentTask
	{
	public:
		::BehaviorDesigner::Runtime::Tasks::AbortType abortType; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_COMPOSITE__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::AbortType get_ProxyabortType()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::AbortType(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_COMPOSITE_GET_PROXYABORTTYPE_OFFSET))(this);
		}

		::System::Void set_ProxyabortType(::BehaviorDesigner::Runtime::Tasks::AbortType value)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::AbortType))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_COMPOSITE_SET_PROXYABORTTYPE_OFFSET))(this, value);
		}

		::BehaviorDesigner::Runtime::Tasks::AbortType get_AbortType()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::AbortType(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_COMPOSITE_GET_ABORTTYPE_OFFSET))(this);
		}

		::System::Boolean OnReevaluationStarted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_COMPOSITE_ONREEVALUATIONSTARTED_OFFSET))(this);
		}

		::System::Void OnReevaluationEnded(::BehaviorDesigner::Runtime::Tasks::TaskStatus status)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_COMPOSITE_ONREEVALUATIONENDED_OFFSET))(this, status);
		}
	};
}
