#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

class Class_3_2159197412A91599;
namespace FlowCanvas { class FlowOutput; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_CONFIRMROUTEMAP_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0xC2CA170)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_CONFIRMROUTEMAP__CTOR_OFFSET UNITYSDK_OFFSET(0xC2CA250)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_CONFIRMROUTEMAP__REGISTERPORTS_B__1_0_OFFSET UNITYSDK_OFFSET(0xC2CA270)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_CONFIRMROUTEMAP__REGISTERPORTS_B__1_1_OFFSET UNITYSDK_OFFSET(0xC2CA3E0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_ConfirmRouteMap_TypeDefinitionIndex = 59539;

	class LD_AbyssS2_ConfirmRouteMap : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* _output; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_CONFIRMROUTEMAP__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_CONFIRMROUTEMAP_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__1_0(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_CONFIRMROUTEMAP__REGISTERPORTS_B__1_0_OFFSET))(this, flow);
		}

		::System::Void _RegisterPorts_b__1_1(::System::Boolean b, ::Class_3_2159197412A91599* map)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_3_2159197412A91599*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_CONFIRMROUTEMAP__REGISTERPORTS_B__1_1_OFFSET))(this, b, map);
		}
	};
}
