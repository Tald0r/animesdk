#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Services/SubTaskStatus.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Services/SubTaskStatusInfo.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_SERVICES_SUBTASK_DRAWSTATUSINFO_OFFSET UNITYSDK_OFFSET(0x1B234220)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_SERVICES_SUBTASK_GET_DISABLED_OFFSET UNITYSDK_OFFSET(0x1B2341E0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_SERVICES_SUBTASK_GET_EXECUTIONSTATUS_OFFSET UNITYSDK_OFFSET(0x1B234200)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_SERVICES_SUBTASK_GET_FRIENDLYNAME_OFFSET UNITYSDK_OFFSET(0x1B2341C0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_SERVICES_SUBTASK_GET_PROXYFRIENDLYNAME_OFFSET UNITYSDK_OFFSET(0x1B2341A0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_SERVICES_SUBTASK_SET_DISABLED_OFFSET UNITYSDK_OFFSET(0x1B2341F0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_SERVICES_SUBTASK_SET_EXECUTIONSTATUS_OFFSET UNITYSDK_OFFSET(0x1B234210)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_SERVICES_SUBTASK_SET_FRIENDLYNAME_OFFSET UNITYSDK_OFFSET(0x1B2341D0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_SERVICES_SUBTASK_SET_PROXYFRIENDLYNAME_OFFSET UNITYSDK_OFFSET(0x1B2341B0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_SERVICES_SUBTASK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B234270)

namespace BehaviorDesigner::Runtime::Tasks::Services
{
	inline static constexpr unsigned int SubTask_TypeDefinitionIndex = 31767;

	class SubTask : public ::System::Object
	{
	public:
		::System::String* friendlyName; // 0x10
		::System::Boolean disabled; // 0x18
		::BehaviorDesigner::Runtime::Tasks::Services::SubTaskStatus executionStatus; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_SERVICES_SUBTASK__CTOR_OFFSET))(this);
		}

		::System::String* get_ProxyfriendlyName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_SERVICES_SUBTASK_GET_PROXYFRIENDLYNAME_OFFSET))(this);
		}

		::System::Void set_ProxyfriendlyName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_SERVICES_SUBTASK_SET_PROXYFRIENDLYNAME_OFFSET))(this, value);
		}

		::System::String* get_FriendlyName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_SERVICES_SUBTASK_GET_FRIENDLYNAME_OFFSET))(this);
		}

		::System::Void set_FriendlyName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_SERVICES_SUBTASK_SET_FRIENDLYNAME_OFFSET))(this, value);
		}

		::System::Boolean get_Disabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_SERVICES_SUBTASK_GET_DISABLED_OFFSET))(this);
		}

		::System::Void set_Disabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_SERVICES_SUBTASK_SET_DISABLED_OFFSET))(this, value);
		}

		::BehaviorDesigner::Runtime::Tasks::Services::SubTaskStatus get_ExecutionStatus()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::Services::SubTaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_SERVICES_SUBTASK_GET_EXECUTIONSTATUS_OFFSET))(this);
		}

		::System::Void set_ExecutionStatus(::BehaviorDesigner::Runtime::Tasks::Services::SubTaskStatus value)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::Services::SubTaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_SERVICES_SUBTASK_SET_EXECUTIONSTATUS_OFFSET))(this, value);
		}

		::System::Void DrawStatusInfo(::BehaviorDesigner::Runtime::Tasks::Services::SubTaskStatusInfo& editorStatus)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::Services::SubTaskStatusInfo&))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_SERVICES_SUBTASK_DRAWSTATUSINFO_OFFSET))(this, editorStatus);
		}
	};
}
