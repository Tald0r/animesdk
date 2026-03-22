#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDMUSICBATTLESETSCORE_INVOKE_OFFSET UNITYSDK_OFFSET(0x8AF6320)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMUSICBATTLESETSCORE__CTOR_OFFSET UNITYSDK_OFFSET(0x8AF6520)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDMusicBattleSetScore_TypeDefinitionIndex = 79125;

	class LDMusicBattleSetScore : public ::FlowCanvas::Nodes::CallableActionNode_1<::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMUSICBATTLESETSCORE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Int32 score)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMUSICBATTLESETSCORE_INVOKE_OFFSET))(this, score);
		}
	};
}
