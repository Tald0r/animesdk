#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace BehaviorDesigner::Runtime { class SharedVector3; }
namespace UnityEngine { class BoxCollider; }
namespace UnityEngine { class GameObject; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBOXCOLLIDER_GETSIZE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1AA08F50)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBOXCOLLIDER_GETSIZE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1AA08B80)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBOXCOLLIDER_GETSIZE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1AA08D70)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBOXCOLLIDER_GETSIZE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA08FC0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBOXCOLLIDER_GETSIZE___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1AA09000)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBOXCOLLIDER_GETSIZE___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1AA09090)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBOXCOLLIDER_GETSIZE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1AA09120)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityBoxCollider
{
	inline static constexpr unsigned int GetSize_TypeDefinitionIndex = 30715;

	class GetSize : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x58
		::UnityEngine::BoxCollider* boxCollider; // 0x60
		::UnityEngine::GameObject* prevGameObject; // 0x68
		::BehaviorDesigner::Runtime::SharedVector3* storeValue; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBOXCOLLIDER_GETSIZE__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBOXCOLLIDER_GETSIZE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBOXCOLLIDER_GETSIZE_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBOXCOLLIDER_GETSIZE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBOXCOLLIDER_GETSIZE___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBOXCOLLIDER_GETSIZE___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBOXCOLLIDER_GETSIZE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
