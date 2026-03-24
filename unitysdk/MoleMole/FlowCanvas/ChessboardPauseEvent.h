#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardEventNode.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDPAUSEEVENT_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x7A4E970)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDPAUSEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x7A4E9D0)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardPauseEvent_TypeDefinitionIndex = 62419;

	class ChessboardPauseEvent : public ::MoleMole::FlowCanvas::ChessboardEventNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDPAUSEEVENT__CTOR_OFFSET))(this);
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDPAUSEEVENT_GET_EVENTNAME_OFFSET))(this);
		}
	};
}
