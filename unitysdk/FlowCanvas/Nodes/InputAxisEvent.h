#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/EventNode.h"

namespace FlowCanvas { class FlowOutput; }

#define FLOWCANVAS_NODES_INPUTAXISEVENT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1A601590)
#define FLOWCANVAS_NODES_INPUTAXISEVENT_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A601670)
#define FLOWCANVAS_NODES_INPUTAXISEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A601680)
#define FLOWCANVAS_NODES_INPUTAXISEVENT__REGISTERPORTS_B__4_0_OFFSET UNITYSDK_OFFSET(0x1A6016A0)
#define FLOWCANVAS_NODES_INPUTAXISEVENT__REGISTERPORTS_B__4_1_OFFSET UNITYSDK_OFFSET(0x1A6016B0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int InputAxisEvent_TypeDefinitionIndex = 26142;

	class InputAxisEvent : public ::FlowCanvas::Nodes::EventNode
	{
	public:
		::FlowCanvas::FlowOutput* o; // 0xA8
		::System::Single vertical; // 0xB0
		::System::Boolean calledLastFrame; // 0xB4
		::System::Single horizontal; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_INPUTAXISEVENT__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_INPUTAXISEVENT_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_INPUTAXISEVENT_UPDATE_OFFSET))(this);
		}

		::System::Single _RegisterPorts_b__4_0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_INPUTAXISEVENT__REGISTERPORTS_B__4_0_OFFSET))(this);
		}

		::System::Single _RegisterPorts_b__4_1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_INPUTAXISEVENT__REGISTERPORTS_B__4_1_OFFSET))(this);
		}
	};
}
