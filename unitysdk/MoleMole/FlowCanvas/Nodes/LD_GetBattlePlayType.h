#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETBATTLEPLAYTYPE_INVOKE_OFFSET UNITYSDK_OFFSET(0xC9CBE80)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETBATTLEPLAYTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0xC9CBFF0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_GetBattlePlayType_TypeDefinitionIndex = 41234;

	class LD_GetBattlePlayType : public ::FlowCanvas::Nodes::PureFunctionNode_1<::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETBATTLEPLAYTYPE__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETBATTLEPLAYTYPE_INVOKE_OFFSET))(this);
		}
	};
}
