#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedBool; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_MATH_SETBOOLLIST_ONRESET_OFFSET UNITYSDK_OFFSET(0x1AFF4680)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_MATH_SETBOOLLIST_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1AFF4500)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_MATH_SETBOOLLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFF4770)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_MATH_SETBOOLLIST___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1AFF47B0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_MATH_SETBOOLLIST___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1AFF4840)

namespace BehaviorDesigner::Runtime::Tasks::Basic::Math
{
	inline static constexpr unsigned int SetBoolList_TypeDefinitionIndex = 31302;

	class SetBoolList : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::Il2CppArray<::BehaviorDesigner::Runtime::SharedBool*>* storeValueList; // 0x58
		::Il2CppArray<::BehaviorDesigner::Runtime::SharedBool*>* boolValueList; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_MATH_SETBOOLLIST__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_MATH_SETBOOLLIST_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_MATH_SETBOOLLIST_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_MATH_SETBOOLLIST___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_MATH_SETBOOLLIST___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
