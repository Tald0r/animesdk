#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/BehaviourTrees/BTComposite.h"
#include "unitysdk/NodeCanvas/Framework/Status.h"

namespace NodeCanvas::Framework { class IBlackboard; }
namespace UnityEngine { class Component; }

#define NODECANVAS_BEHAVIOURTREES_SEQUENCER_ONCHILDDISCONNECTED_OFFSET UNITYSDK_OFFSET(0x19162AA0)
#define NODECANVAS_BEHAVIOURTREES_SEQUENCER_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x19162790)
#define NODECANVAS_BEHAVIOURTREES_SEQUENCER_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x19162AB0)
#define NODECANVAS_BEHAVIOURTREES_SEQUENCER_ONRESET_OFFSET UNITYSDK_OFFSET(0x19162A40)
#define NODECANVAS_BEHAVIOURTREES_SEQUENCER__CTOR_OFFSET UNITYSDK_OFFSET(0x19162B10)

namespace NodeCanvas::BehaviourTrees
{
	inline static constexpr unsigned int Sequencer_TypeDefinitionIndex = 26824;

	class Sequencer : public ::NodeCanvas::BehaviourTrees::BTComposite
	{
	public:
		::System::Boolean random; // 0x78
		::System::Boolean dynamic; // 0x79
		::System::Int32 lastRunningNodeIndex; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_SEQUENCER__CTOR_OFFSET))(this);
		}

		::NodeCanvas::Framework::Status OnExecute(::UnityEngine::Component* agent, ::NodeCanvas::Framework::IBlackboard* blackboard)
		{
			return ((::NodeCanvas::Framework::Status(*)(::PVOID, ::UnityEngine::Component*, ::NodeCanvas::Framework::IBlackboard*))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_SEQUENCER_ONEXECUTE_OFFSET))(this, agent, blackboard);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_SEQUENCER_ONRESET_OFFSET))(this);
		}

		::System::Void OnChildDisconnected(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_SEQUENCER_ONCHILDDISCONNECTED_OFFSET))(this, index);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_SEQUENCER_ONGRAPHSTARTED_OFFSET))(this);
		}
	};
}
