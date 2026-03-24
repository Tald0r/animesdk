#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/GraphNodeBase.h"

namespace NodeGraph { class NodeGraphBase; }

#define NODEGRAPH_GRAPHNODEFLOW__CTOR_OFFSET UNITYSDK_OFFSET(0x7862C20)

namespace NodeGraph
{
	inline static constexpr unsigned int GraphNodeFlow_TypeDefinitionIndex = 72764;

	class GraphNodeFlow : public ::NodeGraph::GraphNodeBase
	{
	public:
		::System::Void _ctor(::NodeGraph::NodeGraphBase* nodeGraphBase)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::NodeGraphBase*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHNODEFLOW__CTOR_OFFSET))(this, nodeGraphBase);
		}
	};
}
