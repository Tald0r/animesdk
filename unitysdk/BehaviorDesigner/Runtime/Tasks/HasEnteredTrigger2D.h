#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Behavior_EventTypes.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace BehaviorDesigner::Runtime { class SharedString; }
namespace UnityEngine { class Collider2D; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDTRIGGER2D_ONEND_OFFSET UNITYSDK_OFFSET(0x1AC27B50)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDTRIGGER2D_ONRESET_OFFSET UNITYSDK_OFFSET(0x1AC27D80)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDTRIGGER2D_ONTRIGGERENTER2D_OFFSET UNITYSDK_OFFSET(0x1AC27B90)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDTRIGGER2D_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1AC27B00)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDTRIGGER2D_SELFCONTAINSMETHOD_OFFSET UNITYSDK_OFFSET(0x1AC27A90)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDTRIGGER2D__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC27DE0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDTRIGGER2D___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0x1AC27E30)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDTRIGGER2D___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1AC27EC0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDTRIGGER2D___BASE_ONTRIGGERENTER2D_OFFSET UNITYSDK_OFFSET(0x1AC27F50)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDTRIGGER2D___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1AC27FE0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDTRIGGER2D___BASE_SELFCONTAINSMETHOD_OFFSET UNITYSDK_OFFSET(0x1AC28070)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int HasEnteredTrigger2D_TypeDefinitionIndex = 30279;

	class HasEnteredTrigger2D : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::BehaviorDesigner::Runtime::SharedString* tag; // 0x50
		::BehaviorDesigner::Runtime::SharedGameObject* otherGameObject; // 0x58
		::System::Boolean enteredTrigger; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDTRIGGER2D__CTOR_OFFSET))(this);
		}

		::System::Boolean SelfContainsMethod(::BehaviorDesigner::Runtime::Behavior_EventTypes evt)
		{
			return ((::System::Boolean(*)(::PVOID, ::BehaviorDesigner::Runtime::Behavior_EventTypes))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDTRIGGER2D_SELFCONTAINSMETHOD_OFFSET))(this, evt);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDTRIGGER2D_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDTRIGGER2D_ONEND_OFFSET))(this);
		}

		::System::Void OnTriggerEnter2D(::UnityEngine::Collider2D* other)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider2D*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDTRIGGER2D_ONTRIGGERENTER2D_OFFSET))(this, other);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDTRIGGER2D_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDTRIGGER2D___BASE_ONEND_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDTRIGGER2D___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnTriggerEnter2D(::UnityEngine::Collider2D* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider2D*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDTRIGGER2D___BASE_ONTRIGGERENTER2D_OFFSET))(this, P0);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDTRIGGER2D___BASE_ONUPDATE_OFFSET))(this);
		}

		::System::Boolean __base_SelfContainsMethod(::BehaviorDesigner::Runtime::Behavior_EventTypes P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::BehaviorDesigner::Runtime::Behavior_EventTypes))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDTRIGGER2D___BASE_SELFCONTAINSMETHOD_OFFSET))(this, P0);
		}
	};
}
