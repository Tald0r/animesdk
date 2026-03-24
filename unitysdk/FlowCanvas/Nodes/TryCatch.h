#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

#define FLOWCANVAS_NODES_TRYCATCH_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1A602BC0)
#define FLOWCANVAS_NODES_TRYCATCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1A602CA0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int TryCatch_TypeDefinitionIndex = 26103;

	class TryCatch : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TRYCATCH__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TRYCATCH_REGISTERPORTS_OFFSET))(this);
		}
	};
}
