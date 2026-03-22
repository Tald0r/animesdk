#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDCLOSEALLTIP_INVOKE_OFFSET UNITYSDK_OFFSET(0xE0EE9A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCLOSEALLTIP__CTOR_OFFSET UNITYSDK_OFFSET(0xE0EF2D0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDCloseAllTip_TypeDefinitionIndex = 53819;

	class LDCloseAllTip : public ::FlowCanvas::Nodes::CallableActionNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCLOSEALLTIP__CTOR_OFFSET))(this);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCLOSEALLTIP_INVOKE_OFFSET))(this);
		}
	};
}
