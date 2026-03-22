#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5A6771CD0CA2718D;
class Class_5_2169ABC757988FED;
namespace MoleMole::FlowCanvas::Nodes { class ChessboardIconAnimAdditive___c__DisplayClass1_0; }

#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDICONANIMADDITIVE___C__DISPLAYCLASS1_1__CTOR_OFFSET UNITYSDK_OFFSET(0xC20E3A0)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDICONANIMADDITIVE___C__DISPLAYCLASS1_1__INVOKE_B__0_OFFSET UNITYSDK_OFFSET(0xC20E3B0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardIconAnimAdditive___c__DisplayClass1_1_TypeDefinitionIndex = 50872;

	class ChessboardIconAnimAdditive___c__DisplayClass1_1 : public ::System::Object
	{
	public:
		::MoleMole::FlowCanvas::Nodes::ChessboardIconAnimAdditive___c__DisplayClass1_0* CS___8__locals1; // 0x10
		::Class_5_2169ABC757988FED* chessPieceProxy; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDICONANIMADDITIVE___C__DISPLAYCLASS1_1__CTOR_OFFSET))(this);
		}

		::System::Void _Invoke_b__0(::Class_1_5A6771CD0CA2718D* player)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5A6771CD0CA2718D*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDICONANIMADDITIVE___C__DISPLAYCLASS1_1__INVOKE_B__0_OFFSET))(this, player);
		}
	};
}
