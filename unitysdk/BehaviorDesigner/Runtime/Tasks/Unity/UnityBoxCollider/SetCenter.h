#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace BehaviorDesigner::Runtime { class SharedVector3; }
namespace UnityEngine { class BoxCollider; }
namespace UnityEngine { class GameObject; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBOXCOLLIDER_SETCENTER_ONRESET_OFFSET UNITYSDK_OFFSET(0x1A65F290)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBOXCOLLIDER_SETCENTER_ONSTART_OFFSET UNITYSDK_OFFSET(0x1A65EE80)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBOXCOLLIDER_SETCENTER_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1A65F070)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBOXCOLLIDER_SETCENTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A65F300)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBOXCOLLIDER_SETCENTER___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1A65F340)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBOXCOLLIDER_SETCENTER___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1A65F3D0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBOXCOLLIDER_SETCENTER___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1A65F460)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityBoxCollider
{
	inline static constexpr unsigned int SetCenter_TypeDefinitionIndex = 30716;

	class SetCenter : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::UnityEngine::GameObject* prevGameObject; // 0x58
		::UnityEngine::BoxCollider* boxCollider; // 0x60
		::BehaviorDesigner::Runtime::SharedVector3* center; // 0x68
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBOXCOLLIDER_SETCENTER__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBOXCOLLIDER_SETCENTER_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBOXCOLLIDER_SETCENTER_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBOXCOLLIDER_SETCENTER_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBOXCOLLIDER_SETCENTER___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBOXCOLLIDER_SETCENTER___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBOXCOLLIDER_SETCENTER___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
