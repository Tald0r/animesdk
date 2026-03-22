#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Behavior_EventTypes.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace BehaviorDesigner::Runtime { class SharedString; }
namespace UnityEngine { class Collision; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDCOLLISION_ONCOLLISIONENTER_OFFSET UNITYSDK_OFFSET(0x1AC6ECD0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDCOLLISION_ONEND_OFFSET UNITYSDK_OFFSET(0x1AC6EC90)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDCOLLISION_ONRESET_OFFSET UNITYSDK_OFFSET(0x1AC6EEC0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDCOLLISION_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1AC6EC40)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDCOLLISION_SELFCONTAINSMETHOD_OFFSET UNITYSDK_OFFSET(0x1AC6EBD0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDCOLLISION__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC6EF20)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDCOLLISION___BASE_ONCOLLISIONENTER_OFFSET UNITYSDK_OFFSET(0x1AC6EF70)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDCOLLISION___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0x1AC6F000)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDCOLLISION___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1AC6F090)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDCOLLISION___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1AC6F120)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDCOLLISION___BASE_SELFCONTAINSMETHOD_OFFSET UNITYSDK_OFFSET(0x1AC6F1B0)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int HasEnteredCollision_TypeDefinitionIndex = 30276;

	class HasEnteredCollision : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::BehaviorDesigner::Runtime::SharedGameObject* collidedGameObject; // 0x50
		::BehaviorDesigner::Runtime::SharedString* tag; // 0x58
		::System::Boolean enteredCollision; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDCOLLISION__CTOR_OFFSET))(this);
		}

		::System::Boolean SelfContainsMethod(::BehaviorDesigner::Runtime::Behavior_EventTypes evt)
		{
			return ((::System::Boolean(*)(::PVOID, ::BehaviorDesigner::Runtime::Behavior_EventTypes))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDCOLLISION_SELFCONTAINSMETHOD_OFFSET))(this, evt);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDCOLLISION_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDCOLLISION_ONEND_OFFSET))(this);
		}

		::System::Void OnCollisionEnter(::UnityEngine::Collision* collision)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDCOLLISION_ONCOLLISIONENTER_OFFSET))(this, collision);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDCOLLISION_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnCollisionEnter(::UnityEngine::Collision* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDCOLLISION___BASE_ONCOLLISIONENTER_OFFSET))(this, P0);
		}

		::System::Void __base_OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDCOLLISION___BASE_ONEND_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDCOLLISION___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDCOLLISION___BASE_ONUPDATE_OFFSET))(this);
		}

		::System::Boolean __base_SelfContainsMethod(::BehaviorDesigner::Runtime::Behavior_EventTypes P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::BehaviorDesigner::Runtime::Behavior_EventTypes))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDCOLLISION___BASE_SELFCONTAINSMETHOD_OFFSET))(this, P0);
		}
	};
}
