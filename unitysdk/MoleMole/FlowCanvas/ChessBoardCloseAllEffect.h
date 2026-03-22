#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDCLOSEALLEFFECT_INVOKE_OFFSET UNITYSDK_OFFSET(0x6E0F850)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDCLOSEALLEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x6E0F9A0)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessBoardCloseAllEffect_TypeDefinitionIndex = 48476;

	class ChessBoardCloseAllEffect : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_1<::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDCLOSEALLEFFECT__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDCLOSEALLEFFECT_INVOKE_OFFSET))(this, index);
		}
	};
}
