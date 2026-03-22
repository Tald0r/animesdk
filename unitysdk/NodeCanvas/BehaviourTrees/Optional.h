#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/BehaviourTrees/BTDecorator.h"
#include "unitysdk/NodeCanvas/Framework/Status.h"

namespace NodeCanvas::Framework { class IBlackboard; }
namespace UnityEngine { class Component; }

#define NODECANVAS_BEHAVIOURTREES_OPTIONAL_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x19E07CE0)
#define NODECANVAS_BEHAVIOURTREES_OPTIONAL__CTOR_OFFSET UNITYSDK_OFFSET(0x19E07EF0)

namespace NodeCanvas::BehaviourTrees
{
	inline static constexpr unsigned int Optional_TypeDefinitionIndex = 25295;

	class Optional : public ::NodeCanvas::BehaviourTrees::BTDecorator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_OPTIONAL__CTOR_OFFSET))(this);
		}

		::NodeCanvas::Framework::Status OnExecute(::UnityEngine::Component* agent, ::NodeCanvas::Framework::IBlackboard* blackboard)
		{
			return ((::NodeCanvas::Framework::Status(*)(::PVOID, ::UnityEngine::Component*, ::NodeCanvas::Framework::IBlackboard*))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_OPTIONAL_ONEXECUTE_OFFSET))(this, agent, blackboard);
		}
	};
}
