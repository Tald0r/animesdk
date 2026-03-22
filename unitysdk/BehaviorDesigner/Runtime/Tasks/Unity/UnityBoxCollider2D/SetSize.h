#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace BehaviorDesigner::Runtime { class SharedVector2; }
namespace UnityEngine { class BoxCollider2D; }
namespace UnityEngine { class GameObject; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBOXCOLLIDER2D_SETSIZE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1AA65F40)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBOXCOLLIDER2D_SETSIZE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1AA65B30)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBOXCOLLIDER2D_SETSIZE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1AA65D50)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBOXCOLLIDER2D_SETSIZE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA65FA0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBOXCOLLIDER2D_SETSIZE___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1AA65FE0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBOXCOLLIDER2D_SETSIZE___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1AA66020)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBOXCOLLIDER2D_SETSIZE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1AA66060)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityBoxCollider2D
{
	inline static constexpr unsigned int SetSize_TypeDefinitionIndex = 30713;

	class SetSize : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedVector2* size; // 0x58
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x60
		::UnityEngine::BoxCollider2D* boxCollider2D; // 0x68
		::UnityEngine::GameObject* prevGameObject; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBOXCOLLIDER2D_SETSIZE__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBOXCOLLIDER2D_SETSIZE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBOXCOLLIDER2D_SETSIZE_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBOXCOLLIDER2D_SETSIZE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBOXCOLLIDER2D_SETSIZE___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBOXCOLLIDER2D_SETSIZE___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBOXCOLLIDER2D_SETSIZE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
