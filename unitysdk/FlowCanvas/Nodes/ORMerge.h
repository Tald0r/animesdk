#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }

#define FLOWCANVAS_NODES_ORMERGE_CHECK_OFFSET UNITYSDK_OFFSET(0x196D4F30)
#define FLOWCANVAS_NODES_ORMERGE_GET_PORTCOUNT_OFFSET UNITYSDK_OFFSET(0x196D4E10)
#define FLOWCANVAS_NODES_ORMERGE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x196D4E30)
#define FLOWCANVAS_NODES_ORMERGE_SET_PORTCOUNT_OFFSET UNITYSDK_OFFSET(0x196D4E20)
#define FLOWCANVAS_NODES_ORMERGE__CTOR_OFFSET UNITYSDK_OFFSET(0x196D4FA0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ORMerge_TypeDefinitionIndex = 26643;

	class ORMerge : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* fOut; // 0xA8
		::System::Int32 _portCount; // 0xB0
		::System::Int32 lastFrameCall; // 0xB4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_ORMERGE__CTOR_OFFSET))(this);
		}

		::System::Int32 get_PortCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_ORMERGE_GET_PORTCOUNT_OFFSET))(this);
		}

		::System::Void set_PortCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_ORMERGE_SET_PORTCOUNT_OFFSET))(this, value);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_ORMERGE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Check(::System::Int32 index, ::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_ORMERGE_CHECK_OFFSET))(this, index, f);
		}
	};
}
