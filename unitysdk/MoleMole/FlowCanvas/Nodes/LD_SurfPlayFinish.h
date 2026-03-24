#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNodeBase.h"

namespace FlowCanvas { class FlowNode; }
namespace FlowCanvas { class FlowOutput; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_SURFPLAYFINISH_ONREGISTERPORTS_OFFSET UNITYSDK_OFFSET(0xA01F860)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SURFPLAYFINISH_START_OFFSET UNITYSDK_OFFSET(0xA01F950)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SURFPLAYFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0xA01FB40)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_SurfPlayFinish_TypeDefinitionIndex = 62423;

	class LD_SurfPlayFinish : public ::FlowCanvas::Nodes::CallableActionNodeBase
	{
	public:
		::FlowCanvas::FlowOutput* _out; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SURFPLAYFINISH__CTOR_OFFSET))(this);
		}

		::System::Void OnRegisterPorts(::FlowCanvas::FlowNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::FlowNode*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SURFPLAYFINISH_ONREGISTERPORTS_OFFSET))(this, node);
		}

		::System::Void Start(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SURFPLAYFINISH_START_OFFSET))(this, flow);
		}
	};
}
