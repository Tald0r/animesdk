#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessEntityType.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardPureFunctionNode_2.h"

namespace MoleMole { class ChessEntity; }

#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDGETCHESSENTITYTYPE_INVOKE_OFFSET UNITYSDK_OFFSET(0x6E14640)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDGETCHESSENTITYTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x6E146C0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardGetChessEntityType_TypeDefinitionIndex = 71751;

	class ChessboardGetChessEntityType : public ::MoleMole::FlowCanvas::ChessboardPureFunctionNode_2<::MoleMole::ChessEntityType, ::MoleMole::ChessEntity*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDGETCHESSENTITYTYPE__CTOR_OFFSET))(this);
		}

		::MoleMole::ChessEntityType Invoke(::MoleMole::ChessEntity* entity)
		{
			return ((::MoleMole::ChessEntityType(*)(::PVOID, ::MoleMole::ChessEntity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDGETCHESSENTITYTYPE_INVOKE_OFFSET))(this, entity);
		}
	};
}
