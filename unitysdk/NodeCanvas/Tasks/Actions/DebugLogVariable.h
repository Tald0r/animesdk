#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask.h"
#include "unitysdk/ParadoxNotion/CompactStatus.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class Object; }
namespace System { class String; }

#define NODECANVAS_TASKS_ACTIONS_DEBUGLOGVARIABLE_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1A2272C0)
#define NODECANVAS_TASKS_ACTIONS_DEBUGLOGVARIABLE_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1A227560)
#define NODECANVAS_TASKS_ACTIONS_DEBUGLOGVARIABLE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1A227570)
#define NODECANVAS_TASKS_ACTIONS_DEBUGLOGVARIABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A227670)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int DebugLogVariable_TypeDefinitionIndex = 27425;

	class DebugLogVariable : public ::NodeCanvas::Framework::ActionTask
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::String*>* prefix; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::System::Object*>* log; // 0x68
		::System::Single secondsToRun; // 0x70
		::ParadoxNotion::CompactStatus finishStatus; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_DEBUGLOGVARIABLE__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_DEBUGLOGVARIABLE_GET_INFO_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_DEBUGLOGVARIABLE_ONEXECUTE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_DEBUGLOGVARIABLE_ONUPDATE_OFFSET))(this);
		}
	};
}
