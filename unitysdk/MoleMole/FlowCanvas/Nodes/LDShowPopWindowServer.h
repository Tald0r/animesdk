#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWPOPWINDOWSERVER_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x8F764F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWPOPWINDOWSERVER__CTOR_OFFSET UNITYSDK_OFFSET(0x8F76620)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWPOPWINDOWSERVER__REGISTERPORTS_B__3_0_OFFSET UNITYSDK_OFFSET(0x8F76640)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDShowPopWindowServer_TypeDefinitionIndex = 54093;

	class LDShowPopWindowServer : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Int32>* popID; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Boolean>* popNewIcon; // 0xB0
		::FlowCanvas::FlowOutput* output; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWPOPWINDOWSERVER__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWPOPWINDOWSERVER_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__3_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWPOPWINDOWSERVER__REGISTERPORTS_B__3_0_OFFSET))(this, f);
		}
	};
}
