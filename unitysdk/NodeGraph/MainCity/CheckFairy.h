#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/MainCity/Trigger.h"

namespace NodeGraph { class NodeGraphBase; }

#define NODEGRAPH_MAINCITY_CHECKFAIRY_CHECKCONDITION_OFFSET UNITYSDK_OFFSET(0x9B0D090)
#define NODEGRAPH_MAINCITY_CHECKFAIRY__CTOR_OFFSET UNITYSDK_OFFSET(0x9B0D080)
#define NODEGRAPH_MAINCITY_CHECKFAIRY___BASE_CHECKCONDITION_OFFSET UNITYSDK_OFFSET(0x9B0D3F0)

namespace NodeGraph::MainCity
{
	inline static constexpr unsigned int CheckFairy_TypeDefinitionIndex = 66457;

	class CheckFairy : public ::NodeGraph::MainCity::Trigger
	{
	public:
		::System::Void _ctor(::NodeGraph::NodeGraphBase* nodeGraphBase)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::NodeGraphBase*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKFAIRY__CTOR_OFFSET))(this, nodeGraphBase);
		}

		::System::Boolean CheckCondition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKFAIRY_CHECKCONDITION_OFFSET))(this);
		}

		::System::Boolean __base_CheckCondition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKFAIRY___BASE_CHECKCONDITION_OFFSET))(this);
		}
	};
}
