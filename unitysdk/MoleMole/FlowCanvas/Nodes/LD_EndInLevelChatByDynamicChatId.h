#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ENDINLEVELCHATBYDYNAMICCHATID_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0xB836360)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ENDINLEVELCHATBYDYNAMICCHATID__CTOR_OFFSET UNITYSDK_OFFSET(0xB836470)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ENDINLEVELCHATBYDYNAMICCHATID__REGISTERPORTS_B__4_0_OFFSET UNITYSDK_OFFSET(0xB836490)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_EndInLevelChatByDynamicChatId_TypeDefinitionIndex = 58618;

	class LD_EndInLevelChatByDynamicChatId : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowInput* _in; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Int32>* ChatID; // 0xB0
		::FlowCanvas::FlowOutput* _out; // 0xB8
		::System::Boolean CutCameraBlendOut; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ENDINLEVELCHATBYDYNAMICCHATID__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ENDINLEVELCHATBYDYNAMICCHATID_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__4_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ENDINLEVELCHATBYDYNAMICCHATID__REGISTERPORTS_B__4_0_OFFSET))(this, f);
		}
	};
}
