#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/BehaviourTrees/BTDecorator.h"
#include "unitysdk/NodeCanvas/BehaviourTrees/Monitor_MonitorMode.h"
#include "unitysdk/NodeCanvas/BehaviourTrees/Monitor_ReturnStatusMode.h"
#include "unitysdk/NodeCanvas/Framework/Status.h"

namespace NodeCanvas::Framework { class ActionTask; }
namespace NodeCanvas::Framework { class IBlackboard; }
namespace NodeCanvas::Framework { class Task; }
namespace UnityEngine { class Component; }

#define NODECANVAS_BEHAVIOURTREES_MONITOR_GET_ACTION_OFFSET UNITYSDK_OFFSET(0x1A17D870)
#define NODECANVAS_BEHAVIOURTREES_MONITOR_GET_TASK_OFFSET UNITYSDK_OFFSET(0x1A17D890)
#define NODECANVAS_BEHAVIOURTREES_MONITOR_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1A17D910)
#define NODECANVAS_BEHAVIOURTREES_MONITOR_ONRESET_OFFSET UNITYSDK_OFFSET(0x1A17DA70)
#define NODECANVAS_BEHAVIOURTREES_MONITOR_SET_ACTION_OFFSET UNITYSDK_OFFSET(0x1A17D880)
#define NODECANVAS_BEHAVIOURTREES_MONITOR_SET_TASK_OFFSET UNITYSDK_OFFSET(0x1A17D8A0)
#define NODECANVAS_BEHAVIOURTREES_MONITOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A17DAC0)

namespace NodeCanvas::BehaviourTrees
{
	inline static constexpr unsigned int Monitor_TypeDefinitionIndex = 26482;

	class Monitor : public ::NodeCanvas::BehaviourTrees::BTDecorator
	{
	public:
		::NodeCanvas::Framework::ActionTask* _action; // 0x78
		::NodeCanvas::Framework::Status decoratorActionStatus; // 0x80
		::NodeCanvas::BehaviourTrees::Monitor_MonitorMode monitorMode; // 0x84
		::NodeCanvas::BehaviourTrees::Monitor_ReturnStatusMode returnMode; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_MONITOR__CTOR_OFFSET))(this);
		}

		::NodeCanvas::Framework::ActionTask* get_action()
		{
			return ((::NodeCanvas::Framework::ActionTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_MONITOR_GET_ACTION_OFFSET))(this);
		}

		::System::Void set_action(::NodeCanvas::Framework::ActionTask* value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::ActionTask*))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_MONITOR_SET_ACTION_OFFSET))(this, value);
		}

		::NodeCanvas::Framework::Task* get_task()
		{
			return ((::NodeCanvas::Framework::Task*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_MONITOR_GET_TASK_OFFSET))(this);
		}

		::System::Void set_task(::NodeCanvas::Framework::Task* value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::Task*))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_MONITOR_SET_TASK_OFFSET))(this, value);
		}

		::NodeCanvas::Framework::Status OnExecute(::UnityEngine::Component* agent, ::NodeCanvas::Framework::IBlackboard* blackboard)
		{
			return ((::NodeCanvas::Framework::Status(*)(::PVOID, ::UnityEngine::Component*, ::NodeCanvas::Framework::IBlackboard*))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_MONITOR_ONEXECUTE_OFFSET))(this, agent, blackboard);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_MONITOR_ONRESET_OFFSET))(this);
		}
	};
}
