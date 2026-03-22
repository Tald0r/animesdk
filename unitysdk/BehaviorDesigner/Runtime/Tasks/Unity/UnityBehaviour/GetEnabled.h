#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedBehaviour; }
namespace BehaviorDesigner::Runtime { class SharedBool; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBEHAVIOUR_GETENABLED_ONRESET_OFFSET UNITYSDK_OFFSET(0x1A6E3E40)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBEHAVIOUR_GETENABLED_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1A6E3CB0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBEHAVIOUR_GETENABLED__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6E3F30)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBEHAVIOUR_GETENABLED___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1A6E3F70)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBEHAVIOUR_GETENABLED___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1A6E4000)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityBehaviour
{
	inline static constexpr unsigned int GetEnabled_TypeDefinitionIndex = 30718;

	class GetEnabled : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedBool* storeValue; // 0x58
		::BehaviorDesigner::Runtime::SharedBehaviour* specifiedObject; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBEHAVIOUR_GETENABLED__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBEHAVIOUR_GETENABLED_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBEHAVIOUR_GETENABLED_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBEHAVIOUR_GETENABLED___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBEHAVIOUR_GETENABLED___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
