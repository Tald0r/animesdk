#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDSTARTBATTLE_INVOKE_OFFSET UNITYSDK_OFFSET(0xCD45350)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDSTARTBATTLE__CTOR_OFFSET UNITYSDK_OFFSET(0xCD454B0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDTurnBasedStartBattle_TypeDefinitionIndex = 42827;

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
