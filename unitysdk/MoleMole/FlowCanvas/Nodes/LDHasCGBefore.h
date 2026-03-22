#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDHASCGBEFORE_CHECK_OFFSET UNITYSDK_OFFSET(0xE86A950)
#define MOLEMOLE_FLOWCANVAS_NODES_LDHASCGBEFORE_HASCGBEFORE_OFFSET UNITYSDK_OFFSET(0xE86AA50)
#define MOLEMOLE_FLOWCANVAS_NODES_LDHASCGBEFORE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0xE86A880)
#define MOLEMOLE_FLOWCANVAS_NODES_LDHASCGBEFORE__CTOR_OFFSET UNITYSDK_OFFSET(0xE86AC80)
#define MOLEMOLE_FLOWCANVAS_NODES_LDHASCGBEFORE__REGISTERPORTS_B__2_0_OFFSET UNITYSDK_OFFSET(0xE86ACA0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDHasCGBefore_TypeDefinitionIndex = 51586;

	class LDHasCGBefore : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* TrueOutput; // 0xA8
		::FlowCanvas::FlowOutput* FalseOutput; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDHASCGBEFORE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDHASCGBEFORE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Check(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDHASCGBEFORE_CHECK_OFFSET))(this, f);
		}

		::System::Boolean HasCGBefore()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDHASCGBEFORE_HASCGBEFORE_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__2_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDHASCGBEFORE__REGISTERPORTS_B__2_0_OFFSET))(this, f);
		}
	};
}
