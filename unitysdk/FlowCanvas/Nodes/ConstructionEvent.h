#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/EventNode.h"

namespace FlowCanvas { class FlowOutput; }

#define FLOWCANVAS_NODES_CONSTRUCTIONEVENT_ONPOSTGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x19FE7450)
#define FLOWCANVAS_NODES_CONSTRUCTIONEVENT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x19FE74B0)
#define FLOWCANVAS_NODES_CONSTRUCTIONEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x19FE7500)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ConstructionEvent_TypeDefinitionIndex = 25514;

	class ConstructionEvent : public ::FlowCanvas::Nodes::EventNode
	{
	public:
		::FlowCanvas::FlowOutput* awake; // 0xA8
		::System::Boolean called; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CONSTRUCTIONEVENT__CTOR_OFFSET))(this);
		}

		::System::Void OnPostGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CONSTRUCTIONEVENT_ONPOSTGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CONSTRUCTIONEVENT_REGISTERPORTS_OFFSET))(this);
		}
	};
}
