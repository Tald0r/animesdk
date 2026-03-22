#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/CustomSetVariableNode_2.h"

namespace MoleMole { class ChessEntity; }

#define MOLEMOLE_CUSTOMSETCHESSENTITYSAVEMAPNODE__CTOR_OFFSET UNITYSDK_OFFSET(0xF18B270)

namespace MoleMole
{
	inline static constexpr unsigned int CustomSetChessEntitySaveMapNode_TypeDefinitionIndex = 61951;

	class CustomSetChessEntitySaveMapNode : public ::MoleMole::FlowCanvas::Nodes::CustomSetVariableNode_2<::MoleMole::ChessEntity*, ::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CUSTOMSETCHESSENTITYSAVEMAPNODE__CTOR_OFFSET))(this);
		}
	};
}
