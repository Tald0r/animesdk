#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDMUTEENEMYINDICATOR_PROCESS_OFFSET UNITYSDK_OFFSET(0x1164D1F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMUTEENEMYINDICATOR_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1164D0E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMUTEENEMYINDICATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1164D6A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMUTEENEMYINDICATOR__REGISTERPORTS_B__2_0_OFFSET UNITYSDK_OFFSET(0x1164D6C0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDMuteEnemyIndicator_TypeDefinitionIndex = 44764;

	class LDMuteEnemyIndicator : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Boolean>* muteStateInput; // 0xA8
		::FlowCanvas::FlowOutput* output; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMUTEENEMYINDICATOR__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMUTEENEMYINDICATOR_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Process(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMUTEENEMYINDICATOR_PROCESS_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__2_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMUTEENEMYINDICATOR__REGISTERPORTS_B__2_0_OFFSET))(this, f);
		}
	};
}
