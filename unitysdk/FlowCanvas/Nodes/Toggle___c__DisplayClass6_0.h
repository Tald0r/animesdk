#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas::Nodes { class Toggle; }

#define FLOWCANVAS_NODES_TOGGLE___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A178500)
#define FLOWCANVAS_NODES_TOGGLE___C__DISPLAYCLASS6_0__REGISTERPORTS_B__0_OFFSET UNITYSDK_OFFSET(0x1A178510)
#define FLOWCANVAS_NODES_TOGGLE___C__DISPLAYCLASS6_0__REGISTERPORTS_B__1_OFFSET UNITYSDK_OFFSET(0x1A178570)
#define FLOWCANVAS_NODES_TOGGLE___C__DISPLAYCLASS6_0__REGISTERPORTS_B__2_OFFSET UNITYSDK_OFFSET(0x1A178590)
#define FLOWCANVAS_NODES_TOGGLE___C__DISPLAYCLASS6_0__REGISTERPORTS_B__3_OFFSET UNITYSDK_OFFSET(0x1A1785B0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int Toggle___c__DisplayClass6_0_TypeDefinitionIndex = 25389;

	class Toggle___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::FlowCanvas::Nodes::Toggle* __4__this; // 0x10
		::FlowCanvas::FlowOutput* fOn; // 0x18
		::FlowCanvas::FlowOutput* fOff; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TOGGLE___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TOGGLE___C__DISPLAYCLASS6_0__REGISTERPORTS_B__0_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__1(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TOGGLE___C__DISPLAYCLASS6_0__REGISTERPORTS_B__1_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__2(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TOGGLE___C__DISPLAYCLASS6_0__REGISTERPORTS_B__2_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__3(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TOGGLE___C__DISPLAYCLASS6_0__REGISTERPORTS_B__3_OFFSET))(this, f);
		}
	};
}
