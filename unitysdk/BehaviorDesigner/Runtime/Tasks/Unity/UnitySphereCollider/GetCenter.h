#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace BehaviorDesigner::Runtime { class SharedVector3; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class SphereCollider; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSPHERECOLLIDER_GETCENTER_ONRESET_OFFSET UNITYSDK_OFFSET(0x1A6356A0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSPHERECOLLIDER_GETCENTER_ONSTART_OFFSET UNITYSDK_OFFSET(0x1A6352D0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSPHERECOLLIDER_GETCENTER_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1A6354C0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSPHERECOLLIDER_GETCENTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A635700)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSPHERECOLLIDER_GETCENTER___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1A635740)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSPHERECOLLIDER_GETCENTER___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1A6357D0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSPHERECOLLIDER_GETCENTER___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1A635860)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnitySphereCollider
{
	inline static constexpr unsigned int GetCenter_TypeDefinitionIndex = 30443;

	class GetCenter : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::UnityEngine::GameObject* prevGameObject; // 0x58
		::BehaviorDesigner::Runtime::SharedVector3* storeValue; // 0x60
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x68
		::UnityEngine::SphereCollider* sphereCollider; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSPHERECOLLIDER_GETCENTER__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSPHERECOLLIDER_GETCENTER_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSPHERECOLLIDER_GETCENTER_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSPHERECOLLIDER_GETCENTER_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSPHERECOLLIDER_GETCENTER___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSPHERECOLLIDER_GETCENTER___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSPHERECOLLIDER_GETCENTER___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
