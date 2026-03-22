#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_STOP_ONRESET_OFFSET UNITYSDK_OFFSET(0x1AE2E890)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_STOP_ONSTART_OFFSET UNITYSDK_OFFSET(0x1AE2E520)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_STOP_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1AE2E710)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_STOP__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE2E8E0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_STOP___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1AE2E920)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_STOP___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1AE2E9B0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_STOP___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1AE2EA40)

namespace BehaviorDesigner::Runtime::Tasks::Unity::Timeline
{
	inline static constexpr unsigned int Stop_TypeDefinitionIndex = 30428;

	class Stop : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::UnityEngine::GameObject* prevGameObject; // 0x58
		::UnityEngine::Playables::PlayableDirector* playableDirector; // 0x60
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_STOP__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_STOP_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_STOP_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_STOP_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_STOP___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_STOP___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_STOP___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
