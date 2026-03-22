#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/FlowNode.h"

namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWBANNER_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0xCCE5C40)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWBANNER_START_OFFSET UNITYSDK_OFFSET(0xCCE5D90)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWBANNER__CTOR_OFFSET UNITYSDK_OFFSET(0xCCE6230)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWBANNER__REGISTERPORTS_B__5_0_OFFSET UNITYSDK_OFFSET(0xCCE6250)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWBANNER__START_B__6_0_OFFSET UNITYSDK_OFFSET(0xCCE6280)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDShowBanner_TypeDefinitionIndex = 68090;

	class LDShowBanner : public ::FlowCanvas::FlowNode
	{
	public:
		::FlowCanvas::FlowOutput* _onClickOk; // 0xA8
		::FlowCanvas::FlowOutput* _output; // 0xB0
		::FlowCanvas::ValueInput_1<::System::String*>* _title; // 0xB8
		::FlowCanvas::FlowInput* _start; // 0xC0
		::FlowCanvas::ValueInput_1<::System::String*>* _message; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWBANNER__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWBANNER_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Start(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWBANNER_START_OFFSET))(this, flow);
		}

		::System::Void _RegisterPorts_b__5_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWBANNER__REGISTERPORTS_B__5_0_OFFSET))(this, f);
		}

		::System::Void _Start_b__6_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWBANNER__START_B__6_0_OFFSET))(this);
		}
	};
}
