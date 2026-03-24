#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode.h"

class Class_5_AF65C3A968E836D2;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDCALLABLEACTIONNODE_GET_CHESSPIECEDATA_OFFSET UNITYSDK_OFFSET(0xD7F9660)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDCALLABLEACTIONNODE_GET_CURRENTCHESSBOARD_OFFSET UNITYSDK_OFFSET(0xD7F9520)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDCALLABLEACTIONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0xD7F97A0)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardCallableActionNode_TypeDefinitionIndex = 74714;

	class ChessboardCallableActionNode : public ::FlowCanvas::Nodes::CallableActionNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDCALLABLEACTIONNODE__CTOR_OFFSET))(this);
		}

		::Class_5_AF65C3A968E836D2* get_CurrentChessboard()
		{
			return ((::Class_5_AF65C3A968E836D2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDCALLABLEACTIONNODE_GET_CURRENTCHESSBOARD_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* get_ChessPieceData()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDCALLABLEACTIONNODE_GET_CHESSPIECEDATA_OFFSET))(this);
		}
	};
}
