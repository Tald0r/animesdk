#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDSTARTBATTLE_INVOKE_OFFSET UNITYSDK_OFFSET(0xE876780)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDSTARTBATTLE__CTOR_OFFSET UNITYSDK_OFFSET(0xE8768E0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDTurnBasedStartBattle_TypeDefinitionIndex = 73013;

	class LDTurnBasedStartBattle : public ::FlowCanvas::Nodes::CallableActionNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDSTARTBATTLE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDSTARTBATTLE_INVOKE_OFFSET))(this);
		}
	};
}
