#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardEventNode_1.h"
#include "unitysdk/MoleMole/Vector2Int.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDMOVEEVENT_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0xC9B97D0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDMOVEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0xC9B9830)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardMoveEvent_TypeDefinitionIndex = 41725;

	class ChessboardMoveEvent : public ::MoleMole::FlowCanvas::ChessboardEventNode_1<::MoleMole::Vector2Int>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDMOVEEVENT__CTOR_OFFSET))(this);
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDMOVEEVENT_GET_EVENTNAME_OFFSET))(this);
		}
	};
}
