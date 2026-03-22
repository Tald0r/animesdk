#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_NEXTPORTALSELECT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0xF1AEA20)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_NEXTPORTALSELECT__CTOR_OFFSET UNITYSDK_OFFSET(0xF1AEE70)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_NEXTPORTALSELECT__REGISTERPORTS_B__3_0_OFFSET UNITYSDK_OFFSET(0xF1AEE90)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_NEXTPORTALSELECT__SENDEVENT_OFFSET UNITYSDK_OFFSET(0xF1AEB40)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_NextPortalSelect_TypeDefinitionIndex = 70831;

	class LD_AbyssS2_NextPortalSelect : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Int32>* nextSelectIndex; // 0xA8
		::FlowCanvas::FlowOutput* _error; // 0xB0
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
