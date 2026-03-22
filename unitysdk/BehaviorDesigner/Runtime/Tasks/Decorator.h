#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/ParentTask.h"

#define BEHAVIORDESIGNER_RUNTIME_TASKS_DECORATOR_MAXCHILDREN_OFFSET UNITYSDK_OFFSET(0x19B58C20)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_DECORATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x19B58C70)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_DECORATOR___BASE_MAXCHILDREN_OFFSET UNITYSDK_OFFSET(0x19B58CB0)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int Decorator_TypeDefinitionIndex = 30335;

	class Decorator : public ::BehaviorDesigner::Runtime::Tasks::ParentTask
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_DECORATOR__CTOR_OFFSET))(this);
		}

		::System::Int32 MaxChildren()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_DECORATOR_MAXCHILDREN_OFFSET))(this);
		}

		::System::Int32 __base_MaxChildren()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_DECORATOR___BASE_MAXCHILDREN_OFFSET))(this);
		}
	};
}
