#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETSMASHBROCOUNTDOWN_INVOKE_OFFSET UNITYSDK_OFFSET(0xCD38CB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETSMASHBROCOUNTDOWN__CTOR_OFFSET UNITYSDK_OFFSET(0xCD38F80)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetSmashBroCountDown_TypeDefinitionIndex = 79742;

	class LDGetSmashBroCountDown : public ::FlowCanvas::Nodes::PureFunctionNode_1<::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETSMASHBROCOUNTDOWN__CTOR_OFFSET))(this);
		}

		::System::Single Invoke()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETSMASHBROCOUNTDOWN_INVOKE_OFFSET))(this);
		}
	};
}
