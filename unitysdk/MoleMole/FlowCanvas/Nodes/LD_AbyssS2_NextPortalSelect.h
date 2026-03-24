#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_NEXTPORTALSELECT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0xB9888E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_NEXTPORTALSELECT__CTOR_OFFSET UNITYSDK_OFFSET(0xB988D30)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_NEXTPORTALSELECT__REGISTERPORTS_B__3_0_OFFSET UNITYSDK_OFFSET(0xB988D50)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_NEXTPORTALSELECT__SENDEVENT_OFFSET UNITYSDK_OFFSET(0xB988A00)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_NextPortalSelect_TypeDefinitionIndex = 40700;

	class LD_AbyssS2_NextPortalSelect : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* _error; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Int32>* nextSelectIndex; // 0xB0
		::FlowCanvas::FlowOutput* _output; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_NEXTPORTALSELECT__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_NEXTPORTALSELECT_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _SendEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_NEXTPORTALSELECT__SENDEVENT_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__3_0(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_NEXTPORTALSELECT__REGISTERPORTS_B__3_0_OFFSET))(this, flow);
		}
	};
}
