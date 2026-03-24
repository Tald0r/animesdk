#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/GraphNodeFlow.h"

namespace NodeGraph { class NodeGraphBase; }
namespace System { class String; }

#define NODEGRAPH_GRAPHNODESTART_GET_NODENAME_OFFSET UNITYSDK_OFFSET(0x752B090)
#define NODEGRAPH_GRAPHNODESTART__CTOR_OFFSET UNITYSDK_OFFSET(0x752B0D0)

namespace NodeGraph
{
	inline static constexpr unsigned int GraphNodeStart_TypeDefinitionIndex = 50566;

	class GraphNodeStart : public ::NodeGraph::GraphNodeFlow
	{
	public:
		::System::Void _ctor(::NodeGraph::NodeGraphBase* nodeGraphBase)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::NodeGraphBase*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHNODESTART__CTOR_OFFSET))(this, nodeGraphBase);
		}

		::System::String* get_NodeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHNODESTART_GET_NODENAME_OFFSET))(this);
		}
	};
}
