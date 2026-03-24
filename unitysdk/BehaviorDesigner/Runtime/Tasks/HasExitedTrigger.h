#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Behavior_EventTypes.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace BehaviorDesigner::Runtime { class SharedString; }
namespace UnityEngine { class Collider; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDTRIGGER_ONEND_OFFSET UNITYSDK_OFFSET(0x1B446170)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDTRIGGER_ONRESET_OFFSET UNITYSDK_OFFSET(0x1B4463A0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDTRIGGER_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x1B4461B0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDTRIGGER_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1B446120)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDTRIGGER_SELFCONTAINSMETHOD_OFFSET UNITYSDK_OFFSET(0x1B4460B0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B446400)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDTRIGGER___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0x1B446450)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDTRIGGER___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1B4464E0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDTRIGGER___BASE_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x1B446570)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDTRIGGER___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1B446600)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDTRIGGER___BASE_SELFCONTAINSMETHOD_OFFSET UNITYSDK_OFFSET(0x1B446690)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int HasExitedTrigger_TypeDefinitionIndex = 31234;

	class HasExitedTrigger : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::BehaviorDesigner::Runtime::SharedGameObject* otherGameObject; // 0x50
		::BehaviorDesigner::Runtime::SharedString* tag; // 0x58
		::System::Boolean exitedTrigger; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Boolean SelfContainsMethod(::BehaviorDesigner::Runtime::Behavior_EventTypes evt)
		{
			return ((::System::Boolean(*)(::PVOID, ::BehaviorDesigner::Runtime::Behavior_EventTypes))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDTRIGGER_SELFCONTAINSMETHOD_OFFSET))(this, evt);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDTRIGGER_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDTRIGGER_ONEND_OFFSET))(this);
		}

		::System::Void OnTriggerExit(::UnityEngine::Collider* other)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDTRIGGER_ONTRIGGEREXIT_OFFSET))(this, other);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDTRIGGER_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDTRIGGER___BASE_ONEND_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDTRIGGER___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnTriggerExit(::UnityEngine::Collider* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDTRIGGER___BASE_ONTRIGGEREXIT_OFFSET))(this, P0);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDTRIGGER___BASE_ONUPDATE_OFFSET))(this);
		}

		::System::Boolean __base_SelfContainsMethod(::BehaviorDesigner::Runtime::Behavior_EventTypes P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::BehaviorDesigner::Runtime::Behavior_EventTypes))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASEXITEDTRIGGER___BASE_SELFCONTAINSMETHOD_OFFSET))(this, P0);
		}
	};
}
