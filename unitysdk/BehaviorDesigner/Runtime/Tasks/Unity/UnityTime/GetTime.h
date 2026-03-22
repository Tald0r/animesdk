#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedFloat; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTIME_GETTIME_ONRESET_OFFSET UNITYSDK_OFFSET(0x1AA2F860)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTIME_GETTIME_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1AA2F7F0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTIME_GETTIME__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA2F8B0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTIME_GETTIME___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1AA2F8F0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTIME_GETTIME___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1AA2F980)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityTime
{
	inline static constexpr unsigned int GetTime_TypeDefinitionIndex = 30431;

	class GetTime : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedFloat* storeResult; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTIME_GETTIME__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTIME_GETTIME_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTIME_GETTIME_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTIME_GETTIME___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTIME_GETTIME___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
