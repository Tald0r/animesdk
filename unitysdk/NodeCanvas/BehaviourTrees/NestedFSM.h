#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/BehaviourTrees/BTNodeNested_1.h"
#include "unitysdk/NodeCanvas/Framework/Status.h"

namespace NodeCanvas::Framework { class BBParameter; }
namespace NodeCanvas::Framework { class IBlackboard; }
namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace NodeCanvas::StateMachines { class FSM; }
namespace System { class String; }
namespace UnityEngine { class Component; }

#define NODECANVAS_BEHAVIOURTREES_NESTEDFSM_GET_SUBGRAPHPARAMETER_OFFSET UNITYSDK_OFFSET(0x1A268020)
#define NODECANVAS_BEHAVIOURTREES_NESTEDFSM_GET_SUBGRAPH_OFFSET UNITYSDK_OFFSET(0x1A267F60)
#define NODECANVAS_BEHAVIOURTREES_NESTEDFSM_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1A268030)
#define NODECANVAS_BEHAVIOURTREES_NESTEDFSM_ONFSMFINISH_OFFSET UNITYSDK_OFFSET(0x1A2683B0)
#define NODECANVAS_BEHAVIOURTREES_NESTEDFSM_ONRESET_OFFSET UNITYSDK_OFFSET(0x1A2683C0)
#define NODECANVAS_BEHAVIOURTREES_NESTEDFSM_SET_SUBGRAPH_OFFSET UNITYSDK_OFFSET(0x1A267FC0)
#define NODECANVAS_BEHAVIOURTREES_NESTEDFSM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A268450)

namespace NodeCanvas::BehaviourTrees
{
	inline static constexpr unsigned int NestedFSM_TypeDefinitionIndex = 25605;

	class NestedFSM : public ::NodeCanvas::BehaviourTrees::BTNodeNested_1<::NodeCanvas::StateMachines::FSM*>
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::NodeCanvas::StateMachines::FSM*>* _nestedFSM; // 0x90
		::System::String* failureState; // 0x98
		::System::String* successState; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_NESTEDFSM__CTOR_OFFSET))(this);
		}

		::NodeCanvas::StateMachines::FSM* get_subGraph()
		{
			return ((::NodeCanvas::StateMachines::FSM*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_NESTEDFSM_GET_SUBGRAPH_OFFSET))(this);
		}

		::System::Void set_subGraph(::NodeCanvas::StateMachines::FSM* value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::StateMachines::FSM*))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_NESTEDFSM_SET_SUBGRAPH_OFFSET))(this, value);
		}

		::NodeCanvas::Framework::BBParameter* get_subGraphParameter()
		{
			return ((::NodeCanvas::Framework::BBParameter*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_NESTEDFSM_GET_SUBGRAPHPARAMETER_OFFSET))(this);
		}

		::NodeCanvas::Framework::Status OnExecute(::UnityEngine::Component* agent, ::NodeCanvas::Framework::IBlackboard* blackboard)
		{
			return ((::NodeCanvas::Framework::Status(*)(::PVOID, ::UnityEngine::Component*, ::NodeCanvas::Framework::IBlackboard*))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_NESTEDFSM_ONEXECUTE_OFFSET))(this, agent, blackboard);
		}

		::System::Void OnFSMFinish(::System::Boolean success)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_NESTEDFSM_ONFSMFINISH_OFFSET))(this, success);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_NESTEDFSM_ONRESET_OFFSET))(this);
		}
	};
}
