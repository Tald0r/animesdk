#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/BehaviourTrees/BTComposite.h"
#include "unitysdk/NodeCanvas/Framework/Status.h"

namespace NodeCanvas::Framework { class IBlackboard; }
namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Component; }

#define NODECANVAS_BEHAVIOURTREES_PROBABILITYSELECTOR_GETTOTAL_OFFSET UNITYSDK_OFFSET(0x1A089530)
#define NODECANVAS_BEHAVIOURTREES_PROBABILITYSELECTOR_ONCHILDCONNECTED_OFFSET UNITYSDK_OFFSET(0x1A088F10)
#define NODECANVAS_BEHAVIOURTREES_PROBABILITYSELECTOR_ONCHILDDISCONNECTED_OFFSET UNITYSDK_OFFSET(0x1A0890C0)
#define NODECANVAS_BEHAVIOURTREES_PROBABILITYSELECTOR_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1A089200)
#define NODECANVAS_BEHAVIOURTREES_PROBABILITYSELECTOR_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1A089140)
#define NODECANVAS_BEHAVIOURTREES_PROBABILITYSELECTOR_ONRESET_OFFSET UNITYSDK_OFFSET(0x1A0891A0)
#define NODECANVAS_BEHAVIOURTREES_PROBABILITYSELECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A089690)

namespace NodeCanvas::BehaviourTrees
{
	inline static constexpr unsigned int ProbabilitySelector_TypeDefinitionIndex = 26453;

	class ProbabilitySelector : public ::NodeCanvas::BehaviourTrees::BTComposite
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* failChance; // 0x78
		::System::Collections::Generic::List_1<::NodeCanvas::Framework::BBParameter_1<::System::Single>*>* childWeights; // 0x80
		::System::Collections::Generic::List_1<::System::Int32>* failedIndeces; // 0x88
		::System::Single probability; // 0x90
		::System::Single currentProbability; // 0x94

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_PROBABILITYSELECTOR__CTOR_OFFSET))(this);
		}

		::System::Void OnChildConnected(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_PROBABILITYSELECTOR_ONCHILDCONNECTED_OFFSET))(this, index);
		}

		::System::Void OnChildDisconnected(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_PROBABILITYSELECTOR_ONCHILDDISCONNECTED_OFFSET))(this, index);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_PROBABILITYSELECTOR_ONGRAPHSTARTED_OFFSET))(this);
		}

		::NodeCanvas::Framework::Status OnExecute(::UnityEngine::Component* agent, ::NodeCanvas::Framework::IBlackboard* blackboard)
		{
			return ((::NodeCanvas::Framework::Status(*)(::PVOID, ::UnityEngine::Component*, ::NodeCanvas::Framework::IBlackboard*))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_PROBABILITYSELECTOR_ONEXECUTE_OFFSET))(this, agent, blackboard);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_PROBABILITYSELECTOR_ONRESET_OFFSET))(this);
		}

		::System::Single GetTotal()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_PROBABILITYSELECTOR_GETTOTAL_OFFSET))(this);
		}
	};
}
