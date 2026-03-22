#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETABYSSDUNGEONCHALLENGECOUNTDOWN_INVOKE_OFFSET UNITYSDK_OFFSET(0xE474F70)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETABYSSDUNGEONCHALLENGECOUNTDOWN__CTOR_OFFSET UNITYSDK_OFFSET(0xE475170)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetAbyssDungeonChallengeCountDown_TypeDefinitionIndex = 62088;

	class LDGetAbyssDungeonChallengeCountDown : public ::FlowCanvas::Nodes::PureFunctionNode_1<::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETABYSSDUNGEONCHALLENGECOUNTDOWN__CTOR_OFFSET))(this);
		}

		::System::Single Invoke()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETABYSSDUNGEONCHALLENGECOUNTDOWN_INVOKE_OFFSET))(this);
		}
	};
}
