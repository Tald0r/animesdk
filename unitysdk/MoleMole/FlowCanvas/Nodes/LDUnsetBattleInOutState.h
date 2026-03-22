#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDUNSETBATTLEINOUTSTATE_INVOKE_OFFSET UNITYSDK_OFFSET(0xC2C9C20)
#define MOLEMOLE_FLOWCANVAS_NODES_LDUNSETBATTLEINOUTSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xC2C9E00)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDUnsetBattleInOutState_TypeDefinitionIndex = 41100;

	class LDUnsetBattleInOutState : public ::FlowCanvas::Nodes::CallableFunctionNode_1<::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDUNSETBATTLEINOUTSTATE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDUNSETBATTLEINOUTSTATE_INVOKE_OFFSET))(this);
		}
	};
}
