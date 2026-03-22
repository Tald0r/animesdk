#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedColor; }
namespace BehaviorDesigner::Runtime { class SharedVector3; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYDEBUG_DRAWRAY_ONRESET_OFFSET UNITYSDK_OFFSET(0x1AD18890)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYDEBUG_DRAWRAY_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1AD18540)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYDEBUG_DRAWRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD18930)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYDEBUG_DRAWRAY___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1AD18990)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYDEBUG_DRAWRAY___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1AD18A20)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityDebug
{
	inline static constexpr unsigned int DrawRay_TypeDefinitionIndex = 30695;

	class DrawRay : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedColor* color; // 0x58
		::BehaviorDesigner::Runtime::SharedVector3* start; // 0x60
		::BehaviorDesigner::Runtime::SharedVector3* direction; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYDEBUG_DRAWRAY__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYDEBUG_DRAWRAY_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYDEBUG_DRAWRAY_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYDEBUG_DRAWRAY___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYDEBUG_DRAWRAY___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
