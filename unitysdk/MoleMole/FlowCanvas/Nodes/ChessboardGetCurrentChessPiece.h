#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardPureFunctionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDGETCURRENTCHESSPIECE_INVOKE_OFFSET UNITYSDK_OFFSET(0xB824A40)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDGETCURRENTCHESSPIECE__CTOR_OFFSET UNITYSDK_OFFSET(0xB824C60)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardGetCurrentChessPiece_TypeDefinitionIndex = 57471;

	class ChessboardGetCurrentChessPiece : public ::MoleMole::FlowCanvas::ChessboardPureFunctionNode_1<::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDGETCURRENTCHESSPIECE__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDGETCURRENTCHESSPIECE_INVOKE_OFFSET))(this);
		}
	};
}
