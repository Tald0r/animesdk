#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/EventNode.h"

namespace FlowCanvas { class FlowOutput; }

#define FLOWCANVAS_NODES_FIXEDUPDATEEVENT_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1A7200A0)
#define FLOWCANVAS_NODES_FIXEDUPDATEEVENT_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1A71FF40)
#define FLOWCANVAS_NODES_FIXEDUPDATEEVENT_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1A71FFF0)
#define FLOWCANVAS_NODES_FIXEDUPDATEEVENT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1A71FF10)
#define FLOWCANVAS_NODES_FIXEDUPDATEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7200E0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int FixedUpdateEvent_TypeDefinitionIndex = 27356;

	class FixedUpdateEvent : public ::FlowCanvas::Nodes::EventNode
	{
	public:
		::FlowCanvas::FlowOutput* fixedUpdate; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FIXEDUPDATEEVENT__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FIXEDUPDATEEVENT_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FIXEDUPDATEEVENT_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FIXEDUPDATEEVENT_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FIXEDUPDATEEVENT_FIXEDUPDATE_OFFSET))(this);
		}
	};
}
