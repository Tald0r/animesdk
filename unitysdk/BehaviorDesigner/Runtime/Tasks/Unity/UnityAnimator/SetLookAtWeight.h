#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Behavior_EventTypes.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace UnityEngine { class Animator; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_SETLOOKATWEIGHT_ONANIMATORIK_OFFSET UNITYSDK_OFFSET(0x1AA079D0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_SETLOOKATWEIGHT_ONRESET_OFFSET UNITYSDK_OFFSET(0x1AA07B30)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_SETLOOKATWEIGHT_ONSTART_OFFSET UNITYSDK_OFFSET(0x1AA07820)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_SETLOOKATWEIGHT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1AA078A0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_SETLOOKATWEIGHT_SELFCONTAINSMETHOD_OFFSET UNITYSDK_OFFSET(0x1AA077B0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_SETLOOKATWEIGHT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA07B90)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_SETLOOKATWEIGHT___BASE_ONANIMATORIK_OFFSET UNITYSDK_OFFSET(0x1AA07BE0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_SETLOOKATWEIGHT___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1AA07C70)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_SETLOOKATWEIGHT___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1AA07D00)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_SETLOOKATWEIGHT___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1AA07D90)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_SETLOOKATWEIGHT___BASE_SELFCONTAINSMETHOD_OFFSET UNITYSDK_OFFSET(0x1AA07E20)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityAnimator
{
	inline static constexpr unsigned int SetLookAtWeight_TypeDefinitionIndex = 30769;

	class SetLookAtWeight : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::UnityEngine::Animator* animator; // 0x58
		::BehaviorDesigner::Runtime::SharedFloat* weight; // 0x60
		::System::Boolean weightSet; // 0x68
		::System::Single clampWeight; // 0x6C
		::System::Single headWeight; // 0x70
		::System::Single eyesWeight; // 0x74
		::System::Single bodyWeight; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_SETLOOKATWEIGHT__CTOR_OFFSET))(this);
		}

		::System::Boolean SelfContainsMethod(::BehaviorDesigner::Runtime::Behavior_EventTypes evt)
		{
			return ((::System::Boolean(*)(::PVOID, ::BehaviorDesigner::Runtime::Behavior_EventTypes))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_SETLOOKATWEIGHT_SELFCONTAINSMETHOD_OFFSET))(this, evt);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_SETLOOKATWEIGHT_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_SETLOOKATWEIGHT_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnAnimatorIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_SETLOOKATWEIGHT_ONANIMATORIK_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_SETLOOKATWEIGHT_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnAnimatorIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_SETLOOKATWEIGHT___BASE_ONANIMATORIK_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_SETLOOKATWEIGHT___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_SETLOOKATWEIGHT___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_SETLOOKATWEIGHT___BASE_ONUPDATE_OFFSET))(this);
		}

		::System::Boolean __base_SelfContainsMethod(::BehaviorDesigner::Runtime::Behavior_EventTypes P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::BehaviorDesigner::Runtime::Behavior_EventTypes))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_SETLOOKATWEIGHT___BASE_SELFCONTAINSMETHOD_OFFSET))(this, P0);
		}
	};
}
